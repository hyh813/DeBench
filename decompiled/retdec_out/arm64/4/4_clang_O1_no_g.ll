source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

@global_var_13000 = global i64 1600
@global_var_13008 = local_unnamed_addr global i64 1600
@global_var_13010 = local_unnamed_addr global i64 1600
@global_var_13018 = local_unnamed_addr global i64 1600
@global_var_13020 = local_unnamed_addr global i64 1600
@global_var_13028 = local_unnamed_addr global i64 1600
@global_var_13030 = local_unnamed_addr global i64 1600
@global_var_12fd8 = local_unnamed_addr global i64 4412
@global_var_12fd0 = local_unnamed_addr global i64 0
@global_var_13058 = global i64 0
@global_var_12fc0 = local_unnamed_addr global i64 0
@global_var_12fe0 = local_unnamed_addr global i64 0
@global_var_7f4 = local_unnamed_addr constant i64 4107672500979105824
@global_var_1174 = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_1184 = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_1194 = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_11a4 = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_11b4 = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_11c4 = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_11d4 = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_11e4 = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_11f4 = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_1204 = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_1306 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_1317 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_1328 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_1339 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_134a = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_135b = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_136c = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_137d = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_138e = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_139f = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_13b0 = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_13050 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_14be = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_1214 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_123c = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_125e = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_1285 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_12ad = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_12d9 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_14df = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_13048 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_1500 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_13c1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_13dd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_13f9 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_1414 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_1431 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_144d = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_146a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_1486 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_14a2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_628:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_660(i8* %s) local_unnamed_addr {
dec_label_pc_660:
  %0 = call i32 @strlen(i8* %s), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_670(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_670:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i64 @function_680(i64 %arg1) local_unnamed_addr {
dec_label_pc_680:
  %0 = call i64 @__cxa_finalize.5(i64 %arg1), !insn.addr !4
  ret i64 %0, !insn.addr !4
}

define i64 @function_690(i64 %arg1) local_unnamed_addr {
dec_label_pc_690:
  %0 = call i64 @__gmon_start__.6(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
}

define void @function_6a0() local_unnamed_addr {
dec_label_pc_6a0:
  call void @abort(), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_6b0(i8* %s) local_unnamed_addr {
dec_label_pc_6b0:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_6c0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_6c0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_700:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12fd8, align 8, !insn.addr !9
  %3 = trunc i64 %arg1 to i32, !insn.addr !10
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !10
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !10
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !10
  call void @abort(), !insn.addr !11
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !11
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_734:
  %0 = load i64, i64* @global_var_12fd0, align 8, !insn.addr !12
  %1 = icmp eq i64 %0, 0, !insn.addr !13
  br i1 %1, label %dec_label_pc_744, label %dec_label_pc_740, !insn.addr !13

dec_label_pc_740:                                 ; preds = %dec_label_pc_734
  %2 = call i64 @__gmon_start__.6(i64 %0), !insn.addr !14
  ret i64 %2, !insn.addr !14

dec_label_pc_744:                                 ; preds = %dec_label_pc_734
  ret i64 0, !insn.addr !15
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_750:
  ret i64 ptrtoint (i64* @global_var_13058 to i64), !insn.addr !16
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_780:
  ret i64 ptrtoint (i64* @global_var_13058 to i64), !insn.addr !17
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_7c0:
  %x0.0.reg2mem = alloca i64, !insn.addr !18
  %0 = load i8, i8* bitcast (i64* @global_var_13058 to i8*), align 8, !insn.addr !19
  %1 = zext i8 %0 to i64, !insn.addr !19
  %2 = icmp eq i8 %0, 0, !insn.addr !20
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !20
  br i1 %2, label %dec_label_pc_7d8, label %dec_label_pc_7fc, !insn.addr !20

dec_label_pc_7d8:                                 ; preds = %dec_label_pc_7c0
  %3 = load i64, i64* inttoptr (i64 77768 to i64*), align 8, !insn.addr !21
  %4 = icmp eq i64 %3, 0, !insn.addr !22
  br i1 %4, label %dec_label_pc_7f0, label %dec_label_pc_7e4, !insn.addr !22

dec_label_pc_7e4:                                 ; preds = %dec_label_pc_7d8
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 64) to i64*), align 8, !insn.addr !23
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !24
  br label %dec_label_pc_7f0, !insn.addr !24

dec_label_pc_7f0:                                 ; preds = %dec_label_pc_7e4, %dec_label_pc_7d8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !25
  store i8 1, i8* bitcast (i64* @global_var_13058 to i8*), align 8, !insn.addr !26
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !26
  br label %dec_label_pc_7fc, !insn.addr !26

dec_label_pc_7fc:                                 ; preds = %dec_label_pc_7c0, %dec_label_pc_7f0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !27

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_7fc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_810:
  %0 = call i64 @register_tm_clones(), !insn.addr !28
  ret i64 %0, !insn.addr !28
}

define i64 @cdecl_func() local_unnamed_addr {
dec_label_pc_814:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !29
  %4 = and i64 %3, 4294967295, !insn.addr !29
  ret i64 %4, !insn.addr !30

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_81c:
  ret i64 15, !insn.addr !31
}

define i64 @stdcall_func() local_unnamed_addr {
dec_label_pc_824:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = mul i64 %2, %1, !insn.addr !32
  %4 = and i64 %3, 4294967295, !insn.addr !32
  ret i64 %4, !insn.addr !33

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_82c:
  ret i64 50, !insn.addr !34
}

define i64 @fastcall_func() local_unnamed_addr {
dec_label_pc_834:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = add i64 %2, %1, !insn.addr !35
  %5 = add i64 %4, %3, !insn.addr !36
  %6 = and i64 %5, 4294967295, !insn.addr !36
  ret i64 %6, !insn.addr !37

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_840:
  ret i64 6, !insn.addr !38
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_848:
  ret i64 15, !insn.addr !39
}

define i64 @arm_aapcs_func() local_unnamed_addr {
dec_label_pc_850:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = add i64 %2, %1, !insn.addr !40
  %7 = add i64 %6, %3, !insn.addr !41
  %8 = add i64 %7, %4, !insn.addr !42
  %9 = add i64 %8, %5, !insn.addr !43
  %10 = and i64 %9, 4294967295, !insn.addr !43
  ret i64 %10, !insn.addr !44

; uselistorder directives
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_864:
  ret i64 15, !insn.addr !45
}

define i64 @mips_func() local_unnamed_addr {
dec_label_pc_86c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = add i64 %2, %1, !insn.addr !46
  %6 = add i64 %5, %3, !insn.addr !47
  %7 = add i64 %6, %4, !insn.addr !48
  %8 = and i64 %7, 4294967295, !insn.addr !48
  ret i64 %8, !insn.addr !49

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_87c:
  ret i64 100, !insn.addr !50
}

define i64 @amd64_sysv_func() local_unnamed_addr {
dec_label_pc_884:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  %7 = add i64 %2, %1, !insn.addr !51
  %8 = add i64 %7, %3, !insn.addr !52
  %9 = add i64 %8, %4, !insn.addr !53
  %10 = add i64 %9, %5, !insn.addr !54
  %11 = add i64 %10, %6, !insn.addr !55
  %12 = and i64 %11, 4294967295, !insn.addr !55
  ret i64 %12, !insn.addr !56

; uselistorder directives
  uselistorder i64* %0, { 5, 4, 3, 2, 1, 0 }
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_89c:
  ret i64 21, !insn.addr !57
}

define i64 @ms_x64_func() local_unnamed_addr {
dec_label_pc_8a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = add i64 %2, %1, !insn.addr !58
  %7 = add i64 %6, %3, !insn.addr !59
  %8 = add i64 %7, %4, !insn.addr !60
  %9 = add i64 %8, %5, !insn.addr !61
  %10 = and i64 %9, 4294967295, !insn.addr !61
  ret i64 %10, !insn.addr !62

; uselistorder directives
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_8b8:
  ret i64 15, !insn.addr !63
}

define i64 @vectorcall_func() local_unnamed_addr {
dec_label_pc_8c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = add i64 %2, %1, !insn.addr !64
  %6 = add i64 %5, %3, !insn.addr !65
  %7 = add i64 %6, %4, !insn.addr !66
  %8 = and i64 %7, 4294967295, !insn.addr !66
  ret i64 %8, !insn.addr !67

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_8d0:
  ret i64 10, !insn.addr !68
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_8d8:
  ret i64 33, !insn.addr !69
}

define i64 @varargs_func() local_unnamed_addr {
dec_label_pc_8e0:
  %0 = alloca i64
  %x8.1.reg2mem = alloca i64, !insn.addr !70
  %x8.0.reg2mem = alloca i32, !insn.addr !70
  %x0.0.reg2mem = alloca i64, !insn.addr !70
  %stack_var_-8.2.reg2mem = alloca i32, !insn.addr !70
  %.reg2mem4 = alloca i32*, !insn.addr !70
  %x10.0.reg2mem = alloca i64, !insn.addr !70
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !70
  %.reg2mem = alloca i32*, !insn.addr !70
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !70
  %1 = load i64, i64* %0
  %stack_var_-32 = alloca i32*, align 8
  %stack_var_0 = alloca i64, align 8
  %2 = ptrtoint i32** %stack_var_-32 to i64, !insn.addr !71
  %3 = bitcast i64* %stack_var_0 to i32*
  store i32* %3, i32** %stack_var_-32, align 8, !insn.addr !72
  %4 = trunc i64 %1 to i32, !insn.addr !73
  %5 = icmp slt i32 %4, 1, !insn.addr !73
  store i32* %3, i32** %.reg2mem4, !insn.addr !73
  store i32 -56, i32* %stack_var_-8.2.reg2mem, !insn.addr !73
  store i32 0, i32* %x8.0.reg2mem, !insn.addr !73
  store i64 0, i64* %x8.1.reg2mem, !insn.addr !73
  br i1 %5, label %dec_label_pc_978, label %dec_label_pc_958, !insn.addr !73

dec_label_pc_93c:                                 ; preds = %dec_label_pc_960, %dec_label_pc_958
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %6 = ptrtoint i32* %.reload5 to i64, !insn.addr !74
  %7 = add i64 %6, 8, !insn.addr !75
  %8 = inttoptr i64 %7 to i32*, !insn.addr !76
  store i32* %8, i32** %stack_var_-32, align 8, !insn.addr !76
  store i32* %8, i32** %.reg2mem, !insn.addr !76
  store i32 %stack_var_-8.0.reload, i32* %stack_var_-8.1.reg2mem, !insn.addr !76
  store i64 %6, i64* %x10.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_948, !insn.addr !76

dec_label_pc_948:                                 ; preds = %dec_label_pc_93c, %dec_label_pc_970
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  %.reload = load i32*, i32** %.reg2mem
  %9 = inttoptr i64 %x10.0.reload to i32*, !insn.addr !77
  %10 = load i32, i32* %9, align 4, !insn.addr !77
  %11 = trunc i64 %x0.0.reload to i32, !insn.addr !78
  %12 = add i32 %11, -1, !insn.addr !78
  %13 = zext i32 %12 to i64, !insn.addr !78
  %14 = icmp eq i32 %12, 0, !insn.addr !78
  %15 = add i32 %10, %x8.0.reload, !insn.addr !79
  store i32* %.reload, i32** %.reg2mem4, !insn.addr !80
  store i32 %stack_var_-8.1.reload, i32* %stack_var_-8.2.reg2mem, !insn.addr !80
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !80
  store i32 %15, i32* %x8.0.reg2mem, !insn.addr !80
  br i1 %14, label %dec_label_pc_978.loopexit, label %dec_label_pc_958, !insn.addr !80

dec_label_pc_958:                                 ; preds = %dec_label_pc_8e0, %dec_label_pc_948
  %x8.0.reload = load i32, i32* %x8.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %stack_var_-8.2.reload = load i32, i32* %stack_var_-8.2.reg2mem
  %.reload5 = load i32*, i32** %.reg2mem4, !insn.addr !74
  %16 = icmp sgt i32 %stack_var_-8.2.reload, -1, !insn.addr !81
  store i32 %stack_var_-8.2.reload, i32* %stack_var_-8.0.reg2mem, !insn.addr !81
  br i1 %16, label %dec_label_pc_93c, label %dec_label_pc_960, !insn.addr !81

dec_label_pc_960:                                 ; preds = %dec_label_pc_958
  %17 = add i32 %stack_var_-8.2.reload, 8, !insn.addr !82
  %18 = icmp sgt i32 %17, 0, !insn.addr !83
  store i32 %17, i32* %stack_var_-8.0.reg2mem, !insn.addr !83
  br i1 %18, label %dec_label_pc_93c, label %dec_label_pc_970, !insn.addr !83

dec_label_pc_970:                                 ; preds = %dec_label_pc_960
  %19 = sext i32 %stack_var_-8.2.reload to i64, !insn.addr !84
  %20 = add i64 %19, %2, !insn.addr !85
  store i32* %.reload5, i32** %.reg2mem, !insn.addr !86
  store i32 %17, i32* %stack_var_-8.1.reg2mem, !insn.addr !86
  store i64 %20, i64* %x10.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_948, !insn.addr !86

dec_label_pc_978.loopexit:                        ; preds = %dec_label_pc_948
  %21 = zext i32 %15 to i64, !insn.addr !79
  store i64 %21, i64* %x8.1.reg2mem
  br label %dec_label_pc_978

dec_label_pc_978:                                 ; preds = %dec_label_pc_978.loopexit, %dec_label_pc_8e0
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  ret i64 %x8.1.reload, !insn.addr !87

; uselistorder directives
  uselistorder i32* %.reload5, { 1, 0 }
  uselistorder i32 %stack_var_-8.2.reload, { 1, 2, 3, 0 }
  uselistorder i32 %15, { 1, 0 }
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32** %stack_var_-32, { 2, 1, 0 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 2, 0 }
  uselistorder i32** %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i32** %.reg2mem4, { 0, 2, 1 }
  uselistorder i32* %stack_var_-8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %x8.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_958, { 1, 0 }
  uselistorder label %dec_label_pc_948, { 1, 0 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_984:
  ret i64 42, !insn.addr !88
}

define i64 @func_many_args() local_unnamed_addr {
dec_label_pc_98c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  %7 = load i64, i64* %0
  %8 = load i64, i64* %0
  %9 = add i64 %2, %1, !insn.addr !89
  %10 = add i64 %9, %3, !insn.addr !90
  %11 = add i64 %10, %4, !insn.addr !91
  %12 = add i64 %11, %5, !insn.addr !92
  %13 = add i64 %12, %6, !insn.addr !93
  %14 = add i64 %13, %7, !insn.addr !94
  %15 = add i64 %14, %8, !insn.addr !95
  %16 = and i64 %15, 4294967295, !insn.addr !95
  ret i64 %16, !insn.addr !96

; uselistorder directives
  uselistorder i64* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @func_mixed_args() local_unnamed_addr {
dec_label_pc_9ac:
  %0 = alloca i64
  %1 = alloca double
  %storemerge.reg2mem = alloca i32, !insn.addr !97
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load double, double* %1
  %6 = icmp eq i64 %3, 0, !insn.addr !98
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !98
  br i1 %6, label %dec_label_pc_9dc, label %dec_label_pc_9cc, !insn.addr !98

dec_label_pc_9cc:                                 ; preds = %dec_label_pc_9ac
  %7 = inttoptr i64 %3 to i8*, !insn.addr !99
  %8 = call i32 @strlen(i8* %7), !insn.addr !99
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !100
  br label %dec_label_pc_9dc, !insn.addr !100

dec_label_pc_9dc:                                 ; preds = %dec_label_pc_9ac, %dec_label_pc_9cc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %9 = trunc i64 %4 to i32, !insn.addr !101
  %10 = add i32 %storemerge.reload, %9, !insn.addr !101
  %11 = sitofp i64 %2 to double, !insn.addr !102
  %12 = sitofp i32 %10 to double, !insn.addr !103
  %13 = fadd double %5, %12, !insn.addr !104
  %14 = fadd double %13, %11, !insn.addr !105
  %15 = fptoui double %14 to i32, !insn.addr !106
  %16 = zext i32 %15 to i64, !insn.addr !106
  ret i64 %16, !insn.addr !107

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_9dc, { 1, 0 }
}

define i64 @func_struct_byval() local_unnamed_addr {
dec_label_pc_a04:
  %0 = alloca i64
  %x9.0.reg2mem = alloca i64, !insn.addr !108
  %x8.0.reg2mem = alloca i64, !insn.addr !108
  %1 = load i64, i64* %0
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !109
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_a0c, !insn.addr !109

dec_label_pc_a0c:                                 ; preds = %dec_label_pc_a0c, %dec_label_pc_a04
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %2 = add i64 %x9.0.reload, %1, !insn.addr !110
  %3 = inttoptr i64 %2 to i64*, !insn.addr !110
  %4 = load i64, i64* %3, align 8, !insn.addr !110
  %5 = add nuw nsw i64 %x9.0.reload, 8, !insn.addr !111
  %6 = add i64 %4, %x8.0.reload, !insn.addr !112
  %7 = icmp eq i64 %5, 128, !insn.addr !113
  store i64 %6, i64* %x8.0.reg2mem, !insn.addr !113
  store i64 %5, i64* %x9.0.reg2mem, !insn.addr !113
  br i1 %7, label %dec_label_pc_a20, label %dec_label_pc_a0c, !insn.addr !113

dec_label_pc_a20:                                 ; preds = %dec_label_pc_a0c
  %8 = and i64 %6, 4294967295, !insn.addr !114
  ret i64 %8, !insn.addr !115

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr() local_unnamed_addr {
dec_label_pc_a28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !116
  br i1 %2, label %dec_label_pc_a38, label %dec_label_pc_a2c, !insn.addr !116

dec_label_pc_a2c:                                 ; preds = %dec_label_pc_a28
  %3 = trunc i64 %1 to i32
  %4 = add i64 %1, 4, !insn.addr !117
  %5 = inttoptr i64 %4 to i32*, !insn.addr !117
  %6 = load i32, i32* %5, align 4, !insn.addr !117
  %7 = mul i32 %6, %3, !insn.addr !118
  %8 = zext i32 %7 to i64, !insn.addr !118
  ret i64 %8, !insn.addr !119

dec_label_pc_a38:                                 ; preds = %dec_label_pc_a28
  ret i64 4294967295, !insn.addr !120

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
}

define i64 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_a40:
  %x8.0.reg2mem = alloca i64, !insn.addr !121
  %stack_var_-160 = alloca fp128, align 16
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_14be to i8*)), !insn.addr !122
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1174, i64 0, i64 0), i64 15), !insn.addr !123
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1184, i64 0, i64 0), i64 50), !insn.addr !124
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1194, i64 0, i64 0), i64 6), !insn.addr !125
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11a4, i64 0, i64 0), i64 15), !insn.addr !126
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11b4, i64 0, i64 0), i64 15), !insn.addr !127
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11c4, i64 0, i64 0), i64 100), !insn.addr !128
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11d4, i64 0, i64 0), i64 21), !insn.addr !129
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11e4, i64 0, i64 0), i64 15), !insn.addr !130
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11f4, i64 0, i64 0), i64 10), !insn.addr !131
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1204, i64 0, i64 0), i64 33), !insn.addr !132
  %11 = call i64 @varargs_func(), !insn.addr !133
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1214 to i8*)), !insn.addr !134
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_123c to i8*)), !insn.addr !135
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_125e to i8*)), !insn.addr !136
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1285 to i8*)), !insn.addr !137
  %16 = ptrtoint fp128* %stack_var_-160 to i64, !insn.addr !138
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !138
  br label %dec_label_pc_b60, !insn.addr !138

dec_label_pc_b60:                                 ; preds = %dec_label_pc_b60, %dec_label_pc_a40
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %17 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !139
  %18 = mul i64 %x8.0.reload, 8, !insn.addr !140
  %19 = add i64 %18, %16, !insn.addr !140
  %20 = inttoptr i64 %19 to i64*, !insn.addr !140
  store i64 %17, i64* %20, align 8, !insn.addr !140
  %21 = icmp eq i64 %17, 16, !insn.addr !141
  store i64 %17, i64* %x8.0.reg2mem, !insn.addr !141
  br i1 %21, label %dec_label_pc_ba0.preheader, label %dec_label_pc_b60, !insn.addr !141

dec_label_pc_ba0.preheader:                       ; preds = %dec_label_pc_b60
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_12ad to i8*)), !insn.addr !142
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_12d9 to i8*)), !insn.addr !143
  %24 = sext i32 %23 to i64, !insn.addr !143
  ret i64 %24, !insn.addr !144

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int() local_unnamed_addr {
dec_label_pc_be0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !145
  %3 = and i64 %2, 4294967294, !insn.addr !145
  ret i64 %3, !insn.addr !146
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_be8:
  ret i64 15, !insn.addr !147
}

define i64 @param_by_value_ptr() local_unnamed_addr {
dec_label_pc_bf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !148
  %4 = inttoptr i64 %1 to i32*, !insn.addr !149
  store i32 %3, i32* %4, align 4, !insn.addr !149
  ret i64 1, !insn.addr !150
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_c08:
  ret i64 11, !insn.addr !151
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_c10:
  ret i64 8, !insn.addr !152
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_c18:
  ret i64 8, !insn.addr !153
}

define i64 @param_string() local_unnamed_addr {
dec_label_pc_c20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = urem i64 %1, 256, !insn.addr !154
  %3 = add i64 %1, 1, !insn.addr !155
  %4 = inttoptr i64 %3 to i8*, !insn.addr !155
  %5 = load i8, i8* %4, align 1, !insn.addr !155
  %6 = zext i8 %5 to i64, !insn.addr !155
  %7 = add nuw nsw i64 %2, %6, !insn.addr !156
  ret i64 %7, !insn.addr !157
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_c30:
  ret i64 173, !insn.addr !158
}

define i64 @param_ptr_array() local_unnamed_addr {
dec_label_pc_c38:
  %0 = alloca i64
  %merge.reg2mem = alloca i64, !insn.addr !159
  %x9.0.reg2mem = alloca i64, !insn.addr !159
  %x8.0.reg2mem = alloca i64, !insn.addr !159
  %x0.0.reg2mem = alloca i64, !insn.addr !159
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !160
  %3 = icmp slt i32 %2, 1, !insn.addr !160
  store i64 0, i64* %merge.reg2mem, !insn.addr !160
  br i1 %3, label %dec_label_pc_c60, label %dec_label_pc_c40, !insn.addr !160

dec_label_pc_c40:                                 ; preds = %dec_label_pc_c38
  %4 = and i64 %1, 4294967295, !insn.addr !161
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !161
  store i64 %4, i64* %x9.0.reg2mem, !insn.addr !161
  br label %dec_label_pc_c4c, !insn.addr !161

dec_label_pc_c4c:                                 ; preds = %dec_label_pc_c4c, %dec_label_pc_c40
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %5 = inttoptr i64 %x8.0.reload to i64*, !insn.addr !162
  %6 = load i64, i64* %5, align 8, !insn.addr !162
  %7 = add i64 %x8.0.reload, 8, !insn.addr !162
  %8 = add i64 %x9.0.reload, -1, !insn.addr !163
  %9 = inttoptr i64 %6 to i8*, !insn.addr !164
  %10 = load i8, i8* %9, align 1, !insn.addr !164
  %11 = zext i8 %10 to i64, !insn.addr !164
  %12 = add nuw nsw i64 %x0.0.reload, %11, !insn.addr !165
  %13 = and i64 %12, 4294967295, !insn.addr !165
  %14 = icmp eq i64 %x9.0.reload, 1, !insn.addr !166
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !166
  store i64 %7, i64* %x8.0.reg2mem, !insn.addr !166
  store i64 %8, i64* %x9.0.reg2mem, !insn.addr !166
  store i64 %13, i64* %merge.reg2mem, !insn.addr !166
  br i1 %14, label %dec_label_pc_c60, label %dec_label_pc_c4c, !insn.addr !166

dec_label_pc_c60:                                 ; preds = %dec_label_pc_c4c, %dec_label_pc_c38
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !167

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
}

define i64 @call_ptr_array() local_unnamed_addr {
dec_label_pc_c6c:
  ret i64 300, !insn.addr !168
}

define i64 @param_varargs() local_unnamed_addr {
dec_label_pc_c74:
  %0 = alloca i64
  %x8.1.reg2mem = alloca i64, !insn.addr !169
  %x8.0.reg2mem = alloca i32, !insn.addr !169
  %x0.0.reg2mem = alloca i64, !insn.addr !169
  %stack_var_-8.2.reg2mem = alloca i32, !insn.addr !169
  %.reg2mem4 = alloca i32*, !insn.addr !169
  %x10.0.reg2mem = alloca i64, !insn.addr !169
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !169
  %.reg2mem = alloca i32*, !insn.addr !169
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !169
  %1 = load i64, i64* %0
  %stack_var_-32 = alloca i32*, align 8
  %stack_var_0 = alloca i64, align 8
  %2 = ptrtoint i32** %stack_var_-32 to i64, !insn.addr !170
  %3 = bitcast i64* %stack_var_0 to i32*
  store i32* %3, i32** %stack_var_-32, align 8, !insn.addr !171
  %4 = trunc i64 %1 to i32, !insn.addr !172
  %5 = icmp slt i32 %4, 1, !insn.addr !172
  store i32* %3, i32** %.reg2mem4, !insn.addr !172
  store i32 -56, i32* %stack_var_-8.2.reg2mem, !insn.addr !172
  store i32 0, i32* %x8.0.reg2mem, !insn.addr !172
  store i64 0, i64* %x8.1.reg2mem, !insn.addr !172
  br i1 %5, label %dec_label_pc_d0c, label %dec_label_pc_cec, !insn.addr !172

dec_label_pc_cd0:                                 ; preds = %dec_label_pc_cf4, %dec_label_pc_cec
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %6 = ptrtoint i32* %.reload5 to i64, !insn.addr !173
  %7 = add i64 %6, 8, !insn.addr !174
  %8 = inttoptr i64 %7 to i32*, !insn.addr !175
  store i32* %8, i32** %stack_var_-32, align 8, !insn.addr !175
  store i32* %8, i32** %.reg2mem, !insn.addr !175
  store i32 %stack_var_-8.0.reload, i32* %stack_var_-8.1.reg2mem, !insn.addr !175
  store i64 %6, i64* %x10.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_cdc, !insn.addr !175

dec_label_pc_cdc:                                 ; preds = %dec_label_pc_cd0, %dec_label_pc_d04
  %x10.0.reload = load i64, i64* %x10.0.reg2mem
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  %.reload = load i32*, i32** %.reg2mem
  %9 = inttoptr i64 %x10.0.reload to i32*, !insn.addr !176
  %10 = load i32, i32* %9, align 4, !insn.addr !176
  %11 = trunc i64 %x0.0.reload to i32, !insn.addr !177
  %12 = add i32 %11, -1, !insn.addr !177
  %13 = zext i32 %12 to i64, !insn.addr !177
  %14 = icmp eq i32 %12, 0, !insn.addr !177
  %15 = add i32 %10, %x8.0.reload, !insn.addr !178
  store i32* %.reload, i32** %.reg2mem4, !insn.addr !179
  store i32 %stack_var_-8.1.reload, i32* %stack_var_-8.2.reg2mem, !insn.addr !179
  store i64 %13, i64* %x0.0.reg2mem, !insn.addr !179
  store i32 %15, i32* %x8.0.reg2mem, !insn.addr !179
  br i1 %14, label %dec_label_pc_d0c.loopexit, label %dec_label_pc_cec, !insn.addr !179

dec_label_pc_cec:                                 ; preds = %dec_label_pc_c74, %dec_label_pc_cdc
  %x8.0.reload = load i32, i32* %x8.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %stack_var_-8.2.reload = load i32, i32* %stack_var_-8.2.reg2mem
  %.reload5 = load i32*, i32** %.reg2mem4, !insn.addr !173
  %16 = icmp sgt i32 %stack_var_-8.2.reload, -1, !insn.addr !180
  store i32 %stack_var_-8.2.reload, i32* %stack_var_-8.0.reg2mem, !insn.addr !180
  br i1 %16, label %dec_label_pc_cd0, label %dec_label_pc_cf4, !insn.addr !180

dec_label_pc_cf4:                                 ; preds = %dec_label_pc_cec
  %17 = add i32 %stack_var_-8.2.reload, 8, !insn.addr !181
  %18 = icmp sgt i32 %17, 0, !insn.addr !182
  store i32 %17, i32* %stack_var_-8.0.reg2mem, !insn.addr !182
  br i1 %18, label %dec_label_pc_cd0, label %dec_label_pc_d04, !insn.addr !182

dec_label_pc_d04:                                 ; preds = %dec_label_pc_cf4
  %19 = sext i32 %stack_var_-8.2.reload to i64, !insn.addr !183
  %20 = add i64 %19, %2, !insn.addr !184
  store i32* %.reload5, i32** %.reg2mem, !insn.addr !185
  store i32 %17, i32* %stack_var_-8.1.reg2mem, !insn.addr !185
  store i64 %20, i64* %x10.0.reg2mem, !insn.addr !185
  br label %dec_label_pc_cdc, !insn.addr !185

dec_label_pc_d0c.loopexit:                        ; preds = %dec_label_pc_cdc
  %21 = zext i32 %15 to i64, !insn.addr !178
  store i64 %21, i64* %x8.1.reg2mem
  br label %dec_label_pc_d0c

dec_label_pc_d0c:                                 ; preds = %dec_label_pc_d0c.loopexit, %dec_label_pc_c74
  %x8.1.reload = load i64, i64* %x8.1.reg2mem
  ret i64 %x8.1.reload, !insn.addr !186

; uselistorder directives
  uselistorder i32* %.reload5, { 1, 0 }
  uselistorder i32 %stack_var_-8.2.reload, { 1, 2, 3, 0 }
  uselistorder i32 %15, { 1, 0 }
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32** %stack_var_-32, { 2, 1, 0 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 2, 0 }
  uselistorder i32** %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x10.0.reg2mem, { 1, 0, 2 }
  uselistorder i32** %.reg2mem4, { 0, 2, 1 }
  uselistorder i32* %stack_var_-8.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %x8.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 -1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_cec, { 1, 0 }
  uselistorder label %dec_label_pc_cdc, { 1, 0 }
}

define i64 @call_varargs_param(i64 %arg1) local_unnamed_addr {
dec_label_pc_d18:
  %0 = call i64 @param_varargs(), !insn.addr !187
  ret i64 %0, !insn.addr !188
}

define i64 @param_func_ptr() local_unnamed_addr {
dec_label_pc_d40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !189
  ret i64 %2, !insn.addr !190
}

define i64 @function_d54(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_d54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !191
  %3 = and i64 %2, 4294967295, !insn.addr !191
  ret i64 %3, !insn.addr !192
}

define i64 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_d60:
  ret i64 20, !insn.addr !193
}

define i64 @param_double_ptr() local_unnamed_addr {
dec_label_pc_d68:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !194
  br i1 %3, label %dec_label_pc_d88, label %dec_label_pc_d78, !insn.addr !194

dec_label_pc_d78:                                 ; preds = %dec_label_pc_d68
  %4 = trunc i64 %1 to i32, !insn.addr !195
  %5 = inttoptr i64 %2 to i32*, !insn.addr !195
  store i32 %4, i32* %5, align 4, !insn.addr !195
  %6 = inttoptr i64 %2 to i64*, !insn.addr !196
  store i64 0, i64* %6, align 8, !insn.addr !196
  ret i64 1, !insn.addr !197

dec_label_pc_d88:                                 ; preds = %dec_label_pc_d68
  ret i64 4294967295, !insn.addr !198

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_d90:
  ret i64 21, !insn.addr !199
}

define i64 @param_complex_cast() local_unnamed_addr {
dec_label_pc_d98:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !200
  switch i32 %3, label %dec_label_pc_db8 [
    i32 1, label %dec_label_pc_dac
    i32 0, label %dec_label_pc_da4
  ]

dec_label_pc_da4:                                 ; preds = %dec_label_pc_d98
  %4 = and i64 %2, 4294967295, !insn.addr !201
  ret i64 %4, !insn.addr !202

dec_label_pc_dac:                                 ; preds = %dec_label_pc_d98
  %5 = trunc i64 %2 to i32
  %6 = add i64 %2, 4, !insn.addr !203
  %7 = inttoptr i64 %6 to i32*, !insn.addr !203
  %8 = load i32, i32* %7, align 4, !insn.addr !203
  %9 = add i32 %8, %5, !insn.addr !204
  %10 = zext i32 %9 to i64, !insn.addr !204
  ret i64 %10, !insn.addr !205

dec_label_pc_db8:                                 ; preds = %dec_label_pc_d98
  ret i64 4294967295, !insn.addr !206

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_dc0:
  ret i64 305419896, !insn.addr !207
}

define i64 @param_struct_byval() local_unnamed_addr {
dec_label_pc_dcc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i64 %1, 60, !insn.addr !208
  %4 = inttoptr i64 %3 to i32*, !insn.addr !208
  %5 = load i32, i32* %4, align 4, !insn.addr !208
  %6 = add i32 %5, %2, !insn.addr !209
  %7 = zext i32 %6 to i64, !insn.addr !209
  ret i64 %7, !insn.addr !210
}

define i64 @call_struct_byval() local_unnamed_addr {
dec_label_pc_ddc:
  %0 = alloca i32
  %x8.0.reg2mem = alloca i64, !insn.addr !211
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-64 to i64, !insn.addr !212
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !212
  br label %dec_label_pc_de8, !insn.addr !212

dec_label_pc_de8:                                 ; preds = %dec_label_pc_de8, %dec_label_pc_ddc
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = trunc i64 %x8.0.reload to i32, !insn.addr !213
  %4 = mul i64 %x8.0.reload, 4, !insn.addr !213
  %5 = add i64 %4, %2, !insn.addr !213
  %6 = inttoptr i64 %5 to i32*, !insn.addr !213
  store i32 %3, i32* %6, align 4, !insn.addr !213
  %7 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !214
  %8 = icmp eq i64 %7, 16, !insn.addr !215
  store i64 %7, i64* %x8.0.reg2mem, !insn.addr !215
  br i1 %8, label %dec_label_pc_df8, label %dec_label_pc_de8, !insn.addr !215

dec_label_pc_df8:                                 ; preds = %dec_label_pc_de8
  %9 = load i32, i32* %stack_var_-64, align 4, !insn.addr !216
  %10 = add i32 %9, %1, !insn.addr !217
  %11 = zext i32 %10 to i64, !insn.addr !217
  ret i64 %11, !insn.addr !218

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-64, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_order_dep() local_unnamed_addr {
dec_label_pc_e0c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !219
  %4 = and i64 %3, 4294967295, !insn.addr !219
  ret i64 %4, !insn.addr !220

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_e14:
  ret i64 3, !insn.addr !221
}

define i64 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_e1c:
  %0 = alloca i32
  %x8.0.reg2mem = alloca i64, !insn.addr !222
  %1 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_14df to i8*)), !insn.addr !223
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1306, i64 0, i64 0), i64 15), !insn.addr !224
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1317, i64 0, i64 0), i64 11), !insn.addr !225
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1328, i64 0, i64 0), i64 8), !insn.addr !226
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1339, i64 0, i64 0), i64 173), !insn.addr !227
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_134a, i64 0, i64 0), i64 300), !insn.addr !228
  %8 = call i64 @param_varargs(), !insn.addr !229
  %9 = and i64 %8, 4294967295, !insn.addr !230
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_135b, i64 0, i64 0), i64 %9), !insn.addr !231
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_136c, i64 0, i64 0), i64 20), !insn.addr !232
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_137d, i64 0, i64 0), i64 21), !insn.addr !233
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_138e, i64 0, i64 0), i64 305419896), !insn.addr !234
  %14 = ptrtoint i32* %stack_var_-80 to i64, !insn.addr !235
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !235
  br label %dec_label_pc_ee8, !insn.addr !235

dec_label_pc_ee8:                                 ; preds = %dec_label_pc_ee8, %dec_label_pc_e1c
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %15 = trunc i64 %x8.0.reload to i32, !insn.addr !236
  %16 = mul i64 %x8.0.reload, 4, !insn.addr !236
  %17 = add i64 %16, %14, !insn.addr !236
  %18 = inttoptr i64 %17 to i32*, !insn.addr !236
  store i32 %15, i32* %18, align 4, !insn.addr !236
  %19 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !237
  %20 = icmp eq i64 %19, 16, !insn.addr !238
  store i64 %19, i64* %x8.0.reg2mem, !insn.addr !238
  br i1 %20, label %dec_label_pc_ef8, label %dec_label_pc_ee8, !insn.addr !238

dec_label_pc_ef8:                                 ; preds = %dec_label_pc_ee8
  %21 = load i32, i32* %stack_var_-80, align 4, !insn.addr !239
  %22 = add i32 %21, %1, !insn.addr !240
  %23 = zext i32 %22 to i64, !insn.addr !240
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_139f, i64 0, i64 0), i64 %23), !insn.addr !241
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_13b0, i64 0, i64 0), i64 3), !insn.addr !242
  %26 = sext i32 %25 to i64, !insn.addr !242
  ret i64 %26, !insn.addr !243

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-80, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 3, { 1, 0 }
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 ()* @param_varargs, { 1, 0 }
  uselistorder i64 300, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 3, 4, 5, 1, 2, 0, 6, 7 }
  uselistorder i64 11, { 1, 0 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type() local_unnamed_addr {
dec_label_pc_f2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !244
  %3 = and i64 %2, 4294967294, !insn.addr !244
  ret i64 %3, !insn.addr !245
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_f34:
  ret i64 42, !insn.addr !246
}

define i64 @ret_pointer() local_unnamed_addr {
dec_label_pc_f3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 4, !insn.addr !247
  ret i64 %2, !insn.addr !248
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_f44:
  ret i64 20, !insn.addr !249

; uselistorder directives
  uselistorder i64 20, { 0, 2, 1 }
}

define i64 @ret_small_struct() local_unnamed_addr {
dec_label_pc_f4c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %2, 4294967295, !insn.addr !250
  %4 = call i64 @__asm_bfi(i64 %3, i64 %1, i64 32, i64 32), !insn.addr !251
  ret i64 %4, !insn.addr !252

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_f58:
  ret i64 7, !insn.addr !253
}

define i64 @ret_large_struct() local_unnamed_addr {
dec_label_pc_f60:
  %0 = alloca i64
  %x9.0.reg2mem = alloca i64, !insn.addr !254
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !255
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_f68, !insn.addr !256

dec_label_pc_f68:                                 ; preds = %dec_label_pc_f68, %dec_label_pc_f60
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %4 = trunc i64 %x9.0.reload to i32, !insn.addr !255
  %5 = add i32 %4, %3, !insn.addr !255
  %6 = mul i64 %x9.0.reload, 4, !insn.addr !257
  %7 = add i64 %6, %1, !insn.addr !257
  %8 = inttoptr i64 %7 to i32*, !insn.addr !257
  store i32 %5, i32* %8, align 4, !insn.addr !257
  %9 = add nuw nsw i64 %x9.0.reload, 1, !insn.addr !258
  %10 = icmp eq i64 %9, 16, !insn.addr !259
  store i64 %9, i64* %x9.0.reg2mem, !insn.addr !259
  br i1 %10, label %dec_label_pc_f7c, label %dec_label_pc_f68, !insn.addr !259

dec_label_pc_f7c:                                 ; preds = %dec_label_pc_f68
  ret i64 %2, !insn.addr !260

; uselistorder directives
  uselistorder i64 %x9.0.reload, { 1, 2, 0 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_f80:
  %0 = alloca i32
  %x8.0.reg2mem = alloca i64, !insn.addr !261
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-64 to i64, !insn.addr !262
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_f8c, !insn.addr !262

dec_label_pc_f8c:                                 ; preds = %dec_label_pc_f8c, %dec_label_pc_f80
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = trunc i64 %x8.0.reload to i32, !insn.addr !263
  %4 = add i32 %3, 100, !insn.addr !263
  %5 = mul i64 %x8.0.reload, 4, !insn.addr !264
  %6 = add i64 %5, %2, !insn.addr !264
  %7 = inttoptr i64 %6 to i32*, !insn.addr !264
  store i32 %4, i32* %7, align 4, !insn.addr !264
  %8 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !265
  %9 = icmp eq i64 %8, 16, !insn.addr !266
  store i64 %8, i64* %x8.0.reg2mem, !insn.addr !266
  br i1 %9, label %dec_label_pc_fa0, label %dec_label_pc_f8c, !insn.addr !266

dec_label_pc_fa0:                                 ; preds = %dec_label_pc_f8c
  %10 = load i32, i32* %stack_var_-64, align 4, !insn.addr !267
  %11 = add i32 %10, %1, !insn.addr !268
  %12 = zext i32 %11 to i64, !insn.addr !268
  ret i64 %12, !insn.addr !269

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-64, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_a() local_unnamed_addr {
dec_label_pc_fb4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !270
  %3 = and i64 %2, 4294967295, !insn.addr !270
  ret i64 %3, !insn.addr !271
}

define i64 @func_b() local_unnamed_addr {
dec_label_pc_fbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !272
  %3 = and i64 %2, 4294967294, !insn.addr !272
  ret i64 %3, !insn.addr !273
}

define i64 @ret_func_ptr() local_unnamed_addr {
dec_label_pc_fc4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !274
  %3 = icmp eq i32 %2, 0, !insn.addr !274
  %4 = select i1 %3, i64 4020, i64 4028, !insn.addr !275
  ret i64 %4, !insn.addr !276
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_fe0:
  ret i64 10, !insn.addr !277
}

define i64 @ret_opaque_handle() local_unnamed_addr {
dec_label_pc_fe8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !278
  %3 = icmp eq i32 %2, 0, !insn.addr !278
  %4 = select i1 %3, i64 ptrtoint (i32* @global_var_13048 to i64), i64 ptrtoint (i64* @global_var_13050 to i64), !insn.addr !279
  ret i64 %4, !insn.addr !280
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1004:
  %0 = load i32, i32* @global_var_13048, align 4, !insn.addr !281
  %1 = zext i32 %0 to i64, !insn.addr !281
  ret i64 %1, !insn.addr !282

; uselistorder directives
  uselistorder i32* @global_var_13048, { 1, 0 }
}

define i64 @ret_complex_expr() local_unnamed_addr {
dec_label_pc_1010:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = mul i64 %1, 2, !insn.addr !283
  %5 = add i64 %1, 10, !insn.addr !284
  %6 = trunc i64 %3 to i32, !insn.addr !285
  %7 = trunc i64 %2 to i32, !insn.addr !285
  %8 = sub i32 %6, %7, !insn.addr !285
  %9 = xor i64 %3, %2
  %10 = trunc i64 %9 to i32, !insn.addr !285
  %11 = xor i32 %8, %6, !insn.addr !285
  %12 = and i32 %11, %10, !insn.addr !285
  %13 = icmp slt i32 %12, 0, !insn.addr !285
  %14 = icmp slt i32 %8, 0, !insn.addr !285
  %15 = icmp eq i32 %8, 0, !insn.addr !285
  %16 = icmp ne i1 %14, %13, !insn.addr !286
  %17 = or i1 %15, %16, !insn.addr !286
  %18 = select i1 %17, i64 %5, i64 %4, !insn.addr !286
  %19 = and i64 %18, 4294967295, !insn.addr !286
  ret i64 %19, !insn.addr !287

; uselistorder directives
  uselistorder i32 %8, { 1, 2, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 3, 4, 11, 0, 1, 5, 12, 2 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1024:
  ret i64 40, !insn.addr !288
}

define i64 @ret_multi_branch() local_unnamed_addr {
dec_label_pc_102c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !289
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !290
  %3 = icmp ult i32 %2, 3, !insn.addr !290
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !291
  br i1 %3, label %4, label %8, !insn.addr !291

; <label>:4:                                      ; preds = %dec_label_pc_102c
  %5 = mul i64 %1, 10, !insn.addr !292
  %6 = add i64 %5, 10, !insn.addr !293
  %7 = and i64 %6, 4294967294, !insn.addr !291
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !291
  br label %8, !insn.addr !291

; <label>:8:                                      ; preds = %dec_label_pc_102c, %4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !294

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 10, { 2, 3, 4, 0, 5, 6, 7, 1 }
  uselistorder i64 4294967295, { 0, 5, 6, 7, 8, 9, 1, 4, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 }
  uselistorder label %8, { 1, 0 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1044:
  ret i64 60, !insn.addr !295
}

define i64 @ret_void() local_unnamed_addr {
dec_label_pc_104c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !296
  %4 = mul i32 %3, 3, !insn.addr !296
  %5 = inttoptr i64 %1 to i32*, !insn.addr !297
  store i32 %4, i32* %5, align 4, !insn.addr !297
  ret i64 %2, !insn.addr !298

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1058:
  ret i64 21, !insn.addr !299

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define i64 @test_return_values() local_unnamed_addr {
dec_label_pc_1060:
  %x8.0.reg2mem = alloca i64, !insn.addr !300
  %stack_var_-80 = alloca i64, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1500 to i8*)), !insn.addr !301
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_13c1 to i8*)), !insn.addr !302
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_13dd to i8*)), !insn.addr !303
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_13f9 to i8*)), !insn.addr !304
  %4 = ptrtoint i64* %stack_var_-80 to i64, !insn.addr !305
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !305
  br label %dec_label_pc_10b0, !insn.addr !305

dec_label_pc_10b0:                                ; preds = %dec_label_pc_10b0, %dec_label_pc_1060
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %5 = trunc i64 %x8.0.reload to i32, !insn.addr !306
  %6 = add i32 %5, 100, !insn.addr !306
  %7 = mul i64 %x8.0.reload, 4, !insn.addr !307
  %8 = add i64 %7, %4, !insn.addr !307
  %9 = inttoptr i64 %8 to i32*, !insn.addr !307
  store i32 %6, i32* %9, align 4, !insn.addr !307
  %10 = add nuw nsw i64 %x8.0.reload, 1, !insn.addr !308
  %11 = icmp eq i64 %10, 16, !insn.addr !309
  store i64 %10, i64* %x8.0.reg2mem, !insn.addr !309
  br i1 %11, label %dec_label_pc_10c4, label %dec_label_pc_10b0, !insn.addr !309

dec_label_pc_10c4:                                ; preds = %dec_label_pc_10b0
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1414 to i8*)), !insn.addr !310
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1431 to i8*)), !insn.addr !311
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_144d to i8*)), !insn.addr !312
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_146a to i8*)), !insn.addr !313
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1486 to i8*)), !insn.addr !314
  %17 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_14a2 to i8*)), !insn.addr !315
  %18 = sext i32 %17 to i64, !insn.addr !315
  ret i64 %18, !insn.addr !316

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 2, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 1, { 4, 5, 6, 7, 8, 1, 3, 9, 2, 10, 0 }
  uselistorder i64 4, { 0, 1, 2, 5, 3, 4, 6, 7 }
  uselistorder i32 100, { 1, 2, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 33, 32, 31, 30, 29, 28, 27, 34, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 35, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_113c:
  %0 = call i64 @test_calling_conventions(), !insn.addr !317
  %1 = call i64 @test_parameter_passing(), !insn.addr !318
  %2 = call i64 @test_return_values(), !insn.addr !319
  ret i64 0, !insn.addr !320

; uselistorder directives
  uselistorder i64 0, { 12, 0, 1, 2, 50, 51, 52, 53, 3, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 4, 96, 97, 5, 7, 6, 8, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 98, 9, 10, 99, 11, 100, 13, 101, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 92, 93, 94, 95 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_115c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !321

; uselistorder directives
  uselistorder i32 1, { 36, 84, 41, 35, 42, 34, 33, 32, 31, 30, 29, 75, 43, 39, 44, 28, 27, 26, 25, 76, 45, 38, 24, 77, 46, 37, 23, 74, 22, 21, 20, 19, 81, 85, 78, 55, 54, 53, 52, 51, 50, 49, 48, 47, 18, 82, 59, 58, 57, 56, 17, 16, 15, 14, 79, 60, 13, 62, 61, 12, 63, 40, 11, 10, 83, 86, 80, 72, 71, 70, 69, 68, 67, 66, 65, 64, 9, 8, 7, 6, 5, 4, 3, 2, 1, 73, 87, 0 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

declare i64 @__gmon_start__.6(i64) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__asm_bfi(i64, i64, i64, i64) local_unnamed_addr

!0 = !{i64 1588}
!1 = !{i64 1596}
!2 = !{i64 1644}
!3 = !{i64 1660}
!4 = !{i64 1676}
!5 = !{i64 1692}
!6 = !{i64 1708}
!7 = !{i64 1724}
!8 = !{i64 1740}
!9 = !{i64 1824}
!10 = !{i64 1836}
!11 = !{i64 1840}
!12 = !{i64 1848}
!13 = !{i64 1852}
!14 = !{i64 1856}
!15 = !{i64 1860}
!16 = !{i64 1916}
!17 = !{i64 1976}
!18 = !{i64 1984}
!19 = !{i64 2000}
!20 = !{i64 2004}
!21 = !{i64 2012}
!22 = !{i64 2016}
!23 = !{i64 2024}
!24 = !{i64 2028}
!25 = !{i64 2032}
!26 = !{i64 2040}
!27 = !{i64 2052}
!28 = !{i64 2064}
!29 = !{i64 2068}
!30 = !{i64 2072}
!31 = !{i64 2080}
!32 = !{i64 2084}
!33 = !{i64 2088}
!34 = !{i64 2096}
!35 = !{i64 2100}
!36 = !{i64 2104}
!37 = !{i64 2108}
!38 = !{i64 2116}
!39 = !{i64 2124}
!40 = !{i64 2128}
!41 = !{i64 2132}
!42 = !{i64 2136}
!43 = !{i64 2140}
!44 = !{i64 2144}
!45 = !{i64 2152}
!46 = !{i64 2156}
!47 = !{i64 2160}
!48 = !{i64 2164}
!49 = !{i64 2168}
!50 = !{i64 2176}
!51 = !{i64 2180}
!52 = !{i64 2184}
!53 = !{i64 2188}
!54 = !{i64 2192}
!55 = !{i64 2196}
!56 = !{i64 2200}
!57 = !{i64 2208}
!58 = !{i64 2212}
!59 = !{i64 2216}
!60 = !{i64 2220}
!61 = !{i64 2224}
!62 = !{i64 2228}
!63 = !{i64 2236}
!64 = !{i64 2240}
!65 = !{i64 2244}
!66 = !{i64 2248}
!67 = !{i64 2252}
!68 = !{i64 2260}
!69 = !{i64 2268}
!70 = !{i64 2272}
!71 = !{i64 2344}
!72 = !{i64 2348}
!73 = !{i64 2352}
!74 = !{i64 2364}
!75 = !{i64 2368}
!76 = !{i64 2372}
!77 = !{i64 2376}
!78 = !{i64 2380}
!79 = !{i64 2384}
!80 = !{i64 2388}
!81 = !{i64 2396}
!82 = !{i64 2400}
!83 = !{i64 2412}
!84 = !{i64 2392}
!85 = !{i64 2416}
!86 = !{i64 2420}
!87 = !{i64 2432}
!88 = !{i64 2440}
!89 = !{i64 2444}
!90 = !{i64 2448}
!91 = !{i64 2452}
!92 = !{i64 2456}
!93 = !{i64 2460}
!94 = !{i64 2464}
!95 = !{i64 2468}
!96 = !{i64 2472}
!97 = !{i64 2476}
!98 = !{i64 2504}
!99 = !{i64 2512}
!100 = !{i64 2516}
!101 = !{i64 2524}
!102 = !{i64 2528}
!103 = !{i64 2536}
!104 = !{i64 2544}
!105 = !{i64 2548}
!106 = !{i64 2552}
!107 = !{i64 2560}
!108 = !{i64 2564}
!109 = !{i64 2568}
!110 = !{i64 2572}
!111 = !{i64 2576}
!112 = !{i64 2584}
!113 = !{i64 2588}
!114 = !{i64 2592}
!115 = !{i64 2596}
!116 = !{i64 2600}
!117 = !{i64 2604}
!118 = !{i64 2608}
!119 = !{i64 2612}
!120 = !{i64 2620}
!121 = !{i64 2624}
!122 = !{i64 2648}
!123 = !{i64 2664}
!124 = !{i64 2680}
!125 = !{i64 2696}
!126 = !{i64 2712}
!127 = !{i64 2728}
!128 = !{i64 2744}
!129 = !{i64 2760}
!130 = !{i64 2776}
!131 = !{i64 2792}
!132 = !{i64 2808}
!133 = !{i64 2836}
!134 = !{i64 2852}
!135 = !{i64 2868}
!136 = !{i64 2884}
!137 = !{i64 2900}
!138 = !{i64 2908}
!139 = !{i64 2912}
!140 = !{i64 2920}
!141 = !{i64 2928}
!142 = !{i64 3004}
!143 = !{i64 3020}
!144 = !{i64 3036}
!145 = !{i64 3040}
!146 = !{i64 3044}
!147 = !{i64 3052}
!148 = !{i64 3068}
!149 = !{i64 3072}
!150 = !{i64 3076}
!151 = !{i64 3084}
!152 = !{i64 3092}
!153 = !{i64 3100}
!154 = !{i64 3104}
!155 = !{i64 3108}
!156 = !{i64 3112}
!157 = !{i64 3116}
!158 = !{i64 3124}
!159 = !{i64 3128}
!160 = !{i64 3132}
!161 = !{i64 3144}
!162 = !{i64 3148}
!163 = !{i64 3152}
!164 = !{i64 3156}
!165 = !{i64 3160}
!166 = !{i64 3164}
!167 = !{i64 3168}
!168 = !{i64 3184}
!169 = !{i64 3188}
!170 = !{i64 3260}
!171 = !{i64 3264}
!172 = !{i64 3268}
!173 = !{i64 3280}
!174 = !{i64 3284}
!175 = !{i64 3288}
!176 = !{i64 3292}
!177 = !{i64 3296}
!178 = !{i64 3300}
!179 = !{i64 3304}
!180 = !{i64 3312}
!181 = !{i64 3316}
!182 = !{i64 3328}
!183 = !{i64 3308}
!184 = !{i64 3332}
!185 = !{i64 3336}
!186 = !{i64 3348}
!187 = !{i64 3380}
!188 = !{i64 3388}
!189 = !{i64 3404}
!190 = !{i64 3408}
!191 = !{i64 3412}
!192 = !{i64 3420}
!193 = !{i64 3428}
!194 = !{i64 3432}
!195 = !{i64 3452}
!196 = !{i64 3456}
!197 = !{i64 3460}
!198 = !{i64 3468}
!199 = !{i64 3476}
!200 = !{i64 3480}
!201 = !{i64 3492}
!202 = !{i64 3496}
!203 = !{i64 3500}
!204 = !{i64 3504}
!205 = !{i64 3508}
!206 = !{i64 3516}
!207 = !{i64 3528}
!208 = !{i64 3536}
!209 = !{i64 3540}
!210 = !{i64 3544}
!211 = !{i64 3548}
!212 = !{i64 3556}
!213 = !{i64 3560}
!214 = !{i64 3564}
!215 = !{i64 3572}
!216 = !{i64 3576}
!217 = !{i64 3584}
!218 = !{i64 3592}
!219 = !{i64 3596}
!220 = !{i64 3600}
!221 = !{i64 3608}
!222 = !{i64 3612}
!223 = !{i64 3632}
!224 = !{i64 3648}
!225 = !{i64 3664}
!226 = !{i64 3680}
!227 = !{i64 3696}
!228 = !{i64 3712}
!229 = !{i64 3736}
!230 = !{i64 3740}
!231 = !{i64 3752}
!232 = !{i64 3768}
!233 = !{i64 3784}
!234 = !{i64 3804}
!235 = !{i64 3812}
!236 = !{i64 3816}
!237 = !{i64 3820}
!238 = !{i64 3828}
!239 = !{i64 3832}
!240 = !{i64 3848}
!241 = !{i64 3852}
!242 = !{i64 3868}
!243 = !{i64 3880}
!244 = !{i64 3884}
!245 = !{i64 3888}
!246 = !{i64 3896}
!247 = !{i64 3900}
!248 = !{i64 3904}
!249 = !{i64 3912}
!250 = !{i64 3916}
!251 = !{i64 3920}
!252 = !{i64 3924}
!253 = !{i64 3932}
!254 = !{i64 3936}
!255 = !{i64 3944}
!256 = !{i64 3940}
!257 = !{i64 3948}
!258 = !{i64 3952}
!259 = !{i64 3960}
!260 = !{i64 3964}
!261 = !{i64 3968}
!262 = !{i64 3976}
!263 = !{i64 3980}
!264 = !{i64 3984}
!265 = !{i64 3988}
!266 = !{i64 3996}
!267 = !{i64 4000}
!268 = !{i64 4008}
!269 = !{i64 4016}
!270 = !{i64 4020}
!271 = !{i64 4024}
!272 = !{i64 4028}
!273 = !{i64 4032}
!274 = !{i64 4052}
!275 = !{i64 4056}
!276 = !{i64 4060}
!277 = !{i64 4068}
!278 = !{i64 4088}
!279 = !{i64 4092}
!280 = !{i64 4096}
!281 = !{i64 4104}
!282 = !{i64 4108}
!283 = !{i64 4112}
!284 = !{i64 4116}
!285 = !{i64 4120}
!286 = !{i64 4124}
!287 = !{i64 4128}
!288 = !{i64 4136}
!289 = !{i64 4140}
!290 = !{i64 4144}
!291 = !{i64 4156}
!292 = !{i64 4148}
!293 = !{i64 4152}
!294 = !{i64 4160}
!295 = !{i64 4168}
!296 = !{i64 4172}
!297 = !{i64 4176}
!298 = !{i64 4180}
!299 = !{i64 4188}
!300 = !{i64 4192}
!301 = !{i64 4212}
!302 = !{i64 4228}
!303 = !{i64 4244}
!304 = !{i64 4260}
!305 = !{i64 4268}
!306 = !{i64 4272}
!307 = !{i64 4276}
!308 = !{i64 4280}
!309 = !{i64 4288}
!310 = !{i64 4312}
!311 = !{i64 4328}
!312 = !{i64 4348}
!313 = !{i64 4364}
!314 = !{i64 4380}
!315 = !{i64 4396}
!316 = !{i64 4408}
!317 = !{i64 4420}
!318 = !{i64 4424}
!319 = !{i64 4428}
!320 = !{i64 4440}
!321 = !{i64 4460}
