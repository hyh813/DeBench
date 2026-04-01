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
@global_var_11ff0 = local_unnamed_addr global i64 4424
@global_var_12000 = global i64 0
@global_var_12018 = global i64 0
@global_var_11fd0 = local_unnamed_addr global i64 0
@global_var_11ff8 = local_unnamed_addr global i64 0
@global_var_a74 = local_unnamed_addr constant i64 4107391026002395168
@global_var_12020 = local_unnamed_addr global i64 0
@global_var_12028 = global i64 0
@global_var_12160 = local_unnamed_addr global i64 0
@global_var_12168 = global i64 0
@global_var_11fe8 = local_unnamed_addr global i64 0
@global_var_3e8 = local_unnamed_addr global i64 0
@global_var_13c0 = local_unnamed_addr constant i64 25769803781
@global_var_13e0 = local_unnamed_addr constant i64 12884901892
@0 = external global i32
@global_var_13b0 = local_unnamed_addr constant fp128 0xL00000000000000003BED000000020000
@global_var_13d0 = local_unnamed_addr constant fp128 0xL00000000000000003BF000000000E000
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_1180 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_11b0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_11d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_11f0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_1210 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_1230 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_1260 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_1288 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_12b0 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_12d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_12f0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_1310 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_1330 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_1368 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_1388 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_980:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_11ff0, align 8, !insn.addr !16
  %3 = trunc i64 %arg1 to i32, !insn.addr !17
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !17
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !17
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !17
  call void @abort(), !insn.addr !18
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !18
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_9b4:
  %0 = load i64, i64* inttoptr (i64 73696 to i64*), align 32, !insn.addr !19
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
  ret i64 ptrtoint (i64* @global_var_12018 to i64), !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_a00:
  ret i64 ptrtoint (i64* @global_var_12018 to i64), !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_a40:
  %x0.0.reg2mem = alloca i64, !insn.addr !25
  %0 = load i8, i8* bitcast (i64* @global_var_12018 to i8*), align 8, !insn.addr !26
  %1 = zext i8 %0 to i64, !insn.addr !26
  %2 = icmp eq i8 %0, 0, !insn.addr !27
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !27
  br i1 %2, label %dec_label_pc_a58, label %dec_label_pc_a7c, !insn.addr !27

dec_label_pc_a58:                                 ; preds = %dec_label_pc_a40
  %3 = load i64, i64* inttoptr (i64 73688 to i64*), align 8, !insn.addr !28
  %4 = icmp eq i64 %3, 0, !insn.addr !29
  br i1 %4, label %dec_label_pc_a70, label %dec_label_pc_a64, !insn.addr !29

dec_label_pc_a64:                                 ; preds = %dec_label_pc_a58
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_12000 to i64), i64 8) to i64*), align 8, !insn.addr !30
  %6 = inttoptr i64 %5 to i64*, !insn.addr !31
  call void @__cxa_finalize(i64* %6), !insn.addr !31
  br label %dec_label_pc_a70, !insn.addr !31

dec_label_pc_a70:                                 ; preds = %dec_label_pc_a64, %dec_label_pc_a58
  %7 = call i64 @deregister_tm_clones(), !insn.addr !32
  store i8 1, i8* bitcast (i64* @global_var_12018 to i8*), align 8, !insn.addr !33
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

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_a94:
  store i32 1, i32* bitcast (i64* @global_var_12020 to i32*), align 8, !insn.addr !36
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_12028, i64 1, i64* nonnull @global_var_12000), !insn.addr !37
  ret i64 %0, !insn.addr !37
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_ab4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* bitcast (i64* @global_var_12160 to i32*), align 8, !insn.addr !38
  %2 = inttoptr i64 %1 to i64*, !insn.addr !39
  %3 = call i64 @__longjmp_chk(i64* nonnull @global_var_12168, i64 1, i64* %2), !insn.addr !39
  ret i64 %3, !insn.addr !39

; uselistorder directives
  uselistorder i64 (i64*, i64, i64*)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch() local_unnamed_addr {
dec_label_pc_ad4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !40
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_ad8:
  ret i64 10, !insn.addr !41
}

define i64 @param_opaque_predicate() local_unnamed_addr {
dec_label_pc_ae0:
  %0 = alloca i64
  %storemerge.in.reg2mem = alloca i64, !insn.addr !42
  %x2.0.reg2mem = alloca i64, !insn.addr !42
  %x1.0.reg2mem = alloca i64, !insn.addr !42
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !43
  %3 = trunc i64 %2 to i32, !insn.addr !44
  %4 = icmp eq i32 %3, 0, !insn.addr !45
  br i1 %4, label %dec_label_pc_b2c, label %dec_label_pc_b00, !insn.addr !45

dec_label_pc_b00:                                 ; preds = %dec_label_pc_ae0
  %5 = mul i64 %1, 2, !insn.addr !42
  %6 = and i64 %5, 4294967294, !insn.addr !42
  %7 = trunc i64 %1 to i32, !insn.addr !46
  %8 = mul i32 %7, %7, !insn.addr !46
  %9 = trunc i64 %5 to i32, !insn.addr !46
  %10 = or i32 %9, 1, !insn.addr !46
  %11 = add i32 %10, %8, !insn.addr !47
  %12 = mul i32 %3, %3, !insn.addr !44
  %13 = icmp eq i32 %11, %12, !insn.addr !48
  %14 = and i64 %2, 4294967295, !insn.addr !43
  %15 = and i64 %1, 4294967295, !insn.addr !49
  store i64 %14, i64* %x1.0.reg2mem, !insn.addr !49
  store i64 %15, i64* %x2.0.reg2mem, !insn.addr !49
  br label %dec_label_pc_b04, !insn.addr !49

dec_label_pc_b04:                                 ; preds = %dec_label_pc_b04, %dec_label_pc_b00
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %16 = trunc i64 %x2.0.reload to i32, !insn.addr !50
  %17 = trunc i64 %x1.0.reload to i32, !insn.addr !50
  %18 = srem i32 %16, %17
  %19 = zext i32 %18 to i64, !insn.addr !51
  %20 = icmp eq i32 %18, 0, !insn.addr !52
  store i64 %19, i64* %x1.0.reg2mem, !insn.addr !52
  store i64 %x1.0.reload, i64* %x2.0.reg2mem, !insn.addr !52
  br i1 %20, label %dec_label_pc_b18, label %dec_label_pc_b04, !insn.addr !52

dec_label_pc_b18:                                 ; preds = %dec_label_pc_b04
  %21 = icmp eq i64 %x1.0.reload, 1
  %storemerge1 = icmp eq i1 %13, %21
  br i1 %storemerge1, label %dec_label_pc_b24, label %dec_label_pc_b2c, !insn.addr !53

dec_label_pc_b24:                                 ; preds = %dec_label_pc_b18
  %22 = add nuw nsw i64 %6, 10, !insn.addr !54
  store i64 %22, i64* %storemerge.in.reg2mem, !insn.addr !54
  br label %dec_label_pc_b28, !insn.addr !54

dec_label_pc_b28:                                 ; preds = %dec_label_pc_b2c, %dec_label_pc_b24
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  ret i64 %storemerge, !insn.addr !55

dec_label_pc_b2c:                                 ; preds = %dec_label_pc_b18, %dec_label_pc_ae0
  %23 = mul i64 %1, 3, !insn.addr !56
  %24 = add i64 %23, 20, !insn.addr !57
  store i64 %24, i64* %storemerge.in.reg2mem, !insn.addr !58
  br label %dec_label_pc_b28, !insn.addr !58

; uselistorder directives
  uselistorder i32 %18, { 1, 0 }
  uselistorder i64 %x1.0.reload, { 2, 0, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i32 %3, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 3, 1, 4, 0 }
  uselistorder i64* %x1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x2.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.in.reg2mem, { 2, 0, 1 }
}

define i64 @call_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_b38:
  %0 = call i64 @param_opaque_predicate(), !insn.addr !59
  ret i64 %0, !insn.addr !60
}

define i64 @param_instruction_substitution() local_unnamed_addr {
dec_label_pc_b50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !61
  %3 = udiv i32 %2, 2, !insn.addr !62
  %4 = urem i32 %2, 16, !insn.addr !63
  %reass.mul = mul i32 %2, 21
  %5 = add nuw i32 %4, %3, !insn.addr !64
  %6 = add i32 %5, %reass.mul, !insn.addr !65
  %7 = zext i32 %6 to i64, !insn.addr !65
  ret i64 %7, !insn.addr !66

; uselistorder directives
  uselistorder i32 %2, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_b74:
  ret i64 225, !insn.addr !67
}

define i64 @decrypt_string() local_unnamed_addr {
dec_label_pc_b7c:
  %0 = alloca i64
  %x3.0.reg2mem = alloca i64, !insn.addr !68
  %x2.0.in.reg2mem = alloca i8, !insn.addr !68
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %x1 = alloca i64, align 8
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = inttoptr i64 %3 to i8*, !insn.addr !69
  %6 = inttoptr i64 %4 to i8*, !insn.addr !69
  %7 = trunc i64 %2 to i32, !insn.addr !69
  %8 = call i8* @strncpy(i8* %5, i8* %6, i32 %7), !insn.addr !69
  %9 = add i64 %2, -1, !insn.addr !70
  %10 = add i64 %9, %3, !insn.addr !71
  %11 = inttoptr i64 %10 to i8*, !insn.addr !71
  store i8 0, i8* %11, align 1, !insn.addr !71
  %12 = bitcast i64* %x1 to i8*
  %13 = load i8, i8* %12, align 8, !insn.addr !72
  %14 = icmp eq i8 %13, 0, !insn.addr !73
  br i1 %14, label %dec_label_pc_bc8, label %dec_label_pc_bb8.preheader, !insn.addr !73

dec_label_pc_bb8.preheader:                       ; preds = %dec_label_pc_b7c
  %15 = trunc i64 %1 to i8
  store i8 %13, i8* %x2.0.in.reg2mem
  br label %dec_label_pc_bb8

dec_label_pc_bb8:                                 ; preds = %dec_label_pc_bb8.preheader, %dec_label_pc_bb8
  %x3.0.reload = load i64, i64* %x3.0.reg2mem
  %x2.0.in.reload = load i8, i8* %x2.0.in.reg2mem
  %16 = xor i8 %x2.0.in.reload, %15, !insn.addr !74
  %17 = inttoptr i64 %x3.0.reload to i8*, !insn.addr !74
  store i8 %16, i8* %17, align 1, !insn.addr !74
  %18 = add i64 %x3.0.reload, 1, !insn.addr !75
  %19 = inttoptr i64 %18 to i8*, !insn.addr !75
  %20 = load i8, i8* %19, align 1, !insn.addr !75
  %21 = icmp eq i8 %20, 0, !insn.addr !76
  store i8 %20, i8* %x2.0.in.reg2mem, !insn.addr !76
  store i64 %18, i64* %x3.0.reg2mem, !insn.addr !76
  br i1 %21, label %dec_label_pc_bc8, label %dec_label_pc_bb8, !insn.addr !76

dec_label_pc_bc8:                                 ; preds = %dec_label_pc_bb8, %dec_label_pc_b7c
  ret i64 %3, !insn.addr !77

; uselistorder directives
  uselistorder i64 %x3.0.reload, { 1, 0 }
  uselistorder i64 %3, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i8* %x2.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x3.0.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder i8 0, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_bb8, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_bdc:
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !78
  %1 = inttoptr i64 %0 to i64*, !insn.addr !79
  %2 = load i64, i64* %1, align 8, !insn.addr !79
  %3 = call i64 @decrypt_string(), !insn.addr !80
  %4 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !81
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !81
  %6 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !82
  %7 = inttoptr i64 %6 to i64*, !insn.addr !83
  %8 = load i64, i64* %7, align 8, !insn.addr !83
  %9 = icmp eq i64 %2, %8, !insn.addr !84
  br i1 %9, label %dec_label_pc_c44, label %dec_label_pc_c50, !insn.addr !84

dec_label_pc_c44:                                 ; preds = %dec_label_pc_bdc
  %10 = load i32, i32* %stack_var_-32, align 4, !insn.addr !85
  %11 = urem i32 %10, 256, !insn.addr !85
  %12 = add i32 %11, %5, !insn.addr !86
  %13 = zext i32 %12 to i64, !insn.addr !86
  ret i64 %13, !insn.addr !87

dec_label_pc_c50:                                 ; preds = %dec_label_pc_bdc
  call void @__stack_chk_fail(), !insn.addr !88
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !88
}

define i64 @call_string_encryption(i64 %arg1) local_unnamed_addr {
dec_label_pc_c54:
  %0 = call i64 @param_string_encryption(), !insn.addr !89
  ret i64 %0, !insn.addr !90
}

define i64 @param_tail_call_optimized(i64 %arg1) local_unnamed_addr {
dec_label_pc_c68:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %3 to i32, !insn.addr !91
  %5 = icmp slt i32 %4, 1, !insn.addr !91
  br i1 %5, label %dec_label_pc_c8c, label %dec_label_pc_c70, !insn.addr !91

dec_label_pc_c70:                                 ; preds = %dec_label_pc_c68
  %6 = call i64 @param_tail_call_optimized(i64 %1), !insn.addr !92
  ret i64 %6, !insn.addr !93

dec_label_pc_c8c:                                 ; preds = %dec_label_pc_c68
  %7 = and i64 %2, 4294967295, !insn.addr !94
  ret i64 %7, !insn.addr !95

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @call_tail_call_optimized(i64 %arg1) local_unnamed_addr {
dec_label_pc_c94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_tail_call_optimized(i64 %1), !insn.addr !96
  ret i64 %2, !insn.addr !97

; uselistorder directives
  uselistorder i64 (i64)* @param_tail_call_optimized, { 1, 0 }
}

define i64 @param_non_tail_call() local_unnamed_addr {
dec_label_pc_cb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !98
  %3 = icmp slt i32 %2, 1, !insn.addr !98
  br i1 %3, label %dec_label_pc_ce0, label %dec_label_pc_cb8, !insn.addr !98

dec_label_pc_cb8:                                 ; preds = %dec_label_pc_cb0
  %4 = call i64 @param_non_tail_call(), !insn.addr !99
  %5 = add i64 %4, %1, !insn.addr !100
  %6 = and i64 %5, 4294967295, !insn.addr !100
  ret i64 %6, !insn.addr !101

dec_label_pc_ce0:                                 ; preds = %dec_label_pc_cb0
  ret i64 0, !insn.addr !102

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @call_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_ce8:
  %0 = call i64 @param_non_tail_call(), !insn.addr !103
  ret i64 %0, !insn.addr !104

; uselistorder directives
  uselistorder i64 ()* @param_non_tail_call, { 1, 0 }
}

define i64 @param_vectorized_loop() local_unnamed_addr {
dec_label_pc_d00:
  %0 = alloca i64
  %x0.1.reg2mem = alloca i64, !insn.addr !105
  %x0.0.reg2mem = alloca i32, !insn.addr !105
  %x1.0.reg2mem = alloca i64, !insn.addr !105
  %x4.0.reg2mem = alloca i64, !insn.addr !105
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = trunc i64 %1 to i32, !insn.addr !106
  %6 = icmp slt i32 %5, 1, !insn.addr !106
  store i64 0, i64* %x4.0.reg2mem, !insn.addr !106
  store i64 0, i64* %x0.1.reg2mem, !insn.addr !106
  br i1 %6, label %dec_label_pc_d44, label %dec_label_pc_d0c, !insn.addr !106

dec_label_pc_d0c:                                 ; preds = %dec_label_pc_d00, %dec_label_pc_d0c
  %x4.0.reload = load i64, i64* %x4.0.reg2mem
  %7 = mul i64 %x4.0.reload, 4, !insn.addr !107
  %8 = add i64 %7, %4, !insn.addr !107
  %9 = inttoptr i64 %8 to i32*, !insn.addr !107
  %10 = load i32, i32* %9, align 4, !insn.addr !107
  %11 = add i64 %7, %3, !insn.addr !108
  %12 = inttoptr i64 %11 to i32*, !insn.addr !108
  %13 = load i32, i32* %12, align 4, !insn.addr !108
  %14 = add i32 %13, %10, !insn.addr !109
  %15 = add i64 %7, %2, !insn.addr !110
  %16 = inttoptr i64 %15 to i32*, !insn.addr !110
  store i32 %14, i32* %16, align 4, !insn.addr !110
  %17 = add nuw nsw i64 %x4.0.reload, 1, !insn.addr !111
  %18 = icmp sgt i64 %1, %17, !insn.addr !112
  store i64 %17, i64* %x4.0.reg2mem, !insn.addr !112
  store i64 0, i64* %x1.0.reg2mem, !insn.addr !112
  store i32 0, i32* %x0.0.reg2mem, !insn.addr !112
  br i1 %18, label %dec_label_pc_d0c, label %dec_label_pc_d30, !insn.addr !112

dec_label_pc_d30:                                 ; preds = %dec_label_pc_d0c, %dec_label_pc_d30
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %19 = mul i64 %x1.0.reload, 4, !insn.addr !113
  %20 = add i64 %19, %2, !insn.addr !113
  %21 = inttoptr i64 %20 to i32*, !insn.addr !113
  %22 = load i32, i32* %21, align 4, !insn.addr !113
  %23 = add i32 %22, %x0.0.reload, !insn.addr !114
  %24 = add nuw nsw i64 %x1.0.reload, 1, !insn.addr !115
  %25 = icmp sgt i64 %1, %24, !insn.addr !116
  store i64 %24, i64* %x1.0.reg2mem, !insn.addr !116
  store i32 %23, i32* %x0.0.reg2mem, !insn.addr !116
  br i1 %25, label %dec_label_pc_d30, label %dec_label_pc_d44.loopexit, !insn.addr !116

dec_label_pc_d44.loopexit:                        ; preds = %dec_label_pc_d30
  %26 = zext i32 %23 to i64, !insn.addr !114
  store i64 %26, i64* %x0.1.reg2mem
  br label %dec_label_pc_d44

dec_label_pc_d44:                                 ; preds = %dec_label_pc_d44.loopexit, %dec_label_pc_d00
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  ret i64 %x0.1.reload, !insn.addr !117

; uselistorder directives
  uselistorder i32 %23, { 1, 0 }
  uselistorder i64 %7, { 2, 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %x4.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x0.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 3, 2, 1, 0 }
  uselistorder i64 1, { 5, 6, 7, 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_d30, { 1, 0 }
  uselistorder label %dec_label_pc_d0c, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_d50:
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !118
  %1 = inttoptr i64 %0 to i64*, !insn.addr !119
  %2 = load i64, i64* %1, align 8, !insn.addr !119
  %3 = call i64 @param_vectorized_loop(), !insn.addr !120
  %4 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !121
  %5 = inttoptr i64 %4 to i64*, !insn.addr !122
  %6 = load i64, i64* %5, align 8, !insn.addr !122
  %7 = icmp eq i64 %2, %6, !insn.addr !123
  br i1 %7, label %dec_label_pc_dbc, label %dec_label_pc_dc4, !insn.addr !123

dec_label_pc_dbc:                                 ; preds = %dec_label_pc_d50
  ret i64 %3, !insn.addr !124

dec_label_pc_dc4:                                 ; preds = %dec_label_pc_d50
  call void @__stack_chk_fail(), !insn.addr !125
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !125
}

define i64 @param_link_time_optimization() local_unnamed_addr {
dec_label_pc_dc8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !126
  %3 = add i64 %2, 10, !insn.addr !127
  %4 = and i64 %3, 4294967294, !insn.addr !127
  ret i64 %4, !insn.addr !128
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_dd4:
  ret i64 20, !insn.addr !129
}

define i64 @param_division_by_zero() local_unnamed_addr {
dec_label_pc_ddc:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !130
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 2708 to void (i32)*)), !insn.addr !131
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12028 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !132
  %4 = icmp eq i32 %3, 0, !insn.addr !133
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !133
  br i1 %4, label %dec_label_pc_e0c, label %dec_label_pc_e18, !insn.addr !133

dec_label_pc_e0c:                                 ; preds = %dec_label_pc_ddc
  %5 = trunc i64 %1 to i32, !insn.addr !134
  %6 = sdiv i32 10, %5, !insn.addr !135
  %7 = zext i32 %6 to i64, !insn.addr !135
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !135
  br label %dec_label_pc_e18, !insn.addr !135

dec_label_pc_e18:                                 ; preds = %dec_label_pc_ddc, %dec_label_pc_e0c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !136

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_e18, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_e28:
  %0 = call i64 @param_division_by_zero(), !insn.addr !137
  %1 = call i64 @param_division_by_zero(), !insn.addr !138
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !139
  %3 = add i64 %1, %0, !insn.addr !140
  %4 = and i64 %3, 4294967295, !insn.addr !140
  ret i64 %4, !insn.addr !141

; uselistorder directives
  uselistorder i64 ()* @param_division_by_zero, { 1, 0 }
}

define i64 @param_null_pointer_deref() local_unnamed_addr {
dec_label_pc_e68:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 2740 to void (i32)*)), !insn.addr !142
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_12168 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !143
  %4 = icmp eq i32 %3, 0, !insn.addr !144
  %.op = and i64 %1, 4294967295
  %storemerge = select i1 %4, i64 %.op, i64 4294967295
  ret i64 %storemerge, !insn.addr !145

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_eb0:
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !146
  %1 = inttoptr i64 %0 to i64*, !insn.addr !147
  %2 = load i64, i64* %1, align 8, !insn.addr !147
  %3 = call i64 @param_null_pointer_deref(), !insn.addr !148
  %4 = call i64 @param_null_pointer_deref(), !insn.addr !149
  %5 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !150
  %6 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !151
  %7 = inttoptr i64 %6 to i64*, !insn.addr !152
  %8 = load i64, i64* %7, align 8, !insn.addr !152
  %9 = icmp eq i64 %2, %8, !insn.addr !153
  br i1 %9, label %dec_label_pc_f1c, label %dec_label_pc_f28, !insn.addr !153

dec_label_pc_f1c:                                 ; preds = %dec_label_pc_eb0
  %10 = add i64 %4, %3, !insn.addr !154
  %11 = and i64 %10, 4294967295, !insn.addr !154
  ret i64 %11, !insn.addr !155

dec_label_pc_f28:                                 ; preds = %dec_label_pc_eb0
  call void @__stack_chk_fail(), !insn.addr !156
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !156

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 2, 1, 0, 3 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 ()* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack() local_unnamed_addr {
dec_label_pc_f2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !157
}

define i64 @param_buffer_overflow_heap() local_unnamed_addr {
dec_label_pc_f30:
  %0 = alloca i64
  %x19.0.reg2mem = alloca i64, !insn.addr !158
  %1 = load i64, i64* %0
  %2 = call i64* @malloc(i32 16), !insn.addr !159
  %3 = icmp eq i64* %2, null, !insn.addr !160
  store i64 4294967294, i64* %x19.0.reg2mem, !insn.addr !160
  br i1 %3, label %dec_label_pc_f5c, label %dec_label_pc_f50.preheader, !insn.addr !160

dec_label_pc_f50.preheader:                       ; preds = %dec_label_pc_f30
  %4 = and i64 %1, 4294967295, !insn.addr !161
  call void @free(i64* nonnull %2), !insn.addr !162
  store i64 %4, i64* %x19.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_f5c, !insn.addr !162

dec_label_pc_f5c:                                 ; preds = %dec_label_pc_f30, %dec_label_pc_f50.preheader
  %x19.0.reload = load i64, i64* %x19.0.reg2mem
  ret i64 %x19.0.reload, !insn.addr !163

; uselistorder directives
  uselistorder i64* %x19.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_f5c, { 1, 0 }
}

define i64 @call_buffer_overflow(i64 %arg1) local_unnamed_addr {
dec_label_pc_f74:
  %0 = call i64 @param_buffer_overflow_heap(), !insn.addr !164
  %1 = add i64 %0, 10, !insn.addr !165
  %2 = and i64 %1, 4294967295, !insn.addr !165
  ret i64 %2, !insn.addr !166
}

define i64 @param_integer_overflow() local_unnamed_addr {
dec_label_pc_f90:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !167
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !168
  %4 = trunc i64 %1 to i32, !insn.addr !169
  %5 = trunc i64 %2 to i32, !insn.addr !169
  %6 = icmp slt i32 %5, 1, !insn.addr !169
  %7 = icmp slt i32 %4, 1
  %8 = or i1 %7, %6
  %.pre = trunc i64 %3 to i32
  %9 = icmp slt i32 %.pre, 0, !insn.addr !170
  %phitmp = icmp eq i1 %9, false
  %or.cond = or i1 %8, %phitmp
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !170
  br i1 %or.cond, label %dec_label_pc_fa8, label %dec_label_pc_fb8, !insn.addr !170

dec_label_pc_fa8:                                 ; preds = %dec_label_pc_f90
  %10 = and i64 %3, 4294967295, !insn.addr !168
  %11 = and i64 %2, %1
  %12 = trunc i64 %11 to i32, !insn.addr !171
  %13 = icmp sgt i32 %12, -1, !insn.addr !171
  %14 = icmp slt i32 %.pre, 1
  %15 = or i1 %14, %13
  %16 = select i1 %15, i64 %10, i64 4294967294, !insn.addr !172
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !172
  br label %dec_label_pc_fb8, !insn.addr !172

dec_label_pc_fb8:                                 ; preds = %dec_label_pc_f90, %dec_label_pc_fa8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !173

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 2, 0, 1 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4294967295, { 4, 0, 5, 6, 7, 2, 3, 8, 1, 9, 10, 11, 12, 13 }
  uselistorder i32 0, { 1, 2, 3, 0, 4, 5 }
  uselistorder label %dec_label_pc_fb8, { 1, 0 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_fc4:
  ret i64 2000000000, !insn.addr !174
}

define i64 @param_undefined_behavior() local_unnamed_addr {
dec_label_pc_fd0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !175
  %3 = and i64 %2, 4294967294, !insn.addr !175
  ret i64 %3, !insn.addr !176

; uselistorder directives
  uselistorder i64 4294967294, { 1, 2, 0, 3, 4 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_fd8:
  ret i64 10, !insn.addr !177

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 4, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_fe0:
  ret i64 48, !insn.addr !178
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_fe8:
  ret i64 48, !insn.addr !179
}

define i64 @test_obf_opt_edge(i64 %arg1) local_unnamed_addr {
dec_label_pc_ff0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1180 to i8*)), !insn.addr !180
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11b0 to i8*)), !insn.addr !181
  %2 = call i64 @call_opaque_predicate(i64 ptrtoint (i32* @0 to i64)), !insn.addr !182
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11d0 to i8*)), !insn.addr !183
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11f0 to i8*)), !insn.addr !184
  %5 = call i64 @param_string_encryption(), !insn.addr !185
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1210 to i8*)), !insn.addr !186
  %7 = call i64 @call_tail_call_optimized(i64 ptrtoint (i32* @0 to i64)), !insn.addr !187
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1230 to i8*)), !insn.addr !188
  %9 = call i64 @call_non_tail_call(i64 ptrtoint (i32* @0 to i64)), !insn.addr !189
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1260 to i8*)), !insn.addr !190
  %11 = call i64 @call_vectorized_loop(), !insn.addr !191
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1288 to i8*)), !insn.addr !192
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12b0 to i8*)), !insn.addr !193
  %14 = call i64 @call_division_by_zero(), !insn.addr !194
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12d0 to i8*)), !insn.addr !195
  %16 = call i64 @call_null_pointer_deref(), !insn.addr !196
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12f0 to i8*)), !insn.addr !197
  %18 = call i64 @call_buffer_overflow(i64 ptrtoint (i32* @0 to i64)), !insn.addr !198
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1310 to i8*)), !insn.addr !199
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1330 to i8*)), !insn.addr !200
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1368 to i8*)), !insn.addr !201
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1388 to i8*)), !insn.addr !202
  %23 = sext i32 %22 to i64, !insn.addr !202
  ret i64 %23, !insn.addr !203

; uselistorder directives
  uselistorder i64 ()* @param_string_encryption, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1148:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @test_obf_opt_edge(i64 %1), !insn.addr !204
  ret i64 0, !insn.addr !205

; uselistorder directives
  uselistorder i64 0, { 3, 1, 0, 2, 4, 46, 5, 47, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !206

; uselistorder directives
  uselistorder i32 1, { 18, 17, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 16, 33, 34, 35, 19, 15, 20, 14, 13, 12, 21, 11, 10, 50, 25, 24, 23, 22, 9, 51, 8, 7, 52, 6, 56, 55, 27, 26, 5, 4, 32, 30, 29, 28, 3, 2, 53, 1, 54, 31, 57, 0 }
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
!36 = !{i64 2728}
!37 = !{i64 2736}
!38 = !{i64 2760}
!39 = !{i64 2768}
!40 = !{i64 2772}
!41 = !{i64 2780}
!42 = !{i64 2784}
!43 = !{i64 2788}
!44 = !{i64 2800}
!45 = !{i64 2812}
!46 = !{i64 2792}
!47 = !{i64 2796}
!48 = !{i64 2804}
!49 = !{i64 2816}
!50 = !{i64 2824}
!51 = !{i64 2828}
!52 = !{i64 2836}
!53 = !{i64 2848}
!54 = !{i64 2852}
!55 = !{i64 2856}
!56 = !{i64 2860}
!57 = !{i64 2864}
!58 = !{i64 2868}
!59 = !{i64 2884}
!60 = !{i64 2892}
!61 = !{i64 2896}
!62 = !{i64 2904}
!63 = !{i64 2908}
!64 = !{i64 2912}
!65 = !{i64 2924}
!66 = !{i64 2928}
!67 = !{i64 2936}
!68 = !{i64 2940}
!69 = !{i64 2976}
!70 = !{i64 2980}
!71 = !{i64 2984}
!72 = !{i64 2988}
!73 = !{i64 2992}
!74 = !{i64 3004}
!75 = !{i64 3008}
!76 = !{i64 3012}
!77 = !{i64 3032}
!78 = !{i64 3052}
!79 = !{i64 3056}
!80 = !{i64 3092}
!81 = !{i64 3100}
!82 = !{i64 3116}
!83 = !{i64 3124}
!84 = !{i64 3136}
!85 = !{i64 3104}
!86 = !{i64 3108}
!87 = !{i64 3148}
!88 = !{i64 3152}
!89 = !{i64 3164}
!90 = !{i64 3172}
!91 = !{i64 3180}
!92 = !{i64 3200}
!93 = !{i64 3208}
!94 = !{i64 3212}
!95 = !{i64 3216}
!96 = !{i64 3236}
!97 = !{i64 3244}
!98 = !{i64 3252}
!99 = !{i64 3276}
!100 = !{i64 3280}
!101 = !{i64 3292}
!102 = !{i64 3300}
!103 = !{i64 3316}
!104 = !{i64 3324}
!105 = !{i64 3328}
!106 = !{i64 3332}
!107 = !{i64 3340}
!108 = !{i64 3344}
!109 = !{i64 3348}
!110 = !{i64 3352}
!111 = !{i64 3356}
!112 = !{i64 3364}
!113 = !{i64 3376}
!114 = !{i64 3380}
!115 = !{i64 3384}
!116 = !{i64 3392}
!117 = !{i64 3396}
!118 = !{i64 3420}
!119 = !{i64 3424}
!120 = !{i64 3484}
!121 = !{i64 3492}
!122 = !{i64 3500}
!123 = !{i64 3512}
!124 = !{i64 3520}
!125 = !{i64 3524}
!126 = !{i64 3528}
!127 = !{i64 3532}
!128 = !{i64 3536}
!129 = !{i64 3544}
!130 = !{i64 3548}
!131 = !{i64 3572}
!132 = !{i64 3588}
!133 = !{i64 3592}
!134 = !{i64 3556}
!135 = !{i64 3604}
!136 = !{i64 3612}
!137 = !{i64 3640}
!138 = !{i64 3652}
!139 = !{i64 3668}
!140 = !{i64 3672}
!141 = !{i64 3684}
!142 = !{i64 3712}
!143 = !{i64 3728}
!144 = !{i64 3732}
!145 = !{i64 3748}
!146 = !{i64 3776}
!147 = !{i64 3780}
!148 = !{i64 3804}
!149 = !{i64 3816}
!150 = !{i64 3832}
!151 = !{i64 3844}
!152 = !{i64 3852}
!153 = !{i64 3864}
!154 = !{i64 3836}
!155 = !{i64 3876}
!156 = !{i64 3880}
!157 = !{i64 3884}
!158 = !{i64 3888}
!159 = !{i64 3908}
!160 = !{i64 3912}
!161 = !{i64 3900}
!162 = !{i64 3928}
!163 = !{i64 3944}
!164 = !{i64 3968}
!165 = !{i64 3972}
!166 = !{i64 3980}
!167 = !{i64 3984}
!168 = !{i64 3988}
!169 = !{i64 3996}
!170 = !{i64 4000}
!171 = !{i64 4008}
!172 = !{i64 4020}
!173 = !{i64 4024}
!174 = !{i64 4044}
!175 = !{i64 4048}
!176 = !{i64 4052}
!177 = !{i64 4060}
!178 = !{i64 4068}
!179 = !{i64 4076}
!180 = !{i64 4096}
!181 = !{i64 4116}
!182 = !{i64 4120}
!183 = !{i64 4140}
!184 = !{i64 4160}
!185 = !{i64 4164}
!186 = !{i64 4184}
!187 = !{i64 4188}
!188 = !{i64 4208}
!189 = !{i64 4212}
!190 = !{i64 4232}
!191 = !{i64 4236}
!192 = !{i64 4256}
!193 = !{i64 4276}
!194 = !{i64 4280}
!195 = !{i64 4300}
!196 = !{i64 4304}
!197 = !{i64 4324}
!198 = !{i64 4328}
!199 = !{i64 4348}
!200 = !{i64 4372}
!201 = !{i64 4392}
!202 = !{i64 4412}
!203 = !{i64 4420}
!204 = !{i64 4432}
!205 = !{i64 4444}
!206 = !{i64 4464}
