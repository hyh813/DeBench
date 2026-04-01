source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_405c = external local_unnamed_addr global i64
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2052 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var_201d = constant [11 x i8] c"src/5-23.c\00"
@global_var_2028 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_203d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_2049 = constant [9 x i8] c"03:00:48\00"
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
  %3 = call i32 @__libc_start_main(i64 6640, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !13
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
dec_label_pc_1190:
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
dec_label_pc_11b0:
  ret i64 64, !insn.addr !31
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11c0:
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
dec_label_pc_11d0:
  ret i64 30, !insn.addr !37
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = mul i64 %arg1, 3, !insn.addr !38
  %1 = add i64 %0, 2, !insn.addr !39
  %2 = and i64 %1, 4294967295, !insn.addr !39
  ret i64 %2, !insn.addr !40
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_11f0:
  ret i64 32, !insn.addr !41
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1200:
  %0 = mul i64 %arg1, 5, !insn.addr !42
  %1 = add i64 %0, 57072, !insn.addr !43
  %2 = and i64 %1, 4294967295, !insn.addr !43
  ret i64 %2, !insn.addr !44
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1210:
  ret i64 57122, !insn.addr !45
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_1220:
  %0 = add i64 %arg1, 16, !insn.addr !46
  %1 = and i64 %0, 4294967295, !insn.addr !46
  ret i64 %1, !insn.addr !47
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1230:
  ret i64 116, !insn.addr !48
}

define i64 @param_stringize() local_unnamed_addr {
dec_label_pc_1240:
  ret i64 19, !insn.addr !49
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_1250:
  ret i64 19, !insn.addr !50
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i64 %arg1, 10, !insn.addr !51
  %1 = and i64 %0, 4294967294, !insn.addr !51
  ret i64 %1, !insn.addr !52
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_1270:
  %0 = mul i64 %arg1, 11, !insn.addr !53
  %1 = add i64 %0, 5, !insn.addr !54
  %2 = and i64 %1, 4294967295, !insn.addr !54
  ret i64 %2, !insn.addr !55
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_1280:
  ret i64 60, !insn.addr !56
}

define i64 @param_variadic_macro(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1290:
  %0 = and i64 %arg3, 4294967295, !insn.addr !57
  %1 = and i64 %arg2, 4294967295, !insn.addr !58
  %2 = and i64 %arg1, 4294967295, !insn.addr !59
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 %2, i64 %1, i64 %0), !insn.addr !60
  %4 = add i64 %arg1, 50, !insn.addr !61
  %5 = and i64 %4, 4294967295, !insn.addr !62
  ret i64 %5, !insn.addr !63
}

define i64 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_12b0:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !64
  ret i64 60, !insn.addr !65
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = mul i64 %arg1, 3, !insn.addr !66
  %1 = add i64 %0, 1, !insn.addr !67
  %2 = and i64 %1, 4294967295, !insn.addr !67
  ret i64 %2, !insn.addr !68
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_12f0:
  ret i64 16, !insn.addr !69
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_1300:
  ret i64 500, !insn.addr !70
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_1310:
  ret i64 500, !insn.addr !71
}

define i64 @param_builtin_macros(i64 %arg1) local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !72
  %1 = add i64 %arg1, 282, !insn.addr !73
  %2 = and i64 %1, 4294967295, !insn.addr !74
  ret i64 %2, !insn.addr !75
}

define i64 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1360:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !76
  ret i64 382, !insn.addr !77
}

define i64 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_13a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_227d to i8*)), !insn.addr !78
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_207f to i8*)), !insn.addr !79
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_209a to i8*)), !insn.addr !80
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b5 to i8*)), !insn.addr !81
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d0 to i8*)), !insn.addr !82
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ef to i8*)), !insn.addr !83
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210b to i8*)), !insn.addr !84
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2135 to i8*)), !insn.addr !85
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2004, i64 0, i64 0), i64 10, i64 20, i64 30), !insn.addr !86
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2150 to i8*)), !insn.addr !87
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_216b to i8*)), !insn.addr !88
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2186 to i8*)), !insn.addr !89
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2052, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_201d, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_2028, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_203d, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2049, i64 0, i64 0)), !insn.addr !90
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a2 to i8*)), !insn.addr !91
  ret i64 %1, !insn.addr !92
}

define i64 @param_asm_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = add i64 %arg1, 10, !insn.addr !93
  %1 = and i64 %0, 4294967295, !insn.addr !94
  ret i64 %1, !insn.addr !95

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_14e0:
  ret i64 15, !insn.addr !96
}

define i64 @param_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_14f0:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !97
  %rax.01.reg2mem = alloca i32, !insn.addr !97
  %storemerge2.reg2mem = alloca i64, !insn.addr !97
  %0 = icmp sgt i64 %arg2, 0, !insn.addr !98
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !98
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !98
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !98
  br i1 %0, label %dec_label_pc_14f8, label %dec_label_pc_14ff, !insn.addr !98

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14f8
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %1 = mul i64 %storemerge2.reload, 4, !insn.addr !99
  %2 = add i64 %1, %arg1, !insn.addr !99
  %3 = inttoptr i64 %2 to i32*, !insn.addr !99
  %4 = load i32, i32* %3, align 4, !insn.addr !99
  %5 = add i32 %4, %rax.01.reload, !insn.addr !99
  %6 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !100
  %7 = and i64 %6, 4294967295, !insn.addr !100
  %8 = icmp slt i64 %7, %arg2, !insn.addr !98
  store i64 %7, i64* %storemerge2.reg2mem, !insn.addr !98
  store i32 %5, i32* %rax.01.reg2mem, !insn.addr !98
  br i1 %8, label %dec_label_pc_14f8, label %dec_label_pc_14f4.dec_label_pc_14ff_crit_edge, !insn.addr !98

dec_label_pc_14f4.dec_label_pc_14ff_crit_edge:    ; preds = %dec_label_pc_14f8
  %9 = zext i32 %5 to i64, !insn.addr !99
  store i64 %9, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_14ff

dec_label_pc_14ff:                                ; preds = %dec_label_pc_14f4.dec_label_pc_14ff_crit_edge, %dec_label_pc_14f0
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !101

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_14f8, { 1, 0 }
}

define i64 @call_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1510:
  %rax.01.reg2mem = alloca i32, !insn.addr !102
  %storemerge2.reg2mem = alloca i64, !insn.addr !102
  %stack_var_-24 = alloca i128, align 8
  %0 = load i128, i128* @global_var_22d0, align 8, !insn.addr !103
  %1 = call i128 @__asm_movaps(i128 %0), !insn.addr !103
  %2 = call i64 @__asm_movaps.1(i128 %1), !insn.addr !104
  %3 = sext i64 %2 to i128, !insn.addr !104
  store i128 %3, i128* %stack_var_-24, align 8, !insn.addr !104
  %4 = ptrtoint i128* %stack_var_-24 to i64, !insn.addr !105
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %rax.01.reg2mem
  br label %dec_label_pc_1538

dec_label_pc_1538:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1538
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %5 = mul i64 %storemerge2.reload, 4, !insn.addr !106
  %6 = add i64 %5, %4, !insn.addr !106
  %7 = inttoptr i64 %6 to i32*, !insn.addr !106
  %8 = load i32, i32* %7, align 4, !insn.addr !106
  %9 = add i32 %8, %rax.01.reload, !insn.addr !106
  %10 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !107
  %11 = and i64 %10, 4294967295, !insn.addr !107
  %12 = icmp ult i64 %11, 5, !insn.addr !108
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !108
  store i32 %9, i32* %rax.01.reg2mem, !insn.addr !108
  br i1 %12, label %dec_label_pc_1538, label %dec_label_pc_153f, !insn.addr !108

dec_label_pc_153f:                                ; preds = %dec_label_pc_1538
  %13 = zext i32 %9 to i64, !insn.addr !106
  ret i64 %13, !insn.addr !109

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1538, { 1, 0 }
}

define i64 @param_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1550:
  %0 = alloca i64
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !110
  %rax.01.reg2mem = alloca i64, !insn.addr !110
  %rdx.02.reg2mem = alloca i64, !insn.addr !110
  %rsi.03.reg2mem = alloca i64, !insn.addr !110
  %rdi.04.reg2mem = alloca i64, !insn.addr !110
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !111
  br i1 %2, label %dec_label_pc_1566, label %dec_label_pc_1557, !insn.addr !112

dec_label_pc_1557:                                ; preds = %dec_label_pc_1550, %dec_label_pc_1557
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
  br i1 %12, label %dec_label_pc_1566, label %dec_label_pc_1557, !insn.addr !112

dec_label_pc_1566:                                ; preds = %dec_label_pc_1557, %dec_label_pc_1550
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !118

; uselistorder directives
  uselistorder i64* %rdi.04.reg2mem, { 1, 0 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_1557, { 1, 0 }
}

define i64 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1570:
  %0 = alloca i128
  %1 = alloca i8
  %rcx.02.reg2mem = alloca i64, !insn.addr !119
  %rdx.03.reg2mem = alloca i64, !insn.addr !119
  %storemerge4.reg2mem = alloca i64, !insn.addr !119
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-40 = alloca i128, align 8
  %stack_var_-56 = alloca i64, align 8
  store i64 5999111841566713160, i64* %stack_var_-56, align 8, !insn.addr !120
  %4 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !121
  %5 = call i64 @__asm_movaps.1(i128 %4), !insn.addr !122
  %6 = call i64 @__asm_movaps.1(i128 %4), !insn.addr !123
  %7 = sext i64 %6 to i128, !insn.addr !123
  store i128 %7, i128* %stack_var_-40, align 8, !insn.addr !123
  %8 = ptrtoint i128* %stack_var_-40 to i64, !insn.addr !124
  %9 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !125
  store i64 9, i64* %storemerge4.reg2mem
  store i64 %9, i64* %rdx.03.reg2mem
  store i64 %8, i64* %rcx.02.reg2mem
  br label %dec_label_pc_15a9

dec_label_pc_15a9:                                ; preds = %dec_label_pc_1570, %dec_label_pc_15a9
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rdx.03.reload = load i64, i64* %rdx.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %10 = inttoptr i64 %rdx.03.reload to i8*, !insn.addr !126
  %11 = load i8, i8* %10, align 1, !insn.addr !126
  %12 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !127
  store i8 %11, i8* %12, align 1, !insn.addr !127
  %13 = add i64 %rcx.02.reload, 1, !insn.addr !128
  %14 = add i64 %rdx.03.reload, 1, !insn.addr !129
  %15 = add nsw i64 %storemerge4.reload, -1, !insn.addr !130
  %16 = icmp eq i64 %15, 0, !insn.addr !131
  store i64 %15, i64* %storemerge4.reg2mem, !insn.addr !132
  store i64 %14, i64* %rdx.03.reg2mem, !insn.addr !132
  store i64 %13, i64* %rcx.02.reg2mem, !insn.addr !132
  br i1 %16, label %dec_label_pc_15b8, label %dec_label_pc_15a9, !insn.addr !132

dec_label_pc_15b8:                                ; preds = %dec_label_pc_15a9
  %17 = load i128, i128* %stack_var_-40, align 8, !insn.addr !133
  %18 = trunc i128 %17 to i8, !insn.addr !134
  %19 = icmp eq i8 %3, 111
  %20 = icmp eq i8 %18, 72
  %21 = icmp eq i1 %19, %20, !insn.addr !135
  %22 = select i1 %21, i64 42, i64 4294967295, !insn.addr !136
  ret i64 %22, !insn.addr !137

; uselistorder directives
  uselistorder i128 %4, { 1, 0 }
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_15a9, { 1, 0 }
}

define i64 @param_asm_simd(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15e0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !138
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !138
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !139
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !139
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !140
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !141
  %8 = sext i64 %7 to i128, !insn.addr !141
  %9 = inttoptr i64 %arg3 to i128*, !insn.addr !141
  store i128 %8, i128* %9, align 8, !insn.addr !141
  ret i64 0, !insn.addr !142
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15f0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !143
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !143
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !144
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !144
  %6 = call i64 @__asm_movdqa.2(i128 %5), !insn.addr !145
  %7 = sext i64 %6 to i128, !insn.addr !145
  %8 = inttoptr i64 %arg3 to i128*, !insn.addr !145
  store i128 %7, i128* %8, align 8, !insn.addr !145
  ret i64 0, !insn.addr !146
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1600:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i128, i128* @global_var_22f0, align 8, !insn.addr !147
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !147
  %6 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !148
  %7 = sext i64 %6 to i128, !insn.addr !148
  %8 = load i128, i128* @global_var_2300, align 8, !insn.addr !149
  %9 = call i128 @__asm_movaps(i128 %8), !insn.addr !149
  %10 = call i64 @__asm_movaps.1(i128 %9), !insn.addr !150
  %11 = sext i64 %10 to i128, !insn.addr !150
  %12 = call i128 @__asm_movaps(i128 %7), !insn.addr !151
  %13 = call i128 @__asm_movaps(i128 %11), !insn.addr !152
  %14 = call i128 @__asm_paddd(i128 %12, i128 %13), !insn.addr !153
  %15 = call i64 @__asm_movaps.1(i128 %14), !insn.addr !154
  %16 = trunc i64 %15 to i32, !insn.addr !154
  %17 = add i32 %2, %1, !insn.addr !155
  %18 = add i32 %17, %3, !insn.addr !156
  %19 = add i32 %18, %16, !insn.addr !157
  %20 = zext i32 %19 to i64, !insn.addr !157
  ret i64 %20, !insn.addr !158

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1650:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !159
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !160
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !160
  store i32 %4, i32* %5, align 4, !insn.addr !160
  %6 = zext i32 %4 to i64, !insn.addr !161
  ret i64 %6, !insn.addr !162
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1660:
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

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1670:
  ret i64 30, !insn.addr !167
}

define i64 @param_dynamic_code(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1690:
  %rbp.0.reg2mem = alloca i64, !insn.addr !168
  %0 = call i32 @sysconf(i32 30), !insn.addr !169
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !170
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !171
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !172
  br i1 %2, label %dec_label_pc_16f0, label %dec_label_pc_16cf, !insn.addr !172

dec_label_pc_16cf:                                ; preds = %dec_label_pc_1690
  %3 = ptrtoint i64* %1 to i64, !insn.addr !170
  %4 = add i64 %3, 4, !insn.addr !173
  %5 = inttoptr i64 %4 to i16*, !insn.addr !173
  store i16 -15611, i16* %5, align 2, !insn.addr !173
  %6 = bitcast i64* %1 to i32*, !insn.addr !174
  store i32 -1065092983, i32* %6, align 4, !insn.addr !174
  %7 = and i64 %3, 4294967295, !insn.addr !175
  %8 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !176
  store i64 %7, i64* %rbp.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_16f0, !insn.addr !176

dec_label_pc_16f0:                                ; preds = %dec_label_pc_16cf, %dec_label_pc_1690
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  ret i64 %rbp.0.reload, !insn.addr !177

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 3, 2 }
}

define i64 @param_memory_protection(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1700:
  %rbp.1.reg2mem = alloca i64, !insn.addr !178
  %rbp.0.reg2mem = alloca i64, !insn.addr !178
  %0 = call i32 @sysconf(i32 30), !insn.addr !179
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !180
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !181
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !182
  br i1 %2, label %dec_label_pc_178e, label %dec_label_pc_173c, !insn.addr !182

dec_label_pc_173c:                                ; preds = %dec_label_pc_1700
  %3 = bitcast i64* %1 to i32*, !insn.addr !183
  store i32 42, i32* %3, align 4, !insn.addr !183
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !184
  %5 = icmp eq i32 %4, 0, !insn.addr !185
  %6 = icmp eq i1 %5, false, !insn.addr !186
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !186
  br i1 %6, label %dec_label_pc_1783, label %dec_label_pc_175e, !insn.addr !186

dec_label_pc_175e:                                ; preds = %dec_label_pc_173c
  %7 = load i32, i32* %3, align 4, !insn.addr !187
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !188
  %9 = icmp eq i32 %8, 0, !insn.addr !189
  %10 = icmp eq i1 %9, false, !insn.addr !190
  store i64 4294967293, i64* %rbp.0.reg2mem, !insn.addr !190
  br i1 %10, label %dec_label_pc_1783, label %dec_label_pc_177a, !insn.addr !190

dec_label_pc_177a:                                ; preds = %dec_label_pc_175e
  %11 = zext i32 %7 to i64, !insn.addr !187
  store i32 100, i32* %3, align 4, !insn.addr !191
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_1783, !insn.addr !192

dec_label_pc_1783:                                ; preds = %dec_label_pc_177a, %dec_label_pc_175e, %dec_label_pc_173c
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %12 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !193
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !193
  br label %dec_label_pc_178e, !insn.addr !193

dec_label_pc_178e:                                ; preds = %dec_label_pc_1783, %dec_label_pc_1700
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %13 = and i64 %rbp.1.reload, 4294967295, !insn.addr !194
  ret i64 %13, !insn.addr !195

; uselistorder directives
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = add i64 %arg2, %arg1, !insn.addr !196
  %1 = mul i64 %0, 2, !insn.addr !197
  %2 = and i64 %1, 4294967294, !insn.addr !197
  ret i64 %2, !insn.addr !198

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
}

define i64 @call_asm_privileged(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_17b0:
  %rdi.0.reg2mem = alloca i64, !insn.addr !199
  %rbp.0.reg2mem = alloca i64, !insn.addr !199
  %0 = call i32 @sysconf(i32 30), !insn.addr !200
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !201
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !202
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !203
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !203
  br i1 %2, label %dec_label_pc_1815, label %dec_label_pc_17f2, !insn.addr !203

dec_label_pc_17f2:                                ; preds = %dec_label_pc_17b0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !201
  %4 = add i64 %3, 4, !insn.addr !204
  %5 = inttoptr i64 %4 to i16*, !insn.addr !204
  store i16 -15611, i16* %5, align 2, !insn.addr !204
  %6 = bitcast i64* %1 to i32*, !insn.addr !205
  store i32 -1065092983, i32* %6, align 4, !insn.addr !205
  %7 = and i64 %3, 4294967295, !insn.addr !206
  %8 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !207
  store i64 %7, i64* %rbp.0.reg2mem, !insn.addr !207
  store i64 %3, i64* %rdi.0.reg2mem, !insn.addr !207
  br label %dec_label_pc_1815, !insn.addr !207

dec_label_pc_1815:                                ; preds = %dec_label_pc_17f2, %dec_label_pc_17b0
  %9 = sext i32 %0 to i64, !insn.addr !200
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %10 = call i64 @param_memory_protection(i64 %rdi.0.reload, i64 %9, i64 7, i64 34, i64 4294967295, i64 0), !insn.addr !208
  %11 = trunc i64 %10 to i32, !insn.addr !209
  %12 = icmp eq i32 %11, 42
  %13 = icmp eq i64 %rbp.0.reload, 15
  %14 = icmp eq i1 %13, %12, !insn.addr !210
  %15 = icmp eq i1 %14, false, !insn.addr !211
  %16 = select i1 %15, i64 %rbp.0.reload, i64 77, !insn.addr !211
  ret i64 %16, !insn.addr !212

; uselistorder directives
  uselistorder i64 %rbp.0.reload, { 1, 0 }
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i32 %0, { 2, 0, 1 }
  uselistorder i64 15, { 1, 0 }
  uselistorder i32 (i64*, i32)* @munmap, { 2, 1, 0, 3 }
  uselistorder i64 4, { 2, 3, 0, 1 }
  uselistorder i64 4294967295, { 3, 4, 0, 5, 1, 6, 2, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 2, 1, 0, 3 }
  uselistorder i32 0, { 2, 6, 7, 3, 4, 0, 1, 8, 9, 10, 11, 12, 5 }
  uselistorder i32 (i32)* @sysconf, { 2, 1, 0, 3 }
}

define i64 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1860:
  %0 = load i32, i32* inttoptr (i64 16472 to i32*), align 8, !insn.addr !213
  %1 = add i32 %0, 50, !insn.addr !213
  %2 = zext i32 %1 to i64, !insn.addr !214
  ret i64 %2, !insn.addr !215
}

define i64 @test_asm_features(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i64
  %1 = alloca i8
  %rcx.03.reg2mem = alloca i64, !insn.addr !216
  %rdx.04.reg2mem = alloca i64, !insn.addr !216
  %rsi.05.reg2mem = alloca i64, !insn.addr !216
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i8, i8* %1
  %stack_var_-40 = alloca i128, align 8
  %stack_var_-88 = alloca i128, align 8
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_22a4 to i8*)), !insn.addr !217
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21d5 to i8*)), !insn.addr !218
  %7 = load i128, i128* @global_var_22d0, align 8, !insn.addr !219
  %8 = call i128 @__asm_movaps(i128 %7), !insn.addr !219
  %9 = call i64 @__asm_movaps.1(i128 %8), !insn.addr !220
  %10 = sext i64 %9 to i128, !insn.addr !220
  store i128 %10, i128* %stack_var_-88, align 8, !insn.addr !220
  %11 = ptrtoint i128* %stack_var_-88 to i64, !insn.addr !221
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21f1 to i8*)), !insn.addr !222
  store i128 5999111841566713160, i128* %stack_var_-40, align 8, !insn.addr !223
  %13 = call i128 @__asm_xorps(i128 %8, i128 %8), !insn.addr !224
  %14 = call i64 @__asm_movaps.1(i128 %13), !insn.addr !225
  %15 = call i64 @__asm_movaps.1(i128 %13), !insn.addr !226
  %16 = sext i64 %15 to i128, !insn.addr !226
  store i128 %16, i128* %stack_var_-88, align 8, !insn.addr !226
  %17 = ptrtoint i128* %stack_var_-40 to i64, !insn.addr !227
  store i64 %11, i64* %rsi.05.reg2mem
  store i64 %17, i64* %rdx.04.reg2mem
  store i64 9, i64* %rcx.03.reg2mem
  br label %dec_label_pc_1920

dec_label_pc_1920:                                ; preds = %dec_label_pc_1880, %dec_label_pc_1920
  %rcx.03.reload = load i64, i64* %rcx.03.reg2mem
  %rdx.04.reload = load i64, i64* %rdx.04.reg2mem
  %rsi.05.reload = load i64, i64* %rsi.05.reg2mem
  %18 = inttoptr i64 %rdx.04.reload to i8*, !insn.addr !228
  %19 = load i8, i8* %18, align 1, !insn.addr !228
  %20 = inttoptr i64 %rsi.05.reload to i8*, !insn.addr !229
  store i8 %19, i8* %20, align 1, !insn.addr !229
  %21 = add i64 %rsi.05.reload, 1, !insn.addr !230
  %22 = add i64 %rdx.04.reload, 1, !insn.addr !231
  %23 = add nsw i64 %rcx.03.reload, -1, !insn.addr !232
  %24 = icmp eq i64 %23, 0, !insn.addr !233
  store i64 %21, i64* %rsi.05.reg2mem, !insn.addr !234
  store i64 %22, i64* %rdx.04.reg2mem, !insn.addr !234
  store i64 %23, i64* %rcx.03.reg2mem, !insn.addr !234
  br i1 %24, label %dec_label_pc_192f, label %dec_label_pc_1920, !insn.addr !234

dec_label_pc_192f:                                ; preds = %dec_label_pc_1920
  %25 = load i128, i128* %stack_var_-88, align 8, !insn.addr !235
  %26 = trunc i128 %25 to i8, !insn.addr !236
  %27 = xor i8 %26, 72, !insn.addr !236
  %28 = xor i8 %4, 111, !insn.addr !237
  %29 = or i8 %27, %28, !insn.addr !238
  %30 = zext i8 %29 to i64, !insn.addr !238
  %31 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_220d to i8*)), !insn.addr !239
  %32 = load i128, i128* @global_var_22f0, align 8, !insn.addr !240
  %33 = call i128 @__asm_movaps(i128 %32), !insn.addr !240
  %34 = call i64 @__asm_movaps.1(i128 %33), !insn.addr !241
  %35 = sext i64 %34 to i128, !insn.addr !241
  store i128 %35, i128* %stack_var_-88, align 8, !insn.addr !241
  %36 = load i128, i128* @global_var_2300, align 8, !insn.addr !242
  %37 = call i128 @__asm_movaps(i128 %36), !insn.addr !242
  %38 = call i64 @__asm_movaps.1(i128 %37), !insn.addr !243
  %39 = sext i64 %38 to i128, !insn.addr !243
  store i128 %39, i128* %stack_var_-40, align 8, !insn.addr !243
  %40 = load i128, i128* %stack_var_-88, align 8, !insn.addr !244
  %41 = mul i128 %40, 18446744073709551615
  %42 = ashr exact i128 %41, 64, !insn.addr !244
  %43 = call i128 @__asm_movaps(i128 %42), !insn.addr !244
  %44 = load i128, i128* %stack_var_-40, align 8, !insn.addr !245
  %45 = mul i128 %44, 18446744073709551615
  %46 = ashr exact i128 %45, 64, !insn.addr !245
  %47 = call i128 @__asm_movaps(i128 %46), !insn.addr !245
  %48 = call i128 @__asm_paddd(i128 %43, i128 %47), !insn.addr !246
  %49 = call i64 @__asm_movaps.1(i128 %48), !insn.addr !247
  %50 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2229 to i8*)), !insn.addr !248
  store i128 15, i128* %stack_var_-88, align 8, !insn.addr !249
  %51 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2245 to i8*)), !insn.addr !250
  %52 = call i64 @call_asm_privileged(i64 ptrtoint (i8** @global_var_2245 to i64), i64 30, i64 %22, i64 %30, i64 %3, i64 %2), !insn.addr !251
  %53 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2261 to i8*)), !insn.addr !252
  %54 = sext i32 %53 to i64, !insn.addr !252
  ret i64 %54, !insn.addr !253

; uselistorder directives
  uselistorder i64 %22, { 1, 0 }
  uselistorder i128 %13, { 1, 0 }
  uselistorder i128 %8, { 1, 0, 2 }
  uselistorder i128* %stack_var_-88, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %stack_var_-40, { 3, 2, 1, 0 }
  uselistorder i64* %rsi.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.04.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 30, { 2, 0, 3, 4, 1 }
  uselistorder i8** @global_var_2245, { 1, 0 }
  uselistorder i128* @global_var_2300, { 1, 0 }
  uselistorder i128* @global_var_22f0, { 1, 0 }
  uselistorder i8 111, { 1, 0 }
  uselistorder i64 1, { 3, 4, 5, 6, 7, 8, 0, 1, 2 }
  uselistorder i128* @global_var_22d0, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 23 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1920, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_preprocessing_features(), !insn.addr !254
  %5 = call i64 @test_asm_features(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !255
  ret i64 0, !insn.addr !256

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 5, 63, 11, 0, 6, 7, 64, 65, 10, 1, 2, 3, 9, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 66, 8, 4, 67, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 62 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !257

; uselistorder directives
  uselistorder i32 1, { 8, 7, 39, 40, 14, 13, 12, 11, 6, 16, 15, 34, 18, 17, 19, 5, 4, 9, 38, 36, 37, 35, 42, 41, 22, 21, 20, 10, 0, 27, 26, 25, 24, 23, 3, 43, 29, 28, 32, 31, 30, 2, 1, 44, 33 }
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
!28 = !{i64 4496}
!29 = !{i64 4512}
!30 = !{i64 4515}
!31 = !{i64 4533}
!32 = !{i64 4546}
!33 = !{i64 4549}
!34 = !{i64 4551}
!35 = !{i64 4554}
!36 = !{i64 4556}
!37 = !{i64 4565}
!38 = !{i64 4576}
!39 = !{i64 4579}
!40 = !{i64 4582}
!41 = !{i64 4597}
!42 = !{i64 4608}
!43 = !{i64 4611}
!44 = !{i64 4616}
!45 = !{i64 4629}
!46 = !{i64 4640}
!47 = !{i64 4643}
!48 = !{i64 4661}
!49 = !{i64 4677}
!50 = !{i64 4693}
!51 = !{i64 4706}
!52 = !{i64 4709}
!53 = !{i64 4723}
!54 = !{i64 4726}
!55 = !{i64 4729}
!56 = !{i64 4741}
!57 = !{i64 4753}
!58 = !{i64 4755}
!59 = !{i64 4766}
!60 = !{i64 4770}
!61 = !{i64 4775}
!62 = !{i64 4778}
!63 = !{i64 4781}
!64 = !{i64 4809}
!65 = !{i64 4820}
!66 = !{i64 4832}
!67 = !{i64 4835}
!68 = !{i64 4838}
!69 = !{i64 4853}
!70 = !{i64 4869}
!71 = !{i64 4885}
!72 = !{i64 4941}
!73 = !{i64 4946}
!74 = !{i64 4952}
!75 = !{i64 4955}
!76 = !{i64 5003}
!77 = !{i64 5014}
!78 = !{i64 5032}
!79 = !{i64 5051}
!80 = !{i64 5070}
!81 = !{i64 5089}
!82 = !{i64 5108}
!83 = !{i64 5127}
!84 = !{i64 5146}
!85 = !{i64 5165}
!86 = !{i64 5194}
!87 = !{i64 5213}
!88 = !{i64 5232}
!89 = !{i64 5251}
!90 = !{i64 5298}
!91 = !{i64 5317}
!92 = !{i64 5323}
!93 = !{i64 5330}
!94 = !{i64 5335}
!95 = !{i64 5337}
!96 = !{i64 5358}
!97 = !{i64 5360}
!98 = !{i64 5366}
!99 = !{i64 5368}
!100 = !{i64 5371}
!101 = !{i64 5379}
!102 = !{i64 5392}
!103 = !{i64 5402}
!104 = !{i64 5409}
!105 = !{i64 5414}
!106 = !{i64 5432}
!107 = !{i64 5435}
!108 = !{i64 5430}
!109 = !{i64 5443}
!110 = !{i64 5456}
!111 = !{i64 5457}
!112 = !{i64 5461}
!113 = !{i64 5463}
!114 = !{i64 5465}
!115 = !{i64 5467}
!116 = !{i64 5470}
!117 = !{i64 5473}
!118 = !{i64 5478}
!119 = !{i64 5488}
!120 = !{i64 5498}
!121 = !{i64 5510}
!122 = !{i64 5513}
!123 = !{i64 5518}
!124 = !{i64 5523}
!125 = !{i64 5528}
!126 = !{i64 5545}
!127 = !{i64 5547}
!128 = !{i64 5549}
!129 = !{i64 5552}
!130 = !{i64 5555}
!131 = !{i64 5539}
!132 = !{i64 5543}
!133 = !{i64 5560}
!134 = !{i64 5568}
!135 = !{i64 5573}
!136 = !{i64 5585}
!137 = !{i64 5588}
!138 = !{i64 5600}
!139 = !{i64 5603}
!140 = !{i64 5606}
!141 = !{i64 5610}
!142 = !{i64 5615}
!143 = !{i64 5616}
!144 = !{i64 5620}
!145 = !{i64 5624}
!146 = !{i64 5630}
!147 = !{i64 5632}
!148 = !{i64 5639}
!149 = !{i64 5644}
!150 = !{i64 5651}
!151 = !{i64 5671}
!152 = !{i64 5674}
!153 = !{i64 5677}
!154 = !{i64 5681}
!155 = !{i64 5688}
!156 = !{i64 5692}
!157 = !{i64 5696}
!158 = !{i64 5700}
!159 = !{i64 5712}
!160 = !{i64 5714}
!161 = !{i64 5718}
!162 = !{i64 5720}
!163 = !{i64 5728}
!164 = !{i64 5730}
!165 = !{i64 5734}
!166 = !{i64 5736}
!167 = !{i64 5775}
!168 = !{i64 5776}
!169 = !{i64 5791}
!170 = !{i64 5828}
!171 = !{i64 5833}
!172 = !{i64 5837}
!173 = !{i64 5842}
!174 = !{i64 5848}
!175 = !{i64 5859}
!176 = !{i64 5867}
!177 = !{i64 5884}
!178 = !{i64 5888}
!179 = !{i64 5900}
!180 = !{i64 5937}
!181 = !{i64 5942}
!182 = !{i64 5946}
!183 = !{i64 5951}
!184 = !{i64 5968}
!185 = !{i64 5978}
!186 = !{i64 5980}
!187 = !{i64 5982}
!188 = !{i64 5996}
!189 = !{i64 6006}
!190 = !{i64 6008}
!191 = !{i64 6010}
!192 = !{i64 6016}
!193 = !{i64 6025}
!194 = !{i64 6030}
!195 = !{i64 6042}
!196 = !{i64 6050}
!197 = !{i64 6060}
!198 = !{i64 6062}
!199 = !{i64 6064}
!200 = !{i64 6076}
!201 = !{i64 6119}
!202 = !{i64 6124}
!203 = !{i64 6128}
!204 = !{i64 6133}
!205 = !{i64 6139}
!206 = !{i64 6152}
!207 = !{i64 6160}
!208 = !{i64 6165}
!209 = !{i64 6170}
!210 = !{i64 6206}
!211 = !{i64 6213}
!212 = !{i64 6226}
!213 = !{i64 6247}
!214 = !{i64 6255}
!215 = !{i64 6257}
!216 = !{i64 6272}
!217 = !{i64 6288}
!218 = !{i64 6314}
!219 = !{i64 6329}
!220 = !{i64 6336}
!221 = !{i64 6340}
!222 = !{i64 6370}
!223 = !{i64 6385}
!224 = !{i64 6397}
!225 = !{i64 6400}
!226 = !{i64 6405}
!227 = !{i64 6419}
!228 = !{i64 6432}
!229 = !{i64 6434}
!230 = !{i64 6436}
!231 = !{i64 6439}
!232 = !{i64 6442}
!233 = !{i64 6426}
!234 = !{i64 6430}
!235 = !{i64 6447}
!236 = !{i64 6454}
!237 = !{i64 6456}
!238 = !{i64 6459}
!239 = !{i64 6483}
!240 = !{i64 6488}
!241 = !{i64 6495}
!242 = !{i64 6499}
!243 = !{i64 6506}
!244 = !{i64 6516}
!245 = !{i64 6520}
!246 = !{i64 6524}
!247 = !{i64 6528}
!248 = !{i64 6556}
!249 = !{i64 6568}
!250 = !{i64 6591}
!251 = !{i64 6596}
!252 = !{i64 6612}
!253 = !{i64 6626}
!254 = !{i64 6641}
!255 = !{i64 6646}
!256 = !{i64 6654}
!257 = !{i64 6668}
