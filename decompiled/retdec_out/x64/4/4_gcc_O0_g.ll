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
@9 = internal constant [2 x i8] c"d\00"
@global_var_6010 = global i8* getelementptr inbounds ([2 x i8], [2 x i8]* @9, i64 0, i64 0)
@10 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_32c4 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_32e2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_32fe = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @12, i64 0, i64 0)
@13 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_331a = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_3335 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_3352 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @15, i64 0, i64 0)
@16 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_336e = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_338b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_33a7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)
@19 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_33c3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @19, i64 0, i64 0)

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

define i32 @cdecl_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_11a9:
  %0 = add i32 %b, %a, !insn.addr !26
  ret i32 %0, !insn.addr !27
}

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_11c1:
  %0 = call i32 @cdecl_func(i32 5, i32 10), !insn.addr !28
  ret i32 %0, !insn.addr !29
}

define i32 @stdcall_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_11da:
  %0 = mul i32 %b, %a, !insn.addr !30
  ret i32 %0, !insn.addr !31
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_11f1:
  %0 = call i32 @stdcall_func(i32 5, i32 10), !insn.addr !32
  ret i32 %0, !insn.addr !33
}

define i32 @fastcall_func(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_120a:
  %0 = add i32 %b, %a, !insn.addr !34
  %1 = add i32 %0, %c, !insn.addr !35
  ret i32 %1, !insn.addr !36
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_122a:
  %0 = call i32 @fastcall_func(i32 1, i32 2, i32 3), !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_1248:
  ret i32 15, !insn.addr !39
}

define i32 @arm_aapcs_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1257:
  %0 = add i32 %b, %a, !insn.addr !40
  %1 = add i32 %0, %c, !insn.addr !41
  %2 = add i32 %1, %d, !insn.addr !42
  %3 = add i32 %2, %e, !insn.addr !43
  ret i32 %3, !insn.addr !44
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1288:
  %0 = call i32 @arm_aapcs_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !45
  ret i32 %0, !insn.addr !46
}

define i32 @mips_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_12b1:
  %0 = add i32 %b, %a, !insn.addr !47
  %1 = add i32 %0, %c, !insn.addr !48
  %2 = add i32 %1, %d, !insn.addr !49
  ret i32 %2, !insn.addr !50
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_12d9:
  %0 = call i32 @mips_func(i32 10, i32 20, i32 30, i32 40), !insn.addr !51
  ret i32 %0, !insn.addr !52
}

define i32 @amd64_sysv_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f) local_unnamed_addr {
dec_label_pc_12fc:
  %0 = add i32 %b, %a, !insn.addr !53
  %1 = add i32 %0, %c, !insn.addr !54
  %2 = add i32 %1, %d, !insn.addr !55
  %3 = add i32 %2, %e, !insn.addr !56
  %4 = add i32 %3, %f, !insn.addr !57
  ret i32 %4, !insn.addr !58
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1336:
  %0 = call i32 @amd64_sysv_func(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6), !insn.addr !59
  ret i32 %0, !insn.addr !60
}

define i32 @ms_x64_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1365:
  %0 = add i32 %b, %a, !insn.addr !61
  %1 = add i32 %0, %c, !insn.addr !62
  %2 = add i32 %1, %d, !insn.addr !63
  %3 = add i32 %2, %e, !insn.addr !64
  ret i32 %3, !insn.addr !65
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1396:
  %0 = call i32 @ms_x64_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !66
  ret i32 %0, !insn.addr !67
}

define i32 @vectorcall_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_13bf:
  %0 = add i32 %b, %a, !insn.addr !68
  %1 = add i32 %0, %c, !insn.addr !69
  %2 = add i32 %1, %d, !insn.addr !70
  ret i32 %2, !insn.addr !71
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_13e7:
  %0 = call i32 @vectorcall_func(i32 1, i32 2, i32 3, i32 4), !insn.addr !72
  ret i32 %0, !insn.addr !73
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_140a:
  %0 = call i32 @cdecl_func(i32 1, i32 2), !insn.addr !74
  %1 = call i32 @stdcall_func(i32 3, i32 4), !insn.addr !75
  %2 = add i32 %1, %0, !insn.addr !76
  %3 = call i32 @fastcall_func(i32 5, i32 6, i32 7), !insn.addr !77
  %4 = add i32 %2, %3, !insn.addr !78
  ret i32 %4, !insn.addr !79

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @fastcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @stdcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @cdecl_func, { 1, 0 }
}

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_145d:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i32, !insn.addr !80
  %args_-224.0.lcssa.reg2mem = alloca i32, !insn.addr !80
  %rax.0.reg2mem = alloca i64, !insn.addr !80
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !80
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !80
  %stack_var_-208.12.reg2mem = alloca i32*, !insn.addr !80
  %stack_var_-216.13.reg2mem = alloca i32, !insn.addr !80
  %args_-224.04.reg2mem = alloca i32, !insn.addr !80
  %storemerge5.reg2mem = alloca i32, !insn.addr !80
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
  %11 = trunc i64 %2 to i8, !insn.addr !81
  %12 = icmp eq i8 %11, 0, !insn.addr !81
  br i1 %12, label %dec_label_pc_14b9, label %dec_label_pc_1499, !insn.addr !82

dec_label_pc_1499:                                ; preds = %dec_label_pc_145d
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !83
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !84
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !85
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !86
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !87
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !88
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !89
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !90
  br label %dec_label_pc_14b9, !insn.addr !90

dec_label_pc_14b9:                                ; preds = %dec_label_pc_1499, %dec_label_pc_145d
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !91
  %22 = icmp sgt i32 %count, 0, !insn.addr !92
  store i32 0, i32* %args_-224.0.lcssa.reg2mem, !insn.addr !92
  br i1 %22, label %dec_label_pc_150e.lr.ph, label %dec_label_pc_156b, !insn.addr !92

dec_label_pc_150e.lr.ph:                          ; preds = %dec_label_pc_14b9
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !93
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32 0, i32* %storemerge5.reg2mem
  store i32 0, i32* %args_-224.04.reg2mem
  store i32 8, i32* %stack_var_-216.13.reg2mem
  store i32* %24, i32** %stack_var_-208.12.reg2mem
  br label %dec_label_pc_150e

dec_label_pc_150e:                                ; preds = %dec_label_pc_154e, %dec_label_pc_150e.lr.ph
  %stack_var_-208.12.reload = load i32*, i32** %stack_var_-208.12.reg2mem
  %stack_var_-216.13.reload = load i32, i32* %stack_var_-216.13.reg2mem
  %args_-224.04.reload = load i32, i32* %args_-224.04.reg2mem
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %25 = icmp ult i32 %stack_var_-216.13.reload, 48
  br i1 %25, label %dec_label_pc_1519, label %dec_label_pc_153c, !insn.addr !94

dec_label_pc_1519:                                ; preds = %dec_label_pc_150e
  %26 = zext i32 %stack_var_-216.13.reload to i64, !insn.addr !95
  %27 = add i64 %26, %23, !insn.addr !96
  %28 = add i32 %stack_var_-216.13.reload, 8, !insn.addr !97
  store i32* %stack_var_-208.12.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !98
  store i32 %28, i32* %stack_var_-216.0.reg2mem, !insn.addr !98
  store i64 %27, i64* %rax.0.reg2mem, !insn.addr !98
  br label %dec_label_pc_154e, !insn.addr !98

dec_label_pc_153c:                                ; preds = %dec_label_pc_150e
  %29 = ptrtoint i32* %stack_var_-208.12.reload to i64, !insn.addr !99
  %30 = add i64 %29, 8, !insn.addr !100
  %31 = inttoptr i64 %30 to i32*, !insn.addr !101
  store i32* %31, i32** %stack_var_-208.0.reg2mem, !insn.addr !101
  store i32 %stack_var_-216.13.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !101
  store i64 %29, i64* %rax.0.reg2mem, !insn.addr !101
  br label %dec_label_pc_154e, !insn.addr !101

dec_label_pc_154e:                                ; preds = %dec_label_pc_153c, %dec_label_pc_1519
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %32 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !102
  %33 = load i32, i32* %32, align 4, !insn.addr !102
  %34 = add i32 %33, %args_-224.04.reload, !insn.addr !103
  %35 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !104
  %exitcond = icmp eq i32 %35, %count
  store i32 %35, i32* %storemerge5.reg2mem, !insn.addr !92
  store i32 %34, i32* %args_-224.04.reg2mem, !insn.addr !92
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.13.reg2mem, !insn.addr !92
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.12.reg2mem, !insn.addr !92
  store i32 %34, i32* %args_-224.0.lcssa.reg2mem, !insn.addr !92
  br i1 %exitcond, label %dec_label_pc_156b, label %dec_label_pc_150e, !insn.addr !92

dec_label_pc_156b:                                ; preds = %dec_label_pc_154e, %dec_label_pc_14b9
  %args_-224.0.lcssa.reload = load i32, i32* %args_-224.0.lcssa.reg2mem
  %36 = call i64 @__readfsqword(i64 40), !insn.addr !105
  %37 = icmp eq i64 %21, %36, !insn.addr !105
  store i32 %args_-224.0.lcssa.reload, i32* %rax.1.reg2mem, !insn.addr !106
  br i1 %37, label %dec_label_pc_1588, label %dec_label_pc_1583, !insn.addr !106

dec_label_pc_1583:                                ; preds = %dec_label_pc_156b
  call void @__stack_chk_fail(), !insn.addr !107
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !107
  br label %dec_label_pc_1588, !insn.addr !107

dec_label_pc_1588:                                ; preds = %dec_label_pc_1583, %dec_label_pc_156b
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !108

; uselistorder directives
  uselistorder i32 %stack_var_-216.13.reload, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-208.12.reload, { 1, 0 }
  uselistorder i32* %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder i32* %args_-224.04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-216.13.reg2mem, { 1, 0, 2 }
  uselistorder i32** %stack_var_-208.12.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_158a:
  ret i32 42, !insn.addr !109
}

define i32 @func_many_args(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f, i32 %g, i32 %h) local_unnamed_addr {
dec_label_pc_1599:
  %0 = add i32 %b, %a, !insn.addr !110
  %1 = add i32 %0, %c, !insn.addr !111
  %2 = add i32 %1, %d, !insn.addr !112
  %3 = add i32 %2, %e, !insn.addr !113
  %4 = add i32 %3, %f, !insn.addr !114
  %5 = add i32 %4, %g, !insn.addr !115
  %6 = add i32 %5, %h, !insn.addr !116
  ret i32 %6, !insn.addr !117
}

define i32 @func_mixed_args(i32 %x, i8* %s, double %d, i64 %ll) local_unnamed_addr {
dec_label_pc_15dd:
  %storemerge.reg2mem = alloca i32, !insn.addr !118
  %0 = fptrunc double %d to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = call i64 @__asm_movsd(i128 %2), !insn.addr !119
  %4 = icmp eq i8* %s, null, !insn.addr !120
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !121
  br i1 %4, label %dec_label_pc_1613, label %dec_label_pc_1600, !insn.addr !121

dec_label_pc_1600:                                ; preds = %dec_label_pc_15dd
  %5 = call i32 @strlen(i8* nonnull %s), !insn.addr !122
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !123
  br label %dec_label_pc_1613, !insn.addr !123

dec_label_pc_1613:                                ; preds = %dec_label_pc_15dd, %dec_label_pc_1600
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %6 = add i32 %storemerge.reload, %x, !insn.addr !124
  %7 = call i128 @__asm_pxor(i128 %2, i128 %2), !insn.addr !125
  %8 = call i128 @__asm_cvtsi2sd(i32 %6), !insn.addr !126
  %9 = call i128 @__asm_movapd(i128 %8), !insn.addr !127
  %10 = call i128 @__asm_addsd(i128 %9, i64 %3), !insn.addr !128
  %11 = call i128 @__asm_pxor(i128 %8, i128 %8), !insn.addr !129
  %12 = call i128 @__asm_cvtsi2sd.1(i64 %ll), !insn.addr !130
  %13 = call i128 @__asm_addsd.2(i128 %12, i128 %10), !insn.addr !131
  %14 = call i32 @__asm_cvttsd2si(i128 %13), !insn.addr !132
  ret i32 %14, !insn.addr !133

; uselistorder directives
  uselistorder i128 %8, { 2, 1, 0 }
  uselistorder i128 %2, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1613, { 1, 0 }
}

define i32 @func_struct_byval(i64 %s) local_unnamed_addr {
dec_label_pc_1643:
  %stack_var_-16.02.reg2mem = alloca i32, !insn.addr !134
  %indvars.iv.reg2mem = alloca i64, !insn.addr !134
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !135
  %1 = add i64 %0, 16, !insn.addr !136
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-16.02.reg2mem
  br label %dec_label_pc_165c

dec_label_pc_165c:                                ; preds = %dec_label_pc_165c, %dec_label_pc_1643
  %stack_var_-16.02.reload = load i32, i32* %stack_var_-16.02.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %2 = mul i64 %indvars.iv.reload, 8, !insn.addr !136
  %3 = add i64 %1, %2, !insn.addr !136
  %4 = inttoptr i64 %3 to i64*, !insn.addr !136
  %5 = load i64, i64* %4, align 8, !insn.addr !136
  %6 = trunc i64 %5 to i32
  %7 = add i32 %stack_var_-16.02.reload, %6, !insn.addr !137
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !138
  store i32 %7, i32* %stack_var_-16.02.reg2mem, !insn.addr !138
  br i1 %exitcond, label %dec_label_pc_1674, label %dec_label_pc_165c, !insn.addr !138

dec_label_pc_1674:                                ; preds = %dec_label_pc_165c
  ret i32 %7, !insn.addr !139

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.02.reg2mem, { 1, 0, 2 }
}

define i32 @func_struct_byptr(i32* %p) local_unnamed_addr {
dec_label_pc_167a:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !140
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %p, null, !insn.addr !141
  %3 = icmp eq i1 %2, false, !insn.addr !142
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !142
  br i1 %3, label %dec_label_pc_1694, label %dec_label_pc_16a4, !insn.addr !142

dec_label_pc_1694:                                ; preds = %dec_label_pc_167a
  %4 = trunc i64 %1 to i32
  %5 = ptrtoint i32* %p to i64, !insn.addr !143
  %6 = add i64 %5, 4, !insn.addr !144
  %7 = inttoptr i64 %6 to i32*, !insn.addr !144
  %8 = load i32, i32* %7, align 4, !insn.addr !144
  %9 = mul i32 %8, %4, !insn.addr !145
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !145
  br label %dec_label_pc_16a4, !insn.addr !145

dec_label_pc_16a4:                                ; preds = %dec_label_pc_167a, %dec_label_pc_1694
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !146

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16a4, { 1, 0 }
}

define void @test_calling_conventions() local_unnamed_addr {
dec_label_pc_16a6:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !147
  %large_-160 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !148
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !149
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_3008 to i8*)), !insn.addr !150
  %3 = call i32 @call_cdecl(), !insn.addr !151
  %4 = zext i32 %3 to i64, !insn.addr !152
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3029, i64 0, i64 0), i64 %4), !insn.addr !153
  %6 = call i32 @call_stdcall(), !insn.addr !154
  %7 = zext i32 %6 to i64, !insn.addr !155
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3039, i64 0, i64 0), i64 %7), !insn.addr !156
  %9 = call i32 @call_fastcall(), !insn.addr !157
  %10 = zext i32 %9 to i64, !insn.addr !158
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3049, i64 0, i64 0), i64 %10), !insn.addr !159
  %12 = call i32 @call_thiscall(), !insn.addr !160
  %13 = zext i32 %12 to i64, !insn.addr !161
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3059, i64 0, i64 0), i64 %13), !insn.addr !162
  %15 = call i32 @call_arm_aapcs(), !insn.addr !163
  %16 = zext i32 %15 to i64, !insn.addr !164
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3069, i64 0, i64 0), i64 %16), !insn.addr !165
  %18 = call i32 @call_mips(), !insn.addr !166
  %19 = zext i32 %18 to i64, !insn.addr !167
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3079, i64 0, i64 0), i64 %19), !insn.addr !168
  %21 = call i32 @call_amd64_sysv(), !insn.addr !169
  %22 = zext i32 %21 to i64, !insn.addr !170
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3089, i64 0, i64 0), i64 %22), !insn.addr !171
  %24 = call i32 @call_ms_x64(), !insn.addr !172
  %25 = zext i32 %24 to i64, !insn.addr !173
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_3099, i64 0, i64 0), i64 %25), !insn.addr !174
  %27 = call i32 @call_vectorcall(), !insn.addr !175
  %28 = zext i32 %27 to i64, !insn.addr !176
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_30a9, i64 0, i64 0), i64 %28), !insn.addr !177
  %30 = call i32 @mixed_conventions_test(), !insn.addr !178
  %31 = zext i32 %30 to i64, !insn.addr !179
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_30b9, i64 0, i64 0), i64 %31), !insn.addr !180
  %33 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !181
  %34 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30d0 to i8*)), !insn.addr !182
  %35 = call i32 @func_no_args(), !insn.addr !183
  %36 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30f8 to i8*)), !insn.addr !184
  %37 = call i32 @func_many_args(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8), !insn.addr !185
  %38 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3120 to i8*)), !insn.addr !186
  %39 = call i128 @__asm_movq(i64 4614253070214989087), !insn.addr !187
  %40 = trunc i128 %39 to i64, !insn.addr !188
  %41 = bitcast i64 %40 to double, !insn.addr !188
  %42 = call i32 @func_mixed_args(i32 10, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_3147, i64 0, i64 0), double %41, i64 100), !insn.addr !188
  %43 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3150 to i8*)), !insn.addr !189
  %44 = add i64 %0, -144, !insn.addr !190
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1936

dec_label_pc_1936:                                ; preds = %dec_label_pc_1936, %dec_label_pc_16a6
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %45 = mul i64 %indvars.iv.reload, 8, !insn.addr !190
  %46 = add i64 %44, %45, !insn.addr !190
  %47 = inttoptr i64 %46 to i64*, !insn.addr !190
  store i64 %indvars.iv.next, i64* %47, align 8, !insn.addr !190
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !191
  br i1 %exitcond, label %dec_label_pc_1962, label %dec_label_pc_1936, !insn.addr !191

dec_label_pc_1962:                                ; preds = %dec_label_pc_1936
  %48 = call i32 @func_struct_byval(i64 ptrtoint (i8** @global_var_3150 to i64)), !insn.addr !192
  %49 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3178 to i8*)), !insn.addr !193
  store i64 5, i64* %large_-160, align 8, !insn.addr !194
  %50 = bitcast i64* %large_-160 to i32*, !insn.addr !195
  %51 = call i32 @func_struct_byptr(i32* nonnull %50), !insn.addr !195
  %52 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_31a8 to i8*)), !insn.addr !196
  %53 = call i64 @__readfsqword(i64 40), !insn.addr !197
  %54 = icmp eq i64 %1, %53, !insn.addr !197
  br i1 %54, label %dec_label_pc_1a1d, label %dec_label_pc_1a18, !insn.addr !198

dec_label_pc_1a18:                                ; preds = %dec_label_pc_1962
  call void @__stack_chk_fail(), !insn.addr !199
  br label %dec_label_pc_1a1d, !insn.addr !199

dec_label_pc_1a1d:                                ; preds = %dec_label_pc_1a18, %dec_label_pc_1962
  ret void, !insn.addr !200

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i8** @global_var_3150, { 1, 0 }
}

define i32 @param_by_value_int(i32 %x) local_unnamed_addr {
dec_label_pc_1a1f:
  %0 = mul i32 %x, 2, !insn.addr !201
  ret i32 %0, !insn.addr !202
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1a32:
  %0 = call i32 @param_by_value_int(i32 5), !insn.addr !203
  %1 = add i32 %0, 5, !insn.addr !204
  ret i32 %1, !insn.addr !205
}

define i32 @param_by_value_ptr(i32* %p) local_unnamed_addr {
dec_label_pc_1a5c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !206
  store i32 %3, i32* %p, align 4, !insn.addr !207
  ret i32 1, !insn.addr !208
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1a8c:
  %rax.0.reg2mem = alloca i32, !insn.addr !209
  %ptr_-32 = alloca i32*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !210
  store i32* inttoptr (i32 5 to i32*), i32** %ptr_-32, align 8, !insn.addr !211
  %1 = bitcast i32** %ptr_-32 to i32*, !insn.addr !212
  %2 = call i32 @param_by_value_ptr(i32* nonnull %1), !insn.addr !212
  %3 = load i32*, i32** %ptr_-32, align 8, !insn.addr !213
  %4 = ptrtoint i32* %3 to i64
  %5 = trunc i64 %4 to i32, !insn.addr !213
  %6 = add i32 %2, %5, !insn.addr !214
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !215
  %8 = icmp eq i64 %0, %7, !insn.addr !215
  store i32 %6, i32* %rax.0.reg2mem, !insn.addr !216
  br i1 %8, label %dec_label_pc_1ae1, label %dec_label_pc_1adc, !insn.addr !216

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1a8c
  call void @__stack_chk_fail(), !insn.addr !217
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !217
  br label %dec_label_pc_1ae1, !insn.addr !217

dec_label_pc_1ae1:                                ; preds = %dec_label_pc_1adc, %dec_label_pc_1a8c
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !218

; uselistorder directives
  uselistorder i32** %ptr_-32, { 1, 0, 2 }
}

define i32 @param_array_decay(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1ae3:
  ret i32 8, !insn.addr !219
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_1af9:
  %rax.0.reg2mem = alloca i32, !insn.addr !220
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !221
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !222
  %1 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !223
  %2 = call i32 @param_array_decay(i32* nonnull %1, i32 10), !insn.addr !223
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !224
  %4 = icmp eq i64 %0, %3, !insn.addr !224
  store i32 %2, i32* %rax.0.reg2mem, !insn.addr !225
  br i1 %4, label %dec_label_pc_1b61, label %dec_label_pc_1b5c, !insn.addr !225

dec_label_pc_1b5c:                                ; preds = %dec_label_pc_1af9
  call void @__stack_chk_fail(), !insn.addr !226
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !226
  br label %dec_label_pc_1b61, !insn.addr !226

dec_label_pc_1b61:                                ; preds = %dec_label_pc_1b5c, %dec_label_pc_1af9
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !227
}

define i32 @param_string(i8* %str) local_unnamed_addr {
dec_label_pc_1b63:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8* %str to i64
  %3 = trunc i64 %1 to i32
  %4 = add i64 %2, 1, !insn.addr !228
  %5 = inttoptr i64 %4 to i8*, !insn.addr !229
  %6 = load i8, i8* %5, align 1, !insn.addr !229
  %7 = sext i8 %6 to i32, !insn.addr !230
  %sext = mul i32 %3, 16777216
  %8 = ashr exact i32 %sext, 24, !insn.addr !230
  %9 = add nsw i32 %8, %7, !insn.addr !230
  ret i32 %9, !insn.addr !231
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_1b8b:
  %0 = call i32 @param_string(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_31d5, i64 0, i64 0)), !insn.addr !232
  ret i32 %0, !insn.addr !233
}

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1ba4:
  %stack_var_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !234
  %stack_var_-16.01.reg2mem = alloca i32, !insn.addr !234
  %indvars.iv.reg2mem = alloca i64, !insn.addr !234
  %0 = icmp sgt i32 %n, 0, !insn.addr !235
  store i32 0, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !235
  br i1 %0, label %dec_label_pc_1bc3.lr.ph, label %dec_label_pc_1bef, !insn.addr !235

dec_label_pc_1bc3.lr.ph:                          ; preds = %dec_label_pc_1ba4
  %1 = ptrtoint i8** %arr to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !236
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-16.01.reg2mem
  br label %dec_label_pc_1bc3

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1bc3, %dec_label_pc_1bc3.lr.ph
  %stack_var_-16.01.reload = load i32, i32* %stack_var_-16.01.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 8, !insn.addr !237
  %4 = add nsw i64 %3, %2, !insn.addr !238
  %5 = inttoptr i64 %4 to i64*, !insn.addr !239
  %6 = load i64, i64* %5, align 8, !insn.addr !239
  %7 = inttoptr i64 %6 to i8*, !insn.addr !240
  %8 = load i8, i8* %7, align 1, !insn.addr !240
  %9 = sext i8 %8 to i32, !insn.addr !241
  %10 = add i32 %stack_var_-16.01.reload, %9, !insn.addr !241
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !235
  store i32 %10, i32* %stack_var_-16.01.reg2mem, !insn.addr !235
  store i32 %10, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !235
  br i1 %exitcond, label %dec_label_pc_1bef, label %dec_label_pc_1bc3, !insn.addr !235

dec_label_pc_1bef:                                ; preds = %dec_label_pc_1bc3, %dec_label_pc_1ba4
  %stack_var_-16.0.lcssa.reload = load i32, i32* %stack_var_-16.0.lcssa.reg2mem
  ret i32 %stack_var_-16.0.lcssa.reload, !insn.addr !242

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.01.reg2mem, { 1, 0, 2 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1bf4:
  %rax.0.reg2mem = alloca i32, !insn.addr !243
  %stack_var_-40 = alloca i8*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !244
  store i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_31db, i64 0, i64 0), i8** %stack_var_-40, align 8, !insn.addr !245
  %1 = call i32 @param_ptr_array(i8** nonnull %stack_var_-40, i32 3), !insn.addr !246
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !247
  %3 = icmp eq i64 %0, %2, !insn.addr !247
  store i32 %1, i32* %rax.0.reg2mem, !insn.addr !248
  br i1 %3, label %dec_label_pc_1c55, label %dec_label_pc_1c50, !insn.addr !248

dec_label_pc_1c50:                                ; preds = %dec_label_pc_1bf4
  call void @__stack_chk_fail(), !insn.addr !249
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !249
  br label %dec_label_pc_1c55, !insn.addr !249

dec_label_pc_1c55:                                ; preds = %dec_label_pc_1c50, %dec_label_pc_1bf4
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !250

; uselistorder directives
  uselistorder i8** %stack_var_-40, { 1, 0 }
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_1c57:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i32, !insn.addr !251
  %args_-224.0.lcssa.reg2mem = alloca i32, !insn.addr !251
  %rax.0.reg2mem = alloca i64, !insn.addr !251
  %stack_var_-216.0.reg2mem = alloca i32, !insn.addr !251
  %stack_var_-208.0.reg2mem = alloca i32*, !insn.addr !251
  %args_-224.02.reg2mem = alloca i32, !insn.addr !251
  %stack_var_-208.13.reg2mem = alloca i32*, !insn.addr !251
  %stack_var_-216.14.reg2mem = alloca i32, !insn.addr !251
  %storemerge5.reg2mem = alloca i32, !insn.addr !251
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
  %11 = trunc i64 %2 to i8, !insn.addr !252
  %12 = icmp eq i8 %11, 0, !insn.addr !252
  br i1 %12, label %dec_label_pc_1cb3, label %dec_label_pc_1c93, !insn.addr !253

dec_label_pc_1c93:                                ; preds = %dec_label_pc_1c57
  %13 = call i64 @__asm_movaps(i128 %10), !insn.addr !254
  %14 = call i64 @__asm_movaps(i128 %9), !insn.addr !255
  %15 = call i64 @__asm_movaps(i128 %8), !insn.addr !256
  %16 = call i64 @__asm_movaps(i128 %7), !insn.addr !257
  %17 = call i64 @__asm_movaps(i128 %6), !insn.addr !258
  %18 = call i64 @__asm_movaps(i128 %5), !insn.addr !259
  %19 = call i64 @__asm_movaps(i128 %4), !insn.addr !260
  %20 = call i64 @__asm_movaps(i128 %3), !insn.addr !261
  br label %dec_label_pc_1cb3, !insn.addr !261

dec_label_pc_1cb3:                                ; preds = %dec_label_pc_1c93, %dec_label_pc_1c57
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !262
  %22 = icmp sgt i32 %count, 0, !insn.addr !263
  store i32 0, i32* %args_-224.0.lcssa.reg2mem, !insn.addr !263
  br i1 %22, label %dec_label_pc_1d08.lr.ph, label %dec_label_pc_1d65, !insn.addr !263

dec_label_pc_1d08.lr.ph:                          ; preds = %dec_label_pc_1cb3
  %23 = ptrtoint i64* %stack_var_-184 to i64, !insn.addr !264
  %24 = bitcast i64* %stack_var_8 to i32*
  store i32 0, i32* %storemerge5.reg2mem
  store i32 8, i32* %stack_var_-216.14.reg2mem
  store i32* %24, i32** %stack_var_-208.13.reg2mem
  store i32 0, i32* %args_-224.02.reg2mem
  br label %dec_label_pc_1d08

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1d48, %dec_label_pc_1d08.lr.ph
  %args_-224.02.reload = load i32, i32* %args_-224.02.reg2mem
  %stack_var_-208.13.reload = load i32*, i32** %stack_var_-208.13.reg2mem
  %stack_var_-216.14.reload = load i32, i32* %stack_var_-216.14.reg2mem
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %25 = icmp ult i32 %stack_var_-216.14.reload, 48
  br i1 %25, label %dec_label_pc_1d13, label %dec_label_pc_1d36, !insn.addr !265

dec_label_pc_1d13:                                ; preds = %dec_label_pc_1d08
  %26 = zext i32 %stack_var_-216.14.reload to i64, !insn.addr !266
  %27 = add i64 %26, %23, !insn.addr !267
  %28 = add i32 %stack_var_-216.14.reload, 8, !insn.addr !268
  store i32* %stack_var_-208.13.reload, i32** %stack_var_-208.0.reg2mem, !insn.addr !269
  store i32 %28, i32* %stack_var_-216.0.reg2mem, !insn.addr !269
  store i64 %27, i64* %rax.0.reg2mem, !insn.addr !269
  br label %dec_label_pc_1d48, !insn.addr !269

dec_label_pc_1d36:                                ; preds = %dec_label_pc_1d08
  %29 = ptrtoint i32* %stack_var_-208.13.reload to i64, !insn.addr !270
  %30 = add i64 %29, 8, !insn.addr !271
  %31 = inttoptr i64 %30 to i32*, !insn.addr !272
  store i32* %31, i32** %stack_var_-208.0.reg2mem, !insn.addr !272
  store i32 %stack_var_-216.14.reload, i32* %stack_var_-216.0.reg2mem, !insn.addr !272
  store i64 %29, i64* %rax.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_1d48, !insn.addr !272

dec_label_pc_1d48:                                ; preds = %dec_label_pc_1d36, %dec_label_pc_1d13
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %stack_var_-216.0.reload = load i32, i32* %stack_var_-216.0.reg2mem
  %stack_var_-208.0.reload = load i32*, i32** %stack_var_-208.0.reg2mem
  %32 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !273
  %33 = load i32, i32* %32, align 4, !insn.addr !273
  %34 = add i32 %33, %args_-224.02.reload, !insn.addr !274
  %35 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !275
  %exitcond = icmp eq i32 %35, %count
  store i32 %35, i32* %storemerge5.reg2mem, !insn.addr !263
  store i32 %stack_var_-216.0.reload, i32* %stack_var_-216.14.reg2mem, !insn.addr !263
  store i32* %stack_var_-208.0.reload, i32** %stack_var_-208.13.reg2mem, !insn.addr !263
  store i32 %34, i32* %args_-224.02.reg2mem, !insn.addr !263
  store i32 %34, i32* %args_-224.0.lcssa.reg2mem, !insn.addr !263
  br i1 %exitcond, label %dec_label_pc_1d65, label %dec_label_pc_1d08, !insn.addr !263

dec_label_pc_1d65:                                ; preds = %dec_label_pc_1d48, %dec_label_pc_1cb3
  %args_-224.0.lcssa.reload = load i32, i32* %args_-224.0.lcssa.reg2mem
  %36 = call i64 @__readfsqword(i64 40), !insn.addr !276
  %37 = icmp eq i64 %21, %36, !insn.addr !276
  store i32 %args_-224.0.lcssa.reload, i32* %rax.1.reg2mem, !insn.addr !277
  br i1 %37, label %dec_label_pc_1d82, label %dec_label_pc_1d7d, !insn.addr !277

dec_label_pc_1d7d:                                ; preds = %dec_label_pc_1d65
  call void @__stack_chk_fail(), !insn.addr !278
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.1.reg2mem, !insn.addr !278
  br label %dec_label_pc_1d82, !insn.addr !278

dec_label_pc_1d82:                                ; preds = %dec_label_pc_1d7d, %dec_label_pc_1d65
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  ret i32 %rax.1.reload, !insn.addr !279

; uselistorder directives
  uselistorder i32 %stack_var_-216.14.reload, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-208.13.reload, { 1, 0 }
  uselistorder i32* %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-216.14.reg2mem, { 1, 0, 2 }
  uselistorder i32** %stack_var_-208.13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %args_-224.02.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 4, 0, 2, 3, 5, 1 }
  uselistorder i8 0, { 1, 2, 0 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1d84:
  %0 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !280
  ret i32 %0, !insn.addr !281
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_1db2:
  %0 = add i32 %x, 10, !insn.addr !282
  ret i32 %0, !insn.addr !283
}

define i32 @callback_func(i32 %x) local_unnamed_addr {
dec_label_pc_1dd5:
  %0 = mul i32 %x, 2, !insn.addr !284
  ret i32 %0, !insn.addr !285
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1de7:
  %0 = call i32 @param_func_ptr(i32 (i32)* inttoptr (i64 7637 to i32 (i32)*), i32 5), !insn.addr !286
  ret i32 %0, !insn.addr !287
}

define i32 @param_double_ptr(i32** %pp, i32 %new_val) local_unnamed_addr {
dec_label_pc_1e05:
  %storemerge.reg2mem = alloca i32, !insn.addr !288
  %0 = icmp eq i32** %pp, null, !insn.addr !289
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !290
  br i1 %0, label %dec_label_pc_1e4a, label %dec_label_pc_1e2e, !insn.addr !290

dec_label_pc_1e2e:                                ; preds = %dec_label_pc_1e05
  %1 = bitcast i32** %pp to i64*
  store i64 0, i64* %1, align 8, !insn.addr !291
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !292
  br label %dec_label_pc_1e4a, !insn.addr !292

dec_label_pc_1e4a:                                ; preds = %dec_label_pc_1e05, %dec_label_pc_1e2e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !293

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e4a, { 1, 0 }
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1e4c:
  %rax.0.reg2mem = alloca i64, !insn.addr !294
  %stack_var_-24 = alloca i64, align 8
  %ptr_-32 = alloca i32*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !295
  store i32* inttoptr (i32 10 to i32*), i32** %ptr_-32, align 8, !insn.addr !296
  %1 = ptrtoint i32** %ptr_-32 to i64, !insn.addr !297
  store i64 %1, i64* %stack_var_-24, align 8, !insn.addr !297
  %2 = bitcast i64* %stack_var_-24 to i32**, !insn.addr !298
  %3 = call i32 @param_double_ptr(i32** nonnull %2, i32 20), !insn.addr !298
  %4 = load i64, i64* %stack_var_-24, align 8, !insn.addr !299
  %5 = icmp eq i64 %4, 0, !insn.addr !300
  %6 = load i32*, i32** %ptr_-32, align 8, !insn.addr !301
  %7 = ptrtoint i32* %6 to i64
  %8 = zext i1 %5 to i64, !insn.addr !302
  %9 = add i64 %7, %8, !insn.addr !302
  %10 = and i64 %9, 4294967295, !insn.addr !302
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !303
  %12 = icmp eq i64 %0, %11, !insn.addr !303
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !304
  br i1 %12, label %dec_label_pc_1eb0, label %dec_label_pc_1eab, !insn.addr !304

dec_label_pc_1eab:                                ; preds = %dec_label_pc_1e4c
  call void @__stack_chk_fail(), !insn.addr !305
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !305
  br label %dec_label_pc_1eb0, !insn.addr !305

dec_label_pc_1eb0:                                ; preds = %dec_label_pc_1eab, %dec_label_pc_1e4c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = trunc i64 %rax.0.reload to i32, !insn.addr !306
  ret i32 %13, !insn.addr !306

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0, 2 }
}

define i32 @param_complex_cast(i8* %p, i32 %type) local_unnamed_addr {
dec_label_pc_1eb2:
  %0 = alloca i64
  %rax.0.shrunk.reg2mem = alloca i32, !insn.addr !307
  %1 = load i64, i64* %0
  %2 = icmp eq i32 %type, 0, !insn.addr !308
  %3 = icmp eq i1 %2, false, !insn.addr !309
  %4 = trunc i64 %1 to i32
  store i32 %4, i32* %rax.0.shrunk.reg2mem, !insn.addr !309
  br i1 %3, label %dec_label_pc_1ee7, label %dec_label_pc_1f0b, !insn.addr !309

dec_label_pc_1ee7:                                ; preds = %dec_label_pc_1eb2
  %5 = icmp eq i32 %type, 1, !insn.addr !310
  %6 = icmp eq i1 %5, false, !insn.addr !311
  store i32 -1, i32* %rax.0.shrunk.reg2mem, !insn.addr !311
  br i1 %6, label %dec_label_pc_1f0b, label %dec_label_pc_1eed, !insn.addr !311

dec_label_pc_1eed:                                ; preds = %dec_label_pc_1ee7
  %7 = ptrtoint i8* %p to i64, !insn.addr !312
  %8 = add i64 %7, 4, !insn.addr !313
  %9 = inttoptr i64 %8 to i32*, !insn.addr !313
  %10 = load i32, i32* %9, align 4, !insn.addr !313
  %11 = add i32 %10, %4, !insn.addr !314
  store i32 %11, i32* %rax.0.shrunk.reg2mem, !insn.addr !315
  br label %dec_label_pc_1f0b, !insn.addr !315

dec_label_pc_1f0b:                                ; preds = %dec_label_pc_1eb2, %dec_label_pc_1ee7, %dec_label_pc_1eed
  %rax.0.shrunk.reload = load i32, i32* %rax.0.shrunk.reg2mem
  ret i32 %rax.0.shrunk.reload, !insn.addr !316

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %rax.0.shrunk.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1f0b, { 2, 1, 0 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1f0d:
  %rax.0.reg2mem = alloca i32, !insn.addr !317
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !318
  store i32 305419896, i32* %stack_var_-28, align 4, !insn.addr !319
  store i32 100, i32* %stack_var_-24, align 4, !insn.addr !320
  %1 = bitcast i32* %stack_var_-24 to i8*, !insn.addr !321
  %2 = call i32 @param_complex_cast(i8* nonnull %1, i32 1), !insn.addr !321
  %3 = bitcast i32* %stack_var_-28 to i8*, !insn.addr !322
  %4 = call i32 @param_complex_cast(i8* nonnull %3, i32 0), !insn.addr !322
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !323
  %6 = icmp eq i64 %0, %5, !insn.addr !323
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !324
  br i1 %6, label %dec_label_pc_1f73, label %dec_label_pc_1f6e, !insn.addr !324

dec_label_pc_1f6e:                                ; preds = %dec_label_pc_1f0d
  call void @__stack_chk_fail(), !insn.addr !325
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !325
  br label %dec_label_pc_1f73, !insn.addr !325

dec_label_pc_1f73:                                ; preds = %dec_label_pc_1f6e, %dec_label_pc_1f0d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !326

; uselistorder directives
  uselistorder i32 (i8*, i32)* @param_complex_cast, { 1, 0 }
}

define i32 @param_struct_byval(i64 %s) local_unnamed_addr {
dec_label_pc_1f75:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %2, %1, !insn.addr !327
  ret i32 %3, !insn.addr !328

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1f87:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i32, !insn.addr !329
  %indvars.iv.reg2mem = alloca i64, !insn.addr !329
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !330
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !331
  %4 = add i64 %2, -80, !insn.addr !332
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1fab

dec_label_pc_1fab:                                ; preds = %dec_label_pc_1fab, %dec_label_pc_1f87
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !332
  %6 = add i64 %4, %5, !insn.addr !332
  %7 = inttoptr i64 %6 to i32*, !insn.addr !332
  %8 = trunc i64 %indvars.iv.reload to i32
  store i32 %8, i32* %7, align 4, !insn.addr !332
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !333
  br i1 %exitcond, label %dec_label_pc_1fc1, label %dec_label_pc_1fab, !insn.addr !333

dec_label_pc_1fc1:                                ; preds = %dec_label_pc_1fab
  %9 = call i32 @param_struct_byval(i64 %1), !insn.addr !334
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !335
  %11 = icmp eq i64 %3, %10, !insn.addr !335
  store i32 %9, i32* %rax.0.reg2mem, !insn.addr !336
  br i1 %11, label %dec_label_pc_1ff6, label %dec_label_pc_1ff1, !insn.addr !336

dec_label_pc_1ff1:                                ; preds = %dec_label_pc_1fc1
  call void @__stack_chk_fail(), !insn.addr !337
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !337
  br label %dec_label_pc_1ff6, !insn.addr !337

dec_label_pc_1ff6:                                ; preds = %dec_label_pc_1ff1, %dec_label_pc_1fc1
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !338

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
}

define i32 @param_order_dep(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1ff8:
  %0 = add i32 %b, %a, !insn.addr !339
  ret i32 %0, !insn.addr !340
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_2010:
  %0 = call i32 @param_order_dep(i32 2, i32 2), !insn.addr !341
  ret i32 %0, !insn.addr !342
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_203c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_31e8 to i8*)), !insn.addr !343
  %1 = call i32 @call_by_value_int(), !insn.addr !344
  %2 = zext i32 %1 to i64, !insn.addr !345
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3209, i64 0, i64 0), i64 %2), !insn.addr !346
  %4 = call i32 @call_by_value_ptr(), !insn.addr !347
  %5 = zext i32 %4 to i64, !insn.addr !348
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_321a, i64 0, i64 0), i64 %5), !insn.addr !349
  %7 = call i32 @call_array_decay(), !insn.addr !350
  %8 = zext i32 %7 to i64, !insn.addr !351
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_322b, i64 0, i64 0), i64 %8), !insn.addr !352
  %10 = call i32 @call_string_param(), !insn.addr !353
  %11 = zext i32 %10 to i64, !insn.addr !354
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_323c, i64 0, i64 0), i64 %11), !insn.addr !355
  %13 = call i32 @call_ptr_array(), !insn.addr !356
  %14 = zext i32 %13 to i64, !insn.addr !357
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_324d, i64 0, i64 0), i64 %14), !insn.addr !358
  %16 = call i32 @call_varargs_param(), !insn.addr !359
  %17 = zext i32 %16 to i64, !insn.addr !360
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_325e, i64 0, i64 0), i64 %17), !insn.addr !361
  %19 = call i32 @call_func_ptr_param(), !insn.addr !362
  %20 = zext i32 %19 to i64, !insn.addr !363
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_326f, i64 0, i64 0), i64 %20), !insn.addr !364
  %22 = call i32 @call_double_ptr(), !insn.addr !365
  %23 = zext i32 %22 to i64, !insn.addr !366
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3280, i64 0, i64 0), i64 %23), !insn.addr !367
  %25 = call i32 @call_complex_cast(), !insn.addr !368
  %26 = zext i32 %25 to i64, !insn.addr !369
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3291, i64 0, i64 0), i64 %26), !insn.addr !370
  %28 = call i32 @call_struct_byval(), !insn.addr !371
  %29 = zext i32 %28 to i64, !insn.addr !372
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32a2, i64 0, i64 0), i64 %29), !insn.addr !373
  %31 = call i32 @call_order_dep(), !insn.addr !374
  %32 = zext i32 %31 to i64, !insn.addr !375
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_32b3, i64 0, i64 0), i64 %32), !insn.addr !376
  ret void, !insn.addr !377
}

define i32 @ret_basic_type(i32 %x) local_unnamed_addr {
dec_label_pc_21b6:
  %0 = mul i32 %x, 2, !insn.addr !378
  ret i32 %0, !insn.addr !379
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_21c8:
  %0 = call i32 @ret_basic_type(i32 21), !insn.addr !380
  ret i32 %0, !insn.addr !381
}

define i32* @ret_pointer(i32* %p) local_unnamed_addr {
dec_label_pc_21ed:
  %0 = ptrtoint i32* %p to i64
  %1 = add i64 %0, 4, !insn.addr !382
  %2 = inttoptr i64 %1 to i32*, !insn.addr !383
  ret i32* %2, !insn.addr !383
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_2203:
  %rax.0.reg2mem = alloca i32, !insn.addr !384
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !385
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !386
  %1 = call i32* @ret_pointer(i32* nonnull %stack_var_-28), !insn.addr !387
  %2 = load i32, i32* %1, align 4, !insn.addr !388
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !389
  %4 = icmp eq i64 %0, %3, !insn.addr !389
  store i32 %2, i32* %rax.0.reg2mem, !insn.addr !390
  br i1 %4, label %dec_label_pc_225d, label %dec_label_pc_2258, !insn.addr !390

dec_label_pc_2258:                                ; preds = %dec_label_pc_2203
  call void @__stack_chk_fail(), !insn.addr !391
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_225d, !insn.addr !391

dec_label_pc_225d:                                ; preds = %dec_label_pc_2258, %dec_label_pc_2203
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !392
}

define i64 @ret_small_struct(i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_225f:
  %0 = sext i32 %x to i64, !insn.addr !393
  ret i64 %0, !insn.addr !394
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_227f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i64 @ret_small_struct(i32 3, i32 4), !insn.addr !395
  %3 = trunc i64 %2 to i32, !insn.addr !396
  %4 = add i32 %1, %3, !insn.addr !397
  ret i32 %4, !insn.addr !398
}

define i64 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_22a8:
  %0 = alloca i64
  %indvars.iv.reg2mem = alloca i64, !insn.addr !399
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !400
  %3 = trunc i64 %1 to i32, !insn.addr !401
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !402
  %5 = add i64 %2, -96, !insn.addr !403
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_22d4

dec_label_pc_22d4:                                ; preds = %dec_label_pc_22d4, %dec_label_pc_22a8
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = trunc i64 %indvars.iv.reload to i32
  %7 = add i32 %6, %3, !insn.addr !404
  %8 = mul i64 %indvars.iv.reload, 4, !insn.addr !403
  %9 = add i64 %5, %8, !insn.addr !403
  %10 = inttoptr i64 %9 to i32*, !insn.addr !403
  store i32 %7, i32* %10, align 4, !insn.addr !403
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 16
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !405
  br i1 %exitcond, label %dec_label_pc_22ef, label %dec_label_pc_22d4, !insn.addr !405

dec_label_pc_22ef:                                ; preds = %dec_label_pc_22d4
  %11 = sext i32 %seed to i64, !insn.addr !406
  %12 = inttoptr i64 %11 to i64*, !insn.addr !407
  %13 = add nsw i64 %11, 8, !insn.addr !408
  %14 = inttoptr i64 %13 to i64*, !insn.addr !408
  %15 = add nsw i64 %11, 16, !insn.addr !409
  %16 = inttoptr i64 %15 to i64*, !insn.addr !409
  %17 = add nsw i64 %11, 24, !insn.addr !410
  %18 = inttoptr i64 %17 to i64*, !insn.addr !410
  %19 = add nsw i64 %11, 32, !insn.addr !411
  %20 = inttoptr i64 %19 to i64*, !insn.addr !411
  %21 = add nsw i64 %11, 40, !insn.addr !412
  %22 = inttoptr i64 %21 to i64*, !insn.addr !412
  %23 = add nsw i64 %11, 48, !insn.addr !413
  %24 = inttoptr i64 %23 to i64*, !insn.addr !413
  %25 = add nsw i64 %11, 56, !insn.addr !414
  %26 = inttoptr i64 %25 to i64*, !insn.addr !414
  %27 = call i64 @__readfsqword(i64 40), !insn.addr !415
  %28 = icmp eq i64 %4, %27, !insn.addr !415
  br i1 %28, label %dec_label_pc_2346, label %dec_label_pc_2341, !insn.addr !416

dec_label_pc_2341:                                ; preds = %dec_label_pc_22ef
  call void @__stack_chk_fail(), !insn.addr !417
  br label %dec_label_pc_2346, !insn.addr !417

dec_label_pc_2346:                                ; preds = %dec_label_pc_2341, %dec_label_pc_22ef
  ret i64 %11, !insn.addr !418

; uselistorder directives
  uselistorder i64 %11, { 0, 1, 2, 3, 6, 5, 4, 7, 8 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 32, { 1, 0 }
  uselistorder i64 8, { 3, 4, 0, 1, 2, 5 }
  uselistorder i64 16, { 4, 0, 1, 2, 3, 5 }
  uselistorder i64 1, { 0, 1, 2, 5, 3, 4 }
  uselistorder i64 4, { 0, 2, 1, 3, 4 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_2350:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !419
  %1 = load i32, i32* %0
  %stack_var_-88 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !420
  %3 = ptrtoint i32* %stack_var_-88 to i64, !insn.addr !421
  %4 = trunc i64 %3 to i32, !insn.addr !422
  %5 = call i64 @ret_large_struct(i32 %4), !insn.addr !422
  %6 = load i32, i32* %stack_var_-88, align 4, !insn.addr !423
  %7 = add i32 %6, %1, !insn.addr !424
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !425
  %9 = icmp eq i64 %2, %8, !insn.addr !425
  store i32 %7, i32* %rax.0.reg2mem, !insn.addr !426
  br i1 %9, label %dec_label_pc_2398, label %dec_label_pc_2393, !insn.addr !426

dec_label_pc_2393:                                ; preds = %dec_label_pc_2350
  call void @__stack_chk_fail(), !insn.addr !427
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !427
  br label %dec_label_pc_2398, !insn.addr !427

dec_label_pc_2398:                                ; preds = %dec_label_pc_2393, %dec_label_pc_2350
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !428

; uselistorder directives
  uselistorder i32* %stack_var_-88, { 1, 0 }
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_239a:
  %0 = add i32 %x, 10, !insn.addr !429
  ret i32 %0, !insn.addr !430
}

define i32 @func_b(i32 %x) local_unnamed_addr {
dec_label_pc_23ad:
  %0 = mul i32 %x, 2, !insn.addr !431
  ret i32 %0, !insn.addr !432
}

define i32 (i32)* @ret_func_ptr(i32 %selector) local_unnamed_addr {
dec_label_pc_23bf:
  %0 = icmp eq i32 %selector, 0, !insn.addr !433
  %. = select i1 %0, i32 (i32)* inttoptr (i64 9114 to i32 (i32)*), i32 (i32)* inttoptr (i64 9133 to i32 (i32)*)
  ret i32 (i32)* %., !insn.addr !434
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_23e2:
  %0 = call i32 (i32)* @ret_func_ptr(i32 1), !insn.addr !435
  %1 = ptrtoint i32 (i32)* %0 to i64, !insn.addr !435
  %2 = trunc i64 %1 to i32, !insn.addr !436
  ret i32 %2, !insn.addr !436
}

define i8* @ret_opaque_handle(i32 %type) local_unnamed_addr {
dec_label_pc_2409:
  %0 = icmp eq i32 %type, 0, !insn.addr !437
  %1 = icmp eq i1 %0, false, !insn.addr !438
  %2 = select i1 %1, i8* bitcast (i64* @global_var_6018 to i8*), i8* bitcast (i8** @global_var_6010 to i8*), !insn.addr !439
  ret i8* %2, !insn.addr !439

; uselistorder directives
  uselistorder i1 false, { 1, 2, 3, 4, 0 }
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_242c:
  %0 = call i8* @ret_opaque_handle(i32 0), !insn.addr !440
  %1 = bitcast i8* %0 to i32*, !insn.addr !441
  %2 = load i32, i32* %1, align 4, !insn.addr !441
  ret i32 %2, !insn.addr !442
}

define i32 @ret_complex_expr(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_244e:
  %0 = icmp sgt i32 %x, %y, !insn.addr !443
  %1 = add i32 %z, 10
  %2 = mul i32 %z, 2
  %storemerge.in = select i1 %0, i32 %2, i32 %1
  ret i32 %storemerge.in, !insn.addr !444
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_2476:
  %0 = call i32 @ret_complex_expr(i32 5, i32 3, i32 10), !insn.addr !445
  %1 = call i32 @ret_complex_expr(i32 3, i32 5, i32 10), !insn.addr !446
  %2 = add i32 %1, %0, !insn.addr !447
  ret i32 %2, !insn.addr !448

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @ret_complex_expr, { 1, 0 }
}

define i32 @ret_multi_branch(i32 %op) local_unnamed_addr {
dec_label_pc_24ba:
  %rax.0.reg2mem = alloca i32, !insn.addr !449
  %0 = icmp eq i32 %op, 2, !insn.addr !450
  store i32 30, i32* %rax.0.reg2mem, !insn.addr !451
  br i1 %0, label %dec_label_pc_24f9, label %dec_label_pc_24cb, !insn.addr !451

dec_label_pc_24cb:                                ; preds = %dec_label_pc_24ba
  %1 = icmp sgt i32 %op, 2, !insn.addr !452
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !452
  br i1 %1, label %dec_label_pc_24f9, label %dec_label_pc_24d1, !insn.addr !452

dec_label_pc_24d1:                                ; preds = %dec_label_pc_24cb
  %switch.selectcmp = icmp eq i32 %op, 1
  %switch.select = select i1 %switch.selectcmp, i32 20, i32 -1
  %switch.selectcmp1 = icmp eq i32 %op, 0
  %switch.select2 = select i1 %switch.selectcmp1, i32 10, i32 %switch.select
  store i32 %switch.select2, i32* %rax.0.reg2mem
  br label %dec_label_pc_24f9

dec_label_pc_24f9:                                ; preds = %dec_label_pc_24cb, %dec_label_pc_24d1, %dec_label_pc_24ba
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !453

; uselistorder directives
  uselistorder i32* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 10, { 0, 1, 2, 10, 11, 9, 3, 12, 4, 5, 6, 7, 8 }
  uselistorder i32 -1, { 4, 0, 1, 2, 3 }
  uselistorder label %dec_label_pc_24f9, { 1, 0, 2 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_24fb:
  %0 = call i32 @ret_multi_branch(i32 0), !insn.addr !454
  %1 = call i32 @ret_multi_branch(i32 1), !insn.addr !455
  %2 = add i32 %1, %0, !insn.addr !456
  %3 = call i32 @ret_multi_branch(i32 2), !insn.addr !457
  %4 = add i32 %2, %3, !insn.addr !458
  ret i32 %4, !insn.addr !459

; uselistorder directives
  uselistorder i32 2, { 6, 17, 7, 0, 1, 2, 8, 9, 3, 4, 5, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i32 (i32)* @ret_multi_branch, { 2, 1, 0 }
}

define void @ret_void(i32 %x, i32* %out) local_unnamed_addr {
dec_label_pc_253a:
  %0 = mul i32 %x, 3, !insn.addr !460
  store i32 %0, i32* %out, align 4, !insn.addr !461
  ret void, !insn.addr !462
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_255b:
  %rax.0.reg2mem = alloca i32, !insn.addr !463
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !464
  call void @ret_void(i32 7, i32* nonnull %stack_var_-20), !insn.addr !465
  %1 = load i32, i32* %stack_var_-20, align 4, !insn.addr !466
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !467
  %3 = icmp eq i64 %0, %2, !insn.addr !467
  store i32 %1, i32* %rax.0.reg2mem, !insn.addr !468
  br i1 %3, label %dec_label_pc_259e, label %dec_label_pc_2599, !insn.addr !468

dec_label_pc_2599:                                ; preds = %dec_label_pc_255b
  call void @__stack_chk_fail(), !insn.addr !469
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !469
  br label %dec_label_pc_259e, !insn.addr !469

dec_label_pc_259e:                                ; preds = %dec_label_pc_2599, %dec_label_pc_255b
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !470

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 3, 11, 12, 10, 5, 7, 8, 9, 1, 6, 2, 4, 0, 13 }
  uselistorder i64 40, { 0, 1, 2, 3, 4, 26, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 }
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_25a0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_32c4 to i8*)), !insn.addr !471
  %1 = call i32 @call_ret_basic(), !insn.addr !472
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32e2 to i8*)), !insn.addr !473
  %3 = call i32 @call_ret_pointer(), !insn.addr !474
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32fe to i8*)), !insn.addr !475
  %5 = call i32 @call_ret_small_struct(), !insn.addr !476
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_331a to i8*)), !insn.addr !477
  %7 = call i32 @call_ret_large_struct(), !insn.addr !478
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3335 to i8*)), !insn.addr !479
  %9 = call i32 @call_ret_func_ptr(), !insn.addr !480
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3352 to i8*)), !insn.addr !481
  %11 = call i32 @call_ret_opaque(), !insn.addr !482
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_336e to i8*)), !insn.addr !483
  %13 = call i32 @call_ret_complex_expr(), !insn.addr !484
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_338b to i8*)), !insn.addr !485
  %15 = call i32 @call_ret_multi_branch(), !insn.addr !486
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33a7 to i8*)), !insn.addr !487
  %17 = call i32 @call_ret_void(), !insn.addr !488
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33c3 to i8*)), !insn.addr !489
  ret void, !insn.addr !490

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 3, 2, 1, 0, 6, 5, 4, 9, 8, 7, 12, 11, 10, 35, 34, 33, 32, 31, 30, 24, 23, 22, 21, 20, 19, 18, 17, 16, 29, 28, 27, 26, 25, 15, 14, 13, 36 }
  uselistorder i32 (i8*)* @puts, { 0, 2, 1, 3 }
  uselistorder i64 0, { 0, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 1, 97, 98, 67, 68, 2, 69, 70, 94, 3, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 4, 95, 6, 5, 96, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 93 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_26da:
  call void @test_calling_conventions(), !insn.addr !491
  call void @test_parameter_passing(), !insn.addr !492
  call void @test_return_values(), !insn.addr !493
  ret i32 0, !insn.addr !494

; uselistorder directives
  uselistorder i32 0, { 10, 15, 14, 16, 18, 19, 17, 20, 1, 2, 0, 11, 4, 3, 12, 5, 6, 8, 9, 7, 13 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2708:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !495

; uselistorder directives
  uselistorder i32 1, { 11, 70, 15, 59, 58, 16, 60, 71, 17, 14, 73, 18, 10, 13, 74, 19, 75, 21, 20, 9, 12, 61, 77, 76, 22, 62, 23, 8, 79, 78, 24, 25, 26, 90, 81, 80, 35, 34, 33, 32, 31, 30, 29, 28, 27, 7, 1, 72, 36, 39, 38, 37, 6, 82, 40, 83, 41, 57, 5, 63, 85, 84, 42, 43, 4, 86, 45, 44, 46, 91, 88, 87, 55, 54, 53, 52, 51, 50, 49, 48, 47, 3, 0, 64, 65, 66, 67, 68, 69, 2, 89, 56 }
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
!79 = !{i64 5212}
!80 = !{i64 5213}
!81 = !{i64 5269}
!82 = !{i64 5271}
!83 = !{i64 5273}
!84 = !{i64 5277}
!85 = !{i64 5281}
!86 = !{i64 5285}
!87 = !{i64 5289}
!88 = !{i64 5293}
!89 = !{i64 5297}
!90 = !{i64 5301}
!91 = !{i64 5305}
!92 = !{i64 5481}
!93 = !{i64 5371}
!94 = !{i64 5399}
!95 = !{i64 5414}
!96 = !{i64 5416}
!97 = !{i64 5425}
!98 = !{i64 5434}
!99 = !{i64 5436}
!100 = !{i64 5443}
!101 = !{i64 5447}
!102 = !{i64 5454}
!103 = !{i64 5456}
!104 = !{i64 5462}
!105 = !{i64 5496}
!106 = !{i64 5505}
!107 = !{i64 5507}
!108 = !{i64 5513}
!109 = !{i64 5528}
!110 = !{i64 5563}
!111 = !{i64 5568}
!112 = !{i64 5573}
!113 = !{i64 5578}
!114 = !{i64 5583}
!115 = !{i64 5588}
!116 = !{i64 5593}
!117 = !{i64 5596}
!118 = !{i64 5597}
!119 = !{i64 5616}
!120 = !{i64 5625}
!121 = !{i64 5630}
!122 = !{i64 5639}
!123 = !{i64 5644}
!124 = !{i64 5660}
!125 = !{i64 5662}
!126 = !{i64 5666}
!127 = !{i64 5670}
!128 = !{i64 5674}
!129 = !{i64 5679}
!130 = !{i64 5683}
!131 = !{i64 5689}
!132 = !{i64 5693}
!133 = !{i64 5698}
!134 = !{i64 5699}
!135 = !{i64 5704}
!136 = !{i64 5729}
!137 = !{i64 5734}
!138 = !{i64 5746}
!139 = !{i64 5753}
!140 = !{i64 5754}
!141 = !{i64 5766}
!142 = !{i64 5771}
!143 = !{i64 5786}
!144 = !{i64 5790}
!145 = !{i64 5793}
!146 = !{i64 5797}
!147 = !{i64 5798}
!148 = !{i64 5803}
!149 = !{i64 5813}
!150 = !{i64 5838}
!151 = !{i64 5848}
!152 = !{i64 5853}
!153 = !{i64 5870}
!154 = !{i64 5880}
!155 = !{i64 5885}
!156 = !{i64 5902}
!157 = !{i64 5912}
!158 = !{i64 5917}
!159 = !{i64 5934}
!160 = !{i64 5944}
!161 = !{i64 5949}
!162 = !{i64 5966}
!163 = !{i64 5976}
!164 = !{i64 5981}
!165 = !{i64 5998}
!166 = !{i64 6008}
!167 = !{i64 6013}
!168 = !{i64 6030}
!169 = !{i64 6040}
!170 = !{i64 6045}
!171 = !{i64 6062}
!172 = !{i64 6072}
!173 = !{i64 6077}
!174 = !{i64 6094}
!175 = !{i64 6104}
!176 = !{i64 6109}
!177 = !{i64 6126}
!178 = !{i64 6136}
!179 = !{i64 6141}
!180 = !{i64 6158}
!181 = !{i64 6200}
!182 = !{i64 6234}
!183 = !{i64 6239}
!184 = !{i64 6273}
!185 = !{i64 6314}
!186 = !{i64 6352}
!187 = !{i64 6390}
!188 = !{i64 6403}
!189 = !{i64 6437}
!190 = !{i64 6474}
!191 = !{i64 6496}
!192 = !{i64 6552}
!193 = !{i64 6590}
!194 = !{i64 6595}
!195 = !{i64 6625}
!196 = !{i64 6659}
!197 = !{i64 6669}
!198 = !{i64 6678}
!199 = !{i64 6680}
!200 = !{i64 6686}
!201 = !{i64 6698}
!202 = !{i64 6705}
!203 = !{i64 6730}
!204 = !{i64 6744}
!205 = !{i64 6747}
!206 = !{i64 6766}
!207 = !{i64 6773}
!208 = !{i64 6795}
!209 = !{i64 6796}
!210 = !{i64 6808}
!211 = !{i64 6823}
!212 = !{i64 6845}
!213 = !{i64 6853}
!214 = !{i64 6859}
!215 = !{i64 6865}
!216 = !{i64 6874}
!217 = !{i64 6876}
!218 = !{i64 6882}
!219 = !{i64 6904}
!220 = !{i64 6905}
!221 = !{i64 6917}
!222 = !{i64 6932}
!223 = !{i64 6984}
!224 = !{i64 6993}
!225 = !{i64 7002}
!226 = !{i64 7004}
!227 = !{i64 7010}
!228 = !{i64 7037}
!229 = !{i64 7041}
!230 = !{i64 7047}
!231 = !{i64 7050}
!232 = !{i64 7069}
!233 = !{i64 7075}
!234 = !{i64 7076}
!235 = !{i64 7149}
!236 = !{i64 7120}
!237 = !{i64 7112}
!238 = !{i64 7124}
!239 = !{i64 7127}
!240 = !{i64 7130}
!241 = !{i64 7136}
!242 = !{i64 7155}
!243 = !{i64 7156}
!244 = !{i64 7168}
!245 = !{i64 7190}
!246 = !{i64 7228}
!247 = !{i64 7237}
!248 = !{i64 7246}
!249 = !{i64 7248}
!250 = !{i64 7254}
!251 = !{i64 7255}
!252 = !{i64 7311}
!253 = !{i64 7313}
!254 = !{i64 7315}
!255 = !{i64 7319}
!256 = !{i64 7323}
!257 = !{i64 7327}
!258 = !{i64 7331}
!259 = !{i64 7335}
!260 = !{i64 7339}
!261 = !{i64 7343}
!262 = !{i64 7347}
!263 = !{i64 7523}
!264 = !{i64 7403}
!265 = !{i64 7441}
!266 = !{i64 7456}
!267 = !{i64 7458}
!268 = !{i64 7467}
!269 = !{i64 7476}
!270 = !{i64 7478}
!271 = !{i64 7485}
!272 = !{i64 7489}
!273 = !{i64 7496}
!274 = !{i64 7498}
!275 = !{i64 7504}
!276 = !{i64 7538}
!277 = !{i64 7547}
!278 = !{i64 7549}
!279 = !{i64 7555}
!280 = !{i64 7595}
!281 = !{i64 7601}
!282 = !{i64 7632}
!283 = !{i64 7636}
!284 = !{i64 7651}
!285 = !{i64 7654}
!286 = !{i64 7678}
!287 = !{i64 7684}
!288 = !{i64 7685}
!289 = !{i64 7700}
!290 = !{i64 7705}
!291 = !{i64 7742}
!292 = !{i64 7749}
!293 = !{i64 7755}
!294 = !{i64 7756}
!295 = !{i64 7768}
!296 = !{i64 7783}
!297 = !{i64 7794}
!298 = !{i64 7810}
!299 = !{i64 7818}
!300 = !{i64 7822}
!301 = !{i64 7831}
!302 = !{i64 7834}
!303 = !{i64 7840}
!304 = !{i64 7849}
!305 = !{i64 7851}
!306 = !{i64 7857}
!307 = !{i64 7858}
!308 = !{i64 7873}
!309 = !{i64 7877}
!310 = !{i64 7911}
!311 = !{i64 7915}
!312 = !{i64 7917}
!313 = !{i64 7935}
!314 = !{i64 7938}
!315 = !{i64 7940}
!316 = !{i64 7948}
!317 = !{i64 7949}
!318 = !{i64 7961}
!319 = !{i64 7976}
!320 = !{i64 7983}
!321 = !{i64 8009}
!322 = !{i64 8026}
!323 = !{i64 8035}
!324 = !{i64 8044}
!325 = !{i64 8046}
!326 = !{i64 8052}
!327 = !{i64 8067}
!328 = !{i64 8070}
!329 = !{i64 8071}
!330 = !{i64 8076}
!331 = !{i64 8083}
!332 = !{i64 8115}
!333 = !{i64 8127}
!334 = !{i64 8153}
!335 = !{i64 8166}
!336 = !{i64 8175}
!337 = !{i64 8177}
!338 = !{i64 8183}
!339 = !{i64 8204}
!340 = !{i64 8207}
!341 = !{i64 8245}
!342 = !{i64 8251}
!343 = !{i64 8270}
!344 = !{i64 8280}
!345 = !{i64 8285}
!346 = !{i64 8302}
!347 = !{i64 8312}
!348 = !{i64 8317}
!349 = !{i64 8334}
!350 = !{i64 8344}
!351 = !{i64 8349}
!352 = !{i64 8366}
!353 = !{i64 8376}
!354 = !{i64 8381}
!355 = !{i64 8398}
!356 = !{i64 8408}
!357 = !{i64 8413}
!358 = !{i64 8430}
!359 = !{i64 8440}
!360 = !{i64 8445}
!361 = !{i64 8462}
!362 = !{i64 8472}
!363 = !{i64 8477}
!364 = !{i64 8494}
!365 = !{i64 8504}
!366 = !{i64 8509}
!367 = !{i64 8526}
!368 = !{i64 8536}
!369 = !{i64 8541}
!370 = !{i64 8558}
!371 = !{i64 8568}
!372 = !{i64 8573}
!373 = !{i64 8590}
!374 = !{i64 8600}
!375 = !{i64 8605}
!376 = !{i64 8622}
!377 = !{i64 8629}
!378 = !{i64 8644}
!379 = !{i64 8647}
!380 = !{i64 8672}
!381 = !{i64 8684}
!382 = !{i64 8701}
!383 = !{i64 8706}
!384 = !{i64 8707}
!385 = !{i64 8719}
!386 = !{i64 8734}
!387 = !{i64 8762}
!388 = !{i64 8775}
!389 = !{i64 8781}
!390 = !{i64 8790}
!391 = !{i64 8792}
!392 = !{i64 8798}
!393 = !{i64 8825}
!394 = !{i64 8830}
!395 = !{i64 8853}
!396 = !{i64 8862}
!397 = !{i64 8868}
!398 = !{i64 8871}
!399 = !{i64 8872}
!400 = !{i64 8877}
!401 = !{i64 8889}
!402 = !{i64 8892}
!403 = !{i64 8929}
!404 = !{i64 8922}
!405 = !{i64 8941}
!406 = !{i64 8943}
!407 = !{i64 8955}
!408 = !{i64 8958}
!409 = !{i64 8970}
!410 = !{i64 8974}
!411 = !{i64 8986}
!412 = !{i64 8990}
!413 = !{i64 9002}
!414 = !{i64 9006}
!415 = !{i64 9014}
!416 = !{i64 9023}
!417 = !{i64 9025}
!418 = !{i64 9039}
!419 = !{i64 9040}
!420 = !{i64 9052}
!421 = !{i64 9076}
!422 = !{i64 9079}
!423 = !{i64 9084}
!424 = !{i64 9090}
!425 = !{i64 9096}
!426 = !{i64 9105}
!427 = !{i64 9107}
!428 = !{i64 9113}
!429 = !{i64 9128}
!430 = !{i64 9132}
!431 = !{i64 9147}
!432 = !{i64 9150}
!433 = !{i64 9162}
!434 = !{i64 9185}
!435 = !{i64 9203}
!436 = !{i64 9224}
!437 = !{i64 9236}
!438 = !{i64 9240}
!439 = !{i64 9259}
!440 = !{i64 9277}
!441 = !{i64 9290}
!442 = !{i64 9293}
!443 = !{i64 9317}
!444 = !{i64 9333}
!445 = !{i64 9361}
!446 = !{i64 9384}
!447 = !{i64 9398}
!448 = !{i64 9401}
!449 = !{i64 9402}
!450 = !{i64 9413}
!451 = !{i64 9417}
!452 = !{i64 9423}
!453 = !{i64 9466}
!454 = !{i64 9491}
!455 = !{i64 9504}
!456 = !{i64 9509}
!457 = !{i64 9517}
!458 = !{i64 9522}
!459 = !{i64 9529}
!460 = !{i64 9552}
!461 = !{i64 9558}
!462 = !{i64 9562}
!463 = !{i64 9563}
!464 = !{i64 9575}
!465 = !{i64 9602}
!466 = !{i64 9607}
!467 = !{i64 9614}
!468 = !{i64 9623}
!469 = !{i64 9625}
!470 = !{i64 9631}
!471 = !{i64 9650}
!472 = !{i64 9660}
!473 = !{i64 9682}
!474 = !{i64 9692}
!475 = !{i64 9714}
!476 = !{i64 9724}
!477 = !{i64 9746}
!478 = !{i64 9756}
!479 = !{i64 9778}
!480 = !{i64 9788}
!481 = !{i64 9810}
!482 = !{i64 9820}
!483 = !{i64 9842}
!484 = !{i64 9852}
!485 = !{i64 9874}
!486 = !{i64 9884}
!487 = !{i64 9906}
!488 = !{i64 9916}
!489 = !{i64 9938}
!490 = !{i64 9945}
!491 = !{i64 9959}
!492 = !{i64 9969}
!493 = !{i64 9979}
!494 = !{i64 9990}
!495 = !{i64 10004}
