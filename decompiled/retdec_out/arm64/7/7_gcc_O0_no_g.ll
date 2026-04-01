source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_12f58 = local_unnamed_addr global i64 2144
@global_var_12f60 = local_unnamed_addr global i64 2144
@global_var_12f68 = local_unnamed_addr global i64 2144
@global_var_12f70 = local_unnamed_addr global i64 2144
@global_var_12f78 = local_unnamed_addr global i64 2144
@global_var_12f80 = local_unnamed_addr global i64 2144
@global_var_12f88 = local_unnamed_addr global i64 2144
@global_var_12f90 = local_unnamed_addr global i64 2144
@global_var_12f98 = local_unnamed_addr global i64 2144
@global_var_12fa0 = local_unnamed_addr global i64 2144
@global_var_12fa8 = local_unnamed_addr global i64 2144
@global_var_12fb0 = local_unnamed_addr global i64 2144
@global_var_12fb8 = local_unnamed_addr global i64 2144
@global_var_12fc0 = local_unnamed_addr global i64 2144
@global_var_12ff0 = local_unnamed_addr global i64 5688
@global_var_13000 = global i64 0
@global_var_13018 = global i64 0
@global_var_12fd0 = local_unnamed_addr global i64 0
@global_var_12ff8 = local_unnamed_addr global i64 0
@global_var_a74 = local_unnamed_addr constant i64 4107391026002395168
@global_var_1670 = local_unnamed_addr constant [5 x i8] c"test\00"
@global_var_12fe8 = local_unnamed_addr global i64 0
@global_var_3e8 = local_unnamed_addr global i64 0
@global_var_1688 = local_unnamed_addr constant i64 25769803781
@global_var_16a8 = local_unnamed_addr constant i64 12884901892
@0 = external global i32
@global_var_1678 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_1698 = local_unnamed_addr constant fp128 0xL00000000000000003BF000000000E000
@global_var_13158 = local_unnamed_addr global i32* null
@global_var_13020 = global i32 0
@global_var_13298 = local_unnamed_addr global i32* null
@global_var_13160 = global i32 0
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_16b8 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_16e8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_1708 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_1728 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_1748 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_1768 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_1798 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_17c0 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_17e8 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_1808 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_1828 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_1848 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_1868 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_18a0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_18c0 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_840:
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

define void @function_8e0() local_unnamed_addr {
dec_label_pc_8e0:
  call void @__stack_chk_fail(), !insn.addr !8
  ret void, !insn.addr !8
}

define void @function_8f0() local_unnamed_addr {
dec_label_pc_8f0:
  call void @__gmon_start__(), !insn.addr !9
  ret void, !insn.addr !9
}

define void @function_900() local_unnamed_addr {
dec_label_pc_900:
  call void @abort(), !insn.addr !10
  ret void, !insn.addr !10
}

define i32 @function_910(i8* %s) local_unnamed_addr {
dec_label_pc_910:
  %0 = call i32 @puts(i8* %s), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_920(i64* %ptr) local_unnamed_addr {
dec_label_pc_920:
  call void @free(i64* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define void @function_930([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_930:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !13
  ret void, !insn.addr !13
}

define i8* @function_940(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_940:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_950(i8* %format, ...) local_unnamed_addr {
dec_label_pc_950:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_980:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12ff0, align 8, !insn.addr !16
  %3 = trunc i64 %arg1 to i32, !insn.addr !17
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !17
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !17
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !17
  call void @abort(), !insn.addr !18
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !18
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_9b4:
  %0 = load i64, i64* inttoptr (i64 77792 to i64*), align 32, !insn.addr !19
  %1 = icmp eq i64 %0, 0, !insn.addr !20
  br i1 %1, label %dec_label_pc_9c4, label %dec_label_pc_9c0, !insn.addr !20

dec_label_pc_9c0:                                 ; preds = %dec_label_pc_9b4
  call void @__gmon_start__(), !insn.addr !21
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !21

dec_label_pc_9c4:                                 ; preds = %dec_label_pc_9b4
  ret i64 0, !insn.addr !22
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_9d0:
  ret i64 ptrtoint (i64* @global_var_13018 to i64), !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_a00:
  ret i64 ptrtoint (i64* @global_var_13018 to i64), !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_a40:
  %x0.0.reg2mem = alloca i64, !insn.addr !25
  %0 = load i8, i8* bitcast (i64* @global_var_13018 to i8*), align 8, !insn.addr !26
  %1 = zext i8 %0 to i64, !insn.addr !26
  %2 = icmp eq i8 %0, 0, !insn.addr !27
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !27
  br i1 %2, label %dec_label_pc_a58, label %dec_label_pc_a7c, !insn.addr !27

dec_label_pc_a58:                                 ; preds = %dec_label_pc_a40
  %3 = load i64, i64* inttoptr (i64 77784 to i64*), align 8, !insn.addr !28
  %4 = icmp eq i64 %3, 0, !insn.addr !29
  br i1 %4, label %dec_label_pc_a70, label %dec_label_pc_a64, !insn.addr !29

dec_label_pc_a64:                                 ; preds = %dec_label_pc_a58
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 8) to i64*), align 8, !insn.addr !30
  %6 = inttoptr i64 %5 to i64*, !insn.addr !31
  call void @__cxa_finalize(i64* %6), !insn.addr !31
  br label %dec_label_pc_a70, !insn.addr !31

dec_label_pc_a70:                                 ; preds = %dec_label_pc_a64, %dec_label_pc_a58
  %7 = call i64 @deregister_tm_clones(), !insn.addr !32
  store i8 1, i8* bitcast (i64* @global_var_13018 to i8*), align 8, !insn.addr !33
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !33
  br label %dec_label_pc_a7c, !insn.addr !33

dec_label_pc_a7c:                                 ; preds = %dec_label_pc_a40, %dec_label_pc_a70
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !34

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_a7c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_a90:
  %0 = call i64 @register_tm_clones(), !insn.addr !35
  ret i64 %0, !insn.addr !35
}

define i64 @param_fake_branch() local_unnamed_addr {
dec_label_pc_a94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !36
  ret i64 %2, !insn.addr !37
}

define i64 @call_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_abc:
  %0 = call i64 @param_fake_branch(), !insn.addr !38
  ret i64 %0, !insn.addr !39
}

define i64 @param_opaque_predicate() local_unnamed_addr {
dec_label_pc_ad4:
  %0 = alloca i64
  %stack_var_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !40
  %stack_var_-24.04.reg2mem = alloca i32, !insn.addr !40
  %stack_var_-20.05.reg2mem = alloca i32, !insn.addr !40
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !41
  %3 = add i32 %2, 1, !insn.addr !42
  %4 = icmp eq i32 %3, 0, !insn.addr !43
  store i32 %3, i32* %stack_var_-20.05.reg2mem, !insn.addr !44
  store i32 %2, i32* %stack_var_-24.04.reg2mem, !insn.addr !44
  store i32 -1, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !44
  br i1 %4, label %dec_label_pc_b68, label %dec_label_pc_b30, !insn.addr !44

dec_label_pc_b30:                                 ; preds = %dec_label_pc_ad4, %dec_label_pc_b30
  %stack_var_-24.04.reload = load i32, i32* %stack_var_-24.04.reg2mem
  %stack_var_-20.05.reload = load i32, i32* %stack_var_-20.05.reg2mem
  %5 = srem i32 %stack_var_-24.04.reload, %stack_var_-20.05.reload
  %6 = icmp eq i32 %5, 0, !insn.addr !43
  store i32 %5, i32* %stack_var_-20.05.reg2mem, !insn.addr !44
  store i32 %stack_var_-20.05.reload, i32* %stack_var_-24.04.reg2mem, !insn.addr !44
  store i32 %stack_var_-20.05.reload, i32* %stack_var_-24.0.lcssa.reg2mem, !insn.addr !44
  br i1 %6, label %dec_label_pc_b68, label %dec_label_pc_b30, !insn.addr !44

dec_label_pc_b68:                                 ; preds = %dec_label_pc_b30, %dec_label_pc_ad4
  %7 = add i32 %2, 2
  %8 = mul i32 %7, %2, !insn.addr !45
  %9 = add i32 %8, 1, !insn.addr !46
  %10 = mul i32 %3, %3, !insn.addr !47
  %11 = icmp eq i32 %9, %10, !insn.addr !48
  %stack_var_-24.0.lcssa.reload = load i32, i32* %stack_var_-24.0.lcssa.reg2mem
  %12 = icmp eq i32 %stack_var_-24.0.lcssa.reload, 1, !insn.addr !49
  %13 = icmp eq i1 %11, %12
  %14 = mul i64 %1, 3
  %15 = add i64 %14, 20
  %16 = mul i64 %1, 2
  %17 = add i64 %16, 10
  %storemerge.in = select i1 %13, i64 %17, i64 %15
  %storemerge = and i64 %storemerge.in, 4294967295
  ret i64 %storemerge, !insn.addr !50

; uselistorder directives
  uselistorder i32 %3, { 2, 3, 0, 1 }
  uselistorder i32 %2, { 1, 2, 0, 3 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i32* %stack_var_-20.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-24.04.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_b30, { 1, 0 }
}

define i64 @call_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_bd4:
  %0 = call i64 @param_opaque_predicate(), !insn.addr !51
  ret i64 %0, !insn.addr !52
}

define i64 @param_instruction_substitution() local_unnamed_addr {
dec_label_pc_bec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !53
  %3 = udiv i32 %2, 2, !insn.addr !54
  %4 = urem i32 %2, 16, !insn.addr !55
  %reass.mul = mul i32 %2, 21
  %5 = add nuw i32 %4, %3, !insn.addr !56
  %6 = add i32 %5, %reass.mul, !insn.addr !57
  %7 = zext i32 %6 to i64, !insn.addr !57
  ret i64 %7, !insn.addr !58

; uselistorder directives
  uselistorder i32 %2, { 2, 1, 0 }
}

define i64 @call_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_c6c:
  %0 = call i64 @param_instruction_substitution(), !insn.addr !59
  ret i64 %0, !insn.addr !60
}

define i64 @decrypt_string() local_unnamed_addr {
dec_label_pc_c84:
  %0 = alloca i64
  %storemerge.in4.reg2mem = alloca i64, !insn.addr !61
  %storemerge5.reg2mem = alloca i8*, !insn.addr !61
  %.reg2mem = alloca i8, !insn.addr !61
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = inttoptr i64 %3 to i8*
  %6 = inttoptr i64 %4 to i8*, !insn.addr !62
  %7 = trunc i64 %2 to i32, !insn.addr !62
  %8 = call i8* @strncpy(i8* %5, i8* %6, i32 %7), !insn.addr !62
  %9 = add i64 %2, -1, !insn.addr !63
  %10 = add i64 %9, %3, !insn.addr !64
  %11 = inttoptr i64 %10 to i8*, !insn.addr !65
  store i8 0, i8* %11, align 1, !insn.addr !65
  %12 = load i8, i8* %5, align 1, !insn.addr !66
  %13 = icmp eq i8 %12, 0, !insn.addr !67
  br i1 %13, label %dec_label_pc_d04, label %dec_label_pc_ccc.lr.ph, !insn.addr !68

dec_label_pc_ccc.lr.ph:                           ; preds = %dec_label_pc_c84
  %14 = trunc i64 %1 to i8
  store i8 %12, i8* %.reg2mem
  store i8* %5, i8** %storemerge5.reg2mem
  br label %dec_label_pc_ccc

dec_label_pc_ccc:                                 ; preds = %dec_label_pc_ccc.lr.ph, %dec_label_pc_ccc
  %storemerge.in4.reload = load i64, i64* %storemerge.in4.reg2mem
  %storemerge5.reload = load i8*, i8** %storemerge5.reg2mem
  %.reload = load i8, i8* %.reg2mem
  %15 = xor i8 %.reload, %14, !insn.addr !69
  store i8 %15, i8* %storemerge5.reload, align 1, !insn.addr !69
  %16 = add i64 %storemerge.in4.reload, 1, !insn.addr !70
  %storemerge = inttoptr i64 %16 to i8*
  %17 = load i8, i8* %storemerge, align 1, !insn.addr !66
  %18 = icmp eq i8 %17, 0, !insn.addr !67
  store i8 %17, i8* %.reg2mem, !insn.addr !68
  store i8* %storemerge, i8** %storemerge5.reg2mem, !insn.addr !68
  store i64 %16, i64* %storemerge.in4.reg2mem, !insn.addr !68
  br i1 %18, label %dec_label_pc_d04, label %dec_label_pc_ccc, !insn.addr !68

dec_label_pc_d04:                                 ; preds = %dec_label_pc_ccc, %dec_label_pc_c84
  ret i64 %3, !insn.addr !71

; uselistorder directives
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i8* %.reg2mem, { 1, 0, 2 }
  uselistorder i8** %storemerge5.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.in4.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder i8 0, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_ccc, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_d10:
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !72
  %1 = inttoptr i64 %0 to i64*, !insn.addr !73
  %2 = load i64, i64* %1, align 8, !insn.addr !73
  %3 = call i64 @decrypt_string(), !insn.addr !74
  %4 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !75
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !75
  %6 = load i32, i32* %stack_var_-32, align 4, !insn.addr !76
  %7 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !77
  %8 = inttoptr i64 %7 to i64*, !insn.addr !78
  %9 = load i64, i64* %8, align 8, !insn.addr !78
  %10 = icmp eq i64 %2, %9, !insn.addr !79
  br i1 %10, label %dec_label_pc_d80, label %dec_label_pc_d7c, !insn.addr !80

dec_label_pc_d7c:                                 ; preds = %dec_label_pc_d10
  call void @__stack_chk_fail(), !insn.addr !81
  br label %dec_label_pc_d80, !insn.addr !81

dec_label_pc_d80:                                 ; preds = %dec_label_pc_d7c, %dec_label_pc_d10
  %11 = urem i32 %6, 256, !insn.addr !76
  %12 = add i32 %11, %5, !insn.addr !82
  %13 = zext i32 %12 to i64, !insn.addr !83
  ret i64 %13, !insn.addr !84
}

define i64 @call_string_encryption(i64 %arg1) local_unnamed_addr {
dec_label_pc_d8c:
  %0 = call i64 @param_string_encryption(), !insn.addr !85
  ret i64 %0, !insn.addr !86
}

define i64 @param_tail_call_optimized() local_unnamed_addr {
dec_label_pc_da0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !87
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !88
  %4 = icmp sgt i32 %3, 0, !insn.addr !89
  br i1 %4, label %dec_label_pc_dc4, label %dec_label_pc_dbc, !insn.addr !89

dec_label_pc_dbc:                                 ; preds = %dec_label_pc_da0
  %5 = and i64 %1, 4294967295, !insn.addr !90
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !91
  br label %dec_label_pc_de4, !insn.addr !91

dec_label_pc_dc4:                                 ; preds = %dec_label_pc_da0
  %6 = call i64 @param_tail_call_optimized(), !insn.addr !92
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !92
  br label %dec_label_pc_de4, !insn.addr !92

dec_label_pc_de4:                                 ; preds = %dec_label_pc_dc4, %dec_label_pc_dbc
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !93

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @call_tail_call_optimized(i64 %arg1) local_unnamed_addr {
dec_label_pc_dec:
  %0 = call i64 @param_tail_call_optimized(), !insn.addr !94
  ret i64 %0, !insn.addr !95

; uselistorder directives
  uselistorder i64 ()* @param_tail_call_optimized, { 1, 0 }
}

define i64 @param_non_tail_call() local_unnamed_addr {
dec_label_pc_e08:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !96
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !97
  %3 = icmp sgt i32 %2, 0, !insn.addr !98
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !98
  br i1 %3, label %dec_label_pc_e28, label %dec_label_pc_e40, !insn.addr !98

dec_label_pc_e28:                                 ; preds = %dec_label_pc_e08
  %4 = call i64 @param_non_tail_call(), !insn.addr !99
  %5 = add i64 %4, %1, !insn.addr !100
  %6 = and i64 %5, 4294967295, !insn.addr !100
  store i64 %6, i64* %storemerge.reg2mem, !insn.addr !100
  br label %dec_label_pc_e40, !insn.addr !100

dec_label_pc_e40:                                 ; preds = %dec_label_pc_e08, %dec_label_pc_e28
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !101

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e40, { 1, 0 }
}

define i64 @call_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_e48:
  %0 = call i64 @param_non_tail_call(), !insn.addr !102
  ret i64 %0, !insn.addr !103

; uselistorder directives
  uselistorder i64 ()* @param_non_tail_call, { 1, 0 }
}

define i64 @param_vectorized_loop() local_unnamed_addr {
dec_label_pc_e60:
  %0 = alloca i64
  %stack_var_-8.0.lcssa.reg2mem = alloca i64, !insn.addr !104
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !104
  %storemerge3.reg2mem = alloca i32, !insn.addr !104
  %storemerge14.reg2mem = alloca i32, !insn.addr !104
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = trunc i64 %1 to i32, !insn.addr !105
  %6 = icmp eq i32 %5, 0
  store i32 0, i32* %storemerge14.reg2mem, !insn.addr !106
  store i64 0, i64* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !106
  br i1 %6, label %dec_label_pc_f20, label %dec_label_pc_e7c, !insn.addr !106

dec_label_pc_e7c:                                 ; preds = %dec_label_pc_e60, %dec_label_pc_e7c
  %storemerge14.reload = load i32, i32* %storemerge14.reg2mem
  %7 = sext i32 %storemerge14.reload to i64, !insn.addr !107
  %8 = mul i64 %7, 4, !insn.addr !108
  %9 = add i64 %8, %4, !insn.addr !109
  %10 = inttoptr i64 %9 to i32*, !insn.addr !110
  %11 = load i32, i32* %10, align 4, !insn.addr !110
  %12 = add i64 %8, %3, !insn.addr !111
  %13 = inttoptr i64 %12 to i32*, !insn.addr !112
  %14 = load i32, i32* %13, align 4, !insn.addr !112
  %15 = add i64 %8, %2, !insn.addr !113
  %16 = add i32 %14, %11, !insn.addr !114
  %17 = inttoptr i64 %15 to i32*, !insn.addr !115
  store i32 %16, i32* %17, align 4, !insn.addr !115
  %18 = add nuw i32 %storemerge14.reload, 1, !insn.addr !116
  %exitcond5 = icmp eq i32 %18, %5
  store i32 %18, i32* %storemerge14.reg2mem, !insn.addr !106
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !106
  store i32 0, i32* %stack_var_-8.02.reg2mem, !insn.addr !106
  br i1 %exitcond5, label %dec_label_pc_ee4, label %dec_label_pc_e7c, !insn.addr !106

dec_label_pc_ee4:                                 ; preds = %dec_label_pc_e7c, %dec_label_pc_ee4
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %19 = sext i32 %storemerge3.reload to i64, !insn.addr !117
  %20 = mul i64 %19, 4, !insn.addr !118
  %21 = add i64 %20, %2, !insn.addr !119
  %22 = inttoptr i64 %21 to i32*, !insn.addr !120
  %23 = load i32, i32* %22, align 4, !insn.addr !120
  %24 = add i32 %23, %stack_var_-8.02.reload, !insn.addr !121
  %25 = add nuw i32 %storemerge3.reload, 1, !insn.addr !122
  %exitcond = icmp eq i32 %25, %5
  store i32 %25, i32* %storemerge3.reg2mem, !insn.addr !123
  store i32 %24, i32* %stack_var_-8.02.reg2mem, !insn.addr !123
  br i1 %exitcond, label %dec_label_pc_f10.dec_label_pc_f20_crit_edge, label %dec_label_pc_ee4, !insn.addr !123

dec_label_pc_f10.dec_label_pc_f20_crit_edge:      ; preds = %dec_label_pc_ee4
  %phitmp = zext i32 %24 to i64
  store i64 %phitmp, i64* %stack_var_-8.0.lcssa.reg2mem
  br label %dec_label_pc_f20

dec_label_pc_f20:                                 ; preds = %dec_label_pc_e60, %dec_label_pc_f10.dec_label_pc_f20_crit_edge
  %stack_var_-8.0.lcssa.reload = load i64, i64* %stack_var_-8.0.lcssa.reg2mem
  ret i64 %stack_var_-8.0.lcssa.reload, !insn.addr !124

; uselistorder directives
  uselistorder i32 %24, { 1, 0 }
  uselistorder i64 %8, { 2, 1, 0 }
  uselistorder i32 %5, { 1, 0, 2 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32* %storemerge14.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_f20, { 1, 0 }
  uselistorder label %dec_label_pc_ee4, { 1, 0 }
  uselistorder label %dec_label_pc_e7c, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_f2c:
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !125
  %1 = inttoptr i64 %0 to i64*, !insn.addr !126
  %2 = load i64, i64* %1, align 8, !insn.addr !126
  %3 = call i64 @param_vectorized_loop(), !insn.addr !127
  %4 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !128
  %5 = inttoptr i64 %4 to i64*, !insn.addr !129
  %6 = load i64, i64* %5, align 8, !insn.addr !129
  %7 = icmp eq i64 %2, %6, !insn.addr !130
  br i1 %7, label %dec_label_pc_fb0, label %dec_label_pc_fac, !insn.addr !131

dec_label_pc_fac:                                 ; preds = %dec_label_pc_f2c
  call void @__stack_chk_fail(), !insn.addr !132
  br label %dec_label_pc_fb0, !insn.addr !132

dec_label_pc_fb0:                                 ; preds = %dec_label_pc_fac, %dec_label_pc_f2c
  %8 = and i64 %3, 4294967295, !insn.addr !133
  ret i64 %8, !insn.addr !134
}

define i64 @lto_target_func() local_unnamed_addr {
dec_label_pc_fbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !135
  %3 = add i64 %2, 10, !insn.addr !136
  %4 = and i64 %3, 4294967294, !insn.addr !136
  ret i64 %4, !insn.addr !137
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_fd8:
  %0 = call i64 @lto_target_func(), !insn.addr !138
  ret i64 %0, !insn.addr !139
}

define i64 @call_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_ff4:
  %0 = call i64 @param_link_time_optimization(i64 5), !insn.addr !140
  ret i64 %0, !insn.addr !141
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_100c:
  store i32 1, i32* bitcast (i32** @global_var_13158 to i32*), align 8, !insn.addr !142
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13020 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !143
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !143
}

define i64 @param_division_by_zero() local_unnamed_addr {
dec_label_pc_1038:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !144
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4108 to void (i32)*)), !insn.addr !145
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13020 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !146
  %4 = icmp eq i32 %3, 0, !insn.addr !147
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !148
  br i1 %4, label %dec_label_pc_1068, label %dec_label_pc_1084, !insn.addr !148

dec_label_pc_1068:                                ; preds = %dec_label_pc_1038
  %5 = trunc i64 %1 to i32, !insn.addr !149
  %6 = sdiv i32 10, %5, !insn.addr !150
  %7 = zext i32 %6 to i64, !insn.addr !151
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !152
  br label %dec_label_pc_1084, !insn.addr !152

dec_label_pc_1084:                                ; preds = %dec_label_pc_1038, %dec_label_pc_1068
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !153

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1084, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_108c:
  %0 = call i64 @param_division_by_zero(), !insn.addr !154
  %1 = call i64 @param_division_by_zero(), !insn.addr !155
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !156
  %3 = add i64 %1, %0, !insn.addr !157
  %4 = and i64 %3, 4294967295, !insn.addr !157
  ret i64 %4, !insn.addr !158

; uselistorder directives
  uselistorder i64 ()* @param_division_by_zero, { 1, 0 }
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_10cc:
  store i32 1, i32* bitcast (i32** @global_var_13298 to i32*), align 8, !insn.addr !159
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !160
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !160
}

define i64 @param_null_pointer_deref() local_unnamed_addr {
dec_label_pc_10f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4300 to void (i32)*)), !insn.addr !161
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_13160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !162
  %4 = icmp eq i32 %3, 0, !insn.addr !163
  %.op = and i64 %1, 4294967295
  %storemerge = select i1 %4, i64 %.op, i64 4294967295
  ret i64 %storemerge, !insn.addr !164

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1148:
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !165
  %1 = inttoptr i64 %0 to i64*, !insn.addr !166
  %2 = load i64, i64* %1, align 8, !insn.addr !166
  %3 = call i64 @param_null_pointer_deref(), !insn.addr !167
  %4 = call i64 @param_null_pointer_deref(), !insn.addr !168
  %5 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !169
  %6 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !170
  %7 = inttoptr i64 %6 to i64*, !insn.addr !171
  %8 = load i64, i64* %7, align 8, !insn.addr !171
  %9 = icmp eq i64 %2, %8, !insn.addr !172
  br i1 %9, label %dec_label_pc_11c0, label %dec_label_pc_11bc, !insn.addr !173

dec_label_pc_11bc:                                ; preds = %dec_label_pc_1148
  call void @__stack_chk_fail(), !insn.addr !174
  br label %dec_label_pc_11c0, !insn.addr !174

dec_label_pc_11c0:                                ; preds = %dec_label_pc_11bc, %dec_label_pc_1148
  %10 = add i64 %4, %3, !insn.addr !175
  %11 = and i64 %10, 4294967295, !insn.addr !176
  ret i64 %11, !insn.addr !177

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 ()* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack() local_unnamed_addr {
dec_label_pc_11cc:
  %0 = alloca i64
  %indvars.iv.reg2mem = alloca i64, !insn.addr !178
  %1 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !179
  %3 = inttoptr i64 %2 to i64*, !insn.addr !180
  %4 = load i64, i64* %3, align 8, !insn.addr !180
  %5 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !181
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1200

dec_label_pc_1200:                                ; preds = %dec_label_pc_1200, %dec_label_pc_11cc
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = add i64 %indvars.iv.reload, %5, !insn.addr !182
  %7 = inttoptr i64 %6 to i8*, !insn.addr !182
  store i8 65, i8* %7, align 1, !insn.addr !182
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 17
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !183
  br i1 %exitcond, label %dec_label_pc_1228, label %dec_label_pc_1200, !insn.addr !183

dec_label_pc_1228:                                ; preds = %dec_label_pc_1200
  %8 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !184
  %9 = inttoptr i64 %8 to i64*, !insn.addr !185
  %10 = load i64, i64* %9, align 8, !insn.addr !185
  %11 = icmp eq i64 %4, %10, !insn.addr !186
  br i1 %11, label %dec_label_pc_126c, label %dec_label_pc_1268, !insn.addr !187

dec_label_pc_1268:                                ; preds = %dec_label_pc_1228
  call void @__stack_chk_fail(), !insn.addr !188
  br label %dec_label_pc_126c, !insn.addr !188

dec_label_pc_126c:                                ; preds = %dec_label_pc_1268, %dec_label_pc_1228
  %12 = and i64 %1, 4294967295
  ret i64 %12, !insn.addr !189

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 3, 0, 1, 2, 4 }
}

define i64 @param_buffer_overflow_heap() local_unnamed_addr {
dec_label_pc_1278:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !190
  %indvars.iv.reg2mem = alloca i64, !insn.addr !190
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !191
  %3 = ptrtoint i64* %2 to i64, !insn.addr !191
  %4 = icmp eq i64* %2, null, !insn.addr !192
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !193
  store i64 4294967294, i64* %storemerge.reg2mem, !insn.addr !193
  br i1 %4, label %dec_label_pc_12e4, label %dec_label_pc_12ac, !insn.addr !193

dec_label_pc_12ac:                                ; preds = %dec_label_pc_1278, %dec_label_pc_12ac
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = add i64 %indvars.iv.reload, %3, !insn.addr !194
  %6 = inttoptr i64 %5 to i8*, !insn.addr !195
  store i8 66, i8* %6, align 1, !insn.addr !195
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !196
  br i1 %exitcond, label %dec_label_pc_12d8, label %dec_label_pc_12ac, !insn.addr !196

dec_label_pc_12d8:                                ; preds = %dec_label_pc_12ac
  call void @free(i64* nonnull %2), !insn.addr !197
  %7 = and i64 %1, 4294967295, !insn.addr !198
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !198
  br label %dec_label_pc_12e4, !insn.addr !198

dec_label_pc_12e4:                                ; preds = %dec_label_pc_1278, %dec_label_pc_12d8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !199

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 1, 2, 3, 0 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_12e4, { 1, 0 }
  uselistorder label %dec_label_pc_12ac, { 1, 0 }
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_12ec:
  %0 = call i64 @param_buffer_overflow_stack(), !insn.addr !200
  %1 = call i64 @param_buffer_overflow_heap(), !insn.addr !201
  %2 = add i64 %1, %0, !insn.addr !202
  %3 = and i64 %2, 4294967295, !insn.addr !202
  ret i64 %3, !insn.addr !203
}

define i64 @param_integer_overflow() local_unnamed_addr {
dec_label_pc_1320:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !204
  %4 = trunc i64 %1 to i32, !insn.addr !205
  %5 = add i32 %3, %4, !insn.addr !206
  %6 = icmp sgt i32 %3, 0, !insn.addr !207
  %7 = icmp sgt i32 %4, 0, !insn.addr !208
  %or.cond.not = icmp eq i1 %7, %6
  %8 = icmp slt i32 %5, 0, !insn.addr !209
  %or.cond3 = icmp eq i1 %or.cond.not, %8
  br i1 %or.cond3, label %dec_label_pc_13b8, label %dec_label_pc_1388, !insn.addr !207

dec_label_pc_1388:                                ; preds = %dec_label_pc_1320
  %9 = icmp sgt i32 %3, -1, !insn.addr !210
  %10 = icmp sgt i32 %4, -1, !insn.addr !211
  %or.cond5.not = or i1 %10, %9
  %11 = icmp slt i32 %5, 1, !insn.addr !212
  %or.cond7 = or i1 %or.cond5.not, %11
  %12 = zext i32 %5 to i64
  %spec.select = select i1 %or.cond7, i64 %12, i64 4294967294
  ret i64 %spec.select

dec_label_pc_13b8:                                ; preds = %dec_label_pc_1320
  ret i64 4294967295, !insn.addr !213

; uselistorder directives
  uselistorder i32 %5, { 2, 1, 0 }
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32 %3, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 -1, { 2, 1, 0 }
  uselistorder i32 0, { 7, 6, 5, 12, 13, 0, 1, 2, 3, 10, 11, 14, 4, 8, 9 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i64 @param_integer_overflow(), !insn.addr !214
  %1 = call i64 @param_integer_overflow(), !insn.addr !215
  %2 = add i64 %1, %0, !insn.addr !216
  %3 = and i64 %2, 4294967295, !insn.addr !216
  ret i64 %3, !insn.addr !217

; uselistorder directives
  uselistorder i64 ()* @param_integer_overflow, { 1, 0 }
}

define i64 @param_undefined_behavior() local_unnamed_addr {
dec_label_pc_1404:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !218
  %3 = and i64 %2, 4294967294, !insn.addr !218
  ret i64 %3, !insn.addr !219

; uselistorder directives
  uselistorder i64 4294967294, { 2, 1, 0, 3 }
}

define i64 @call_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1424:
  %0 = call i64 @param_undefined_behavior(), !insn.addr !220
  %1 = and i64 %0, 4294967295, !insn.addr !221
  ret i64 %1, !insn.addr !222

; uselistorder directives
  uselistorder i64 4294967295, { 9, 10, 1, 11, 4, 5, 12, 2, 3, 13, 0, 14, 6, 7, 8, 15 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1444:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = or i32 %1, 255, !insn.addr !223
  %3 = call i32 @__asm_bfi(i32 %2, i32 1193046, i64 8, i64 24), !insn.addr !224
  %4 = sext i32 %3 to i64, !insn.addr !225
  %5 = call i64 @__asm_ubfx(i64 %4, i64 %4, i64 0, i64 3), !insn.addr !226
  %6 = urem i64 %5, 256, !insn.addr !227
  %7 = call i64 @__asm_ubfx(i64 %4, i64 %4, i64 3, i64 5), !insn.addr !228
  %8 = urem i64 %7, 256, !insn.addr !229
  %9 = add nuw nsw i64 %6, 10, !insn.addr !230
  %10 = add nuw nsw i64 %9, %8, !insn.addr !231
  ret i64 %10, !insn.addr !232

; uselistorder directives
  uselistorder i64 %4, { 0, 1, 3, 2 }
  uselistorder i64 10, { 0, 2, 1 }
  uselistorder i64 5, { 1, 0 }
  uselistorder i64 3, { 1, 2, 0 }
  uselistorder i64 8, { 1, 0 }
}

define i64 @call_implementation_defined(i64 %arg1) local_unnamed_addr {
dec_label_pc_14ec:
  %0 = call i64 @param_implementation_defined(), !insn.addr !233
  ret i64 %0, !insn.addr !234
}

define i64 @test_obf_opt_edge(i64 %arg1) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_16b8 to i8*)), !insn.addr !235
  %1 = call i64 @call_fake_branch(i64 ptrtoint (i32* @0 to i64)), !insn.addr !236
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_16e8 to i8*)), !insn.addr !237
  %3 = call i64 @call_opaque_predicate(i64 ptrtoint (i32* @0 to i64)), !insn.addr !238
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1708 to i8*)), !insn.addr !239
  %5 = call i64 @call_instruction_substitution(i64 ptrtoint (i32* @0 to i64)), !insn.addr !240
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1728 to i8*)), !insn.addr !241
  %7 = call i64 @call_string_encryption(i64 ptrtoint (i32* @0 to i64)), !insn.addr !242
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1748 to i8*)), !insn.addr !243
  %9 = call i64 @call_tail_call_optimized(i64 ptrtoint (i32* @0 to i64)), !insn.addr !244
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1768 to i8*)), !insn.addr !245
  %11 = call i64 @call_non_tail_call(i64 ptrtoint (i32* @0 to i64)), !insn.addr !246
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1798 to i8*)), !insn.addr !247
  %13 = call i64 @call_vectorized_loop(), !insn.addr !248
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_17c0 to i8*)), !insn.addr !249
  %15 = call i64 @call_link_time_optimization(i64 ptrtoint (i32* @0 to i64)), !insn.addr !250
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_17e8 to i8*)), !insn.addr !251
  %17 = call i64 @call_division_by_zero(), !insn.addr !252
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1808 to i8*)), !insn.addr !253
  %19 = call i64 @call_null_pointer_deref(), !insn.addr !254
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1828 to i8*)), !insn.addr !255
  %21 = call i64 @call_buffer_overflow(), !insn.addr !256
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1848 to i8*)), !insn.addr !257
  %23 = call i64 @call_integer_overflow(), !insn.addr !258
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1868 to i8*)), !insn.addr !259
  %25 = sext i32 %24 to i64, !insn.addr !259
  %26 = call i64 @call_undefined_behavior(i64 %25), !insn.addr !260
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_18a0 to i8*)), !insn.addr !261
  %28 = call i64 @call_implementation_defined(i64 ptrtoint (i32* @0 to i64)), !insn.addr !262
  %29 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_18c0 to i8*)), !insn.addr !263
  %30 = sext i32 %29 to i64, !insn.addr !263
  ret i64 %30, !insn.addr !264

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1638:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @test_obf_opt_edge(i64 %1), !insn.addr !265
  ret i64 0, !insn.addr !266

; uselistorder directives
  uselistorder i64 0, { 4, 42, 0, 1, 2, 3, 43, 5, 44, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1650:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !267

; uselistorder directives
  uselistorder i32 1, { 16, 15, 17, 14, 35, 13, 19, 18, 12, 42, 20, 11, 10, 36, 37, 21, 9, 38, 39, 8, 44, 45, 25, 24, 23, 22, 7, 26, 6, 27, 5, 41, 30, 29, 28, 4, 3, 40, 47, 46, 33, 32, 31, 2, 1, 34, 43, 0 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__asm_bfi(i32, i32, i64, i64) local_unnamed_addr

declare i64 @__asm_ubfx(i64, i64, i64, i64) local_unnamed_addr

!0 = !{i64 2124}
!1 = !{i64 2132}
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
!16 = !{i64 2464}
!17 = !{i64 2476}
!18 = !{i64 2480}
!19 = !{i64 2488}
!20 = !{i64 2492}
!21 = !{i64 2496}
!22 = !{i64 2500}
!23 = !{i64 2556}
!24 = !{i64 2616}
!25 = !{i64 2624}
!26 = !{i64 2640}
!27 = !{i64 2644}
!28 = !{i64 2652}
!29 = !{i64 2656}
!30 = !{i64 2664}
!31 = !{i64 2668}
!32 = !{i64 2672}
!33 = !{i64 2680}
!34 = !{i64 2692}
!35 = !{i64 2704}
!36 = !{i64 2736}
!37 = !{i64 2744}
!38 = !{i64 2760}
!39 = !{i64 2768}
!40 = !{i64 2772}
!41 = !{i64 2776}
!42 = !{i64 2808}
!43 = !{i64 2912}
!44 = !{i64 2916}
!45 = !{i64 2796}
!46 = !{i64 2800}
!47 = !{i64 2820}
!48 = !{i64 2824}
!49 = !{i64 2924}
!50 = !{i64 3024}
!51 = !{i64 3040}
!52 = !{i64 3048}
!53 = !{i64 3056}
!54 = !{i64 3104}
!55 = !{i64 3116}
!56 = !{i64 3160}
!57 = !{i64 3168}
!58 = !{i64 3176}
!59 = !{i64 3192}
!60 = !{i64 3200}
!61 = !{i64 3204}
!62 = !{i64 3240}
!63 = !{i64 3248}
!64 = !{i64 3256}
!65 = !{i64 3260}
!66 = !{i64 3320}
!67 = !{i64 3324}
!68 = !{i64 3328}
!69 = !{i64 3300}
!70 = !{i64 3308}
!71 = !{i64 3340}
!72 = !{i64 3356}
!73 = !{i64 3360}
!74 = !{i64 3396}
!75 = !{i64 3404}
!76 = !{i64 3412}
!77 = !{i64 3428}
!78 = !{i64 3436}
!79 = !{i64 3440}
!80 = !{i64 3448}
!81 = !{i64 3452}
!82 = !{i64 3416}
!83 = !{i64 3420}
!84 = !{i64 3464}
!85 = !{i64 3476}
!86 = !{i64 3484}
!87 = !{i64 3488}
!88 = !{i64 3496}
!89 = !{i64 3512}
!90 = !{i64 3516}
!91 = !{i64 3520}
!92 = !{i64 3552}
!93 = !{i64 3560}
!94 = !{i64 3580}
!95 = !{i64 3588}
!96 = !{i64 3592}
!97 = !{i64 3600}
!98 = !{i64 3612}
!99 = !{i64 3632}
!100 = !{i64 3644}
!101 = !{i64 3652}
!102 = !{i64 3668}
!103 = !{i64 3676}
!104 = !{i64 3680}
!105 = !{i64 3696}
!106 = !{i64 3796}
!107 = !{i64 3708}
!108 = !{i64 3712}
!109 = !{i64 3720}
!110 = !{i64 3724}
!111 = !{i64 3740}
!112 = !{i64 3744}
!113 = !{i64 3760}
!114 = !{i64 3764}
!115 = !{i64 3768}
!116 = !{i64 3776}
!117 = !{i64 3812}
!118 = !{i64 3816}
!119 = !{i64 3824}
!120 = !{i64 3828}
!121 = !{i64 3836}
!122 = !{i64 3848}
!123 = !{i64 3868}
!124 = !{i64 3880}
!125 = !{i64 3896}
!126 = !{i64 3900}
!127 = !{i64 3976}
!128 = !{i64 3988}
!129 = !{i64 3996}
!130 = !{i64 4000}
!131 = !{i64 4008}
!132 = !{i64 4012}
!133 = !{i64 3980}
!134 = !{i64 4024}
!135 = !{i64 4040}
!136 = !{i64 4044}
!137 = !{i64 4052}
!138 = !{i64 4072}
!139 = !{i64 4080}
!140 = !{i64 4096}
!141 = !{i64 4104}
!142 = !{i64 4132}
!143 = !{i64 4148}
!144 = !{i64 4152}
!145 = !{i64 4176}
!146 = !{i64 4188}
!147 = !{i64 4192}
!148 = !{i64 4196}
!149 = !{i64 4160}
!150 = !{i64 4208}
!151 = !{i64 4216}
!152 = !{i64 4220}
!153 = !{i64 4232}
!154 = !{i64 4248}
!155 = !{i64 4260}
!156 = !{i64 4276}
!157 = !{i64 4288}
!158 = !{i64 4296}
!159 = !{i64 4324}
!160 = !{i64 4340}
!161 = !{i64 4368}
!162 = !{i64 4380}
!163 = !{i64 4384}
!164 = !{i64 4420}
!165 = !{i64 4436}
!166 = !{i64 4440}
!167 = !{i64 4464}
!168 = !{i64 4476}
!169 = !{i64 4492}
!170 = !{i64 4516}
!171 = !{i64 4524}
!172 = !{i64 4528}
!173 = !{i64 4536}
!174 = !{i64 4540}
!175 = !{i64 4504}
!176 = !{i64 4508}
!177 = !{i64 4552}
!178 = !{i64 4556}
!179 = !{i64 4572}
!180 = !{i64 4576}
!181 = !{i64 4612}
!182 = !{i64 4620}
!183 = !{i64 4644}
!184 = !{i64 4688}
!185 = !{i64 4696}
!186 = !{i64 4700}
!187 = !{i64 4708}
!188 = !{i64 4712}
!189 = !{i64 4724}
!190 = !{i64 4728}
!191 = !{i64 4744}
!192 = !{i64 4756}
!193 = !{i64 4760}
!194 = !{i64 4788}
!195 = !{i64 4796}
!196 = !{i64 4820}
!197 = !{i64 4828}
!198 = !{i64 4832}
!199 = !{i64 4840}
!200 = !{i64 4856}
!201 = !{i64 4868}
!202 = !{i64 4884}
!203 = !{i64 4892}
!204 = !{i64 4900}
!205 = !{i64 4904}
!206 = !{i64 4916}
!207 = !{i64 4964}
!208 = !{i64 4976}
!209 = !{i64 4984}
!210 = !{i64 5004}
!211 = !{i64 5016}
!212 = !{i64 5032}
!213 = !{i64 5052}
!214 = !{i64 5080}
!215 = !{i64 5096}
!216 = !{i64 5112}
!217 = !{i64 5120}
!218 = !{i64 5144}
!219 = !{i64 5152}
!220 = !{i64 5168}
!221 = !{i64 5176}
!222 = !{i64 5184}
!223 = !{i64 5260}
!224 = !{i64 5280}
!225 = !{i64 5288}
!226 = !{i64 5292}
!227 = !{i64 5296}
!228 = !{i64 5308}
!229 = !{i64 5312}
!230 = !{i64 5316}
!231 = !{i64 5336}
!232 = !{i64 5352}
!233 = !{i64 5364}
!234 = !{i64 5372}
!235 = !{i64 5392}
!236 = !{i64 5396}
!237 = !{i64 5412}
!238 = !{i64 5416}
!239 = !{i64 5432}
!240 = !{i64 5436}
!241 = !{i64 5452}
!242 = !{i64 5456}
!243 = !{i64 5472}
!244 = !{i64 5476}
!245 = !{i64 5492}
!246 = !{i64 5496}
!247 = !{i64 5512}
!248 = !{i64 5516}
!249 = !{i64 5532}
!250 = !{i64 5536}
!251 = !{i64 5552}
!252 = !{i64 5556}
!253 = !{i64 5572}
!254 = !{i64 5576}
!255 = !{i64 5592}
!256 = !{i64 5596}
!257 = !{i64 5612}
!258 = !{i64 5616}
!259 = !{i64 5632}
!260 = !{i64 5636}
!261 = !{i64 5652}
!262 = !{i64 5656}
!263 = !{i64 5672}
!264 = !{i64 5684}
!265 = !{i64 5696}
!266 = !{i64 5708}
!267 = !{i64 5728}
