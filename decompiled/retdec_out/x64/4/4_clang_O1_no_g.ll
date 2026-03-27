source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4050 = global i64 0
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_2014 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_2024 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_2034 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_2044 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_2054 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_2064 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_2074 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_2084 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_2094 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_2196 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_21a7 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_21b8 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_21c9 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_21da = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_21eb = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_21fc = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_220d = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_221e = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_222f = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_2240 = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_4048 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_234e = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_20a4 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_20cc = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_20ee = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_2115 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_213d = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_2169 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_236f = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_4040 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_2390 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2251 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_226d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_2289 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_22a4 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_22c1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_22dd = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_22fa = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2316 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_2332 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

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

define i32 @function_1040(i8* %s) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @strlen(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_1060(i64* %d) local_unnamed_addr {
dec_label_pc_1060:
  call void @__cxa_finalize(i64* %d), !insn.addr !9
  ret void, !insn.addr !9
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1070:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !10
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !10
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !10
  %3 = call i32 @__libc_start_main(i64 7168, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !10
  %4 = call i64 @__asm_hlt(), !insn.addr !11
  unreachable, !insn.addr !11
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10a0:
  ret i64 ptrtoint (i64* @global_var_4050 to i64), !insn.addr !12
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_10d0:
  ret i64 0, !insn.addr !13
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_4050 to i8*), align 8, !insn.addr !14
  %3 = icmp eq i8 %2, 0, !insn.addr !14
  %4 = icmp eq i1 %3, false, !insn.addr !15
  br i1 %4, label %dec_label_pc_1148, label %dec_label_pc_111d, !insn.addr !15

dec_label_pc_111d:                                ; preds = %dec_label_pc_1110
  %5 = load i64, i64* @global_var_3ff8, align 8, !insn.addr !16
  %6 = icmp eq i64 %5, 0, !insn.addr !16
  br i1 %6, label %dec_label_pc_1137, label %dec_label_pc_112b, !insn.addr !17

dec_label_pc_112b:                                ; preds = %dec_label_pc_111d
  %7 = load i64, i64* inttoptr (i64 16440 to i64*), align 8, !insn.addr !18
  %8 = inttoptr i64 %7 to i64*, !insn.addr !19
  call void @__cxa_finalize(i64* %8), !insn.addr !19
  br label %dec_label_pc_1137, !insn.addr !19

dec_label_pc_1137:                                ; preds = %dec_label_pc_112b, %dec_label_pc_111d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !20
  store i8 1, i8* bitcast (i64* @global_var_4050 to i8*), align 8, !insn.addr !21
  ret i64 %9, !insn.addr !22

dec_label_pc_1148:                                ; preds = %dec_label_pc_1110
  ret i64 %1, !insn.addr !23
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i64 @register_tm_clones(), !insn.addr !24
  ret i64 %0, !insn.addr !24
}

define i64 @cdecl_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1160:
  %0 = add i64 %arg2, %arg1, !insn.addr !25
  %1 = and i64 %0, 4294967295, !insn.addr !25
  ret i64 %1, !insn.addr !26
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_1170:
  ret i64 15, !insn.addr !27
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1180:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !28
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !28
  %2 = mul nsw i64 %1, %0, !insn.addr !28
  %3 = and i64 %2, 4294967295, !insn.addr !28
  ret i64 %3, !insn.addr !29
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_1190:
  ret i64 50, !insn.addr !30
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = add i64 %arg2, %arg1, !insn.addr !31
  %1 = add i64 %0, %arg3, !insn.addr !32
  %2 = and i64 %1, 4294967295, !insn.addr !32
  ret i64 %2, !insn.addr !33
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_11b0:
  ret i64 6, !insn.addr !34
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_11c0:
  ret i64 15, !insn.addr !35
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = add i64 %arg2, %arg1, !insn.addr !36
  %1 = add i64 %0, %arg3, !insn.addr !37
  %2 = add i64 %1, %arg4, !insn.addr !38
  %3 = add i64 %2, %arg5, !insn.addr !39
  %4 = and i64 %3, 4294967295, !insn.addr !39
  ret i64 %4, !insn.addr !40
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_11e0:
  ret i64 15, !insn.addr !41
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = add i64 %arg2, %arg1, !insn.addr !42
  %1 = add i64 %0, %arg3, !insn.addr !43
  %2 = add i64 %1, %arg4, !insn.addr !44
  %3 = and i64 %2, 4294967295, !insn.addr !44
  ret i64 %3, !insn.addr !45
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_1200:
  ret i64 100, !insn.addr !46
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1210:
  %0 = add i64 %arg2, %arg1, !insn.addr !47
  %1 = add i64 %0, %arg3, !insn.addr !48
  %2 = add i64 %1, %arg4, !insn.addr !49
  %3 = add i64 %2, %arg5, !insn.addr !50
  %4 = add i64 %3, %arg6, !insn.addr !51
  %5 = and i64 %4, 4294967295, !insn.addr !51
  ret i64 %5, !insn.addr !52
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1220:
  ret i64 21, !insn.addr !53
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1230:
  %0 = add i64 %arg2, %arg1, !insn.addr !54
  %1 = add i64 %0, %arg3, !insn.addr !55
  %2 = add i64 %1, %arg4, !insn.addr !56
  %3 = add i64 %2, %arg5, !insn.addr !57
  %4 = and i64 %3, 4294967295, !insn.addr !57
  ret i64 %4, !insn.addr !58
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1240:
  ret i64 15, !insn.addr !59
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1250:
  %0 = add i64 %arg2, %arg1, !insn.addr !60
  %1 = add i64 %0, %arg3, !insn.addr !61
  %2 = add i64 %1, %arg4, !insn.addr !62
  %3 = and i64 %2, 4294967295, !insn.addr !62
  ret i64 %3, !insn.addr !63
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1260:
  ret i64 10, !insn.addr !64
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1270:
  ret i64 33, !insn.addr !65
}

define i64 @varargs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !66
  %rdi.0.reg2mem = alloca i64, !insn.addr !66
  %rax.0.reg2mem = alloca i32, !insn.addr !66
  %stack_var_-208.1.reg2mem = alloca i32*, !insn.addr !66
  %stack_var_-216.1.reg2mem = alloca i32, !insn.addr !66
  %rdx.0.reg2mem = alloca i64, !insn.addr !66
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !66
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !66
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %8 = load i128, i128* %0
  %9 = load i128, i128* %0
  %10 = load i128, i128* %0
  %stack_var_8 = alloca i64, align 8
  %stack_var_-184 = alloca i64, align 8
  %11 = trunc i64 %2 to i8, !insn.addr !67
  %12 = icmp eq i8 %11, 0, !insn.addr !67
  br i1 %12, label %dec_label_pc_12c8, label %dec_label_pc_12a1, !insn.addr !68

dec_label_pc_12a1:                                ; preds = %dec_label_pc_1280
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !69
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !70
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !71
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !72
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !73
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !74
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !75
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !76
  br label %dec_label_pc_12c8, !insn.addr !76

dec_label_pc_12c8:                                ; preds = %dec_label_pc_12a1, %dec_label_pc_1280
  %21 = trunc i64 %arg1 to i32, !insn.addr !77
  %22 = icmp slt i32 %21, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !78
  br i1 %22, label %dec_label_pc_132f, label %dec_label_pc_12f1, !insn.addr !78

dec_label_pc_12f1:                                ; preds = %dec_label_pc_12c8
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !79
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32 8, i32* %stack_var_-216.1.reg2mem, !insn.addr !80
  store i32* %24, i32** %stack_var_-208.1.reg2mem, !insn.addr !80
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !80
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !80
  br label %dec_label_pc_1315, !insn.addr !80

dec_label_pc_1300:                                ; preds = %dec_label_pc_1315
  %25 = ptrtoint i32* %stack_var_-208.1.reload to i64, !insn.addr !81
  %26 = add i64 %25, 8, !insn.addr !82
  %27 = inttoptr i64 %26 to i32*, !insn.addr !83
  store i32 %stack_var_-216.1.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !83
  store i32* %27, i32** %stack_var_-208.0.reg2mem, !insn.addr !83
  store i64 %25, i64* %rdx.0.reg2mem, !insn.addr !83
  br label %dec_label_pc_130e, !insn.addr !83

dec_label_pc_130e:                                ; preds = %dec_label_pc_1300, %dec_label_pc_1320
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %28 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !84
  %29 = load i32, i32* %28, align 4, !insn.addr !84
  %30 = add i32 %29, %rax.0.reload, !insn.addr !84
  %31 = trunc i64 %rdi.0.reload to i32, !insn.addr !85
  %32 = add i32 %31, -1, !insn.addr !85
  %33 = icmp eq i32 %32, 0, !insn.addr !85
  %34 = zext i32 %32 to i64, !insn.addr !85
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.1.reg2mem, !insn.addr !86
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.1.reg2mem, !insn.addr !86
  store i32 %30, i32* %rax.0.reg2mem, !insn.addr !86
  store i64 %34, i64* %rdi.0.reg2mem, !insn.addr !86
  br i1 %33, label %dec_label_pc_132f.loopexit, label %dec_label_pc_1315, !insn.addr !86

dec_label_pc_1315:                                ; preds = %dec_label_pc_130e, %dec_label_pc_12f1
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %stack_var_-208.1.reload = load i32*, i32** %stack_var_-208.1.reg2mem
  %stack_var_-216.1.reload = load i32, i32* %stack_var_-216.1.reg2mem
  %35 = icmp ult i32 %stack_var_-216.1.reload, 41
  br i1 %35, label %dec_label_pc_1320, label %dec_label_pc_1300, !insn.addr !87

dec_label_pc_1320:                                ; preds = %dec_label_pc_1315
  %36 = sext i32 %stack_var_-216.1.reload to i64, !insn.addr !88
  %37 = add i64 %36, %23, !insn.addr !89
  %38 = add i32 %stack_var_-216.1.reload, 8, !insn.addr !90
  store i32 %38, i32* %stack_var_-216.0.reg2mem, !insn.addr !91
  store i32* %stack_var_-208.1.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !91
  store i64 %37, i64* %rdx.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_130e, !insn.addr !91

dec_label_pc_132f.loopexit:                       ; preds = %dec_label_pc_130e
  %39 = zext i32 %30 to i64, !insn.addr !84
  store i64 %39, i64* %rax.1.reg2mem
  br label %dec_label_pc_132f

dec_label_pc_132f:                                ; preds = %dec_label_pc_132f.loopexit, %dec_label_pc_12c8
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !92

; uselistorder directives
  uselistorder i32 %stack_var_-216.1.reload, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-208.1.reload, { 1, 0 }
  uselistorder i32 %30, { 1, 0 }
  uselistorder i32* %stack_var_-216.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-208.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_130e, { 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_1340:
  ret i64 42, !insn.addr !93
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_1350:
  %0 = add i64 %arg2, %arg1, !insn.addr !94
  %1 = trunc i64 %0 to i32, !insn.addr !94
  %2 = trunc i64 %arg3 to i32, !insn.addr !95
  %3 = add i32 %1, %2, !insn.addr !95
  %4 = trunc i64 %arg4 to i32, !insn.addr !96
  %5 = add i32 %3, %4, !insn.addr !96
  %6 = trunc i64 %arg5 to i32, !insn.addr !97
  %7 = add i32 %5, %6, !insn.addr !97
  %8 = trunc i64 %arg6 to i32, !insn.addr !98
  %9 = add i32 %7, %8, !insn.addr !98
  %10 = add i32 %9, %arg7, !insn.addr !99
  %11 = add i32 %10, %arg8, !insn.addr !100
  %12 = zext i32 %11 to i64, !insn.addr !100
  ret i64 %12, !insn.addr !101
}

define i64 @func_mixed_args(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1370:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i32, !insn.addr !102
  %xmm0.0.reg2mem = alloca i128, !insn.addr !102
  %1 = load i128, i128* %0
  %2 = icmp eq i64 %arg2, 0, !insn.addr !103
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !104
  br i1 %2, label %dec_label_pc_1393, label %dec_label_pc_137d, !insn.addr !104

dec_label_pc_137d:                                ; preds = %dec_label_pc_1370
  %3 = call i64 @__asm_movsd(i128 %1), !insn.addr !105
  %4 = inttoptr i64 %arg2 to i8*, !insn.addr !106
  %5 = call i32 @strlen(i8* %4), !insn.addr !106
  %6 = call i128 @__asm_movsd.1(i64 %3), !insn.addr !107
  store i128 %6, i128* %xmm0.0.reg2mem, !insn.addr !108
  store i32 %5, i32* %rax.0.reg2mem, !insn.addr !108
  br label %dec_label_pc_1393, !insn.addr !108

dec_label_pc_1393:                                ; preds = %dec_label_pc_1370, %dec_label_pc_137d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %7 = trunc i64 %arg1 to i32, !insn.addr !109
  %8 = add i32 %rax.0.reload, %7, !insn.addr !109
  %9 = call i128 @__asm_cvtsi2sd(i32 %8), !insn.addr !110
  %10 = call i128 @__asm_cvtsi2sd.2(i64 %arg3), !insn.addr !111
  %11 = call i128 @__asm_addsd(i128 %9, i128 %xmm0.0.reload), !insn.addr !112
  %12 = call i128 @__asm_addsd(i128 %10, i128 %11), !insn.addr !113
  %13 = call i32 @__asm_cvttsd2si(i128 %12), !insn.addr !114
  %14 = sext i32 %13 to i64, !insn.addr !114
  ret i64 %14, !insn.addr !115

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1393, { 1, 0 }
}

define i64 @func_struct_byval(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13c0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !116
  %rax.0.reg2mem = alloca i64, !insn.addr !116
  %stack_var_8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !116
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !117
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !117
  br label %dec_label_pc_13d0, !insn.addr !117

dec_label_pc_13d0:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %1 = mul i64 %rdx.0.reload, 8, !insn.addr !118
  %2 = add i64 %1, %0, !insn.addr !118
  %3 = inttoptr i64 %2 to i64*, !insn.addr !118
  %4 = load i64, i64* %3, align 8, !insn.addr !118
  %5 = add i64 %4, %rax.0.reload, !insn.addr !118
  %6 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !119
  %exitcond = icmp eq i64 %6, 16
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !120
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !120
  br i1 %exitcond, label %dec_label_pc_13de, label %dec_label_pc_13d0, !insn.addr !120

dec_label_pc_13de:                                ; preds = %dec_label_pc_13d0
  ret i64 %5, !insn.addr !121

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !122
  br i1 %0, label %dec_label_pc_13ec, label %dec_label_pc_13e5, !insn.addr !123

dec_label_pc_13e5:                                ; preds = %dec_label_pc_13e0
  %1 = trunc i64 %arg1 to i32
  %2 = add i64 %arg1, 4, !insn.addr !124
  %3 = inttoptr i64 %2 to i32*, !insn.addr !124
  %4 = load i32, i32* %3, align 4, !insn.addr !124
  %5 = mul i32 %4, %1, !insn.addr !125
  %6 = zext i32 %5 to i64, !insn.addr !125
  ret i64 %6, !insn.addr !126

dec_label_pc_13ec:                                ; preds = %dec_label_pc_13e0
  ret i64 4294967295, !insn.addr !127

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_1400:
  %rax.0.reg2mem = alloca i64, !insn.addr !128
  %stack_var_-136 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-136 to i64, !insn.addr !128
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_234e to i8*)), !insn.addr !129
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2004, i64 0, i64 0), i64 15), !insn.addr !130
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2014, i64 0, i64 0), i64 50), !insn.addr !131
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2024, i64 0, i64 0), i64 6), !insn.addr !132
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2034, i64 0, i64 0), i64 15), !insn.addr !133
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2044, i64 0, i64 0), i64 15), !insn.addr !134
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2054, i64 0, i64 0), i64 100), !insn.addr !135
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2064, i64 0, i64 0), i64 21), !insn.addr !136
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2074, i64 0, i64 0), i64 15), !insn.addr !137
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2084, i64 0, i64 0), i64 10), !insn.addr !138
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2094, i64 0, i64 0), i64 33), !insn.addr !139
  %12 = call i64 @varargs_func(i64 5, i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !140
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20a4 to i8*)), !insn.addr !141
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20cc to i8*)), !insn.addr !142
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ee to i8*)), !insn.addr !143
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2115 to i8*)), !insn.addr !144
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_1550, !insn.addr !145

dec_label_pc_1550:                                ; preds = %dec_label_pc_1550, %dec_label_pc_1400
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %17 = mul i64 %rax.0.reload, 8, !insn.addr !146
  %18 = add i64 %17, %0, !insn.addr !146
  %19 = inttoptr i64 %18 to i64*, !insn.addr !146
  store i64 %rax.0.reload, i64* %19, align 8, !insn.addr !146
  %20 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !147
  %exitcond1 = icmp eq i64 %20, 17
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !148
  br i1 %exitcond1, label %dec_label_pc_1570.preheader, label %dec_label_pc_1550, !insn.addr !148

dec_label_pc_1570.preheader:                      ; preds = %dec_label_pc_1550
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_213d to i8*)), !insn.addr !149
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2169 to i8*)), !insn.addr !150
  %23 = sext i32 %22 to i64, !insn.addr !150
  ret i64 %23, !insn.addr !151

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = mul i64 %arg1, 2, !insn.addr !152
  %1 = and i64 %0, 4294967294, !insn.addr !152
  ret i64 %1, !insn.addr !153
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_15c0:
  ret i64 15, !insn.addr !154
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !155
  %4 = inttoptr i64 %arg1 to i32*, !insn.addr !155
  store i32 %3, i32* %4, align 4, !insn.addr !155
  ret i64 1, !insn.addr !156
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_15e0:
  ret i64 11, !insn.addr !157
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_15f0:
  ret i64 8, !insn.addr !158
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_1600:
  ret i64 8, !insn.addr !159
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_1610:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !160
  %3 = inttoptr i64 %2 to i8*, !insn.addr !160
  %4 = load i8, i8* %3, align 1, !insn.addr !160
  %5 = sext i8 %4 to i64, !insn.addr !161
  %sext = mul i64 %1, 72057594037927936
  %6 = ashr exact i64 %sext, 56, !insn.addr !161
  %7 = add nsw i64 %6, %5, !insn.addr !161
  %8 = and i64 %7, 4294967295, !insn.addr !161
  ret i64 %8, !insn.addr !162
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_1620:
  ret i64 173, !insn.addr !163
}

define i64 @param_ptr_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1630:
  %merge.reg2mem = alloca i64, !insn.addr !164
  %rdx.0.reg2mem = alloca i64, !insn.addr !164
  %rax.0.reg2mem = alloca i64, !insn.addr !164
  %0 = trunc i64 %arg2 to i32, !insn.addr !164
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !165
  br i1 %1, label %dec_label_pc_1652, label %dec_label_pc_1634, !insn.addr !165

dec_label_pc_1634:                                ; preds = %dec_label_pc_1630
  %2 = and i64 %arg2, 4294967295, !insn.addr !166
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !167
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_1640, !insn.addr !167

dec_label_pc_1640:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1634
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 8, !insn.addr !168
  %4 = add i64 %3, %arg1, !insn.addr !168
  %5 = inttoptr i64 %4 to i64*, !insn.addr !168
  %6 = load i64, i64* %5, align 8, !insn.addr !168
  %7 = inttoptr i64 %6 to i8*, !insn.addr !169
  %8 = load i8, i8* %7, align 1, !insn.addr !169
  %9 = sext i8 %8 to i64, !insn.addr !170
  %10 = add nsw i64 %rax.0.reload, %9, !insn.addr !170
  %11 = and i64 %10, 4294967295, !insn.addr !170
  %12 = add i64 %rdx.0.reload, 1, !insn.addr !171
  %13 = icmp eq i64 %2, %12, !insn.addr !172
  %14 = icmp eq i1 %13, false, !insn.addr !173
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !173
  store i64 %12, i64* %rdx.0.reg2mem, !insn.addr !173
  store i64 %11, i64* %merge.reg2mem, !insn.addr !173
  br i1 %14, label %dec_label_pc_1640, label %dec_label_pc_1652, !insn.addr !173

dec_label_pc_1652:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1630
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !174

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1660:
  ret i64 300, !insn.addr !175
}

define i64 @param_varargs(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1670:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !176
  %rdi.0.reg2mem = alloca i64, !insn.addr !176
  %rax.0.reg2mem = alloca i32, !insn.addr !176
  %stack_var_-208.1.reg2mem = alloca i32*, !insn.addr !176
  %stack_var_-216.1.reg2mem = alloca i32, !insn.addr !176
  %rdx.0.reg2mem = alloca i64, !insn.addr !176
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !176
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !176
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %8 = load i128, i128* %0
  %9 = load i128, i128* %0
  %10 = load i128, i128* %0
  %stack_var_8 = alloca i64, align 8
  %stack_var_-184 = alloca i64, align 8
  %11 = trunc i64 %2 to i8, !insn.addr !177
  %12 = icmp eq i8 %11, 0, !insn.addr !177
  br i1 %12, label %dec_label_pc_16b8, label %dec_label_pc_1691, !insn.addr !178

dec_label_pc_1691:                                ; preds = %dec_label_pc_1670
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !179
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !180
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !181
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !182
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !183
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !184
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !185
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !186
  br label %dec_label_pc_16b8, !insn.addr !186

dec_label_pc_16b8:                                ; preds = %dec_label_pc_1691, %dec_label_pc_1670
  %21 = trunc i64 %arg1 to i32, !insn.addr !187
  %22 = icmp slt i32 %21, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !188
  br i1 %22, label %dec_label_pc_171f, label %dec_label_pc_16e1, !insn.addr !188

dec_label_pc_16e1:                                ; preds = %dec_label_pc_16b8
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !189
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32 8, i32* %stack_var_-216.1.reg2mem, !insn.addr !190
  store i32* %24, i32** %stack_var_-208.1.reg2mem, !insn.addr !190
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !190
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !190
  br label %dec_label_pc_1705, !insn.addr !190

dec_label_pc_16f0:                                ; preds = %dec_label_pc_1705
  %25 = ptrtoint i32* %stack_var_-208.1.reload to i64, !insn.addr !191
  %26 = add i64 %25, 8, !insn.addr !192
  %27 = inttoptr i64 %26 to i32*, !insn.addr !193
  store i32 %stack_var_-216.1.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !193
  store i32* %27, i32** %stack_var_-208.0.reg2mem, !insn.addr !193
  store i64 %25, i64* %rdx.0.reg2mem, !insn.addr !193
  br label %dec_label_pc_16fe, !insn.addr !193

dec_label_pc_16fe:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_1710
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %28 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !194
  %29 = load i32, i32* %28, align 4, !insn.addr !194
  %30 = add i32 %29, %rax.0.reload, !insn.addr !194
  %31 = trunc i64 %rdi.0.reload to i32, !insn.addr !195
  %32 = add i32 %31, -1, !insn.addr !195
  %33 = icmp eq i32 %32, 0, !insn.addr !195
  %34 = zext i32 %32 to i64, !insn.addr !195
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.1.reg2mem, !insn.addr !196
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.1.reg2mem, !insn.addr !196
  store i32 %30, i32* %rax.0.reg2mem, !insn.addr !196
  store i64 %34, i64* %rdi.0.reg2mem, !insn.addr !196
  br i1 %33, label %dec_label_pc_171f.loopexit, label %dec_label_pc_1705, !insn.addr !196

dec_label_pc_1705:                                ; preds = %dec_label_pc_16fe, %dec_label_pc_16e1
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %stack_var_-208.1.reload = load i32*, i32** %stack_var_-208.1.reg2mem
  %stack_var_-216.1.reload = load i32, i32* %stack_var_-216.1.reg2mem
  %35 = icmp ult i32 %stack_var_-216.1.reload, 41
  br i1 %35, label %dec_label_pc_1710, label %dec_label_pc_16f0, !insn.addr !197

dec_label_pc_1710:                                ; preds = %dec_label_pc_1705
  %36 = sext i32 %stack_var_-216.1.reload to i64, !insn.addr !198
  %37 = add i64 %36, %23, !insn.addr !199
  %38 = add i32 %stack_var_-216.1.reload, 8, !insn.addr !200
  store i32 %38, i32* %stack_var_-216.0.reg2mem, !insn.addr !201
  store i32* %stack_var_-208.1.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !201
  store i64 %37, i64* %rdx.0.reg2mem, !insn.addr !201
  br label %dec_label_pc_16fe, !insn.addr !201

dec_label_pc_171f.loopexit:                       ; preds = %dec_label_pc_16fe
  %39 = zext i32 %30 to i64, !insn.addr !194
  store i64 %39, i64* %rax.1.reg2mem
  br label %dec_label_pc_171f

dec_label_pc_171f:                                ; preds = %dec_label_pc_171f.loopexit, %dec_label_pc_16b8
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !202

; uselistorder directives
  uselistorder i32 %stack_var_-216.1.reload, { 0, 2, 1, 3 }
  uselistorder i32* %stack_var_-208.1.reload, { 1, 0 }
  uselistorder i32 %30, { 1, 0 }
  uselistorder i32* %stack_var_-216.0.reg2mem, { 2, 0, 1 }
  uselistorder i32** %stack_var_-208.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_16fe, { 1, 0 }
}

define i64 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1730:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %1), !insn.addr !203
  ret i64 %2, !insn.addr !204
}

define i64 @param_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1760:
  %0 = add i64 %arg1, 10, !insn.addr !205
  %1 = and i64 %0, 4294967295, !insn.addr !205
  ret i64 %1, !insn.addr !206
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1770:
  ret i64 20, !insn.addr !207
}

define i64 @param_double_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1780:
  %rax.0.reg2mem = alloca i64, !insn.addr !208
  %0 = icmp eq i64 %arg1, 0, !insn.addr !209
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !210
  br i1 %0, label %dec_label_pc_17a0, label %dec_label_pc_1792, !insn.addr !210

dec_label_pc_1792:                                ; preds = %dec_label_pc_1780
  %1 = trunc i64 %arg2 to i32, !insn.addr !211
  %2 = inttoptr i64 %arg1 to i32*, !insn.addr !211
  store i32 %1, i32* %2, align 4, !insn.addr !211
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !212
  store i64 0, i64* %3, align 8, !insn.addr !212
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_17a0, !insn.addr !213

dec_label_pc_17a0:                                ; preds = %dec_label_pc_1792, %dec_label_pc_1780
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !214
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_17b0:
  ret i64 21, !insn.addr !215
}

define i64 @param_complex_cast(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17c0:
  %rax.0.reg2mem = alloca i64, !insn.addr !216
  %0 = trunc i64 %arg2 to i32, !insn.addr !216
  %1 = icmp eq i32 %0, 1, !insn.addr !216
  br i1 %1, label %dec_label_pc_17d1, label %dec_label_pc_17c5, !insn.addr !217

dec_label_pc_17c5:                                ; preds = %dec_label_pc_17c0
  %2 = icmp eq i32 %0, 0, !insn.addr !218
  %3 = icmp eq i1 %2, false, !insn.addr !219
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !219
  br i1 %3, label %dec_label_pc_17d6, label %dec_label_pc_17ce, !insn.addr !219

dec_label_pc_17ce:                                ; preds = %dec_label_pc_17c5
  %4 = and i64 %arg1, 4294967295, !insn.addr !220
  ret i64 %4, !insn.addr !221

dec_label_pc_17d1:                                ; preds = %dec_label_pc_17c0
  %5 = trunc i64 %arg1 to i32
  %6 = add i64 %arg1, 4, !insn.addr !222
  %7 = inttoptr i64 %6 to i32*, !insn.addr !222
  %8 = load i32, i32* %7, align 4, !insn.addr !222
  %9 = add i32 %8, %5, !insn.addr !223
  %10 = zext i32 %9 to i64, !insn.addr !223
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_17d6, !insn.addr !223

dec_label_pc_17d6:                                ; preds = %dec_label_pc_17d1, %dec_label_pc_17c5
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !224

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_17e0:
  ret i64 305419896, !insn.addr !225
}

define i64 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !226
  %3 = zext i32 %2 to i64, !insn.addr !226
  ret i64 %3, !insn.addr !227
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1800:
  %0 = alloca i64
  %1 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !228
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = load i32, i32* %1
  %5 = add i64 %2, -64, !insn.addr !229
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_1810, !insn.addr !230

dec_label_pc_1810:                                ; preds = %dec_label_pc_1810, %dec_label_pc_1800
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = trunc i64 %rax.0.reload to i32, !insn.addr !229
  %7 = mul i64 %rax.0.reload, 4, !insn.addr !229
  %8 = add i64 %5, %7, !insn.addr !229
  %9 = inttoptr i64 %8 to i32*, !insn.addr !229
  store i32 %6, i32* %9, align 4, !insn.addr !229
  %10 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !231
  %exitcond = icmp eq i64 %10, 16
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !232
  br i1 %exitcond, label %dec_label_pc_181e, label %dec_label_pc_1810, !insn.addr !232

dec_label_pc_181e:                                ; preds = %dec_label_pc_1810
  %11 = add i32 %4, %3, !insn.addr !233
  %12 = zext i32 %11 to i64, !insn.addr !233
  ret i64 %12, !insn.addr !234

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %1, { 1, 0 }
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1830:
  %0 = add i64 %arg2, %arg1, !insn.addr !235
  %1 = and i64 %0, 4294967295, !insn.addr !235
  ret i64 %1, !insn.addr !236
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_1840:
  ret i64 3, !insn.addr !237
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_1850:
  %0 = alloca i64
  %1 = alloca i32
  %rbx.0.reg2mem = alloca i64, !insn.addr !238
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %stack_var_-72 = alloca i32, align 4
  %4 = ptrtoint i32* %stack_var_-72 to i64, !insn.addr !239
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_236f to i8*)), !insn.addr !240
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2196, i64 0, i64 0), i64 15), !insn.addr !241
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21a7, i64 0, i64 0), i64 11), !insn.addr !242
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21b8, i64 0, i64 0), i64 8), !insn.addr !243
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21c9, i64 0, i64 0), i64 173), !insn.addr !244
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21da, i64 0, i64 0), i64 300), !insn.addr !245
  %11 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %2), !insn.addr !246
  %12 = and i64 %11, 4294967295, !insn.addr !247
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21eb, i64 0, i64 0), i64 %12), !insn.addr !248
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_21fc, i64 0, i64 0), i64 20), !insn.addr !249
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_220d, i64 0, i64 0), i64 21), !insn.addr !250
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_221e, i64 0, i64 0), i64 305419896), !insn.addr !251
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !252
  br label %dec_label_pc_1930, !insn.addr !252

dec_label_pc_1930:                                ; preds = %dec_label_pc_1930, %dec_label_pc_1850
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %17 = trunc i64 %rbx.0.reload to i32, !insn.addr !253
  %18 = mul i64 %rbx.0.reload, 4, !insn.addr !253
  %19 = add i64 %18, %4, !insn.addr !253
  %20 = inttoptr i64 %19 to i32*, !insn.addr !253
  store i32 %17, i32* %20, align 4, !insn.addr !253
  %21 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !254
  %exitcond = icmp eq i64 %21, 16
  store i64 %21, i64* %rbx.0.reg2mem, !insn.addr !255
  br i1 %exitcond, label %dec_label_pc_193d, label %dec_label_pc_1930, !insn.addr !255

dec_label_pc_193d:                                ; preds = %dec_label_pc_1930
  %22 = load i32, i32* %stack_var_-72, align 4, !insn.addr !256
  %23 = add i32 %22, %3, !insn.addr !256
  %24 = zext i32 %23 to i64, !insn.addr !256
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_222f, i64 0, i64 0), i64 %24), !insn.addr !257
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2240, i64 0, i64 0), i64 3), !insn.addr !258
  %27 = sext i32 %26 to i64, !insn.addr !258
  ret i64 %27, !insn.addr !259

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-72, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 (i64, i64, i64, i64, i64, i64)* @param_varargs, { 1, 0 }
  uselistorder i64 300, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 5, 6, 0, 3, 4, 1, 2, 7 }
  uselistorder i64 11, { 1, 0 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_1970:
  %0 = mul i64 %arg1, 2, !insn.addr !260
  %1 = and i64 %0, 4294967294, !insn.addr !260
  ret i64 %1, !insn.addr !261
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1980:
  ret i64 42, !insn.addr !262
}

define i64 @ret_pointer(i64 %arg1) local_unnamed_addr {
dec_label_pc_1990:
  %0 = add i64 %arg1, 4, !insn.addr !263
  ret i64 %0, !insn.addr !264
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_19a0:
  ret i64 20, !insn.addr !265

; uselistorder directives
  uselistorder i64 20, { 0, 2, 3, 1, 4 }
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = mul i64 %arg2, 4294967296, !insn.addr !266
  %1 = and i64 %arg1, 4294967295, !insn.addr !267
  %2 = or i64 %0, %1, !insn.addr !268
  ret i64 %2, !insn.addr !269
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_19c0:
  ret i64 7, !insn.addr !270
}

define i64 @ret_large_struct(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_19d0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !271
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_19e0, !insn.addr !272

dec_label_pc_19e0:                                ; preds = %dec_label_pc_19e0, %dec_label_pc_19d0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %0 = add i64 %rdx.0.reload, %arg2, !insn.addr !273
  %1 = trunc i64 %0 to i32, !insn.addr !273
  %2 = mul i64 %rdx.0.reload, 4, !insn.addr !274
  %3 = add i64 %2, %arg1, !insn.addr !274
  %4 = inttoptr i64 %3 to i32*, !insn.addr !274
  store i32 %1, i32* %4, align 4, !insn.addr !274
  %5 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !275
  %exitcond = icmp eq i64 %5, 16
  store i64 %5, i64* %rdx.0.reg2mem, !insn.addr !276
  br i1 %exitcond, label %dec_label_pc_19f0, label %dec_label_pc_19e0, !insn.addr !276

dec_label_pc_19f0:                                ; preds = %dec_label_pc_19e0
  ret i64 %arg1, !insn.addr !277

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !278
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = load i32, i32* %1
  %5 = add i64 %2, -64, !insn.addr !279
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !280
  br label %dec_label_pc_1a10, !insn.addr !280

dec_label_pc_1a10:                                ; preds = %dec_label_pc_1a10, %dec_label_pc_1a00
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = trunc i64 %rax.0.reload to i32
  %7 = add i32 %6, 100, !insn.addr !281
  %8 = mul i64 %rax.0.reload, 4, !insn.addr !279
  %9 = add i64 %5, %8, !insn.addr !279
  %10 = inttoptr i64 %9 to i32*, !insn.addr !279
  store i32 %7, i32* %10, align 4, !insn.addr !279
  %11 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !282
  %exitcond = icmp eq i64 %11, 16
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !283
  br i1 %exitcond, label %dec_label_pc_1a21, label %dec_label_pc_1a10, !insn.addr !283

dec_label_pc_1a21:                                ; preds = %dec_label_pc_1a10
  %12 = add i32 %4, %3, !insn.addr !284
  %13 = zext i32 %12 to i64, !insn.addr !284
  ret i64 %13, !insn.addr !285

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %1, { 1, 0 }
}

define i64 @func_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = add i64 %arg1, 10, !insn.addr !286
  %1 = and i64 %0, 4294967295, !insn.addr !286
  ret i64 %1, !insn.addr !287
}

define i64 @func_b(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a40:
  %0 = mul i64 %arg1, 2, !insn.addr !288
  %1 = and i64 %0, 4294967294, !insn.addr !288
  ret i64 %1, !insn.addr !289
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = trunc i64 %arg1 to i32, !insn.addr !290
  %1 = icmp eq i32 %0, 0, !insn.addr !290
  %2 = select i1 %1, i64 6704, i64 6720, !insn.addr !291
  ret i64 %2, !insn.addr !292
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1a70:
  ret i64 10, !insn.addr !293
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a80:
  %0 = trunc i64 %arg1 to i32, !insn.addr !294
  %1 = icmp eq i32 %0, 0, !insn.addr !294
  %2 = select i1 %1, i64 ptrtoint (i32* @global_var_4040 to i64), i64 ptrtoint (i64* @global_var_4048 to i64), !insn.addr !295
  ret i64 %2, !insn.addr !296
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = load i32, i32* @global_var_4040, align 4, !insn.addr !297
  %1 = zext i32 %0 to i64, !insn.addr !297
  ret i64 %1, !insn.addr !298

; uselistorder directives
  uselistorder i32* @global_var_4040, { 1, 0 }
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = mul i64 %arg3, 2, !insn.addr !299
  %1 = add i64 %arg3, 10, !insn.addr !300
  %2 = trunc i64 %arg1 to i32, !insn.addr !301
  %3 = trunc i64 %arg2 to i32, !insn.addr !301
  %4 = sub i32 %2, %3, !insn.addr !301
  %5 = xor i64 %arg2, %arg1
  %6 = trunc i64 %5 to i32, !insn.addr !301
  %7 = xor i32 %4, %2, !insn.addr !301
  %8 = and i32 %7, %6, !insn.addr !301
  %9 = icmp slt i32 %8, 0, !insn.addr !301
  %10 = icmp eq i32 %4, 0, !insn.addr !301
  %11 = icmp slt i32 %4, 0, !insn.addr !301
  %12 = icmp eq i1 %11, %9, !insn.addr !302
  %13 = icmp eq i1 %10, false, !insn.addr !302
  %14 = icmp eq i1 %12, %13, !insn.addr !302
  %15 = select i1 %14, i64 %0, i64 %1, !insn.addr !302
  %16 = and i64 %15, 4294967295, !insn.addr !302
  ret i64 %16, !insn.addr !303

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32 0, { 3, 4, 5, 6, 7, 8, 9, 0, 1, 10, 2 }
  uselistorder i64 %arg3, { 1, 0 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1ac0:
  ret i64 40, !insn.addr !304
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !305
  %1 = icmp ult i32 %0, 3, !insn.addr !305
  %factor = mul i64 %arg1, 10
  %2 = add i64 %factor, 10, !insn.addr !306
  %.op = and i64 %2, 4294967294
  %3 = select i1 %1, i64 %.op, i64 4294967295, !insn.addr !307
  ret i64 %3, !insn.addr !308

; uselistorder directives
  uselistorder i64 10, { 3, 2, 4, 0, 5, 7, 6, 8, 9, 1 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1af0:
  ret i64 60, !insn.addr !309
}

define i64 @ret_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1b00:
  %0 = mul i64 %arg1, 3, !insn.addr !310
  %1 = and i64 %0, 4294967295, !insn.addr !310
  %2 = trunc i64 %0 to i32, !insn.addr !311
  %3 = inttoptr i64 %arg2 to i32*, !insn.addr !311
  store i32 %2, i32* %3, align 4, !insn.addr !311
  ret i64 %1, !insn.addr !312

; uselistorder directives
  uselistorder i64 4294967295, { 4, 5, 6, 7, 8, 9, 10, 3, 0, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22 }
  uselistorder i64 3, { 1, 2, 0, 3 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1b10:
  ret i64 21, !insn.addr !313

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_1b20:
  %rbx.0.reg2mem = alloca i64, !insn.addr !314
  %stack_var_-72 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !315
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_2390 to i8*)), !insn.addr !316
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2251 to i8*)), !insn.addr !317
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_226d to i8*)), !insn.addr !318
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2289 to i8*)), !insn.addr !319
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !320
  br label %dec_label_pc_1b70, !insn.addr !320

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b70, %dec_label_pc_1b20
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = trunc i64 %rbx.0.reload to i32
  %6 = add i32 %5, 100, !insn.addr !321
  %7 = mul i64 %rbx.0.reload, 4, !insn.addr !322
  %8 = add i64 %7, %0, !insn.addr !322
  %9 = inttoptr i64 %8 to i32*, !insn.addr !322
  store i32 %6, i32* %9, align 4, !insn.addr !322
  %10 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !323
  %exitcond = icmp eq i64 %10, 16
  store i64 %10, i64* %rbx.0.reg2mem, !insn.addr !324
  br i1 %exitcond, label %dec_label_pc_1b80, label %dec_label_pc_1b70, !insn.addr !324

dec_label_pc_1b80:                                ; preds = %dec_label_pc_1b70
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22a4 to i8*)), !insn.addr !325
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22c1 to i8*)), !insn.addr !326
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22dd to i8*)), !insn.addr !327
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22fa to i8*)), !insn.addr !328
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2316 to i8*)), !insn.addr !329
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2332 to i8*)), !insn.addr !330
  %17 = sext i32 %16 to i64, !insn.addr !330
  ret i64 %17, !insn.addr !331

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 2, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 4, 5, 6, 7, 8, 0, 9, 10, 2, 11, 1, 3, 12 }
  uselistorder i64 4, { 0, 1, 2, 8, 3, 5, 4, 9, 6, 7, 10 }
  uselistorder i32 (i8*, ...)* @printf, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1c00:
  %0 = call i64 @test_calling_conventions(), !insn.addr !332
  %1 = call i64 @test_parameter_passing(), !insn.addr !333
  %2 = call i64 @test_return_values(), !insn.addr !334
  ret i64 0, !insn.addr !335

; uselistorder directives
  uselistorder i64 0, { 13, 0, 1, 2, 51, 52, 53, 54, 3, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 4, 95, 96, 5, 7, 8, 6, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 97, 9, 10, 98, 11, 99, 14, 12, 100, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 93, 94 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1c14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !336

; uselistorder directives
  uselistorder i32 1, { 12, 54, 17, 18, 16, 11, 19, 53, 20, 15, 10, 21, 14, 9, 13, 49, 22, 23, 8, 50, 56, 55, 31, 30, 29, 28, 27, 26, 25, 24, 7, 2, 51, 34, 33, 32, 6, 5, 57, 35, 58, 37, 36, 39, 38, 1, 52, 60, 59, 47, 46, 45, 44, 43, 42, 41, 40, 4, 0, 3, 61, 48 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_movsd.1(i64) local_unnamed_addr

declare i128 @__asm_cvtsi2sd(i32) local_unnamed_addr

declare i128 @__asm_cvtsi2sd.2(i64) local_unnamed_addr

declare i128 @__asm_addsd(i128, i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

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
!10 = !{i64 4239}
!11 = !{i64 4245}
!12 = !{i64 4296}
!13 = !{i64 4360}
!14 = !{i64 4372}
!15 = !{i64 4379}
!16 = !{i64 4382}
!17 = !{i64 4393}
!18 = !{i64 4395}
!19 = !{i64 4402}
!20 = !{i64 4407}
!21 = !{i64 4412}
!22 = !{i64 4420}
!23 = !{i64 4424}
!24 = !{i64 4436}
!25 = !{i64 4448}
!26 = !{i64 4451}
!27 = !{i64 4469}
!28 = !{i64 4482}
!29 = !{i64 4485}
!30 = !{i64 4501}
!31 = !{i64 4512}
!32 = !{i64 4515}
!33 = !{i64 4517}
!34 = !{i64 4533}
!35 = !{i64 4549}
!36 = !{i64 4560}
!37 = !{i64 4563}
!38 = !{i64 4565}
!39 = !{i64 4567}
!40 = !{i64 4570}
!41 = !{i64 4581}
!42 = !{i64 4592}
!43 = !{i64 4595}
!44 = !{i64 4597}
!45 = !{i64 4599}
!46 = !{i64 4613}
!47 = !{i64 4624}
!48 = !{i64 4627}
!49 = !{i64 4629}
!50 = !{i64 4631}
!51 = !{i64 4634}
!52 = !{i64 4637}
!53 = !{i64 4645}
!54 = !{i64 4656}
!55 = !{i64 4659}
!56 = !{i64 4661}
!57 = !{i64 4663}
!58 = !{i64 4666}
!59 = !{i64 4677}
!60 = !{i64 4688}
!61 = !{i64 4691}
!62 = !{i64 4693}
!63 = !{i64 4695}
!64 = !{i64 4709}
!65 = !{i64 4725}
!66 = !{i64 4736}
!67 = !{i64 4765}
!68 = !{i64 4767}
!69 = !{i64 4769}
!70 = !{i64 4774}
!71 = !{i64 4779}
!72 = !{i64 4784}
!73 = !{i64 4788}
!74 = !{i64 4793}
!75 = !{i64 4798}
!76 = !{i64 4803}
!77 = !{i64 4845}
!78 = !{i64 4847}
!79 = !{i64 4813}
!80 = !{i64 4854}
!81 = !{i64 4864}
!82 = !{i64 4869}
!83 = !{i64 4873}
!84 = !{i64 4878}
!85 = !{i64 4880}
!86 = !{i64 4883}
!87 = !{i64 4894}
!88 = !{i64 4885}
!89 = !{i64 4899}
!90 = !{i64 4902}
!91 = !{i64 4909}
!92 = !{i64 4915}
!93 = !{i64 4933}
!94 = !{i64 4944}
!95 = !{i64 4947}
!96 = !{i64 4949}
!97 = !{i64 4951}
!98 = !{i64 4954}
!99 = !{i64 4957}
!100 = !{i64 4961}
!101 = !{i64 4965}
!102 = !{i64 4976}
!103 = !{i64 4984}
!104 = !{i64 4987}
!105 = !{i64 4992}
!106 = !{i64 4997}
!107 = !{i64 5002}
!108 = !{i64 5007}
!109 = !{i64 5011}
!110 = !{i64 5013}
!111 = !{i64 5017}
!112 = !{i64 5022}
!113 = !{i64 5026}
!114 = !{i64 5030}
!115 = !{i64 5040}
!116 = !{i64 5056}
!117 = !{i64 5065}
!118 = !{i64 5072}
!119 = !{i64 5076}
!120 = !{i64 5084}
!121 = !{i64 5086}
!122 = !{i64 5088}
!123 = !{i64 5091}
!124 = !{i64 5093}
!125 = !{i64 5096}
!126 = !{i64 5099}
!127 = !{i64 5105}
!128 = !{i64 5120}
!129 = !{i64 5134}
!130 = !{i64 5153}
!131 = !{i64 5172}
!132 = !{i64 5191}
!133 = !{i64 5210}
!134 = !{i64 5229}
!135 = !{i64 5248}
!136 = !{i64 5267}
!137 = !{i64 5286}
!138 = !{i64 5305}
!139 = !{i64 5324}
!140 = !{i64 5363}
!141 = !{i64 5379}
!142 = !{i64 5398}
!143 = !{i64 5417}
!144 = !{i64 5436}
!145 = !{i64 5446}
!146 = !{i64 5456}
!147 = !{i64 5460}
!148 = !{i64 5468}
!149 = !{i64 5512}
!150 = !{i64 5531}
!151 = !{i64 5543}
!152 = !{i64 5552}
!153 = !{i64 5555}
!154 = !{i64 5573}
!155 = !{i64 5584}
!156 = !{i64 5591}
!157 = !{i64 5605}
!158 = !{i64 5621}
!159 = !{i64 5637}
!160 = !{i64 5651}
!161 = !{i64 5655}
!162 = !{i64 5657}
!163 = !{i64 5669}
!164 = !{i64 5680}
!165 = !{i64 5682}
!166 = !{i64 5684}
!167 = !{i64 5690}
!168 = !{i64 5696}
!169 = !{i64 5700}
!170 = !{i64 5703}
!171 = !{i64 5705}
!172 = !{i64 5709}
!173 = !{i64 5712}
!174 = !{i64 5714}
!175 = !{i64 5733}
!176 = !{i64 5744}
!177 = !{i64 5773}
!178 = !{i64 5775}
!179 = !{i64 5777}
!180 = !{i64 5782}
!181 = !{i64 5787}
!182 = !{i64 5792}
!183 = !{i64 5796}
!184 = !{i64 5801}
!185 = !{i64 5806}
!186 = !{i64 5811}
!187 = !{i64 5853}
!188 = !{i64 5855}
!189 = !{i64 5821}
!190 = !{i64 5862}
!191 = !{i64 5872}
!192 = !{i64 5877}
!193 = !{i64 5881}
!194 = !{i64 5886}
!195 = !{i64 5888}
!196 = !{i64 5891}
!197 = !{i64 5902}
!198 = !{i64 5893}
!199 = !{i64 5907}
!200 = !{i64 5910}
!201 = !{i64 5917}
!202 = !{i64 5923}
!203 = !{i64 5965}
!204 = !{i64 5971}
!205 = !{i64 5992}
!206 = !{i64 5996}
!207 = !{i64 6005}
!208 = !{i64 6016}
!209 = !{i64 6021}
!210 = !{i64 6024}
!211 = !{i64 6034}
!212 = !{i64 6036}
!213 = !{i64 6043}
!214 = !{i64 6048}
!215 = !{i64 6069}
!216 = !{i64 6080}
!217 = !{i64 6083}
!218 = !{i64 6090}
!219 = !{i64 6092}
!220 = !{i64 6094}
!221 = !{i64 6096}
!222 = !{i64 6097}
!223 = !{i64 6100}
!224 = !{i64 6102}
!225 = !{i64 6117}
!226 = !{i64 6132}
!227 = !{i64 6136}
!228 = !{i64 6144}
!229 = !{i64 6160}
!230 = !{i64 6156}
!231 = !{i64 6164}
!232 = !{i64 6172}
!233 = !{i64 6178}
!234 = !{i64 6182}
!235 = !{i64 6192}
!236 = !{i64 6195}
!237 = !{i64 6213}
!238 = !{i64 6224}
!239 = !{i64 6225}
!240 = !{i64 6236}
!241 = !{i64 6257}
!242 = !{i64 6276}
!243 = !{i64 6295}
!244 = !{i64 6314}
!245 = !{i64 6333}
!246 = !{i64 6366}
!247 = !{i64 6378}
!248 = !{i64 6382}
!249 = !{i64 6401}
!250 = !{i64 6420}
!251 = !{i64 6439}
!252 = !{i64 6444}
!253 = !{i64 6448}
!254 = !{i64 6451}
!255 = !{i64 6459}
!256 = !{i64 6465}
!257 = !{i64 6477}
!258 = !{i64 6496}
!259 = !{i64 6506}
!260 = !{i64 6512}
!261 = !{i64 6515}
!262 = !{i64 6533}
!263 = !{i64 6544}
!264 = !{i64 6548}
!265 = !{i64 6565}
!266 = !{i64 6576}
!267 = !{i64 6580}
!268 = !{i64 6582}
!269 = !{i64 6585}
!270 = !{i64 6597}
!271 = !{i64 6608}
!272 = !{i64 6615}
!273 = !{i64 6624}
!274 = !{i64 6627}
!275 = !{i64 6630}
!276 = !{i64 6638}
!277 = !{i64 6640}
!278 = !{i64 6656}
!279 = !{i64 6675}
!280 = !{i64 6668}
!281 = !{i64 6672}
!282 = !{i64 6679}
!283 = !{i64 6687}
!284 = !{i64 6693}
!285 = !{i64 6697}
!286 = !{i64 6704}
!287 = !{i64 6707}
!288 = !{i64 6720}
!289 = !{i64 6723}
!290 = !{i64 6736}
!291 = !{i64 6752}
!292 = !{i64 6756}
!293 = !{i64 6773}
!294 = !{i64 6784}
!295 = !{i64 6800}
!296 = !{i64 6804}
!297 = !{i64 6816}
!298 = !{i64 6822}
!299 = !{i64 6832}
!300 = !{i64 6835}
!301 = !{i64 6838}
!302 = !{i64 6840}
!303 = !{i64 6843}
!304 = !{i64 6853}
!305 = !{i64 6864}
!306 = !{i64 6870}
!307 = !{i64 6879}
!308 = !{i64 6882}
!309 = !{i64 6901}
!310 = !{i64 6912}
!311 = !{i64 6915}
!312 = !{i64 6917}
!313 = !{i64 6933}
!314 = !{i64 6944}
!315 = !{i64 6945}
!316 = !{i64 6956}
!317 = !{i64 6977}
!318 = !{i64 6996}
!319 = !{i64 7015}
!320 = !{i64 7020}
!321 = !{i64 7024}
!322 = !{i64 7027}
!323 = !{i64 7030}
!324 = !{i64 7038}
!325 = !{i64 7056}
!326 = !{i64 7075}
!327 = !{i64 7095}
!328 = !{i64 7114}
!329 = !{i64 7133}
!330 = !{i64 7152}
!331 = !{i64 7162}
!332 = !{i64 7169}
!333 = !{i64 7174}
!334 = !{i64 7179}
!335 = !{i64 7187}
!336 = !{i64 7200}
