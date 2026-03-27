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
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2004 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2031 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_204d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_2069 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_2086 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20a2 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20cc = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_20f1 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2117 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_2137 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_2153 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_2170 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_218d = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21be = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21db = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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
dec_label_pc_1190:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !19
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !19
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !19
  %3 = call i32 @__libc_start_main(i64 4480, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !19
  %4 = call i64 @__asm_hlt(), !insn.addr !20
  unreachable, !insn.addr !20
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11c0:
  ret i64 16408, !insn.addr !21
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11f0:
  ret i64 0, !insn.addr !22
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1230:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_4020, align 1, !insn.addr !23
  %3 = icmp eq i8 %2, 0, !insn.addr !23
  %4 = icmp eq i1 %3, false, !insn.addr !24
  br i1 %4, label %dec_label_pc_1268, label %dec_label_pc_123d, !insn.addr !24

dec_label_pc_123d:                                ; preds = %dec_label_pc_1230
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !25
  %6 = icmp eq i64 %5, 0, !insn.addr !25
  br i1 %6, label %dec_label_pc_1257, label %dec_label_pc_124b, !insn.addr !26

dec_label_pc_124b:                                ; preds = %dec_label_pc_123d
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !27
  %8 = inttoptr i64 %7 to i64*, !insn.addr !28
  call void @__cxa_finalize(i64* %8), !insn.addr !28
  br label %dec_label_pc_1257, !insn.addr !28

dec_label_pc_1257:                                ; preds = %dec_label_pc_124b, %dec_label_pc_123d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !29
  store i8 1, i8* @global_var_4020, align 1, !insn.addr !30
  ret i64 %9, !insn.addr !31

dec_label_pc_1268:                                ; preds = %dec_label_pc_1230
  ret i64 %1, !insn.addr !32

; uselistorder directives
  uselistorder i8* @global_var_4020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1270:
  %0 = call i64 @register_tm_clones(), !insn.addr !33
  ret i64 %0, !insn.addr !33
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_1279:
  store i32 1, i32* bitcast (i64* @global_var_4128 to i32*), align 8, !insn.addr !34
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4140, i64 1), !insn.addr !35
  ret i64 %0, !insn.addr !35
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_129b:
  store i32 1, i32* bitcast (i64* @global_var_4040 to i32*), align 8, !insn.addr !36
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4060, i64 1), !insn.addr !37
  ret i64 %0, !insn.addr !37

; uselistorder directives
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_12bd:
  %0 = and i64 %arg1, 4294967295, !insn.addr !38
  ret i64 %0, !insn.addr !39
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_12c4:
  ret i64 10, !insn.addr !40
}

define i64 @param_opaque_predicate(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_12ce:
  %.lcssa.reg2mem = alloca i32, !insn.addr !41
  %rax.05.reg2mem = alloca i64, !insn.addr !41
  %rcx.06.in.reg2mem = alloca i64, !insn.addr !41
  %.reg2mem = alloca i32, !insn.addr !41
  %0 = add i64 %arg1, 1, !insn.addr !42
  %1 = trunc i64 %0 to i32, !insn.addr !43
  %2 = icmp eq i32 %1, 0, !insn.addr !43
  %3 = trunc i64 %arg1 to i32
  store i32 %3, i32* %.lcssa.reg2mem, !insn.addr !44
  br i1 %2, label %dec_label_pc_12fb, label %dec_label_pc_12f2.lr.ph, !insn.addr !44

dec_label_pc_12f2.lr.ph:                          ; preds = %dec_label_pc_12ce
  %4 = and i64 %arg1, 4294967295, !insn.addr !45
  store i32 %3, i32* %.reg2mem
  store i64 %0, i64* %rcx.06.in.reg2mem
  store i64 %4, i64* %rax.05.reg2mem
  br label %dec_label_pc_12f2

dec_label_pc_12f2:                                ; preds = %dec_label_pc_12f2.lr.ph, %dec_label_pc_12f2
  %rax.05.reload = load i64, i64* %rax.05.reg2mem
  %rcx.06.in.reload = load i64, i64* %rcx.06.in.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %rcx.06 = and i64 %rcx.06.in.reload, 4294967295
  %5 = ashr i32 %.reload, 31, !insn.addr !46
  %6 = zext i32 %5 to i64, !insn.addr !47
  %7 = mul i64 %6, 4294967296, !insn.addr !47
  %8 = or i64 %7, %rax.05.reload, !insn.addr !47
  %9 = srem i64 %8, %rcx.06, !insn.addr !47
  %10 = trunc i64 %9 to i32, !insn.addr !43
  %11 = icmp eq i32 %10, 0, !insn.addr !43
  %12 = trunc i64 %rcx.06.in.reload to i32
  store i32 %12, i32* %.reg2mem, !insn.addr !44
  store i64 %9, i64* %rcx.06.in.reg2mem, !insn.addr !44
  store i64 %rcx.06, i64* %rax.05.reg2mem, !insn.addr !44
  store i32 %12, i32* %.lcssa.reg2mem, !insn.addr !44
  br i1 %11, label %dec_label_pc_12fb, label %dec_label_pc_12f2, !insn.addr !44

dec_label_pc_12fb:                                ; preds = %dec_label_pc_12f2, %dec_label_pc_12ce
  %13 = mul i64 %arg1, 2, !insn.addr !48
  %sext = mul i64 %arg1, 4294967296
  %14 = ashr exact i64 %sext, 32, !insn.addr !49
  %15 = mul nsw i64 %14, %14, !insn.addr !49
  %16 = or i64 %13, 1, !insn.addr !50
  %17 = add i64 %15, %16, !insn.addr !50
  %18 = trunc i64 %17 to i32, !insn.addr !50
  %sext2 = mul i64 %0, 4294967296
  %19 = ashr exact i64 %sext2, 32, !insn.addr !51
  %20 = mul nsw i64 %19, %19, !insn.addr !51
  %21 = trunc i64 %20 to i32, !insn.addr !51
  %22 = icmp eq i32 %18, %21, !insn.addr !52
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %23 = icmp eq i32 %.lcssa.reload, 1, !insn.addr !53
  %24 = icmp eq i1 %22, %23
  br i1 %24, label %dec_label_pc_1304, label %dec_label_pc_1308, !insn.addr !54

dec_label_pc_1304:                                ; preds = %dec_label_pc_12fb
  %25 = add i64 %13, 10, !insn.addr !55
  %26 = and i64 %25, 4294967294, !insn.addr !55
  ret i64 %26, !insn.addr !56

dec_label_pc_1308:                                ; preds = %dec_label_pc_12fb
  %27 = mul i64 %arg1, 3, !insn.addr !57
  %28 = add i64 %27, 20, !insn.addr !58
  %29 = and i64 %28, 4294967295, !insn.addr !58
  ret i64 %29, !insn.addr !59

; uselistorder directives
  uselistorder i64 %13, { 1, 0 }
  uselistorder i64 %rcx.06.in.reload, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.06.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.05.reg2mem, { 1, 0, 2 }
  uselistorder i64 4294967296, { 1, 2, 0 }
  uselistorder i64 %arg1, { 3, 0, 1, 4, 2, 5 }
  uselistorder label %dec_label_pc_12f2, { 1, 0 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_130f:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = call i64 @param_opaque_predicate(i64 5, i64 %2, i64 %3, i64 %4, i64 %1), !insn.addr !60
  ret i64 %5, !insn.addr !60

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_131a:
  %0 = trunc i64 %arg1 to i32
  %1 = udiv i32 %0, 2, !insn.addr !61
  %2 = urem i32 %0, 16, !insn.addr !62
  %reass.mul = mul i32 %0, 21
  %3 = add nuw i32 %2, %1, !insn.addr !63
  %4 = add i32 %3, %reass.mul, !insn.addr !64
  %5 = zext i32 %4 to i64, !insn.addr !64
  ret i64 %5, !insn.addr !65

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1334:
  ret i64 225, !insn.addr !66
}

define i64 @decrypt_string(i64 %arg1, i64* %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_133e:
  %rdx.02.reg2mem = alloca i64, !insn.addr !67
  %.reg2mem3 = alloca i8*, !insn.addr !67
  %.reg2mem = alloca i8, !insn.addr !67
  %0 = bitcast i64* %arg2 to i8*, !insn.addr !68
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !68
  %2 = trunc i64 %arg3 to i32, !insn.addr !68
  %3 = call i8* @strncpy(i8* %0, i8* %1, i32 %2), !insn.addr !68
  %4 = ptrtoint i8* %3 to i64, !insn.addr !68
  %5 = add i64 %arg3, -1, !insn.addr !69
  %6 = add i64 %5, %4, !insn.addr !69
  %7 = inttoptr i64 %6 to i8*, !insn.addr !69
  store i8 0, i8* %7, align 1, !insn.addr !69
  %8 = load i8, i8* %3, align 1, !insn.addr !70
  %9 = icmp eq i8 %8, 0, !insn.addr !71
  br i1 %9, label %dec_label_pc_1374, label %dec_label_pc_136a.preheader, !insn.addr !72

dec_label_pc_136a.preheader:                      ; preds = %dec_label_pc_133e
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %.reg2mem
  store i8* %3, i8** %.reg2mem3
  store i64 %4, i64* %rdx.02.reg2mem
  br label %dec_label_pc_136a

dec_label_pc_136a:                                ; preds = %dec_label_pc_136a.preheader, %dec_label_pc_136a
  %rdx.02.reload = load i64, i64* %rdx.02.reg2mem
  %.reload4 = load i8*, i8** %.reg2mem3
  %.reload = load i8, i8* %.reg2mem
  %11 = add i64 %rdx.02.reload, 1, !insn.addr !73
  %12 = xor i8 %.reload, %10, !insn.addr !74
  store i8 %12, i8* %.reload4, align 1, !insn.addr !74
  %13 = inttoptr i64 %11 to i8*, !insn.addr !70
  %14 = load i8, i8* %13, align 1, !insn.addr !70
  %15 = icmp eq i8 %14, 0, !insn.addr !71
  store i8 %14, i8* %.reg2mem, !insn.addr !72
  store i8* %13, i8** %.reg2mem3, !insn.addr !72
  store i64 %11, i64* %rdx.02.reg2mem, !insn.addr !72
  br i1 %15, label %dec_label_pc_1374, label %dec_label_pc_136a, !insn.addr !72

dec_label_pc_1374:                                ; preds = %dec_label_pc_136a, %dec_label_pc_133e
  ret i64 %4, !insn.addr !75

; uselistorder directives
  uselistorder i64 %4, { 2, 0, 1 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.reg2mem3, { 2, 0, 1 }
  uselistorder i64* %rdx.02.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 3, 0, 4, 2, 1 }
  uselistorder label %dec_label_pc_136a, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_137b:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !76
  %1 = load i64, i64* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !77
  %3 = bitcast i32* %stack_var_-48 to i64*, !insn.addr !78
  %4 = call i64 @decrypt_string(i64 16400, i64* nonnull %3, i64 32, i64 90, i64 %1), !insn.addr !78
  %5 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !79
  %6 = call i32 @strlen(i8* nonnull %5), !insn.addr !79
  %7 = load i32, i32* %stack_var_-48, align 4, !insn.addr !80
  %sext = mul i32 %7, 16777216
  %8 = ashr exact i32 %sext, 24, !insn.addr !81
  %9 = add i32 %8, %6, !insn.addr !81
  %10 = zext i32 %9 to i64, !insn.addr !81
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !82
  %12 = icmp eq i64 %2, %11, !insn.addr !82
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !83
  br i1 %12, label %dec_label_pc_13da, label %dec_label_pc_13d5, !insn.addr !83

dec_label_pc_13d5:                                ; preds = %dec_label_pc_137b
  call void @__stack_chk_fail(), !insn.addr !84
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_13da, !insn.addr !84

dec_label_pc_13da:                                ; preds = %dec_label_pc_13d5, %dec_label_pc_137b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !85

; uselistorder directives
  uselistorder i32* %stack_var_-48, { 0, 2, 1 }
  uselistorder i64 32, { 2, 0, 1 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_13e0:
  %0 = call i64 @param_string_encryption(), !insn.addr !86
  ret i64 %0, !insn.addr !86
}

define i64 @param_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13e8:
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !87
  %rdi.02.reg2mem = alloca i64, !insn.addr !87
  %rax.03.reg2mem = alloca i64, !insn.addr !87
  %rax.01 = and i64 %arg2, 4294967295
  %0 = trunc i64 %arg1 to i32, !insn.addr !88
  %1 = icmp slt i32 %0, 1
  store i64 %rax.01, i64* %rax.03.reg2mem, !insn.addr !89
  store i64 %arg1, i64* %rdi.02.reg2mem, !insn.addr !89
  store i64 %rax.01, i64* %rax.0.lcssa.reg2mem, !insn.addr !89
  br i1 %1, label %dec_label_pc_13f8, label %dec_label_pc_13f2, !insn.addr !89

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13e8, %dec_label_pc_13f2
  %rdi.02.reload = load i64, i64* %rdi.02.reg2mem
  %rax.03.reload = load i64, i64* %rax.03.reg2mem
  %2 = add i64 %rdi.02.reload, %rax.03.reload, !insn.addr !90
  %3 = add i64 %rdi.02.reload, 4294967295, !insn.addr !91
  %4 = and i64 %3, 4294967295, !insn.addr !91
  %rax.0 = and i64 %2, 4294967295
  %5 = trunc i64 %3 to i32, !insn.addr !88
  %6 = icmp slt i32 %5, 1
  store i64 %rax.0, i64* %rax.03.reg2mem, !insn.addr !89
  store i64 %4, i64* %rdi.02.reg2mem, !insn.addr !89
  store i64 %rax.0, i64* %rax.0.lcssa.reg2mem, !insn.addr !89
  br i1 %6, label %dec_label_pc_13f8, label %dec_label_pc_13f2, !insn.addr !89

dec_label_pc_13f8:                                ; preds = %dec_label_pc_13f2, %dec_label_pc_13e8
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !92

; uselistorder directives
  uselistorder i64* %rax.03.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13f2, { 1, 0 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_13f9:
  ret i64 500500, !insn.addr !93
}

define i64 @param_non_tail_call() local_unnamed_addr {
dec_label_pc_1403:
  %0 = alloca i64
  %rax.0.lcssa.reg2mem = alloca i64, !insn.addr !94
  %rax.01.reg2mem = alloca i64, !insn.addr !94
  %rdi.02.reg2mem = alloca i64, !insn.addr !94
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !95
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !96
  store i64 0, i64* %rax.0.lcssa.reg2mem, !insn.addr !96
  br i1 %3, label %dec_label_pc_1413, label %dec_label_pc_140d, !insn.addr !96

dec_label_pc_140d:                                ; preds = %dec_label_pc_1403, %dec_label_pc_140d
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %rdi.02.reload = load i64, i64* %rdi.02.reg2mem
  %4 = add i64 %rax.01.reload, %rdi.02.reload, !insn.addr !97
  %5 = and i64 %4, 4294967295, !insn.addr !97
  %6 = add i64 %rdi.02.reload, 4294967295, !insn.addr !98
  %7 = and i64 %6, 4294967295, !insn.addr !98
  %8 = trunc i64 %6 to i32, !insn.addr !95
  %9 = icmp slt i32 %8, 1
  store i64 %7, i64* %rdi.02.reg2mem, !insn.addr !96
  store i64 %5, i64* %rax.01.reg2mem, !insn.addr !96
  store i64 %5, i64* %rax.0.lcssa.reg2mem, !insn.addr !96
  br i1 %9, label %dec_label_pc_1413, label %dec_label_pc_140d, !insn.addr !96

dec_label_pc_1413:                                ; preds = %dec_label_pc_140d, %dec_label_pc_1403
  %rax.0.lcssa.reload = load i64, i64* %rax.0.lcssa.reg2mem
  ret i64 %rax.0.lcssa.reload, !insn.addr !99

; uselistorder directives
  uselistorder i64* %rdi.02.reg2mem, { 1, 0 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_140d, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1414:
  %0 = call i64 @param_non_tail_call(), !insn.addr !100
  ret i64 %0, !insn.addr !100
}

define i64 @param_vectorized_loop(i64* %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_141f:
  %r8.0.lcssa.reg2mem = alloca i64, !insn.addr !101
  %rax.01.reg2mem = alloca i64, !insn.addr !101
  %r8.02.reg2mem = alloca i32, !insn.addr !101
  %storemerge3.reg2mem = alloca i64, !insn.addr !101
  %0 = ptrtoint i64* %arg1 to i64
  %1 = icmp sgt i64 %arg4, 0
  store i64 0, i64* %storemerge3.reg2mem, !insn.addr !102
  store i64 0, i64* %r8.0.lcssa.reg2mem, !insn.addr !102
  br i1 %1, label %dec_label_pc_1429, label %dec_label_pc_144c, !insn.addr !102

dec_label_pc_1429:                                ; preds = %dec_label_pc_141f, %dec_label_pc_1429
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  %2 = mul i64 %storemerge3.reload, 4, !insn.addr !103
  %3 = add i64 %2, %arg2, !insn.addr !103
  %4 = inttoptr i64 %3 to i32*, !insn.addr !103
  %5 = load i32, i32* %4, align 4, !insn.addr !103
  %6 = add i64 %2, %0, !insn.addr !104
  %7 = inttoptr i64 %6 to i32*, !insn.addr !104
  %8 = load i32, i32* %7, align 4, !insn.addr !104
  %9 = add i32 %8, %5, !insn.addr !104
  %10 = add i64 %2, %arg3, !insn.addr !105
  %11 = inttoptr i64 %10 to i32*, !insn.addr !105
  store i32 %9, i32* %11, align 4, !insn.addr !105
  %12 = add nuw nsw i64 %storemerge3.reload, 1, !insn.addr !106
  %exitcond4 = icmp eq i64 %12, %arg4
  store i64 %12, i64* %storemerge3.reg2mem, !insn.addr !102
  store i32 0, i32* %r8.02.reg2mem, !insn.addr !102
  store i64 0, i64* %rax.01.reg2mem, !insn.addr !102
  br i1 %exitcond4, label %dec_label_pc_1443, label %dec_label_pc_1429, !insn.addr !102

dec_label_pc_1443:                                ; preds = %dec_label_pc_1429, %dec_label_pc_1443
  %rax.01.reload = load i64, i64* %rax.01.reg2mem
  %r8.02.reload = load i32, i32* %r8.02.reg2mem
  %13 = mul i64 %rax.01.reload, 4, !insn.addr !107
  %14 = add i64 %13, %arg3, !insn.addr !107
  %15 = inttoptr i64 %14 to i32*, !insn.addr !107
  %16 = load i32, i32* %15, align 4, !insn.addr !107
  %17 = add i32 %16, %r8.02.reload, !insn.addr !107
  %18 = add nuw nsw i64 %rax.01.reload, 1, !insn.addr !108
  %exitcond = icmp eq i64 %18, %arg4
  store i32 %17, i32* %r8.02.reg2mem, !insn.addr !109
  store i64 %18, i64* %rax.01.reg2mem, !insn.addr !109
  br i1 %exitcond, label %dec_label_pc_143f.dec_label_pc_144c_crit_edge, label %dec_label_pc_1443, !insn.addr !109

dec_label_pc_143f.dec_label_pc_144c_crit_edge:    ; preds = %dec_label_pc_1443
  %19 = zext i32 %17 to i64, !insn.addr !107
  store i64 %19, i64* %r8.0.lcssa.reg2mem
  br label %dec_label_pc_144c

dec_label_pc_144c:                                ; preds = %dec_label_pc_141f, %dec_label_pc_143f.dec_label_pc_144c_crit_edge
  %r8.0.lcssa.reload = load i64, i64* %r8.0.lcssa.reg2mem
  ret i64 %r8.0.lcssa.reload, !insn.addr !110

; uselistorder directives
  uselistorder i32 %17, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.01.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r8.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg4, { 1, 0, 2 }
  uselistorder label %dec_label_pc_144c, { 1, 0 }
  uselistorder label %dec_label_pc_1443, { 1, 0 }
  uselistorder label %dec_label_pc_1429, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1450:
  %rax.0.reg2mem = alloca i64, !insn.addr !111
  %stack_var_-112 = alloca i64, align 8
  %stack_var_-80 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !112
  %1 = ptrtoint i64* %stack_var_-48 to i64, !insn.addr !113
  %2 = ptrtoint i64* %stack_var_-80 to i64, !insn.addr !114
  store i64 8589934593, i64* %stack_var_-112, align 8, !insn.addr !115
  store i64 30064771080, i64* %stack_var_-80, align 8, !insn.addr !116
  %3 = bitcast i64* %stack_var_-48 to i8*, !insn.addr !117
  call void @__asm_rep_stosd_memset(i8* nonnull %3, i32 0, i64 8), !insn.addr !117
  %4 = call i64 @param_vectorized_loop(i64* nonnull %stack_var_-112, i64 %2, i64 %1, i64 8), !insn.addr !118
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !119
  %6 = icmp eq i64 %0, %5, !insn.addr !119
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !120
  br i1 %6, label %dec_label_pc_1516, label %dec_label_pc_1511, !insn.addr !120

dec_label_pc_1511:                                ; preds = %dec_label_pc_1450
  call void @__stack_chk_fail(), !insn.addr !121
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_1516, !insn.addr !121

dec_label_pc_1516:                                ; preds = %dec_label_pc_1511, %dec_label_pc_1450
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !122
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_151b:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !123
  %1 = and i64 %0, 4294967294, !insn.addr !123
  ret i64 %1, !insn.addr !124
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1524:
  ret i64 20, !insn.addr !125
}

define i64 @param_division_by_zero(i64 %arg1) local_unnamed_addr {
dec_label_pc_152e:
  %rax.0.reg2mem = alloca i64, !insn.addr !126
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4729 to void (i32)*)), !insn.addr !127
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4140 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !128
  %2 = icmp eq i32 %1, 0, !insn.addr !129
  %3 = icmp eq i1 %2, false, !insn.addr !130
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !130
  br i1 %3, label %dec_label_pc_1570, label %dec_label_pc_1566, !insn.addr !130

dec_label_pc_1566:                                ; preds = %dec_label_pc_152e
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %rax.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_1570, !insn.addr !131

dec_label_pc_1570:                                ; preds = %dec_label_pc_1566, %dec_label_pc_152e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !132
}

define i64 @call_division_by_zero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1575:
  %0 = call i64 @param_division_by_zero(i64 5), !insn.addr !133
  %1 = call i64 @param_division_by_zero(i64 0), !insn.addr !134
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !135
  %3 = add i64 %1, %0, !insn.addr !136
  %4 = and i64 %3, 4294967295, !insn.addr !136
  ret i64 %4, !insn.addr !137

; uselistorder directives
  uselistorder i64 (i64)* @param_division_by_zero, { 1, 0 }
}

define i64 @param_null_pointer_deref(i64* %arg1) local_unnamed_addr {
dec_label_pc_15a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4763 to void (i32)*)), !insn.addr !138
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !139
  %4 = icmp eq i32 %3, 0, !insn.addr !140
  %5 = icmp eq i1 %4, false, !insn.addr !141
  %6 = and i64 %1, 4294967295
  %rax.0 = select i1 %5, i64 4294967295, i64 %6
  ret i64 %rax.0, !insn.addr !142

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_15e9:
  %rax.0.reg2mem = alloca i64, !insn.addr !143
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !144
  store i64 42, i64* %stack_var_-36, align 8, !insn.addr !145
  %1 = call i64 @param_null_pointer_deref(i64* nonnull %stack_var_-36), !insn.addr !146
  %2 = call i64 @param_null_pointer_deref(i64* null), !insn.addr !147
  %3 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !148
  %4 = add i64 %2, %1, !insn.addr !149
  %5 = and i64 %4, 4294967295, !insn.addr !149
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %7 = icmp eq i64 %0, %6, !insn.addr !150
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !151
  br i1 %7, label %dec_label_pc_1644, label %dec_label_pc_163f, !insn.addr !151

dec_label_pc_163f:                                ; preds = %dec_label_pc_15e9
  call void @__stack_chk_fail(), !insn.addr !152
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_1644, !insn.addr !152

dec_label_pc_1644:                                ; preds = %dec_label_pc_163f, %dec_label_pc_15e9
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !153

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 2, 3, 0, 1, 4 }
  uselistorder i64 (i64*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_164b:
  %0 = and i64 %arg1, 4294967295, !insn.addr !154
  ret i64 %0, !insn.addr !155
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_1652:
  %rax.0.reg2mem = alloca i64, !insn.addr !156
  %0 = call i64* @malloc(i32 16), !insn.addr !157
  %1 = icmp eq i64* %0, null, !insn.addr !158
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !159
  br i1 %1, label %dec_label_pc_1677, label %dec_label_pc_1670, !insn.addr !159

dec_label_pc_1670:                                ; preds = %dec_label_pc_1652
  %2 = and i64 %arg1, 4294967295, !insn.addr !160
  call void @free(i64* nonnull %0), !insn.addr !161
  store i64 %2, i64* %rax.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_1677, !insn.addr !162

dec_label_pc_1677:                                ; preds = %dec_label_pc_1670, %dec_label_pc_1652
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !163

; uselistorder directives
  uselistorder i32 16, { 1, 0 }
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1679:
  %0 = call i64 @param_buffer_overflow_heap(i64 20), !insn.addr !164
  %1 = add i64 %0, 10, !insn.addr !165
  %2 = and i64 %1, 4294967295, !insn.addr !165
  ret i64 %2, !insn.addr !166

; uselistorder directives
  uselistorder i64 20, { 2, 0, 1 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_168d:
  %rax.0.reg2mem = alloca i64, !insn.addr !167
  %0 = add i64 %arg2, %arg1, !insn.addr !168
  %1 = and i64 %0, 4294967295, !insn.addr !168
  %2 = trunc i64 %arg1 to i32, !insn.addr !169
  %3 = icmp slt i32 %2, 1
  %4 = trunc i64 %arg2 to i32, !insn.addr !170
  %5 = icmp slt i32 %4, 1
  %or.cond = or i1 %3, %5
  br i1 %or.cond, label %dec_label_pc_16a7, label %dec_label_pc_169c, !insn.addr !171

dec_label_pc_169c:                                ; preds = %dec_label_pc_168d
  %6 = trunc i64 %0 to i32, !insn.addr !172
  %7 = icmp slt i32 %6, 0, !insn.addr !172
  %8 = select i1 %7, i64 4294967295, i64 %1, !insn.addr !173
  ret i64 %8, !insn.addr !174

dec_label_pc_16a7:                                ; preds = %dec_label_pc_168d
  %9 = and i64 %arg2, %arg1
  %10 = trunc i64 %9 to i32, !insn.addr !175
  %11 = icmp slt i32 %10, 0, !insn.addr !175
  %12 = icmp eq i1 %11, false, !insn.addr !176
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !176
  br i1 %12, label %dec_label_pc_16b5, label %dec_label_pc_16ab, !insn.addr !176

dec_label_pc_16ab:                                ; preds = %dec_label_pc_16a7
  %13 = trunc i64 %0 to i32, !insn.addr !177
  %14 = icmp eq i32 %13, 0, !insn.addr !177
  %15 = icmp slt i32 %13, 0, !insn.addr !177
  %16 = icmp eq i1 %15, false, !insn.addr !178
  %17 = icmp eq i1 %14, false, !insn.addr !178
  %18 = icmp eq i1 %16, %17, !insn.addr !178
  %19 = select i1 %18, i64 4294967294, i64 %1, !insn.addr !178
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !178
  br label %dec_label_pc_16b5, !insn.addr !178

dec_label_pc_16b5:                                ; preds = %dec_label_pc_16ab, %dec_label_pc_16a7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !179

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %1, { 1, 0, 2 }
  uselistorder i1 false, { 1, 0, 2, 4, 5, 3 }
  uselistorder i32 0, { 3, 4, 5, 6, 7, 8, 2, 0, 9, 1 }
  uselistorder i64 4294967295, { 6, 7, 8, 9, 10, 11, 4, 1, 12, 0, 13, 14, 15, 5, 16, 17, 3, 18, 2, 19, 20 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_16b6:
  ret i64 2000000000, !insn.addr !180
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = mul i64 %arg1, 2, !insn.addr !181
  %1 = and i64 %0, 4294967294, !insn.addr !181
  ret i64 %1, !insn.addr !182

; uselistorder directives
  uselistorder i64 4294967294, { 3, 4, 0, 1, 2 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_16c8:
  ret i64 10, !insn.addr !183

; uselistorder directives
  uselistorder i64 10, { 0, 3, 2, 4, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_16d2:
  ret i64 47, !insn.addr !184
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_16dc:
  ret i64 47, !insn.addr !185
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_16e6:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2004 to i8*)), !insn.addr !186
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2031 to i8*)), !insn.addr !187
  %2 = call i64 @call_opaque_predicate(), !insn.addr !188
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_204d to i8*)), !insn.addr !189
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2069 to i8*)), !insn.addr !190
  %5 = call i64 @param_string_encryption(), !insn.addr !191
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2086 to i8*)), !insn.addr !192
  %7 = call i64 @call_tail_call_optimized(), !insn.addr !193
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20a2 to i8*)), !insn.addr !194
  %9 = call i64 @call_non_tail_call(), !insn.addr !195
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20cc to i8*)), !insn.addr !196
  %11 = call i64 @call_vectorized_loop(), !insn.addr !197
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20f1 to i8*)), !insn.addr !198
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2117 to i8*)), !insn.addr !199
  %14 = call i64 @call_division_by_zero(i64 1, i64 ptrtoint (i8** @global_var_2117 to i64)), !insn.addr !200
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2137 to i8*)), !insn.addr !201
  %16 = call i64 @call_null_pointer_deref(i64 1, i64 ptrtoint (i8** @global_var_2137 to i64)), !insn.addr !202
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2153 to i8*)), !insn.addr !203
  %18 = call i64 @call_buffer_overflow(), !insn.addr !204
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2170 to i8*)), !insn.addr !205
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_218d to i8*)), !insn.addr !206
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21be to i8*)), !insn.addr !207
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21db to i8*)), !insn.addr !208
  %23 = sext i32 %22 to i64, !insn.addr !208
  ret i64 %23, !insn.addr !208

; uselistorder directives
  uselistorder i8** @global_var_2137, { 1, 0 }
  uselistorder i64 1, { 2, 3, 6, 7, 8, 0, 1, 4, 5 }
  uselistorder i8** @global_var_2117, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 39, 1, 0, 2, 8, 3, 4, 44, 6, 7, 5, 45, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 40, 41, 42, 43 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1868:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !209

; uselistorder directives
  uselistorder i32 1, { 5, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 32, 47, 6, 7, 52, 8, 4, 9, 55, 54, 53, 10, 14, 13, 12, 11, 48, 30, 17, 16, 15, 3, 49, 31, 20, 19, 18, 51, 21, 2, 24, 23, 22, 1, 50, 28, 27, 26, 25, 57, 58, 0, 56, 29 }
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

declare void @__asm_rep_stosd_memset(i8*, i32, i64) local_unnamed_addr

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
!17 = !{i64 4487}
!18 = !{i64 4495}
!19 = !{i64 4527}
!20 = !{i64 4533}
!21 = !{i64 4584}
!22 = !{i64 4648}
!23 = !{i64 4660}
!24 = !{i64 4667}
!25 = !{i64 4670}
!26 = !{i64 4681}
!27 = !{i64 4683}
!28 = !{i64 4690}
!29 = !{i64 4695}
!30 = !{i64 4700}
!31 = !{i64 4708}
!32 = !{i64 4712}
!33 = !{i64 4724}
!34 = !{i64 4748}
!35 = !{i64 4758}
!36 = !{i64 4782}
!37 = !{i64 4792}
!38 = !{i64 4801}
!39 = !{i64 4803}
!40 = !{i64 4813}
!41 = !{i64 4814}
!42 = !{i64 4820}
!43 = !{i64 4846}
!44 = !{i64 4848}
!45 = !{i64 4840}
!46 = !{i64 4850}
!47 = !{i64 4851}
!48 = !{i64 4823}
!49 = !{i64 4826}
!50 = !{i64 4829}
!51 = !{i64 4835}
!52 = !{i64 4838}
!53 = !{i64 4859}
!54 = !{i64 4861}
!55 = !{i64 4868}
!56 = !{i64 4871}
!57 = !{i64 4872}
!58 = !{i64 4875}
!59 = !{i64 4878}
!60 = !{i64 4888}
!61 = !{i64 4899}
!62 = !{i64 4908}
!63 = !{i64 4911}
!64 = !{i64 4913}
!65 = !{i64 4915}
!66 = !{i64 4925}
!67 = !{i64 4926}
!68 = !{i64 4948}
!69 = !{i64 4953}
!70 = !{i64 4964}
!71 = !{i64 4966}
!72 = !{i64 4968}
!73 = !{i64 4972}
!74 = !{i64 4975}
!75 = !{i64 4986}
!76 = !{i64 4987}
!77 = !{i64 5013}
!78 = !{i64 5037}
!79 = !{i64 5045}
!80 = !{i64 5053}
!81 = !{i64 5058}
!82 = !{i64 5066}
!83 = !{i64 5075}
!84 = !{i64 5077}
!85 = !{i64 5087}
!86 = !{i64 5094}
!87 = !{i64 5096}
!88 = !{i64 5102}
!89 = !{i64 5104}
!90 = !{i64 5106}
!91 = !{i64 5108}
!92 = !{i64 5112}
!93 = !{i64 5122}
!94 = !{i64 5123}
!95 = !{i64 5129}
!96 = !{i64 5131}
!97 = !{i64 5133}
!98 = !{i64 5135}
!99 = !{i64 5139}
!100 = !{i64 5149}
!101 = !{i64 5151}
!102 = !{i64 5159}
!103 = !{i64 5161}
!104 = !{i64 5165}
!105 = !{i64 5169}
!106 = !{i64 5173}
!107 = !{i64 5187}
!108 = !{i64 5191}
!109 = !{i64 5185}
!110 = !{i64 5199}
!111 = !{i64 5200}
!112 = !{i64 5213}
!113 = !{i64 5242}
!114 = !{i64 5247}
!115 = !{i64 5252}
!116 = !{i64 5311}
!117 = !{i64 5360}
!118 = !{i64 5372}
!119 = !{i64 5382}
!120 = !{i64 5391}
!121 = !{i64 5393}
!122 = !{i64 5402}
!123 = !{i64 5407}
!124 = !{i64 5411}
!125 = !{i64 5421}
!126 = !{i64 5422}
!127 = !{i64 5446}
!128 = !{i64 5458}
!129 = !{i64 5473}
!130 = !{i64 5476}
!131 = !{i64 5484}
!132 = !{i64 5492}
!133 = !{i64 5505}
!134 = !{i64 5514}
!135 = !{i64 5528}
!136 = !{i64 5533}
!137 = !{i64 5539}
!138 = !{i64 5565}
!139 = !{i64 5577}
!140 = !{i64 5592}
!141 = !{i64 5595}
!142 = !{i64 5608}
!143 = !{i64 5609}
!144 = !{i64 5619}
!145 = !{i64 5640}
!146 = !{i64 5648}
!147 = !{i64 5657}
!148 = !{i64 5671}
!149 = !{i64 5676}
!150 = !{i64 5684}
!151 = !{i64 5693}
!152 = !{i64 5695}
!153 = !{i64 5706}
!154 = !{i64 5711}
!155 = !{i64 5713}
!156 = !{i64 5714}
!157 = !{i64 5726}
!158 = !{i64 5739}
!159 = !{i64 5742}
!160 = !{i64 5719}
!161 = !{i64 5744}
!162 = !{i64 5749}
!163 = !{i64 5752}
!164 = !{i64 5763}
!165 = !{i64 5769}
!166 = !{i64 5772}
!167 = !{i64 5773}
!168 = !{i64 5777}
!169 = !{i64 5780}
!170 = !{i64 5784}
!171 = !{i64 5782}
!172 = !{i64 5788}
!173 = !{i64 5795}
!174 = !{i64 5798}
!175 = !{i64 5799}
!176 = !{i64 5801}
!177 = !{i64 5803}
!178 = !{i64 5810}
!179 = !{i64 5813}
!180 = !{i64 5823}
!181 = !{i64 5828}
!182 = !{i64 5831}
!183 = !{i64 5841}
!184 = !{i64 5851}
!185 = !{i64 5861}
!186 = !{i64 5874}
!187 = !{i64 5898}
!188 = !{i64 5905}
!189 = !{i64 5926}
!190 = !{i64 5950}
!191 = !{i64 5957}
!192 = !{i64 5978}
!193 = !{i64 5997}
!194 = !{i64 6006}
!195 = !{i64 6020}
!196 = !{i64 6034}
!197 = !{i64 6041}
!198 = !{i64 6062}
!199 = !{i64 6086}
!200 = !{i64 6093}
!201 = !{i64 6114}
!202 = !{i64 6121}
!203 = !{i64 6142}
!204 = !{i64 6149}
!205 = !{i64 6170}
!206 = !{i64 6194}
!207 = !{i64 6218}
!208 = !{i64 6243}
!209 = !{i64 6260}
