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
@div_zero_caught = local_unnamed_addr global i32 0
@jmp_buffer = global i64 0
@segv_buffer = global i64 0
@segv_caught = local_unnamed_addr global i32 0
@global_var_11fe8 = local_unnamed_addr global i64 0
@global_var_1000 = local_unnamed_addr constant i64 -7493991741360439264
@global_var_1330 = local_unnamed_addr constant i64 25769803781
@global_var_1350 = local_unnamed_addr constant i64 12884901892
@0 = external global i32
@global_var_12000 = external global i8*
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

define i32 @main() local_unnamed_addr {
dec_label_pc_980:
  call void @test_obf_opt_edge(), !insn.addr !16
  ret i32 0, !insn.addr !17
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
  %6 = call i64 @__cxa_finalize.5(i64 %5), !insn.addr !33
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

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_ad4:
  store i32 1, i32* @div_zero_caught, align 4, !insn.addr !38
  %0 = call i64 @__longjmp_chk(i64* nonnull @jmp_buffer, i64 1, i64* bitcast (i8** @global_var_12000 to i64*)), !insn.addr !39
  ret void, !insn.addr !39
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_af4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 1, i32* @segv_caught, align 4, !insn.addr !40
  %2 = inttoptr i64 %1 to i64*, !insn.addr !41
  %3 = call i64 @__longjmp_chk(i64* nonnull @segv_buffer, i64 1, i64* %2), !insn.addr !41
  ret void, !insn.addr !41

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

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_b20:
  %x1.0.in1.reg2mem = alloca i32, !insn.addr !44
  %x3.0.in2.reg2mem = alloca i32, !insn.addr !44
  %x3.0.in.lcssa.reg2mem = alloca i32, !insn.addr !44
  %0 = add i32 %x, 1, !insn.addr !45
  %1 = icmp eq i32 %0, 0, !insn.addr !46
  store i32 -1, i32* %x3.0.in.lcssa.reg2mem, !insn.addr !46
  store i32 %x, i32* %x3.0.in2.reg2mem, !insn.addr !46
  store i32 %0, i32* %x1.0.in1.reg2mem, !insn.addr !46
  br i1 %1, label %dec_label_pc_b48, label %dec_label_pc_b64, !insn.addr !46

dec_label_pc_b48:                                 ; preds = %dec_label_pc_b64, %dec_label_pc_b20
  %2 = mul i32 %x, 2, !insn.addr !47
  %3 = mul i32 %0, %0, !insn.addr !48
  %4 = add i32 %x, 2
  %5 = mul i32 %4, %x, !insn.addr !49
  %6 = add i32 %5, 1, !insn.addr !50
  %7 = icmp eq i32 %6, %3, !insn.addr !51
  %x3.0.in.lcssa.reload = load i32, i32* %x3.0.in.lcssa.reg2mem
  %8 = add i32 %2, 10
  %9 = mul i32 %x, 3, !insn.addr !52
  %10 = icmp eq i32 %x3.0.in.lcssa.reload, 1
  %storemerge = icmp eq i1 %7, %10
  %11 = add i32 %9, 20, !insn.addr !53
  %12 = select i1 %storemerge, i32 %8, i32 %11, !insn.addr !54
  ret i32 %12, !insn.addr !55

dec_label_pc_b64:                                 ; preds = %dec_label_pc_b20, %dec_label_pc_b64
  %x1.0.in1.reload = load i32, i32* %x1.0.in1.reg2mem
  %x3.0.in2.reload = load i32, i32* %x3.0.in2.reg2mem
  %13 = srem i32 %x3.0.in2.reload, %x1.0.in1.reload
  %14 = icmp eq i32 %13, 0, !insn.addr !46
  store i32 %x1.0.in1.reload, i32* %x3.0.in.lcssa.reg2mem, !insn.addr !46
  store i32 %x1.0.in1.reload, i32* %x3.0.in2.reg2mem, !insn.addr !46
  store i32 %13, i32* %x1.0.in1.reg2mem, !insn.addr !46
  br i1 %14, label %dec_label_pc_b48, label %dec_label_pc_b64, !insn.addr !46

; uselistorder directives
  uselistorder i32 %x1.0.in1.reload, { 2, 1, 0 }
  uselistorder i32 %0, { 2, 3, 0, 1 }
  uselistorder i32* %x3.0.in.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x3.0.in2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %x1.0.in1.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 3, 2, 4, 1, 0, 5 }
  uselistorder label %dec_label_pc_b64, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_b78:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !56
  ret i32 %0, !insn.addr !56
}

define i64 @param_instruction_substitution() local_unnamed_addr {
dec_label_pc_b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !57
  %3 = urem i32 %2, 16, !insn.addr !58
  %4 = udiv i32 %2, 2, !insn.addr !59
  %reass.mul = mul i32 %2, 21
  %5 = add nuw i32 %3, %4, !insn.addr !60
  %6 = add i32 %5, %reass.mul, !insn.addr !61
  %7 = zext i32 %6 to i64, !insn.addr !61
  ret i64 %7, !insn.addr !62

; uselistorder directives
  uselistorder i32 %2, { 2, 0, 1 }
  uselistorder i32 2, { 1, 2, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_ba4:
  ret i64 225, !insn.addr !63
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i64 %len, i8 %key) local_unnamed_addr {
dec_label_pc_bac:
  %x1.01.reg2mem = alloca i64, !insn.addr !64
  %.reg2mem2 = alloca i8*, !insn.addr !64
  %.reg2mem = alloca i8, !insn.addr !64
  %0 = trunc i64 %len to i32, !insn.addr !65
  %1 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %0), !insn.addr !65
  %2 = ptrtoint i8* %1 to i64, !insn.addr !65
  %3 = add i64 %len, -1, !insn.addr !66
  %4 = add i64 %3, %2, !insn.addr !67
  %5 = inttoptr i64 %4 to i8*, !insn.addr !67
  store i8 0, i8* %5, align 1, !insn.addr !67
  %6 = load i8, i8* %1, align 1, !insn.addr !68
  %7 = icmp eq i8 %6, 0, !insn.addr !69
  store i8 %6, i8* %.reg2mem, !insn.addr !69
  store i8* %1, i8** %.reg2mem2, !insn.addr !69
  store i64 %2, i64* %x1.01.reg2mem, !insn.addr !69
  br i1 %7, label %dec_label_pc_be8, label %dec_label_pc_bf8, !insn.addr !69

dec_label_pc_be8:                                 ; preds = %dec_label_pc_bf8, %dec_label_pc_bac
  ret i8* %1, !insn.addr !70

dec_label_pc_bf8:                                 ; preds = %dec_label_pc_bac, %dec_label_pc_bf8
  %x1.01.reload = load i64, i64* %x1.01.reg2mem
  %.reload3 = load i8*, i8** %.reg2mem2
  %.reload = load i8, i8* %.reg2mem
  %8 = xor i8 %.reload, %key
  store i8 %8, i8* %.reload3, align 1, !insn.addr !71
  %9 = add i64 %x1.01.reload, 1, !insn.addr !71
  %10 = inttoptr i64 %9 to i8*, !insn.addr !68
  %11 = load i8, i8* %10, align 1, !insn.addr !68
  %12 = icmp eq i8 %11, 0, !insn.addr !69
  store i8 %11, i8* %.reg2mem, !insn.addr !69
  store i8* %10, i8** %.reg2mem2, !insn.addr !69
  store i64 %9, i64* %x1.01.reg2mem, !insn.addr !69
  br i1 %12, label %dec_label_pc_be8, label %dec_label_pc_bf8, !insn.addr !69

; uselistorder directives
  uselistorder i8* %1, { 2, 0, 1, 3 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.reg2mem2, { 2, 0, 1 }
  uselistorder i64* %x1.01.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_bf8, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_c04:
  %x0.0.reg2mem = alloca i64, !insn.addr !72
  %stack_var_-32 = alloca i32, align 4
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !73
  %1 = inttoptr i64 %0 to i64*, !insn.addr !74
  %2 = load i64, i64* %1, align 8, !insn.addr !74
  %3 = bitcast i32* %stack_var_-32 to i8*, !insn.addr !75
  %4 = call i8* @decrypt_string(i8* inttoptr (i64 add (i64 ptrtoint (i8** @global_var_12000 to i64), i64 16) to i8*), i8* nonnull %3, i64 32, i8 90), !insn.addr !75
  %5 = call i32 @strlen(i8* nonnull %3), !insn.addr !76
  %6 = load i32, i32* %stack_var_-32, align 4, !insn.addr !77
  %7 = urem i32 %6, 256, !insn.addr !77
  %8 = add i32 %7, %5, !insn.addr !78
  %9 = zext i32 %8 to i64, !insn.addr !78
  %10 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !79
  %11 = inttoptr i64 %10 to i64*, !insn.addr !80
  %12 = load i64, i64* %11, align 8, !insn.addr !80
  %13 = icmp eq i64 %2, %12, !insn.addr !81
  store i64 %9, i64* %x0.0.reg2mem, !insn.addr !82
  br i1 %13, label %dec_label_pc_c70, label %dec_label_pc_c6c, !insn.addr !82

dec_label_pc_c6c:                                 ; preds = %dec_label_pc_c04
  call void @__stack_chk_fail(), !insn.addr !83
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !83
  br label %dec_label_pc_c70, !insn.addr !83

dec_label_pc_c70:                                 ; preds = %dec_label_pc_c6c, %dec_label_pc_c04
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !84
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_c7c:
  %0 = call i64 @param_string_encryption(), !insn.addr !85
  ret i64 %0, !insn.addr !85
}

define i64 @param_tail_call_optimized() local_unnamed_addr {
dec_label_pc_c80:
  %0 = alloca i64
  %x0.0.lcssa.reg2mem = alloca i64, !insn.addr !86
  %x2.03.in.reg2mem = alloca i64, !insn.addr !86
  %x0.04.reg2mem = alloca i64, !insn.addr !86
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %x0.02 = and i64 %1, 4294967295
  %3 = trunc i64 %2 to i32, !insn.addr !87
  %4 = icmp slt i32 %3, 1, !insn.addr !87
  store i64 %x0.02, i64* %x0.04.reg2mem, !insn.addr !87
  store i64 %x0.02, i64* %x0.0.lcssa.reg2mem, !insn.addr !87
  br i1 %4, label %dec_label_pc_c9c, label %dec_label_pc_c90, !insn.addr !87

dec_label_pc_c90:                                 ; preds = %dec_label_pc_c80, %dec_label_pc_c90
  %x2.03.in.reload = load i64, i64* %x2.03.in.reg2mem
  %x0.04.reload = load i64, i64* %x0.04.reg2mem
  %x2.03 = and i64 %x2.03.in.reload, 4294967295
  %5 = add i64 %x2.03.in.reload, %x0.04.reload, !insn.addr !88
  %6 = add nuw nsw i64 %x2.03, 4294967295, !insn.addr !89
  %x0.0 = and i64 %5, 4294967295
  %7 = trunc i64 %6 to i32, !insn.addr !87
  %8 = icmp slt i32 %7, 1, !insn.addr !87
  store i64 %x0.0, i64* %x0.04.reg2mem, !insn.addr !87
  store i64 %6, i64* %x2.03.in.reg2mem, !insn.addr !87
  store i64 %x0.0, i64* %x0.0.lcssa.reg2mem, !insn.addr !87
  br i1 %8, label %dec_label_pc_c9c, label %dec_label_pc_c90, !insn.addr !87

dec_label_pc_c9c:                                 ; preds = %dec_label_pc_c90, %dec_label_pc_c80
  %x0.0.lcssa.reload = load i64, i64* %x0.0.lcssa.reg2mem
  ret i64 %x0.0.lcssa.reload, !insn.addr !90

; uselistorder directives
  uselistorder i64 %x2.03.in.reload, { 1, 0 }
  uselistorder i64* %x0.04.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x2.03.in.reg2mem, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_c90, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_ca0:
  ret i32 500500, !insn.addr !91
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_cac:
  %x0.0.lcssa.reg2mem = alloca i32, !insn.addr !92
  %x0.01.reg2mem = alloca i64, !insn.addr !92
  %x1.02.reg2mem = alloca i64, !insn.addr !92
  %0 = icmp slt i32 %n, 1, !insn.addr !93
  store i32 0, i32* %x0.0.lcssa.reg2mem, !insn.addr !93
  br i1 %0, label %dec_label_pc_cc8, label %dec_label_pc_cbc.lr.ph, !insn.addr !93

dec_label_pc_cbc.lr.ph:                           ; preds = %dec_label_pc_cac
  %1 = zext i32 %n to i64, !insn.addr !92
  store i64 %1, i64* %x1.02.reg2mem
  store i64 0, i64* %x0.01.reg2mem
  br label %dec_label_pc_cbc

dec_label_pc_cbc:                                 ; preds = %dec_label_pc_cbc.lr.ph, %dec_label_pc_cbc
  %x0.01.reload = load i64, i64* %x0.01.reg2mem
  %x1.02.reload = load i64, i64* %x1.02.reg2mem
  %2 = add nuw nsw i64 %x0.01.reload, %x1.02.reload, !insn.addr !94
  %3 = and i64 %2, 4294967295, !insn.addr !94
  %4 = add nuw nsw i64 %x1.02.reload, 4294967295, !insn.addr !95
  %5 = and i64 %4, 4294967295, !insn.addr !95
  %6 = trunc i64 %4 to i32, !insn.addr !93
  %7 = icmp slt i32 %6, 1, !insn.addr !93
  store i64 %5, i64* %x1.02.reg2mem, !insn.addr !93
  store i64 %3, i64* %x0.01.reg2mem, !insn.addr !93
  br i1 %7, label %dec_label_pc_cb4.dec_label_pc_cc8_crit_edge, label %dec_label_pc_cbc, !insn.addr !93

dec_label_pc_cb4.dec_label_pc_cc8_crit_edge:      ; preds = %dec_label_pc_cbc
  %phitmp = trunc i64 %2 to i32
  store i32 %phitmp, i32* %x0.0.lcssa.reg2mem
  br label %dec_label_pc_cc8

dec_label_pc_cc8:                                 ; preds = %dec_label_pc_cb4.dec_label_pc_cc8_crit_edge, %dec_label_pc_cac
  %x0.0.lcssa.reload = load i32, i32* %x0.0.lcssa.reg2mem
  ret i32 %x0.0.lcssa.reload, !insn.addr !96

; uselistorder directives
  uselistorder i64* %x1.02.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %x0.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_cbc, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_ccc:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !97
  ret i32 %0, !insn.addr !97
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_cd4:
  %x1.02.reg2mem = alloca i64, !insn.addr !98
  %storemerge3.reg2mem = alloca i32, !insn.addr !98
  %storemerge14.reg2mem = alloca i64, !insn.addr !98
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !98
  %0 = sext i32 %n to i64
  %1 = ptrtoint i32* %c to i64
  %2 = ptrtoint i32* %b to i64
  %3 = ptrtoint i32* %a to i64
  %4 = icmp sgt i32 %n, 0
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !99
  store i64 0, i64* %storemerge14.reg2mem, !insn.addr !99
  br i1 %4, label %dec_label_pc_cf4, label %dec_label_pc_cf0, !insn.addr !99

dec_label_pc_cf0:                                 ; preds = %dec_label_pc_d0c, %dec_label_pc_cd4
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  ret i32 %storemerge.lcssa.reload, !insn.addr !100

dec_label_pc_cf4:                                 ; preds = %dec_label_pc_cd4, %dec_label_pc_cf4
  %storemerge14.reload = load i64, i64* %storemerge14.reg2mem
  %5 = mul i64 %storemerge14.reload, 4, !insn.addr !101
  %6 = add i64 %5, %3, !insn.addr !101
  %7 = inttoptr i64 %6 to i32*, !insn.addr !101
  %8 = load i32, i32* %7, align 4, !insn.addr !101
  %9 = add i64 %5, %2, !insn.addr !102
  %10 = inttoptr i64 %9 to i32*, !insn.addr !102
  %11 = load i32, i32* %10, align 4, !insn.addr !102
  %12 = add i32 %11, %8, !insn.addr !103
  %13 = add i64 %5, %1, !insn.addr !104
  %14 = inttoptr i64 %13 to i32*, !insn.addr !104
  store i32 %12, i32* %14, align 4, !insn.addr !104
  %15 = add nuw nsw i64 %storemerge14.reload, 1, !insn.addr !105
  %exitcond5 = icmp eq i64 %15, %0
  store i64 %15, i64* %storemerge14.reg2mem, !insn.addr !99
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !99
  store i64 0, i64* %x1.02.reg2mem, !insn.addr !99
  br i1 %exitcond5, label %dec_label_pc_d0c, label %dec_label_pc_cf4, !insn.addr !99

dec_label_pc_d0c:                                 ; preds = %dec_label_pc_cf4, %dec_label_pc_d0c
  %x1.02.reload = load i64, i64* %x1.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %16 = mul i64 %x1.02.reload, 4, !insn.addr !106
  %17 = add i64 %16, %1, !insn.addr !106
  %18 = inttoptr i64 %17 to i32*, !insn.addr !106
  %19 = load i32, i32* %18, align 4, !insn.addr !106
  %20 = add nuw nsw i64 %x1.02.reload, 1, !insn.addr !107
  %21 = add i32 %19, %storemerge3.reload, !insn.addr !108
  %exitcond = icmp eq i64 %20, %0
  store i32 %21, i32* %storemerge.lcssa.reg2mem, !insn.addr !109
  store i32 %21, i32* %storemerge3.reg2mem, !insn.addr !109
  store i64 %20, i64* %x1.02.reg2mem, !insn.addr !109
  br i1 %exitcond, label %dec_label_pc_cf0, label %dec_label_pc_d0c, !insn.addr !109

; uselistorder directives
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i32* %storemerge.lcssa.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge14.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %x1.02.reg2mem, { 2, 0, 1 }
  uselistorder i64 1, { 3, 4, 5, 1, 2, 0 }
  uselistorder label %dec_label_pc_d0c, { 1, 0 }
  uselistorder label %dec_label_pc_cf4, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_d1c:
  %x0.0.reg2mem = alloca i32, !insn.addr !110
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-96 = alloca i64, align 8
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !111
  %1 = inttoptr i64 %0 to i64*, !insn.addr !112
  %2 = load i64, i64* %1, align 8, !insn.addr !112
  store i64 0, i64* %stack_var_-32, align 8, !insn.addr !113
  store i64 4294967298, i64* %stack_var_-96, align 8, !insn.addr !114
  store i64 34359738375, i64* %stack_var_-64, align 8, !insn.addr !115
  %3 = bitcast i64* %stack_var_-96 to i32*, !insn.addr !116
  %4 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !116
  %5 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !116
  %6 = call i32 @param_vectorized_loop(i32* nonnull %3, i32* nonnull %4, i32* nonnull %5, i32 8), !insn.addr !116
  %7 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !117
  %8 = inttoptr i64 %7 to i64*, !insn.addr !118
  %9 = load i64, i64* %8, align 8, !insn.addr !118
  %10 = icmp eq i64 %2, %9, !insn.addr !119
  store i32 %6, i32* %x0.0.reg2mem, !insn.addr !120
  br i1 %10, label %dec_label_pc_d8c, label %dec_label_pc_d88, !insn.addr !120

dec_label_pc_d88:                                 ; preds = %dec_label_pc_d1c
  call void @__stack_chk_fail(), !insn.addr !121
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_d8c, !insn.addr !121

dec_label_pc_d8c:                                 ; preds = %dec_label_pc_d88, %dec_label_pc_d1c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !122
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

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_da8:
  %storemerge.reg2mem = alloca i32, !insn.addr !127
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 2772 to void (i32)*)), !insn.addr !128
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !129
  %2 = icmp eq i32 %1, 0, !insn.addr !130
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !130
  br i1 %2, label %dec_label_pc_dd8, label %dec_label_pc_de4, !insn.addr !130

dec_label_pc_dd8:                                 ; preds = %dec_label_pc_da8
  %3 = sdiv i32 10, %x, !insn.addr !131
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !131
  br label %dec_label_pc_de4, !insn.addr !131

dec_label_pc_de4:                                 ; preds = %dec_label_pc_da8, %dec_label_pc_dd8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !132

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_de4, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_df4:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !133
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !134
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !135
  %3 = add i32 %1, %0, !insn.addr !136
  ret i32 %3, !insn.addr !137

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_e34:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 2804 to void (i32)*)), !insn.addr !138
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !139
  %4 = icmp eq i32 %3, 0, !insn.addr !140
  %5 = trunc i64 %1 to i32
  %narrow = select i1 %4, i32 %5, i32 -1
  ret i32 %narrow, !insn.addr !141

; uselistorder directives
  uselistorder i32 -1, { 2, 0, 1 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_e7c:
  %x0.0.reg2mem = alloca i32, !insn.addr !142
  %stack_var_-4 = alloca i32, align 4
  %0 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !143
  %1 = inttoptr i64 %0 to i64*, !insn.addr !144
  %2 = load i64, i64* %1, align 8, !insn.addr !144
  store i32 42, i32* %stack_var_-4, align 4, !insn.addr !145
  %3 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-4), !insn.addr !146
  %4 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !147
  %5 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !148
  %6 = add i32 %4, %3, !insn.addr !149
  %7 = load i64, i64* @global_var_11fe8, align 8, !insn.addr !150
  %8 = inttoptr i64 %7 to i64*, !insn.addr !151
  %9 = load i64, i64* %8, align 8, !insn.addr !151
  %10 = icmp eq i64 %2, %9, !insn.addr !152
  store i32 %6, i32* %x0.0.reg2mem, !insn.addr !153
  br i1 %10, label %dec_label_pc_eec, label %dec_label_pc_ee8, !insn.addr !153

dec_label_pc_ee8:                                 ; preds = %dec_label_pc_e7c
  call void @__stack_chk_fail(), !insn.addr !154
  store i32 ptrtoint (i32* @0 to i32), i32* %x0.0.reg2mem, !insn.addr !154
  br label %dec_label_pc_eec, !insn.addr !154

dec_label_pc_eec:                                 ; preds = %dec_label_pc_ee8, %dec_label_pc_e7c
  %x0.0.reload = load i32, i32* %x0.0.reg2mem
  ret i32 %x0.0.reload, !insn.addr !155

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 3, 0, 2, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack() local_unnamed_addr {
dec_label_pc_ef8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !156
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_efc:
  %storemerge.reg2mem = alloca i32, !insn.addr !157
  %0 = call i64* @malloc(i32 16), !insn.addr !158
  %1 = icmp eq i64* %0, null, !insn.addr !159
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !159
  br i1 %1, label %dec_label_pc_f20, label %dec_label_pc_f18, !insn.addr !159

dec_label_pc_f18:                                 ; preds = %dec_label_pc_efc
  call void @free(i64* nonnull %0), !insn.addr !160
  store i32 %x, i32* %storemerge.reg2mem, !insn.addr !161
  br label %dec_label_pc_f20, !insn.addr !161

dec_label_pc_f20:                                 ; preds = %dec_label_pc_efc, %dec_label_pc_f18
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !162

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_f20, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_f34:
  %0 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !163
  %1 = add i32 %0, 10, !insn.addr !164
  ret i32 %1, !insn.addr !165

; uselistorder directives
  uselistorder i32 10, { 2, 1, 0 }
}

define i64 @param_integer_overflow() local_unnamed_addr {
dec_label_pc_f50:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !166
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !167
  %4 = and i64 %3, 4294967295, !insn.addr !167
  %5 = trunc i64 %1 to i32, !insn.addr !168
  %6 = trunc i64 %2 to i32, !insn.addr !168
  %7 = icmp slt i32 %6, 1, !insn.addr !168
  %8 = icmp slt i32 %5, 1
  %9 = or i1 %8, %7
  br i1 %9, label %dec_label_pc_f70, label %dec_label_pc_f64, !insn.addr !169

dec_label_pc_f64:                                 ; preds = %dec_label_pc_f50
  %10 = trunc i64 %3 to i32, !insn.addr !170
  %11 = icmp slt i32 %10, 0, !insn.addr !170
  %. = select i1 %11, i64 4294967295, i64 %4
  store i64 %., i64* %x0.0.reg2mem, !insn.addr !171
  br label %dec_label_pc_f6c, !insn.addr !171

dec_label_pc_f6c:                                 ; preds = %dec_label_pc_f64, %dec_label_pc_f70, %dec_label_pc_f78
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !172

dec_label_pc_f70:                                 ; preds = %dec_label_pc_f50
  %12 = and i64 %2, %1
  %13 = trunc i64 %12 to i32, !insn.addr !173
  %14 = icmp slt i32 %13, 0, !insn.addr !173
  store i64 %4, i64* %x0.0.reg2mem, !insn.addr !174
  br i1 %14, label %dec_label_pc_f78, label %dec_label_pc_f6c, !insn.addr !174

dec_label_pc_f78:                                 ; preds = %dec_label_pc_f70
  %15 = trunc i64 %3 to i32, !insn.addr !175
  %16 = icmp slt i32 %15, 1
  %17 = select i1 %16, i64 %4, i64 4294967294, !insn.addr !176
  store i64 %17, i64* %x0.0.reg2mem, !insn.addr !177
  br label %dec_label_pc_f6c, !insn.addr !177

; uselistorder directives
  uselistorder i64 %4, { 2, 0, 1 }
  uselistorder i64 %2, { 2, 0, 1 }
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64* %x0.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 9, 10, 11, 6, 12, 0, 1, 4, 2, 13, 5, 3, 7, 8 }
  uselistorder i64 4294967295, { 2, 4, 5, 6, 7, 3, 8, 0, 1 }
  uselistorder label %dec_label_pc_f6c, { 2, 1, 0 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_f88:
  ret i64 2000000000, !insn.addr !178
}

define i64 @param_undefined_behavior() local_unnamed_addr {
dec_label_pc_f94:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !179
  %3 = and i64 %2, 4294967294, !insn.addr !179
  ret i64 %3, !insn.addr !180
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_f9c:
  ret i64 10, !insn.addr !181

; uselistorder directives
  uselistorder i64 10, { 0, 2, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_fa4:
  ret i64 48, !insn.addr !182
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_fac:
  ret i64 48, !insn.addr !183
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_fb4:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_1120 to i8*)), !insn.addr !184
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_114d to i8*)), !insn.addr !185
  %2 = call i32 @call_opaque_predicate(), !insn.addr !186
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1169 to i8*)), !insn.addr !187
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1185 to i8*)), !insn.addr !188
  %5 = call i64 @param_string_encryption(), !insn.addr !189
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11a2 to i8*)), !insn.addr !190
  %7 = call i32 @call_tail_call_optimized(), !insn.addr !191
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11be to i8*)), !insn.addr !192
  %9 = call i32 @call_non_tail_call(), !insn.addr !193
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_11e8 to i8*)), !insn.addr !194
  %11 = call i32 @call_vectorized_loop(), !insn.addr !195
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_120d to i8*)), !insn.addr !196
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1233 to i8*)), !insn.addr !197
  %14 = call i32 @call_division_by_zero(), !insn.addr !198
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1253 to i8*)), !insn.addr !199
  %16 = call i32 @call_null_pointer_deref(), !insn.addr !200
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_126f to i8*)), !insn.addr !201
  %18 = call i32 @call_buffer_overflow(), !insn.addr !202
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_128c to i8*)), !insn.addr !203
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12a9 to i8*)), !insn.addr !204
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12da to i8*)), !insn.addr !205
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_12f7 to i8*)), !insn.addr !206
  ret void, !insn.addr !206

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 40, 0, 1, 2, 41, 3, 42, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1108:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !207

; uselistorder directives
  uselistorder i32 1, { 10, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 9, 52, 36, 37, 11, 8, 12, 7, 59, 13, 6, 14, 5, 62, 61, 60, 15, 19, 18, 17, 16, 53, 34, 22, 21, 20, 54, 35, 25, 24, 23, 4, 58, 26, 29, 28, 27, 3, 55, 64, 65, 32, 31, 30, 2, 56, 1, 57, 33, 63, 0 }
}

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @__cxa_finalize.5(i64) local_unnamed_addr

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
!52 = !{i64 2896}
!53 = !{i64 2904}
!54 = !{i64 2908}
!55 = !{i64 2912}
!56 = !{i64 2940}
!57 = !{i64 2944}
!58 = !{i64 2948}
!59 = !{i64 2956}
!60 = !{i64 2960}
!61 = !{i64 2972}
!62 = !{i64 2976}
!63 = !{i64 2984}
!64 = !{i64 2988}
!65 = !{i64 3020}
!66 = !{i64 3024}
!67 = !{i64 3036}
!68 = !{i64 3040}
!69 = !{i64 3044}
!70 = !{i64 3060}
!71 = !{i64 3068}
!72 = !{i64 3076}
!73 = !{i64 3092}
!74 = !{i64 3108}
!75 = !{i64 3132}
!76 = !{i64 3140}
!77 = !{i64 3144}
!78 = !{i64 3148}
!79 = !{i64 3156}
!80 = !{i64 3164}
!81 = !{i64 3168}
!82 = !{i64 3176}
!83 = !{i64 3180}
!84 = !{i64 3192}
!85 = !{i64 3196}
!86 = !{i64 3200}
!87 = !{i64 3212}
!88 = !{i64 3216}
!89 = !{i64 3220}
!90 = !{i64 3228}
!91 = !{i64 3240}
!92 = !{i64 3244}
!93 = !{i64 3256}
!94 = !{i64 3260}
!95 = !{i64 3264}
!96 = !{i64 3272}
!97 = !{i64 3280}
!98 = !{i64 3284}
!99 = !{i64 3292}
!100 = !{i64 3312}
!101 = !{i64 3316}
!102 = !{i64 3320}
!103 = !{i64 3324}
!104 = !{i64 3328}
!105 = !{i64 3332}
!106 = !{i64 3340}
!107 = !{i64 3344}
!108 = !{i64 3348}
!109 = !{i64 3308}
!110 = !{i64 3356}
!111 = !{i64 3376}
!112 = !{i64 3388}
!113 = !{i64 3408}
!114 = !{i64 3412}
!115 = !{i64 3428}
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
!131 = !{i64 3552}
!132 = !{i64 3560}
!133 = !{i64 3588}
!134 = !{i64 3600}
!135 = !{i64 3616}
!136 = !{i64 3620}
!137 = !{i64 3632}
!138 = !{i64 3660}
!139 = !{i64 3676}
!140 = !{i64 3680}
!141 = !{i64 3696}
!142 = !{i64 3708}
!143 = !{i64 3720}
!144 = !{i64 3728}
!145 = !{i64 3744}
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
!160 = !{i64 3864}
!161 = !{i64 3868}
!162 = !{i64 3880}
!163 = !{i64 3904}
!164 = !{i64 3908}
!165 = !{i64 3916}
!166 = !{i64 3920}
!167 = !{i64 3924}
!168 = !{i64 3932}
!169 = !{i64 3936}
!170 = !{i64 3940}
!171 = !{i64 3944}
!172 = !{i64 3948}
!173 = !{i64 3952}
!174 = !{i64 3956}
!175 = !{i64 3960}
!176 = !{i64 3968}
!177 = !{i64 3972}
!178 = !{i64 3984}
!179 = !{i64 3988}
!180 = !{i64 3992}
!181 = !{i64 4000}
!182 = !{i64 4008}
!183 = !{i64 4016}
!184 = !{i64 4036}
!185 = !{i64 4056}
!186 = !{i64 4060}
!187 = !{i64 4080}
!188 = !{i64 4100}
!189 = !{i64 4104}
!190 = !{i64 4124}
!191 = !{i64 4136}
!192 = !{i64 4148}
!193 = !{i64 4152}
!194 = !{i64 4172}
!195 = !{i64 4176}
!196 = !{i64 4196}
!197 = !{i64 4216}
!198 = !{i64 4220}
!199 = !{i64 4240}
!200 = !{i64 4244}
!201 = !{i64 4264}
!202 = !{i64 4268}
!203 = !{i64 4288}
!204 = !{i64 4312}
!205 = !{i64 4332}
!206 = !{i64 4356}
!207 = !{i64 4376}
