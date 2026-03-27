source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_405c = external local_unnamed_addr global i64
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2052 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var_201d = constant [11 x i8] c"src/5-23.c\00"
@global_var_2028 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_203d = constant [12 x i8] c"Jan 15 2026\00"
@global_var_2049 = constant [9 x i8] c"03:00:52\00"
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
  %3 = call i32 @__libc_start_main(i64 6656, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !13
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
dec_label_pc_14d0:
  %0 = add i64 %arg1, 10, !insn.addr !92
  %1 = and i64 %0, 4294967295, !insn.addr !93
  ret i64 %1, !insn.addr !94

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_14e0:
  ret i64 15, !insn.addr !95
}

define i64 @param_asm_clobber(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_14f0:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !96
  %rax.01.reg2mem = alloca i32, !insn.addr !96
  %storemerge2.reg2mem = alloca i64, !insn.addr !96
  %0 = icmp sgt i64 %arg2, 0, !insn.addr !97
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !97
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !97
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !97
  br i1 %0, label %dec_label_pc_14f8, label %dec_label_pc_14ff, !insn.addr !97

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14f8
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
  br i1 %8, label %dec_label_pc_14f8, label %dec_label_pc_14f4.dec_label_pc_14ff_crit_edge, !insn.addr !97

dec_label_pc_14f4.dec_label_pc_14ff_crit_edge:    ; preds = %dec_label_pc_14f8
  %9 = zext i32 %5 to i64, !insn.addr !98
  store i64 %9, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_14ff

dec_label_pc_14ff:                                ; preds = %dec_label_pc_14f4.dec_label_pc_14ff_crit_edge, %dec_label_pc_14f0
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !100

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
  %rax.01.reg2mem = alloca i32, !insn.addr !101
  %storemerge2.reg2mem = alloca i64, !insn.addr !101
  %stack_var_-24 = alloca i128, align 8
  %0 = load i128, i128* @global_var_22d0, align 8, !insn.addr !102
  %1 = call i128 @__asm_movaps(i128 %0), !insn.addr !102
  %2 = call i64 @__asm_movaps.1(i128 %1), !insn.addr !103
  %3 = sext i64 %2 to i128, !insn.addr !103
  store i128 %3, i128* %stack_var_-24, align 8, !insn.addr !103
  %4 = ptrtoint i128* %stack_var_-24 to i64, !insn.addr !104
  store i64 0, i64* %storemerge2.reg2mem
  store i32 0, i32* %rax.01.reg2mem
  br label %dec_label_pc_1538

dec_label_pc_1538:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1538
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %5 = mul i64 %storemerge2.reload, 4, !insn.addr !105
  %6 = add i64 %5, %4, !insn.addr !105
  %7 = inttoptr i64 %6 to i32*, !insn.addr !105
  %8 = load i32, i32* %7, align 4, !insn.addr !105
  %9 = add i32 %8, %rax.01.reload, !insn.addr !105
  %10 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !106
  %11 = and i64 %10, 4294967295, !insn.addr !106
  %12 = icmp ult i64 %11, 5, !insn.addr !107
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !107
  store i32 %9, i32* %rax.01.reg2mem, !insn.addr !107
  br i1 %12, label %dec_label_pc_1538, label %dec_label_pc_153f, !insn.addr !107

dec_label_pc_153f:                                ; preds = %dec_label_pc_1538
  %13 = zext i32 %9 to i64, !insn.addr !105
  ret i64 %13, !insn.addr !108

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1538, { 1, 0 }
}

define i64 @param_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1550:
  %0 = alloca i64
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !109
  %rax.01.reg2mem = alloca i64, !insn.addr !109
  %rdx.02.reg2mem = alloca i64, !insn.addr !109
  %rsi.03.reg2mem = alloca i64, !insn.addr !109
  %rdi.04.reg2mem = alloca i64, !insn.addr !109
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !110
  br i1 %2, label %dec_label_pc_1566, label %dec_label_pc_1557, !insn.addr !111

dec_label_pc_1557:                                ; preds = %dec_label_pc_1550, %dec_label_pc_1557
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
  br i1 %12, label %dec_label_pc_1566, label %dec_label_pc_1557, !insn.addr !111

dec_label_pc_1566:                                ; preds = %dec_label_pc_1557, %dec_label_pc_1550
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !117

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
  %rcx.02.reg2mem = alloca i64, !insn.addr !118
  %rdx.03.reg2mem = alloca i64, !insn.addr !118
  %storemerge4.reg2mem = alloca i64, !insn.addr !118
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-40 = alloca i128, align 8
  %stack_var_-56 = alloca i64, align 8
  store i64 5999111841566713160, i64* %stack_var_-56, align 8, !insn.addr !119
  %4 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !120
  %5 = call i64 @__asm_movaps.1(i128 %4), !insn.addr !121
  %6 = call i64 @__asm_movaps.1(i128 %4), !insn.addr !122
  %7 = sext i64 %6 to i128, !insn.addr !122
  store i128 %7, i128* %stack_var_-40, align 8, !insn.addr !122
  %8 = ptrtoint i128* %stack_var_-40 to i64, !insn.addr !123
  %9 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !124
  store i64 9, i64* %storemerge4.reg2mem
  store i64 %9, i64* %rdx.03.reg2mem
  store i64 %8, i64* %rcx.02.reg2mem
  br label %dec_label_pc_15a9

dec_label_pc_15a9:                                ; preds = %dec_label_pc_1570, %dec_label_pc_15a9
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rdx.03.reload = load i64, i64* %rdx.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %10 = inttoptr i64 %rdx.03.reload to i8*, !insn.addr !125
  %11 = load i8, i8* %10, align 1, !insn.addr !125
  %12 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !126
  store i8 %11, i8* %12, align 1, !insn.addr !126
  %13 = add i64 %rcx.02.reload, 1, !insn.addr !127
  %14 = add i64 %rdx.03.reload, 1, !insn.addr !128
  %15 = add nsw i64 %storemerge4.reload, -1, !insn.addr !129
  %16 = icmp eq i64 %15, 0, !insn.addr !130
  store i64 %15, i64* %storemerge4.reg2mem, !insn.addr !131
  store i64 %14, i64* %rdx.03.reg2mem, !insn.addr !131
  store i64 %13, i64* %rcx.02.reg2mem, !insn.addr !131
  br i1 %16, label %dec_label_pc_15b8, label %dec_label_pc_15a9, !insn.addr !131

dec_label_pc_15b8:                                ; preds = %dec_label_pc_15a9
  %17 = load i128, i128* %stack_var_-40, align 8, !insn.addr !132
  %18 = trunc i128 %17 to i8, !insn.addr !133
  %19 = icmp eq i8 %3, 111
  %20 = icmp eq i8 %18, 72
  %21 = icmp eq i1 %19, %20, !insn.addr !134
  %22 = select i1 %21, i64 42, i64 4294967295, !insn.addr !135
  ret i64 %22, !insn.addr !136

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
  %1 = load i128, i128* %0, align 8, !insn.addr !137
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !137
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !138
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !138
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !139
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !140
  %8 = sext i64 %7 to i128, !insn.addr !140
  %9 = inttoptr i64 %arg3 to i128*, !insn.addr !140
  store i128 %8, i128* %9, align 8, !insn.addr !140
  ret i64 0, !insn.addr !141
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15f0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rsi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !142
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !142
  %3 = bitcast i64* %rdi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !143
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !143
  %6 = call i64 @__asm_movdqa.2(i128 %5), !insn.addr !144
  %7 = sext i64 %6 to i128, !insn.addr !144
  %8 = inttoptr i64 %arg3 to i128*, !insn.addr !144
  store i128 %7, i128* %8, align 8, !insn.addr !144
  ret i64 0, !insn.addr !145
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1600:
  %0 = load i128, i128* @global_var_22f0, align 8, !insn.addr !146
  %1 = call i128 @__asm_movaps(i128 %0), !insn.addr !146
  %2 = call i64 @__asm_movaps.1(i128 %1), !insn.addr !147
  %3 = sext i64 %2 to i128, !insn.addr !147
  %4 = load i128, i128* @global_var_2300, align 8, !insn.addr !148
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !148
  %6 = call i64 @__asm_movaps.1(i128 %5), !insn.addr !149
  %7 = sext i64 %6 to i128, !insn.addr !149
  %8 = call i128 @__asm_movaps(i128 %3), !insn.addr !150
  %9 = call i128 @__asm_movaps(i128 %7), !insn.addr !151
  %10 = call i128 @__asm_paddd(i128 %8, i128 %9), !insn.addr !152
  %11 = call i64 @__asm_movaps.1(i128 %10), !insn.addr !153
  %12 = sext i64 %11 to i128, !insn.addr !154
  %13 = call i128 @__asm_movdqa(i128 %12), !insn.addr !154
  %14 = call i128 @__asm_pshufd(i128 %13, i8 -18), !insn.addr !155
  %15 = call i128 @__asm_paddd(i128 %14, i128 %13), !insn.addr !156
  %16 = call i128 @__asm_pshufd(i128 %15, i8 85), !insn.addr !157
  %17 = call i128 @__asm_paddd(i128 %16, i128 %15), !insn.addr !158
  %18 = call i32 @__asm_movd(i128 %17), !insn.addr !159
  %19 = sext i32 %18 to i64, !insn.addr !159
  ret i64 %19, !insn.addr !160

; uselistorder directives
  uselistorder i128 %15, { 1, 0 }
  uselistorder i128 %13, { 1, 0 }
}

define i64 @param_asm_atomic(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1660:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !161
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !162
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !162
  store i32 %4, i32* %5, align 4, !insn.addr !162
  %6 = zext i32 %4 to i64, !insn.addr !163
  ret i64 %6, !insn.addr !164
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1670:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !165
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !166
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !166
  store i32 %4, i32* %5, align 4, !insn.addr !166
  %6 = zext i32 %4 to i64, !insn.addr !167
  ret i64 %6, !insn.addr !168
}

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1680:
  ret i64 30, !insn.addr !169
}

define i64 @param_dynamic_code(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_16a0:
  %storemerge.reg2mem = alloca i64, !insn.addr !170
  %0 = call i32 @sysconf(i32 30), !insn.addr !171
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !172
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !173
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !174
  br i1 %2, label %dec_label_pc_1703, label %dec_label_pc_16d7, !insn.addr !174

dec_label_pc_16d7:                                ; preds = %dec_label_pc_16a0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !172
  %4 = add i64 %3, 4, !insn.addr !175
  %5 = inttoptr i64 %4 to i16*, !insn.addr !175
  store i16 -15611, i16* %5, align 2, !insn.addr !175
  %6 = bitcast i64* %1 to i32*, !insn.addr !176
  store i32 -1065092983, i32* %6, align 4, !insn.addr !176
  %7 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !177
  %8 = and i64 %3, 4294967295, !insn.addr !178
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !179
  br label %dec_label_pc_1703, !insn.addr !179

dec_label_pc_1703:                                ; preds = %dec_label_pc_16a0, %dec_label_pc_16d7
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !180

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1703, { 1, 0 }
}

define i64 @param_memory_protection(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1710:
  %rbp.1.reg2mem = alloca i64, !insn.addr !181
  %rbp.0.reg2mem = alloca i64, !insn.addr !181
  %0 = call i32 @sysconf(i32 30), !insn.addr !182
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !183
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !184
  store i64 4294967295, i64* %rbp.1.reg2mem, !insn.addr !185
  br i1 %2, label %dec_label_pc_179e, label %dec_label_pc_174c, !insn.addr !185

dec_label_pc_174c:                                ; preds = %dec_label_pc_1710
  %3 = bitcast i64* %1 to i32*, !insn.addr !186
  store i32 42, i32* %3, align 4, !insn.addr !186
  %4 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !187
  %5 = icmp eq i32 %4, 0, !insn.addr !188
  %6 = icmp eq i1 %5, false, !insn.addr !189
  store i64 4294967294, i64* %rbp.0.reg2mem, !insn.addr !189
  br i1 %6, label %dec_label_pc_1793, label %dec_label_pc_176e, !insn.addr !189

dec_label_pc_176e:                                ; preds = %dec_label_pc_174c
  %7 = load i32, i32* %3, align 4, !insn.addr !190
  %8 = call i32 @mprotect(i64* %1, i32 %0, i32 3), !insn.addr !191
  %9 = icmp eq i32 %8, 0, !insn.addr !192
  %10 = icmp eq i1 %9, false, !insn.addr !193
  store i64 4294967293, i64* %rbp.0.reg2mem, !insn.addr !193
  br i1 %10, label %dec_label_pc_1793, label %dec_label_pc_178a, !insn.addr !193

dec_label_pc_178a:                                ; preds = %dec_label_pc_176e
  %11 = zext i32 %7 to i64, !insn.addr !190
  store i32 100, i32* %3, align 4, !insn.addr !194
  store i64 %11, i64* %rbp.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_1793, !insn.addr !195

dec_label_pc_1793:                                ; preds = %dec_label_pc_178a, %dec_label_pc_176e, %dec_label_pc_174c
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %12 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !196
  store i64 %rbp.0.reload, i64* %rbp.1.reg2mem, !insn.addr !196
  br label %dec_label_pc_179e, !insn.addr !196

dec_label_pc_179e:                                ; preds = %dec_label_pc_1793, %dec_label_pc_1710
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %13 = and i64 %rbp.1.reload, 4294967295, !insn.addr !197
  ret i64 %13, !insn.addr !198

; uselistorder directives
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = add i64 %arg2, %arg1, !insn.addr !199
  %1 = mul i64 %0, 2, !insn.addr !200
  %2 = and i64 %1, 4294967294, !insn.addr !200
  ret i64 %2, !insn.addr !201

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
}

define i64 @call_asm_privileged(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_17c0:
  %rdi.0.reg2mem = alloca i64, !insn.addr !202
  %rbp.0.reg2mem = alloca i64, !insn.addr !202
  %0 = call i32 @sysconf(i32 30), !insn.addr !203
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !204
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !205
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !206
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !206
  br i1 %2, label %dec_label_pc_1825, label %dec_label_pc_1802, !insn.addr !206

dec_label_pc_1802:                                ; preds = %dec_label_pc_17c0
  %3 = ptrtoint i64* %1 to i64, !insn.addr !204
  %4 = add i64 %3, 4, !insn.addr !207
  %5 = inttoptr i64 %4 to i16*, !insn.addr !207
  store i16 -15611, i16* %5, align 2, !insn.addr !207
  %6 = bitcast i64* %1 to i32*, !insn.addr !208
  store i32 -1065092983, i32* %6, align 4, !insn.addr !208
  %7 = and i64 %3, 4294967295, !insn.addr !209
  %8 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !210
  store i64 %7, i64* %rbp.0.reg2mem, !insn.addr !210
  store i64 %3, i64* %rdi.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_1825, !insn.addr !210

dec_label_pc_1825:                                ; preds = %dec_label_pc_1802, %dec_label_pc_17c0
  %9 = sext i32 %0 to i64, !insn.addr !203
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %10 = call i64 @param_memory_protection(i64 %rdi.0.reload, i64 %9, i64 7, i64 34, i64 4294967295, i64 0), !insn.addr !211
  %11 = trunc i64 %10 to i32, !insn.addr !212
  %12 = icmp eq i32 %11, 42
  %13 = icmp eq i64 %rbp.0.reload, 15
  %14 = icmp eq i1 %13, %12, !insn.addr !213
  %15 = icmp eq i1 %14, false, !insn.addr !214
  %16 = select i1 %15, i64 %rbp.0.reload, i64 77, !insn.addr !214
  ret i64 %16, !insn.addr !215

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
dec_label_pc_1870:
  %0 = load i32, i32* inttoptr (i64 16472 to i32*), align 8, !insn.addr !216
  %1 = add i32 %0, 50, !insn.addr !216
  %2 = zext i32 %1 to i64, !insn.addr !217
  ret i64 %2, !insn.addr !218
}

define i64 @test_asm_features(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1890:
  %0 = alloca i64
  %1 = alloca i8
  %rcx.04.reg2mem = alloca i64, !insn.addr !219
  %rdx.05.reg2mem = alloca i64, !insn.addr !219
  %rsi.06.reg2mem = alloca i64, !insn.addr !219
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i8, i8* %1
  %stack_var_-56 = alloca i128, align 8
  %stack_var_-88 = alloca i128, align 8
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_22a4 to i8*)), !insn.addr !220
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21d5 to i8*)), !insn.addr !221
  %7 = load i128, i128* @global_var_22d0, align 8, !insn.addr !222
  %8 = call i128 @__asm_movaps(i128 %7), !insn.addr !222
  %9 = call i64 @__asm_movaps.1(i128 %8), !insn.addr !223
  %10 = sext i64 %9 to i128, !insn.addr !223
  store i128 %10, i128* %stack_var_-88, align 8, !insn.addr !223
  %11 = ptrtoint i128* %stack_var_-88 to i64, !insn.addr !224
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21f1 to i8*)), !insn.addr !225
  store i128 5999111841566713160, i128* %stack_var_-56, align 8, !insn.addr !226
  %13 = call i128 @__asm_xorps(i128 %8, i128 %8), !insn.addr !227
  %14 = call i64 @__asm_movaps.1(i128 %13), !insn.addr !228
  %15 = call i64 @__asm_movaps.1(i128 %13), !insn.addr !229
  %16 = sext i64 %15 to i128, !insn.addr !229
  store i128 %16, i128* %stack_var_-88, align 8, !insn.addr !229
  %17 = ptrtoint i128* %stack_var_-56 to i64, !insn.addr !230
  store i64 %11, i64* %rsi.06.reg2mem
  store i64 %17, i64* %rdx.05.reg2mem
  store i64 9, i64* %rcx.04.reg2mem
  br label %dec_label_pc_1930

dec_label_pc_1930:                                ; preds = %dec_label_pc_1890, %dec_label_pc_1930
  %rcx.04.reload = load i64, i64* %rcx.04.reg2mem
  %rdx.05.reload = load i64, i64* %rdx.05.reg2mem
  %rsi.06.reload = load i64, i64* %rsi.06.reg2mem
  %18 = inttoptr i64 %rdx.05.reload to i8*, !insn.addr !231
  %19 = load i8, i8* %18, align 1, !insn.addr !231
  %20 = inttoptr i64 %rsi.06.reload to i8*, !insn.addr !232
  store i8 %19, i8* %20, align 1, !insn.addr !232
  %21 = add i64 %rsi.06.reload, 1, !insn.addr !233
  %22 = add i64 %rdx.05.reload, 1, !insn.addr !234
  %23 = add nsw i64 %rcx.04.reload, -1, !insn.addr !235
  %24 = icmp eq i64 %23, 0, !insn.addr !236
  store i64 %21, i64* %rsi.06.reg2mem, !insn.addr !237
  store i64 %22, i64* %rdx.05.reg2mem, !insn.addr !237
  store i64 %23, i64* %rcx.04.reg2mem, !insn.addr !237
  br i1 %24, label %dec_label_pc_193f, label %dec_label_pc_1930, !insn.addr !237

dec_label_pc_193f:                                ; preds = %dec_label_pc_1930
  %25 = load i128, i128* %stack_var_-88, align 8, !insn.addr !238
  %26 = trunc i128 %25 to i8, !insn.addr !239
  %27 = xor i8 %26, 72, !insn.addr !239
  %28 = xor i8 %4, 111, !insn.addr !240
  %29 = or i8 %27, %28, !insn.addr !241
  %30 = zext i8 %29 to i64, !insn.addr !241
  %31 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_220d to i8*)), !insn.addr !242
  %32 = load i128, i128* @global_var_22f0, align 8, !insn.addr !243
  %33 = call i128 @__asm_movaps(i128 %32), !insn.addr !243
  %34 = call i64 @__asm_movaps.1(i128 %33), !insn.addr !244
  %35 = sext i64 %34 to i128, !insn.addr !244
  store i128 %35, i128* %stack_var_-88, align 8, !insn.addr !244
  %36 = load i128, i128* @global_var_2300, align 8, !insn.addr !245
  %37 = call i128 @__asm_movaps(i128 %36), !insn.addr !245
  %38 = call i64 @__asm_movaps.1(i128 %37), !insn.addr !246
  %39 = sext i64 %38 to i128, !insn.addr !246
  store i128 %39, i128* %stack_var_-56, align 8, !insn.addr !246
  %40 = load i128, i128* %stack_var_-88, align 8, !insn.addr !247
  %41 = mul i128 %40, 18446744073709551615
  %42 = ashr exact i128 %41, 64, !insn.addr !247
  %43 = call i128 @__asm_movaps(i128 %42), !insn.addr !247
  %44 = load i128, i128* %stack_var_-56, align 8, !insn.addr !248
  %45 = mul i128 %44, 18446744073709551615
  %46 = ashr exact i128 %45, 64, !insn.addr !248
  %47 = call i128 @__asm_movaps(i128 %46), !insn.addr !248
  %48 = call i128 @__asm_paddd(i128 %43, i128 %47), !insn.addr !249
  %49 = call i64 @__asm_movaps.1(i128 %48), !insn.addr !250
  %50 = sext i64 %49 to i128, !insn.addr !251
  %51 = call i128 @__asm_movdqa(i128 %50), !insn.addr !251
  %52 = call i128 @__asm_pshufd(i128 %51, i8 -18), !insn.addr !252
  %53 = call i128 @__asm_paddd(i128 %52, i128 %51), !insn.addr !253
  %54 = call i128 @__asm_pshufd(i128 %53, i8 85), !insn.addr !254
  %55 = call i128 @__asm_paddd(i128 %54, i128 %53), !insn.addr !255
  %56 = call i32 @__asm_movd(i128 %55), !insn.addr !256
  %57 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2229 to i8*)), !insn.addr !257
  store i128 15, i128* %stack_var_-88, align 8, !insn.addr !258
  %58 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2245 to i8*)), !insn.addr !259
  %59 = call i64 @call_asm_privileged(i64 ptrtoint (i8** @global_var_2245 to i64), i64 30, i64 %22, i64 %30, i64 %3, i64 %2), !insn.addr !260
  %60 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2261 to i8*)), !insn.addr !261
  %61 = sext i32 %60 to i64, !insn.addr !261
  ret i64 %61, !insn.addr !262

; uselistorder directives
  uselistorder i128 %53, { 1, 0 }
  uselistorder i128 %51, { 1, 0 }
  uselistorder i64 %22, { 1, 0 }
  uselistorder i128 %13, { 1, 0 }
  uselistorder i128 %8, { 1, 0, 2 }
  uselistorder i128* %stack_var_-88, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %stack_var_-56, { 3, 2, 1, 0 }
  uselistorder i64* %rsi.06.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.05.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.04.reg2mem, { 1, 0, 2 }
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
  uselistorder label %dec_label_pc_1930, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_preprocessing_features(), !insn.addr !263
  %5 = call i64 @test_asm_features(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !264
  ret i64 0, !insn.addr !265

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 5, 63, 11, 0, 6, 7, 64, 65, 10, 1, 2, 3, 9, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 66, 8, 4, 67, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 62 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1a10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !266

; uselistorder directives
  uselistorder i32 1, { 7, 6, 37, 38, 12, 11, 10, 9, 5, 14, 13, 32, 16, 15, 17, 4, 3, 36, 34, 35, 33, 40, 39, 20, 19, 18, 8, 0, 25, 24, 23, 22, 21, 2, 41, 27, 26, 30, 29, 28, 1, 42, 31 }
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
!91 = !{i64 5318}
!92 = !{i64 5330}
!93 = !{i64 5335}
!94 = !{i64 5337}
!95 = !{i64 5358}
!96 = !{i64 5360}
!97 = !{i64 5366}
!98 = !{i64 5368}
!99 = !{i64 5371}
!100 = !{i64 5379}
!101 = !{i64 5392}
!102 = !{i64 5402}
!103 = !{i64 5409}
!104 = !{i64 5414}
!105 = !{i64 5432}
!106 = !{i64 5435}
!107 = !{i64 5430}
!108 = !{i64 5443}
!109 = !{i64 5456}
!110 = !{i64 5457}
!111 = !{i64 5461}
!112 = !{i64 5463}
!113 = !{i64 5465}
!114 = !{i64 5467}
!115 = !{i64 5470}
!116 = !{i64 5473}
!117 = !{i64 5478}
!118 = !{i64 5488}
!119 = !{i64 5498}
!120 = !{i64 5510}
!121 = !{i64 5513}
!122 = !{i64 5518}
!123 = !{i64 5523}
!124 = !{i64 5528}
!125 = !{i64 5545}
!126 = !{i64 5547}
!127 = !{i64 5549}
!128 = !{i64 5552}
!129 = !{i64 5555}
!130 = !{i64 5539}
!131 = !{i64 5543}
!132 = !{i64 5560}
!133 = !{i64 5568}
!134 = !{i64 5573}
!135 = !{i64 5585}
!136 = !{i64 5588}
!137 = !{i64 5600}
!138 = !{i64 5603}
!139 = !{i64 5606}
!140 = !{i64 5610}
!141 = !{i64 5615}
!142 = !{i64 5616}
!143 = !{i64 5620}
!144 = !{i64 5624}
!145 = !{i64 5630}
!146 = !{i64 5632}
!147 = !{i64 5639}
!148 = !{i64 5644}
!149 = !{i64 5651}
!150 = !{i64 5671}
!151 = !{i64 5674}
!152 = !{i64 5677}
!153 = !{i64 5681}
!154 = !{i64 5684}
!155 = !{i64 5690}
!156 = !{i64 5695}
!157 = !{i64 5699}
!158 = !{i64 5704}
!159 = !{i64 5708}
!160 = !{i64 5712}
!161 = !{i64 5728}
!162 = !{i64 5730}
!163 = !{i64 5734}
!164 = !{i64 5736}
!165 = !{i64 5744}
!166 = !{i64 5746}
!167 = !{i64 5750}
!168 = !{i64 5752}
!169 = !{i64 5791}
!170 = !{i64 5792}
!171 = !{i64 5804}
!172 = !{i64 5836}
!173 = !{i64 5841}
!174 = !{i64 5845}
!175 = !{i64 5850}
!176 = !{i64 5856}
!177 = !{i64 5876}
!178 = !{i64 5881}
!179 = !{i64 5884}
!180 = !{i64 5895}
!181 = !{i64 5904}
!182 = !{i64 5916}
!183 = !{i64 5953}
!184 = !{i64 5958}
!185 = !{i64 5962}
!186 = !{i64 5967}
!187 = !{i64 5984}
!188 = !{i64 5994}
!189 = !{i64 5996}
!190 = !{i64 5998}
!191 = !{i64 6012}
!192 = !{i64 6022}
!193 = !{i64 6024}
!194 = !{i64 6026}
!195 = !{i64 6032}
!196 = !{i64 6041}
!197 = !{i64 6046}
!198 = !{i64 6058}
!199 = !{i64 6066}
!200 = !{i64 6076}
!201 = !{i64 6078}
!202 = !{i64 6080}
!203 = !{i64 6092}
!204 = !{i64 6135}
!205 = !{i64 6140}
!206 = !{i64 6144}
!207 = !{i64 6149}
!208 = !{i64 6155}
!209 = !{i64 6168}
!210 = !{i64 6176}
!211 = !{i64 6181}
!212 = !{i64 6186}
!213 = !{i64 6222}
!214 = !{i64 6229}
!215 = !{i64 6242}
!216 = !{i64 6263}
!217 = !{i64 6271}
!218 = !{i64 6273}
!219 = !{i64 6288}
!220 = !{i64 6304}
!221 = !{i64 6330}
!222 = !{i64 6345}
!223 = !{i64 6352}
!224 = !{i64 6356}
!225 = !{i64 6386}
!226 = !{i64 6401}
!227 = !{i64 6413}
!228 = !{i64 6416}
!229 = !{i64 6421}
!230 = !{i64 6435}
!231 = !{i64 6448}
!232 = !{i64 6450}
!233 = !{i64 6452}
!234 = !{i64 6455}
!235 = !{i64 6458}
!236 = !{i64 6442}
!237 = !{i64 6446}
!238 = !{i64 6463}
!239 = !{i64 6470}
!240 = !{i64 6472}
!241 = !{i64 6475}
!242 = !{i64 6499}
!243 = !{i64 6504}
!244 = !{i64 6511}
!245 = !{i64 6515}
!246 = !{i64 6522}
!247 = !{i64 6532}
!248 = !{i64 6536}
!249 = !{i64 6540}
!250 = !{i64 6544}
!251 = !{i64 6547}
!252 = !{i64 6553}
!253 = !{i64 6558}
!254 = !{i64 6562}
!255 = !{i64 6567}
!256 = !{i64 6571}
!257 = !{i64 6584}
!258 = !{i64 6596}
!259 = !{i64 6619}
!260 = !{i64 6624}
!261 = !{i64 6640}
!262 = !{i64 6654}
!263 = !{i64 6657}
!264 = !{i64 6662}
!265 = !{i64 6670}
!266 = !{i64 6684}
