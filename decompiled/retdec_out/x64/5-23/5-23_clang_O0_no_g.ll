source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4064 = external local_unnamed_addr global i64
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [12 x i8] c"Hello World\00"
@global_var_2010 = constant [6 x i8] c"1.2.3\00"
@global_var_2016 = constant [4 x i8] c"155\00"
@global_var_201a = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_2033 = constant [11 x i8] c"src/5-23.c\00"
@global_var_203e = constant [21 x i8] c"param_builtin_macros\00"
@global_var_2053 = constant [12 x i8] c"Jan 15 2026\00"
@global_var_205f = constant [9 x i8] c"03:00:44\00"
@global_var_2068 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var_22f0 = local_unnamed_addr constant i64 8589934593
@global_var_22f8 = local_unnamed_addr constant i64 17179869187
@global_var_2300 = local_unnamed_addr constant i64 -4574539529184083963
@global_var_2209 = local_unnamed_addr constant [10 x i8] c"Hello ASM\00"
@global_var_2211 = local_unnamed_addr constant i64 -5339544860808642483
@global_var_2310 = local_unnamed_addr constant i64 8589934593
@global_var_2318 = local_unnamed_addr constant i64 17179869187
@global_var_2320 = local_unnamed_addr constant i64 25769803781
@global_var_2328 = local_unnamed_addr constant i64 34359738375
@0 = external global i32
@global_var_400 = global i1 false
@1 = internal constant [40 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\A2\84\E5\A4\84\E7\90\86\E4\B8\8E\E6\9D\A1\E4\BB\B6\E7\BC\96\E8\AF\91 ===\0A\00"
@global_var_2095 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @1, i64 0, i64 0)
@2 = internal constant [27 x i8] c"PP-L2-01: %d (\E6\9C\9F\E6\9C\9B: 64)\0A\00"
@global_var_20bd = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"PP-L2-02: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_20d8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"PP-L2-03: %d (\E6\9C\9F\E6\9C\9B: 32)\0A\00"
@global_var_20f3 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [31 x i8] c"PP-L2-04: %d (\E6\9C\9F\E6\9C\9B: 0xDF22)\0A\00"
@global_var_210e = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"PP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 116)\0A\00"
@global_var_212d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"PP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 11+5+\E8\A1\8C\E5\8F\B7\E9\95\BF\E5\BA\A6)\0A\00"
@global_var_2149 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [27 x i8] c"PP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2173 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @8, i64 0, i64 0)
@9 = internal constant [27 x i8] c"PP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_218e = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @9, i64 0, i64 0)
@10 = internal constant [27 x i8] c"PP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_21a9 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"PP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 500)\0A\00"
@global_var_21c4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [41 x i8] c"PP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 100+\E8\A1\8C\E5\8F\B7+0+1+2)\0A\00"
@global_var_21e0 = constant i8* getelementptr inbounds ([41 x i8], [41 x i8]* @12, i64 0, i64 0)
@global_var_2304 = local_unnamed_addr constant i32 -1065092983
@global_var_2308 = local_unnamed_addr constant i16 -15611
@13 = internal constant [43 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E8\81\94\E6\B1\87\E7\BC\96\E4\B8\8E\E5\BA\95\E5\B1\82\E7\89\B9\E6\80\A7 ===\0A\00"
@global_var_2213 = constant i8* getelementptr inbounds ([43 x i8], [43 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"ASM-L4-01: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_223e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"ASM-L4-02: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_225a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"ASM-L4-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2276 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"ASM-L4-04: %d (\E6\9C\9F\E6\9C\9B: 36)\0A\00"
@global_var_2292 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"ASM-L4-05: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_22ae = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"ASM-L4-06: %d (\E6\9C\9F\E6\9C\9B: 77)\0A\00"
@global_var_22ca = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

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
  %0 = call i32 @strlen(i8* %s), !insn.addr !6
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

define i64* @function_1060(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !9
  ret i64* %0, !insn.addr !9
}

define i32 @function_1070(i64* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @munmap(i64* %addr, i32 %len), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1080(i64* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @mprotect(i64* %addr, i32 %len, i32 %prot), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1090(i32 %name) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_10a0(i64* %d) local_unnamed_addr {
dec_label_pc_10a0:
  call void @__cxa_finalize(i64* %d), !insn.addr !13
  ret void, !insn.addr !13
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10b0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !14
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !14
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !14
  %3 = call i32 @__libc_start_main(i64 7360, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !14
  %4 = call i64 @__asm_hlt(), !insn.addr !15
  unreachable, !insn.addr !15
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10e0:
  ret i64 16488, !insn.addr !16
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  ret i64 0, !insn.addr !17
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16484 to i8*), align 4, !insn.addr !18
  %3 = icmp eq i8 %2, 0, !insn.addr !18
  %4 = icmp eq i1 %3, false, !insn.addr !19
  br i1 %4, label %dec_label_pc_1188, label %dec_label_pc_115d, !insn.addr !19

dec_label_pc_115d:                                ; preds = %dec_label_pc_1150
  %5 = load i64, i64* @global_var_3ff8, align 8, !insn.addr !20
  %6 = icmp eq i64 %5, 0, !insn.addr !20
  br i1 %6, label %dec_label_pc_1177, label %dec_label_pc_116b, !insn.addr !21

dec_label_pc_116b:                                ; preds = %dec_label_pc_115d
  %7 = load i64, i64* inttoptr (i64 16472 to i64*), align 8, !insn.addr !22
  %8 = inttoptr i64 %7 to i64*, !insn.addr !23
  call void @__cxa_finalize(i64* %8), !insn.addr !23
  br label %dec_label_pc_1177, !insn.addr !23

dec_label_pc_1177:                                ; preds = %dec_label_pc_116b, %dec_label_pc_115d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !24
  store i8 1, i8* bitcast (i64* @global_var_4064 to i8*), align 8, !insn.addr !25
  ret i64 %9, !insn.addr !26

dec_label_pc_1188:                                ; preds = %dec_label_pc_1150
  ret i64 %1, !insn.addr !27
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64 @register_tm_clones(), !insn.addr !28
  ret i64 %0, !insn.addr !28
}

define i64 @param_macro_constants(i64 %arg1) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !29
  %1 = icmp sgt i32 %0, ptrtoint (i1* @global_var_400 to i32), !insn.addr !30
  %. = select i1 %1, i64 64, i64 512
  ret i64 %., !insn.addr !31
}

define i64 @call_macro_constants() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i64 @param_macro_constants(i64 2048), !insn.addr !32
  ret i64 %0, !insn.addr !33
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !34
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !34
  %2 = trunc i64 %arg2 to i32, !insn.addr !35
  %3 = mul nsw i64 %1, %1, !insn.addr !36
  %4 = icmp sgt i32 %0, %2, !insn.addr !37
  %storemerge.in.in = select i1 %4, i64 %1, i64 %arg2
  %5 = add i64 %storemerge.in.in, %3, !insn.addr !38
  %6 = and i64 %5, 4294967295, !insn.addr !38
  ret i64 %6, !insn.addr !39
}

define i64 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i64 @param_macro_functions(i64 5, i64 3), !insn.addr !40
  ret i64 %0, !insn.addr !41
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = mul i64 %arg1, 3, !insn.addr !42
  %1 = add i64 %0, 2, !insn.addr !43
  %2 = and i64 %1, 4294967295, !insn.addr !44
  ret i64 %2, !insn.addr !45
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1260:
  %0 = call i64 @param_conditional_compile(i64 10), !insn.addr !46
  ret i64 %0, !insn.addr !47
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_1270:
  %0 = mul i64 %arg1, 5, !insn.addr !48
  %1 = add i64 %0, 57072, !insn.addr !49
  %2 = and i64 %1, 4294967295, !insn.addr !49
  ret i64 %2, !insn.addr !50
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i64 @param_multi_branch_compile(i64 10), !insn.addr !51
  ret i64 %0, !insn.addr !52
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = add i64 %arg1, 16, !insn.addr !53
  %1 = and i64 %0, 4294967295, !insn.addr !53
  ret i64 %1, !insn.addr !54
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_12e0:
  %0 = call i64 @param_macro_recursion(i64 100), !insn.addr !55
  ret i64 %0, !insn.addr !56
}

define i64 @param_stringize(i32 %arg1) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = call i32 @strlen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2004, i64 0, i64 0)), !insn.addr !57
  %1 = sext i32 %0 to i64, !insn.addr !57
  %2 = call i32 @strlen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2010, i64 0, i64 0)), !insn.addr !58
  %3 = sext i32 %2 to i64, !insn.addr !58
  %4 = add nsw i64 %3, %1, !insn.addr !59
  %5 = call i32 @strlen(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_2016, i64 0, i64 0)), !insn.addr !60
  %6 = sext i32 %5 to i64, !insn.addr !60
  %7 = add nsw i64 %4, %6, !insn.addr !61
  ret i64 %7, !insn.addr !62

; uselistorder directives
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i64 @call_stringize(i64 %arg1) local_unnamed_addr {
dec_label_pc_1360:
  %0 = call i64 @param_stringize(i32 0), !insn.addr !63
  ret i64 %0, !insn.addr !64
}

define i64 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = mul i32 %arg1, 10, !insn.addr !65
  %1 = zext i32 %0 to i64, !insn.addr !65
  ret i64 %1, !insn.addr !66
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = trunc i64 %arg1 to i32, !insn.addr !67
  %1 = call i64 @my_func(i32 %0), !insn.addr !68
  %2 = add i64 %arg1, 5, !insn.addr !69
  %3 = add i64 %2, %1, !insn.addr !70
  %4 = and i64 %3, 4294967295, !insn.addr !71
  ret i64 %4, !insn.addr !72
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i64 @param_token_paste(i64 5), !insn.addr !73
  ret i64 %0, !insn.addr !74
}

define i64 @param_variadic_macro(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !75
  %1 = and i64 %arg2, 4294967295, !insn.addr !76
  %2 = and i64 %arg3, 4294967295, !insn.addr !77
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_201a, i64 0, i64 0), i64 %0, i64 %1, i64 %2), !insn.addr !78
  %4 = add i64 %arg1, 50, !insn.addr !79
  %5 = and i64 %4, 4294967295, !insn.addr !79
  ret i64 %5, !insn.addr !80
}

define i64 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i64 @param_variadic_macro(i64 10, i64 20, i64 30), !insn.addr !81
  ret i64 %0, !insn.addr !82
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_1430:
  %0 = add i64 %arg1, 1, !insn.addr !83
  %1 = mul i64 %arg1, 2, !insn.addr !84
  %2 = add i64 %0, %1, !insn.addr !85
  %3 = and i64 %2, 4294967295, !insn.addr !85
  ret i64 %3, !insn.addr !86
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i64 @param_macro_override(i64 5), !insn.addr !87
  ret i64 %0, !insn.addr !88
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i64 @header_func(i64 5), !insn.addr !89
  ret i64 %0, !insn.addr !90
}

define i64 @header_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1480:
  %0 = mul i64 %arg1, 100, !insn.addr !91
  %1 = and i64 %0, 4294967292, !insn.addr !91
  ret i64 %1, !insn.addr !92
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i64 @param_include_guard(), !insn.addr !93
  ret i64 %0, !insn.addr !94
}

define i64 @param_builtin_macros(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2068, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2033, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_203e, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2053, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_205f, i64 0, i64 0)), !insn.addr !95
  %1 = add i64 %arg1, 282, !insn.addr !96
  %2 = and i64 %1, 4294967295, !insn.addr !96
  ret i64 %2, !insn.addr !97
}

define i64 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i64 @param_builtin_macros(i64 100), !insn.addr !98
  ret i64 %0, !insn.addr !99

; uselistorder directives
  uselistorder i64 100, { 1, 0, 2 }
}

define i64 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2095 to i8*)), !insn.addr !100
  %1 = call i64 @call_macro_constants(), !insn.addr !101
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20bd to i8*)), !insn.addr !102
  %3 = call i64 @call_macro_functions(), !insn.addr !103
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d8 to i8*)), !insn.addr !104
  %5 = call i64 @call_conditional_compile(), !insn.addr !105
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20f3 to i8*)), !insn.addr !106
  %7 = call i64 @call_multi_branch_compile(), !insn.addr !107
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210e to i8*)), !insn.addr !108
  %9 = call i64 @call_macro_recursion(), !insn.addr !109
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_212d to i8*)), !insn.addr !110
  %11 = call i64 @call_stringize(i64 ptrtoint (i8** @global_var_212d to i64)), !insn.addr !111
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2149 to i8*)), !insn.addr !112
  %13 = call i64 @call_token_paste(), !insn.addr !113
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2173 to i8*)), !insn.addr !114
  %15 = call i64 @call_variadic_macro(), !insn.addr !115
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218e to i8*)), !insn.addr !116
  %17 = call i64 @call_macro_override(), !insn.addr !117
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a9 to i8*)), !insn.addr !118
  %19 = call i64 @call_include_guard(), !insn.addr !119
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !120
  %21 = call i64 @call_builtin_macros(), !insn.addr !121
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e0 to i8*)), !insn.addr !122
  %23 = sext i32 %22 to i64, !insn.addr !122
  ret i64 %23, !insn.addr !123

; uselistorder directives
  uselistorder i8** @global_var_212d, { 1, 0 }
}

define i64 @param_asm_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_1640:
  %0 = add i64 %arg1, 10, !insn.addr !124
  %1 = and i64 %0, 4294967295, !insn.addr !125
  ret i64 %1, !insn.addr !126
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i64 @param_asm_basic(i64 5), !insn.addr !127
  ret i64 %0, !insn.addr !128
}

define i64 @param_asm_clobber(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1670:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !129
  %rax.01.reg2mem = alloca i32, !insn.addr !129
  %storemerge2.reg2mem = alloca i64, !insn.addr !129
  %0 = ptrtoint i64* %arg1 to i64
  %1 = and i64 %arg2, 4294967295, !insn.addr !130
  %2 = icmp eq i64 %1, 0, !insn.addr !131
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !131
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !131
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !131
  br i1 %2, label %dec_label_pc_169f, label %dec_label_pc_1695, !insn.addr !131

dec_label_pc_1695:                                ; preds = %dec_label_pc_1670, %dec_label_pc_1695
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %3 = mul i64 %storemerge2.reload, 4, !insn.addr !132
  %4 = add i64 %3, %0, !insn.addr !132
  %5 = inttoptr i64 %4 to i32*, !insn.addr !132
  %6 = load i32, i32* %5, align 4, !insn.addr !132
  %7 = add i32 %6, %rax.01.reload, !insn.addr !132
  %8 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !133
  %9 = and i64 %8, 4294967295, !insn.addr !133
  %10 = icmp ult i64 %9, %1, !insn.addr !131
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !131
  store i32 %7, i32* %rax.01.reg2mem, !insn.addr !131
  br i1 %10, label %dec_label_pc_1695, label %dec_label_pc_168d.dec_label_pc_169f_crit_edge, !insn.addr !131

dec_label_pc_168d.dec_label_pc_169f_crit_edge:    ; preds = %dec_label_pc_1695
  %11 = zext i32 %7 to i64, !insn.addr !132
  store i64 %11, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_169f

dec_label_pc_169f:                                ; preds = %dec_label_pc_1670, %dec_label_pc_168d.dec_label_pc_169f_crit_edge
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !134

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_169f, { 1, 0 }
  uselistorder label %dec_label_pc_1695, { 1, 0 }
}

define i64 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_16b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-40 = alloca i64, align 8
  store i64 8589934593, i64* %stack_var_-40, align 8, !insn.addr !135
  %3 = call i64 @param_asm_clobber(i64* nonnull %stack_var_-40, i64 5, i64 %1, i64 %2), !insn.addr !136
  ret i64 %3, !insn.addr !137

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_asm_multi_insn(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_16f0:
  %rcx.02.reg2mem = alloca i64, !insn.addr !138
  %rdx.03.reg2mem = alloca i64, !insn.addr !138
  %storemerge4.reg2mem = alloca i64, !insn.addr !138
  %0 = icmp eq i64 %arg3, 0, !insn.addr !139
  br i1 %0, label %dec_label_pc_1729, label %dec_label_pc_1717.lr.ph, !insn.addr !140

dec_label_pc_1717.lr.ph:                          ; preds = %dec_label_pc_16f0
  %1 = ptrtoint i64* %arg1 to i64
  %2 = ptrtoint i64* %arg2 to i64
  store i64 %arg3, i64* %storemerge4.reg2mem
  store i64 %1, i64* %rdx.03.reg2mem
  store i64 %2, i64* %rcx.02.reg2mem
  br label %dec_label_pc_1717

dec_label_pc_1717:                                ; preds = %dec_label_pc_1717.lr.ph, %dec_label_pc_1717
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rdx.03.reload = load i64, i64* %rdx.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %3 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !141
  %4 = load i8, i8* %3, align 1, !insn.addr !141
  %5 = inttoptr i64 %rdx.03.reload to i8*, !insn.addr !142
  store i8 %4, i8* %5, align 1, !insn.addr !142
  %6 = add i64 %rdx.03.reload, 1, !insn.addr !143
  %7 = add i64 %rcx.02.reload, 1, !insn.addr !144
  %8 = add i64 %storemerge4.reload, -1, !insn.addr !145
  %9 = icmp eq i64 %8, 0, !insn.addr !139
  store i64 %8, i64* %storemerge4.reg2mem, !insn.addr !140
  store i64 %6, i64* %rdx.03.reg2mem, !insn.addr !140
  store i64 %7, i64* %rcx.02.reg2mem, !insn.addr !140
  br i1 %9, label %dec_label_pc_1729, label %dec_label_pc_1717, !insn.addr !140

dec_label_pc_1729:                                ; preds = %dec_label_pc_1717, %dec_label_pc_16f0
  ret i64 0, !insn.addr !146

; uselistorder directives
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_1717, { 1, 0 }
}

define i64 @call_asm_multi_insn(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1740:
  %0 = alloca i32
  %stack_var_-57.0.reg2mem = alloca i64, !insn.addr !147
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-18 = alloca i8*, align 8
  store i8* inttoptr (i64 5999111841566713160 to i8*), i8** %stack_var_-18, align 8, !insn.addr !148
  %2 = call i64* @memset(i64* nonnull %stack_var_-56, i32 0, i32 32), !insn.addr !149
  %3 = bitcast i8** %stack_var_-18 to i64*, !insn.addr !150
  %4 = call i64 @param_asm_multi_insn(i64* nonnull %stack_var_-56, i64* nonnull %3, i64 9), !insn.addr !150
  %5 = load i64, i64* %stack_var_-56, align 8, !insn.addr !151
  %sext.mask3 = urem i64 %5, 256
  %6 = icmp eq i64 %sext.mask3, 72, !insn.addr !152
  %7 = icmp eq i1 %6, false, !insn.addr !153
  store i64 4294967295, i64* %stack_var_-57.0.reg2mem, !insn.addr !153
  br i1 %7, label %dec_label_pc_179f, label %dec_label_pc_1792, !insn.addr !153

dec_label_pc_1792:                                ; preds = %dec_label_pc_1740
  %8 = zext i32 %1 to i64, !insn.addr !154
  %sext = mul i64 %8, 72057594037927936
  %9 = ashr exact i64 %sext, 56, !insn.addr !154
  %10 = trunc i64 %9 to i32, !insn.addr !155
  %11 = icmp eq i32 %10, 111, !insn.addr !155
  %phitmp = icmp eq i1 %11, false
  %phitmp4 = icmp eq i1 %phitmp, false
  %phitmp5 = select i1 %phitmp4, i64 42, i64 4294967295
  store i64 %phitmp5, i64* %stack_var_-57.0.reg2mem, !insn.addr !156
  br label %dec_label_pc_179f, !insn.addr !156

dec_label_pc_179f:                                ; preds = %dec_label_pc_1792, %dec_label_pc_1740
  %stack_var_-57.0.reload = load i64, i64* %stack_var_-57.0.reg2mem
  ret i64 %stack_var_-57.0.reload, !insn.addr !157

; uselistorder directives
  uselistorder i8** %stack_var_-18, { 1, 0 }
  uselistorder i64* %stack_var_-56, { 2, 0, 1 }
}

define i64 @param_asm_simd(i64* %arg1, i64* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_17c0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !158
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !158
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !159
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !159
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !160
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !161
  %8 = sext i64 %7 to i128, !insn.addr !161
  %9 = bitcast i64* %arg3 to i128*, !insn.addr !161
  store i128 %8, i128* %9, align 8, !insn.addr !161
  ret i64 0, !insn.addr !162
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_17f0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !163
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !163
  %3 = call i64 @__asm_movdqa.2(i128 %2), !insn.addr !164
  %4 = sext i64 %3 to i128, !insn.addr !164
  %5 = bitcast i64* %rsi to i128*
  %6 = load i128, i128* %5, align 8, !insn.addr !165
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !165
  %8 = call i64 @__asm_movdqa.2(i128 %7), !insn.addr !166
  %9 = sext i64 %8 to i128, !insn.addr !166
  %10 = call i128 @__asm_movdqa(i128 %4), !insn.addr !167
  %11 = call i128 @__asm_movdqa(i128 %9), !insn.addr !168
  %12 = call i64 @__asm_movdqa.2(i128 %10), !insn.addr !169
  %13 = sext i64 %12 to i128, !insn.addr !169
  %14 = call i64 @__asm_movdqa.2(i128 %11), !insn.addr !170
  %15 = sext i64 %14 to i128, !insn.addr !170
  %16 = call i128 @__asm_movdqa(i128 %13), !insn.addr !171
  %17 = call i128 @__asm_movdqa(i128 %15), !insn.addr !172
  %18 = call i128 @__asm_paddd(i128 %16, i128 %17), !insn.addr !173
  %19 = call i64 @__asm_movdqa.2(i128 %18), !insn.addr !174
  %20 = sext i64 %19 to i128, !insn.addr !174
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !175
  %22 = call i64 @__asm_movdqa.2(i128 %21), !insn.addr !176
  %23 = sext i64 %22 to i128, !insn.addr !177
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !177
  %25 = call i64 @__asm_movdqa.2(i128 %24), !insn.addr !178
  %26 = sext i64 %25 to i128, !insn.addr !178
  %27 = inttoptr i64 %arg3 to i128*, !insn.addr !178
  store i128 %26, i128* %27, align 8, !insn.addr !178
  ret i64 0, !insn.addr !179
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1890:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-56 = alloca i32, align 4
  store i64 8589934593, i64* %stack_var_-24, align 8, !insn.addr !180
  store i64 25769803781, i64* %stack_var_-40, align 8, !insn.addr !181
  %4 = bitcast i32* %stack_var_-56 to i64*, !insn.addr !182
  %5 = call i64 @param_asm_simd(i64* nonnull %stack_var_-24, i64* nonnull %stack_var_-40, i64* nonnull %4), !insn.addr !182
  %6 = load i32, i32* %stack_var_-56, align 4, !insn.addr !183
  %7 = add i32 %2, %1, !insn.addr !184
  %8 = add i32 %7, %3, !insn.addr !185
  %9 = add i32 %8, %6, !insn.addr !186
  %10 = zext i32 %9 to i64, !insn.addr !186
  ret i64 %10, !insn.addr !187

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i64 @param_asm_atomic(i32* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_18f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !188
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !189
  store i32 %4, i32* %arg1, align 4, !insn.addr !189
  %5 = zext i32 %4 to i64, !insn.addr !190
  ret i64 %5, !insn.addr !191
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1920:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !192
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !193
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !193
  store i32 %4, i32* %5, align 4, !insn.addr !193
  %6 = zext i32 %4 to i64, !insn.addr !194
  ret i64 %6, !insn.addr !195
}

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1950:
  %stack_var_-12 = alloca i32, align 4
  store i32 10, i32* %stack_var_-12, align 4, !insn.addr !196
  %0 = call i64 @param_asm_atomic(i32* nonnull %stack_var_-12, i64 5), !insn.addr !197
  %1 = trunc i64 %0 to i32, !insn.addr !198
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !199
  %3 = add i32 %2, %1, !insn.addr !200
  %4 = zext i32 %3 to i64, !insn.addr !200
  ret i64 %4, !insn.addr !201

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0, 2 }
  uselistorder i64 5, { 2, 3, 4, 5, 6, 7, 0, 1, 8 }
  uselistorder i32 10, { 1, 0 }
}

define i64 @param_dynamic_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_1980:
  %storemerge.reg2mem = alloca i64, !insn.addr !202
  %0 = call i32 @sysconf(i32 30), !insn.addr !203
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !204
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !205
  %3 = icmp eq i1 %2, false, !insn.addr !206
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !206
  br i1 %3, label %dec_label_pc_19db, label %dec_label_pc_1a27, !insn.addr !206

dec_label_pc_19db:                                ; preds = %dec_label_pc_1980
  %4 = ptrtoint i64* %1 to i64, !insn.addr !204
  %5 = bitcast i64* %1 to i32*, !insn.addr !207
  store i32 -1065092983, i32* %5, align 4, !insn.addr !207
  %6 = add i64 %4, 4, !insn.addr !208
  %7 = inttoptr i64 %6 to i16*, !insn.addr !208
  store i16 -15611, i16* %7, align 2, !insn.addr !208
  %8 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !209
  %phitmp = and i64 %4, 4294967295
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !210
  br label %dec_label_pc_1a27, !insn.addr !210

dec_label_pc_1a27:                                ; preds = %dec_label_pc_1980, %dec_label_pc_19db
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !211

; uselistorder directives
  uselistorder i64* %1, { 0, 1, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 1, 0 }
  uselistorder label %dec_label_pc_1a27, { 1, 0 }
}

define i64 @param_memory_protection() local_unnamed_addr {
dec_label_pc_1a30:
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !212
  %0 = call i32 @sysconf(i32 30), !insn.addr !213
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !214
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !215
  %3 = icmp eq i1 %2, false, !insn.addr !216
  store i64 4294967295, i64* %stack_var_-12.0.reg2mem, !insn.addr !216
  br i1 %3, label %dec_label_pc_1a88, label %dec_label_pc_1b28, !insn.addr !216

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a30
  %4 = bitcast i64* %1 to i32*, !insn.addr !217
  store i32 42, i32* %4, align 4, !insn.addr !218
  %5 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !219
  %6 = icmp eq i32 %5, 0, !insn.addr !220
  br i1 %6, label %dec_label_pc_1ace, label %dec_label_pc_1ab5, !insn.addr !221

dec_label_pc_1ab5:                                ; preds = %dec_label_pc_1a88
  %7 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !222
  store i64 4294967294, i64* %stack_var_-12.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_1b28, !insn.addr !223

dec_label_pc_1ace:                                ; preds = %dec_label_pc_1a88
  %8 = load i32, i32* %4, align 4, !insn.addr !224
  %9 = call i32 @mprotect(i64* nonnull %1, i32 %0, i32 3), !insn.addr !225
  %10 = icmp eq i32 %9, 0, !insn.addr !226
  br i1 %10, label %dec_label_pc_1b0b, label %dec_label_pc_1af2, !insn.addr !227

dec_label_pc_1af2:                                ; preds = %dec_label_pc_1ace
  %11 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !228
  store i64 4294967293, i64* %stack_var_-12.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_1b28, !insn.addr !229

dec_label_pc_1b0b:                                ; preds = %dec_label_pc_1ace
  store i32 100, i32* %4, align 4, !insn.addr !230
  %12 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !231
  %phitmp = zext i32 %8 to i64
  store i64 %phitmp, i64* %stack_var_-12.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_1b28, !insn.addr !232

dec_label_pc_1b28:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1b0b, %dec_label_pc_1af2, %dec_label_pc_1ab5
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  ret i64 %stack_var_-12.0.reload, !insn.addr !233

; uselistorder directives
  uselistorder i32* %4, { 2, 1, 0 }
  uselistorder i32 %0, { 2, 1, 3, 0, 4, 5 }
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 5, 6, 1, 2, 3, 0, 4 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1b28, { 1, 2, 3, 0 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1b40:
  %0 = add i64 %arg2, %arg1, !insn.addr !234
  %1 = mul i64 %0, 2, !insn.addr !235
  %2 = and i64 %1, 4294967294, !insn.addr !235
  ret i64 %2, !insn.addr !236

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0 }
}

define i64 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1b80:
  %storemerge.reg2mem = alloca i64, !insn.addr !237
  %0 = call i64 @param_dynamic_code(i64 10), !insn.addr !238
  %1 = trunc i64 %0 to i32, !insn.addr !239
  %2 = call i64 @param_memory_protection(), !insn.addr !240
  %3 = call i64 @param_clobber_importance(i64 3, i64 7), !insn.addr !241
  %4 = icmp eq i32 %1, 15, !insn.addr !242
  %5 = icmp eq i1 %4, false, !insn.addr !243
  br i1 %5, label %dec_label_pc_1bd9, label %dec_label_pc_1bb9, !insn.addr !243

dec_label_pc_1bb9:                                ; preds = %dec_label_pc_1b80
  %6 = trunc i64 %3 to i32, !insn.addr !244
  %7 = trunc i64 %2 to i32, !insn.addr !245
  %8 = icmp eq i32 %7, 42, !insn.addr !246
  %9 = icmp eq i32 %6, 20, !insn.addr !247
  %10 = icmp eq i1 %8, %9
  store i64 77, i64* %storemerge.reg2mem, !insn.addr !248
  br i1 %10, label %dec_label_pc_1bdf, label %dec_label_pc_1bd9, !insn.addr !248

dec_label_pc_1bd9:                                ; preds = %dec_label_pc_1bb9, %dec_label_pc_1b80
  %phitmp = and i64 %0, 4294967295
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !249
  br label %dec_label_pc_1bdf, !insn.addr !249

dec_label_pc_1bdf:                                ; preds = %dec_label_pc_1bb9, %dec_label_pc_1bd9
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !250

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1 false, { 3, 4, 5, 0, 1, 6, 7, 2 }
  uselistorder i64 3, { 1, 0, 2 }
  uselistorder i64 10, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_1bdf, { 1, 0 }
}

define i64 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = load i32, i32* inttoptr (i64 16480 to i32*), align 32, !insn.addr !251
  %1 = add i32 %0, 50, !insn.addr !251
  %2 = zext i32 %1 to i64, !insn.addr !252
  ret i64 %2, !insn.addr !253
}

define i64 @test_asm_features() local_unnamed_addr {
dec_label_pc_1c20:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2213 to i8*)), !insn.addr !254
  %1 = call i64 @call_asm_basic(), !insn.addr !255
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_223e to i8*)), !insn.addr !256
  %3 = call i64 @call_asm_clobber(), !insn.addr !257
  %4 = and i64 %3, 4294967295, !insn.addr !258
  %5 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_225a to i8*)), !insn.addr !259
  %6 = call i64 @call_asm_multi_insn(i64 ptrtoint (i8** @global_var_225a to i64), i64 %4), !insn.addr !260
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2276 to i8*)), !insn.addr !261
  %8 = call i64 @call_asm_simd(), !insn.addr !262
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2292 to i8*)), !insn.addr !263
  %10 = call i64 @call_asm_atomic(), !insn.addr !264
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22ae to i8*)), !insn.addr !265
  %12 = call i64 @call_asm_privileged(), !insn.addr !266
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22ca to i8*)), !insn.addr !267
  %14 = sext i32 %13 to i64, !insn.addr !267
  ret i64 %14, !insn.addr !268

; uselistorder directives
  uselistorder i8** @global_var_225a, { 1, 0 }
  uselistorder i64 4294967295, { 6, 3, 0, 7, 1, 4, 2, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 5 }
  uselistorder i32 (i8*, ...)* @printf, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = call i64 @test_preprocessing_features(), !insn.addr !269
  %1 = call i64 @test_asm_features(), !insn.addr !270
  ret i64 0, !insn.addr !271

; uselistorder directives
  uselistorder i64 0, { 3, 4, 5, 6, 67, 9, 0, 1, 8, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 68, 7, 2, 69, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 66 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1ce4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !272

; uselistorder directives
  uselistorder i32 1, { 4, 7, 18, 8, 9, 25, 3, 2, 23, 27, 26, 6, 22, 20, 21, 19, 24, 28, 10, 5, 13, 12, 11, 29, 1, 16, 15, 14, 0, 30, 17 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64* @mmap(i64*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @munmap(i64*, i32) local_unnamed_addr

declare i32 @mprotect(i64*, i32, i32) local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps.1(i128) local_unnamed_addr

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
!13 = !{i64 4256}
!14 = !{i64 4303}
!15 = !{i64 4309}
!16 = !{i64 4360}
!17 = !{i64 4424}
!18 = !{i64 4436}
!19 = !{i64 4443}
!20 = !{i64 4446}
!21 = !{i64 4457}
!22 = !{i64 4459}
!23 = !{i64 4466}
!24 = !{i64 4471}
!25 = !{i64 4476}
!26 = !{i64 4484}
!27 = !{i64 4488}
!28 = !{i64 4500}
!29 = !{i64 4516}
!30 = !{i64 4526}
!31 = !{i64 4555}
!32 = !{i64 4569}
!33 = !{i64 4575}
!34 = !{i64 4580}
!35 = !{i64 4583}
!36 = !{i64 4589}
!37 = !{i64 4602}
!38 = !{i64 4631}
!39 = !{i64 4634}
!40 = !{i64 4654}
!41 = !{i64 4660}
!42 = !{i64 4685}
!43 = !{i64 4689}
!44 = !{i64 4695}
!45 = !{i64 4699}
!46 = !{i64 4713}
!47 = !{i64 4719}
!48 = !{i64 4727}
!49 = !{i64 4731}
!50 = !{i64 4737}
!51 = !{i64 4761}
!52 = !{i64 4767}
!53 = !{i64 4823}
!54 = !{i64 4827}
!55 = !{i64 4841}
!56 = !{i64 4847}
!57 = !{i64 4896}
!58 = !{i64 4909}
!59 = !{i64 4921}
!60 = !{i64 4932}
!61 = !{i64 4944}
!62 = !{i64 4952}
!63 = !{i64 4966}
!64 = !{i64 4972}
!65 = !{i64 4983}
!66 = !{i64 4988}
!67 = !{i64 5000}
!68 = !{i64 5006}
!69 = !{i64 5017}
!70 = !{i64 5026}
!71 = !{i64 5032}
!72 = !{i64 5040}
!73 = !{i64 5065}
!74 = !{i64 5071}
!75 = !{i64 5089}
!76 = !{i64 5092}
!77 = !{i64 5095}
!78 = !{i64 5107}
!79 = !{i64 5123}
!80 = !{i64 5131}
!81 = !{i64 5155}
!82 = !{i64 5161}
!83 = !{i64 5178}
!84 = !{i64 5187}
!85 = !{i64 5196}
!86 = !{i64 5200}
!87 = !{i64 5225}
!88 = !{i64 5231}
!89 = !{i64 5241}
!90 = !{i64 5247}
!91 = !{i64 5255}
!92 = !{i64 5260}
!93 = !{i64 5268}
!94 = !{i64 5274}
!95 = !{i64 5370}
!96 = !{i64 5408}
!97 = !{i64 5416}
!98 = !{i64 5433}
!99 = !{i64 5439}
!100 = !{i64 5453}
!101 = !{i64 5458}
!102 = !{i64 5474}
!103 = !{i64 5479}
!104 = !{i64 5495}
!105 = !{i64 5500}
!106 = !{i64 5516}
!107 = !{i64 5521}
!108 = !{i64 5537}
!109 = !{i64 5542}
!110 = !{i64 5558}
!111 = !{i64 5563}
!112 = !{i64 5579}
!113 = !{i64 5584}
!114 = !{i64 5600}
!115 = !{i64 5605}
!116 = !{i64 5621}
!117 = !{i64 5626}
!118 = !{i64 5642}
!119 = !{i64 5647}
!120 = !{i64 5663}
!121 = !{i64 5668}
!122 = !{i64 5684}
!123 = !{i64 5690}
!124 = !{i64 5708}
!125 = !{i64 5722}
!126 = !{i64 5726}
!127 = !{i64 5737}
!128 = !{i64 5743}
!129 = !{i64 5744}
!130 = !{i64 5766}
!131 = !{i64 5775}
!132 = !{i64 5781}
!133 = !{i64 5784}
!134 = !{i64 5806}
!135 = !{i64 5823}
!136 = !{i64 5856}
!137 = !{i64 5866}
!138 = !{i64 5872}
!139 = !{i64 5901}
!140 = !{i64 5905}
!141 = !{i64 5911}
!142 = !{i64 5913}
!143 = !{i64 5915}
!144 = !{i64 5918}
!145 = !{i64 5921}
!146 = !{i64 5950}
!147 = !{i64 5952}
!148 = !{i64 5967}
!149 = !{i64 5993}
!150 = !{i64 6011}
!151 = !{i64 6016}
!152 = !{i64 6022}
!153 = !{i64 6028}
!154 = !{i64 6034}
!155 = !{i64 6038}
!156 = !{i64 6044}
!157 = !{i64 6071}
!158 = !{i64 6108}
!159 = !{i64 6111}
!160 = !{i64 6114}
!161 = !{i64 6118}
!162 = !{i64 6124}
!163 = !{i64 6160}
!164 = !{i64 6164}
!165 = !{i64 6181}
!166 = !{i64 6185}
!167 = !{i64 6193}
!168 = !{i64 6198}
!169 = !{i64 6206}
!170 = !{i64 6211}
!171 = !{i64 6216}
!172 = !{i64 6221}
!173 = !{i64 6226}
!174 = !{i64 6230}
!175 = !{i64 6242}
!176 = !{i64 6254}
!177 = !{i64 6259}
!178 = !{i64 6268}
!179 = !{i64 6279}
!180 = !{i64 6303}
!181 = !{i64 6325}
!182 = !{i64 6352}
!183 = !{i64 6357}
!184 = !{i64 6360}
!185 = !{i64 6363}
!186 = !{i64 6366}
!187 = !{i64 6374}
!188 = !{i64 6392}
!189 = !{i64 6402}
!190 = !{i64 6412}
!191 = !{i64 6416}
!192 = !{i64 6440}
!193 = !{i64 6456}
!194 = !{i64 6466}
!195 = !{i64 6470}
!196 = !{i64 6488}
!197 = !{i64 6504}
!198 = !{i64 6509}
!199 = !{i64 6512}
!200 = !{i64 6515}
!201 = !{i64 6523}
!202 = !{i64 6528}
!203 = !{i64 6544}
!204 = !{i64 6581}
!205 = !{i64 6597}
!206 = !{i64 6601}
!207 = !{i64 6646}
!208 = !{i64 6652}
!209 = !{i64 6684}
!210 = !{i64 6692}
!211 = !{i64 6703}
!212 = !{i64 6704}
!213 = !{i64 6717}
!214 = !{i64 6754}
!215 = !{i64 6770}
!216 = !{i64 6774}
!217 = !{i64 6796}
!218 = !{i64 6804}
!219 = !{i64 6823}
!220 = !{i64 6828}
!221 = !{i64 6831}
!222 = !{i64 6845}
!223 = !{i64 6857}
!224 = !{i64 6866}
!225 = !{i64 6884}
!226 = !{i64 6889}
!227 = !{i64 6892}
!228 = !{i64 6906}
!229 = !{i64 6918}
!230 = !{i64 6927}
!231 = !{i64 6941}
!232 = !{i64 6949}
!233 = !{i64 6960}
!234 = !{i64 6994}
!235 = !{i64 7025}
!236 = !{i64 7029}
!237 = !{i64 7040}
!238 = !{i64 7053}
!239 = !{i64 7058}
!240 = !{i64 7061}
!241 = !{i64 7079}
!242 = !{i64 7087}
!243 = !{i64 7091}
!244 = !{i64 7084}
!245 = !{i64 7066}
!246 = !{i64 7097}
!247 = !{i64 7107}
!248 = !{i64 7101}
!249 = !{i64 7132}
!250 = !{i64 7143}
!251 = !{i64 7168}
!252 = !{i64 7185}
!253 = !{i64 7189}
!254 = !{i64 7213}
!255 = !{i64 7218}
!256 = !{i64 7234}
!257 = !{i64 7239}
!258 = !{i64 7244}
!259 = !{i64 7255}
!260 = !{i64 7260}
!261 = !{i64 7276}
!262 = !{i64 7281}
!263 = !{i64 7297}
!264 = !{i64 7302}
!265 = !{i64 7318}
!266 = !{i64 7323}
!267 = !{i64 7339}
!268 = !{i64 7345}
!269 = !{i64 7375}
!270 = !{i64 7380}
!271 = !{i64 7392}
!272 = !{i64 7408}
