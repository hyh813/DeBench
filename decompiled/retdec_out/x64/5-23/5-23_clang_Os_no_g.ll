source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_405c = external local_unnamed_addr global i64
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2052 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var_201d = constant [11 x i8] c"src/5-23.c\00"
@global_var_2028 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_203d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_2049 = constant [9 x i8] c"03:01:00\00"
@0 = external global i32
@global_var_401 = global i32 0
@1 = internal constant [39 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\A2\84\E5\A4\84\E7\90\86\E4\B8\8E\E6\9D\A1\E4\BB\B6\E7\BC\96\E8\AF\91 ===\00"
@global_var_227d = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @1, i64 0, i64 0)
@2 = internal constant [27 x i8] c"PP-L2-01: %d (\E6\9C\9F\E6\9C\9B: 64)\0A\00"
@global_var_207f = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"PP-L2-02: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_209a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"PP-L2-03: %d (\E6\9C\9F\E6\9C\9B: 32)\0A\00"
@global_var_20b5 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [31 x i8] c"PP-L2-04: %d (\E6\9C\9F\E6\9C\9B: 0xDF22)\0A\00"
@global_var_20d0 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"PP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 116)\0A\00"
@global_var_20ef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"PP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 11+5+\E8\A1\8C\E5\8F\B7\E9\95\BF\E5\BA\A6)\0A\00"
@global_var_210b = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [27 x i8] c"PP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2135 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @8, i64 0, i64 0)
@9 = internal constant [27 x i8] c"PP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2150 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @9, i64 0, i64 0)
@10 = internal constant [27 x i8] c"PP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_216b = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"PP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 500)\0A\00"
@global_var_2186 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [41 x i8] c"PP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 100+\E8\A1\8C\E5\8F\B7+0+1+2)\0A\00"
@global_var_21a2 = constant i8* getelementptr inbounds ([41 x i8], [41 x i8]* @12, i64 0, i64 0)
@global_var_22e0 = local_unnamed_addr constant i32 5
@global_var_22d0 = external local_unnamed_addr constant i128
@global_var_22f0 = external local_unnamed_addr constant i128
@global_var_2300 = external local_unnamed_addr constant i128
@13 = internal constant [42 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E8\81\94\E6\B1\87\E7\BC\96\E4\B8\8E\E5\BA\95\E5\B1\82\E7\89\B9\E6\80\A7 ===\00"
@global_var_22a4 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"ASM-L4-01: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_21d5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"ASM-L4-02: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_21f1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"ASM-L4-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_220d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"ASM-L4-04: %d (\E6\9C\9F\E6\9C\9B: 36)\0A\00"
@global_var_2229 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"ASM-L4-05: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_2245 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"ASM-L4-06: %d (\E6\9C\9F\E6\9C\9B: 77)\0A\00"
@global_var_2261 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

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

define i32 @function_1030(i8* %s) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 @puts(i8* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i64* @function_1040(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i64* @mmap(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !7
  ret i64* %0, !insn.addr !7
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1060(i64* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @munmap(i64* %addr, i32 %len), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1070(i64* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @mprotect(i64* %addr, i32 %len, i32 %prot), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1080(i32 %name) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_1090(i64* %d) local_unnamed_addr {
dec_label_pc_1090:
  call void @__cxa_finalize(i64* %d), !insn.addr !12
  ret void, !insn.addr !12
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10a0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !13
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !13
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !13
  %3 = call i32 @__libc_start_main(i64 6197, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !13
  %4 = call i64 @__asm_hlt(), !insn.addr !14
  unreachable, !insn.addr !14
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10d0:
  ret i64 16480, !insn.addr !15
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1100:
  ret i64 0, !insn.addr !16
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16476 to i8*), align 4, !insn.addr !17
  %3 = icmp eq i8 %2, 0, !insn.addr !17
  %4 = icmp eq i1 %3, false, !insn.addr !18
  br i1 %4, label %dec_label_pc_1178, label %dec_label_pc_114d, !insn.addr !18

dec_label_pc_114d:                                ; preds = %dec_label_pc_1140
  %5 = load i64, i64* @global_var_3ff8, align 8, !insn.addr !19
  %6 = icmp eq i64 %5, 0, !insn.addr !19
  br i1 %6, label %dec_label_pc_1167, label %dec_label_pc_115b, !insn.addr !20

dec_label_pc_115b:                                ; preds = %dec_label_pc_114d
  %7 = load i64, i64* inttoptr (i64 16464 to i64*), align 16, !insn.addr !21
  %8 = inttoptr i64 %7 to i64*, !insn.addr !22
  call void @__cxa_finalize(i64* %8), !insn.addr !22
  br label %dec_label_pc_1167, !insn.addr !22

dec_label_pc_1167:                                ; preds = %dec_label_pc_115b, %dec_label_pc_114d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !23
  store i8 1, i8* bitcast (i64* @global_var_405c to i8*), align 8, !insn.addr !24
  ret i64 %9, !insn.addr !25

dec_label_pc_1178:                                ; preds = %dec_label_pc_1140
  ret i64 %1, !insn.addr !26
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i64 @register_tm_clones(), !insn.addr !27
  ret i64 %0, !insn.addr !27
}

define i64 @param_macro_constants(i64 %arg1) local_unnamed_addr {
dec_label_pc_118c:
  %0 = trunc i64 %arg1 to i32, !insn.addr !28
  %1 = sub i32 %0, ptrtoint (i32* @global_var_401 to i32), !insn.addr !28
  %2 = xor i32 %0, ptrtoint (i32* @global_var_401 to i32), !insn.addr !28
  %3 = xor i32 %1, %0, !insn.addr !28
  %4 = and i32 %3, %2, !insn.addr !28
  %5 = icmp slt i32 %4, 0, !insn.addr !28
  %6 = icmp slt i32 %1, 0, !insn.addr !28
  %7 = icmp eq i1 %6, %5, !insn.addr !29
  %8 = select i1 %7, i64 64, i64 512, !insn.addr !29
  ret i64 %8, !insn.addr !30

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i64 @call_macro_constants() local_unnamed_addr {
dec_label_pc_11a0:
  ret i64 64, !insn.addr !31
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11a6:
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
  %10 = icmp eq i32 %4, 0, !insn.addr !33
  %11 = icmp slt i32 %4, 0, !insn.addr !33
  %12 = icmp eq i1 %11, %9, !insn.addr !34
  %13 = icmp eq i1 %10, false, !insn.addr !34
  %14 = icmp eq i1 %12, %13, !insn.addr !34
  %.v = select i1 %14, i64 %arg1, i64 %arg2
  %15 = add i64 %.v, %1, !insn.addr !35
  %16 = and i64 %15, 4294967295, !insn.addr !35
  ret i64 %16, !insn.addr !36

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 2, 1, 3, 0 }
}

define i64 @call_macro_functions() local_unnamed_addr {
dec_label_pc_11b3:
  ret i64 30, !insn.addr !37
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_11b9:
  %0 = mul i64 %arg1, 3, !insn.addr !38
  %1 = add i64 %0, 2, !insn.addr !39
  %2 = and i64 %1, 4294967295, !insn.addr !39
  ret i64 %2, !insn.addr !40
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_11c0:
  ret i64 32, !insn.addr !41
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_11c6:
  %0 = mul i64 %arg1, 5, !insn.addr !42
  %1 = add i64 %0, 57072, !insn.addr !43
  %2 = and i64 %1, 4294967295, !insn.addr !43
  ret i64 %2, !insn.addr !44
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_11cf:
  ret i64 57122, !insn.addr !45
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_11d5:
  %0 = add i64 %arg1, 16, !insn.addr !46
  %1 = and i64 %0, 4294967295, !insn.addr !46
  ret i64 %1, !insn.addr !47
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_11d9:
  ret i64 116, !insn.addr !48
}

define i64 @param_stringize() local_unnamed_addr {
dec_label_pc_11df:
  ret i64 19, !insn.addr !49
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_11e5:
  ret i64 19, !insn.addr !50
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_11eb:
  %0 = mul i64 %arg1, 10, !insn.addr !51
  %1 = and i64 %0, 4294967294, !insn.addr !51
  ret i64 %1, !insn.addr !52
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_11f1:
  %0 = mul i64 %arg1, 11, !insn.addr !53
  %1 = add i64 %0, 5, !insn.addr !54
  %2 = and i64 %1, 4294967295, !insn.addr !54
  ret i64 %2, !insn.addr !55
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_11fb:
  ret i64 60, !insn.addr !56
}

define i64 @param_variadic_macro(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1201:
  %0 = and i64 %arg3, 4294967295, !insn.addr !57
  %1 = and i64 %arg2, 4294967295, !insn.addr !58
  %2 = and i64 %arg1, 4294967295, !insn.addr !59
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 %2, i64 %1, i64 %0), !insn.addr !60
  %4 = add i64 %arg1, 50, !insn.addr !61
  %5 = and i64 %4, 4294967295, !insn.addr !62
  ret i64 %5, !insn.addr !63
}

define i64 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_121f:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !64
  ret i64 60, !insn.addr !65
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_1244:
  %0 = mul i64 %arg1, 3, !insn.addr !66
  %1 = add i64 %0, 1, !insn.addr !67
  %2 = and i64 %1, 4294967295, !insn.addr !67
  ret i64 %2, !insn.addr !68
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_124a:
  ret i64 16, !insn.addr !69
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_1250:
  ret i64 500, !insn.addr !70
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_1256:
  ret i64 500, !insn.addr !71
}

define i64 @param_builtin_macros(i64 %arg1) local_unnamed_addr {
dec_label_pc_125c:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !72
  %1 = add i64 %arg1, 282, !insn.addr !73
  %2 = and i64 %1, 4294967295, !insn.addr !74
  ret i64 %2, !insn.addr !75
}

define i64 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1298:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !76
  ret i64 382, !insn.addr !77
}

define i64 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_12cf:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_227d to i8*)), !insn.addr !78
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_207f to i8*)), !insn.addr !79
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_209a to i8*)), !insn.addr !80
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b5 to i8*)), !insn.addr !81
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d0 to i8*)), !insn.addr !82
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ef to i8*)), !insn.addr !83
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210b to i8*)), !insn.addr !84
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2135 to i8*)), !insn.addr !85
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !86
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2150 to i8*)), !insn.addr !87
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_216b to i8*)), !insn.addr !88
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2186 to i8*)), !insn.addr !89
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !90
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a2 to i8*)), !insn.addr !91
  %14 = sext i32 %13 to i64, !insn.addr !91
  ret i64 %14, !insn.addr !91
}

define i64 @param_asm_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_13fa:
  %0 = add i64 %arg1, 10, !insn.addr !92
  %1 = and i64 %0, 4294967295, !insn.addr !93
  ret i64 %1, !insn.addr !94
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1404:
  ret i64 15, !insn.addr !95
}

define i64 @param_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1413:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !96
  %rax.01.reg2mem = alloca i32, !insn.addr !96
  %storemerge2.reg2mem = alloca i64, !insn.addr !96
  %0 = icmp sgt i64 %arg2, 0, !insn.addr !97
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !97
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !97
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !97
  br i1 %0, label %dec_label_pc_141b, label %dec_label_pc_1422, !insn.addr !97

dec_label_pc_141b:                                ; preds = %dec_label_pc_1413, %dec_label_pc_141b
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %1 = mul i64 %storemerge2.reload, 4, !insn.addr !98
  %2 = add i64 %1, %arg1, !insn.addr !98
  %3 = inttoptr i64 %2 to i32*, !insn.addr !98
  %4 = load i32, i32* %3, align 4, !insn.addr !98
  %5 = add i32 %4, %rax.01.reload, !insn.addr !98
  %6 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !99
  %7 = and i64 %6, 4294967295, !insn.addr !99
  %8 = icmp slt i64 %7, %arg2, !insn.addr !97
  store i64 %7, i64* %storemerge2.reg2mem, !insn.addr !97
  store i32 %5, i32* %rax.01.reg2mem, !insn.addr !97
  br i1 %8, label %dec_label_pc_141b, label %dec_label_pc_1417.dec_label_pc_1422_crit_edge, !insn.addr !97

dec_label_pc_1417.dec_label_pc_1422_crit_edge:    ; preds = %dec_label_pc_141b
  %9 = zext i32 %5 to i64, !insn.addr !98
  store i64 %9, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_1422

dec_label_pc_1422:                                ; preds = %dec_label_pc_1417.dec_label_pc_1422_crit_edge, %dec_label_pc_1413
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !100

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_141b, { 1, 0 }
}

define i64 @call_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1427:
  %rax.01.reg2mem = alloca i32, !insn.addr !101
  %storemerge2.reg2mem = alloca i64, !insn.addr !101
  %stack_var_-24 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !102
  %1 = load i128, i128* @global_var_22d0, align 8, !insn.addr !103
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !103
  %3 = call i64 @__asm_movaps.1(i128 %2), !insn.addr !104
  store i64 %3, i64* %stack_var_-24, align 8, !insn.addr !104
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %rax.01.reg2mem
  br label %dec_label_pc_144c

dec_label_pc_144c:                                ; preds = %dec_label_pc_1427, %dec_label_pc_144c
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %4 = mul i64 %storemerge2.reload, 4, !insn.addr !105
  %5 = add i64 %4, %0, !insn.addr !105
  %6 = inttoptr i64 %5 to i32*, !insn.addr !105
  %7 = load i32, i32* %6, align 4, !insn.addr !105
  %8 = add i32 %7, %rax.01.reload, !insn.addr !105
  %9 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !106
  %10 = and i64 %9, 4294967295, !insn.addr !106
  %11 = icmp ult i64 %10, 5, !insn.addr !107
  store i64 %10, i64* %storemerge2.reg2mem, !insn.addr !107
  store i32 %8, i32* %rax.01.reg2mem, !insn.addr !107
  br i1 %11, label %dec_label_pc_144c, label %dec_label_pc_1453, !insn.addr !107

dec_label_pc_1453:                                ; preds = %dec_label_pc_144c
  %12 = zext i32 %8 to i64, !insn.addr !105
  ret i64 %12, !insn.addr !108

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_144c, { 1, 0 }
}

define i64 @param_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1458:
  %0 = alloca i64
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !109
  %rax.01.reg2mem = alloca i64, !insn.addr !109
  %rdx.02.reg2mem = alloca i64, !insn.addr !109
  %rsi.03.reg2mem = alloca i64, !insn.addr !109
  %rdi.04.reg2mem = alloca i64, !insn.addr !109
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !110
  br i1 %2, label %dec_label_pc_146e, label %dec_label_pc_145f, !insn.addr !111

dec_label_pc_145f:                                ; preds = %dec_label_pc_1458, %dec_label_pc_145f
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %rdi.04.reload = load i64, i64* %rdi.04.reg2mem
  %3 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !112
  %4 = load i8, i8* %3, align 1, !insn.addr !112
  %5 = zext i8 %4 to i64, !insn.addr !112
  %6 = and i64 %rax.01.reload, -256, !insn.addr !112
  %7 = or i64 %6, %5, !insn.addr !112
  %8 = inttoptr i64 %rdi.04.reload to i8*, !insn.addr !113
  store i8 %4, i8* %8, align 1, !insn.addr !113
  %9 = add i64 %rdi.04.reload, 1, !insn.addr !114
  %10 = add i64 %rsi.03.reload, 1, !insn.addr !115
  %11 = add i64 %rdx.02.reload, -1, !insn.addr !116
  %12 = icmp eq i64 %11, 0, !insn.addr !110
  store i64 %9, i64* %rdi.04.reg2mem, !insn.addr !111
  store i64 %10, i64* %rsi.03.reg2mem, !insn.addr !111
  store i64 %11, i64* %rdx.02.reg2mem, !insn.addr !111
  store i64 %7, i64* %rax.01.reg2mem, !insn.addr !111
  store i64 %7, i64* %rax.0.lcssa.reg2mem, !insn.addr !111
  br i1 %12, label %dec_label_pc_146e, label %dec_label_pc_145f, !insn.addr !111

dec_label_pc_146e:                                ; preds = %dec_label_pc_145f, %dec_label_pc_1458
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !117

; uselistorder directives
  uselistorder i64* %rdi.04.reg2mem, { 1, 0 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_145f, { 1, 0 }
}

define i64 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_146f:
  %0 = alloca i128
  %1 = alloca i8
  %rcx.03.reg2mem = alloca i64, !insn.addr !118
  %rsi.04.reg2mem = alloca i64, !insn.addr !118
  %rdi.05.reg2mem = alloca i64, !insn.addr !118
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-40 = alloca i8, align 1
  %stack_var_-56 = alloca i64, align 8
  %4 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !119
  store i64 5999111841566713160, i64* %stack_var_-56, align 8, !insn.addr !120
  %5 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !121
  %6 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !122
  %7 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !123
  %8 = trunc i64 %7 to i8, !insn.addr !123
  store i8 %8, i8* %stack_var_-40, align 1, !insn.addr !123
  %9 = ptrtoint i8* %stack_var_-40 to i64, !insn.addr !124
  store i64 %9, i64* %rdi.05.reg2mem
  store i64 9, i64* %rsi.04.reg2mem
  store i64 %4, i64* %rcx.03.reg2mem
  br label %dec_label_pc_14a5

dec_label_pc_14a5:                                ; preds = %dec_label_pc_146f, %dec_label_pc_14a5
  %rcx.03.reload = load i64, i64* %rcx.03.reg2mem
  %rsi.04.reload = load i64, i64* %rsi.04.reg2mem
  %rdi.05.reload = load i64, i64* %rdi.05.reg2mem
  %10 = inttoptr i64 %rcx.03.reload to i8*, !insn.addr !125
  %11 = load i8, i8* %10, align 1, !insn.addr !125
  %12 = inttoptr i64 %rdi.05.reload to i8*, !insn.addr !126
  store i8 %11, i8* %12, align 1, !insn.addr !126
  %13 = add i64 %rdi.05.reload, 1, !insn.addr !127
  %14 = add i64 %rcx.03.reload, 1, !insn.addr !128
  %15 = add nsw i64 %rsi.04.reload, -1, !insn.addr !129
  %16 = icmp eq i64 %15, 0, !insn.addr !130
  store i64 %13, i64* %rdi.05.reg2mem, !insn.addr !131
  store i64 %15, i64* %rsi.04.reg2mem, !insn.addr !131
  store i64 %14, i64* %rcx.03.reg2mem, !insn.addr !131
  br i1 %16, label %dec_label_pc_14b4, label %dec_label_pc_14a5, !insn.addr !131

dec_label_pc_14b4:                                ; preds = %dec_label_pc_14a5
  %17 = load i8, i8* %stack_var_-40, align 1, !insn.addr !132
  %18 = icmp eq i8 %3, 111
  %19 = icmp eq i8 %17, 72
  %20 = icmp eq i1 %18, %19, !insn.addr !133
  %21 = select i1 %20, i64 42, i64 4294967295, !insn.addr !134
  ret i64 %21, !insn.addr !135

; uselistorder directives
  uselistorder i128 %5, { 1, 0 }
  uselistorder i8* %stack_var_-40, { 2, 1, 0 }
  uselistorder i64* %rdi.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_14a5, { 1, 0 }
}

define i64 @param_asm_simd(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_14ce:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !136
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !136
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !137
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !137
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !138
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !139
  %8 = sext i64 %7 to i128, !insn.addr !139
  %9 = inttoptr i64 %arg3 to i128*, !insn.addr !139
  store i128 %8, i128* %9, align 8, !insn.addr !139
  ret i64 0, !insn.addr !140
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_14de:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !141
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !141
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !142
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !142
  %6 = call i64 @__asm_movdqa.2(i128 %5), !insn.addr !143
  %7 = sext i64 %6 to i128, !insn.addr !143
  %8 = inttoptr i64 %arg3 to i128*, !insn.addr !143
  store i128 %7, i128* %8, align 8, !insn.addr !143
  ret i64 0, !insn.addr !144
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_14ed:
  %0 = load i128, i128* @global_var_22f0, align 8, !insn.addr !145
  %1 = call i128 @__asm_movaps(i128 %0), !insn.addr !145
  %2 = call i64 @__asm_movaps.1(i128 %1), !insn.addr !146
  %3 = load i128, i128* @global_var_2300, align 8, !insn.addr !147
  %4 = call i128 @__asm_movaps(i128 %3), !insn.addr !147
  %5 = call i64 @__asm_movaps.1(i128 %4), !insn.addr !148
  %6 = sext i64 %2 to i128, !insn.addr !149
  %7 = call i128 @__asm_movaps(i128 %6), !insn.addr !149
  %8 = sext i64 %5 to i128, !insn.addr !150
  %9 = call i128 @__asm_movaps(i128 %8), !insn.addr !150
  %10 = call i128 @__asm_paddd(i128 %7, i128 %9), !insn.addr !151
  %11 = call i64 @__asm_movaps.1(i128 %10), !insn.addr !152
  %12 = sext i64 %11 to i128, !insn.addr !153
  %13 = call i128 @__asm_movdqa(i128 %12), !insn.addr !153
  %14 = call i128 @__asm_pshufd(i128 %13, i8 -18), !insn.addr !154
  %15 = call i128 @__asm_paddd(i128 %14, i128 %13), !insn.addr !155
  %16 = call i128 @__asm_pshufd(i128 %15, i8 85), !insn.addr !156
  %17 = call i128 @__asm_paddd(i128 %16, i128 %15), !insn.addr !157
  %18 = call i32 @__asm_movd(i128 %17), !insn.addr !158
  %19 = sext i32 %18 to i64, !insn.addr !158
  ret i64 %19, !insn.addr !159

; uselistorder directives
  uselistorder i128 %15, { 1, 0 }
  uselistorder i128 %13, { 1, 0 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1538:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !160
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !161
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !161
  store i32 %4, i32* %5, align 4, !insn.addr !161
  %6 = zext i32 %4 to i64, !insn.addr !162
  ret i64 %6, !insn.addr !163
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1541:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !164
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !165
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !165
  store i32 %4, i32* %5, align 4, !insn.addr !165
  %6 = zext i32 %4 to i64, !insn.addr !166
  ret i64 %6, !insn.addr !167
}

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_154a:
  ret i64 30, !insn.addr !168

; uselistorder directives
  uselistorder i64 30, { 0, 2, 3, 1 }
}

define i64 @param_dynamic_code(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1566:
  %storemerge.reg2mem = alloca i64, !insn.addr !169
  %0 = call i32 @sysconf(i32 30), !insn.addr !170
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !171
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !172
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !173
  br i1 %2, label %dec_label_pc_15c9, label %dec_label_pc_159d, !insn.addr !173

dec_label_pc_159d:                                ; preds = %dec_label_pc_1566
  %3 = ptrtoint i64* %1 to i64, !insn.addr !171
  %4 = add i64 %3, 4, !insn.addr !174
  %5 = inttoptr i64 %4 to i16*, !insn.addr !174
  store i16 -15611, i16* %5, align 2, !insn.addr !174
  %6 = bitcast i64* %1 to i32*, !insn.addr !175
  store i32 -1065092983, i32* %6, align 4, !insn.addr !175
  %7 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !176
  %8 = and i64 %3, 4294967295, !insn.addr !177
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !178
  br label %dec_label_pc_15c9, !insn.addr !178

dec_label_pc_15c9:                                ; preds = %dec_label_pc_1566, %dec_label_pc_159d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !179

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 2, 0, 1 }
  uselistorder label %dec_label_pc_15c9, { 1, 0 }
}

define i64 @param_memory_protection(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_15ce:
  %rbp.1.reg2mem = alloca i64, !insn.addr !180
  %rbp.0.reg2mem = alloca i64, !insn.addr !180
  %0 = call i32 @sysconf(i32 30), !insn.addr !181
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !182
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !183
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !184
  br i1 %2, label %dec_label_pc_165c, label %dec_label_pc_160a, !insn.addr !184

dec_label_pc_160a:                                ; preds = %dec_label_pc_15ce
  %3 = bitcast i64* %1 to i32*, !insn.addr !185
  store i32 42, i32* %3, align 4, !insn.addr !185
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !186
  %5 = icmp eq i32 %4, 0, !insn.addr !187
  %6 = icmp eq i1 %5, false, !insn.addr !188
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !188
  br i1 %6, label %dec_label_pc_1651, label %dec_label_pc_162c, !insn.addr !188

dec_label_pc_162c:                                ; preds = %dec_label_pc_160a
  %7 = load i32, i32* %3, align 4, !insn.addr !189
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !190
  %9 = icmp eq i32 %8, 0, !insn.addr !191
  %10 = icmp eq i1 %9, false, !insn.addr !192
  store i64 4294967293, i64* %rbp.0.reg2mem, !insn.addr !192
  br i1 %10, label %dec_label_pc_1651, label %dec_label_pc_1648, !insn.addr !192

dec_label_pc_1648:                                ; preds = %dec_label_pc_162c
  %11 = zext i32 %7 to i64, !insn.addr !189
  store i32 100, i32* %3, align 4, !insn.addr !193
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_1651, !insn.addr !194

dec_label_pc_1651:                                ; preds = %dec_label_pc_1648, %dec_label_pc_162c, %dec_label_pc_160a
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %12 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !195
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !195
  br label %dec_label_pc_165c, !insn.addr !195

dec_label_pc_165c:                                ; preds = %dec_label_pc_1651, %dec_label_pc_15ce
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %13 = and i64 %rbp.1.reload, 4294967295, !insn.addr !196
  ret i64 %13, !insn.addr !197

; uselistorder directives
  uselistorder i32 (i64*, i32)* @munmap, { 1, 0, 2 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 5, 6, 2, 3, 0, 1, 7, 8, 9, 10, 11, 4 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1669:
  %0 = add i64 %arg2, %arg1, !insn.addr !198
  %1 = mul i64 %0, 2, !insn.addr !199
  %2 = and i64 %1, 4294967294, !insn.addr !199
  ret i64 %2, !insn.addr !200

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
}

define i64 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1678:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = call i64 @param_dynamic_code(i64 10, i64 %3, i64 %4, i64 %5, i64 %2, i64 %1), !insn.addr !201
  %7 = call i64 @param_memory_protection(i64 10, i64 %3, i64 %4, i64 %5, i64 %2, i64 %1), !insn.addr !202
  %8 = trunc i64 %7 to i32, !insn.addr !203
  %9 = trunc i64 %6 to i32, !insn.addr !204
  %10 = icmp eq i32 %8, 42
  %11 = icmp eq i32 %9, 15
  %12 = icmp eq i1 %11, %10, !insn.addr !205
  %13 = icmp eq i1 %12, false, !insn.addr !206
  %14 = and i64 %6, 4294967295
  %15 = select i1 %13, i64 %14, i64 77, !insn.addr !206
  ret i64 %15, !insn.addr !207

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
  uselistorder i64 4294967295, { 2, 3, 0, 4, 1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 }
  uselistorder i64 10, { 3, 2, 0, 4, 5, 1 }
}

define i64 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_16c0:
  %0 = load i32, i32* inttoptr (i64 16472 to i32*), align 8, !insn.addr !208
  %1 = add i32 %0, 50, !insn.addr !208
  %2 = zext i32 %1 to i64, !insn.addr !209
  ret i64 %2, !insn.addr !210
}

define i64 @test_asm_features(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_16d2:
  %rcx.05.reg2mem = alloca i64, !insn.addr !211
  %rdx.06.reg2mem = alloca i64, !insn.addr !211
  %rsi.07.reg2mem = alloca i64, !insn.addr !211
  %stack_var_-72 = alloca i128, align 8
  %stack_var_-56 = alloca i128, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_22a4 to i8*)), !insn.addr !212
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21d5 to i8*)), !insn.addr !213
  %2 = load i128, i128* @global_var_22d0, align 8, !insn.addr !214
  %3 = call i128 @__asm_movaps(i128 %2), !insn.addr !214
  %4 = call i64 @__asm_movaps.1(i128 %3), !insn.addr !215
  %5 = sext i64 %4 to i128, !insn.addr !215
  store i128 %5, i128* %stack_var_-56, align 8, !insn.addr !215
  %6 = ptrtoint i128* %stack_var_-56 to i64, !insn.addr !216
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21f1 to i8*)), !insn.addr !217
  store i128 5999111841566713160, i128* %stack_var_-72, align 8, !insn.addr !218
  %8 = call i128 @__asm_xorps(i128 %3, i128 %3), !insn.addr !219
  %9 = call i64 @__asm_movaps.1(i128 %8), !insn.addr !220
  %10 = call i64 @__asm_movaps.1(i128 %8), !insn.addr !221
  %11 = sext i64 %10 to i128, !insn.addr !221
  store i128 %11, i128* %stack_var_-56, align 8, !insn.addr !221
  %12 = ptrtoint i128* %stack_var_-72 to i64, !insn.addr !222
  store i64 %6, i64* %rsi.07.reg2mem
  store i64 %12, i64* %rdx.06.reg2mem
  store i64 9, i64* %rcx.05.reg2mem
  br label %dec_label_pc_1770

dec_label_pc_1770:                                ; preds = %dec_label_pc_16d2, %dec_label_pc_1770
  %rcx.05.reload = load i64, i64* %rcx.05.reg2mem
  %rdx.06.reload = load i64, i64* %rdx.06.reg2mem
  %rsi.07.reload = load i64, i64* %rsi.07.reg2mem
  %13 = inttoptr i64 %rdx.06.reload to i8*, !insn.addr !223
  %14 = load i8, i8* %13, align 1, !insn.addr !223
  %15 = inttoptr i64 %rsi.07.reload to i8*, !insn.addr !224
  store i8 %14, i8* %15, align 1, !insn.addr !224
  %16 = add i64 %rsi.07.reload, 1, !insn.addr !225
  %17 = add i64 %rdx.06.reload, 1, !insn.addr !226
  %18 = add nsw i64 %rcx.05.reload, -1, !insn.addr !227
  %19 = icmp eq i64 %18, 0, !insn.addr !228
  store i64 %16, i64* %rsi.07.reg2mem, !insn.addr !229
  store i64 %17, i64* %rdx.06.reg2mem, !insn.addr !229
  store i64 %18, i64* %rcx.05.reg2mem, !insn.addr !229
  br i1 %19, label %dec_label_pc_177f, label %dec_label_pc_1770, !insn.addr !229

dec_label_pc_177f:                                ; preds = %dec_label_pc_1770
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_220d to i8*)), !insn.addr !230
  %21 = load i128, i128* @global_var_22f0, align 8, !insn.addr !231
  %22 = call i128 @__asm_movaps(i128 %21), !insn.addr !231
  %23 = call i64 @__asm_movaps.1(i128 %22), !insn.addr !232
  %24 = sext i64 %23 to i128, !insn.addr !232
  store i128 %24, i128* %stack_var_-56, align 8, !insn.addr !232
  %25 = load i128, i128* @global_var_2300, align 8, !insn.addr !233
  %26 = call i128 @__asm_movaps(i128 %25), !insn.addr !233
  %27 = call i64 @__asm_movaps.1(i128 %26), !insn.addr !234
  %28 = sext i64 %27 to i128, !insn.addr !234
  store i128 %28, i128* %stack_var_-72, align 8, !insn.addr !234
  %29 = load i128, i128* %stack_var_-56, align 8, !insn.addr !235
  %30 = mul i128 %29, 18446744073709551615
  %31 = ashr exact i128 %30, 64, !insn.addr !235
  %32 = call i128 @__asm_movaps(i128 %31), !insn.addr !235
  %33 = load i128, i128* %stack_var_-72, align 8, !insn.addr !236
  %34 = mul i128 %33, 18446744073709551615
  %35 = ashr exact i128 %34, 64, !insn.addr !236
  %36 = call i128 @__asm_movaps(i128 %35), !insn.addr !236
  %37 = call i128 @__asm_paddd(i128 %32, i128 %36), !insn.addr !237
  %38 = call i64 @__asm_movaps.1(i128 %37), !insn.addr !238
  %39 = sext i64 %38 to i128, !insn.addr !239
  %40 = call i128 @__asm_movdqa(i128 %39), !insn.addr !239
  %41 = call i128 @__asm_pshufd(i128 %40, i8 -18), !insn.addr !240
  %42 = call i128 @__asm_paddd(i128 %41, i128 %40), !insn.addr !241
  %43 = call i128 @__asm_pshufd(i128 %42, i8 85), !insn.addr !242
  %44 = call i128 @__asm_paddd(i128 %43, i128 %42), !insn.addr !243
  %45 = call i32 @__asm_movd(i128 %44), !insn.addr !244
  %46 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2229 to i8*)), !insn.addr !245
  store i128 15, i128* %stack_var_-56, align 8, !insn.addr !246
  %47 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2245 to i8*)), !insn.addr !247
  %48 = call i64 @call_asm_privileged(), !insn.addr !248
  %49 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2261 to i8*)), !insn.addr !249
  %50 = sext i32 %49 to i64, !insn.addr !249
  ret i64 %50, !insn.addr !250

; uselistorder directives
  uselistorder i128 %42, { 1, 0 }
  uselistorder i128 %40, { 1, 0 }
  uselistorder i128 %8, { 1, 0 }
  uselistorder i128 %3, { 1, 0, 2 }
  uselistorder i128* %stack_var_-56, { 5, 4, 3, 2, 0, 1 }
  uselistorder i128* %stack_var_-72, { 3, 2, 1, 0 }
  uselistorder i64* %rsi.07.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.06.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.05.reg2mem, { 1, 0, 2 }
  uselistorder i128* @global_var_2300, { 1, 0 }
  uselistorder i128* @global_var_22f0, { 1, 0 }
  uselistorder i64 1, { 3, 4, 5, 6, 7, 8, 0, 1, 2 }
  uselistorder i128* @global_var_22d0, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 23 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1770, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1835:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_preprocessing_features(), !insn.addr !251
  %5 = call i64 @test_asm_features(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !252
  ret i64 0, !insn.addr !253

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 4, 61, 5, 6, 62, 63, 9, 0, 1, 2, 8, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 64, 7, 3, 65, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 60 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1844:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !254

; uselistorder directives
  uselistorder i32 1, { 7, 6, 34, 35, 11, 10, 9, 5, 29, 13, 12, 14, 4, 3, 33, 31, 32, 30, 37, 36, 17, 16, 15, 8, 0, 22, 21, 20, 19, 18, 2, 38, 24, 23, 27, 26, 25, 1, 39, 28 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64* @mmap(i64*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @munmap(i64*, i32) local_unnamed_addr

declare i32 @mprotect(i64*, i32, i32) local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i64 @__asm_movaps.1(i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movdqa.2(i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

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
!13 = !{i64 4287}
!14 = !{i64 4293}
!15 = !{i64 4344}
!16 = !{i64 4408}
!17 = !{i64 4420}
!18 = !{i64 4427}
!19 = !{i64 4430}
!20 = !{i64 4441}
!21 = !{i64 4443}
!22 = !{i64 4450}
!23 = !{i64 4455}
!24 = !{i64 4460}
!25 = !{i64 4468}
!26 = !{i64 4472}
!27 = !{i64 4484}
!28 = !{i64 4492}
!29 = !{i64 4508}
!30 = !{i64 4511}
!31 = !{i64 4517}
!32 = !{i64 4520}
!33 = !{i64 4523}
!34 = !{i64 4525}
!35 = !{i64 4528}
!36 = !{i64 4530}
!37 = !{i64 4536}
!38 = !{i64 4537}
!39 = !{i64 4540}
!40 = !{i64 4543}
!41 = !{i64 4549}
!42 = !{i64 4550}
!43 = !{i64 4553}
!44 = !{i64 4558}
!45 = !{i64 4564}
!46 = !{i64 4565}
!47 = !{i64 4568}
!48 = !{i64 4574}
!49 = !{i64 4580}
!50 = !{i64 4586}
!51 = !{i64 4589}
!52 = !{i64 4592}
!53 = !{i64 4596}
!54 = !{i64 4599}
!55 = !{i64 4602}
!56 = !{i64 4608}
!57 = !{i64 4610}
!58 = !{i64 4612}
!59 = !{i64 4623}
!60 = !{i64 4627}
!61 = !{i64 4632}
!62 = !{i64 4635}
!63 = !{i64 4638}
!64 = !{i64 4664}
!65 = !{i64 4675}
!66 = !{i64 4676}
!67 = !{i64 4679}
!68 = !{i64 4681}
!69 = !{i64 4687}
!70 = !{i64 4693}
!71 = !{i64 4699}
!72 = !{i64 4745}
!73 = !{i64 4750}
!74 = !{i64 4756}
!75 = !{i64 4759}
!76 = !{i64 4803}
!77 = !{i64 4814}
!78 = !{i64 4823}
!79 = !{i64 4842}
!80 = !{i64 4861}
!81 = !{i64 4880}
!82 = !{i64 4899}
!83 = !{i64 4918}
!84 = !{i64 4937}
!85 = !{i64 4956}
!86 = !{i64 4985}
!87 = !{i64 5004}
!88 = !{i64 5023}
!89 = !{i64 5042}
!90 = !{i64 5089}
!91 = !{i64 5109}
!92 = !{i64 5116}
!93 = !{i64 5121}
!94 = !{i64 5123}
!95 = !{i64 5138}
!96 = !{i64 5139}
!97 = !{i64 5145}
!98 = !{i64 5147}
!99 = !{i64 5150}
!100 = !{i64 5158}
!101 = !{i64 5159}
!102 = !{i64 5165}
!103 = !{i64 5173}
!104 = !{i64 5180}
!105 = !{i64 5196}
!106 = !{i64 5199}
!107 = !{i64 5194}
!108 = !{i64 5207}
!109 = !{i64 5208}
!110 = !{i64 5209}
!111 = !{i64 5213}
!112 = !{i64 5215}
!113 = !{i64 5217}
!114 = !{i64 5219}
!115 = !{i64 5222}
!116 = !{i64 5225}
!117 = !{i64 5230}
!118 = !{i64 5231}
!119 = !{i64 5241}
!120 = !{i64 5246}
!121 = !{i64 5255}
!122 = !{i64 5263}
!123 = !{i64 5267}
!124 = !{i64 5275}
!125 = !{i64 5285}
!126 = !{i64 5287}
!127 = !{i64 5289}
!128 = !{i64 5292}
!129 = !{i64 5295}
!130 = !{i64 5279}
!131 = !{i64 5283}
!132 = !{i64 5300}
!133 = !{i64 5310}
!134 = !{i64 5322}
!135 = !{i64 5325}
!136 = !{i64 5326}
!137 = !{i64 5329}
!138 = !{i64 5332}
!139 = !{i64 5336}
!140 = !{i64 5341}
!141 = !{i64 5342}
!142 = !{i64 5346}
!143 = !{i64 5350}
!144 = !{i64 5356}
!145 = !{i64 5357}
!146 = !{i64 5369}
!147 = !{i64 5372}
!148 = !{i64 5384}
!149 = !{i64 5392}
!150 = !{i64 5395}
!151 = !{i64 5398}
!152 = !{i64 5402}
!153 = !{i64 5405}
!154 = !{i64 5409}
!155 = !{i64 5414}
!156 = !{i64 5418}
!157 = !{i64 5423}
!158 = !{i64 5427}
!159 = !{i64 5431}
!160 = !{i64 5432}
!161 = !{i64 5434}
!162 = !{i64 5438}
!163 = !{i64 5440}
!164 = !{i64 5441}
!165 = !{i64 5443}
!166 = !{i64 5447}
!167 = !{i64 5449}
!168 = !{i64 5477}
!169 = !{i64 5478}
!170 = !{i64 5490}
!171 = !{i64 5522}
!172 = !{i64 5527}
!173 = !{i64 5531}
!174 = !{i64 5536}
!175 = !{i64 5542}
!176 = !{i64 5562}
!177 = !{i64 5567}
!178 = !{i64 5570}
!179 = !{i64 5581}
!180 = !{i64 5582}
!181 = !{i64 5594}
!182 = !{i64 5631}
!183 = !{i64 5636}
!184 = !{i64 5640}
!185 = !{i64 5645}
!186 = !{i64 5662}
!187 = !{i64 5672}
!188 = !{i64 5674}
!189 = !{i64 5676}
!190 = !{i64 5690}
!191 = !{i64 5700}
!192 = !{i64 5702}
!193 = !{i64 5704}
!194 = !{i64 5710}
!195 = !{i64 5719}
!196 = !{i64 5724}
!197 = !{i64 5736}
!198 = !{i64 5739}
!199 = !{i64 5749}
!200 = !{i64 5751}
!201 = !{i64 5758}
!202 = !{i64 5765}
!203 = !{i64 5770}
!204 = !{i64 5799}
!205 = !{i64 5812}
!206 = !{i64 5819}
!207 = !{i64 5823}
!208 = !{i64 5831}
!209 = !{i64 5839}
!210 = !{i64 5841}
!211 = !{i64 5842}
!212 = !{i64 5858}
!213 = !{i64 5886}
!214 = !{i64 5905}
!215 = !{i64 5912}
!216 = !{i64 5897}
!217 = !{i64 5942}
!218 = !{i64 5962}
!219 = !{i64 5972}
!220 = !{i64 5975}
!221 = !{i64 5979}
!222 = !{i64 5987}
!223 = !{i64 6000}
!224 = !{i64 6002}
!225 = !{i64 6004}
!226 = !{i64 6007}
!227 = !{i64 6010}
!228 = !{i64 5994}
!229 = !{i64 5998}
!230 = !{i64 6049}
!231 = !{i64 6054}
!232 = !{i64 6061}
!233 = !{i64 6064}
!234 = !{i64 6071}
!235 = !{i64 6078}
!236 = !{i64 6081}
!237 = !{i64 6085}
!238 = !{i64 6089}
!239 = !{i64 6092}
!240 = !{i64 6096}
!241 = !{i64 6101}
!242 = !{i64 6105}
!243 = !{i64 6110}
!244 = !{i64 6114}
!245 = !{i64 6127}
!246 = !{i64 6138}
!247 = !{i64 6161}
!248 = !{i64 6166}
!249 = !{i64 6182}
!250 = !{i64 6196}
!251 = !{i64 6198}
!252 = !{i64 6203}
!253 = !{i64 6211}
!254 = !{i64 6224}
