source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_60a8 = global i64 0
@global_var_5ff8 = local_unnamed_addr global i64 0
@global_var_788 = local_unnamed_addr global i64 0
@global_var_800 = global i64 0
@global_var_3160 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_317c = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_3199 = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_31b7 = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_31d9 = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_31fb = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_321e = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_3239 = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_3257 = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3274 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_328b = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_32a8 = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_32c6 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_32e5 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_3302 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_3320 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_333e = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3361 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3387 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_33a5 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_33d5 = constant i64 -1688658660658275102
@global_var_60b4 = local_unnamed_addr global i64 0
@global_var_36a6 = constant [11 x i8] c"HelloWorld\00"
@global_var_6098 = local_unnamed_addr global [11 x i8]* @global_var_36a6
@global_var_609c = local_unnamed_addr global i64 429496729600
@global_var_60b8 = local_unnamed_addr global i64 0
@global_var_60c0 = local_unnamed_addr global i64 0
@global_var_3446 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_3469 = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_348a = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_34af = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_34cd = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_34ef = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_3515 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_3537 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_3558 = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_3578 = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_359b = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_35c1 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_35de = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_35ff = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_3622 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_3647 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_3663 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3684 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_3695 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_36b1 = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_36c2 = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_36d3 = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_36e4 = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_36f5 = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_3708 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_3010 = external local_unnamed_addr constant i128
@global_var_3020 = external local_unnamed_addr constant i128
@global_var_3030 = external local_unnamed_addr constant i128
@global_var_3040 = external local_unnamed_addr constant i128
@global_var_3050 = external local_unnamed_addr constant i128
@global_var_3060 = external local_unnamed_addr constant i128
@global_var_3070 = external local_unnamed_addr constant i128
@global_var_3080 = external local_unnamed_addr constant i128
@global_var_3090 = external local_unnamed_addr constant i128
@global_var_30b0 = external local_unnamed_addr constant i128
@global_var_30c0 = external local_unnamed_addr constant i128
@global_var_30d0 = external local_unnamed_addr constant i128
@global_var_30e0 = external local_unnamed_addr constant i128
@global_var_30a0 = external local_unnamed_addr constant i128
@global_var_30f0 = external local_unnamed_addr constant i128
@1 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3719 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @1, i64 0, i64 0)
@global_var_3100 = external local_unnamed_addr constant i128
@global_var_3110 = external local_unnamed_addr constant i128
@global_var_3120 = external local_unnamed_addr constant i128
@global_var_3130 = external local_unnamed_addr constant i128
@global_var_3140 = external local_unnamed_addr constant i128
@global_var_3150 = external local_unnamed_addr constant i128
@2 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\00"
@global_var_3737 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_33fa = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @3, i64 0, i64 0)
@4 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_343b = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @4, i64 0, i64 0)
@5 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_33c5 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @5, i64 0, i64 0)
@global_var_60b0 = local_unnamed_addr global i32 0
@global_var_60b1 = global i32 0
@global_var_37a0 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_60b5 = global i32 0
@global_var_60a4 = local_unnamed_addr global i32 23
@global_var_60c6 = external global i32
@global_var_60a0 = local_unnamed_addr global i32 100
@6 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\00"
@global_var_3755 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @6, i64 0, i64 0)
@7 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\00"
@global_var_3779 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @7, i64 0, i64 0)

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

define i32 @function_1040(i8* %s) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64* @function_1060(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i32 @function_1070(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64* @function_1080(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_1090(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_10a0(i32 %size) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i64* @function_10b0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !14
  ret i64* %0, !insn.addr !14
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
  %3 = call i32 @__libc_start_main(i64 10176, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !21
  %4 = call i64 @__asm_hlt(), !insn.addr !22
  unreachable, !insn.addr !22
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  ret i64 ptrtoint (i64* @global_var_60a8 to i64), !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 0, !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_60a8 to i8*), align 8, !insn.addr !25
  %3 = icmp eq i8 %2, 0, !insn.addr !25
  %4 = icmp eq i1 %3, false, !insn.addr !26
  br i1 %4, label %dec_label_pc_11f8, label %dec_label_pc_11cd, !insn.addr !26

dec_label_pc_11cd:                                ; preds = %dec_label_pc_11c0
  %5 = load i64, i64* @global_var_5ff8, align 8, !insn.addr !27
  %6 = icmp eq i64 %5, 0, !insn.addr !27
  br i1 %6, label %dec_label_pc_11e7, label %dec_label_pc_11db, !insn.addr !28

dec_label_pc_11db:                                ; preds = %dec_label_pc_11cd
  %7 = load i64, i64* inttoptr (i64 24720 to i64*), align 16, !insn.addr !29
  %8 = inttoptr i64 %7 to i64*, !insn.addr !30
  call void @__cxa_finalize(i64* %8), !insn.addr !30
  br label %dec_label_pc_11e7, !insn.addr !30

dec_label_pc_11e7:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* bitcast (i64* @global_var_60a8 to i8*), align 8, !insn.addr !32
  ret i64 %9, !insn.addr !33

dec_label_pc_11f8:                                ; preds = %dec_label_pc_11c0
  ret i64 %1, !insn.addr !34
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
  %2 = and i64 %1, 4294967294, !insn.addr !37
  ret i64 %2, !insn.addr !38
}

define i64 @local_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1220:
  %0 = mul i64 %arg1, 5, !insn.addr !39
  %1 = and i64 %0, 4294967295, !insn.addr !39
  ret i64 %1, !insn.addr !40
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1230:
  %0 = mul i64 %arg1, 3, !insn.addr !41
  %1 = and i64 %0, 4294967295, !insn.addr !41
  ret i64 %1, !insn.addr !42
}

define i64 @address_of_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = inttoptr i64 %arg1 to i32*, !insn.addr !43
  store i32 42, i32* %0, align 4, !insn.addr !43
  ret i64 42, !insn.addr !44
}

define i64 @address_of_array() local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !45
  %3 = and i64 %2, 4294967294, !insn.addr !45
  ret i64 %3, !insn.addr !46
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_1260:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !47
  %xmm2.0.reg2mem = alloca i128, !insn.addr !47
  %1 = load i8, i8* %0
  %stack_var_-1928 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-1928 to i64, !insn.addr !47
  %3 = load i128, i128* @global_var_3010, align 8, !insn.addr !48
  %4 = call i128 @__asm_movdqa(i128 %3), !insn.addr !48
  %5 = load i128, i128* @global_var_3020, align 8, !insn.addr !49
  %6 = call i128 @__asm_movdqa(i128 %5), !insn.addr !49
  %7 = load i128, i128* @global_var_3030, align 8, !insn.addr !50
  %8 = call i128 @__asm_movdqa(i128 %7), !insn.addr !50
  %9 = load i128, i128* @global_var_3040, align 8, !insn.addr !51
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !51
  %11 = load i128, i128* @global_var_3050, align 8, !insn.addr !52
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !52
  %13 = load i128, i128* @global_var_3060, align 8, !insn.addr !53
  %14 = call i128 @__asm_movdqa(i128 %13), !insn.addr !53
  %15 = load i128, i128* @global_var_3070, align 8, !insn.addr !54
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !54
  %17 = load i128, i128* @global_var_3080, align 8, !insn.addr !55
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !55
  %19 = load i128, i128* @global_var_3090, align 8, !insn.addr !56
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !56
  store i128 %4, i128* %xmm2.0.reg2mem, !insn.addr !57
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !57
  br label %dec_label_pc_12c0, !insn.addr !57

dec_label_pc_12c0:                                ; preds = %dec_label_pc_12c0, %dec_label_pc_1260
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %21 = call i64 @__asm_movdqa.1(i128 %xmm2.0.reload), !insn.addr !58
  %22 = add i64 %rax.0.reload, %2
  %23 = add i64 %22, -128, !insn.addr !58
  %24 = sext i64 %21 to i128, !insn.addr !58
  %25 = inttoptr i64 %23 to i128*, !insn.addr !58
  store i128 %24, i128* %25, align 8, !insn.addr !58
  %26 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !59
  %27 = call i128 @__asm_paddb(i128 %26, i128 %6), !insn.addr !60
  %28 = call i64 @__asm_movdqa.1(i128 %27), !insn.addr !61
  %29 = add i64 %22, -112, !insn.addr !61
  %30 = sext i64 %28 to i128, !insn.addr !61
  %31 = inttoptr i64 %29 to i128*, !insn.addr !61
  store i128 %30, i128* %31, align 8, !insn.addr !61
  %32 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !62
  %33 = call i128 @__asm_paddb(i128 %32, i128 %8), !insn.addr !63
  %34 = call i64 @__asm_movdqa.1(i128 %33), !insn.addr !64
  %35 = add i64 %22, -96, !insn.addr !64
  %36 = sext i64 %34 to i128, !insn.addr !64
  %37 = inttoptr i64 %35 to i128*, !insn.addr !64
  store i128 %36, i128* %37, align 8, !insn.addr !64
  %38 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !65
  %39 = call i128 @__asm_paddb(i128 %38, i128 %10), !insn.addr !66
  %40 = call i64 @__asm_movdqa.1(i128 %39), !insn.addr !67
  %41 = add i64 %22, -80, !insn.addr !67
  %42 = sext i64 %40 to i128, !insn.addr !67
  %43 = inttoptr i64 %41 to i128*, !insn.addr !67
  store i128 %42, i128* %43, align 8, !insn.addr !67
  %44 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !68
  %45 = call i128 @__asm_paddb(i128 %44, i128 %12), !insn.addr !69
  %46 = call i64 @__asm_movdqa.1(i128 %45), !insn.addr !70
  %47 = add i64 %22, -64, !insn.addr !70
  %48 = sext i64 %46 to i128, !insn.addr !70
  %49 = inttoptr i64 %47 to i128*, !insn.addr !70
  store i128 %48, i128* %49, align 8, !insn.addr !70
  %50 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !71
  %51 = call i128 @__asm_paddb(i128 %50, i128 %14), !insn.addr !72
  %52 = call i64 @__asm_movdqa.1(i128 %51), !insn.addr !73
  %53 = add i64 %22, -48, !insn.addr !73
  %54 = sext i64 %52 to i128, !insn.addr !73
  %55 = inttoptr i64 %53 to i128*, !insn.addr !73
  store i128 %54, i128* %55, align 8, !insn.addr !73
  %56 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !74
  %57 = call i128 @__asm_paddb(i128 %56, i128 %16), !insn.addr !75
  %58 = call i64 @__asm_movdqa.1(i128 %57), !insn.addr !76
  %59 = add i64 %22, -32, !insn.addr !76
  %60 = sext i64 %58 to i128, !insn.addr !76
  %61 = inttoptr i64 %59 to i128*, !insn.addr !76
  store i128 %60, i128* %61, align 8, !insn.addr !76
  %62 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !77
  %63 = call i128 @__asm_paddb(i128 %62, i128 %18), !insn.addr !78
  %64 = call i64 @__asm_movdqa.1(i128 %63), !insn.addr !79
  %65 = add i64 %22, -16, !insn.addr !79
  %66 = sext i64 %64 to i128, !insn.addr !79
  %67 = inttoptr i64 %65 to i128*, !insn.addr !79
  store i128 %66, i128* %67, align 8, !insn.addr !79
  %68 = add i64 %rax.0.reload, 128, !insn.addr !80
  %69 = call i128 @__asm_pxor(i128 %xmm2.0.reload, i128 %20), !insn.addr !81
  %70 = icmp eq i64 %68, ptrtoint (i64* @global_var_800 to i64), !insn.addr !82
  %71 = icmp eq i1 %70, false, !insn.addr !83
  store i128 %69, i128* %xmm2.0.reg2mem, !insn.addr !83
  store i64 %68, i64* %rax.0.reg2mem, !insn.addr !83
  br i1 %71, label %dec_label_pc_12c0, label %dec_label_pc_133a, !insn.addr !83

dec_label_pc_133a:                                ; preds = %dec_label_pc_12c0
  %72 = sext i8 %1 to i64, !insn.addr !84
  ret i64 %72, !insn.addr !85

; uselistorder directives
  uselistorder i128 %xmm2.0.reload, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %xmm2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @vla_stack(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1350:
  %rax.0.reg2mem = alloca i64, !insn.addr !86
  %rsi.1.reg2mem = alloca i64, !insn.addr !86
  %rcx.2.reg2mem = alloca i64, !insn.addr !86
  %rsi.0.reg2mem = alloca i64, !insn.addr !86
  %xmm0.1.reg2mem = alloca i128, !insn.addr !86
  %rcx.1.reg2mem = alloca i64, !insn.addr !86
  %.reg2mem = alloca i128, !insn.addr !86
  %xmm0.0.reg2mem = alloca i128, !insn.addr !86
  %rdx.0.reg2mem = alloca i64, !insn.addr !86
  %rcx.0.reg2mem = alloca i64, !insn.addr !86
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32
  %1 = add i32 %0, -1001, !insn.addr !86
  %2 = icmp ult i32 %1, -1000, !insn.addr !87
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !88
  br i1 %2, label %dec_label_pc_1472, label %dec_label_pc_1367, !insn.addr !88

dec_label_pc_1367:                                ; preds = %dec_label_pc_1350
  %3 = and i64 %arg1, 4294967295, !insn.addr !89
  %4 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !90
  %5 = mul i64 %3, 4, !insn.addr !91
  %6 = add nuw nsw i64 %5, 15, !insn.addr !91
  %7 = and i64 %6, 34359738352, !insn.addr !92
  %8 = sub i64 %4, %7, !insn.addr !93
  %9 = icmp ult i32 %0, 8, !insn.addr !94
  %10 = icmp eq i1 %9, false, !insn.addr !95
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !95
  br i1 %10, label %dec_label_pc_1392, label %dec_label_pc_1447, !insn.addr !95

dec_label_pc_1392:                                ; preds = %dec_label_pc_1367
  %11 = and i64 %arg1, 4294967288, !insn.addr !96
  %12 = add nsw i64 %11, -8, !insn.addr !97
  %13 = udiv i64 %12, 8, !insn.addr !98
  %14 = add nuw nsw i64 %13, 1, !insn.addr !99
  %15 = icmp eq i64 %12, 0, !insn.addr !100
  br i1 %15, label %dec_label_pc_1473, label %dec_label_pc_13b0, !insn.addr !101

dec_label_pc_13b0:                                ; preds = %dec_label_pc_1392
  %16 = and i64 %14, 4611686018427387902, !insn.addr !102
  %17 = load i128, i128* @global_var_30b0, align 8, !insn.addr !103
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !103
  %19 = load i128, i128* @global_var_30c0, align 8, !insn.addr !104
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !104
  %21 = load i128, i128* @global_var_30d0, align 8, !insn.addr !105
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !105
  %23 = load i128, i128* @global_var_30e0, align 8, !insn.addr !106
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !106
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !107
  store i64 %16, i64* %rdx.0.reg2mem, !insn.addr !107
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_13e0, !insn.addr !107

dec_label_pc_13e0:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_13b0
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %25 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !108
  %26 = call i128 @__asm_paddd(i128 %25, i128 %xmm0.0.reload), !insn.addr !109
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !110
  %28 = call i128 @__asm_paddd(i128 %27, i128 %20), !insn.addr !111
  %29 = call i64 @__asm_movdqa.1(i128 %26), !insn.addr !112
  %30 = mul i64 %rcx.0.reload, 4, !insn.addr !112
  %31 = add i64 %30, %8
  %32 = sext i64 %29 to i128, !insn.addr !112
  %33 = inttoptr i64 %31 to i128*, !insn.addr !112
  store i128 %32, i128* %33, align 8, !insn.addr !112
  %34 = call i64 @__asm_movdqa.1(i128 %28), !insn.addr !113
  %35 = add i64 %31, 16, !insn.addr !113
  %36 = sext i64 %34 to i128, !insn.addr !113
  %37 = inttoptr i64 %35 to i128*, !insn.addr !113
  store i128 %36, i128* %37, align 8, !insn.addr !113
  %38 = call i128 @__asm_movdqa(i128 %26), !insn.addr !114
  %39 = call i128 @__asm_paddd(i128 %38, i128 %22), !insn.addr !115
  %40 = call i128 @__asm_paddd(i128 %26, i128 %24), !insn.addr !116
  %41 = call i64 @__asm_movdqa.1(i128 %39), !insn.addr !117
  %42 = add i64 %31, 32, !insn.addr !117
  %43 = sext i64 %41 to i128, !insn.addr !117
  %44 = inttoptr i64 %42 to i128*, !insn.addr !117
  store i128 %43, i128* %44, align 8, !insn.addr !117
  %45 = call i64 @__asm_movdqa.1(i128 %40), !insn.addr !118
  %46 = add i64 %31, 48, !insn.addr !118
  %47 = sext i64 %45 to i128, !insn.addr !118
  %48 = inttoptr i64 %46 to i128*, !insn.addr !118
  store i128 %47, i128* %48, align 8, !insn.addr !118
  %49 = add i64 %rcx.0.reload, 16, !insn.addr !119
  %50 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %22), !insn.addr !120
  %51 = add i64 %rdx.0.reload, -2, !insn.addr !121
  %52 = icmp eq i64 %51, 0, !insn.addr !121
  %53 = icmp eq i1 %52, false, !insn.addr !122
  store i64 %49, i64* %rcx.0.reg2mem, !insn.addr !122
  store i64 %51, i64* %rdx.0.reg2mem, !insn.addr !122
  store i128 %50, i128* %xmm0.0.reg2mem, !insn.addr !122
  br i1 %53, label %dec_label_pc_13e0, label %dec_label_pc_1421, !insn.addr !122

dec_label_pc_1421:                                ; preds = %dec_label_pc_13e0
  %54 = call i128 @__asm_paddd(i128 %50, i128 %50), !insn.addr !123
  %55 = urem i64 %14, 2
  %56 = icmp eq i64 %55, 0, !insn.addr !124
  store i128 %19, i128* %.reg2mem, !insn.addr !125
  store i64 %49, i64* %rcx.1.reg2mem, !insn.addr !125
  store i128 %54, i128* %xmm0.1.reg2mem, !insn.addr !125
  br i1 %56, label %dec_label_pc_1442, label %dec_label_pc_142b, !insn.addr !125

dec_label_pc_142b:                                ; preds = %dec_label_pc_1473.dec_label_pc_142b_crit_edge, %dec_label_pc_1421
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %.reload = load i128, i128* %.reg2mem, !insn.addr !126
  %57 = call i128 @__asm_movdqa(i128 %.reload), !insn.addr !126
  %58 = call i128 @__asm_paddd(i128 %57, i128 %xmm0.1.reload), !insn.addr !127
  %59 = call i64 @__asm_movdqa.1(i128 %xmm0.1.reload), !insn.addr !128
  %60 = mul i64 %rcx.1.reload, 4, !insn.addr !128
  %61 = add i64 %60, %8
  %62 = sext i64 %59 to i128, !insn.addr !128
  %63 = inttoptr i64 %61 to i128*, !insn.addr !128
  store i128 %62, i128* %63, align 8, !insn.addr !128
  %64 = call i64 @__asm_movdqa.1(i128 %58), !insn.addr !129
  %65 = add i64 %61, 16, !insn.addr !129
  %66 = sext i64 %64 to i128, !insn.addr !129
  %67 = inttoptr i64 %65 to i128*, !insn.addr !129
  store i128 %66, i128* %67, align 8, !insn.addr !129
  br label %dec_label_pc_1442, !insn.addr !129

dec_label_pc_1442:                                ; preds = %dec_label_pc_1473, %dec_label_pc_142b, %dec_label_pc_1421
  %68 = icmp eq i64 %11, %3, !insn.addr !130
  store i64 %11, i64* %rsi.0.reg2mem, !insn.addr !131
  br i1 %68, label %dec_label_pc_145f, label %dec_label_pc_1447, !insn.addr !131

dec_label_pc_1447:                                ; preds = %dec_label_pc_1367, %dec_label_pc_1442
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %69 = mul i64 %rsi.0.reload, 2, !insn.addr !132
  %70 = and i64 %69, 4294967280, !insn.addr !132
  store i64 %70, i64* %rcx.2.reg2mem, !insn.addr !133
  store i64 %rsi.0.reload, i64* %rsi.1.reg2mem, !insn.addr !133
  br label %dec_label_pc_1450, !insn.addr !133

dec_label_pc_1450:                                ; preds = %dec_label_pc_1450, %dec_label_pc_1447
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %71 = trunc i64 %rcx.2.reload to i32, !insn.addr !134
  %72 = mul i64 %rsi.1.reload, 4, !insn.addr !134
  %73 = add i64 %72, %8, !insn.addr !134
  %74 = inttoptr i64 %73 to i32*, !insn.addr !134
  store i32 %71, i32* %74, align 4, !insn.addr !134
  %75 = add i64 %rsi.1.reload, 1, !insn.addr !135
  %76 = add nuw nsw i64 %rcx.2.reload, 2, !insn.addr !136
  %77 = and i64 %76, 4294967295, !insn.addr !136
  %78 = icmp eq i64 %3, %75, !insn.addr !137
  %79 = icmp eq i1 %78, false, !insn.addr !138
  store i64 %77, i64* %rcx.2.reg2mem, !insn.addr !138
  store i64 %75, i64* %rsi.1.reg2mem, !insn.addr !138
  br i1 %79, label %dec_label_pc_1450, label %dec_label_pc_145f, !insn.addr !138

dec_label_pc_145f:                                ; preds = %dec_label_pc_1450, %dec_label_pc_1442
  %80 = icmp slt i32 %0, 0
  %81 = zext i1 %80 to i32, !insn.addr !139
  %82 = add i32 %81, %0, !insn.addr !140
  %83 = ashr i32 %82, 1, !insn.addr !141
  %84 = zext i32 %83 to i64, !insn.addr !141
  %85 = mul i64 %84, 4, !insn.addr !142
  %86 = add i64 %8, %85, !insn.addr !142
  %87 = inttoptr i64 %86 to i32*, !insn.addr !142
  %88 = load i32, i32* %87, align 4, !insn.addr !142
  %89 = zext i32 %88 to i64, !insn.addr !142
  store i64 %89, i64* %rax.0.reg2mem, !insn.addr !143
  br label %dec_label_pc_1472, !insn.addr !143

dec_label_pc_1472:                                ; preds = %dec_label_pc_145f, %dec_label_pc_1350
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !144

dec_label_pc_1473:                                ; preds = %dec_label_pc_1392
  %90 = load i128, i128* @global_var_30a0, align 8, !insn.addr !145
  %91 = call i128 @__asm_movdqa(i128 %90), !insn.addr !145
  %92 = urem i64 %14, 2
  %93 = icmp eq i64 %92, 0, !insn.addr !146
  %94 = icmp eq i1 %93, false, !insn.addr !147
  br i1 %94, label %dec_label_pc_1473.dec_label_pc_142b_crit_edge, label %dec_label_pc_1442, !insn.addr !147

dec_label_pc_1473.dec_label_pc_142b_crit_edge:    ; preds = %dec_label_pc_1473
  %.pre = load i128, i128* @global_var_30c0, align 8
  store i128 %.pre, i128* %.reg2mem
  store i64 0, i64* %rcx.1.reg2mem
  store i128 %91, i128* %xmm0.1.reg2mem
  br label %dec_label_pc_142b

; uselistorder directives
  uselistorder i64 %rcx.2.reload, { 1, 0 }
  uselistorder i128 %50, { 2, 1, 0 }
  uselistorder i128 %26, { 3, 2, 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 2, 0, 1 }
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i32 %0, { 1, 0, 2, 3 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm0.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1447, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1490:
  %rdx.1.reg2mem = alloca i64, !insn.addr !148
  %rcx.1.reg2mem = alloca i64, !insn.addr !148
  %rdx.0.reg2mem = alloca i64, !insn.addr !148
  %rsi.1.reg2mem = alloca i64, !insn.addr !148
  %xmm0.1.reg2mem = alloca i128, !insn.addr !148
  %.reg2mem = alloca i128, !insn.addr !148
  %rsi.0.reg2mem = alloca i64, !insn.addr !148
  %xmm0.0.reg2mem = alloca i128, !insn.addr !148
  %rcx.0.reg2mem = alloca i64, !insn.addr !148
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !148
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_14bc, label %dec_label_pc_1494, !insn.addr !149

dec_label_pc_1494:                                ; preds = %dec_label_pc_1490
  %2 = and i64 %arg1, 4294967295, !insn.addr !150
  %3 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !151
  %4 = mul i64 %2, 4, !insn.addr !152
  %5 = add nuw nsw i64 %4, 15, !insn.addr !152
  %6 = and i64 %5, 34359738352, !insn.addr !153
  %7 = sub i64 %3, %6, !insn.addr !154
  %8 = icmp ult i32 %0, 8, !insn.addr !155
  %9 = icmp eq i1 %8, false, !insn.addr !156
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !156
  br i1 %9, label %dec_label_pc_14c2, label %dec_label_pc_158b, !insn.addr !156

dec_label_pc_14bc:                                ; preds = %dec_label_pc_1490
  ret i64 4294967295, !insn.addr !157

dec_label_pc_14c2:                                ; preds = %dec_label_pc_1494
  %10 = and i64 %arg1, 4294967288, !insn.addr !158
  %11 = add nsw i64 %10, -8, !insn.addr !159
  %12 = udiv i64 %11, 8, !insn.addr !160
  %13 = add nuw nsw i64 %12, 1, !insn.addr !161
  %14 = icmp eq i64 %11, 0, !insn.addr !162
  br i1 %14, label %dec_label_pc_15b0, label %dec_label_pc_14e0, !insn.addr !163

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14c2
  %15 = and i64 %13, 4611686018427387902, !insn.addr !164
  %16 = load i128, i128* @global_var_30b0, align 8, !insn.addr !165
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !165
  %18 = load i128, i128* @global_var_30f0, align 8, !insn.addr !166
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !166
  %20 = load i128, i128* @global_var_30c0, align 8, !insn.addr !167
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !167
  %22 = load i128, i128* @global_var_30d0, align 8, !insn.addr !168
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !168
  store i64 %15, i64* %rcx.0.reg2mem, !insn.addr !169
  store i128 %17, i128* %xmm0.0.reg2mem, !insn.addr !169
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_1510, !insn.addr !169

dec_label_pc_1510:                                ; preds = %dec_label_pc_1510, %dec_label_pc_14e0
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %24 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !170
  %25 = call i128 @__asm_paddd(i128 %24, i128 %xmm0.0.reload), !insn.addr !171
  %26 = call i128 @__asm_paddd(i128 %25, i128 %xmm0.0.reload), !insn.addr !172
  %27 = call i64 @__asm_movdqa.1(i128 %26), !insn.addr !173
  %28 = mul i64 %rsi.0.reload, 4, !insn.addr !173
  %29 = add i64 %28, %7
  %30 = sext i64 %27 to i128, !insn.addr !173
  %31 = inttoptr i64 %29 to i128*, !insn.addr !173
  store i128 %30, i128* %31, align 8, !insn.addr !173
  %32 = call i128 @__asm_paddd(i128 %26, i128 %19), !insn.addr !174
  %33 = call i64 @__asm_movdqa.1(i128 %32), !insn.addr !175
  %34 = add i64 %29, 16, !insn.addr !175
  %35 = sext i64 %33 to i128, !insn.addr !175
  %36 = inttoptr i64 %34 to i128*, !insn.addr !175
  store i128 %35, i128* %36, align 8, !insn.addr !175
  %37 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !176
  %38 = call i128 @__asm_paddd(i128 %37, i128 %21), !insn.addr !177
  %39 = call i128 @__asm_movdqa(i128 %38), !insn.addr !178
  %40 = call i128 @__asm_paddd(i128 %39, i128 %38), !insn.addr !179
  %41 = call i128 @__asm_paddd(i128 %40, i128 %38), !insn.addr !180
  %42 = call i64 @__asm_movdqa.1(i128 %41), !insn.addr !181
  %43 = add i64 %29, 32, !insn.addr !181
  %44 = sext i64 %42 to i128, !insn.addr !181
  %45 = inttoptr i64 %43 to i128*, !insn.addr !181
  store i128 %44, i128* %45, align 8, !insn.addr !181
  %46 = call i128 @__asm_paddd(i128 %41, i128 %19), !insn.addr !182
  %47 = call i64 @__asm_movdqa.1(i128 %46), !insn.addr !183
  %48 = add i64 %29, 48, !insn.addr !183
  %49 = sext i64 %47 to i128, !insn.addr !183
  %50 = inttoptr i64 %48 to i128*, !insn.addr !183
  store i128 %49, i128* %50, align 8, !insn.addr !183
  %51 = add i64 %rsi.0.reload, 16, !insn.addr !184
  %52 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %23), !insn.addr !185
  %53 = add i64 %rcx.0.reload, -2, !insn.addr !186
  %54 = icmp eq i64 %53, 0, !insn.addr !186
  %55 = icmp eq i1 %54, false, !insn.addr !187
  store i64 %53, i64* %rcx.0.reg2mem, !insn.addr !187
  store i128 %52, i128* %xmm0.0.reg2mem, !insn.addr !187
  store i64 %51, i64* %rsi.0.reg2mem, !insn.addr !187
  br i1 %55, label %dec_label_pc_1510, label %dec_label_pc_155d, !insn.addr !187

dec_label_pc_155d:                                ; preds = %dec_label_pc_1510
  %56 = urem i64 %13, 2
  %57 = icmp eq i64 %56, 0, !insn.addr !188
  store i128 %18, i128* %.reg2mem, !insn.addr !189
  store i128 %52, i128* %xmm0.1.reg2mem, !insn.addr !189
  store i64 %51, i64* %rsi.1.reg2mem, !insn.addr !189
  br i1 %57, label %dec_label_pc_1586, label %dec_label_pc_1563, !insn.addr !189

dec_label_pc_1563:                                ; preds = %dec_label_pc_15b0.dec_label_pc_1563_crit_edge, %dec_label_pc_155d
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %.reload = load i128, i128* %.reg2mem, !insn.addr !190
  %58 = call i128 @__asm_movdqa(i128 %xmm0.1.reload), !insn.addr !191
  %59 = call i128 @__asm_paddd(i128 %58, i128 %xmm0.1.reload), !insn.addr !192
  %60 = call i128 @__asm_paddd(i128 %59, i128 %xmm0.1.reload), !insn.addr !193
  %61 = call i128 @__asm_movdqa(i128 %.reload), !insn.addr !190
  %62 = call i128 @__asm_paddd(i128 %61, i128 %60), !insn.addr !194
  %63 = call i64 @__asm_movdqa.1(i128 %60), !insn.addr !195
  %64 = mul i64 %rsi.1.reload, 4, !insn.addr !195
  %65 = add i64 %64, %7
  %66 = sext i64 %63 to i128, !insn.addr !195
  %67 = inttoptr i64 %65 to i128*, !insn.addr !195
  store i128 %66, i128* %67, align 8, !insn.addr !195
  %68 = call i64 @__asm_movdqa.1(i128 %62), !insn.addr !196
  %69 = add i64 %65, 16, !insn.addr !196
  %70 = sext i64 %68 to i128, !insn.addr !196
  %71 = inttoptr i64 %69 to i128*, !insn.addr !196
  store i128 %70, i128* %71, align 8, !insn.addr !196
  br label %dec_label_pc_1586, !insn.addr !196

dec_label_pc_1586:                                ; preds = %dec_label_pc_15b0, %dec_label_pc_1563, %dec_label_pc_155d
  %72 = icmp eq i64 %10, %2, !insn.addr !197
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !198
  br i1 %72, label %dec_label_pc_159f, label %dec_label_pc_158b, !insn.addr !198

dec_label_pc_158b:                                ; preds = %dec_label_pc_1494, %dec_label_pc_1586
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %73 = mul nuw nsw i64 %rdx.0.reload, 3, !insn.addr !199
  %74 = and i64 %73, 4294967288, !insn.addr !199
  store i64 %74, i64* %rcx.1.reg2mem, !insn.addr !200
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !200
  br label %dec_label_pc_1590, !insn.addr !200

dec_label_pc_1590:                                ; preds = %dec_label_pc_1590, %dec_label_pc_158b
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %75 = trunc i64 %rcx.1.reload to i32, !insn.addr !201
  %76 = mul i64 %rdx.1.reload, 4, !insn.addr !201
  %77 = add i64 %76, %7, !insn.addr !201
  %78 = inttoptr i64 %77 to i32*, !insn.addr !201
  store i32 %75, i32* %78, align 4, !insn.addr !201
  %79 = add i64 %rdx.1.reload, 1, !insn.addr !202
  %80 = add nuw nsw i64 %rcx.1.reload, 3, !insn.addr !203
  %81 = and i64 %80, 4294967295, !insn.addr !203
  %82 = icmp eq i64 %2, %79, !insn.addr !204
  %83 = icmp eq i1 %82, false, !insn.addr !205
  store i64 %81, i64* %rcx.1.reg2mem, !insn.addr !205
  store i64 %79, i64* %rdx.1.reg2mem, !insn.addr !205
  br i1 %83, label %dec_label_pc_1590, label %dec_label_pc_159f, !insn.addr !205

dec_label_pc_159f:                                ; preds = %dec_label_pc_1590, %dec_label_pc_1586
  %84 = icmp slt i32 %0, 0
  %85 = zext i1 %84 to i32, !insn.addr !206
  %86 = add i32 %85, %0, !insn.addr !207
  %87 = ashr i32 %86, 1, !insn.addr !208
  %88 = zext i32 %87 to i64, !insn.addr !208
  %89 = mul i64 %88, 4, !insn.addr !209
  %90 = add i64 %7, %89, !insn.addr !209
  %91 = inttoptr i64 %90 to i32*, !insn.addr !209
  %92 = load i32, i32* %91, align 4, !insn.addr !209
  %93 = zext i32 %92 to i64, !insn.addr !209
  ret i64 %93, !insn.addr !210

dec_label_pc_15b0:                                ; preds = %dec_label_pc_14c2
  %94 = load i128, i128* @global_var_30b0, align 8, !insn.addr !211
  %95 = call i128 @__asm_movdqa(i128 %94), !insn.addr !211
  %96 = urem i64 %13, 2
  %97 = icmp eq i64 %96, 0, !insn.addr !212
  %98 = icmp eq i1 %97, false, !insn.addr !213
  br i1 %98, label %dec_label_pc_15b0.dec_label_pc_1563_crit_edge, label %dec_label_pc_1586, !insn.addr !213

dec_label_pc_15b0.dec_label_pc_1563_crit_edge:    ; preds = %dec_label_pc_15b0
  %.pre = load i128, i128* @global_var_30f0, align 8
  store i128 %.pre, i128* %.reg2mem
  store i128 %95, i128* %xmm0.1.reg2mem
  store i64 0, i64* %rsi.1.reg2mem
  br label %dec_label_pc_1563

; uselistorder directives
  uselistorder i64 %rcx.1.reload, { 1, 0 }
  uselistorder i128 %60, { 1, 0 }
  uselistorder i128 %41, { 1, 0 }
  uselistorder i128 %38, { 2, 1, 0 }
  uselistorder i128 %26, { 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 4, 3, 0, 1, 2 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i32 %0, { 1, 0, 2, 3 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm0.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_158b, { 1, 0 }
}

define i64 @stack_alias() local_unnamed_addr {
dec_label_pc_15d0:
  ret i64 20, !insn.addr !214
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_15e0:
  %0 = alloca i8
  %rbx.0.reg2mem = alloca i64, !insn.addr !215
  %xmm2.0.reg2mem = alloca i128, !insn.addr !215
  %1 = load i8, i8* %0
  %stack_var_-2056 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-2056 to i64, !insn.addr !216
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_3719 to i8*)), !insn.addr !217
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3160, i64 0, i64 0), i64 20), !insn.addr !218
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_317c, i64 0, i64 0), i64 10), !insn.addr !219
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3199, i64 0, i64 0), i64 15), !insn.addr !220
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_31b7, i64 0, i64 0), i64 42), !insn.addr !221
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_31d9, i64 0, i64 0), i64 2), !insn.addr !222
  %9 = load i128, i128* @global_var_3010, align 8, !insn.addr !223
  %10 = call i128 @__asm_movdqa(i128 %9), !insn.addr !223
  %11 = load i128, i128* @global_var_3020, align 8, !insn.addr !224
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !224
  %13 = load i128, i128* @global_var_3030, align 8, !insn.addr !225
  %14 = call i128 @__asm_movdqa(i128 %13), !insn.addr !225
  %15 = load i128, i128* @global_var_3040, align 8, !insn.addr !226
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !226
  %17 = load i128, i128* @global_var_3050, align 8, !insn.addr !227
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !227
  %19 = load i128, i128* @global_var_3060, align 8, !insn.addr !228
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !228
  %21 = load i128, i128* @global_var_3070, align 8, !insn.addr !229
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !229
  %23 = load i128, i128* @global_var_3080, align 8, !insn.addr !230
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !230
  %25 = load i128, i128* @global_var_3090, align 8, !insn.addr !231
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !231
  store i128 %10, i128* %xmm2.0.reg2mem, !insn.addr !232
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_16a0, !insn.addr !232

dec_label_pc_16a0:                                ; preds = %dec_label_pc_16a0, %dec_label_pc_15e0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %27 = call i64 @__asm_movdqa.1(i128 %xmm2.0.reload), !insn.addr !233
  %28 = add i64 %rbx.0.reload, %2
  %29 = sext i64 %27 to i128, !insn.addr !233
  %30 = inttoptr i64 %28 to i128*, !insn.addr !233
  store i128 %29, i128* %30, align 8, !insn.addr !233
  %31 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !234
  %32 = call i128 @__asm_paddb(i128 %31, i128 %12), !insn.addr !235
  %33 = call i64 @__asm_movdqa.1(i128 %32), !insn.addr !236
  %34 = add i64 %28, 16, !insn.addr !236
  %35 = sext i64 %33 to i128, !insn.addr !236
  %36 = inttoptr i64 %34 to i128*, !insn.addr !236
  store i128 %35, i128* %36, align 8, !insn.addr !236
  %37 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !237
  %38 = call i128 @__asm_paddb(i128 %37, i128 %14), !insn.addr !238
  %39 = call i64 @__asm_movdqa.1(i128 %38), !insn.addr !239
  %40 = add i64 %28, 32, !insn.addr !239
  %41 = sext i64 %39 to i128, !insn.addr !239
  %42 = inttoptr i64 %40 to i128*, !insn.addr !239
  store i128 %41, i128* %42, align 8, !insn.addr !239
  %43 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !240
  %44 = call i128 @__asm_paddb(i128 %43, i128 %16), !insn.addr !241
  %45 = call i64 @__asm_movdqa.1(i128 %44), !insn.addr !242
  %46 = add i64 %28, 48, !insn.addr !242
  %47 = sext i64 %45 to i128, !insn.addr !242
  %48 = inttoptr i64 %46 to i128*, !insn.addr !242
  store i128 %47, i128* %48, align 8, !insn.addr !242
  %49 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !243
  %50 = call i128 @__asm_paddb(i128 %49, i128 %18), !insn.addr !244
  %51 = call i64 @__asm_movdqa.1(i128 %50), !insn.addr !245
  %52 = add i64 %28, 64, !insn.addr !245
  %53 = sext i64 %51 to i128, !insn.addr !245
  %54 = inttoptr i64 %52 to i128*, !insn.addr !245
  store i128 %53, i128* %54, align 8, !insn.addr !245
  %55 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !246
  %56 = call i128 @__asm_paddb(i128 %55, i128 %20), !insn.addr !247
  %57 = call i64 @__asm_movdqa.1(i128 %56), !insn.addr !248
  %58 = add i64 %28, 80, !insn.addr !248
  %59 = sext i64 %57 to i128, !insn.addr !248
  %60 = inttoptr i64 %58 to i128*, !insn.addr !248
  store i128 %59, i128* %60, align 8, !insn.addr !248
  %61 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !249
  %62 = call i128 @__asm_paddb(i128 %61, i128 %22), !insn.addr !250
  %63 = call i64 @__asm_movdqa.1(i128 %62), !insn.addr !251
  %64 = add i64 %28, 96, !insn.addr !251
  %65 = sext i64 %63 to i128, !insn.addr !251
  %66 = inttoptr i64 %64 to i128*, !insn.addr !251
  store i128 %65, i128* %66, align 8, !insn.addr !251
  %67 = call i128 @__asm_movdqa(i128 %xmm2.0.reload), !insn.addr !252
  %68 = call i128 @__asm_paddb(i128 %67, i128 %24), !insn.addr !253
  %69 = call i64 @__asm_movdqa.1(i128 %68), !insn.addr !254
  %70 = add i64 %28, 112, !insn.addr !254
  %71 = sext i64 %69 to i128, !insn.addr !254
  %72 = inttoptr i64 %70 to i128*, !insn.addr !254
  store i128 %71, i128* %72, align 8, !insn.addr !254
  %73 = add i64 %rbx.0.reload, 128, !insn.addr !255
  %74 = call i128 @__asm_pxor(i128 %xmm2.0.reload, i128 %26), !insn.addr !256
  %75 = icmp eq i64 %73, ptrtoint (i64* @global_var_800 to i64), !insn.addr !257
  %76 = icmp eq i1 %75, false, !insn.addr !258
  store i128 %74, i128* %xmm2.0.reg2mem, !insn.addr !258
  store i64 %73, i64* %rbx.0.reg2mem, !insn.addr !258
  br i1 %76, label %dec_label_pc_16a0, label %dec_label_pc_171a, !insn.addr !258

dec_label_pc_171a:                                ; preds = %dec_label_pc_16a0
  %77 = sext i8 %1 to i64, !insn.addr !259
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_31fb, i64 0, i64 0), i64 %77), !insn.addr !260
  %79 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_321e, i64 0, i64 0), i64 10), !insn.addr !261
  %80 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3239, i64 0, i64 0), i64 15), !insn.addr !262
  %81 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3257, i64 0, i64 0), i64 20), !insn.addr !263
  %82 = sext i32 %81 to i64, !insn.addr !263
  ret i64 %82, !insn.addr !263

; uselistorder directives
  uselistorder i128 %xmm2.0.reload, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %xmm2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* @global_var_3090, { 1, 0 }
  uselistorder i128* @global_var_3080, { 1, 0 }
  uselistorder i128* @global_var_3070, { 1, 0 }
  uselistorder i128* @global_var_3060, { 1, 0 }
  uselistorder i128* @global_var_3050, { 1, 0 }
  uselistorder i128* @global_var_3040, { 1, 0 }
  uselistorder i128* @global_var_3030, { 1, 0 }
  uselistorder i128* @global_var_3020, { 1, 0 }
  uselistorder i128* @global_var_3010, { 1, 0 }
}

define i64 @heap_basic(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1780:
  %rsi.1.reg2mem = alloca i64, !insn.addr !264
  %rdx.1.reg2mem = alloca i64, !insn.addr !264
  %rdx.0.reg2mem = alloca i64, !insn.addr !264
  %rdi.1.reg2mem = alloca i64, !insn.addr !264
  %xmm0.1.reg2mem = alloca i128, !insn.addr !264
  %.reg2mem = alloca i128, !insn.addr !264
  %rdi.0.reg2mem = alloca i64, !insn.addr !264
  %rsi.0.reg2mem = alloca i64, !insn.addr !264
  %xmm0.0.reg2mem = alloca i128, !insn.addr !264
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !265
  %1 = call i64* @malloc(i32 %0), !insn.addr !265
  %2 = icmp eq i64* %1, null, !insn.addr !266
  br i1 %2, label %dec_label_pc_17aa, label %dec_label_pc_1794, !insn.addr !267

dec_label_pc_1794:                                ; preds = %dec_label_pc_1780
  %3 = ptrtoint i64* %1 to i64, !insn.addr !265
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_187f, label %dec_label_pc_179c, !insn.addr !268

dec_label_pc_179c:                                ; preds = %dec_label_pc_1794
  %5 = and i64 %arg1, 4294967295, !insn.addr !269
  %6 = icmp ult i32 %arg1.tr, 8, !insn.addr !270
  %7 = icmp eq i1 %6, false, !insn.addr !271
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !271
  br i1 %7, label %dec_label_pc_17b3, label %dec_label_pc_1867, !insn.addr !271

dec_label_pc_17aa:                                ; preds = %dec_label_pc_1780
  ret i64 4294967295, !insn.addr !272

dec_label_pc_17b3:                                ; preds = %dec_label_pc_179c
  %8 = and i64 %arg1, 4294967288, !insn.addr !273
  %9 = add nsw i64 %8, -8, !insn.addr !274
  %10 = udiv i64 %9, 8, !insn.addr !275
  %11 = add nuw nsw i64 %10, 1, !insn.addr !276
  %12 = icmp eq i64 %9, 0, !insn.addr !277
  br i1 %12, label %dec_label_pc_189a, label %dec_label_pc_17d0, !insn.addr !278

dec_label_pc_17d0:                                ; preds = %dec_label_pc_17b3
  %13 = and i64 %11, 4611686018427387902, !insn.addr !279
  %14 = load i128, i128* @global_var_30b0, align 8, !insn.addr !280
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !280
  %16 = load i128, i128* @global_var_30c0, align 8, !insn.addr !281
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !281
  %18 = load i128, i128* @global_var_30d0, align 8, !insn.addr !282
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !282
  %20 = load i128, i128* @global_var_30e0, align 8, !insn.addr !283
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !283
  store i128 %15, i128* %xmm0.0.reg2mem, !insn.addr !284
  store i64 %13, i64* %rsi.0.reg2mem, !insn.addr !284
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_1800, !insn.addr !284

dec_label_pc_1800:                                ; preds = %dec_label_pc_1800, %dec_label_pc_17d0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %22 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !285
  %23 = call i128 @__asm_paddd(i128 %22, i128 %xmm0.0.reload), !insn.addr !286
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !287
  %25 = call i128 @__asm_paddd(i128 %24, i128 %17), !insn.addr !288
  %26 = call i64 @__asm_movdqu(i128 %23), !insn.addr !289
  %27 = mul i64 %rdi.0.reload, 4, !insn.addr !289
  %28 = add i64 %27, %3
  %29 = sext i64 %26 to i128, !insn.addr !289
  %30 = inttoptr i64 %28 to i128*, !insn.addr !289
  store i128 %29, i128* %30, align 8, !insn.addr !289
  %31 = call i64 @__asm_movdqu(i128 %25), !insn.addr !290
  %32 = add i64 %28, 16, !insn.addr !290
  %33 = sext i64 %31 to i128, !insn.addr !290
  %34 = inttoptr i64 %32 to i128*, !insn.addr !290
  store i128 %33, i128* %34, align 8, !insn.addr !290
  %35 = call i128 @__asm_movdqa(i128 %23), !insn.addr !291
  %36 = call i128 @__asm_paddd(i128 %35, i128 %19), !insn.addr !292
  %37 = call i128 @__asm_paddd(i128 %23, i128 %21), !insn.addr !293
  %38 = call i64 @__asm_movdqu(i128 %36), !insn.addr !294
  %39 = add i64 %28, 32, !insn.addr !294
  %40 = sext i64 %38 to i128, !insn.addr !294
  %41 = inttoptr i64 %39 to i128*, !insn.addr !294
  store i128 %40, i128* %41, align 8, !insn.addr !294
  %42 = call i64 @__asm_movdqu(i128 %37), !insn.addr !295
  %43 = add i64 %28, 48, !insn.addr !295
  %44 = sext i64 %42 to i128, !insn.addr !295
  %45 = inttoptr i64 %43 to i128*, !insn.addr !295
  store i128 %44, i128* %45, align 8, !insn.addr !295
  %46 = add i64 %rdi.0.reload, 16, !insn.addr !296
  %47 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %19), !insn.addr !297
  %48 = add i64 %rsi.0.reload, -2, !insn.addr !298
  %49 = icmp eq i64 %48, 0, !insn.addr !298
  %50 = icmp eq i1 %49, false, !insn.addr !299
  store i128 %47, i128* %xmm0.0.reg2mem, !insn.addr !299
  store i64 %48, i64* %rsi.0.reg2mem, !insn.addr !299
  store i64 %46, i64* %rdi.0.reg2mem, !insn.addr !299
  br i1 %50, label %dec_label_pc_1800, label %dec_label_pc_1841, !insn.addr !299

dec_label_pc_1841:                                ; preds = %dec_label_pc_1800
  %51 = call i128 @__asm_paddd(i128 %47, i128 %47), !insn.addr !300
  %52 = urem i64 %11, 2
  %53 = icmp eq i64 %52, 0, !insn.addr !301
  store i128 %16, i128* %.reg2mem, !insn.addr !302
  store i128 %51, i128* %xmm0.1.reg2mem, !insn.addr !302
  store i64 %46, i64* %rdi.1.reg2mem, !insn.addr !302
  br i1 %53, label %dec_label_pc_1862, label %dec_label_pc_184b, !insn.addr !302

dec_label_pc_184b:                                ; preds = %dec_label_pc_189a.dec_label_pc_184b_crit_edge, %dec_label_pc_1841
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %.reload = load i128, i128* %.reg2mem, !insn.addr !303
  %54 = call i128 @__asm_movdqa(i128 %.reload), !insn.addr !303
  %55 = call i128 @__asm_paddd(i128 %54, i128 %xmm0.1.reload), !insn.addr !304
  %56 = call i64 @__asm_movdqu(i128 %xmm0.1.reload), !insn.addr !305
  %57 = mul i64 %rdi.1.reload, 4, !insn.addr !305
  %58 = add i64 %57, %3
  %59 = sext i64 %56 to i128, !insn.addr !305
  %60 = inttoptr i64 %58 to i128*, !insn.addr !305
  store i128 %59, i128* %60, align 8, !insn.addr !305
  %61 = call i64 @__asm_movdqu(i128 %55), !insn.addr !306
  %62 = add i64 %58, 16, !insn.addr !306
  %63 = sext i64 %61 to i128, !insn.addr !306
  %64 = inttoptr i64 %62 to i128*, !insn.addr !306
  store i128 %63, i128* %64, align 8, !insn.addr !306
  br label %dec_label_pc_1862, !insn.addr !306

dec_label_pc_1862:                                ; preds = %dec_label_pc_189a, %dec_label_pc_184b, %dec_label_pc_1841
  %65 = icmp eq i64 %8, %5, !insn.addr !307
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !308
  br i1 %65, label %dec_label_pc_187f, label %dec_label_pc_1867, !insn.addr !308

dec_label_pc_1867:                                ; preds = %dec_label_pc_179c, %dec_label_pc_1862
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %66 = mul i64 %rdx.0.reload, 2, !insn.addr !309
  %67 = and i64 %66, 4294967280, !insn.addr !309
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !310
  store i64 %67, i64* %rsi.1.reg2mem, !insn.addr !310
  br label %dec_label_pc_1870, !insn.addr !310

dec_label_pc_1870:                                ; preds = %dec_label_pc_1870, %dec_label_pc_1867
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %68 = trunc i64 %rsi.1.reload to i32, !insn.addr !311
  %69 = mul i64 %rdx.1.reload, 4, !insn.addr !311
  %70 = add i64 %69, %3, !insn.addr !311
  %71 = inttoptr i64 %70 to i32*, !insn.addr !311
  store i32 %68, i32* %71, align 4, !insn.addr !311
  %72 = add i64 %rdx.1.reload, 1, !insn.addr !312
  %73 = add nuw nsw i64 %rsi.1.reload, 2, !insn.addr !313
  %74 = and i64 %73, 4294967295, !insn.addr !313
  %75 = icmp eq i64 %5, %72, !insn.addr !314
  %76 = icmp eq i1 %75, false, !insn.addr !315
  store i64 %72, i64* %rdx.1.reg2mem, !insn.addr !315
  store i64 %74, i64* %rsi.1.reg2mem, !insn.addr !315
  br i1 %76, label %dec_label_pc_1870, label %dec_label_pc_187f, !insn.addr !315

dec_label_pc_187f:                                ; preds = %dec_label_pc_1870, %dec_label_pc_1862, %dec_label_pc_1794
  %77 = icmp slt i32 %arg1.tr, 0
  %78 = zext i1 %77 to i32, !insn.addr !316
  %79 = add i32 %78, %arg1.tr, !insn.addr !317
  %80 = ashr i32 %79, 1, !insn.addr !318
  %81 = sext i32 %80 to i64, !insn.addr !319
  %82 = mul i64 %81, 4, !insn.addr !320
  %83 = add i64 %82, %3, !insn.addr !320
  %84 = inttoptr i64 %83 to i32*, !insn.addr !320
  %85 = load i32, i32* %84, align 4, !insn.addr !320
  call void @free(i64* nonnull %1), !insn.addr !321
  %86 = zext i32 %85 to i64, !insn.addr !322
  ret i64 %86, !insn.addr !323

dec_label_pc_189a:                                ; preds = %dec_label_pc_17b3
  %87 = load i128, i128* @global_var_30a0, align 8, !insn.addr !324
  %88 = call i128 @__asm_movdqa(i128 %87), !insn.addr !324
  %89 = urem i64 %11, 2
  %90 = icmp eq i64 %89, 0, !insn.addr !325
  %91 = icmp eq i1 %90, false, !insn.addr !326
  br i1 %91, label %dec_label_pc_189a.dec_label_pc_184b_crit_edge, label %dec_label_pc_1862, !insn.addr !326

dec_label_pc_189a.dec_label_pc_184b_crit_edge:    ; preds = %dec_label_pc_189a
  %.pre = load i128, i128* @global_var_30c0, align 8
  store i128 %.pre, i128* %.reg2mem
  store i128 %88, i128* %xmm0.1.reg2mem
  store i64 0, i64* %rdi.1.reg2mem
  br label %dec_label_pc_184b

; uselistorder directives
  uselistorder i64 %rsi.1.reload, { 1, 0 }
  uselistorder i128 %47, { 2, 1, 0 }
  uselistorder i128 %23, { 2, 3, 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 2, 0, 1 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 4, 3, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm0.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 1, 0, 2 }
  uselistorder i128* @global_var_30a0, { 1, 0 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1867, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b0:
  %0 = alloca i128
  %rbx.3.reg2mem = alloca i64, !insn.addr !327
  %rbx.2.reg2mem = alloca i64, !insn.addr !327
  %rbx.1.reg2mem = alloca i32, !insn.addr !327
  %rdx.0.reg2mem = alloca i64, !insn.addr !327
  %rbx.1.ph.reg2mem = alloca i32, !insn.addr !327
  %rdx.0.ph.reg2mem = alloca i64, !insn.addr !327
  %xmm1.3.reg2mem = alloca i128, !insn.addr !327
  %xmm0.3.reg2mem = alloca i128, !insn.addr !327
  %rbp.2.reg2mem = alloca i64, !insn.addr !327
  %rbx.0.reg2mem = alloca i64, !insn.addr !327
  %xmm1.2.reg2mem = alloca i128, !insn.addr !327
  %xmm0.2.reg2mem = alloca i128, !insn.addr !327
  %rbp.1.reg2mem = alloca i64, !insn.addr !327
  %xmm1.1.reg2mem = alloca i128, !insn.addr !327
  %xmm0.1.reg2mem = alloca i128, !insn.addr !327
  %rdi.0.reg2mem = alloca i64, !insn.addr !327
  %rbp.0.reg2mem = alloca i64, !insn.addr !327
  %xmm1.0.reg2mem = alloca i128, !insn.addr !327
  %xmm0.0.reg2mem = alloca i128, !insn.addr !327
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %3 = trunc i64 %arg1 to i32, !insn.addr !328
  %4 = call i64* @calloc(i32 %3, i32 4), !insn.addr !329
  %5 = icmp eq i64* %4, null, !insn.addr !330
  store i64 4294967295, i64* %rbx.3.reg2mem, !insn.addr !331
  br i1 %5, label %dec_label_pc_1a04, label %dec_label_pc_18c7, !insn.addr !331

dec_label_pc_18c7:                                ; preds = %dec_label_pc_18b0
  %6 = icmp slt i32 %3, 2
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !332
  br i1 %6, label %dec_label_pc_19fc, label %dec_label_pc_18da, !insn.addr !332

dec_label_pc_18da:                                ; preds = %dec_label_pc_18c7
  %7 = and i64 %arg1, 4294967295, !insn.addr !333
  %8 = ptrtoint i64* %4 to i64, !insn.addr !329
  %9 = add nsw i64 %7, -1, !insn.addr !334
  %10 = icmp ult i64 %9, 8, !insn.addr !335
  %11 = icmp eq i1 %10, false, !insn.addr !336
  store i64 1, i64* %rdx.0.ph.reg2mem, !insn.addr !336
  store i32 0, i32* %rbx.1.ph.reg2mem, !insn.addr !336
  br i1 %11, label %dec_label_pc_18fc, label %dec_label_pc_19f0.preheader, !insn.addr !336

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18da
  %12 = and i64 %9, -8, !insn.addr !337
  %13 = add nsw i64 %12, -8, !insn.addr !338
  %14 = udiv i64 %13, 8, !insn.addr !339
  %15 = add nuw nsw i64 %14, 1, !insn.addr !340
  %16 = icmp ult i64 %13, 24, !insn.addr !341
  %17 = icmp eq i1 %16, false, !insn.addr !342
  br i1 %17, label %dec_label_pc_1929, label %dec_label_pc_191d, !insn.addr !342

dec_label_pc_191d:                                ; preds = %dec_label_pc_18fc
  %18 = call i128 @__asm_pxor(i128 %2, i128 %2), !insn.addr !343
  %19 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !344
  store i128 %18, i128* %xmm0.1.reg2mem, !insn.addr !345
  store i128 %19, i128* %xmm1.1.reg2mem, !insn.addr !345
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !345
  br label %dec_label_pc_199a, !insn.addr !345

dec_label_pc_1929:                                ; preds = %dec_label_pc_18fc
  %20 = and i64 %15, 4611686018427387900, !insn.addr !346
  %21 = call i128 @__asm_pxor(i128 %2, i128 %2), !insn.addr !347
  %22 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !348
  store i128 %21, i128* %xmm0.0.reg2mem, !insn.addr !349
  store i128 %22, i128* %xmm1.0.reg2mem, !insn.addr !349
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !349
  store i64 %20, i64* %rdi.0.reg2mem, !insn.addr !349
  br label %dec_label_pc_1940, !insn.addr !349

dec_label_pc_1940:                                ; preds = %dec_label_pc_1940, %dec_label_pc_1929
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %23 = mul i64 %rbp.0.reload, 4, !insn.addr !350
  %24 = add i64 %23, %8
  %25 = add i64 %24, 4, !insn.addr !350
  %26 = inttoptr i64 %25 to i128*, !insn.addr !350
  %27 = load i128, i128* %26, align 8, !insn.addr !350
  %28 = call i128 @__asm_movdqu.2(i128 %27), !insn.addr !350
  %29 = call i128 @__asm_paddd(i128 %28, i128 %xmm0.0.reload), !insn.addr !351
  %30 = add i64 %24, 20, !insn.addr !352
  %31 = inttoptr i64 %30 to i128*, !insn.addr !352
  %32 = load i128, i128* %31, align 8, !insn.addr !352
  %33 = call i128 @__asm_movdqu.2(i128 %32), !insn.addr !352
  %34 = call i128 @__asm_paddd(i128 %33, i128 %xmm1.0.reload), !insn.addr !353
  %35 = add i64 %24, 36, !insn.addr !354
  %36 = inttoptr i64 %35 to i128*, !insn.addr !354
  %37 = load i128, i128* %36, align 8, !insn.addr !354
  %38 = call i128 @__asm_movdqu.2(i128 %37), !insn.addr !354
  %39 = add i64 %24, 52, !insn.addr !355
  %40 = inttoptr i64 %39 to i128*, !insn.addr !355
  %41 = load i128, i128* %40, align 8, !insn.addr !355
  %42 = call i128 @__asm_movdqu.2(i128 %41), !insn.addr !355
  %43 = add i64 %24, 68, !insn.addr !356
  %44 = inttoptr i64 %43 to i128*, !insn.addr !356
  %45 = load i128, i128* %44, align 8, !insn.addr !356
  %46 = call i128 @__asm_movdqu.2(i128 %45), !insn.addr !356
  %47 = call i128 @__asm_paddd(i128 %46, i128 %38), !insn.addr !357
  %48 = call i128 @__asm_paddd(i128 %47, i128 %29), !insn.addr !358
  %49 = add i64 %24, 84, !insn.addr !359
  %50 = inttoptr i64 %49 to i128*, !insn.addr !359
  %51 = load i128, i128* %50, align 8, !insn.addr !359
  %52 = call i128 @__asm_movdqu.2(i128 %51), !insn.addr !359
  %53 = call i128 @__asm_paddd(i128 %52, i128 %42), !insn.addr !360
  %54 = call i128 @__asm_paddd(i128 %53, i128 %34), !insn.addr !361
  %55 = add i64 %24, 100, !insn.addr !362
  %56 = inttoptr i64 %55 to i128*, !insn.addr !362
  %57 = load i128, i128* %56, align 8, !insn.addr !362
  %58 = call i128 @__asm_movdqu.2(i128 %57), !insn.addr !362
  %59 = call i128 @__asm_paddd(i128 %58, i128 %48), !insn.addr !363
  %60 = add i64 %24, 116, !insn.addr !364
  %61 = inttoptr i64 %60 to i128*, !insn.addr !364
  %62 = load i128, i128* %61, align 8, !insn.addr !364
  %63 = call i128 @__asm_movdqu.2(i128 %62), !insn.addr !364
  %64 = call i128 @__asm_paddd(i128 %63, i128 %54), !insn.addr !365
  %65 = add i64 %rbp.0.reload, 32, !insn.addr !366
  %66 = add i64 %rdi.0.reload, -4, !insn.addr !367
  %67 = icmp eq i64 %66, 0, !insn.addr !367
  %68 = icmp eq i1 %67, false, !insn.addr !368
  store i128 %59, i128* %xmm0.0.reg2mem, !insn.addr !368
  store i128 %64, i128* %xmm1.0.reg2mem, !insn.addr !368
  store i64 %65, i64* %rbp.0.reg2mem, !insn.addr !368
  store i64 %66, i64* %rdi.0.reg2mem, !insn.addr !368
  store i128 %59, i128* %xmm0.1.reg2mem, !insn.addr !368
  store i128 %64, i128* %xmm1.1.reg2mem, !insn.addr !368
  store i64 %65, i64* %rbp.1.reg2mem, !insn.addr !368
  br i1 %68, label %dec_label_pc_1940, label %dec_label_pc_199a, !insn.addr !368

dec_label_pc_199a:                                ; preds = %dec_label_pc_1940, %dec_label_pc_191d
  %69 = urem i64 %15, 4, !insn.addr !369
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %xmm1.1.reload = load i128, i128* %xmm1.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %70 = icmp eq i64 %69, 0, !insn.addr !370
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !371
  store i128 %xmm1.1.reload, i128* %xmm1.2.reg2mem, !insn.addr !371
  store i64 %69, i64* %rbx.0.reg2mem, !insn.addr !371
  store i64 %rbp.1.reload, i64* %rbp.2.reg2mem, !insn.addr !371
  store i128 %xmm0.1.reload, i128* %xmm0.3.reg2mem, !insn.addr !371
  store i128 %xmm1.1.reload, i128* %xmm1.3.reg2mem, !insn.addr !371
  br i1 %70, label %dec_label_pc_19c9, label %dec_label_pc_19a0, !insn.addr !371

dec_label_pc_19a0:                                ; preds = %dec_label_pc_199a, %dec_label_pc_19a0
  %rbp.2.reload = load i64, i64* %rbp.2.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %xmm1.2.reload = load i128, i128* %xmm1.2.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %71 = mul i64 %rbp.2.reload, 4, !insn.addr !372
  %72 = or i64 %71, 4, !insn.addr !373
  %73 = add i64 %72, %8
  %74 = inttoptr i64 %73 to i128*, !insn.addr !374
  %75 = load i128, i128* %74, align 8, !insn.addr !374
  %76 = call i128 @__asm_movdqu.2(i128 %75), !insn.addr !374
  %77 = call i128 @__asm_paddd(i128 %xmm0.2.reload, i128 %76), !insn.addr !375
  %78 = add i64 %73, 16, !insn.addr !376
  %79 = inttoptr i64 %78 to i128*, !insn.addr !376
  %80 = load i128, i128* %79, align 8, !insn.addr !376
  %81 = call i128 @__asm_movdqu.2(i128 %80), !insn.addr !376
  %82 = call i128 @__asm_paddd(i128 %xmm1.2.reload, i128 %81), !insn.addr !377
  %83 = add i64 %rbp.2.reload, 8, !insn.addr !378
  %84 = add i64 %rbx.0.reload, -1, !insn.addr !379
  %85 = icmp eq i64 %84, 0, !insn.addr !379
  %86 = icmp eq i1 %85, false, !insn.addr !380
  store i128 %77, i128* %xmm0.2.reg2mem, !insn.addr !380
  store i128 %82, i128* %xmm1.2.reg2mem, !insn.addr !380
  store i64 %84, i64* %rbx.0.reg2mem, !insn.addr !380
  store i64 %83, i64* %rbp.2.reg2mem, !insn.addr !380
  store i128 %77, i128* %xmm0.3.reg2mem, !insn.addr !380
  store i128 %82, i128* %xmm1.3.reg2mem, !insn.addr !380
  br i1 %86, label %dec_label_pc_19a0, label %dec_label_pc_19c9, !insn.addr !380

dec_label_pc_19c9:                                ; preds = %dec_label_pc_19a0, %dec_label_pc_199a
  %xmm1.3.reload = load i128, i128* %xmm1.3.reg2mem
  %xmm0.3.reload = load i128, i128* %xmm0.3.reg2mem
  %87 = call i128 @__asm_paddd(i128 %xmm0.3.reload, i128 %xmm1.3.reload), !insn.addr !381
  %88 = call i128 @__asm_pshufd(i128 %87, i8 -18), !insn.addr !382
  %89 = call i128 @__asm_paddd(i128 %88, i128 %87), !insn.addr !383
  %90 = call i128 @__asm_pshufd(i128 %89, i8 85), !insn.addr !384
  %91 = call i128 @__asm_paddd(i128 %90, i128 %89), !insn.addr !385
  %92 = call i32 @__asm_movd(i128 %91), !insn.addr !386
  %93 = sext i32 %92 to i64, !insn.addr !386
  %94 = icmp eq i64 %9, %12, !insn.addr !387
  store i64 %93, i64* %rbx.2.reg2mem, !insn.addr !388
  br i1 %94, label %dec_label_pc_19fc, label %dec_label_pc_19e8, !insn.addr !388

dec_label_pc_19e8:                                ; preds = %dec_label_pc_19c9
  %95 = or i64 %12, 1, !insn.addr !389
  store i64 %95, i64* %rdx.0.ph.reg2mem, !insn.addr !390
  store i32 %92, i32* %rbx.1.ph.reg2mem, !insn.addr !390
  br label %dec_label_pc_19f0.preheader, !insn.addr !390

dec_label_pc_19f0.preheader:                      ; preds = %dec_label_pc_19e8, %dec_label_pc_18da
  %rbx.1.ph.reload = load i32, i32* %rbx.1.ph.reg2mem
  %rdx.0.ph.reload = load i64, i64* %rdx.0.ph.reg2mem
  store i64 %rdx.0.ph.reload, i64* %rdx.0.reg2mem
  store i32 %rbx.1.ph.reload, i32* %rbx.1.reg2mem
  br label %dec_label_pc_19f0

dec_label_pc_19f0:                                ; preds = %dec_label_pc_19f0.preheader, %dec_label_pc_19f0
  %rbx.1.reload = load i32, i32* %rbx.1.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %96 = mul i64 %rdx.0.reload, 4, !insn.addr !391
  %97 = add i64 %96, %8, !insn.addr !391
  %98 = inttoptr i64 %97 to i32*, !insn.addr !391
  %99 = load i32, i32* %98, align 4, !insn.addr !391
  %100 = add i32 %99, %rbx.1.reload, !insn.addr !391
  %101 = add i64 %rdx.0.reload, 1, !insn.addr !392
  %102 = icmp eq i64 %7, %101, !insn.addr !393
  %103 = icmp eq i1 %102, false, !insn.addr !394
  store i64 %101, i64* %rdx.0.reg2mem, !insn.addr !394
  store i32 %100, i32* %rbx.1.reg2mem, !insn.addr !394
  br i1 %103, label %dec_label_pc_19f0, label %dec_label_pc_19fc.loopexit, !insn.addr !394

dec_label_pc_19fc.loopexit:                       ; preds = %dec_label_pc_19f0
  %104 = zext i32 %100 to i64, !insn.addr !391
  store i64 %104, i64* %rbx.2.reg2mem
  br label %dec_label_pc_19fc

dec_label_pc_19fc:                                ; preds = %dec_label_pc_19fc.loopexit, %dec_label_pc_19c9, %dec_label_pc_18c7
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  call void @free(i64* nonnull %4), !insn.addr !395
  store i64 %rbx.2.reload, i64* %rbx.3.reg2mem, !insn.addr !395
  br label %dec_label_pc_1a04, !insn.addr !395

dec_label_pc_1a04:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_19fc
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %105 = and i64 %rbx.3.reload, 4294967295, !insn.addr !396
  ret i64 %105, !insn.addr !397

; uselistorder directives
  uselistorder i32 %100, { 1, 0 }
  uselistorder i128 %89, { 1, 0 }
  uselistorder i128 %87, { 1, 0 }
  uselistorder i64 %13, { 1, 0 }
  uselistorder i64 %12, { 1, 0, 2 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %4, { 0, 2, 1 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.2.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm1.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbp.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 0, 2, 1 }
  uselistorder i128* %0, { 1, 0 }
  uselistorder label %dec_label_pc_1a04, { 1, 0 }
  uselistorder label %dec_label_pc_19f0, { 1, 0 }
  uselistorder label %dec_label_pc_19a0, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_1a10:
  %rbp.1.reg2mem = alloca i64, !insn.addr !398
  %rbp.0.reg2mem = alloca i64, !insn.addr !398
  %rbx.0.reg2mem = alloca i64, !insn.addr !398
  %0 = call i64* @malloc(i32 20), !insn.addr !399
  %1 = icmp eq i64* %0, null, !insn.addr !400
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !401
  br i1 %1, label %dec_label_pc_1a84, label %dec_label_pc_1a22, !insn.addr !401

dec_label_pc_1a22:                                ; preds = %dec_label_pc_1a10
  %2 = ptrtoint i64* %0 to i64, !insn.addr !399
  %3 = load i128, i128* @global_var_3100, align 8, !insn.addr !402
  %4 = call i128 @__asm_movaps(i128 %3), !insn.addr !402
  %5 = bitcast i64* %0 to i128*, !insn.addr !403
  %6 = load i128, i128* %5, align 8, !insn.addr !403
  call void @__asm_movups(i128 %6, i128 %4), !insn.addr !403
  %7 = add i64 %2, 16, !insn.addr !404
  %8 = inttoptr i64 %7 to i32*, !insn.addr !404
  store i32 5, i32* %8, align 4, !insn.addr !404
  %9 = call i64* @realloc(i64* nonnull %0, i32 40), !insn.addr !405
  %10 = icmp eq i64* %9, null, !insn.addr !406
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !407
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !407
  br i1 %10, label %dec_label_pc_1a7c, label %dec_label_pc_1a48, !insn.addr !407

dec_label_pc_1a48:                                ; preds = %dec_label_pc_1a22
  %11 = ptrtoint i64* %9 to i64, !insn.addr !405
  %12 = load i128, i128* @global_var_3110, align 8, !insn.addr !408
  %13 = call i128 @__asm_movaps(i128 %12), !insn.addr !408
  %14 = add i64 %11, 20, !insn.addr !409
  %15 = inttoptr i64 %14 to i128*, !insn.addr !409
  %16 = load i128, i128* %15, align 8, !insn.addr !409
  call void @__asm_movups(i128 %16, i128 %13), !insn.addr !409
  %17 = add i64 %11, 36, !insn.addr !410
  %18 = inttoptr i64 %17 to i32*, !insn.addr !410
  store i32 90, i32* %18, align 4, !insn.addr !410
  %19 = add i64 %11, 8, !insn.addr !411
  %20 = inttoptr i64 %19 to i32*, !insn.addr !411
  %21 = load i32, i32* %20, align 4, !insn.addr !411
  %22 = icmp eq i32 %21, 3, !insn.addr !411
  %23 = select i1 %22, i64 50, i64 4294967293, !insn.addr !412
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !413
  store i64 %23, i64* %rbp.0.reg2mem, !insn.addr !413
  br label %dec_label_pc_1a7c, !insn.addr !413

dec_label_pc_1a7c:                                ; preds = %dec_label_pc_1a22, %dec_label_pc_1a48
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %24 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !414
  call void @free(i64* %24), !insn.addr !414
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !414
  br label %dec_label_pc_1a84, !insn.addr !414

dec_label_pc_1a84:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_1a7c
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %25 = and i64 %rbp.1.reload, 4294967295, !insn.addr !415
  ret i64 %25, !insn.addr !416

; uselistorder directives
  uselistorder i64 %11, { 0, 1, 3, 2 }
  uselistorder i64* %9, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a84, { 1, 0 }
  uselistorder label %dec_label_pc_1a7c, { 1, 0 }
}

define i64 @heap_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a90:
  %rsi.1.reg2mem = alloca i64, !insn.addr !417
  %rdx.1.reg2mem = alloca i64, !insn.addr !417
  %rdx.0.reg2mem = alloca i64, !insn.addr !417
  %rdi.1.reg2mem = alloca i64, !insn.addr !417
  %xmm0.1.reg2mem = alloca i128, !insn.addr !417
  %.reg2mem = alloca i128, !insn.addr !417
  %rdi.0.reg2mem = alloca i64, !insn.addr !417
  %rsi.0.reg2mem = alloca i64, !insn.addr !417
  %xmm0.0.reg2mem = alloca i128, !insn.addr !417
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !418
  %1 = call i64* @malloc(i32 %0), !insn.addr !418
  %2 = icmp eq i64* %1, null, !insn.addr !419
  br i1 %2, label %dec_label_pc_1aba, label %dec_label_pc_1aa4, !insn.addr !420

dec_label_pc_1aa4:                                ; preds = %dec_label_pc_1a90
  %3 = ptrtoint i64* %1 to i64, !insn.addr !418
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_1b9f, label %dec_label_pc_1aac, !insn.addr !421

dec_label_pc_1aac:                                ; preds = %dec_label_pc_1aa4
  %5 = and i64 %arg1, 4294967295, !insn.addr !422
  %6 = icmp ult i32 %arg1.tr, 8, !insn.addr !423
  %7 = icmp eq i1 %6, false, !insn.addr !424
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !424
  br i1 %7, label %dec_label_pc_1ac3, label %dec_label_pc_1b8b, !insn.addr !424

dec_label_pc_1aba:                                ; preds = %dec_label_pc_1a90
  ret i64 4294967295, !insn.addr !425

dec_label_pc_1ac3:                                ; preds = %dec_label_pc_1aac
  %8 = and i64 %arg1, 4294967288, !insn.addr !426
  %9 = add nsw i64 %8, -8, !insn.addr !427
  %10 = udiv i64 %9, 8, !insn.addr !428
  %11 = add nuw nsw i64 %10, 1, !insn.addr !429
  %12 = icmp eq i64 %9, 0, !insn.addr !430
  br i1 %12, label %dec_label_pc_1bba, label %dec_label_pc_1ae0, !insn.addr !431

dec_label_pc_1ae0:                                ; preds = %dec_label_pc_1ac3
  %13 = and i64 %11, 4611686018427387902, !insn.addr !432
  %14 = load i128, i128* @global_var_30b0, align 8, !insn.addr !433
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !433
  %16 = load i128, i128* @global_var_30f0, align 8, !insn.addr !434
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !434
  %18 = load i128, i128* @global_var_30c0, align 8, !insn.addr !435
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !435
  %20 = load i128, i128* @global_var_30d0, align 8, !insn.addr !436
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !436
  store i128 %15, i128* %xmm0.0.reg2mem, !insn.addr !437
  store i64 %13, i64* %rsi.0.reg2mem, !insn.addr !437
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_1b10, !insn.addr !437

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1ae0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %22 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !438
  %23 = call i128 @__asm_paddd(i128 %22, i128 %xmm0.0.reload), !insn.addr !439
  %24 = call i128 @__asm_paddd(i128 %23, i128 %xmm0.0.reload), !insn.addr !440
  %25 = call i64 @__asm_movdqu(i128 %24), !insn.addr !441
  %26 = mul i64 %rdi.0.reload, 4, !insn.addr !441
  %27 = add i64 %26, %3
  %28 = sext i64 %25 to i128, !insn.addr !441
  %29 = inttoptr i64 %27 to i128*, !insn.addr !441
  store i128 %28, i128* %29, align 8, !insn.addr !441
  %30 = call i128 @__asm_paddd(i128 %24, i128 %17), !insn.addr !442
  %31 = call i64 @__asm_movdqu(i128 %30), !insn.addr !443
  %32 = add i64 %27, 16, !insn.addr !443
  %33 = sext i64 %31 to i128, !insn.addr !443
  %34 = inttoptr i64 %32 to i128*, !insn.addr !443
  store i128 %33, i128* %34, align 8, !insn.addr !443
  %35 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !444
  %36 = call i128 @__asm_paddd(i128 %35, i128 %19), !insn.addr !445
  %37 = call i128 @__asm_movdqa(i128 %36), !insn.addr !446
  %38 = call i128 @__asm_paddd(i128 %37, i128 %36), !insn.addr !447
  %39 = call i128 @__asm_paddd(i128 %38, i128 %36), !insn.addr !448
  %40 = call i64 @__asm_movdqu(i128 %39), !insn.addr !449
  %41 = add i64 %27, 32, !insn.addr !449
  %42 = sext i64 %40 to i128, !insn.addr !449
  %43 = inttoptr i64 %41 to i128*, !insn.addr !449
  store i128 %42, i128* %43, align 8, !insn.addr !449
  %44 = call i128 @__asm_paddd(i128 %39, i128 %17), !insn.addr !450
  %45 = call i64 @__asm_movdqu(i128 %44), !insn.addr !451
  %46 = add i64 %27, 48, !insn.addr !451
  %47 = sext i64 %45 to i128, !insn.addr !451
  %48 = inttoptr i64 %46 to i128*, !insn.addr !451
  store i128 %47, i128* %48, align 8, !insn.addr !451
  %49 = add i64 %rdi.0.reload, 16, !insn.addr !452
  %50 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %21), !insn.addr !453
  %51 = add i64 %rsi.0.reload, -2, !insn.addr !454
  %52 = icmp eq i64 %51, 0, !insn.addr !454
  %53 = icmp eq i1 %52, false, !insn.addr !455
  store i128 %50, i128* %xmm0.0.reg2mem, !insn.addr !455
  store i64 %51, i64* %rsi.0.reg2mem, !insn.addr !455
  store i64 %49, i64* %rdi.0.reg2mem, !insn.addr !455
  br i1 %53, label %dec_label_pc_1b10, label %dec_label_pc_1b5d, !insn.addr !455

dec_label_pc_1b5d:                                ; preds = %dec_label_pc_1b10
  %54 = urem i64 %11, 2
  %55 = icmp eq i64 %54, 0, !insn.addr !456
  store i128 %16, i128* %.reg2mem, !insn.addr !457
  store i128 %50, i128* %xmm0.1.reg2mem, !insn.addr !457
  store i64 %49, i64* %rdi.1.reg2mem, !insn.addr !457
  br i1 %55, label %dec_label_pc_1b86, label %dec_label_pc_1b63, !insn.addr !457

dec_label_pc_1b63:                                ; preds = %dec_label_pc_1bba.dec_label_pc_1b63_crit_edge, %dec_label_pc_1b5d
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %.reload = load i128, i128* %.reg2mem, !insn.addr !458
  %56 = call i128 @__asm_movdqa(i128 %xmm0.1.reload), !insn.addr !459
  %57 = call i128 @__asm_paddd(i128 %56, i128 %xmm0.1.reload), !insn.addr !460
  %58 = call i128 @__asm_paddd(i128 %57, i128 %xmm0.1.reload), !insn.addr !461
  %59 = call i128 @__asm_movdqa(i128 %.reload), !insn.addr !458
  %60 = call i128 @__asm_paddd(i128 %59, i128 %58), !insn.addr !462
  %61 = call i64 @__asm_movdqu(i128 %58), !insn.addr !463
  %62 = mul i64 %rdi.1.reload, 4, !insn.addr !463
  %63 = add i64 %62, %3
  %64 = sext i64 %61 to i128, !insn.addr !463
  %65 = inttoptr i64 %63 to i128*, !insn.addr !463
  store i128 %64, i128* %65, align 8, !insn.addr !463
  %66 = call i64 @__asm_movdqu(i128 %60), !insn.addr !464
  %67 = add i64 %63, 16, !insn.addr !464
  %68 = sext i64 %66 to i128, !insn.addr !464
  %69 = inttoptr i64 %67 to i128*, !insn.addr !464
  store i128 %68, i128* %69, align 8, !insn.addr !464
  br label %dec_label_pc_1b86, !insn.addr !464

dec_label_pc_1b86:                                ; preds = %dec_label_pc_1bba, %dec_label_pc_1b63, %dec_label_pc_1b5d
  %70 = icmp eq i64 %8, %5, !insn.addr !465
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !466
  br i1 %70, label %dec_label_pc_1b9f, label %dec_label_pc_1b8b, !insn.addr !466

dec_label_pc_1b8b:                                ; preds = %dec_label_pc_1aac, %dec_label_pc_1b86
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %71 = mul nuw nsw i64 %rdx.0.reload, 3, !insn.addr !467
  %72 = and i64 %71, 4294967288, !insn.addr !467
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !468
  store i64 %72, i64* %rsi.1.reg2mem, !insn.addr !468
  br label %dec_label_pc_1b90, !insn.addr !468

dec_label_pc_1b90:                                ; preds = %dec_label_pc_1b90, %dec_label_pc_1b8b
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %73 = trunc i64 %rsi.1.reload to i32, !insn.addr !469
  %74 = mul i64 %rdx.1.reload, 4, !insn.addr !469
  %75 = add i64 %74, %3, !insn.addr !469
  %76 = inttoptr i64 %75 to i32*, !insn.addr !469
  store i32 %73, i32* %76, align 4, !insn.addr !469
  %77 = add i64 %rdx.1.reload, 1, !insn.addr !470
  %78 = add nuw nsw i64 %rsi.1.reload, 3, !insn.addr !471
  %79 = and i64 %78, 4294967295, !insn.addr !471
  %80 = icmp eq i64 %5, %77, !insn.addr !472
  %81 = icmp eq i1 %80, false, !insn.addr !473
  store i64 %77, i64* %rdx.1.reg2mem, !insn.addr !473
  store i64 %79, i64* %rsi.1.reg2mem, !insn.addr !473
  br i1 %81, label %dec_label_pc_1b90, label %dec_label_pc_1b9f, !insn.addr !473

dec_label_pc_1b9f:                                ; preds = %dec_label_pc_1b90, %dec_label_pc_1b86, %dec_label_pc_1aa4
  %82 = icmp slt i32 %arg1.tr, 0
  %83 = zext i1 %82 to i32, !insn.addr !474
  %84 = add i32 %83, %arg1.tr, !insn.addr !475
  %85 = ashr i32 %84, 1, !insn.addr !476
  %86 = sext i32 %85 to i64, !insn.addr !477
  %87 = mul i64 %86, 4, !insn.addr !478
  %88 = add i64 %87, %3, !insn.addr !478
  %89 = inttoptr i64 %88 to i32*, !insn.addr !478
  %90 = load i32, i32* %89, align 4, !insn.addr !478
  call void @free(i64* nonnull %1), !insn.addr !479
  %91 = zext i32 %90 to i64, !insn.addr !480
  ret i64 %91, !insn.addr !481

dec_label_pc_1bba:                                ; preds = %dec_label_pc_1ac3
  %92 = load i128, i128* @global_var_30b0, align 8, !insn.addr !482
  %93 = call i128 @__asm_movdqa(i128 %92), !insn.addr !482
  %94 = urem i64 %11, 2
  %95 = icmp eq i64 %94, 0, !insn.addr !483
  %96 = icmp eq i1 %95, false, !insn.addr !484
  br i1 %96, label %dec_label_pc_1bba.dec_label_pc_1b63_crit_edge, label %dec_label_pc_1b86, !insn.addr !484

dec_label_pc_1bba.dec_label_pc_1b63_crit_edge:    ; preds = %dec_label_pc_1bba
  %.pre = load i128, i128* @global_var_30f0, align 8
  store i128 %.pre, i128* %.reg2mem
  store i128 %93, i128* %xmm0.1.reg2mem
  store i64 0, i64* %rdi.1.reg2mem
  br label %dec_label_pc_1b63

; uselistorder directives
  uselistorder i64 %rsi.1.reload, { 1, 0 }
  uselistorder i128 %58, { 1, 0 }
  uselistorder i128 %39, { 1, 0 }
  uselistorder i128 %36, { 2, 1, 0 }
  uselistorder i128 %24, { 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 4, 3, 0, 1, 2 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i32 %arg1.tr, { 2, 1, 4, 3, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm0.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1b8b, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = mul i64 %arg1, 3, !insn.addr !485
  %1 = and i64 %0, 4294967295, !insn.addr !485
  ret i64 %1, !insn.addr !486
}

define i64 @heap_nested(i64 %arg1) local_unnamed_addr {
dec_label_pc_1be0:
  %0 = call i64* @malloc(i32 16), !insn.addr !487
  %1 = ptrtoint i64* %0 to i64, !insn.addr !487
  %2 = inttoptr i64 %arg1 to i64*, !insn.addr !488
  store i64 %1, i64* %2, align 8, !insn.addr !488
  %3 = icmp eq i64* %0, null, !insn.addr !489
  br i1 %3, label %dec_label_pc_1c2d, label %dec_label_pc_1bf9, !insn.addr !490

dec_label_pc_1bf9:                                ; preds = %dec_label_pc_1be0
  %4 = bitcast i64* %0 to i32*, !insn.addr !491
  store i32 10, i32* %4, align 4, !insn.addr !491
  %5 = call i64* @malloc(i32 16), !insn.addr !492
  %6 = ptrtoint i64* %5 to i64, !insn.addr !492
  %7 = add i64 %1, 8, !insn.addr !493
  %8 = inttoptr i64 %7 to i64*, !insn.addr !493
  store i64 %6, i64* %8, align 8, !insn.addr !493
  %9 = icmp eq i64* %5, null, !insn.addr !494
  br i1 %9, label %dec_label_pc_1c3a, label %dec_label_pc_1c15, !insn.addr !495

dec_label_pc_1c15:                                ; preds = %dec_label_pc_1bf9
  %10 = bitcast i64* %5 to i32*, !insn.addr !496
  store i32 20, i32* %10, align 4, !insn.addr !496
  %11 = add i64 %6, 8, !insn.addr !497
  %12 = inttoptr i64 %11 to i64*, !insn.addr !497
  store i64 0, i64* %12, align 8, !insn.addr !497
  ret i64 0, !insn.addr !498

dec_label_pc_1c2d:                                ; preds = %dec_label_pc_1be0
  ret i64 4294967295, !insn.addr !499

dec_label_pc_1c3a:                                ; preds = %dec_label_pc_1bf9
  call void @free(i64* nonnull %0), !insn.addr !500
  ret i64 4294967294, !insn.addr !501
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1c50:
  %r12.1.reg2mem = alloca i64, !insn.addr !502
  %rbx.3.reg2mem = alloca i64, !insn.addr !502
  %rbx.2.reg2mem = alloca i64, !insn.addr !502
  %rbx.1.reg2mem = alloca i64, !insn.addr !502
  %rbx.0.reg2mem = alloca i64, !insn.addr !502
  %r12.0.reg2mem = alloca i32, !insn.addr !502
  %rax.0.reg2mem = alloca i64, !insn.addr !502
  %0 = call i64* @malloc(i32 16), !insn.addr !503
  %1 = icmp eq i64* %0, null, !insn.addr !504
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !505
  br i1 %1, label %dec_label_pc_1dae, label %dec_label_pc_1c71, !insn.addr !505

dec_label_pc_1c71:                                ; preds = %dec_label_pc_1c50
  %2 = bitcast i64* %0 to i32*, !insn.addr !506
  store i32 0, i32* %2, align 4, !insn.addr !506
  %3 = call i64* @malloc(i32 16), !insn.addr !507
  %4 = icmp eq i64* %3, null, !insn.addr !508
  br i1 %4, label %dec_label_pc_1da6, label %dec_label_pc_1c8d, !insn.addr !509

dec_label_pc_1c8d:                                ; preds = %dec_label_pc_1c71
  %5 = ptrtoint i64* %0 to i64, !insn.addr !503
  %6 = ptrtoint i64* %3 to i64, !insn.addr !507
  %7 = bitcast i64* %3 to i32*, !insn.addr !510
  store i32 10, i32* %7, align 4, !insn.addr !510
  %8 = add i64 %6, 8, !insn.addr !511
  %9 = inttoptr i64 %8 to i64*, !insn.addr !511
  store i64 0, i64* %9, align 8, !insn.addr !511
  %10 = add i64 %5, 8, !insn.addr !512
  %11 = inttoptr i64 %10 to i64*, !insn.addr !512
  store i64 %6, i64* %11, align 8, !insn.addr !512
  %12 = call i64* @malloc(i32 16), !insn.addr !513
  %13 = icmp eq i64* %12, null, !insn.addr !514
  store i64 %5, i64* %rbx.1.reg2mem, !insn.addr !515
  br i1 %13, label %dec_label_pc_1d50, label %dec_label_pc_1cb5, !insn.addr !515

dec_label_pc_1cb5:                                ; preds = %dec_label_pc_1c8d
  %14 = ptrtoint i64* %12 to i64, !insn.addr !513
  %15 = bitcast i64* %12 to i32*, !insn.addr !516
  store i32 20, i32* %15, align 4, !insn.addr !516
  %16 = add i64 %14, 8, !insn.addr !517
  %17 = inttoptr i64 %16 to i64*, !insn.addr !517
  store i64 0, i64* %17, align 8, !insn.addr !517
  store i64 %14, i64* %9, align 8, !insn.addr !518
  %18 = call i64* @malloc(i32 16), !insn.addr !519
  %19 = icmp eq i64* %18, null, !insn.addr !520
  store i64 %5, i64* %rbx.2.reg2mem, !insn.addr !521
  br i1 %19, label %dec_label_pc_1d70, label %dec_label_pc_1cdd, !insn.addr !521

dec_label_pc_1cdd:                                ; preds = %dec_label_pc_1cb5
  %20 = ptrtoint i64* %18 to i64, !insn.addr !519
  %21 = bitcast i64* %18 to i32*, !insn.addr !522
  store i32 30, i32* %21, align 4, !insn.addr !522
  %22 = add i64 %20, 8, !insn.addr !523
  %23 = inttoptr i64 %22 to i64*, !insn.addr !523
  store i64 0, i64* %23, align 8, !insn.addr !523
  store i64 %20, i64* %17, align 8, !insn.addr !524
  %24 = call i64* @malloc(i32 16), !insn.addr !525
  %25 = icmp eq i64* %24, null, !insn.addr !526
  store i64 %5, i64* %rbx.3.reg2mem, !insn.addr !527
  br i1 %25, label %dec_label_pc_1d90, label %dec_label_pc_1d05, !insn.addr !527

dec_label_pc_1d05:                                ; preds = %dec_label_pc_1cdd
  %26 = ptrtoint i64* %24 to i64, !insn.addr !525
  %27 = bitcast i64* %24 to i32*, !insn.addr !528
  store i32 40, i32* %27, align 4, !insn.addr !528
  %28 = add i64 %26, 8, !insn.addr !529
  %29 = inttoptr i64 %28 to i64*, !insn.addr !529
  store i64 0, i64* %29, align 8, !insn.addr !529
  store i64 %26, i64* %23, align 8, !insn.addr !530
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !531
  store i32 0, i32* %r12.0.reg2mem, !insn.addr !531
  br label %dec_label_pc_1d20, !insn.addr !531

dec_label_pc_1d20:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1d05
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %30 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !532
  %31 = load i32, i32* %30, align 4, !insn.addr !532
  %32 = add i32 %31, %r12.0.reload, !insn.addr !532
  %33 = add i64 %rax.0.reload, 8, !insn.addr !533
  %34 = inttoptr i64 %33 to i64*, !insn.addr !533
  %35 = load i64, i64* %34, align 8, !insn.addr !533
  %36 = icmp eq i64 %35, 0, !insn.addr !534
  %37 = icmp eq i1 %36, false, !insn.addr !535
  store i64 %35, i64* %rax.0.reg2mem, !insn.addr !535
  store i32 %32, i32* %r12.0.reg2mem, !insn.addr !535
  store i64 %5, i64* %rbx.0.reg2mem, !insn.addr !535
  br i1 %37, label %dec_label_pc_1d20, label %dec_label_pc_1d30, !insn.addr !535

dec_label_pc_1d30:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1d30
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %38 = add i64 %rbx.0.reload, 8, !insn.addr !536
  %39 = inttoptr i64 %38 to i64*, !insn.addr !536
  %40 = load i64, i64* %39, align 8, !insn.addr !536
  %41 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !537
  call void @free(i64* %41), !insn.addr !537
  %42 = icmp eq i64 %40, 0, !insn.addr !538
  %43 = icmp eq i1 %42, false, !insn.addr !539
  store i64 %40, i64* %rbx.0.reg2mem, !insn.addr !539
  br i1 %43, label %dec_label_pc_1d30, label %dec_label_pc_1dae.loopexit3, !insn.addr !539

dec_label_pc_1d50:                                ; preds = %dec_label_pc_1c8d, %dec_label_pc_1d50
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %44 = add i64 %rbx.1.reload, 8, !insn.addr !540
  %45 = inttoptr i64 %44 to i64*, !insn.addr !540
  %46 = load i64, i64* %45, align 8, !insn.addr !540
  %47 = inttoptr i64 %rbx.1.reload to i64*, !insn.addr !541
  call void @free(i64* %47), !insn.addr !541
  %48 = icmp eq i64 %46, 0, !insn.addr !542
  %49 = icmp eq i1 %48, false, !insn.addr !543
  store i64 %46, i64* %rbx.1.reg2mem, !insn.addr !543
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !543
  br i1 %49, label %dec_label_pc_1d50, label %dec_label_pc_1dae, !insn.addr !543

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1cb5, %dec_label_pc_1d70
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %50 = add i64 %rbx.2.reload, 8, !insn.addr !544
  %51 = inttoptr i64 %50 to i64*, !insn.addr !544
  %52 = load i64, i64* %51, align 8, !insn.addr !544
  %53 = inttoptr i64 %rbx.2.reload to i64*, !insn.addr !545
  call void @free(i64* %53), !insn.addr !545
  %54 = icmp eq i64 %52, 0, !insn.addr !546
  %55 = icmp eq i1 %54, false, !insn.addr !547
  store i64 %52, i64* %rbx.2.reg2mem, !insn.addr !547
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !547
  br i1 %55, label %dec_label_pc_1d70, label %dec_label_pc_1dae, !insn.addr !547

dec_label_pc_1d90:                                ; preds = %dec_label_pc_1cdd, %dec_label_pc_1d90
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %56 = add i64 %rbx.3.reload, 8, !insn.addr !548
  %57 = inttoptr i64 %56 to i64*, !insn.addr !548
  %58 = load i64, i64* %57, align 8, !insn.addr !548
  %59 = inttoptr i64 %rbx.3.reload to i64*, !insn.addr !549
  call void @free(i64* %59), !insn.addr !549
  %60 = icmp eq i64 %58, 0, !insn.addr !550
  %61 = icmp eq i1 %60, false, !insn.addr !551
  store i64 %58, i64* %rbx.3.reg2mem, !insn.addr !551
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !551
  br i1 %61, label %dec_label_pc_1d90, label %dec_label_pc_1dae, !insn.addr !551

dec_label_pc_1da6:                                ; preds = %dec_label_pc_1c71
  call void @free(i64* nonnull %0), !insn.addr !552
  store i64 4294967295, i64* %r12.1.reg2mem, !insn.addr !552
  br label %dec_label_pc_1dae, !insn.addr !552

dec_label_pc_1dae.loopexit3:                      ; preds = %dec_label_pc_1d30
  %62 = zext i32 %32 to i64, !insn.addr !532
  store i64 %62, i64* %r12.1.reg2mem
  br label %dec_label_pc_1dae

dec_label_pc_1dae:                                ; preds = %dec_label_pc_1d90, %dec_label_pc_1d70, %dec_label_pc_1d50, %dec_label_pc_1dae.loopexit3, %dec_label_pc_1da6, %dec_label_pc_1c50
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  ret i64 %r12.1.reload, !insn.addr !553

; uselistorder directives
  uselistorder i32 %32, { 1, 0 }
  uselistorder i64* %24, { 0, 2, 1 }
  uselistorder i64* %18, { 0, 2, 1 }
  uselistorder i64* %12, { 0, 2, 1 }
  uselistorder i64 %5, { 3, 4, 0, 1, 2, 5 }
  uselistorder i64* %3, { 0, 2, 1 }
  uselistorder i64* %0, { 0, 3, 1, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r12.1.reg2mem, { 0, 4, 5, 1, 2, 3, 6 }
  uselistorder label %dec_label_pc_1dae, { 3, 4, 0, 1, 2, 5 }
  uselistorder label %dec_label_pc_1d90, { 1, 0 }
  uselistorder label %dec_label_pc_1d70, { 1, 0 }
  uselistorder label %dec_label_pc_1d50, { 1, 0 }
  uselistorder label %dec_label_pc_1d30, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i64* @malloc(i32 24), !insn.addr !554
  %3 = ptrtoint i64* %2 to i64, !insn.addr !554
  %4 = icmp eq i64* %2, null, !insn.addr !555
  br i1 %4, label %dec_label_pc_1ddb, label %dec_label_pc_1dd2, !insn.addr !556

dec_label_pc_1dd2:                                ; preds = %dec_label_pc_1dc0
  %5 = trunc i64 %arg1 to i32, !insn.addr !557
  %6 = bitcast i64* %2 to i32*, !insn.addr !557
  store i32 %5, i32* %6, align 4, !insn.addr !557
  %7 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !558
  %8 = add i64 %3, 8, !insn.addr !559
  %9 = inttoptr i64 %8 to i128*, !insn.addr !559
  %10 = load i128, i128* %9, align 8, !insn.addr !559
  call void @__asm_movups(i128 %10, i128 %7), !insn.addr !559
  br label %dec_label_pc_1ddb, !insn.addr !559

dec_label_pc_1ddb:                                ; preds = %dec_label_pc_1dd2, %dec_label_pc_1dc0
  ret i64 %3, !insn.addr !560

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1de0:
  ret i64 60, !insn.addr !561
}

define i64 @memory_leak(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1df0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !562
  %rdx.0.ph.reg2mem = alloca i64, !insn.addr !562
  %rbx.2.reg2mem = alloca i64, !insn.addr !562
  %xmm0.2.reg2mem = alloca i128, !insn.addr !562
  %rbx.1.reg2mem = alloca i64, !insn.addr !562
  %xmm0.1.reg2mem = alloca i128, !insn.addr !562
  %rdi.0.reg2mem = alloca i64, !insn.addr !562
  %rbx.0.reg2mem = alloca i64, !insn.addr !562
  %xmm0.0.reg2mem = alloca i128, !insn.addr !562
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !563
  %1 = call i64* @malloc(i32 %0), !insn.addr !563
  %2 = icmp eq i64* %1, null, !insn.addr !564
  br i1 %2, label %dec_label_pc_1e1c, label %dec_label_pc_1e06, !insn.addr !565

dec_label_pc_1e06:                                ; preds = %dec_label_pc_1df0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !563
  %4 = icmp slt i32 %arg1.tr, 1
  br i1 %4, label %dec_label_pc_1f8c, label %dec_label_pc_1e0e, !insn.addr !566

dec_label_pc_1e0e:                                ; preds = %dec_label_pc_1e06
  %5 = and i64 %arg1, 4294967295, !insn.addr !567
  %6 = icmp ult i32 %arg1.tr, 8, !insn.addr !568
  %7 = icmp eq i1 %6, false, !insn.addr !569
  store i64 0, i64* %rdx.0.ph.reg2mem, !insn.addr !569
  br i1 %7, label %dec_label_pc_1e28, label %dec_label_pc_1f80.preheader, !insn.addr !569

dec_label_pc_1e1c:                                ; preds = %dec_label_pc_1df0
  ret i64 4294967295, !insn.addr !570

dec_label_pc_1e28:                                ; preds = %dec_label_pc_1e0e
  %8 = and i64 %arg1, 4294967288, !insn.addr !571
  %9 = add nsw i64 %8, -8, !insn.addr !572
  %10 = udiv i64 %9, 8, !insn.addr !573
  %11 = add nuw nsw i64 %10, 1, !insn.addr !574
  %12 = icmp ult i64 %9, 24, !insn.addr !575
  %13 = icmp eq i1 %12, false, !insn.addr !576
  br i1 %13, label %dec_label_pc_1e56, label %dec_label_pc_1e47, !insn.addr !576

dec_label_pc_1e47:                                ; preds = %dec_label_pc_1e28
  %14 = load i128, i128* @global_var_30b0, align 8, !insn.addr !577
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !577
  store i128 %15, i128* %xmm0.1.reg2mem, !insn.addr !578
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !578
  br label %dec_label_pc_1f28, !insn.addr !578

dec_label_pc_1e56:                                ; preds = %dec_label_pc_1e28
  %16 = and i64 %11, 4611686018427387900, !insn.addr !579
  %17 = load i128, i128* @global_var_30b0, align 8, !insn.addr !580
  %18 = call i128 @__asm_movdqa(i128 %17), !insn.addr !580
  %19 = load i128, i128* @global_var_3120, align 8, !insn.addr !581
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !581
  %21 = load i128, i128* @global_var_30c0, align 8, !insn.addr !582
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !582
  %23 = load i128, i128* @global_var_30f0, align 8, !insn.addr !583
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !583
  %25 = load i128, i128* @global_var_30d0, align 8, !insn.addr !584
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !584
  %27 = load i128, i128* @global_var_3130, align 8, !insn.addr !585
  %28 = call i128 @__asm_movdqa(i128 %27), !insn.addr !585
  %29 = load i128, i128* @global_var_30e0, align 8, !insn.addr !586
  %30 = call i128 @__asm_movdqa(i128 %29), !insn.addr !586
  %31 = load i128, i128* @global_var_3140, align 8, !insn.addr !587
  %32 = call i128 @__asm_movdqa(i128 %31), !insn.addr !587
  %33 = load i128, i128* @global_var_3150, align 8, !insn.addr !588
  %34 = call i128 @__asm_movdqa(i128 %33), !insn.addr !588
  store i128 %18, i128* %xmm0.0.reg2mem, !insn.addr !589
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !589
  store i64 %16, i64* %rdi.0.reg2mem, !insn.addr !589
  br label %dec_label_pc_1eb0, !insn.addr !589

dec_label_pc_1eb0:                                ; preds = %dec_label_pc_1eb0, %dec_label_pc_1e56
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %35 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !590
  %36 = call i128 @__asm_paddd(i128 %35, i128 %20), !insn.addr !591
  %37 = call i64 @__asm_movdqu(i128 %xmm0.0.reload), !insn.addr !592
  %38 = mul i64 %rbx.0.reload, 4, !insn.addr !592
  %39 = add i64 %38, %3
  %40 = sext i64 %37 to i128, !insn.addr !592
  %41 = inttoptr i64 %39 to i128*, !insn.addr !592
  store i128 %40, i128* %41, align 8, !insn.addr !592
  %42 = call i64 @__asm_movdqu(i128 %36), !insn.addr !593
  %43 = add i64 %39, 16, !insn.addr !593
  %44 = sext i64 %42 to i128, !insn.addr !593
  %45 = inttoptr i64 %43 to i128*, !insn.addr !593
  store i128 %44, i128* %45, align 8, !insn.addr !593
  %46 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !594
  %47 = call i128 @__asm_paddd(i128 %46, i128 %22), !insn.addr !595
  %48 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !596
  %49 = call i128 @__asm_paddd(i128 %48, i128 %24), !insn.addr !597
  %50 = call i64 @__asm_movdqu(i128 %47), !insn.addr !598
  %51 = add i64 %39, 32, !insn.addr !598
  %52 = sext i64 %50 to i128, !insn.addr !598
  %53 = inttoptr i64 %51 to i128*, !insn.addr !598
  store i128 %52, i128* %53, align 8, !insn.addr !598
  %54 = call i64 @__asm_movdqu(i128 %49), !insn.addr !599
  %55 = add i64 %39, 48, !insn.addr !599
  %56 = sext i64 %54 to i128, !insn.addr !599
  %57 = inttoptr i64 %55 to i128*, !insn.addr !599
  store i128 %56, i128* %57, align 8, !insn.addr !599
  %58 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !600
  %59 = call i128 @__asm_paddd(i128 %58, i128 %26), !insn.addr !601
  %60 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !602
  %61 = call i128 @__asm_paddd(i128 %60, i128 %28), !insn.addr !603
  %62 = call i64 @__asm_movdqu(i128 %59), !insn.addr !604
  %63 = add i64 %39, 64, !insn.addr !604
  %64 = sext i64 %62 to i128, !insn.addr !604
  %65 = inttoptr i64 %63 to i128*, !insn.addr !604
  store i128 %64, i128* %65, align 8, !insn.addr !604
  %66 = call i64 @__asm_movdqu(i128 %61), !insn.addr !605
  %67 = add i64 %39, 80, !insn.addr !605
  %68 = sext i64 %66 to i128, !insn.addr !605
  %69 = inttoptr i64 %67 to i128*, !insn.addr !605
  store i128 %68, i128* %69, align 8, !insn.addr !605
  %70 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !606
  %71 = call i128 @__asm_paddd(i128 %70, i128 %30), !insn.addr !607
  %72 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !608
  %73 = call i128 @__asm_paddd(i128 %72, i128 %32), !insn.addr !609
  %74 = call i64 @__asm_movdqu(i128 %71), !insn.addr !610
  %75 = add i64 %39, 96, !insn.addr !610
  %76 = sext i64 %74 to i128, !insn.addr !610
  %77 = inttoptr i64 %75 to i128*, !insn.addr !610
  store i128 %76, i128* %77, align 8, !insn.addr !610
  %78 = call i64 @__asm_movdqu(i128 %73), !insn.addr !611
  %79 = add i64 %39, 112, !insn.addr !611
  %80 = sext i64 %78 to i128, !insn.addr !611
  %81 = inttoptr i64 %79 to i128*, !insn.addr !611
  store i128 %80, i128* %81, align 8, !insn.addr !611
  %82 = add i64 %rbx.0.reload, 32, !insn.addr !612
  %83 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %34), !insn.addr !613
  %84 = add i64 %rdi.0.reload, -4, !insn.addr !614
  %85 = icmp eq i64 %84, 0, !insn.addr !614
  %86 = icmp eq i1 %85, false, !insn.addr !615
  store i128 %83, i128* %xmm0.0.reg2mem, !insn.addr !615
  store i64 %82, i64* %rbx.0.reg2mem, !insn.addr !615
  store i64 %84, i64* %rdi.0.reg2mem, !insn.addr !615
  br i1 %86, label %dec_label_pc_1eb0, label %dec_label_pc_1f28.loopexit, !insn.addr !615

dec_label_pc_1f28.loopexit:                       ; preds = %dec_label_pc_1eb0
  %phitmp = mul i64 %82, 4
  store i128 %83, i128* %xmm0.1.reg2mem
  store i64 %phitmp, i64* %rbx.1.reg2mem
  br label %dec_label_pc_1f28

dec_label_pc_1f28:                                ; preds = %dec_label_pc_1f28.loopexit, %dec_label_pc_1e47
  %87 = urem i64 %11, 4, !insn.addr !616
  %88 = icmp eq i64 %87, 0, !insn.addr !617
  br i1 %88, label %dec_label_pc_1f70, label %dec_label_pc_1f2d, !insn.addr !618

dec_label_pc_1f2d:                                ; preds = %dec_label_pc_1f28
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %89 = add i64 %rbx.1.reload, %3, !insn.addr !619
  %90 = mul i64 %87, 32, !insn.addr !620
  %91 = load i128, i128* @global_var_3120, align 8, !insn.addr !621
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !621
  %93 = load i128, i128* @global_var_30c0, align 8, !insn.addr !622
  %94 = call i128 @__asm_movdqa(i128 %93), !insn.addr !622
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !623
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !623
  br label %dec_label_pc_1f50, !insn.addr !623

dec_label_pc_1f50:                                ; preds = %dec_label_pc_1f50, %dec_label_pc_1f2d
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %95 = call i128 @__asm_movdqa(i128 %xmm0.2.reload), !insn.addr !624
  %96 = call i128 @__asm_paddd(i128 %95, i128 %92), !insn.addr !625
  %97 = call i64 @__asm_movdqu(i128 %xmm0.2.reload), !insn.addr !626
  %98 = add i64 %89, %rbx.2.reload
  %99 = sext i64 %97 to i128, !insn.addr !626
  %100 = inttoptr i64 %98 to i128*, !insn.addr !626
  store i128 %99, i128* %100, align 8, !insn.addr !626
  %101 = call i64 @__asm_movdqu(i128 %96), !insn.addr !627
  %102 = add i64 %98, 16, !insn.addr !627
  %103 = sext i64 %101 to i128, !insn.addr !627
  %104 = inttoptr i64 %102 to i128*, !insn.addr !627
  store i128 %103, i128* %104, align 8, !insn.addr !627
  %105 = call i128 @__asm_paddd(i128 %xmm0.2.reload, i128 %94), !insn.addr !628
  %106 = add i64 %rbx.2.reload, 32, !insn.addr !629
  %107 = icmp eq i64 %90, %106, !insn.addr !630
  %108 = icmp eq i1 %107, false, !insn.addr !631
  store i128 %105, i128* %xmm0.2.reg2mem, !insn.addr !631
  store i64 %106, i64* %rbx.2.reg2mem, !insn.addr !631
  br i1 %108, label %dec_label_pc_1f50, label %dec_label_pc_1f70, !insn.addr !631

dec_label_pc_1f70:                                ; preds = %dec_label_pc_1f50, %dec_label_pc_1f28
  %109 = icmp eq i64 %8, %5, !insn.addr !632
  store i64 %8, i64* %rdx.0.ph.reg2mem, !insn.addr !633
  br i1 %109, label %dec_label_pc_1f8c, label %dec_label_pc_1f80.preheader, !insn.addr !633

dec_label_pc_1f80.preheader:                      ; preds = %dec_label_pc_1f70, %dec_label_pc_1e0e
  %rdx.0.ph.reload = load i64, i64* %rdx.0.ph.reg2mem
  store i64 %rdx.0.ph.reload, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1f80

dec_label_pc_1f80:                                ; preds = %dec_label_pc_1f80.preheader, %dec_label_pc_1f80
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %110 = trunc i64 %rdx.0.reload to i32, !insn.addr !634
  %111 = mul i64 %rdx.0.reload, 4, !insn.addr !634
  %112 = add i64 %111, %3, !insn.addr !634
  %113 = inttoptr i64 %112 to i32*, !insn.addr !634
  store i32 %110, i32* %113, align 4, !insn.addr !634
  %114 = add i64 %rdx.0.reload, 1, !insn.addr !635
  %115 = icmp eq i64 %5, %114, !insn.addr !636
  %116 = icmp eq i1 %115, false, !insn.addr !637
  store i64 %114, i64* %rdx.0.reg2mem, !insn.addr !637
  br i1 %116, label %dec_label_pc_1f80, label %dec_label_pc_1f8c, !insn.addr !637

dec_label_pc_1f8c:                                ; preds = %dec_label_pc_1f80, %dec_label_pc_1f70, %dec_label_pc_1e06
  %117 = icmp slt i32 %arg1.tr, 0
  %118 = zext i1 %117 to i32, !insn.addr !638
  %119 = add i32 %118, %arg1.tr, !insn.addr !639
  %120 = ashr i32 %119, 1, !insn.addr !640
  %121 = sext i32 %120 to i64, !insn.addr !641
  %122 = mul i64 %121, 4, !insn.addr !642
  %123 = add i64 %122, %3, !insn.addr !642
  %124 = inttoptr i64 %123 to i32*, !insn.addr !642
  %125 = load i32, i32* %124, align 4, !insn.addr !642
  %126 = zext i32 %125 to i64, !insn.addr !642
  ret i64 %126, !insn.addr !643

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i128 %xmm0.2.reload, { 2, 0, 1 }
  uselistorder i64 %82, { 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 8, 6, 7, 4, 5, 2, 3, 0, 1 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %1, { 1, 0 }
  uselistorder i32 %arg1.tr, { 2, 1, 4, 3, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 32, { 7, 0, 8, 1, 2, 9, 3, 4, 5, 6 }
  uselistorder i128* @global_var_30e0, { 2, 1, 0 }
  uselistorder i128* @global_var_30d0, { 4, 3, 2, 1, 0 }
  uselistorder i128* @global_var_30f0, { 4, 0, 3, 1, 2 }
  uselistorder i128* @global_var_30c0, { 7, 6, 5, 0, 4, 3, 1, 2 }
  uselistorder i128* @global_var_3120, { 1, 0 }
  uselistorder i128* @global_var_30b0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 4294967288, { 0, 2, 1, 3, 5, 4, 6 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f80, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1fb0:
  %0 = call i64* @malloc(i32 4), !insn.addr !644
  %1 = icmp eq i64* %0, null, !insn.addr !645
  br i1 %1, label %dec_label_pc_1fe2, label %dec_label_pc_1fc0, !insn.addr !646

dec_label_pc_1fc0:                                ; preds = %dec_label_pc_1fb0
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3274, i64 0, i64 0), i64 42), !insn.addr !647
  call void @free(i64* nonnull %0), !insn.addr !648
  %3 = bitcast i64* %0 to i32*, !insn.addr !649
  %4 = load i32, i32* %3, align 4, !insn.addr !649
  %5 = zext i32 %4 to i64, !insn.addr !649
  ret i64 %5, !insn.addr !650

dec_label_pc_1fe2:                                ; preds = %dec_label_pc_1fb0
  ret i64 4294967295, !insn.addr !651

; uselistorder directives
  uselistorder i64 42, { 1, 2, 0 }
  uselistorder i32 4, { 3, 0, 1, 4, 2 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !652
  br i1 %2, label %dec_label_pc_1ff8, label %dec_label_pc_1ff5, !insn.addr !653

dec_label_pc_1ff5:                                ; preds = %dec_label_pc_1ff0
  %3 = and i64 %1, 4294967295, !insn.addr !654
  ret i64 %3, !insn.addr !655

dec_label_pc_1ff8:                                ; preds = %dec_label_pc_1ff0
  ret i64 4294967294, !insn.addr !656
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_2000:
  ret i64 0, !insn.addr !657
}

define i64 @test_heap_memory(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2010:
  %rax.0.reg2mem = alloca i64, !insn.addr !658
  %storemerge.reg2mem = alloca i64, !insn.addr !658
  %storemerge2.reg2mem = alloca i64, !insn.addr !658
  %rbp.1.reg2mem = alloca i64, !insn.addr !658
  %rbp.0.reg2mem = alloca i64, !insn.addr !658
  %rbx.0.reg2mem = alloca i64, !insn.addr !658
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3737 to i8*)), !insn.addr !659
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_328b, i64 0, i64 0), i64 10), !insn.addr !660
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32a8, i64 0, i64 0), i64 0), !insn.addr !661
  %3 = call i64* @malloc(i32 20), !insn.addr !662
  %4 = icmp eq i64* %3, null, !insn.addr !663
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !664
  br i1 %4, label %dec_label_pc_20b3, label %dec_label_pc_2051, !insn.addr !664

dec_label_pc_2051:                                ; preds = %dec_label_pc_2010
  %5 = ptrtoint i64* %3 to i64, !insn.addr !662
  %6 = load i128, i128* @global_var_3100, align 8, !insn.addr !665
  %7 = call i128 @__asm_movaps(i128 %6), !insn.addr !665
  %8 = bitcast i64* %3 to i128*, !insn.addr !666
  %9 = load i128, i128* %8, align 8, !insn.addr !666
  call void @__asm_movups(i128 %9, i128 %7), !insn.addr !666
  %10 = add i64 %5, 16, !insn.addr !667
  %11 = inttoptr i64 %10 to i32*, !insn.addr !667
  store i32 5, i32* %11, align 4, !insn.addr !667
  %12 = call i64* @realloc(i64* nonnull %3, i32 40), !insn.addr !668
  %13 = icmp eq i64* %12, null, !insn.addr !669
  store i64 %5, i64* %rbx.0.reg2mem, !insn.addr !670
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !670
  br i1 %13, label %dec_label_pc_20ab, label %dec_label_pc_2077, !insn.addr !670

dec_label_pc_2077:                                ; preds = %dec_label_pc_2051
  %14 = ptrtoint i64* %12 to i64, !insn.addr !668
  %15 = load i128, i128* @global_var_3110, align 8, !insn.addr !671
  %16 = call i128 @__asm_movaps(i128 %15), !insn.addr !671
  %17 = add i64 %14, 20, !insn.addr !672
  %18 = inttoptr i64 %17 to i128*, !insn.addr !672
  %19 = load i128, i128* %18, align 8, !insn.addr !672
  call void @__asm_movups(i128 %19, i128 %16), !insn.addr !672
  %20 = add i64 %14, 36, !insn.addr !673
  %21 = inttoptr i64 %20 to i32*, !insn.addr !673
  store i32 90, i32* %21, align 4, !insn.addr !673
  %22 = add i64 %14, 8, !insn.addr !674
  %23 = inttoptr i64 %22 to i32*, !insn.addr !674
  %24 = load i32, i32* %23, align 4, !insn.addr !674
  %25 = icmp eq i32 %24, 3, !insn.addr !674
  %26 = select i1 %25, i64 50, i64 4294967293, !insn.addr !675
  store i64 %14, i64* %rbx.0.reg2mem, !insn.addr !676
  store i64 %26, i64* %rbp.0.reg2mem, !insn.addr !676
  br label %dec_label_pc_20ab, !insn.addr !676

dec_label_pc_20ab:                                ; preds = %dec_label_pc_2051, %dec_label_pc_2077
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %27 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !677
  call void @free(i64* %27), !insn.addr !677
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !677
  br label %dec_label_pc_20b3, !insn.addr !677

dec_label_pc_20b3:                                ; preds = %dec_label_pc_2010, %dec_label_pc_20ab
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %28 = and i64 %rbp.1.reload, 4294967295, !insn.addr !678
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32c6, i64 0, i64 0), i64 %28), !insn.addr !679
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_32e5, i64 0, i64 0), i64 15), !insn.addr !680
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3302, i64 0, i64 0), i64 15), !insn.addr !681
  %32 = call i64* @malloc(i32 16), !insn.addr !682
  %33 = icmp eq i64* %32, null, !insn.addr !683
  br i1 %33, label %dec_label_pc_2126, label %dec_label_pc_20f8, !insn.addr !684

dec_label_pc_20f8:                                ; preds = %dec_label_pc_20b3
  %34 = ptrtoint i64* %32 to i64, !insn.addr !682
  %35 = bitcast i64* %32 to i32*, !insn.addr !685
  store i32 10, i32* %35, align 4, !insn.addr !685
  %36 = call i64* @malloc(i32 16), !insn.addr !686
  %37 = ptrtoint i64* %36 to i64, !insn.addr !686
  %38 = add i64 %34, 8, !insn.addr !687
  %39 = inttoptr i64 %38 to i64*, !insn.addr !687
  store i64 %37, i64* %39, align 8, !insn.addr !687
  %40 = icmp eq i64* %36, null, !insn.addr !688
  br i1 %40, label %dec_label_pc_213b, label %dec_label_pc_2114, !insn.addr !689

dec_label_pc_2114:                                ; preds = %dec_label_pc_20f8
  %41 = bitcast i64* %36 to i32*, !insn.addr !690
  store i32 20, i32* %41, align 4, !insn.addr !690
  %42 = add i64 %37, 8, !insn.addr !691
  %43 = inttoptr i64 %42 to i64*, !insn.addr !691
  store i64 0, i64* %43, align 8, !insn.addr !691
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !692
  br label %dec_label_pc_2148, !insn.addr !692

dec_label_pc_2126:                                ; preds = %dec_label_pc_20b3
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3320, i64 0, i64 0), i64 4294967295), !insn.addr !693
  br label %dec_label_pc_2167, !insn.addr !694

dec_label_pc_213b:                                ; preds = %dec_label_pc_20f8
  call void @free(i64* nonnull %32), !insn.addr !695
  store i64 4294967294, i64* %storemerge2.reg2mem, !insn.addr !696
  br label %dec_label_pc_2148, !insn.addr !696

dec_label_pc_2148:                                ; preds = %dec_label_pc_213b, %dec_label_pc_2114
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3320, i64 0, i64 0), i64 %storemerge2.reload), !insn.addr !697
  %46 = load i64, i64* %39, align 8, !insn.addr !698
  %47 = inttoptr i64 %46 to i64*, !insn.addr !699
  call void @free(i64* %47), !insn.addr !699
  call void @free(i64* nonnull %32), !insn.addr !700
  br label %dec_label_pc_2167, !insn.addr !700

dec_label_pc_2167:                                ; preds = %dec_label_pc_2148, %dec_label_pc_2126
  %48 = call i64 @linked_list_heap(), !insn.addr !701
  %49 = and i64 %48, 4294967295, !insn.addr !702
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_333e, i64 0, i64 0), i64 %49), !insn.addr !703
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3361, i64 0, i64 0), i64 60), !insn.addr !704
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3387, i64 0, i64 0), i64 2), !insn.addr !705
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33a5, i64 0, i64 0)), !insn.addr !706
  %54 = call i32 @fork(), !insn.addr !707
  %55 = icmp eq i32 %54, 0, !insn.addr !708
  br i1 %55, label %dec_label_pc_221c, label %dec_label_pc_21b9, !insn.addr !709

dec_label_pc_21b9:                                ; preds = %dec_label_pc_2167
  %56 = icmp slt i32 %54, 1
  br i1 %56, label %dec_label_pc_220a, label %dec_label_pc_21bb, !insn.addr !710

dec_label_pc_21bb:                                ; preds = %dec_label_pc_21b9
  %57 = call i32 @waitpid(i32 %54, i32* nonnull %stack_var_-20, i32 0), !insn.addr !711
  %58 = load i32, i32* %stack_var_-20, align 4, !insn.addr !712
  %59 = urem i32 %58, 128, !insn.addr !713
  %60 = icmp eq i32 %59, 0, !insn.addr !713
  store i64 ptrtoint (i64* @global_var_33d5 to i64), i64* %storemerge.reg2mem, !insn.addr !714
  br i1 %60, label %dec_label_pc_21fc, label %dec_label_pc_21d4, !insn.addr !714

dec_label_pc_21d4:                                ; preds = %dec_label_pc_21bb
  %61 = zext i32 %59 to i64, !insn.addr !713
  %62 = mul i32 %59, 16777216, !insn.addr !715
  %63 = add nuw i32 %62, 16777216, !insn.addr !716
  %64 = icmp slt i32 %63, 33554432, !insn.addr !717
  store i64 ptrtoint (i8** @global_var_33fa to i64), i64* %storemerge.reg2mem, !insn.addr !717
  store i64 %61, i64* %rax.0.reg2mem, !insn.addr !717
  br i1 %64, label %dec_label_pc_2203, label %dec_label_pc_21fc, !insn.addr !717

dec_label_pc_21fc:                                ; preds = %dec_label_pc_21bb, %dec_label_pc_21d4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %65 = inttoptr i64 %storemerge.reload to i8*, !insn.addr !718
  %66 = call i32 (i8*, ...) @printf(i8* %65), !insn.addr !718
  %67 = sext i32 %66 to i64, !insn.addr !718
  store i64 %67, i64* %rax.0.reg2mem, !insn.addr !718
  br label %dec_label_pc_2203, !insn.addr !718

dec_label_pc_2203:                                ; preds = %dec_label_pc_21fc, %dec_label_pc_21d4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !719

dec_label_pc_220a:                                ; preds = %dec_label_pc_21b9
  call void @perror(i8* bitcast (i8** @global_var_343b to i8*)), !insn.addr !720
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !720

dec_label_pc_221c:                                ; preds = %dec_label_pc_2167
  %68 = call i64 @dangling_pointer(), !insn.addr !721
  %69 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33c5 to i8*)), !insn.addr !722
  call void @exit(i32 xor (i32 ptrtoint (i8** @global_var_33c5 to i32), i32 ptrtoint (i8** @global_var_33c5 to i32))), !insn.addr !723
  unreachable, !insn.addr !723

; uselistorder directives
  uselistorder i32 %59, { 0, 2, 1 }
  uselistorder i64* %32, { 1, 0, 2, 4, 3 }
  uselistorder i64* %12, { 1, 0 }
  uselistorder i64* %3, { 0, 1, 3, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbp.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder i64 60, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3320, i64 0, i64 0), { 1, 0 }
  uselistorder void (i64*)* @free, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i64 8, { 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 1, 22, 23, 2, 24, 3, 4, 5 }
  uselistorder i64 36, { 1, 2, 0 }
  uselistorder i128* @global_var_3110, { 1, 0 }
  uselistorder i64* (i64*, i32)* @realloc, { 1, 0, 2 }
  uselistorder i32 40, { 0, 2, 1 }
  uselistorder i64 16, { 12, 4, 5, 0, 13, 6, 14, 7, 1, 15, 8, 9, 2, 16, 10, 3, 17, 11 }
  uselistorder i128* @global_var_3100, { 1, 0 }
  uselistorder i64* (i32)* @malloc, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
  uselistorder i32 20, { 2, 0, 3, 4, 1 }
  uselistorder label %dec_label_pc_21fc, { 1, 0 }
  uselistorder label %dec_label_pc_20b3, { 1, 0 }
  uselistorder label %dec_label_pc_20ab, { 1, 0 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_2240:
  store i32 ptrtoint (i32* @global_var_60b1 to i32), i32* @global_var_60b0, align 4, !insn.addr !724
  ret i64 ptrtoint (i32* @global_var_60b1 to i64), !insn.addr !725
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_2250:
  %0 = load i32, i32* @global_var_60b0, align 4, !insn.addr !726
  %1 = mul i32 %0, 2, !insn.addr !727
  %2 = zext i32 %1 to i64, !insn.addr !727
  ret i64 %2, !insn.addr !728
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2260:
  %rax.0.reg2mem = alloca i64, !insn.addr !729
  %0 = trunc i64 %arg1 to i32, !insn.addr !730
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !731
  br i1 %1, label %dec_label_pc_226a, label %dec_label_pc_2276, !insn.addr !731

dec_label_pc_226a:                                ; preds = %dec_label_pc_2260
  %2 = mul i64 %arg1, 4, !insn.addr !732
  %3 = and i64 %2, 17179869180, !insn.addr !733
  %4 = add i64 %3, ptrtoint (i32** @global_var_37a0 to i64), !insn.addr !733
  %5 = inttoptr i64 %4 to i32*, !insn.addr !733
  %6 = load i32, i32* %5, align 4, !insn.addr !733
  %7 = zext i32 %6 to i64, !insn.addr !733
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !733
  br label %dec_label_pc_2276, !insn.addr !733

dec_label_pc_2276:                                ; preds = %dec_label_pc_2260, %dec_label_pc_226a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !734

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 0, 1, 2, 26, 3, 4, 5, 6, 7, 8, 9, 29, 10, 27, 28, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 }
  uselistorder label %dec_label_pc_2276, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_2280:
  %0 = trunc i64 %arg1 to i32, !insn.addr !735
  %1 = icmp eq i32 %0, 0, !insn.addr !735
  %2 = select i1 %1, i64 zext (i32 ptrtoint (i32* @global_var_60b5 to i32) to i64), i64 0, !insn.addr !736
  %3 = trunc i64 %2 to i32, !insn.addr !737
  store i32 %3, i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !737
  ret i64 %2, !insn.addr !738
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = mul i64 %arg1, 2, !insn.addr !739
  %1 = and i64 %0, 4294967294, !insn.addr !740
  %2 = or i64 %1, 1, !insn.addr !740
  ret i64 %2, !insn.addr !741
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_22b0:
  %0 = load i32, i32* @global_var_60a4, align 4, !insn.addr !742
  %1 = add i32 %0, 100, !insn.addr !743
  %2 = zext i32 %1 to i64, !insn.addr !743
  ret i64 %2, !insn.addr !744
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_22c0:
  %0 = call i64 @extern_function(i64 5), !insn.addr !745
  ret i64 %0, !insn.addr !745
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_22d0:
  ret i64 ptrtoint (i32* @global_var_60c6 to i64), !insn.addr !746
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_22e0:
  ret i64 0, !insn.addr !747
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_22f0:
  ret i64 0, !insn.addr !748
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_2300:
  ret i64 30, !insn.addr !749
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_2310:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !750
  store i32 %2, i32* @global_var_60a0, align 4, !insn.addr !750
  ret i64 %1, !insn.addr !751
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_2320:
  %0 = load i32, i32* @global_var_60a0, align 4, !insn.addr !752
  %1 = zext i32 %0 to i64, !insn.addr !752
  ret i64 %1, !insn.addr !753
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_2330:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_60b8, align 8, !insn.addr !754
  ret i64 %1, !insn.addr !755
}

define i64 @call_global_callback() local_unnamed_addr {
dec_label_pc_2340:
  %0 = load i64, i64* @global_var_60b8, align 8, !insn.addr !756
  %1 = icmp eq i64 %0, 0, !insn.addr !757
  %spec.select = select i1 %1, i64 4294967295, i64 %0
  ret i64 %spec.select, !insn.addr !758
}

define i64 @global_heap_store(i64 %arg1) local_unnamed_addr {
dec_label_pc_2360:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i64 %arg1, i64* @global_var_60c0, align 8, !insn.addr !759
  %2 = icmp eq i64 %arg1, 0, !insn.addr !760
  br i1 %2, label %dec_label_pc_236f, label %dec_label_pc_236c, !insn.addr !761

dec_label_pc_236c:                                ; preds = %dec_label_pc_2360
  %3 = and i64 %1, 4294967295, !insn.addr !762
  ret i64 %3, !insn.addr !763

dec_label_pc_236f:                                ; preds = %dec_label_pc_2360
  ret i64 4294967295, !insn.addr !764

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_2380:
  ret i64 15, !insn.addr !765
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2390:
  %0 = mul i64 %arg1, 2, !insn.addr !766
  %1 = and i64 %0, 4294967294, !insn.addr !766
  ret i64 %1, !insn.addr !767
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_23a0:
  ret i64 20, !insn.addr !768
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_23b0:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3755 to i8*)), !insn.addr !769
  store i32 ptrtoint (i32* @global_var_60b1 to i32), i32* @global_var_60b0, align 4, !insn.addr !770
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3446, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60b1 to i64)), !insn.addr !771
  %2 = load i32, i32* @global_var_60b0, align 4, !insn.addr !772
  %3 = mul i32 %2, 2, !insn.addr !773
  %4 = zext i32 %3 to i64, !insn.addr !773
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3469, i64 0, i64 0), i64 %4), !insn.addr !774
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_348a, i64 0, i64 0), i64 5), !insn.addr !775
  store i32 1, i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !776
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 1), !insn.addr !777
  store i32 ptrtoint (i32* @global_var_60b5 to i32), i32* bitcast (i64* @global_var_60b4 to i32*), align 8, !insn.addr !778
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34af, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60b5 to i64)), !insn.addr !779
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_34cd, i64 0, i64 0), i64 11), !insn.addr !780
  %10 = load i32, i32* @global_var_60a4, align 4, !insn.addr !781
  %11 = add i32 %10, 100, !insn.addr !782
  %12 = zext i32 %11 to i64, !insn.addr !782
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_34ef, i64 0, i64 0), i64 %12), !insn.addr !783
  %14 = call i64 @extern_function(i64 5), !insn.addr !784
  %15 = and i64 %14, 4294967295, !insn.addr !785
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3515, i64 0, i64 0), i64 %15), !insn.addr !786
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3537, i64 0, i64 0), i64 ptrtoint (i32* @global_var_60c6 to i64)), !insn.addr !787
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3558, i64 0, i64 0), i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32)) to i64)), !insn.addr !788
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3578, i64 0, i64 0), i64 zext (i32 xor (i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32)), i32 xor (i32 ptrtoint (i32* @global_var_60c6 to i32), i32 ptrtoint (i32* @global_var_60c6 to i32))) to i64)), !insn.addr !789
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_359b, i64 0, i64 0), i64 30), !insn.addr !790
  store i32 50, i32* @global_var_60a0, align 4, !insn.addr !791
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_35c1, i64 0, i64 0), i64 50), !insn.addr !792
  store i64 9600, i64* @global_var_60b8, align 8, !insn.addr !793
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35de, i64 0, i64 0), i64 10), !insn.addr !794
  store i32 100, i32* %stack_var_-12, align 4, !insn.addr !795
  %23 = ptrtoint i32* %stack_var_-12 to i64, !insn.addr !796
  store i64 %23, i64* @global_var_60c0, align 8, !insn.addr !796
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_35ff, i64 0, i64 0), i64 100), !insn.addr !797
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3622, i64 0, i64 0), i64 15), !insn.addr !798
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3647, i64 0, i64 0), i64 20), !insn.addr !799
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3663, i64 0, i64 0), i64 20), !insn.addr !800
  %28 = sext i32 %27 to i64, !insn.addr !800
  ret i64 %28, !insn.addr !801

; uselistorder directives
  uselistorder i64 20, { 3, 4, 0, 7, 8, 2, 5, 6, 1 }
  uselistorder i64 15, { 3, 0, 4, 5, 6, 7, 1, 2 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i32* @global_var_60a0, { 2, 1, 0 }
  uselistorder i64 30, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_60c6 to i64), { 1, 0 }
  uselistorder i64 (i64)* @extern_function, { 1, 0 }
  uselistorder i32 100, { 1, 2, 3, 0 }
  uselistorder i32* @global_var_60a4, { 1, 0 }
  uselistorder i32* @global_var_60b5, { 1, 0 }
  uselistorder i64 5, { 1, 2, 3, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_60b1 to i64), { 1, 0 }
  uselistorder i32* @global_var_60b0, { 3, 2, 1, 0 }
  uselistorder i32* @global_var_60b1, { 1, 0 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2580:
  %0 = mul i64 %arg1, 2, !insn.addr !802
  %1 = and i64 %0, 4294967294, !insn.addr !802
  ret i64 %1, !insn.addr !803

; uselistorder directives
  uselistorder i64 4294967294, { 6, 7, 8, 0, 1, 3, 4, 2, 5, 9 }
}

define i64 @memop_memset(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2590:
  %rax.0.reg2mem = alloca i64, !insn.addr !804
  %0 = icmp eq i64 %arg1, 0, !insn.addr !805
  %1 = icmp eq i64 %arg2, 0, !insn.addr !806
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !807
  br i1 %or.cond, label %dec_label_pc_25b4, label %dec_label_pc_25a2, !insn.addr !807

dec_label_pc_25a2:                                ; preds = %dec_label_pc_2590
  %2 = trunc i64 %arg3 to i32, !insn.addr !808
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !809
  %4 = trunc i64 %arg2 to i32, !insn.addr !809
  %5 = call i64* @memset(i64* %3, i32 %2, i32 %4), !insn.addr !809
  %6 = urem i64 %arg1, 256, !insn.addr !810
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !811
  br label %dec_label_pc_25b4, !insn.addr !811

dec_label_pc_25b4:                                ; preds = %dec_label_pc_25a2, %dec_label_pc_2590
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !812

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcpy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_25c0:
  %rax.0.reg2mem = alloca i64, !insn.addr !813
  %0 = icmp eq i64 %arg1, 0, !insn.addr !814
  %1 = icmp eq i64 %arg2, 0, !insn.addr !815
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !816
  %or.cond2 = or i1 %or.cond, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !817
  br i1 %or.cond2, label %dec_label_pc_25ef, label %dec_label_pc_25db, !insn.addr !817

dec_label_pc_25db:                                ; preds = %dec_label_pc_25c0
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !818
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !818
  %5 = trunc i64 %arg3 to i32, !insn.addr !818
  %6 = call i64* @memcpy(i64* %3, i64* %4, i32 %5), !insn.addr !818
  %7 = add i64 %arg3, -4
  %8 = and i64 %7, -4, !insn.addr !819
  %9 = add i64 %8, %arg1, !insn.addr !819
  %10 = inttoptr i64 %9 to i32*, !insn.addr !819
  %11 = load i32, i32* %10, align 4, !insn.addr !819
  %12 = zext i32 %11 to i64, !insn.addr !819
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !819
  br label %dec_label_pc_25ef, !insn.addr !819

dec_label_pc_25ef:                                ; preds = %dec_label_pc_25db, %dec_label_pc_25c0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !820

; uselistorder directives
  uselistorder i64 %arg3, { 1, 2, 0 }
}

define i64 @memop_memmove(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2600:
  %rax.0.reg2mem = alloca i64, !insn.addr !821
  %0 = icmp eq i64 %arg1, 0, !insn.addr !822
  %1 = icmp ult i64 %arg2, 2, !insn.addr !823
  %or.cond = or i1 %0, %1
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !824
  br i1 %or.cond, label %dec_label_pc_262c, label %dec_label_pc_2613, !insn.addr !824

dec_label_pc_2613:                                ; preds = %dec_label_pc_2600
  %2 = add i64 %arg1, 1, !insn.addr !825
  %3 = inttoptr i64 %2 to i64*, !insn.addr !826
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !826
  %5 = trunc i64 %arg2 to i32
  %6 = add i32 %5, -1, !insn.addr !826
  %7 = call i64* @memmove(i64* %3, i64* %4, i32 %6), !insn.addr !826
  %8 = inttoptr i64 %2 to i8*, !insn.addr !827
  %9 = load i8, i8* %8, align 1, !insn.addr !827
  %10 = sext i8 %9 to i64, !insn.addr !827
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !828
  br label %dec_label_pc_262c, !insn.addr !828

dec_label_pc_262c:                                ; preds = %dec_label_pc_2613, %dec_label_pc_2600
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !829

; uselistorder directives
  uselistorder i64 2, { 15, 0, 1, 2, 18, 7, 8, 9, 16, 3, 10, 19, 11, 12, 13, 17, 4, 14, 5, 6 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_memcmp(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2630:
  %rax.0.reg2mem = alloca i64, !insn.addr !830
  %0 = icmp eq i64 %arg1, 0, !insn.addr !831
  %1 = icmp eq i64 %arg2, 0, !insn.addr !832
  %or.cond = or i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !833
  %or.cond3 = or i1 %or.cond, %2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !834
  br i1 %or.cond3, label %dec_label_pc_265e, label %dec_label_pc_2641, !insn.addr !834

dec_label_pc_2641:                                ; preds = %dec_label_pc_2630
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !835
  %4 = inttoptr i64 %arg2 to i64*, !insn.addr !835
  %5 = trunc i64 %arg3 to i32, !insn.addr !835
  %6 = call i32 @memcmp(i64* %3, i64* %4, i32 %5), !insn.addr !835
  %7 = icmp eq i32 %6, 0, !insn.addr !836
  %8 = icmp eq i1 %7, false, !insn.addr !837
  %9 = icmp slt i32 %6, 1
  %.op = select i1 %8, i64 4294967295, i64 0
  %10 = select i1 %9, i64 %.op, i64 1, !insn.addr !838
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !839
  br label %dec_label_pc_265e, !insn.addr !839

dec_label_pc_265e:                                ; preds = %dec_label_pc_2641, %dec_label_pc_2630
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !840

; uselistorder directives
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @memop_bzero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2660:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !841
  br i1 %0, label %dec_label_pc_2678, label %dec_label_pc_2665, !insn.addr !842

dec_label_pc_2665:                                ; preds = %dec_label_pc_2660
  %1 = inttoptr i64 %arg1 to i64*, !insn.addr !843
  %2 = trunc i64 %arg2 to i32, !insn.addr !843
  %3 = call i64* @memset(i64* %1, i32 0, i32 %2), !insn.addr !843
  %4 = urem i64 %arg1, 256, !insn.addr !844
  ret i64 %4, !insn.addr !845

dec_label_pc_2678:                                ; preds = %dec_label_pc_2660
  ret i64 4294967295, !insn.addr !846

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i32 0, { 7, 12, 13, 14, 8, 15, 2, 0, 16, 3, 1, 4, 5, 6, 9, 10, 11 }
}

define i64 @memop_bcopy(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2680:
  %rax.0.reg2mem = alloca i64, !insn.addr !847
  %0 = icmp eq i64 %arg1, 0, !insn.addr !848
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !849
  br i1 %0, label %dec_label_pc_26a6, label %dec_label_pc_268b, !insn.addr !849

dec_label_pc_268b:                                ; preds = %dec_label_pc_2680
  %1 = icmp eq i64 %arg2, 0, !insn.addr !850
  %2 = icmp eq i64 %arg3, 0, !insn.addr !851
  %or.cond = or i1 %1, %2
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !852
  br i1 %or.cond, label %dec_label_pc_26a6, label %dec_label_pc_2698, !insn.addr !852

dec_label_pc_2698:                                ; preds = %dec_label_pc_268b
  %3 = inttoptr i64 %arg2 to i64*, !insn.addr !853
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !853
  %5 = trunc i64 %arg3 to i32, !insn.addr !853
  %6 = call i64* @memmove(i64* %3, i64* %4, i32 %5), !insn.addr !853
  %7 = urem i64 %arg2, 256, !insn.addr !854
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !854
  br label %dec_label_pc_26a6, !insn.addr !854

dec_label_pc_26a6:                                ; preds = %dec_label_pc_2698, %dec_label_pc_268b, %dec_label_pc_2680
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !855

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 1, 0, 2 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
}

define i64 @memop_unaligned_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_26b0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !856
  br i1 %0, label %dec_label_pc_26b9, label %dec_label_pc_26b5, !insn.addr !857

dec_label_pc_26b5:                                ; preds = %dec_label_pc_26b0
  %1 = add i64 %arg1, 1, !insn.addr !858
  %2 = inttoptr i64 %1 to i32*, !insn.addr !858
  %3 = load i32, i32* %2, align 4, !insn.addr !858
  %4 = zext i32 %3 to i64, !insn.addr !858
  ret i64 %4, !insn.addr !859

dec_label_pc_26b9:                                ; preds = %dec_label_pc_26b0
  ret i64 4294967295, !insn.addr !860
}

define i64 @memop_memory_barrier(i64 %arg1) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !861
  br i1 %2, label %dec_label_pc_26cd, label %dec_label_pc_26c5, !insn.addr !862

dec_label_pc_26c5:                                ; preds = %dec_label_pc_26c0
  %3 = call i64 @__asm_mfence(), !insn.addr !863
  %4 = add i64 %3, %1, !insn.addr !864
  %5 = and i64 %4, 4294967295, !insn.addr !864
  ret i64 %5, !insn.addr !865

dec_label_pc_26cd:                                ; preds = %dec_label_pc_26c0
  ret i64 4294967295, !insn.addr !866
}

define i64 @test_memory_op_functions() local_unnamed_addr {
dec_label_pc_26e0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3779 to i8*)), !insn.addr !867
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3684, i64 0, i64 0), i64 65), !insn.addr !868
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3695, i64 0, i64 0), i64 50), !insn.addr !869
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36b1, i64 0, i64 0), i8 72), !insn.addr !870
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36c2, i64 0, i64 0), i64 4294967295), !insn.addr !871
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36d3, i64 0, i64 0), i64 0), !insn.addr !872
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_36e4, i64 0, i64 0), i64 1), !insn.addr !873
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_36f5, i64 0, i64 0), i32 67305985), !insn.addr !874
  %8 = call i64 @__asm_mfence(), !insn.addr !875
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3708, i64 0, i64 0), i64 10), !insn.addr !876
  %10 = sext i32 %9 to i64, !insn.addr !876
  ret i64 %10, !insn.addr !876

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 4, 5, 1 }
  uselistorder i64 ()* @__asm_mfence, { 1, 0 }
  uselistorder i64 1, { 3, 5, 1, 6, 4, 2, 7, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 18, 19 }
  uselistorder i64 50, { 2, 3, 0, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 49 }
  uselistorder i32 (i8*)* @puts, { 2, 3, 0, 1, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_27c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8** %argv to i64
  %3 = call i64 @test_stack_memory(), !insn.addr !877
  %4 = call i64 @test_heap_memory(i64 %argc, i64 %2, i64 %1), !insn.addr !878
  %5 = call i64 @test_static_global(), !insn.addr !879
  %6 = call i64 @test_memory_op_functions(), !insn.addr !880
  ret i64 0, !insn.addr !881

; uselistorder directives
  uselistorder i64 0, { 24, 50, 51, 52, 53, 54, 55, 58, 56, 57, 59, 60, 61, 62, 63, 64, 65, 66, 159, 160, 46, 161, 162, 163, 67, 0, 47, 48, 164, 165, 30, 49, 166, 31, 167, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 168, 169, 25, 26, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 1, 170, 113, 114, 115, 116, 117, 118, 121, 119, 120, 122, 123, 27, 171, 124, 125, 3, 172, 173, 5, 4, 2, 174, 175, 176, 177, 178, 179, 180, 181, 182, 28, 183, 7, 126, 127, 184, 8, 185, 6, 186, 187, 188, 11, 10, 9, 13, 128, 129, 189, 14, 190, 12, 130, 131, 132, 133, 134, 135, 136, 137, 15, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 17, 148, 149, 191, 18, 192, 16, 20, 150, 151, 193, 21, 194, 19, 22, 195, 29, 23, 196, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 152, 153, 154, 155, 156, 157, 158 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_27e0:
  %0 = mul i64 %arg1, 3, !insn.addr !882
  %1 = and i64 %0, 4294967295, !insn.addr !882
  ret i64 %1, !insn.addr !883

; uselistorder directives
  uselistorder i64 4294967295, { 29, 49, 15, 25, 16, 0, 1, 17, 30, 2, 3, 4, 31, 18, 26, 28, 5, 32, 50, 33, 6, 27, 19, 20, 34, 10, 7, 8, 9, 11, 21, 35, 36, 22, 37, 38, 12, 39, 40, 13, 41, 23, 42, 43, 24, 44, 45, 46, 14, 47, 48 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_27e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !884

; uselistorder directives
  uselistorder i32 1, { 10, 9, 8, 13, 106, 14, 15, 16, 17, 118, 112, 7, 6, 5, 18, 105, 111, 24, 23, 22, 21, 20, 19, 4, 119, 107, 33, 32, 31, 30, 29, 28, 27, 26, 25, 1, 40, 39, 38, 37, 36, 35, 34, 120, 108, 49, 48, 47, 46, 45, 44, 43, 42, 41, 52, 51, 50, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 0, 121, 109, 80, 79, 78, 77, 76, 75, 74, 73, 72, 113, 82, 81, 12, 122, 110, 114, 91, 90, 89, 88, 87, 86, 85, 84, 83, 123, 115, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 116, 103, 102, 11, 3, 2, 117, 104 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movdqa.1(i128) local_unnamed_addr

declare i128 @__asm_paddb(i128, i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i64 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_movdqu.2(i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i64 @__asm_mfence() local_unnamed_addr

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
!36 = !{i64 4624}
!37 = !{i64 4627}
!38 = !{i64 4630}
!39 = !{i64 4640}
!40 = !{i64 4643}
!41 = !{i64 4656}
!42 = !{i64 4659}
!43 = !{i64 4672}
!44 = !{i64 4683}
!45 = !{i64 4690}
!46 = !{i64 4692}
!47 = !{i64 4704}
!48 = !{i64 4711}
!49 = !{i64 4721}
!50 = !{i64 4730}
!51 = !{i64 4739}
!52 = !{i64 4747}
!53 = !{i64 4755}
!54 = !{i64 4763}
!55 = !{i64 4771}
!56 = !{i64 4779}
!57 = !{i64 4797}
!58 = !{i64 4800}
!59 = !{i64 4806}
!60 = !{i64 4810}
!61 = !{i64 4815}
!62 = !{i64 4821}
!63 = !{i64 4825}
!64 = !{i64 4830}
!65 = !{i64 4836}
!66 = !{i64 4840}
!67 = !{i64 4844}
!68 = !{i64 4850}
!69 = !{i64 4854}
!70 = !{i64 4858}
!71 = !{i64 4864}
!72 = !{i64 4868}
!73 = !{i64 4872}
!74 = !{i64 4878}
!75 = !{i64 4882}
!76 = !{i64 4886}
!77 = !{i64 4892}
!78 = !{i64 4896}
!79 = !{i64 4900}
!80 = !{i64 4906}
!81 = !{i64 4910}
!82 = !{i64 4914}
!83 = !{i64 4920}
!84 = !{i64 4922}
!85 = !{i64 4937}
!86 = !{i64 4944}
!87 = !{i64 4955}
!88 = !{i64 4961}
!89 = !{i64 4974}
!90 = !{i64 4977}
!91 = !{i64 4980}
!92 = !{i64 4988}
!93 = !{i64 4992}
!94 = !{i64 4998}
!95 = !{i64 5001}
!96 = !{i64 5013}
!97 = !{i64 5016}
!98 = !{i64 5023}
!99 = !{i64 5027}
!100 = !{i64 5031}
!101 = !{i64 5034}
!102 = !{i64 5043}
!103 = !{i64 5047}
!104 = !{i64 5057}
!105 = !{i64 5065}
!106 = !{i64 5073}
!107 = !{i64 5081}
!108 = !{i64 5088}
!109 = !{i64 5092}
!110 = !{i64 5096}
!111 = !{i64 5100}
!112 = !{i64 5104}
!113 = !{i64 5109}
!114 = !{i64 5115}
!115 = !{i64 5119}
!116 = !{i64 5123}
!117 = !{i64 5127}
!118 = !{i64 5133}
!119 = !{i64 5139}
!120 = !{i64 5143}
!121 = !{i64 5147}
!122 = !{i64 5151}
!123 = !{i64 5153}
!124 = !{i64 5157}
!125 = !{i64 5161}
!126 = !{i64 5163}
!127 = !{i64 5171}
!128 = !{i64 5175}
!129 = !{i64 5180}
!130 = !{i64 5186}
!131 = !{i64 5189}
!132 = !{i64 5191}
!133 = !{i64 5194}
!134 = !{i64 5200}
!135 = !{i64 5203}
!136 = !{i64 5207}
!137 = !{i64 5210}
!138 = !{i64 5213}
!139 = !{i64 5217}
!140 = !{i64 5220}
!141 = !{i64 5222}
!142 = !{i64 5224}
!143 = !{i64 5233}
!144 = !{i64 5234}
!145 = !{i64 5235}
!146 = !{i64 5245}
!147 = !{i64 5249}
!148 = !{i64 5264}
!149 = !{i64 5266}
!150 = !{i64 5272}
!151 = !{i64 5275}
!152 = !{i64 5278}
!153 = !{i64 5286}
!154 = !{i64 5290}
!155 = !{i64 5296}
!156 = !{i64 5299}
!157 = !{i64 5313}
!158 = !{i64 5317}
!159 = !{i64 5320}
!160 = !{i64 5327}
!161 = !{i64 5331}
!162 = !{i64 5335}
!163 = !{i64 5338}
!164 = !{i64 5347}
!165 = !{i64 5351}
!166 = !{i64 5361}
!167 = !{i64 5369}
!168 = !{i64 5377}
!169 = !{i64 5385}
!170 = !{i64 5392}
!171 = !{i64 5396}
!172 = !{i64 5400}
!173 = !{i64 5404}
!174 = !{i64 5409}
!175 = !{i64 5413}
!176 = !{i64 5419}
!177 = !{i64 5423}
!178 = !{i64 5427}
!179 = !{i64 5431}
!180 = !{i64 5435}
!181 = !{i64 5439}
!182 = !{i64 5445}
!183 = !{i64 5449}
!184 = !{i64 5455}
!185 = !{i64 5459}
!186 = !{i64 5463}
!187 = !{i64 5467}
!188 = !{i64 5469}
!189 = !{i64 5473}
!190 = !{i64 5487}
!191 = !{i64 5475}
!192 = !{i64 5479}
!193 = !{i64 5483}
!194 = !{i64 5495}
!195 = !{i64 5499}
!196 = !{i64 5504}
!197 = !{i64 5510}
!198 = !{i64 5513}
!199 = !{i64 5515}
!200 = !{i64 5518}
!201 = !{i64 5520}
!202 = !{i64 5523}
!203 = !{i64 5527}
!204 = !{i64 5530}
!205 = !{i64 5533}
!206 = !{i64 5537}
!207 = !{i64 5540}
!208 = !{i64 5542}
!209 = !{i64 5544}
!210 = !{i64 5551}
!211 = !{i64 5552}
!212 = !{i64 5562}
!213 = !{i64 5566}
!214 = !{i64 5589}
!215 = !{i64 5600}
!216 = !{i64 5601}
!217 = !{i64 5615}
!218 = !{i64 5636}
!219 = !{i64 5655}
!220 = !{i64 5674}
!221 = !{i64 5693}
!222 = !{i64 5712}
!223 = !{i64 5717}
!224 = !{i64 5725}
!225 = !{i64 5734}
!226 = !{i64 5743}
!227 = !{i64 5751}
!228 = !{i64 5759}
!229 = !{i64 5767}
!230 = !{i64 5775}
!231 = !{i64 5783}
!232 = !{i64 5791}
!233 = !{i64 5792}
!234 = !{i64 5797}
!235 = !{i64 5801}
!236 = !{i64 5806}
!237 = !{i64 5812}
!238 = !{i64 5816}
!239 = !{i64 5821}
!240 = !{i64 5827}
!241 = !{i64 5831}
!242 = !{i64 5835}
!243 = !{i64 5841}
!244 = !{i64 5845}
!245 = !{i64 5849}
!246 = !{i64 5855}
!247 = !{i64 5859}
!248 = !{i64 5863}
!249 = !{i64 5869}
!250 = !{i64 5873}
!251 = !{i64 5877}
!252 = !{i64 5883}
!253 = !{i64 5887}
!254 = !{i64 5891}
!255 = !{i64 5897}
!256 = !{i64 5901}
!257 = !{i64 5905}
!258 = !{i64 5912}
!259 = !{i64 5914}
!260 = !{i64 5931}
!261 = !{i64 5950}
!262 = !{i64 5969}
!263 = !{i64 5996}
!264 = !{i64 6016}
!265 = !{i64 6026}
!266 = !{i64 6031}
!267 = !{i64 6034}
!268 = !{i64 6038}
!269 = !{i64 6017}
!270 = !{i64 6046}
!271 = !{i64 6049}
!272 = !{i64 6066}
!273 = !{i64 6069}
!274 = !{i64 6072}
!275 = !{i64 6079}
!276 = !{i64 6083}
!277 = !{i64 6087}
!278 = !{i64 6090}
!279 = !{i64 6099}
!280 = !{i64 6103}
!281 = !{i64 6113}
!282 = !{i64 6121}
!283 = !{i64 6129}
!284 = !{i64 6137}
!285 = !{i64 6144}
!286 = !{i64 6148}
!287 = !{i64 6152}
!288 = !{i64 6156}
!289 = !{i64 6160}
!290 = !{i64 6165}
!291 = !{i64 6171}
!292 = !{i64 6175}
!293 = !{i64 6179}
!294 = !{i64 6183}
!295 = !{i64 6189}
!296 = !{i64 6195}
!297 = !{i64 6199}
!298 = !{i64 6203}
!299 = !{i64 6207}
!300 = !{i64 6209}
!301 = !{i64 6213}
!302 = !{i64 6217}
!303 = !{i64 6219}
!304 = !{i64 6227}
!305 = !{i64 6231}
!306 = !{i64 6236}
!307 = !{i64 6242}
!308 = !{i64 6245}
!309 = !{i64 6247}
!310 = !{i64 6250}
!311 = !{i64 6256}
!312 = !{i64 6259}
!313 = !{i64 6263}
!314 = !{i64 6266}
!315 = !{i64 6269}
!316 = !{i64 6273}
!317 = !{i64 6276}
!318 = !{i64 6278}
!319 = !{i64 6280}
!320 = !{i64 6283}
!321 = !{i64 6289}
!322 = !{i64 6294}
!323 = !{i64 6297}
!324 = !{i64 6298}
!325 = !{i64 6308}
!326 = !{i64 6312}
!327 = !{i64 6320}
!328 = !{i64 6325}
!329 = !{i64 6333}
!330 = !{i64 6338}
!331 = !{i64 6341}
!332 = !{i64 6347}
!333 = !{i64 6323}
!334 = !{i64 6364}
!335 = !{i64 6368}
!336 = !{i64 6372}
!337 = !{i64 6399}
!338 = !{i64 6403}
!339 = !{i64 6410}
!340 = !{i64 6414}
!341 = !{i64 6423}
!342 = !{i64 6427}
!343 = !{i64 6429}
!344 = !{i64 6435}
!345 = !{i64 6439}
!346 = !{i64 6441}
!347 = !{i64 6445}
!348 = !{i64 6451}
!349 = !{i64 6455}
!350 = !{i64 6464}
!351 = !{i64 6470}
!352 = !{i64 6474}
!353 = !{i64 6480}
!354 = !{i64 6484}
!355 = !{i64 6490}
!356 = !{i64 6496}
!357 = !{i64 6502}
!358 = !{i64 6506}
!359 = !{i64 6510}
!360 = !{i64 6516}
!361 = !{i64 6520}
!362 = !{i64 6524}
!363 = !{i64 6530}
!364 = !{i64 6534}
!365 = !{i64 6540}
!366 = !{i64 6544}
!367 = !{i64 6548}
!368 = !{i64 6552}
!369 = !{i64 6420}
!370 = !{i64 6554}
!371 = !{i64 6557}
!372 = !{i64 6560}
!373 = !{i64 6568}
!374 = !{i64 6572}
!375 = !{i64 6577}
!376 = !{i64 6581}
!377 = !{i64 6587}
!378 = !{i64 6591}
!379 = !{i64 6595}
!380 = !{i64 6599}
!381 = !{i64 6601}
!382 = !{i64 6605}
!383 = !{i64 6610}
!384 = !{i64 6614}
!385 = !{i64 6619}
!386 = !{i64 6623}
!387 = !{i64 6627}
!388 = !{i64 6630}
!389 = !{i64 6632}
!390 = !{i64 6636}
!391 = !{i64 6640}
!392 = !{i64 6643}
!393 = !{i64 6647}
!394 = !{i64 6650}
!395 = !{i64 6655}
!396 = !{i64 6660}
!397 = !{i64 6668}
!398 = !{i64 6672}
!399 = !{i64 6680}
!400 = !{i64 6685}
!401 = !{i64 6688}
!402 = !{i64 6693}
!403 = !{i64 6700}
!404 = !{i64 6703}
!405 = !{i64 6718}
!406 = !{i64 6723}
!407 = !{i64 6726}
!408 = !{i64 6728}
!409 = !{i64 6735}
!410 = !{i64 6739}
!411 = !{i64 6746}
!412 = !{i64 6760}
!413 = !{i64 6766}
!414 = !{i64 6783}
!415 = !{i64 6788}
!416 = !{i64 6796}
!417 = !{i64 6800}
!418 = !{i64 6810}
!419 = !{i64 6815}
!420 = !{i64 6818}
!421 = !{i64 6822}
!422 = !{i64 6801}
!423 = !{i64 6830}
!424 = !{i64 6833}
!425 = !{i64 6850}
!426 = !{i64 6853}
!427 = !{i64 6856}
!428 = !{i64 6863}
!429 = !{i64 6867}
!430 = !{i64 6871}
!431 = !{i64 6874}
!432 = !{i64 6883}
!433 = !{i64 6887}
!434 = !{i64 6897}
!435 = !{i64 6905}
!436 = !{i64 6913}
!437 = !{i64 6921}
!438 = !{i64 6928}
!439 = !{i64 6932}
!440 = !{i64 6936}
!441 = !{i64 6940}
!442 = !{i64 6945}
!443 = !{i64 6949}
!444 = !{i64 6955}
!445 = !{i64 6959}
!446 = !{i64 6963}
!447 = !{i64 6967}
!448 = !{i64 6971}
!449 = !{i64 6975}
!450 = !{i64 6981}
!451 = !{i64 6985}
!452 = !{i64 6991}
!453 = !{i64 6995}
!454 = !{i64 6999}
!455 = !{i64 7003}
!456 = !{i64 7005}
!457 = !{i64 7009}
!458 = !{i64 7023}
!459 = !{i64 7011}
!460 = !{i64 7015}
!461 = !{i64 7019}
!462 = !{i64 7031}
!463 = !{i64 7035}
!464 = !{i64 7040}
!465 = !{i64 7046}
!466 = !{i64 7049}
!467 = !{i64 7051}
!468 = !{i64 7054}
!469 = !{i64 7056}
!470 = !{i64 7059}
!471 = !{i64 7063}
!472 = !{i64 7066}
!473 = !{i64 7069}
!474 = !{i64 7073}
!475 = !{i64 7076}
!476 = !{i64 7078}
!477 = !{i64 7080}
!478 = !{i64 7083}
!479 = !{i64 7089}
!480 = !{i64 7094}
!481 = !{i64 7097}
!482 = !{i64 7098}
!483 = !{i64 7108}
!484 = !{i64 7112}
!485 = !{i64 7120}
!486 = !{i64 7123}
!487 = !{i64 7148}
!488 = !{i64 7153}
!489 = !{i64 7156}
!490 = !{i64 7159}
!491 = !{i64 7164}
!492 = !{i64 7175}
!493 = !{i64 7180}
!494 = !{i64 7184}
!495 = !{i64 7187}
!496 = !{i64 7189}
!497 = !{i64 7195}
!498 = !{i64 7212}
!499 = !{i64 7225}
!500 = !{i64 7229}
!501 = !{i64 7246}
!502 = !{i64 7248}
!503 = !{i64 7261}
!504 = !{i64 7272}
!505 = !{i64 7275}
!506 = !{i64 7284}
!507 = !{i64 7295}
!508 = !{i64 7300}
!509 = !{i64 7303}
!510 = !{i64 7312}
!511 = !{i64 7318}
!512 = !{i64 7326}
!513 = !{i64 7335}
!514 = !{i64 7340}
!515 = !{i64 7343}
!516 = !{i64 7352}
!517 = !{i64 7358}
!518 = !{i64 7366}
!519 = !{i64 7375}
!520 = !{i64 7380}
!521 = !{i64 7383}
!522 = !{i64 7392}
!523 = !{i64 7398}
!524 = !{i64 7406}
!525 = !{i64 7415}
!526 = !{i64 7420}
!527 = !{i64 7423}
!528 = !{i64 7429}
!529 = !{i64 7435}
!530 = !{i64 7443}
!531 = !{i64 7453}
!532 = !{i64 7456}
!533 = !{i64 7459}
!534 = !{i64 7463}
!535 = !{i64 7466}
!536 = !{i64 7472}
!537 = !{i64 7479}
!538 = !{i64 7487}
!539 = !{i64 7490}
!540 = !{i64 7504}
!541 = !{i64 7511}
!542 = !{i64 7519}
!543 = !{i64 7522}
!544 = !{i64 7536}
!545 = !{i64 7543}
!546 = !{i64 7551}
!547 = !{i64 7554}
!548 = !{i64 7568}
!549 = !{i64 7575}
!550 = !{i64 7583}
!551 = !{i64 7586}
!552 = !{i64 7593}
!553 = !{i64 7609}
!554 = !{i64 7624}
!555 = !{i64 7629}
!556 = !{i64 7632}
!557 = !{i64 7634}
!558 = !{i64 7636}
!559 = !{i64 7639}
!560 = !{i64 7644}
!561 = !{i64 7653}
!562 = !{i64 7664}
!563 = !{i64 7676}
!564 = !{i64 7681}
!565 = !{i64 7684}
!566 = !{i64 7688}
!567 = !{i64 7667}
!568 = !{i64 7696}
!569 = !{i64 7699}
!570 = !{i64 7719}
!571 = !{i64 7722}
!572 = !{i64 7725}
!573 = !{i64 7732}
!574 = !{i64 7736}
!575 = !{i64 7745}
!576 = !{i64 7749}
!577 = !{i64 7751}
!578 = !{i64 7761}
!579 = !{i64 7766}
!580 = !{i64 7770}
!581 = !{i64 7780}
!582 = !{i64 7789}
!583 = !{i64 7798}
!584 = !{i64 7807}
!585 = !{i64 7815}
!586 = !{i64 7823}
!587 = !{i64 7831}
!588 = !{i64 7839}
!589 = !{i64 7847}
!590 = !{i64 7856}
!591 = !{i64 7860}
!592 = !{i64 7865}
!593 = !{i64 7870}
!594 = !{i64 7876}
!595 = !{i64 7880}
!596 = !{i64 7885}
!597 = !{i64 7889}
!598 = !{i64 7894}
!599 = !{i64 7900}
!600 = !{i64 7906}
!601 = !{i64 7910}
!602 = !{i64 7914}
!603 = !{i64 7918}
!604 = !{i64 7922}
!605 = !{i64 7928}
!606 = !{i64 7934}
!607 = !{i64 7938}
!608 = !{i64 7942}
!609 = !{i64 7946}
!610 = !{i64 7950}
!611 = !{i64 7956}
!612 = !{i64 7962}
!613 = !{i64 7966}
!614 = !{i64 7970}
!615 = !{i64 7974}
!616 = !{i64 7742}
!617 = !{i64 7976}
!618 = !{i64 7979}
!619 = !{i64 7981}
!620 = !{i64 7989}
!621 = !{i64 7995}
!622 = !{i64 8003}
!623 = !{i64 8011}
!624 = !{i64 8016}
!625 = !{i64 8020}
!626 = !{i64 8024}
!627 = !{i64 8030}
!628 = !{i64 8035}
!629 = !{i64 8039}
!630 = !{i64 8043}
!631 = !{i64 8046}
!632 = !{i64 8048}
!633 = !{i64 8051}
!634 = !{i64 8064}
!635 = !{i64 8067}
!636 = !{i64 8071}
!637 = !{i64 8074}
!638 = !{i64 8078}
!639 = !{i64 8081}
!640 = !{i64 8083}
!641 = !{i64 8085}
!642 = !{i64 8088}
!643 = !{i64 8097}
!644 = !{i64 8118}
!645 = !{i64 8123}
!646 = !{i64 8126}
!647 = !{i64 8145}
!648 = !{i64 8153}
!649 = !{i64 8158}
!650 = !{i64 8161}
!651 = !{i64 8168}
!652 = !{i64 8176}
!653 = !{i64 8179}
!654 = !{i64 8181}
!655 = !{i64 8183}
!656 = !{i64 8189}
!657 = !{i64 8194}
!658 = !{i64 8208}
!659 = !{i64 8218}
!660 = !{i64 8237}
!661 = !{i64 8253}
!662 = !{i64 8263}
!663 = !{i64 8268}
!664 = !{i64 8271}
!665 = !{i64 8276}
!666 = !{i64 8283}
!667 = !{i64 8286}
!668 = !{i64 8301}
!669 = !{i64 8306}
!670 = !{i64 8309}
!671 = !{i64 8311}
!672 = !{i64 8318}
!673 = !{i64 8322}
!674 = !{i64 8329}
!675 = !{i64 8343}
!676 = !{i64 8349}
!677 = !{i64 8366}
!678 = !{i64 8378}
!679 = !{i64 8382}
!680 = !{i64 8401}
!681 = !{i64 8420}
!682 = !{i64 8430}
!683 = !{i64 8435}
!684 = !{i64 8438}
!685 = !{i64 8443}
!686 = !{i64 8454}
!687 = !{i64 8459}
!688 = !{i64 8463}
!689 = !{i64 8466}
!690 = !{i64 8468}
!691 = !{i64 8474}
!692 = !{i64 8484}
!693 = !{i64 8500}
!694 = !{i64 8505}
!695 = !{i64 8510}
!696 = !{i64 8515}
!697 = !{i64 8529}
!698 = !{i64 8534}
!699 = !{i64 8538}
!700 = !{i64 8546}
!701 = !{i64 8551}
!702 = !{i64 8563}
!703 = !{i64 8567}
!704 = !{i64 8586}
!705 = !{i64 8605}
!706 = !{i64 8619}
!707 = !{i64 8624}
!708 = !{i64 8629}
!709 = !{i64 8631}
!710 = !{i64 8633}
!711 = !{i64 8644}
!712 = !{i64 8649}
!713 = !{i64 8655}
!714 = !{i64 8658}
!715 = !{i64 8662}
!716 = !{i64 8665}
!717 = !{i64 8677}
!718 = !{i64 8702}
!719 = !{i64 8713}
!720 = !{i64 8727}
!721 = !{i64 8732}
!722 = !{i64 8748}
!723 = !{i64 8755}
!724 = !{i64 8777}
!725 = !{i64 8783}
!726 = !{i64 8784}
!727 = !{i64 8790}
!728 = !{i64 8792}
!729 = !{i64 8800}
!730 = !{i64 8805}
!731 = !{i64 8808}
!732 = !{i64 8810}
!733 = !{i64 8819}
!734 = !{i64 8822}
!735 = !{i64 8843}
!736 = !{i64 8845}
!737 = !{i64 8848}
!738 = !{i64 8854}
!739 = !{i64 8864}
!740 = !{i64 8867}
!741 = !{i64 8870}
!742 = !{i64 8887}
!743 = !{i64 8889}
!744 = !{i64 8892}
!745 = !{i64 8901}
!746 = !{i64 8926}
!747 = !{i64 8930}
!748 = !{i64 8946}
!749 = !{i64 8965}
!750 = !{i64 8976}
!751 = !{i64 8982}
!752 = !{i64 8992}
!753 = !{i64 8998}
!754 = !{i64 9008}
!755 = !{i64 9015}
!756 = !{i64 9024}
!757 = !{i64 9031}
!758 = !{i64 9036}
!759 = !{i64 9056}
!760 = !{i64 9063}
!761 = !{i64 9066}
!762 = !{i64 9068}
!763 = !{i64 9070}
!764 = !{i64 9076}
!765 = !{i64 9093}
!766 = !{i64 9104}
!767 = !{i64 9107}
!768 = !{i64 9125}
!769 = !{i64 9148}
!770 = !{i64 9162}
!771 = !{i64 9177}
!772 = !{i64 9182}
!773 = !{i64 9188}
!774 = !{i64 9199}
!775 = !{i64 9218}
!776 = !{i64 9223}
!777 = !{i64 9250}
!778 = !{i64 9264}
!779 = !{i64 9275}
!780 = !{i64 9294}
!781 = !{i64 9306}
!782 = !{i64 9308}
!783 = !{i64 9320}
!784 = !{i64 9330}
!785 = !{i64 9342}
!786 = !{i64 9346}
!787 = !{i64 9374}
!788 = !{i64 9390}
!789 = !{i64 9406}
!790 = !{i64 9425}
!791 = !{i64 9430}
!792 = !{i64 9454}
!793 = !{i64 9466}
!794 = !{i64 9487}
!795 = !{i64 9492}
!796 = !{i64 9505}
!797 = !{i64 9526}
!798 = !{i64 9545}
!799 = !{i64 9564}
!800 = !{i64 9583}
!801 = !{i64 9593}
!802 = !{i64 9600}
!803 = !{i64 9603}
!804 = !{i64 9616}
!805 = !{i64 9621}
!806 = !{i64 9629}
!807 = !{i64 9624}
!808 = !{i64 9638}
!809 = !{i64 9643}
!810 = !{i64 9648}
!811 = !{i64 9651}
!812 = !{i64 9652}
!813 = !{i64 9664}
!814 = !{i64 9673}
!815 = !{i64 9678}
!816 = !{i64 9686}
!817 = !{i64 9676}
!818 = !{i64 9697}
!819 = !{i64 9706}
!820 = !{i64 9718}
!821 = !{i64 9728}
!822 = !{i64 9733}
!823 = !{i64 9741}
!824 = !{i64 9736}
!825 = !{i64 9751}
!826 = !{i64 9762}
!827 = !{i64 9767}
!828 = !{i64 9771}
!829 = !{i64 9772}
!830 = !{i64 9776}
!831 = !{i64 9778}
!832 = !{i64 9783}
!833 = !{i64 9788}
!834 = !{i64 9781}
!835 = !{i64 9794}
!836 = !{i64 9801}
!837 = !{i64 9803}
!838 = !{i64 9815}
!839 = !{i64 9818}
!840 = !{i64 9822}
!841 = !{i64 9824}
!842 = !{i64 9827}
!843 = !{i64 9838}
!844 = !{i64 9843}
!845 = !{i64 9847}
!846 = !{i64 9853}
!847 = !{i64 9856}
!848 = !{i64 9862}
!849 = !{i64 9865}
!850 = !{i64 9870}
!851 = !{i64 9875}
!852 = !{i64 9873}
!853 = !{i64 9886}
!854 = !{i64 9891}
!855 = !{i64 9895}
!856 = !{i64 9904}
!857 = !{i64 9907}
!858 = !{i64 9909}
!859 = !{i64 9912}
!860 = !{i64 9918}
!861 = !{i64 9920}
!862 = !{i64 9923}
!863 = !{i64 9927}
!864 = !{i64 9930}
!865 = !{i64 9932}
!866 = !{i64 9938}
!867 = !{i64 9963}
!868 = !{i64 9982}
!869 = !{i64 10001}
!870 = !{i64 10052}
!871 = !{i64 10071}
!872 = !{i64 10087}
!873 = !{i64 10106}
!874 = !{i64 10125}
!875 = !{i64 10142}
!876 = !{i64 10162}
!877 = !{i64 10177}
!878 = !{i64 10182}
!879 = !{i64 10187}
!880 = !{i64 10192}
!881 = !{i64 10200}
!882 = !{i64 10208}
!883 = !{i64 10211}
!884 = !{i64 10224}
