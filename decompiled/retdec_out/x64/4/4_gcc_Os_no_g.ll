source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_401c = external local_unnamed_addr global i64
@global_var_2025 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_2035 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_2045 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_2055 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_2065 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_2075 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_2085 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_2095 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_20a5 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_20b5 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_23c0 = local_unnamed_addr constant i64 4614253070214989087
@global_var_2136 = constant [5 x i8] c"test\00"
@global_var_21bc = constant [4 x i8] c"abc\00"
@global_var_21c0 = local_unnamed_addr constant [4 x i8] c"def\00"
@global_var_21c4 = local_unnamed_addr constant [4 x i8] c"ghi\00"
@global_var_21e9 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_21fa = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_220b = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_221c = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_222d = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_223e = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_224f = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_2260 = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_2271 = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_2282 = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_2293 = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_4010 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_2004 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_20c5 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_20ed = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_210f = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_213b = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_2163 = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_218f = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_21c8 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_4018 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_22a4 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_22c2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_22de = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_22fa = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_2315 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2332 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_234e = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_236b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2387 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_23a3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

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

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i64 @test_calling_conventions(), !insn.addr !11
  %1 = call i64 @test_parameter_passing(), !insn.addr !12
  %2 = call i64 @test_return_values(), !insn.addr !13
  ret i64 0, !insn.addr !14
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10e0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !15
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !15
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !15
  %3 = call i32 @__libc_start_main(i64 4288, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !15
  %4 = call i64 @__asm_hlt(), !insn.addr !16
  unreachable, !insn.addr !16
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  ret i64 16416, !insn.addr !17
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1140:
  ret i64 0, !insn.addr !18
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* inttoptr (i64 16412 to i8*), align 4, !insn.addr !19
  %3 = icmp eq i8 %2, 0, !insn.addr !19
  %4 = icmp eq i1 %3, false, !insn.addr !20
  br i1 %4, label %dec_label_pc_11b8, label %dec_label_pc_118d, !insn.addr !20

dec_label_pc_118d:                                ; preds = %dec_label_pc_1180
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !21
  %6 = icmp eq i64 %5, 0, !insn.addr !21
  br i1 %6, label %dec_label_pc_11a7, label %dec_label_pc_119b, !insn.addr !22

dec_label_pc_119b:                                ; preds = %dec_label_pc_118d
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !23
  %8 = inttoptr i64 %7 to i64*, !insn.addr !24
  call void @__cxa_finalize(i64* %8), !insn.addr !24
  br label %dec_label_pc_11a7, !insn.addr !24

dec_label_pc_11a7:                                ; preds = %dec_label_pc_119b, %dec_label_pc_118d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !25
  store i8 1, i8* bitcast (i64* @global_var_401c to i8*), align 8, !insn.addr !26
  ret i64 %9, !insn.addr !27

dec_label_pc_11b8:                                ; preds = %dec_label_pc_1180
  ret i64 %1, !insn.addr !28
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i64 @register_tm_clones(), !insn.addr !29
  ret i64 %0, !insn.addr !29
}

define i64 @func_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_11c9:
  %0 = add i64 %arg1, 10, !insn.addr !30
  %1 = and i64 %0, 4294967295, !insn.addr !30
  ret i64 %1, !insn.addr !31
}

define i64 @func_b(i64 %arg1) local_unnamed_addr {
dec_label_pc_11d1:
  %0 = mul i64 %arg1, 2, !insn.addr !32
  %1 = and i64 %0, 4294967294, !insn.addr !32
  ret i64 %1, !insn.addr !33
}

define i64 @callback_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_11d9:
  %0 = mul i64 %arg1, 2, !insn.addr !34
  %1 = and i64 %0, 4294967294, !insn.addr !34
  ret i64 %1, !insn.addr !35
}

define i64 @cdecl_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11e1:
  %0 = add i64 %arg2, %arg1, !insn.addr !36
  %1 = and i64 %0, 4294967295, !insn.addr !36
  ret i64 %1, !insn.addr !37
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_11e9:
  ret i64 15, !insn.addr !38
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11f3:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !39
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !39
  %2 = mul nsw i64 %1, %0, !insn.addr !39
  %3 = and i64 %2, 4294967295, !insn.addr !39
  ret i64 %3, !insn.addr !40
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_11fd:
  ret i64 50, !insn.addr !41
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1207:
  %0 = add i64 %arg2, %arg1, !insn.addr !42
  %1 = add i64 %0, %arg3, !insn.addr !43
  %2 = and i64 %1, 4294967295, !insn.addr !43
  ret i64 %2, !insn.addr !44
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_1211:
  ret i64 6, !insn.addr !45
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_121b:
  ret i64 15, !insn.addr !46
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1225:
  %0 = add i64 %arg2, %arg1, !insn.addr !47
  %1 = add i64 %0, %arg3, !insn.addr !48
  %2 = add i64 %1, %arg4, !insn.addr !49
  %3 = add i64 %2, %arg5, !insn.addr !50
  %4 = and i64 %3, 4294967295, !insn.addr !50
  ret i64 %4, !insn.addr !51
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1234:
  ret i64 15, !insn.addr !52
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_123e:
  %0 = add i64 %arg2, %arg1, !insn.addr !53
  %1 = add i64 %0, %arg3, !insn.addr !54
  %2 = add i64 %1, %arg4, !insn.addr !55
  %3 = and i64 %2, 4294967295, !insn.addr !55
  ret i64 %3, !insn.addr !56
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_124a:
  ret i64 100, !insn.addr !57
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1254:
  %0 = add i64 %arg2, %arg1, !insn.addr !58
  %1 = add i64 %0, %arg3, !insn.addr !59
  %2 = add i64 %1, %arg4, !insn.addr !60
  %3 = add i64 %2, %arg5, !insn.addr !61
  %4 = add i64 %3, %arg6, !insn.addr !62
  %5 = and i64 %4, 4294967295, !insn.addr !62
  ret i64 %5, !insn.addr !63
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1266:
  ret i64 21, !insn.addr !64
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1270:
  %0 = add i64 %arg2, %arg1, !insn.addr !65
  %1 = add i64 %0, %arg3, !insn.addr !66
  %2 = add i64 %1, %arg4, !insn.addr !67
  %3 = add i64 %2, %arg5, !insn.addr !68
  %4 = and i64 %3, 4294967295, !insn.addr !68
  ret i64 %4, !insn.addr !69
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_127f:
  ret i64 15, !insn.addr !70
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1289:
  %0 = add i64 %arg2, %arg1, !insn.addr !71
  %1 = add i64 %0, %arg3, !insn.addr !72
  %2 = add i64 %1, %arg4, !insn.addr !73
  %3 = and i64 %2, 4294967295, !insn.addr !73
  ret i64 %3, !insn.addr !74
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1295:
  ret i64 10, !insn.addr !75
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_129f:
  ret i64 33, !insn.addr !76
}

define i64 @varargs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_12a9:
  %r8.0.lcssa.reg2mem = alloca i64, !insn.addr !77
  %rsi.0.reg2mem = alloca i64, !insn.addr !77
  %rdx.1.reg2mem = alloca i64, !insn.addr !77
  %rax.0.reg2mem = alloca i64, !insn.addr !77
  %rcx.01.reg2mem = alloca i64, !insn.addr !77
  %rdx.02.reg2mem = alloca i64, !insn.addr !77
  %r8.03.reg2mem = alloca i32, !insn.addr !77
  %storemerge4.reg2mem = alloca i64, !insn.addr !77
  %stack_var_8 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !78
  %1 = icmp sgt i64 %arg1, 0, !insn.addr !79
  store i64 0, i64* %r8.0.lcssa.reg2mem, !insn.addr !79
  br i1 %1, label %dec_label_pc_1308.lr.ph, label %dec_label_pc_1328, !insn.addr !79

dec_label_pc_1308.lr.ph:                          ; preds = %dec_label_pc_12a9
  %2 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !80
  %3 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !81
  store i64 %3, i64* %storemerge4.reg2mem
  store i32 0, i32* %r8.03.reg2mem
  store i64 8, i64* %rdx.02.reg2mem
  store i64 0, i64* %rcx.01.reg2mem
  br label %dec_label_pc_1308

dec_label_pc_1308:                                ; preds = %dec_label_pc_1308.lr.ph, %dec_label_pc_131e
  %rcx.01.reload = load i64, i64* %rcx.01.reg2mem
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %r8.03.reload = load i32, i32* %r8.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %4 = add i64 %storemerge4.reload, 8, !insn.addr !82
  %5 = trunc i64 %rdx.02.reload to i32, !insn.addr !83
  %6 = icmp ult i32 %5, 48
  store i64 %storemerge4.reload, i64* %rax.0.reg2mem, !insn.addr !84
  store i64 %rdx.02.reload, i64* %rdx.1.reg2mem, !insn.addr !84
  store i64 %4, i64* %rsi.0.reg2mem, !insn.addr !84
  br i1 %6, label %dec_label_pc_1311, label %dec_label_pc_131e, !insn.addr !84

dec_label_pc_1311:                                ; preds = %dec_label_pc_1308
  %7 = and i64 %rdx.02.reload, 4294967295, !insn.addr !85
  %8 = add i64 %rdx.02.reload, 8, !insn.addr !86
  %9 = and i64 %8, 4294967295, !insn.addr !86
  %10 = add i64 %7, %2, !insn.addr !87
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !87
  store i64 %9, i64* %rdx.1.reg2mem, !insn.addr !87
  store i64 %storemerge4.reload, i64* %rsi.0.reg2mem, !insn.addr !87
  br label %dec_label_pc_131e, !insn.addr !87

dec_label_pc_131e:                                ; preds = %dec_label_pc_1308, %dec_label_pc_1311
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %11 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !88
  %12 = load i32, i32* %11, align 4, !insn.addr !88
  %13 = add i32 %12, %r8.03.reload, !insn.addr !88
  %14 = add nuw nsw i64 %rcx.01.reload, 1, !insn.addr !89
  %15 = and i64 %14, 4294967295, !insn.addr !89
  %16 = icmp slt i64 %15, %arg1, !insn.addr !79
  store i64 %rsi.0.reload, i64* %storemerge4.reg2mem, !insn.addr !79
  store i32 %13, i32* %r8.03.reg2mem, !insn.addr !79
  store i64 %rdx.1.reload, i64* %rdx.02.reg2mem, !insn.addr !79
  store i64 %15, i64* %rcx.01.reg2mem, !insn.addr !79
  br i1 %16, label %dec_label_pc_1308, label %dec_label_pc_1304.dec_label_pc_1328_crit_edge, !insn.addr !79

dec_label_pc_1304.dec_label_pc_1328_crit_edge:    ; preds = %dec_label_pc_131e
  %17 = zext i32 %13 to i64, !insn.addr !88
  store i64 %17, i64* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_1328

dec_label_pc_1328:                                ; preds = %dec_label_pc_1304.dec_label_pc_1328_crit_edge, %dec_label_pc_12a9
  %r8.0.lcssa.reload = load i64, i64* %r8.0.lcssa.reg2mem
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !90
  %19 = icmp eq i64 %0, %18, !insn.addr !90
  br i1 %19, label %dec_label_pc_133d, label %dec_label_pc_1338, !insn.addr !91

dec_label_pc_1338:                                ; preds = %dec_label_pc_1328
  call void @__stack_chk_fail(), !insn.addr !92
  br label %dec_label_pc_133d, !insn.addr !92

dec_label_pc_133d:                                ; preds = %dec_label_pc_1338, %dec_label_pc_1328
  ret i64 %r8.0.lcssa.reload, !insn.addr !93

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %rdx.02.reload, { 2, 3, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.01.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_131e, { 1, 0 }
  uselistorder label %dec_label_pc_1308, { 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_1345:
  ret i64 42, !insn.addr !94
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_134f:
  %0 = add i64 %arg2, %arg1, !insn.addr !95
  %1 = add i64 %0, %arg3, !insn.addr !96
  %2 = add i64 %1, %arg4, !insn.addr !97
  %3 = add i64 %2, %arg5, !insn.addr !98
  %4 = add i64 %3, %arg6, !insn.addr !99
  %5 = trunc i64 %4 to i32, !insn.addr !99
  %6 = add i32 %5, %arg7, !insn.addr !100
  %7 = add i32 %6, %arg8, !insn.addr !101
  %8 = zext i32 %7 to i64, !insn.addr !101
  ret i64 %8, !insn.addr !102
}

define i64 @func_mixed_args(i64 %arg1, i8* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1369:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i32, !insn.addr !103
  %1 = load i128, i128* %0
  %2 = call i64 @__asm_movsd.1(i128 %1), !insn.addr !104
  %3 = icmp eq i8* %arg2, null, !insn.addr !105
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !106
  br i1 %3, label %dec_label_pc_138d, label %dec_label_pc_1385, !insn.addr !106

dec_label_pc_1385:                                ; preds = %dec_label_pc_1369
  %4 = call i32 @strlen(i8* nonnull %arg2), !insn.addr !107
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_138d, !insn.addr !107

dec_label_pc_138d:                                ; preds = %dec_label_pc_1385, %dec_label_pc_1369
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %5 = trunc i64 %arg1 to i32, !insn.addr !108
  %6 = add i32 %rax.0.reload, %5, !insn.addr !108
  %7 = call i128 @__asm_cvtsi2sd(i64 %arg3), !insn.addr !109
  %8 = call i128 @__asm_cvtsi2sd.2(i32 %6), !insn.addr !110
  %9 = call i128 @__asm_addsd(i128 %8, i64 %2), !insn.addr !111
  %10 = call i128 @__asm_addsd.3(i128 %9, i128 %7), !insn.addr !112
  %11 = call i32 @__asm_cvttsd2si(i128 %10), !insn.addr !113
  %12 = sext i32 %11 to i64, !insn.addr !113
  ret i64 %12, !insn.addr !114
}

define i64 @func_struct_byval(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13ad:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !115
  %rdx.0.reg2mem = alloca i64, !insn.addr !115
  %1 = load i64, i64* %0
  %2 = add i64 %1, 8, !insn.addr !116
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !117
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !117
  br label %dec_label_pc_13b5, !insn.addr !117

dec_label_pc_13b5:                                ; preds = %dec_label_pc_13b5, %dec_label_pc_13ad
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 8, !insn.addr !116
  %4 = add i64 %2, %3, !insn.addr !116
  %5 = inttoptr i64 %4 to i64*, !insn.addr !116
  %6 = load i64, i64* %5, align 8, !insn.addr !116
  %7 = add i64 %6, %rax.0.reload, !insn.addr !116
  %8 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !118
  %exitcond = icmp eq i64 %8, 16
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !119
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !119
  br i1 %exitcond, label %dec_label_pc_13c3, label %dec_label_pc_13b5, !insn.addr !119

dec_label_pc_13c3:                                ; preds = %dec_label_pc_13b5
  ret i64 %7, !insn.addr !120

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c4:
  %rax.0.reg2mem = alloca i64, !insn.addr !121
  %0 = icmp eq i64 %arg1, 0, !insn.addr !122
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !123
  br i1 %0, label %dec_label_pc_13d6, label %dec_label_pc_13d0, !insn.addr !123

dec_label_pc_13d0:                                ; preds = %dec_label_pc_13c4
  %1 = trunc i64 %arg1 to i32
  %2 = add i64 %arg1, 4, !insn.addr !124
  %3 = inttoptr i64 %2 to i32*, !insn.addr !124
  %4 = load i32, i32* %3, align 4, !insn.addr !124
  %5 = mul i32 %4, %1, !insn.addr !124
  %6 = zext i32 %5 to i64, !insn.addr !124
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !124
  br label %dec_label_pc_13d6, !insn.addr !124

dec_label_pc_13d6:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13c4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !125

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_13d7:
  %rax.0.reg2mem = alloca i64, !insn.addr !126
  %stack_var_-144 = alloca i64, align 8
  %stack_var_-272 = alloca i64, align 8
  %stack_var_-280 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-280 to i64, !insn.addr !127
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !128
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_2004 to i8*)), !insn.addr !129
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2025, i64 0, i64 0), i64 15), !insn.addr !130
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2035, i64 0, i64 0), i64 50), !insn.addr !131
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2045, i64 0, i64 0), i64 6), !insn.addr !132
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2055, i64 0, i64 0), i64 15), !insn.addr !133
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2065, i64 0, i64 0), i64 15), !insn.addr !134
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2075, i64 0, i64 0), i64 100), !insn.addr !135
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2085, i64 0, i64 0), i64 21), !insn.addr !136
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2095, i64 0, i64 0), i64 15), !insn.addr !137
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20a5, i64 0, i64 0), i64 10), !insn.addr !138
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20b5, i64 0, i64 0), i64 33), !insn.addr !139
  %13 = call i64 @varargs_func(i64 5, i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !140
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20c5 to i8*)), !insn.addr !141
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20ed to i8*)), !insn.addr !142
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_210f to i8*)), !insn.addr !143
  %17 = call i128 @__asm_movsd(i64 4614253070214989087), !insn.addr !144
  %18 = call i64 @func_mixed_args(i64 10, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2136, i64 0, i64 0), i64 100), !insn.addr !145
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_213b to i8*)), !insn.addr !146
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_1595, !insn.addr !147

dec_label_pc_1595:                                ; preds = %dec_label_pc_1595, %dec_label_pc_13d7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %20 = mul i64 %rax.0.reload, 8, !insn.addr !148
  %21 = add i64 %20, %0, !insn.addr !148
  %22 = inttoptr i64 %21 to i64*, !insn.addr !148
  store i64 %rax.0.reload, i64* %22, align 8, !insn.addr !148
  %23 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !149
  %exitcond1 = icmp eq i64 %23, 17
  store i64 %23, i64* %rax.0.reg2mem, !insn.addr !150
  br i1 %exitcond1, label %dec_label_pc_15a7, label %dec_label_pc_1595, !insn.addr !150

dec_label_pc_15a7:                                ; preds = %dec_label_pc_1595
  %24 = bitcast i64* %stack_var_-272 to i8*, !insn.addr !151
  %25 = bitcast i64* %stack_var_-144 to i8*, !insn.addr !151
  call void @__asm_rep_movsd_memcpy(i8* nonnull %25, i8* nonnull %24, i64 32), !insn.addr !151
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2163 to i8*)), !insn.addr !152
  %27 = call i64 @__readfsqword(i64 40), !insn.addr !153
  %28 = icmp eq i64 %1, %27, !insn.addr !153
  br i1 %28, label %dec_label_pc_15fa, label %dec_label_pc_15f5, !insn.addr !154

dec_label_pc_15f5:                                ; preds = %dec_label_pc_15a7
  call void @__stack_chk_fail(), !insn.addr !155
  br label %dec_label_pc_15fa, !insn.addr !155

dec_label_pc_15fa:                                ; preds = %dec_label_pc_15f5, %dec_label_pc_15a7
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_218f to i8*)), !insn.addr !156
  %30 = sext i32 %29 to i64, !insn.addr !156
  ret i64 %30, !insn.addr !156

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 32, { 2, 0, 1 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_1619:
  %0 = mul i64 %arg1, 2, !insn.addr !157
  %1 = and i64 %0, 4294967294, !insn.addr !157
  ret i64 %1, !insn.addr !158
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1621:
  ret i64 15, !insn.addr !159
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_162b:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = call i128 @__asm_movd(i32 %2), !insn.addr !160
  %4 = call i128 @__asm_pslld(i128 %3, i8 1), !insn.addr !161
  %5 = call i64 @__asm_movd.4(i128 %4), !insn.addr !162
  %6 = trunc i64 %5 to i32, !insn.addr !162
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !162
  store i32 %6, i32* %7, align 4, !insn.addr !162
  ret i64 1, !insn.addr !163
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1642:
  ret i64 11, !insn.addr !164
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_164c:
  ret i64 8, !insn.addr !165
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_1656:
  ret i64 8, !insn.addr !166
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_1660:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !167
  %3 = inttoptr i64 %2 to i8*, !insn.addr !167
  %4 = load i8, i8* %3, align 1, !insn.addr !167
  %sext = mul i64 %1, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !168
  %6 = sext i8 %4 to i64, !insn.addr !168
  %7 = add nsw i64 %5, %6, !insn.addr !168
  %8 = and i64 %7, 4294967295, !insn.addr !168
  ret i64 %8, !insn.addr !169
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_166e:
  ret i64 173, !insn.addr !170
}

define i64 @param_ptr_array(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1678:
  %storemerge.lcssa.reg2mem = alloca i64, !insn.addr !171
  %rax.01.reg2mem = alloca i64, !insn.addr !171
  %storemerge2.reg2mem = alloca i64, !insn.addr !171
  %0 = ptrtoint i64* %arg1 to i64
  %1 = icmp sgt i64 %arg2, 0, !insn.addr !172
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !172
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !172
  store i64 0, i64* %storemerge.lcssa.reg2mem, !insn.addr !172
  br i1 %1, label %dec_label_pc_1685, label %dec_label_pc_1694, !insn.addr !172

dec_label_pc_1685:                                ; preds = %dec_label_pc_1678, %dec_label_pc_1685
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %2 = mul i64 %rax.01.reload, 8, !insn.addr !173
  %3 = add i64 %2, %0, !insn.addr !173
  %4 = inttoptr i64 %3 to i64*, !insn.addr !173
  %5 = load i64, i64* %4, align 8, !insn.addr !173
  %6 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !174
  %7 = inttoptr i64 %5 to i8*, !insn.addr !175
  %8 = load i8, i8* %7, align 1, !insn.addr !175
  %9 = sext i8 %8 to i64, !insn.addr !176
  %10 = add nsw i64 %storemerge2.reload, %9, !insn.addr !176
  %11 = and i64 %10, 4294967295, !insn.addr !176
  %exitcond = icmp eq i64 %6, %arg2
  store i64 %11, i64* %storemerge2.reg2mem, !insn.addr !172
  store i64 %6, i64* %rax.01.reg2mem, !insn.addr !172
  store i64 %11, i64* %storemerge.lcssa.reg2mem, !insn.addr !172
  br i1 %exitcond, label %dec_label_pc_1694, label %dec_label_pc_1685, !insn.addr !172

dec_label_pc_1694:                                ; preds = %dec_label_pc_1685, %dec_label_pc_1678
  %storemerge.lcssa.reload = load i64, i64* %storemerge.lcssa.reg2mem
  ret i64 %storemerge.lcssa.reload, !insn.addr !177

; uselistorder directives
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1685, { 1, 0 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1698:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !178
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %stack_var_-40 = alloca i8*, align 8
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !179
  store i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_21bc, i64 0, i64 0), i8** %stack_var_-40, align 8, !insn.addr !180
  %5 = bitcast i8** %stack_var_-40 to i64*, !insn.addr !181
  %6 = call i64 @param_ptr_array(i64* nonnull %5, i64 3, i64 %2, i64 %3, i64 %1), !insn.addr !181
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !182
  %8 = icmp eq i64 %4, %7, !insn.addr !182
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !183
  br i1 %8, label %dec_label_pc_16f3, label %dec_label_pc_16ee, !insn.addr !183

dec_label_pc_16ee:                                ; preds = %dec_label_pc_1698
  call void @__stack_chk_fail(), !insn.addr !184
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !184
  br label %dec_label_pc_16f3, !insn.addr !184

dec_label_pc_16f3:                                ; preds = %dec_label_pc_16ee, %dec_label_pc_1698
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !185

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @param_varargs(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_16f8:
  %r8.0.lcssa.reg2mem = alloca i64, !insn.addr !186
  %rsi.0.reg2mem = alloca i64, !insn.addr !186
  %rdx.1.reg2mem = alloca i64, !insn.addr !186
  %rax.0.reg2mem = alloca i64, !insn.addr !186
  %rcx.01.reg2mem = alloca i64, !insn.addr !186
  %rdx.02.reg2mem = alloca i64, !insn.addr !186
  %r8.03.reg2mem = alloca i32, !insn.addr !186
  %storemerge4.reg2mem = alloca i64, !insn.addr !186
  %stack_var_8 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !187
  %1 = icmp sgt i64 %arg1, 0, !insn.addr !188
  store i64 0, i64* %r8.0.lcssa.reg2mem, !insn.addr !188
  br i1 %1, label %dec_label_pc_1757.lr.ph, label %dec_label_pc_1777, !insn.addr !188

dec_label_pc_1757.lr.ph:                          ; preds = %dec_label_pc_16f8
  %2 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !189
  %3 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !190
  store i64 %3, i64* %storemerge4.reg2mem
  store i32 0, i32* %r8.03.reg2mem
  store i64 8, i64* %rdx.02.reg2mem
  store i64 0, i64* %rcx.01.reg2mem
  br label %dec_label_pc_1757

dec_label_pc_1757:                                ; preds = %dec_label_pc_1757.lr.ph, %dec_label_pc_176d
  %rcx.01.reload = load i64, i64* %rcx.01.reg2mem
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %r8.03.reload = load i32, i32* %r8.03.reg2mem
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  %4 = add i64 %storemerge4.reload, 8, !insn.addr !191
  %5 = trunc i64 %rdx.02.reload to i32, !insn.addr !192
  %6 = icmp ult i32 %5, 48
  store i64 %storemerge4.reload, i64* %rax.0.reg2mem, !insn.addr !193
  store i64 %rdx.02.reload, i64* %rdx.1.reg2mem, !insn.addr !193
  store i64 %4, i64* %rsi.0.reg2mem, !insn.addr !193
  br i1 %6, label %dec_label_pc_1760, label %dec_label_pc_176d, !insn.addr !193

dec_label_pc_1760:                                ; preds = %dec_label_pc_1757
  %7 = and i64 %rdx.02.reload, 4294967295, !insn.addr !194
  %8 = add i64 %rdx.02.reload, 8, !insn.addr !195
  %9 = and i64 %8, 4294967295, !insn.addr !195
  %10 = add i64 %7, %2, !insn.addr !196
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !196
  store i64 %9, i64* %rdx.1.reg2mem, !insn.addr !196
  store i64 %storemerge4.reload, i64* %rsi.0.reg2mem, !insn.addr !196
  br label %dec_label_pc_176d, !insn.addr !196

dec_label_pc_176d:                                ; preds = %dec_label_pc_1757, %dec_label_pc_1760
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %11 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !197
  %12 = load i32, i32* %11, align 4, !insn.addr !197
  %13 = add i32 %12, %r8.03.reload, !insn.addr !197
  %14 = add nuw nsw i64 %rcx.01.reload, 1, !insn.addr !198
  %15 = and i64 %14, 4294967295, !insn.addr !198
  %16 = icmp slt i64 %15, %arg1, !insn.addr !188
  store i64 %rsi.0.reload, i64* %storemerge4.reg2mem, !insn.addr !188
  store i32 %13, i32* %r8.03.reg2mem, !insn.addr !188
  store i64 %rdx.1.reload, i64* %rdx.02.reg2mem, !insn.addr !188
  store i64 %15, i64* %rcx.01.reg2mem, !insn.addr !188
  br i1 %16, label %dec_label_pc_1757, label %dec_label_pc_1753.dec_label_pc_1777_crit_edge, !insn.addr !188

dec_label_pc_1753.dec_label_pc_1777_crit_edge:    ; preds = %dec_label_pc_176d
  %17 = zext i32 %13 to i64, !insn.addr !197
  store i64 %17, i64* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_1777

dec_label_pc_1777:                                ; preds = %dec_label_pc_1753.dec_label_pc_1777_crit_edge, %dec_label_pc_16f8
  %r8.0.lcssa.reload = load i64, i64* %r8.0.lcssa.reg2mem
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !199
  %19 = icmp eq i64 %0, %18, !insn.addr !199
  br i1 %19, label %dec_label_pc_178c, label %dec_label_pc_1787, !insn.addr !200

dec_label_pc_1787:                                ; preds = %dec_label_pc_1777
  call void @__stack_chk_fail(), !insn.addr !201
  br label %dec_label_pc_178c, !insn.addr !201

dec_label_pc_178c:                                ; preds = %dec_label_pc_1787, %dec_label_pc_1777
  ret i64 %r8.0.lcssa.reload, !insn.addr !202

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %rdx.02.reload, { 2, 3, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.01.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_176d, { 1, 0 }
  uselistorder label %dec_label_pc_1757, { 1, 0 }
}

define i64 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1794:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %1), !insn.addr !203
  ret i64 %2, !insn.addr !203
}

define i64 @param_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17b9:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !204
  %3 = and i64 %2, 4294967295, !insn.addr !204
  ret i64 %3, !insn.addr !205
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_17cb:
  %0 = call i64 @param_func_ptr(i64 4569, i64 5), !insn.addr !206
  ret i64 %0, !insn.addr !206

; uselistorder directives
  uselistorder i64 5, { 0, 2, 1 }
}

define i64 @param_double_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17dd:
  %rax.0.reg2mem = alloca i64, !insn.addr !207
  %0 = icmp eq i64 %arg1, 0, !insn.addr !208
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !209
  br i1 %0, label %dec_label_pc_17ff, label %dec_label_pc_17f1, !insn.addr !209

dec_label_pc_17f1:                                ; preds = %dec_label_pc_17dd
  %1 = trunc i64 %arg2 to i32, !insn.addr !210
  %2 = inttoptr i64 %arg1 to i32*, !insn.addr !210
  store i32 %1, i32* %2, align 4, !insn.addr !210
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !211
  store i64 0, i64* %3, align 8, !insn.addr !211
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !211
  br label %dec_label_pc_17ff, !insn.addr !211

dec_label_pc_17ff:                                ; preds = %dec_label_pc_17f1, %dec_label_pc_17dd
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !212
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1800:
  ret i64 21, !insn.addr !213
}

define i64 @param_complex_cast(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_180a:
  %rax.0.reg2mem = alloca i64, !insn.addr !214
  %0 = trunc i64 %arg2 to i32, !insn.addr !215
  %1 = icmp eq i32 %0, 0, !insn.addr !215
  %2 = icmp eq i1 %1, false, !insn.addr !216
  br i1 %2, label %dec_label_pc_1815, label %dec_label_pc_1812, !insn.addr !216

dec_label_pc_1812:                                ; preds = %dec_label_pc_180a
  %3 = and i64 %arg1, 4294967295, !insn.addr !217
  ret i64 %3, !insn.addr !218

dec_label_pc_1815:                                ; preds = %dec_label_pc_180a
  %4 = icmp eq i32 %0, 1, !insn.addr !219
  %5 = icmp eq i1 %4, false, !insn.addr !220
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !220
  br i1 %5, label %dec_label_pc_1821, label %dec_label_pc_181c, !insn.addr !220

dec_label_pc_181c:                                ; preds = %dec_label_pc_1815
  %6 = trunc i64 %arg1 to i32
  %7 = add i64 %arg1, 4, !insn.addr !221
  %8 = inttoptr i64 %7 to i32*, !insn.addr !221
  %9 = load i32, i32* %8, align 4, !insn.addr !221
  %10 = add i32 %9, %6, !insn.addr !222
  %11 = zext i32 %10 to i64, !insn.addr !222
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !222
  br label %dec_label_pc_1821, !insn.addr !222

dec_label_pc_1821:                                ; preds = %dec_label_pc_181c, %dec_label_pc_1815
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !223

; uselistorder directives
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1822:
  ret i64 305419896, !insn.addr !224
}

define i64 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_182c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !225
  %3 = zext i32 %2 to i64, !insn.addr !225
  ret i64 %3, !insn.addr !226
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1839:
  %0 = alloca i32
  %rax.1.reg2mem = alloca i64, !insn.addr !227
  %rax.0.reg2mem = alloca i64, !insn.addr !227
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-88 = alloca i64, align 8
  %3 = ptrtoint i64* %stack_var_-88 to i64, !insn.addr !228
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !229
  %5 = add i64 %3, 8, !insn.addr !230
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !231
  br label %dec_label_pc_1851, !insn.addr !231

dec_label_pc_1851:                                ; preds = %dec_label_pc_1851, %dec_label_pc_1839
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = trunc i64 %rax.0.reload to i32, !insn.addr !230
  %7 = mul i64 %rax.0.reload, 4, !insn.addr !230
  %8 = add i64 %5, %7, !insn.addr !230
  %9 = inttoptr i64 %8 to i32*, !insn.addr !230
  store i32 %6, i32* %9, align 4, !insn.addr !230
  %10 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !232
  %exitcond = icmp eq i64 %10, 16
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !233
  br i1 %exitcond, label %dec_label_pc_185e, label %dec_label_pc_1851, !insn.addr !233

dec_label_pc_185e:                                ; preds = %dec_label_pc_1851
  %11 = add i32 %2, %1, !insn.addr !234
  %12 = zext i32 %11 to i64, !insn.addr !234
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !235
  %14 = icmp eq i64 %4, %13, !insn.addr !235
  store i64 %12, i64* %rax.1.reg2mem, !insn.addr !236
  br i1 %14, label %dec_label_pc_187b, label %dec_label_pc_1876, !insn.addr !236

dec_label_pc_1876:                                ; preds = %dec_label_pc_185e
  call void @__stack_chk_fail(), !insn.addr !237
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !237
  br label %dec_label_pc_187b, !insn.addr !237

dec_label_pc_187b:                                ; preds = %dec_label_pc_1876, %dec_label_pc_185e
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !238

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1880:
  %0 = add i64 %arg2, %arg1, !insn.addr !239
  %1 = and i64 %0, 4294967295, !insn.addr !239
  ret i64 %1, !insn.addr !240
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_1888:
  ret i64 4, !insn.addr !241
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_1892:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_21c8 to i8*)), !insn.addr !242
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21e9, i64 0, i64 0), i64 15), !insn.addr !243
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21fa, i64 0, i64 0), i64 11), !insn.addr !244
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_220b, i64 0, i64 0), i64 8), !insn.addr !245
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_221c, i64 0, i64 0), i64 173), !insn.addr !246
  %5 = call i64 @call_ptr_array(), !insn.addr !247
  %6 = and i64 %5, 4294967295, !insn.addr !248
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_222d, i64 0, i64 0), i64 %6), !insn.addr !249
  %8 = call i64 @call_varargs_param(), !insn.addr !250
  %9 = and i64 %8, 4294967295, !insn.addr !251
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_223e, i64 0, i64 0), i64 %9), !insn.addr !252
  %11 = call i64 @call_func_ptr_param(), !insn.addr !253
  %12 = and i64 %11, 4294967295, !insn.addr !254
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_224f, i64 0, i64 0), i64 %12), !insn.addr !255
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2260, i64 0, i64 0), i64 21), !insn.addr !256
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2271, i64 0, i64 0), i64 305419896), !insn.addr !257
  %16 = call i64 @call_struct_byval(), !insn.addr !258
  %17 = and i64 %16, 4294967295, !insn.addr !259
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2282, i64 0, i64 0), i64 %17), !insn.addr !260
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2293, i64 0, i64 0), i64 4), !insn.addr !261
  %20 = sext i32 %19 to i64, !insn.addr !261
  ret i64 %20, !insn.addr !261

; uselistorder directives
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 9, 11, 7, 12, 0, 2, 5, 6, 3, 4, 10, 8, 13, 1 }
  uselistorder i64 11, { 1, 0 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_19bc:
  %0 = mul i64 %arg1, 2, !insn.addr !262
  %1 = and i64 %0, 4294967294, !insn.addr !262
  ret i64 %1, !insn.addr !263
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_19c4:
  ret i64 42, !insn.addr !264
}

define i64 @ret_pointer(i64 %arg1) local_unnamed_addr {
dec_label_pc_19ce:
  %0 = add i64 %arg1, 4, !insn.addr !265
  ret i64 %0, !insn.addr !266
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_19d7:
  ret i64 20, !insn.addr !267
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19e1:
  %0 = mul i64 %arg2, 4294967296, !insn.addr !268
  %1 = and i64 %arg1, 4294967295, !insn.addr !269
  %2 = or i64 %0, %1, !insn.addr !270
  ret i64 %2, !insn.addr !271
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_19ef:
  ret i64 7, !insn.addr !272
}

define i64 @ret_large_struct(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19f9:
  %rax.0.reg2mem = alloca i64, !insn.addr !273
  %rcx.0.reg2mem = alloca i64, !insn.addr !273
  %stack_var_-80 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !274
  %1 = ptrtoint i64* %stack_var_-80 to i64, !insn.addr !275
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_1a16, !insn.addr !276

dec_label_pc_1a16:                                ; preds = %dec_label_pc_1a16, %dec_label_pc_19f9
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %2 = add i64 %rcx.0.reload, %arg2, !insn.addr !277
  %3 = trunc i64 %2 to i32, !insn.addr !277
  %4 = mul i64 %rcx.0.reload, 4, !insn.addr !278
  %5 = add i64 %4, %1, !insn.addr !278
  %6 = inttoptr i64 %5 to i32*, !insn.addr !278
  store i32 %3, i32* %6, align 4, !insn.addr !278
  %7 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !279
  %exitcond = icmp eq i64 %7, 16
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !280
  br i1 %exitcond, label %dec_label_pc_1a2a, label %dec_label_pc_1a16, !insn.addr !280

dec_label_pc_1a2a:                                ; preds = %dec_label_pc_1a16
  %8 = ptrtoint i64* %arg1 to i64
  %9 = bitcast i64* %stack_var_-80 to i8*, !insn.addr !281
  %10 = bitcast i64* %arg1 to i8*, !insn.addr !281
  call void @__asm_rep_movsd_memcpy(i8* %10, i8* nonnull %9, i64 16), !insn.addr !281
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !282
  %12 = icmp eq i64 %0, %11, !insn.addr !282
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !283
  br i1 %12, label %dec_label_pc_1a44, label %dec_label_pc_1a3f, !insn.addr !283

dec_label_pc_1a3f:                                ; preds = %dec_label_pc_1a2a
  call void @__stack_chk_fail(), !insn.addr !284
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_1a44, !insn.addr !284

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a3f, %dec_label_pc_1a2a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !285

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 0, 2, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 16, { 1, 0, 2, 3 }
  uselistorder i64 1, { 8, 9, 0, 3, 10, 6, 2, 11, 1, 5, 7, 4 }
  uselistorder i64 4, { 0, 6, 3, 2, 1, 7, 4, 5, 8 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1a49:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !286
  %1 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !287
  %3 = bitcast i32* %stack_var_-80 to i64*, !insn.addr !288
  %4 = call i64 @ret_large_struct(i64* nonnull %3, i64 100), !insn.addr !288
  %5 = load i32, i32* %stack_var_-80, align 4, !insn.addr !289
  %6 = add i32 %5, %1, !insn.addr !289
  %7 = zext i32 %6 to i64, !insn.addr !289
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !290
  %9 = icmp eq i64 %2, %8, !insn.addr !290
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !291
  br i1 %9, label %dec_label_pc_1a8d, label %dec_label_pc_1a88, !insn.addr !291

dec_label_pc_1a88:                                ; preds = %dec_label_pc_1a49
  call void @__stack_chk_fail(), !insn.addr !292
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !292
  br label %dec_label_pc_1a8d, !insn.addr !292

dec_label_pc_1a8d:                                ; preds = %dec_label_pc_1a88, %dec_label_pc_1a49
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !293

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 0, 2, 1, 3, 4, 6, 5, 7 }
  uselistorder i64 100, { 1, 2, 3, 0 }
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a92:
  %0 = trunc i64 %arg1 to i32, !insn.addr !294
  %1 = icmp eq i32 %0, 0, !insn.addr !294
  %2 = select i1 %1, i64 4553, i64 4561, !insn.addr !295
  ret i64 %2, !insn.addr !296
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1aab:
  ret i64 10, !insn.addr !297
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ab5:
  %0 = trunc i64 %arg1 to i32, !insn.addr !298
  %1 = icmp eq i32 %0, 0, !insn.addr !298
  %2 = icmp eq i1 %1, false, !insn.addr !299
  %3 = select i1 %2, i64 ptrtoint (i64* @global_var_4010 to i64), i64 ptrtoint (i32* @global_var_4018 to i64), !insn.addr !299
  ret i64 %3, !insn.addr !300

; uselistorder directives
  uselistorder i32 0, { 3, 4, 5, 0, 1, 2 }
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1ace:
  %0 = load i32, i32* @global_var_4018, align 4, !insn.addr !301
  %1 = zext i32 %0 to i64, !insn.addr !301
  ret i64 %1, !insn.addr !302

; uselistorder directives
  uselistorder i32* @global_var_4018, { 1, 0 }
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1ad9:
  %0 = add i64 %arg3, 10, !insn.addr !303
  %1 = and i64 %0, 4294967295, !insn.addr !303
  %2 = icmp sgt i64 %arg1, %arg2, !insn.addr !304
  %3 = mul i64 %arg3, 2
  %4 = and i64 %3, 4294967294
  %rax.0 = select i1 %2, i64 %4, i64 %1
  ret i64 %rax.0, !insn.addr !305

; uselistorder directives
  uselistorder i64 2, { 0, 1, 2, 5, 3, 4 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1ae8:
  ret i64 40, !insn.addr !306

; uselistorder directives
  uselistorder i64 40, { 0, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 12, 13, 14, 15 }
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1af2:
  %rax.0.reg2mem = alloca i64, !insn.addr !307
  %0 = trunc i64 %arg1 to i32, !insn.addr !308
  %1 = icmp ult i32 %0, 3
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !309
  br i1 %1, label %dec_label_pc_1afe, label %dec_label_pc_1b03, !insn.addr !309

dec_label_pc_1afe:                                ; preds = %dec_label_pc_1af2
  %2 = mul i64 %arg1, 4294967296, !insn.addr !310
  %sext = add i64 %2, 4294967296
  %3 = udiv i64 %sext, 4294967296
  %4 = mul nuw nsw i64 %3, 10, !insn.addr !311
  %5 = and i64 %4, 4294967294, !insn.addr !311
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !311
  br label %dec_label_pc_1b03, !insn.addr !311

dec_label_pc_1b03:                                ; preds = %dec_label_pc_1af2, %dec_label_pc_1afe
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !312

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 10, { 2, 3, 0, 4, 6, 7, 8, 1, 5 }
  uselistorder i64 4294967296, { 4, 5, 0, 1, 2, 3 }
  uselistorder i64 4294967295, { 0, 5, 6, 7, 8, 9, 10, 11, 1, 4, 2, 12, 13, 14, 15, 16, 17, 3, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 }
  uselistorder label %dec_label_pc_1b03, { 1, 0 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1b04:
  ret i64 60, !insn.addr !313
}

define i64 @ret_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1b0e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32
  %3 = mul i32 %2, 3, !insn.addr !314
  %4 = inttoptr i64 %arg2 to i32*, !insn.addr !315
  store i32 %3, i32* %4, align 4, !insn.addr !315
  ret i64 %1, !insn.addr !316
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1b18:
  ret i64 21, !insn.addr !317

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_1b22:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_22a4 to i8*)), !insn.addr !318
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22c2 to i8*)), !insn.addr !319
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22de to i8*)), !insn.addr !320
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22fa to i8*)), !insn.addr !321
  %4 = call i64 @call_ret_large_struct(), !insn.addr !322
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2315 to i8*)), !insn.addr !323
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2332 to i8*)), !insn.addr !324
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_234e to i8*)), !insn.addr !325
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_236b to i8*)), !insn.addr !326
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2387 to i8*)), !insn.addr !327
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_23a3 to i8*)), !insn.addr !328
  %11 = sext i32 %10 to i64, !insn.addr !328
  ret i64 %11, !insn.addr !328

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 26, 31, 30, 29, 28, 27, 35, 34, 33, 32, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 0, 2, 1, 3 }
  uselistorder i64 0, { 0, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 1, 99, 100, 3, 2, 14, 75, 76, 4, 5, 6, 15, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 101, 7, 8, 10, 9, 16, 102, 12, 13, 11, 103, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1c14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !329

; uselistorder directives
  uselistorder i32 1, { 9, 47, 48, 49, 50, 51, 52, 53, 54, 55, 8, 13, 84, 14, 12, 86, 16, 15, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 87, 18, 17, 11, 10, 67, 19, 20, 7, 6, 89, 88, 28, 27, 26, 25, 24, 23, 22, 21, 85, 29, 5, 32, 31, 30, 4, 3, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 92, 91, 90, 33, 34, 36, 35, 2, 37, 0, 94, 93, 45, 44, 43, 42, 41, 40, 39, 38, 1, 95, 46 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i64) local_unnamed_addr

declare i64 @__asm_movsd.1(i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd(i64) local_unnamed_addr

declare i128 @__asm_cvtsi2sd.2(i32) local_unnamed_addr

declare i128 @__asm_addsd(i128, i64) local_unnamed_addr

declare i128 @__asm_addsd.3(i128, i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i128 @__asm_movd(i32) local_unnamed_addr

declare i128 @__asm_pslld(i128, i8) local_unnamed_addr

declare i64 @__asm_movd.4(i128) local_unnamed_addr

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
!11 = !{i64 4295}
!12 = !{i64 4302}
!13 = !{i64 4309}
!14 = !{i64 4317}
!15 = !{i64 4351}
!16 = !{i64 4357}
!17 = !{i64 4408}
!18 = !{i64 4472}
!19 = !{i64 4484}
!20 = !{i64 4491}
!21 = !{i64 4494}
!22 = !{i64 4505}
!23 = !{i64 4507}
!24 = !{i64 4514}
!25 = !{i64 4519}
!26 = !{i64 4524}
!27 = !{i64 4532}
!28 = !{i64 4536}
!29 = !{i64 4548}
!30 = !{i64 4557}
!31 = !{i64 4560}
!32 = !{i64 4565}
!33 = !{i64 4568}
!34 = !{i64 4573}
!35 = !{i64 4576}
!36 = !{i64 4581}
!37 = !{i64 4584}
!38 = !{i64 4594}
!39 = !{i64 4601}
!40 = !{i64 4604}
!41 = !{i64 4614}
!42 = !{i64 4619}
!43 = !{i64 4621}
!44 = !{i64 4624}
!45 = !{i64 4634}
!46 = !{i64 4644}
!47 = !{i64 4649}
!48 = !{i64 4651}
!49 = !{i64 4653}
!50 = !{i64 4655}
!51 = !{i64 4659}
!52 = !{i64 4669}
!53 = !{i64 4674}
!54 = !{i64 4676}
!55 = !{i64 4678}
!56 = !{i64 4681}
!57 = !{i64 4691}
!58 = !{i64 4696}
!59 = !{i64 4698}
!60 = !{i64 4700}
!61 = !{i64 4702}
!62 = !{i64 4705}
!63 = !{i64 4709}
!64 = !{i64 4719}
!65 = !{i64 4724}
!66 = !{i64 4726}
!67 = !{i64 4728}
!68 = !{i64 4730}
!69 = !{i64 4734}
!70 = !{i64 4744}
!71 = !{i64 4749}
!72 = !{i64 4751}
!73 = !{i64 4753}
!74 = !{i64 4756}
!75 = !{i64 4766}
!76 = !{i64 4776}
!77 = !{i64 4777}
!78 = !{i64 4825}
!79 = !{i64 4870}
!80 = !{i64 4815}
!81 = !{i64 4863}
!82 = !{i64 4872}
!83 = !{i64 4876}
!84 = !{i64 4879}
!85 = !{i64 4881}
!86 = !{i64 4887}
!87 = !{i64 4890}
!88 = !{i64 4894}
!89 = !{i64 4897}
!90 = !{i64 4909}
!91 = !{i64 4918}
!92 = !{i64 4920}
!93 = !{i64 4932}
!94 = !{i64 4942}
!95 = !{i64 4947}
!96 = !{i64 4949}
!97 = !{i64 4951}
!98 = !{i64 4953}
!99 = !{i64 4956}
!100 = !{i64 4960}
!101 = !{i64 4964}
!102 = !{i64 4968}
!103 = !{i64 4969}
!104 = !{i64 4986}
!105 = !{i64 4992}
!106 = !{i64 4995}
!107 = !{i64 5000}
!108 = !{i64 5005}
!109 = !{i64 5007}
!110 = !{i64 5012}
!111 = !{i64 5016}
!112 = !{i64 5028}
!113 = !{i64 5032}
!114 = !{i64 5036}
!115 = !{i64 5037}
!116 = !{i64 5045}
!117 = !{i64 5043}
!118 = !{i64 5050}
!119 = !{i64 5057}
!120 = !{i64 5059}
!121 = !{i64 5060}
!122 = !{i64 5067}
!123 = !{i64 5070}
!124 = !{i64 5074}
!125 = !{i64 5078}
!126 = !{i64 5079}
!127 = !{i64 5083}
!128 = !{i64 5097}
!129 = !{i64 5116}
!130 = !{i64 5140}
!131 = !{i64 5164}
!132 = !{i64 5188}
!133 = !{i64 5212}
!134 = !{i64 5236}
!135 = !{i64 5260}
!136 = !{i64 5284}
!137 = !{i64 5308}
!138 = !{i64 5332}
!139 = !{i64 5356}
!140 = !{i64 5395}
!141 = !{i64 5416}
!142 = !{i64 5440}
!143 = !{i64 5464}
!144 = !{i64 5479}
!145 = !{i64 5494}
!146 = !{i64 5515}
!147 = !{i64 5520}
!148 = !{i64 5525}
!149 = !{i64 5529}
!150 = !{i64 5541}
!151 = !{i64 5560}
!152 = !{i64 5597}
!153 = !{i64 5610}
!154 = !{i64 5619}
!155 = !{i64 5621}
!156 = !{i64 5652}
!157 = !{i64 5661}
!158 = !{i64 5664}
!159 = !{i64 5674}
!160 = !{i64 5679}
!161 = !{i64 5688}
!162 = !{i64 5693}
!163 = !{i64 5697}
!164 = !{i64 5707}
!165 = !{i64 5717}
!166 = !{i64 5727}
!167 = !{i64 5735}
!168 = !{i64 5739}
!169 = !{i64 5741}
!170 = !{i64 5751}
!171 = !{i64 5752}
!172 = !{i64 5763}
!173 = !{i64 5765}
!174 = !{i64 5769}
!175 = !{i64 5772}
!176 = !{i64 5775}
!177 = !{i64 5783}
!178 = !{i64 5784}
!179 = !{i64 5797}
!180 = !{i64 5821}
!181 = !{i64 5849}
!182 = !{i64 5859}
!183 = !{i64 5868}
!184 = !{i64 5870}
!185 = !{i64 5879}
!186 = !{i64 5880}
!187 = !{i64 5928}
!188 = !{i64 5973}
!189 = !{i64 5918}
!190 = !{i64 5966}
!191 = !{i64 5975}
!192 = !{i64 5979}
!193 = !{i64 5982}
!194 = !{i64 5984}
!195 = !{i64 5990}
!196 = !{i64 5993}
!197 = !{i64 5997}
!198 = !{i64 6000}
!199 = !{i64 6012}
!200 = !{i64 6021}
!201 = !{i64 6023}
!202 = !{i64 6035}
!203 = !{i64 6068}
!204 = !{i64 6087}
!205 = !{i64 6090}
!206 = !{i64 6107}
!207 = !{i64 6109}
!208 = !{i64 6116}
!209 = !{i64 6119}
!210 = !{i64 6129}
!211 = !{i64 6136}
!212 = !{i64 6143}
!213 = !{i64 6153}
!214 = !{i64 6154}
!215 = !{i64 6158}
!216 = !{i64 6160}
!217 = !{i64 6162}
!218 = !{i64 6164}
!219 = !{i64 6168}
!220 = !{i64 6170}
!221 = !{i64 6172}
!222 = !{i64 6175}
!223 = !{i64 6177}
!224 = !{i64 6187}
!225 = !{i64 6196}
!226 = !{i64 6200}
!227 = !{i64 6201}
!228 = !{i64 6205}
!229 = !{i64 6209}
!230 = !{i64 6225}
!231 = !{i64 6223}
!232 = !{i64 6229}
!233 = !{i64 6236}
!234 = !{i64 6242}
!235 = !{i64 6251}
!236 = !{i64 6260}
!237 = !{i64 6262}
!238 = !{i64 6271}
!239 = !{i64 6276}
!240 = !{i64 6279}
!241 = !{i64 6289}
!242 = !{i64 6302}
!243 = !{i64 6326}
!244 = !{i64 6350}
!245 = !{i64 6374}
!246 = !{i64 6398}
!247 = !{i64 6405}
!248 = !{i64 6422}
!249 = !{i64 6426}
!250 = !{i64 6433}
!251 = !{i64 6450}
!252 = !{i64 6454}
!253 = !{i64 6461}
!254 = !{i64 6478}
!255 = !{i64 6482}
!256 = !{i64 6506}
!257 = !{i64 6530}
!258 = !{i64 6537}
!259 = !{i64 6554}
!260 = !{i64 6558}
!261 = !{i64 6583}
!262 = !{i64 6592}
!263 = !{i64 6595}
!264 = !{i64 6605}
!265 = !{i64 6610}
!266 = !{i64 6614}
!267 = !{i64 6624}
!268 = !{i64 6629}
!269 = !{i64 6633}
!270 = !{i64 6635}
!271 = !{i64 6638}
!272 = !{i64 6648}
!273 = !{i64 6649}
!274 = !{i64 6662}
!275 = !{i64 6681}
!276 = !{i64 6676}
!277 = !{i64 6678}
!278 = !{i64 6686}
!279 = !{i64 6689}
!280 = !{i64 6696}
!281 = !{i64 6701}
!282 = !{i64 6708}
!283 = !{i64 6717}
!284 = !{i64 6719}
!285 = !{i64 6728}
!286 = !{i64 6729}
!287 = !{i64 6742}
!288 = !{i64 6763}
!289 = !{i64 6772}
!290 = !{i64 6781}
!291 = !{i64 6790}
!292 = !{i64 6792}
!293 = !{i64 6801}
!294 = !{i64 6806}
!295 = !{i64 6822}
!296 = !{i64 6826}
!297 = !{i64 6836}
!298 = !{i64 6841}
!299 = !{i64 6857}
!300 = !{i64 6861}
!301 = !{i64 6866}
!302 = !{i64 6872}
!303 = !{i64 6877}
!304 = !{i64 6882}
!305 = !{i64 6887}
!306 = !{i64 6897}
!307 = !{i64 6898}
!308 = !{i64 6905}
!309 = !{i64 6908}
!310 = !{i64 6910}
!311 = !{i64 6912}
!312 = !{i64 6915}
!313 = !{i64 6925}
!314 = !{i64 6930}
!315 = !{i64 6933}
!316 = !{i64 6935}
!317 = !{i64 6945}
!318 = !{i64 6958}
!319 = !{i64 6982}
!320 = !{i64 7006}
!321 = !{i64 7030}
!322 = !{i64 7037}
!323 = !{i64 7058}
!324 = !{i64 7082}
!325 = !{i64 7107}
!326 = !{i64 7131}
!327 = !{i64 7155}
!328 = !{i64 7180}
!329 = !{i64 7200}
