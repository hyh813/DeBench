source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4014 = external local_unnamed_addr global i64
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_22c0 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_2029 = constant [11 x i8] c"src/5-23.c\00"
@global_var_2061 = constant [9 x i8] c"03:00:39\00"
@global_var_201d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_2034 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var = local_unnamed_addr global i32 100
@0 = external global i32
@global_var_400 = global i32 0
@1 = internal constant [40 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\A2\84\E5\A4\84\E7\90\86\E4\B8\8E\E6\9D\A1\E4\BB\B6\E7\BC\96\E8\AF\91 ===\0A\00"
@global_var_206a = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @1, i64 0, i64 0)
@2 = internal constant [27 x i8] c"PP-L2-01: %d (\E6\9C\9F\E6\9C\9B: 64)\0A\00"
@global_var_2092 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"PP-L2-02: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_20ad = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"PP-L2-03: %d (\E6\9C\9F\E6\9C\9B: 32)\0A\00"
@global_var_20c8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [31 x i8] c"PP-L2-04: %d (\E6\9C\9F\E6\9C\9B: 0xDF22)\0A\00"
@global_var_20e3 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"PP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 116)\0A\00"
@global_var_2102 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"PP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 11+5+\E8\A1\8C\E5\8F\B7\E9\95\BF\E5\BA\A6)\0A\00"
@global_var_211e = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [27 x i8] c"PP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2148 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @8, i64 0, i64 0)
@9 = internal constant [27 x i8] c"PP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2163 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @9, i64 0, i64 0)
@10 = internal constant [27 x i8] c"PP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_217e = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"PP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 500)\0A\00"
@global_var_2199 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [41 x i8] c"PP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 100+\E8\A1\8C\E5\8F\B7+0+1+2)\0A\00"
@global_var_21b5 = constant i8* getelementptr inbounds ([41 x i8], [41 x i8]* @12, i64 0, i64 0)
@13 = internal constant [43 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E8\81\94\E6\B1\87\E7\BC\96\E4\B8\8E\E5\BA\95\E5\B1\82\E7\89\B9\E6\80\A7 ===\0A\00"
@global_var_21de = constant i8* getelementptr inbounds ([43 x i8], [43 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"ASM-L4-01: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2209 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"ASM-L4-02: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2225 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"ASM-L4-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2241 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"ASM-L4-04: %d (\E6\9C\9F\E6\9C\9B: 36)\0A\00"
@global_var_225d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"ASM-L4-05: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_2279 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"ASM-L4-06: %d (\E6\9C\9F\E6\9C\9B: 77)\0A\00"
@global_var_2295 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

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

define i32 @main() local_unnamed_addr {
dec_label_pc_1100:
  call void @test_preprocessing_features(), !insn.addr !13
  call void @test_asm_features(), !insn.addr !14
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !15
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
dec_label_pc_1209:
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
dec_label_pc_1221:
  ret i64 64, !insn.addr !34
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_122b:
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
dec_label_pc_123c:
  ret i64 30, !insn.addr !40
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1246:
  %0 = mul i64 %arg1, 3, !insn.addr !41
  %1 = add i64 %0, 2, !insn.addr !42
  %2 = and i64 %1, 4294967295, !insn.addr !42
  ret i64 %2, !insn.addr !43
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1251:
  ret i64 32, !insn.addr !44
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_125b:
  %0 = mul i64 %arg1, 5, !insn.addr !45
  %1 = add i64 %0, 57072, !insn.addr !46
  %2 = and i64 %1, 4294967295, !insn.addr !46
  ret i64 %2, !insn.addr !47
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1268:
  ret i64 57122, !insn.addr !48
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_1272:
  %0 = add i64 %arg1, 16, !insn.addr !49
  %1 = and i64 %0, 4294967295, !insn.addr !49
  ret i64 %1, !insn.addr !50
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_127a:
  ret i64 116, !insn.addr !51
}

define i64 @param_stringize() local_unnamed_addr {
dec_label_pc_1284:
  ret i64 19, !insn.addr !52
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_128e:
  ret i64 19, !insn.addr !53
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1298:
  %0 = mul i64 %arg1, 10, !insn.addr !54
  %1 = and i64 %0, 4294967294, !insn.addr !54
  ret i64 %1, !insn.addr !55
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = mul i64 %arg1, 11, !insn.addr !56
  %1 = add i64 %0, 5, !insn.addr !57
  %2 = and i64 %1, 4294967295, !insn.addr !57
  ret i64 %2, !insn.addr !58
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_12ab:
  ret i64 60, !insn.addr !59
}

define i32 @param_variadic_macro(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_12b5:
  %0 = zext i32 %y to i64, !insn.addr !60
  %1 = zext i32 %z to i64, !insn.addr !61
  %2 = zext i32 %x to i64, !insn.addr !62
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 %2, i64 %0, i64 %1), !insn.addr !63
  %4 = add i32 %x, 50, !insn.addr !64
  ret i32 %4, !insn.addr !65
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_12db:
  %0 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30), !insn.addr !66
  ret i32 %0, !insn.addr !66
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = mul i64 %arg1, 2, !insn.addr !67
  %1 = add i64 %arg1, 1, !insn.addr !68
  %2 = add i64 %1, %0, !insn.addr !68
  %3 = and i64 %2, 4294967295, !insn.addr !68
  ret i64 %3, !insn.addr !69

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_12fc:
  ret i64 16, !insn.addr !70
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_1306:
  ret i64 500, !insn.addr !71
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_1310:
  ret i64 500, !insn.addr !72
}

define i32 @param_builtin_macros(i32 %x) local_unnamed_addr {
dec_label_pc_131a:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2034, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2029, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22c0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2061, i64 0, i64 0)), !insn.addr !73
  %1 = add i32 %x, 282, !insn.addr !74
  ret i32 %1, !insn.addr !75
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1362:
  %0 = call i32 @param_builtin_macros(i32 100), !insn.addr !76
  ret i32 %0, !insn.addr !76
}

define void @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_136d:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_206a to i8*)), !insn.addr !77
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !78
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20ad to i8*)), !insn.addr !79
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20c8 to i8*)), !insn.addr !80
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e3 to i8*)), !insn.addr !81
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2102 to i8*)), !insn.addr !82
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_211e to i8*)), !insn.addr !83
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2148 to i8*)), !insn.addr !84
  %8 = call i32 @call_variadic_macro(), !insn.addr !85
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2163 to i8*)), !insn.addr !86
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_217e to i8*)), !insn.addr !87
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2199 to i8*)), !insn.addr !88
  %12 = call i32 @call_builtin_macros(), !insn.addr !89
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21b5 to i8*)), !insn.addr !90
  ret void, !insn.addr !90
}

define i32 @param_asm_basic(i32 %x) local_unnamed_addr {
dec_label_pc_1496:
  %0 = add i32 %x, 10, !insn.addr !91
  ret i32 %0, !insn.addr !92
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_14a6:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !93
  ret i32 %0, !insn.addr !93
}

define i32 @param_asm_clobber(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_14b1:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !94
  %rax.01.reg2mem = alloca i32, !insn.addr !94
  %storemerge2.reg2mem = alloca i64, !insn.addr !94
  %0 = sext i32 %n to i64
  %1 = ptrtoint i32* %arr to i64
  %2 = icmp sgt i32 %n, 0, !insn.addr !95
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !95
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !95
  store i32 0, i32* %rax.0.lcssa.reg2mem, !insn.addr !95
  br i1 %2, label %dec_label_pc_14bd, label %dec_label_pc_14c4, !insn.addr !95

dec_label_pc_14bd:                                ; preds = %dec_label_pc_14b1, %dec_label_pc_14bd
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %3 = mul i64 %storemerge2.reload, 4, !insn.addr !96
  %4 = add i64 %3, %1, !insn.addr !96
  %5 = inttoptr i64 %4 to i32*, !insn.addr !96
  %6 = load i32, i32* %5, align 4, !insn.addr !96
  %7 = add i32 %6, %rax.01.reload, !insn.addr !96
  %8 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !97
  %9 = and i64 %8, 4294967295, !insn.addr !97
  %10 = icmp slt i64 %9, %0, !insn.addr !95
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !95
  store i32 %7, i32* %rax.01.reg2mem, !insn.addr !95
  store i32 %7, i32* %rax.0.lcssa.reg2mem, !insn.addr !95
  br i1 %10, label %dec_label_pc_14bd, label %dec_label_pc_14c4, !insn.addr !95

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14bd, %dec_label_pc_14b1
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !98

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14bd, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_14cb:
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !99
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !100
  %2 = icmp eq i64 %0, %1, !insn.addr !100
  br i1 %2, label %dec_label_pc_14f8, label %dec_label_pc_14f3, !insn.addr !101

dec_label_pc_14f3:                                ; preds = %dec_label_pc_14cb
  call void @__stack_chk_fail(), !insn.addr !102
  br label %dec_label_pc_14f8, !insn.addr !102

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14f3, %dec_label_pc_14cb
  %3 = bitcast i64* %stack_var_-36 to i32*, !insn.addr !103
  %4 = call i32 @param_asm_clobber(i32* nonnull %3, i32 5), !insn.addr !103
  ret i32 %4, !insn.addr !103
}

define void @param_asm_multi_insn(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_1508:
  %rdx.02.reg2mem = alloca i64, !insn.addr !104
  %rsi.03.reg2mem = alloca i64, !insn.addr !104
  %rdi.04.reg2mem = alloca i64, !insn.addr !104
  %0 = icmp eq i64 %n, 0, !insn.addr !105
  br i1 %0, label %dec_label_pc_1522, label %dec_label_pc_1513.lr.ph, !insn.addr !106

dec_label_pc_1513.lr.ph:                          ; preds = %dec_label_pc_1508
  %1 = ptrtoint i8* %dst to i64
  %2 = ptrtoint i32* %src to i64
  store i64 %1, i64* %rdi.04.reg2mem
  store i64 %2, i64* %rsi.03.reg2mem
  store i64 %n, i64* %rdx.02.reg2mem
  br label %dec_label_pc_1513

dec_label_pc_1513:                                ; preds = %dec_label_pc_1513.lr.ph, %dec_label_pc_1513
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %rdi.04.reload = load i64, i64* %rdi.04.reg2mem
  %3 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !107
  %4 = load i8, i8* %3, align 1, !insn.addr !107
  %5 = inttoptr i64 %rdi.04.reload to i8*, !insn.addr !108
  store i8 %4, i8* %5, align 1, !insn.addr !108
  %6 = add i64 %rdi.04.reload, 1, !insn.addr !109
  %7 = add i64 %rsi.03.reload, 1, !insn.addr !110
  %8 = add i64 %rdx.02.reload, -1, !insn.addr !111
  %9 = icmp eq i64 %8, 0, !insn.addr !105
  store i64 %6, i64* %rdi.04.reg2mem, !insn.addr !106
  store i64 %7, i64* %rsi.03.reg2mem, !insn.addr !106
  store i64 %8, i64* %rdx.02.reg2mem, !insn.addr !106
  br i1 %9, label %dec_label_pc_1522, label %dec_label_pc_1513, !insn.addr !106

dec_label_pc_1522:                                ; preds = %dec_label_pc_1513, %dec_label_pc_1508
  ret void, !insn.addr !112

; uselistorder directives
  uselistorder i64* %rdi.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_1513, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1523:
  %0 = alloca i128
  %1 = alloca i8
  %rax.1.reg2mem = alloca i32, !insn.addr !113
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %4 = load i128, i128* %0
  %stack_var_-48 = alloca i128, align 8
  %5 = load i128, i128* %0
  %stack_var_-58 = alloca i64, align 8
  %6 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !114
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !115
  %8 = mul i128 %5, 18446744073709551615
  %9 = ashr exact i128 %8, 64, !insn.addr !116
  call void @__asm_movups(i128 %9, i128 %6), !insn.addr !116
  call void @__asm_movups(i128 %4, i128 %6), !insn.addr !117
  store i64 5999111841566713160, i64* %stack_var_-58, align 8, !insn.addr !118
  %10 = bitcast i128* %stack_var_-48 to i8*, !insn.addr !119
  %11 = bitcast i64* %stack_var_-58 to i32*, !insn.addr !119
  call void @param_asm_multi_insn(i8* nonnull %10, i32* nonnull %11, i64 9), !insn.addr !119
  %12 = load i128, i128* %stack_var_-48, align 8, !insn.addr !120
  %13 = trunc i128 %12 to i8, !insn.addr !120
  %14 = icmp eq i8 %13, 72, !insn.addr !120
  %15 = icmp eq i1 %14, false, !insn.addr !121
  %16 = icmp eq i8 %3, 111
  %17 = select i1 %16, i32 42, i32 -1
  %rax.0 = select i1 %15, i32 -1, i32 %17
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !122
  %19 = icmp eq i64 %7, %18, !insn.addr !122
  store i32 %rax.0, i32* %rax.1.reg2mem, !insn.addr !123
  br i1 %19, label %dec_label_pc_159c, label %dec_label_pc_1597, !insn.addr !123

dec_label_pc_1597:                                ; preds = %dec_label_pc_1523
  call void @__stack_chk_fail(), !insn.addr !124
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !124
  br label %dec_label_pc_159c, !insn.addr !124

dec_label_pc_159c:                                ; preds = %dec_label_pc_1597, %dec_label_pc_1523
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !125

; uselistorder directives
  uselistorder i128 %6, { 1, 0 }
  uselistorder i128* %0, { 2, 1, 0 }
  uselistorder i1 false, { 2, 0, 1 }
}

define i32 @param_asm_simd(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_15a1:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !126
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !126
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !127
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !127
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !128
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !129
  %8 = sext i64 %7 to i128, !insn.addr !129
  %9 = bitcast i32* %result to i128*, !insn.addr !129
  store i128 %8, i128* %9, align 8, !insn.addr !129
  ret i32 0, !insn.addr !130
}

define i32 @param_simd_intrinsics(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_15b5:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !131
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !131
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !132
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !132
  %6 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !133
  %7 = sext i64 %6 to i128, !insn.addr !133
  %8 = bitcast i32* %result to i128*, !insn.addr !133
  store i128 %7, i128* %8, align 8, !insn.addr !133
  ret i32 0, !insn.addr !134
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_15c6:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !135
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !136
  store i64 8589934593, i64* %stack_var_-64, align 8, !insn.addr !137
  store i64 25769803781, i64* %stack_var_-48, align 8, !insn.addr !138
  %5 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !139
  %6 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !139
  %7 = call i32 @param_asm_simd(i32* nonnull %5, i32* nonnull %6, i32* nonnull %stack_var_-32), !insn.addr !139
  %8 = load i32, i32* %stack_var_-32, align 4, !insn.addr !140
  %9 = add i32 %2, %1, !insn.addr !140
  %10 = add i32 %9, %3, !insn.addr !141
  %11 = add i32 %10, %8, !insn.addr !142
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !143
  %13 = icmp eq i64 %4, %12, !insn.addr !143
  store i32 %11, i32* %rax.0.reg2mem, !insn.addr !144
  br i1 %13, label %dec_label_pc_1651, label %dec_label_pc_164c, !insn.addr !144

dec_label_pc_164c:                                ; preds = %dec_label_pc_15c6
  call void @__stack_chk_fail(), !insn.addr !145
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_1651, !insn.addr !145

dec_label_pc_1651:                                ; preds = %dec_label_pc_164c, %dec_label_pc_15c6
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !146

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1656:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !147
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !148
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !148
  store i32 %4, i32* %5, align 4, !insn.addr !148
  %6 = zext i32 %4 to i64, !insn.addr !149
  ret i64 %6, !insn.addr !150
}

define i32 @param_atomic_c11(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_1663:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !151
  store i32 %3, i32* %counter, align 4, !insn.addr !151
  ret i32 %3, !insn.addr !152
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1670:
  %rax.0.reg2mem = alloca i32, !insn.addr !153
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !154
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !155
  %2 = icmp eq i64 %0, %1, !insn.addr !155
  store i32 30, i32* %rax.0.reg2mem, !insn.addr !156
  br i1 %2, label %dec_label_pc_16bb, label %dec_label_pc_16b6, !insn.addr !156

dec_label_pc_16b6:                                ; preds = %dec_label_pc_1670
  call void @__stack_chk_fail(), !insn.addr !157
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !157
  br label %dec_label_pc_16bb, !insn.addr !157

dec_label_pc_16bb:                                ; preds = %dec_label_pc_16b6, %dec_label_pc_1670
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !158
}

define i32 @param_dynamic_code(i32 %x) local_unnamed_addr {
dec_label_pc_16c0:
  %r12.0.reg2mem = alloca i32, !insn.addr !159
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !160
  %1 = call i32 @sysconf(i32 30), !insn.addr !161
  %2 = call i64* @mmap(i64* null, i32 %1, i32 7, i32 34, i32 -1, i32 0), !insn.addr !162
  %3 = icmp eq i64* %2, inttoptr (i64 -1 to i64*), !insn.addr !163
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !164
  br i1 %3, label %dec_label_pc_1736, label %dec_label_pc_1714, !insn.addr !164

dec_label_pc_1714:                                ; preds = %dec_label_pc_16c0
  %4 = ptrtoint i64* %2 to i64, !insn.addr !162
  %5 = bitcast i64* %2 to i32*, !insn.addr !165
  store i32 -1065092983, i32* %5, align 4, !insn.addr !165
  %6 = add i64 %4, 4, !insn.addr !166
  %7 = inttoptr i64 %6 to i16*, !insn.addr !166
  store i16 -15611, i16* %7, align 2, !insn.addr !166
  %8 = call i32 @munmap(i64* %2, i32 %1), !insn.addr !167
  %phitmp = trunc i64 %4 to i32
  store i32 %phitmp, i32* %r12.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_1736, !insn.addr !167

dec_label_pc_1736:                                ; preds = %dec_label_pc_1714, %dec_label_pc_16c0
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !168
  %10 = icmp eq i64 %0, %9, !insn.addr !168
  br i1 %10, label %dec_label_pc_174b, label %dec_label_pc_1746, !insn.addr !169

dec_label_pc_1746:                                ; preds = %dec_label_pc_1736
  call void @__stack_chk_fail(), !insn.addr !170
  br label %dec_label_pc_174b, !insn.addr !170

dec_label_pc_174b:                                ; preds = %dec_label_pc_1746, %dec_label_pc_1736
  ret i32 %r12.0.reload, !insn.addr !171

; uselistorder directives
  uselistorder i64* %2, { 1, 0, 3, 2 }
  uselistorder void ()* @__stack_chk_fail, { 4, 3, 2, 1, 0, 5 }
  uselistorder i64 4, { 1, 0 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_175a:
  %r12.0.reg2mem = alloca i32, !insn.addr !172
  %0 = call i32 @sysconf(i32 30), !insn.addr !173
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !174
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !175
  store i32 -1, i32* %r12.0.reg2mem, !insn.addr !176
  br i1 %2, label %dec_label_pc_1807, label %dec_label_pc_1797, !insn.addr !176

dec_label_pc_1797:                                ; preds = %dec_label_pc_175a
  %3 = bitcast i64* %1 to i32*, !insn.addr !177
  store i32 42, i32* %3, align 4, !insn.addr !177
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !178
  %5 = icmp eq i32 %4, 0, !insn.addr !179
  br i1 %5, label %dec_label_pc_17cb, label %dec_label_pc_17bb, !insn.addr !180

dec_label_pc_17bb:                                ; preds = %dec_label_pc_1797
  %6 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !181
  store i32 -2, i32* %r12.0.reg2mem, !insn.addr !182
  br label %dec_label_pc_1807, !insn.addr !182

dec_label_pc_17cb:                                ; preds = %dec_label_pc_1797
  %7 = load i32, i32* %3, align 4, !insn.addr !183
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !184
  %9 = icmp eq i32 %8, 0, !insn.addr !185
  br i1 %9, label %dec_label_pc_17f9, label %dec_label_pc_17e9, !insn.addr !186

dec_label_pc_17e9:                                ; preds = %dec_label_pc_17cb
  %10 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !187
  store i32 -3, i32* %r12.0.reg2mem, !insn.addr !188
  br label %dec_label_pc_1807, !insn.addr !188

dec_label_pc_17f9:                                ; preds = %dec_label_pc_17cb
  store i32 100, i32* %3, align 4, !insn.addr !189
  %11 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !190
  store i32 %7, i32* %r12.0.reg2mem, !insn.addr !190
  br label %dec_label_pc_1807, !insn.addr !190

dec_label_pc_1807:                                ; preds = %dec_label_pc_17f9, %dec_label_pc_17e9, %dec_label_pc_17bb, %dec_label_pc_175a
  %r12.0.reload = load i32, i32* %r12.0.reg2mem
  ret i32 %r12.0.reload, !insn.addr !191

; uselistorder directives
  uselistorder i32* %3, { 2, 1, 0 }
  uselistorder i64* %1, { 0, 1, 4, 2, 5, 3, 6 }
  uselistorder i32* %r12.0.reg2mem, { 0, 3, 2, 1, 4 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 13, 14, 5, 6, 2, 3, 0, 1, 4, 8, 9, 10, 11, 12, 7 }
  uselistorder i32 -1, { 0, 4, 1, 5, 2, 3 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder i32 30, { 1, 2, 0, 3 }
}

define i32 @param_clobber_importance(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1812:
  %0 = add i32 %b, %a, !insn.addr !192
  %1 = mul i32 %0, 2, !insn.addr !193
  ret i32 %1, !insn.addr !194
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1826:
  %0 = call i32 @param_dynamic_code(i32 10), !insn.addr !195
  %1 = call i32 @param_memory_protection(), !insn.addr !196
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !197
  %3 = icmp eq i32 %0, 15, !insn.addr !198
  %4 = icmp eq i32 %1, 42, !insn.addr !199
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i32 %2, 20
  %7 = icmp eq i1 %5, %6
  %r12.0 = select i1 %7, i32 77, i32 %0
  ret i32 %r12.0, !insn.addr !200

; uselistorder directives
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder i32 10, { 0, 2, 1 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1870:
  %0 = load i32, i32* @global_var, align 4, !insn.addr !201
  %1 = add i32 %0, 50, !insn.addr !201
  ret i32 %1, !insn.addr !202

; uselistorder directives
  uselistorder i32 100, { 2, 0, 1 }
}

define void @test_asm_features() local_unnamed_addr {
dec_label_pc_188a:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21de to i8*)), !insn.addr !203
  %1 = call i32 @call_asm_basic(), !insn.addr !204
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2209 to i8*)), !insn.addr !205
  %3 = call i32 @call_asm_clobber(), !insn.addr !206
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2225 to i8*)), !insn.addr !207
  %5 = call i32 @call_asm_multi_insn(), !insn.addr !208
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2241 to i8*)), !insn.addr !209
  %7 = call i32 @call_asm_simd(), !insn.addr !210
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_225d to i8*)), !insn.addr !211
  %9 = call i32 @call_asm_atomic(), !insn.addr !212
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2279 to i8*)), !insn.addr !213
  %11 = call i32 @call_asm_privileged(), !insn.addr !214
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2295 to i8*)), !insn.addr !215
  ret void, !insn.addr !215

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 20, 19, 18, 17, 16, 15, 14, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13, 12, 21 }
  uselistorder i64 0, { 56, 3, 0, 50, 51, 42, 43, 44, 45, 46, 47, 48, 49, 52, 53, 54, 2, 1, 55, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_194c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !216

; uselistorder directives
  uselistorder i32 1, { 4, 19, 20, 21, 22, 23, 24, 25, 26, 7, 8, 9, 3, 2, 45, 48, 47, 10, 5, 44, 42, 43, 41, 49, 46, 11, 6, 0, 14, 13, 12, 50, 17, 16, 15, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 1, 51, 18 }
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

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps.1(i128) local_unnamed_addr

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
!13 = !{i64 4359}
!14 = !{i64 4366}
!15 = !{i64 4374}
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
!31 = !{i64 4621}
!32 = !{i64 4637}
!33 = !{i64 4640}
!34 = !{i64 4650}
!35 = !{i64 4657}
!36 = !{i64 4660}
!37 = !{i64 4662}
!38 = !{i64 4665}
!39 = !{i64 4667}
!40 = !{i64 4677}
!41 = !{i64 4682}
!42 = !{i64 4685}
!43 = !{i64 4688}
!44 = !{i64 4698}
!45 = !{i64 4703}
!46 = !{i64 4706}
!47 = !{i64 4711}
!48 = !{i64 4721}
!49 = !{i64 4726}
!50 = !{i64 4729}
!51 = !{i64 4739}
!52 = !{i64 4749}
!53 = !{i64 4759}
!54 = !{i64 4764}
!55 = !{i64 4767}
!56 = !{i64 4772}
!57 = !{i64 4775}
!58 = !{i64 4778}
!59 = !{i64 4788}
!60 = !{i64 4794}
!61 = !{i64 4798}
!62 = !{i64 4808}
!63 = !{i64 4817}
!64 = !{i64 4822}
!65 = !{i64 4826}
!66 = !{i64 4846}
!67 = !{i64 4852}
!68 = !{i64 4855}
!69 = !{i64 4859}
!70 = !{i64 4869}
!71 = !{i64 4879}
!72 = !{i64 4889}
!73 = !{i64 4947}
!74 = !{i64 4952}
!75 = !{i64 4961}
!76 = !{i64 4971}
!77 = !{i64 4992}
!78 = !{i64 5016}
!79 = !{i64 5040}
!80 = !{i64 5064}
!81 = !{i64 5088}
!82 = !{i64 5112}
!83 = !{i64 5136}
!84 = !{i64 5160}
!85 = !{i64 5167}
!86 = !{i64 5188}
!87 = !{i64 5212}
!88 = !{i64 5236}
!89 = !{i64 5243}
!90 = !{i64 5265}
!91 = !{i64 5276}
!92 = !{i64 5285}
!93 = !{i64 5295}
!94 = !{i64 5297}
!95 = !{i64 5307}
!96 = !{i64 5309}
!97 = !{i64 5312}
!98 = !{i64 5322}
!99 = !{i64 5331}
!100 = !{i64 5352}
!101 = !{i64 5361}
!102 = !{i64 5363}
!103 = !{i64 5382}
!104 = !{i64 5384}
!105 = !{i64 5389}
!106 = !{i64 5393}
!107 = !{i64 5395}
!108 = !{i64 5397}
!109 = !{i64 5399}
!110 = !{i64 5402}
!111 = !{i64 5405}
!112 = !{i64 5410}
!113 = !{i64 5411}
!114 = !{i64 5419}
!115 = !{i64 5427}
!116 = !{i64 5468}
!117 = !{i64 5473}
!118 = !{i64 5478}
!119 = !{i64 5483}
!120 = !{i64 5491}
!121 = !{i64 5496}
!122 = !{i64 5516}
!123 = !{i64 5525}
!124 = !{i64 5527}
!125 = !{i64 5536}
!126 = !{i64 5541}
!127 = !{i64 5544}
!128 = !{i64 5547}
!129 = !{i64 5551}
!130 = !{i64 5556}
!131 = !{i64 5561}
!132 = !{i64 5564}
!133 = !{i64 5570}
!134 = !{i64 5573}
!135 = !{i64 5574}
!136 = !{i64 5582}
!137 = !{i64 5621}
!138 = !{i64 5651}
!139 = !{i64 5671}
!140 = !{i64 5680}
!141 = !{i64 5684}
!142 = !{i64 5688}
!143 = !{i64 5697}
!144 = !{i64 5706}
!145 = !{i64 5708}
!146 = !{i64 5717}
!147 = !{i64 5722}
!148 = !{i64 5724}
!149 = !{i64 5728}
!150 = !{i64 5730}
!151 = !{i64 5737}
!152 = !{i64 5743}
!153 = !{i64 5744}
!154 = !{i64 5752}
!155 = !{i64 5803}
!156 = !{i64 5812}
!157 = !{i64 5814}
!158 = !{i64 5823}
!159 = !{i64 5824}
!160 = !{i64 5851}
!161 = !{i64 5867}
!162 = !{i64 5897}
!163 = !{i64 5902}
!164 = !{i64 5906}
!165 = !{i64 5914}
!166 = !{i64 5920}
!167 = !{i64 5937}
!168 = !{i64 5947}
!169 = !{i64 5956}
!170 = !{i64 5958}
!171 = !{i64 5977}
!172 = !{i64 5978}
!173 = !{i64 5998}
!174 = !{i64 6028}
!175 = !{i64 6033}
!176 = !{i64 6037}
!177 = !{i64 6055}
!178 = !{i64 6061}
!179 = !{i64 6071}
!180 = !{i64 6073}
!181 = !{i64 6084}
!182 = !{i64 6089}
!183 = !{i64 6104}
!184 = !{i64 6107}
!185 = !{i64 6117}
!186 = !{i64 6119}
!187 = !{i64 6130}
!188 = !{i64 6135}
!189 = !{i64 6137}
!190 = !{i64 6146}
!191 = !{i64 6161}
!192 = !{i64 6168}
!193 = !{i64 6178}
!194 = !{i64 6181}
!195 = !{i64 6193}
!196 = !{i64 6203}
!197 = !{i64 6221}
!198 = !{i64 6226}
!199 = !{i64 6232}
!200 = !{i64 6255}
!201 = !{i64 6269}
!202 = !{i64 6281}
!203 = !{i64 6301}
!204 = !{i64 6315}
!205 = !{i64 6329}
!206 = !{i64 6336}
!207 = !{i64 6357}
!208 = !{i64 6364}
!209 = !{i64 6385}
!210 = !{i64 6392}
!211 = !{i64 6413}
!212 = !{i64 6420}
!213 = !{i64 6441}
!214 = !{i64 6448}
!215 = !{i64 6470}
!216 = !{i64 6488}
