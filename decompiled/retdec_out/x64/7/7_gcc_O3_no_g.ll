source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_4140 = global i64 0
@global_var_4128 = local_unnamed_addr global i64 0
@global_var_4060 = global i64 0
@global_var_4040 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4020 = local_unnamed_addr global i8 0
@1 = internal constant [5 x i8] c"\1A+<M\00"
@global_var_4010 = global i8* getelementptr inbounds ([5 x i8], [5 x i8]* @1, i64 0, i64 0)
@global_var_2230 = external local_unnamed_addr constant i128
@global_var_2220 = external local_unnamed_addr constant i128
@2 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2008 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2137 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2153 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_216f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_218c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_2038 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_2068 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @8, i64 0, i64 0)
@9 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2090 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @9, i64 0, i64 0)
@10 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_20b8 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_21c4 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_21e1 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_20d8 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21fe = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_2110 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @16, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 16360 to i64*), align 8, !insn.addr !1
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

define void @function_10d0(i64* %d) local_unnamed_addr {
dec_label_pc_10d0:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define void @function_10e0(i64* %ptr) local_unnamed_addr {
dec_label_pc_10e0:
  call void @free(i64* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define i8* @function_10f0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_1100(i8* %s) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @puts(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1110(i8* %s) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_1120() local_unnamed_addr {
dec_label_pc_1120:
  call void @__stack_chk_fail(), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @function_1130([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void (i32)* @function_1140(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !13
  ret void (i32)* %0, !insn.addr !13
}

define i64* @function_1150(i32 %size) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i64* @malloc(i32 %size), !insn.addr !14
  ret i64* %0, !insn.addr !14
}

define i32 @function_1160(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i64 @function_1170(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i64 @__longjmp_chk(i64* %arg1, i64 %arg2), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !17
  ret i64 0, !insn.addr !18
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_11a0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !19
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !19
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !19
  %3 = call i32 @__libc_start_main(i64 4480, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !19
  %4 = call i64 @__asm_hlt(), !insn.addr !20
  unreachable, !insn.addr !20
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11d0:
  ret i64 16408, !insn.addr !21
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1200:
  ret i64 0, !insn.addr !22
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1240:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_4020, align 1, !insn.addr !23
  %3 = icmp eq i8 %2, 0, !insn.addr !23
  %4 = icmp eq i1 %3, false, !insn.addr !24
  br i1 %4, label %dec_label_pc_1278, label %dec_label_pc_124d, !insn.addr !24

dec_label_pc_124d:                                ; preds = %dec_label_pc_1240
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !25
  %6 = icmp eq i64 %5, 0, !insn.addr !25
  br i1 %6, label %dec_label_pc_1267, label %dec_label_pc_125b, !insn.addr !26

dec_label_pc_125b:                                ; preds = %dec_label_pc_124d
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !27
  %8 = inttoptr i64 %7 to i64*, !insn.addr !28
  call void @__cxa_finalize(i64* %8), !insn.addr !28
  br label %dec_label_pc_1267, !insn.addr !28

dec_label_pc_1267:                                ; preds = %dec_label_pc_125b, %dec_label_pc_124d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !29
  store i8 1, i8* @global_var_4020, align 1, !insn.addr !30
  ret i64 %9, !insn.addr !31

dec_label_pc_1278:                                ; preds = %dec_label_pc_1240
  ret i64 %1, !insn.addr !32

; uselistorder directives
  uselistorder i8* @global_var_4020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1280:
  %0 = call i64 @register_tm_clones(), !insn.addr !33
  ret i64 %0, !insn.addr !33
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_1290:
  store i32 1, i32* bitcast (i64* @global_var_4128 to i32*), align 8, !insn.addr !34
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4140, i64 1), !insn.addr !35
  ret i64 %0, !insn.addr !35
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_12c0:
  store i32 1, i32* bitcast (i64* @global_var_4040 to i32*), align 8, !insn.addr !36
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4060, i64 1), !insn.addr !37
  ret i64 %0, !insn.addr !37

; uselistorder directives
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_division_by_zero.constprop.0() local_unnamed_addr {
dec_label_pc_12f0:
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4752 to void (i32)*)), !insn.addr !38
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4140 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !39
  ret i64 4294967295, !insn.addr !40
}

define i64 @param_division_by_zero.constprop.1() local_unnamed_addr {
dec_label_pc_1330:
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4752 to void (i32)*)), !insn.addr !41
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4140 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !42
  %2 = icmp eq i32 %1, 0, !insn.addr !43
  %3 = select i1 %2, i64 2, i64 4294967295, !insn.addr !44
  ret i64 %3, !insn.addr !45
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = and i64 %arg1, 4294967295, !insn.addr !46
  ret i64 %0, !insn.addr !47
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1380:
  ret i64 10, !insn.addr !48
}

define i64 @param_opaque_predicate(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1390:
  %rdx.0.in.reg2mem = alloca i64, !insn.addr !49
  %rax.0.reg2mem = alloca i64, !insn.addr !49
  %0 = add i64 %arg1, 1, !insn.addr !50
  %1 = mul i64 %arg1, 2, !insn.addr !51
  %2 = trunc i64 %0 to i32, !insn.addr !52
  %3 = icmp eq i32 %2, 0, !insn.addr !52
  br i1 %3, label %dec_label_pc_13d8, label %dec_label_pc_13b2, !insn.addr !53

dec_label_pc_13b2:                                ; preds = %dec_label_pc_1390
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !54
  %5 = mul nsw i64 %4, %4, !insn.addr !54
  %6 = or i64 %1, 1, !insn.addr !55
  %7 = add i64 %5, %6, !insn.addr !55
  %8 = trunc i64 %7 to i32, !insn.addr !55
  %sext2 = mul i64 %0, 4294967296
  %9 = ashr exact i64 %sext2, 32, !insn.addr !56
  %10 = mul nsw i64 %9, %9, !insn.addr !56
  %11 = trunc i64 %10 to i32, !insn.addr !56
  %12 = icmp eq i32 %8, %11, !insn.addr !57
  %13 = and i64 %arg1, 4294967295, !insn.addr !58
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !59
  store i64 %0, i64* %rdx.0.in.reg2mem, !insn.addr !59
  br label %dec_label_pc_13b8, !insn.addr !59

dec_label_pc_13b8:                                ; preds = %dec_label_pc_13b8, %dec_label_pc_13b2
  %rdx.0.in.reload = load i64, i64* %rdx.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rdx.0 = and i64 %rdx.0.in.reload, 4294967295
  %14 = trunc i64 %rax.0.reload to i32, !insn.addr !60
  %15 = ashr i32 %14, 31, !insn.addr !60
  %16 = zext i32 %15 to i64, !insn.addr !61
  %17 = mul i64 %16, 4294967296, !insn.addr !61
  %18 = or i64 %17, %rax.0.reload, !insn.addr !61
  %19 = srem i64 %18, %rdx.0, !insn.addr !61
  %20 = trunc i64 %19 to i32, !insn.addr !62
  %21 = icmp eq i32 %20, 0, !insn.addr !62
  %22 = icmp eq i1 %21, false, !insn.addr !63
  store i64 %rdx.0, i64* %rax.0.reg2mem, !insn.addr !63
  store i64 %19, i64* %rdx.0.in.reg2mem, !insn.addr !63
  br i1 %22, label %dec_label_pc_13b8, label %dec_label_pc_13c3, !insn.addr !63

dec_label_pc_13c3:                                ; preds = %dec_label_pc_13b8
  %23 = trunc i64 %rdx.0.in.reload to i32, !insn.addr !64
  %24 = icmp eq i32 %23, 1, !insn.addr !64
  %25 = icmp eq i1 %12, %24
  br i1 %25, label %dec_label_pc_13cd, label %dec_label_pc_13d8, !insn.addr !65

dec_label_pc_13cd:                                ; preds = %dec_label_pc_13c3
  %26 = add i64 %1, 10, !insn.addr !66
  %27 = and i64 %26, 4294967294, !insn.addr !66
  ret i64 %27, !insn.addr !67

dec_label_pc_13d8:                                ; preds = %dec_label_pc_13c3, %dec_label_pc_1390
  %28 = add i64 %arg1, 20, !insn.addr !68
  %29 = add i64 %28, %1, !insn.addr !68
  %30 = and i64 %29, 4294967295, !insn.addr !68
  ret i64 %30, !insn.addr !69

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.in.reload, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 3, 2, 0, 1, 4 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_13e0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !70
  %rax.0.reg2mem = alloca i64, !insn.addr !70
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !71
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !71
  br label %dec_label_pc_13f0, !insn.addr !71

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13f0, %dec_label_pc_13e0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = trunc i64 %rax.0.reload to i32, !insn.addr !72
  %1 = ashr i32 %0, 31, !insn.addr !72
  %2 = zext i32 %1 to i64, !insn.addr !73
  %3 = mul i64 %2, 4294967296, !insn.addr !73
  %4 = or i64 %3, %rax.0.reload, !insn.addr !73
  %5 = srem i64 %4, %rdx.0.reload, !insn.addr !73
  %6 = and i64 %5, 4294967295, !insn.addr !73
  %7 = trunc i64 %5 to i32, !insn.addr !74
  %8 = icmp eq i32 %7, 0, !insn.addr !74
  %9 = icmp eq i1 %8, false, !insn.addr !75
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !75
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !75
  br i1 %9, label %dec_label_pc_13f0, label %dec_label_pc_13fb, !insn.addr !75

dec_label_pc_13fb:                                ; preds = %dec_label_pc_13f0
  %10 = icmp eq i64 %rdx.0.reload, 1, !insn.addr !76
  %11 = icmp eq i1 %10, false, !insn.addr !77
  %12 = select i1 %11, i64 35, i64 20, !insn.addr !77
  ret i64 %12, !insn.addr !78

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %0 = trunc i64 %arg1 to i32
  %1 = udiv i32 %0, 2, !insn.addr !79
  %2 = urem i32 %0, 16, !insn.addr !80
  %reass.mul = mul i32 %0, 21
  %3 = add nuw i32 %2, %1, !insn.addr !81
  %4 = add i32 %3, %reass.mul, !insn.addr !82
  %5 = zext i32 %4 to i64, !insn.addr !82
  ret i64 %5, !insn.addr !83

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1430:
  ret i64 225, !insn.addr !84
}

define i64 @decrypt_string(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1440:
  %rdx.0.reg2mem = alloca i64, !insn.addr !85
  %rax.0.in.reg2mem = alloca i8, !insn.addr !85
  %0 = inttoptr i64 %arg2 to i8*, !insn.addr !86
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !86
  %2 = trunc i64 %arg3 to i32, !insn.addr !86
  %3 = call i8* @strncpy(i8* %0, i8* %1, i32 %2), !insn.addr !86
  %4 = ptrtoint i8* %3 to i64, !insn.addr !86
  %5 = add i64 %arg3, -1, !insn.addr !87
  %6 = add i64 %5, %4, !insn.addr !87
  %7 = inttoptr i64 %6 to i8*, !insn.addr !87
  store i8 0, i8* %7, align 1, !insn.addr !87
  %8 = load i8, i8* %3, align 1, !insn.addr !88
  %9 = icmp eq i8 %8, 0, !insn.addr !89
  br i1 %9, label %dec_label_pc_1480, label %dec_label_pc_1470.preheader, !insn.addr !90

dec_label_pc_1470.preheader:                      ; preds = %dec_label_pc_1440
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %rax.0.in.reg2mem
  store i64 %4, i64* %rdx.0.reg2mem
  br label %dec_label_pc_1470

dec_label_pc_1470:                                ; preds = %dec_label_pc_1470.preheader, %dec_label_pc_1470
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.in.reload = load i8, i8* %rax.0.in.reg2mem
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !91
  %12 = xor i8 %rax.0.in.reload, %10, !insn.addr !92
  %13 = inttoptr i64 %rdx.0.reload to i8*, !insn.addr !92
  store i8 %12, i8* %13, align 1, !insn.addr !92
  %14 = inttoptr i64 %11 to i8*, !insn.addr !93
  %15 = load i8, i8* %14, align 1, !insn.addr !93
  %16 = icmp eq i8 %15, 0, !insn.addr !94
  %17 = icmp eq i1 %16, false, !insn.addr !95
  store i8 %15, i8* %rax.0.in.reg2mem, !insn.addr !95
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !95
  br i1 %17, label %dec_label_pc_1470, label %dec_label_pc_1480, !insn.addr !95

dec_label_pc_1480:                                ; preds = %dec_label_pc_1470, %dec_label_pc_1440
  ret i64 %4, !insn.addr !96

; uselistorder directives
  uselistorder i64 %4, { 2, 0, 1 }
  uselistorder i8* %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1470, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1490:
  %rbx.1.reg2mem = alloca i64, !insn.addr !97
  %rbx.0.reg2mem = alloca i64, !insn.addr !97
  %rax.0.reg2mem = alloca i64, !insn.addr !97
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !98
  %1 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !99
  %2 = call i8* @strncpy(i8* nonnull %1, i8* inttoptr (i64 16400 to i8*), i32 31), !insn.addr !99
  %3 = load i32, i32* %stack_var_-56, align 4, !insn.addr !100
  %4 = zext i32 %3 to i64, !insn.addr !100
  %sext = mul i64 %4, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !100
  %6 = trunc i64 %5 to i8, !insn.addr !101
  %7 = icmp eq i8 %6, 0, !insn.addr !101
  store i64 %5, i64* %rbx.1.reg2mem, !insn.addr !102
  br i1 %7, label %dec_label_pc_14e5, label %dec_label_pc_14d0.preheader, !insn.addr !102

dec_label_pc_14d0.preheader:                      ; preds = %dec_label_pc_1490
  %8 = ptrtoint i8* %2 to i64, !insn.addr !99
  store i64 %8, i64* %rax.0.reg2mem
  store i64 %5, i64* %rbx.0.reg2mem
  br label %dec_label_pc_14d0

dec_label_pc_14d0:                                ; preds = %dec_label_pc_14d0.preheader, %dec_label_pc_14d0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = trunc i64 %rbx.0.reload to i8, !insn.addr !103
  %10 = xor i8 %9, 90, !insn.addr !103
  %11 = add i64 %rax.0.reload, 1, !insn.addr !104
  %12 = inttoptr i64 %rax.0.reload to i8*, !insn.addr !105
  store i8 %10, i8* %12, align 1, !insn.addr !105
  %13 = inttoptr i64 %11 to i8*, !insn.addr !106
  %14 = load i8, i8* %13, align 1, !insn.addr !106
  %15 = zext i8 %14 to i64, !insn.addr !106
  %16 = icmp eq i8 %14, 0, !insn.addr !107
  %17 = icmp eq i1 %16, false, !insn.addr !108
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !108
  store i64 %15, i64* %rbx.0.reg2mem, !insn.addr !108
  br i1 %17, label %dec_label_pc_14d0, label %dec_label_pc_14e1, !insn.addr !108

dec_label_pc_14e1:                                ; preds = %dec_label_pc_14d0
  %18 = load i32, i32* %stack_var_-56, align 4, !insn.addr !109
  %19 = zext i32 %18 to i64, !insn.addr !109
  %sext2 = mul i64 %19, 72057594037927936
  %20 = ashr exact i64 %sext2, 56, !insn.addr !109
  store i64 %20, i64* %rbx.1.reg2mem, !insn.addr !109
  br label %dec_label_pc_14e5, !insn.addr !109

dec_label_pc_14e5:                                ; preds = %dec_label_pc_14e1, %dec_label_pc_1490
  %21 = call i32 @strlen(i8* %2), !insn.addr !110
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !111
  %23 = icmp eq i64 %0, %22, !insn.addr !111
  %24 = icmp eq i1 %23, false, !insn.addr !112
  br i1 %24, label %dec_label_pc_1502, label %dec_label_pc_14fc, !insn.addr !112

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14e5
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %25 = trunc i64 %rbx.1.reload to i32, !insn.addr !113
  %26 = add i32 %21, %25, !insn.addr !113
  %27 = zext i32 %26 to i64, !insn.addr !113
  ret i64 %27, !insn.addr !114

dec_label_pc_1502:                                ; preds = %dec_label_pc_14e5
  call void @__stack_chk_fail(), !insn.addr !115
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !116

; uselistorder directives
  uselistorder i64 %5, { 1, 0, 2 }
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14d0, { 1, 0 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1510:
  %rbx.1.reg2mem = alloca i64, !insn.addr !117
  %rbx.0.reg2mem = alloca i64, !insn.addr !117
  %rax.0.reg2mem = alloca i64, !insn.addr !117
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !118
  %1 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !119
  %2 = call i8* @strncpy(i8* nonnull %1, i8* bitcast (i8** @global_var_4010 to i8*), i32 31), !insn.addr !119
  %3 = load i32, i32* %stack_var_-56, align 4, !insn.addr !120
  %4 = zext i32 %3 to i64, !insn.addr !120
  %sext = mul i64 %4, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !120
  %6 = trunc i64 %5 to i8, !insn.addr !121
  %7 = icmp eq i8 %6, 0, !insn.addr !121
  store i64 %5, i64* %rbx.1.reg2mem, !insn.addr !122
  br i1 %7, label %dec_label_pc_1565, label %dec_label_pc_1550.preheader, !insn.addr !122

dec_label_pc_1550.preheader:                      ; preds = %dec_label_pc_1510
  %8 = ptrtoint i8* %2 to i64, !insn.addr !119
  store i64 %8, i64* %rax.0.reg2mem
  store i64 %5, i64* %rbx.0.reg2mem
  br label %dec_label_pc_1550

dec_label_pc_1550:                                ; preds = %dec_label_pc_1550.preheader, %dec_label_pc_1550
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = trunc i64 %rbx.0.reload to i8, !insn.addr !123
  %10 = xor i8 %9, 90, !insn.addr !123
  %11 = add i64 %rax.0.reload, 1, !insn.addr !124
  %12 = inttoptr i64 %rax.0.reload to i8*, !insn.addr !125
  store i8 %10, i8* %12, align 1, !insn.addr !125
  %13 = inttoptr i64 %11 to i8*, !insn.addr !126
  %14 = load i8, i8* %13, align 1, !insn.addr !126
  %15 = zext i8 %14 to i64, !insn.addr !126
  %16 = icmp eq i8 %14, 0, !insn.addr !127
  %17 = icmp eq i1 %16, false, !insn.addr !128
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !128
  store i64 %15, i64* %rbx.0.reg2mem, !insn.addr !128
  br i1 %17, label %dec_label_pc_1550, label %dec_label_pc_1561, !insn.addr !128

dec_label_pc_1561:                                ; preds = %dec_label_pc_1550
  %18 = load i32, i32* %stack_var_-56, align 4, !insn.addr !129
  %19 = zext i32 %18 to i64, !insn.addr !129
  %sext2 = mul i64 %19, 72057594037927936
  %20 = ashr exact i64 %sext2, 56, !insn.addr !129
  store i64 %20, i64* %rbx.1.reg2mem, !insn.addr !129
  br label %dec_label_pc_1565, !insn.addr !129

dec_label_pc_1565:                                ; preds = %dec_label_pc_1561, %dec_label_pc_1510
  %21 = call i32 @strlen(i8* %2), !insn.addr !130
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !131
  %23 = icmp eq i64 %0, %22, !insn.addr !131
  %24 = icmp eq i1 %23, false, !insn.addr !132
  br i1 %24, label %dec_label_pc_1582, label %dec_label_pc_157c, !insn.addr !132

dec_label_pc_157c:                                ; preds = %dec_label_pc_1565
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %25 = trunc i64 %rbx.1.reload to i32, !insn.addr !133
  %26 = add i32 %21, %25, !insn.addr !133
  %27 = zext i32 %26 to i64, !insn.addr !133
  ret i64 %27, !insn.addr !134

dec_label_pc_1582:                                ; preds = %dec_label_pc_1565
  call void @__stack_chk_fail(), !insn.addr !135
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !136

; uselistorder directives
  uselistorder i64 %5, { 1, 0, 2 }
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1550, { 1, 0 }
}

define i64 @param_tail_call_optimized(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1590:
  %0 = alloca i128
  %rax.1.in.reg2mem = alloca i64, !insn.addr !137
  %rdx.0.in.reg2mem = alloca i64, !insn.addr !137
  %rax.0.reg2mem = alloca i64, !insn.addr !137
  %.pre-phi.reg2mem = alloca i32, !insn.addr !137
  %rcx.0.reg2mem = alloca i64, !insn.addr !137
  %xmm1.0.reg2mem = alloca i128, !insn.addr !137
  %xmm0.0.reg2mem = alloca i128, !insn.addr !137
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32
  %3 = icmp slt i32 %2, 1
  br i1 %3, label %dec_label_pc_1668, label %dec_label_pc_159e, !insn.addr !138

dec_label_pc_159e:                                ; preds = %dec_label_pc_1590
  %4 = icmp slt i32 %2, 11, !insn.addr !139
  br i1 %4, label %dec_label_pc_166b, label %dec_label_pc_15a7, !insn.addr !139

dec_label_pc_15a7:                                ; preds = %dec_label_pc_159e
  %5 = call i128 @__asm_movd(i32 %2), !insn.addr !140
  %6 = load i128, i128* @global_var_2230, align 8, !insn.addr !141
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !141
  %8 = call i128 @__asm_pshufd(i128 %5, i8 0), !insn.addr !142
  %9 = load i128, i128* @global_var_2220, align 8, !insn.addr !143
  %10 = call i128 @__asm_paddd(i128 %8, i128 %9), !insn.addr !143
  %11 = udiv i64 %arg1, 4, !insn.addr !144
  %12 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !145
  %13 = trunc i64 %11 to i32
  %14 = urem i32 %13, 1073741824
  store i128 %12, i128* %xmm0.0.reg2mem, !insn.addr !146
  store i128 %10, i128* %xmm1.0.reg2mem, !insn.addr !146
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !146
  br label %dec_label_pc_15d0, !insn.addr !146

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15d0, %dec_label_pc_15a7
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %15 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !147
  %16 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !148
  %17 = and i64 %16, 4294967295, !insn.addr !148
  %18 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %7), !insn.addr !149
  %19 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %15), !insn.addr !150
  %20 = trunc i64 %16 to i32, !insn.addr !151
  %21 = icmp eq i32 %14, %20, !insn.addr !151
  %22 = icmp eq i1 %21, false, !insn.addr !152
  store i128 %19, i128* %xmm0.0.reg2mem, !insn.addr !152
  store i128 %18, i128* %xmm1.0.reg2mem, !insn.addr !152
  store i64 %17, i64* %rcx.0.reg2mem, !insn.addr !152
  br i1 %22, label %dec_label_pc_15d0, label %dec_label_pc_15e3, !insn.addr !152

dec_label_pc_15e3:                                ; preds = %dec_label_pc_15d0
  %23 = call i128 @__asm_movdqa(i128 %19), !insn.addr !153
  %24 = call i128 @__asm_psrldq(i128 %23, i8 8), !insn.addr !154
  %25 = call i128 @__asm_paddd(i128 %19, i128 %24), !insn.addr !155
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !156
  %27 = call i128 @__asm_psrldq(i128 %26, i8 4), !insn.addr !157
  %28 = call i128 @__asm_paddd(i128 %25, i128 %27), !insn.addr !158
  %29 = call i32 @__asm_movd.1(i128 %28), !insn.addr !159
  %30 = trunc i64 %arg2 to i32
  %31 = add i32 %29, %30, !insn.addr !160
  %32 = zext i32 %31 to i64, !insn.addr !160
  %33 = and i64 %arg1, 4294967292, !insn.addr !161
  %34 = trunc i64 %33 to i32, !insn.addr !162
  %35 = icmp eq i32 %2, %34, !insn.addr !162
  br i1 %35, label %dec_label_pc_1660, label %dec_label_pc_15e3.dec_label_pc_160f_crit_edge, !insn.addr !163

dec_label_pc_15e3.dec_label_pc_160f_crit_edge:    ; preds = %dec_label_pc_15e3
  %36 = sub i64 %arg1, %33, !insn.addr !164
  %.pre = trunc i64 %36 to i32, !insn.addr !165
  store i32 %.pre, i32* %.pre-phi.reg2mem
  store i64 %32, i64* %rax.0.reg2mem
  store i64 %36, i64* %rdx.0.in.reg2mem
  br label %dec_label_pc_160f

dec_label_pc_160f:                                ; preds = %dec_label_pc_15e3.dec_label_pc_160f_crit_edge, %dec_label_pc_166b
  %rdx.0.in.reload = load i64, i64* %rdx.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %37 = add i64 %rdx.0.in.reload, %rax.0.reload, !insn.addr !166
  %38 = add i32 %.pre-phi.reload, -1, !insn.addr !167
  %39 = icmp eq i32 %38, 0, !insn.addr !167
  store i64 %37, i64* %rax.1.in.reg2mem, !insn.addr !168
  br i1 %39, label %dec_label_pc_165d, label %dec_label_pc_1618, !insn.addr !168

dec_label_pc_1618:                                ; preds = %dec_label_pc_160f
  %40 = zext i32 %38 to i64, !insn.addr !167
  %41 = add i64 %37, %40, !insn.addr !169
  %42 = add i32 %.pre-phi.reload, -2, !insn.addr !170
  %43 = icmp eq i32 %42, 0, !insn.addr !170
  store i64 %41, i64* %rax.1.in.reg2mem, !insn.addr !171
  br i1 %43, label %dec_label_pc_165d, label %dec_label_pc_1621, !insn.addr !171

dec_label_pc_1621:                                ; preds = %dec_label_pc_1618
  %44 = zext i32 %42 to i64, !insn.addr !170
  %45 = add i64 %41, %44, !insn.addr !172
  %46 = add i32 %.pre-phi.reload, -3, !insn.addr !173
  %47 = icmp eq i32 %46, 0, !insn.addr !173
  store i64 %45, i64* %rax.1.in.reg2mem, !insn.addr !174
  br i1 %47, label %dec_label_pc_165d, label %dec_label_pc_162a, !insn.addr !174

dec_label_pc_162a:                                ; preds = %dec_label_pc_1621
  %48 = zext i32 %46 to i64, !insn.addr !173
  %49 = add i64 %45, %48, !insn.addr !175
  %50 = add i32 %.pre-phi.reload, -4, !insn.addr !176
  %51 = icmp eq i32 %50, 0, !insn.addr !176
  store i64 %49, i64* %rax.1.in.reg2mem, !insn.addr !177
  br i1 %51, label %dec_label_pc_165d, label %dec_label_pc_1633, !insn.addr !177

dec_label_pc_1633:                                ; preds = %dec_label_pc_162a
  %52 = zext i32 %50 to i64, !insn.addr !176
  %53 = add i64 %49, %52, !insn.addr !178
  %54 = add i32 %.pre-phi.reload, -5, !insn.addr !179
  %55 = icmp eq i32 %54, 0, !insn.addr !179
  store i64 %53, i64* %rax.1.in.reg2mem, !insn.addr !180
  br i1 %55, label %dec_label_pc_165d, label %dec_label_pc_163c, !insn.addr !180

dec_label_pc_163c:                                ; preds = %dec_label_pc_1633
  %56 = zext i32 %54 to i64, !insn.addr !179
  %57 = add i64 %53, %56, !insn.addr !181
  %58 = add i32 %.pre-phi.reload, -6, !insn.addr !182
  %59 = icmp eq i32 %58, 0, !insn.addr !182
  store i64 %57, i64* %rax.1.in.reg2mem, !insn.addr !183
  br i1 %59, label %dec_label_pc_165d, label %dec_label_pc_1645, !insn.addr !183

dec_label_pc_1645:                                ; preds = %dec_label_pc_163c
  %60 = zext i32 %58 to i64, !insn.addr !182
  %61 = add i64 %57, %60, !insn.addr !184
  %62 = add i32 %.pre-phi.reload, -7, !insn.addr !185
  %63 = icmp eq i32 %62, 0, !insn.addr !185
  store i64 %61, i64* %rax.1.in.reg2mem, !insn.addr !186
  br i1 %63, label %dec_label_pc_165d, label %dec_label_pc_164e, !insn.addr !186

dec_label_pc_164e:                                ; preds = %dec_label_pc_1645
  %64 = zext i32 %62 to i64, !insn.addr !185
  %65 = add i64 %61, %64, !insn.addr !187
  %66 = add i32 %.pre-phi.reload, -8, !insn.addr !188
  %67 = icmp eq i32 %66, 0, !insn.addr !188
  store i64 %65, i64* %rax.1.in.reg2mem, !insn.addr !189
  br i1 %67, label %dec_label_pc_165d, label %dec_label_pc_1657, !insn.addr !189

dec_label_pc_1657:                                ; preds = %dec_label_pc_164e
  %68 = zext i32 %66 to i64, !insn.addr !188
  %69 = add i64 %rdx.0.in.reload, 4294967287, !insn.addr !190
  %70 = add i64 %69, %68, !insn.addr !191
  %71 = add i64 %70, %65, !insn.addr !191
  store i64 %71, i64* %rax.1.in.reg2mem, !insn.addr !191
  br label %dec_label_pc_165d, !insn.addr !191

dec_label_pc_165d:                                ; preds = %dec_label_pc_1657, %dec_label_pc_164e, %dec_label_pc_1645, %dec_label_pc_163c, %dec_label_pc_1633, %dec_label_pc_162a, %dec_label_pc_1621, %dec_label_pc_1618, %dec_label_pc_160f
  %rax.1.in.reload = load i64, i64* %rax.1.in.reg2mem
  %rax.1 = and i64 %rax.1.in.reload, 4294967295
  ret i64 %rax.1, !insn.addr !192

dec_label_pc_1660:                                ; preds = %dec_label_pc_15e3
  ret i64 %32, !insn.addr !193

dec_label_pc_1668:                                ; preds = %dec_label_pc_1590
  %72 = and i64 %arg2, 4294967295, !insn.addr !194
  ret i64 %72, !insn.addr !195

dec_label_pc_166b:                                ; preds = %dec_label_pc_159e
  %73 = and i64 %arg2, 4294967295, !insn.addr !196
  store i32 %2, i32* %.pre-phi.reg2mem, !insn.addr !197
  store i64 %73, i64* %rax.0.reg2mem, !insn.addr !197
  store i64 %arg1, i64* %rdx.0.in.reg2mem, !insn.addr !197
  br label %dec_label_pc_160f, !insn.addr !197

; uselistorder directives
  uselistorder i32 %66, { 1, 0 }
  uselistorder i64 %65, { 1, 0 }
  uselistorder i32 %62, { 1, 0 }
  uselistorder i64 %61, { 1, 0 }
  uselistorder i32 %58, { 1, 0 }
  uselistorder i64 %57, { 1, 0 }
  uselistorder i32 %54, { 1, 0 }
  uselistorder i64 %53, { 1, 0 }
  uselistorder i32 %50, { 1, 0 }
  uselistorder i64 %49, { 1, 0 }
  uselistorder i32 %46, { 1, 0 }
  uselistorder i64 %45, { 1, 0 }
  uselistorder i32 %42, { 1, 0 }
  uselistorder i64 %41, { 1, 0 }
  uselistorder i32 %38, { 1, 0 }
  uselistorder i64 %37, { 1, 0 }
  uselistorder i64 %32, { 1, 0 }
  uselistorder i128 %25, { 1, 0 }
  uselistorder i128 %19, { 2, 1, 0 }
  uselistorder i32 %2, { 0, 1, 3, 2, 4 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.pre-phi.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg2, { 1, 2, 0 }
  uselistorder i64 %arg1, { 0, 2, 3, 1, 4 }
  uselistorder label %dec_label_pc_160f, { 1, 0 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_1670:
  ret i64 500500, !insn.addr !198
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_1680:
  %0 = alloca i128
  %merge.reg2mem = alloca i64, !insn.addr !199
  %rax.2.in.reg2mem = alloca i64, !insn.addr !199
  %rdi.0.reg2mem = alloca i64, !insn.addr !199
  %rax.1.reg2mem = alloca i64, !insn.addr !199
  %.pre-phi.reg2mem = alloca i32, !insn.addr !199
  %rax.0.reg2mem = alloca i64, !insn.addr !199
  %xmm1.0.reg2mem = alloca i128, !insn.addr !199
  %xmm0.0.reg2mem = alloca i128, !insn.addr !199
  %1 = load i128, i128* %0
  %2 = trunc i64 %arg1 to i32
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !200
  br i1 %3, label %dec_label_pc_1750, label %dec_label_pc_168c, !insn.addr !200

dec_label_pc_168c:                                ; preds = %dec_label_pc_1680
  %4 = icmp slt i32 %2, 11, !insn.addr !201
  store i32 %2, i32* %.pre-phi.reg2mem, !insn.addr !201
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !201
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !201
  br i1 %4, label %dec_label_pc_16fc, label %dec_label_pc_1697, !insn.addr !201

dec_label_pc_1697:                                ; preds = %dec_label_pc_168c
  %5 = call i128 @__asm_movd(i32 %2), !insn.addr !202
  %6 = load i128, i128* @global_var_2230, align 8, !insn.addr !203
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !203
  %8 = call i128 @__asm_pshufd(i128 %5, i8 0), !insn.addr !204
  %9 = load i128, i128* @global_var_2220, align 8, !insn.addr !205
  %10 = call i128 @__asm_paddd(i128 %8, i128 %9), !insn.addr !205
  %11 = udiv i64 %arg1, 4, !insn.addr !206
  %12 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !207
  %13 = trunc i64 %11 to i32
  %14 = urem i32 %13, 1073741824
  store i128 %12, i128* %xmm0.0.reg2mem, !insn.addr !208
  store i128 %10, i128* %xmm1.0.reg2mem, !insn.addr !208
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !208
  br label %dec_label_pc_16c0, !insn.addr !208

dec_label_pc_16c0:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_1697
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %15 = call i128 @__asm_movdqa(i128 %xmm1.0.reload), !insn.addr !209
  %16 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !210
  %17 = and i64 %16, 4294967295, !insn.addr !210
  %18 = call i128 @__asm_paddd(i128 %xmm1.0.reload, i128 %7), !insn.addr !211
  %19 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %15), !insn.addr !212
  %20 = trunc i64 %16 to i32, !insn.addr !213
  %21 = icmp eq i32 %14, %20, !insn.addr !213
  %22 = icmp eq i1 %21, false, !insn.addr !214
  store i128 %19, i128* %xmm0.0.reg2mem, !insn.addr !214
  store i128 %18, i128* %xmm1.0.reg2mem, !insn.addr !214
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !214
  br i1 %22, label %dec_label_pc_16c0, label %dec_label_pc_16d3, !insn.addr !214

dec_label_pc_16d3:                                ; preds = %dec_label_pc_16c0
  %23 = call i128 @__asm_movdqa(i128 %19), !insn.addr !215
  %24 = call i128 @__asm_psrldq(i128 %23, i8 8), !insn.addr !216
  %25 = and i64 %arg1, 4294967292, !insn.addr !217
  %26 = call i128 @__asm_paddd(i128 %19, i128 %24), !insn.addr !218
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !219
  %28 = call i128 @__asm_psrldq(i128 %27, i8 4), !insn.addr !220
  %29 = call i128 @__asm_paddd(i128 %26, i128 %28), !insn.addr !221
  %30 = call i32 @__asm_movd.1(i128 %29), !insn.addr !222
  %31 = sext i32 %30 to i64, !insn.addr !222
  %32 = trunc i64 %25 to i32, !insn.addr !223
  %33 = icmp eq i32 %2, %32, !insn.addr !223
  store i64 %31, i64* %merge.reg2mem, !insn.addr !224
  br i1 %33, label %dec_label_pc_1750, label %dec_label_pc_16d3.dec_label_pc_16fc_crit_edge, !insn.addr !224

dec_label_pc_16d3.dec_label_pc_16fc_crit_edge:    ; preds = %dec_label_pc_16d3
  %34 = sub i64 %arg1, %25, !insn.addr !225
  %35 = and i64 %34, 4294967295, !insn.addr !225
  %.pre = trunc i64 %34 to i32, !insn.addr !226
  store i32 %.pre, i32* %.pre-phi.reg2mem
  store i64 %31, i64* %rax.1.reg2mem
  store i64 %35, i64* %rdi.0.reg2mem
  br label %dec_label_pc_16fc

dec_label_pc_16fc:                                ; preds = %dec_label_pc_16d3.dec_label_pc_16fc_crit_edge, %dec_label_pc_168c
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %.pre-phi.reload = load i32, i32* %.pre-phi.reg2mem
  %36 = add i64 %rdi.0.reload, %rax.1.reload, !insn.addr !227
  %37 = add i32 %.pre-phi.reload, -1, !insn.addr !228
  %38 = icmp eq i32 %37, 0, !insn.addr !228
  store i64 %36, i64* %rax.2.in.reg2mem, !insn.addr !229
  br i1 %38, label %dec_label_pc_174a, label %dec_label_pc_1705, !insn.addr !229

dec_label_pc_1705:                                ; preds = %dec_label_pc_16fc
  %39 = zext i32 %37 to i64, !insn.addr !228
  %40 = add i64 %36, %39, !insn.addr !230
  %41 = add i32 %.pre-phi.reload, -2, !insn.addr !231
  %42 = icmp eq i32 %41, 0, !insn.addr !231
  store i64 %40, i64* %rax.2.in.reg2mem, !insn.addr !232
  br i1 %42, label %dec_label_pc_174a, label %dec_label_pc_170e, !insn.addr !232

dec_label_pc_170e:                                ; preds = %dec_label_pc_1705
  %43 = zext i32 %41 to i64, !insn.addr !231
  %44 = add i64 %40, %43, !insn.addr !233
  %45 = add i32 %.pre-phi.reload, -3, !insn.addr !234
  %46 = icmp eq i32 %45, 0, !insn.addr !234
  store i64 %44, i64* %rax.2.in.reg2mem, !insn.addr !235
  br i1 %46, label %dec_label_pc_174a, label %dec_label_pc_1717, !insn.addr !235

dec_label_pc_1717:                                ; preds = %dec_label_pc_170e
  %47 = zext i32 %45 to i64, !insn.addr !234
  %48 = add i64 %44, %47, !insn.addr !236
  %49 = add i32 %.pre-phi.reload, -4, !insn.addr !237
  %50 = icmp eq i32 %49, 0, !insn.addr !237
  store i64 %48, i64* %rax.2.in.reg2mem, !insn.addr !238
  br i1 %50, label %dec_label_pc_174a, label %dec_label_pc_1720, !insn.addr !238

dec_label_pc_1720:                                ; preds = %dec_label_pc_1717
  %51 = zext i32 %49 to i64, !insn.addr !237
  %52 = add i64 %48, %51, !insn.addr !239
  %53 = add i32 %.pre-phi.reload, -5, !insn.addr !240
  %54 = icmp eq i32 %53, 0, !insn.addr !240
  store i64 %52, i64* %rax.2.in.reg2mem, !insn.addr !241
  br i1 %54, label %dec_label_pc_174a, label %dec_label_pc_1729, !insn.addr !241

dec_label_pc_1729:                                ; preds = %dec_label_pc_1720
  %55 = zext i32 %53 to i64, !insn.addr !240
  %56 = add i64 %52, %55, !insn.addr !242
  %57 = add i32 %.pre-phi.reload, -6, !insn.addr !243
  %58 = icmp eq i32 %57, 0, !insn.addr !243
  store i64 %56, i64* %rax.2.in.reg2mem, !insn.addr !244
  br i1 %58, label %dec_label_pc_174a, label %dec_label_pc_1732, !insn.addr !244

dec_label_pc_1732:                                ; preds = %dec_label_pc_1729
  %59 = zext i32 %57 to i64, !insn.addr !243
  %60 = add i64 %56, %59, !insn.addr !245
  %61 = add i32 %.pre-phi.reload, -7, !insn.addr !246
  %62 = icmp eq i32 %61, 0, !insn.addr !246
  store i64 %60, i64* %rax.2.in.reg2mem, !insn.addr !247
  br i1 %62, label %dec_label_pc_174a, label %dec_label_pc_173b, !insn.addr !247

dec_label_pc_173b:                                ; preds = %dec_label_pc_1732
  %63 = zext i32 %61 to i64, !insn.addr !246
  %64 = add i64 %60, %63, !insn.addr !248
  %65 = add i32 %.pre-phi.reload, -8, !insn.addr !249
  %66 = icmp eq i32 %65, 0, !insn.addr !249
  store i64 %64, i64* %rax.2.in.reg2mem, !insn.addr !250
  br i1 %66, label %dec_label_pc_174a, label %dec_label_pc_1744, !insn.addr !250

dec_label_pc_1744:                                ; preds = %dec_label_pc_173b
  %67 = zext i32 %65 to i64, !insn.addr !249
  %68 = add i64 %rdi.0.reload, 4294967287, !insn.addr !251
  %69 = add i64 %68, %67, !insn.addr !252
  %70 = add i64 %69, %64, !insn.addr !252
  store i64 %70, i64* %rax.2.in.reg2mem, !insn.addr !252
  br label %dec_label_pc_174a, !insn.addr !252

dec_label_pc_174a:                                ; preds = %dec_label_pc_1744, %dec_label_pc_173b, %dec_label_pc_1732, %dec_label_pc_1729, %dec_label_pc_1720, %dec_label_pc_1717, %dec_label_pc_170e, %dec_label_pc_1705, %dec_label_pc_16fc
  %rax.2.in.reload = load i64, i64* %rax.2.in.reg2mem
  %rax.2 = and i64 %rax.2.in.reload, 4294967295
  ret i64 %rax.2, !insn.addr !253

dec_label_pc_1750:                                ; preds = %dec_label_pc_1680, %dec_label_pc_16d3
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !254

; uselistorder directives
  uselistorder i32 %65, { 1, 0 }
  uselistorder i64 %64, { 1, 0 }
  uselistorder i32 %61, { 1, 0 }
  uselistorder i64 %60, { 1, 0 }
  uselistorder i32 %57, { 1, 0 }
  uselistorder i64 %56, { 1, 0 }
  uselistorder i32 %53, { 1, 0 }
  uselistorder i64 %52, { 1, 0 }
  uselistorder i32 %49, { 1, 0 }
  uselistorder i64 %48, { 1, 0 }
  uselistorder i32 %45, { 1, 0 }
  uselistorder i64 %44, { 1, 0 }
  uselistorder i32 %41, { 1, 0 }
  uselistorder i64 %40, { 1, 0 }
  uselistorder i32 %37, { 1, 0 }
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %31, { 1, 0 }
  uselistorder i128 %26, { 1, 0 }
  uselistorder i128 %19, { 2, 1, 0 }
  uselistorder i32 %2, { 1, 2, 0, 3, 4 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %merge.reg2mem, { 0, 2, 1 }
  uselistorder i128* @global_var_2220, { 1, 0 }
  uselistorder i128* @global_var_2230, { 1, 0 }
  uselistorder i64 %arg1, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_1750, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1760:
  ret i64 5050, !insn.addr !255
}

define i64 @param_vectorized_loop(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1770:
  %rax.6.reg2mem = alloca i64, !insn.addr !256
  %rax.5.shrunk.reg2mem = alloca i32, !insn.addr !256
  %rcx.1.reg2mem = alloca i64, !insn.addr !256
  %rax.4.reg2mem = alloca i32, !insn.addr !256
  %rax.3.reg2mem = alloca i64, !insn.addr !256
  %xmm0.3.reg2mem = alloca i128, !insn.addr !256
  %xmm0.2.reg2mem = alloca i128, !insn.addr !256
  %r9.0.reg2mem = alloca i64, !insn.addr !256
  %xmm0.1.reg2mem = alloca i128, !insn.addr !256
  %rax.2.reg2mem = alloca i64, !insn.addr !256
  %xmm0.0.reg2mem = alloca i128, !insn.addr !256
  %r10.0.reg2mem = alloca i64, !insn.addr !256
  %rax.1.reg2mem = alloca i64, !insn.addr !256
  %rax.0.reg2mem = alloca i64, !insn.addr !256
  %0 = trunc i64 %arg4 to i32, !insn.addr !257
  %1 = icmp slt i32 %0, 1
  store i32 0, i32* %rax.5.shrunk.reg2mem, !insn.addr !258
  br i1 %1, label %dec_label_pc_18c2, label %dec_label_pc_177f, !insn.addr !258

dec_label_pc_177f:                                ; preds = %dec_label_pc_1770
  %2 = and i64 %arg4, 4294967295, !insn.addr !259
  %.neg = sub i64 -4, %arg1, !insn.addr !260
  %3 = add i64 %.neg, %arg3, !insn.addr !261
  %4 = icmp ult i64 %3, 9
  %.neg4 = sub i64 -4, %arg2, !insn.addr !262
  %5 = add i64 %.neg4, %arg3, !insn.addr !263
  %6 = icmp ult i64 %5, 9
  %7 = or i1 %4, %6
  %8 = icmp eq i1 %7, false
  %9 = icmp eq i1 %8, false, !insn.addr !264
  %10 = icmp eq i32 %0, 1, !insn.addr !265
  %or.cond = or i1 %10, %9
  br i1 %or.cond, label %dec_label_pc_18d0, label %dec_label_pc_17b3, !insn.addr !266

dec_label_pc_17b3:                                ; preds = %dec_label_pc_177f
  %11 = add nuw nsw i64 %2, 4294967295, !insn.addr !267
  %12 = and i64 %11, 4294967295, !insn.addr !267
  %13 = trunc i64 %11 to i32, !insn.addr !268
  %14 = icmp ult i32 %13, 3
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !269
  store i64 %2, i64* %r10.0.reg2mem, !insn.addr !269
  br i1 %14, label %dec_label_pc_1804, label %dec_label_pc_17c4, !insn.addr !269

dec_label_pc_17c4:                                ; preds = %dec_label_pc_17b3
  %15 = mul i64 %2, 4
  %16 = and i64 %15, 17179869168, !insn.addr !270
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_17d0, !insn.addr !270

dec_label_pc_17d0:                                ; preds = %dec_label_pc_17d0, %dec_label_pc_17c4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %17 = add i64 %rax.0.reload, %arg1, !insn.addr !271
  %18 = inttoptr i64 %17 to i128*, !insn.addr !271
  %19 = load i128, i128* %18, align 8, !insn.addr !271
  %20 = call i128 @__asm_movdqu(i128 %19), !insn.addr !271
  %21 = add i64 %rax.0.reload, %arg2, !insn.addr !272
  %22 = inttoptr i64 %21 to i128*, !insn.addr !272
  %23 = load i128, i128* %22, align 8, !insn.addr !272
  %24 = call i128 @__asm_movdqu(i128 %23), !insn.addr !272
  %25 = call i128 @__asm_paddd(i128 %20, i128 %24), !insn.addr !273
  %26 = add i64 %rax.0.reload, %arg3, !insn.addr !274
  %27 = inttoptr i64 %26 to i128*, !insn.addr !274
  %28 = load i128, i128* %27, align 8, !insn.addr !274
  call void @__asm_movups(i128 %28, i128 %25), !insn.addr !274
  %29 = add i64 %rax.0.reload, 16, !insn.addr !275
  %30 = icmp eq i64 %16, %29, !insn.addr !276
  %31 = icmp eq i1 %30, false, !insn.addr !277
  store i64 %29, i64* %rax.0.reg2mem, !insn.addr !277
  br i1 %31, label %dec_label_pc_17d0, label %dec_label_pc_17eb, !insn.addr !277

dec_label_pc_17eb:                                ; preds = %dec_label_pc_17d0
  %32 = and i64 %arg4, 4294967292, !insn.addr !278
  %33 = trunc i64 %32 to i32, !insn.addr !279
  %34 = icmp eq i32 %0, %33, !insn.addr !279
  store i128 %25, i128* %xmm0.2.reg2mem, !insn.addr !280
  br i1 %34, label %dec_label_pc_1839, label %dec_label_pc_17f8, !insn.addr !280

dec_label_pc_17f8:                                ; preds = %dec_label_pc_17eb
  %35 = sub nsw i64 %2, %32, !insn.addr !281
  %36 = and i64 %35, 4294967295, !insn.addr !281
  %37 = trunc i64 %35 to i32, !insn.addr !282
  %38 = icmp eq i32 %37, 1, !insn.addr !282
  store i64 %32, i64* %rax.1.reg2mem, !insn.addr !283
  store i64 %36, i64* %r10.0.reg2mem, !insn.addr !283
  store i128 %25, i128* %xmm0.0.reg2mem, !insn.addr !283
  store i64 %32, i64* %rax.2.reg2mem, !insn.addr !283
  br i1 %38, label %dec_label_pc_1824, label %dec_label_pc_1804, !insn.addr !283

dec_label_pc_1804:                                ; preds = %dec_label_pc_17b3, %dec_label_pc_17f8
  %r10.0.reload = load i64, i64* %r10.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %39 = mul i64 %rax.1.reload, 4, !insn.addr !284
  %40 = add i64 %39, %arg1, !insn.addr !284
  %41 = inttoptr i64 %40 to i64*, !insn.addr !284
  %42 = load i64, i64* %41, align 8, !insn.addr !284
  %43 = call i128 @__asm_movq(i64 %42), !insn.addr !284
  %44 = add i64 %39, %arg2, !insn.addr !285
  %45 = inttoptr i64 %44 to i64*, !insn.addr !285
  %46 = load i64, i64* %45, align 8, !insn.addr !285
  %47 = call i128 @__asm_movq(i64 %46), !insn.addr !285
  %48 = call i128 @__asm_paddd(i128 %43, i128 %47), !insn.addr !286
  %49 = add i64 %39, %arg3, !insn.addr !287
  %50 = inttoptr i64 %49 to i64*, !insn.addr !287
  %51 = load i64, i64* %50, align 8, !insn.addr !287
  call void @__asm_movq.2(i64 %51, i128 %48), !insn.addr !287
  %52 = and i64 %r10.0.reload, 4294967294, !insn.addr !288
  %53 = add nuw nsw i64 %52, %rax.1.reload, !insn.addr !289
  %54 = and i64 %53, 4294967294, !insn.addr !289
  %55 = trunc i64 %r10.0.reload to i32, !insn.addr !290
  %56 = trunc i64 %52 to i32, !insn.addr !290
  %57 = icmp eq i32 %55, %56, !insn.addr !290
  store i128 %48, i128* %xmm0.0.reg2mem, !insn.addr !291
  store i64 %54, i64* %rax.2.reg2mem, !insn.addr !291
  store i128 %48, i128* %xmm0.1.reg2mem, !insn.addr !291
  store i64 %12, i64* %r9.0.reg2mem, !insn.addr !291
  br i1 %57, label %dec_label_pc_182f, label %dec_label_pc_1824, !insn.addr !291

dec_label_pc_1824:                                ; preds = %dec_label_pc_1804, %dec_label_pc_17f8
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %sext = mul i64 %rax.2.reload, 4294967296
  %58 = ashr exact i64 %sext, 30, !insn.addr !292
  %59 = add i64 %58, %arg2, !insn.addr !292
  %60 = inttoptr i64 %59 to i32*, !insn.addr !292
  %61 = load i32, i32* %60, align 4, !insn.addr !292
  %62 = add i64 %58, %arg1, !insn.addr !293
  %63 = inttoptr i64 %62 to i32*, !insn.addr !293
  %64 = load i32, i32* %63, align 4, !insn.addr !293
  %65 = add i32 %64, %61, !insn.addr !293
  %66 = add i64 %58, %arg3, !insn.addr !294
  %67 = inttoptr i64 %66 to i32*, !insn.addr !294
  store i32 %65, i32* %67, align 4, !insn.addr !294
  store i128 %xmm0.0.reload, i128* %xmm0.1.reg2mem, !insn.addr !294
  store i64 %12, i64* %r9.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_182f, !insn.addr !294

dec_label_pc_182f:                                ; preds = %dec_label_pc_18ea, %dec_label_pc_1824, %dec_label_pc_1804
  %r9.0.reload = load i64, i64* %r9.0.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %68 = trunc i64 %r9.0.reload to i32, !insn.addr !295
  %69 = icmp ult i32 %68, 3
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !296
  store i32 0, i32* %rax.4.reg2mem, !insn.addr !296
  store i64 0, i64* %rcx.1.reg2mem, !insn.addr !296
  br i1 %69, label %dec_label_pc_1893, label %dec_label_pc_1839, !insn.addr !296

dec_label_pc_1839:                                ; preds = %dec_label_pc_182f, %dec_label_pc_17eb
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %70 = call i128 @__asm_pxor(i128 %xmm0.2.reload, i128 %xmm0.2.reload), !insn.addr !297
  %71 = udiv i32 %0, 4, !insn.addr !298
  %72 = add nsw i32 %71, -1, !insn.addr !299
  %73 = zext i32 %72 to i64, !insn.addr !299
  %74 = mul i64 %73, 16, !insn.addr !300
  %75 = add i64 %arg3, 16, !insn.addr !301
  %76 = add i64 %75, %74, !insn.addr !301
  store i128 %70, i128* %xmm0.3.reg2mem, !insn.addr !302
  store i64 %arg3, i64* %rax.3.reg2mem, !insn.addr !302
  br label %dec_label_pc_1858, !insn.addr !302

dec_label_pc_1858:                                ; preds = %dec_label_pc_1858, %dec_label_pc_1839
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  %xmm0.3.reload = load i128, i128* %xmm0.3.reg2mem
  %77 = inttoptr i64 %rax.3.reload to i128*, !insn.addr !303
  %78 = load i128, i128* %77, align 8, !insn.addr !303
  %79 = call i128 @__asm_movdqu(i128 %78), !insn.addr !303
  %80 = add i64 %rax.3.reload, 16, !insn.addr !304
  %81 = call i128 @__asm_paddd(i128 %xmm0.3.reload, i128 %79), !insn.addr !305
  %82 = icmp eq i64 %80, %76, !insn.addr !306
  %83 = icmp eq i1 %82, false, !insn.addr !307
  store i128 %81, i128* %xmm0.3.reg2mem, !insn.addr !307
  store i64 %80, i64* %rax.3.reg2mem, !insn.addr !307
  br i1 %83, label %dec_label_pc_1858, label %dec_label_pc_1869, !insn.addr !307

dec_label_pc_1869:                                ; preds = %dec_label_pc_1858
  %84 = call i128 @__asm_movdqa(i128 %81), !insn.addr !308
  %85 = call i128 @__asm_psrldq(i128 %84, i8 8), !insn.addr !309
  %86 = and i64 %arg4, 4294967292, !insn.addr !310
  %87 = call i128 @__asm_paddd(i128 %81, i128 %85), !insn.addr !311
  %88 = call i128 @__asm_movdqa(i128 %87), !insn.addr !312
  %89 = call i128 @__asm_psrldq(i128 %88, i8 4), !insn.addr !313
  %90 = call i128 @__asm_paddd(i128 %87, i128 %89), !insn.addr !314
  %91 = call i32 @__asm_movd.1(i128 %90), !insn.addr !315
  %92 = urem i64 %arg4, 4
  %93 = icmp eq i64 %92, 0, !insn.addr !316
  store i32 %91, i32* %rax.4.reg2mem, !insn.addr !317
  store i64 %86, i64* %rcx.1.reg2mem, !insn.addr !317
  br i1 %93, label %dec_label_pc_18c8, label %dec_label_pc_1893, !insn.addr !317

dec_label_pc_1893:                                ; preds = %dec_label_pc_182f, %dec_label_pc_1869
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %rax.4.reload = load i32, i32* %rax.4.reg2mem
  %sext1 = mul i64 %rcx.1.reload, 4294967296
  %94 = ashr exact i64 %sext1, 30, !insn.addr !318
  %95 = add i64 %94, %arg3
  %96 = inttoptr i64 %95 to i32*, !insn.addr !319
  %97 = load i32, i32* %96, align 4, !insn.addr !319
  %98 = add i32 %97, %rax.4.reload, !insn.addr !319
  %99 = or i64 %rcx.1.reload, 1, !insn.addr !320
  %100 = icmp ult i64 %99, %2, !insn.addr !321
  store i32 %98, i32* %rax.5.shrunk.reg2mem, !insn.addr !321
  br i1 %100, label %dec_label_pc_18a9, label %dec_label_pc_18c2, !insn.addr !321

dec_label_pc_18a9:                                ; preds = %dec_label_pc_1893
  %101 = or i64 %rcx.1.reload, 2, !insn.addr !322
  %102 = add i64 %95, 4, !insn.addr !323
  %103 = inttoptr i64 %102 to i32*, !insn.addr !323
  %104 = load i32, i32* %103, align 4, !insn.addr !323
  %105 = add i32 %104, %98, !insn.addr !323
  %106 = icmp ult i64 %101, %2, !insn.addr !324
  store i32 %105, i32* %rax.5.shrunk.reg2mem, !insn.addr !324
  br i1 %106, label %dec_label_pc_18b5, label %dec_label_pc_18c2, !insn.addr !324

dec_label_pc_18b5:                                ; preds = %dec_label_pc_18a9
  %107 = add i64 %95, 8, !insn.addr !325
  %108 = inttoptr i64 %107 to i32*, !insn.addr !325
  %109 = load i32, i32* %108, align 4, !insn.addr !325
  %110 = add i32 %109, %105, !insn.addr !325
  %111 = zext i32 %110 to i64, !insn.addr !325
  ret i64 %111, !insn.addr !326

dec_label_pc_18c2:                                ; preds = %dec_label_pc_1770, %dec_label_pc_18a9, %dec_label_pc_1893
  %rax.5.shrunk.reload = load i32, i32* %rax.5.shrunk.reg2mem
  %rax.5 = zext i32 %rax.5.shrunk.reload to i64
  ret i64 %rax.5, !insn.addr !327

dec_label_pc_18c8:                                ; preds = %dec_label_pc_1869
  %112 = sext i32 %91 to i64, !insn.addr !315
  ret i64 %112, !insn.addr !328

dec_label_pc_18d0:                                ; preds = %dec_label_pc_177f
  %sext2 = mul i64 %arg4, 4294967296
  %113 = ashr exact i64 %sext2, 32, !insn.addr !329
  store i64 0, i64* %rax.6.reg2mem, !insn.addr !330
  br label %dec_label_pc_18d8, !insn.addr !330

dec_label_pc_18d8:                                ; preds = %dec_label_pc_18d8, %dec_label_pc_18d0
  %rax.6.reload = load i64, i64* %rax.6.reg2mem
  %114 = mul i64 %rax.6.reload, 4, !insn.addr !331
  %115 = add i64 %114, %arg2, !insn.addr !331
  %116 = inttoptr i64 %115 to i32*, !insn.addr !331
  %117 = load i32, i32* %116, align 4, !insn.addr !331
  %118 = add i64 %114, %arg1, !insn.addr !332
  %119 = inttoptr i64 %118 to i32*, !insn.addr !332
  %120 = load i32, i32* %119, align 4, !insn.addr !332
  %121 = add i32 %120, %117, !insn.addr !332
  %122 = add i64 %114, %arg3, !insn.addr !333
  %123 = inttoptr i64 %122 to i32*, !insn.addr !333
  store i32 %121, i32* %123, align 4, !insn.addr !333
  %124 = add i64 %rax.6.reload, 1, !insn.addr !334
  %125 = icmp eq i64 %124, %113, !insn.addr !335
  %126 = icmp eq i1 %125, false, !insn.addr !336
  store i64 %124, i64* %rax.6.reg2mem, !insn.addr !336
  br i1 %126, label %dec_label_pc_18d8, label %dec_label_pc_18ea, !insn.addr !336

dec_label_pc_18ea:                                ; preds = %dec_label_pc_18d8
  %127 = add i64 %arg4, 4294967295, !insn.addr !337
  %128 = and i64 %127, 4294967295, !insn.addr !337
  store i64 %128, i64* %r9.0.reg2mem, !insn.addr !338
  br label %dec_label_pc_182f, !insn.addr !338

; uselistorder directives
  uselistorder i64 %114, { 2, 1, 0 }
  uselistorder i32 %105, { 1, 0 }
  uselistorder i32 %98, { 1, 0 }
  uselistorder i64 %rcx.1.reload, { 1, 0, 2 }
  uselistorder i32 %91, { 1, 0 }
  uselistorder i128 %87, { 1, 0 }
  uselistorder i128 %81, { 2, 1, 0 }
  uselistorder i64 %rax.3.reload, { 1, 0 }
  uselistorder i64 %52, { 1, 0 }
  uselistorder i64 %39, { 2, 1, 0 }
  uselistorder i64 %r10.0.reload, { 1, 0 }
  uselistorder i128 %25, { 1, 0, 2 }
  uselistorder i64 %rax.0.reload, { 0, 3, 2, 1 }
  uselistorder i64 %2, { 2, 3, 4, 1, 0, 5 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r10.0.reg2mem, { 0, 2, 1 }
  uselistorder i128* %xmm0.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r9.0.reg2mem, { 3, 0, 1, 2 }
  uselistorder i128* %xmm0.2.reg2mem, { 0, 2, 1 }
  uselistorder i128* %xmm0.3.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.4.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %rax.5.shrunk.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rax.6.reg2mem, { 1, 0, 2 }
  uselistorder i64 4294967292, { 0, 1, 3, 2 }
  uselistorder i64 16, { 1, 2, 0, 3 }
  uselistorder i64 4, { 0, 6, 3, 1, 2, 4, 5 }
  uselistorder i64 %arg4, { 2, 0, 1, 3, 4, 6, 5 }
  uselistorder i64 %arg3, { 2, 1, 0, 8, 3, 4, 5, 6, 7 }
  uselistorder i64 %arg2, { 1, 2, 3, 4, 0 }
  uselistorder i64 %arg1, { 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_18c2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1893, { 1, 0 }
  uselistorder label %dec_label_pc_1804, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1900:
  ret i64 72, !insn.addr !339
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_1910:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !340
  %1 = and i64 %0, 4294967294, !insn.addr !340
  ret i64 %1, !insn.addr !341
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1920:
  ret i64 20, !insn.addr !342
}

define i64 @param_division_by_zero(i64 %arg1) local_unnamed_addr {
dec_label_pc_1930:
  %storemerge.reg2mem = alloca i64, !insn.addr !343
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4752 to void (i32)*)), !insn.addr !344
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4140 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !345
  %2 = icmp eq i32 %1, 0, !insn.addr !346
  %3 = icmp eq i1 %2, false, !insn.addr !347
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !347
  br i1 %3, label %dec_label_pc_196b, label %dec_label_pc_1961, !insn.addr !347

dec_label_pc_1961:                                ; preds = %dec_label_pc_1930
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %storemerge.reg2mem, !insn.addr !348
  br label %dec_label_pc_196b, !insn.addr !348

dec_label_pc_196b:                                ; preds = %dec_label_pc_1930, %dec_label_pc_1961
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !349

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_196b, { 1, 0 }
}

define i64 @call_division_by_zero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1980:
  %0 = call i64 @param_division_by_zero.constprop.1(), !insn.addr !350
  %1 = call i64 @param_division_by_zero.constprop.0(), !insn.addr !351
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !352
  %3 = add i64 %1, %0, !insn.addr !353
  %4 = and i64 %3, 4294967295, !insn.addr !353
  ret i64 %4, !insn.addr !354
}

define i64 @param_null_pointer_deref(i64* %arg1) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4800 to void (i32)*)), !insn.addr !355
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !356
  %4 = icmp eq i32 %3, 0, !insn.addr !357
  %5 = icmp eq i1 %4, false, !insn.addr !358
  %6 = and i64 %1, 4294967295
  %storemerge = select i1 %5, i64 4294967295, i64 %6
  ret i64 %storemerge, !insn.addr !359

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 2, 3, 1, 0, 4 }
}

define i64 @call_null_pointer_deref(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1a00:
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !360
  store i64 42, i64* %stack_var_-36, align 8, !insn.addr !361
  %1 = call i64 @param_null_pointer_deref(i64* nonnull %stack_var_-36), !insn.addr !362
  %2 = call i64 @param_null_pointer_deref(i64* null), !insn.addr !363
  %3 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !364
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !365
  %5 = icmp eq i64 %0, %4, !insn.addr !365
  %6 = icmp eq i1 %5, false, !insn.addr !366
  br i1 %6, label %dec_label_pc_1a5d, label %dec_label_pc_1a56, !insn.addr !366

dec_label_pc_1a56:                                ; preds = %dec_label_pc_1a00
  %7 = add i64 %2, %1, !insn.addr !367
  %8 = and i64 %7, 4294967295, !insn.addr !367
  ret i64 %8, !insn.addr !368

dec_label_pc_1a5d:                                ; preds = %dec_label_pc_1a00
  call void @__stack_chk_fail(), !insn.addr !369
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !370
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = and i64 %arg1, 4294967295, !insn.addr !371
  ret i64 %0, !insn.addr !372
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a80:
  %0 = call i64* @malloc(i32 16), !insn.addr !373
  %1 = icmp eq i64* %0, null, !insn.addr !374
  br i1 %1, label %dec_label_pc_1aa2, label %dec_label_pc_1a96, !insn.addr !375

dec_label_pc_1a96:                                ; preds = %dec_label_pc_1a80
  %2 = and i64 %arg1, 4294967295, !insn.addr !376
  call void @free(i64* nonnull %0), !insn.addr !377
  ret i64 %2, !insn.addr !378

dec_label_pc_1aa2:                                ; preds = %dec_label_pc_1a80
  ret i64 4294967294, !insn.addr !379
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1ab0:
  %storemerge.reg2mem = alloca i64, !insn.addr !380
  %0 = call i64* @malloc(i32 16), !insn.addr !381
  %1 = icmp eq i64* %0, null, !insn.addr !382
  store i64 8, i64* %storemerge.reg2mem, !insn.addr !383
  br i1 %1, label %dec_label_pc_1ad4, label %dec_label_pc_1ac7, !insn.addr !383

dec_label_pc_1ac7:                                ; preds = %dec_label_pc_1ab0
  call void @free(i64* nonnull %0), !insn.addr !384
  store i64 30, i64* %storemerge.reg2mem, !insn.addr !385
  br label %dec_label_pc_1ad4, !insn.addr !385

dec_label_pc_1ad4:                                ; preds = %dec_label_pc_1ab0, %dec_label_pc_1ac7
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !386

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ad4, { 1, 0 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ae0:
  %rax.0.reg2mem = alloca i64, !insn.addr !387
  %0 = add i64 %arg2, %arg1, !insn.addr !388
  %1 = and i64 %0, 4294967295, !insn.addr !388
  %2 = trunc i64 %arg1 to i32, !insn.addr !389
  %3 = icmp slt i32 %2, 1
  %4 = trunc i64 %arg2 to i32, !insn.addr !390
  %5 = icmp slt i32 %4, 1
  %or.cond = or i1 %3, %5
  br i1 %or.cond, label %dec_label_pc_1b00, label %dec_label_pc_1aef, !insn.addr !391

dec_label_pc_1aef:                                ; preds = %dec_label_pc_1ae0
  %6 = trunc i64 %0 to i32, !insn.addr !392
  %7 = icmp slt i32 %6, 0, !insn.addr !392
  %8 = select i1 %7, i64 4294967295, i64 %1, !insn.addr !393
  ret i64 %8, !insn.addr !394

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1ae0
  %9 = and i64 %arg2, %arg1
  %10 = trunc i64 %9 to i32, !insn.addr !395
  %11 = icmp slt i32 %10, 0, !insn.addr !395
  %12 = icmp eq i1 %11, false, !insn.addr !396
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !396
  br i1 %12, label %dec_label_pc_1b0e, label %dec_label_pc_1b04, !insn.addr !396

dec_label_pc_1b04:                                ; preds = %dec_label_pc_1b00
  %13 = trunc i64 %0 to i32, !insn.addr !397
  %14 = icmp eq i32 %13, 0, !insn.addr !397
  %15 = icmp slt i32 %13, 0, !insn.addr !397
  %16 = icmp eq i1 %15, false, !insn.addr !398
  %17 = icmp eq i1 %14, false, !insn.addr !398
  %18 = icmp eq i1 %16, %17, !insn.addr !398
  %19 = select i1 %18, i64 4294967294, i64 %1, !insn.addr !398
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !398
  br label %dec_label_pc_1b0e, !insn.addr !398

dec_label_pc_1b0e:                                ; preds = %dec_label_pc_1b04, %dec_label_pc_1b00
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !399

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %1, { 1, 0, 2 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1b10:
  ret i64 2000000000, !insn.addr !400
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = mul i64 %arg1, 2, !insn.addr !401
  %1 = and i64 %0, 4294967294, !insn.addr !401
  ret i64 %1, !insn.addr !402

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 0, 1, 2, 6, 3 }
  uselistorder i64 2, { 0, 1, 3, 2, 4 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1b30:
  ret i64 10, !insn.addr !403

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1b40:
  ret i64 47, !insn.addr !404
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1b50:
  ret i64 47, !insn.addr !405
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1b60:
  %rbx.0.reg2mem = alloca i64, !insn.addr !406
  %rax.1.reg2mem = alloca i64, !insn.addr !406
  %rdx.0.reg2mem = alloca i64, !insn.addr !406
  %rax.0.reg2mem = alloca i64, !insn.addr !406
  %stack_var_-76 = alloca i64, align 8
  %stack_var_-72 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !407
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_2008 to i8*)), !insn.addr !408
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2137 to i8*)), !insn.addr !409
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !410
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !410
  br label %dec_label_pc_1bb0, !insn.addr !410

dec_label_pc_1bb0:                                ; preds = %dec_label_pc_1bb0, %dec_label_pc_1b60
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = trunc i64 %rax.0.reload to i32, !insn.addr !411
  %4 = ashr i32 %3, 31, !insn.addr !411
  %5 = zext i32 %4 to i64, !insn.addr !412
  %6 = mul i64 %5, 4294967296, !insn.addr !412
  %7 = or i64 %6, %rax.0.reload, !insn.addr !412
  %8 = srem i64 %7, %rdx.0.reload, !insn.addr !412
  %9 = and i64 %8, 4294967295, !insn.addr !412
  %10 = trunc i64 %8 to i32, !insn.addr !413
  %11 = icmp eq i32 %10, 0, !insn.addr !413
  %12 = icmp eq i1 %11, false, !insn.addr !414
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !414
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !414
  br i1 %12, label %dec_label_pc_1bb0, label %dec_label_pc_1bbb, !insn.addr !414

dec_label_pc_1bbb:                                ; preds = %dec_label_pc_1bb0
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2153 to i8*)), !insn.addr !415
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_216f to i8*)), !insn.addr !416
  %15 = bitcast i32* %stack_var_-72 to i8*, !insn.addr !417
  %16 = call i8* @strncpy(i8* nonnull %15, i8* bitcast (i8** @global_var_4010 to i8*), i32 31), !insn.addr !417
  %17 = load i32, i32* %stack_var_-72, align 4, !insn.addr !418
  %18 = zext i32 %17 to i64, !insn.addr !418
  %sext = mul i64 %18, 72057594037927936
  %19 = ashr exact i64 %sext, 56, !insn.addr !418
  %20 = trunc i64 %19 to i8, !insn.addr !419
  %21 = icmp eq i8 %20, 0, !insn.addr !419
  br i1 %21, label %dec_label_pc_1c36, label %dec_label_pc_1c20.preheader, !insn.addr !420

dec_label_pc_1c20.preheader:                      ; preds = %dec_label_pc_1bbb
  %22 = ptrtoint i8* %16 to i64, !insn.addr !417
  store i64 %22, i64* %rax.1.reg2mem
  store i64 %19, i64* %rbx.0.reg2mem
  br label %dec_label_pc_1c20

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c20.preheader, %dec_label_pc_1c20
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %23 = trunc i64 %rbx.0.reload to i8, !insn.addr !421
  %24 = xor i8 %23, 90, !insn.addr !421
  %25 = add i64 %rax.1.reload, 1, !insn.addr !422
  %26 = inttoptr i64 %rax.1.reload to i8*, !insn.addr !423
  store i8 %24, i8* %26, align 1, !insn.addr !423
  %27 = inttoptr i64 %25 to i8*, !insn.addr !424
  %28 = load i8, i8* %27, align 1, !insn.addr !424
  %29 = zext i8 %28 to i64, !insn.addr !424
  %30 = icmp eq i8 %28, 0, !insn.addr !425
  %31 = icmp eq i1 %30, false, !insn.addr !426
  store i64 %25, i64* %rax.1.reg2mem, !insn.addr !426
  store i64 %29, i64* %rbx.0.reg2mem, !insn.addr !426
  br i1 %31, label %dec_label_pc_1c20, label %dec_label_pc_1c36, !insn.addr !426

dec_label_pc_1c36:                                ; preds = %dec_label_pc_1c20, %dec_label_pc_1bbb
  %32 = call i32 @strlen(i8* %16), !insn.addr !427
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_218c to i8*)), !insn.addr !428
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2038 to i8*)), !insn.addr !429
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2068 to i8*)), !insn.addr !430
  %36 = call i64 @call_vectorized_loop(), !insn.addr !431
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2090 to i8*)), !insn.addr !432
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20b8 to i8*)), !insn.addr !433
  %39 = call i64 @param_division_by_zero.constprop.1(), !insn.addr !434
  %40 = call i64 @param_division_by_zero.constprop.0(), !insn.addr !435
  %41 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i32 xor (i32 ptrtoint (i8** @global_var_20b8 to i32), i32 ptrtoint (i8** @global_var_20b8 to i32)) to void (i32)*)), !insn.addr !436
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !437
  store i64 42, i64* %stack_var_-76, align 8, !insn.addr !438
  %43 = call i64 @param_null_pointer_deref(i64* nonnull %stack_var_-76), !insn.addr !439
  %44 = call i64 @param_null_pointer_deref(i64* null), !insn.addr !440
  %45 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i32 xor (i32 ptrtoint (i8** @global_var_21a8 to i32), i32 ptrtoint (i8** @global_var_21a8 to i32)) to void (i32)*)), !insn.addr !441
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !442
  %47 = call i64* @malloc(i32 16), !insn.addr !443
  %48 = icmp eq i64* %47, null, !insn.addr !444
  br i1 %48, label %dec_label_pc_1d40, label %dec_label_pc_1d36, !insn.addr !445

dec_label_pc_1d36:                                ; preds = %dec_label_pc_1c36
  call void @free(i64* nonnull %47), !insn.addr !446
  br label %dec_label_pc_1d40, !insn.addr !447

dec_label_pc_1d40:                                ; preds = %dec_label_pc_1c36, %dec_label_pc_1d36
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21e1 to i8*)), !insn.addr !448
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20d8 to i8*)), !insn.addr !449
  %51 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21fe to i8*)), !insn.addr !450
  %52 = call i64 @__readfsqword(i64 40), !insn.addr !451
  %53 = icmp eq i64 %0, %52, !insn.addr !451
  %54 = icmp eq i1 %53, false, !insn.addr !452
  br i1 %54, label %dec_label_pc_1db8, label %dec_label_pc_1d93, !insn.addr !452

dec_label_pc_1d93:                                ; preds = %dec_label_pc_1d40
  %55 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2110 to i8*)), !insn.addr !453
  %56 = sext i32 %55 to i64, !insn.addr !453
  ret i64 %56, !insn.addr !453

dec_label_pc_1db8:                                ; preds = %dec_label_pc_1d40
  call void @__stack_chk_fail(), !insn.addr !454
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !454

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 0 }
  uselistorder void ()* @__stack_chk_fail, { 0, 3, 2, 1, 4 }
  uselistorder void (i64*)* @free, { 0, 2, 1, 3 }
  uselistorder i64* (i32)* @malloc, { 0, 2, 1, 3 }
  uselistorder i32 16, { 1, 2, 3, 0 }
  uselistorder i64 (i64*)* @param_null_pointer_deref, { 1, 0, 3, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 0, 7, 4, 6, 5, 3, 2, 8 }
  uselistorder i32 (i8*)* @strlen, { 0, 2, 1, 3 }
  uselistorder i64 1, { 12, 8, 0, 2, 3, 9, 10, 11, 1, 4, 5, 6, 7 }
  uselistorder i8 0, { 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 0, 3, 2, 1, 4 }
  uselistorder i1 false, { 22, 23, 24, 3, 2, 4, 5, 21, 6, 7, 8, 9, 0, 1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i32 0, { 28, 3, 4, 5, 6, 27, 7, 1, 0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 2 }
  uselistorder i64 4294967295, { 7, 8, 9, 10, 11, 12, 6, 2, 13, 0, 14, 15, 16, 17, 18, 19, 3, 20, 21, 23, 22, 4, 24, 25, 26, 5, 27, 28, 29, 1 }
  uselistorder i32 31, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 0, 43, 1, 3, 2, 6, 5, 4, 7, 48, 9, 10, 8, 49, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 44, 45, 46, 47 }
  uselistorder label %dec_label_pc_1d40, { 1, 0 }
  uselistorder label %dec_label_pc_1c20, { 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !455

; uselistorder directives
  uselistorder i32 1, { 4, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 76, 79, 8, 7, 6, 5, 54, 70, 9, 10, 80, 3, 11, 71, 55, 72, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 73, 33, 32, 31, 30, 29, 28, 27, 26, 1, 74, 40, 39, 38, 37, 36, 35, 34, 0, 77, 43, 42, 41, 78, 46, 45, 44, 48, 47, 50, 49, 75, 52, 51, 82, 83, 2, 81, 53 }
}

declare void @free(i64*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64 @__longjmp_chk(i64*, i64) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movd(i32) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_psrldq(i128, i8) local_unnamed_addr

declare i32 @__asm_movd.1(i128) local_unnamed_addr

declare i128 @__asm_movdqu(i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i128 @__asm_movq(i64) local_unnamed_addr

declare void @__asm_movq.2(i64, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4308}
!7 = !{i64 4324}
!8 = !{i64 4340}
!9 = !{i64 4356}
!10 = !{i64 4372}
!11 = !{i64 4388}
!12 = !{i64 4404}
!13 = !{i64 4420}
!14 = !{i64 4436}
!15 = !{i64 4452}
!16 = !{i64 4468}
!17 = !{i64 4490}
!18 = !{i64 4501}
!19 = !{i64 4543}
!20 = !{i64 4549}
!21 = !{i64 4600}
!22 = !{i64 4664}
!23 = !{i64 4676}
!24 = !{i64 4683}
!25 = !{i64 4686}
!26 = !{i64 4697}
!27 = !{i64 4699}
!28 = !{i64 4706}
!29 = !{i64 4711}
!30 = !{i64 4716}
!31 = !{i64 4724}
!32 = !{i64 4728}
!33 = !{i64 4740}
!34 = !{i64 4774}
!35 = !{i64 4784}
!36 = !{i64 4822}
!37 = !{i64 4832}
!38 = !{i64 4864}
!39 = !{i64 4876}
!40 = !{i64 4905}
!41 = !{i64 4928}
!42 = !{i64 4940}
!43 = !{i64 4949}
!44 = !{i64 4961}
!45 = !{i64 4964}
!46 = !{i64 4980}
!47 = !{i64 4982}
!48 = !{i64 5001}
!49 = !{i64 5008}
!50 = !{i64 5014}
!51 = !{i64 5017}
!52 = !{i64 5038}
!53 = !{i64 5040}
!54 = !{i64 5020}
!55 = !{i64 5023}
!56 = !{i64 5029}
!57 = !{i64 5032}
!58 = !{i64 5042}
!59 = !{i64 5044}
!60 = !{i64 5050}
!61 = !{i64 5051}
!62 = !{i64 5055}
!63 = !{i64 5057}
!64 = !{i64 5059}
!65 = !{i64 5062}
!66 = !{i64 5069}
!67 = !{i64 5072}
!68 = !{i64 5080}
!69 = !{i64 5084}
!70 = !{i64 5088}
!71 = !{i64 5102}
!72 = !{i64 5106}
!73 = !{i64 5107}
!74 = !{i64 5111}
!75 = !{i64 5113}
!76 = !{i64 5115}
!77 = !{i64 5128}
!78 = !{i64 5131}
!79 = !{i64 5145}
!80 = !{i64 5151}
!81 = !{i64 5154}
!82 = !{i64 5163}
!83 = !{i64 5165}
!84 = !{i64 5177}
!85 = !{i64 5184}
!86 = !{i64 5208}
!87 = !{i64 5213}
!88 = !{i64 5221}
!89 = !{i64 5224}
!90 = !{i64 5226}
!91 = !{i64 5234}
!92 = !{i64 5238}
!93 = !{i64 5241}
!94 = !{i64 5244}
!95 = !{i64 5246}
!96 = !{i64 5257}
!97 = !{i64 5264}
!98 = !{i64 5285}
!99 = !{i64 5304}
!100 = !{i64 5309}
!101 = !{i64 5321}
!102 = !{i64 5323}
!103 = !{i64 5328}
!104 = !{i64 5331}
!105 = !{i64 5335}
!106 = !{i64 5338}
!107 = !{i64 5341}
!108 = !{i64 5343}
!109 = !{i64 5345}
!110 = !{i64 5349}
!111 = !{i64 5361}
!112 = !{i64 5370}
!113 = !{i64 5354}
!114 = !{i64 5377}
!115 = !{i64 5378}
!116 = !{i64 5383}
!117 = !{i64 5392}
!118 = !{i64 5413}
!119 = !{i64 5432}
!120 = !{i64 5437}
!121 = !{i64 5449}
!122 = !{i64 5451}
!123 = !{i64 5456}
!124 = !{i64 5459}
!125 = !{i64 5463}
!126 = !{i64 5466}
!127 = !{i64 5469}
!128 = !{i64 5471}
!129 = !{i64 5473}
!130 = !{i64 5477}
!131 = !{i64 5489}
!132 = !{i64 5498}
!133 = !{i64 5482}
!134 = !{i64 5505}
!135 = !{i64 5506}
!136 = !{i64 5511}
!137 = !{i64 5520}
!138 = !{i64 5528}
!139 = !{i64 5537}
!140 = !{i64 5543}
!141 = !{i64 5549}
!142 = !{i64 5559}
!143 = !{i64 5564}
!144 = !{i64 5572}
!145 = !{i64 5575}
!146 = !{i64 5579}
!147 = !{i64 5584}
!148 = !{i64 5588}
!149 = !{i64 5591}
!150 = !{i64 5595}
!151 = !{i64 5599}
!152 = !{i64 5601}
!153 = !{i64 5603}
!154 = !{i64 5607}
!155 = !{i64 5612}
!156 = !{i64 5616}
!157 = !{i64 5620}
!158 = !{i64 5625}
!159 = !{i64 5629}
!160 = !{i64 5633}
!161 = !{i64 5638}
!162 = !{i64 5643}
!163 = !{i64 5645}
!164 = !{i64 5641}
!165 = !{i64 5647}
!166 = !{i64 5649}
!167 = !{i64 5651}
!168 = !{i64 5654}
!169 = !{i64 5656}
!170 = !{i64 5660}
!171 = !{i64 5663}
!172 = !{i64 5665}
!173 = !{i64 5669}
!174 = !{i64 5672}
!175 = !{i64 5674}
!176 = !{i64 5678}
!177 = !{i64 5681}
!178 = !{i64 5683}
!179 = !{i64 5687}
!180 = !{i64 5690}
!181 = !{i64 5692}
!182 = !{i64 5696}
!183 = !{i64 5699}
!184 = !{i64 5701}
!185 = !{i64 5705}
!186 = !{i64 5708}
!187 = !{i64 5710}
!188 = !{i64 5714}
!189 = !{i64 5717}
!190 = !{i64 5719}
!191 = !{i64 5721}
!192 = !{i64 5725}
!193 = !{i64 5728}
!194 = !{i64 5736}
!195 = !{i64 5738}
!196 = !{i64 5739}
!197 = !{i64 5741}
!198 = !{i64 5753}
!199 = !{i64 5760}
!200 = !{i64 5766}
!201 = !{i64 5777}
!202 = !{i64 5783}
!203 = !{i64 5789}
!204 = !{i64 5799}
!205 = !{i64 5804}
!206 = !{i64 5812}
!207 = !{i64 5815}
!208 = !{i64 5819}
!209 = !{i64 5824}
!210 = !{i64 5828}
!211 = !{i64 5831}
!212 = !{i64 5835}
!213 = !{i64 5839}
!214 = !{i64 5841}
!215 = !{i64 5843}
!216 = !{i64 5849}
!217 = !{i64 5854}
!218 = !{i64 5857}
!219 = !{i64 5863}
!220 = !{i64 5867}
!221 = !{i64 5872}
!222 = !{i64 5876}
!223 = !{i64 5880}
!224 = !{i64 5882}
!225 = !{i64 5861}
!226 = !{i64 5884}
!227 = !{i64 5886}
!228 = !{i64 5888}
!229 = !{i64 5891}
!230 = !{i64 5893}
!231 = !{i64 5897}
!232 = !{i64 5900}
!233 = !{i64 5902}
!234 = !{i64 5906}
!235 = !{i64 5909}
!236 = !{i64 5911}
!237 = !{i64 5915}
!238 = !{i64 5918}
!239 = !{i64 5920}
!240 = !{i64 5924}
!241 = !{i64 5927}
!242 = !{i64 5929}
!243 = !{i64 5933}
!244 = !{i64 5936}
!245 = !{i64 5938}
!246 = !{i64 5942}
!247 = !{i64 5945}
!248 = !{i64 5947}
!249 = !{i64 5951}
!250 = !{i64 5954}
!251 = !{i64 5956}
!252 = !{i64 5958}
!253 = !{i64 5962}
!254 = !{i64 5968}
!255 = !{i64 5993}
!256 = !{i64 6000}
!257 = !{i64 6007}
!258 = !{i64 6009}
!259 = !{i64 6004}
!260 = !{i64 6015}
!261 = !{i64 6026}
!262 = !{i64 6022}
!263 = !{i64 6039}
!264 = !{i64 6049}
!265 = !{i64 6057}
!266 = !{i64 6051}
!267 = !{i64 6067}
!268 = !{i64 6074}
!269 = !{i64 6078}
!270 = !{i64 6092}
!271 = !{i64 6096}
!272 = !{i64 6101}
!273 = !{i64 6106}
!274 = !{i64 6110}
!275 = !{i64 6114}
!276 = !{i64 6118}
!277 = !{i64 6121}
!278 = !{i64 6126}
!279 = !{i64 6131}
!280 = !{i64 6134}
!281 = !{i64 6139}
!282 = !{i64 6142}
!283 = !{i64 6146}
!284 = !{i64 6148}
!285 = !{i64 6153}
!286 = !{i64 6158}
!287 = !{i64 6162}
!288 = !{i64 6170}
!289 = !{i64 6173}
!290 = !{i64 6175}
!291 = !{i64 6178}
!292 = !{i64 6182}
!293 = !{i64 6185}
!294 = !{i64 6188}
!295 = !{i64 6191}
!296 = !{i64 6195}
!297 = !{i64 6207}
!298 = !{i64 6211}
!299 = !{i64 6214}
!300 = !{i64 6217}
!301 = !{i64 6221}
!302 = !{i64 6226}
!303 = !{i64 6232}
!304 = !{i64 6236}
!305 = !{i64 6240}
!306 = !{i64 6244}
!307 = !{i64 6247}
!308 = !{i64 6249}
!309 = !{i64 6256}
!310 = !{i64 6261}
!311 = !{i64 6264}
!312 = !{i64 6268}
!313 = !{i64 6272}
!314 = !{i64 6277}
!315 = !{i64 6281}
!316 = !{i64 6285}
!317 = !{i64 6289}
!318 = !{i64 6294}
!319 = !{i64 6302}
!320 = !{i64 6305}
!321 = !{i64 6311}
!322 = !{i64 6313}
!323 = !{i64 6316}
!324 = !{i64 6323}
!325 = !{i64 6325}
!326 = !{i64 6329}
!327 = !{i64 6338}
!328 = !{i64 6344}
!329 = !{i64 6352}
!330 = !{i64 6357}
!331 = !{i64 6360}
!332 = !{i64 6363}
!333 = !{i64 6366}
!334 = !{i64 6369}
!335 = !{i64 6373}
!336 = !{i64 6376}
!337 = !{i64 6378}
!338 = !{i64 6382}
!339 = !{i64 6409}
!340 = !{i64 6420}
!341 = !{i64 6424}
!342 = !{i64 6441}
!343 = !{i64 6448}
!344 = !{i64 6472}
!345 = !{i64 6484}
!346 = !{i64 6493}
!347 = !{i64 6495}
!348 = !{i64 6503}
!349 = !{i64 6511}
!350 = !{i64 6538}
!351 = !{i64 6545}
!352 = !{i64 6559}
!353 = !{i64 6568}
!354 = !{i64 6573}
!355 = !{i64 6601}
!356 = !{i64 6613}
!357 = !{i64 6622}
!358 = !{i64 6624}
!359 = !{i64 6637}
!360 = !{i64 6666}
!361 = !{i64 6687}
!362 = !{i64 6695}
!363 = !{i64 6704}
!364 = !{i64 6718}
!365 = !{i64 6731}
!366 = !{i64 6740}
!367 = !{i64 6723}
!368 = !{i64 6748}
!369 = !{i64 6749}
!370 = !{i64 6765}
!371 = !{i64 6772}
!372 = !{i64 6774}
!373 = !{i64 6796}
!374 = !{i64 6801}
!375 = !{i64 6804}
!376 = !{i64 6789}
!377 = !{i64 6809}
!378 = !{i64 6817}
!379 = !{i64 6824}
!380 = !{i64 6832}
!381 = !{i64 6845}
!382 = !{i64 6850}
!383 = !{i64 6853}
!384 = !{i64 6858}
!385 = !{i64 6863}
!386 = !{i64 6872}
!387 = !{i64 6880}
!388 = !{i64 6884}
!389 = !{i64 6887}
!390 = !{i64 6891}
!391 = !{i64 6889}
!392 = !{i64 6895}
!393 = !{i64 6902}
!394 = !{i64 6905}
!395 = !{i64 6912}
!396 = !{i64 6914}
!397 = !{i64 6916}
!398 = !{i64 6923}
!399 = !{i64 6926}
!400 = !{i64 6937}
!401 = !{i64 6948}
!402 = !{i64 6951}
!403 = !{i64 6969}
!404 = !{i64 6985}
!405 = !{i64 7001}
!406 = !{i64 7008}
!407 = !{i64 7025}
!408 = !{i64 7041}
!409 = !{i64 7065}
!410 = !{i64 7080}
!411 = !{i64 7090}
!412 = !{i64 7091}
!413 = !{i64 7095}
!414 = !{i64 7097}
!415 = !{i64 7129}
!416 = !{i64 7153}
!417 = !{i64 7175}
!418 = !{i64 7180}
!419 = !{i64 7193}
!420 = !{i64 7195}
!421 = !{i64 7200}
!422 = !{i64 7203}
!423 = !{i64 7207}
!424 = !{i64 7210}
!425 = !{i64 7213}
!426 = !{i64 7215}
!427 = !{i64 7222}
!428 = !{i64 7244}
!429 = !{i64 7268}
!430 = !{i64 7292}
!431 = !{i64 7311}
!432 = !{i64 7320}
!433 = !{i64 7344}
!434 = !{i64 7349}
!435 = !{i64 7356}
!436 = !{i64 7370}
!437 = !{i64 7392}
!438 = !{i64 7402}
!439 = !{i64 7410}
!440 = !{i64 7419}
!441 = !{i64 7433}
!442 = !{i64 7455}
!443 = !{i64 7465}
!444 = !{i64 7473}
!445 = !{i64 7476}
!446 = !{i64 7478}
!447 = !{i64 7483}
!448 = !{i64 7502}
!449 = !{i64 7526}
!450 = !{i64 7550}
!451 = !{i64 7560}
!452 = !{i64 7569}
!453 = !{i64 7596}
!454 = !{i64 7608}
!455 = !{i64 7628}
