source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

@global_var_12f88 = local_unnamed_addr global i64 1872
@global_var_12f90 = local_unnamed_addr global i64 1872
@global_var_12f98 = local_unnamed_addr global i64 1872
@global_var_12fa0 = local_unnamed_addr global i64 1872
@global_var_12fa8 = local_unnamed_addr global i64 1872
@global_var_12fb0 = local_unnamed_addr global i64 1872
@global_var_12fb8 = local_unnamed_addr global i64 1872
@global_var_12fc0 = local_unnamed_addr global i64 1872
@global_var_12ff0 = local_unnamed_addr global i64 2048
@global_var_13000 = global i64 0
@global_var_13038 = global i64 0
@global_var_12fd0 = local_unnamed_addr global i64 0
@global_var_12ff8 = local_unnamed_addr global i64 0
@global_var_934 = local_unnamed_addr constant i64 4107531763490750496
@global_var_12fe8 = local_unnamed_addr global i64 0
@global_var_147d = constant [16 x i8] c"CALL-L1-01: %d\0A\00"
@global_var_148d = constant [16 x i8] c"CALL-L1-02: %d\0A\00"
@global_var_149d = constant [16 x i8] c"CALL-L1-03: %d\0A\00"
@global_var_14ad = constant [16 x i8] c"CALL-L1-04: %d\0A\00"
@global_var_14bd = constant [16 x i8] c"CALL-L1-05: %d\0A\00"
@global_var_14cd = constant [16 x i8] c"CALL-L1-06: %d\0A\00"
@global_var_14dd = constant [16 x i8] c"CALL-L1-07: %d\0A\00"
@global_var_14ed = constant [16 x i8] c"CALL-L1-08: %d\0A\00"
@global_var_14fd = constant [16 x i8] c"CALL-L1-09: %d\0A\00"
@global_var_150d = constant [16 x i8] c"CALL-L1-10: %d\0A\00"
@global_var_158e = constant [5 x i8] c"test\00"
@global_var_1818 = local_unnamed_addr constant i64 4614253070214989087
@global_var_180b = constant [4 x i8] c"abc\00"
@global_var_180f = constant [4 x i8] c"def\00"
@global_var_1813 = constant [4 x i8] c"ghi\00"
@global_var_13010 = local_unnamed_addr global [3 x i8*] [i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_180b, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_180f, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1813, i32 0, i32 0)]
@global_var_13018 = local_unnamed_addr global [2 x i8*] [i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_180f, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_1813, i32 0, i32 0)]
@global_var_13020 = local_unnamed_addr global [4 x i8]* @global_var_1813
@global_var_1635 = constant [17 x i8] c"PARAM-L1-01: %d\0A\00"
@global_var_1646 = constant [17 x i8] c"PARAM-L1-02: %d\0A\00"
@global_var_1657 = constant [17 x i8] c"PARAM-L2-01: %d\0A\00"
@global_var_1668 = constant [17 x i8] c"PARAM-L2-02: %d\0A\00"
@global_var_1679 = constant [17 x i8] c"PARAM-L2-03: %d\0A\00"
@global_var_168a = constant [17 x i8] c"PARAM-L2-04: %d\0A\00"
@global_var_169b = constant [17 x i8] c"PARAM-L3-01: %d\0A\00"
@global_var_16ac = constant [17 x i8] c"PARAM-L3-02: %d\0A\00"
@global_var_16bd = constant [17 x i8] c"PARAM-L3-03: %d\0A\00"
@global_var_16ce = constant [17 x i8] c"PARAM-L3-04: %d\0A\00"
@global_var_16df = constant [17 x i8] c"PARAM-L3-05: %d\0A\00"
@global_var_13030 = global i64 4614253070214989087
@0 = external global i32
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E8\B0\83\E7\94\A8\E7\BA\A6\E5\AE\9A ===\00"
@global_var_145c = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@2 = internal constant [40 x i8] c"CALL-L2-06\EF\BC\9Avarargs_func(5, 1-5) = %d\0A\00"
@global_var_151d = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @2, i64 0, i64 0)
@3 = internal constant [34 x i8] c"CALL-L2-07\EF\BC\9Afunc_no_args() = %d\0A\00"
@global_var_1545 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @3, i64 0, i64 0)
@4 = internal constant [39 x i8] c"CALL-L2-08\EF\BC\9Afunc_many_args(1-8) = %d\0A\00"
@global_var_1567 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @4, i64 0, i64 0)
@5 = internal constant [40 x i8] c"CALL-L2-09\EF\BC\9Afunc_mixed_args(...) = %d\0A\00"
@global_var_1593 = constant i8* getelementptr inbounds ([40 x i8], [40 x i8]* @5, i64 0, i64 0)
@6 = internal constant [44 x i8] c"CALL-L2-10\EF\BC\9Afunc_struct_byval(large) = %d\0A\00"
@global_var_15bb = constant i8* getelementptr inbounds ([44 x i8], [44 x i8]* @6, i64 0, i64 0)
@7 = internal constant [45 x i8] c"CALL-L2-11\EF\BC\9Afunc_struct_byptr({5,10}) = %d\0A\00"
@global_var_15e7 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @7, i64 0, i64 0)
@8 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\8F\82\E6\95\B0\E4\BC\A0\E9\80\92\E6\A8\A1\E5\BC\8F ===\00"
@global_var_1614 = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @8, i64 0, i64 0)
@global_var_13028 = global i32 100
@9 = internal constant [30 x i8] c"=== \E6\B5\8B\E8\AF\95\E8\BF\94\E5\9B\9E\E5\80\BC\E5\A4\84\E7\90\86 ===\00"
@global_var_16f0 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"RET-L1-01: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_170e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"RET-L1-02: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_172a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [27 x i8] c"RET-L1-03: %d (\E6\9C\9F\E6\9C\9B: 7)\0A\00"
@global_var_1746 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"RET-L1-04: %d (\E6\9C\9F\E6\9C\9B: 215)\0A\00"
@global_var_1761 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [28 x i8] c"RET-L2-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_177e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"RET-L2-02: %d (\E6\9C\9F\E6\9C\9B: 100)\0A\00"
@global_var_179a = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [28 x i8] c"RET-L3-01: %d (\E6\9C\9F\E6\9C\9B: 40)\0A\00"
@global_var_17b7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @16, i64 0, i64 0)
@17 = internal constant [28 x i8] c"RET-L3-02: %d (\E6\9C\9F\E6\9C\9B: 60)\0A\00"
@global_var_17d3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @17, i64 0, i64 0)
@18 = internal constant [28 x i8] c"RET-L3-03: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_17ef = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @18, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_738:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_770(i8* %s) local_unnamed_addr {
dec_label_pc_770:
  %0 = call i32 @strlen(i8* %s), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_780(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_780:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define void @function_790(i64* %d) local_unnamed_addr {
dec_label_pc_790:
  call void @__cxa_finalize(i64* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_7a0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_7a0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_7b0() local_unnamed_addr {
dec_label_pc_7b0:
  call void @__stack_chk_fail(), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_7c0() local_unnamed_addr {
dec_label_pc_7c0:
  call void @__gmon_start__(), !insn.addr !7
  ret void, !insn.addr !7
}

define void @function_7d0() local_unnamed_addr {
dec_label_pc_7d0:
  call void @abort(), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_7e0(i8* %s) local_unnamed_addr {
dec_label_pc_7e0:
  %0 = call i32 @puts(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @main() local_unnamed_addr {
dec_label_pc_800:
  call void @test_calling_conventions(), !insn.addr !10
  call void @test_parameter_passing(), !insn.addr !11
  call void @test_return_values(), !insn.addr !12
  ret i32 0, !insn.addr !13
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_840:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12ff0, align 8, !insn.addr !14
  %3 = trunc i64 %arg1 to i32, !insn.addr !15
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !15
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !15
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !15
  call void @abort(), !insn.addr !16
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !16
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_874:
  %0 = load i64, i64* inttoptr (i64 77792 to i64*), align 32, !insn.addr !17
  %1 = icmp eq i64 %0, 0, !insn.addr !18
  br i1 %1, label %dec_label_pc_884, label %dec_label_pc_880, !insn.addr !18

dec_label_pc_880:                                 ; preds = %dec_label_pc_874
  call void @__gmon_start__(), !insn.addr !19
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !19

dec_label_pc_884:                                 ; preds = %dec_label_pc_874
  ret i64 0, !insn.addr !20
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_890:
  ret i64 ptrtoint (i64* @global_var_13038 to i64), !insn.addr !21
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_8c0:
  ret i64 ptrtoint (i64* @global_var_13038 to i64), !insn.addr !22
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_900:
  %x0.0.reg2mem = alloca i64, !insn.addr !23
  %0 = load i8, i8* bitcast (i64* @global_var_13038 to i8*), align 8, !insn.addr !24
  %1 = zext i8 %0 to i64, !insn.addr !24
  %2 = icmp eq i8 %0, 0, !insn.addr !25
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !25
  br i1 %2, label %dec_label_pc_918, label %dec_label_pc_93c, !insn.addr !25

dec_label_pc_918:                                 ; preds = %dec_label_pc_900
  %3 = load i64, i64* inttoptr (i64 77784 to i64*), align 8, !insn.addr !26
  %4 = icmp eq i64 %3, 0, !insn.addr !27
  br i1 %4, label %dec_label_pc_930, label %dec_label_pc_924, !insn.addr !27

dec_label_pc_924:                                 ; preds = %dec_label_pc_918
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 8) to i64*), align 8, !insn.addr !28
  %6 = inttoptr i64 %5 to i64*, !insn.addr !29
  call void @__cxa_finalize(i64* %6), !insn.addr !29
  br label %dec_label_pc_930, !insn.addr !29

dec_label_pc_930:                                 ; preds = %dec_label_pc_924, %dec_label_pc_918
  %7 = call i64 @deregister_tm_clones(), !insn.addr !30
  store i8 1, i8* bitcast (i64* @global_var_13038 to i8*), align 8, !insn.addr !31
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !31
  br label %dec_label_pc_93c, !insn.addr !31

dec_label_pc_93c:                                 ; preds = %dec_label_pc_900, %dec_label_pc_930
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !32

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_93c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_950:
  %0 = call i64 @register_tm_clones(), !insn.addr !33
  ret i64 %0, !insn.addr !33
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_954:
  %0 = add i32 %x, 10, !insn.addr !34
  ret i32 %0, !insn.addr !35
}

define i64 @func_b() local_unnamed_addr {
dec_label_pc_95c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !36
  %3 = and i64 %2, 4294967294, !insn.addr !36
  ret i64 %3, !insn.addr !37
}

define i64 @callback_func() local_unnamed_addr {
dec_label_pc_964:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !38
  %3 = and i64 %2, 4294967294, !insn.addr !38
  ret i64 %3, !insn.addr !39
}

define i64 @cdecl_func() local_unnamed_addr {
dec_label_pc_96c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !40
  %4 = and i64 %3, 4294967295, !insn.addr !40
  ret i64 %4, !insn.addr !41

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_cdecl() local_unnamed_addr {
dec_label_pc_974:
  ret i64 15, !insn.addr !42
}

define i64 @stdcall_func() local_unnamed_addr {
dec_label_pc_97c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = mul i64 %2, %1, !insn.addr !43
  %4 = and i64 %3, 4294967295, !insn.addr !43
  ret i64 %4, !insn.addr !44

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_stdcall() local_unnamed_addr {
dec_label_pc_984:
  ret i64 50, !insn.addr !45
}

define i64 @fastcall_func() local_unnamed_addr {
dec_label_pc_98c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = add i64 %2, %1, !insn.addr !46
  %5 = add i64 %4, %3, !insn.addr !47
  %6 = and i64 %5, 4294967295, !insn.addr !47
  ret i64 %6, !insn.addr !48

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_fastcall() local_unnamed_addr {
dec_label_pc_998:
  ret i64 6, !insn.addr !49
}

define i64 @call_thiscall() local_unnamed_addr {
dec_label_pc_9a0:
  ret i64 15, !insn.addr !50
}

define i64 @arm_aapcs_func() local_unnamed_addr {
dec_label_pc_9a8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = add i64 %2, %1, !insn.addr !51
  %7 = add i64 %6, %3, !insn.addr !52
  %8 = add i64 %7, %4, !insn.addr !53
  %9 = add i64 %8, %5, !insn.addr !54
  %10 = and i64 %9, 4294967295, !insn.addr !54
  ret i64 %10, !insn.addr !55

; uselistorder directives
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
}

define i64 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_9bc:
  ret i64 15, !insn.addr !56
}

define i64 @mips_func() local_unnamed_addr {
dec_label_pc_9c4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = add i64 %2, %1, !insn.addr !57
  %6 = add i64 %5, %3, !insn.addr !58
  %7 = add i64 %6, %4, !insn.addr !59
  %8 = and i64 %7, 4294967295, !insn.addr !59
  ret i64 %8, !insn.addr !60

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @call_mips() local_unnamed_addr {
dec_label_pc_9d4:
  ret i64 100, !insn.addr !61
}

define i64 @amd64_sysv_func() local_unnamed_addr {
dec_label_pc_9dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  %7 = add i64 %2, %1, !insn.addr !62
  %8 = add i64 %7, %3, !insn.addr !63
  %9 = add i64 %8, %4, !insn.addr !64
  %10 = add i64 %9, %5, !insn.addr !65
  %11 = add i64 %10, %6, !insn.addr !66
  %12 = and i64 %11, 4294967295, !insn.addr !66
  ret i64 %12, !insn.addr !67

; uselistorder directives
  uselistorder i64* %0, { 5, 4, 3, 2, 1, 0 }
}

define i64 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_9f4:
  ret i64 21, !insn.addr !68
}

define i64 @ms_x64_func() local_unnamed_addr {
dec_label_pc_9fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = add i64 %2, %1, !insn.addr !69
  %7 = add i64 %6, %3, !insn.addr !70
  %8 = add i64 %7, %4, !insn.addr !71
  %9 = add i64 %8, %5, !insn.addr !72
  %10 = and i64 %9, 4294967295, !insn.addr !72
  ret i64 %10, !insn.addr !73

; uselistorder directives
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
}

define i64 @call_ms_x64() local_unnamed_addr {
dec_label_pc_a10:
  ret i64 15, !insn.addr !74
}

define i64 @vectorcall_func() local_unnamed_addr {
dec_label_pc_a18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = add i64 %2, %1, !insn.addr !75
  %6 = add i64 %5, %3, !insn.addr !76
  %7 = add i64 %6, %4, !insn.addr !77
  %8 = and i64 %7, 4294967295, !insn.addr !77
  ret i64 %8, !insn.addr !78

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @call_vectorcall() local_unnamed_addr {
dec_label_pc_a28:
  ret i64 10, !insn.addr !79
}

define i64 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_a30:
  ret i64 33, !insn.addr !80
}

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_a38:
  %x5.0.reg2mem = alloca i64, !insn.addr !81
  %x3.2.reg2mem = alloca i64, !insn.addr !81
  %x2.0.reg2mem = alloca i64, !insn.addr !81
  %x3.1.reg2mem = alloca i64, !insn.addr !81
  %x1.1.reg2mem = alloca i64, !insn.addr !81
  %x0.1.reg2mem = alloca i64, !insn.addr !81
  %x4.0.reg2mem = alloca i64, !insn.addr !81
  %x3.0.reg2mem = alloca i64, !insn.addr !81
  %x1.0.reg2mem = alloca i64, !insn.addr !81
  %x0.0.reg2mem = alloca i64, !insn.addr !81
  %stack_var_8 = alloca i64, align 8
  %0 = zext i32 %count to i64, !insn.addr !82
  %1 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !83
  %2 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !84
  %3 = inttoptr i64 %1 to i64*, !insn.addr !85
  %4 = load i64, i64* %3, align 8, !insn.addr !85
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !86
  store i64 4294967240, i64* %x1.0.reg2mem, !insn.addr !86
  store i64 %2, i64* %x3.0.reg2mem, !insn.addr !86
  store i64 0, i64* %x4.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_a90, !insn.addr !86

dec_label_pc_a90:                                 ; preds = %dec_label_pc_ac8, %dec_label_pc_a38
  %x4.0.reload = load i64, i64* %x4.0.reg2mem
  %x3.0.reload = load i64, i64* %x3.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %5 = icmp ult i64 %x4.0.reload, %0, !insn.addr !87
  store i64 %x0.0.reload, i64* %x0.1.reg2mem, !insn.addr !87
  store i64 %x1.0.reload, i64* %x1.1.reg2mem, !insn.addr !87
  store i64 %x3.0.reload, i64* %x3.1.reg2mem, !insn.addr !87
  br i1 %5, label %dec_label_pc_ab8, label %dec_label_pc_a98, !insn.addr !87

dec_label_pc_a98:                                 ; preds = %dec_label_pc_a90
  %6 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !88
  %7 = inttoptr i64 %6 to i64*, !insn.addr !89
  %8 = load i64, i64* %7, align 8, !insn.addr !89
  %9 = sub i64 %4, %8, !insn.addr !90
  %10 = icmp eq i64 %9, 0, !insn.addr !90
  br i1 %10, label %dec_label_pc_b04, label %dec_label_pc_ab4, !insn.addr !91

dec_label_pc_ab4:                                 ; preds = %dec_label_pc_a98
  call void @__stack_chk_fail(), !insn.addr !92
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.1.reg2mem, !insn.addr !92
  store i64 %6, i64* %x1.1.reg2mem, !insn.addr !92
  store i64 %9, i64* %x3.1.reg2mem, !insn.addr !92
  br label %dec_label_pc_ab8, !insn.addr !92

dec_label_pc_ab8:                                 ; preds = %dec_label_pc_ab4, %dec_label_pc_a90
  %x3.1.reload = load i64, i64* %x3.1.reg2mem
  %x1.1.reload = load i64, i64* %x1.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %11 = trunc i64 %x1.1.reload to i32
  %12 = icmp slt i32 %11, 0, !insn.addr !93
  br i1 %12, label %dec_label_pc_ae0, label %dec_label_pc_abc, !insn.addr !93

dec_label_pc_abc:                                 ; preds = %dec_label_pc_ab8
  %13 = add i64 %x3.1.reload, 11, !insn.addr !94
  %14 = and i64 %x1.1.reload, 4294967295, !insn.addr !95
  %15 = and i64 %13, -8, !insn.addr !96
  store i64 %15, i64* %x2.0.reg2mem, !insn.addr !96
  store i64 %x3.1.reload, i64* %x3.2.reg2mem, !insn.addr !96
  store i64 %14, i64* %x5.0.reg2mem, !insn.addr !96
  br label %dec_label_pc_ac8, !insn.addr !96

dec_label_pc_ac8:                                 ; preds = %dec_label_pc_af8, %dec_label_pc_aec, %dec_label_pc_abc
  %x5.0.reload = load i64, i64* %x5.0.reg2mem
  %x3.2.reload = load i64, i64* %x3.2.reg2mem
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %16 = inttoptr i64 %x3.2.reload to i32*, !insn.addr !97
  %17 = load i32, i32* %16, align 4, !insn.addr !97
  %18 = add nuw nsw i64 %x4.0.reload, 1, !insn.addr !98
  %19 = and i64 %18, 4294967295, !insn.addr !98
  %20 = trunc i64 %x0.1.reload to i32, !insn.addr !99
  %21 = add i32 %17, %20, !insn.addr !99
  %22 = zext i32 %21 to i64, !insn.addr !99
  store i64 %22, i64* %x0.0.reg2mem, !insn.addr !100
  store i64 %x5.0.reload, i64* %x1.0.reg2mem, !insn.addr !100
  store i64 %x2.0.reload, i64* %x3.0.reg2mem, !insn.addr !100
  store i64 %19, i64* %x4.0.reg2mem, !insn.addr !100
  br label %dec_label_pc_a90, !insn.addr !100

dec_label_pc_ae0:                                 ; preds = %dec_label_pc_ab8
  %23 = add i64 %x1.1.reload, 8, !insn.addr !101
  %24 = and i64 %23, 4294967295, !insn.addr !101
  %25 = trunc i64 %23 to i32, !insn.addr !102
  %26 = icmp slt i32 %25, 1, !insn.addr !102
  br i1 %26, label %dec_label_pc_af8, label %dec_label_pc_aec, !insn.addr !102

dec_label_pc_aec:                                 ; preds = %dec_label_pc_ae0
  %27 = add i64 %x3.1.reload, 11, !insn.addr !103
  %28 = and i64 %27, -8, !insn.addr !104
  store i64 %28, i64* %x2.0.reg2mem, !insn.addr !105
  store i64 %x3.1.reload, i64* %x3.2.reg2mem, !insn.addr !105
  store i64 %24, i64* %x5.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_ac8, !insn.addr !105

dec_label_pc_af8:                                 ; preds = %dec_label_pc_ae0
  %sext = mul i64 %x1.1.reload, 4294967296
  %29 = ashr exact i64 %sext, 32, !insn.addr !106
  %30 = add i64 %29, %2, !insn.addr !106
  store i64 %x3.1.reload, i64* %x2.0.reg2mem, !insn.addr !107
  store i64 %30, i64* %x3.2.reg2mem, !insn.addr !107
  store i64 %24, i64* %x5.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_ac8, !insn.addr !107

dec_label_pc_b04:                                 ; preds = %dec_label_pc_a98
  %31 = trunc i64 %x0.0.reload to i32, !insn.addr !108
  ret i32 %31, !insn.addr !108

; uselistorder directives
  uselistorder i64 %24, { 1, 0 }
  uselistorder i64 %x1.1.reload, { 3, 1, 0, 2 }
  uselistorder i64 %x3.1.reload, { 2, 1, 3, 0, 4 }
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x3.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x4.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %x3.2.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %x5.0.reg2mem, { 3, 2, 0, 1 }
}

define i64 @func_no_args() local_unnamed_addr {
dec_label_pc_b0c:
  ret i64 42, !insn.addr !109
}

define i64 @func_many_args() local_unnamed_addr {
dec_label_pc_b14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  %7 = load i64, i64* %0
  %8 = load i64, i64* %0
  %9 = add i64 %2, %1, !insn.addr !110
  %10 = add i64 %9, %3, !insn.addr !111
  %11 = add i64 %10, %4, !insn.addr !112
  %12 = add i64 %11, %5, !insn.addr !113
  %13 = add i64 %12, %6, !insn.addr !114
  %14 = add i64 %13, %7, !insn.addr !115
  %15 = add i64 %14, %8, !insn.addr !116
  %16 = and i64 %15, 4294967295, !insn.addr !116
  ret i64 %16, !insn.addr !117

; uselistorder directives
  uselistorder i64* %0, { 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @func_mixed_args(i32 %x, i8* %s, double %d, i64 %ll) local_unnamed_addr {
dec_label_pc_b34:
  %0 = alloca double
  %storemerge.reg2mem = alloca i32, !insn.addr !118
  %1 = load double, double* %0
  %2 = icmp eq i8* %s, null, !insn.addr !119
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !119
  br i1 %2, label %dec_label_pc_b5c, label %dec_label_pc_b54, !insn.addr !119

dec_label_pc_b54:                                 ; preds = %dec_label_pc_b34
  %3 = call i32 @strlen(i8* nonnull %s), !insn.addr !120
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !120
  br label %dec_label_pc_b5c, !insn.addr !120

dec_label_pc_b5c:                                 ; preds = %dec_label_pc_b34, %dec_label_pc_b54
  %4 = bitcast i64 %ll to double, !insn.addr !121
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %5 = add i32 %storemerge.reload, %x, !insn.addr !122
  %6 = sitofp i32 %5 to double, !insn.addr !123
  %7 = fadd double %1, %6, !insn.addr !124
  %8 = fadd double %7, %4, !insn.addr !125
  %9 = fptoui double %8 to i32, !insn.addr !126
  ret i32 %9, !insn.addr !127

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_b5c, { 1, 0 }
}

define i64 @func_struct_byval() local_unnamed_addr {
dec_label_pc_b8c:
  %0 = alloca i64
  %x1.0.reg2mem = alloca i64, !insn.addr !128
  %x0.0.reg2mem = alloca i64, !insn.addr !128
  %1 = load i64, i64* %0
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !129
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !129
  br label %dec_label_pc_b98, !insn.addr !129

dec_label_pc_b98:                                 ; preds = %dec_label_pc_b98, %dec_label_pc_b8c
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %2 = mul i64 %x1.0.reload, 8, !insn.addr !130
  %3 = add i64 %2, %1, !insn.addr !130
  %4 = inttoptr i64 %3 to i64*, !insn.addr !130
  %5 = load i64, i64* %4, align 8, !insn.addr !130
  %6 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !131
  %7 = add i64 %5, %x0.0.reload, !insn.addr !132
  %8 = icmp eq i64 %6, 16, !insn.addr !133
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !133
  store i64 %6, i64* %x1.0.reg2mem, !insn.addr !133
  br i1 %8, label %dec_label_pc_bac, label %dec_label_pc_b98, !insn.addr !133

dec_label_pc_bac:                                 ; preds = %dec_label_pc_b98
  ret i64 %7, !insn.addr !134

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i64 @func_struct_byptr() local_unnamed_addr {
dec_label_pc_bb0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !135
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !135
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !135
  br i1 %2, label %dec_label_pc_bbc, label %dec_label_pc_bb4, !insn.addr !135

dec_label_pc_bb4:                                 ; preds = %dec_label_pc_bb0
  %3 = trunc i64 %1 to i32
  %4 = add i64 %1, 4, !insn.addr !136
  %5 = inttoptr i64 %4 to i32*, !insn.addr !136
  %6 = load i32, i32* %5, align 4, !insn.addr !136
  %7 = mul i32 %6, %3, !insn.addr !137
  %8 = zext i32 %7 to i64, !insn.addr !137
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !137
  br label %dec_label_pc_bbc, !insn.addr !137

dec_label_pc_bbc:                                 ; preds = %dec_label_pc_bb0, %dec_label_pc_bb4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !138

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_bbc, { 1, 0 }
}

define void @test_calling_conventions() local_unnamed_addr {
dec_label_pc_bc8:
  %0 = alloca i128
  %x0.0.reg2mem = alloca i64, !insn.addr !139
  %1 = load i128, i128* %0
  %stack_var_-256 = alloca fp128, align 16
  %2 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !140
  %3 = inttoptr i64 %2 to i64*, !insn.addr !141
  %4 = load i64, i64* %3, align 8, !insn.addr !141
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_145c to i8*)), !insn.addr !142
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_147d, i64 0, i64 0), i64 15), !insn.addr !143
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_148d, i64 0, i64 0), i64 50), !insn.addr !144
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_149d, i64 0, i64 0), i64 6), !insn.addr !145
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14ad, i64 0, i64 0), i64 15), !insn.addr !146
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14bd, i64 0, i64 0), i64 15), !insn.addr !147
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14cd, i64 0, i64 0), i64 100), !insn.addr !148
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14dd, i64 0, i64 0), i64 21), !insn.addr !149
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14ed, i64 0, i64 0), i64 15), !insn.addr !150
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_14fd, i64 0, i64 0), i64 10), !insn.addr !151
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_150d, i64 0, i64 0), i64 33), !insn.addr !152
  %16 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !153
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_151d to i8*)), !insn.addr !154
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1545 to i8*)), !insn.addr !155
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1567 to i8*)), !insn.addr !156
  %20 = trunc i128 %1 to i64, !insn.addr !157
  %21 = bitcast i64 %20 to double, !insn.addr !157
  %22 = call i32 @func_mixed_args(i32 10, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_158e, i64 0, i64 0), double %21, i64 100), !insn.addr !157
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1593 to i8*)), !insn.addr !158
  %24 = ptrtoint fp128* %stack_var_-256 to i64, !insn.addr !159
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !160
  br label %dec_label_pc_d48, !insn.addr !160

dec_label_pc_d48:                                 ; preds = %dec_label_pc_d48, %dec_label_pc_bc8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %25 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !161
  %26 = mul i64 %x0.0.reload, 8, !insn.addr !162
  %27 = add i64 %26, %24, !insn.addr !162
  %28 = inttoptr i64 %27 to i64*, !insn.addr !162
  store i64 %25, i64* %28, align 8, !insn.addr !162
  %29 = icmp eq i64 %25, 16, !insn.addr !163
  store i64 %25, i64* %x0.0.reg2mem, !insn.addr !163
  br i1 %29, label %dec_label_pc_d88.preheader, label %dec_label_pc_d48, !insn.addr !163

dec_label_pc_d88.preheader:                       ; preds = %dec_label_pc_d48
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_15bb to i8*)), !insn.addr !164
  %31 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !165
  %32 = inttoptr i64 %31 to i64*, !insn.addr !166
  %33 = load i64, i64* %32, align 8, !insn.addr !166
  %34 = icmp eq i64 %4, %33, !insn.addr !167
  br i1 %34, label %dec_label_pc_dcc, label %dec_label_pc_dc8, !insn.addr !168

dec_label_pc_dc8:                                 ; preds = %dec_label_pc_d88.preheader
  call void @__stack_chk_fail(), !insn.addr !169
  br label %dec_label_pc_dcc, !insn.addr !169

dec_label_pc_dcc:                                 ; preds = %dec_label_pc_dc8, %dec_label_pc_d88.preheader
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_15e7 to i8*)), !insn.addr !170
  ret void, !insn.addr !170

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 33, { 1, 0 }
  uselistorder i64 100, { 1, 2, 0 }
  uselistorder i64 6, { 1, 0 }
  uselistorder i64 50, { 1, 0 }
}

define i64 @param_by_value_int() local_unnamed_addr {
dec_label_pc_de4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !171
  %3 = and i64 %2, 4294967294, !insn.addr !171
  ret i64 %3, !insn.addr !172
}

define i64 @call_by_value_int() local_unnamed_addr {
dec_label_pc_dec:
  ret i64 15, !insn.addr !173
}

define i64 @param_by_value_ptr() local_unnamed_addr {
dec_label_pc_df4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !174
  %4 = inttoptr i64 %1 to i32*, !insn.addr !175
  store i32 %3, i32* %4, align 4, !insn.addr !175
  ret i64 1, !insn.addr !176
}

define i64 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_e08:
  ret i64 11, !insn.addr !177
}

define i64 @param_array_decay() local_unnamed_addr {
dec_label_pc_e10:
  ret i64 8, !insn.addr !178
}

define i64 @call_array_decay() local_unnamed_addr {
dec_label_pc_e18:
  ret i64 8, !insn.addr !179
}

define i64 @param_string() local_unnamed_addr {
dec_label_pc_e20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = urem i64 %1, 256, !insn.addr !180
  %3 = add i64 %1, 1, !insn.addr !181
  %4 = inttoptr i64 %3 to i8*, !insn.addr !181
  %5 = load i8, i8* %4, align 1, !insn.addr !181
  %6 = zext i8 %5 to i64, !insn.addr !181
  %7 = add nuw nsw i64 %2, %6, !insn.addr !182
  ret i64 %7, !insn.addr !183
}

define i64 @call_string_param() local_unnamed_addr {
dec_label_pc_e30:
  ret i64 173, !insn.addr !184
}

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_e38:
  %x2.01.reg2mem = alloca i64, !insn.addr !185
  %storemerge2.reg2mem = alloca i64, !insn.addr !185
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !185
  %0 = sext i32 %n to i64
  %1 = ptrtoint i8** %arr to i64
  %2 = icmp sgt i32 %n, 0, !insn.addr !186
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !186
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !186
  store i64 0, i64* %x2.01.reg2mem, !insn.addr !186
  br i1 %2, label %dec_label_pc_e50, label %dec_label_pc_e4c, !insn.addr !186

dec_label_pc_e44.dec_label_pc_e4c_crit_edge:      ; preds = %dec_label_pc_e50
  %phitmp = trunc i64 %11 to i32
  store i32 %phitmp, i32* %storemerge.lcssa.reg2mem
  br label %dec_label_pc_e4c

dec_label_pc_e4c:                                 ; preds = %dec_label_pc_e44.dec_label_pc_e4c_crit_edge, %dec_label_pc_e38
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  ret i32 %storemerge.lcssa.reload, !insn.addr !187

dec_label_pc_e50:                                 ; preds = %dec_label_pc_e38, %dec_label_pc_e50
  %x2.01.reload = load i64, i64* %x2.01.reg2mem
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %3 = mul i64 %x2.01.reload, 8, !insn.addr !188
  %4 = add i64 %3, %1, !insn.addr !188
  %5 = inttoptr i64 %4 to i64*, !insn.addr !188
  %6 = load i64, i64* %5, align 8, !insn.addr !188
  %7 = add nuw nsw i64 %x2.01.reload, 1, !insn.addr !189
  %8 = inttoptr i64 %6 to i8*, !insn.addr !190
  %9 = load i8, i8* %8, align 1, !insn.addr !190
  %10 = zext i8 %9 to i64, !insn.addr !190
  %11 = add nuw nsw i64 %storemerge2.reload, %10, !insn.addr !191
  %12 = and i64 %11, 4294967295, !insn.addr !191
  %exitcond = icmp eq i64 %7, %0
  store i64 %12, i64* %storemerge2.reg2mem, !insn.addr !186
  store i64 %7, i64* %x2.01.reg2mem, !insn.addr !186
  br i1 %exitcond, label %dec_label_pc_e44.dec_label_pc_e4c_crit_edge, label %dec_label_pc_e50, !insn.addr !186

; uselistorder directives
  uselistorder i64 %11, { 1, 0 }
  uselistorder i32* %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_e50, { 1, 0 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_e64:
  %x0.0.reg2mem = alloca i32, !insn.addr !192
  %stack_var_-24 = alloca i8**, align 8
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !193
  %1 = inttoptr i64 %0 to i64*, !insn.addr !194
  %2 = load i64, i64* %1, align 8, !insn.addr !194
  %3 = load i64, i64* bitcast ([3 x i8*]* @global_var_13010 to i64*), align 16, !insn.addr !195
  %4 = inttoptr i64 %3 to i8**, !insn.addr !196
  store i8** %4, i8*** %stack_var_-24, align 8, !insn.addr !196
  %5 = bitcast i8*** %stack_var_-24 to i8**, !insn.addr !197
  %6 = call i32 @param_ptr_array(i8** nonnull %5, i32 3), !insn.addr !197
  %7 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !198
  %8 = inttoptr i64 %7 to i64*, !insn.addr !199
  %9 = load i64, i64* %8, align 8, !insn.addr !199
  %10 = icmp eq i64 %2, %9, !insn.addr !200
  store i32 %6, i32* %x0.0.reg2mem, !insn.addr !201
  br i1 %10, label %dec_label_pc_ec4, label %dec_label_pc_ec0, !insn.addr !201

dec_label_pc_ec0:                                 ; preds = %dec_label_pc_e64
  call void @__stack_chk_fail(), !insn.addr !202
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !202
  br label %dec_label_pc_ec4, !insn.addr !202

dec_label_pc_ec4:                                 ; preds = %dec_label_pc_ec0, %dec_label_pc_e64
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !203

; uselistorder directives
  uselistorder i8*** %stack_var_-24, { 1, 0 }
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_ecc:
  %x5.0.reg2mem = alloca i64, !insn.addr !204
  %x3.2.reg2mem = alloca i64, !insn.addr !204
  %x2.0.reg2mem = alloca i64, !insn.addr !204
  %x3.1.reg2mem = alloca i64, !insn.addr !204
  %x1.1.reg2mem = alloca i64, !insn.addr !204
  %x0.1.reg2mem = alloca i64, !insn.addr !204
  %x4.0.reg2mem = alloca i64, !insn.addr !204
  %x3.0.reg2mem = alloca i64, !insn.addr !204
  %x1.0.reg2mem = alloca i64, !insn.addr !204
  %x0.0.reg2mem = alloca i64, !insn.addr !204
  %stack_var_8 = alloca i64, align 8
  %0 = zext i32 %count to i64, !insn.addr !205
  %1 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !206
  %2 = ptrtoint i64* %stack_var_8 to i64, !insn.addr !207
  %3 = inttoptr i64 %1 to i64*, !insn.addr !208
  %4 = load i64, i64* %3, align 8, !insn.addr !208
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !209
  store i64 4294967240, i64* %x1.0.reg2mem, !insn.addr !209
  store i64 %2, i64* %x3.0.reg2mem, !insn.addr !209
  store i64 0, i64* %x4.0.reg2mem, !insn.addr !209
  br label %dec_label_pc_f24, !insn.addr !209

dec_label_pc_f24:                                 ; preds = %dec_label_pc_f5c, %dec_label_pc_ecc
  %x4.0.reload = load i64, i64* %x4.0.reg2mem
  %x3.0.reload = load i64, i64* %x3.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %5 = icmp ult i64 %x4.0.reload, %0, !insn.addr !210
  store i64 %x0.0.reload, i64* %x0.1.reg2mem, !insn.addr !210
  store i64 %x1.0.reload, i64* %x1.1.reg2mem, !insn.addr !210
  store i64 %x3.0.reload, i64* %x3.1.reg2mem, !insn.addr !210
  br i1 %5, label %dec_label_pc_f4c, label %dec_label_pc_f2c, !insn.addr !210

dec_label_pc_f2c:                                 ; preds = %dec_label_pc_f24
  %6 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !211
  %7 = inttoptr i64 %6 to i64*, !insn.addr !212
  %8 = load i64, i64* %7, align 8, !insn.addr !212
  %9 = sub i64 %4, %8, !insn.addr !213
  %10 = icmp eq i64 %9, 0, !insn.addr !213
  br i1 %10, label %dec_label_pc_f98, label %dec_label_pc_f48, !insn.addr !214

dec_label_pc_f48:                                 ; preds = %dec_label_pc_f2c
  call void @__stack_chk_fail(), !insn.addr !215
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.1.reg2mem, !insn.addr !215
  store i64 %6, i64* %x1.1.reg2mem, !insn.addr !215
  store i64 %9, i64* %x3.1.reg2mem, !insn.addr !215
  br label %dec_label_pc_f4c, !insn.addr !215

dec_label_pc_f4c:                                 ; preds = %dec_label_pc_f48, %dec_label_pc_f24
  %x3.1.reload = load i64, i64* %x3.1.reg2mem
  %x1.1.reload = load i64, i64* %x1.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %11 = trunc i64 %x1.1.reload to i32
  %12 = icmp slt i32 %11, 0, !insn.addr !216
  br i1 %12, label %dec_label_pc_f74, label %dec_label_pc_f50, !insn.addr !216

dec_label_pc_f50:                                 ; preds = %dec_label_pc_f4c
  %13 = add i64 %x3.1.reload, 11, !insn.addr !217
  %14 = and i64 %x1.1.reload, 4294967295, !insn.addr !218
  %15 = and i64 %13, -8, !insn.addr !219
  store i64 %15, i64* %x2.0.reg2mem, !insn.addr !219
  store i64 %x3.1.reload, i64* %x3.2.reg2mem, !insn.addr !219
  store i64 %14, i64* %x5.0.reg2mem, !insn.addr !219
  br label %dec_label_pc_f5c, !insn.addr !219

dec_label_pc_f5c:                                 ; preds = %dec_label_pc_f8c, %dec_label_pc_f80, %dec_label_pc_f50
  %x5.0.reload = load i64, i64* %x5.0.reg2mem
  %x3.2.reload = load i64, i64* %x3.2.reg2mem
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %16 = inttoptr i64 %x3.2.reload to i32*, !insn.addr !220
  %17 = load i32, i32* %16, align 4, !insn.addr !220
  %18 = add nuw nsw i64 %x4.0.reload, 1, !insn.addr !221
  %19 = and i64 %18, 4294967295, !insn.addr !221
  %20 = trunc i64 %x0.1.reload to i32, !insn.addr !222
  %21 = add i32 %17, %20, !insn.addr !222
  %22 = zext i32 %21 to i64, !insn.addr !222
  store i64 %22, i64* %x0.0.reg2mem, !insn.addr !223
  store i64 %x5.0.reload, i64* %x1.0.reg2mem, !insn.addr !223
  store i64 %x2.0.reload, i64* %x3.0.reg2mem, !insn.addr !223
  store i64 %19, i64* %x4.0.reg2mem, !insn.addr !223
  br label %dec_label_pc_f24, !insn.addr !223

dec_label_pc_f74:                                 ; preds = %dec_label_pc_f4c
  %23 = add i64 %x1.1.reload, 8, !insn.addr !224
  %24 = and i64 %23, 4294967295, !insn.addr !224
  %25 = trunc i64 %23 to i32, !insn.addr !225
  %26 = icmp slt i32 %25, 1, !insn.addr !225
  br i1 %26, label %dec_label_pc_f8c, label %dec_label_pc_f80, !insn.addr !225

dec_label_pc_f80:                                 ; preds = %dec_label_pc_f74
  %27 = add i64 %x3.1.reload, 11, !insn.addr !226
  %28 = and i64 %27, -8, !insn.addr !227
  store i64 %28, i64* %x2.0.reg2mem, !insn.addr !228
  store i64 %x3.1.reload, i64* %x3.2.reg2mem, !insn.addr !228
  store i64 %24, i64* %x5.0.reg2mem, !insn.addr !228
  br label %dec_label_pc_f5c, !insn.addr !228

dec_label_pc_f8c:                                 ; preds = %dec_label_pc_f74
  %sext = mul i64 %x1.1.reload, 4294967296
  %29 = ashr exact i64 %sext, 32, !insn.addr !229
  %30 = add i64 %29, %2, !insn.addr !229
  store i64 %x3.1.reload, i64* %x2.0.reg2mem, !insn.addr !230
  store i64 %30, i64* %x3.2.reg2mem, !insn.addr !230
  store i64 %24, i64* %x5.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_f5c, !insn.addr !230

dec_label_pc_f98:                                 ; preds = %dec_label_pc_f2c
  %31 = trunc i64 %x0.0.reload to i32, !insn.addr !231
  ret i32 %31, !insn.addr !231

; uselistorder directives
  uselistorder i64 %24, { 1, 0 }
  uselistorder i64 %x1.1.reload, { 3, 1, 0, 2 }
  uselistorder i64 %x3.1.reload, { 2, 1, 3, 0, 4 }
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x3.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x4.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %x3.2.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %x5.0.reg2mem, { 3, 2, 0, 1 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_fa0:
  %0 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !232
  ret i32 %0, !insn.addr !232
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_fb8:
  ret i32 %x, !insn.addr !233
}

define i64 @function_fcc(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_fcc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !234
  %3 = and i64 %2, 4294967295, !insn.addr !234
  ret i64 %3, !insn.addr !235
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_fd8:
  %0 = call i32 @param_func_ptr(i32 (i32)* inttoptr (i64 2404 to i32 (i32)*), i32 5), !insn.addr !236
  ret i32 %0, !insn.addr !236
}

define i64 @param_double_ptr() local_unnamed_addr {
dec_label_pc_fe8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !237
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !237
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !237
  br i1 %3, label %dec_label_pc_1000, label %dec_label_pc_ff4, !insn.addr !237

dec_label_pc_ff4:                                 ; preds = %dec_label_pc_fe8
  %4 = trunc i64 %1 to i32, !insn.addr !238
  %5 = inttoptr i64 %2 to i32*, !insn.addr !238
  store i32 %4, i32* %5, align 4, !insn.addr !238
  %6 = inttoptr i64 %2 to i64*, !insn.addr !239
  store i64 0, i64* %6, align 8, !insn.addr !239
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !240
  br label %dec_label_pc_1000, !insn.addr !240

dec_label_pc_1000:                                ; preds = %dec_label_pc_fe8, %dec_label_pc_ff4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !241

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_1000, { 1, 0 }
}

define i64 @call_double_ptr() local_unnamed_addr {
dec_label_pc_100c:
  ret i64 21, !insn.addr !242
}

define i64 @param_complex_cast() local_unnamed_addr {
dec_label_pc_1014:
  %0 = alloca i64
  %.shrunk.reg2mem = alloca i32, !insn.addr !243
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !243
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %.shrunk.reg2mem
  switch i32 %3, label %dec_label_pc_1034 [
    i32 0, label %dec_label_pc_101c
    i32 1, label %dec_label_pc_1028
  ]

dec_label_pc_101c:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1034, %dec_label_pc_1028
  %.shrunk.reload = load i32, i32* %.shrunk.reg2mem
  %5 = zext i32 %.shrunk.reload to i64, !insn.addr !244
  ret i64 %5, !insn.addr !244

dec_label_pc_1028:                                ; preds = %dec_label_pc_1014
  %6 = add i64 %2, 4, !insn.addr !245
  %7 = inttoptr i64 %6 to i32*, !insn.addr !245
  %8 = load i32, i32* %7, align 4, !insn.addr !245
  %9 = add i32 %8, %4, !insn.addr !246
  store i32 %9, i32* %.shrunk.reg2mem, !insn.addr !247
  br label %dec_label_pc_101c, !insn.addr !247

dec_label_pc_1034:                                ; preds = %dec_label_pc_1014
  store i32 -1, i32* %.shrunk.reg2mem, !insn.addr !248
  br label %dec_label_pc_101c, !insn.addr !248

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %.shrunk.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_101c, { 1, 2, 0 }
}

define i64 @call_complex_cast() local_unnamed_addr {
dec_label_pc_103c:
  ret i64 305419896, !insn.addr !249
}

define i64 @param_struct_byval() local_unnamed_addr {
dec_label_pc_1048:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i64 %1, 60, !insn.addr !250
  %4 = inttoptr i64 %3 to i32*, !insn.addr !250
  %5 = load i32, i32* %4, align 4, !insn.addr !250
  %6 = add i32 %5, %2, !insn.addr !251
  %7 = zext i32 %6 to i64, !insn.addr !251
  ret i64 %7, !insn.addr !252
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1058:
  %0 = alloca i32
  %x0.1.reg2mem = alloca i32, !insn.addr !253
  %x0.0.reg2mem = alloca i64, !insn.addr !253
  %1 = load i32, i32* %0
  %stack_var_-64 = alloca i32, align 4
  %2 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !254
  %3 = inttoptr i64 %2 to i64*, !insn.addr !255
  %4 = load i64, i64* %3, align 8, !insn.addr !255
  %5 = ptrtoint i32* %stack_var_-64 to i64, !insn.addr !256
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_107c, !insn.addr !256

dec_label_pc_107c:                                ; preds = %dec_label_pc_107c, %dec_label_pc_1058
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %6 = trunc i64 %x0.0.reload to i32, !insn.addr !257
  %7 = mul i64 %x0.0.reload, 4, !insn.addr !257
  %8 = add i64 %7, %5, !insn.addr !257
  %9 = inttoptr i64 %8 to i32*, !insn.addr !257
  store i32 %6, i32* %9, align 4, !insn.addr !257
  %10 = add nuw nsw i64 %x0.0.reload, 1, !insn.addr !258
  %11 = icmp eq i64 %10, 16, !insn.addr !259
  store i64 %10, i64* %x0.0.reg2mem, !insn.addr !259
  br i1 %11, label %dec_label_pc_108c, label %dec_label_pc_107c, !insn.addr !259

dec_label_pc_108c:                                ; preds = %dec_label_pc_107c
  %12 = load i32, i32* %stack_var_-64, align 4, !insn.addr !260
  %13 = add i32 %12, %1, !insn.addr !261
  %14 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !262
  %15 = inttoptr i64 %14 to i64*, !insn.addr !263
  %16 = load i64, i64* %15, align 8, !insn.addr !263
  %17 = icmp eq i64 %4, %16, !insn.addr !264
  store i32 %13, i32* %x0.1.reg2mem, !insn.addr !265
  br i1 %17, label %dec_label_pc_10b8, label %dec_label_pc_10b4, !insn.addr !265

dec_label_pc_10b4:                                ; preds = %dec_label_pc_108c
  call void @__stack_chk_fail(), !insn.addr !266
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.1.reg2mem, !insn.addr !266
  br label %dec_label_pc_10b8, !insn.addr !266

dec_label_pc_10b8:                                ; preds = %dec_label_pc_10b4, %dec_label_pc_108c
  %x0.1.reload = load i32, i32* %x0.1.reg2mem
  ret i32 %x0.1.reload, !insn.addr !267

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-64, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_order_dep() local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !268
  %4 = and i64 %3, 4294967295, !insn.addr !268
  ret i64 %4, !insn.addr !269

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_order_dep() local_unnamed_addr {
dec_label_pc_10c8:
  ret i64 4, !insn.addr !270
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1614 to i8*)), !insn.addr !271
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1635, i64 0, i64 0), i64 15), !insn.addr !272
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1646, i64 0, i64 0), i64 11), !insn.addr !273
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1657, i64 0, i64 0), i64 8), !insn.addr !274
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1668, i64 0, i64 0), i64 173), !insn.addr !275
  %5 = call i32 @call_ptr_array(), !insn.addr !276
  %6 = zext i32 %5 to i64, !insn.addr !277
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_1679, i64 0, i64 0), i64 %6), !insn.addr !278
  %8 = call i32 @call_varargs_param(), !insn.addr !279
  %9 = zext i32 %8 to i64, !insn.addr !280
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_168a, i64 0, i64 0), i64 %9), !insn.addr !281
  %11 = call i32 @call_func_ptr_param(), !insn.addr !282
  %12 = zext i32 %11 to i64, !insn.addr !283
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_169b, i64 0, i64 0), i64 %12), !insn.addr !284
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_16ac, i64 0, i64 0), i64 21), !insn.addr !285
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_16bd, i64 0, i64 0), i64 305419896), !insn.addr !286
  %16 = call i32 @call_struct_byval(), !insn.addr !287
  %17 = zext i32 %16 to i64, !insn.addr !288
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_16ce, i64 0, i64 0), i64 %17), !insn.addr !289
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_16df, i64 0, i64 0), i64 4), !insn.addr !290
  ret void, !insn.addr !290

; uselistorder directives
  uselistorder i64 305419896, { 1, 0 }
  uselistorder i64 173, { 1, 0 }
  uselistorder i64 8, { 8, 5, 0, 3, 4, 1, 2, 6, 7 }
  uselistorder i64 11, { 1, 2, 3, 0, 4, 5 }
  uselistorder i64 15, { 5, 0, 6, 7, 8, 9, 1, 2, 3, 4 }
}

define i64 @ret_basic_type() local_unnamed_addr {
dec_label_pc_11d8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !291
  %3 = and i64 %2, 4294967294, !insn.addr !291
  ret i64 %3, !insn.addr !292
}

define i64 @call_ret_basic() local_unnamed_addr {
dec_label_pc_11e0:
  ret i64 42, !insn.addr !293
}

define i64 @ret_pointer() local_unnamed_addr {
dec_label_pc_11e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 4, !insn.addr !294
  ret i64 %2, !insn.addr !295
}

define i64 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_11f0:
  ret i64 20, !insn.addr !296
}

define i64 @ret_small_struct() local_unnamed_addr {
dec_label_pc_11f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %2, 4294967295, !insn.addr !297
  %4 = mul i64 %1, 4294967296, !insn.addr !298
  %5 = or i64 %3, %4, !insn.addr !298
  ret i64 %5, !insn.addr !299

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1204:
  ret i64 7, !insn.addr !300
}

define i64 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_120c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !301
  %x2.0.reg2mem = alloca i64, !insn.addr !301
  %1 = load i64, i64* %0
  %stack_var_-64 = alloca fp128, align 16
  %2 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !302
  %3 = inttoptr i64 %2 to i64*, !insn.addr !303
  %4 = load i64, i64* %3, align 8, !insn.addr !303
  %5 = ptrtoint fp128* %stack_var_-64 to i64, !insn.addr !304
  store i64 0, i64* %x2.0.reg2mem, !insn.addr !304
  br label %dec_label_pc_122c, !insn.addr !304

dec_label_pc_122c:                                ; preds = %dec_label_pc_122c, %dec_label_pc_120c
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %6 = trunc i64 %x2.0.reload to i32, !insn.addr !305
  %7 = add i32 %6, %seed, !insn.addr !305
  %8 = mul i64 %x2.0.reload, 4, !insn.addr !306
  %9 = add i64 %8, %5, !insn.addr !306
  %10 = inttoptr i64 %9 to i32*, !insn.addr !306
  store i32 %7, i32* %10, align 4, !insn.addr !306
  %11 = add nuw nsw i64 %x2.0.reload, 1, !insn.addr !307
  %12 = icmp eq i64 %11, 16, !insn.addr !308
  store i64 %11, i64* %x2.0.reg2mem, !insn.addr !308
  br i1 %12, label %dec_label_pc_1240, label %dec_label_pc_122c, !insn.addr !308

dec_label_pc_1240:                                ; preds = %dec_label_pc_122c
  %13 = load fp128, fp128* %stack_var_-64, align 16, !insn.addr !309
  %14 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !310
  %15 = inttoptr i64 %1 to fp128*, !insn.addr !311
  store fp128 %13, fp128* %15, align 16, !insn.addr !311
  %16 = add i64 %1, 16, !insn.addr !311
  %17 = inttoptr i64 %16 to fp128*, !insn.addr !311
  %18 = add i64 %1, 32, !insn.addr !312
  %19 = inttoptr i64 %18 to fp128*, !insn.addr !312
  %20 = add i64 %1, 48, !insn.addr !312
  %21 = inttoptr i64 %20 to fp128*, !insn.addr !312
  %22 = inttoptr i64 %14 to i64*, !insn.addr !313
  %23 = load i64, i64* %22, align 8, !insn.addr !313
  %24 = icmp eq i64 %4, %23, !insn.addr !314
  store i64 %14, i64* %x0.0.reg2mem, !insn.addr !315
  br i1 %24, label %dec_label_pc_1270, label %dec_label_pc_126c, !insn.addr !315

dec_label_pc_126c:                                ; preds = %dec_label_pc_1240
  call void @__stack_chk_fail(), !insn.addr !316
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !316
  br label %dec_label_pc_1270, !insn.addr !316

dec_label_pc_1270:                                ; preds = %dec_label_pc_126c, %dec_label_pc_1240
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !317

; uselistorder directives
  uselistorder i64 %x2.0.reload, { 1, 2, 0 }
  uselistorder fp128* %stack_var_-64, { 1, 0 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 32, { 2, 0, 1 }
  uselistorder i64 16, { 4, 0, 1, 2, 3 }
  uselistorder i64 1, { 7, 8, 0, 3, 9, 5, 2, 10, 6, 4, 1 }
  uselistorder i64 4, { 0, 4, 3, 2, 1, 5, 6 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1278:
  %0 = alloca i32
  %x0.0.reg2mem = alloca i32, !insn.addr !318
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !319
  %4 = inttoptr i64 %3 to i64*, !insn.addr !320
  %5 = load i64, i64* %4, align 8, !insn.addr !320
  %6 = call i64 @ret_large_struct(i32 100), !insn.addr !321
  %7 = add i32 %2, %1, !insn.addr !322
  %8 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !323
  %9 = inttoptr i64 %8 to i64*, !insn.addr !324
  %10 = load i64, i64* %9, align 8, !insn.addr !324
  %11 = icmp eq i64 %5, %10, !insn.addr !325
  store i32 %7, i32* %x0.0.reg2mem, !insn.addr !326
  br i1 %11, label %dec_label_pc_12cc, label %dec_label_pc_12c8, !insn.addr !326

dec_label_pc_12c8:                                ; preds = %dec_label_pc_1278
  call void @__stack_chk_fail(), !insn.addr !327
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !327
  br label %dec_label_pc_12cc, !insn.addr !327

dec_label_pc_12cc:                                ; preds = %dec_label_pc_12c8, %dec_label_pc_1278
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !328

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 0, 5, 6, 4, 3, 1, 2, 7 }
}

define i64 @ret_func_ptr() local_unnamed_addr {
dec_label_pc_12d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !329
  %3 = icmp eq i32 %2, 0, !insn.addr !329
  %4 = select i1 %3, i64 2388, i64 2396, !insn.addr !330
  ret i64 %4, !insn.addr !331
}

define i64 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_12f0:
  ret i64 10, !insn.addr !332
}

define i64 @ret_opaque_handle() local_unnamed_addr {
dec_label_pc_12f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !333
  %3 = icmp eq i32 %2, 0, !insn.addr !333
  %4 = select i1 %3, i64 ptrtoint (i32* @global_var_13028 to i64), i64 ptrtoint (i64* @global_var_13030 to i64), !insn.addr !334
  ret i64 %4, !insn.addr !335
}

define i64 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1314:
  %0 = load i32, i32* @global_var_13028, align 4, !insn.addr !336
  %1 = zext i32 %0 to i64, !insn.addr !336
  ret i64 %1, !insn.addr !337

; uselistorder directives
  uselistorder i32* @global_var_13028, { 1, 0 }
}

define i64 @ret_complex_expr() local_unnamed_addr {
dec_label_pc_1320:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = mul i64 %1, 2, !insn.addr !338
  %5 = trunc i64 %3 to i32, !insn.addr !339
  %6 = trunc i64 %2 to i32, !insn.addr !339
  %7 = sub i32 %5, %6, !insn.addr !339
  %8 = xor i64 %3, %2
  %9 = trunc i64 %8 to i32, !insn.addr !339
  %10 = xor i32 %7, %5, !insn.addr !339
  %11 = and i32 %10, %9, !insn.addr !339
  %12 = icmp slt i32 %11, 0, !insn.addr !339
  %13 = icmp slt i32 %7, 0, !insn.addr !339
  %14 = icmp eq i32 %7, 0, !insn.addr !339
  %15 = add i64 %1, 10, !insn.addr !340
  %16 = icmp ne i1 %13, %12, !insn.addr !341
  %17 = or i1 %14, %16, !insn.addr !341
  %18 = select i1 %17, i64 %15, i64 %4, !insn.addr !341
  %19 = and i64 %18, 4294967295, !insn.addr !341
  ret i64 %19, !insn.addr !342

; uselistorder directives
  uselistorder i32 %7, { 1, 2, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i32 0, { 13, 14, 15, 16, 17, 4, 5, 0, 3, 1, 6, 2, 7, 8, 9, 10, 11, 12 }
}

define i64 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1334:
  ret i64 40, !insn.addr !343
}

define i64 @ret_multi_branch() local_unnamed_addr {
dec_label_pc_133c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !344
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !345
  %3 = icmp ult i32 %2, 3, !insn.addr !345
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !346
  br i1 %3, label %4, label %8, !insn.addr !346

; <label>:4:                                      ; preds = %dec_label_pc_133c
  %5 = mul i64 %1, 10, !insn.addr !347
  %6 = add i64 %5, 10, !insn.addr !347
  %7 = and i64 %6, 4294967294, !insn.addr !346
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !346
  br label %8, !insn.addr !346

; <label>:8:                                      ; preds = %dec_label_pc_133c, %4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !348

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 10, { 2, 3, 4, 0, 5, 6, 1 }
  uselistorder i32 3, { 1, 0 }
  uselistorder label %8, { 1, 0 }
}

define i64 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1350:
  ret i64 60, !insn.addr !349
}

define i64 @ret_void() local_unnamed_addr {
dec_label_pc_1358:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = mul i64 %2, 3, !insn.addr !350
  %4 = and i64 %3, 4294967295, !insn.addr !350
  %5 = trunc i64 %3 to i32, !insn.addr !351
  %6 = inttoptr i64 %1 to i32*, !insn.addr !351
  store i32 %5, i32* %6, align 4, !insn.addr !351
  ret i64 %4, !insn.addr !352

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 3, 0, 4, 5, 6, 1, 7, 8, 9, 10, 11, 2, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 }
}

define i64 @call_ret_void() local_unnamed_addr {
dec_label_pc_1364:
  ret i64 21, !insn.addr !353

; uselistorder directives
  uselistorder i64 21, { 0, 3, 1, 4, 2 }
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_136c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_16f0 to i8*)), !insn.addr !354
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_170e to i8*)), !insn.addr !355
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_172a to i8*)), !insn.addr !356
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1746 to i8*)), !insn.addr !357
  %4 = call i32 @call_ret_large_struct(), !insn.addr !358
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1761 to i8*)), !insn.addr !359
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_177e to i8*)), !insn.addr !360
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_179a to i8*)), !insn.addr !361
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_17b7 to i8*)), !insn.addr !362
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_17d3 to i8*)), !insn.addr !363
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_17ef to i8*)), !insn.addr !364
  ret void, !insn.addr !364

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i64 0, { 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 1, 97, 98, 102, 2, 3, 4, 5, 6, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 99, 7, 8, 103, 9, 10, 100, 11, 101, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 92, 93, 94, 95, 96 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1440:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !365

; uselistorder directives
  uselistorder i32 1, { 32, 75, 76, 77, 78, 79, 80, 81, 82, 83, 31, 36, 30, 29, 28, 27, 37, 34, 113, 39, 38, 26, 25, 24, 23, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 22, 114, 41, 40, 33, 21, 74, 42, 20, 43, 19, 18, 95, 117, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 116, 54, 57, 56, 55, 17, 16, 15, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 115, 58, 0, 59, 14, 61, 60, 13, 62, 35, 12, 112, 118, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 73, 119, 1 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

!0 = !{i64 1860}
!1 = !{i64 1868}
!2 = !{i64 1916}
!3 = !{i64 1932}
!4 = !{i64 1948}
!5 = !{i64 1964}
!6 = !{i64 1980}
!7 = !{i64 1996}
!8 = !{i64 2012}
!9 = !{i64 2028}
!10 = !{i64 2056}
!11 = !{i64 2060}
!12 = !{i64 2064}
!13 = !{i64 2076}
!14 = !{i64 2144}
!15 = !{i64 2156}
!16 = !{i64 2160}
!17 = !{i64 2168}
!18 = !{i64 2172}
!19 = !{i64 2176}
!20 = !{i64 2180}
!21 = !{i64 2236}
!22 = !{i64 2296}
!23 = !{i64 2304}
!24 = !{i64 2320}
!25 = !{i64 2324}
!26 = !{i64 2332}
!27 = !{i64 2336}
!28 = !{i64 2344}
!29 = !{i64 2348}
!30 = !{i64 2352}
!31 = !{i64 2360}
!32 = !{i64 2372}
!33 = !{i64 2384}
!34 = !{i64 2388}
!35 = !{i64 2392}
!36 = !{i64 2396}
!37 = !{i64 2400}
!38 = !{i64 2404}
!39 = !{i64 2408}
!40 = !{i64 2412}
!41 = !{i64 2416}
!42 = !{i64 2424}
!43 = !{i64 2428}
!44 = !{i64 2432}
!45 = !{i64 2440}
!46 = !{i64 2444}
!47 = !{i64 2448}
!48 = !{i64 2452}
!49 = !{i64 2460}
!50 = !{i64 2468}
!51 = !{i64 2472}
!52 = !{i64 2476}
!53 = !{i64 2480}
!54 = !{i64 2484}
!55 = !{i64 2488}
!56 = !{i64 2496}
!57 = !{i64 2500}
!58 = !{i64 2504}
!59 = !{i64 2508}
!60 = !{i64 2512}
!61 = !{i64 2520}
!62 = !{i64 2524}
!63 = !{i64 2528}
!64 = !{i64 2532}
!65 = !{i64 2536}
!66 = !{i64 2540}
!67 = !{i64 2544}
!68 = !{i64 2552}
!69 = !{i64 2556}
!70 = !{i64 2560}
!71 = !{i64 2564}
!72 = !{i64 2568}
!73 = !{i64 2572}
!74 = !{i64 2580}
!75 = !{i64 2584}
!76 = !{i64 2588}
!77 = !{i64 2592}
!78 = !{i64 2596}
!79 = !{i64 2604}
!80 = !{i64 2612}
!81 = !{i64 2616}
!82 = !{i64 2620}
!83 = !{i64 2632}
!84 = !{i64 2644}
!85 = !{i64 2664}
!86 = !{i64 2700}
!87 = !{i64 2708}
!88 = !{i64 2716}
!89 = !{i64 2724}
!90 = !{i64 2728}
!91 = !{i64 2736}
!92 = !{i64 2740}
!93 = !{i64 2744}
!94 = !{i64 2748}
!95 = !{i64 2752}
!96 = !{i64 2756}
!97 = !{i64 2760}
!98 = !{i64 2764}
!99 = !{i64 2772}
!100 = !{i64 2780}
!101 = !{i64 2784}
!102 = !{i64 2792}
!103 = !{i64 2796}
!104 = !{i64 2800}
!105 = !{i64 2804}
!106 = !{i64 2812}
!107 = !{i64 2816}
!108 = !{i64 2824}
!109 = !{i64 2832}
!110 = !{i64 2836}
!111 = !{i64 2840}
!112 = !{i64 2844}
!113 = !{i64 2848}
!114 = !{i64 2852}
!115 = !{i64 2856}
!116 = !{i64 2860}
!117 = !{i64 2864}
!118 = !{i64 2868}
!119 = !{i64 2896}
!120 = !{i64 2904}
!121 = !{i64 2892}
!122 = !{i64 2908}
!123 = !{i64 2916}
!124 = !{i64 2920}
!125 = !{i64 2936}
!126 = !{i64 2940}
!127 = !{i64 2944}
!128 = !{i64 2956}
!129 = !{i64 2964}
!130 = !{i64 2968}
!131 = !{i64 2972}
!132 = !{i64 2976}
!133 = !{i64 2984}
!134 = !{i64 2988}
!135 = !{i64 2992}
!136 = !{i64 2996}
!137 = !{i64 3000}
!138 = !{i64 3004}
!139 = !{i64 3016}
!140 = !{i64 3028}
!141 = !{i64 3032}
!142 = !{i64 3052}
!143 = !{i64 3072}
!144 = !{i64 3092}
!145 = !{i64 3112}
!146 = !{i64 3132}
!147 = !{i64 3152}
!148 = !{i64 3172}
!149 = !{i64 3192}
!150 = !{i64 3212}
!151 = !{i64 3232}
!152 = !{i64 3252}
!153 = !{i64 3280}
!154 = !{i64 3300}
!155 = !{i64 3320}
!156 = !{i64 3340}
!157 = !{i64 3368}
!158 = !{i64 3388}
!159 = !{i64 3392}
!160 = !{i64 3396}
!161 = !{i64 3404}
!162 = !{i64 3408}
!163 = !{i64 3416}
!164 = !{i64 3496}
!165 = !{i64 3504}
!166 = !{i64 3512}
!167 = !{i64 3516}
!168 = !{i64 3524}
!169 = !{i64 3528}
!170 = !{i64 3552}
!171 = !{i64 3556}
!172 = !{i64 3560}
!173 = !{i64 3568}
!174 = !{i64 3576}
!175 = !{i64 3580}
!176 = !{i64 3588}
!177 = !{i64 3596}
!178 = !{i64 3604}
!179 = !{i64 3612}
!180 = !{i64 3616}
!181 = !{i64 3620}
!182 = !{i64 3624}
!183 = !{i64 3628}
!184 = !{i64 3636}
!185 = !{i64 3640}
!186 = !{i64 3656}
!187 = !{i64 3660}
!188 = !{i64 3664}
!189 = !{i64 3668}
!190 = !{i64 3672}
!191 = !{i64 3676}
!192 = !{i64 3684}
!193 = !{i64 3696}
!194 = !{i64 3700}
!195 = !{i64 3724}
!196 = !{i64 3728}
!197 = !{i64 3744}
!198 = !{i64 3752}
!199 = !{i64 3760}
!200 = !{i64 3764}
!201 = !{i64 3772}
!202 = !{i64 3776}
!203 = !{i64 3784}
!204 = !{i64 3788}
!205 = !{i64 3792}
!206 = !{i64 3804}
!207 = !{i64 3816}
!208 = !{i64 3836}
!209 = !{i64 3872}
!210 = !{i64 3880}
!211 = !{i64 3888}
!212 = !{i64 3896}
!213 = !{i64 3900}
!214 = !{i64 3908}
!215 = !{i64 3912}
!216 = !{i64 3916}
!217 = !{i64 3920}
!218 = !{i64 3924}
!219 = !{i64 3928}
!220 = !{i64 3932}
!221 = !{i64 3936}
!222 = !{i64 3944}
!223 = !{i64 3952}
!224 = !{i64 3956}
!225 = !{i64 3964}
!226 = !{i64 3968}
!227 = !{i64 3972}
!228 = !{i64 3976}
!229 = !{i64 3984}
!230 = !{i64 3988}
!231 = !{i64 3996}
!232 = !{i64 4020}
!233 = !{i64 4040}
!234 = !{i64 4044}
!235 = !{i64 4052}
!236 = !{i64 4068}
!237 = !{i64 4072}
!238 = !{i64 4084}
!239 = !{i64 4088}
!240 = !{i64 4092}
!241 = !{i64 4096}
!242 = !{i64 4112}
!243 = !{i64 4116}
!244 = !{i64 4124}
!245 = !{i64 4136}
!246 = !{i64 4140}
!247 = !{i64 4144}
!248 = !{i64 4152}
!249 = !{i64 4164}
!250 = !{i64 4172}
!251 = !{i64 4176}
!252 = !{i64 4180}
!253 = !{i64 4184}
!254 = !{i64 4196}
!255 = !{i64 4200}
!256 = !{i64 4216}
!257 = !{i64 4220}
!258 = !{i64 4224}
!259 = !{i64 4232}
!260 = !{i64 4240}
!261 = !{i64 4244}
!262 = !{i64 4252}
!263 = !{i64 4260}
!264 = !{i64 4264}
!265 = !{i64 4272}
!266 = !{i64 4276}
!267 = !{i64 4284}
!268 = !{i64 4288}
!269 = !{i64 4292}
!270 = !{i64 4300}
!271 = !{i64 4320}
!272 = !{i64 4340}
!273 = !{i64 4360}
!274 = !{i64 4380}
!275 = !{i64 4400}
!276 = !{i64 4404}
!277 = !{i64 4408}
!278 = !{i64 4424}
!279 = !{i64 4428}
!280 = !{i64 4432}
!281 = !{i64 4448}
!282 = !{i64 4452}
!283 = !{i64 4456}
!284 = !{i64 4472}
!285 = !{i64 4492}
!286 = !{i64 4516}
!287 = !{i64 4520}
!288 = !{i64 4524}
!289 = !{i64 4540}
!290 = !{i64 4564}
!291 = !{i64 4568}
!292 = !{i64 4572}
!293 = !{i64 4580}
!294 = !{i64 4584}
!295 = !{i64 4588}
!296 = !{i64 4596}
!297 = !{i64 4600}
!298 = !{i64 4604}
!299 = !{i64 4608}
!300 = !{i64 4616}
!301 = !{i64 4620}
!302 = !{i64 4632}
!303 = !{i64 4636}
!304 = !{i64 4648}
!305 = !{i64 4652}
!306 = !{i64 4656}
!307 = !{i64 4660}
!308 = !{i64 4668}
!309 = !{i64 4672}
!310 = !{i64 4680}
!311 = !{i64 4684}
!312 = !{i64 4692}
!313 = !{i64 4700}
!314 = !{i64 4704}
!315 = !{i64 4712}
!316 = !{i64 4716}
!317 = !{i64 4724}
!318 = !{i64 4728}
!319 = !{i64 4740}
!320 = !{i64 4748}
!321 = !{i64 4764}
!322 = !{i64 4776}
!323 = !{i64 4784}
!324 = !{i64 4792}
!325 = !{i64 4796}
!326 = !{i64 4804}
!327 = !{i64 4808}
!328 = !{i64 4816}
!329 = !{i64 4820}
!330 = !{i64 4840}
!331 = !{i64 4844}
!332 = !{i64 4852}
!333 = !{i64 4868}
!334 = !{i64 4876}
!335 = !{i64 4880}
!336 = !{i64 4888}
!337 = !{i64 4892}
!338 = !{i64 4896}
!339 = !{i64 4900}
!340 = !{i64 4904}
!341 = !{i64 4908}
!342 = !{i64 4912}
!343 = !{i64 4920}
!344 = !{i64 4924}
!345 = !{i64 4928}
!346 = !{i64 4936}
!347 = !{i64 4932}
!348 = !{i64 4940}
!349 = !{i64 4948}
!350 = !{i64 4952}
!351 = !{i64 4956}
!352 = !{i64 4960}
!353 = !{i64 4968}
!354 = !{i64 4988}
!355 = !{i64 5008}
!356 = !{i64 5028}
!357 = !{i64 5048}
!358 = !{i64 5052}
!359 = !{i64 5072}
!360 = !{i64 5092}
!361 = !{i64 5116}
!362 = !{i64 5136}
!363 = !{i64 5156}
!364 = !{i64 5180}
!365 = !{i64 5200}
