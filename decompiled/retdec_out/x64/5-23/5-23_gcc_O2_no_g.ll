source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4014 = external local_unnamed_addr global i64
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2034 = constant [9 x i8] c"03:00:32\00"
@global_var_22d0 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_2029 = constant [11 x i8] c"src/5-23.c\00"
@global_var_201d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_21c0 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@0 = external global i32
@global_var_400 = global i32 0
@1 = internal constant [40 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\A2\84\E5\A4\84\E7\90\86\E4\B8\8E\E6\9D\A1\E4\BB\B6\E7\BC\96\E8\AF\91 ===\0A\00"
@global_var_21f0 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @1, i64 0, i64 0)
@2 = internal constant [27 x i8] c"PP-L2-01: %d (\E6\9C\9F\E6\9C\9B: 64)\0A\00"
@global_var_203d = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"PP-L2-02: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_2058 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"PP-L2-03: %d (\E6\9C\9F\E6\9C\9B: 32)\0A\00"
@global_var_2073 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [31 x i8] c"PP-L2-04: %d (\E6\9C\9F\E6\9C\9B: 0xDF22)\0A\00"
@global_var_2218 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"PP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 116)\0A\00"
@global_var_208e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"PP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 11+5+\E8\A1\8C\E5\8F\B7\E9\95\BF\E5\BA\A6)\0A\00"
@global_var_2238 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [27 x i8] c"PP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_20aa = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @8, i64 0, i64 0)
@9 = internal constant [27 x i8] c"PP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_20c5 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @9, i64 0, i64 0)
@10 = internal constant [27 x i8] c"PP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_20e0 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"PP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 500)\0A\00"
@global_var_20fb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [41 x i8] c"PP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 100+\E8\A1\8C\E5\8F\B7+0+1+2)\0A\00"
@global_var_2268 = constant i8* getelementptr inbounds ([41 x i8], [41 x i8]* @12, i64 0, i64 0)
@13 = internal constant [43 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E8\81\94\E6\B1\87\E7\BC\96\E4\B8\8E\E5\BA\95\E5\B1\82\E7\89\B9\E6\80\A7 ===\0A\00"
@global_var_2298 = constant i8* getelementptr inbounds ([43 x i8], [43 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"ASM-L4-01: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2117 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"ASM-L4-02: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2133 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"ASM-L4-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_214f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"ASM-L4-04: %d (\E6\9C\9F\E6\9C\9B: 36)\0A\00"
@global_var_216b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"ASM-L4-05: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_2187 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"ASM-L4-06: %d (\E6\9C\9F\E6\9C\9B: 77)\0A\00"
@global_var_21a3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 16360 to i64*), align 8, !insn.addr !1
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

define void @function_1090(i64* %d) local_unnamed_addr {
dec_label_pc_1090:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_10a0() local_unnamed_addr {
dec_label_pc_10a0:
  call void @__stack_chk_fail(), !insn.addr !7
  ret void, !insn.addr !7
}

define i64* @function_10b0(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i64* @mmap(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !8
  ret i64* %0, !insn.addr !8
}

define i32 @function_10c0(i64* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @munmap(i64* %addr, i32 %len), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10d0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10e0(i64* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 @mprotect(i64* %addr, i32 %len, i32 %prot), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_10f0(i32 %name) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1100:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_preprocessing_features(), !insn.addr !13
  %5 = call i64 @test_asm_features(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !14
  ret i64 0, !insn.addr !15

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1120:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !16
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !16
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !16
  %3 = call i32 @__libc_start_main(i64 4352, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !16
  %4 = call i64 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  ret i64 16408, !insn.addr !18
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 0, !insn.addr !19
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16404 to i8*), align 4, !insn.addr !20
  %3 = icmp eq i8 %2, 0, !insn.addr !20
  %4 = icmp eq i1 %3, false, !insn.addr !21
  br i1 %4, label %dec_label_pc_11f8, label %dec_label_pc_11cd, !insn.addr !21

dec_label_pc_11cd:                                ; preds = %dec_label_pc_11c0
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !22
  %6 = icmp eq i64 %5, 0, !insn.addr !22
  br i1 %6, label %dec_label_pc_11e7, label %dec_label_pc_11db, !insn.addr !23

dec_label_pc_11db:                                ; preds = %dec_label_pc_11cd
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !24
  %8 = inttoptr i64 %7 to i64*, !insn.addr !25
  call void @__cxa_finalize(i64* %8), !insn.addr !25
  br label %dec_label_pc_11e7, !insn.addr !25

dec_label_pc_11e7:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* bitcast (i64* @global_var_4014 to i8*), align 8, !insn.addr !27
  ret i64 %9, !insn.addr !28

dec_label_pc_11f8:                                ; preds = %dec_label_pc_11c0
  ret i64 %1, !insn.addr !29
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i64 @register_tm_clones(), !insn.addr !30
  ret i64 %0, !insn.addr !30
}

define i64 @param_macro_constants(i64 %arg1) local_unnamed_addr {
dec_label_pc_1210:
  %0 = trunc i64 %arg1 to i32, !insn.addr !31
  %1 = sub i32 %0, ptrtoint (i32* @global_var_400 to i32), !insn.addr !31
  %2 = xor i32 %0, ptrtoint (i32* @global_var_400 to i32), !insn.addr !31
  %3 = xor i32 %1, %0, !insn.addr !31
  %4 = and i32 %3, %2, !insn.addr !31
  %5 = icmp slt i32 %4, 0, !insn.addr !31
  %6 = icmp eq i32 %1, 0, !insn.addr !31
  %7 = icmp slt i32 %1, 0, !insn.addr !31
  %8 = icmp eq i1 %7, %5, !insn.addr !32
  %9 = icmp eq i1 %6, false, !insn.addr !32
  %10 = icmp eq i1 %8, %9, !insn.addr !32
  %11 = select i1 %10, i64 64, i64 512, !insn.addr !32
  ret i64 %11, !insn.addr !33

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 0 }
}

define i64 @call_macro_constants() local_unnamed_addr {
dec_label_pc_1230:
  ret i64 64, !insn.addr !34
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1240:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !35
  %1 = mul nsw i64 %0, %0, !insn.addr !35
  %2 = trunc i64 %arg1 to i32, !insn.addr !36
  %3 = trunc i64 %arg2 to i32, !insn.addr !36
  %4 = sub i32 %2, %3, !insn.addr !36
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !36
  %7 = xor i32 %4, %2, !insn.addr !36
  %8 = and i32 %7, %6, !insn.addr !36
  %9 = icmp slt i32 %8, 0, !insn.addr !36
  %10 = icmp slt i32 %4, 0, !insn.addr !36
  %11 = icmp eq i1 %10, %9, !insn.addr !37
  %.v = select i1 %11, i64 %arg1, i64 %arg2
  %12 = add i64 %.v, %1, !insn.addr !38
  %13 = and i64 %12, 4294967295, !insn.addr !38
  ret i64 %13, !insn.addr !39

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 2, 1, 3, 0 }
}

define i64 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1260:
  ret i64 30, !insn.addr !40
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1270:
  %0 = mul i64 %arg1, 2, !insn.addr !41
  %1 = add i64 %arg1, 2, !insn.addr !41
  %2 = add i64 %1, %0, !insn.addr !41
  %3 = and i64 %2, 4294967295, !insn.addr !41
  ret i64 %3, !insn.addr !42

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1280:
  ret i64 32, !insn.addr !43
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1290:
  %0 = mul i64 %arg1, 4, !insn.addr !44
  %1 = add i64 %arg1, 57072, !insn.addr !44
  %2 = add i64 %1, %0, !insn.addr !44
  %3 = and i64 %2, 4294967295, !insn.addr !44
  ret i64 %3, !insn.addr !45

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_12a0:
  ret i64 57122, !insn.addr !46
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = add i64 %arg1, 16, !insn.addr !47
  %1 = and i64 %0, 4294967295, !insn.addr !47
  ret i64 %1, !insn.addr !48
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_12c0:
  ret i64 116, !insn.addr !49
}

define i64 @param_stringize() local_unnamed_addr {
dec_label_pc_12d0:
  ret i64 19, !insn.addr !50
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_12e0:
  ret i64 19, !insn.addr !51
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = mul i64 %arg1, 10, !insn.addr !52
  %1 = and i64 %0, 4294967294, !insn.addr !52
  ret i64 %1, !insn.addr !53
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_1300:
  %0 = mul i64 %arg1, 10, !insn.addr !54
  %1 = add i64 %arg1, 5, !insn.addr !55
  %2 = add i64 %1, %0, !insn.addr !55
  %3 = and i64 %2, 4294967295, !insn.addr !55
  ret i64 %3, !insn.addr !56

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_1310:
  ret i64 60, !insn.addr !57
}

define i64 @param_variadic_macro(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1320:
  %0 = and i64 %arg2, 4294967295, !insn.addr !58
  %1 = and i64 %arg3, 4294967295, !insn.addr !59
  %2 = and i64 %arg1, 4294967295, !insn.addr !60
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 %2, i64 %0, i64 %1), !insn.addr !61
  %4 = add i64 %arg1, 50, !insn.addr !62
  %5 = and i64 %4, 4294967295, !insn.addr !62
  ret i64 %5, !insn.addr !63
}

define i64 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1350:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !64
  ret i64 60, !insn.addr !65
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = mul i64 %arg1, 2, !insn.addr !66
  %1 = add i64 %arg1, 1, !insn.addr !66
  %2 = add i64 %1, %0, !insn.addr !66
  %3 = and i64 %2, 4294967295, !insn.addr !66
  ret i64 %3, !insn.addr !67

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_13a0:
  ret i64 16, !insn.addr !68
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_13b0:
  ret i64 500, !insn.addr !69
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_13c0:
  ret i64 500, !insn.addr !70
}

define i64 @param_builtin_macros(i64 %arg1) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_21c0, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2029, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22d0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2034, i64 0, i64 0)), !insn.addr !71
  %1 = add i64 %arg1, 282, !insn.addr !72
  %2 = and i64 %1, 4294967295, !insn.addr !72
  ret i64 %2, !insn.addr !73
}

define i64 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_21c0, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2029, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22d0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2034, i64 0, i64 0)), !insn.addr !74
  ret i64 382, !insn.addr !75
}

define i64 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21f0 to i8*)), !insn.addr !76
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_203d to i8*)), !insn.addr !77
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2058 to i8*)), !insn.addr !78
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2073 to i8*)), !insn.addr !79
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2218 to i8*)), !insn.addr !80
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_208e to i8*)), !insn.addr !81
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2238 to i8*)), !insn.addr !82
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20aa to i8*)), !insn.addr !83
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !84
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20c5 to i8*)), !insn.addr !85
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e0 to i8*)), !insn.addr !86
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20fb to i8*)), !insn.addr !87
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_21c0, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2029, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22d0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2034, i64 0, i64 0)), !insn.addr !88
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2268 to i8*)), !insn.addr !89
  %14 = sext i32 %13 to i64, !insn.addr !89
  ret i64 %14, !insn.addr !89
}

define i64 @param_asm_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_1600:
  %0 = add i64 %arg1, 10, !insn.addr !90
  %1 = and i64 %0, 4294967295, !insn.addr !91
  ret i64 %1, !insn.addr !92
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1610:
  ret i64 15, !insn.addr !93
}

define i64 @param_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1630:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !94
  %rax.01.reg2mem = alloca i32, !insn.addr !94
  %storemerge2.reg2mem = alloca i64, !insn.addr !94
  %0 = icmp sgt i64 %arg2, 0, !insn.addr !95
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !95
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !95
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !95
  br i1 %0, label %dec_label_pc_163c, label %dec_label_pc_1643, !insn.addr !95

dec_label_pc_163c:                                ; preds = %dec_label_pc_1630, %dec_label_pc_163c
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %1 = mul i64 %storemerge2.reload, 4, !insn.addr !96
  %2 = add i64 %1, %arg1, !insn.addr !96
  %3 = inttoptr i64 %2 to i32*, !insn.addr !96
  %4 = load i32, i32* %3, align 4, !insn.addr !96
  %5 = add i32 %4, %rax.01.reload, !insn.addr !96
  %6 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !97
  %7 = and i64 %6, 4294967295, !insn.addr !97
  %8 = icmp slt i64 %7, %arg2, !insn.addr !95
  store i64 %7, i64* %storemerge2.reg2mem, !insn.addr !95
  store i32 %5, i32* %rax.01.reg2mem, !insn.addr !95
  br i1 %8, label %dec_label_pc_163c, label %dec_label_pc_1638.dec_label_pc_1643_crit_edge, !insn.addr !95

dec_label_pc_1638.dec_label_pc_1643_crit_edge:    ; preds = %dec_label_pc_163c
  %9 = zext i32 %5 to i64, !insn.addr !96
  store i64 %9, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_1643

dec_label_pc_1643:                                ; preds = %dec_label_pc_1638.dec_label_pc_1643_crit_edge, %dec_label_pc_1630
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !98

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_163c, { 1, 0 }
}

define i64 @call_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1650:
  %rax.01.reg2mem = alloca i32, !insn.addr !99
  %storemerge2.reg2mem = alloca i64, !insn.addr !99
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !100
  %1 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !101
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %rax.01.reg2mem
  br label %dec_label_pc_1678

dec_label_pc_1678:                                ; preds = %dec_label_pc_1650, %dec_label_pc_1678
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %2 = mul i64 %storemerge2.reload, 4, !insn.addr !102
  %3 = add i64 %2, %1, !insn.addr !102
  %4 = inttoptr i64 %3 to i32*, !insn.addr !102
  %5 = load i32, i32* %4, align 4, !insn.addr !102
  %6 = add i32 %5, %rax.01.reload, !insn.addr !102
  %7 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !103
  %8 = and i64 %7, 4294967295, !insn.addr !103
  %9 = icmp ult i64 %8, 5, !insn.addr !104
  store i64 %8, i64* %storemerge2.reg2mem, !insn.addr !104
  store i32 %6, i32* %rax.01.reg2mem, !insn.addr !104
  br i1 %9, label %dec_label_pc_1678, label %dec_label_pc_167f, !insn.addr !104

dec_label_pc_167f:                                ; preds = %dec_label_pc_1678
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !105
  %11 = icmp eq i64 %0, %10, !insn.addr !105
  %12 = icmp eq i1 %11, false, !insn.addr !106
  br i1 %12, label %dec_label_pc_169a, label %dec_label_pc_1692, !insn.addr !106

dec_label_pc_1692:                                ; preds = %dec_label_pc_167f
  %13 = zext i32 %6 to i64, !insn.addr !102
  ret i64 %13, !insn.addr !107

dec_label_pc_169a:                                ; preds = %dec_label_pc_167f
  call void @__stack_chk_fail(), !insn.addr !108
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !109

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1678, { 1, 0 }
}

define i64 @param_asm_multi_insn() local_unnamed_addr {
dec_label_pc_16a0:
  %0 = alloca i64
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !110
  %rax.01.reg2mem = alloca i64, !insn.addr !110
  %rdx.02.reg2mem = alloca i64, !insn.addr !110
  %rsi.03.reg2mem = alloca i64, !insn.addr !110
  %rdi.04.reg2mem = alloca i64, !insn.addr !110
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !111
  br i1 %2, label %dec_label_pc_16ba, label %dec_label_pc_16ab, !insn.addr !112

dec_label_pc_16ab:                                ; preds = %dec_label_pc_16a0, %dec_label_pc_16ab
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %rdi.04.reload = load i64, i64* %rdi.04.reg2mem
  %3 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !113
  %4 = load i8, i8* %3, align 1, !insn.addr !113
  %5 = zext i8 %4 to i64, !insn.addr !113
  %6 = and i64 %rax.01.reload, -256, !insn.addr !113
  %7 = or i64 %6, %5, !insn.addr !113
  %8 = inttoptr i64 %rdi.04.reload to i8*, !insn.addr !114
  store i8 %4, i8* %8, align 1, !insn.addr !114
  %9 = add i64 %rdi.04.reload, 1, !insn.addr !115
  %10 = add i64 %rsi.03.reload, 1, !insn.addr !116
  %11 = add i64 %rdx.02.reload, -1, !insn.addr !117
  %12 = icmp eq i64 %11, 0, !insn.addr !111
  store i64 %9, i64* %rdi.04.reg2mem, !insn.addr !112
  store i64 %10, i64* %rsi.03.reg2mem, !insn.addr !112
  store i64 %11, i64* %rdx.02.reg2mem, !insn.addr !112
  store i64 %7, i64* %rax.01.reg2mem, !insn.addr !112
  store i64 %7, i64* %rax.0.lcssa.reg2mem, !insn.addr !112
  br i1 %12, label %dec_label_pc_16ba, label %dec_label_pc_16ab, !insn.addr !112

dec_label_pc_16ba:                                ; preds = %dec_label_pc_16ab, %dec_label_pc_16a0
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !118

; uselistorder directives
  uselistorder i64* %rdi.04.reg2mem, { 1, 0 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_16ab, { 1, 0 }
}

define i64 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_16c0:
  %0 = alloca i128
  %1 = alloca i8
  %rcx.03.reg2mem = alloca i64, !insn.addr !119
  %rdx.04.reg2mem = alloca i64, !insn.addr !119
  %rsi.05.reg2mem = alloca i64, !insn.addr !119
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-66 = alloca i64, align 8
  %stack_var_-56 = alloca i8, align 1
  %4 = call i128 @__asm_pxor(i128 %2, i128 %2), !insn.addr !120
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !121
  %6 = ptrtoint i8* %stack_var_-56 to i64, !insn.addr !122
  %7 = call i64 @__asm_movaps(i128 %4), !insn.addr !123
  %8 = trunc i64 %7 to i8, !insn.addr !123
  store i8 %8, i8* %stack_var_-56, align 1, !insn.addr !123
  %9 = ptrtoint i64* %stack_var_-66 to i64, !insn.addr !124
  %10 = call i64 @__asm_movaps(i128 %4), !insn.addr !125
  store i64 5999111841566713160, i64* %stack_var_-66, align 8, !insn.addr !126
  store i64 9, i64* %rsi.05.reg2mem
  store i64 %6, i64* %rdx.04.reg2mem
  store i64 %9, i64* %rcx.03.reg2mem
  br label %dec_label_pc_1713

dec_label_pc_1713:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_1713
  %rcx.03.reload = load i64, i64* %rcx.03.reg2mem
  %rdx.04.reload = load i64, i64* %rdx.04.reg2mem
  %rsi.05.reload = load i64, i64* %rsi.05.reg2mem
  %11 = inttoptr i64 %rcx.03.reload to i8*, !insn.addr !127
  %12 = load i8, i8* %11, align 1, !insn.addr !127
  %13 = inttoptr i64 %rdx.04.reload to i8*, !insn.addr !128
  store i8 %12, i8* %13, align 1, !insn.addr !128
  %14 = add i64 %rdx.04.reload, 1, !insn.addr !129
  %15 = add i64 %rcx.03.reload, 1, !insn.addr !130
  %16 = add nsw i64 %rsi.05.reload, -1, !insn.addr !131
  %17 = icmp eq i64 %16, 0, !insn.addr !132
  store i64 %16, i64* %rsi.05.reg2mem, !insn.addr !133
  store i64 %14, i64* %rdx.04.reg2mem, !insn.addr !133
  store i64 %15, i64* %rcx.03.reg2mem, !insn.addr !133
  br i1 %17, label %dec_label_pc_1722, label %dec_label_pc_1713, !insn.addr !133

dec_label_pc_1722:                                ; preds = %dec_label_pc_1713
  %18 = load i8, i8* %stack_var_-56, align 1, !insn.addr !134
  %19 = call i64 @__readfsqword(i64 40), !insn.addr !135
  %20 = icmp eq i64 %5, %19, !insn.addr !135
  %21 = icmp eq i1 %20, false, !insn.addr !136
  br i1 %21, label %dec_label_pc_1757, label %dec_label_pc_174b, !insn.addr !136

dec_label_pc_174b:                                ; preds = %dec_label_pc_1722
  %22 = icmp eq i8 %18, 72, !insn.addr !134
  %23 = icmp eq i1 %22, false, !insn.addr !137
  %24 = icmp eq i8 %3, 111
  %25 = select i1 %24, i64 42, i64 4294967295
  %storemerge = select i1 %23, i64 4294967295, i64 %25
  ret i64 %storemerge, !insn.addr !138

dec_label_pc_1757:                                ; preds = %dec_label_pc_1722
  call void @__stack_chk_fail(), !insn.addr !139
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !140

; uselistorder directives
  uselistorder i128 %4, { 1, 0 }
  uselistorder i8* %stack_var_-56, { 2, 1, 0 }
  uselistorder i64* %rsi.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.03.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 5, 6, 2, 3, 0, 1, 4 }
  uselistorder label %dec_label_pc_1713, { 1, 0 }
}

define i64 @param_asm_simd(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1760:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !141
  %2 = call i128 @__asm_movaps.1(i128 %1), !insn.addr !141
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !142
  %5 = call i128 @__asm_movaps.1(i128 %4), !insn.addr !142
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !143
  %7 = call i64 @__asm_movaps(i128 %6), !insn.addr !144
  %8 = sext i64 %7 to i128, !insn.addr !144
  %9 = inttoptr i64 %arg3 to i128*, !insn.addr !144
  store i128 %8, i128* %9, align 8, !insn.addr !144
  ret i64 0, !insn.addr !145
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1780:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !146
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !146
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !147
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !147
  %6 = call i64 @__asm_movaps(i128 %5), !insn.addr !148
  %7 = sext i64 %6 to i128, !insn.addr !148
  %8 = inttoptr i64 %arg3 to i128*, !insn.addr !148
  store i128 %7, i128* %8, align 8, !insn.addr !148
  ret i64 0, !insn.addr !149
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %5 = call i128 @__asm_movaps.1(i128 8589934593), !insn.addr !151
  %6 = call i128 @__asm_movaps.1(i128 25769803781), !insn.addr !152
  %7 = call i128 @__asm_paddd(i128 %5, i128 %6), !insn.addr !153
  %8 = call i64 @__asm_movaps(i128 %7), !insn.addr !154
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !155
  %10 = icmp eq i64 %4, %9, !insn.addr !155
  %11 = icmp eq i1 %10, false, !insn.addr !156
  br i1 %11, label %dec_label_pc_1830, label %dec_label_pc_182b, !insn.addr !156

dec_label_pc_182b:                                ; preds = %dec_label_pc_17a0
  %12 = trunc i64 %8 to i32, !insn.addr !154
  %13 = add i32 %2, %1, !insn.addr !157
  %14 = add i32 %13, %3, !insn.addr !158
  %15 = add i32 %14, %12, !insn.addr !159
  %16 = zext i32 %15 to i64, !insn.addr !159
  ret i64 %16, !insn.addr !160

dec_label_pc_1830:                                ; preds = %dec_label_pc_17a0
  call void @__stack_chk_fail(), !insn.addr !161
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !162

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i64 (i128)* @__asm_movaps, { 2, 0, 1, 3, 4 }
  uselistorder i128 (i128, i128)* @__asm_paddd, { 2, 0, 1 }
  uselistorder i128 (i128)* @__asm_movaps.1, { 2, 3, 0, 1 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !163
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !164
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !164
  store i32 %4, i32* %5, align 4, !insn.addr !164
  %6 = zext i32 %4 to i64, !insn.addr !165
  ret i64 %6, !insn.addr !166
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1850:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !167
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !168
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !168
  store i32 %4, i32* %5, align 4, !insn.addr !168
  %6 = zext i32 %4 to i64, !insn.addr !169
  ret i64 %6, !insn.addr !170
}

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1860:
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !171
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !172
  %2 = icmp eq i64 %0, %1, !insn.addr !172
  %3 = icmp eq i1 %2, false, !insn.addr !173
  br i1 %3, label %dec_label_pc_18ab, label %dec_label_pc_18a6, !insn.addr !173

dec_label_pc_18a6:                                ; preds = %dec_label_pc_1860
  ret i64 30, !insn.addr !174

dec_label_pc_18ab:                                ; preds = %dec_label_pc_1860
  call void @__stack_chk_fail(), !insn.addr !175
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !175

; uselistorder directives
  uselistorder i64 30, { 0, 2, 3, 1 }
}

define i64 @param_dynamic_code(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_18b0:
  %r13.0.reg2mem = alloca i64, !insn.addr !176
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !177
  %1 = call i32 @sysconf(i32 30), !insn.addr !178
  %2 = call i64* @mmap(i64* null, i32 %1, i32 7, i32 34, i32 -1, i32 0), !insn.addr !179
  %3 = icmp eq i64* %2, inttoptr (i64 -1 to i64*), !insn.addr !180
  store i64 4294967295, i64* %r13.0.reg2mem, !insn.addr !181
  br i1 %3, label %dec_label_pc_1925, label %dec_label_pc_1900, !insn.addr !181

dec_label_pc_1900:                                ; preds = %dec_label_pc_18b0
  %4 = ptrtoint i64* %2 to i64, !insn.addr !179
  %5 = bitcast i64* %2 to i32*, !insn.addr !182
  store i32 -1065092983, i32* %5, align 4, !insn.addr !182
  %6 = add i64 %4, 4, !insn.addr !183
  %7 = inttoptr i64 %6 to i16*, !insn.addr !183
  store i16 -15611, i16* %7, align 2, !insn.addr !183
  %8 = call i32 @munmap(i64* %2, i32 %1), !insn.addr !184
  store i64 4294951685, i64* %r13.0.reg2mem, !insn.addr !184
  br label %dec_label_pc_1925, !insn.addr !184

dec_label_pc_1925:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_1900
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !185
  %10 = icmp eq i64 %0, %9, !insn.addr !185
  %11 = icmp eq i1 %10, false, !insn.addr !186
  br i1 %11, label %dec_label_pc_194a, label %dec_label_pc_1935, !insn.addr !186

dec_label_pc_1935:                                ; preds = %dec_label_pc_1925
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  ret i64 %r13.0.reload, !insn.addr !187

dec_label_pc_194a:                                ; preds = %dec_label_pc_1925
  call void @__stack_chk_fail(), !insn.addr !188
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !189

; uselistorder directives
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i64* %r13.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_1925, { 1, 0 }
}

define i64 @param_memory_protection(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1950:
  %r13.0.reg2mem = alloca i64, !insn.addr !190
  %0 = call i32 @sysconf(i32 30), !insn.addr !191
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !192
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !193
  store i64 4294967295, i64* %r13.0.reg2mem, !insn.addr !194
  br i1 %2, label %dec_label_pc_19d4, label %dec_label_pc_198d, !insn.addr !194

dec_label_pc_198d:                                ; preds = %dec_label_pc_1950
  %3 = bitcast i64* %1 to i32*, !insn.addr !195
  store i32 42, i32* %3, align 4, !insn.addr !195
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !196
  %5 = icmp eq i32 %4, 0, !insn.addr !197
  %6 = icmp eq i1 %5, false, !insn.addr !198
  br i1 %6, label %dec_label_pc_19e0, label %dec_label_pc_19aa, !insn.addr !198

dec_label_pc_19aa:                                ; preds = %dec_label_pc_198d
  %7 = load i32, i32* %3, align 4, !insn.addr !199
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !200
  %9 = icmp eq i32 %8, 0, !insn.addr !201
  %10 = icmp eq i1 %9, false, !insn.addr !202
  br i1 %10, label %dec_label_pc_19f8, label %dec_label_pc_19c2, !insn.addr !202

dec_label_pc_19c2:                                ; preds = %dec_label_pc_19aa
  %11 = zext i32 %7 to i64, !insn.addr !199
  store i32 100, i32* %3, align 4, !insn.addr !203
  %12 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !204
  store i64 %11, i64* %r13.0.reg2mem, !insn.addr !204
  br label %dec_label_pc_19d4, !insn.addr !204

dec_label_pc_19d4:                                ; preds = %dec_label_pc_1950, %dec_label_pc_19f8, %dec_label_pc_19e0, %dec_label_pc_19c2
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  ret i64 %r13.0.reload, !insn.addr !205

dec_label_pc_19e0:                                ; preds = %dec_label_pc_198d
  %13 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !206
  store i64 4294967294, i64* %r13.0.reg2mem, !insn.addr !207
  br label %dec_label_pc_19d4, !insn.addr !207

dec_label_pc_19f8:                                ; preds = %dec_label_pc_19aa
  %14 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !208
  store i64 4294967293, i64* %r13.0.reg2mem, !insn.addr !209
  br label %dec_label_pc_19d4, !insn.addr !209

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2, 3, 4, 5, 6 }
  uselistorder i32 %0, { 1, 0, 2, 3, 4, 5 }
  uselistorder i64* %r13.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 10, 11, 2, 3, 0, 1, 5, 6, 7, 8, 9, 4 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_19d4, { 1, 2, 3, 0 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a20:
  %0 = add i64 %arg2, %arg1, !insn.addr !210
  %1 = mul i64 %0, 2, !insn.addr !211
  %2 = and i64 %1, 4294967294, !insn.addr !211
  ret i64 %2, !insn.addr !212

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
  uselistorder i64 2, { 0, 1, 3, 2 }
}

define i64 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = call i64 @param_dynamic_code(i64 10, i64 %3, i64 %4, i64 %5, i64 %2, i64 %1), !insn.addr !213
  %7 = and i64 %6, 4294967295, !insn.addr !214
  %8 = call i64 @param_memory_protection(i64 10, i64 %3, i64 %4, i64 %5, i64 %2, i64 %1), !insn.addr !215
  %9 = trunc i64 %6 to i32, !insn.addr !216
  %10 = icmp eq i32 %9, 15, !insn.addr !216
  %11 = icmp eq i1 %10, false, !insn.addr !217
  br i1 %11, label %dec_label_pc_1a8e, label %dec_label_pc_1a79, !insn.addr !217

dec_label_pc_1a79:                                ; preds = %dec_label_pc_1a40
  %12 = trunc i64 %8 to i32, !insn.addr !218
  %13 = icmp eq i32 %12, 42, !insn.addr !218
  %14 = icmp eq i1 %13, false, !insn.addr !219
  %spec.select = select i1 %14, i64 %7, i64 77
  ret i64 %spec.select

dec_label_pc_1a8e:                                ; preds = %dec_label_pc_1a40
  ret i64 %7, !insn.addr !220

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
  uselistorder i64 4294967295, { 3, 0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 }
  uselistorder i64 10, { 4, 3, 0, 5, 6, 1, 2 }
}

define i64 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = load i32, i32* inttoptr (i64 16400 to i32*), align 16, !insn.addr !221
  %1 = add i32 %0, 50, !insn.addr !221
  %2 = zext i32 %1 to i64, !insn.addr !222
  ret i64 %2, !insn.addr !223
}

define i64 @test_asm_features(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1ac0:
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !224
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2298 to i8*)), !insn.addr !225
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2117 to i8*)), !insn.addr !226
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2133 to i8*)), !insn.addr !227
  %4 = call i64 @call_asm_multi_insn(), !insn.addr !228
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_214f to i8*)), !insn.addr !229
  %6 = call i64 @call_asm_simd(), !insn.addr !230
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_216b to i8*)), !insn.addr !231
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2187 to i8*)), !insn.addr !232
  %9 = call i64 @call_asm_privileged(), !insn.addr !233
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !234
  %11 = icmp eq i64 %0, %10, !insn.addr !234
  %12 = icmp eq i1 %11, false, !insn.addr !235
  br i1 %12, label %dec_label_pc_1bc7, label %dec_label_pc_1baf, !insn.addr !235

dec_label_pc_1baf:                                ; preds = %dec_label_pc_1ac0
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21a3 to i8*)), !insn.addr !236
  %14 = sext i32 %13 to i64, !insn.addr !236
  ret i64 %14, !insn.addr !236

dec_label_pc_1bc7:                                ; preds = %dec_label_pc_1ac0
  call void @__stack_chk_fail(), !insn.addr !237
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !237

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 1, 5, 2, 3, 0, 6 }
  uselistorder i1 false, { 12, 7, 8, 4, 5, 6, 0, 9, 11, 10, 1, 2, 3 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 24, 23, 22, 21, 25 }
  uselistorder i64 0, { 4, 5, 62, 60, 9, 0, 1, 2, 8, 56, 57, 48, 49, 50, 51, 52, 53, 54, 55, 58, 59, 61, 6, 7, 3, 63, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1bcc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !238

; uselistorder directives
  uselistorder i32 1, { 7, 26, 27, 28, 29, 30, 31, 32, 6, 33, 10, 11, 5, 4, 8, 55, 53, 54, 52, 56, 57, 14, 13, 12, 9, 0, 19, 18, 17, 16, 15, 3, 58, 21, 20, 24, 23, 22, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 2, 59, 1, 25 }
}

declare void @__stack_chk_fail() local_unnamed_addr

declare i64* @mmap(i64*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @munmap(i64*, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @mprotect(i64*, i32, i32) local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_movaps.1(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4244}
!7 = !{i64 4260}
!8 = !{i64 4276}
!9 = !{i64 4292}
!10 = !{i64 4308}
!11 = !{i64 4324}
!12 = !{i64 4340}
!13 = !{i64 4362}
!14 = !{i64 4369}
!15 = !{i64 4380}
!16 = !{i64 4415}
!17 = !{i64 4421}
!18 = !{i64 4472}
!19 = !{i64 4536}
!20 = !{i64 4548}
!21 = !{i64 4555}
!22 = !{i64 4558}
!23 = !{i64 4569}
!24 = !{i64 4571}
!25 = !{i64 4578}
!26 = !{i64 4583}
!27 = !{i64 4588}
!28 = !{i64 4596}
!29 = !{i64 4600}
!30 = !{i64 4612}
!31 = !{i64 4628}
!32 = !{i64 4644}
!33 = !{i64 4647}
!34 = !{i64 4665}
!35 = !{i64 4678}
!36 = !{i64 4681}
!37 = !{i64 4683}
!38 = !{i64 4686}
!39 = !{i64 4688}
!40 = !{i64 4713}
!41 = !{i64 4724}
!42 = !{i64 4728}
!43 = !{i64 4745}
!44 = !{i64 4756}
!45 = !{i64 4763}
!46 = !{i64 4777}
!47 = !{i64 4788}
!48 = !{i64 4791}
!49 = !{i64 4809}
!50 = !{i64 4825}
!51 = !{i64 4841}
!52 = !{i64 4855}
!53 = !{i64 4857}
!54 = !{i64 4868}
!55 = !{i64 4871}
!56 = !{i64 4875}
!57 = !{i64 4889}
!58 = !{i64 4901}
!59 = !{i64 4905}
!60 = !{i64 4915}
!61 = !{i64 4924}
!62 = !{i64 4929}
!63 = !{i64 4933}
!64 = !{i64 4982}
!65 = !{i64 4996}
!66 = !{i64 5012}
!67 = !{i64 5016}
!68 = !{i64 5033}
!69 = !{i64 5049}
!70 = !{i64 5065}
!71 = !{i64 5132}
!72 = !{i64 5137}
!73 = !{i64 5146}
!74 = !{i64 5209}
!75 = !{i64 5223}
!76 = !{i64 5254}
!77 = !{i64 5278}
!78 = !{i64 5302}
!79 = !{i64 5326}
!80 = !{i64 5350}
!81 = !{i64 5374}
!82 = !{i64 5398}
!83 = !{i64 5422}
!84 = !{i64 5457}
!85 = !{i64 5481}
!86 = !{i64 5505}
!87 = !{i64 5529}
!88 = !{i64 5587}
!89 = !{i64 5615}
!90 = !{i64 5638}
!91 = !{i64 5644}
!92 = !{i64 5647}
!93 = !{i64 5670}
!94 = !{i64 5680}
!95 = !{i64 5690}
!96 = !{i64 5692}
!97 = !{i64 5695}
!98 = !{i64 5705}
!99 = !{i64 5712}
!100 = !{i64 5725}
!101 = !{i64 5741}
!102 = !{i64 5752}
!103 = !{i64 5755}
!104 = !{i64 5750}
!105 = !{i64 5767}
!106 = !{i64 5776}
!107 = !{i64 5785}
!108 = !{i64 5786}
!109 = !{i64 5791}
!110 = !{i64 5792}
!111 = !{i64 5797}
!112 = !{i64 5801}
!113 = !{i64 5803}
!114 = !{i64 5805}
!115 = !{i64 5807}
!116 = !{i64 5810}
!117 = !{i64 5813}
!118 = !{i64 5818}
!119 = !{i64 5824}
!120 = !{i64 5832}
!121 = !{i64 5841}
!122 = !{i64 5865}
!123 = !{i64 5870}
!124 = !{i64 5875}
!125 = !{i64 5880}
!126 = !{i64 5885}
!127 = !{i64 5907}
!128 = !{i64 5909}
!129 = !{i64 5911}
!130 = !{i64 5914}
!131 = !{i64 5917}
!132 = !{i64 5901}
!133 = !{i64 5905}
!134 = !{i64 5922}
!135 = !{i64 5952}
!136 = !{i64 5961}
!137 = !{i64 5927}
!138 = !{i64 5967}
!139 = !{i64 5975}
!140 = !{i64 5980}
!141 = !{i64 5988}
!142 = !{i64 5991}
!143 = !{i64 5994}
!144 = !{i64 5998}
!145 = !{i64 6003}
!146 = !{i64 6020}
!147 = !{i64 6024}
!148 = !{i64 6030}
!149 = !{i64 6033}
!150 = !{i64 6056}
!151 = !{i64 6142}
!152 = !{i64 6145}
!153 = !{i64 6148}
!154 = !{i64 6152}
!155 = !{i64 6176}
!156 = !{i64 6185}
!157 = !{i64 6159}
!158 = !{i64 6163}
!159 = !{i64 6167}
!160 = !{i64 6191}
!161 = !{i64 6192}
!162 = !{i64 6197}
!163 = !{i64 6212}
!164 = !{i64 6214}
!165 = !{i64 6218}
!166 = !{i64 6220}
!167 = !{i64 6228}
!168 = !{i64 6230}
!169 = !{i64 6234}
!170 = !{i64 6236}
!171 = !{i64 6248}
!172 = !{i64 6299}
!173 = !{i64 6308}
!174 = !{i64 6314}
!175 = !{i64 6315}
!176 = !{i64 6320}
!177 = !{i64 6341}
!178 = !{i64 6357}
!179 = !{i64 6389}
!180 = !{i64 6394}
!181 = !{i64 6398}
!182 = !{i64 6403}
!183 = !{i64 6417}
!184 = !{i64 6432}
!185 = !{i64 6442}
!186 = !{i64 6451}
!187 = !{i64 6465}
!188 = !{i64 6474}
!189 = !{i64 6479}
!190 = !{i64 6480}
!191 = !{i64 6494}
!192 = !{i64 6526}
!193 = !{i64 6531}
!194 = !{i64 6535}
!195 = !{i64 6541}
!196 = !{i64 6561}
!197 = !{i64 6566}
!198 = !{i64 6568}
!199 = !{i64 6581}
!200 = !{i64 6585}
!201 = !{i64 6590}
!202 = !{i64 6592}
!203 = !{i64 6594}
!204 = !{i64 6607}
!205 = !{i64 6620}
!206 = !{i64 6636}
!207 = !{i64 6641}
!208 = !{i64 6660}
!209 = !{i64 6665}
!210 = !{i64 6694}
!211 = !{i64 6704}
!212 = !{i64 6707}
!213 = !{i64 6731}
!214 = !{i64 6736}
!215 = !{i64 6741}
!216 = !{i64 6771}
!217 = !{i64 6775}
!218 = !{i64 6777}
!219 = !{i64 6780}
!220 = !{i64 6803}
!221 = !{i64 6829}
!222 = !{i64 6838}
!223 = !{i64 6841}
!224 = !{i64 6874}
!225 = !{i64 6890}
!226 = !{i64 6916}
!227 = !{i64 6957}
!228 = !{i64 6964}
!229 = !{i64 6985}
!230 = !{i64 6992}
!231 = !{i64 7013}
!232 = !{i64 7057}
!233 = !{i64 7064}
!234 = !{i64 7076}
!235 = !{i64 7085}
!236 = !{i64 7106}
!237 = !{i64 7111}
!238 = !{i64 7128}
