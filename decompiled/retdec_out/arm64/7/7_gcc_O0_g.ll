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
@global_var_13018 = global i64 0
@global_var_12fd0 = local_unnamed_addr global i64 0
@global_var_12ff8 = local_unnamed_addr global i64 0
@global_var_a74 = local_unnamed_addr constant i64 4107391026002395168
@global_var_1670 = local_unnamed_addr constant [5 x i8] c"test\00"
@global_var_12fe8 = local_unnamed_addr global i64 0
@global_var_1688 = local_unnamed_addr constant i64 25769803781
@global_var_16a8 = local_unnamed_addr constant i64 12884901892
@div_zero_caught = local_unnamed_addr global i32 0
@jmp_buffer = global i64 0
@segv_caught = local_unnamed_addr global i32 0
@segv_buffer = global i64 0
@0 = external global i32
@global_var_13000 = external global i8*
@global_var_3e8 = global i32 0
@global_var_1678 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_1698 = local_unnamed_addr constant fp128 0xL00000000000000003BF000000000E000
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

define i64 @function_8b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_8b0:
  %0 = call i64 @__cxa_finalize.5(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
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
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_13000 to i64), i64 8) to i64*), align 8, !insn.addr !30
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !31
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

define i32 @param_fake_branch(i32 %x) local_unnamed_addr {
dec_label_pc_a94:
  ret i32 %x, !insn.addr !36
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_abc:
  %0 = call i32 @param_fake_branch(i32 10), !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_ad4:
  %a_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !39
  %a_-24.04.reg2mem = alloca i32, !insn.addr !39
  %b_-20.05.reg2mem = alloca i32, !insn.addr !39
  %0 = add i32 %x, 1, !insn.addr !40
  %1 = icmp eq i32 %0, 0, !insn.addr !41
  store i32 %0, i32* %b_-20.05.reg2mem, !insn.addr !42
  store i32 %x, i32* %a_-24.04.reg2mem, !insn.addr !42
  store i32 -1, i32* %a_-24.0.lcssa.reg2mem, !insn.addr !42
  br i1 %1, label %dec_label_pc_b68, label %dec_label_pc_b30, !insn.addr !42

dec_label_pc_b30:                                 ; preds = %dec_label_pc_ad4, %dec_label_pc_b30
  %a_-24.04.reload = load i32, i32* %a_-24.04.reg2mem
  %b_-20.05.reload = load i32, i32* %b_-20.05.reg2mem
  %2 = srem i32 %a_-24.04.reload, %b_-20.05.reload
  %3 = icmp eq i32 %2, 0, !insn.addr !41
  store i32 %2, i32* %b_-20.05.reg2mem, !insn.addr !42
  store i32 %b_-20.05.reload, i32* %a_-24.04.reg2mem, !insn.addr !42
  store i32 %b_-20.05.reload, i32* %a_-24.0.lcssa.reg2mem, !insn.addr !42
  br i1 %3, label %dec_label_pc_b68, label %dec_label_pc_b30, !insn.addr !42

dec_label_pc_b68:                                 ; preds = %dec_label_pc_b30, %dec_label_pc_ad4
  %4 = add i32 %x, 2
  %5 = mul i32 %4, %x, !insn.addr !43
  %6 = add i32 %5, 1, !insn.addr !44
  %7 = mul i32 %0, %0, !insn.addr !45
  %8 = icmp eq i32 %6, %7, !insn.addr !46
  %a_-24.0.lcssa.reload = load i32, i32* %a_-24.0.lcssa.reg2mem
  %9 = icmp eq i32 %a_-24.0.lcssa.reload, 1, !insn.addr !47
  %10 = icmp eq i1 %8, %9
  %11 = mul i32 %x, 3
  %12 = add i32 %11, 20
  %13 = mul i32 %x, 2
  %14 = add i32 %13, 10
  %storemerge.in = select i1 %10, i32 %14, i32 %12
  ret i32 %storemerge.in, !insn.addr !48

; uselistorder directives
  uselistorder i32 %0, { 2, 3, 0, 1 }
  uselistorder i32* %b_-20.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-24.04.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 1, 3, 2, 5, 0, 4 }
  uselistorder label %dec_label_pc_b30, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_bd4:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !49
  ret i32 %0, !insn.addr !50
}

define i32 @param_instruction_substitution(i32 %x) local_unnamed_addr {
dec_label_pc_bec:
  %0 = udiv i32 %x, 2, !insn.addr !51
  %1 = urem i32 %x, 16, !insn.addr !52
  %reass.mul = mul i32 %x, 21
  %2 = add nuw i32 %1, %0, !insn.addr !53
  %3 = add i32 %2, %reass.mul, !insn.addr !54
  ret i32 %3, !insn.addr !55

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_c6c:
  %0 = call i32 @param_instruction_substitution(i32 10), !insn.addr !56
  ret i32 %0, !insn.addr !57
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i64 %len, i8 %key) local_unnamed_addr {
dec_label_pc_c84:
  %storemerge3.reg2mem = alloca i8*, !insn.addr !58
  %.reg2mem = alloca i8, !insn.addr !58
  %0 = ptrtoint i8* %buffer to i64
  %1 = trunc i64 %len to i32, !insn.addr !59
  %2 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %1), !insn.addr !59
  %3 = add i64 %len, -1, !insn.addr !60
  %4 = add i64 %3, %0, !insn.addr !61
  %5 = inttoptr i64 %4 to i8*, !insn.addr !62
  store i8 0, i8* %5, align 1, !insn.addr !62
  %6 = load i8, i8* %buffer, align 1, !insn.addr !63
  %7 = icmp eq i8 %6, 0, !insn.addr !64
  store i8 %6, i8* %.reg2mem, !insn.addr !65
  store i8* %buffer, i8** %storemerge3.reg2mem, !insn.addr !65
  br i1 %7, label %dec_label_pc_d04, label %dec_label_pc_ccc, !insn.addr !65

dec_label_pc_ccc:                                 ; preds = %dec_label_pc_c84, %dec_label_pc_ccc
  %storemerge3.reload = load i8*, i8** %storemerge3.reg2mem
  %.reload = load i8, i8* %.reg2mem
  %8 = xor i8 %.reload, %key
  store i8 %8, i8* %storemerge3.reload, align 1, !insn.addr !66
  %9 = ptrtoint i8* %storemerge3.reload to i64, !insn.addr !67
  %10 = add i64 %9, 1, !insn.addr !68
  %11 = inttoptr i64 %10 to i8*, !insn.addr !69
  %12 = load i8, i8* %11, align 1, !insn.addr !63
  %13 = icmp eq i8 %12, 0, !insn.addr !64
  store i8 %12, i8* %.reg2mem, !insn.addr !65
  store i8* %11, i8** %storemerge3.reg2mem, !insn.addr !65
  br i1 %13, label %dec_label_pc_d04, label %dec_label_pc_ccc, !insn.addr !65

dec_label_pc_d04:                                 ; preds = %dec_label_pc_ccc, %dec_label_pc_c84
  ret i8* %buffer, !insn.addr !70

; uselistorder directives
  uselistorder i8* %storemerge3.reload, { 1, 0 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i8* %buffer, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_ccc, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_d10:
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !71
  %1 = inttoptr i64 %0 to i64*, !insn.addr !72
  %2 = load i64, i64* %1, align 8, !insn.addr !72
  %3 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !73
  %4 = call i8* @decrypt_string(i8* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_13000 to i64), i64 16) to i8*), i8* nonnull %3, i64 32, i8 90), !insn.addr !73
  %5 = call i32 @strlen(i8* nonnull %3), !insn.addr !74
  %6 = load i32, i32* %stack_var_-32, align 4, !insn.addr !75
  %7 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !76
  %8 = inttoptr i64 %7 to i64*, !insn.addr !77
  %9 = load i64, i64* %8, align 8, !insn.addr !77
  %10 = icmp eq i64 %2, %9, !insn.addr !78
  br i1 %10, label %dec_label_pc_d80, label %dec_label_pc_d7c, !insn.addr !79

dec_label_pc_d7c:                                 ; preds = %dec_label_pc_d10
  call void @__stack_chk_fail(), !insn.addr !80
  br label %dec_label_pc_d80, !insn.addr !80

dec_label_pc_d80:                                 ; preds = %dec_label_pc_d7c, %dec_label_pc_d10
  %11 = urem i32 %6, 256, !insn.addr !75
  %12 = add i32 %11, %5, !insn.addr !81
  ret i32 %12, !insn.addr !82
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_d8c:
  %0 = call i32 @param_string_encryption(), !insn.addr !83
  ret i32 %0, !insn.addr !84
}

define i32 @param_tail_call_optimized(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_da0:
  %storemerge.reg2mem = alloca i32, !insn.addr !85
  %0 = icmp sgt i32 %n, 0, !insn.addr !86
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !86
  br i1 %0, label %dec_label_pc_dc4, label %dec_label_pc_de4, !insn.addr !86

dec_label_pc_dc4:                                 ; preds = %dec_label_pc_da0
  %1 = add i32 %n, -1, !insn.addr !87
  %2 = add i32 %acc, %n, !insn.addr !88
  %3 = call i32 @param_tail_call_optimized(i32 %1, i32 %2), !insn.addr !89
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !89
  br label %dec_label_pc_de4, !insn.addr !89

dec_label_pc_de4:                                 ; preds = %dec_label_pc_da0, %dec_label_pc_dc4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !90

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder label %dec_label_pc_de4, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_dec:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !91
  ret i32 %0, !insn.addr !92

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_e08:
  %storemerge.reg2mem = alloca i32, !insn.addr !93
  %0 = icmp sgt i32 %n, 0, !insn.addr !94
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !94
  br i1 %0, label %dec_label_pc_e28, label %dec_label_pc_e40, !insn.addr !94

dec_label_pc_e28:                                 ; preds = %dec_label_pc_e08
  %1 = add i32 %n, -1, !insn.addr !95
  %2 = call i32 @param_non_tail_call(i32 %1), !insn.addr !96
  %3 = add i32 %2, %n, !insn.addr !97
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !97
  br label %dec_label_pc_e40, !insn.addr !97

dec_label_pc_e40:                                 ; preds = %dec_label_pc_e08, %dec_label_pc_e28
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !98

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e40, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_e48:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !99
  ret i32 %0, !insn.addr !100

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_e60:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !101
  %sum_-8.05.reg2mem = alloca i32, !insn.addr !101
  %storemerge6.reg2mem = alloca i32, !insn.addr !101
  %storemerge47.reg2mem = alloca i32, !insn.addr !101
  %0 = icmp eq i32 %n, 0
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !102
  br i1 %0, label %dec_label_pc_f20, label %dec_label_pc_e7c.lr.ph, !insn.addr !102

dec_label_pc_e7c.lr.ph:                           ; preds = %dec_label_pc_e60
  %1 = ptrtoint i32* %a to i64, !insn.addr !103
  %2 = ptrtoint i32* %b to i64, !insn.addr !104
  %3 = ptrtoint i32* %c to i64, !insn.addr !105
  store i32 0, i32* %storemerge47.reg2mem
  br label %dec_label_pc_e7c

dec_label_pc_e7c:                                 ; preds = %dec_label_pc_e7c, %dec_label_pc_e7c.lr.ph
  %storemerge47.reload = load i32, i32* %storemerge47.reg2mem
  %4 = sext i32 %storemerge47.reload to i64, !insn.addr !106
  %5 = mul i64 %4, 4, !insn.addr !107
  %6 = add i64 %5, %1, !insn.addr !108
  %7 = inttoptr i64 %6 to i32*, !insn.addr !109
  %8 = load i32, i32* %7, align 4, !insn.addr !109
  %9 = add i64 %5, %2, !insn.addr !110
  %10 = inttoptr i64 %9 to i32*, !insn.addr !111
  %11 = load i32, i32* %10, align 4, !insn.addr !111
  %12 = add i64 %5, %3, !insn.addr !112
  %13 = add i32 %11, %8, !insn.addr !113
  %14 = inttoptr i64 %12 to i32*, !insn.addr !114
  store i32 %13, i32* %14, align 4, !insn.addr !114
  %15 = add nuw i32 %storemerge47.reload, 1, !insn.addr !115
  %exitcond8 = icmp eq i32 %15, %n
  store i32 %15, i32* %storemerge47.reg2mem, !insn.addr !102
  store i32 0, i32* %storemerge6.reg2mem, !insn.addr !102
  store i32 0, i32* %sum_-8.05.reg2mem, !insn.addr !102
  br i1 %exitcond8, label %dec_label_pc_ee4, label %dec_label_pc_e7c, !insn.addr !102

dec_label_pc_ee4:                                 ; preds = %dec_label_pc_e7c, %dec_label_pc_ee4
  %sum_-8.05.reload = load i32, i32* %sum_-8.05.reg2mem
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %16 = sext i32 %storemerge6.reload to i64, !insn.addr !116
  %17 = mul i64 %16, 4, !insn.addr !117
  %18 = add i64 %17, %3, !insn.addr !118
  %19 = inttoptr i64 %18 to i32*, !insn.addr !119
  %20 = load i32, i32* %19, align 4, !insn.addr !119
  %21 = add i32 %20, %sum_-8.05.reload, !insn.addr !120
  %22 = add nuw i32 %storemerge6.reload, 1, !insn.addr !121
  %exitcond = icmp eq i32 %22, %n
  store i32 %22, i32* %storemerge6.reg2mem, !insn.addr !122
  store i32 %21, i32* %sum_-8.05.reg2mem, !insn.addr !122
  store i32 %21, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !122
  br i1 %exitcond, label %dec_label_pc_f20, label %dec_label_pc_ee4, !insn.addr !122

dec_label_pc_f20:                                 ; preds = %dec_label_pc_ee4, %dec_label_pc_e60
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !123

; uselistorder directives
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i32* %storemerge47.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge6.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.05.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0, 2 }
  uselistorder label %dec_label_pc_ee4, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_f2c:
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-96 = alloca i64, align 8
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !124
  %1 = inttoptr i64 %0 to i64*, !insn.addr !125
  %2 = load i64, i64* %1, align 8, !insn.addr !125
  store i64 4294967298, i64* %stack_var_-96, align 8, !insn.addr !126
  store i64 34359738375, i64* %stack_var_-64, align 8, !insn.addr !127
  store i64 0, i64* %stack_var_-32, align 8, !insn.addr !128
  %3 = bitcast i64* %stack_var_-96 to i32*, !insn.addr !129
  %4 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !129
  %5 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !129
  %6 = call i32 @param_vectorized_loop(i32* nonnull %3, i32* nonnull %4, i32* nonnull %5, i32 8), !insn.addr !129
  %7 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !130
  %8 = inttoptr i64 %7 to i64*, !insn.addr !131
  %9 = load i64, i64* %8, align 8, !insn.addr !131
  %10 = icmp eq i64 %2, %9, !insn.addr !132
  br i1 %10, label %dec_label_pc_fb0, label %dec_label_pc_fac, !insn.addr !133

dec_label_pc_fac:                                 ; preds = %dec_label_pc_f2c
  call void @__stack_chk_fail(), !insn.addr !134
  br label %dec_label_pc_fb0, !insn.addr !134

dec_label_pc_fb0:                                 ; preds = %dec_label_pc_fac, %dec_label_pc_f2c
  ret i32 %6, !insn.addr !135
}

define i32 @lto_target_func(i32 %x) local_unnamed_addr {
dec_label_pc_fbc:
  %0 = mul i32 %x, 2, !insn.addr !136
  %1 = add i32 %0, 10, !insn.addr !137
  ret i32 %1, !insn.addr !138
}

define i32 @param_link_time_optimization(i32 %x) local_unnamed_addr {
dec_label_pc_fd8:
  %0 = call i32 @lto_target_func(i32 %x), !insn.addr !139
  ret i32 %0, !insn.addr !140
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_ff4:
  %0 = call i32 @param_link_time_optimization(i32 5), !insn.addr !141
  ret i32 %0, !insn.addr !142
}

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_100c:
  store i32 1, i32* @div_zero_caught, align 4, !insn.addr !143
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !144
  ret void, !insn.addr !144
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_1038:
  %storemerge.reg2mem = alloca i32, !insn.addr !145
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4108 to void (i32)*)), !insn.addr !146
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !147
  %2 = icmp eq i32 %1, 0, !insn.addr !148
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !149
  br i1 %2, label %dec_label_pc_1068, label %dec_label_pc_1084, !insn.addr !149

dec_label_pc_1068:                                ; preds = %dec_label_pc_1038
  %3 = sdiv i32 10, %x, !insn.addr !150
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !151
  br label %dec_label_pc_1084, !insn.addr !151

dec_label_pc_1084:                                ; preds = %dec_label_pc_1038, %dec_label_pc_1068
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !152

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1084, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_108c:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !153
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !154
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !155
  %3 = add i32 %1, %0, !insn.addr !156
  ret i32 %3, !insn.addr !157

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_10cc:
  store i32 1, i32* @segv_caught, align 4, !insn.addr !158
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !159
  ret void, !insn.addr !159

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_10f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4300 to void (i32)*)), !insn.addr !160
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !161
  %4 = icmp eq i32 %3, 0, !insn.addr !162
  %5 = trunc i64 %1 to i32
  %narrow = select i1 %4, i32 %5, i32 -1
  ret i32 %narrow, !insn.addr !163

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1148:
  %r2_-12 = alloca i32, align 4
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !164
  %1 = inttoptr i64 %0 to i64*, !insn.addr !165
  %2 = load i64, i64* %1, align 8, !insn.addr !165
  store i32 42, i32* %r2_-12, align 4, !insn.addr !166
  %3 = call i32 @param_null_pointer_deref(i32* nonnull %r2_-12), !insn.addr !167
  %4 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !168
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
  %10 = add i32 %4, %3, !insn.addr !175
  ret i32 %10, !insn.addr !176

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 0, 2, 1, 3, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %x) local_unnamed_addr {
dec_label_pc_11cc:
  %.pre-phi.reg2mem = alloca i64*, !insn.addr !177
  %.reg2mem = alloca i32, !insn.addr !177
  %stack_var_-8 = alloca i64, align 8
  %buffer_-16 = alloca [8 x i8], align 4
  %0 = load i64, i64* @global_var_12fe8, align 8, !insn.addr !178
  %1 = inttoptr i64 %0 to i64*
  %2 = load i64, i64* %1, align 8, !insn.addr !179
  store [8 x i8] [i8 0, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [8 x i8]* %buffer_-16, align 4
  %3 = bitcast [8 x i8]* %buffer_-16 to i32*, !insn.addr !180
  %4 = load i32, i32* %3, align 4, !insn.addr !180
  %5 = icmp slt i32 %4, 17, !insn.addr !181
  store i64* %1, i64** %.pre-phi.reg2mem, !insn.addr !181
  br i1 %5, label %dec_label_pc_1200.lr.ph, label %dec_label_pc_1228, !insn.addr !181

dec_label_pc_1200.lr.ph:                          ; preds = %dec_label_pc_11cc
  %6 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !182
  store i32 %4, i32* %.reg2mem
  br label %dec_label_pc_1200

dec_label_pc_1200:                                ; preds = %dec_label_pc_1200.lr.ph, %dec_label_pc_1200
  %.reload = load i32, i32* %.reg2mem
  %7 = sext i32 %.reload to i64, !insn.addr !183
  %8 = add i64 %7, %6, !insn.addr !184
  %9 = inttoptr i64 %8 to i8*, !insn.addr !184
  store i8 65, i8* %9, align 1, !insn.addr !184
  %10 = load i32, i32* %3, align 4, !insn.addr !185
  %11 = trunc i32 %10 to i8
  %12 = add i8 %11, 1, !insn.addr !186
  %13 = insertvalue [8 x i8] undef, i8 %12, 0, !insn.addr !186
  store [8 x i8] %13, [8 x i8]* %buffer_-16, align 4
  %14 = load i32, i32* %3, align 4, !insn.addr !180
  %15 = icmp slt i32 %14, 17, !insn.addr !181
  store i32 %14, i32* %.reg2mem, !insn.addr !181
  br i1 %15, label %dec_label_pc_1200, label %dec_label_pc_121c.dec_label_pc_1228_crit_edge, !insn.addr !181

dec_label_pc_121c.dec_label_pc_1228_crit_edge:    ; preds = %dec_label_pc_1200
  %.pre = load i64, i64* @global_var_12fe8, align 8
  %.pre2 = inttoptr i64 %.pre to i64*, !insn.addr !187
  store i64* %.pre2, i64** %.pre-phi.reg2mem
  br label %dec_label_pc_1228

dec_label_pc_1228:                                ; preds = %dec_label_pc_121c.dec_label_pc_1228_crit_edge, %dec_label_pc_11cc
  %.pre-phi.reload = load i64*, i64** %.pre-phi.reg2mem
  %16 = load i64, i64* %.pre-phi.reload, align 8, !insn.addr !187
  %17 = icmp eq i64 %2, %16, !insn.addr !188
  br i1 %17, label %dec_label_pc_126c, label %dec_label_pc_1268, !insn.addr !189

dec_label_pc_1268:                                ; preds = %dec_label_pc_1228
  call void @__stack_chk_fail(), !insn.addr !190
  br label %dec_label_pc_126c, !insn.addr !190

dec_label_pc_126c:                                ; preds = %dec_label_pc_1268, %dec_label_pc_1228
  ret i32 %x, !insn.addr !191

; uselistorder directives
  uselistorder i32* %3, { 2, 1, 0 }
  uselistorder [8 x i8]* %buffer_-16, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64** %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder void ()* @__stack_chk_fail, { 3, 0, 2, 1, 4 }
  uselistorder i32 17, { 1, 0 }
  uselistorder i8 0, { 1, 2, 0, 4, 3 }
  uselistorder label %dec_label_pc_1200, { 1, 0 }
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_1278:
  %storemerge.reg2mem = alloca i32, !insn.addr !192
  %indvars.iv.reg2mem = alloca i64, !insn.addr !192
  %0 = call i64* @malloc(i32 16), !insn.addr !193
  %1 = ptrtoint i64* %0 to i64, !insn.addr !193
  %2 = icmp eq i64* %0, null, !insn.addr !194
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !195
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !195
  br i1 %2, label %dec_label_pc_12e4, label %dec_label_pc_12ac, !insn.addr !195

dec_label_pc_12ac:                                ; preds = %dec_label_pc_1278, %dec_label_pc_12ac
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = add i64 %indvars.iv.reload, %1, !insn.addr !196
  %4 = inttoptr i64 %3 to i8*, !insn.addr !197
  store i8 66, i8* %4, align 1, !insn.addr !197
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !198
  br i1 %exitcond, label %dec_label_pc_12d8, label %dec_label_pc_12ac, !insn.addr !198

dec_label_pc_12d8:                                ; preds = %dec_label_pc_12ac
  call void @free(i64* nonnull %0), !insn.addr !199
  store i32 %x, i32* %storemerge.reg2mem, !insn.addr !200
  br label %dec_label_pc_12e4, !insn.addr !200

dec_label_pc_12e4:                                ; preds = %dec_label_pc_1278, %dec_label_pc_12d8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !201

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 1, 2, 0 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_12e4, { 1, 0 }
  uselistorder label %dec_label_pc_12ac, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_12ec:
  %0 = call i32 @param_buffer_overflow_stack(i32 10), !insn.addr !202
  %1 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !203
  %2 = add i32 %1, %0, !insn.addr !204
  ret i32 %2, !insn.addr !205
}

define i32 @param_integer_overflow(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1320:
  %x0.0.reg2mem = alloca i32, !insn.addr !206
  %0 = add i32 %b, %a, !insn.addr !207
  %1 = icmp sgt i32 %a, 0, !insn.addr !208
  %2 = icmp sgt i32 %b, 0, !insn.addr !209
  %or.cond.not = icmp eq i1 %1, %2
  %3 = icmp slt i32 %0, 0, !insn.addr !210
  %or.cond3 = icmp eq i1 %or.cond.not, %3
  store i32 -1, i32* %x0.0.reg2mem, !insn.addr !208
  br i1 %or.cond3, label %dec_label_pc_13b8, label %dec_label_pc_1388, !insn.addr !208

dec_label_pc_1388:                                ; preds = %dec_label_pc_1320
  %4 = icmp sgt i32 %a, -1, !insn.addr !211
  %5 = icmp sgt i32 %b, -1, !insn.addr !212
  %or.cond5.not = or i1 %4, %5
  %6 = icmp slt i32 %0, 1, !insn.addr !213
  %or.cond7 = or i1 %or.cond5.not, %6
  %. = select i1 %or.cond7, i32 %0, i32 -2
  store i32 %., i32* %x0.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_13b8, !insn.addr !214

dec_label_pc_13b8:                                ; preds = %dec_label_pc_1388, %dec_label_pc_1320
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !215

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32 -2, { 1, 0 }
  uselistorder i32 %b, { 1, 2, 0 }
  uselistorder i32 %a, { 1, 2, 0 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_13c0:
  %0 = call i32 @param_integer_overflow(i32 1000000000, i32 1000000000), !insn.addr !216
  %1 = call i32 @param_integer_overflow(i32 -1, i32 1), !insn.addr !217
  %2 = add i32 %1, %0, !insn.addr !218
  ret i32 %2, !insn.addr !219

; uselistorder directives
  uselistorder i32 -1, { 6, 4, 3, 0, 5, 1, 7, 8, 2 }
  uselistorder i32 (i32, i32)* @param_integer_overflow, { 1, 0 }
}

define i32 @param_undefined_behavior(i32 %i) local_unnamed_addr {
dec_label_pc_1404:
  %0 = mul i32 %i, 2, !insn.addr !220
  ret i32 %0, !insn.addr !221

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2, 4 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1424:
  %0 = call i32 @param_undefined_behavior(i32 5), !insn.addr !222
  ret i32 %0, !insn.addr !223
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1444:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !224
  %3 = or i32 %2, 255, !insn.addr !225
  %4 = call i32 @__asm_bfi(i32 %3, i32 1193046, i64 8, i64 24), !insn.addr !226
  %5 = sext i32 %4 to i64, !insn.addr !227
  %6 = call i64 @__asm_ubfx(i64 %5, i64 %5, i64 0, i64 3), !insn.addr !228
  %7 = trunc i64 %6 to i32, !insn.addr !229
  %8 = urem i32 %7, 256, !insn.addr !229
  %9 = call i64 @__asm_ubfx(i64 %5, i64 %5, i64 3, i64 5), !insn.addr !230
  %10 = trunc i64 %9 to i32, !insn.addr !231
  %11 = urem i32 %10, 256, !insn.addr !231
  %12 = add nuw nsw i32 %8, 10, !insn.addr !232
  %13 = add nuw nsw i32 %12, %11, !insn.addr !233
  ret i32 %13, !insn.addr !234

; uselistorder directives
  uselistorder i64 %5, { 1, 0, 3, 2 }
  uselistorder i64 8, { 1, 0 }
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_14ec:
  %0 = call i32 @param_implementation_defined(), !insn.addr !235
  ret i32 %0, !insn.addr !236
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_16b8 to i8*)), !insn.addr !237
  %1 = call i32 @call_fake_branch(), !insn.addr !238
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_16e8 to i8*)), !insn.addr !239
  %3 = call i32 @call_opaque_predicate(), !insn.addr !240
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1708 to i8*)), !insn.addr !241
  %5 = call i32 @call_instruction_substitution(), !insn.addr !242
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1728 to i8*)), !insn.addr !243
  %7 = call i32 @call_string_encryption(), !insn.addr !244
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1748 to i8*)), !insn.addr !245
  %9 = call i32 @call_tail_call_optimized(), !insn.addr !246
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1768 to i8*)), !insn.addr !247
  %11 = call i32 @call_non_tail_call(), !insn.addr !248
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1798 to i8*)), !insn.addr !249
  %13 = call i32 @call_vectorized_loop(), !insn.addr !250
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_17c0 to i8*)), !insn.addr !251
  %15 = call i32 @call_link_time_optimization(), !insn.addr !252
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_17e8 to i8*)), !insn.addr !253
  %17 = call i32 @call_division_by_zero(), !insn.addr !254
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1808 to i8*)), !insn.addr !255
  %19 = call i32 @call_null_pointer_deref(), !insn.addr !256
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1828 to i8*)), !insn.addr !257
  %21 = call i32 @call_buffer_overflow(), !insn.addr !258
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1848 to i8*)), !insn.addr !259
  %23 = call i32 @call_integer_overflow(), !insn.addr !260
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_1868 to i8*)), !insn.addr !261
  %25 = call i32 @call_undefined_behavior(), !insn.addr !262
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_18a0 to i8*)), !insn.addr !263
  %27 = call i32 @call_implementation_defined(), !insn.addr !264
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_18c0 to i8*)), !insn.addr !265
  ret void, !insn.addr !266

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 0, 1, 5, 4, 6, 3, 2, 7, 10, 8, 9, 13, 12, 11, 14 }
  uselistorder i64 0, { 41, 0, 38, 39, 1, 40, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1638:
  call void @test_obf_opt_edge(), !insn.addr !267
  ret i32 0, !insn.addr !268

; uselistorder directives
  uselistorder i32 0, { 5, 10, 9, 8, 18, 11, 19, 1, 2, 3, 0, 6, 4, 14, 12, 15, 20, 7, 13, 16, 17 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1650:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !269

; uselistorder directives
  uselistorder i32 1, { 3, 2, 23, 22, 4, 6, 5, 31, 30, 8, 7, 32, 1, 24, 25, 9, 26, 27, 35, 34, 33, 37, 38, 13, 12, 11, 10, 14, 15, 29, 17, 16, 28, 40, 39, 20, 19, 18, 21, 36, 0 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

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
!36 = !{i64 2744}
!37 = !{i64 2760}
!38 = !{i64 2768}
!39 = !{i64 2772}
!40 = !{i64 2808}
!41 = !{i64 2912}
!42 = !{i64 2916}
!43 = !{i64 2796}
!44 = !{i64 2800}
!45 = !{i64 2820}
!46 = !{i64 2824}
!47 = !{i64 2924}
!48 = !{i64 3024}
!49 = !{i64 3040}
!50 = !{i64 3048}
!51 = !{i64 3104}
!52 = !{i64 3116}
!53 = !{i64 3160}
!54 = !{i64 3168}
!55 = !{i64 3176}
!56 = !{i64 3192}
!57 = !{i64 3200}
!58 = !{i64 3204}
!59 = !{i64 3240}
!60 = !{i64 3248}
!61 = !{i64 3256}
!62 = !{i64 3260}
!63 = !{i64 3320}
!64 = !{i64 3324}
!65 = !{i64 3328}
!66 = !{i64 3300}
!67 = !{i64 3304}
!68 = !{i64 3308}
!69 = !{i64 3312}
!70 = !{i64 3340}
!71 = !{i64 3356}
!72 = !{i64 3360}
!73 = !{i64 3396}
!74 = !{i64 3404}
!75 = !{i64 3412}
!76 = !{i64 3428}
!77 = !{i64 3436}
!78 = !{i64 3440}
!79 = !{i64 3448}
!80 = !{i64 3452}
!81 = !{i64 3416}
!82 = !{i64 3464}
!83 = !{i64 3476}
!84 = !{i64 3484}
!85 = !{i64 3488}
!86 = !{i64 3512}
!87 = !{i64 3528}
!88 = !{i64 3540}
!89 = !{i64 3552}
!90 = !{i64 3560}
!91 = !{i64 3580}
!92 = !{i64 3588}
!93 = !{i64 3592}
!94 = !{i64 3612}
!95 = !{i64 3628}
!96 = !{i64 3632}
!97 = !{i64 3644}
!98 = !{i64 3652}
!99 = !{i64 3668}
!100 = !{i64 3676}
!101 = !{i64 3680}
!102 = !{i64 3796}
!103 = !{i64 3716}
!104 = !{i64 3736}
!105 = !{i64 3756}
!106 = !{i64 3708}
!107 = !{i64 3712}
!108 = !{i64 3720}
!109 = !{i64 3724}
!110 = !{i64 3740}
!111 = !{i64 3744}
!112 = !{i64 3760}
!113 = !{i64 3764}
!114 = !{i64 3768}
!115 = !{i64 3776}
!116 = !{i64 3812}
!117 = !{i64 3816}
!118 = !{i64 3824}
!119 = !{i64 3828}
!120 = !{i64 3836}
!121 = !{i64 3848}
!122 = !{i64 3868}
!123 = !{i64 3880}
!124 = !{i64 3896}
!125 = !{i64 3900}
!126 = !{i64 3928}
!127 = !{i64 3948}
!128 = !{i64 3952}
!129 = !{i64 3976}
!130 = !{i64 3988}
!131 = !{i64 3996}
!132 = !{i64 4000}
!133 = !{i64 4008}
!134 = !{i64 4012}
!135 = !{i64 4024}
!136 = !{i64 4040}
!137 = !{i64 4044}
!138 = !{i64 4052}
!139 = !{i64 4072}
!140 = !{i64 4080}
!141 = !{i64 4096}
!142 = !{i64 4104}
!143 = !{i64 4132}
!144 = !{i64 4148}
!145 = !{i64 4152}
!146 = !{i64 4176}
!147 = !{i64 4188}
!148 = !{i64 4192}
!149 = !{i64 4196}
!150 = !{i64 4208}
!151 = !{i64 4220}
!152 = !{i64 4232}
!153 = !{i64 4248}
!154 = !{i64 4260}
!155 = !{i64 4276}
!156 = !{i64 4288}
!157 = !{i64 4296}
!158 = !{i64 4324}
!159 = !{i64 4340}
!160 = !{i64 4368}
!161 = !{i64 4380}
!162 = !{i64 4384}
!163 = !{i64 4420}
!164 = !{i64 4436}
!165 = !{i64 4440}
!166 = !{i64 4456}
!167 = !{i64 4464}
!168 = !{i64 4476}
!169 = !{i64 4492}
!170 = !{i64 4516}
!171 = !{i64 4524}
!172 = !{i64 4528}
!173 = !{i64 4536}
!174 = !{i64 4540}
!175 = !{i64 4504}
!176 = !{i64 4552}
!177 = !{i64 4556}
!178 = !{i64 4572}
!179 = !{i64 4576}
!180 = !{i64 4636}
!181 = !{i64 4644}
!182 = !{i64 4612}
!183 = !{i64 4608}
!184 = !{i64 4620}
!185 = !{i64 4624}
!186 = !{i64 4632}
!187 = !{i64 4696}
!188 = !{i64 4700}
!189 = !{i64 4708}
!190 = !{i64 4712}
!191 = !{i64 4724}
!192 = !{i64 4728}
!193 = !{i64 4744}
!194 = !{i64 4756}
!195 = !{i64 4760}
!196 = !{i64 4788}
!197 = !{i64 4796}
!198 = !{i64 4820}
!199 = !{i64 4828}
!200 = !{i64 4832}
!201 = !{i64 4840}
!202 = !{i64 4856}
!203 = !{i64 4868}
!204 = !{i64 4884}
!205 = !{i64 4892}
!206 = !{i64 4896}
!207 = !{i64 4916}
!208 = !{i64 4964}
!209 = !{i64 4976}
!210 = !{i64 4984}
!211 = !{i64 5004}
!212 = !{i64 5016}
!213 = !{i64 5032}
!214 = !{i64 5044}
!215 = !{i64 5052}
!216 = !{i64 5080}
!217 = !{i64 5096}
!218 = !{i64 5112}
!219 = !{i64 5120}
!220 = !{i64 5144}
!221 = !{i64 5152}
!222 = !{i64 5168}
!223 = !{i64 5184}
!224 = !{i64 5244}
!225 = !{i64 5260}
!226 = !{i64 5280}
!227 = !{i64 5284}
!228 = !{i64 5292}
!229 = !{i64 5296}
!230 = !{i64 5308}
!231 = !{i64 5312}
!232 = !{i64 5316}
!233 = !{i64 5336}
!234 = !{i64 5352}
!235 = !{i64 5364}
!236 = !{i64 5372}
!237 = !{i64 5392}
!238 = !{i64 5396}
!239 = !{i64 5412}
!240 = !{i64 5416}
!241 = !{i64 5432}
!242 = !{i64 5436}
!243 = !{i64 5452}
!244 = !{i64 5456}
!245 = !{i64 5472}
!246 = !{i64 5476}
!247 = !{i64 5492}
!248 = !{i64 5496}
!249 = !{i64 5512}
!250 = !{i64 5516}
!251 = !{i64 5532}
!252 = !{i64 5536}
!253 = !{i64 5552}
!254 = !{i64 5556}
!255 = !{i64 5572}
!256 = !{i64 5576}
!257 = !{i64 5592}
!258 = !{i64 5596}
!259 = !{i64 5612}
!260 = !{i64 5616}
!261 = !{i64 5632}
!262 = !{i64 5636}
!263 = !{i64 5652}
!264 = !{i64 5656}
!265 = !{i64 5672}
!266 = !{i64 5684}
!267 = !{i64 5696}
!268 = !{i64 5708}
!269 = !{i64 5728}
