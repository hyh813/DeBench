source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4050 = global i64 0
@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2080 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_2090 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_20a0 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_20b0 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_20c0 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_20d0 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_20e0 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_20f0 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_2100 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_2110 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_2212 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_2223 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_2234 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_2245 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_2256 = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_2267 = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_2278 = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_2289 = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_229a = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_22ab = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_22bc = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_4048 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_23ca = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_2120 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_2148 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_216a = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_2191 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@global_var_2010 = external local_unnamed_addr constant i128
@global_var_2020 = external local_unnamed_addr constant i128
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_21b9 = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_21e5 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@global_var_2030 = external local_unnamed_addr constant i128
@global_var_2040 = external local_unnamed_addr constant i128
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_23eb = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_2050 = external local_unnamed_addr constant i128
@global_var_2060 = external local_unnamed_addr constant i128
@global_var_2070 = external local_unnamed_addr constant i128
@global_var_4040 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_240c = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_22cd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_22e9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_2305 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_2320 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_233d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_2359 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_2376 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_2392 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_23ae = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

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
  %3 = call i32 @__libc_start_main(i64 6517, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !10
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
dec_label_pc_115c:
  %0 = add i64 %arg2, %arg1, !insn.addr !25
  %1 = and i64 %0, 4294967295, !insn.addr !25
  ret i64 %1, !insn.addr !26
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_1160:
  ret i64 15, !insn.addr !27
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1166:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !28
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !28
  %2 = mul nsw i64 %1, %0, !insn.addr !28
  %3 = and i64 %2, 4294967295, !insn.addr !28
  ret i64 %3, !insn.addr !29
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_116c:
  ret i64 50, !insn.addr !30
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1172:
  %0 = add i64 %arg2, %arg1, !insn.addr !31
  %1 = add i64 %0, %arg3, !insn.addr !32
  %2 = and i64 %1, 4294967295, !insn.addr !32
  ret i64 %2, !insn.addr !33
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_1178:
  ret i64 6, !insn.addr !34
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_117e:
  ret i64 15, !insn.addr !35
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1184:
  %0 = add i64 %arg2, %arg1, !insn.addr !36
  %1 = add i64 %0, %arg3, !insn.addr !37
  %2 = add i64 %1, %arg4, !insn.addr !38
  %3 = add i64 %2, %arg5, !insn.addr !39
  %4 = and i64 %3, 4294967295, !insn.addr !39
  ret i64 %4, !insn.addr !40
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_118f:
  ret i64 15, !insn.addr !41
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1195:
  %0 = add i64 %arg2, %arg1, !insn.addr !42
  %1 = add i64 %0, %arg3, !insn.addr !43
  %2 = add i64 %1, %arg4, !insn.addr !44
  %3 = and i64 %2, 4294967295, !insn.addr !44
  ret i64 %3, !insn.addr !45
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_119d:
  ret i64 100, !insn.addr !46
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_11a3:
  %0 = add i64 %arg2, %arg1, !insn.addr !47
  %1 = add i64 %0, %arg3, !insn.addr !48
  %2 = add i64 %1, %arg4, !insn.addr !49
  %3 = add i64 %2, %arg5, !insn.addr !50
  %4 = add i64 %3, %arg6, !insn.addr !51
  %5 = and i64 %4, 4294967295, !insn.addr !51
  ret i64 %5, !insn.addr !52
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_11b1:
  ret i64 21, !insn.addr !53
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_11b7:
  %0 = add i64 %arg2, %arg1, !insn.addr !54
  %1 = add i64 %0, %arg3, !insn.addr !55
  %2 = add i64 %1, %arg4, !insn.addr !56
  %3 = add i64 %2, %arg5, !insn.addr !57
  %4 = and i64 %3, 4294967295, !insn.addr !57
  ret i64 %4, !insn.addr !58
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_11c2:
  ret i64 15, !insn.addr !59
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_11c8:
  %0 = add i64 %arg2, %arg1, !insn.addr !60
  %1 = add i64 %0, %arg3, !insn.addr !61
  %2 = add i64 %1, %arg4, !insn.addr !62
  %3 = and i64 %2, 4294967295, !insn.addr !62
  ret i64 %3, !insn.addr !63
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_11d0:
  ret i64 10, !insn.addr !64
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_11d6:
  ret i64 33, !insn.addr !65
}

define i64 @varargs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_11dc:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !66
  %rsi.0.reg2mem = alloca i64, !insn.addr !66
  %rdx.1.reg2mem = alloca i64, !insn.addr !66
  %stack_var_-208.1.reg2mem = alloca i32*, !insn.addr !66
  %rdi.0.reg2mem = alloca i64, !insn.addr !66
  %rdx.0.reg2mem = alloca i64, !insn.addr !66
  %rax.0.reg2mem = alloca i32, !insn.addr !66
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !66
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
  br i1 %12, label %dec_label_pc_1224, label %dec_label_pc_11fd, !insn.addr !68

dec_label_pc_11fd:                                ; preds = %dec_label_pc_11dc
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !69
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !70
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !71
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !72
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !73
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !74
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !75
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !76
  br label %dec_label_pc_1224, !insn.addr !76

dec_label_pc_1224:                                ; preds = %dec_label_pc_11fd, %dec_label_pc_11dc
  %21 = trunc i64 %arg1 to i32, !insn.addr !77
  %22 = icmp slt i32 %21, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !78
  br i1 %22, label %dec_label_pc_127c, label %dec_label_pc_1246, !insn.addr !78

dec_label_pc_1246:                                ; preds = %dec_label_pc_1224
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !79
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32* %24, i32** %stack_var_-208.0.reg2mem, !insn.addr !80
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !80
  store i64 8, i64* %rdx.0.reg2mem, !insn.addr !80
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !80
  br label %dec_label_pc_1251, !insn.addr !80

dec_label_pc_1251:                                ; preds = %dec_label_pc_1272, %dec_label_pc_1246
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %25 = trunc i64 %rdx.0.reload to i32, !insn.addr !81
  %26 = icmp ult i32 %25, 41
  br i1 %26, label %dec_label_pc_1256, label %dec_label_pc_1264, !insn.addr !82

dec_label_pc_1256:                                ; preds = %dec_label_pc_1251
  %27 = and i64 %rdx.0.reload, 4294967295, !insn.addr !83
  %28 = add i64 %27, %23, !insn.addr !84
  %29 = add i64 %rdx.0.reload, 8, !insn.addr !85
  %30 = and i64 %29, 4294967295, !insn.addr !85
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.1.reg2mem, !insn.addr !86
  store i64 %30, i64* %rdx.1.reg2mem, !insn.addr !86
  store i64 %28, i64* %rsi.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_1272, !insn.addr !86

dec_label_pc_1264:                                ; preds = %dec_label_pc_1251
  %31 = ptrtoint i32* %stack_var_-208.0.reload to i64, !insn.addr !87
  %32 = add i64 %31, 8, !insn.addr !88
  %33 = inttoptr i64 %32 to i32*, !insn.addr !89
  store i32* %33, i32** %stack_var_-208.1.reg2mem, !insn.addr !89
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !89
  store i64 %31, i64* %rsi.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_1272, !insn.addr !89

dec_label_pc_1272:                                ; preds = %dec_label_pc_1264, %dec_label_pc_1256
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %stack_var_-208.1.reload = load i32*, i32** %stack_var_-208.1.reg2mem
  %34 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !90
  %35 = load i32, i32* %34, align 4, !insn.addr !90
  %36 = add i32 %35, %rax.0.reload, !insn.addr !90
  %37 = trunc i64 %rdi.0.reload to i32, !insn.addr !91
  %38 = add i32 %37, -1, !insn.addr !91
  %39 = icmp eq i32 %38, 0, !insn.addr !91
  %40 = zext i32 %38 to i64, !insn.addr !91
  %41 = icmp eq i1 %39, false, !insn.addr !92
  store i32* %stack_var_-208.1.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !92
  store i32 %36, i32* %rax.0.reg2mem, !insn.addr !92
  store i64 %rdx.1.reload, i64* %rdx.0.reg2mem, !insn.addr !92
  store i64 %40, i64* %rdi.0.reg2mem, !insn.addr !92
  br i1 %41, label %dec_label_pc_1251, label %dec_label_pc_127c.loopexit, !insn.addr !92

dec_label_pc_127c.loopexit:                       ; preds = %dec_label_pc_1272
  %42 = zext i32 %36 to i64, !insn.addr !90
  store i64 %42, i64* %rax.1.reg2mem
  br label %dec_label_pc_127c

dec_label_pc_127c:                                ; preds = %dec_label_pc_127c.loopexit, %dec_label_pc_1224
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !93

; uselistorder directives
  uselistorder i32 %38, { 1, 0 }
  uselistorder i32 %36, { 1, 0 }
  uselistorder i32* %stack_var_-208.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 0, 2, 1, 3 }
  uselistorder i32** %stack_var_-208.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_1281:
  ret i64 42, !insn.addr !94
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_1287:
  %0 = add i64 %arg2, %arg1, !insn.addr !95
  %1 = trunc i64 %0 to i32, !insn.addr !95
  %2 = trunc i64 %arg3 to i32, !insn.addr !96
  %3 = add i32 %1, %2, !insn.addr !96
  %4 = trunc i64 %arg4 to i32, !insn.addr !97
  %5 = add i32 %3, %4, !insn.addr !97
  %6 = trunc i64 %arg5 to i32, !insn.addr !98
  %7 = add i32 %5, %6, !insn.addr !98
  %8 = trunc i64 %arg6 to i32, !insn.addr !99
  %9 = add i32 %7, %8, !insn.addr !99
  %10 = add i32 %9, %arg7, !insn.addr !100
  %11 = add i32 %10, %arg8, !insn.addr !101
  %12 = zext i32 %11 to i64, !insn.addr !101
  ret i64 %12, !insn.addr !102
}

define i64 @func_mixed_args(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_129d:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i32, !insn.addr !103
  %xmm0.0.reg2mem = alloca i128, !insn.addr !103
  %1 = load i128, i128* %0
  %2 = icmp eq i64 %arg2, 0, !insn.addr !104
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !105
  br i1 %2, label %dec_label_pc_12c0, label %dec_label_pc_12aa, !insn.addr !105

dec_label_pc_12aa:                                ; preds = %dec_label_pc_129d
  %3 = call i64 @__asm_movsd(i128 %1), !insn.addr !106
  %4 = inttoptr i64 %arg2 to i8*, !insn.addr !107
  %5 = call i32 @strlen(i8* %4), !insn.addr !107
  %6 = call i128 @__asm_movsd.1(i64 %3), !insn.addr !108
  store i128 %6, i128* %xmm0.0.reg2mem, !insn.addr !109
  store i32 %5, i32* %rax.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_12c0, !insn.addr !109

dec_label_pc_12c0:                                ; preds = %dec_label_pc_129d, %dec_label_pc_12aa
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %7 = trunc i64 %arg1 to i32, !insn.addr !110
  %8 = add i32 %rax.0.reload, %7, !insn.addr !110
  %9 = call i128 @__asm_cvtsi2sd(i32 %8), !insn.addr !111
  %10 = call i128 @__asm_cvtsi2sd.2(i64 %arg3), !insn.addr !112
  %11 = call i128 @__asm_addsd(i128 %9, i128 %xmm0.0.reload), !insn.addr !113
  %12 = call i128 @__asm_addsd(i128 %10, i128 %11), !insn.addr !114
  %13 = call i32 @__asm_cvttsd2si(i128 %12), !insn.addr !115
  %14 = sext i32 %13 to i64, !insn.addr !115
  ret i64 %14, !insn.addr !116

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_12c0, { 1, 0 }
}

define i64 @func_struct_byval(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_12de:
  %0 = alloca i128
  %rcx.0.reg2mem = alloca i64, !insn.addr !117
  %xmm0.0.reg2mem = alloca i128, !insn.addr !117
  %1 = load i128, i128* %0
  %stack_var_8 = alloca i64, align 8
  %2 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !117
  %3 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !118
  store i128 %2, i128* %xmm0.0.reg2mem, !insn.addr !119
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !119
  br label %dec_label_pc_12e9, !insn.addr !119

dec_label_pc_12e9:                                ; preds = %dec_label_pc_12e9, %dec_label_pc_12de
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %4 = mul i64 %rcx.0.reload, 8, !insn.addr !120
  %5 = add i64 %4, %3, !insn.addr !120
  %6 = inttoptr i64 %5 to i128*, !insn.addr !120
  %7 = load i128, i128* %6, align 8, !insn.addr !120
  %8 = call i128 @__asm_movdqu(i128 %7), !insn.addr !120
  %9 = call i128 @__asm_paddq(i128 %xmm0.0.reload, i128 %8), !insn.addr !121
  %10 = add nuw nsw i64 %rcx.0.reload, 2, !insn.addr !122
  %11 = icmp eq i64 %rcx.0.reload, 14, !insn.addr !123
  %12 = icmp eq i1 %11, false, !insn.addr !124
  store i128 %9, i128* %xmm0.0.reg2mem, !insn.addr !124
  store i64 %10, i64* %rcx.0.reg2mem, !insn.addr !124
  br i1 %12, label %dec_label_pc_12e9, label %dec_label_pc_12fc, !insn.addr !124

dec_label_pc_12fc:                                ; preds = %dec_label_pc_12e9
  %13 = call i128 @__asm_pshufd(i128 %9, i8 -18), !insn.addr !125
  %14 = call i128 @__asm_paddq(i128 %13, i128 %9), !insn.addr !126
  %15 = call i64 @__asm_movq(i128 %14), !insn.addr !127
  ret i64 %15, !insn.addr !128

; uselistorder directives
  uselistorder i128 %9, { 2, 1, 0 }
  uselistorder i128 %1, { 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_130b:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !129
  br i1 %0, label %dec_label_pc_1317, label %dec_label_pc_1310, !insn.addr !130

dec_label_pc_1310:                                ; preds = %dec_label_pc_130b
  %1 = trunc i64 %arg1 to i32
  %2 = add i64 %arg1, 4, !insn.addr !131
  %3 = inttoptr i64 %2 to i32*, !insn.addr !131
  %4 = load i32, i32* %3, align 4, !insn.addr !131
  %5 = mul i32 %4, %1, !insn.addr !132
  %6 = zext i32 %5 to i64, !insn.addr !132
  ret i64 %6, !insn.addr !133

dec_label_pc_1317:                                ; preds = %dec_label_pc_130b
  ret i64 4294967295, !insn.addr !134

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_131d:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !135
  %xmm0.1.reg2mem = alloca i128, !insn.addr !135
  %rbx.0.reg2mem = alloca i64, !insn.addr !135
  %xmm0.0.reg2mem = alloca i128, !insn.addr !135
  %1 = load i128, i128* %0
  %stack_var_-136 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-136 to i64, !insn.addr !136
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_23ca to i8*)), !insn.addr !137
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2080, i64 0, i64 0), i64 15), !insn.addr !138
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2090, i64 0, i64 0), i64 50), !insn.addr !139
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20a0, i64 0, i64 0), i64 6), !insn.addr !140
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20b0, i64 0, i64 0), i64 15), !insn.addr !141
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20c0, i64 0, i64 0), i64 15), !insn.addr !142
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20d0, i64 0, i64 0), i64 100), !insn.addr !143
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20e0, i64 0, i64 0), i64 21), !insn.addr !144
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_20f0, i64 0, i64 0), i64 15), !insn.addr !145
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2100, i64 0, i64 0), i64 10), !insn.addr !146
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_2110, i64 0, i64 0), i64 33), !insn.addr !147
  %14 = call i64 @varargs_func(i64 5, i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !148
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2120 to i8*)), !insn.addr !149
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2148 to i8*)), !insn.addr !150
  %17 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_216a to i8*)), !insn.addr !151
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2191 to i8*)), !insn.addr !152
  %19 = load i128, i128* @global_var_2010, align 8, !insn.addr !153
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !153
  %21 = call i128 @__asm_pcmpeqd(i128 %1, i128 %1), !insn.addr !154
  %22 = load i128, i128* @global_var_2020, align 8, !insn.addr !155
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !155
  store i128 %20, i128* %xmm0.0.reg2mem, !insn.addr !155
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !155
  br label %dec_label_pc_1475, !insn.addr !155

dec_label_pc_1475:                                ; preds = %dec_label_pc_1475, %dec_label_pc_131d
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %24 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !156
  %25 = call i128 @__asm_psubq(i128 %24, i128 %21), !insn.addr !157
  %26 = call i64 @__asm_movdqu.3(i128 %25), !insn.addr !158
  %27 = mul i64 %rbx.0.reload, 8, !insn.addr !158
  %28 = add i64 %27, %2, !insn.addr !158
  %29 = sext i64 %26 to i128, !insn.addr !158
  %30 = inttoptr i64 %28 to i128*, !insn.addr !158
  store i128 %29, i128* %30, align 8, !insn.addr !158
  %31 = add nuw nsw i64 %rbx.0.reload, 2, !insn.addr !159
  %32 = call i128 @__asm_paddq(i128 %xmm0.0.reload, i128 %23), !insn.addr !160
  %33 = icmp eq i64 %rbx.0.reload, 14, !insn.addr !161
  %34 = icmp eq i1 %33, false, !insn.addr !162
  store i128 %32, i128* %xmm0.0.reg2mem, !insn.addr !162
  store i64 %31, i64* %rbx.0.reg2mem, !insn.addr !162
  br i1 %34, label %dec_label_pc_1475, label %dec_label_pc_1490, !insn.addr !162

dec_label_pc_1490:                                ; preds = %dec_label_pc_1475
  %35 = call i128 @__asm_pxor(i128 %32, i128 %32), !insn.addr !163
  store i128 %35, i128* %xmm0.1.reg2mem, !insn.addr !164
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_1496, !insn.addr !164

dec_label_pc_1496:                                ; preds = %dec_label_pc_1496, %dec_label_pc_1490
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %36 = mul i64 %rax.0.reload, 8, !insn.addr !165
  %37 = add i64 %36, %2, !insn.addr !165
  %38 = inttoptr i64 %37 to i128*, !insn.addr !165
  %39 = load i128, i128* %38, align 8, !insn.addr !165
  %40 = call i128 @__asm_movdqu(i128 %39), !insn.addr !165
  %41 = call i128 @__asm_paddq(i128 %xmm0.1.reload, i128 %40), !insn.addr !166
  %42 = add nuw nsw i64 %rax.0.reload, 2, !insn.addr !167
  %43 = icmp eq i64 %rax.0.reload, 14, !insn.addr !168
  %44 = icmp eq i1 %43, false, !insn.addr !169
  store i128 %41, i128* %xmm0.1.reg2mem, !insn.addr !169
  store i64 %42, i64* %rax.0.reg2mem, !insn.addr !169
  br i1 %44, label %dec_label_pc_1496, label %dec_label_pc_14a9, !insn.addr !169

dec_label_pc_14a9:                                ; preds = %dec_label_pc_1496
  %45 = call i128 @__asm_pshufd(i128 %41, i8 -18), !insn.addr !170
  %46 = call i128 @__asm_paddq(i128 %45, i128 %41), !insn.addr !171
  %47 = call i64 @__asm_movq(i128 %46), !insn.addr !172
  %48 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21b9 to i8*)), !insn.addr !173
  %49 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e5 to i8*)), !insn.addr !174
  %50 = sext i32 %49 to i64, !insn.addr !174
  ret i64 %50, !insn.addr !174

; uselistorder directives
  uselistorder i128 %41, { 2, 1, 0 }
  uselistorder i128 %32, { 2, 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = mul i64 %arg1, 2, !insn.addr !175
  %1 = and i64 %0, 4294967294, !insn.addr !175
  ret i64 %1, !insn.addr !176
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_14e4:
  ret i64 15, !insn.addr !177
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_14ea:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !178
  %4 = inttoptr i64 %arg1 to i32*, !insn.addr !178
  store i32 %3, i32* %4, align 4, !insn.addr !178
  ret i64 1, !insn.addr !179
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_14f2:
  ret i64 11, !insn.addr !180
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_14f8:
  ret i64 8, !insn.addr !181
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_14fe:
  ret i64 8, !insn.addr !182
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_1504:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !183
  %3 = inttoptr i64 %2 to i8*, !insn.addr !183
  %4 = load i8, i8* %3, align 1, !insn.addr !183
  %5 = sext i8 %4 to i64, !insn.addr !184
  %sext = mul i64 %1, 72057594037927936
  %6 = ashr exact i64 %sext, 56, !insn.addr !184
  %7 = add nsw i64 %6, %5, !insn.addr !184
  %8 = and i64 %7, 4294967295, !insn.addr !184
  ret i64 %8, !insn.addr !185
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_150e:
  ret i64 173, !insn.addr !186
}

define i64 @param_ptr_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1514:
  %merge.reg2mem = alloca i64, !insn.addr !187
  %rdx.0.reg2mem = alloca i64, !insn.addr !187
  %rax.0.reg2mem = alloca i64, !insn.addr !187
  %0 = trunc i64 %arg2 to i32, !insn.addr !187
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !188
  br i1 %1, label %dec_label_pc_152f, label %dec_label_pc_1518, !insn.addr !188

dec_label_pc_1518:                                ; preds = %dec_label_pc_1514
  %2 = and i64 %arg2, 4294967295, !insn.addr !189
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !190
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !190
  br label %dec_label_pc_151e, !insn.addr !190

dec_label_pc_151e:                                ; preds = %dec_label_pc_151e, %dec_label_pc_1518
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 8, !insn.addr !191
  %4 = add i64 %3, %arg1, !insn.addr !191
  %5 = inttoptr i64 %4 to i64*, !insn.addr !191
  %6 = load i64, i64* %5, align 8, !insn.addr !191
  %7 = inttoptr i64 %6 to i8*, !insn.addr !192
  %8 = load i8, i8* %7, align 1, !insn.addr !192
  %9 = sext i8 %8 to i64, !insn.addr !193
  %10 = add nsw i64 %rax.0.reload, %9, !insn.addr !193
  %11 = and i64 %10, 4294967295, !insn.addr !193
  %12 = add i64 %rdx.0.reload, 1, !insn.addr !194
  %13 = icmp eq i64 %2, %12, !insn.addr !195
  %14 = icmp eq i1 %13, false, !insn.addr !196
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !196
  store i64 %12, i64* %rdx.0.reg2mem, !insn.addr !196
  store i64 %11, i64* %merge.reg2mem, !insn.addr !196
  br i1 %14, label %dec_label_pc_151e, label %dec_label_pc_152f, !insn.addr !196

dec_label_pc_152f:                                ; preds = %dec_label_pc_151e, %dec_label_pc_1514
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !197

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1533:
  ret i64 300, !insn.addr !198
}

define i64 @param_varargs(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1539:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !199
  %rsi.0.reg2mem = alloca i64, !insn.addr !199
  %rdx.1.reg2mem = alloca i64, !insn.addr !199
  %stack_var_-208.1.reg2mem = alloca i32*, !insn.addr !199
  %rdi.0.reg2mem = alloca i64, !insn.addr !199
  %rdx.0.reg2mem = alloca i64, !insn.addr !199
  %rax.0.reg2mem = alloca i32, !insn.addr !199
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !199
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
  %11 = trunc i64 %2 to i8, !insn.addr !200
  %12 = icmp eq i8 %11, 0, !insn.addr !200
  br i1 %12, label %dec_label_pc_1581, label %dec_label_pc_155a, !insn.addr !201

dec_label_pc_155a:                                ; preds = %dec_label_pc_1539
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !202
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !203
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !204
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !205
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !206
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !207
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !208
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !209
  br label %dec_label_pc_1581, !insn.addr !209

dec_label_pc_1581:                                ; preds = %dec_label_pc_155a, %dec_label_pc_1539
  %21 = trunc i64 %arg1 to i32, !insn.addr !210
  %22 = icmp slt i32 %21, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !211
  br i1 %22, label %dec_label_pc_15d9, label %dec_label_pc_15a3, !insn.addr !211

dec_label_pc_15a3:                                ; preds = %dec_label_pc_1581
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !212
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32* %24, i32** %stack_var_-208.0.reg2mem, !insn.addr !213
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !213
  store i64 8, i64* %rdx.0.reg2mem, !insn.addr !213
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_15ae, !insn.addr !213

dec_label_pc_15ae:                                ; preds = %dec_label_pc_15cf, %dec_label_pc_15a3
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %25 = trunc i64 %rdx.0.reload to i32, !insn.addr !214
  %26 = icmp ult i32 %25, 41
  br i1 %26, label %dec_label_pc_15b3, label %dec_label_pc_15c1, !insn.addr !215

dec_label_pc_15b3:                                ; preds = %dec_label_pc_15ae
  %27 = and i64 %rdx.0.reload, 4294967295, !insn.addr !216
  %28 = add i64 %27, %23, !insn.addr !217
  %29 = add i64 %rdx.0.reload, 8, !insn.addr !218
  %30 = and i64 %29, 4294967295, !insn.addr !218
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.1.reg2mem, !insn.addr !219
  store i64 %30, i64* %rdx.1.reg2mem, !insn.addr !219
  store i64 %28, i64* %rsi.0.reg2mem, !insn.addr !219
  br label %dec_label_pc_15cf, !insn.addr !219

dec_label_pc_15c1:                                ; preds = %dec_label_pc_15ae
  %31 = ptrtoint i32* %stack_var_-208.0.reload to i64, !insn.addr !220
  %32 = add i64 %31, 8, !insn.addr !221
  %33 = inttoptr i64 %32 to i32*, !insn.addr !222
  store i32* %33, i32** %stack_var_-208.1.reg2mem, !insn.addr !222
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !222
  store i64 %31, i64* %rsi.0.reg2mem, !insn.addr !222
  br label %dec_label_pc_15cf, !insn.addr !222

dec_label_pc_15cf:                                ; preds = %dec_label_pc_15c1, %dec_label_pc_15b3
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %stack_var_-208.1.reload = load i32*, i32** %stack_var_-208.1.reg2mem
  %34 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !223
  %35 = load i32, i32* %34, align 4, !insn.addr !223
  %36 = add i32 %35, %rax.0.reload, !insn.addr !223
  %37 = trunc i64 %rdi.0.reload to i32, !insn.addr !224
  %38 = add i32 %37, -1, !insn.addr !224
  %39 = icmp eq i32 %38, 0, !insn.addr !224
  %40 = zext i32 %38 to i64, !insn.addr !224
  %41 = icmp eq i1 %39, false, !insn.addr !225
  store i32* %stack_var_-208.1.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !225
  store i32 %36, i32* %rax.0.reg2mem, !insn.addr !225
  store i64 %rdx.1.reload, i64* %rdx.0.reg2mem, !insn.addr !225
  store i64 %40, i64* %rdi.0.reg2mem, !insn.addr !225
  br i1 %41, label %dec_label_pc_15ae, label %dec_label_pc_15d9.loopexit, !insn.addr !225

dec_label_pc_15d9.loopexit:                       ; preds = %dec_label_pc_15cf
  %42 = zext i32 %36 to i64, !insn.addr !223
  store i64 %42, i64* %rax.1.reg2mem
  br label %dec_label_pc_15d9

dec_label_pc_15d9:                                ; preds = %dec_label_pc_15d9.loopexit, %dec_label_pc_1581
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !226

; uselistorder directives
  uselistorder i32 %38, { 1, 0 }
  uselistorder i32 %36, { 1, 0 }
  uselistorder i32* %stack_var_-208.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 0, 2, 1, 3 }
  uselistorder i32** %stack_var_-208.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @call_varargs_param() local_unnamed_addr {
dec_label_pc_15de:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %1), !insn.addr !227
  ret i64 %2, !insn.addr !227
}

define i64 @param_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_15ff:
  %0 = add i64 %arg1, 10, !insn.addr !228
  %1 = and i64 %0, 4294967295, !insn.addr !228
  ret i64 %1, !insn.addr !229
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_160c:
  ret i64 20, !insn.addr !230
}

define i64 @param_double_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1612:
  %rax.0.reg2mem = alloca i64, !insn.addr !231
  %0 = icmp eq i64 %arg1, 0, !insn.addr !232
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !233
  br i1 %0, label %dec_label_pc_1632, label %dec_label_pc_1624, !insn.addr !233

dec_label_pc_1624:                                ; preds = %dec_label_pc_1612
  %1 = trunc i64 %arg2 to i32, !insn.addr !234
  %2 = inttoptr i64 %arg1 to i32*, !insn.addr !234
  store i32 %1, i32* %2, align 4, !insn.addr !234
  %3 = inttoptr i64 %arg1 to i64*, !insn.addr !235
  store i64 0, i64* %3, align 8, !insn.addr !235
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !236
  br label %dec_label_pc_1632, !insn.addr !236

dec_label_pc_1632:                                ; preds = %dec_label_pc_1624, %dec_label_pc_1612
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !237

; uselistorder directives
  uselistorder i64 1, { 0, 3, 4, 1, 2 }
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1633:
  ret i64 21, !insn.addr !238
}

define i64 @param_complex_cast(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1639:
  %rax.0.reg2mem = alloca i64, !insn.addr !239
  %0 = trunc i64 %arg2 to i32, !insn.addr !239
  %1 = icmp eq i32 %0, 1, !insn.addr !239
  br i1 %1, label %dec_label_pc_164a, label %dec_label_pc_163e, !insn.addr !240

dec_label_pc_163e:                                ; preds = %dec_label_pc_1639
  %2 = icmp eq i32 %0, 0, !insn.addr !241
  %3 = icmp eq i1 %2, false, !insn.addr !242
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !242
  br i1 %3, label %dec_label_pc_164f, label %dec_label_pc_1647, !insn.addr !242

dec_label_pc_1647:                                ; preds = %dec_label_pc_163e
  %4 = and i64 %arg1, 4294967295, !insn.addr !243
  ret i64 %4, !insn.addr !244

dec_label_pc_164a:                                ; preds = %dec_label_pc_1639
  %5 = trunc i64 %arg1 to i32
  %6 = add i64 %arg1, 4, !insn.addr !245
  %7 = inttoptr i64 %6 to i32*, !insn.addr !245
  %8 = load i32, i32* %7, align 4, !insn.addr !245
  %9 = add i32 %8, %5, !insn.addr !246
  %10 = zext i32 %9 to i64, !insn.addr !246
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !246
  br label %dec_label_pc_164f, !insn.addr !246

dec_label_pc_164f:                                ; preds = %dec_label_pc_164a, %dec_label_pc_163e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !247

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1650:
  ret i64 305419896, !insn.addr !248
}

define i64 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_1656:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !249
  %3 = zext i32 %2 to i64, !insn.addr !249
  ret i64 %3, !insn.addr !250
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_165f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i128, i128* @global_var_2030, align 8, !insn.addr !251
  %3 = call i128 @__asm_movaps.4(i128 %2), !insn.addr !251
  %4 = call i64 @__asm_movaps(i128 %3), !insn.addr !252
  %5 = load i128, i128* @global_var_2040, align 8, !insn.addr !253
  %6 = call i128 @__asm_movaps.4(i128 %5), !insn.addr !253
  %7 = call i64 @__asm_movaps(i128 %6), !insn.addr !254
  %8 = trunc i64 %4 to i32, !insn.addr !255
  %9 = add i32 %1, %8, !insn.addr !255
  %10 = zext i32 %9 to i64, !insn.addr !255
  ret i64 %10, !insn.addr !256
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1680:
  %0 = add i64 %arg2, %arg1, !insn.addr !257
  %1 = and i64 %0, 4294967295, !insn.addr !257
  ret i64 %1, !insn.addr !258
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_1684:
  ret i64 3, !insn.addr !259
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_168a:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = call i32 @puts(i8* bitcast (i8** @global_var_23eb to i8*)), !insn.addr !260
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2212, i64 0, i64 0), i64 15), !insn.addr !261
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2223, i64 0, i64 0), i64 11), !insn.addr !262
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2234, i64 0, i64 0), i64 8), !insn.addr !263
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2245, i64 0, i64 0), i64 173), !insn.addr !264
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2256, i64 0, i64 0), i64 300), !insn.addr !265
  %10 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %2), !insn.addr !266
  %11 = and i64 %10, 4294967295, !insn.addr !267
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2267, i64 0, i64 0), i64 %11), !insn.addr !268
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2278, i64 0, i64 0), i64 20), !insn.addr !269
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_2289, i64 0, i64 0), i64 21), !insn.addr !270
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_229a, i64 0, i64 0), i64 305419896), !insn.addr !271
  %16 = load i128, i128* @global_var_2030, align 8, !insn.addr !272
  %17 = call i128 @__asm_movaps.4(i128 %16), !insn.addr !272
  %18 = call i64 @__asm_movaps(i128 %17), !insn.addr !273
  %19 = trunc i64 %18 to i32, !insn.addr !273
  %20 = load i128, i128* @global_var_2040, align 8, !insn.addr !274
  %21 = call i128 @__asm_movaps.4(i128 %20), !insn.addr !274
  %22 = call i64 @__asm_movaps(i128 %21), !insn.addr !275
  %23 = add i32 %3, %19, !insn.addr !276
  %24 = zext i32 %23 to i64, !insn.addr !276
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_22ab, i64 0, i64 0), i64 %24), !insn.addr !277
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_22bc, i64 0, i64 0), i64 3), !insn.addr !278
  %27 = sext i32 %26 to i64, !insn.addr !278
  ret i64 %27, !insn.addr !278

; uselistorder directives
  uselistorder i128* @global_var_2040, { 1, 0 }
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 (i64, i64, i64, i64, i64, i64)* @param_varargs, { 1, 0 }
  uselistorder i64 300, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 10, 11, 8, 0, 2, 6, 7, 3, 4, 5, 12, 9, 1 }
  uselistorder i64 11, { 1, 0 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_17a6:
  %0 = mul i64 %arg1, 2, !insn.addr !279
  %1 = and i64 %0, 4294967294, !insn.addr !279
  ret i64 %1, !insn.addr !280
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_17aa:
  ret i64 42, !insn.addr !281
}

define i64 @ret_pointer(i64 %arg1) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = add i64 %arg1, 4, !insn.addr !282
  ret i64 %0, !insn.addr !283
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_17b5:
  ret i64 20, !insn.addr !284

; uselistorder directives
  uselistorder i64 20, { 0, 2, 3, 1, 4 }
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17bb:
  %0 = mul i64 %arg2, 4294967296, !insn.addr !285
  %1 = and i64 %arg1, 4294967295, !insn.addr !286
  %2 = or i64 %0, %1, !insn.addr !287
  ret i64 %2, !insn.addr !288
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_17c5:
  ret i64 7, !insn.addr !289
}

define i64 @ret_large_struct(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_17cb:
  %rcx.0.reg2mem = alloca i64, !insn.addr !290
  %xmm1.0.reg2mem = alloca i128, !insn.addr !290
  %0 = trunc i64 %arg2 to i32, !insn.addr !291
  %1 = call i128 @__asm_movd(i32 %0), !insn.addr !291
  %2 = call i128 @__asm_pshufd(i128 %1, i8 0), !insn.addr !292
  %3 = load i128, i128* @global_var_2030, align 8, !insn.addr !293
  %4 = call i128 @__asm_movdqa(i128 %3), !insn.addr !293
  %5 = load i128, i128* @global_var_2050, align 8, !insn.addr !294
  %6 = call i128 @__asm_movdqa(i128 %5), !insn.addr !294
  store i128 %4, i128* %xmm1.0.reg2mem, !insn.addr !294
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_17e9, !insn.addr !294

dec_label_pc_17e9:                                ; preds = %dec_label_pc_17e9, %dec_label_pc_17cb
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %7 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !295
  %8 = call i128 @__asm_paddd(i128 %7, i128 %2), !insn.addr !296
  %9 = call i64 @__asm_movdqu.3(i128 %8), !insn.addr !297
  %10 = mul i64 %rcx.0.reload, 4, !insn.addr !297
  %11 = add i64 %10, %arg1, !insn.addr !297
  %12 = sext i64 %9 to i128, !insn.addr !297
  %13 = inttoptr i64 %11 to i128*, !insn.addr !297
  store i128 %12, i128* %13, align 8, !insn.addr !297
  %14 = add nuw nsw i64 %rcx.0.reload, 4, !insn.addr !298
  %15 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %6), !insn.addr !299
  %16 = icmp eq i64 %rcx.0.reload, 12, !insn.addr !300
  %17 = icmp eq i1 %16, false, !insn.addr !301
  store i128 %15, i128* %xmm1.0.reg2mem, !insn.addr !301
  store i64 %14, i64* %rcx.0.reg2mem, !insn.addr !301
  br i1 %17, label %dec_label_pc_17e9, label %dec_label_pc_1804, !insn.addr !301

dec_label_pc_1804:                                ; preds = %dec_label_pc_17e9
  ret i64 %arg1, !insn.addr !302

; uselistorder directives
  uselistorder i128 %xmm1.0.reload, { 1, 0 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 4, { 4, 0, 5, 1, 6, 2, 3, 7 }
  uselistorder i128* @global_var_2030, { 2, 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1805:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i128, i128* @global_var_2060, align 8, !insn.addr !303
  %3 = call i128 @__asm_movaps.4(i128 %2), !insn.addr !303
  %4 = call i64 @__asm_movaps(i128 %3), !insn.addr !304
  %5 = load i128, i128* @global_var_2070, align 8, !insn.addr !305
  %6 = call i128 @__asm_movaps.4(i128 %5), !insn.addr !305
  %7 = call i64 @__asm_movaps(i128 %6), !insn.addr !306
  %8 = trunc i64 %4 to i32, !insn.addr !307
  %9 = add i32 %1, %8, !insn.addr !307
  %10 = zext i32 %9 to i64, !insn.addr !307
  ret i64 %10, !insn.addr !308
}

define i64 @func_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_1826:
  %0 = add i64 %arg1, 10, !insn.addr !309
  %1 = and i64 %0, 4294967295, !insn.addr !309
  ret i64 %1, !insn.addr !310
}

define i64 @func_b(i64 %arg1) local_unnamed_addr {
dec_label_pc_182a:
  %0 = mul i64 %arg1, 2, !insn.addr !311
  %1 = and i64 %0, 4294967294, !insn.addr !311
  ret i64 %1, !insn.addr !312
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_182e:
  %0 = trunc i64 %arg1 to i32, !insn.addr !313
  %1 = icmp eq i32 %0, 0, !insn.addr !313
  %2 = select i1 %1, i64 6182, i64 6186, !insn.addr !314
  ret i64 %2, !insn.addr !315
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1843:
  ret i64 10, !insn.addr !316
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1849:
  %0 = trunc i64 %arg1 to i32, !insn.addr !317
  %1 = icmp eq i32 %0, 0, !insn.addr !317
  %2 = select i1 %1, i64 ptrtoint (i32* @global_var_4040 to i64), i64 ptrtoint (i64* @global_var_4048 to i64), !insn.addr !318
  ret i64 %2, !insn.addr !319
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_185e:
  %0 = load i32, i32* @global_var_4040, align 4, !insn.addr !320
  %1 = zext i32 %0 to i64, !insn.addr !320
  ret i64 %1, !insn.addr !321

; uselistorder directives
  uselistorder i32* @global_var_4040, { 1, 0 }
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1865:
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
  %12 = icmp eq i1 %11, %9, !insn.addr !325
  %13 = icmp eq i1 %10, false, !insn.addr !325
  %14 = icmp eq i1 %12, %13, !insn.addr !325
  %15 = select i1 %14, i64 %0, i64 %1, !insn.addr !325
  %16 = and i64 %15, 4294967295, !insn.addr !325
  ret i64 %16, !insn.addr !326

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32 0, { 3, 4, 5, 6, 7, 8, 9, 0, 1, 10, 2 }
  uselistorder i64 2, { 0, 1, 2, 3, 5, 6, 4, 7 }
  uselistorder i64 %arg3, { 1, 0 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1871:
  ret i64 40, !insn.addr !327
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1877:
  %0 = trunc i64 %arg1 to i32, !insn.addr !328
  %1 = icmp ult i32 %0, 3, !insn.addr !328
  %factor = mul i64 %arg1, 10
  %2 = add i64 %factor, 10, !insn.addr !329
  %.op = and i64 %2, 4294967294
  %3 = select i1 %1, i64 %.op, i64 4294967295, !insn.addr !330
  ret i64 %3, !insn.addr !331

; uselistorder directives
  uselistorder i64 10, { 3, 2, 4, 0, 5, 7, 6, 8, 9, 1 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_188a:
  ret i64 60, !insn.addr !332
}

define i64 @ret_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1890:
  %0 = mul i64 %arg1, 3, !insn.addr !333
  %1 = and i64 %0, 4294967295, !insn.addr !333
  %2 = trunc i64 %0 to i32, !insn.addr !334
  %3 = inttoptr i64 %arg2 to i32*, !insn.addr !334
  store i32 %2, i32* %3, align 4, !insn.addr !334
  ret i64 %1, !insn.addr !335

; uselistorder directives
  uselistorder i64 4294967295, { 4, 5, 6, 7, 8, 9, 10, 3, 0, 1, 11, 12, 13, 14, 15, 16, 2, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 }
  uselistorder i64 3, { 1, 2, 0, 3 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1896:
  ret i64 21, !insn.addr !336

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_189c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_240c to i8*)), !insn.addr !337
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22cd to i8*)), !insn.addr !338
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_22e9 to i8*)), !insn.addr !339
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2305 to i8*)), !insn.addr !340
  %4 = load i128, i128* @global_var_2060, align 8, !insn.addr !341
  %5 = call i128 @__asm_movaps.4(i128 %4), !insn.addr !341
  %6 = call i64 @__asm_movaps(i128 %5), !insn.addr !342
  %7 = load i128, i128* @global_var_2070, align 8, !insn.addr !343
  %8 = call i128 @__asm_movaps.4(i128 %7), !insn.addr !343
  %9 = call i64 @__asm_movaps(i128 %8), !insn.addr !344
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2320 to i8*)), !insn.addr !345
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_233d to i8*)), !insn.addr !346
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2359 to i8*)), !insn.addr !347
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2376 to i8*)), !insn.addr !348
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2392 to i8*)), !insn.addr !349
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_23ae to i8*)), !insn.addr !350
  %16 = sext i32 %15 to i64, !insn.addr !350
  ret i64 %16, !insn.addr !350

; uselistorder directives
  uselistorder i128* @global_var_2070, { 1, 0 }
  uselistorder i128* @global_var_2060, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1975:
  %0 = call i64 @test_calling_conventions(), !insn.addr !351
  %1 = call i64 @test_parameter_passing(), !insn.addr !352
  %2 = call i64 @test_return_values(), !insn.addr !353
  ret i64 0, !insn.addr !354

; uselistorder directives
  uselistorder i64 0, { 10, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 92, 93, 1, 3, 4, 2, 5, 6, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 94, 7, 95, 8, 96, 11, 9, 97, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 90, 91 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_198c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !355

; uselistorder directives
  uselistorder i32 1, { 12, 16, 18, 17, 15, 11, 14, 13, 49, 19, 20, 10, 50, 54, 53, 28, 27, 26, 25, 24, 23, 22, 21, 9, 4, 51, 31, 30, 29, 8, 7, 55, 35, 34, 33, 32, 3, 56, 37, 36, 2, 39, 38, 1, 52, 58, 57, 47, 46, 45, 44, 43, 42, 41, 40, 6, 0, 5, 59, 48 }
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

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_paddq(i128, i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i64 @__asm_movq(i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_pcmpeqd(i128, i128) local_unnamed_addr

declare i128 @__asm_psubq(i128, i128) local_unnamed_addr

declare i64 @__asm_movdqu.3(i128) local_unnamed_addr

declare i128 @__asm_movaps.4(i128) local_unnamed_addr

declare i128 @__asm_movd(i32) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

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
!25 = !{i64 4444}
!26 = !{i64 4447}
!27 = !{i64 4453}
!28 = !{i64 4456}
!29 = !{i64 4459}
!30 = !{i64 4465}
!31 = !{i64 4466}
!32 = !{i64 4469}
!33 = !{i64 4471}
!34 = !{i64 4477}
!35 = !{i64 4483}
!36 = !{i64 4484}
!37 = !{i64 4487}
!38 = !{i64 4489}
!39 = !{i64 4491}
!40 = !{i64 4494}
!41 = !{i64 4500}
!42 = !{i64 4501}
!43 = !{i64 4504}
!44 = !{i64 4506}
!45 = !{i64 4508}
!46 = !{i64 4514}
!47 = !{i64 4515}
!48 = !{i64 4518}
!49 = !{i64 4520}
!50 = !{i64 4522}
!51 = !{i64 4525}
!52 = !{i64 4528}
!53 = !{i64 4534}
!54 = !{i64 4535}
!55 = !{i64 4538}
!56 = !{i64 4540}
!57 = !{i64 4542}
!58 = !{i64 4545}
!59 = !{i64 4551}
!60 = !{i64 4552}
!61 = !{i64 4555}
!62 = !{i64 4557}
!63 = !{i64 4559}
!64 = !{i64 4565}
!65 = !{i64 4571}
!66 = !{i64 4572}
!67 = !{i64 4601}
!68 = !{i64 4603}
!69 = !{i64 4605}
!70 = !{i64 4610}
!71 = !{i64 4615}
!72 = !{i64 4620}
!73 = !{i64 4624}
!74 = !{i64 4629}
!75 = !{i64 4634}
!76 = !{i64 4639}
!77 = !{i64 4674}
!78 = !{i64 4676}
!79 = !{i64 4644}
!80 = !{i64 4685}
!81 = !{i64 4689}
!82 = !{i64 4692}
!83 = !{i64 4694}
!84 = !{i64 4696}
!85 = !{i64 4699}
!86 = !{i64 4706}
!87 = !{i64 4708}
!88 = !{i64 4713}
!89 = !{i64 4717}
!90 = !{i64 4722}
!91 = !{i64 4724}
!92 = !{i64 4726}
!93 = !{i64 4736}
!94 = !{i64 4742}
!95 = !{i64 4743}
!96 = !{i64 4746}
!97 = !{i64 4748}
!98 = !{i64 4750}
!99 = !{i64 4753}
!100 = !{i64 4756}
!101 = !{i64 4760}
!102 = !{i64 4764}
!103 = !{i64 4765}
!104 = !{i64 4773}
!105 = !{i64 4776}
!106 = !{i64 4781}
!107 = !{i64 4786}
!108 = !{i64 4791}
!109 = !{i64 4796}
!110 = !{i64 4800}
!111 = !{i64 4802}
!112 = !{i64 4806}
!113 = !{i64 4811}
!114 = !{i64 4815}
!115 = !{i64 4819}
!116 = !{i64 4829}
!117 = !{i64 4830}
!118 = !{i64 4834}
!119 = !{i64 4839}
!120 = !{i64 4841}
!121 = !{i64 4846}
!122 = !{i64 4850}
!123 = !{i64 4854}
!124 = !{i64 4858}
!125 = !{i64 4860}
!126 = !{i64 4865}
!127 = !{i64 4869}
!128 = !{i64 4874}
!129 = !{i64 4875}
!130 = !{i64 4878}
!131 = !{i64 4880}
!132 = !{i64 4883}
!133 = !{i64 4886}
!134 = !{i64 4892}
!135 = !{i64 4893}
!136 = !{i64 4894}
!137 = !{i64 4908}
!138 = !{i64 4929}
!139 = !{i64 4948}
!140 = !{i64 4967}
!141 = !{i64 4986}
!142 = !{i64 5005}
!143 = !{i64 5024}
!144 = !{i64 5043}
!145 = !{i64 5062}
!146 = !{i64 5081}
!147 = !{i64 5100}
!148 = !{i64 5139}
!149 = !{i64 5155}
!150 = !{i64 5174}
!151 = !{i64 5193}
!152 = !{i64 5212}
!153 = !{i64 5217}
!154 = !{i64 5225}
!155 = !{i64 5229}
!156 = !{i64 5237}
!157 = !{i64 5241}
!158 = !{i64 5245}
!159 = !{i64 5250}
!160 = !{i64 5254}
!161 = !{i64 5258}
!162 = !{i64 5262}
!163 = !{i64 5264}
!164 = !{i64 5268}
!165 = !{i64 5270}
!166 = !{i64 5275}
!167 = !{i64 5279}
!168 = !{i64 5283}
!169 = !{i64 5287}
!170 = !{i64 5289}
!171 = !{i64 5294}
!172 = !{i64 5298}
!173 = !{i64 5312}
!174 = !{i64 5339}
!175 = !{i64 5344}
!176 = !{i64 5347}
!177 = !{i64 5353}
!178 = !{i64 5354}
!179 = !{i64 5361}
!180 = !{i64 5367}
!181 = !{i64 5373}
!182 = !{i64 5379}
!183 = !{i64 5383}
!184 = !{i64 5387}
!185 = !{i64 5389}
!186 = !{i64 5395}
!187 = !{i64 5396}
!188 = !{i64 5398}
!189 = !{i64 5400}
!190 = !{i64 5404}
!191 = !{i64 5406}
!192 = !{i64 5410}
!193 = !{i64 5413}
!194 = !{i64 5415}
!195 = !{i64 5418}
!196 = !{i64 5421}
!197 = !{i64 5423}
!198 = !{i64 5432}
!199 = !{i64 5433}
!200 = !{i64 5462}
!201 = !{i64 5464}
!202 = !{i64 5466}
!203 = !{i64 5471}
!204 = !{i64 5476}
!205 = !{i64 5481}
!206 = !{i64 5485}
!207 = !{i64 5490}
!208 = !{i64 5495}
!209 = !{i64 5500}
!210 = !{i64 5535}
!211 = !{i64 5537}
!212 = !{i64 5505}
!213 = !{i64 5546}
!214 = !{i64 5550}
!215 = !{i64 5553}
!216 = !{i64 5555}
!217 = !{i64 5557}
!218 = !{i64 5560}
!219 = !{i64 5567}
!220 = !{i64 5569}
!221 = !{i64 5574}
!222 = !{i64 5578}
!223 = !{i64 5583}
!224 = !{i64 5585}
!225 = !{i64 5587}
!226 = !{i64 5597}
!227 = !{i64 5626}
!228 = !{i64 5639}
!229 = !{i64 5643}
!230 = !{i64 5649}
!231 = !{i64 5650}
!232 = !{i64 5655}
!233 = !{i64 5658}
!234 = !{i64 5668}
!235 = !{i64 5670}
!236 = !{i64 5677}
!237 = !{i64 5682}
!238 = !{i64 5688}
!239 = !{i64 5689}
!240 = !{i64 5692}
!241 = !{i64 5699}
!242 = !{i64 5701}
!243 = !{i64 5703}
!244 = !{i64 5705}
!245 = !{i64 5706}
!246 = !{i64 5709}
!247 = !{i64 5711}
!248 = !{i64 5717}
!249 = !{i64 5722}
!250 = !{i64 5726}
!251 = !{i64 5727}
!252 = !{i64 5734}
!253 = !{i64 5739}
!254 = !{i64 5746}
!255 = !{i64 5755}
!256 = !{i64 5759}
!257 = !{i64 5760}
!258 = !{i64 5763}
!259 = !{i64 5769}
!260 = !{i64 5781}
!261 = !{i64 5800}
!262 = !{i64 5819}
!263 = !{i64 5838}
!264 = !{i64 5857}
!265 = !{i64 5876}
!266 = !{i64 5909}
!267 = !{i64 5921}
!268 = !{i64 5925}
!269 = !{i64 5944}
!270 = !{i64 5963}
!271 = !{i64 5982}
!272 = !{i64 5987}
!273 = !{i64 5994}
!274 = !{i64 5998}
!275 = !{i64 6005}
!276 = !{i64 6014}
!277 = !{i64 6026}
!278 = !{i64 6049}
!279 = !{i64 6054}
!280 = !{i64 6057}
!281 = !{i64 6063}
!282 = !{i64 6064}
!283 = !{i64 6068}
!284 = !{i64 6074}
!285 = !{i64 6075}
!286 = !{i64 6079}
!287 = !{i64 6081}
!288 = !{i64 6084}
!289 = !{i64 6090}
!290 = !{i64 6091}
!291 = !{i64 6094}
!292 = !{i64 6098}
!293 = !{i64 6103}
!294 = !{i64 6113}
!295 = !{i64 6121}
!296 = !{i64 6125}
!297 = !{i64 6129}
!298 = !{i64 6134}
!299 = !{i64 6138}
!300 = !{i64 6142}
!301 = !{i64 6146}
!302 = !{i64 6148}
!303 = !{i64 6149}
!304 = !{i64 6156}
!305 = !{i64 6161}
!306 = !{i64 6168}
!307 = !{i64 6177}
!308 = !{i64 6181}
!309 = !{i64 6182}
!310 = !{i64 6185}
!311 = !{i64 6186}
!312 = !{i64 6189}
!313 = !{i64 6190}
!314 = !{i64 6206}
!315 = !{i64 6210}
!316 = !{i64 6216}
!317 = !{i64 6217}
!318 = !{i64 6233}
!319 = !{i64 6237}
!320 = !{i64 6238}
!321 = !{i64 6244}
!322 = !{i64 6245}
!323 = !{i64 6248}
!324 = !{i64 6251}
!325 = !{i64 6253}
!326 = !{i64 6256}
!327 = !{i64 6262}
!328 = !{i64 6263}
!329 = !{i64 6269}
!330 = !{i64 6278}
!331 = !{i64 6281}
!332 = !{i64 6287}
!333 = !{i64 6288}
!334 = !{i64 6291}
!335 = !{i64 6293}
!336 = !{i64 6299}
!337 = !{i64 6311}
!338 = !{i64 6330}
!339 = !{i64 6349}
!340 = !{i64 6368}
!341 = !{i64 6373}
!342 = !{i64 6380}
!343 = !{i64 6384}
!344 = !{i64 6391}
!345 = !{i64 6412}
!346 = !{i64 6431}
!347 = !{i64 6451}
!348 = !{i64 6470}
!349 = !{i64 6489}
!350 = !{i64 6512}
!351 = !{i64 6518}
!352 = !{i64 6523}
!353 = !{i64 6528}
!354 = !{i64 6536}
!355 = !{i64 6552}
