source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_6020 = global i64 0
@global_var_3029 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_3039 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_3049 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_3059 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_3069 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_3079 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_3089 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_3099 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_30a9 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_30b9 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_3147 = constant [5 x i8] c"test\00"
@global_var_33e0 = local_unnamed_addr constant i64 4614253070214989087
@global_var_31d5 = constant [6 x i8] c"Hello\00"
@global_var_31db = constant [4 x i8] c"abc\00"
@global_var_31df = local_unnamed_addr constant [4 x i8] c"def\00"
@global_var_31e3 = local_unnamed_addr constant [4 x i8] c"ghi\00"
@global_var_3209 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_321a = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_322b = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_323c = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_324d = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_325e = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_326f = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_3280 = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_3291 = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_32a2 = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_32b3 = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_6010 = global i64 100
@global_var_6018 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_3008 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_30d0 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_30f8 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_3120 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_3150 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_3178 = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_31a8 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_31e8 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_32c4 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_32e2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_32fe = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_331a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_3335 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_3352 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_336e = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_338b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_33a7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_33c3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
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

define i32 @function_10b0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10c0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !11
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !11
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !11
  %3 = call i32 @__libc_start_main(i64 9946, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !11
  %4 = call i64 @__asm_hlt(), !insn.addr !12
  unreachable, !insn.addr !12
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10f0:
  ret i64 ptrtoint (i64* @global_var_6020 to i64), !insn.addr !13
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1120:
  ret i64 0, !insn.addr !14
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6020 to i8*), align 8, !insn.addr !15
  %3 = icmp eq i8 %2, 0, !insn.addr !15
  %4 = icmp eq i1 %3, false, !insn.addr !16
  br i1 %4, label %dec_label_pc_1198, label %dec_label_pc_116d, !insn.addr !16

dec_label_pc_116d:                                ; preds = %dec_label_pc_1160
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !17
  %6 = icmp eq i64 %5, 0, !insn.addr !17
  br i1 %6, label %dec_label_pc_1187, label %dec_label_pc_117b, !insn.addr !18

dec_label_pc_117b:                                ; preds = %dec_label_pc_116d
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !19
  %8 = inttoptr i64 %7 to i64*, !insn.addr !20
  call void @__cxa_finalize(i64* %8), !insn.addr !20
  br label %dec_label_pc_1187, !insn.addr !20

dec_label_pc_1187:                                ; preds = %dec_label_pc_117b, %dec_label_pc_116d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !21
  store i8 1, i8* bitcast (i64* @global_var_6020 to i8*), align 8, !insn.addr !22
  ret i64 %9, !insn.addr !23

dec_label_pc_1198:                                ; preds = %dec_label_pc_1160
  ret i64 %1, !insn.addr !24
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i64 @register_tm_clones(), !insn.addr !25
  ret i64 %0, !insn.addr !25
}

define i64 @cdecl_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11a9:
  %0 = add i64 %arg2, %arg1, !insn.addr !26
  %1 = and i64 %0, 4294967295, !insn.addr !26
  ret i64 %1, !insn.addr !27
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_11c1:
  %0 = call i64 @cdecl_func(i64 5, i64 10), !insn.addr !28
  ret i64 %0, !insn.addr !29
}

define i64 @stdcall_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11da:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !30
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !30
  %2 = mul nsw i64 %1, %0, !insn.addr !30
  %3 = and i64 %2, 4294967295, !insn.addr !30
  ret i64 %3, !insn.addr !31
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_11f1:
  %0 = call i64 @stdcall_func(i64 5, i64 10), !insn.addr !32
  ret i64 %0, !insn.addr !33
}

define i64 @fastcall_func(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_120a:
  %0 = add i64 %arg2, %arg1, !insn.addr !34
  %1 = add i64 %0, %arg3, !insn.addr !35
  %2 = and i64 %1, 4294967295, !insn.addr !35
  ret i64 %2, !insn.addr !36
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_122a:
  %0 = call i64 @fastcall_func(i64 1, i64 2, i64 3), !insn.addr !37
  ret i64 %0, !insn.addr !38
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_1248:
  ret i64 15, !insn.addr !39
}

define i64 @arm_aapcs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1257:
  %0 = add i64 %arg2, %arg1, !insn.addr !40
  %1 = add i64 %0, %arg3, !insn.addr !41
  %2 = add i64 %1, %arg4, !insn.addr !42
  %3 = add i64 %2, %arg5, !insn.addr !43
  %4 = and i64 %3, 4294967295, !insn.addr !43
  ret i64 %4, !insn.addr !44
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1288:
  %0 = call i64 @arm_aapcs_func(i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !45
  ret i64 %0, !insn.addr !46
}

define i64 @mips_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_12b1:
  %0 = add i64 %arg2, %arg1, !insn.addr !47
  %1 = add i64 %0, %arg3, !insn.addr !48
  %2 = add i64 %1, %arg4, !insn.addr !49
  %3 = and i64 %2, 4294967295, !insn.addr !49
  ret i64 %3, !insn.addr !50
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_12d9:
  %0 = call i64 @mips_func(i64 10, i64 20, i64 30, i64 40), !insn.addr !51
  ret i64 %0, !insn.addr !52
}

define i64 @amd64_sysv_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_12fc:
  %0 = add i64 %arg2, %arg1, !insn.addr !53
  %1 = add i64 %0, %arg3, !insn.addr !54
  %2 = add i64 %1, %arg4, !insn.addr !55
  %3 = add i64 %2, %arg5, !insn.addr !56
  %4 = add i64 %3, %arg6, !insn.addr !57
  %5 = and i64 %4, 4294967295, !insn.addr !57
  ret i64 %5, !insn.addr !58
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1336:
  %0 = call i64 @amd64_sysv_func(i64 1, i64 2, i64 3, i64 4, i64 5, i64 6), !insn.addr !59
  ret i64 %0, !insn.addr !60
}

define i64 @ms_x64_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1365:
  %0 = add i64 %arg2, %arg1, !insn.addr !61
  %1 = add i64 %0, %arg3, !insn.addr !62
  %2 = add i64 %1, %arg4, !insn.addr !63
  %3 = add i64 %2, %arg5, !insn.addr !64
  %4 = and i64 %3, 4294967295, !insn.addr !64
  ret i64 %4, !insn.addr !65
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1396:
  %0 = call i64 @ms_x64_func(i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !66
  ret i64 %0, !insn.addr !67
}

define i64 @vectorcall_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13bf:
  %0 = add i64 %arg2, %arg1, !insn.addr !68
  %1 = add i64 %0, %arg3, !insn.addr !69
  %2 = add i64 %1, %arg4, !insn.addr !70
  %3 = and i64 %2, 4294967295, !insn.addr !70
  ret i64 %3, !insn.addr !71
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_13e7:
  %0 = call i64 @vectorcall_func(i64 1, i64 2, i64 3, i64 4), !insn.addr !72
  ret i64 %0, !insn.addr !73
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_140a:
  %0 = call i64 @cdecl_func(i64 1, i64 2), !insn.addr !74
  %1 = call i64 @stdcall_func(i64 3, i64 4), !insn.addr !75
  %2 = add i64 %1, %0, !insn.addr !76
  %3 = call i64 @fastcall_func(i64 5, i64 6, i64 7), !insn.addr !77
  %4 = add i64 %2, %3, !insn.addr !78
  %5 = and i64 %4, 4294967295, !insn.addr !79
  ret i64 %5, !insn.addr !80

; uselistorder directives
  uselistorder i64 (i64, i64, i64)* @fastcall_func, { 1, 0 }
  uselistorder i64 (i64, i64)* @stdcall_func, { 1, 0 }
  uselistorder i64 (i64, i64)* @cdecl_func, { 1, 0 }
}

define i64 @varargs_func(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_145d:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !81
  %stack_var_-224.0.lcssa.reg2mem = alloca i64, !insn.addr !81
  %rax.0.reg2mem = alloca i64, !insn.addr !81
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !81
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !81
  %stack_var_-208.13.reg2mem = alloca i32*, !insn.addr !81
  %stack_var_-216.14.reg2mem = alloca i32, !insn.addr !81
  %stack_var_-224.05.reg2mem = alloca i32, !insn.addr !81
  %storemerge6.reg2mem = alloca i32, !insn.addr !81
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %8 = load i128, i128* %0
  %9 = load i128, i128* %0
  %10 = load i128, i128* %0
  %stack_var_-184 = alloca i64, align 8
  %stack_var_8 = alloca i64, align 8
  %11 = trunc i64 %2 to i8, !insn.addr !82
  %12 = icmp eq i8 %11, 0, !insn.addr !82
  br i1 %12, label %dec_label_pc_14b9, label %dec_label_pc_1499, !insn.addr !83

dec_label_pc_1499:                                ; preds = %dec_label_pc_145d
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !84
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !85
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !86
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !87
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !88
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !89
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !90
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !91
  br label %dec_label_pc_14b9, !insn.addr !91

dec_label_pc_14b9:                                ; preds = %dec_label_pc_1499, %dec_label_pc_145d
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !92
  %22 = trunc i64 %arg1 to i32, !insn.addr !93
  %23 = icmp sgt i32 %22, 0, !insn.addr !94
  store i64 0, i64* %stack_var_-224.0.lcssa.reg2mem, !insn.addr !94
  br i1 %23, label %dec_label_pc_150e.lr.ph, label %dec_label_pc_156b, !insn.addr !94

dec_label_pc_150e.lr.ph:                          ; preds = %dec_label_pc_14b9
  %24 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !95
  %25 = bitcast i64* %stack_var_8 to i32*
  store i32 0, i32* %storemerge6.reg2mem
  store i32 0, i32* %stack_var_-224.05.reg2mem
  store i32 8, i32* %stack_var_-216.14.reg2mem
  store i32* %25, i32** %stack_var_-208.13.reg2mem
  br label %dec_label_pc_150e

dec_label_pc_150e:                                ; preds = %dec_label_pc_154e, %dec_label_pc_150e.lr.ph
  %stack_var_-208.13.reload = load i32*, i32** %stack_var_-208.13.reg2mem
  %stack_var_-216.14.reload = load i32, i32* %stack_var_-216.14.reg2mem
  %stack_var_-224.05.reload = load i32, i32* %stack_var_-224.05.reg2mem
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %26 = icmp ult i32 %stack_var_-216.14.reload, 48
  br i1 %26, label %dec_label_pc_1519, label %dec_label_pc_153c, !insn.addr !96

dec_label_pc_1519:                                ; preds = %dec_label_pc_150e
  %27 = zext i32 %stack_var_-216.14.reload to i64, !insn.addr !97
  %28 = add i64 %27, %24, !insn.addr !98
  %29 = add i32 %stack_var_-216.14.reload, 8, !insn.addr !99
  store i32* %stack_var_-208.13.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !100
  store i32 %29, i32* %stack_var_-216.0.reg2mem, !insn.addr !100
  store i64 %28, i64* %rax.0.reg2mem, !insn.addr !100
  br label %dec_label_pc_154e, !insn.addr !100

dec_label_pc_153c:                                ; preds = %dec_label_pc_150e
  %30 = ptrtoint i32* %stack_var_-208.13.reload to i64, !insn.addr !101
  %31 = add i64 %30, 8, !insn.addr !102
  %32 = inttoptr i64 %31 to i32*, !insn.addr !103
  store i32* %32, i32** %stack_var_-208.0.reg2mem, !insn.addr !103
  store i32 %stack_var_-216.14.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !103
  store i64 %30, i64* %rax.0.reg2mem, !insn.addr !103
  br label %dec_label_pc_154e, !insn.addr !103

dec_label_pc_154e:                                ; preds = %dec_label_pc_153c, %dec_label_pc_1519
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %33 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !104
  %34 = load i32, i32* %33, align 4, !insn.addr !104
  %35 = add i32 %34, %stack_var_-224.05.reload, !insn.addr !105
  %36 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !106
  %exitcond = icmp eq i32 %36, %22
  store i32 %36, i32* %storemerge6.reg2mem, !insn.addr !94
  store i32 %35, i32* %stack_var_-224.05.reg2mem, !insn.addr !94
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.14.reg2mem, !insn.addr !94
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.13.reg2mem, !insn.addr !94
  br i1 %exitcond, label %dec_label_pc_155d.dec_label_pc_156b_crit_edge, label %dec_label_pc_150e, !insn.addr !94

dec_label_pc_155d.dec_label_pc_156b_crit_edge:    ; preds = %dec_label_pc_154e
  %phitmp = zext i32 %35 to i64
  store i64 %phitmp, i64* %stack_var_-224.0.lcssa.reg2mem
  br label %dec_label_pc_156b

dec_label_pc_156b:                                ; preds = %dec_label_pc_155d.dec_label_pc_156b_crit_edge, %dec_label_pc_14b9
  %stack_var_-224.0.lcssa.reload = load i64, i64* %stack_var_-224.0.lcssa.reg2mem
  %37 = call i64 @__readfsqword(i64 40), !insn.addr !107
  %38 = icmp eq i64 %21, %37, !insn.addr !107
  store i64 %stack_var_-224.0.lcssa.reload, i64* %rax.1.reg2mem, !insn.addr !108
  br i1 %38, label %dec_label_pc_1588, label %dec_label_pc_1583, !insn.addr !108

dec_label_pc_1583:                                ; preds = %dec_label_pc_156b
  call void @__stack_chk_fail(), !insn.addr !109
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !109
  br label %dec_label_pc_1588, !insn.addr !109

dec_label_pc_1588:                                ; preds = %dec_label_pc_1583, %dec_label_pc_156b
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !110

; uselistorder directives
  uselistorder i32 %35, { 1, 0 }
  uselistorder i32 %stack_var_-216.14.reload, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-208.13.reload, { 1, 0 }
  uselistorder i32* %storemerge6.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-224.05.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-216.14.reg2mem, { 1, 0, 2 }
  uselistorder i32** %stack_var_-208.13.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-224.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_158a:
  ret i64 42, !insn.addr !111
}

define i64 @func_many_args(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i64 %arg7, i64 %arg8) local_unnamed_addr {
dec_label_pc_1599:
  %0 = add i64 %arg2, %arg1, !insn.addr !112
  %1 = add i64 %0, %arg3, !insn.addr !113
  %2 = add i64 %1, %arg4, !insn.addr !114
  %3 = add i64 %2, %arg5, !insn.addr !115
  %4 = add i64 %3, %arg6, !insn.addr !116
  %5 = add i64 %4, %arg7, !insn.addr !117
  %6 = add i64 %5, %arg8, !insn.addr !118
  %7 = and i64 %6, 4294967295, !insn.addr !118
  ret i64 %7, !insn.addr !119
}

define i64 @func_mixed_args(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15dd:
  %0 = alloca i128
  %storemerge.reg2mem = alloca i32, !insn.addr !120
  %1 = load i128, i128* %0
  %2 = call i64 @__asm_movsd(i128 %1), !insn.addr !121
  %3 = icmp eq i64 %arg2, 0, !insn.addr !122
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !123
  br i1 %3, label %dec_label_pc_1613, label %dec_label_pc_1600, !insn.addr !123

dec_label_pc_1600:                                ; preds = %dec_label_pc_15dd
  %4 = inttoptr i64 %arg2 to i8*, !insn.addr !124
  %5 = call i32 @strlen(i8* %4), !insn.addr !124
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !125
  br label %dec_label_pc_1613, !insn.addr !125

dec_label_pc_1613:                                ; preds = %dec_label_pc_15dd, %dec_label_pc_1600
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %6 = trunc i64 %arg1 to i32, !insn.addr !126
  %7 = add i32 %storemerge.reload, %6, !insn.addr !127
  %8 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !128
  %9 = call i128 @__asm_cvtsi2sd(i32 %7), !insn.addr !129
  %10 = call i128 @__asm_movapd(i128 %9), !insn.addr !130
  %11 = call i128 @__asm_addsd(i128 %10, i64 %2), !insn.addr !131
  %12 = call i128 @__asm_pxor(i128 %9, i128 %9), !insn.addr !132
  %13 = call i128 @__asm_cvtsi2sd.1(i64 %arg3), !insn.addr !133
  %14 = call i128 @__asm_addsd.2(i128 %13, i128 %11), !insn.addr !134
  %15 = call i32 @__asm_cvttsd2si(i128 %14), !insn.addr !135
  %16 = sext i32 %15 to i64, !insn.addr !135
  ret i64 %16, !insn.addr !136

; uselistorder directives
  uselistorder i128 %9, { 2, 1, 0 }
  uselistorder i128 %1, { 1, 2, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1613, { 1, 0 }
}

define i64 @func_struct_byval() local_unnamed_addr {
dec_label_pc_1643:
  %stack_var_-16.01.reg2mem = alloca i64, !insn.addr !137
  %indvars.iv.reg2mem = alloca i64, !insn.addr !137
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !138
  %1 = add i64 %0, 16, !insn.addr !139
  store i64 0, i64* %indvars.iv.reg2mem
  store i64 0, i64* %stack_var_-16.01.reg2mem
  br label %dec_label_pc_165c

dec_label_pc_165c:                                ; preds = %dec_label_pc_165c, %dec_label_pc_1643
  %stack_var_-16.01.reload = load i64, i64* %stack_var_-16.01.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %2 = mul i64 %indvars.iv.reload, 8, !insn.addr !139
  %3 = add i64 %1, %2, !insn.addr !139
  %4 = inttoptr i64 %3 to i64*, !insn.addr !139
  %5 = load i64, i64* %4, align 8, !insn.addr !139
  %6 = add i64 %5, %stack_var_-16.01.reload, !insn.addr !140
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !141
  store i64 %6, i64* %stack_var_-16.01.reg2mem, !insn.addr !141
  br i1 %exitcond, label %dec_label_pc_1674, label %dec_label_pc_165c, !insn.addr !141

dec_label_pc_1674:                                ; preds = %dec_label_pc_165c
  ret i64 %6, !insn.addr !142

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-16.01.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr(i32* %arg1) local_unnamed_addr {
dec_label_pc_167a:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !143
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !144
  %3 = icmp eq i1 %2, false, !insn.addr !145
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !145
  br i1 %3, label %dec_label_pc_1694, label %dec_label_pc_16a4, !insn.addr !145

dec_label_pc_1694:                                ; preds = %dec_label_pc_167a
  %4 = trunc i64 %1 to i32
  %5 = ptrtoint i32* %arg1 to i64, !insn.addr !146
  %6 = add i64 %5, 4, !insn.addr !147
  %7 = inttoptr i64 %6 to i32*, !insn.addr !147
  %8 = load i32, i32* %7, align 4, !insn.addr !147
  %9 = mul i32 %8, %4, !insn.addr !148
  %10 = zext i32 %9 to i64, !insn.addr !148
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !148
  br label %dec_label_pc_16a4, !insn.addr !148

dec_label_pc_16a4:                                ; preds = %dec_label_pc_167a, %dec_label_pc_1694
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !149

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16a4, { 1, 0 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_16a6:
  %rax.0.reg2mem = alloca i64, !insn.addr !150
  %indvars.iv.reg2mem = alloca i64, !insn.addr !150
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !151
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !152
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !153
  %3 = call i64 @call_cdecl(), !insn.addr !154
  %4 = and i64 %3, 4294967295, !insn.addr !155
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3029, i64 0, i64 0), i64 %4), !insn.addr !156
  %6 = call i64 @call_stdcall(), !insn.addr !157
  %7 = and i64 %6, 4294967295, !insn.addr !158
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3039, i64 0, i64 0), i64 %7), !insn.addr !159
  %9 = call i64 @call_fastcall(), !insn.addr !160
  %10 = and i64 %9, 4294967295, !insn.addr !161
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3049, i64 0, i64 0), i64 %10), !insn.addr !162
  %12 = call i64 @call_thiscall(), !insn.addr !163
  %13 = and i64 %12, 4294967295, !insn.addr !164
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3059, i64 0, i64 0), i64 %13), !insn.addr !165
  %15 = call i64 @call_arm_aapcs(), !insn.addr !166
  %16 = and i64 %15, 4294967295, !insn.addr !167
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3069, i64 0, i64 0), i64 %16), !insn.addr !168
  %18 = call i64 @call_mips(), !insn.addr !169
  %19 = and i64 %18, 4294967295, !insn.addr !170
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3079, i64 0, i64 0), i64 %19), !insn.addr !171
  %21 = call i64 @call_amd64_sysv(), !insn.addr !172
  %22 = and i64 %21, 4294967295, !insn.addr !173
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3089, i64 0, i64 0), i64 %22), !insn.addr !174
  %24 = call i64 @call_ms_x64(), !insn.addr !175
  %25 = and i64 %24, 4294967295, !insn.addr !176
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3099, i64 0, i64 0), i64 %25), !insn.addr !177
  %27 = call i64 @call_vectorcall(), !insn.addr !178
  %28 = and i64 %27, 4294967295, !insn.addr !179
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_30a9, i64 0, i64 0), i64 %28), !insn.addr !180
  %30 = call i64 @mixed_conventions_test(), !insn.addr !181
  %31 = and i64 %30, 4294967295, !insn.addr !182
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_30b9, i64 0, i64 0), i64 %31), !insn.addr !183
  %33 = call i64 @varargs_func(i64 5, i64 1, i64 2, i64 3, i64 4, i64 5), !insn.addr !184
  %34 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30d0 to i8*)), !insn.addr !185
  %35 = call i64 @func_no_args(), !insn.addr !186
  %36 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30f8 to i8*)), !insn.addr !187
  %37 = call i64 @func_many_args(i64 1, i64 2, i64 3, i64 4, i64 5, i64 6, i64 7, i64 8), !insn.addr !188
  %38 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3120 to i8*)), !insn.addr !189
  %39 = call i128 @__asm_movq(i64 4614253070214989087), !insn.addr !190
  %40 = call i64 @func_mixed_args(i64 10, i64 ptrtoint ([5 x i8]* @global_var_3147 to i64), i64 100), !insn.addr !191
  %41 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3150 to i8*)), !insn.addr !192
  %42 = add i64 %0, -144, !insn.addr !193
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1936

dec_label_pc_1936:                                ; preds = %dec_label_pc_1936, %dec_label_pc_16a6
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %43 = mul i64 %indvars.iv.reload, 8, !insn.addr !193
  %44 = add i64 %42, %43, !insn.addr !193
  %45 = inttoptr i64 %44 to i64*, !insn.addr !193
  store i64 %indvars.iv.next, i64* %45, align 8, !insn.addr !193
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !194
  br i1 %exitcond, label %dec_label_pc_1962, label %dec_label_pc_1936, !insn.addr !194

dec_label_pc_1962:                                ; preds = %dec_label_pc_1936
  %46 = call i64 @func_struct_byval(), !insn.addr !195
  %47 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3178 to i8*)), !insn.addr !196
  store i32 5, i32* %stack_var_-160, align 4, !insn.addr !197
  %48 = call i64 @func_struct_byptr(i32* nonnull %stack_var_-160), !insn.addr !198
  %49 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_31a8 to i8*)), !insn.addr !199
  %50 = call i64 @__readfsqword(i64 40), !insn.addr !200
  %51 = icmp eq i64 %1, %50, !insn.addr !200
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !201
  br i1 %51, label %dec_label_pc_1a1d, label %dec_label_pc_1a18, !insn.addr !201

dec_label_pc_1a18:                                ; preds = %dec_label_pc_1962
  call void @__stack_chk_fail(), !insn.addr !202
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !202
  br label %dec_label_pc_1a1d, !insn.addr !202

dec_label_pc_1a1d:                                ; preds = %dec_label_pc_1a18, %dec_label_pc_1962
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !203

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i64 @param_by_value_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a1f:
  %0 = mul i64 %arg1, 2, !insn.addr !204
  %1 = and i64 %0, 4294967294, !insn.addr !205
  ret i64 %1, !insn.addr !206
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1a32:
  %0 = call i64 @param_by_value_int(i64 5), !insn.addr !207
  %1 = add i64 %0, 5, !insn.addr !208
  %2 = and i64 %1, 4294967295, !insn.addr !208
  ret i64 %2, !insn.addr !209
}

define i64 @param_by_value_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a5c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !210
  %4 = inttoptr i64 %arg1 to i32*, !insn.addr !211
  store i32 %3, i32* %4, align 4, !insn.addr !211
  ret i64 1, !insn.addr !212
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1a8c:
  %rax.0.reg2mem = alloca i64, !insn.addr !213
  %stack_var_-32 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !214
  store i32 5, i32* %stack_var_-32, align 4, !insn.addr !215
  %1 = ptrtoint i32* %stack_var_-32 to i64, !insn.addr !216
  %2 = call i64 @param_by_value_ptr(i64 %1), !insn.addr !217
  %3 = trunc i64 %2 to i32, !insn.addr !218
  %4 = load i32, i32* %stack_var_-32, align 4, !insn.addr !219
  %5 = add i32 %4, %3, !insn.addr !220
  %6 = zext i32 %5 to i64, !insn.addr !220
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !221
  %8 = icmp eq i64 %0, %7, !insn.addr !221
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !222
  br i1 %8, label %dec_label_pc_1ae1, label %dec_label_pc_1adc, !insn.addr !222

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1a8c
  call void @__stack_chk_fail(), !insn.addr !223
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_1ae1, !insn.addr !223

dec_label_pc_1ae1:                                ; preds = %dec_label_pc_1adc, %dec_label_pc_1a8c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !224
}

define i64 @param_array_decay(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ae3:
  ret i64 8, !insn.addr !225
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_1af9:
  %rax.0.reg2mem = alloca i64, !insn.addr !226
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !227
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !228
  %1 = call i64 @param_array_decay(i64* nonnull %stack_var_-56, i64 10), !insn.addr !229
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !230
  %3 = icmp eq i64 %0, %2, !insn.addr !230
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !231
  br i1 %3, label %dec_label_pc_1b61, label %dec_label_pc_1b5c, !insn.addr !231

dec_label_pc_1b5c:                                ; preds = %dec_label_pc_1af9
  call void @__stack_chk_fail(), !insn.addr !232
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_1b61, !insn.addr !232

dec_label_pc_1b61:                                ; preds = %dec_label_pc_1b5c, %dec_label_pc_1af9
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !233
}

define i64 @param_string(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b63:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 1, !insn.addr !234
  %3 = inttoptr i64 %2 to i8*, !insn.addr !235
  %4 = load i8, i8* %3, align 1, !insn.addr !235
  %5 = sext i8 %4 to i64, !insn.addr !236
  %sext = mul i64 %1, 72057594037927936
  %6 = ashr exact i64 %sext, 56, !insn.addr !236
  %7 = add nsw i64 %6, %5, !insn.addr !236
  %8 = and i64 %7, 4294967295, !insn.addr !236
  ret i64 %8, !insn.addr !237
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_1b8b:
  %0 = call i64 @param_string(i64 ptrtoint ([6 x i8]* @global_var_31d5 to i64)), !insn.addr !238
  ret i64 %0, !insn.addr !239
}

define i64 @param_ptr_array(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ba4:
  %stack_var_-16.0.lcssa.reg2mem = alloca i64, !insn.addr !240
  %stack_var_-16.02.reg2mem = alloca i32, !insn.addr !240
  %indvars.iv.reg2mem = alloca i64, !insn.addr !240
  %0 = trunc i64 %arg2 to i32, !insn.addr !241
  %1 = icmp sgt i32 %0, 0, !insn.addr !242
  store i64 0, i64* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !242
  br i1 %1, label %dec_label_pc_1bc3.preheader, label %dec_label_pc_1bef, !insn.addr !242

dec_label_pc_1bc3.preheader:                      ; preds = %dec_label_pc_1ba4
  %2 = ptrtoint i64* %arg1 to i64
  %wide.trip.count = and i64 %arg2, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-16.02.reg2mem
  br label %dec_label_pc_1bc3

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1bc3.preheader, %dec_label_pc_1bc3
  %stack_var_-16.02.reload = load i32, i32* %stack_var_-16.02.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 8, !insn.addr !243
  %4 = add i64 %3, %2, !insn.addr !244
  %5 = inttoptr i64 %4 to i64*, !insn.addr !245
  %6 = load i64, i64* %5, align 8, !insn.addr !245
  %7 = inttoptr i64 %6 to i8*, !insn.addr !246
  %8 = load i8, i8* %7, align 1, !insn.addr !246
  %9 = sext i8 %8 to i32, !insn.addr !247
  %10 = add i32 %stack_var_-16.02.reload, %9, !insn.addr !247
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !242
  store i32 %10, i32* %stack_var_-16.02.reg2mem, !insn.addr !242
  br i1 %exitcond, label %dec_label_pc_1be7.dec_label_pc_1bef_crit_edge, label %dec_label_pc_1bc3, !insn.addr !242

dec_label_pc_1be7.dec_label_pc_1bef_crit_edge:    ; preds = %dec_label_pc_1bc3
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %stack_var_-16.0.lcssa.reg2mem
  br label %dec_label_pc_1bef

dec_label_pc_1bef:                                ; preds = %dec_label_pc_1be7.dec_label_pc_1bef_crit_edge, %dec_label_pc_1ba4
  %stack_var_-16.0.lcssa.reload = load i64, i64* %stack_var_-16.0.lcssa.reg2mem
  ret i64 %stack_var_-16.0.lcssa.reload, !insn.addr !248

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-16.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bc3, { 1, 0 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1bf4:
  %rax.0.reg2mem = alloca i64, !insn.addr !249
  %stack_var_-40 = alloca i8*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !250
  store i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_31db, i64 0, i64 0), i8** %stack_var_-40, align 8, !insn.addr !251
  %1 = bitcast i8** %stack_var_-40 to i64*, !insn.addr !252
  %2 = call i64 @param_ptr_array(i64* nonnull %1, i64 3), !insn.addr !252
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !253
  %4 = icmp eq i64 %0, %3, !insn.addr !253
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !254
  br i1 %4, label %dec_label_pc_1c55, label %dec_label_pc_1c50, !insn.addr !254

dec_label_pc_1c50:                                ; preds = %dec_label_pc_1bf4
  call void @__stack_chk_fail(), !insn.addr !255
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !255
  br label %dec_label_pc_1c55, !insn.addr !255

dec_label_pc_1c55:                                ; preds = %dec_label_pc_1c50, %dec_label_pc_1bf4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !256

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
}

define i64 @param_varargs(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1c57:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !257
  %stack_var_-224.0.lcssa.reg2mem = alloca i64, !insn.addr !257
  %rax.0.reg2mem = alloca i64, !insn.addr !257
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !257
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !257
  %stack_var_-224.03.reg2mem = alloca i32, !insn.addr !257
  %stack_var_-208.14.reg2mem = alloca i32*, !insn.addr !257
  %stack_var_-216.15.reg2mem = alloca i32, !insn.addr !257
  %storemerge6.reg2mem = alloca i32, !insn.addr !257
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %7 = load i128, i128* %0
  %8 = load i128, i128* %0
  %9 = load i128, i128* %0
  %10 = load i128, i128* %0
  %stack_var_-184 = alloca i64, align 8
  %stack_var_8 = alloca i64, align 8
  %11 = trunc i64 %2 to i8, !insn.addr !258
  %12 = icmp eq i8 %11, 0, !insn.addr !258
  br i1 %12, label %dec_label_pc_1cb3, label %dec_label_pc_1c93, !insn.addr !259

dec_label_pc_1c93:                                ; preds = %dec_label_pc_1c57
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !260
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !261
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !262
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !263
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !264
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !265
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !266
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !267
  br label %dec_label_pc_1cb3, !insn.addr !267

dec_label_pc_1cb3:                                ; preds = %dec_label_pc_1c93, %dec_label_pc_1c57
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !268
  %22 = trunc i64 %arg1 to i32, !insn.addr !269
  %23 = icmp sgt i32 %22, 0, !insn.addr !270
  store i64 0, i64* %stack_var_-224.0.lcssa.reg2mem, !insn.addr !270
  br i1 %23, label %dec_label_pc_1d08.lr.ph, label %dec_label_pc_1d65, !insn.addr !270

dec_label_pc_1d08.lr.ph:                          ; preds = %dec_label_pc_1cb3
  %24 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !271
  %25 = bitcast i64* %stack_var_8 to i32*
  store i32 0, i32* %storemerge6.reg2mem
  store i32 8, i32* %stack_var_-216.15.reg2mem
  store i32* %25, i32** %stack_var_-208.14.reg2mem
  store i32 0, i32* %stack_var_-224.03.reg2mem
  br label %dec_label_pc_1d08

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1d48, %dec_label_pc_1d08.lr.ph
  %stack_var_-224.03.reload = load i32, i32* %stack_var_-224.03.reg2mem
  %stack_var_-208.14.reload = load i32*, i32** %stack_var_-208.14.reg2mem
  %stack_var_-216.15.reload = load i32, i32* %stack_var_-216.15.reg2mem
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %26 = icmp ult i32 %stack_var_-216.15.reload, 48
  br i1 %26, label %dec_label_pc_1d13, label %dec_label_pc_1d36, !insn.addr !272

dec_label_pc_1d13:                                ; preds = %dec_label_pc_1d08
  %27 = zext i32 %stack_var_-216.15.reload to i64, !insn.addr !273
  %28 = add i64 %27, %24, !insn.addr !274
  %29 = add i32 %stack_var_-216.15.reload, 8, !insn.addr !275
  store i32* %stack_var_-208.14.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !276
  store i32 %29, i32* %stack_var_-216.0.reg2mem, !insn.addr !276
  store i64 %28, i64* %rax.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_1d48, !insn.addr !276

dec_label_pc_1d36:                                ; preds = %dec_label_pc_1d08
  %30 = ptrtoint i32* %stack_var_-208.14.reload to i64, !insn.addr !277
  %31 = add i64 %30, 8, !insn.addr !278
  %32 = inttoptr i64 %31 to i32*, !insn.addr !279
  store i32* %32, i32** %stack_var_-208.0.reg2mem, !insn.addr !279
  store i32 %stack_var_-216.15.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !279
  store i64 %30, i64* %rax.0.reg2mem, !insn.addr !279
  br label %dec_label_pc_1d48, !insn.addr !279

dec_label_pc_1d48:                                ; preds = %dec_label_pc_1d36, %dec_label_pc_1d13
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %33 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !280
  %34 = load i32, i32* %33, align 4, !insn.addr !280
  %35 = add i32 %34, %stack_var_-224.03.reload, !insn.addr !281
  %36 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !282
  %exitcond = icmp eq i32 %36, %22
  store i32 %36, i32* %storemerge6.reg2mem, !insn.addr !270
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.15.reg2mem, !insn.addr !270
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.14.reg2mem, !insn.addr !270
  store i32 %35, i32* %stack_var_-224.03.reg2mem, !insn.addr !270
  br i1 %exitcond, label %dec_label_pc_1d57.dec_label_pc_1d65_crit_edge, label %dec_label_pc_1d08, !insn.addr !270

dec_label_pc_1d57.dec_label_pc_1d65_crit_edge:    ; preds = %dec_label_pc_1d48
  %phitmp = zext i32 %35 to i64
  store i64 %phitmp, i64* %stack_var_-224.0.lcssa.reg2mem
  br label %dec_label_pc_1d65

dec_label_pc_1d65:                                ; preds = %dec_label_pc_1d57.dec_label_pc_1d65_crit_edge, %dec_label_pc_1cb3
  %stack_var_-224.0.lcssa.reload = load i64, i64* %stack_var_-224.0.lcssa.reg2mem
  %37 = call i64 @__readfsqword(i64 40), !insn.addr !283
  %38 = icmp eq i64 %21, %37, !insn.addr !283
  store i64 %stack_var_-224.0.lcssa.reload, i64* %rax.1.reg2mem, !insn.addr !284
  br i1 %38, label %dec_label_pc_1d82, label %dec_label_pc_1d7d, !insn.addr !284

dec_label_pc_1d7d:                                ; preds = %dec_label_pc_1d65
  call void @__stack_chk_fail(), !insn.addr !285
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !285
  br label %dec_label_pc_1d82, !insn.addr !285

dec_label_pc_1d82:                                ; preds = %dec_label_pc_1d7d, %dec_label_pc_1d65
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !286

; uselistorder directives
  uselistorder i32 %35, { 1, 0 }
  uselistorder i32 %stack_var_-216.15.reload, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-208.14.reload, { 1, 0 }
  uselistorder i32* %storemerge6.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-216.15.reg2mem, { 1, 0, 2 }
  uselistorder i32** %stack_var_-208.14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-224.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-224.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 2, 0, 3, 1 }
}

define i64 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1d84:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_varargs(i64 4, i64 10, i64 20, i64 30, i64 40, i64 %1), !insn.addr !287
  ret i64 %2, !insn.addr !288
}

define i64 @param_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1db2:
  %0 = add i64 %arg2, 10, !insn.addr !289
  %1 = and i64 %0, 4294967295, !insn.addr !289
  ret i64 %1, !insn.addr !290
}

define i64 @callback_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dd5:
  %0 = mul i64 %arg1, 2, !insn.addr !291
  %1 = and i64 %0, 4294967294, !insn.addr !291
  ret i64 %1, !insn.addr !292
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1de7:
  %0 = call i64 @param_func_ptr(i64 7637, i64 5), !insn.addr !293
  ret i64 %0, !insn.addr !294
}

define i64 @param_double_ptr(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e05:
  %storemerge.reg2mem = alloca i64, !insn.addr !295
  %0 = icmp eq i64* %arg1, null, !insn.addr !296
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !297
  br i1 %0, label %dec_label_pc_1e4a, label %dec_label_pc_1e2e, !insn.addr !297

dec_label_pc_1e2e:                                ; preds = %dec_label_pc_1e05
  store i64 0, i64* %arg1, align 8, !insn.addr !298
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !299
  br label %dec_label_pc_1e4a, !insn.addr !299

dec_label_pc_1e4a:                                ; preds = %dec_label_pc_1e05, %dec_label_pc_1e2e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !300

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e4a, { 1, 0 }
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1e4c:
  %rax.0.reg2mem = alloca i64, !insn.addr !301
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !302
  store i32 10, i32* %stack_var_-32, align 4, !insn.addr !303
  %1 = ptrtoint i32* %stack_var_-32 to i64, !insn.addr !304
  store i64 %1, i64* %stack_var_-24, align 8, !insn.addr !304
  %2 = call i64 @param_double_ptr(i64* nonnull %stack_var_-24, i64 20), !insn.addr !305
  %3 = load i64, i64* %stack_var_-24, align 8, !insn.addr !306
  %4 = icmp eq i64 %3, 0, !insn.addr !307
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !308
  %6 = zext i1 %4 to i32, !insn.addr !309
  %7 = add i32 %5, %6, !insn.addr !309
  %8 = zext i32 %7 to i64, !insn.addr !309
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !310
  %10 = icmp eq i64 %0, %9, !insn.addr !310
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !311
  br i1 %10, label %dec_label_pc_1eb0, label %dec_label_pc_1eab, !insn.addr !311

dec_label_pc_1eab:                                ; preds = %dec_label_pc_1e4c
  call void @__stack_chk_fail(), !insn.addr !312
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !312
  br label %dec_label_pc_1eb0, !insn.addr !312

dec_label_pc_1eb0:                                ; preds = %dec_label_pc_1eab, %dec_label_pc_1e4c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !313

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0, 2 }
}

define i64 @param_complex_cast(i32* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1eb2:
  %0 = alloca i64
  %rax.0.shrunk.reg2mem = alloca i32, !insn.addr !314
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !315
  %3 = icmp eq i32 %2, 0, !insn.addr !316
  %4 = icmp eq i1 %3, false, !insn.addr !317
  %5 = trunc i64 %1 to i32
  store i32 %5, i32* %rax.0.shrunk.reg2mem, !insn.addr !317
  br i1 %4, label %dec_label_pc_1ee7, label %dec_label_pc_1f0b, !insn.addr !317

dec_label_pc_1ee7:                                ; preds = %dec_label_pc_1eb2
  %6 = icmp eq i32 %2, 1, !insn.addr !318
  %7 = icmp eq i1 %6, false, !insn.addr !319
  store i32 -1, i32* %rax.0.shrunk.reg2mem, !insn.addr !319
  br i1 %7, label %dec_label_pc_1f0b, label %dec_label_pc_1eed, !insn.addr !319

dec_label_pc_1eed:                                ; preds = %dec_label_pc_1ee7
  %8 = ptrtoint i32* %arg1 to i64, !insn.addr !320
  %9 = add i64 %8, 4, !insn.addr !321
  %10 = inttoptr i64 %9 to i32*, !insn.addr !321
  %11 = load i32, i32* %10, align 4, !insn.addr !321
  %12 = add i32 %11, %5, !insn.addr !322
  store i32 %12, i32* %rax.0.shrunk.reg2mem, !insn.addr !323
  br label %dec_label_pc_1f0b, !insn.addr !323

dec_label_pc_1f0b:                                ; preds = %dec_label_pc_1eb2, %dec_label_pc_1ee7, %dec_label_pc_1eed
  %rax.0.shrunk.reload = load i32, i32* %rax.0.shrunk.reg2mem
  %rax.0 = zext i32 %rax.0.shrunk.reload to i64
  ret i64 %rax.0, !insn.addr !324

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %rax.0.shrunk.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1f0b, { 2, 1, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1f0d:
  %rax.0.reg2mem = alloca i64, !insn.addr !325
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !326
  store i32 305419896, i32* %stack_var_-28, align 4, !insn.addr !327
  store i32 100, i32* %stack_var_-24, align 4, !insn.addr !328
  %1 = call i64 @param_complex_cast(i32* nonnull %stack_var_-24, i64 1), !insn.addr !329
  %2 = call i64 @param_complex_cast(i32* nonnull %stack_var_-28, i64 0), !insn.addr !330
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !331
  %4 = icmp eq i64 %0, %3, !insn.addr !331
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !332
  br i1 %4, label %dec_label_pc_1f73, label %dec_label_pc_1f6e, !insn.addr !332

dec_label_pc_1f6e:                                ; preds = %dec_label_pc_1f0d
  call void @__stack_chk_fail(), !insn.addr !333
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !333
  br label %dec_label_pc_1f73, !insn.addr !333

dec_label_pc_1f73:                                ; preds = %dec_label_pc_1f6e, %dec_label_pc_1f0d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !334

; uselistorder directives
  uselistorder i64 (i32*, i64)* @param_complex_cast, { 1, 0 }
}

define i64 @param_struct_byval(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f75:
  %0 = alloca i32
  %1 = trunc i64 %arg1 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, %1, !insn.addr !335
  %4 = zext i32 %3 to i64, !insn.addr !335
  ret i64 %4, !insn.addr !336
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1f87:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !337
  %indvars.iv.reg2mem = alloca i64, !insn.addr !337
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !338
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !339
  %4 = add i64 %2, -80, !insn.addr !340
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1fab

dec_label_pc_1fab:                                ; preds = %dec_label_pc_1fab, %dec_label_pc_1f87
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !340
  %6 = add i64 %4, %5, !insn.addr !340
  %7 = inttoptr i64 %6 to i32*, !insn.addr !340
  %8 = trunc i64 %indvars.iv.reload to i32
  store i32 %8, i32* %7, align 4, !insn.addr !340
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !341
  br i1 %exitcond, label %dec_label_pc_1fc1, label %dec_label_pc_1fab, !insn.addr !341

dec_label_pc_1fc1:                                ; preds = %dec_label_pc_1fab
  %9 = call i64 @param_struct_byval(i64 %1), !insn.addr !342
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !343
  %11 = icmp eq i64 %3, %10, !insn.addr !343
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !344
  br i1 %11, label %dec_label_pc_1ff6, label %dec_label_pc_1ff1, !insn.addr !344

dec_label_pc_1ff1:                                ; preds = %dec_label_pc_1fc1
  call void @__stack_chk_fail(), !insn.addr !345
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !345
  br label %dec_label_pc_1ff6, !insn.addr !345

dec_label_pc_1ff6:                                ; preds = %dec_label_pc_1ff1, %dec_label_pc_1fc1
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !346

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i64 @param_order_dep(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ff8:
  %0 = add i64 %arg2, %arg1, !insn.addr !347
  %1 = and i64 %0, 4294967295, !insn.addr !347
  ret i64 %1, !insn.addr !348
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_2010:
  %0 = call i64 @param_order_dep(i64 2, i64 2), !insn.addr !349
  ret i64 %0, !insn.addr !350
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_203c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_31e8 to i8*)), !insn.addr !351
  %1 = call i64 @call_by_value_int(), !insn.addr !352
  %2 = and i64 %1, 4294967295, !insn.addr !353
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3209, i64 0, i64 0), i64 %2), !insn.addr !354
  %4 = call i64 @call_by_value_ptr(), !insn.addr !355
  %5 = and i64 %4, 4294967295, !insn.addr !356
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_321a, i64 0, i64 0), i64 %5), !insn.addr !357
  %7 = call i64 @call_array_decay(), !insn.addr !358
  %8 = and i64 %7, 4294967295, !insn.addr !359
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_322b, i64 0, i64 0), i64 %8), !insn.addr !360
  %10 = call i64 @call_string_param(), !insn.addr !361
  %11 = and i64 %10, 4294967295, !insn.addr !362
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_323c, i64 0, i64 0), i64 %11), !insn.addr !363
  %13 = call i64 @call_ptr_array(), !insn.addr !364
  %14 = and i64 %13, 4294967295, !insn.addr !365
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324d, i64 0, i64 0), i64 %14), !insn.addr !366
  %16 = call i64 @call_varargs_param(), !insn.addr !367
  %17 = and i64 %16, 4294967295, !insn.addr !368
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325e, i64 0, i64 0), i64 %17), !insn.addr !369
  %19 = call i64 @call_func_ptr_param(), !insn.addr !370
  %20 = and i64 %19, 4294967295, !insn.addr !371
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326f, i64 0, i64 0), i64 %20), !insn.addr !372
  %22 = call i64 @call_double_ptr(), !insn.addr !373
  %23 = and i64 %22, 4294967295, !insn.addr !374
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3280, i64 0, i64 0), i64 %23), !insn.addr !375
  %25 = call i64 @call_complex_cast(), !insn.addr !376
  %26 = and i64 %25, 4294967295, !insn.addr !377
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3291, i64 0, i64 0), i64 %26), !insn.addr !378
  %28 = call i64 @call_struct_byval(), !insn.addr !379
  %29 = and i64 %28, 4294967295, !insn.addr !380
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a2, i64 0, i64 0), i64 %29), !insn.addr !381
  %31 = call i64 @call_order_dep(), !insn.addr !382
  %32 = and i64 %31, 4294967295, !insn.addr !383
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32b3, i64 0, i64 0), i64 %32), !insn.addr !384
  %34 = sext i32 %33 to i64, !insn.addr !384
  ret i64 %34, !insn.addr !385
}

define i64 @ret_basic_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_21b6:
  %0 = mul i64 %arg1, 2, !insn.addr !386
  %1 = and i64 %0, 4294967294, !insn.addr !386
  ret i64 %1, !insn.addr !387
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_21c8:
  %0 = call i64 @ret_basic_type(i64 21), !insn.addr !388
  %1 = and i64 %0, 4294967295, !insn.addr !389
  ret i64 %1, !insn.addr !390
}

define i64 @ret_pointer(i32* %arg1) local_unnamed_addr {
dec_label_pc_21ed:
  %0 = ptrtoint i32* %arg1 to i64
  %1 = add i64 %0, 4, !insn.addr !391
  ret i64 %1, !insn.addr !392
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_2203:
  %rax.0.reg2mem = alloca i64, !insn.addr !393
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !394
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !395
  %1 = call i64 @ret_pointer(i32* nonnull %stack_var_-28), !insn.addr !396
  %2 = inttoptr i64 %1 to i32*, !insn.addr !397
  %3 = load i32, i32* %2, align 4, !insn.addr !398
  %4 = zext i32 %3 to i64, !insn.addr !398
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !399
  %6 = icmp eq i64 %0, %5, !insn.addr !399
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !400
  br i1 %6, label %dec_label_pc_225d, label %dec_label_pc_2258, !insn.addr !400

dec_label_pc_2258:                                ; preds = %dec_label_pc_2203
  call void @__stack_chk_fail(), !insn.addr !401
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !401
  br label %dec_label_pc_225d, !insn.addr !401

dec_label_pc_225d:                                ; preds = %dec_label_pc_2258, %dec_label_pc_2203
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !402
}

define i64 @ret_small_struct(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_225f:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !403
  ret i64 %0, !insn.addr !404
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_227f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i64 @ret_small_struct(i64 3, i64 4), !insn.addr !405
  %3 = trunc i64 %2 to i32, !insn.addr !406
  %4 = add i32 %1, %3, !insn.addr !407
  %5 = zext i32 %4 to i64, !insn.addr !407
  ret i64 %5, !insn.addr !408
}

define i64 @ret_large_struct(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_22a8:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !409
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !410
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !411
  %2 = trunc i64 %arg2 to i32, !insn.addr !412
  %3 = add i64 %0, -96, !insn.addr !413
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_22d4

dec_label_pc_22d4:                                ; preds = %dec_label_pc_22d4, %dec_label_pc_22a8
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = trunc i64 %indvars.iv.reload to i32
  %5 = add i32 %4, %2, !insn.addr !414
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !413
  %7 = add i64 %3, %6, !insn.addr !413
  %8 = inttoptr i64 %7 to i32*, !insn.addr !413
  store i32 %5, i32* %8, align 4, !insn.addr !413
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !415
  br i1 %exitcond, label %dec_label_pc_22ef, label %dec_label_pc_22d4, !insn.addr !415

dec_label_pc_22ef:                                ; preds = %dec_label_pc_22d4
  %9 = ptrtoint i64* %arg1 to i64
  %10 = add i64 %9, 8, !insn.addr !416
  %11 = inttoptr i64 %10 to i64*, !insn.addr !416
  %12 = add i64 %9, 16, !insn.addr !417
  %13 = inttoptr i64 %12 to i64*, !insn.addr !417
  %14 = add i64 %9, 24, !insn.addr !418
  %15 = inttoptr i64 %14 to i64*, !insn.addr !418
  %16 = add i64 %9, 32, !insn.addr !419
  %17 = inttoptr i64 %16 to i64*, !insn.addr !419
  %18 = add i64 %9, 40, !insn.addr !420
  %19 = inttoptr i64 %18 to i64*, !insn.addr !420
  %20 = add i64 %9, 48, !insn.addr !421
  %21 = inttoptr i64 %20 to i64*, !insn.addr !421
  %22 = add i64 %9, 56, !insn.addr !422
  %23 = inttoptr i64 %22 to i64*, !insn.addr !422
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !423
  %25 = icmp eq i64 %1, %24, !insn.addr !423
  br i1 %25, label %dec_label_pc_2346, label %dec_label_pc_2341, !insn.addr !424

dec_label_pc_2341:                                ; preds = %dec_label_pc_22ef
  call void @__stack_chk_fail(), !insn.addr !425
  br label %dec_label_pc_2346, !insn.addr !425

dec_label_pc_2346:                                ; preds = %dec_label_pc_2341, %dec_label_pc_22ef
  ret i64 %9, !insn.addr !426

; uselistorder directives
  uselistorder i64 %9, { 0, 1, 3, 2, 4, 5, 6, 7 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 56, { 1, 0 }
  uselistorder i64 32, { 3, 0, 1, 2 }
  uselistorder i64 8, { 5, 6, 0, 3, 1, 4, 2, 7 }
  uselistorder i64 16, { 4, 0, 1, 2, 3, 5 }
  uselistorder i64 4, { 0, 2, 11, 1, 12, 3, 4, 5, 13, 6, 7, 8, 9, 10 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_2350:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !427
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !428
  %3 = bitcast i32* %stack_var_-88 to i64*, !insn.addr !429
  %4 = call i64 @ret_large_struct(i64* nonnull %3, i64 100), !insn.addr !429
  %5 = load i32, i32* %stack_var_-88, align 4, !insn.addr !430
  %6 = add i32 %5, %1, !insn.addr !431
  %7 = zext i32 %6 to i64, !insn.addr !431
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !432
  %9 = icmp eq i64 %2, %8, !insn.addr !432
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !433
  br i1 %9, label %dec_label_pc_2398, label %dec_label_pc_2393, !insn.addr !433

dec_label_pc_2393:                                ; preds = %dec_label_pc_2350
  call void @__stack_chk_fail(), !insn.addr !434
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !434
  br label %dec_label_pc_2398, !insn.addr !434

dec_label_pc_2398:                                ; preds = %dec_label_pc_2393, %dec_label_pc_2350
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !435
}

define i64 @func_a(i64 %arg1) local_unnamed_addr {
dec_label_pc_239a:
  %0 = add i64 %arg1, 10, !insn.addr !436
  %1 = and i64 %0, 4294967295, !insn.addr !436
  ret i64 %1, !insn.addr !437
}

define i64 @func_b(i64 %arg1) local_unnamed_addr {
dec_label_pc_23ad:
  %0 = mul i64 %arg1, 2, !insn.addr !438
  %1 = and i64 %0, 4294967294, !insn.addr !438
  ret i64 %1, !insn.addr !439
}

define i64 @ret_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_23bf:
  %0 = trunc i64 %arg1 to i32, !insn.addr !440
  %1 = icmp eq i32 %0, 0, !insn.addr !441
  %. = select i1 %1, i64 9114, i64 9133
  ret i64 %., !insn.addr !442
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_23e2:
  %0 = call i64 @ret_func_ptr(i64 1), !insn.addr !443
  ret i64 %0, !insn.addr !444
}

define i64 @ret_opaque_handle(i64 %arg1) local_unnamed_addr {
dec_label_pc_2409:
  %0 = trunc i64 %arg1 to i32, !insn.addr !445
  %1 = icmp eq i32 %0, 0, !insn.addr !446
  %2 = icmp eq i1 %1, false, !insn.addr !447
  %. = select i1 %2, i64 ptrtoint (i64* @global_var_6018 to i64), i64 ptrtoint (i64* @global_var_6010 to i64)
  ret i64 %., !insn.addr !448
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_242c:
  %0 = call i64 @ret_opaque_handle(i64 0), !insn.addr !449
  %1 = inttoptr i64 %0 to i32*, !insn.addr !450
  %2 = load i32, i32* %1, align 4, !insn.addr !450
  %3 = zext i32 %2 to i64, !insn.addr !450
  ret i64 %3, !insn.addr !451
}

define i64 @ret_complex_expr(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_244e:
  %0 = trunc i64 %arg1 to i32, !insn.addr !452
  %1 = trunc i64 %arg2 to i32, !insn.addr !453
  %2 = icmp sgt i32 %0, %1, !insn.addr !454
  %3 = add i64 %arg3, 10
  %4 = and i64 %3, 4294967295
  %5 = mul i64 %arg3, 2
  %6 = and i64 %5, 4294967294
  %storemerge = select i1 %2, i64 %6, i64 %4
  ret i64 %storemerge, !insn.addr !455
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_2476:
  %0 = call i64 @ret_complex_expr(i64 5, i64 3, i64 10), !insn.addr !456
  %1 = call i64 @ret_complex_expr(i64 3, i64 5, i64 10), !insn.addr !457
  %2 = add i64 %1, %0, !insn.addr !458
  %3 = and i64 %2, 4294967295, !insn.addr !458
  ret i64 %3, !insn.addr !459

; uselistorder directives
  uselistorder i64 (i64, i64, i64)* @ret_complex_expr, { 1, 0 }
  uselistorder i64 5, { 2, 3, 4, 0, 1, 5, 7, 6, 8, 9, 10, 11, 12, 13 }
}

define i64 @ret_multi_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_24ba:
  %rax.0.reg2mem = alloca i64, !insn.addr !460
  %0 = trunc i64 %arg1 to i32, !insn.addr !461
  %1 = icmp eq i32 %0, 2, !insn.addr !462
  store i64 30, i64* %rax.0.reg2mem, !insn.addr !463
  br i1 %1, label %dec_label_pc_24f9, label %dec_label_pc_24cb, !insn.addr !463

dec_label_pc_24cb:                                ; preds = %dec_label_pc_24ba
  %2 = icmp sgt i32 %0, 2, !insn.addr !464
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !464
  br i1 %2, label %dec_label_pc_24f9, label %dec_label_pc_24d1, !insn.addr !464

dec_label_pc_24d1:                                ; preds = %dec_label_pc_24cb
  %switch.selectcmp = icmp eq i32 %0, 1
  %switch.select = select i1 %switch.selectcmp, i64 20, i64 4294967295
  %switch.selectcmp2 = icmp eq i32 %0, 0
  %switch.select3 = select i1 %switch.selectcmp2, i64 10, i64 %switch.select
  store i64 %switch.select3, i64* %rax.0.reg2mem
  br label %dec_label_pc_24f9

dec_label_pc_24f9:                                ; preds = %dec_label_pc_24cb, %dec_label_pc_24d1, %dec_label_pc_24ba
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !465

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 10, { 0, 4, 5, 1, 2, 3, 6, 7, 8, 9, 10, 11 }
  uselistorder i32 0, { 9, 10, 11, 12, 0, 1, 6, 2, 7, 3, 4, 5, 8 }
  uselistorder i32 2, { 2, 1, 0 }
  uselistorder label %dec_label_pc_24f9, { 1, 0, 2 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_24fb:
  %0 = call i64 @ret_multi_branch(i64 0), !insn.addr !466
  %1 = call i64 @ret_multi_branch(i64 1), !insn.addr !467
  %2 = add i64 %1, %0, !insn.addr !468
  %3 = call i64 @ret_multi_branch(i64 2), !insn.addr !469
  %4 = add i64 %2, %3, !insn.addr !470
  %5 = and i64 %4, 4294967295, !insn.addr !471
  ret i64 %5, !insn.addr !472

; uselistorder directives
  uselistorder i64 4294967295, { 5, 4, 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 1, 22, 3, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 2, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
  uselistorder i64 2, { 7, 0, 1, 2, 6, 5, 3, 4, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i64 1, { 7, 8, 2, 3, 9, 0, 4, 18, 1, 5, 10, 11, 6, 12, 13, 14, 15, 16, 17 }
  uselistorder i64 (i64)* @ret_multi_branch, { 2, 1, 0 }
}

define i64 @ret_void(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_253a:
  %0 = ptrtoint i64* %arg2 to i64
  %1 = trunc i64 %arg1 to i32, !insn.addr !473
  %2 = mul i32 %1, 3, !insn.addr !474
  %3 = bitcast i64* %arg2 to i32*, !insn.addr !475
  store i32 %2, i32* %3, align 4, !insn.addr !475
  ret i64 %0, !insn.addr !476
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_255b:
  %rax.0.reg2mem = alloca i64, !insn.addr !477
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !478
  %1 = bitcast i32* %stack_var_-20 to i64*, !insn.addr !479
  %2 = call i64 @ret_void(i64 7, i64* nonnull %1), !insn.addr !479
  %3 = load i32, i32* %stack_var_-20, align 4, !insn.addr !480
  %4 = zext i32 %3 to i64, !insn.addr !480
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !481
  %6 = icmp eq i64 %0, %5, !insn.addr !481
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !482
  br i1 %6, label %dec_label_pc_259e, label %dec_label_pc_2599, !insn.addr !482

dec_label_pc_2599:                                ; preds = %dec_label_pc_255b
  call void @__stack_chk_fail(), !insn.addr !483
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !483
  br label %dec_label_pc_259e, !insn.addr !483

dec_label_pc_259e:                                ; preds = %dec_label_pc_2599, %dec_label_pc_255b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !484

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
  uselistorder i64 7, { 1, 0, 2 }
  uselistorder i64 40, { 2, 3, 4, 5, 6, 28, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 1 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_25a0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_32c4 to i8*)), !insn.addr !485
  %1 = call i64 @call_ret_basic(), !insn.addr !486
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32e2 to i8*)), !insn.addr !487
  %3 = call i64 @call_ret_pointer(), !insn.addr !488
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32fe to i8*)), !insn.addr !489
  %5 = call i64 @call_ret_small_struct(), !insn.addr !490
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_331a to i8*)), !insn.addr !491
  %7 = call i64 @call_ret_large_struct(), !insn.addr !492
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3335 to i8*)), !insn.addr !493
  %9 = call i64 @call_ret_func_ptr(), !insn.addr !494
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3352 to i8*)), !insn.addr !495
  %11 = call i64 @call_ret_opaque(), !insn.addr !496
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_336e to i8*)), !insn.addr !497
  %13 = call i64 @call_ret_complex_expr(), !insn.addr !498
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_338b to i8*)), !insn.addr !499
  %15 = call i64 @call_ret_multi_branch(), !insn.addr !500
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33a7 to i8*)), !insn.addr !501
  %17 = call i64 @call_ret_void(), !insn.addr !502
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33c3 to i8*)), !insn.addr !503
  %19 = sext i32 %18 to i64, !insn.addr !503
  ret i64 %19, !insn.addr !504

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_26da:
  %0 = call i64 @test_calling_conventions(), !insn.addr !505
  %1 = call i64 @test_parameter_passing(), !insn.addr !506
  %2 = call i64 @test_return_values(), !insn.addr !507
  ret i64 0, !insn.addr !508

; uselistorder directives
  uselistorder i64 0, { 11, 93, 94, 0, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 1, 95, 98, 99, 2, 71, 72, 4, 3, 97, 5, 6, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 7, 8, 100, 9, 101, 12, 10, 102, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 96 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2708:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !509

; uselistorder directives
  uselistorder i32 1, { 12, 60, 16, 58, 17, 61, 18, 15, 63, 19, 14, 64, 20, 65, 22, 21, 11, 13, 67, 66, 23, 59, 24, 10, 69, 68, 25, 26, 9, 80, 71, 70, 35, 34, 33, 32, 31, 30, 29, 28, 27, 8, 2, 62, 36, 39, 38, 37, 7, 72, 40, 73, 41, 6, 75, 74, 43, 42, 44, 5, 76, 46, 45, 47, 1, 81, 78, 77, 56, 55, 54, 53, 52, 51, 50, 49, 48, 4, 0, 3, 79, 57 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtsi2sd(i32) local_unnamed_addr

declare i128 @__asm_movapd(i128) local_unnamed_addr

declare i128 @__asm_addsd(i128, i64) local_unnamed_addr

declare i128 @__asm_cvtsi2sd.1(i64) local_unnamed_addr

declare i128 @__asm_addsd.2(i128, i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i128 @__asm_movq(i64) local_unnamed_addr

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
!11 = !{i64 4319}
!12 = !{i64 4325}
!13 = !{i64 4376}
!14 = !{i64 4440}
!15 = !{i64 4452}
!16 = !{i64 4459}
!17 = !{i64 4462}
!18 = !{i64 4473}
!19 = !{i64 4475}
!20 = !{i64 4482}
!21 = !{i64 4487}
!22 = !{i64 4492}
!23 = !{i64 4500}
!24 = !{i64 4504}
!25 = !{i64 4516}
!26 = !{i64 4541}
!27 = !{i64 4544}
!28 = !{i64 4563}
!29 = !{i64 4569}
!30 = !{i64 4587}
!31 = !{i64 4592}
!32 = !{i64 4611}
!33 = !{i64 4617}
!34 = !{i64 4641}
!35 = !{i64 4646}
!36 = !{i64 4649}
!37 = !{i64 4673}
!38 = !{i64 4679}
!39 = !{i64 4694}
!40 = !{i64 4725}
!41 = !{i64 4730}
!42 = !{i64 4735}
!43 = !{i64 4740}
!44 = !{i64 4743}
!45 = !{i64 4778}
!46 = !{i64 4784}
!47 = !{i64 4811}
!48 = !{i64 4816}
!49 = !{i64 4821}
!50 = !{i64 4824}
!51 = !{i64 4853}
!52 = !{i64 4859}
!53 = !{i64 4894}
!54 = !{i64 4899}
!55 = !{i64 4904}
!56 = !{i64 4909}
!57 = !{i64 4914}
!58 = !{i64 4917}
!59 = !{i64 4958}
!60 = !{i64 4964}
!61 = !{i64 4995}
!62 = !{i64 5000}
!63 = !{i64 5005}
!64 = !{i64 5010}
!65 = !{i64 5013}
!66 = !{i64 5048}
!67 = !{i64 5054}
!68 = !{i64 5081}
!69 = !{i64 5086}
!70 = !{i64 5091}
!71 = !{i64 5094}
!72 = !{i64 5123}
!73 = !{i64 5129}
!74 = !{i64 5159}
!75 = !{i64 5177}
!76 = !{i64 5182}
!77 = !{i64 5200}
!78 = !{i64 5205}
!79 = !{i64 5208}
!80 = !{i64 5212}
!81 = !{i64 5213}
!82 = !{i64 5269}
!83 = !{i64 5271}
!84 = !{i64 5273}
!85 = !{i64 5277}
!86 = !{i64 5281}
!87 = !{i64 5285}
!88 = !{i64 5289}
!89 = !{i64 5293}
!90 = !{i64 5297}
!91 = !{i64 5301}
!92 = !{i64 5305}
!93 = !{i64 5475}
!94 = !{i64 5481}
!95 = !{i64 5371}
!96 = !{i64 5399}
!97 = !{i64 5414}
!98 = !{i64 5416}
!99 = !{i64 5425}
!100 = !{i64 5434}
!101 = !{i64 5436}
!102 = !{i64 5443}
!103 = !{i64 5447}
!104 = !{i64 5454}
!105 = !{i64 5456}
!106 = !{i64 5462}
!107 = !{i64 5496}
!108 = !{i64 5505}
!109 = !{i64 5507}
!110 = !{i64 5513}
!111 = !{i64 5528}
!112 = !{i64 5563}
!113 = !{i64 5568}
!114 = !{i64 5573}
!115 = !{i64 5578}
!116 = !{i64 5583}
!117 = !{i64 5588}
!118 = !{i64 5593}
!119 = !{i64 5596}
!120 = !{i64 5597}
!121 = !{i64 5616}
!122 = !{i64 5625}
!123 = !{i64 5630}
!124 = !{i64 5639}
!125 = !{i64 5644}
!126 = !{i64 5654}
!127 = !{i64 5660}
!128 = !{i64 5662}
!129 = !{i64 5666}
!130 = !{i64 5670}
!131 = !{i64 5674}
!132 = !{i64 5679}
!133 = !{i64 5683}
!134 = !{i64 5689}
!135 = !{i64 5693}
!136 = !{i64 5698}
!137 = !{i64 5699}
!138 = !{i64 5704}
!139 = !{i64 5729}
!140 = !{i64 5734}
!141 = !{i64 5746}
!142 = !{i64 5753}
!143 = !{i64 5754}
!144 = !{i64 5766}
!145 = !{i64 5771}
!146 = !{i64 5786}
!147 = !{i64 5790}
!148 = !{i64 5793}
!149 = !{i64 5797}
!150 = !{i64 5798}
!151 = !{i64 5803}
!152 = !{i64 5813}
!153 = !{i64 5838}
!154 = !{i64 5848}
!155 = !{i64 5853}
!156 = !{i64 5870}
!157 = !{i64 5880}
!158 = !{i64 5885}
!159 = !{i64 5902}
!160 = !{i64 5912}
!161 = !{i64 5917}
!162 = !{i64 5934}
!163 = !{i64 5944}
!164 = !{i64 5949}
!165 = !{i64 5966}
!166 = !{i64 5976}
!167 = !{i64 5981}
!168 = !{i64 5998}
!169 = !{i64 6008}
!170 = !{i64 6013}
!171 = !{i64 6030}
!172 = !{i64 6040}
!173 = !{i64 6045}
!174 = !{i64 6062}
!175 = !{i64 6072}
!176 = !{i64 6077}
!177 = !{i64 6094}
!178 = !{i64 6104}
!179 = !{i64 6109}
!180 = !{i64 6126}
!181 = !{i64 6136}
!182 = !{i64 6141}
!183 = !{i64 6158}
!184 = !{i64 6200}
!185 = !{i64 6234}
!186 = !{i64 6239}
!187 = !{i64 6273}
!188 = !{i64 6314}
!189 = !{i64 6352}
!190 = !{i64 6390}
!191 = !{i64 6403}
!192 = !{i64 6437}
!193 = !{i64 6474}
!194 = !{i64 6496}
!195 = !{i64 6552}
!196 = !{i64 6590}
!197 = !{i64 6595}
!198 = !{i64 6625}
!199 = !{i64 6659}
!200 = !{i64 6669}
!201 = !{i64 6678}
!202 = !{i64 6680}
!203 = !{i64 6686}
!204 = !{i64 6698}
!205 = !{i64 6701}
!206 = !{i64 6705}
!207 = !{i64 6730}
!208 = !{i64 6744}
!209 = !{i64 6747}
!210 = !{i64 6766}
!211 = !{i64 6773}
!212 = !{i64 6795}
!213 = !{i64 6796}
!214 = !{i64 6808}
!215 = !{i64 6823}
!216 = !{i64 6834}
!217 = !{i64 6845}
!218 = !{i64 6850}
!219 = !{i64 6853}
!220 = !{i64 6859}
!221 = !{i64 6865}
!222 = !{i64 6874}
!223 = !{i64 6876}
!224 = !{i64 6882}
!225 = !{i64 6904}
!226 = !{i64 6905}
!227 = !{i64 6917}
!228 = !{i64 6932}
!229 = !{i64 6984}
!230 = !{i64 6993}
!231 = !{i64 7002}
!232 = !{i64 7004}
!233 = !{i64 7010}
!234 = !{i64 7037}
!235 = !{i64 7041}
!236 = !{i64 7047}
!237 = !{i64 7050}
!238 = !{i64 7069}
!239 = !{i64 7075}
!240 = !{i64 7076}
!241 = !{i64 7146}
!242 = !{i64 7149}
!243 = !{i64 7112}
!244 = !{i64 7124}
!245 = !{i64 7127}
!246 = !{i64 7130}
!247 = !{i64 7136}
!248 = !{i64 7155}
!249 = !{i64 7156}
!250 = !{i64 7168}
!251 = !{i64 7190}
!252 = !{i64 7228}
!253 = !{i64 7237}
!254 = !{i64 7246}
!255 = !{i64 7248}
!256 = !{i64 7254}
!257 = !{i64 7255}
!258 = !{i64 7311}
!259 = !{i64 7313}
!260 = !{i64 7315}
!261 = !{i64 7319}
!262 = !{i64 7323}
!263 = !{i64 7327}
!264 = !{i64 7331}
!265 = !{i64 7335}
!266 = !{i64 7339}
!267 = !{i64 7343}
!268 = !{i64 7347}
!269 = !{i64 7517}
!270 = !{i64 7523}
!271 = !{i64 7403}
!272 = !{i64 7441}
!273 = !{i64 7456}
!274 = !{i64 7458}
!275 = !{i64 7467}
!276 = !{i64 7476}
!277 = !{i64 7478}
!278 = !{i64 7485}
!279 = !{i64 7489}
!280 = !{i64 7496}
!281 = !{i64 7498}
!282 = !{i64 7504}
!283 = !{i64 7538}
!284 = !{i64 7547}
!285 = !{i64 7549}
!286 = !{i64 7555}
!287 = !{i64 7595}
!288 = !{i64 7601}
!289 = !{i64 7632}
!290 = !{i64 7636}
!291 = !{i64 7651}
!292 = !{i64 7654}
!293 = !{i64 7678}
!294 = !{i64 7684}
!295 = !{i64 7685}
!296 = !{i64 7700}
!297 = !{i64 7705}
!298 = !{i64 7742}
!299 = !{i64 7749}
!300 = !{i64 7755}
!301 = !{i64 7756}
!302 = !{i64 7768}
!303 = !{i64 7783}
!304 = !{i64 7794}
!305 = !{i64 7810}
!306 = !{i64 7818}
!307 = !{i64 7822}
!308 = !{i64 7831}
!309 = !{i64 7834}
!310 = !{i64 7840}
!311 = !{i64 7849}
!312 = !{i64 7851}
!313 = !{i64 7857}
!314 = !{i64 7858}
!315 = !{i64 7870}
!316 = !{i64 7873}
!317 = !{i64 7877}
!318 = !{i64 7911}
!319 = !{i64 7915}
!320 = !{i64 7917}
!321 = !{i64 7935}
!322 = !{i64 7938}
!323 = !{i64 7940}
!324 = !{i64 7948}
!325 = !{i64 7949}
!326 = !{i64 7961}
!327 = !{i64 7976}
!328 = !{i64 7983}
!329 = !{i64 8009}
!330 = !{i64 8026}
!331 = !{i64 8035}
!332 = !{i64 8044}
!333 = !{i64 8046}
!334 = !{i64 8052}
!335 = !{i64 8067}
!336 = !{i64 8070}
!337 = !{i64 8071}
!338 = !{i64 8076}
!339 = !{i64 8083}
!340 = !{i64 8115}
!341 = !{i64 8127}
!342 = !{i64 8153}
!343 = !{i64 8166}
!344 = !{i64 8175}
!345 = !{i64 8177}
!346 = !{i64 8183}
!347 = !{i64 8204}
!348 = !{i64 8207}
!349 = !{i64 8245}
!350 = !{i64 8251}
!351 = !{i64 8270}
!352 = !{i64 8280}
!353 = !{i64 8285}
!354 = !{i64 8302}
!355 = !{i64 8312}
!356 = !{i64 8317}
!357 = !{i64 8334}
!358 = !{i64 8344}
!359 = !{i64 8349}
!360 = !{i64 8366}
!361 = !{i64 8376}
!362 = !{i64 8381}
!363 = !{i64 8398}
!364 = !{i64 8408}
!365 = !{i64 8413}
!366 = !{i64 8430}
!367 = !{i64 8440}
!368 = !{i64 8445}
!369 = !{i64 8462}
!370 = !{i64 8472}
!371 = !{i64 8477}
!372 = !{i64 8494}
!373 = !{i64 8504}
!374 = !{i64 8509}
!375 = !{i64 8526}
!376 = !{i64 8536}
!377 = !{i64 8541}
!378 = !{i64 8558}
!379 = !{i64 8568}
!380 = !{i64 8573}
!381 = !{i64 8590}
!382 = !{i64 8600}
!383 = !{i64 8605}
!384 = !{i64 8622}
!385 = !{i64 8629}
!386 = !{i64 8644}
!387 = !{i64 8647}
!388 = !{i64 8672}
!389 = !{i64 8680}
!390 = !{i64 8684}
!391 = !{i64 8701}
!392 = !{i64 8706}
!393 = !{i64 8707}
!394 = !{i64 8719}
!395 = !{i64 8734}
!396 = !{i64 8762}
!397 = !{i64 8767}
!398 = !{i64 8775}
!399 = !{i64 8781}
!400 = !{i64 8790}
!401 = !{i64 8792}
!402 = !{i64 8798}
!403 = !{i64 8825}
!404 = !{i64 8830}
!405 = !{i64 8853}
!406 = !{i64 8862}
!407 = !{i64 8868}
!408 = !{i64 8871}
!409 = !{i64 8872}
!410 = !{i64 8877}
!411 = !{i64 8892}
!412 = !{i64 8916}
!413 = !{i64 8929}
!414 = !{i64 8922}
!415 = !{i64 8941}
!416 = !{i64 8958}
!417 = !{i64 8970}
!418 = !{i64 8974}
!419 = !{i64 8986}
!420 = !{i64 8990}
!421 = !{i64 9002}
!422 = !{i64 9006}
!423 = !{i64 9014}
!424 = !{i64 9023}
!425 = !{i64 9025}
!426 = !{i64 9039}
!427 = !{i64 9040}
!428 = !{i64 9052}
!429 = !{i64 9079}
!430 = !{i64 9084}
!431 = !{i64 9090}
!432 = !{i64 9096}
!433 = !{i64 9105}
!434 = !{i64 9107}
!435 = !{i64 9113}
!436 = !{i64 9128}
!437 = !{i64 9132}
!438 = !{i64 9147}
!439 = !{i64 9150}
!440 = !{i64 9159}
!441 = !{i64 9162}
!442 = !{i64 9185}
!443 = !{i64 9203}
!444 = !{i64 9224}
!445 = !{i64 9233}
!446 = !{i64 9236}
!447 = !{i64 9240}
!448 = !{i64 9259}
!449 = !{i64 9277}
!450 = !{i64 9290}
!451 = !{i64 9293}
!452 = !{i64 9302}
!453 = !{i64 9305}
!454 = !{i64 9317}
!455 = !{i64 9333}
!456 = !{i64 9361}
!457 = !{i64 9384}
!458 = !{i64 9398}
!459 = !{i64 9401}
!460 = !{i64 9402}
!461 = !{i64 9410}
!462 = !{i64 9413}
!463 = !{i64 9417}
!464 = !{i64 9423}
!465 = !{i64 9466}
!466 = !{i64 9491}
!467 = !{i64 9504}
!468 = !{i64 9509}
!469 = !{i64 9517}
!470 = !{i64 9522}
!471 = !{i64 9525}
!472 = !{i64 9529}
!473 = !{i64 9550}
!474 = !{i64 9552}
!475 = !{i64 9558}
!476 = !{i64 9562}
!477 = !{i64 9563}
!478 = !{i64 9575}
!479 = !{i64 9602}
!480 = !{i64 9607}
!481 = !{i64 9614}
!482 = !{i64 9623}
!483 = !{i64 9625}
!484 = !{i64 9631}
!485 = !{i64 9650}
!486 = !{i64 9660}
!487 = !{i64 9682}
!488 = !{i64 9692}
!489 = !{i64 9714}
!490 = !{i64 9724}
!491 = !{i64 9746}
!492 = !{i64 9756}
!493 = !{i64 9778}
!494 = !{i64 9788}
!495 = !{i64 9810}
!496 = !{i64 9820}
!497 = !{i64 9842}
!498 = !{i64 9852}
!499 = !{i64 9874}
!500 = !{i64 9884}
!501 = !{i64 9906}
!502 = !{i64 9916}
!503 = !{i64 9938}
!504 = !{i64 9945}
!505 = !{i64 9959}
!506 = !{i64 9969}
!507 = !{i64 9979}
!508 = !{i64 9990}
!509 = !{i64 10004}
