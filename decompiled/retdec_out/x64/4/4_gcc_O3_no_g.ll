source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_401c = external local_unnamed_addr global i64
@global_var_2151 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_2161 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_2171 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_2181 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_2191 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_21a1 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_21b1 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_21c1 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_21d1 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_21e1 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_21f1 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_2202 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_2213 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_2224 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_2235 = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_2246 = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_2257 = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_2268 = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_2279 = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_228a = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_229b = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_4010 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_2008 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_2030 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_2058 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_2080 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_20a8 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_20d0 = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_2100 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_2130 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_23d0 = external local_unnamed_addr constant i128
@global_var_23e0 = external local_unnamed_addr constant i128
@global_var_23f0 = external local_unnamed_addr constant i128
@global_var_2400 = external local_unnamed_addr constant i128
@global_var_4018 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_22ac = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_22ca = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_22e6 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_2302 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_231d = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_233a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_2356 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_2373 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_238f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_23ab = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

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

define void @function_1070(i64* %d) local_unnamed_addr {
dec_label_pc_1070:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1080(i8* %s) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1090(i8* %s) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_10a0() local_unnamed_addr {
dec_label_pc_10a0:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @function_10b0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @varargs_func.cold(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_10c0:
  %rax.0.reg2mem = alloca i64, !insn.addr !11
  br label %dec_label_pc_10c5, !insn.addr !11

dec_label_pc_10c5:                                ; preds = %dec_label_pc_10c5, %dec_label_pc_10c0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = add i64 %rax.0.reload, 1, !insn.addr !12
  %1 = and i64 %0, 4294967295, !insn.addr !12
  %2 = icmp slt i64 %1, %arg1, !insn.addr !13
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !13
  br i1 %2, label %dec_label_pc_10c5, label %dec_label_pc_10d6, !insn.addr !13

dec_label_pc_10d6:                                ; preds = %dec_label_pc_10c5
  ret i64 %1, !insn.addr !14

; uselistorder directives
  uselistorder i64 %1, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0 }
}

define i64 @param_varargs.cold(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_10db:
  %rax.0.reg2mem = alloca i64, !insn.addr !15
  br label %dec_label_pc_10e0, !insn.addr !15

dec_label_pc_10e0:                                ; preds = %dec_label_pc_10e0, %dec_label_pc_10db
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = add i64 %rax.0.reload, 1, !insn.addr !16
  %1 = and i64 %0, 4294967295, !insn.addr !16
  %2 = icmp slt i64 %1, %arg1, !insn.addr !17
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !17
  br i1 %2, label %dec_label_pc_10e0, label %dec_label_pc_10f1, !insn.addr !17

dec_label_pc_10f1:                                ; preds = %dec_label_pc_10e0
  ret i64 %1, !insn.addr !18

; uselistorder directives
  uselistorder i64 %1, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i64 @test_calling_conventions(), !insn.addr !19
  %1 = call i64 @test_parameter_passing(), !insn.addr !20
  %2 = call i64 @test_return_values(), !insn.addr !21
  ret i64 0, !insn.addr !22
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1130:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !23
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !23
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !23
  %3 = call i32 @__libc_start_main(i64 4352, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !23
  %4 = call i64 @__asm_hlt(), !insn.addr !24
  unreachable, !insn.addr !24
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1160:
  ret i64 16416, !insn.addr !25
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1190:
  ret i64 0, !insn.addr !26
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16412 to i8*), align 4, !insn.addr !27
  %3 = icmp eq i8 %2, 0, !insn.addr !27
  %4 = icmp eq i1 %3, false, !insn.addr !28
  br i1 %4, label %dec_label_pc_1208, label %dec_label_pc_11dd, !insn.addr !28

dec_label_pc_11dd:                                ; preds = %dec_label_pc_11d0
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !29
  %6 = icmp eq i64 %5, 0, !insn.addr !29
  br i1 %6, label %dec_label_pc_11f7, label %dec_label_pc_11eb, !insn.addr !30

dec_label_pc_11eb:                                ; preds = %dec_label_pc_11dd
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !31
  %8 = inttoptr i64 %7 to i64*, !insn.addr !32
  call void @__cxa_finalize(i64* %8), !insn.addr !32
  br label %dec_label_pc_11f7, !insn.addr !32

dec_label_pc_11f7:                                ; preds = %dec_label_pc_11eb, %dec_label_pc_11dd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !33
  store i8 1, i8* bitcast (i64* @global_var_401c to i8*), align 8, !insn.addr !34
  ret i64 %9, !insn.addr !35

dec_label_pc_1208:                                ; preds = %dec_label_pc_11d0
  ret i64 %1, !insn.addr !36
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i64 @register_tm_clones(), !insn.addr !37
  ret i64 %0, !insn.addr !37
}

define i64 @func_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_1220:
  %0 = add i64 %arg1, 10, !insn.addr !38
  %1 = and i64 %0, 4294967295, !insn.addr !38
  ret i64 %1, !insn.addr !39
}

define i64 @param_varargs.constprop.0(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !40
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !41
  %2 = icmp eq i64 %0, %1, !insn.addr !41
  %3 = icmp eq i1 %2, false, !insn.addr !42
  br i1 %3, label %dec_label_pc_1298, label %dec_label_pc_1293, !insn.addr !42

dec_label_pc_1293:                                ; preds = %dec_label_pc_1230
  %4 = add i64 %arg3, %arg2, !insn.addr !43
  %5 = add i64 %4, %arg4, !insn.addr !44
  %6 = add i64 %5, %arg5, !insn.addr !45
  %7 = and i64 %6, 4294967295, !insn.addr !45
  ret i64 %7, !insn.addr !46

dec_label_pc_1298:                                ; preds = %dec_label_pc_1230
  call void @__stack_chk_fail(), !insn.addr !47
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !48
}

define i64 @varargs_func.constprop.0(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !49
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !50
  %2 = icmp eq i64 %0, %1, !insn.addr !50
  %3 = icmp eq i1 %2, false, !insn.addr !51
  br i1 %3, label %dec_label_pc_1311, label %dec_label_pc_130c, !insn.addr !51

dec_label_pc_130c:                                ; preds = %dec_label_pc_12a0
  %4 = add i64 %arg3, %arg2, !insn.addr !52
  %5 = add i64 %4, %arg4, !insn.addr !53
  %6 = add i64 %5, %arg5, !insn.addr !54
  %7 = add i64 %6, %arg6, !insn.addr !55
  %8 = and i64 %7, 4294967295, !insn.addr !55
  ret i64 %8, !insn.addr !56

dec_label_pc_1311:                                ; preds = %dec_label_pc_12a0
  call void @__stack_chk_fail(), !insn.addr !57
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !58
}

define i64 @func_b(i64 %arg1) local_unnamed_addr {
dec_label_pc_1320:
  %0 = mul i64 %arg1, 2, !insn.addr !59
  %1 = and i64 %0, 4294967294, !insn.addr !59
  ret i64 %1, !insn.addr !60
}

define i64 @cdecl_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1330:
  %0 = add i64 %arg2, %arg1, !insn.addr !61
  %1 = and i64 %0, 4294967295, !insn.addr !61
  ret i64 %1, !insn.addr !62
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_1340:
  ret i64 15, !insn.addr !63
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1350:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !64
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !64
  %2 = mul nsw i64 %1, %0, !insn.addr !64
  %3 = and i64 %2, 4294967295, !insn.addr !64
  ret i64 %3, !insn.addr !65
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_1360:
  ret i64 50, !insn.addr !66
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1370:
  %0 = add i64 %arg2, %arg1, !insn.addr !67
  %1 = add i64 %0, %arg3, !insn.addr !68
  %2 = and i64 %1, 4294967295, !insn.addr !68
  ret i64 %2, !insn.addr !69
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_1380:
  ret i64 6, !insn.addr !70
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_1390:
  ret i64 15, !insn.addr !71
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = add i64 %arg2, %arg1, !insn.addr !72
  %1 = add i64 %0, %arg3, !insn.addr !73
  %2 = add i64 %1, %arg4, !insn.addr !74
  %3 = add i64 %2, %arg5, !insn.addr !75
  %4 = and i64 %3, 4294967295, !insn.addr !75
  ret i64 %4, !insn.addr !76
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_13b0:
  ret i64 15, !insn.addr !77
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = add i64 %arg2, %arg1, !insn.addr !78
  %1 = add i64 %0, %arg3, !insn.addr !79
  %2 = add i64 %1, %arg4, !insn.addr !80
  %3 = and i64 %2, 4294967295, !insn.addr !80
  ret i64 %3, !insn.addr !81
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_13d0:
  ret i64 100, !insn.addr !82
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = add i64 %arg2, %arg1, !insn.addr !83
  %1 = add i64 %0, %arg3, !insn.addr !84
  %2 = add i64 %1, %arg4, !insn.addr !85
  %3 = add i64 %2, %arg5, !insn.addr !86
  %4 = add i64 %3, %arg6, !insn.addr !87
  %5 = and i64 %4, 4294967295, !insn.addr !87
  ret i64 %5, !insn.addr !88
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1400:
  ret i64 21, !insn.addr !89
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1410:
  %0 = add i64 %arg2, %arg1, !insn.addr !90
  %1 = add i64 %0, %arg3, !insn.addr !91
  %2 = add i64 %1, %arg4, !insn.addr !92
  %3 = add i64 %2, %arg5, !insn.addr !93
  %4 = and i64 %3, 4294967295, !insn.addr !93
  ret i64 %4, !insn.addr !94
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1420:
  ret i64 15, !insn.addr !95
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1430:
  %0 = add i64 %arg2, %arg1, !insn.addr !96
  %1 = add i64 %0, %arg3, !insn.addr !97
  %2 = add i64 %1, %arg4, !insn.addr !98
  %3 = and i64 %2, 4294967295, !insn.addr !98
  ret i64 %3, !insn.addr !99
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1440:
  ret i64 10, !insn.addr !100
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1450:
  ret i64 33, !insn.addr !101
}

define i64 @varargs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i64 %arg7) local_unnamed_addr {
dec_label_pc_1460:
  %r8.1.reg2mem = alloca i64, !insn.addr !102
  %rax.04.reg2mem = alloca i64, !insn.addr !102
  %rdx.05.reg2mem = alloca i64, !insn.addr !102
  %r8.06.reg2mem = alloca i32, !insn.addr !102
  %stack_var_16 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !103
  %1 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !104
  %2 = trunc i64 %arg1 to i32, !insn.addr !105
  %3 = icmp slt i32 %2, 1
  store i32 0, i32* %r8.06.reg2mem, !insn.addr !106
  store i64 8, i64* %rdx.05.reg2mem, !insn.addr !106
  store i64 0, i64* %rax.04.reg2mem, !insn.addr !106
  store i64 0, i64* %r8.1.reg2mem, !insn.addr !106
  br i1 %3, label %dec_label_pc_14e0, label %dec_label_pc_14cd, !insn.addr !106

dec_label_pc_14c8:                                ; preds = %dec_label_pc_14cd
  %4 = add nuw nsw i64 %rdx.05.reload, 8, !insn.addr !107
  %5 = and i64 %4, 4294967295, !insn.addr !107
  %6 = and i64 %9, 4294967295, !insn.addr !108
  %7 = trunc i64 %4 to i32, !insn.addr !109
  %8 = icmp ult i32 %7, 48
  store i32 %13, i32* %r8.06.reg2mem, !insn.addr !110
  store i64 %5, i64* %rdx.05.reg2mem, !insn.addr !110
  store i64 %6, i64* %rax.04.reg2mem, !insn.addr !110
  br i1 %8, label %dec_label_pc_14cd, label %dec_label_pc_1500, !insn.addr !110

dec_label_pc_14cd:                                ; preds = %dec_label_pc_1460, %dec_label_pc_14c8
  %rax.04.reload = load i64, i64* %rax.04.reg2mem
  %rdx.05.reload = load i64, i64* %rdx.05.reg2mem
  %r8.06.reload = load i32, i32* %r8.06.reg2mem
  %9 = add nuw nsw i64 %rax.04.reload, 1, !insn.addr !108
  %10 = add i64 %rdx.05.reload, %1, !insn.addr !111
  %11 = inttoptr i64 %10 to i32*, !insn.addr !111
  %12 = load i32, i32* %11, align 4, !insn.addr !111
  %13 = add i32 %12, %r8.06.reload, !insn.addr !111
  %14 = trunc i64 %9 to i32
  %15 = icmp eq i32 %2, %14, !insn.addr !112
  %16 = icmp eq i1 %15, false, !insn.addr !113
  br i1 %16, label %dec_label_pc_14c8, label %dec_label_pc_14e0.loopexit, !insn.addr !113

dec_label_pc_14e0.loopexit:                       ; preds = %dec_label_pc_14cd
  %17 = zext i32 %13 to i64, !insn.addr !111
  store i64 %17, i64* %r8.1.reg2mem
  br label %dec_label_pc_14e0

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14e0.loopexit, %dec_label_pc_1460, %dec_label_pc_1500, %29
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !114
  %19 = icmp eq i64 %0, %18, !insn.addr !114
  %20 = icmp eq i1 %19, false, !insn.addr !115
  br i1 %20, label %dec_label_pc_151d, label %dec_label_pc_14f0, !insn.addr !115

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14e0
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !116

dec_label_pc_1500:                                ; preds = %dec_label_pc_14c8
  %21 = zext i32 %13 to i64, !insn.addr !111
  %22 = add i64 %21, %arg7, !insn.addr !117
  %23 = and i64 %22, 4294967295, !insn.addr !117
  %24 = sub i32 0, %14
  %25 = sub i32 %24, 1
  %26 = sub i32 0, %2, !insn.addr !118
  %27 = icmp eq i32 %25, %26, !insn.addr !118
  %28 = icmp eq i1 %27, false, !insn.addr !119
  store i64 %23, i64* %r8.1.reg2mem, !insn.addr !119
  br i1 %28, label %29, label %dec_label_pc_14e0, !insn.addr !119

; <label>:29:                                     ; preds = %dec_label_pc_1500
  %30 = ptrtoint i64* %stack_var_16 to i64, !insn.addr !120
  %31 = call i64 @varargs_func.cold(i64 %arg1, i64 %rdx.05.reload, i64 %30), !insn.addr !119
  store i64 %23, i64* %r8.1.reg2mem, !insn.addr !119
  br label %dec_label_pc_14e0, !insn.addr !119

dec_label_pc_151d:                                ; preds = %dec_label_pc_14e0
  call void @__stack_chk_fail(), !insn.addr !121
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !122

; uselistorder directives
  uselistorder i64 %23, { 1, 0 }
  uselistorder i32 %13, { 1, 2, 0 }
  uselistorder i64 %rdx.05.reload, { 2, 1, 0 }
  uselistorder i32* %r8.06.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.05.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.04.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.1.reg2mem, { 4, 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_14e0, { 3, 2, 0, 1 }
  uselistorder label %dec_label_pc_14cd, { 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_1530:
  ret i64 42, !insn.addr !123
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_1540:
  %0 = add i64 %arg2, %arg1, !insn.addr !124
  %1 = add i64 %0, %arg3, !insn.addr !125
  %2 = add i64 %1, %arg4, !insn.addr !126
  %3 = add i64 %2, %arg5, !insn.addr !127
  %4 = add i64 %3, %arg6, !insn.addr !128
  %5 = trunc i64 %4 to i32, !insn.addr !128
  %6 = add i32 %5, %arg7, !insn.addr !129
  %7 = add i32 %6, %arg8, !insn.addr !130
  %8 = zext i32 %7 to i64, !insn.addr !130
  ret i64 %8, !insn.addr !131
}

define i64 @func_mixed_args(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1560:
  %0 = alloca i128
  %rbx.0.reg2mem = alloca i64, !insn.addr !132
  %xmm1.0.reg2mem = alloca i128, !insn.addr !132
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_movapd(i128 %1), !insn.addr !133
  %3 = and i64 %arg1, 4294967295, !insn.addr !134
  %4 = icmp eq i64 %arg2, 0, !insn.addr !135
  store i128 %2, i128* %xmm1.0.reg2mem, !insn.addr !136
  store i64 %3, i64* %rbx.0.reg2mem, !insn.addr !136
  br i1 %4, label %dec_label_pc_158e, label %dec_label_pc_1578, !insn.addr !136

dec_label_pc_1578:                                ; preds = %dec_label_pc_1560
  %5 = call i64 @__asm_movsd(i128 %1), !insn.addr !137
  %6 = inttoptr i64 %arg2 to i8*, !insn.addr !138
  %7 = call i32 @strlen(i8* %6), !insn.addr !138
  %8 = call i128 @__asm_movsd.1(i64 %5), !insn.addr !139
  %9 = trunc i64 %arg1 to i32, !insn.addr !140
  %10 = add i32 %7, %9, !insn.addr !140
  %11 = zext i32 %10 to i64, !insn.addr !140
  store i128 %8, i128* %xmm1.0.reg2mem, !insn.addr !140
  store i64 %11, i64* %rbx.0.reg2mem, !insn.addr !140
  br label %dec_label_pc_158e, !insn.addr !140

dec_label_pc_158e:                                ; preds = %dec_label_pc_1578, %dec_label_pc_1560
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %12 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !141
  %13 = trunc i64 %rbx.0.reload to i32, !insn.addr !142
  %14 = call i128 @__asm_cvtsi2sd(i32 %13), !insn.addr !142
  %15 = call i128 @__asm_addsd(i128 %14, i128 %xmm1.0.reload), !insn.addr !143
  %16 = call i128 @__asm_pxor(i128 %xmm1.0.reload, i128 %xmm1.0.reload), !insn.addr !144
  %17 = call i128 @__asm_cvtsi2sd.2(i64 %arg3), !insn.addr !145
  %18 = call i128 @__asm_addsd(i128 %15, i128 %17), !insn.addr !146
  %19 = call i32 @__asm_cvttsd2si(i128 %18), !insn.addr !147
  %20 = sext i32 %19 to i64, !insn.addr !147
  ret i64 %20, !insn.addr !148

; uselistorder directives
  uselistorder i128 %1, { 2, 3, 1, 0 }
}

define i64 @func_struct_byval(i128 %arg1) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %8 = call i128 @__asm_movdqu(i128 %7), !insn.addr !149
  %9 = call i128 @__asm_movdqu(i128 %arg1), !insn.addr !150
  %10 = call i128 @__asm_movdqu(i128 %6), !insn.addr !151
  %11 = call i128 @__asm_movdqu(i128 %5), !insn.addr !152
  %12 = call i128 @__asm_paddq(i128 %9, i128 %8), !insn.addr !153
  %13 = call i128 @__asm_movdqu(i128 %4), !insn.addr !154
  %14 = call i128 @__asm_movdqu(i128 %3), !insn.addr !155
  %15 = call i128 @__asm_paddq(i128 %12, i128 %10), !insn.addr !156
  %16 = call i128 @__asm_movdqu(i128 %2), !insn.addr !157
  %17 = call i128 @__asm_movdqu(i128 %1), !insn.addr !158
  %18 = call i128 @__asm_paddq(i128 %15, i128 %11), !insn.addr !159
  %19 = call i128 @__asm_paddq(i128 %18, i128 %13), !insn.addr !160
  %20 = call i128 @__asm_paddq(i128 %19, i128 %14), !insn.addr !161
  %21 = call i128 @__asm_paddq(i128 %20, i128 %16), !insn.addr !162
  %22 = call i128 @__asm_paddq(i128 %21, i128 %17), !insn.addr !163
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !164
  %24 = call i128 @__asm_psrldq(i128 %23, i8 8), !insn.addr !165
  %25 = call i128 @__asm_paddq(i128 %22, i128 %24), !insn.addr !166
  %26 = call i64 @__asm_movq(i128 %25), !insn.addr !167
  ret i64 %26, !insn.addr !168

; uselistorder directives
  uselistorder i128 %22, { 1, 0 }
  uselistorder i128* %0, { 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @func_struct_byptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1630:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !169
  br i1 %0, label %dec_label_pc_1640, label %dec_label_pc_1639, !insn.addr !170

dec_label_pc_1639:                                ; preds = %dec_label_pc_1630
  %1 = trunc i64 %arg1 to i32
  %2 = add i64 %arg1, 4, !insn.addr !171
  %3 = inttoptr i64 %2 to i32*, !insn.addr !171
  %4 = load i32, i32* %3, align 4, !insn.addr !171
  %5 = mul i32 %4, %1, !insn.addr !171
  %6 = zext i32 %5 to i64, !insn.addr !171
  ret i64 %6, !insn.addr !172

dec_label_pc_1640:                                ; preds = %dec_label_pc_1630
  ret i64 4294967295, !insn.addr !173

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2008 to i8*)), !insn.addr !174
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2151, i64 0, i64 0), i64 15), !insn.addr !175
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2161, i64 0, i64 0), i64 50), !insn.addr !176
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2171, i64 0, i64 0), i64 6), !insn.addr !177
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2181, i64 0, i64 0), i64 15), !insn.addr !178
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2191, i64 0, i64 0), i64 15), !insn.addr !179
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21a1, i64 0, i64 0), i64 100), !insn.addr !180
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21b1, i64 0, i64 0), i64 21), !insn.addr !181
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21c1, i64 0, i64 0), i64 15), !insn.addr !182
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21d1, i64 0, i64 0), i64 10), !insn.addr !183
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_21e1, i64 0, i64 0), i64 33), !insn.addr !184
  %11 = call i64 @varargs_func.constprop.0(i64 5, i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !185
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2030 to i8*)), !insn.addr !186
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2058 to i8*)), !insn.addr !187
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2080 to i8*)), !insn.addr !188
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20a8 to i8*)), !insn.addr !189
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20d0 to i8*)), !insn.addr !190
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2100 to i8*)), !insn.addr !191
  %18 = sext i32 %17 to i64, !insn.addr !191
  ret i64 %18, !insn.addr !191

; uselistorder directives
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_1810:
  %0 = mul i64 %arg1, 2, !insn.addr !192
  %1 = and i64 %0, 4294967294, !insn.addr !192
  ret i64 %1, !insn.addr !193
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1820:
  ret i64 15, !insn.addr !194
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1830:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !195
  %4 = inttoptr i64 %arg1 to i32*, !insn.addr !195
  store i32 %3, i32* %4, align 4, !insn.addr !195
  ret i64 1, !insn.addr !196
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1840:
  ret i64 11, !insn.addr !197
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_1850:
  ret i64 8, !insn.addr !198
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_1860:
  ret i64 8, !insn.addr !199
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_1870:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !200
  %3 = inttoptr i64 %2 to i8*, !insn.addr !200
  %4 = load i8, i8* %3, align 1, !insn.addr !200
  %sext = mul i64 %1, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !201
  %6 = sext i8 %4 to i64, !insn.addr !201
  %7 = add nsw i64 %5, %6, !insn.addr !201
  %8 = and i64 %7, 4294967295, !insn.addr !201
  ret i64 %8, !insn.addr !202
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_1880:
  ret i64 173, !insn.addr !203
}

define i64 @param_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1890:
  %merge.reg2mem = alloca i64, !insn.addr !204
  %rdi.0.reg2mem = alloca i64, !insn.addr !204
  %rax.0.reg2mem = alloca i64, !insn.addr !204
  %0 = trunc i64 %arg2 to i32, !insn.addr !205
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !206
  br i1 %1, label %dec_label_pc_18b9, label %dec_label_pc_1898, !insn.addr !206

dec_label_pc_1898:                                ; preds = %dec_label_pc_1890
  %2 = mul i64 %arg2, 8, !insn.addr !207
  %3 = add i64 %2, 34359738360, !insn.addr !207
  %4 = and i64 %3, 34359738360, !insn.addr !208
  %5 = add i64 %arg1, 8, !insn.addr !208
  %6 = add i64 %5, %4, !insn.addr !208
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !209
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !209
  br label %dec_label_pc_18a8, !insn.addr !209

dec_label_pc_18a8:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_1898
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = inttoptr i64 %rdi.0.reload to i64*, !insn.addr !210
  %8 = load i64, i64* %7, align 8, !insn.addr !210
  %9 = add i64 %rdi.0.reload, 8, !insn.addr !211
  %10 = inttoptr i64 %8 to i8*, !insn.addr !212
  %11 = load i8, i8* %10, align 1, !insn.addr !212
  %12 = sext i8 %11 to i64, !insn.addr !213
  %13 = add nsw i64 %rax.0.reload, %12, !insn.addr !213
  %14 = and i64 %13, 4294967295, !insn.addr !213
  %15 = icmp eq i64 %6, %9, !insn.addr !214
  %16 = icmp eq i1 %15, false, !insn.addr !215
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !215
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !215
  store i64 %14, i64* %merge.reg2mem, !insn.addr !215
  br i1 %16, label %dec_label_pc_18a8, label %dec_label_pc_18b9, !insn.addr !215

dec_label_pc_18b9:                                ; preds = %dec_label_pc_18a8, %dec_label_pc_1890
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !216

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 34359738360, { 1, 0 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_18d0:
  ret i64 300, !insn.addr !217
}

define i64 @param_varargs(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i64 %arg7) local_unnamed_addr {
dec_label_pc_18e0:
  %r8.1.reg2mem = alloca i64, !insn.addr !218
  %rax.04.reg2mem = alloca i64, !insn.addr !218
  %rdx.05.reg2mem = alloca i64, !insn.addr !218
  %r8.06.reg2mem = alloca i32, !insn.addr !218
  %stack_var_16 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !219
  %1 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !220
  %2 = trunc i64 %arg1 to i32, !insn.addr !221
  %3 = icmp slt i32 %2, 1
  store i32 0, i32* %r8.06.reg2mem, !insn.addr !222
  store i64 8, i64* %rdx.05.reg2mem, !insn.addr !222
  store i64 0, i64* %rax.04.reg2mem, !insn.addr !222
  store i64 0, i64* %r8.1.reg2mem, !insn.addr !222
  br i1 %3, label %dec_label_pc_1960, label %dec_label_pc_194d, !insn.addr !222

dec_label_pc_1948:                                ; preds = %dec_label_pc_194d
  %4 = add nuw nsw i64 %rdx.05.reload, 8, !insn.addr !223
  %5 = and i64 %4, 4294967295, !insn.addr !223
  %6 = and i64 %9, 4294967295, !insn.addr !224
  %7 = trunc i64 %4 to i32, !insn.addr !225
  %8 = icmp ult i32 %7, 48
  store i32 %13, i32* %r8.06.reg2mem, !insn.addr !226
  store i64 %5, i64* %rdx.05.reg2mem, !insn.addr !226
  store i64 %6, i64* %rax.04.reg2mem, !insn.addr !226
  br i1 %8, label %dec_label_pc_194d, label %dec_label_pc_1980, !insn.addr !226

dec_label_pc_194d:                                ; preds = %dec_label_pc_18e0, %dec_label_pc_1948
  %rax.04.reload = load i64, i64* %rax.04.reg2mem
  %rdx.05.reload = load i64, i64* %rdx.05.reg2mem
  %r8.06.reload = load i32, i32* %r8.06.reg2mem
  %9 = add nuw nsw i64 %rax.04.reload, 1, !insn.addr !224
  %10 = add i64 %rdx.05.reload, %1, !insn.addr !227
  %11 = inttoptr i64 %10 to i32*, !insn.addr !227
  %12 = load i32, i32* %11, align 4, !insn.addr !227
  %13 = add i32 %12, %r8.06.reload, !insn.addr !227
  %14 = trunc i64 %9 to i32
  %15 = icmp eq i32 %2, %14, !insn.addr !228
  %16 = icmp eq i1 %15, false, !insn.addr !229
  br i1 %16, label %dec_label_pc_1948, label %dec_label_pc_1960.loopexit, !insn.addr !229

dec_label_pc_1960.loopexit:                       ; preds = %dec_label_pc_194d
  %17 = zext i32 %13 to i64, !insn.addr !227
  store i64 %17, i64* %r8.1.reg2mem
  br label %dec_label_pc_1960

dec_label_pc_1960:                                ; preds = %dec_label_pc_1960.loopexit, %dec_label_pc_18e0, %dec_label_pc_1980, %29
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !230
  %19 = icmp eq i64 %0, %18, !insn.addr !230
  %20 = icmp eq i1 %19, false, !insn.addr !231
  br i1 %20, label %dec_label_pc_199d, label %dec_label_pc_1970, !insn.addr !231

dec_label_pc_1970:                                ; preds = %dec_label_pc_1960
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  ret i64 %r8.1.reload, !insn.addr !232

dec_label_pc_1980:                                ; preds = %dec_label_pc_1948
  %21 = zext i32 %13 to i64, !insn.addr !227
  %22 = add i64 %21, %arg7, !insn.addr !233
  %23 = and i64 %22, 4294967295, !insn.addr !233
  %24 = sub i32 0, %14
  %25 = sub i32 %24, 1
  %26 = sub i32 0, %2, !insn.addr !234
  %27 = icmp eq i32 %25, %26, !insn.addr !234
  %28 = icmp eq i1 %27, false, !insn.addr !235
  store i64 %23, i64* %r8.1.reg2mem, !insn.addr !235
  br i1 %28, label %29, label %dec_label_pc_1960, !insn.addr !235

; <label>:29:                                     ; preds = %dec_label_pc_1980
  %30 = ptrtoint i64* %stack_var_16 to i64, !insn.addr !236
  %31 = call i64 @param_varargs.cold(i64 %arg1, i64 %rdx.05.reload, i64 %30), !insn.addr !235
  store i64 %23, i64* %r8.1.reg2mem, !insn.addr !235
  br label %dec_label_pc_1960, !insn.addr !235

dec_label_pc_199d:                                ; preds = %dec_label_pc_1960
  call void @__stack_chk_fail(), !insn.addr !237
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !238

; uselistorder directives
  uselistorder i64 %23, { 1, 0 }
  uselistorder i32 %13, { 1, 2, 0 }
  uselistorder i64 %rdx.05.reload, { 2, 1, 0 }
  uselistorder i32* %r8.06.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.05.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.04.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.1.reg2mem, { 4, 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_1960, { 3, 2, 0, 1 }
  uselistorder label %dec_label_pc_194d, { 1, 0 }
}

define i64 @call_varargs_param() local_unnamed_addr {
dec_label_pc_19b0:
  %0 = call i64 @param_varargs.constprop.0(i64 4, i64 10, i64 20, i64 30, i64 40), !insn.addr !239
  ret i64 %0, !insn.addr !239
}

define i64 @param_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !240
  %3 = and i64 %2, 4294967295, !insn.addr !240
  ret i64 %3, !insn.addr !241
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1a00:
  ret i64 20, !insn.addr !242
}

define i64 @param_double_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !243
  br i1 %0, label %dec_label_pc_1a30, label %dec_label_pc_1a21, !insn.addr !244

dec_label_pc_1a21:                                ; preds = %dec_label_pc_1a10
  %1 = trunc i64 %arg2 to i32, !insn.addr !245
  %2 = inttoptr i64 %arg1 to i32*, !insn.addr !245
  store i32 %1, i32* %2, align 4, !insn.addr !245
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !246
  store i64 0, i64* %3, align 8, !insn.addr !246
  ret i64 1, !insn.addr !247

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a10
  ret i64 4294967295, !insn.addr !248

; uselistorder directives
  uselistorder i64 1, { 0, 2, 7, 1, 6, 3, 4, 5 }
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1a40:
  ret i64 21, !insn.addr !249
}

define i64 @param_complex_cast(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = trunc i64 %arg2 to i32, !insn.addr !250
  %1 = icmp eq i32 %0, 0, !insn.addr !250
  br i1 %1, label %dec_label_pc_1a68, label %dec_label_pc_1a58, !insn.addr !251

dec_label_pc_1a58:                                ; preds = %dec_label_pc_1a50
  %2 = icmp eq i32 %0, 1, !insn.addr !252
  %3 = icmp eq i1 %2, false, !insn.addr !253
  br i1 %3, label %dec_label_pc_1a70, label %dec_label_pc_1a5d, !insn.addr !253

dec_label_pc_1a5d:                                ; preds = %dec_label_pc_1a58
  %4 = trunc i64 %arg1 to i32
  %5 = add i64 %arg1, 4, !insn.addr !254
  %6 = inttoptr i64 %5 to i32*, !insn.addr !254
  %7 = load i32, i32* %6, align 4, !insn.addr !254
  %8 = add i32 %7, %4, !insn.addr !255
  %9 = zext i32 %8 to i64, !insn.addr !255
  ret i64 %9, !insn.addr !256

dec_label_pc_1a68:                                ; preds = %dec_label_pc_1a50
  %10 = and i64 %arg1, 4294967295, !insn.addr !257
  ret i64 %10, !insn.addr !258

dec_label_pc_1a70:                                ; preds = %dec_label_pc_1a58
  ret i64 4294967295, !insn.addr !259

; uselistorder directives
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1a80:
  ret i64 305419896, !insn.addr !260
}

define i64 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !261
  %3 = zext i32 %2 to i64, !insn.addr !261
  ret i64 %3, !insn.addr !262
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1aa0:
  ret i64 15, !insn.addr !263
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = add i64 %arg2, %arg1, !insn.addr !264
  %1 = and i64 %0, 4294967295, !insn.addr !264
  ret i64 %1, !insn.addr !265
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_1ac0:
  ret i64 4, !insn.addr !266
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2130 to i8*)), !insn.addr !267
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21f1, i64 0, i64 0), i64 15), !insn.addr !268
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2202, i64 0, i64 0), i64 11), !insn.addr !269
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2213, i64 0, i64 0), i64 8), !insn.addr !270
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2224, i64 0, i64 0), i64 173), !insn.addr !271
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2235, i64 0, i64 0), i64 300), !insn.addr !272
  %6 = call i64 @param_varargs.constprop.0(i64 4, i64 10, i64 20, i64 30, i64 40), !insn.addr !273
  %7 = and i64 %6, 4294967295, !insn.addr !274
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2246, i64 0, i64 0), i64 %7), !insn.addr !275
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2257, i64 0, i64 0), i64 20), !insn.addr !276
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2268, i64 0, i64 0), i64 21), !insn.addr !277
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2279, i64 0, i64 0), i64 305419896), !insn.addr !278
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_228a, i64 0, i64 0), i64 15), !insn.addr !279
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_229b, i64 0, i64 0), i64 4), !insn.addr !280
  %14 = sext i32 %13 to i64, !insn.addr !280
  ret i64 %14, !insn.addr !280

; uselistorder directives
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 300, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 7, 5, 0, 8, 9, 2, 3, 4, 6, 1 }
  uselistorder i64 11, { 1, 0 }
  uselistorder i64 15, { 6, 7, 0, 1, 8, 9, 10, 11, 2, 3, 4, 5 }
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = mul i64 %arg1, 2, !insn.addr !281
  %1 = and i64 %0, 4294967294, !insn.addr !281
  ret i64 %1, !insn.addr !282
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1c20:
  ret i64 42, !insn.addr !283
}

define i64 @ret_pointer(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = add i64 %arg1, 4, !insn.addr !284
  ret i64 %0, !insn.addr !285
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_1c40:
  ret i64 20, !insn.addr !286

; uselistorder directives
  uselistorder i64 20, { 0, 2, 3, 1, 4 }
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1c50:
  %0 = trunc i64 %arg1 to i32, !insn.addr !287
  %1 = call i128 @__asm_movd(i32 %0), !insn.addr !287
  %2 = trunc i64 %arg2 to i32, !insn.addr !288
  %3 = call i128 @__asm_movd(i32 %2), !insn.addr !288
  %4 = call i128 @__asm_punpckldq(i128 %1, i128 %3), !insn.addr !289
  %5 = call i64 @__asm_movq(i128 %4), !insn.addr !290
  ret i64 %5, !insn.addr !291
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1c70:
  ret i64 7, !insn.addr !292
}

define i64 @ret_large_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1c80:
  %rdi = alloca i64, align 8
  %0 = trunc i64 %arg2 to i32, !insn.addr !293
  %1 = call i128 @__asm_movd(i32 %0), !insn.addr !293
  %2 = load i128, i128* @global_var_23d0, align 8, !insn.addr !294
  %3 = call i128 @__asm_movdqa(i128 %2), !insn.addr !294
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !295
  %5 = load i128, i128* @global_var_23e0, align 8, !insn.addr !296
  %6 = call i128 @__asm_movdqa(i128 %5), !insn.addr !296
  %7 = call i128 @__asm_pshufd(i128 %1, i8 0), !insn.addr !297
  %8 = load i128, i128* @global_var_23f0, align 8, !insn.addr !298
  %9 = call i128 @__asm_movdqa(i128 %8), !insn.addr !298
  %10 = call i128 @__asm_paddd(i128 %3, i128 %7), !insn.addr !299
  %11 = call i128 @__asm_paddd(i128 %6, i128 %7), !insn.addr !300
  %12 = call i128 @__asm_paddd(i128 %9, i128 %7), !insn.addr !301
  %13 = bitcast i64* %rdi to i128*
  %14 = load i128, i128* %13, align 8, !insn.addr !302
  call void @__asm_movups(i128 %14, i128 %10), !insn.addr !302
  %15 = load i128, i128* @global_var_2400, align 8, !insn.addr !303
  %16 = call i128 @__asm_paddd(i128 %7, i128 %15), !insn.addr !303
  %17 = add i64 %arg1, 16, !insn.addr !304
  %18 = inttoptr i64 %17 to i128*, !insn.addr !304
  %19 = load i128, i128* %18, align 8, !insn.addr !304
  call void @__asm_movups(i128 %19, i128 %11), !insn.addr !304
  %20 = add i64 %arg1, 32, !insn.addr !305
  %21 = inttoptr i64 %20 to i128*, !insn.addr !305
  %22 = load i128, i128* %21, align 8, !insn.addr !305
  call void @__asm_movups(i128 %22, i128 %12), !insn.addr !305
  %23 = add i64 %arg1, 48, !insn.addr !306
  %24 = inttoptr i64 %23 to i128*, !insn.addr !306
  %25 = load i128, i128* %24, align 8, !insn.addr !306
  call void @__asm_movups(i128 %25, i128 %16), !insn.addr !306
  %26 = call i64 @__readfsqword(i64 40), !insn.addr !307
  %27 = icmp eq i64 %4, %26, !insn.addr !307
  %28 = icmp eq i1 %27, false, !insn.addr !308
  br i1 %28, label %dec_label_pc_1cf4, label %dec_label_pc_1cef, !insn.addr !308

dec_label_pc_1cef:                                ; preds = %dec_label_pc_1c80
  ret i64 %arg1, !insn.addr !309

dec_label_pc_1cf4:                                ; preds = %dec_label_pc_1c80
  call void @__stack_chk_fail(), !insn.addr !310
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !311

; uselistorder directives
  uselistorder i128 %7, { 3, 2, 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 0 }
  uselistorder void ()* @__stack_chk_fail, { 0, 2, 3, 1, 4, 5 }
  uselistorder i64 32, { 2, 0, 1 }
  uselistorder i64 %arg1, { 0, 2, 1, 3 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1d00:
  ret i64 215, !insn.addr !312
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d10:
  %0 = trunc i64 %arg1 to i32, !insn.addr !313
  %1 = icmp eq i32 %0, 0, !insn.addr !313
  %2 = select i1 %1, i64 4640, i64 4896, !insn.addr !314
  ret i64 %2, !insn.addr !315
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1d30:
  ret i64 10, !insn.addr !316
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d40:
  %0 = trunc i64 %arg1 to i32, !insn.addr !317
  %1 = icmp eq i32 %0, 0, !insn.addr !317
  %2 = icmp eq i1 %1, false, !insn.addr !318
  %3 = select i1 %2, i64 ptrtoint (i64* @global_var_4010 to i64), i64 ptrtoint (i32* @global_var_4018 to i64), !insn.addr !318
  ret i64 %3, !insn.addr !319

; uselistorder directives
  uselistorder i1 false, { 0, 1, 2, 3, 11, 4, 5, 6, 12, 7, 10, 9, 8 }
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1d60:
  %0 = load i32, i32* @global_var_4018, align 4, !insn.addr !320
  %1 = zext i32 %0 to i64, !insn.addr !320
  ret i64 %1, !insn.addr !321

; uselistorder directives
  uselistorder i32* @global_var_4018, { 1, 0 }
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1d70:
  %0 = mul i64 %arg3, 2, !insn.addr !322
  %1 = add i64 %arg3, 10, !insn.addr !323
  %2 = trunc i64 %arg1 to i32, !insn.addr !324
  %3 = trunc i64 %arg2 to i32, !insn.addr !324
  %4 = sub i32 %2, %3, !insn.addr !324
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !324
  %7 = xor i32 %4, %2, !insn.addr !324
  %8 = and i32 %7, %6, !insn.addr !324
  %9 = icmp slt i32 %8, 0, !insn.addr !324
  %10 = icmp eq i32 %4, 0, !insn.addr !324
  %11 = icmp slt i32 %4, 0, !insn.addr !324
  %12 = icmp ne i1 %11, %9, !insn.addr !325
  %13 = or i1 %10, %12, !insn.addr !325
  %14 = select i1 %13, i64 %1, i64 %0, !insn.addr !325
  %15 = and i64 %14, 4294967295, !insn.addr !325
  ret i64 %15, !insn.addr !326

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 4, 2, 0, 5, 3, 1 }
  uselistorder i64 10, { 2, 0, 5, 3, 6, 7, 1, 4 }
  uselistorder i64 %arg3, { 1, 0 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1d80:
  ret i64 40, !insn.addr !327

; uselistorder directives
  uselistorder i64 40, { 0, 3, 4, 1, 2, 5, 6, 7, 8, 9, 10, 11, 12 }
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d90:
  %rax.0.reg2mem = alloca i64, !insn.addr !328
  %0 = trunc i64 %arg1 to i32, !insn.addr !329
  %1 = icmp ult i32 %0, 3
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !330
  br i1 %1, label %dec_label_pc_1d9e, label %dec_label_pc_1da4, !insn.addr !330

dec_label_pc_1d9e:                                ; preds = %dec_label_pc_1d90
  %2 = mul i64 %arg1, 4, !insn.addr !331
  %3 = add i64 %arg1, 5, !insn.addr !331
  %4 = add i64 %3, %2, !insn.addr !331
  %5 = mul i64 %4, 2, !insn.addr !332
  %6 = and i64 %5, 4294967294, !insn.addr !332
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !332
  br label %dec_label_pc_1da4, !insn.addr !332

dec_label_pc_1da4:                                ; preds = %dec_label_pc_1d90, %dec_label_pc_1d9e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !333

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 2, { 0, 1, 2, 3, 5, 4 }
  uselistorder i64 5, { 2, 1, 0 }
  uselistorder i64 4, { 0, 6, 2, 3, 1, 7, 4, 5, 8 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1da4, { 1, 0 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1db0:
  ret i64 60, !insn.addr !334
}

define i64 @ret_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = mul i64 %arg1, 3, !insn.addr !335
  %1 = and i64 %0, 4294967295, !insn.addr !335
  %2 = trunc i64 %0 to i32, !insn.addr !336
  %3 = inttoptr i64 %arg2 to i32*, !insn.addr !336
  store i32 %2, i32* %3, align 4, !insn.addr !336
  ret i64 %1, !insn.addr !337

; uselistorder directives
  uselistorder i64 4294967295, { 5, 0, 6, 7, 8, 1, 4, 2, 9, 10, 12, 11, 13, 14, 3, 15, 16, 18, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1dd0:
  ret i64 21, !insn.addr !338

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_1de0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_22ac to i8*)), !insn.addr !339
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22ca to i8*)), !insn.addr !340
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22e6 to i8*)), !insn.addr !341
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2302 to i8*)), !insn.addr !342
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_231d to i8*)), !insn.addr !343
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_233a to i8*)), !insn.addr !344
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2356 to i8*)), !insn.addr !345
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2373 to i8*)), !insn.addr !346
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_238f to i8*)), !insn.addr !347
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_23ab to i8*)), !insn.addr !348
  %10 = sext i32 %9 to i64, !insn.addr !348
  ret i64 %10, !insn.addr !348

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 0, 1, 2, 4, 3, 6, 5, 8, 7, 9, 11, 10, 13, 12, 14, 16, 15, 18, 17, 20, 19, 21, 27, 26, 33, 32, 35, 34, 25, 24, 23, 22, 31, 30, 29, 28, 36 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2, 3 }
  uselistorder i64 0, { 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 87, 88, 0, 1, 3, 2, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 89, 90, 4, 5, 91, 7, 8, 6, 92, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1ed4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !349

; uselistorder directives
  uselistorder i32 1, { 6, 27, 28, 29, 30, 31, 32, 33, 34, 35, 8, 67, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 7, 47, 5, 25, 48, 69, 68, 12, 11, 10, 9, 49, 15, 14, 13, 4, 3, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 1, 17, 16, 0, 26, 66, 71, 70, 21, 20, 19, 18, 2, 72, 22, 23, 24 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movapd(i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_movsd.1(i64) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd(i32) local_unnamed_addr

declare i128 @__asm_addsd(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd.2(i64) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i128 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_paddq(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_psrldq(i128, i8) local_unnamed_addr

declare i64 @__asm_movq(i128) local_unnamed_addr

declare i128 @__asm_movd(i32) local_unnamed_addr

declare i128 @__asm_punpckldq(i128, i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4212}
!7 = !{i64 4228}
!8 = !{i64 4244}
!9 = !{i64 4260}
!10 = !{i64 4276}
!11 = !{i64 4288}
!12 = !{i64 4296}
!13 = !{i64 4308}
!14 = !{i64 4310}
!15 = !{i64 4315}
!16 = !{i64 4323}
!17 = !{i64 4335}
!18 = !{i64 4337}
!19 = !{i64 4362}
!20 = !{i64 4369}
!21 = !{i64 4376}
!22 = !{i64 4387}
!23 = !{i64 4431}
!24 = !{i64 4437}
!25 = !{i64 4488}
!26 = !{i64 4552}
!27 = !{i64 4564}
!28 = !{i64 4571}
!29 = !{i64 4574}
!30 = !{i64 4585}
!31 = !{i64 4587}
!32 = !{i64 4594}
!33 = !{i64 4599}
!34 = !{i64 4604}
!35 = !{i64 4612}
!36 = !{i64 4616}
!37 = !{i64 4628}
!38 = !{i64 4644}
!39 = !{i64 4647}
!40 = !{i64 4685}
!41 = !{i64 4744}
!42 = !{i64 4753}
!43 = !{i64 4727}
!44 = !{i64 4731}
!45 = !{i64 4735}
!46 = !{i64 4759}
!47 = !{i64 4760}
!48 = !{i64 4765}
!49 = !{i64 4802}
!50 = !{i64 4865}
!51 = !{i64 4874}
!52 = !{i64 4844}
!53 = !{i64 4848}
!54 = !{i64 4852}
!55 = !{i64 4856}
!56 = !{i64 4880}
!57 = !{i64 4881}
!58 = !{i64 4886}
!59 = !{i64 4900}
!60 = !{i64 4903}
!61 = !{i64 4916}
!62 = !{i64 4919}
!63 = !{i64 4937}
!64 = !{i64 4950}
!65 = !{i64 4953}
!66 = !{i64 4969}
!67 = !{i64 4980}
!68 = !{i64 4982}
!69 = !{i64 4985}
!70 = !{i64 5001}
!71 = !{i64 5017}
!72 = !{i64 5028}
!73 = !{i64 5030}
!74 = !{i64 5032}
!75 = !{i64 5034}
!76 = !{i64 5038}
!77 = !{i64 5049}
!78 = !{i64 5060}
!79 = !{i64 5062}
!80 = !{i64 5064}
!81 = !{i64 5067}
!82 = !{i64 5081}
!83 = !{i64 5092}
!84 = !{i64 5094}
!85 = !{i64 5096}
!86 = !{i64 5098}
!87 = !{i64 5101}
!88 = !{i64 5105}
!89 = !{i64 5129}
!90 = !{i64 5140}
!91 = !{i64 5142}
!92 = !{i64 5144}
!93 = !{i64 5146}
!94 = !{i64 5150}
!95 = !{i64 5161}
!96 = !{i64 5172}
!97 = !{i64 5174}
!98 = !{i64 5176}
!99 = !{i64 5179}
!100 = !{i64 5193}
!101 = !{i64 5209}
!102 = !{i64 5216}
!103 = !{i64 5249}
!104 = !{i64 5282}
!105 = !{i64 5292}
!106 = !{i64 5294}
!107 = !{i64 5330}
!108 = !{i64 5327}
!109 = !{i64 5320}
!110 = !{i64 5323}
!111 = !{i64 5333}
!112 = !{i64 5337}
!113 = !{i64 5339}
!114 = !{i64 5349}
!115 = !{i64 5358}
!116 = !{i64 5367}
!117 = !{i64 5383}
!118 = !{i64 5386}
!119 = !{i64 5388}
!120 = !{i64 5379}
!121 = !{i64 5405}
!122 = !{i64 5421}
!123 = !{i64 5433}
!124 = !{i64 5444}
!125 = !{i64 5446}
!126 = !{i64 5448}
!127 = !{i64 5450}
!128 = !{i64 5453}
!129 = !{i64 5457}
!130 = !{i64 5461}
!131 = !{i64 5465}
!132 = !{i64 5472}
!133 = !{i64 5477}
!134 = !{i64 5485}
!135 = !{i64 5491}
!136 = !{i64 5494}
!137 = !{i64 5499}
!138 = !{i64 5505}
!139 = !{i64 5510}
!140 = !{i64 5516}
!141 = !{i64 5518}
!142 = !{i64 5526}
!143 = !{i64 5531}
!144 = !{i64 5535}
!145 = !{i64 5539}
!146 = !{i64 5545}
!147 = !{i64 5549}
!148 = !{i64 5553}
!149 = !{i64 5572}
!150 = !{i64 5578}
!151 = !{i64 5584}
!152 = !{i64 5590}
!153 = !{i64 5596}
!154 = !{i64 5600}
!155 = !{i64 5606}
!156 = !{i64 5612}
!157 = !{i64 5616}
!158 = !{i64 5622}
!159 = !{i64 5628}
!160 = !{i64 5632}
!161 = !{i64 5636}
!162 = !{i64 5640}
!163 = !{i64 5644}
!164 = !{i64 5648}
!165 = !{i64 5652}
!166 = !{i64 5657}
!167 = !{i64 5661}
!168 = !{i64 5666}
!169 = !{i64 5684}
!170 = !{i64 5687}
!171 = !{i64 5691}
!172 = !{i64 5695}
!173 = !{i64 5701}
!174 = !{i64 5727}
!175 = !{i64 5751}
!176 = !{i64 5775}
!177 = !{i64 5799}
!178 = !{i64 5823}
!179 = !{i64 5847}
!180 = !{i64 5871}
!181 = !{i64 5895}
!182 = !{i64 5919}
!183 = !{i64 5943}
!184 = !{i64 5967}
!185 = !{i64 6006}
!186 = !{i64 6027}
!187 = !{i64 6051}
!188 = !{i64 6075}
!189 = !{i64 6099}
!190 = !{i64 6123}
!191 = !{i64 6151}
!192 = !{i64 6164}
!193 = !{i64 6167}
!194 = !{i64 6185}
!195 = !{i64 6196}
!196 = !{i64 6203}
!197 = !{i64 6217}
!198 = !{i64 6233}
!199 = !{i64 6249}
!200 = !{i64 6263}
!201 = !{i64 6267}
!202 = !{i64 6269}
!203 = !{i64 6281}
!204 = !{i64 6288}
!205 = !{i64 6292}
!206 = !{i64 6294}
!207 = !{i64 6296}
!208 = !{i64 6299}
!209 = !{i64 6306}
!210 = !{i64 6312}
!211 = !{i64 6315}
!212 = !{i64 6319}
!213 = !{i64 6322}
!214 = !{i64 6324}
!215 = !{i64 6327}
!216 = !{i64 6329}
!217 = !{i64 6361}
!218 = !{i64 6368}
!219 = !{i64 6401}
!220 = !{i64 6434}
!221 = !{i64 6444}
!222 = !{i64 6446}
!223 = !{i64 6482}
!224 = !{i64 6479}
!225 = !{i64 6472}
!226 = !{i64 6475}
!227 = !{i64 6485}
!228 = !{i64 6489}
!229 = !{i64 6491}
!230 = !{i64 6501}
!231 = !{i64 6510}
!232 = !{i64 6519}
!233 = !{i64 6535}
!234 = !{i64 6538}
!235 = !{i64 6540}
!236 = !{i64 6531}
!237 = !{i64 6557}
!238 = !{i64 6573}
!239 = !{i64 6608}
!240 = !{i64 6644}
!241 = !{i64 6647}
!242 = !{i64 6665}
!243 = !{i64 6676}
!244 = !{i64 6679}
!245 = !{i64 6689}
!246 = !{i64 6696}
!247 = !{i64 6703}
!248 = !{i64 6709}
!249 = !{i64 6729}
!250 = !{i64 6740}
!251 = !{i64 6742}
!252 = !{i64 6744}
!253 = !{i64 6747}
!254 = !{i64 6749}
!255 = !{i64 6752}
!256 = !{i64 6754}
!257 = !{i64 6760}
!258 = !{i64 6762}
!259 = !{i64 6773}
!260 = !{i64 6793}
!261 = !{i64 6808}
!262 = !{i64 6812}
!263 = !{i64 6825}
!264 = !{i64 6836}
!265 = !{i64 6839}
!266 = !{i64 6857}
!267 = !{i64 6879}
!268 = !{i64 6903}
!269 = !{i64 6927}
!270 = !{i64 6951}
!271 = !{i64 6975}
!272 = !{i64 6999}
!273 = !{i64 7032}
!274 = !{i64 7049}
!275 = !{i64 7053}
!276 = !{i64 7077}
!277 = !{i64 7101}
!278 = !{i64 7125}
!279 = !{i64 7149}
!280 = !{i64 7177}
!281 = !{i64 7188}
!282 = !{i64 7191}
!283 = !{i64 7209}
!284 = !{i64 7220}
!285 = !{i64 7224}
!286 = !{i64 7241}
!287 = !{i64 7252}
!288 = !{i64 7256}
!289 = !{i64 7260}
!290 = !{i64 7264}
!291 = !{i64 7269}
!292 = !{i64 7289}
!293 = !{i64 7304}
!294 = !{i64 7311}
!295 = !{i64 7319}
!296 = !{i64 7335}
!297 = !{i64 7343}
!298 = !{i64 7348}
!299 = !{i64 7356}
!300 = !{i64 7360}
!301 = !{i64 7364}
!302 = !{i64 7368}
!303 = !{i64 7371}
!304 = !{i64 7379}
!305 = !{i64 7383}
!306 = !{i64 7387}
!307 = !{i64 7396}
!308 = !{i64 7405}
!309 = !{i64 7411}
!310 = !{i64 7412}
!311 = !{i64 7417}
!312 = !{i64 7433}
!313 = !{i64 7444}
!314 = !{i64 7460}
!315 = !{i64 7464}
!316 = !{i64 7481}
!317 = !{i64 7492}
!318 = !{i64 7508}
!319 = !{i64 7512}
!320 = !{i64 7524}
!321 = !{i64 7530}
!322 = !{i64 7540}
!323 = !{i64 7543}
!324 = !{i64 7546}
!325 = !{i64 7548}
!326 = !{i64 7551}
!327 = !{i64 7561}
!328 = !{i64 7568}
!329 = !{i64 7577}
!330 = !{i64 7580}
!331 = !{i64 7582}
!332 = !{i64 7586}
!333 = !{i64 7588}
!334 = !{i64 7609}
!335 = !{i64 7620}
!336 = !{i64 7623}
!337 = !{i64 7625}
!338 = !{i64 7641}
!339 = !{i64 7663}
!340 = !{i64 7687}
!341 = !{i64 7711}
!342 = !{i64 7735}
!343 = !{i64 7759}
!344 = !{i64 7783}
!345 = !{i64 7808}
!346 = !{i64 7832}
!347 = !{i64 7856}
!348 = !{i64 7884}
!349 = !{i64 7904}
