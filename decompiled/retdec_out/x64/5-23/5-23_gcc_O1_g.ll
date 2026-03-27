source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4014 = external local_unnamed_addr global i64
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2034 = constant [9 x i8] c"03:00:26\00"
@global_var_201d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_22d0 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_2029 = constant [11 x i8] c"src/5-23.c\00"
@global_var_21c0 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var = local_unnamed_addr global i32 100
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

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1100:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !13
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !13
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !13
  %3 = call i32 @__libc_start_main(i64 6630, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !13
  %4 = call i64 @__asm_hlt(), !insn.addr !14
  unreachable, !insn.addr !14
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  ret i64 16408, !insn.addr !15
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1160:
  ret i64 0, !insn.addr !16
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16404 to i8*), align 4, !insn.addr !17
  %3 = icmp eq i8 %2, 0, !insn.addr !17
  %4 = icmp eq i1 %3, false, !insn.addr !18
  br i1 %4, label %dec_label_pc_11d8, label %dec_label_pc_11ad, !insn.addr !18

dec_label_pc_11ad:                                ; preds = %dec_label_pc_11a0
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !19
  %6 = icmp eq i64 %5, 0, !insn.addr !19
  br i1 %6, label %dec_label_pc_11c7, label %dec_label_pc_11bb, !insn.addr !20

dec_label_pc_11bb:                                ; preds = %dec_label_pc_11ad
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !21
  %8 = inttoptr i64 %7 to i64*, !insn.addr !22
  call void @__cxa_finalize(i64* %8), !insn.addr !22
  br label %dec_label_pc_11c7, !insn.addr !22

dec_label_pc_11c7:                                ; preds = %dec_label_pc_11bb, %dec_label_pc_11ad
  %9 = call i64 @deregister_tm_clones(), !insn.addr !23
  store i8 1, i8* bitcast (i64* @global_var_4014 to i8*), align 8, !insn.addr !24
  ret i64 %9, !insn.addr !25

dec_label_pc_11d8:                                ; preds = %dec_label_pc_11a0
  ret i64 %1, !insn.addr !26
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i64 @register_tm_clones(), !insn.addr !27
  ret i64 %0, !insn.addr !27
}

define i64 @param_macro_constants(i64 %arg1) local_unnamed_addr {
dec_label_pc_11e9:
  %0 = trunc i64 %arg1 to i32, !insn.addr !28
  %1 = sub i32 %0, ptrtoint (i32* @global_var_400 to i32), !insn.addr !28
  %2 = xor i32 %0, ptrtoint (i32* @global_var_400 to i32), !insn.addr !28
  %3 = xor i32 %1, %0, !insn.addr !28
  %4 = and i32 %3, %2, !insn.addr !28
  %5 = icmp slt i32 %4, 0, !insn.addr !28
  %6 = icmp eq i32 %1, 0, !insn.addr !28
  %7 = icmp slt i32 %1, 0, !insn.addr !28
  %8 = icmp eq i1 %7, %5, !insn.addr !29
  %9 = icmp eq i1 %6, false, !insn.addr !29
  %10 = icmp eq i1 %8, %9, !insn.addr !29
  %11 = select i1 %10, i64 64, i64 512, !insn.addr !29
  ret i64 %11, !insn.addr !30

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 0 }
}

define i64 @call_macro_constants() local_unnamed_addr {
dec_label_pc_1201:
  ret i64 64, !insn.addr !31
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_120b:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !32
  %1 = mul nsw i64 %0, %0, !insn.addr !32
  %2 = trunc i64 %arg1 to i32, !insn.addr !33
  %3 = trunc i64 %arg2 to i32, !insn.addr !33
  %4 = sub i32 %2, %3, !insn.addr !33
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !33
  %7 = xor i32 %4, %2, !insn.addr !33
  %8 = and i32 %7, %6, !insn.addr !33
  %9 = icmp slt i32 %8, 0, !insn.addr !33
  %10 = icmp slt i32 %4, 0, !insn.addr !33
  %11 = icmp eq i1 %10, %9, !insn.addr !34
  %.v = select i1 %11, i64 %arg1, i64 %arg2
  %12 = add i64 %.v, %1, !insn.addr !35
  %13 = and i64 %12, 4294967295, !insn.addr !35
  ret i64 %13, !insn.addr !36

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 2, 1, 3, 0 }
}

define i64 @call_macro_functions() local_unnamed_addr {
dec_label_pc_121c:
  ret i64 30, !insn.addr !37
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1226:
  %0 = mul i64 %arg1, 2, !insn.addr !38
  %1 = add i64 %arg1, 2, !insn.addr !38
  %2 = add i64 %1, %0, !insn.addr !38
  %3 = and i64 %2, 4294967295, !insn.addr !38
  ret i64 %3, !insn.addr !39

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_122f:
  ret i64 32, !insn.addr !40
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1239:
  %0 = mul i64 %arg1, 4, !insn.addr !41
  %1 = add i64 %arg1, 57072, !insn.addr !41
  %2 = add i64 %1, %0, !insn.addr !41
  %3 = and i64 %2, 4294967295, !insn.addr !41
  ret i64 %3, !insn.addr !42

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1245:
  ret i64 57122, !insn.addr !43
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_124f:
  %0 = add i64 %arg1, 16, !insn.addr !44
  %1 = and i64 %0, 4294967295, !insn.addr !44
  ret i64 %1, !insn.addr !45
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1257:
  ret i64 116, !insn.addr !46
}

define i64 @param_stringize() local_unnamed_addr {
dec_label_pc_1261:
  ret i64 19, !insn.addr !47
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_126b:
  ret i64 19, !insn.addr !48
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1275:
  %0 = mul i64 %arg1, 10, !insn.addr !49
  %1 = and i64 %0, 4294967294, !insn.addr !49
  ret i64 %1, !insn.addr !50
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_127f:
  %0 = mul i64 %arg1, 10, !insn.addr !51
  %1 = add i64 %arg1, 5, !insn.addr !52
  %2 = add i64 %1, %0, !insn.addr !52
  %3 = and i64 %2, 4294967295, !insn.addr !52
  ret i64 %3, !insn.addr !53

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_128b:
  ret i64 60, !insn.addr !54
}

define i32 @param_variadic_macro(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_1295:
  %0 = zext i32 %y to i64, !insn.addr !55
  %1 = zext i32 %z to i64, !insn.addr !56
  %2 = zext i32 %x to i64, !insn.addr !57
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 %2, i64 %0, i64 %1), !insn.addr !58
  %4 = add i32 %x, 50, !insn.addr !59
  ret i32 %4, !insn.addr !60
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_12be:
  %0 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30), !insn.addr !61
  ret i32 %0, !insn.addr !62
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_12df:
  %0 = mul i64 %arg1, 2, !insn.addr !63
  %1 = add i64 %arg1, 1, !insn.addr !63
  %2 = add i64 %1, %0, !insn.addr !63
  %3 = and i64 %2, 4294967295, !insn.addr !63
  ret i64 %3, !insn.addr !64

; uselistorder directives
  uselistorder i64 2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_12e8:
  ret i64 16, !insn.addr !65
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_12f2:
  ret i64 500, !insn.addr !66
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_12fc:
  ret i64 500, !insn.addr !67
}

define i32 @param_builtin_macros(i32 %x) local_unnamed_addr {
dec_label_pc_1306:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_21c0, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2029, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22d0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2034, i64 0, i64 0)), !insn.addr !68
  %1 = add i32 %x, 282, !insn.addr !69
  ret i32 %1, !insn.addr !70
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1356:
  %0 = call i32 @param_builtin_macros(i32 100), !insn.addr !71
  ret i32 %0, !insn.addr !72
}

define void @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_136d:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21f0 to i8*)), !insn.addr !73
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_203d to i8*)), !insn.addr !74
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2058 to i8*)), !insn.addr !75
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2073 to i8*)), !insn.addr !76
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2218 to i8*)), !insn.addr !77
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_208e to i8*)), !insn.addr !78
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2238 to i8*)), !insn.addr !79
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20aa to i8*)), !insn.addr !80
  %8 = call i32 @call_variadic_macro(), !insn.addr !81
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20c5 to i8*)), !insn.addr !82
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e0 to i8*)), !insn.addr !83
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20fb to i8*)), !insn.addr !84
  %12 = call i32 @call_builtin_macros(), !insn.addr !85
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2268 to i8*)), !insn.addr !86
  ret void, !insn.addr !87
}

define i32 @param_asm_basic(i32 %x) local_unnamed_addr {
dec_label_pc_14c7:
  %0 = add i32 %x, 10, !insn.addr !88
  ret i32 %0, !insn.addr !89
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_14d5:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !90
  ret i32 %0, !insn.addr !91
}

define i32 @param_asm_clobber(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_14e4:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !92
  %rax.01.reg2mem = alloca i32, !insn.addr !92
  %storemerge2.reg2mem = alloca i64, !insn.addr !92
  %0 = sext i32 %n to i64
  %1 = ptrtoint i32* %arr to i64
  %2 = icmp sgt i32 %n, 0, !insn.addr !93
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !93
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !93
  store i32 0, i32* %rax.0.lcssa.reg2mem, !insn.addr !93
  br i1 %2, label %dec_label_pc_14f0, label %dec_label_pc_14f7, !insn.addr !93

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14e4, %dec_label_pc_14f0
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %3 = mul i64 %storemerge2.reload, 4, !insn.addr !94
  %4 = add i64 %3, %1, !insn.addr !94
  %5 = inttoptr i64 %4 to i32*, !insn.addr !94
  %6 = load i32, i32* %5, align 4, !insn.addr !94
  %7 = add i32 %6, %rax.01.reload, !insn.addr !94
  %8 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !95
  %9 = and i64 %8, 4294967295, !insn.addr !95
  %10 = icmp slt i64 %9, %0, !insn.addr !93
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !93
  store i32 %7, i32* %rax.01.reg2mem, !insn.addr !93
  store i32 %7, i32* %rax.0.lcssa.reg2mem, !insn.addr !93
  br i1 %10, label %dec_label_pc_14f0, label %dec_label_pc_14f7, !insn.addr !93

dec_label_pc_14f7:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14e4
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !96

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14f0, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_14fc:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !97
  %1 = bitcast i64* %stack_var_-40 to i32*, !insn.addr !98
  %2 = call i32 @param_asm_clobber(i32* nonnull %1, i32 5), !insn.addr !98
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !99
  %4 = icmp eq i64 %0, %3, !insn.addr !99
  %5 = icmp eq i1 %4, false, !insn.addr !100
  br i1 %5, label %dec_label_pc_1536, label %dec_label_pc_1531, !insn.addr !100

dec_label_pc_1531:                                ; preds = %dec_label_pc_14fc
  ret i32 %2, !insn.addr !101

dec_label_pc_1536:                                ; preds = %dec_label_pc_14fc
  call void @__stack_chk_fail(), !insn.addr !102
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !102
}

define void @param_asm_multi_insn(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_153b:
  %rdx.02.reg2mem = alloca i64, !insn.addr !103
  %rsi.03.reg2mem = alloca i64, !insn.addr !103
  %rdi.04.reg2mem = alloca i64, !insn.addr !103
  %0 = icmp eq i64 %n, 0, !insn.addr !104
  br i1 %0, label %dec_label_pc_1555, label %dec_label_pc_1546.lr.ph, !insn.addr !105

dec_label_pc_1546.lr.ph:                          ; preds = %dec_label_pc_153b
  %1 = ptrtoint i8* %dst to i64
  %2 = ptrtoint i32* %src to i64
  store i64 %1, i64* %rdi.04.reg2mem
  store i64 %2, i64* %rsi.03.reg2mem
  store i64 %n, i64* %rdx.02.reg2mem
  br label %dec_label_pc_1546

dec_label_pc_1546:                                ; preds = %dec_label_pc_1546.lr.ph, %dec_label_pc_1546
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %rdi.04.reload = load i64, i64* %rdi.04.reg2mem
  %3 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !106
  %4 = load i8, i8* %3, align 1, !insn.addr !106
  %5 = inttoptr i64 %rdi.04.reload to i8*, !insn.addr !107
  store i8 %4, i8* %5, align 1, !insn.addr !107
  %6 = add i64 %rdi.04.reload, 1, !insn.addr !108
  %7 = add i64 %rsi.03.reload, 1, !insn.addr !109
  %8 = add i64 %rdx.02.reload, -1, !insn.addr !110
  %9 = icmp eq i64 %8, 0, !insn.addr !104
  store i64 %6, i64* %rdi.04.reg2mem, !insn.addr !105
  store i64 %7, i64* %rsi.03.reg2mem, !insn.addr !105
  store i64 %8, i64* %rdx.02.reg2mem, !insn.addr !105
  br i1 %9, label %dec_label_pc_1555, label %dec_label_pc_1546, !insn.addr !105

dec_label_pc_1555:                                ; preds = %dec_label_pc_1546, %dec_label_pc_153b
  ret void, !insn.addr !111

; uselistorder directives
  uselistorder i64* %rdi.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1546, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1556:
  %0 = alloca i8
  %1 = load i8, i8* %0
  %stack_var_-56 = alloca i8, align 1
  %stack_var_-66 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !112
  store i64 5999111841566713160, i64* %stack_var_-66, align 8, !insn.addr !113
  store i8 0, i8* %stack_var_-56, align 1, !insn.addr !114
  %3 = bitcast i64* %stack_var_-66 to i32*, !insn.addr !115
  call void @param_asm_multi_insn(i8* nonnull %stack_var_-56, i32* nonnull %3, i64 9), !insn.addr !115
  %4 = load i8, i8* %stack_var_-56, align 1, !insn.addr !116
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !117
  %6 = icmp eq i64 %2, %5, !insn.addr !117
  %7 = icmp eq i1 %6, false, !insn.addr !118
  br i1 %7, label %dec_label_pc_15f1, label %dec_label_pc_15e5, !insn.addr !118

dec_label_pc_15e5:                                ; preds = %dec_label_pc_1556
  %8 = icmp eq i8 %4, 72, !insn.addr !116
  %9 = icmp eq i1 %8, false, !insn.addr !119
  %10 = icmp eq i8 %1, 111
  %phitmp = select i1 %10, i32 42, i32 -1
  %storemerge = select i1 %9, i32 -1, i32 %phitmp
  ret i32 %storemerge, !insn.addr !120

dec_label_pc_15f1:                                ; preds = %dec_label_pc_1556
  call void @__stack_chk_fail(), !insn.addr !121
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !121

; uselistorder directives
  uselistorder i8* %stack_var_-56, { 1, 2, 0 }
}

define i32 @param_asm_simd(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_15f6:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !122
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !122
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !123
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !123
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !124
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !125
  %8 = sext i64 %7 to i128, !insn.addr !125
  %9 = bitcast i32* %result to i128*, !insn.addr !125
  store i128 %8, i128* %9, align 8, !insn.addr !125
  ret i32 0, !insn.addr !126
}

define i32 @param_simd_intrinsics(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_160d:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !127
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !127
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !128
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !128
  %6 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !129
  %7 = sext i64 %6 to i128, !insn.addr !129
  %8 = bitcast i32* %result to i128*, !insn.addr !129
  store i128 %7, i128* %8, align 8, !insn.addr !129
  ret i32 0, !insn.addr !130
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1622:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !131
  store i64 1, i64* %stack_var_-72, align 8, !insn.addr !132
  store i32 5, i32* %stack_var_-56, align 4, !insn.addr !133
  %5 = bitcast i64* %stack_var_-72 to i32*, !insn.addr !134
  %6 = call i32 @param_asm_simd(i32* nonnull %5, i32* nonnull %stack_var_-56, i32* nonnull %stack_var_-40), !insn.addr !134
  %7 = load i32, i32* %stack_var_-40, align 4, !insn.addr !135
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !136
  %9 = icmp eq i64 %4, %8, !insn.addr !136
  %10 = icmp eq i1 %9, false, !insn.addr !137
  br i1 %10, label %dec_label_pc_16b0, label %dec_label_pc_16ab, !insn.addr !137

dec_label_pc_16ab:                                ; preds = %dec_label_pc_1622
  %11 = add i32 %2, %1, !insn.addr !135
  %12 = add i32 %11, %3, !insn.addr !138
  %13 = add i32 %12, %7, !insn.addr !139
  ret i32 %13, !insn.addr !140

dec_label_pc_16b0:                                ; preds = %dec_label_pc_1622
  call void @__stack_chk_fail(), !insn.addr !141
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !141

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 5, { 2, 0, 1 }
  uselistorder i64 1, { 0, 3, 4, 1, 2 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_16b5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !142
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !143
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !143
  store i32 %4, i32* %5, align 4, !insn.addr !143
  %6 = zext i32 %4 to i64, !insn.addr !144
  ret i64 %6, !insn.addr !145
}

define i32 @param_atomic_c11(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_16c2:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !146
  store i32 %3, i32* %counter, align 4, !insn.addr !146
  ret i32 %3, !insn.addr !147
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_16cf:
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !148
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !149
  %2 = icmp eq i64 %0, %1, !insn.addr !149
  %3 = icmp eq i1 %2, false, !insn.addr !150
  br i1 %3, label %dec_label_pc_171a, label %dec_label_pc_1715, !insn.addr !150

dec_label_pc_1715:                                ; preds = %dec_label_pc_16cf
  ret i32 30, !insn.addr !151

dec_label_pc_171a:                                ; preds = %dec_label_pc_16cf
  call void @__stack_chk_fail(), !insn.addr !152
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !152
}

define i32 @param_dynamic_code(i32 %x) local_unnamed_addr {
dec_label_pc_171f:
  %r12.0.reg2mem = alloca i32, !insn.addr !153
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !154
  %1 = call i32 @sysconf(i32 30), !insn.addr !155
  %2 = call i64* @mmap(i64* null, i32 %1, i32 7, i32 34, i32 -1, i32 0), !insn.addr !156
  %3 = icmp eq i64* %2, inttoptr (i64 -1 to i64*), !insn.addr !157
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !158
  br i1 %3, label %dec_label_pc_1796, label %dec_label_pc_1774, !insn.addr !158

dec_label_pc_1774:                                ; preds = %dec_label_pc_171f
  %4 = ptrtoint i64* %2 to i64, !insn.addr !156
  %5 = bitcast i64* %2 to i32*, !insn.addr !159
  store i32 -1065092983, i32* %5, align 4, !insn.addr !159
  %6 = add i64 %4, 4, !insn.addr !160
  %7 = inttoptr i64 %6 to i16*, !insn.addr !160
  store i16 -15611, i16* %7, align 2, !insn.addr !160
  %8 = call i32 @munmap(i64* %2, i32 %1), !insn.addr !161
  %phitmp = trunc i64 %4 to i32
  store i32 %phitmp, i32* %r12.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_1796, !insn.addr !161

dec_label_pc_1796:                                ; preds = %dec_label_pc_171f, %dec_label_pc_1774
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !162
  %10 = icmp eq i64 %0, %9, !insn.addr !162
  %11 = icmp eq i1 %10, false, !insn.addr !163
  br i1 %11, label %dec_label_pc_17ba, label %dec_label_pc_17a6, !insn.addr !163

dec_label_pc_17a6:                                ; preds = %dec_label_pc_1796
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !164

dec_label_pc_17ba:                                ; preds = %dec_label_pc_1796
  call void @__stack_chk_fail(), !insn.addr !165
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !165

; uselistorder directives
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder i32* %r12.0.reg2mem, { 0, 2, 1 }
  uselistorder void ()* @__stack_chk_fail, { 4, 0, 3, 2, 1, 5 }
  uselistorder i64 4, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1796, { 1, 0 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_17bf:
  %r12.0.reg2mem = alloca i32, !insn.addr !166
  %0 = call i32 @sysconf(i32 30), !insn.addr !167
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !168
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !169
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !170
  br i1 %2, label %dec_label_pc_1842, label %dec_label_pc_17fd, !insn.addr !170

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17bf
  %3 = bitcast i64* %1 to i32*, !insn.addr !171
  store i32 42, i32* %3, align 4, !insn.addr !171
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !172
  %5 = icmp eq i32 %4, 0, !insn.addr !173
  %6 = icmp eq i1 %5, false, !insn.addr !174
  br i1 %6, label %dec_label_pc_184a, label %dec_label_pc_181a, !insn.addr !174

dec_label_pc_181a:                                ; preds = %dec_label_pc_17fd
  %7 = load i32, i32* %3, align 4, !insn.addr !175
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !176
  %9 = icmp eq i32 %8, 0, !insn.addr !177
  %10 = icmp eq i1 %9, false, !insn.addr !178
  br i1 %10, label %dec_label_pc_185d, label %dec_label_pc_1831, !insn.addr !178

dec_label_pc_1831:                                ; preds = %dec_label_pc_181a
  store i32 100, i32* %3, align 4, !insn.addr !179
  %11 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !180
  store i32 %7, i32* %r12.0.reg2mem, !insn.addr !180
  br label %dec_label_pc_1842, !insn.addr !180

dec_label_pc_1842:                                ; preds = %dec_label_pc_17bf, %dec_label_pc_185d, %dec_label_pc_184a, %dec_label_pc_1831
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !181

dec_label_pc_184a:                                ; preds = %dec_label_pc_17fd
  %12 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !182
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !183
  br label %dec_label_pc_1842, !insn.addr !183

dec_label_pc_185d:                                ; preds = %dec_label_pc_181a
  %13 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !184
  store i32 -3, i32* %r12.0.reg2mem, !insn.addr !185
  br label %dec_label_pc_1842, !insn.addr !185

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2, 3, 4, 5, 6 }
  uselistorder i32 %0, { 1, 0, 2, 3, 4, 5 }
  uselistorder i32* %r12.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 -1, { 0, 4, 1, 5, 2, 3 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder i32 30, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1842, { 1, 2, 3, 0 }
}

define i32 @param_clobber_importance(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1878:
  %0 = add i32 %b, %a, !insn.addr !186
  %1 = mul i32 %0, 2, !insn.addr !187
  ret i32 %1, !insn.addr !188
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_188c:
  %0 = call i32 @param_dynamic_code(i32 10), !insn.addr !189
  %1 = call i32 @param_memory_protection(), !insn.addr !190
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !191
  %3 = icmp eq i32 %0, 15, !insn.addr !192
  %4 = icmp eq i32 %1, 42, !insn.addr !193
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i1 %5, false, !insn.addr !194
  %7 = icmp eq i32 %2, 20
  %narrow = select i1 %7, i32 77, i32 %0
  %rbx.0.in = select i1 %6, i32 %0, i32 %narrow
  ret i32 %rbx.0.in, !insn.addr !195

; uselistorder directives
  uselistorder i1 false, { 0, 3, 4, 5, 6, 7, 9, 8, 10, 1, 2 }
  uselistorder i32 42, { 1, 2, 0 }
  uselistorder i32 10, { 0, 2, 1 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_18e1:
  %0 = load i32, i32* @global_var, align 4, !insn.addr !196
  %1 = add i32 %0, 50, !insn.addr !196
  ret i32 %1, !insn.addr !197

; uselistorder directives
  uselistorder i32 100, { 2, 0, 1 }
}

define void @test_asm_features() local_unnamed_addr {
dec_label_pc_18f7:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2298 to i8*)), !insn.addr !198
  %1 = call i32 @call_asm_basic(), !insn.addr !199
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2117 to i8*)), !insn.addr !200
  %3 = call i32 @call_asm_clobber(), !insn.addr !201
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2133 to i8*)), !insn.addr !202
  %5 = call i32 @call_asm_multi_insn(), !insn.addr !203
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_214f to i8*)), !insn.addr !204
  %7 = call i32 @call_asm_simd(), !insn.addr !205
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_216b to i8*)), !insn.addr !206
  %9 = call i32 @call_asm_atomic(), !insn.addr !207
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2187 to i8*)), !insn.addr !208
  %11 = call i32 @call_asm_privileged(), !insn.addr !209
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21a3 to i8*)), !insn.addr !210
  ret void, !insn.addr !211

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i64 0, { 56, 3, 0, 50, 51, 42, 43, 44, 45, 46, 47, 48, 49, 52, 53, 54, 2, 1, 55, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_19e6:
  call void @test_preprocessing_features(), !insn.addr !212
  call void @test_asm_features(), !insn.addr !213
  ret i32 0, !insn.addr !214

; uselistorder directives
  uselistorder i32 0, { 2, 14, 15, 6, 7, 3, 4, 0, 1, 5, 9, 10, 11, 12, 13, 8 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1a0c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !215

; uselistorder directives
  uselistorder i32 1, { 3, 15, 16, 17, 18, 19, 20, 21, 22, 6, 7, 2, 1, 44, 43, 41, 4, 40, 38, 39, 37, 45, 42, 5, 10, 9, 8, 46, 13, 12, 11, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 0, 47, 14 }
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

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps.1(i128) local_unnamed_addr

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
!13 = !{i64 4383}
!14 = !{i64 4389}
!15 = !{i64 4440}
!16 = !{i64 4504}
!17 = !{i64 4516}
!18 = !{i64 4523}
!19 = !{i64 4526}
!20 = !{i64 4537}
!21 = !{i64 4539}
!22 = !{i64 4546}
!23 = !{i64 4551}
!24 = !{i64 4556}
!25 = !{i64 4564}
!26 = !{i64 4568}
!27 = !{i64 4580}
!28 = !{i64 4589}
!29 = !{i64 4605}
!30 = !{i64 4608}
!31 = !{i64 4618}
!32 = !{i64 4625}
!33 = !{i64 4628}
!34 = !{i64 4630}
!35 = !{i64 4633}
!36 = !{i64 4635}
!37 = !{i64 4645}
!38 = !{i64 4650}
!39 = !{i64 4654}
!40 = !{i64 4664}
!41 = !{i64 4669}
!42 = !{i64 4676}
!43 = !{i64 4686}
!44 = !{i64 4691}
!45 = !{i64 4694}
!46 = !{i64 4704}
!47 = !{i64 4714}
!48 = !{i64 4724}
!49 = !{i64 4732}
!50 = !{i64 4734}
!51 = !{i64 4739}
!52 = !{i64 4742}
!53 = !{i64 4746}
!54 = !{i64 4756}
!55 = !{i64 4764}
!56 = !{i64 4766}
!57 = !{i64 4769}
!58 = !{i64 4788}
!59 = !{i64 4793}
!60 = !{i64 4797}
!61 = !{i64 4821}
!62 = !{i64 4830}
!63 = !{i64 4835}
!64 = !{i64 4839}
!65 = !{i64 4849}
!66 = !{i64 4859}
!67 = !{i64 4869}
!68 = !{i64 4933}
!69 = !{i64 4938}
!70 = !{i64 4949}
!71 = !{i64 4963}
!72 = !{i64 4972}
!73 = !{i64 4998}
!74 = !{i64 5025}
!75 = !{i64 5052}
!76 = !{i64 5079}
!77 = !{i64 5106}
!78 = !{i64 5133}
!79 = !{i64 5160}
!80 = !{i64 5187}
!81 = !{i64 5197}
!82 = !{i64 5221}
!83 = !{i64 5248}
!84 = !{i64 5275}
!85 = !{i64 5285}
!86 = !{i64 5309}
!87 = !{i64 5318}
!88 = !{i64 5325}
!89 = !{i64 5332}
!90 = !{i64 5342}
!91 = !{i64 5347}
!92 = !{i64 5348}
!93 = !{i64 5358}
!94 = !{i64 5360}
!95 = !{i64 5363}
!96 = !{i64 5371}
!97 = !{i64 5380}
!98 = !{i64 5404}
!99 = !{i64 5414}
!100 = !{i64 5423}
!101 = !{i64 5429}
!102 = !{i64 5430}
!103 = !{i64 5435}
!104 = !{i64 5440}
!105 = !{i64 5444}
!106 = !{i64 5446}
!107 = !{i64 5448}
!108 = !{i64 5450}
!109 = !{i64 5453}
!110 = !{i64 5456}
!111 = !{i64 5461}
!112 = !{i64 5470}
!113 = !{i64 5496}
!114 = !{i64 5508}
!115 = !{i64 5559}
!116 = !{i64 5564}
!117 = !{i64 5594}
!118 = !{i64 5603}
!119 = !{i64 5569}
!120 = !{i64 5609}
!121 = !{i64 5617}
!122 = !{i64 5626}
!123 = !{i64 5629}
!124 = !{i64 5632}
!125 = !{i64 5636}
!126 = !{i64 5644}
!127 = !{i64 5649}
!128 = !{i64 5653}
!129 = !{i64 5657}
!130 = !{i64 5665}
!131 = !{i64 5674}
!132 = !{i64 5690}
!133 = !{i64 5721}
!134 = !{i64 5766}
!135 = !{i64 5775}
!136 = !{i64 5792}
!137 = !{i64 5801}
!138 = !{i64 5779}
!139 = !{i64 5783}
!140 = !{i64 5807}
!141 = !{i64 5808}
!142 = !{i64 5817}
!143 = !{i64 5819}
!144 = !{i64 5823}
!145 = !{i64 5825}
!146 = !{i64 5832}
!147 = !{i64 5838}
!148 = !{i64 5847}
!149 = !{i64 5898}
!150 = !{i64 5907}
!151 = !{i64 5913}
!152 = !{i64 5914}
!153 = !{i64 5919}
!154 = !{i64 5934}
!155 = !{i64 5955}
!156 = !{i64 5993}
!157 = !{i64 5998}
!158 = !{i64 6002}
!159 = !{i64 6007}
!160 = !{i64 6013}
!161 = !{i64 6033}
!162 = !{i64 6043}
!163 = !{i64 6052}
!164 = !{i64 6065}
!165 = !{i64 6074}
!166 = !{i64 6079}
!167 = !{i64 6092}
!168 = !{i64 6130}
!169 = !{i64 6135}
!170 = !{i64 6139}
!171 = !{i64 6144}
!172 = !{i64 6161}
!173 = !{i64 6166}
!174 = !{i64 6168}
!175 = !{i64 6170}
!176 = !{i64 6184}
!177 = !{i64 6189}
!178 = !{i64 6191}
!179 = !{i64 6193}
!180 = !{i64 6205}
!181 = !{i64 6217}
!182 = !{i64 6224}
!183 = !{i64 6235}
!184 = !{i64 6243}
!185 = !{i64 6254}
!186 = !{i64 6270}
!187 = !{i64 6280}
!188 = !{i64 6283}
!189 = !{i64 6299}
!190 = !{i64 6311}
!191 = !{i64 6328}
!192 = !{i64 6333}
!193 = !{i64 6339}
!194 = !{i64 6345}
!195 = !{i64 6368}
!196 = !{i64 6380}
!197 = !{i64 6390}
!198 = !{i64 6416}
!199 = !{i64 6426}
!200 = !{i64 6450}
!201 = !{i64 6460}
!202 = !{i64 6484}
!203 = !{i64 6494}
!204 = !{i64 6518}
!205 = !{i64 6528}
!206 = !{i64 6552}
!207 = !{i64 6562}
!208 = !{i64 6586}
!209 = !{i64 6596}
!210 = !{i64 6620}
!211 = !{i64 6629}
!212 = !{i64 6643}
!213 = !{i64 6653}
!214 = !{i64 6667}
!215 = !{i64 6680}
