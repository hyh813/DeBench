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
@global_var_205f = constant [9 x i8] c"03:00:43\00"
@global_var_2068 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var_22f0 = local_unnamed_addr constant i64 8589934593
@global_var_22f8 = local_unnamed_addr constant i64 17179869187
@global_var_2300 = local_unnamed_addr constant i64 -4574539529184083963
@global_var_2209 = local_unnamed_addr constant [10 x i8] c"Hello ASM\00"
@global_var_2211 = local_unnamed_addr constant i64 -5339544860808642483
@global_var_2318 = local_unnamed_addr constant i64 17179869187
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
@global_var_2310 = local_unnamed_addr constant i32 1
@global_var_2320 = local_unnamed_addr constant i32 5
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

define i32 @param_macro_constants(i32 %size) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = icmp sgt i32 %size, ptrtoint (i1* @global_var_400 to i32), !insn.addr !29
  %. = select i1 %0, i32 64, i32 512
  ret i32 %., !insn.addr !30
}

define i32 @call_macro_constants() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @param_macro_constants(i32 2048), !insn.addr !31
  ret i32 %0, !insn.addr !32
}

define i32 @param_macro_functions(i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = mul i32 %x, %x, !insn.addr !33
  %1 = icmp sgt i32 %x, %y, !insn.addr !34
  %storemerge = select i1 %1, i32 %x, i32 %y
  %2 = add i32 %storemerge, %0, !insn.addr !35
  ret i32 %2, !insn.addr !36
}

define i32 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32 @param_macro_functions(i32 5, i32 3), !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @param_conditional_compile(i32 %x) local_unnamed_addr {
dec_label_pc_1240:
  %0 = mul i32 %x, 3, !insn.addr !39
  %1 = add i32 %0, 2, !insn.addr !40
  ret i32 %1, !insn.addr !41
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1260:
  %0 = call i32 @param_conditional_compile(i32 10), !insn.addr !42
  ret i32 %0, !insn.addr !43
}

define i32 @param_multi_branch_compile(i32 %x) local_unnamed_addr {
dec_label_pc_1270:
  %0 = mul i32 %x, 5, !insn.addr !44
  %1 = add i32 %0, 57072, !insn.addr !45
  ret i32 %1, !insn.addr !46
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i32 @param_multi_branch_compile(i32 10), !insn.addr !47
  ret i32 %0, !insn.addr !48
}

define i32 @param_macro_recursion(i32 %x) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = add i32 %x, 16, !insn.addr !49
  ret i32 %0, !insn.addr !50
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_12e0:
  %0 = call i32 @param_macro_recursion(i32 100), !insn.addr !51
  ret i32 %0, !insn.addr !52
}

define i32 @param_stringize(i32 %value) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = call i32 @strlen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2004, i64 0, i64 0)), !insn.addr !53
  %1 = call i32 @strlen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_2010, i64 0, i64 0)), !insn.addr !54
  %2 = add i32 %1, %0, !insn.addr !55
  %3 = call i32 @strlen(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_2016, i64 0, i64 0)), !insn.addr !56
  %4 = add i32 %2, %3, !insn.addr !57
  ret i32 %4, !insn.addr !58
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_1360:
  %0 = call i32 @param_stringize(i32 0), !insn.addr !59
  ret i32 %0, !insn.addr !60
}

define i32 @my_func(i32 %x) local_unnamed_addr {
dec_label_pc_1370:
  %0 = mul i32 %x, 10, !insn.addr !61
  ret i32 %0, !insn.addr !62
}

define i32 @param_token_paste(i32 %x) local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @my_func(i32 %x), !insn.addr !63
  %1 = add i32 %x, 5, !insn.addr !64
  %2 = add i32 %1, %0, !insn.addr !65
  ret i32 %2, !insn.addr !66
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i32 @param_token_paste(i32 5), !insn.addr !67
  ret i32 %0, !insn.addr !68
}

define i32 @param_variadic_macro(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = zext i32 %x to i64, !insn.addr !69
  %1 = zext i32 %y to i64, !insn.addr !70
  %2 = zext i32 %z to i64, !insn.addr !71
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_201a, i64 0, i64 0), i64 %0, i64 %1, i64 %2), !insn.addr !72
  %4 = add i32 %x, 50, !insn.addr !73
  ret i32 %4, !insn.addr !74
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30), !insn.addr !75
  ret i32 %0, !insn.addr !76
}

define i32 @param_macro_override(i32 %x) local_unnamed_addr {
dec_label_pc_1430:
  %0 = add i32 %x, 1, !insn.addr !77
  %1 = mul i32 %x, 2, !insn.addr !78
  %2 = add i32 %0, %1, !insn.addr !79
  ret i32 %2, !insn.addr !80
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @param_macro_override(i32 5), !insn.addr !81
  ret i32 %0, !insn.addr !82
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_1470:
  %0 = call i32 @header_func(i32 5), !insn.addr !83
  ret i32 %0, !insn.addr !84
}

define i32 @header_func(i32 %x) local_unnamed_addr {
dec_label_pc_1480:
  %0 = mul i32 %x, 100, !insn.addr !85
  ret i32 %0, !insn.addr !86
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i32 @param_include_guard(), !insn.addr !87
  ret i32 %0, !insn.addr !88
}

define i32 @param_builtin_macros(i32 %x) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2068, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_2033, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_203e, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2053, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_205f, i64 0, i64 0)), !insn.addr !89
  %1 = add i32 %x, 282, !insn.addr !90
  ret i32 %1, !insn.addr !91
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i32 @param_builtin_macros(i32 100), !insn.addr !92
  ret i32 %0, !insn.addr !93
}

define void @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2095 to i8*)), !insn.addr !94
  %1 = call i32 @call_macro_constants(), !insn.addr !95
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20bd to i8*)), !insn.addr !96
  %3 = call i32 @call_macro_functions(), !insn.addr !97
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d8 to i8*)), !insn.addr !98
  %5 = call i32 @call_conditional_compile(), !insn.addr !99
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20f3 to i8*)), !insn.addr !100
  %7 = call i32 @call_multi_branch_compile(), !insn.addr !101
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210e to i8*)), !insn.addr !102
  %9 = call i32 @call_macro_recursion(), !insn.addr !103
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_212d to i8*)), !insn.addr !104
  %11 = call i32 @call_stringize(), !insn.addr !105
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2149 to i8*)), !insn.addr !106
  %13 = call i32 @call_token_paste(), !insn.addr !107
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2173 to i8*)), !insn.addr !108
  %15 = call i32 @call_variadic_macro(), !insn.addr !109
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218e to i8*)), !insn.addr !110
  %17 = call i32 @call_macro_override(), !insn.addr !111
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a9 to i8*)), !insn.addr !112
  %19 = call i32 @call_include_guard(), !insn.addr !113
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !114
  %21 = call i32 @call_builtin_macros(), !insn.addr !115
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e0 to i8*)), !insn.addr !116
  ret void, !insn.addr !117
}

define i32 @param_asm_basic(i32 %x) local_unnamed_addr {
dec_label_pc_1640:
  %0 = add i32 %x, 10, !insn.addr !118
  ret i32 %0, !insn.addr !119
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !120
  ret i32 %0, !insn.addr !121
}

define i32 @param_asm_clobber(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1670:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !122
  %rax.01.reg2mem = alloca i32, !insn.addr !122
  %storemerge2.reg2mem = alloca i64, !insn.addr !122
  %0 = ptrtoint i32* %arr to i64
  %sext = mul i64 %0, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !123
  %2 = zext i32 %n to i64, !insn.addr !124
  %3 = icmp eq i32 %n, 0, !insn.addr !125
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !125
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !125
  store i32 0, i32* %rax.0.lcssa.reg2mem, !insn.addr !125
  br i1 %3, label %dec_label_pc_169f, label %dec_label_pc_1695, !insn.addr !125

dec_label_pc_1695:                                ; preds = %dec_label_pc_1670, %dec_label_pc_1695
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %4 = mul i64 %storemerge2.reload, 4, !insn.addr !126
  %5 = add nsw i64 %4, %1, !insn.addr !126
  %6 = inttoptr i64 %5 to i32*, !insn.addr !126
  %7 = load i32, i32* %6, align 4, !insn.addr !126
  %8 = add i32 %7, %rax.01.reload, !insn.addr !126
  %9 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !127
  %10 = and i64 %9, 4294967295, !insn.addr !127
  %11 = icmp ult i64 %10, %2, !insn.addr !125
  store i64 %10, i64* %storemerge2.reg2mem, !insn.addr !125
  store i32 %8, i32* %rax.01.reg2mem, !insn.addr !125
  store i32 %8, i32* %rax.0.lcssa.reg2mem, !insn.addr !125
  br i1 %11, label %dec_label_pc_1695, label %dec_label_pc_169f, !insn.addr !125

dec_label_pc_169f:                                ; preds = %dec_label_pc_1695, %dec_label_pc_1670
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !128

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1695, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_16b0:
  %stack_var_-40 = alloca i64, align 8
  store i64 8589934593, i64* %stack_var_-40, align 8, !insn.addr !129
  %0 = bitcast i64* %stack_var_-40 to i32*, !insn.addr !130
  %1 = call i32 @param_asm_clobber(i32* nonnull %0, i32 5), !insn.addr !130
  ret i32 %1, !insn.addr !131
}

define void @param_asm_multi_insn(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_16f0:
  %rcx.02.reg2mem = alloca i64, !insn.addr !132
  %rdx.03.reg2mem = alloca i64, !insn.addr !132
  %storemerge4.reg2mem = alloca i64, !insn.addr !132
  %0 = icmp eq i64 %n, 0, !insn.addr !133
  br i1 %0, label %dec_label_pc_1729, label %dec_label_pc_1717.lr.ph, !insn.addr !134

dec_label_pc_1717.lr.ph:                          ; preds = %dec_label_pc_16f0
  %1 = ptrtoint i8* %dst to i64
  %2 = ptrtoint i32* %src to i64
  store i64 %n, i64* %storemerge4.reg2mem
  store i64 %1, i64* %rdx.03.reg2mem
  store i64 %2, i64* %rcx.02.reg2mem
  br label %dec_label_pc_1717

dec_label_pc_1717:                                ; preds = %dec_label_pc_1717.lr.ph, %dec_label_pc_1717
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rdx.03.reload = load i64, i64* %rdx.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %3 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !135
  %4 = load i8, i8* %3, align 1, !insn.addr !135
  %5 = inttoptr i64 %rdx.03.reload to i8*, !insn.addr !136
  store i8 %4, i8* %5, align 1, !insn.addr !136
  %6 = add i64 %rdx.03.reload, 1, !insn.addr !137
  %7 = add i64 %rcx.02.reload, 1, !insn.addr !138
  %8 = add i64 %storemerge4.reload, -1, !insn.addr !139
  %9 = icmp eq i64 %8, 0, !insn.addr !133
  store i64 %8, i64* %storemerge4.reg2mem, !insn.addr !134
  store i64 %6, i64* %rdx.03.reg2mem, !insn.addr !134
  store i64 %7, i64* %rcx.02.reg2mem, !insn.addr !134
  br i1 %9, label %dec_label_pc_1729, label %dec_label_pc_1717, !insn.addr !134

dec_label_pc_1729:                                ; preds = %dec_label_pc_1717, %dec_label_pc_16f0
  ret void, !insn.addr !140

; uselistorder directives
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1717, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1740:
  %0 = alloca i32
  %stack_var_-57.0.reg2mem = alloca i8, !insn.addr !141
  %1 = load i32, i32* %0
  %dst_-56 = alloca [1 x i8], align 1
  %src_-18 = alloca [1 x i8], align 1
  store [1 x i8] c"H", [1 x i8]* %src_-18, align 1, !insn.addr !142
  %2 = bitcast [1 x i8]* %dst_-56 to i64*, !insn.addr !143
  %3 = call i64* @memset(i64* nonnull %2, i32 0, i32 32), !insn.addr !143
  %4 = getelementptr inbounds [1 x i8], [1 x i8]* %dst_-56, i64 0, i64 0, !insn.addr !144
  %5 = bitcast [1 x i8]* %src_-18 to i32*, !insn.addr !144
  call void @param_asm_multi_insn(i8* nonnull %4, i32* nonnull %5, i64 9), !insn.addr !144
  %6 = load i8, i8* %4, align 1, !insn.addr !145
  %7 = icmp eq i8 %6, 72, !insn.addr !146
  %8 = icmp eq i1 %7, false, !insn.addr !147
  store i8 trunc (i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)) to i8), i8* %stack_var_-57.0.reg2mem, !insn.addr !147
  br i1 %8, label %dec_label_pc_179f, label %dec_label_pc_1792, !insn.addr !147

dec_label_pc_1792:                                ; preds = %dec_label_pc_1740
  %9 = zext i32 %1 to i64, !insn.addr !148
  %sext = mul i64 %9, 72057594037927936
  %10 = ashr exact i64 %sext, 56, !insn.addr !148
  %11 = trunc i64 %10 to i32, !insn.addr !149
  %12 = icmp eq i32 %11, 111, !insn.addr !149
  %13 = zext i1 %12 to i8, !insn.addr !150
  store i8 %13, i8* %stack_var_-57.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_179f, !insn.addr !151

dec_label_pc_179f:                                ; preds = %dec_label_pc_1792, %dec_label_pc_1740
  %stack_var_-57.0.reload = load i8, i8* %stack_var_-57.0.reg2mem
  %14 = urem i8 %stack_var_-57.0.reload, 2, !insn.addr !152
  %15 = icmp eq i8 %14, 0, !insn.addr !152
  %16 = icmp eq i1 %15, false, !insn.addr !153
  %17 = select i1 %16, i32 42, i32 -1, !insn.addr !153
  ret i32 %17, !insn.addr !154

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
}

define i32 @param_asm_simd(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_17c0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !155
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !155
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !156
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !156
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !157
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !158
  %8 = sext i64 %7 to i128, !insn.addr !158
  %9 = bitcast i32* %result to i128*, !insn.addr !158
  store i128 %8, i128* %9, align 8, !insn.addr !158
  ret i32 0, !insn.addr !159
}

define i32 @param_simd_intrinsics(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_17f0:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %vec_sum_-168 = alloca [1 x i64], align 8
  %vec_b_-152 = alloca [1 x i64], align 8
  %vec_a_-136 = alloca [1 x i64], align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !160
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !160
  %3 = call i64 @__asm_movdqa.2(i128 %2), !insn.addr !161
  %4 = insertvalue [1 x i64] undef, i64 %3, 0, !insn.addr !161
  store [1 x i64] %4, [1 x i64]* %vec_a_-136, align 8, !insn.addr !161
  %5 = bitcast i64* %rsi to i128*
  %6 = load i128, i128* %5, align 8, !insn.addr !162
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !162
  %8 = call i64 @__asm_movdqa.2(i128 %7), !insn.addr !163
  %9 = insertvalue [1 x i64] undef, i64 %8, 0, !insn.addr !163
  store [1 x i64] %9, [1 x i64]* %vec_b_-152, align 8, !insn.addr !163
  %10 = bitcast [1 x i64]* %vec_a_-136 to i128*, !insn.addr !164
  %11 = load i128, i128* %10, align 8, !insn.addr !164
  %12 = call i128 @__asm_movdqa(i128 %11), !insn.addr !164
  %13 = bitcast [1 x i64]* %vec_b_-152 to i128*, !insn.addr !165
  %14 = load i128, i128* %13, align 8, !insn.addr !165
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !165
  %16 = call i64 @__asm_movdqa.2(i128 %12), !insn.addr !166
  %17 = sext i64 %16 to i128, !insn.addr !166
  %18 = call i64 @__asm_movdqa.2(i128 %15), !insn.addr !167
  %19 = sext i64 %18 to i128, !insn.addr !167
  %20 = call i128 @__asm_movdqa(i128 %17), !insn.addr !168
  %21 = call i128 @__asm_movdqa(i128 %19), !insn.addr !169
  %22 = call i128 @__asm_paddd(i128 %20, i128 %21), !insn.addr !170
  %23 = call i64 @__asm_movdqa.2(i128 %22), !insn.addr !171
  %24 = insertvalue [1 x i64] undef, i64 %23, 0, !insn.addr !171
  store [1 x i64] %24, [1 x i64]* %vec_sum_-168, align 8, !insn.addr !171
  %25 = bitcast [1 x i64]* %vec_sum_-168 to i128*, !insn.addr !172
  %26 = load i128, i128* %25, align 8, !insn.addr !172
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !172
  %28 = call i64 @__asm_movdqa.2(i128 %27), !insn.addr !173
  %29 = sext i64 %28 to i128, !insn.addr !174
  %30 = call i128 @__asm_movdqa(i128 %29), !insn.addr !174
  %31 = call i64 @__asm_movdqa.2(i128 %30), !insn.addr !175
  %32 = sext i64 %31 to i128, !insn.addr !175
  %33 = bitcast i32* %result to i128*, !insn.addr !175
  store i128 %32, i128* %33, align 8, !insn.addr !175
  ret i32 0, !insn.addr !176
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1890:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %result_-48 = alloca [1 x i32], align 4
  %2 = load i32, i32* %0
  %b_-40 = alloca [1 x i32], align 4
  %a_-24 = alloca [1 x i32], align 4
  %stack_var_-56 = alloca i32, align 4
  store [1 x i32] [i32 1], [1 x i32]* %a_-24, align 4, !insn.addr !177
  store [1 x i32] [i32 5], [1 x i32]* %b_-40, align 4, !insn.addr !178
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %a_-24, i64 0, i64 0, !insn.addr !179
  %4 = getelementptr inbounds [1 x i32], [1 x i32]* %b_-40, i64 0, i64 0, !insn.addr !179
  %5 = call i32 @param_asm_simd(i32* nonnull %3, i32* nonnull %4, i32* nonnull %stack_var_-56), !insn.addr !179
  %6 = load i32, i32* %stack_var_-56, align 4, !insn.addr !180
  %7 = getelementptr inbounds [1 x i32], [1 x i32]* %result_-48, i64 0, i64 0, !insn.addr !181
  %8 = load i32, i32* %7, align 4, !insn.addr !181
  %9 = add i32 %2, %1, !insn.addr !182
  %10 = add i32 %9, %6, !insn.addr !181
  %11 = add i32 %10, %8, !insn.addr !183
  ret i32 %11, !insn.addr !184

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_asm_atomic(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_18f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !185
  store i32 %3, i32* %counter, align 4, !insn.addr !185
  ret i32 %3, !insn.addr !186
}

define i32 @param_atomic_c11(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_1920:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !187
  store i32 %3, i32* %counter, align 4, !insn.addr !187
  ret i32 %3, !insn.addr !188
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1950:
  %counter_-12 = alloca i32, align 4
  store i32 10, i32* %counter_-12, align 4, !insn.addr !189
  %0 = call i32 @param_asm_atomic(i32* nonnull %counter_-12, i32 5), !insn.addr !190
  %1 = load i32, i32* %counter_-12, align 4, !insn.addr !191
  %2 = add i32 %1, %0, !insn.addr !192
  ret i32 %2, !insn.addr !193

; uselistorder directives
  uselistorder i32* %counter_-12, { 1, 0, 2 }
  uselistorder i32 5, { 0, 1, 2, 3, 4, 5, 9, 6, 7, 8 }
}

define i32 @param_dynamic_code(i32 %x) local_unnamed_addr {
dec_label_pc_1980:
  %storemerge.reg2mem = alloca i32, !insn.addr !194
  %code_-38 = alloca [1 x i8], align 4
  %0 = call i32 @sysconf(i32 30), !insn.addr !195
  %1 = call i64* @mmap(i64* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !196
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !197
  %3 = icmp eq i1 %2, false, !insn.addr !198
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !198
  br i1 %3, label %dec_label_pc_19db, label %dec_label_pc_1a27, !insn.addr !198

dec_label_pc_19db:                                ; preds = %dec_label_pc_1980
  store [1 x i8] c"\89", [1 x i8]* %code_-38, align 4, !insn.addr !199
  %4 = ptrtoint i64* %1 to i64, !insn.addr !200
  %5 = bitcast [1 x i8]* %code_-38 to i32*, !insn.addr !201
  %6 = load i32, i32* %5, align 4, !insn.addr !201
  %7 = bitcast i64* %1 to i32*, !insn.addr !202
  store i32 %6, i32* %7, align 4, !insn.addr !202
  %8 = add i64 %4, 4, !insn.addr !203
  %9 = inttoptr i64 %8 to i16*, !insn.addr !203
  store i16 -15611, i16* %9, align 2, !insn.addr !203
  %10 = trunc i64 %4 to i32, !insn.addr !204
  %11 = call i32 @munmap(i64* %1, i32 %0), !insn.addr !205
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !206
  br label %dec_label_pc_1a27, !insn.addr !206

dec_label_pc_1a27:                                ; preds = %dec_label_pc_1980, %dec_label_pc_19db
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !207

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 1, 0 }
  uselistorder label %dec_label_pc_1a27, { 1, 0 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_1a30:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !208
  %0 = call i32 @sysconf(i32 30), !insn.addr !209
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !210
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !211
  %3 = icmp eq i1 %2, false, !insn.addr !212
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !212
  br i1 %3, label %dec_label_pc_1a88, label %dec_label_pc_1b28, !insn.addr !212

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a30
  %4 = bitcast i64* %1 to i32*, !insn.addr !213
  store i32 42, i32* %4, align 4, !insn.addr !214
  %5 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !215
  %6 = icmp eq i32 %5, 0, !insn.addr !216
  br i1 %6, label %dec_label_pc_1ace, label %dec_label_pc_1ab5, !insn.addr !217

dec_label_pc_1ab5:                                ; preds = %dec_label_pc_1a88
  %7 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !218
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !219
  br label %dec_label_pc_1b28, !insn.addr !219

dec_label_pc_1ace:                                ; preds = %dec_label_pc_1a88
  %8 = load i32, i32* %4, align 4, !insn.addr !220
  %9 = call i32 @mprotect(i64* nonnull %1, i32 %0, i32 3), !insn.addr !221
  %10 = icmp eq i32 %9, 0, !insn.addr !222
  br i1 %10, label %dec_label_pc_1b0b, label %dec_label_pc_1af2, !insn.addr !223

dec_label_pc_1af2:                                ; preds = %dec_label_pc_1ace
  %11 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !224
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !225
  br label %dec_label_pc_1b28, !insn.addr !225

dec_label_pc_1b0b:                                ; preds = %dec_label_pc_1ace
  store i32 100, i32* %4, align 4, !insn.addr !226
  %12 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !227
  store i32 %8, i32* %stack_var_-12.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_1b28, !insn.addr !228

dec_label_pc_1b28:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1b0b, %dec_label_pc_1af2, %dec_label_pc_1ab5
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !229

; uselistorder directives
  uselistorder i32* %4, { 2, 1, 0 }
  uselistorder i64* %1, { 0, 1, 2, 3, 5, 4, 6 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 100, { 3, 0, 1, 2 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 0, 1, 2, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i1 false, { 2, 3, 4, 5, 1, 0 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 9, 10, 5, 6, 2, 3, 7, 0, 1, 4, 8 }
  uselistorder i32 -1, { 0, 2, 1, 3, 4 }
  uselistorder label %dec_label_pc_1b28, { 1, 2, 3, 0 }
}

define i32 @param_clobber_importance(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1b40:
  %0 = add i32 %b, %a, !insn.addr !230
  %1 = mul i32 %0, 2, !insn.addr !231
  ret i32 %1, !insn.addr !232
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1b80:
  %0 = call i32 @param_dynamic_code(i32 10), !insn.addr !233
  %1 = call i32 @param_memory_protection(), !insn.addr !234
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !235
  %3 = icmp eq i32 %0, 15, !insn.addr !236
  %4 = icmp eq i32 %1, 42, !insn.addr !237
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i32 %2, 20, !insn.addr !238
  %7 = icmp eq i1 %5, %6
  %storemerge = select i1 %7, i32 77, i32 %0
  ret i32 %storemerge, !insn.addr !239

; uselistorder directives
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder i32 10, { 0, 5, 6, 1, 2, 3, 4 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = load i32, i32* inttoptr (i64 16480 to i32*), align 32, !insn.addr !240
  %1 = add i32 %0, 50, !insn.addr !240
  ret i32 %1, !insn.addr !241
}

define void @test_asm_features() local_unnamed_addr {
dec_label_pc_1c20:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2213 to i8*)), !insn.addr !242
  %1 = call i32 @call_asm_basic(), !insn.addr !243
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_223e to i8*)), !insn.addr !244
  %3 = call i32 @call_asm_clobber(), !insn.addr !245
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_225a to i8*)), !insn.addr !246
  %5 = call i32 @call_asm_multi_insn(), !insn.addr !247
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2276 to i8*)), !insn.addr !248
  %7 = call i32 @call_asm_simd(), !insn.addr !249
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2292 to i8*)), !insn.addr !250
  %9 = call i32 @call_asm_atomic(), !insn.addr !251
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22ae to i8*)), !insn.addr !252
  %11 = call i32 @call_asm_privileged(), !insn.addr !253
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22ca to i8*)), !insn.addr !254
  ret void, !insn.addr !255

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 0, 19, 15, 20, 16, 18, 11, 5, 3, 4, 17, 14, 2, 1, 13, 8, 12, 6, 7, 10, 9, 21 }
  uselistorder i64 0, { 42, 43, 44, 45, 46, 47, 48, 49, 71, 3, 0, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 69, 2, 1, 70, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 68 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1cc0:
  call void @test_preprocessing_features(), !insn.addr !256
  call void @test_asm_features(), !insn.addr !257
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !258
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1ce4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !259

; uselistorder directives
  uselistorder i32 1, { 3, 16, 6, 23, 7, 24, 2, 1, 21, 27, 26, 25, 5, 30, 29, 28, 20, 18, 19, 17, 32, 31, 8, 4, 11, 10, 9, 33, 14, 13, 12, 35, 0, 34, 15, 22 }
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
!29 = !{i64 4526}
!30 = !{i64 4555}
!31 = !{i64 4569}
!32 = !{i64 4575}
!33 = !{i64 4589}
!34 = !{i64 4602}
!35 = !{i64 4631}
!36 = !{i64 4634}
!37 = !{i64 4654}
!38 = !{i64 4660}
!39 = !{i64 4685}
!40 = !{i64 4689}
!41 = !{i64 4699}
!42 = !{i64 4713}
!43 = !{i64 4719}
!44 = !{i64 4727}
!45 = !{i64 4731}
!46 = !{i64 4737}
!47 = !{i64 4761}
!48 = !{i64 4767}
!49 = !{i64 4823}
!50 = !{i64 4827}
!51 = !{i64 4841}
!52 = !{i64 4847}
!53 = !{i64 4896}
!54 = !{i64 4909}
!55 = !{i64 4921}
!56 = !{i64 4932}
!57 = !{i64 4944}
!58 = !{i64 4952}
!59 = !{i64 4966}
!60 = !{i64 4972}
!61 = !{i64 4983}
!62 = !{i64 4988}
!63 = !{i64 5006}
!64 = !{i64 5017}
!65 = !{i64 5026}
!66 = !{i64 5040}
!67 = !{i64 5065}
!68 = !{i64 5071}
!69 = !{i64 5089}
!70 = !{i64 5092}
!71 = !{i64 5095}
!72 = !{i64 5107}
!73 = !{i64 5123}
!74 = !{i64 5131}
!75 = !{i64 5155}
!76 = !{i64 5161}
!77 = !{i64 5178}
!78 = !{i64 5187}
!79 = !{i64 5196}
!80 = !{i64 5200}
!81 = !{i64 5225}
!82 = !{i64 5231}
!83 = !{i64 5241}
!84 = !{i64 5247}
!85 = !{i64 5255}
!86 = !{i64 5260}
!87 = !{i64 5268}
!88 = !{i64 5274}
!89 = !{i64 5370}
!90 = !{i64 5408}
!91 = !{i64 5416}
!92 = !{i64 5433}
!93 = !{i64 5439}
!94 = !{i64 5453}
!95 = !{i64 5458}
!96 = !{i64 5474}
!97 = !{i64 5479}
!98 = !{i64 5495}
!99 = !{i64 5500}
!100 = !{i64 5516}
!101 = !{i64 5521}
!102 = !{i64 5537}
!103 = !{i64 5542}
!104 = !{i64 5558}
!105 = !{i64 5563}
!106 = !{i64 5579}
!107 = !{i64 5584}
!108 = !{i64 5600}
!109 = !{i64 5605}
!110 = !{i64 5621}
!111 = !{i64 5626}
!112 = !{i64 5642}
!113 = !{i64 5647}
!114 = !{i64 5663}
!115 = !{i64 5668}
!116 = !{i64 5684}
!117 = !{i64 5690}
!118 = !{i64 5708}
!119 = !{i64 5726}
!120 = !{i64 5737}
!121 = !{i64 5743}
!122 = !{i64 5744}
!123 = !{i64 5762}
!124 = !{i64 5766}
!125 = !{i64 5775}
!126 = !{i64 5781}
!127 = !{i64 5784}
!128 = !{i64 5806}
!129 = !{i64 5823}
!130 = !{i64 5856}
!131 = !{i64 5866}
!132 = !{i64 5872}
!133 = !{i64 5901}
!134 = !{i64 5905}
!135 = !{i64 5911}
!136 = !{i64 5913}
!137 = !{i64 5915}
!138 = !{i64 5918}
!139 = !{i64 5921}
!140 = !{i64 5950}
!141 = !{i64 5952}
!142 = !{i64 5967}
!143 = !{i64 5993}
!144 = !{i64 6011}
!145 = !{i64 6016}
!146 = !{i64 6022}
!147 = !{i64 6028}
!148 = !{i64 6034}
!149 = !{i64 6038}
!150 = !{i64 6041}
!151 = !{i64 6044}
!152 = !{i64 6060}
!153 = !{i64 6063}
!154 = !{i64 6071}
!155 = !{i64 6108}
!156 = !{i64 6111}
!157 = !{i64 6114}
!158 = !{i64 6118}
!159 = !{i64 6124}
!160 = !{i64 6160}
!161 = !{i64 6164}
!162 = !{i64 6181}
!163 = !{i64 6185}
!164 = !{i64 6193}
!165 = !{i64 6198}
!166 = !{i64 6206}
!167 = !{i64 6211}
!168 = !{i64 6216}
!169 = !{i64 6221}
!170 = !{i64 6226}
!171 = !{i64 6230}
!172 = !{i64 6242}
!173 = !{i64 6254}
!174 = !{i64 6259}
!175 = !{i64 6268}
!176 = !{i64 6279}
!177 = !{i64 6303}
!178 = !{i64 6325}
!179 = !{i64 6352}
!180 = !{i64 6357}
!181 = !{i64 6363}
!182 = !{i64 6360}
!183 = !{i64 6366}
!184 = !{i64 6374}
!185 = !{i64 6402}
!186 = !{i64 6416}
!187 = !{i64 6456}
!188 = !{i64 6470}
!189 = !{i64 6488}
!190 = !{i64 6504}
!191 = !{i64 6512}
!192 = !{i64 6515}
!193 = !{i64 6523}
!194 = !{i64 6528}
!195 = !{i64 6544}
!196 = !{i64 6581}
!197 = !{i64 6597}
!198 = !{i64 6601}
!199 = !{i64 6625}
!200 = !{i64 6639}
!201 = !{i64 6643}
!202 = !{i64 6646}
!203 = !{i64 6652}
!204 = !{i64 6673}
!205 = !{i64 6684}
!206 = !{i64 6692}
!207 = !{i64 6703}
!208 = !{i64 6704}
!209 = !{i64 6717}
!210 = !{i64 6754}
!211 = !{i64 6770}
!212 = !{i64 6774}
!213 = !{i64 6796}
!214 = !{i64 6804}
!215 = !{i64 6823}
!216 = !{i64 6828}
!217 = !{i64 6831}
!218 = !{i64 6845}
!219 = !{i64 6857}
!220 = !{i64 6866}
!221 = !{i64 6884}
!222 = !{i64 6889}
!223 = !{i64 6892}
!224 = !{i64 6906}
!225 = !{i64 6918}
!226 = !{i64 6927}
!227 = !{i64 6941}
!228 = !{i64 6949}
!229 = !{i64 6960}
!230 = !{i64 6994}
!231 = !{i64 7025}
!232 = !{i64 7029}
!233 = !{i64 7053}
!234 = !{i64 7061}
!235 = !{i64 7079}
!236 = !{i64 7087}
!237 = !{i64 7097}
!238 = !{i64 7107}
!239 = !{i64 7143}
!240 = !{i64 7168}
!241 = !{i64 7189}
!242 = !{i64 7213}
!243 = !{i64 7218}
!244 = !{i64 7234}
!245 = !{i64 7239}
!246 = !{i64 7255}
!247 = !{i64 7260}
!248 = !{i64 7276}
!249 = !{i64 7281}
!250 = !{i64 7297}
!251 = !{i64 7302}
!252 = !{i64 7318}
!253 = !{i64 7323}
!254 = !{i64 7339}
!255 = !{i64 7345}
!256 = !{i64 7375}
!257 = !{i64 7380}
!258 = !{i64 7392}
!259 = !{i64 7408}
