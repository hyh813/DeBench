source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_11f58 = local_unnamed_addr global i64 2144
@global_var_11f60 = local_unnamed_addr global i64 2144
@global_var_11f68 = local_unnamed_addr global i64 2144
@global_var_11f70 = local_unnamed_addr global i64 2144
@global_var_11f78 = local_unnamed_addr global i64 2144
@global_var_11f80 = local_unnamed_addr global i64 2144
@global_var_11f88 = local_unnamed_addr global i64 2144
@global_var_11f90 = local_unnamed_addr global i64 2144
@global_var_11f98 = local_unnamed_addr global i64 2144
@global_var_11fa0 = local_unnamed_addr global i64 2144
@global_var_11fa8 = local_unnamed_addr global i64 2144
@global_var_11fb0 = local_unnamed_addr global i64 2144
@global_var_11fb8 = local_unnamed_addr global i64 2144
@global_var_11fc0 = local_unnamed_addr global i64 2144
@global_var_11ff0 = local_unnamed_addr global i64 2432
@global_var_12018 = global i64 0
@global_var_11fd0 = local_unnamed_addr global i64 0
@global_var_11ff8 = local_unnamed_addr global i64 0
@global_var_ab4 = local_unnamed_addr constant i64 4107391026002395168
@global_var_12020 = global i64 0
@global_var_12028 = global i64 0
@global_var_12168 = global i64 0
@global_var_12160 = local_unnamed_addr global i64 0
@global_var_11fe8 = local_unnamed_addr global i64 0
@global_var_13ba = constant i64 4194311598674554182
@global_var_1568 = local_unnamed_addr constant i64 25769803781
@global_var_1588 = local_unnamed_addr constant i64 12884901892
@0 = external global i32
@global_var_12000 = external global i8*
@global_var_1558 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_1578 = local_unnamed_addr constant fp128 0xL00000000000000003BF000000000E000
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_1328 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_1358 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_1378 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_1398 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_13b8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_13d8 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_1408 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_1430 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_1458 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_1478 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_1498 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_14b8 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_14d8 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_1510 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_1530 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_848:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_880(i8* %s) local_unnamed_addr {
dec_label_pc_880:
  %0 = call i32 @strlen(i8* %s), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_890([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_890:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_8a0(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_8a0:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_8b0(i64* %d) local_unnamed_addr {
dec_label_pc_8b0:
  call void @__cxa_finalize(i64* %d), !insn.addr !5
  ret void, !insn.addr !5
}

define void (i32)* @function_8c0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_8c0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !6
  ret void (i32)* %0, !insn.addr !6
}

define i64* @function_8d0(i32 %size) local_unnamed_addr {
dec_label_pc_8d0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !7
  ret i64* %0, !insn.addr !7
}

define i32 @function_8e0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8e0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_8f0() local_unnamed_addr {
dec_label_pc_8f0:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define void @function_900() local_unnamed_addr {
dec_label_pc_900:
  call void @__gmon_start__(), !insn.addr !10
  ret void, !insn.addr !10
}

define void @function_910() local_unnamed_addr {
dec_label_pc_910:
  call void @abort(), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @function_920(i8* %s) local_unnamed_addr {
dec_label_pc_920:
  %0 = call i32 @puts(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_930(i64* %ptr) local_unnamed_addr {
dec_label_pc_930:
  call void @free(i64* %ptr), !insn.addr !13
  ret void, !insn.addr !13
}

define i64 @function_940(i64* %arg1, i64 %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_940:
  %0 = call i64 @__longjmp_chk(i64* %arg1, i64 %arg2, i64* %arg3), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define i8* @function_950(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_950:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !15
  ret i8* %0, !insn.addr !15
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_980:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !16
  ret i64 0, !insn.addr !17
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_9c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_11ff0, align 8, !insn.addr !18
  %3 = trunc i64 %arg1 to i32, !insn.addr !19
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !19
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !19
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !19
  call void @abort(), !insn.addr !20
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !20
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_9f4:
  %0 = load i64, i64* inttoptr (i64 73696 to i64*), align 32, !insn.addr !21
  %1 = icmp eq i64 %0, 0, !insn.addr !22
  br i1 %1, label %dec_label_pc_a04, label %dec_label_pc_a00, !insn.addr !22

dec_label_pc_a00:                                 ; preds = %dec_label_pc_9f4
  call void @__gmon_start__(), !insn.addr !23
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !23

dec_label_pc_a04:                                 ; preds = %dec_label_pc_9f4
  ret i64 0, !insn.addr !24
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_a10:
  ret i64 ptrtoint (i64* @global_var_12018 to i64), !insn.addr !25
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_a40:
  ret i64 ptrtoint (i64* @global_var_12018 to i64), !insn.addr !26
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_a80:
  %x0.0.reg2mem = alloca i64, !insn.addr !27
  %0 = load i8, i8* bitcast (i64* @global_var_12018 to i8*), align 8, !insn.addr !28
  %1 = zext i8 %0 to i64, !insn.addr !28
  %2 = icmp eq i8 %0, 0, !insn.addr !29
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !29
  br i1 %2, label %dec_label_pc_a98, label %dec_label_pc_abc, !insn.addr !29

dec_label_pc_a98:                                 ; preds = %dec_label_pc_a80
  %3 = load i64, i64* inttoptr (i64 73688 to i64*), align 8, !insn.addr !30
  %4 = icmp eq i64 %3, 0, !insn.addr !31
  br i1 %4, label %dec_label_pc_ab0, label %dec_label_pc_aa4, !insn.addr !31

dec_label_pc_aa4:                                 ; preds = %dec_label_pc_a98
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_12000 to i64), i64 8) to i64*), align 8, !insn.addr !32
  %6 = inttoptr i64 %5 to i64*, !insn.addr !33
  call void @__cxa_finalize(i64* %6), !insn.addr !33
  br label %dec_label_pc_ab0, !insn.addr !33

dec_label_pc_ab0:                                 ; preds = %dec_label_pc_aa4, %dec_label_pc_a98
  %7 = call i64 @deregister_tm_clones(), !insn.addr !34
  store i8 1, i8* bitcast (i64* @global_var_12018 to i8*), align 8, !insn.addr !35
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !35
  br label %dec_label_pc_abc, !insn.addr !35

dec_label_pc_abc:                                 ; preds = %dec_label_pc_a80, %dec_label_pc_ab0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !36

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_abc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_ad0:
  %0 = call i64 @register_tm_clones(), !insn.addr !37
  ret i64 %0, !insn.addr !37
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_ae0:
  store i32 1, i32* bitcast (i64* @global_var_12020 to i32*), align 8, !insn.addr !38
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_12028, i64 1, i64* bitcast (i8** @global_var_12000 to i64*)), !insn.addr !39
  ret i64 %0, !insn.addr !39
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_b00:
  store i32 1, i32* bitcast (i64* @global_var_12160 to i32*), align 8, !insn.addr !40
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_12168, i64 1, i64* nonnull @global_var_12020), !insn.addr !41
  ret i64 %0, !insn.addr !41

; uselistorder directives
  uselistorder i64 (i64*, i64, i64*)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch() local_unnamed_addr {
dec_label_pc_b20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !42
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_b24:
  ret i64 10, !insn.addr !43
}

define i64 @param_opaque_predicate() local_unnamed_addr {
dec_label_pc_b30:
  %0 = alloca i64
  %x2.0.reg2mem = alloca i64, !insn.addr !44
  %x1.0.reg2mem = alloca i64, !insn.addr !44
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !45
  %3 = trunc i64 %2 to i32, !insn.addr !46
  %4 = icmp eq i32 %3, 0, !insn.addr !47
  br i1 %4, label %dec_label_pc_b80, label %dec_label_pc_b50, !insn.addr !47

dec_label_pc_b50:                                 ; preds = %dec_label_pc_b30
  %5 = mul i64 %1, 2, !insn.addr !44
  %6 = trunc i64 %1 to i32, !insn.addr !48
  %7 = mul i32 %6, %6, !insn.addr !48
  %8 = trunc i64 %5 to i32, !insn.addr !48
  %9 = mul i32 %3, %3, !insn.addr !46
  %10 = or i32 %8, 1, !insn.addr !48
  %11 = add i32 %10, %7, !insn.addr !49
  %12 = icmp eq i32 %11, %9, !insn.addr !50
  %13 = and i64 %2, 4294967295, !insn.addr !45
  %14 = and i64 %1, 4294967295, !insn.addr !51
  store i64 %13, i64* %x1.0.reg2mem, !insn.addr !52
  store i64 %14, i64* %x2.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_b58, !insn.addr !52

dec_label_pc_b58:                                 ; preds = %dec_label_pc_b58, %dec_label_pc_b50
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %15 = trunc i64 %x2.0.reload to i32, !insn.addr !53
  %16 = trunc i64 %x1.0.reload to i32, !insn.addr !53
  %17 = srem i32 %15, %16
  %18 = zext i32 %17 to i64, !insn.addr !54
  %19 = icmp eq i32 %17, 0, !insn.addr !55
  store i64 %18, i64* %x1.0.reg2mem, !insn.addr !55
  store i64 %x1.0.reload, i64* %x2.0.reg2mem, !insn.addr !55
  br i1 %19, label %dec_label_pc_b6c, label %dec_label_pc_b58, !insn.addr !55

dec_label_pc_b6c:                                 ; preds = %dec_label_pc_b58
  %20 = icmp eq i64 %x1.0.reload, 1
  %storemerge = icmp eq i1 %12, %20
  br i1 %storemerge, label %dec_label_pc_b78, label %dec_label_pc_b80, !insn.addr !56

dec_label_pc_b78:                                 ; preds = %dec_label_pc_b6c
  %21 = add i64 %5, 10, !insn.addr !57
  %22 = and i64 %21, 4294967294, !insn.addr !57
  ret i64 %22, !insn.addr !58

dec_label_pc_b80:                                 ; preds = %dec_label_pc_b6c, %dec_label_pc_b30
  %23 = mul i64 %1, 3, !insn.addr !59
  %24 = add i64 %23, 20, !insn.addr !60
  %25 = and i64 %24, 4294967295, !insn.addr !60
  ret i64 %25, !insn.addr !61

; uselistorder directives
  uselistorder i32 %17, { 1, 0 }
  uselistorder i64 %x1.0.reload, { 2, 0, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i32 %3, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 3, 2, 1, 4, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_b90:
  %x1.0.reg2mem = alloca i64, !insn.addr !62
  %x0.0.reg2mem = alloca i64, !insn.addr !62
  store i64 6, i64* %x0.0.reg2mem, !insn.addr !63
  store i64 5, i64* %x1.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_b98, !insn.addr !63

dec_label_pc_b98:                                 ; preds = %dec_label_pc_b98, %dec_label_pc_b90
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %0 = trunc i64 %x1.0.reload to i32, !insn.addr !64
  %1 = trunc i64 %x0.0.reload to i32, !insn.addr !64
  %2 = srem i32 %0, %1
  %3 = zext i32 %2 to i64, !insn.addr !65
  %4 = icmp eq i32 %2, 0, !insn.addr !66
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !66
  store i64 %x0.0.reload, i64* %x1.0.reg2mem, !insn.addr !66
  br i1 %4, label %dec_label_pc_bac, label %dec_label_pc_b98, !insn.addr !66

dec_label_pc_bac:                                 ; preds = %dec_label_pc_b98
  %5 = icmp eq i64 %x0.0.reload, 1, !insn.addr !67
  %6 = select i1 %5, i64 20, i64 35, !insn.addr !68
  ret i64 %6, !insn.addr !69

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %x0.0.reload, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_instruction_substitution() local_unnamed_addr {
dec_label_pc_bc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !70
  %3 = urem i32 %2, 16, !insn.addr !71
  %4 = udiv i32 %2, 2, !insn.addr !72
  %reass.mul = mul i32 %2, 21
  %5 = add nuw i32 %3, %4, !insn.addr !73
  %6 = add i32 %5, %reass.mul, !insn.addr !74
  %7 = zext i32 %6 to i64, !insn.addr !74
  ret i64 %7, !insn.addr !75

; uselistorder directives
  uselistorder i32 %2, { 2, 0, 1 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_be4:
  ret i64 225, !insn.addr !76
}

define i64 @decrypt_string() local_unnamed_addr {
dec_label_pc_bf0:
  %0 = alloca i64
  %x4.0.reg2mem = alloca i64, !insn.addr !77
  %x2.0.in.reg2mem = alloca i8, !insn.addr !77
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = inttoptr i64 %3 to i8*, !insn.addr !78
  %6 = inttoptr i64 %4 to i8*, !insn.addr !78
  %7 = trunc i64 %2 to i32, !insn.addr !78
  %8 = call i8* @strncpy(i8* %5, i8* %6, i32 %7), !insn.addr !78
  %9 = ptrtoint i8* %8 to i64, !insn.addr !78
  %10 = add i64 %2, -1, !insn.addr !79
  %11 = add i64 %10, %9, !insn.addr !80
  %12 = inttoptr i64 %11 to i8*, !insn.addr !80
  store i8 0, i8* %12, align 1, !insn.addr !80
  %13 = load i8, i8* %8, align 1, !insn.addr !81
  %14 = icmp eq i8 %13, 0, !insn.addr !82
  br i1 %14, label %dec_label_pc_c40, label %dec_label_pc_c30.preheader, !insn.addr !82

dec_label_pc_c30.preheader:                       ; preds = %dec_label_pc_bf0
  %15 = trunc i64 %1 to i8
  store i8 %13, i8* %x2.0.in.reg2mem
  store i64 %9, i64* %x4.0.reg2mem
  br label %dec_label_pc_c30

dec_label_pc_c30:                                 ; preds = %dec_label_pc_c30.preheader, %dec_label_pc_c30
  %x4.0.reload = load i64, i64* %x4.0.reg2mem
  %x2.0.in.reload = load i8, i8* %x2.0.in.reg2mem
  %16 = xor i8 %x2.0.in.reload, %15, !insn.addr !83
  %17 = inttoptr i64 %x4.0.reload to i8*, !insn.addr !83
  store i8 %16, i8* %17, align 1, !insn.addr !83
  %18 = add i64 %x4.0.reload, 1, !insn.addr !84
  %19 = inttoptr i64 %18 to i8*, !insn.addr !84
  %20 = load i8, i8* %19, align 1, !insn.addr !84
  %21 = icmp eq i8 %20, 0, !insn.addr !85
  store i8 %20, i8* %x2.0.in.reg2mem, !insn.addr !85
  store i64 %18, i64* %x4.0.reg2mem, !insn.addr !85
  br i1 %21, label %dec_label_pc_c40, label %dec_label_pc_c30, !insn.addr !85

dec_label_pc_c40:                                 ; preds = %dec_label_pc_c30, %dec_label_pc_bf0
  ret i64 %9, !insn.addr !86

; uselistorder directives
  uselistorder i64 %x4.0.reload, { 1, 0 }
  uselistorder i64 %9, { 2, 0, 1 }
  uselistorder i8* %x2.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x4.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_c30, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_c50:
  %x19.1.reg2mem = alloca i32, !insn.addr !87
  %x19.0.reg2mem = alloca i8, !insn.addr !87
  %x0.0.reg2mem = alloca i64, !insn.addr !87
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !88
  %1 = inttoptr i64 %0 to i64*, !insn.addr !89
  %2 = load i64, i64* %1, align 8, !insn.addr !89
  %3 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !90
  %4 = call i8* @strncpy(i8* nonnull %3, i8* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_12000 to i64), i64 16) to i8*), i32 31), !insn.addr !90
  %5 = load i32, i32* %stack_var_-32, align 4, !insn.addr !91
  %6 = urem i32 %5, 256, !insn.addr !91
  %7 = icmp eq i32 %6, 0, !insn.addr !92
  store i32 0, i32* %x19.1.reg2mem, !insn.addr !92
  br i1 %7, label %dec_label_pc_cb4, label %dec_label_pc_c98, !insn.addr !92

dec_label_pc_c98:                                 ; preds = %dec_label_pc_c50
  %8 = trunc i32 %5 to i8, !insn.addr !91
  %9 = ptrtoint i8* %4 to i64, !insn.addr !90
  store i64 %9, i64* %x0.0.reg2mem, !insn.addr !93
  store i8 %8, i8* %x19.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_ca0, !insn.addr !93

dec_label_pc_ca0:                                 ; preds = %dec_label_pc_ca0, %dec_label_pc_c98
  %x19.0.reload = load i8, i8* %x19.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %10 = xor i8 %x19.0.reload, 90, !insn.addr !94
  %11 = inttoptr i64 %x0.0.reload to i8*, !insn.addr !94
  store i8 %10, i8* %11, align 1, !insn.addr !94
  %12 = add i64 %x0.0.reload, 1, !insn.addr !95
  %13 = inttoptr i64 %12 to i8*, !insn.addr !95
  %14 = load i8, i8* %13, align 1, !insn.addr !95
  %15 = icmp eq i8 %14, 0, !insn.addr !96
  store i64 %12, i64* %x0.0.reg2mem, !insn.addr !96
  store i8 %14, i8* %x19.0.reg2mem, !insn.addr !96
  br i1 %15, label %dec_label_pc_cb0, label %dec_label_pc_ca0, !insn.addr !96

dec_label_pc_cb0:                                 ; preds = %dec_label_pc_ca0
  %16 = load i32, i32* %stack_var_-32, align 4, !insn.addr !97
  %17 = urem i32 %16, 256, !insn.addr !97
  store i32 %17, i32* %x19.1.reg2mem, !insn.addr !97
  br label %dec_label_pc_cb4, !insn.addr !97

dec_label_pc_cb4:                                 ; preds = %dec_label_pc_cb0, %dec_label_pc_c50
  %18 = call i32 @strlen(i8* %4), !insn.addr !98
  %19 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !99
  %20 = inttoptr i64 %19 to i64*, !insn.addr !100
  %21 = load i64, i64* %20, align 8, !insn.addr !100
  %22 = icmp eq i64 %2, %21, !insn.addr !101
  br i1 %22, label %dec_label_pc_cdc, label %dec_label_pc_ce8, !insn.addr !101

dec_label_pc_cdc:                                 ; preds = %dec_label_pc_cb4
  %x19.1.reload = load i32, i32* %x19.1.reg2mem
  %23 = add i32 %18, %x19.1.reload, !insn.addr !102
  %24 = zext i32 %23 to i64, !insn.addr !102
  ret i64 %24, !insn.addr !103

dec_label_pc_ce8:                                 ; preds = %dec_label_pc_cb4
  call void @__stack_chk_fail(), !insn.addr !104
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !105

; uselistorder directives
  uselistorder i64 %x0.0.reload, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %stack_var_-32, { 1, 0, 2 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i8* %x19.0.reg2mem, { 1, 0, 2 }
  uselistorder i8 0, { 0, 1, 2, 4, 3 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_cf0:
  %0 = call i64 @param_string_encryption(), !insn.addr !106
  ret i64 %0, !insn.addr !106
}

define i64 @param_tail_call_optimized() local_unnamed_addr {
dec_label_pc_cf4:
  %0 = alloca i64
  %x0.1.reg2mem = alloca i64, !insn.addr !107
  %x2.0.in.reg2mem = alloca i64, !insn.addr !107
  %x0.0.reg2mem = alloca i64, !insn.addr !107
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %1, 4294967295, !insn.addr !108
  %4 = trunc i64 %2 to i32, !insn.addr !109
  %5 = icmp slt i32 %4, 1, !insn.addr !109
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !109
  store i64 %3, i64* %x0.1.reg2mem, !insn.addr !109
  br i1 %5, label %dec_label_pc_d18, label %dec_label_pc_d08, !insn.addr !109

dec_label_pc_d08:                                 ; preds = %dec_label_pc_cf4, %dec_label_pc_d08
  %x2.0.in.reload = load i64, i64* %x2.0.in.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %x2.0 = and i64 %x2.0.in.reload, 4294967295
  %6 = add nuw nsw i64 %x2.0, 4294967295, !insn.addr !110
  %7 = add i64 %x2.0.in.reload, %x0.0.reload, !insn.addr !111
  %8 = and i64 %7, 4294967295, !insn.addr !111
  %9 = trunc i64 %x2.0.in.reload to i32, !insn.addr !112
  %10 = icmp eq i32 %9, 1, !insn.addr !112
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !112
  store i64 %6, i64* %x2.0.in.reg2mem, !insn.addr !112
  store i64 %8, i64* %x0.1.reg2mem, !insn.addr !112
  br i1 %10, label %dec_label_pc_d18, label %dec_label_pc_d08, !insn.addr !112

dec_label_pc_d18:                                 ; preds = %dec_label_pc_d08, %dec_label_pc_cf4
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  ret i64 %x0.1.reload, !insn.addr !113

; uselistorder directives
  uselistorder i64 %x2.0.in.reload, { 1, 2, 0 }
  uselistorder i64* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.0.in.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_d08, { 1, 0 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_d20:
  ret i64 500500, !insn.addr !114
}

define i64 @param_non_tail_call() local_unnamed_addr {
dec_label_pc_d30:
  %0 = alloca i64
  %x0.1.reg2mem = alloca i64, !insn.addr !115
  %x1.0.in.reg2mem = alloca i64, !insn.addr !115
  %x0.0.reg2mem = alloca i64, !insn.addr !115
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !116
  %3 = icmp slt i32 %2, 1, !insn.addr !116
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !116
  store i64 0, i64* %x0.1.reg2mem, !insn.addr !116
  br i1 %3, label %dec_label_pc_d50, label %dec_label_pc_d40, !insn.addr !116

dec_label_pc_d40:                                 ; preds = %dec_label_pc_d30, %dec_label_pc_d40
  %x1.0.in.reload = load i64, i64* %x1.0.in.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %x1.0 = and i64 %x1.0.in.reload, 4294967295
  %4 = add nuw nsw i64 %x1.0, 4294967295, !insn.addr !117
  %5 = add i64 %x1.0.in.reload, %x0.0.reload, !insn.addr !118
  %6 = and i64 %5, 4294967295, !insn.addr !118
  %7 = trunc i64 %x1.0.in.reload to i32, !insn.addr !119
  %8 = icmp eq i32 %7, 1, !insn.addr !119
  store i64 %6, i64* %x0.0.reg2mem, !insn.addr !119
  store i64 %4, i64* %x1.0.in.reg2mem, !insn.addr !119
  store i64 %6, i64* %x0.1.reg2mem, !insn.addr !119
  br i1 %8, label %dec_label_pc_d50, label %dec_label_pc_d40, !insn.addr !119

dec_label_pc_d50:                                 ; preds = %dec_label_pc_d40, %dec_label_pc_d30
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  ret i64 %x0.1.reload, !insn.addr !120

; uselistorder directives
  uselistorder i64 %x1.0.in.reload, { 1, 2, 0 }
  uselistorder i64* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.in.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_d40, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_d54:
  ret i64 ptrtoint (i64* @global_var_13ba to i64), !insn.addr !121
}

define i64 @param_vectorized_loop() local_unnamed_addr {
dec_label_pc_d60:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i32, !insn.addr !122
  %x1.0.reg2mem = alloca i64, !insn.addr !122
  %x4.0.reg2mem = alloca i64, !insn.addr !122
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = trunc i64 %1 to i32, !insn.addr !123
  %6 = icmp slt i32 %5, 1, !insn.addr !123
  store i64 0, i64* %x4.0.reg2mem, !insn.addr !123
  br i1 %6, label %dec_label_pc_db0, label %dec_label_pc_d70, !insn.addr !123

dec_label_pc_d70:                                 ; preds = %dec_label_pc_d60, %dec_label_pc_d70
  %x4.0.reload = load i64, i64* %x4.0.reg2mem
  %7 = mul i64 %x4.0.reload, 4, !insn.addr !124
  %8 = add i64 %7, %4, !insn.addr !124
  %9 = inttoptr i64 %8 to i32*, !insn.addr !124
  %10 = load i32, i32* %9, align 4, !insn.addr !124
  %11 = add i64 %7, %3, !insn.addr !125
  %12 = inttoptr i64 %11 to i32*, !insn.addr !125
  %13 = load i32, i32* %12, align 4, !insn.addr !125
  %14 = add i32 %13, %10, !insn.addr !126
  %15 = add i64 %7, %2, !insn.addr !127
  %16 = inttoptr i64 %15 to i32*, !insn.addr !127
  store i32 %14, i32* %16, align 4, !insn.addr !127
  %17 = add nuw nsw i64 %x4.0.reload, 1, !insn.addr !128
  %18 = icmp sgt i64 %1, %17, !insn.addr !129
  store i64 %17, i64* %x4.0.reg2mem, !insn.addr !129
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !129
  store i32 0, i32* %x0.0.reg2mem, !insn.addr !129
  br i1 %18, label %dec_label_pc_d70, label %dec_label_pc_d98, !insn.addr !129

dec_label_pc_d98:                                 ; preds = %dec_label_pc_d70, %dec_label_pc_d98
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %19 = mul i64 %x1.0.reload, 4, !insn.addr !130
  %20 = add i64 %19, %2, !insn.addr !130
  %21 = inttoptr i64 %20 to i32*, !insn.addr !130
  %22 = load i32, i32* %21, align 4, !insn.addr !130
  %23 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !131
  %24 = add i32 %22, %x0.0.reload, !insn.addr !132
  %25 = icmp sgt i64 %1, %23, !insn.addr !133
  store i64 %23, i64* %x1.0.reg2mem, !insn.addr !133
  store i32 %24, i32* %x0.0.reg2mem, !insn.addr !133
  br i1 %25, label %dec_label_pc_d98, label %dec_label_pc_dac, !insn.addr !133

dec_label_pc_dac:                                 ; preds = %dec_label_pc_d98
  %26 = zext i32 %24 to i64, !insn.addr !132
  ret i64 %26, !insn.addr !134

dec_label_pc_db0:                                 ; preds = %dec_label_pc_d60
  ret i64 0, !insn.addr !135

; uselistorder directives
  uselistorder i32 %24, { 1, 0 }
  uselistorder i64 %7, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %x4.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_d98, { 1, 0 }
  uselistorder label %dec_label_pc_d70, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_dc0:
  %x1.1.reg2mem = alloca i64, !insn.addr !136
  %x0.0.reg2mem = alloca i32, !insn.addr !136
  %x1.0.reg2mem = alloca i64, !insn.addr !136
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-96 = alloca i64, align 8
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !137
  %1 = ptrtoint i64* %stack_var_-96 to i64, !insn.addr !138
  %2 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !139
  %3 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !140
  %4 = inttoptr i64 %0 to i64*, !insn.addr !141
  %5 = load i64, i64* %4, align 8, !insn.addr !141
  store i64 0, i64* %stack_var_-32, align 8, !insn.addr !142
  store i64 4294967298, i64* %stack_var_-96, align 8, !insn.addr !143
  store i64 34359738375, i64* %stack_var_-64, align 8, !insn.addr !144
  store i64 1, i64* %x1.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_e10, !insn.addr !145

dec_label_pc_e10:                                 ; preds = %dec_label_pc_e10, %dec_label_pc_dc0
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %6 = mul i64 %x1.0.reload, 4, !insn.addr !146
  %7 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !147
  %8 = add nsw i64 %6, -4
  %9 = add i64 %8, %1, !insn.addr !148
  %10 = inttoptr i64 %9 to i32*, !insn.addr !148
  %11 = load i32, i32* %10, align 4, !insn.addr !148
  %12 = add i64 %8, %2, !insn.addr !149
  %13 = inttoptr i64 %12 to i32*, !insn.addr !149
  %14 = load i32, i32* %13, align 4, !insn.addr !149
  %15 = add i32 %14, %11, !insn.addr !150
  %16 = add i64 %8, %3, !insn.addr !151
  %17 = inttoptr i64 %16 to i32*, !insn.addr !151
  store i32 %15, i32* %17, align 4, !insn.addr !151
  %18 = icmp eq i64 %7, 9, !insn.addr !152
  store i64 %7, i64* %x1.0.reg2mem, !insn.addr !152
  br i1 %18, label %dec_label_pc_e48.preheader, label %dec_label_pc_e10, !insn.addr !152

dec_label_pc_e48.preheader:                       ; preds = %dec_label_pc_e10
  %19 = add i64 %3, -4, !insn.addr !153
  store i32 0, i32* %x0.0.reg2mem
  store i64 1, i64* %x1.1.reg2mem
  br label %dec_label_pc_e48

dec_label_pc_e48:                                 ; preds = %dec_label_pc_e48.preheader, %dec_label_pc_e48
  %x1.1.reload = load i64, i64* %x1.1.reg2mem
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %20 = mul i64 %x1.1.reload, 4, !insn.addr !153
  %21 = add nuw nsw i64 %x1.1.reload, 1, !insn.addr !154
  %22 = add i64 %19, %20, !insn.addr !155
  %23 = inttoptr i64 %22 to i32*, !insn.addr !155
  %24 = load i32, i32* %23, align 4, !insn.addr !155
  %25 = add i32 %24, %x0.0.reload, !insn.addr !156
  %26 = icmp eq i64 %21, 9, !insn.addr !157
  store i32 %25, i32* %x0.0.reg2mem, !insn.addr !157
  store i64 %21, i64* %x1.1.reg2mem, !insn.addr !157
  br i1 %26, label %dec_label_pc_e60, label %dec_label_pc_e48, !insn.addr !157

dec_label_pc_e60:                                 ; preds = %dec_label_pc_e48
  %27 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !158
  %28 = inttoptr i64 %27 to i64*, !insn.addr !159
  %29 = load i64, i64* %28, align 8, !insn.addr !159
  %30 = icmp eq i64 %5, %29, !insn.addr !160
  br i1 %30, label %dec_label_pc_e7c, label %dec_label_pc_e84, !insn.addr !160

dec_label_pc_e7c:                                 ; preds = %dec_label_pc_e60
  %31 = zext i32 %25 to i64, !insn.addr !156
  ret i64 %31, !insn.addr !161

dec_label_pc_e84:                                 ; preds = %dec_label_pc_e60
  call void @__stack_chk_fail(), !insn.addr !162
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !163

; uselistorder directives
  uselistorder i32 %25, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.1.reg2mem, { 2, 0, 1 }
  uselistorder i64 1, { 11, 0, 12, 1, 8, 9, 13, 10, 3, 4, 5, 6, 7, 2 }
  uselistorder label %dec_label_pc_e48, { 1, 0 }
}

define i64 @param_link_time_optimization() local_unnamed_addr {
dec_label_pc_e90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !164
  %3 = add i64 %2, 10, !insn.addr !165
  %4 = and i64 %3, 4294967294, !insn.addr !165
  ret i64 %4, !insn.addr !166
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_ea0:
  ret i64 20, !insn.addr !167
}

define i64 @param_division_by_zero() local_unnamed_addr {
dec_label_pc_eb0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !168
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 2784 to void (i32)*)), !insn.addr !169
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12028 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !170
  %4 = icmp eq i32 %3, 0, !insn.addr !171
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !171
  br i1 %4, label %dec_label_pc_ee0, label %dec_label_pc_eec, !insn.addr !171

dec_label_pc_ee0:                                 ; preds = %dec_label_pc_eb0
  %5 = trunc i64 %1 to i32, !insn.addr !172
  %6 = sdiv i32 10, %5, !insn.addr !173
  %7 = zext i32 %6 to i64, !insn.addr !173
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !173
  br label %dec_label_pc_eec, !insn.addr !173

dec_label_pc_eec:                                 ; preds = %dec_label_pc_eb0, %dec_label_pc_ee0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !174

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_eec, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_f00:
  %0 = call i64 @param_division_by_zero(), !insn.addr !175
  %1 = call i64 @param_division_by_zero(), !insn.addr !176
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !177
  %3 = add i64 %1, %0, !insn.addr !178
  %4 = and i64 %3, 4294967295, !insn.addr !178
  ret i64 %4, !insn.addr !179
}

define i64 @param_null_pointer_deref() local_unnamed_addr {
dec_label_pc_f40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 2816 to void (i32)*)), !insn.addr !180
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12168 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !181
  %4 = icmp eq i32 %3, 0, !insn.addr !182
  %.op = and i64 %1, 4294967295
  %storemerge = select i1 %4, i64 %.op, i64 4294967295
  ret i64 %storemerge, !insn.addr !183

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_f90:
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !184
  %1 = inttoptr i64 %0 to i64*, !insn.addr !185
  %2 = load i64, i64* %1, align 8, !insn.addr !185
  %3 = call i64 @param_null_pointer_deref(), !insn.addr !186
  %4 = call i64 @param_null_pointer_deref(), !insn.addr !187
  %5 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !188
  %6 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !189
  %7 = inttoptr i64 %6 to i64*, !insn.addr !190
  %8 = load i64, i64* %7, align 8, !insn.addr !190
  %9 = icmp eq i64 %2, %8, !insn.addr !191
  br i1 %9, label %dec_label_pc_ffc, label %dec_label_pc_1008, !insn.addr !191

dec_label_pc_ffc:                                 ; preds = %dec_label_pc_f90
  %10 = add i64 %4, %3, !insn.addr !192
  %11 = and i64 %10, 4294967295, !insn.addr !192
  ret i64 %11, !insn.addr !193

dec_label_pc_1008:                                ; preds = %dec_label_pc_f90
  call void @__stack_chk_fail(), !insn.addr !194
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !195
}

define i64 @param_buffer_overflow_stack() local_unnamed_addr {
dec_label_pc_1010:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !196
}

define i64 @param_buffer_overflow_heap() local_unnamed_addr {
dec_label_pc_1014:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !197
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !198
  %3 = icmp eq i64* %2, null, !insn.addr !199
  store i64 4294967294, i64* %storemerge.reg2mem, !insn.addr !199
  br i1 %3, label %dec_label_pc_1038, label %dec_label_pc_1030, !insn.addr !199

dec_label_pc_1030:                                ; preds = %dec_label_pc_1014
  %4 = and i64 %1, 4294967295, !insn.addr !200
  call void @free(i64* nonnull %2), !insn.addr !201
  store i64 %4, i64* %storemerge.reg2mem, !insn.addr !202
  br label %dec_label_pc_1038, !insn.addr !202

dec_label_pc_1038:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1030
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !203

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1038, { 1, 0 }
}

define i64 @call_buffer_overflow(i64 %arg1) local_unnamed_addr {
dec_label_pc_1050:
  %storemerge.reg2mem = alloca i64, !insn.addr !204
  %0 = call i64* @malloc(i32 16), !insn.addr !205
  %1 = icmp eq i64* %0, null, !insn.addr !206
  store i64 8, i64* %storemerge.reg2mem, !insn.addr !206
  br i1 %1, label %dec_label_pc_106c, label %dec_label_pc_1064, !insn.addr !206

dec_label_pc_1064:                                ; preds = %dec_label_pc_1050
  call void @free(i64* nonnull %0), !insn.addr !207
  store i64 30, i64* %storemerge.reg2mem, !insn.addr !208
  br label %dec_label_pc_106c, !insn.addr !208

dec_label_pc_106c:                                ; preds = %dec_label_pc_1050, %dec_label_pc_1064
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !209

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_106c, { 1, 0 }
}

define i64 @param_integer_overflow() local_unnamed_addr {
dec_label_pc_1080:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !210
  %4 = trunc i64 %2 to i32, !insn.addr !210
  %5 = icmp slt i32 %4, 1, !insn.addr !210
  %6 = add i64 %2, %1, !insn.addr !211
  %7 = and i64 %6, 4294967295, !insn.addr !211
  %8 = icmp slt i32 %3, 1
  %9 = or i1 %8, %5
  br i1 %9, label %dec_label_pc_10a0, label %dec_label_pc_1094, !insn.addr !212

dec_label_pc_1094:                                ; preds = %dec_label_pc_1080
  %10 = trunc i64 %6 to i32, !insn.addr !213
  %11 = icmp slt i32 %10, 0, !insn.addr !213
  %storemerge = select i1 %11, i64 4294967295, i64 %7
  ret i64 %storemerge, !insn.addr !214

dec_label_pc_10a0:                                ; preds = %dec_label_pc_1080
  %12 = and i64 %2, %1
  %13 = trunc i64 %12 to i32, !insn.addr !215
  %14 = icmp sgt i32 %13, -1, !insn.addr !215
  %15 = trunc i64 %6 to i32, !insn.addr !216
  %16 = icmp slt i32 %15, 1
  %17 = or i1 %16, %14
  %.v = select i1 %17, i64 %7, i64 4294967294
  ret i64 %.v, !insn.addr !217

; uselistorder directives
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 5, 6, 7, 8, 1, 2, 9, 0, 10, 11, 3, 12, 13, 4, 14, 15, 16, 17 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_10b4:
  ret i64 2000000000, !insn.addr !218
}

define i64 @param_undefined_behavior() local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !219
  %3 = and i64 %2, 4294967294, !insn.addr !219
  ret i64 %3, !insn.addr !220

; uselistorder directives
  uselistorder i64 4294967294, { 3, 2, 0, 4, 1 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_10d0:
  ret i64 10, !insn.addr !221

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_10e0:
  ret i64 48, !insn.addr !222
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_10f0:
  ret i64 48, !insn.addr !223
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1100:
  %x1.0.reg2mem = alloca i64, !insn.addr !224
  %x0.0.reg2mem = alloca i64, !insn.addr !224
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !225
  %1 = inttoptr i64 %0 to i64*, !insn.addr !226
  %2 = load i64, i64* %1, align 8, !insn.addr !226
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_1328 to i8*)), !insn.addr !227
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1358 to i8*)), !insn.addr !228
  store i64 6, i64* %x0.0.reg2mem, !insn.addr !229
  store i64 5, i64* %x1.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_1148, !insn.addr !229

dec_label_pc_1148:                                ; preds = %dec_label_pc_1148, %dec_label_pc_1100
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %5 = trunc i64 %x1.0.reload to i32, !insn.addr !230
  %6 = trunc i64 %x0.0.reload to i32, !insn.addr !230
  %7 = srem i32 %5, %6
  %8 = zext i32 %7 to i64, !insn.addr !231
  %9 = icmp eq i32 %7, 0, !insn.addr !232
  store i64 %8, i64* %x0.0.reg2mem, !insn.addr !232
  store i64 %x0.0.reload, i64* %x1.0.reg2mem, !insn.addr !232
  br i1 %9, label %dec_label_pc_115c, label %dec_label_pc_1148, !insn.addr !232

dec_label_pc_115c:                                ; preds = %dec_label_pc_1148
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1378 to i8*)), !insn.addr !233
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1398 to i8*)), !insn.addr !234
  %12 = call i64 @param_string_encryption(), !insn.addr !235
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13b8 to i8*)), !insn.addr !236
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_13d8 to i8*)), !insn.addr !237
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1408 to i8*)), !insn.addr !238
  %16 = call i64 @call_vectorized_loop(), !insn.addr !239
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1430 to i8*)), !insn.addr !240
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1458 to i8*)), !insn.addr !241
  %19 = call i64 @param_division_by_zero(), !insn.addr !242
  %20 = call i64 @param_division_by_zero(), !insn.addr !243
  %21 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !244
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1478 to i8*)), !insn.addr !245
  %23 = call i64 @param_null_pointer_deref(), !insn.addr !246
  %24 = call i64 @param_null_pointer_deref(), !insn.addr !247
  %25 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !248
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1498 to i8*)), !insn.addr !249
  %27 = call i64* @malloc(i32 16), !insn.addr !250
  %28 = icmp eq i64* %27, null, !insn.addr !251
  br i1 %28, label %dec_label_pc_128c, label %dec_label_pc_1284, !insn.addr !251

dec_label_pc_1284:                                ; preds = %dec_label_pc_115c
  call void @free(i64* nonnull %27), !insn.addr !252
  br label %dec_label_pc_128c, !insn.addr !253

dec_label_pc_128c:                                ; preds = %dec_label_pc_115c, %dec_label_pc_1284
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_14b8 to i8*)), !insn.addr !254
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_14d8 to i8*)), !insn.addr !255
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1510 to i8*)), !insn.addr !256
  %32 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !257
  %33 = inttoptr i64 %32 to i64*, !insn.addr !258
  %34 = load i64, i64* %33, align 8, !insn.addr !258
  %35 = icmp eq i64 %2, %34, !insn.addr !259
  br i1 %35, label %dec_label_pc_12e4, label %dec_label_pc_1308, !insn.addr !259

dec_label_pc_12e4:                                ; preds = %dec_label_pc_128c
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1530 to i8*)), !insn.addr !260
  %37 = sext i32 %36 to i64, !insn.addr !260
  ret i64 %37, !insn.addr !260

dec_label_pc_1308:                                ; preds = %dec_label_pc_128c
  call void @__stack_chk_fail(), !insn.addr !261
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !261

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0, 4 }
  uselistorder void (i64*)* @free, { 0, 2, 1, 3 }
  uselistorder i64* (i32)* @malloc, { 0, 2, 1, 3 }
  uselistorder i32 16, { 1, 2, 3, 0 }
  uselistorder i64 ()* @param_null_pointer_deref, { 1, 0, 3, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 0, 5, 3, 4, 2, 6 }
  uselistorder i64 ()* @param_division_by_zero, { 1, 0, 3, 2 }
  uselistorder i32 0, { 10, 3, 7, 8, 0, 1, 2, 9, 4, 5, 6 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 45, 4, 0, 1, 2, 3, 46, 5, 47, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
  uselistorder label %dec_label_pc_128c, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_130c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !262

; uselistorder directives
  uselistorder i32 1, { 15, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 17, 16, 14, 44, 45, 46, 13, 18, 19, 12, 11, 10, 20, 9, 8, 71, 70, 69, 23, 22, 21, 61, 26, 25, 24, 7, 67, 62, 29, 28, 27, 6, 68, 63, 32, 31, 30, 5, 66, 35, 34, 33, 37, 36, 4, 3, 39, 38, 43, 41, 40, 2, 1, 64, 65, 42, 72, 0 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i64 @__longjmp_chk(i64*, i64, i64*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

!0 = !{i64 2132}
!1 = !{i64 2140}
!2 = !{i64 2188}
!3 = !{i64 2204}
!4 = !{i64 2220}
!5 = !{i64 2236}
!6 = !{i64 2252}
!7 = !{i64 2268}
!8 = !{i64 2284}
!9 = !{i64 2300}
!10 = !{i64 2316}
!11 = !{i64 2332}
!12 = !{i64 2348}
!13 = !{i64 2364}
!14 = !{i64 2380}
!15 = !{i64 2396}
!16 = !{i64 2440}
!17 = !{i64 2452}
!18 = !{i64 2528}
!19 = !{i64 2540}
!20 = !{i64 2544}
!21 = !{i64 2552}
!22 = !{i64 2556}
!23 = !{i64 2560}
!24 = !{i64 2564}
!25 = !{i64 2620}
!26 = !{i64 2680}
!27 = !{i64 2688}
!28 = !{i64 2704}
!29 = !{i64 2708}
!30 = !{i64 2716}
!31 = !{i64 2720}
!32 = !{i64 2728}
!33 = !{i64 2732}
!34 = !{i64 2736}
!35 = !{i64 2744}
!36 = !{i64 2756}
!37 = !{i64 2768}
!38 = !{i64 2808}
!39 = !{i64 2812}
!40 = !{i64 2840}
!41 = !{i64 2844}
!42 = !{i64 2848}
!43 = !{i64 2856}
!44 = !{i64 2864}
!45 = !{i64 2868}
!46 = !{i64 2876}
!47 = !{i64 2892}
!48 = !{i64 2872}
!49 = !{i64 2880}
!50 = !{i64 2884}
!51 = !{i64 2896}
!52 = !{i64 2900}
!53 = !{i64 2904}
!54 = !{i64 2912}
!55 = !{i64 2920}
!56 = !{i64 2932}
!57 = !{i64 2936}
!58 = !{i64 2940}
!59 = !{i64 2944}
!60 = !{i64 2948}
!61 = !{i64 2952}
!62 = !{i64 2960}
!63 = !{i64 2964}
!64 = !{i64 2968}
!65 = !{i64 2976}
!66 = !{i64 2984}
!67 = !{i64 2988}
!68 = !{i64 3000}
!69 = !{i64 3004}
!70 = !{i64 3008}
!71 = !{i64 3020}
!72 = !{i64 3028}
!73 = !{i64 3032}
!74 = !{i64 3036}
!75 = !{i64 3040}
!76 = !{i64 3048}
!77 = !{i64 3056}
!78 = !{i64 3088}
!79 = !{i64 3092}
!80 = !{i64 3100}
!81 = !{i64 3104}
!82 = !{i64 3108}
!83 = !{i64 3124}
!84 = !{i64 3128}
!85 = !{i64 3132}
!86 = !{i64 3148}
!87 = !{i64 3152}
!88 = !{i64 3168}
!89 = !{i64 3188}
!90 = !{i64 3204}
!91 = !{i64 3208}
!92 = !{i64 3220}
!93 = !{i64 3228}
!94 = !{i64 3236}
!95 = !{i64 3240}
!96 = !{i64 3244}
!97 = !{i64 3248}
!98 = !{i64 3256}
!99 = !{i64 3268}
!100 = !{i64 3276}
!101 = !{i64 3288}
!102 = !{i64 3264}
!103 = !{i64 3300}
!104 = !{i64 3304}
!105 = !{i64 3308}
!106 = !{i64 3312}
!107 = !{i64 3316}
!108 = !{i64 3320}
!109 = !{i64 3328}
!110 = !{i64 3340}
!111 = !{i64 3344}
!112 = !{i64 3348}
!113 = !{i64 3352}
!114 = !{i64 3368}
!115 = !{i64 3376}
!116 = !{i64 3388}
!117 = !{i64 3396}
!118 = !{i64 3400}
!119 = !{i64 3404}
!120 = !{i64 3408}
!121 = !{i64 3416}
!122 = !{i64 3424}
!123 = !{i64 3428}
!124 = !{i64 3440}
!125 = !{i64 3444}
!126 = !{i64 3448}
!127 = !{i64 3452}
!128 = !{i64 3456}
!129 = !{i64 3464}
!130 = !{i64 3480}
!131 = !{i64 3484}
!132 = !{i64 3488}
!133 = !{i64 3496}
!134 = !{i64 3500}
!135 = !{i64 3508}
!136 = !{i64 3520}
!137 = !{i64 3540}
!138 = !{i64 3544}
!139 = !{i64 3552}
!140 = !{i64 3560}
!141 = !{i64 3564}
!142 = !{i64 3580}
!143 = !{i64 3588}
!144 = !{i64 3592}
!145 = !{i64 3596}
!146 = !{i64 3600}
!147 = !{i64 3616}
!148 = !{i64 3620}
!149 = !{i64 3624}
!150 = !{i64 3628}
!151 = !{i64 3632}
!152 = !{i64 3640}
!153 = !{i64 3656}
!154 = !{i64 3660}
!155 = !{i64 3664}
!156 = !{i64 3668}
!157 = !{i64 3676}
!158 = !{i64 3684}
!159 = !{i64 3692}
!160 = !{i64 3704}
!161 = !{i64 3712}
!162 = !{i64 3716}
!163 = !{i64 3724}
!164 = !{i64 3728}
!165 = !{i64 3732}
!166 = !{i64 3736}
!167 = !{i64 3748}
!168 = !{i64 3760}
!169 = !{i64 3784}
!170 = !{i64 3800}
!171 = !{i64 3804}
!172 = !{i64 3776}
!173 = !{i64 3816}
!174 = !{i64 3824}
!175 = !{i64 3856}
!176 = !{i64 3868}
!177 = !{i64 3884}
!178 = !{i64 3888}
!179 = !{i64 3900}
!180 = !{i64 3928}
!181 = !{i64 3944}
!182 = !{i64 3948}
!183 = !{i64 3964}
!184 = !{i64 4000}
!185 = !{i64 4012}
!186 = !{i64 4028}
!187 = !{i64 4040}
!188 = !{i64 4056}
!189 = !{i64 4068}
!190 = !{i64 4076}
!191 = !{i64 4088}
!192 = !{i64 4064}
!193 = !{i64 4100}
!194 = !{i64 4104}
!195 = !{i64 4108}
!196 = !{i64 4112}
!197 = !{i64 4116}
!198 = !{i64 4136}
!199 = !{i64 4140}
!200 = !{i64 4128}
!201 = !{i64 4144}
!202 = !{i64 4148}
!203 = !{i64 4160}
!204 = !{i64 4176}
!205 = !{i64 4188}
!206 = !{i64 4192}
!207 = !{i64 4196}
!208 = !{i64 4200}
!209 = !{i64 4208}
!210 = !{i64 4232}
!211 = !{i64 4236}
!212 = !{i64 4240}
!213 = !{i64 4244}
!214 = !{i64 4252}
!215 = !{i64 4256}
!216 = !{i64 4264}
!217 = !{i64 4272}
!218 = !{i64 4284}
!219 = !{i64 4288}
!220 = !{i64 4292}
!221 = !{i64 4308}
!222 = !{i64 4324}
!223 = !{i64 4340}
!224 = !{i64 4352}
!225 = !{i64 4368}
!226 = !{i64 4380}
!227 = !{i64 4392}
!228 = !{i64 4412}
!229 = !{i64 4420}
!230 = !{i64 4424}
!231 = !{i64 4432}
!232 = !{i64 4440}
!233 = !{i64 4472}
!234 = !{i64 4492}
!235 = !{i64 4496}
!236 = !{i64 4516}
!237 = !{i64 4540}
!238 = !{i64 4560}
!239 = !{i64 4564}
!240 = !{i64 4584}
!241 = !{i64 4604}
!242 = !{i64 4612}
!243 = !{i64 4624}
!244 = !{i64 4640}
!245 = !{i64 4660}
!246 = !{i64 4676}
!247 = !{i64 4688}
!248 = !{i64 4704}
!249 = !{i64 4724}
!250 = !{i64 4732}
!251 = !{i64 4736}
!252 = !{i64 4740}
!253 = !{i64 4744}
!254 = !{i64 4760}
!255 = !{i64 4784}
!256 = !{i64 4804}
!257 = !{i64 4812}
!258 = !{i64 4820}
!259 = !{i64 4832}
!260 = !{i64 4860}
!261 = !{i64 4872}
!262 = !{i64 4892}
