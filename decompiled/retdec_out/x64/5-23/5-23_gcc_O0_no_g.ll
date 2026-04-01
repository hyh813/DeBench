source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4014 = external local_unnamed_addr global i64
@global_var_2010 = constant [12 x i8] c"Hello World\00"
@global_var_201c = constant [6 x i8] c"1.2.3\00"
@global_var_2022 = constant [4 x i8] c"155\00"
@global_var_2026 = constant [25 x i8] c"LOG: Values: %d, %d, %d\0A\00"
@global_var_203f = constant [11 x i8] c"src/5-23.c\00"
@global_var_22f0 = constant [21 x i8] c"param_builtin_macros\00"
@global_var_204a = constant [12 x i8] c"Jan 15 2026\00"
@global_var_2056 = constant [9 x i8] c"03:00:25\00"
@global_var_2060 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@0 = external global i32
@global_var_400 = global i1 false
@1 = internal constant [39 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\A2\84\E5\A4\84\E7\90\86\E4\B8\8E\E6\9D\A1\E4\BB\B6\E7\BC\96\E8\AF\91 ===\00"
@global_var_2090 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @1, i64 0, i64 0)
@2 = internal constant [27 x i8] c"PP-L2-01: %d (\E6\9C\9F\E6\9C\9B: 64)\0A\00"
@global_var_20b7 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"PP-L2-02: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_20d2 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@4 = internal constant [27 x i8] c"PP-L2-03: %d (\E6\9C\9F\E6\9C\9B: 32)\0A\00"
@global_var_20ed = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@5 = internal constant [31 x i8] c"PP-L2-04: %d (\E6\9C\9F\E6\9C\9B: 0xDF22)\0A\00"
@global_var_2108 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"PP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 116)\0A\00"
@global_var_2127 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"PP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 11+5+\E8\A1\8C\E5\8F\B7\E9\95\BF\E5\BA\A6)\0A\00"
@global_var_2148 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [27 x i8] c"PP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2172 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @8, i64 0, i64 0)
@9 = internal constant [27 x i8] c"PP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_218d = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @9, i64 0, i64 0)
@10 = internal constant [27 x i8] c"PP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"PP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 500)\0A\00"
@global_var_21c3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [41 x i8] c"PP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 100+\E8\A1\8C\E5\8F\B7+0+1+2)\0A\00"
@global_var_21e0 = constant i8* getelementptr inbounds ([41 x i8], [41 x i8]* @12, i64 0, i64 0)
@13 = internal constant [42 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E8\81\94\E6\B1\87\E7\BC\96\E4\B8\8E\E5\BA\95\E5\B1\82\E7\89\B9\E6\80\A7 ===\00"
@global_var_2210 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"ASM-L4-01: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_223a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"ASM-L4-02: %d (\E6\9C\9F\E6\9C\9B: 15)\0A\00"
@global_var_2256 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"ASM-L4-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2272 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"ASM-L4-04: %d (\E6\9C\9F\E6\9C\9B: 36)\0A\00"
@global_var_228e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"ASM-L4-05: %d (\E6\9C\9F\E6\9C\9B: 30)\0A\00"
@global_var_22aa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"ASM-L4-06: %d (\E6\9C\9F\E6\9C\9B: 77)\0A\00"
@global_var_22c6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

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

define void @function_10b0(i64* %d) local_unnamed_addr {
dec_label_pc_10b0:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_10c0(i8* %s) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_10d0(i8* %s) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_10e0() local_unnamed_addr {
dec_label_pc_10e0:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i64* @function_10f0(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i64* @mmap(i64* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i32 @function_1100(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1110(i64* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @munmap(i64* %addr, i32 %len), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_1120(i64* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 @mprotect(i64* %addr, i32 %len, i32 %prot), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_1130(i32 %name) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1140:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !15
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !15
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !15
  %3 = call i32 @__libc_start_main(i64 7729, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !15
  %4 = call i64 @__asm_hlt(), !insn.addr !16
  unreachable, !insn.addr !16
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1170:
  ret i64 16408, !insn.addr !17
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11a0:
  ret i64 0, !insn.addr !18
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16404 to i8*), align 4, !insn.addr !19
  %3 = icmp eq i8 %2, 0, !insn.addr !19
  %4 = icmp eq i1 %3, false, !insn.addr !20
  br i1 %4, label %dec_label_pc_1218, label %dec_label_pc_11ed, !insn.addr !20

dec_label_pc_11ed:                                ; preds = %dec_label_pc_11e0
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !21
  %6 = icmp eq i64 %5, 0, !insn.addr !21
  br i1 %6, label %dec_label_pc_1207, label %dec_label_pc_11fb, !insn.addr !22

dec_label_pc_11fb:                                ; preds = %dec_label_pc_11ed
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !23
  %8 = inttoptr i64 %7 to i64*, !insn.addr !24
  call void @__cxa_finalize(i64* %8), !insn.addr !24
  br label %dec_label_pc_1207, !insn.addr !24

dec_label_pc_1207:                                ; preds = %dec_label_pc_11fb, %dec_label_pc_11ed
  %9 = call i64 @deregister_tm_clones(), !insn.addr !25
  store i8 1, i8* bitcast (i64* @global_var_4014 to i8*), align 8, !insn.addr !26
  ret i64 %9, !insn.addr !27

dec_label_pc_1218:                                ; preds = %dec_label_pc_11e0
  ret i64 %1, !insn.addr !28
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i64 @register_tm_clones(), !insn.addr !29
  ret i64 %0, !insn.addr !29
}

define i64 @param_macro_constants(i64 %arg1) local_unnamed_addr {
dec_label_pc_1229:
  %0 = trunc i64 %arg1 to i32, !insn.addr !30
  %1 = icmp sgt i32 %0, ptrtoint (i1* @global_var_400 to i32), !insn.addr !31
  %. = select i1 %1, i64 64, i64 512
  ret i64 %., !insn.addr !32
}

define i64 @call_macro_constants() local_unnamed_addr {
dec_label_pc_124b:
  %0 = call i64 @param_macro_constants(i64 2048), !insn.addr !33
  ret i64 %0, !insn.addr !34
}

define i64 @param_macro_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_125f:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !35
  %1 = mul nsw i64 %0, %0, !insn.addr !35
  %2 = trunc i64 %arg2 to i32, !insn.addr !36
  %3 = trunc i64 %arg1 to i32, !insn.addr !36
  %4 = sub i32 %2, %3, !insn.addr !36
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !36
  %7 = xor i32 %4, %2, !insn.addr !36
  %8 = and i32 %7, %6, !insn.addr !36
  %9 = icmp slt i32 %8, 0, !insn.addr !36
  %10 = icmp slt i32 %4, 0, !insn.addr !36
  %11 = icmp eq i1 %10, %9, !insn.addr !37
  %.v = select i1 %11, i64 %arg2, i64 %arg1
  %12 = add i64 %.v, %1, !insn.addr !38
  %13 = and i64 %12, 4294967295, !insn.addr !38
  ret i64 %13, !insn.addr !39

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 2, 1, 3, 0 }
}

define i64 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1284:
  %0 = call i64 @param_macro_functions(i64 5, i64 3), !insn.addr !40
  ret i64 %0, !insn.addr !41
}

define i64 @param_conditional_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_129d:
  %0 = mul i64 %arg1, 3, !insn.addr !42
  %1 = add i64 %0, 2, !insn.addr !43
  %2 = and i64 %1, 4294967295, !insn.addr !44
  ret i64 %2, !insn.addr !45
}

define i64 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_12c2:
  %0 = call i64 @param_conditional_compile(i64 10), !insn.addr !46
  ret i64 %0, !insn.addr !47
}

define i64 @param_multi_branch_compile(i64 %arg1) local_unnamed_addr {
dec_label_pc_12d6:
  %0 = mul i64 %arg1, 5, !insn.addr !48
  %1 = add i64 %0, 57072, !insn.addr !49
  %2 = and i64 %1, 4294967295, !insn.addr !49
  ret i64 %2, !insn.addr !50
}

define i64 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_12f2:
  %0 = call i64 @param_multi_branch_compile(i64 10), !insn.addr !51
  ret i64 %0, !insn.addr !52
}

define i64 @param_macro_recursion(i64 %arg1) local_unnamed_addr {
dec_label_pc_1306:
  %0 = add i64 %arg1, 16, !insn.addr !53
  %1 = and i64 %0, 4294967295, !insn.addr !53
  ret i64 %1, !insn.addr !54
}

define i64 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1319:
  %0 = call i64 @param_macro_recursion(i64 100), !insn.addr !55
  ret i64 %0, !insn.addr !56
}

define i64 @param_stringize(i64 %arg1) local_unnamed_addr {
dec_label_pc_132d:
  %0 = call i32 @strlen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2010, i64 0, i64 0)), !insn.addr !57
  %1 = call i32 @strlen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_201c, i64 0, i64 0)), !insn.addr !58
  %2 = add i32 %1, %0, !insn.addr !59
  %3 = call i32 @strlen(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_2022, i64 0, i64 0)), !insn.addr !60
  %4 = add i32 %2, %3, !insn.addr !61
  %5 = zext i32 %4 to i64, !insn.addr !61
  ret i64 %5, !insn.addr !62

; uselistorder directives
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i64 @call_stringize() local_unnamed_addr {
dec_label_pc_138e:
  %0 = call i64 @param_stringize(i64 0), !insn.addr !63
  ret i64 %0, !insn.addr !64
}

define i64 @my_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_13a2:
  %0 = mul i64 %arg1, 10, !insn.addr !65
  %1 = and i64 %0, 4294967294, !insn.addr !65
  ret i64 %1, !insn.addr !66
}

define i64 @param_token_paste(i64 %arg1) local_unnamed_addr {
dec_label_pc_13bb:
  %0 = and i64 %arg1, 4294967295, !insn.addr !67
  %1 = call i64 @my_func(i64 %0), !insn.addr !68
  %2 = add i64 %arg1, 5, !insn.addr !69
  %3 = add i64 %2, %1, !insn.addr !70
  %4 = and i64 %3, 4294967295, !insn.addr !71
  ret i64 %4, !insn.addr !72
}

define i64 @call_token_paste() local_unnamed_addr {
dec_label_pc_13eb:
  %0 = call i64 @param_token_paste(i64 5), !insn.addr !73
  ret i64 %0, !insn.addr !74
}

define i64 @param_variadic_macro(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13ff:
  %rax.0.reg2mem = alloca i64, !insn.addr !75
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !76
  %1 = and i64 %arg3, 4294967295, !insn.addr !77
  %2 = and i64 %arg2, 4294967295, !insn.addr !78
  %3 = and i64 %arg1, 4294967295, !insn.addr !79
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2026, i64 0, i64 0), i64 %3, i64 %2, i64 %1), !insn.addr !80
  %5 = add i64 %arg1, 50, !insn.addr !81
  %6 = and i64 %5, 4294967295, !insn.addr !81
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !82
  %8 = icmp eq i64 %0, %7, !insn.addr !82
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !83
  br i1 %8, label %dec_label_pc_1470, label %dec_label_pc_146b, !insn.addr !83

dec_label_pc_146b:                                ; preds = %dec_label_pc_13ff
  call void @__stack_chk_fail(), !insn.addr !84
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_1470, !insn.addr !84

dec_label_pc_1470:                                ; preds = %dec_label_pc_146b, %dec_label_pc_13ff
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !85
}

define i64 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1472:
  %0 = call i64 @param_variadic_macro(i64 10, i64 20, i64 30), !insn.addr !86
  ret i64 %0, !insn.addr !87
}

define i64 @param_macro_override(i64 %arg1) local_unnamed_addr {
dec_label_pc_1490:
  %0 = add i64 %arg1, 1, !insn.addr !88
  %1 = mul i64 %arg1, 2, !insn.addr !89
  %2 = add i64 %0, %1, !insn.addr !90
  %3 = and i64 %2, 4294967295, !insn.addr !90
  ret i64 %3, !insn.addr !91
}

define i64 @call_macro_override() local_unnamed_addr {
dec_label_pc_14b6:
  %0 = call i64 @param_macro_override(i64 5), !insn.addr !92
  ret i64 %0, !insn.addr !93
}

define i64 @header_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_14ca:
  %0 = mul i64 %arg1, 100, !insn.addr !94
  %1 = and i64 %0, 4294967292, !insn.addr !94
  ret i64 %1, !insn.addr !95
}

define i64 @param_include_guard() local_unnamed_addr {
dec_label_pc_14dd:
  %0 = call i64 @header_func(i64 5), !insn.addr !96
  ret i64 %0, !insn.addr !97
}

define i64 @call_include_guard() local_unnamed_addr {
dec_label_pc_14f1:
  %0 = call i64 @param_include_guard(), !insn.addr !98
  ret i64 %0, !insn.addr !99
}

define i64 @param_builtin_macros(i64 %arg1) local_unnamed_addr {
dec_label_pc_1505:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2060, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_203f, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22f0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_204a, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2056, i64 0, i64 0)), !insn.addr !100
  %1 = add i64 %arg1, 282, !insn.addr !101
  %2 = and i64 %1, 4294967295, !insn.addr !101
  ret i64 %2, !insn.addr !102
}

define i64 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_15a5:
  %0 = call i64 @param_builtin_macros(i64 100), !insn.addr !103
  ret i64 %0, !insn.addr !104

; uselistorder directives
  uselistorder i64 100, { 1, 0, 2 }
}

define i64 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_15b9:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2090 to i8*)), !insn.addr !105
  %1 = call i64 @call_macro_constants(), !insn.addr !106
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b7 to i8*)), !insn.addr !107
  %3 = call i64 @call_macro_functions(), !insn.addr !108
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d2 to i8*)), !insn.addr !109
  %5 = call i64 @call_conditional_compile(), !insn.addr !110
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ed to i8*)), !insn.addr !111
  %7 = call i64 @call_multi_branch_compile(), !insn.addr !112
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2108 to i8*)), !insn.addr !113
  %9 = call i64 @call_macro_recursion(), !insn.addr !114
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2127 to i8*)), !insn.addr !115
  %11 = call i64 @call_stringize(), !insn.addr !116
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2148 to i8*)), !insn.addr !117
  %13 = call i64 @call_token_paste(), !insn.addr !118
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2172 to i8*)), !insn.addr !119
  %15 = call i64 @call_variadic_macro(), !insn.addr !120
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218d to i8*)), !insn.addr !121
  %17 = call i64 @call_macro_override(), !insn.addr !122
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !123
  %19 = call i64 @call_include_guard(), !insn.addr !124
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c3 to i8*)), !insn.addr !125
  %21 = call i64 @call_builtin_macros(), !insn.addr !126
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e0 to i8*)), !insn.addr !127
  %23 = sext i32 %22 to i64, !insn.addr !127
  ret i64 %23, !insn.addr !128
}

define i64 @param_asm_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_1733:
  %0 = add i64 %arg1, 10, !insn.addr !129
  %1 = and i64 %0, 4294967295, !insn.addr !130
  ret i64 %1, !insn.addr !131
}

define i64 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i64 @param_asm_basic(i64 5), !insn.addr !132
  ret i64 %0, !insn.addr !133
}

define i64 @param_asm_clobber(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1764:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !134
  %rax.01.reg2mem = alloca i32, !insn.addr !134
  %storemerge2.reg2mem = alloca i64, !insn.addr !134
  %0 = ptrtoint i64* %arg1 to i64
  %1 = and i64 %arg2, 4294967295, !insn.addr !135
  %2 = icmp eq i64 %1, 0, !insn.addr !136
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !136
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !136
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !136
  br i1 %2, label %dec_label_pc_1790, label %dec_label_pc_1789, !insn.addr !136

dec_label_pc_1789:                                ; preds = %dec_label_pc_1764, %dec_label_pc_1789
  %rax.01.reload = load i32, i32* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %3 = mul i64 %storemerge2.reload, 4, !insn.addr !137
  %4 = add i64 %3, %0, !insn.addr !137
  %5 = inttoptr i64 %4 to i32*, !insn.addr !137
  %6 = load i32, i32* %5, align 4, !insn.addr !137
  %7 = add i32 %6, %rax.01.reload, !insn.addr !137
  %8 = add nuw nsw i64 %storemerge2.reload, 1, !insn.addr !138
  %9 = and i64 %8, 4294967295, !insn.addr !138
  %10 = icmp ult i64 %9, %1, !insn.addr !136
  store i64 %9, i64* %storemerge2.reg2mem, !insn.addr !136
  store i32 %7, i32* %rax.01.reg2mem, !insn.addr !136
  br i1 %10, label %dec_label_pc_1789, label %dec_label_pc_1785.dec_label_pc_1790_crit_edge, !insn.addr !136

dec_label_pc_1785.dec_label_pc_1790_crit_edge:    ; preds = %dec_label_pc_1789
  %11 = zext i32 %7 to i64, !insn.addr !137
  store i64 %11, i64* %rax.0.lcssa.reg2mem
  br label %dec_label_pc_1790

dec_label_pc_1790:                                ; preds = %dec_label_pc_1764, %dec_label_pc_1785.dec_label_pc_1790_crit_edge
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !139

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1790, { 1, 0 }
  uselistorder label %dec_label_pc_1789, { 1, 0 }
}

define i64 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_179a:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !140
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-40 = alloca i64, align 8
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !141
  store i64 1, i64* %stack_var_-40, align 8, !insn.addr !142
  %4 = call i64 @param_asm_clobber(i64* nonnull %stack_var_-40, i64 5, i64 %1, i64 %2), !insn.addr !143
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !144
  %6 = icmp eq i64 %3, %5, !insn.addr !144
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !145
  br i1 %6, label %dec_label_pc_17fd, label %dec_label_pc_17f8, !insn.addr !145

dec_label_pc_17f8:                                ; preds = %dec_label_pc_179a
  call void @__stack_chk_fail(), !insn.addr !146
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !146
  br label %dec_label_pc_17fd, !insn.addr !146

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17f8, %dec_label_pc_179a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !147

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @param_asm_multi_insn(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_17ff:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !148
  %rax.01.reg2mem = alloca i64, !insn.addr !148
  %rcx.02.reg2mem = alloca i64, !insn.addr !148
  %rsi.03.reg2mem = alloca i64, !insn.addr !148
  %storemerge4.reg2mem = alloca i64, !insn.addr !148
  %0 = icmp eq i64 %arg3, 0, !insn.addr !149
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !150
  br i1 %0, label %dec_label_pc_183e, label %dec_label_pc_182f.lr.ph, !insn.addr !150

dec_label_pc_182f.lr.ph:                          ; preds = %dec_label_pc_17ff
  %1 = ptrtoint i64* %arg1 to i64
  %2 = ptrtoint i64* %arg2 to i64
  store i64 %arg3, i64* %storemerge4.reg2mem
  store i64 %1, i64* %rsi.03.reg2mem
  store i64 %2, i64* %rcx.02.reg2mem
  store i64 %arg3, i64* %rax.01.reg2mem
  br label %dec_label_pc_182f

dec_label_pc_182f:                                ; preds = %dec_label_pc_182f.lr.ph, %dec_label_pc_182f
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %3 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !151
  %4 = load i8, i8* %3, align 1, !insn.addr !151
  %5 = zext i8 %4 to i64, !insn.addr !151
  %6 = and i64 %rax.01.reload, -256, !insn.addr !151
  %7 = or i64 %6, %5, !insn.addr !151
  %8 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !152
  store i8 %4, i8* %8, align 1, !insn.addr !152
  %9 = add i64 %rsi.03.reload, 1, !insn.addr !153
  %10 = add i64 %rcx.02.reload, 1, !insn.addr !154
  %11 = add i64 %storemerge4.reload, -1, !insn.addr !155
  %12 = icmp eq i64 %11, 0, !insn.addr !149
  store i64 %11, i64* %storemerge4.reg2mem, !insn.addr !150
  store i64 %9, i64* %rsi.03.reg2mem, !insn.addr !150
  store i64 %10, i64* %rcx.02.reg2mem, !insn.addr !150
  store i64 %7, i64* %rax.01.reg2mem, !insn.addr !150
  store i64 %7, i64* %rax.0.lcssa.reg2mem, !insn.addr !150
  br i1 %12, label %dec_label_pc_183e, label %dec_label_pc_182f, !insn.addr !150

dec_label_pc_183e:                                ; preds = %dec_label_pc_182f, %dec_label_pc_17ff
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !156

; uselistorder directives
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_182f, { 1, 0 }
}

define i64 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_184d:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i64, !insn.addr !157
  %1 = load i8, i8* %0
  %stack_var_-56 = alloca i8, align 1
  %stack_var_-66 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !158
  store i64 5999111841566713160, i64* %stack_var_-66, align 8, !insn.addr !159
  store i8 0, i8* %stack_var_-56, align 1, !insn.addr !160
  %3 = bitcast i8* %stack_var_-56 to i64*, !insn.addr !161
  %4 = call i64 @param_asm_multi_insn(i64* nonnull %3, i64* nonnull %stack_var_-66, i64 9), !insn.addr !161
  %5 = load i8, i8* %stack_var_-56, align 1, !insn.addr !162
  %6 = icmp eq i8 %5, 72, !insn.addr !163
  %7 = icmp eq i8 %1, 111, !insn.addr !164
  %8 = icmp eq i1 %7, %6
  %storemerge = select i1 %8, i64 42, i64 4294967295
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !165
  %10 = icmp eq i64 %2, %9, !insn.addr !165
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !166
  br i1 %10, label %dec_label_pc_18e4, label %dec_label_pc_18df, !insn.addr !166

dec_label_pc_18df:                                ; preds = %dec_label_pc_184d
  call void @__stack_chk_fail(), !insn.addr !167
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_18e4, !insn.addr !167

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18df, %dec_label_pc_184d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !168

; uselistorder directives
  uselistorder i8* %stack_var_-56, { 1, 2, 0 }
}

define i64 @param_asm_simd(i64* %arg1, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_18e6:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !169
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !169
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !170
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !170
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !171
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !172
  %8 = sext i64 %7 to i128, !insn.addr !172
  %9 = bitcast i64* %arg3 to i128*, !insn.addr !172
  store i128 %8, i128* %9, align 8, !insn.addr !172
  ret i64 0, !insn.addr !173
}

define i64 @param_simd_intrinsics(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_191a:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !174
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !174
  %3 = call i64 @__asm_movaps.1(i128 %2), !insn.addr !175
  %4 = sext i64 %3 to i128, !insn.addr !175
  %5 = bitcast i64* %rsi to i128*
  %6 = load i128, i128* %5, align 8, !insn.addr !176
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !176
  %8 = call i64 @__asm_movaps.1(i128 %7), !insn.addr !177
  %9 = sext i64 %8 to i128, !insn.addr !177
  %10 = call i128 @__asm_movdqa(i128 %4), !insn.addr !178
  %11 = call i64 @__asm_movaps.1(i128 %10), !insn.addr !179
  %12 = sext i64 %11 to i128, !insn.addr !179
  %13 = call i128 @__asm_movdqa(i128 %9), !insn.addr !180
  %14 = call i64 @__asm_movaps.1(i128 %13), !insn.addr !181
  %15 = sext i64 %14 to i128, !insn.addr !181
  %16 = call i128 @__asm_movdqa(i128 %12), !insn.addr !182
  %17 = call i128 @__asm_movdqa(i128 %15), !insn.addr !183
  %18 = call i128 @__asm_paddd(i128 %17, i128 %16), !insn.addr !184
  %19 = call i64 @__asm_movaps.1(i128 %18), !insn.addr !185
  %20 = sext i64 %19 to i128, !insn.addr !185
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !186
  %22 = call i64 @__asm_movaps.1(i128 %21), !insn.addr !187
  %23 = sext i64 %22 to i128, !insn.addr !187
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !188
  %25 = call i64 @__asm_movaps.1(i128 %24), !insn.addr !189
  %26 = sext i64 %25 to i128, !insn.addr !189
  %27 = inttoptr i64 %arg3 to i128*, !insn.addr !189
  store i128 %26, i128* %27, align 8, !insn.addr !189
  ret i64 0, !insn.addr !190
}

define i64 @call_asm_simd() local_unnamed_addr {
dec_label_pc_19b5:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !191
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !192
  store i64 1, i64* %stack_var_-72, align 8, !insn.addr !193
  store i32 5, i32* %stack_var_-56, align 4, !insn.addr !194
  %5 = bitcast i32* %stack_var_-40 to i64*, !insn.addr !195
  %6 = call i64 @param_asm_simd(i64* nonnull %stack_var_-72, i32* nonnull %stack_var_-56, i64* nonnull %5), !insn.addr !195
  %7 = load i32, i32* %stack_var_-40, align 4, !insn.addr !196
  %8 = add i32 %2, %1, !insn.addr !197
  %9 = add i32 %8, %3, !insn.addr !198
  %10 = add i32 %9, %7, !insn.addr !199
  %11 = zext i32 %10 to i64, !insn.addr !199
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !200
  %13 = icmp eq i64 %4, %12, !insn.addr !200
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !201
  br i1 %13, label %dec_label_pc_1a45, label %dec_label_pc_1a40, !insn.addr !201

dec_label_pc_1a40:                                ; preds = %dec_label_pc_19b5
  call void @__stack_chk_fail(), !insn.addr !202
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !202
  br label %dec_label_pc_1a45, !insn.addr !202

dec_label_pc_1a45:                                ; preds = %dec_label_pc_1a40, %dec_label_pc_19b5
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !203

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i64 1, { 0, 4, 5, 1, 2, 3 }
}

define i64 @param_asm_atomic(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a47:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !204
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !205
  %5 = bitcast i64* %arg1 to i32*, !insn.addr !205
  store i32 %4, i32* %5, align 4, !insn.addr !205
  %6 = zext i32 %4 to i64, !insn.addr !206
  ret i64 %6, !insn.addr !207
}

define i64 @param_atomic_c11(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a6e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !208
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, %2, !insn.addr !209
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !209
  store i32 %4, i32* %5, align 4, !insn.addr !209
  %6 = zext i32 %4 to i64, !insn.addr !210
  ret i64 %6, !insn.addr !211
}

define i64 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1a8f:
  %rax.0.reg2mem = alloca i64, !insn.addr !212
  %stack_var_-24 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !213
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !214
  %1 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !215
  %2 = call i64 @param_asm_atomic(i64* nonnull %1, i64 5), !insn.addr !215
  %3 = trunc i64 %2 to i32, !insn.addr !216
  %4 = load i32, i32* %stack_var_-24, align 4, !insn.addr !217
  %5 = add i32 %4, %3, !insn.addr !218
  %6 = zext i32 %5 to i64, !insn.addr !218
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !219
  %8 = icmp eq i64 %0, %7, !insn.addr !219
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !220
  br i1 %8, label %dec_label_pc_1ae1, label %dec_label_pc_1adc, !insn.addr !220

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1a8f
  call void @__stack_chk_fail(), !insn.addr !221
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !221
  br label %dec_label_pc_1ae1, !insn.addr !221

dec_label_pc_1ae1:                                ; preds = %dec_label_pc_1adc, %dec_label_pc_1a8f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !222

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
  uselistorder i64 5, { 2, 3, 4, 5, 6, 7, 0, 1, 8 }
}

define i64 @param_dynamic_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ae3:
  %rax.0.reg2mem = alloca i64, !insn.addr !223
  %storemerge.reg2mem = alloca i64, !insn.addr !223
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !224
  %1 = call i32 @sysconf(i32 30), !insn.addr !225
  %2 = call i64* @mmap(i64* null, i32 %1, i32 7, i32 34, i32 -1, i32 0), !insn.addr !226
  %3 = icmp eq i64* %2, inttoptr (i64 -1 to i64*), !insn.addr !227
  %4 = icmp eq i1 %3, false, !insn.addr !228
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !228
  br i1 %4, label %dec_label_pc_1b48, label %dec_label_pc_1b92, !insn.addr !228

dec_label_pc_1b48:                                ; preds = %dec_label_pc_1ae3
  %5 = ptrtoint i64* %2 to i64, !insn.addr !226
  %6 = and i64 %arg1, 4294967295
  %7 = bitcast i64* %2 to i32*, !insn.addr !229
  store i32 -1065092983, i32* %7, align 4, !insn.addr !229
  %8 = add i64 %5, 4, !insn.addr !230
  %9 = inttoptr i64 %8 to i16*, !insn.addr !230
  store i16 -15611, i16* %9, align 2, !insn.addr !230
  %10 = call i32 @munmap(i64* %2, i32 %1), !insn.addr !231
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !232
  br label %dec_label_pc_1b92, !insn.addr !232

dec_label_pc_1b92:                                ; preds = %dec_label_pc_1ae3, %dec_label_pc_1b48
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !233
  %12 = icmp eq i64 %0, %11, !insn.addr !233
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !234
  br i1 %12, label %dec_label_pc_1ba6, label %dec_label_pc_1ba1, !insn.addr !234

dec_label_pc_1ba1:                                ; preds = %dec_label_pc_1b92
  call void @__stack_chk_fail(), !insn.addr !235
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !235
  br label %dec_label_pc_1ba6, !insn.addr !235

dec_label_pc_1ba6:                                ; preds = %dec_label_pc_1ba1, %dec_label_pc_1b92
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !236

; uselistorder directives
  uselistorder i64* %2, { 0, 1, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ()* @__stack_chk_fail, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i64 4, { 1, 0 }
  uselistorder label %dec_label_pc_1b92, { 1, 0 }
}

define i64 @param_memory_protection() local_unnamed_addr {
dec_label_pc_1ba8:
  %rax.0.reg2mem = alloca i64, !insn.addr !237
  %0 = call i32 @sysconf(i32 30), !insn.addr !238
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !239
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !240
  %3 = icmp eq i1 %2, false, !insn.addr !241
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !241
  br i1 %3, label %dec_label_pc_1bfe, label %dec_label_pc_1ca5, !insn.addr !241

dec_label_pc_1bfe:                                ; preds = %dec_label_pc_1ba8
  %4 = bitcast i64* %1 to i32*, !insn.addr !242
  store i32 42, i32* %4, align 4, !insn.addr !243
  %5 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !244
  %6 = icmp eq i32 %5, 0, !insn.addr !245
  br i1 %6, label %dec_label_pc_1c46, label %dec_label_pc_1c2c, !insn.addr !246

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1bfe
  %7 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !247
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_1ca5, !insn.addr !248

dec_label_pc_1c46:                                ; preds = %dec_label_pc_1bfe
  %8 = load i32, i32* %4, align 4, !insn.addr !249
  %9 = call i32 @mprotect(i64* nonnull %1, i32 %0, i32 3), !insn.addr !250
  %10 = icmp eq i32 %9, 0, !insn.addr !251
  br i1 %10, label %dec_label_pc_1c85, label %dec_label_pc_1c6b, !insn.addr !252

dec_label_pc_1c6b:                                ; preds = %dec_label_pc_1c46
  %11 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !253
  store i64 4294967293, i64* %rax.0.reg2mem, !insn.addr !254
  br label %dec_label_pc_1ca5, !insn.addr !254

dec_label_pc_1c85:                                ; preds = %dec_label_pc_1c46
  store i32 100, i32* %4, align 4, !insn.addr !255
  %12 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !256
  %13 = zext i32 %8 to i64, !insn.addr !257
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !257
  br label %dec_label_pc_1ca5, !insn.addr !257

dec_label_pc_1ca5:                                ; preds = %dec_label_pc_1ba8, %dec_label_pc_1c85, %dec_label_pc_1c6b, %dec_label_pc_1c2c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32* %4, { 2, 1, 0 }
  uselistorder i32 %0, { 2, 1, 3, 0, 4, 5 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 3, 4, 1, 2, 0, 5, 6 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ca5, { 1, 2, 3, 0 }
}

define i64 @param_clobber_importance(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ca7:
  %0 = add i64 %arg2, %arg1, !insn.addr !259
  %1 = mul i64 %0, 2, !insn.addr !260
  %2 = and i64 %1, 4294967294, !insn.addr !260
  ret i64 %2, !insn.addr !261

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
}

define i64 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1cdd:
  %storemerge.reg2mem = alloca i64, !insn.addr !262
  %0 = call i64 @param_dynamic_code(i64 10), !insn.addr !263
  %1 = trunc i64 %0 to i32, !insn.addr !264
  %2 = call i64 @param_memory_protection(), !insn.addr !265
  %3 = call i64 @param_clobber_importance(i64 3, i64 7), !insn.addr !266
  %4 = icmp eq i32 %1, 15, !insn.addr !267
  %5 = icmp eq i1 %4, false, !insn.addr !268
  br i1 %5, label %dec_label_pc_1d2e, label %dec_label_pc_1d1b, !insn.addr !268

dec_label_pc_1d1b:                                ; preds = %dec_label_pc_1cdd
  %6 = trunc i64 %3 to i32, !insn.addr !269
  %7 = trunc i64 %2 to i32, !insn.addr !270
  %8 = icmp eq i32 %7, 42, !insn.addr !271
  %9 = icmp eq i32 %6, 20, !insn.addr !272
  %10 = icmp eq i1 %8, %9
  store i64 77, i64* %storemerge.reg2mem, !insn.addr !273
  br i1 %10, label %dec_label_pc_1d31, label %dec_label_pc_1d2e, !insn.addr !273

dec_label_pc_1d2e:                                ; preds = %dec_label_pc_1d1b, %dec_label_pc_1cdd
  %11 = and i64 %0, 4294967295, !insn.addr !274
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !274
  br label %dec_label_pc_1d31, !insn.addr !274

dec_label_pc_1d31:                                ; preds = %dec_label_pc_1d1b, %dec_label_pc_1d2e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !275

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967295, { 3, 0, 4, 1, 2, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 }
  uselistorder i1 false, { 1, 2, 3, 4, 0 }
  uselistorder i64 3, { 1, 0, 2 }
  uselistorder i64 10, { 2, 0, 3, 1, 4, 5 }
  uselistorder label %dec_label_pc_1d31, { 1, 0 }
}

define i64 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1d33:
  %0 = load i32, i32* inttoptr (i64 16400 to i32*), align 16, !insn.addr !276
  %1 = add i32 %0, 50, !insn.addr !276
  %2 = zext i32 %1 to i64, !insn.addr !277
  ret i64 %2, !insn.addr !278
}

define i64 @test_asm_features() local_unnamed_addr {
dec_label_pc_1d57:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2210 to i8*)), !insn.addr !279
  %1 = call i64 @call_asm_basic(), !insn.addr !280
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_223a to i8*)), !insn.addr !281
  %3 = call i64 @call_asm_clobber(), !insn.addr !282
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2256 to i8*)), !insn.addr !283
  %5 = call i64 @call_asm_multi_insn(), !insn.addr !284
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2272 to i8*)), !insn.addr !285
  %7 = call i64 @call_asm_simd(), !insn.addr !286
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_228e to i8*)), !insn.addr !287
  %9 = call i64 @call_asm_atomic(), !insn.addr !288
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22aa to i8*)), !insn.addr !289
  %11 = call i64 @call_asm_privileged(), !insn.addr !290
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22c6 to i8*)), !insn.addr !291
  %13 = sext i32 %12 to i64, !insn.addr !291
  ret i64 %13, !insn.addr !292

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 19 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1e31:
  %0 = call i64 @test_preprocessing_features(), !insn.addr !293
  %1 = call i64 @test_asm_features(), !insn.addr !294
  ret i64 0, !insn.addr !295

; uselistorder directives
  uselistorder i64 0, { 4, 5, 6, 67, 0, 9, 1, 2, 8, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 66, 60, 61, 62, 63, 64, 65, 68, 7, 3, 69, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1e54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !296

; uselistorder directives
  uselistorder i32 1, { 4, 7, 25, 8, 10, 9, 30, 11, 3, 2, 34, 33, 31, 12, 5, 29, 27, 28, 26, 35, 32, 13, 6, 18, 17, 16, 15, 14, 36, 19, 1, 22, 21, 20, 23, 0, 37, 24 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64* @mmap(i64*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @munmap(i64*, i32) local_unnamed_addr

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
!6 = !{i64 4276}
!7 = !{i64 4292}
!8 = !{i64 4308}
!9 = !{i64 4324}
!10 = !{i64 4340}
!11 = !{i64 4356}
!12 = !{i64 4372}
!13 = !{i64 4388}
!14 = !{i64 4404}
!15 = !{i64 4447}
!16 = !{i64 4453}
!17 = !{i64 4504}
!18 = !{i64 4568}
!19 = !{i64 4580}
!20 = !{i64 4587}
!21 = !{i64 4590}
!22 = !{i64 4601}
!23 = !{i64 4603}
!24 = !{i64 4610}
!25 = !{i64 4615}
!26 = !{i64 4620}
!27 = !{i64 4628}
!28 = !{i64 4632}
!29 = !{i64 4644}
!30 = !{i64 4657}
!31 = !{i64 4667}
!32 = !{i64 4682}
!33 = !{i64 4696}
!34 = !{i64 4702}
!35 = !{i64 4720}
!36 = !{i64 4731}
!37 = !{i64 4733}
!38 = !{i64 4736}
!39 = !{i64 4739}
!40 = !{i64 4758}
!41 = !{i64 4764}
!42 = !{i64 4789}
!43 = !{i64 4791}
!44 = !{i64 4797}
!45 = !{i64 4801}
!46 = !{i64 4815}
!47 = !{i64 4821}
!48 = !{i64 4841}
!49 = !{i64 4843}
!50 = !{i64 4849}
!51 = !{i64 4863}
!52 = !{i64 4869}
!53 = !{i64 4884}
!54 = !{i64 4888}
!55 = !{i64 4902}
!56 = !{i64 4908}
!57 = !{i64 4965}
!58 = !{i64 4979}
!59 = !{i64 4984}
!60 = !{i64 4993}
!61 = !{i64 4998}
!62 = !{i64 5005}
!63 = !{i64 5019}
!64 = !{i64 5025}
!65 = !{i64 5047}
!66 = !{i64 5050}
!67 = !{i64 5069}
!68 = !{i64 5071}
!69 = !{i64 5082}
!70 = !{i64 5091}
!71 = !{i64 5094}
!72 = !{i64 5098}
!73 = !{i64 5112}
!74 = !{i64 5118}
!75 = !{i64 5119}
!76 = !{i64 5140}
!77 = !{i64 5155}
!78 = !{i64 5158}
!79 = !{i64 5164}
!80 = !{i64 5181}
!81 = !{i64 5210}
!82 = !{i64 5216}
!83 = !{i64 5225}
!84 = !{i64 5227}
!85 = !{i64 5233}
!86 = !{i64 5257}
!87 = !{i64 5263}
!88 = !{i64 5278}
!89 = !{i64 5287}
!90 = !{i64 5298}
!91 = !{i64 5301}
!92 = !{i64 5315}
!93 = !{i64 5321}
!94 = !{i64 5336}
!95 = !{i64 5340}
!96 = !{i64 5354}
!97 = !{i64 5360}
!98 = !{i64 5374}
!99 = !{i64 5380}
!100 = !{i64 5490}
!101 = !{i64 5537}
!102 = !{i64 5540}
!103 = !{i64 5554}
!104 = !{i64 5560}
!105 = !{i64 5579}
!106 = !{i64 5589}
!107 = !{i64 5611}
!108 = !{i64 5621}
!109 = !{i64 5643}
!110 = !{i64 5653}
!111 = !{i64 5675}
!112 = !{i64 5685}
!113 = !{i64 5707}
!114 = !{i64 5717}
!115 = !{i64 5739}
!116 = !{i64 5749}
!117 = !{i64 5771}
!118 = !{i64 5781}
!119 = !{i64 5803}
!120 = !{i64 5813}
!121 = !{i64 5835}
!122 = !{i64 5845}
!123 = !{i64 5867}
!124 = !{i64 5877}
!125 = !{i64 5899}
!126 = !{i64 5909}
!127 = !{i64 5931}
!128 = !{i64 5938}
!129 = !{i64 5955}
!130 = !{i64 5963}
!131 = !{i64 5967}
!132 = !{i64 5981}
!133 = !{i64 5987}
!134 = !{i64 5988}
!135 = !{i64 6014}
!136 = !{i64 6023}
!137 = !{i64 6025}
!138 = !{i64 6028}
!139 = !{i64 6041}
!140 = !{i64 6042}
!141 = !{i64 6054}
!142 = !{i64 6069}
!143 = !{i64 6116}
!144 = !{i64 6125}
!145 = !{i64 6134}
!146 = !{i64 6136}
!147 = !{i64 6142}
!148 = !{i64 6143}
!149 = !{i64 6185}
!150 = !{i64 6189}
!151 = !{i64 6191}
!152 = !{i64 6193}
!153 = !{i64 6195}
!154 = !{i64 6198}
!155 = !{i64 6201}
!156 = !{i64 6220}
!157 = !{i64 6221}
!158 = !{i64 6233}
!159 = !{i64 6258}
!160 = !{i64 6268}
!161 = !{i64 6319}
!162 = !{i64 6324}
!163 = !{i64 6328}
!164 = !{i64 6336}
!165 = !{i64 6356}
!166 = !{i64 6365}
!167 = !{i64 6367}
!168 = !{i64 6373}
!169 = !{i64 6406}
!170 = !{i64 6409}
!171 = !{i64 6412}
!172 = !{i64 6416}
!173 = !{i64 6425}
!174 = !{i64 6474}
!175 = !{i64 6478}
!176 = !{i64 6497}
!177 = !{i64 6501}
!178 = !{i64 6505}
!179 = !{i64 6510}
!180 = !{i64 6514}
!181 = !{i64 6519}
!182 = !{i64 6523}
!183 = !{i64 6528}
!184 = !{i64 6533}
!185 = !{i64 6537}
!186 = !{i64 6552}
!187 = !{i64 6557}
!188 = !{i64 6565}
!189 = !{i64 6570}
!190 = !{i64 6580}
!191 = !{i64 6581}
!192 = !{i64 6593}
!193 = !{i64 6608}
!194 = !{i64 6636}
!195 = !{i64 6682}
!196 = !{i64 6687}
!197 = !{i64 6693}
!198 = !{i64 6698}
!199 = !{i64 6703}
!200 = !{i64 6709}
!201 = !{i64 6718}
!202 = !{i64 6720}
!203 = !{i64 6726}
!204 = !{i64 6739}
!205 = !{i64 6749}
!206 = !{i64 6762}
!207 = !{i64 6765}
!208 = !{i64 6778}
!209 = !{i64 6788}
!210 = !{i64 6795}
!211 = !{i64 6798}
!212 = !{i64 6799}
!213 = !{i64 6811}
!214 = !{i64 6826}
!215 = !{i64 6845}
!216 = !{i64 6850}
!217 = !{i64 6853}
!218 = !{i64 6859}
!219 = !{i64 6865}
!220 = !{i64 6874}
!221 = !{i64 6876}
!222 = !{i64 6882}
!223 = !{i64 6883}
!224 = !{i64 6898}
!225 = !{i64 6918}
!226 = !{i64 6961}
!227 = !{i64 6970}
!228 = !{i64 6975}
!229 = !{i64 7004}
!230 = !{i64 7010}
!231 = !{i64 7050}
!232 = !{i64 7055}
!233 = !{i64 7062}
!234 = !{i64 7071}
!235 = !{i64 7073}
!236 = !{i64 7079}
!237 = !{i64 7080}
!238 = !{i64 7097}
!239 = !{i64 7140}
!240 = !{i64 7149}
!241 = !{i64 7154}
!242 = !{i64 7170}
!243 = !{i64 7178}
!244 = !{i64 7203}
!245 = !{i64 7208}
!246 = !{i64 7210}
!247 = !{i64 7226}
!248 = !{i64 7236}
!249 = !{i64 7242}
!250 = !{i64 7266}
!251 = !{i64 7271}
!252 = !{i64 7273}
!253 = !{i64 7289}
!254 = !{i64 7299}
!255 = !{i64 7305}
!256 = !{i64 7325}
!257 = !{i64 7330}
!258 = !{i64 7334}
!259 = !{i64 7357}
!260 = !{i64 7385}
!261 = !{i64 7388}
!262 = !{i64 7389}
!263 = !{i64 7406}
!264 = !{i64 7411}
!265 = !{i64 7419}
!266 = !{i64 7437}
!267 = !{i64 7445}
!268 = !{i64 7449}
!269 = !{i64 7442}
!270 = !{i64 7424}
!271 = !{i64 7451}
!272 = !{i64 7457}
!273 = !{i64 7455}
!274 = !{i64 7470}
!275 = !{i64 7474}
!276 = !{i64 7495}
!277 = !{i64 7506}
!278 = !{i64 7510}
!279 = !{i64 7529}
!280 = !{i64 7539}
!281 = !{i64 7561}
!282 = !{i64 7571}
!283 = !{i64 7593}
!284 = !{i64 7603}
!285 = !{i64 7625}
!286 = !{i64 7635}
!287 = !{i64 7657}
!288 = !{i64 7667}
!289 = !{i64 7689}
!290 = !{i64 7699}
!291 = !{i64 7721}
!292 = !{i64 7728}
!293 = !{i64 7742}
!294 = !{i64 7752}
!295 = !{i64 7763}
!296 = !{i64 7776}
