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
@global_var_12000 = global i64 0
@global_var_12018 = global i64 0
@global_var_11fd0 = local_unnamed_addr global i64 0
@global_var_11ff8 = local_unnamed_addr global i64 0
@global_var_ab4 = local_unnamed_addr constant i64 4107391026002395168
@global_var_12020 = local_unnamed_addr global i64 0
@global_var_12028 = global i64 0
@global_var_12168 = global i64 0
@global_var_12160 = local_unnamed_addr global i64 0
@global_var_11fe8 = local_unnamed_addr global i64 0
@global_var_1000 = local_unnamed_addr constant i64 -7493991741360439264
@global_var_1330 = local_unnamed_addr constant i64 25769803781
@global_var_1350 = local_unnamed_addr constant i64 12884901892
@0 = external global i32
@global_var_1320 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_1340 = local_unnamed_addr constant fp128 0xL00000000000000003BF000000000E000
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_1120 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_114d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_1169 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_1185 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_11a2 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_11be = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_11e8 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_120d = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_1233 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_1253 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_126f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_128c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_12a9 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_12da = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_12f7 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @test_obf_opt_edge(i64 %1), !insn.addr !16
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
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_12000 to i64), i64 8) to i64*), align 8, !insn.addr !32
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
dec_label_pc_ad4:
  store i32 1, i32* bitcast (i64* @global_var_12020 to i32*), align 8, !insn.addr !38
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_12028, i64 1, i64* nonnull @global_var_12000), !insn.addr !39
  ret i64 %0, !insn.addr !39
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_af4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* bitcast (i64* @global_var_12160 to i32*), align 8, !insn.addr !40
  %2 = inttoptr i64 %1 to i64*, !insn.addr !41
  %3 = call i64 @__longjmp_chk(i64* nonnull @global_var_12168, i64 1, i64* %2), !insn.addr !41
  ret i64 %3, !insn.addr !41

; uselistorder directives
  uselistorder i64 (i64*, i64, i64*)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch() local_unnamed_addr {
dec_label_pc_b14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !42
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_b18:
  ret i64 10, !insn.addr !43
}

define i64 @param_opaque_predicate() local_unnamed_addr {
dec_label_pc_b20:
  %0 = alloca i64
  %x1.01.reg2mem = alloca i64, !insn.addr !44
  %x3.0.in2.reg2mem = alloca i64, !insn.addr !44
  %.reg2mem = alloca i32, !insn.addr !44
  %.pre-phi.reg2mem = alloca i32, !insn.addr !44
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i64 %1, 1, !insn.addr !45
  %4 = trunc i64 %3 to i32
  %5 = icmp eq i32 %4, 0, !insn.addr !46
  store i32 %2, i32* %.pre-phi.reg2mem, !insn.addr !46
  br i1 %5, label %dec_label_pc_b48, label %dec_label_pc_b64.lr.ph, !insn.addr !46

dec_label_pc_b64.lr.ph:                           ; preds = %dec_label_pc_b20
  %6 = and i64 %3, 4294967295, !insn.addr !45
  store i32 %4, i32* %.reg2mem
  store i64 %6, i64* %x1.01.reg2mem
  br label %dec_label_pc_b64

dec_label_pc_b44.dec_label_pc_b48_crit_edge:      ; preds = %dec_label_pc_b64
  %.pre = trunc i64 %x1.01.reload to i32
  store i32 %.pre, i32* %.pre-phi.reg2mem
  br label %dec_label_pc_b48

dec_label_pc_b48:                                 ; preds = %dec_label_pc_b44.dec_label_pc_b48_crit_edge, %dec_label_pc_b20
  %7 = mul i64 %1, 2, !insn.addr !47
  %8 = mul i32 %4, %4, !insn.addr !48
  %9 = add i32 %2, 2
  %10 = mul i32 %9, %2, !insn.addr !49
  %11 = add i32 %10, 1, !insn.addr !50
  %12 = icmp eq i32 %11, %8, !insn.addr !51
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %13 = add i64 %7, 10, !insn.addr !52
  %14 = mul i64 %1, 3, !insn.addr !53
  %15 = icmp eq i32 %.pre-phi.reload, 1
  %storemerge = icmp eq i1 %12, %15
  %16 = add i64 %14, 20, !insn.addr !54
  %17 = select i1 %storemerge, i64 %13, i64 %16, !insn.addr !55
  %18 = and i64 %17, 4294967295, !insn.addr !55
  ret i64 %18, !insn.addr !56

dec_label_pc_b64:                                 ; preds = %dec_label_pc_b64.lr.ph, %dec_label_pc_b64
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %x3.0.in2.reload = load i64, i64* %x3.0.in2.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %19 = trunc i64 %x3.0.in2.reload to i32, !insn.addr !57
  %20 = srem i32 %19, %.reload
  %21 = zext i32 %20 to i64, !insn.addr !58
  %22 = icmp eq i32 %20, 0, !insn.addr !46
  store i32 %20, i32* %.reg2mem, !insn.addr !46
  store i64 %x1.01.reload, i64* %x3.0.in2.reg2mem, !insn.addr !46
  store i64 %21, i64* %x1.01.reg2mem, !insn.addr !46
  br i1 %22, label %dec_label_pc_b44.dec_label_pc_b48_crit_edge, label %dec_label_pc_b64, !insn.addr !46

; uselistorder directives
  uselistorder i64 %x1.01.reload, { 1, 0 }
  uselistorder i32 %4, { 2, 3, 0, 1 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 2, 3, 1, 0 }
  uselistorder i32* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x3.0.in2.reg2mem, { 1, 0 }
  uselistorder i64* %x1.01.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_b64, { 1, 0 }
}

define i64 @call_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_b78:
  %0 = call i64 @param_opaque_predicate(), !insn.addr !59
  ret i64 %0, !insn.addr !59
}

define i64 @param_instruction_substitution() local_unnamed_addr {
dec_label_pc_b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !60
  %3 = urem i32 %2, 16, !insn.addr !61
  %4 = udiv i32 %2, 2, !insn.addr !62
  %reass.mul = mul i32 %2, 21
  %5 = add nuw i32 %3, %4, !insn.addr !63
  %6 = add i32 %5, %reass.mul, !insn.addr !64
  %7 = zext i32 %6 to i64, !insn.addr !64
  ret i64 %7, !insn.addr !65

; uselistorder directives
  uselistorder i32 %2, { 2, 0, 1 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_ba4:
  ret i64 225, !insn.addr !66
}

define i64 @decrypt_string() local_unnamed_addr {
dec_label_pc_bac:
  %0 = alloca i64
  %x1.01.reg2mem = alloca i64, !insn.addr !67
  %.reg2mem2 = alloca i8*, !insn.addr !67
  %.reg2mem = alloca i8, !insn.addr !67
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = inttoptr i64 %3 to i8*, !insn.addr !68
  %6 = inttoptr i64 %4 to i8*, !insn.addr !68
  %7 = trunc i64 %2 to i32, !insn.addr !68
  %8 = call i8* @strncpy(i8* %5, i8* %6, i32 %7), !insn.addr !68
  %9 = ptrtoint i8* %8 to i64, !insn.addr !68
  %10 = add i64 %2, -1, !insn.addr !69
  %11 = add i64 %10, %9, !insn.addr !70
  %12 = inttoptr i64 %11 to i8*, !insn.addr !70
  store i8 0, i8* %12, align 1, !insn.addr !70
  %13 = load i8, i8* %8, align 1, !insn.addr !71
  %14 = icmp eq i8 %13, 0, !insn.addr !72
  br i1 %14, label %dec_label_pc_be8, label %dec_label_pc_bf8.lr.ph, !insn.addr !72

dec_label_pc_bf8.lr.ph:                           ; preds = %dec_label_pc_bac
  %15 = trunc i64 %1 to i8
  store i8 %13, i8* %.reg2mem
  store i8* %8, i8** %.reg2mem2
  store i64 %9, i64* %x1.01.reg2mem
  br label %dec_label_pc_bf8

dec_label_pc_be8:                                 ; preds = %dec_label_pc_bf8, %dec_label_pc_bac
  ret i64 %9, !insn.addr !73

dec_label_pc_bf8:                                 ; preds = %dec_label_pc_bf8.lr.ph, %dec_label_pc_bf8
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %.reload3 = load i8*, i8** %.reg2mem2
  %.reload = load i8, i8* %.reg2mem
  %16 = xor i8 %.reload, %15, !insn.addr !74
  store i8 %16, i8* %.reload3, align 1, !insn.addr !74
  %17 = add i64 %x1.01.reload, 1, !insn.addr !74
  %18 = inttoptr i64 %17 to i8*, !insn.addr !71
  %19 = load i8, i8* %18, align 1, !insn.addr !71
  %20 = icmp eq i8 %19, 0, !insn.addr !72
  store i8 %19, i8* %.reg2mem, !insn.addr !72
  store i8* %18, i8** %.reg2mem2, !insn.addr !72
  store i64 %17, i64* %x1.01.reg2mem, !insn.addr !72
  br i1 %20, label %dec_label_pc_be8, label %dec_label_pc_bf8, !insn.addr !72

; uselistorder directives
  uselistorder i64 %9, { 2, 0, 1 }
  uselistorder i8* %.reg2mem, { 1, 0, 2 }
  uselistorder i8** %.reg2mem2, { 1, 0, 2 }
  uselistorder i64* %x1.01.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder i8 0, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_bf8, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_c04:
  %x0.0.reg2mem = alloca i64, !insn.addr !75
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !76
  %1 = inttoptr i64 %0 to i64*, !insn.addr !77
  %2 = load i64, i64* %1, align 8, !insn.addr !77
  %3 = call i64 @decrypt_string(), !insn.addr !78
  %4 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !79
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !79
  %6 = load i32, i32* %stack_var_-32, align 4, !insn.addr !80
  %7 = urem i32 %6, 256, !insn.addr !80
  %8 = add i32 %7, %5, !insn.addr !81
  %9 = zext i32 %8 to i64, !insn.addr !81
  %10 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !82
  %11 = inttoptr i64 %10 to i64*, !insn.addr !83
  %12 = load i64, i64* %11, align 8, !insn.addr !83
  %13 = icmp eq i64 %2, %12, !insn.addr !84
  store i64 %9, i64* %x0.0.reg2mem, !insn.addr !85
  br i1 %13, label %dec_label_pc_c70, label %dec_label_pc_c6c, !insn.addr !85

dec_label_pc_c6c:                                 ; preds = %dec_label_pc_c04
  call void @__stack_chk_fail(), !insn.addr !86
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_c70, !insn.addr !86

dec_label_pc_c70:                                 ; preds = %dec_label_pc_c6c, %dec_label_pc_c04
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !87
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_c7c:
  %0 = call i64 @param_string_encryption(), !insn.addr !88
  ret i64 %0, !insn.addr !88
}

define i64 @param_tail_call_optimized() local_unnamed_addr {
dec_label_pc_c80:
  %0 = alloca i64
  %x0.0.lcssa.reg2mem = alloca i64, !insn.addr !89
  %x2.03.in.reg2mem = alloca i64, !insn.addr !89
  %x0.04.reg2mem = alloca i64, !insn.addr !89
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %x0.02 = and i64 %1, 4294967295
  %3 = trunc i64 %2 to i32, !insn.addr !90
  %4 = icmp slt i32 %3, 1, !insn.addr !90
  store i64 %x0.02, i64* %x0.04.reg2mem, !insn.addr !90
  store i64 %x0.02, i64* %x0.0.lcssa.reg2mem, !insn.addr !90
  br i1 %4, label %dec_label_pc_c9c, label %dec_label_pc_c90, !insn.addr !90

dec_label_pc_c90:                                 ; preds = %dec_label_pc_c80, %dec_label_pc_c90
  %x2.03.in.reload = load i64, i64* %x2.03.in.reg2mem
  %x0.04.reload = load i64, i64* %x0.04.reg2mem
  %x2.03 = and i64 %x2.03.in.reload, 4294967295
  %5 = add i64 %x2.03.in.reload, %x0.04.reload, !insn.addr !91
  %6 = add nuw nsw i64 %x2.03, 4294967295, !insn.addr !92
  %x0.0 = and i64 %5, 4294967295
  %7 = trunc i64 %6 to i32, !insn.addr !90
  %8 = icmp slt i32 %7, 1, !insn.addr !90
  store i64 %x0.0, i64* %x0.04.reg2mem, !insn.addr !90
  store i64 %6, i64* %x2.03.in.reg2mem, !insn.addr !90
  store i64 %x0.0, i64* %x0.0.lcssa.reg2mem, !insn.addr !90
  br i1 %8, label %dec_label_pc_c9c, label %dec_label_pc_c90, !insn.addr !90

dec_label_pc_c9c:                                 ; preds = %dec_label_pc_c90, %dec_label_pc_c80
  %x0.0.lcssa.reload = load i64, i64* %x0.0.lcssa.reg2mem
  ret i64 %x0.0.lcssa.reload, !insn.addr !93

; uselistorder directives
  uselistorder i64 %x2.03.in.reload, { 1, 0 }
  uselistorder i64* %x0.04.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.03.in.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_c90, { 1, 0 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_ca0:
  ret i64 500500, !insn.addr !94
}

define i64 @param_non_tail_call() local_unnamed_addr {
dec_label_pc_cac:
  %0 = alloca i64
  %x0.0.lcssa.reg2mem = alloca i64, !insn.addr !95
  %x0.01.reg2mem = alloca i64, !insn.addr !95
  %x1.0.in2.reg2mem = alloca i64, !insn.addr !95
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !96
  %3 = icmp slt i32 %2, 1, !insn.addr !96
  store i64 0, i64* %x0.01.reg2mem, !insn.addr !96
  store i64 0, i64* %x0.0.lcssa.reg2mem, !insn.addr !96
  br i1 %3, label %dec_label_pc_cc8, label %dec_label_pc_cbc, !insn.addr !96

dec_label_pc_cbc:                                 ; preds = %dec_label_pc_cac, %dec_label_pc_cbc
  %x0.01.reload = load i64, i64* %x0.01.reg2mem
  %x1.0.in2.reload = load i64, i64* %x1.0.in2.reg2mem
  %x1.0 = and i64 %x1.0.in2.reload, 4294967295
  %4 = add i64 %x0.01.reload, %x1.0.in2.reload, !insn.addr !97
  %5 = and i64 %4, 4294967295, !insn.addr !97
  %6 = add nuw nsw i64 %x1.0, 4294967295, !insn.addr !98
  %7 = trunc i64 %6 to i32, !insn.addr !96
  %8 = icmp slt i32 %7, 1, !insn.addr !96
  store i64 %6, i64* %x1.0.in2.reg2mem, !insn.addr !96
  store i64 %5, i64* %x0.01.reg2mem, !insn.addr !96
  store i64 %5, i64* %x0.0.lcssa.reg2mem, !insn.addr !96
  br i1 %8, label %dec_label_pc_cc8, label %dec_label_pc_cbc, !insn.addr !96

dec_label_pc_cc8:                                 ; preds = %dec_label_pc_cbc, %dec_label_pc_cac
  %x0.0.lcssa.reload = load i64, i64* %x0.0.lcssa.reg2mem
  ret i64 %x0.0.lcssa.reload, !insn.addr !99

; uselistorder directives
  uselistorder i64 %x1.0.in2.reload, { 1, 0 }
  uselistorder i64* %x1.0.in2.reg2mem, { 1, 0 }
  uselistorder i64* %x0.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_cbc, { 1, 0 }
}

define i64 @call_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_ccc:
  %0 = call i64 @param_non_tail_call(), !insn.addr !100
  ret i64 %0, !insn.addr !100
}

define i64 @param_vectorized_loop() local_unnamed_addr {
dec_label_pc_cd4:
  %0 = alloca i64
  %x1.02.reg2mem = alloca i64, !insn.addr !101
  %storemerge3.reg2mem = alloca i32, !insn.addr !101
  %storemerge14.reg2mem = alloca i64, !insn.addr !101
  %storemerge.lcssa.reg2mem = alloca i64, !insn.addr !101
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = icmp sgt i64 %1, 0
  store i64 0, i64* %storemerge.lcssa.reg2mem, !insn.addr !102
  store i64 0, i64* %storemerge14.reg2mem, !insn.addr !102
  br i1 %5, label %dec_label_pc_cf4, label %dec_label_pc_cf0, !insn.addr !102

dec_label_pc_ce8.dec_label_pc_cf0_crit_edge:      ; preds = %dec_label_pc_d0c
  %6 = zext i32 %23 to i64, !insn.addr !103
  store i64 %6, i64* %storemerge.lcssa.reg2mem
  br label %dec_label_pc_cf0

dec_label_pc_cf0:                                 ; preds = %dec_label_pc_cd4, %dec_label_pc_ce8.dec_label_pc_cf0_crit_edge
  %storemerge.lcssa.reload = load i64, i64* %storemerge.lcssa.reg2mem
  ret i64 %storemerge.lcssa.reload, !insn.addr !104

dec_label_pc_cf4:                                 ; preds = %dec_label_pc_cd4, %dec_label_pc_cf4
  %storemerge14.reload = load i64, i64* %storemerge14.reg2mem
  %7 = mul i64 %storemerge14.reload, 4, !insn.addr !105
  %8 = add i64 %7, %4, !insn.addr !105
  %9 = inttoptr i64 %8 to i32*, !insn.addr !105
  %10 = load i32, i32* %9, align 4, !insn.addr !105
  %11 = add i64 %7, %3, !insn.addr !106
  %12 = inttoptr i64 %11 to i32*, !insn.addr !106
  %13 = load i32, i32* %12, align 4, !insn.addr !106
  %14 = add i32 %13, %10, !insn.addr !107
  %15 = add i64 %7, %2, !insn.addr !108
  %16 = inttoptr i64 %15 to i32*, !insn.addr !108
  store i32 %14, i32* %16, align 4, !insn.addr !108
  %17 = add nuw nsw i64 %storemerge14.reload, 1, !insn.addr !109
  %exitcond5 = icmp eq i64 %17, %1
  store i64 %17, i64* %storemerge14.reg2mem, !insn.addr !102
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !102
  store i64 0, i64* %x1.02.reg2mem, !insn.addr !102
  br i1 %exitcond5, label %dec_label_pc_d0c, label %dec_label_pc_cf4, !insn.addr !102

dec_label_pc_d0c:                                 ; preds = %dec_label_pc_cf4, %dec_label_pc_d0c
  %x1.02.reload = load i64, i64* %x1.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %18 = mul i64 %x1.02.reload, 4, !insn.addr !110
  %19 = add i64 %18, %2, !insn.addr !110
  %20 = inttoptr i64 %19 to i32*, !insn.addr !110
  %21 = load i32, i32* %20, align 4, !insn.addr !110
  %22 = add nuw nsw i64 %x1.02.reload, 1, !insn.addr !111
  %23 = add i32 %21, %storemerge3.reload, !insn.addr !103
  %exitcond = icmp eq i64 %22, %1
  store i32 %23, i32* %storemerge3.reg2mem, !insn.addr !112
  store i64 %22, i64* %x1.02.reg2mem, !insn.addr !112
  br i1 %exitcond, label %dec_label_pc_ce8.dec_label_pc_cf0_crit_edge, label %dec_label_pc_d0c, !insn.addr !112

; uselistorder directives
  uselistorder i64 %7, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %storemerge.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge14.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder i64 1, { 4, 5, 6, 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_d0c, { 1, 0 }
  uselistorder label %dec_label_pc_cf4, { 1, 0 }
  uselistorder label %dec_label_pc_cf0, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_d1c:
  %x0.0.reg2mem = alloca i64, !insn.addr !113
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !114
  %1 = inttoptr i64 %0 to i64*, !insn.addr !115
  %2 = load i64, i64* %1, align 8, !insn.addr !115
  %3 = call i64 @param_vectorized_loop(), !insn.addr !116
  %4 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !117
  %5 = inttoptr i64 %4 to i64*, !insn.addr !118
  %6 = load i64, i64* %5, align 8, !insn.addr !118
  %7 = icmp eq i64 %2, %6, !insn.addr !119
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !120
  br i1 %7, label %dec_label_pc_d8c, label %dec_label_pc_d88, !insn.addr !120

dec_label_pc_d88:                                 ; preds = %dec_label_pc_d1c
  call void @__stack_chk_fail(), !insn.addr !121
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_d8c, !insn.addr !121

dec_label_pc_d8c:                                 ; preds = %dec_label_pc_d88, %dec_label_pc_d1c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !122
}

define i64 @param_link_time_optimization() local_unnamed_addr {
dec_label_pc_d94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !123
  %3 = add i64 %2, 10, !insn.addr !124
  %4 = and i64 %3, 4294967294, !insn.addr !124
  ret i64 %4, !insn.addr !125
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_da0:
  ret i64 20, !insn.addr !126
}

define i64 @param_division_by_zero() local_unnamed_addr {
dec_label_pc_da8:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !127
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 2772 to void (i32)*)), !insn.addr !128
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12028 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !129
  %4 = icmp eq i32 %3, 0, !insn.addr !130
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !130
  br i1 %4, label %dec_label_pc_dd8, label %dec_label_pc_de4, !insn.addr !130

dec_label_pc_dd8:                                 ; preds = %dec_label_pc_da8
  %5 = trunc i64 %1 to i32, !insn.addr !131
  %6 = sdiv i32 10, %5, !insn.addr !132
  %7 = zext i32 %6 to i64, !insn.addr !132
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !132
  br label %dec_label_pc_de4, !insn.addr !132

dec_label_pc_de4:                                 ; preds = %dec_label_pc_da8, %dec_label_pc_dd8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !133

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_de4, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_df4:
  %0 = call i64 @param_division_by_zero(), !insn.addr !134
  %1 = call i64 @param_division_by_zero(), !insn.addr !135
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !136
  %3 = add i64 %1, %0, !insn.addr !137
  %4 = and i64 %3, 4294967295, !insn.addr !137
  ret i64 %4, !insn.addr !138

; uselistorder directives
  uselistorder i64 ()* @param_division_by_zero, { 1, 0 }
}

define i64 @param_null_pointer_deref() local_unnamed_addr {
dec_label_pc_e34:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 2804 to void (i32)*)), !insn.addr !139
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12168 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !140
  %4 = icmp eq i32 %3, 0, !insn.addr !141
  %.op = and i64 %1, 4294967295
  %storemerge = select i1 %4, i64 %.op, i64 4294967295
  ret i64 %storemerge, !insn.addr !142

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_e7c:
  %x0.0.reg2mem = alloca i64, !insn.addr !143
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !144
  %1 = inttoptr i64 %0 to i64*, !insn.addr !145
  %2 = load i64, i64* %1, align 8, !insn.addr !145
  %3 = call i64 @param_null_pointer_deref(), !insn.addr !146
  %4 = call i64 @param_null_pointer_deref(), !insn.addr !147
  %5 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !148
  %6 = add i64 %4, %3, !insn.addr !149
  %7 = and i64 %6, 4294967295, !insn.addr !149
  %8 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !150
  %9 = inttoptr i64 %8 to i64*, !insn.addr !151
  %10 = load i64, i64* %9, align 8, !insn.addr !151
  %11 = icmp eq i64 %2, %10, !insn.addr !152
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !153
  br i1 %11, label %dec_label_pc_eec, label %dec_label_pc_ee8, !insn.addr !153

dec_label_pc_ee8:                                 ; preds = %dec_label_pc_e7c
  call void @__stack_chk_fail(), !insn.addr !154
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !154
  br label %dec_label_pc_eec, !insn.addr !154

dec_label_pc_eec:                                 ; preds = %dec_label_pc_ee8, %dec_label_pc_e7c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !155

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 2, 1, 0, 3 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 2, 3, 0, 1, 4 }
  uselistorder i64 ()* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack() local_unnamed_addr {
dec_label_pc_ef8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !156
}

define i64 @param_buffer_overflow_heap() local_unnamed_addr {
dec_label_pc_efc:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !157
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !158
  %3 = icmp eq i64* %2, null, !insn.addr !159
  store i64 4294967294, i64* %storemerge.reg2mem, !insn.addr !159
  br i1 %3, label %dec_label_pc_f20, label %dec_label_pc_f18, !insn.addr !159

dec_label_pc_f18:                                 ; preds = %dec_label_pc_efc
  %4 = and i64 %1, 4294967295, !insn.addr !160
  call void @free(i64* nonnull %2), !insn.addr !161
  store i64 %4, i64* %storemerge.reg2mem, !insn.addr !162
  br label %dec_label_pc_f20, !insn.addr !162

dec_label_pc_f20:                                 ; preds = %dec_label_pc_efc, %dec_label_pc_f18
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !163

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_f20, { 1, 0 }
}

define i64 @call_buffer_overflow(i64 %arg1) local_unnamed_addr {
dec_label_pc_f34:
  %0 = call i64 @param_buffer_overflow_heap(), !insn.addr !164
  %1 = add i64 %0, 10, !insn.addr !165
  %2 = and i64 %1, 4294967295, !insn.addr !165
  ret i64 %2, !insn.addr !166
}

define i64 @param_integer_overflow() local_unnamed_addr {
dec_label_pc_f50:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !167
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !168
  %4 = and i64 %3, 4294967295, !insn.addr !168
  %5 = trunc i64 %1 to i32, !insn.addr !169
  %6 = trunc i64 %2 to i32, !insn.addr !169
  %7 = icmp slt i32 %6, 1, !insn.addr !169
  %8 = icmp slt i32 %5, 1
  %9 = or i1 %8, %7
  br i1 %9, label %dec_label_pc_f70, label %dec_label_pc_f64, !insn.addr !170

dec_label_pc_f64:                                 ; preds = %dec_label_pc_f50
  %10 = trunc i64 %3 to i32, !insn.addr !171
  %11 = icmp slt i32 %10, 0, !insn.addr !171
  %. = select i1 %11, i64 4294967295, i64 %4
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !172
  br label %dec_label_pc_f6c, !insn.addr !172

dec_label_pc_f6c:                                 ; preds = %dec_label_pc_f64, %dec_label_pc_f70, %dec_label_pc_f78
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !173

dec_label_pc_f70:                                 ; preds = %dec_label_pc_f50
  %12 = and i64 %2, %1
  %13 = trunc i64 %12 to i32, !insn.addr !174
  %14 = icmp slt i32 %13, 0, !insn.addr !174
  store i64 %4, i64* %x0.0.reg2mem, !insn.addr !175
  br i1 %14, label %dec_label_pc_f78, label %dec_label_pc_f6c, !insn.addr !175

dec_label_pc_f78:                                 ; preds = %dec_label_pc_f70
  %15 = trunc i64 %3 to i32, !insn.addr !176
  %16 = icmp slt i32 %15, 1
  %17 = select i1 %16, i64 %4, i64 4294967294, !insn.addr !177
  store i64 %17, i64* %x0.0.reg2mem, !insn.addr !178
  br label %dec_label_pc_f6c, !insn.addr !178

; uselistorder directives
  uselistorder i64 %4, { 2, 0, 1 }
  uselistorder i64 %2, { 2, 0, 1 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 2, 3, 4, 5, 0, 6, 1 }
  uselistorder i64 4294967295, { 5, 8, 9, 10, 11, 1, 2, 12, 0, 13, 14, 6, 7, 15, 3, 4, 16, 17 }
  uselistorder label %dec_label_pc_f6c, { 2, 1, 0 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_f88:
  ret i64 2000000000, !insn.addr !179
}

define i64 @param_undefined_behavior() local_unnamed_addr {
dec_label_pc_f94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !180
  %3 = and i64 %2, 4294967294, !insn.addr !180
  ret i64 %3, !insn.addr !181

; uselistorder directives
  uselistorder i64 4294967294, { 1, 2, 0, 3 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_f9c:
  ret i64 10, !insn.addr !182

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 4, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_fa4:
  ret i64 48, !insn.addr !183
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_fac:
  ret i64 48, !insn.addr !184
}

define i64 @test_obf_opt_edge(i64 %arg1) local_unnamed_addr {
dec_label_pc_fb4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1120 to i8*)), !insn.addr !185
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_114d to i8*)), !insn.addr !186
  %2 = sext i32 %1 to i64, !insn.addr !186
  %3 = call i64 @call_opaque_predicate(i64 %2), !insn.addr !187
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1169 to i8*)), !insn.addr !188
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1185 to i8*)), !insn.addr !189
  %6 = call i64 @param_string_encryption(), !insn.addr !190
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11a2 to i8*)), !insn.addr !191
  %8 = call i64 @call_tail_call_optimized(), !insn.addr !192
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11be to i8*)), !insn.addr !193
  %10 = sext i32 %9 to i64, !insn.addr !193
  %11 = call i64 @call_non_tail_call(i64 %10), !insn.addr !194
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11e8 to i8*)), !insn.addr !195
  %13 = call i64 @call_vectorized_loop(), !insn.addr !196
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_120d to i8*)), !insn.addr !197
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1233 to i8*)), !insn.addr !198
  %16 = call i64 @call_division_by_zero(), !insn.addr !199
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1253 to i8*)), !insn.addr !200
  %18 = call i64 @call_null_pointer_deref(), !insn.addr !201
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_126f to i8*)), !insn.addr !202
  %20 = call i64 @call_buffer_overflow(i64 ptrtoint (i32* @0 to i64)), !insn.addr !203
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_128c to i8*)), !insn.addr !204
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12a9 to i8*)), !insn.addr !205
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12da to i8*)), !insn.addr !206
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12f7 to i8*)), !insn.addr !207
  %25 = sext i32 %24 to i64, !insn.addr !207
  ret i64 %25, !insn.addr !207

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 3, 0, 1, 2, 4, 5 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 0, 1, 2, 7, 3, 4, 47, 5, 48, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1108:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !208

; uselistorder directives
  uselistorder i32 1, { 17, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 16, 60, 44, 45, 18, 15, 19, 14, 13, 20, 12, 21, 11, 10, 22, 26, 25, 24, 23, 9, 61, 42, 29, 28, 27, 8, 62, 43, 32, 31, 30, 7, 66, 33, 36, 35, 34, 6, 5, 63, 68, 40, 39, 38, 37, 4, 3, 64, 2, 65, 41, 67, 1, 0 }
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
!38 = !{i64 2796}
!39 = !{i64 2800}
!40 = !{i64 2828}
!41 = !{i64 2832}
!42 = !{i64 2836}
!43 = !{i64 2844}
!44 = !{i64 2848}
!45 = !{i64 2852}
!46 = !{i64 2884}
!47 = !{i64 2856}
!48 = !{i64 2860}
!49 = !{i64 2864}
!50 = !{i64 2868}
!51 = !{i64 2872}
!52 = !{i64 2888}
!53 = !{i64 2896}
!54 = !{i64 2904}
!55 = !{i64 2908}
!56 = !{i64 2912}
!57 = !{i64 2916}
!58 = !{i64 2928}
!59 = !{i64 2940}
!60 = !{i64 2944}
!61 = !{i64 2948}
!62 = !{i64 2956}
!63 = !{i64 2960}
!64 = !{i64 2972}
!65 = !{i64 2976}
!66 = !{i64 2984}
!67 = !{i64 2988}
!68 = !{i64 3020}
!69 = !{i64 3024}
!70 = !{i64 3036}
!71 = !{i64 3040}
!72 = !{i64 3044}
!73 = !{i64 3060}
!74 = !{i64 3068}
!75 = !{i64 3076}
!76 = !{i64 3092}
!77 = !{i64 3108}
!78 = !{i64 3132}
!79 = !{i64 3140}
!80 = !{i64 3144}
!81 = !{i64 3148}
!82 = !{i64 3156}
!83 = !{i64 3164}
!84 = !{i64 3168}
!85 = !{i64 3176}
!86 = !{i64 3180}
!87 = !{i64 3192}
!88 = !{i64 3196}
!89 = !{i64 3200}
!90 = !{i64 3212}
!91 = !{i64 3216}
!92 = !{i64 3220}
!93 = !{i64 3228}
!94 = !{i64 3240}
!95 = !{i64 3244}
!96 = !{i64 3256}
!97 = !{i64 3260}
!98 = !{i64 3264}
!99 = !{i64 3272}
!100 = !{i64 3280}
!101 = !{i64 3284}
!102 = !{i64 3292}
!103 = !{i64 3348}
!104 = !{i64 3312}
!105 = !{i64 3316}
!106 = !{i64 3320}
!107 = !{i64 3324}
!108 = !{i64 3328}
!109 = !{i64 3332}
!110 = !{i64 3340}
!111 = !{i64 3344}
!112 = !{i64 3308}
!113 = !{i64 3356}
!114 = !{i64 3376}
!115 = !{i64 3388}
!116 = !{i64 3432}
!117 = !{i64 3440}
!118 = !{i64 3448}
!119 = !{i64 3452}
!120 = !{i64 3460}
!121 = !{i64 3464}
!122 = !{i64 3472}
!123 = !{i64 3476}
!124 = !{i64 3480}
!125 = !{i64 3484}
!126 = !{i64 3492}
!127 = !{i64 3496}
!128 = !{i64 3520}
!129 = !{i64 3536}
!130 = !{i64 3540}
!131 = !{i64 3512}
!132 = !{i64 3552}
!133 = !{i64 3560}
!134 = !{i64 3588}
!135 = !{i64 3600}
!136 = !{i64 3616}
!137 = !{i64 3620}
!138 = !{i64 3632}
!139 = !{i64 3660}
!140 = !{i64 3676}
!141 = !{i64 3680}
!142 = !{i64 3696}
!143 = !{i64 3708}
!144 = !{i64 3720}
!145 = !{i64 3728}
!146 = !{i64 3752}
!147 = !{i64 3764}
!148 = !{i64 3780}
!149 = !{i64 3788}
!150 = !{i64 3792}
!151 = !{i64 3800}
!152 = !{i64 3804}
!153 = !{i64 3812}
!154 = !{i64 3816}
!155 = !{i64 3828}
!156 = !{i64 3832}
!157 = !{i64 3836}
!158 = !{i64 3856}
!159 = !{i64 3860}
!160 = !{i64 3848}
!161 = !{i64 3864}
!162 = !{i64 3868}
!163 = !{i64 3880}
!164 = !{i64 3904}
!165 = !{i64 3908}
!166 = !{i64 3916}
!167 = !{i64 3920}
!168 = !{i64 3924}
!169 = !{i64 3932}
!170 = !{i64 3936}
!171 = !{i64 3940}
!172 = !{i64 3944}
!173 = !{i64 3948}
!174 = !{i64 3952}
!175 = !{i64 3956}
!176 = !{i64 3960}
!177 = !{i64 3968}
!178 = !{i64 3972}
!179 = !{i64 3984}
!180 = !{i64 3988}
!181 = !{i64 3992}
!182 = !{i64 4000}
!183 = !{i64 4008}
!184 = !{i64 4016}
!185 = !{i64 4036}
!186 = !{i64 4056}
!187 = !{i64 4060}
!188 = !{i64 4080}
!189 = !{i64 4100}
!190 = !{i64 4104}
!191 = !{i64 4124}
!192 = !{i64 4136}
!193 = !{i64 4148}
!194 = !{i64 4152}
!195 = !{i64 4172}
!196 = !{i64 4176}
!197 = !{i64 4196}
!198 = !{i64 4216}
!199 = !{i64 4220}
!200 = !{i64 4240}
!201 = !{i64 4244}
!202 = !{i64 4264}
!203 = !{i64 4268}
!204 = !{i64 4288}
!205 = !{i64 4312}
!206 = !{i64 4332}
!207 = !{i64 4356}
!208 = !{i64 4376}
