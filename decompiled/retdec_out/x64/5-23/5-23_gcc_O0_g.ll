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
@global_var_2056 = constant [9 x i8] c"03:00:23\00"
@global_var_2060 = constant [45 x i8] c"file=%s, func=%s, line=%d, date=%s, time=%s\0A\00"
@global_var = local_unnamed_addr global i32 100
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

define i32 @param_macro_constants(i32 %size) local_unnamed_addr {
dec_label_pc_1229:
  %0 = icmp sgt i32 %size, ptrtoint (i1* @global_var_400 to i32), !insn.addr !30
  %. = select i1 %0, i32 64, i32 512
  ret i32 %., !insn.addr !31
}

define i32 @call_macro_constants() local_unnamed_addr {
dec_label_pc_124b:
  %0 = call i32 @param_macro_constants(i32 2048), !insn.addr !32
  ret i32 %0, !insn.addr !33
}

define i32 @param_macro_functions(i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_125f:
  %0 = mul i32 %x, %x, !insn.addr !34
  %1 = sub i32 %y, %x, !insn.addr !35
  %2 = xor i32 %y, %x, !insn.addr !35
  %3 = xor i32 %1, %y, !insn.addr !35
  %4 = and i32 %3, %2, !insn.addr !35
  %5 = icmp slt i32 %4, 0, !insn.addr !35
  %6 = icmp slt i32 %1, 0, !insn.addr !35
  %7 = icmp eq i1 %6, %5, !insn.addr !36
  %8 = select i1 %7, i32 %y, i32 %x, !insn.addr !36
  %9 = add i32 %8, %0, !insn.addr !37
  ret i32 %9, !insn.addr !38

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %y, { 2, 0, 1, 3 }
  uselistorder i32 %x, { 1, 0, 2, 3, 4 }
}

define i32 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1284:
  %0 = call i32 @param_macro_functions(i32 5, i32 3), !insn.addr !39
  ret i32 %0, !insn.addr !40
}

define i32 @param_conditional_compile(i32 %x) local_unnamed_addr {
dec_label_pc_129d:
  %0 = mul i32 %x, 3, !insn.addr !41
  %1 = add i32 %0, 2, !insn.addr !42
  ret i32 %1, !insn.addr !43
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_12c2:
  %0 = call i32 @param_conditional_compile(i32 10), !insn.addr !44
  ret i32 %0, !insn.addr !45
}

define i32 @param_multi_branch_compile(i32 %x) local_unnamed_addr {
dec_label_pc_12d6:
  %0 = mul i32 %x, 5, !insn.addr !46
  %1 = add i32 %0, 57072, !insn.addr !47
  ret i32 %1, !insn.addr !48
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_12f2:
  %0 = call i32 @param_multi_branch_compile(i32 10), !insn.addr !49
  ret i32 %0, !insn.addr !50
}

define i32 @param_macro_recursion(i32 %x) local_unnamed_addr {
dec_label_pc_1306:
  %0 = add i32 %x, 16, !insn.addr !51
  ret i32 %0, !insn.addr !52
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1319:
  %0 = call i32 @param_macro_recursion(i32 100), !insn.addr !53
  ret i32 %0, !insn.addr !54
}

define i32 @param_stringize(i32 %value) local_unnamed_addr {
dec_label_pc_132d:
  %0 = call i32 @strlen(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_2010, i64 0, i64 0)), !insn.addr !55
  %1 = call i32 @strlen(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_201c, i64 0, i64 0)), !insn.addr !56
  %2 = add i32 %1, %0, !insn.addr !57
  %3 = call i32 @strlen(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_2022, i64 0, i64 0)), !insn.addr !58
  %4 = add i32 %2, %3, !insn.addr !59
  ret i32 %4, !insn.addr !60

; uselistorder directives
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_138e:
  %0 = call i32 @param_stringize(i32 0), !insn.addr !61
  ret i32 %0, !insn.addr !62
}

define i32 @my_func(i32 %x) local_unnamed_addr {
dec_label_pc_13a2:
  %0 = mul i32 %x, 10, !insn.addr !63
  ret i32 %0, !insn.addr !64
}

define i32 @param_token_paste(i32 %x) local_unnamed_addr {
dec_label_pc_13bb:
  %0 = call i32 @my_func(i32 %x), !insn.addr !65
  %1 = add i32 %x, 5, !insn.addr !66
  %2 = add i32 %1, %0, !insn.addr !67
  ret i32 %2, !insn.addr !68
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_13eb:
  %0 = call i32 @param_token_paste(i32 5), !insn.addr !69
  ret i32 %0, !insn.addr !70
}

define i32 @param_variadic_macro(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_13ff:
  %rax.0.reg2mem = alloca i32, !insn.addr !71
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !72
  %1 = zext i32 %z to i64, !insn.addr !73
  %2 = zext i32 %y to i64, !insn.addr !74
  %3 = zext i32 %x to i64, !insn.addr !75
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_2026, i64 0, i64 0), i64 %3, i64 %2, i64 %1), !insn.addr !76
  %5 = add i32 %x, 50, !insn.addr !77
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !78
  %7 = icmp eq i64 %0, %6, !insn.addr !78
  store i32 %5, i32* %rax.0.reg2mem, !insn.addr !79
  br i1 %7, label %dec_label_pc_1470, label %dec_label_pc_146b, !insn.addr !79

dec_label_pc_146b:                                ; preds = %dec_label_pc_13ff
  call void @__stack_chk_fail(), !insn.addr !80
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !80
  br label %dec_label_pc_1470, !insn.addr !80

dec_label_pc_1470:                                ; preds = %dec_label_pc_146b, %dec_label_pc_13ff
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !81
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1472:
  %0 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30), !insn.addr !82
  ret i32 %0, !insn.addr !83
}

define i32 @param_macro_override(i32 %x) local_unnamed_addr {
dec_label_pc_1490:
  %0 = add i32 %x, 1, !insn.addr !84
  %1 = mul i32 %x, 2, !insn.addr !85
  %2 = add i32 %0, %1, !insn.addr !86
  ret i32 %2, !insn.addr !87
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_14b6:
  %0 = call i32 @param_macro_override(i32 5), !insn.addr !88
  ret i32 %0, !insn.addr !89
}

define i32 @header_func(i32 %x) local_unnamed_addr {
dec_label_pc_14ca:
  %0 = mul i32 %x, 100, !insn.addr !90
  ret i32 %0, !insn.addr !91
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_14dd:
  %0 = call i32 @header_func(i32 5), !insn.addr !92
  ret i32 %0, !insn.addr !93
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_14f1:
  %0 = call i32 @param_include_guard(), !insn.addr !94
  ret i32 %0, !insn.addr !95
}

define i32 @param_builtin_macros(i32 %x) local_unnamed_addr {
dec_label_pc_1505:
  %0 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([45 x i8], [45 x i8]* @global_var_2060, i64 0, i64 0), i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_203f, i64 0, i64 0), i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_22f0, i64 0, i64 0), i64 279, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_204a, i64 0, i64 0), i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_2056, i64 0, i64 0)), !insn.addr !96
  %1 = add i32 %x, 282, !insn.addr !97
  ret i32 %1, !insn.addr !98
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_15a5:
  %0 = call i32 @param_builtin_macros(i32 100), !insn.addr !99
  ret i32 %0, !insn.addr !100
}

define void @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_15b9:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2090 to i8*)), !insn.addr !101
  %1 = call i32 @call_macro_constants(), !insn.addr !102
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b7 to i8*)), !insn.addr !103
  %3 = call i32 @call_macro_functions(), !insn.addr !104
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d2 to i8*)), !insn.addr !105
  %5 = call i32 @call_conditional_compile(), !insn.addr !106
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ed to i8*)), !insn.addr !107
  %7 = call i32 @call_multi_branch_compile(), !insn.addr !108
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2108 to i8*)), !insn.addr !109
  %9 = call i32 @call_macro_recursion(), !insn.addr !110
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2127 to i8*)), !insn.addr !111
  %11 = call i32 @call_stringize(), !insn.addr !112
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2148 to i8*)), !insn.addr !113
  %13 = call i32 @call_token_paste(), !insn.addr !114
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2172 to i8*)), !insn.addr !115
  %15 = call i32 @call_variadic_macro(), !insn.addr !116
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218d to i8*)), !insn.addr !117
  %17 = call i32 @call_macro_override(), !insn.addr !118
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !119
  %19 = call i32 @call_include_guard(), !insn.addr !120
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c3 to i8*)), !insn.addr !121
  %21 = call i32 @call_builtin_macros(), !insn.addr !122
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e0 to i8*)), !insn.addr !123
  ret void, !insn.addr !124
}

define i32 @param_asm_basic(i32 %x) local_unnamed_addr {
dec_label_pc_1733:
  %0 = add i32 %x, 10, !insn.addr !125
  ret i32 %0, !insn.addr !126
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !127
  ret i32 %0, !insn.addr !128
}

define i32 @param_asm_clobber(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1764:
  %rax.0.lcssa.reg2mem = alloca i32, !insn.addr !129
  %rax.01.reg2mem = alloca i32, !insn.addr !129
  %storemerge2.reg2mem = alloca i64, !insn.addr !129
  %0 = ptrtoint i32* %arr to i64
  %1 = zext i32 %n to i64, !insn.addr !130
  %2 = icmp eq i32 %n, 0, !insn.addr !131
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !131
  store i32 0, i32* %rax.01.reg2mem, !insn.addr !131
  store i32 0, i32* %rax.0.lcssa.reg2mem, !insn.addr !131
  br i1 %2, label %dec_label_pc_1790, label %dec_label_pc_1789, !insn.addr !131

dec_label_pc_1789:                                ; preds = %dec_label_pc_1764, %dec_label_pc_1789
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
  store i32 %7, i32* %rax.0.lcssa.reg2mem, !insn.addr !131
  br i1 %10, label %dec_label_pc_1789, label %dec_label_pc_1790, !insn.addr !131

dec_label_pc_1790:                                ; preds = %dec_label_pc_1789, %dec_label_pc_1764
  %rax.0.lcssa.reload = load i32, i32* %rax.0.lcssa.reg2mem
  ret i32 %rax.0.lcssa.reload, !insn.addr !134

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1789, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_179a:
  %rax.0.reg2mem = alloca i32, !insn.addr !135
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !136
  store i64 1, i64* %stack_var_-40, align 8, !insn.addr !137
  %1 = bitcast i64* %stack_var_-40 to i32*, !insn.addr !138
  %2 = call i32 @param_asm_clobber(i32* nonnull %1, i32 5), !insn.addr !138
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !139
  %4 = icmp eq i64 %0, %3, !insn.addr !139
  store i32 %2, i32* %rax.0.reg2mem, !insn.addr !140
  br i1 %4, label %dec_label_pc_17fd, label %dec_label_pc_17f8, !insn.addr !140

dec_label_pc_17f8:                                ; preds = %dec_label_pc_179a
  call void @__stack_chk_fail(), !insn.addr !141
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !141
  br label %dec_label_pc_17fd, !insn.addr !141

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17f8, %dec_label_pc_179a
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !142
}

define void @param_asm_multi_insn(i8* %dst, i32* %src, i64 %n) local_unnamed_addr {
dec_label_pc_17ff:
  %rcx.02.reg2mem = alloca i64, !insn.addr !143
  %rsi.03.reg2mem = alloca i64, !insn.addr !143
  %storemerge4.reg2mem = alloca i64, !insn.addr !143
  %0 = icmp eq i64 %n, 0, !insn.addr !144
  br i1 %0, label %dec_label_pc_183e, label %dec_label_pc_182f.lr.ph, !insn.addr !145

dec_label_pc_182f.lr.ph:                          ; preds = %dec_label_pc_17ff
  %1 = ptrtoint i8* %dst to i64
  %2 = ptrtoint i32* %src to i64
  store i64 %n, i64* %storemerge4.reg2mem
  store i64 %1, i64* %rsi.03.reg2mem
  store i64 %2, i64* %rcx.02.reg2mem
  br label %dec_label_pc_182f

dec_label_pc_182f:                                ; preds = %dec_label_pc_182f.lr.ph, %dec_label_pc_182f
  %rcx.02.reload = load i64, i64* %rcx.02.reg2mem
  %rsi.03.reload = load i64, i64* %rsi.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %3 = inttoptr i64 %rcx.02.reload to i8*, !insn.addr !146
  %4 = load i8, i8* %3, align 1, !insn.addr !146
  %5 = inttoptr i64 %rsi.03.reload to i8*, !insn.addr !147
  store i8 %4, i8* %5, align 1, !insn.addr !147
  %6 = add i64 %rsi.03.reload, 1, !insn.addr !148
  %7 = add i64 %rcx.02.reload, 1, !insn.addr !149
  %8 = add i64 %storemerge4.reload, -1, !insn.addr !150
  %9 = icmp eq i64 %8, 0, !insn.addr !144
  store i64 %8, i64* %storemerge4.reg2mem, !insn.addr !145
  store i64 %6, i64* %rsi.03.reg2mem, !insn.addr !145
  store i64 %7, i64* %rcx.02.reg2mem, !insn.addr !145
  br i1 %9, label %dec_label_pc_183e, label %dec_label_pc_182f, !insn.addr !145

dec_label_pc_183e:                                ; preds = %dec_label_pc_182f, %dec_label_pc_17ff
  ret void, !insn.addr !151

; uselistorder directives
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_182f, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_184d:
  %0 = alloca i8
  %rax.0.reg2mem = alloca i32, !insn.addr !152
  %1 = load i8, i8* %0
  %stack_var_-56 = alloca i8, align 1
  %stack_var_-66 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !153
  store i64 5999111841566713160, i64* %stack_var_-66, align 8, !insn.addr !154
  store i8 0, i8* %stack_var_-56, align 1, !insn.addr !155
  %3 = bitcast i64* %stack_var_-66 to i32*, !insn.addr !156
  call void @param_asm_multi_insn(i8* nonnull %stack_var_-56, i32* nonnull %3, i64 9), !insn.addr !156
  %4 = load i8, i8* %stack_var_-56, align 1, !insn.addr !157
  %5 = icmp eq i8 %4, 72, !insn.addr !158
  %6 = icmp eq i8 %1, 111, !insn.addr !159
  %7 = icmp eq i1 %6, %5
  %storemerge = select i1 %7, i32 42, i32 -1
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !160
  %9 = icmp eq i64 %2, %8, !insn.addr !160
  store i32 %storemerge, i32* %rax.0.reg2mem, !insn.addr !161
  br i1 %9, label %dec_label_pc_18e4, label %dec_label_pc_18df, !insn.addr !161

dec_label_pc_18df:                                ; preds = %dec_label_pc_184d
  call void @__stack_chk_fail(), !insn.addr !162
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_18e4, !insn.addr !162

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18df, %dec_label_pc_184d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !163

; uselistorder directives
  uselistorder i8* %stack_var_-56, { 1, 2, 0 }
}

define i32 @param_asm_simd(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_18e6:
  %rdi = alloca i64, align 8
  %rsi = alloca i64, align 8
  %0 = bitcast i64* %rdi to i128*
  %1 = load i128, i128* %0, align 8, !insn.addr !164
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !164
  %3 = bitcast i64* %rsi to i128*
  %4 = load i128, i128* %3, align 8, !insn.addr !165
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !165
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !166
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !167
  %8 = sext i64 %7 to i128, !insn.addr !167
  %9 = bitcast i32* %result to i128*, !insn.addr !167
  store i128 %8, i128* %9, align 8, !insn.addr !167
  ret i32 0, !insn.addr !168
}

define i32 @param_simd_intrinsics(i32* %a, i32* %b, i32* %result) local_unnamed_addr {
dec_label_pc_191a:
  %0 = ptrtoint i32* %b to i64
  %1 = ptrtoint i32* %a to i64
  %vec_sum_-88 = alloca [2 x i64], align 8
  %vec_a_-120 = alloca [2 x i64], align 8
  %vec_b_-104 = alloca [2 x i64], align 8
  %vec_a_-112 = alloca [2 x i64], align 8
  %2 = insertvalue [2 x i64] undef, i64 %1, 0, !insn.addr !169
  store [2 x i64] %2, [2 x i64]* %vec_a_-112, align 8, !insn.addr !169
  %3 = getelementptr inbounds [2 x i64], [2 x i64]* %vec_a_-112, i64 0, i64 0, !insn.addr !170
  %4 = load i64, i64* %3, align 8, !insn.addr !170
  %5 = inttoptr i64 %4 to i128*, !insn.addr !171
  %6 = load i128, i128* %5, align 8, !insn.addr !171
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !171
  %8 = call i64 @__asm_movaps.1(i128 %7), !insn.addr !172
  %9 = insertvalue [2 x i64] undef, i64 %8, 0, !insn.addr !172
  store [2 x i64] %9, [2 x i64]* %vec_b_-104, align 8, !insn.addr !172
  %10 = insertvalue [2 x i64] undef, i64 %0, 0, !insn.addr !173
  store [2 x i64] %10, [2 x i64]* %vec_a_-120, align 8, !insn.addr !173
  %11 = getelementptr inbounds [2 x i64], [2 x i64]* %vec_a_-120, i64 0, i64 0, !insn.addr !174
  %12 = load i64, i64* %11, align 8, !insn.addr !174
  %13 = inttoptr i64 %12 to i128*, !insn.addr !175
  %14 = load i128, i128* %13, align 8, !insn.addr !175
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !175
  %16 = call i64 @__asm_movaps.1(i128 %15), !insn.addr !176
  %17 = insertvalue [2 x i64] undef, i64 %16, 0, !insn.addr !176
  store [2 x i64] %17, [2 x i64]* %vec_sum_-88, align 8, !insn.addr !176
  %18 = bitcast [2 x i64]* %vec_b_-104 to i128*, !insn.addr !177
  %19 = load i128, i128* %18, align 8, !insn.addr !177
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !177
  %21 = call i64 @__asm_movaps.1(i128 %20), !insn.addr !178
  %22 = sext i64 %21 to i128, !insn.addr !178
  %23 = bitcast [2 x i64]* %vec_sum_-88 to i128*, !insn.addr !179
  %24 = load i128, i128* %23, align 8, !insn.addr !179
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !179
  %26 = call i64 @__asm_movaps.1(i128 %25), !insn.addr !180
  %27 = sext i64 %26 to i128, !insn.addr !180
  %28 = call i128 @__asm_movdqa(i128 %22), !insn.addr !181
  %29 = call i128 @__asm_movdqa(i128 %27), !insn.addr !182
  %30 = call i128 @__asm_paddd(i128 %29, i128 %28), !insn.addr !183
  %31 = call i64 @__asm_movaps.1(i128 %30), !insn.addr !184
  %32 = sext i64 %31 to i128, !insn.addr !184
  %33 = call i128 @__asm_movdqa(i128 %32), !insn.addr !185
  %34 = call i64 @__asm_movaps.1(i128 %33), !insn.addr !186
  %35 = sext i64 %34 to i128, !insn.addr !186
  %36 = call i128 @__asm_movdqa(i128 %35), !insn.addr !187
  %37 = call i64 @__asm_movaps.1(i128 %36), !insn.addr !188
  %38 = sext i64 %37 to i128, !insn.addr !188
  %39 = bitcast i32* %result to i128*, !insn.addr !188
  store i128 %38, i128* %39, align 8, !insn.addr !188
  ret i32 0, !insn.addr !189
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_19b5:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !190
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-40 = alloca i32, align 4
  %result_-56 = alloca [4 x i32], align 4
  %stack_var_-72 = alloca i64, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !191
  store i64 1, i64* %stack_var_-72, align 8, !insn.addr !192
  store [4 x i32] [i32 5, i32 undef, i32 undef, i32 undef], [4 x i32]* %result_-56, align 4, !insn.addr !193
  %5 = bitcast i64* %stack_var_-72 to i32*, !insn.addr !194
  %6 = getelementptr inbounds [4 x i32], [4 x i32]* %result_-56, i64 0, i64 0, !insn.addr !194
  %7 = call i32 @param_asm_simd(i32* nonnull %5, i32* nonnull %6, i32* nonnull %stack_var_-40), !insn.addr !194
  %8 = load i32, i32* %stack_var_-40, align 4, !insn.addr !195
  %9 = add i32 %2, %1, !insn.addr !196
  %10 = add i32 %9, %3, !insn.addr !197
  %11 = add i32 %10, %8, !insn.addr !198
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !199
  %13 = icmp eq i64 %4, %12, !insn.addr !199
  store i32 %11, i32* %rax.0.reg2mem, !insn.addr !200
  br i1 %13, label %dec_label_pc_1a45, label %dec_label_pc_1a40, !insn.addr !200

dec_label_pc_1a40:                                ; preds = %dec_label_pc_19b5
  call void @__stack_chk_fail(), !insn.addr !201
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_1a45, !insn.addr !201

dec_label_pc_1a45:                                ; preds = %dec_label_pc_1a40, %dec_label_pc_19b5
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !202

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i64 1, { 0, 3, 4, 1, 2 }
}

define i32 @param_asm_atomic(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_1a47:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !203
  store i32 %3, i32* %counter, align 4, !insn.addr !203
  ret i32 %3, !insn.addr !204
}

define i32 @param_atomic_c11(i32* %counter, i32 %increment) local_unnamed_addr {
dec_label_pc_1a6e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, %increment, !insn.addr !205
  store i32 %3, i32* %counter, align 4, !insn.addr !205
  ret i32 %3, !insn.addr !206
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1a8f:
  %rax.0.reg2mem = alloca i32, !insn.addr !207
  %stack_var_-24 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !208
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !209
  %1 = call i32 @param_asm_atomic(i32* nonnull %stack_var_-24, i32 5), !insn.addr !210
  %2 = load i32, i32* %stack_var_-24, align 4, !insn.addr !211
  %3 = add i32 %2, %1, !insn.addr !212
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !213
  %5 = icmp eq i64 %0, %4, !insn.addr !213
  store i32 %3, i32* %rax.0.reg2mem, !insn.addr !214
  br i1 %5, label %dec_label_pc_1ae1, label %dec_label_pc_1adc, !insn.addr !214

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1a8f
  call void @__stack_chk_fail(), !insn.addr !215
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !215
  br label %dec_label_pc_1ae1, !insn.addr !215

dec_label_pc_1ae1:                                ; preds = %dec_label_pc_1adc, %dec_label_pc_1a8f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !216

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
  uselistorder i32 5, { 0, 1, 2, 3, 4, 5, 6, 9, 7, 8 }
}

define i32 @param_dynamic_code(i32 %x) local_unnamed_addr {
dec_label_pc_1ae3:
  %rax.0.reg2mem = alloca i32, !insn.addr !217
  %storemerge.reg2mem = alloca i32, !insn.addr !217
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !218
  %1 = call i32 @sysconf(i32 30), !insn.addr !219
  %2 = call i64* @mmap(i64* null, i32 %1, i32 7, i32 34, i32 -1, i32 0), !insn.addr !220
  %3 = icmp eq i64* %2, inttoptr (i64 -1 to i64*), !insn.addr !221
  %4 = icmp eq i1 %3, false, !insn.addr !222
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !222
  br i1 %4, label %dec_label_pc_1b48, label %dec_label_pc_1b92, !insn.addr !222

dec_label_pc_1b48:                                ; preds = %dec_label_pc_1ae3
  %5 = ptrtoint i64* %2 to i64, !insn.addr !223
  %6 = bitcast i64* %2 to i32*
  store i32 -1065092983, i32* %6, align 4, !insn.addr !224
  %7 = add i64 %5, 4, !insn.addr !225
  %8 = inttoptr i64 %7 to i16*, !insn.addr !225
  store i16 -15611, i16* %8, align 2, !insn.addr !225
  %9 = call i32 @munmap(i64* %2, i32 %1), !insn.addr !226
  store i32 %x, i32* %storemerge.reg2mem, !insn.addr !227
  br label %dec_label_pc_1b92, !insn.addr !227

dec_label_pc_1b92:                                ; preds = %dec_label_pc_1ae3, %dec_label_pc_1b48
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !228
  %11 = icmp eq i64 %0, %10, !insn.addr !228
  store i32 %storemerge.reload, i32* %rax.0.reg2mem, !insn.addr !229
  br i1 %11, label %dec_label_pc_1ba6, label %dec_label_pc_1ba1, !insn.addr !229

dec_label_pc_1ba1:                                ; preds = %dec_label_pc_1b92
  call void @__stack_chk_fail(), !insn.addr !230
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_1ba6, !insn.addr !230

dec_label_pc_1ba6:                                ; preds = %dec_label_pc_1ba1, %dec_label_pc_1b92
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !231

; uselistorder directives
  uselistorder i64* %2, { 1, 0, 2, 3 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ()* @__stack_chk_fail, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i64 4, { 1, 0 }
  uselistorder label %dec_label_pc_1b92, { 1, 0 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_1ba8:
  %rax.0.reg2mem = alloca i32, !insn.addr !232
  %0 = call i32 @sysconf(i32 30), !insn.addr !233
  %1 = call i64* @mmap(i64* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !234
  %2 = icmp eq i64* %1, inttoptr (i64 -1 to i64*), !insn.addr !235
  %3 = icmp eq i1 %2, false, !insn.addr !236
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !236
  br i1 %3, label %dec_label_pc_1bfe, label %dec_label_pc_1ca5, !insn.addr !236

dec_label_pc_1bfe:                                ; preds = %dec_label_pc_1ba8
  %4 = bitcast i64* %1 to i32*, !insn.addr !237
  store i32 42, i32* %4, align 4, !insn.addr !238
  %5 = call i32 @mprotect(i64* %1, i32 %0, i32 1), !insn.addr !239
  %6 = icmp eq i32 %5, 0, !insn.addr !240
  br i1 %6, label %dec_label_pc_1c46, label %dec_label_pc_1c2c, !insn.addr !241

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1bfe
  %7 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !242
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !243
  br label %dec_label_pc_1ca5, !insn.addr !243

dec_label_pc_1c46:                                ; preds = %dec_label_pc_1bfe
  %8 = load i32, i32* %4, align 4, !insn.addr !244
  %9 = call i32 @mprotect(i64* nonnull %1, i32 %0, i32 3), !insn.addr !245
  %10 = icmp eq i32 %9, 0, !insn.addr !246
  br i1 %10, label %dec_label_pc_1c85, label %dec_label_pc_1c6b, !insn.addr !247

dec_label_pc_1c6b:                                ; preds = %dec_label_pc_1c46
  %11 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !248
  store i32 -3, i32* %rax.0.reg2mem, !insn.addr !249
  br label %dec_label_pc_1ca5, !insn.addr !249

dec_label_pc_1c85:                                ; preds = %dec_label_pc_1c46
  store i32 100, i32* %4, align 4, !insn.addr !250
  %12 = call i32 @munmap(i64* nonnull %1, i32 %0), !insn.addr !251
  store i32 %8, i32* %rax.0.reg2mem, !insn.addr !252
  br label %dec_label_pc_1ca5, !insn.addr !252

dec_label_pc_1ca5:                                ; preds = %dec_label_pc_1ba8, %dec_label_pc_1c85, %dec_label_pc_1c6b, %dec_label_pc_1c2c
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !253

; uselistorder directives
  uselistorder i64* %1, { 0, 1, 2, 3, 4, 6, 5 }
  uselistorder i32* %rax.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 (i64*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i64*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i1 false, { 2, 3, 1, 0 }
  uselistorder i64* (i64*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 -1, { 0, 3, 1, 4, 2 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ca5, { 1, 2, 3, 0 }
}

define i32 @param_clobber_importance(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1ca7:
  %0 = add i32 %b, %a, !insn.addr !254
  %1 = mul i32 %0, 2, !insn.addr !255
  ret i32 %1, !insn.addr !256
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1cdd:
  %0 = call i32 @param_dynamic_code(i32 10), !insn.addr !257
  %1 = call i32 @param_memory_protection(), !insn.addr !258
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !259
  %3 = icmp eq i32 %0, 15, !insn.addr !260
  %4 = icmp eq i32 %1, 42, !insn.addr !261
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i32 %2, 20, !insn.addr !262
  %7 = icmp eq i1 %5, %6
  %storemerge = select i1 %7, i32 77, i32 %0
  ret i32 %storemerge, !insn.addr !263

; uselistorder directives
  uselistorder i32 42, { 1, 2, 0 }
  uselistorder i32 10, { 0, 1, 6, 2, 3, 4, 5 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1d33:
  %0 = load i32, i32* @global_var, align 4, !insn.addr !264
  %1 = add i32 %0, 50, !insn.addr !264
  ret i32 %1, !insn.addr !265

; uselistorder directives
  uselistorder i32 100, { 4, 0, 1, 2, 3 }
}

define void @test_asm_features() local_unnamed_addr {
dec_label_pc_1d57:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2210 to i8*)), !insn.addr !266
  %1 = call i32 @call_asm_basic(), !insn.addr !267
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_223a to i8*)), !insn.addr !268
  %3 = call i32 @call_asm_clobber(), !insn.addr !269
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2256 to i8*)), !insn.addr !270
  %5 = call i32 @call_asm_multi_insn(), !insn.addr !271
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2272 to i8*)), !insn.addr !272
  %7 = call i32 @call_asm_simd(), !insn.addr !273
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_228e to i8*)), !insn.addr !274
  %9 = call i32 @call_asm_atomic(), !insn.addr !275
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22aa to i8*)), !insn.addr !276
  %11 = call i32 @call_asm_privileged(), !insn.addr !277
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22c6 to i8*)), !insn.addr !278
  ret void, !insn.addr !279

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 19 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder i64 0, { 42, 43, 44, 45, 46, 47, 68, 3, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 2, 1, 67, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1e31:
  call void @test_preprocessing_features(), !insn.addr !280
  call void @test_asm_features(), !insn.addr !281
  ret i32 0, !insn.addr !282

; uselistorder directives
  uselistorder i32 0, { 2, 9, 10, 6, 7, 3, 4, 0, 1, 5, 8, 11, 12 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1e54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !283

; uselistorder directives
  uselistorder i32 1, { 3, 21, 6, 8, 7, 24, 9, 2, 1, 28, 27, 25, 10, 4, 32, 31, 30, 29, 23, 22, 33, 26, 11, 5, 14, 13, 12, 34, 15, 18, 17, 16, 36, 19, 0, 35, 20 }
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
!30 = !{i64 4667}
!31 = !{i64 4682}
!32 = !{i64 4696}
!33 = !{i64 4702}
!34 = !{i64 4720}
!35 = !{i64 4731}
!36 = !{i64 4733}
!37 = !{i64 4736}
!38 = !{i64 4739}
!39 = !{i64 4758}
!40 = !{i64 4764}
!41 = !{i64 4789}
!42 = !{i64 4791}
!43 = !{i64 4801}
!44 = !{i64 4815}
!45 = !{i64 4821}
!46 = !{i64 4841}
!47 = !{i64 4843}
!48 = !{i64 4849}
!49 = !{i64 4863}
!50 = !{i64 4869}
!51 = !{i64 4884}
!52 = !{i64 4888}
!53 = !{i64 4902}
!54 = !{i64 4908}
!55 = !{i64 4965}
!56 = !{i64 4979}
!57 = !{i64 4984}
!58 = !{i64 4993}
!59 = !{i64 4998}
!60 = !{i64 5005}
!61 = !{i64 5019}
!62 = !{i64 5025}
!63 = !{i64 5047}
!64 = !{i64 5050}
!65 = !{i64 5071}
!66 = !{i64 5082}
!67 = !{i64 5091}
!68 = !{i64 5098}
!69 = !{i64 5112}
!70 = !{i64 5118}
!71 = !{i64 5119}
!72 = !{i64 5140}
!73 = !{i64 5155}
!74 = !{i64 5158}
!75 = !{i64 5164}
!76 = !{i64 5181}
!77 = !{i64 5210}
!78 = !{i64 5216}
!79 = !{i64 5225}
!80 = !{i64 5227}
!81 = !{i64 5233}
!82 = !{i64 5257}
!83 = !{i64 5263}
!84 = !{i64 5278}
!85 = !{i64 5287}
!86 = !{i64 5298}
!87 = !{i64 5301}
!88 = !{i64 5315}
!89 = !{i64 5321}
!90 = !{i64 5336}
!91 = !{i64 5340}
!92 = !{i64 5354}
!93 = !{i64 5360}
!94 = !{i64 5374}
!95 = !{i64 5380}
!96 = !{i64 5490}
!97 = !{i64 5537}
!98 = !{i64 5540}
!99 = !{i64 5554}
!100 = !{i64 5560}
!101 = !{i64 5579}
!102 = !{i64 5589}
!103 = !{i64 5611}
!104 = !{i64 5621}
!105 = !{i64 5643}
!106 = !{i64 5653}
!107 = !{i64 5675}
!108 = !{i64 5685}
!109 = !{i64 5707}
!110 = !{i64 5717}
!111 = !{i64 5739}
!112 = !{i64 5749}
!113 = !{i64 5771}
!114 = !{i64 5781}
!115 = !{i64 5803}
!116 = !{i64 5813}
!117 = !{i64 5835}
!118 = !{i64 5845}
!119 = !{i64 5867}
!120 = !{i64 5877}
!121 = !{i64 5899}
!122 = !{i64 5909}
!123 = !{i64 5931}
!124 = !{i64 5938}
!125 = !{i64 5955}
!126 = !{i64 5967}
!127 = !{i64 5981}
!128 = !{i64 5987}
!129 = !{i64 5988}
!130 = !{i64 6014}
!131 = !{i64 6023}
!132 = !{i64 6025}
!133 = !{i64 6028}
!134 = !{i64 6041}
!135 = !{i64 6042}
!136 = !{i64 6054}
!137 = !{i64 6069}
!138 = !{i64 6116}
!139 = !{i64 6125}
!140 = !{i64 6134}
!141 = !{i64 6136}
!142 = !{i64 6142}
!143 = !{i64 6143}
!144 = !{i64 6185}
!145 = !{i64 6189}
!146 = !{i64 6191}
!147 = !{i64 6193}
!148 = !{i64 6195}
!149 = !{i64 6198}
!150 = !{i64 6201}
!151 = !{i64 6220}
!152 = !{i64 6221}
!153 = !{i64 6233}
!154 = !{i64 6258}
!155 = !{i64 6268}
!156 = !{i64 6319}
!157 = !{i64 6324}
!158 = !{i64 6328}
!159 = !{i64 6336}
!160 = !{i64 6356}
!161 = !{i64 6365}
!162 = !{i64 6367}
!163 = !{i64 6373}
!164 = !{i64 6406}
!165 = !{i64 6409}
!166 = !{i64 6412}
!167 = !{i64 6416}
!168 = !{i64 6425}
!169 = !{i64 6466}
!170 = !{i64 6470}
!171 = !{i64 6474}
!172 = !{i64 6478}
!173 = !{i64 6489}
!174 = !{i64 6493}
!175 = !{i64 6497}
!176 = !{i64 6501}
!177 = !{i64 6505}
!178 = !{i64 6510}
!179 = !{i64 6514}
!180 = !{i64 6519}
!181 = !{i64 6523}
!182 = !{i64 6528}
!183 = !{i64 6533}
!184 = !{i64 6537}
!185 = !{i64 6552}
!186 = !{i64 6557}
!187 = !{i64 6565}
!188 = !{i64 6570}
!189 = !{i64 6580}
!190 = !{i64 6581}
!191 = !{i64 6593}
!192 = !{i64 6608}
!193 = !{i64 6636}
!194 = !{i64 6682}
!195 = !{i64 6687}
!196 = !{i64 6693}
!197 = !{i64 6698}
!198 = !{i64 6703}
!199 = !{i64 6709}
!200 = !{i64 6718}
!201 = !{i64 6720}
!202 = !{i64 6726}
!203 = !{i64 6749}
!204 = !{i64 6765}
!205 = !{i64 6788}
!206 = !{i64 6798}
!207 = !{i64 6799}
!208 = !{i64 6811}
!209 = !{i64 6826}
!210 = !{i64 6845}
!211 = !{i64 6853}
!212 = !{i64 6859}
!213 = !{i64 6865}
!214 = !{i64 6874}
!215 = !{i64 6876}
!216 = !{i64 6882}
!217 = !{i64 6883}
!218 = !{i64 6898}
!219 = !{i64 6918}
!220 = !{i64 6961}
!221 = !{i64 6970}
!222 = !{i64 6975}
!223 = !{i64 6997}
!224 = !{i64 7004}
!225 = !{i64 7010}
!226 = !{i64 7050}
!227 = !{i64 7055}
!228 = !{i64 7062}
!229 = !{i64 7071}
!230 = !{i64 7073}
!231 = !{i64 7079}
!232 = !{i64 7080}
!233 = !{i64 7097}
!234 = !{i64 7140}
!235 = !{i64 7149}
!236 = !{i64 7154}
!237 = !{i64 7145}
!238 = !{i64 7178}
!239 = !{i64 7203}
!240 = !{i64 7208}
!241 = !{i64 7210}
!242 = !{i64 7226}
!243 = !{i64 7236}
!244 = !{i64 7242}
!245 = !{i64 7266}
!246 = !{i64 7271}
!247 = !{i64 7273}
!248 = !{i64 7289}
!249 = !{i64 7299}
!250 = !{i64 7305}
!251 = !{i64 7325}
!252 = !{i64 7330}
!253 = !{i64 7334}
!254 = !{i64 7357}
!255 = !{i64 7385}
!256 = !{i64 7388}
!257 = !{i64 7406}
!258 = !{i64 7419}
!259 = !{i64 7437}
!260 = !{i64 7445}
!261 = !{i64 7451}
!262 = !{i64 7457}
!263 = !{i64 7474}
!264 = !{i64 7495}
!265 = !{i64 7510}
!266 = !{i64 7529}
!267 = !{i64 7539}
!268 = !{i64 7561}
!269 = !{i64 7571}
!270 = !{i64 7593}
!271 = !{i64 7603}
!272 = !{i64 7625}
!273 = !{i64 7635}
!274 = !{i64 7657}
!275 = !{i64 7667}
!276 = !{i64 7689}
!277 = !{i64 7699}
!278 = !{i64 7721}
!279 = !{i64 7728}
!280 = !{i64 7742}
!281 = !{i64 7752}
!282 = !{i64 7763}
!283 = !{i64 7776}
