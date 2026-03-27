source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_4128 = local_unnamed_addr global i64 0
@global_var_4140 = global i64 0
@global_var_4040 = local_unnamed_addr global i64 0
@global_var_4060 = global i64 0
@0 = external global i32
@global_var_4020 = local_unnamed_addr global i8 0
@global_var_3e8 = global i32 0
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2008 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2137 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2153 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_216f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_218c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_2038 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_2068 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2090 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_20b8 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_21c4 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_21e1 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_20d8 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21fe = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_2110 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1180:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !17
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !17
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !17
  %3 = call i32 @__libc_start_main(i64 6496, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !17
  %4 = call i64 @__asm_hlt(), !insn.addr !18
  unreachable, !insn.addr !18
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11b0:
  ret i64 16408, !insn.addr !19
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11e0:
  ret i64 0, !insn.addr !20
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1220:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_4020, align 1, !insn.addr !21
  %3 = icmp eq i8 %2, 0, !insn.addr !21
  %4 = icmp eq i1 %3, false, !insn.addr !22
  br i1 %4, label %dec_label_pc_1258, label %dec_label_pc_122d, !insn.addr !22

dec_label_pc_122d:                                ; preds = %dec_label_pc_1220
  %5 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !23
  %6 = icmp eq i64 %5, 0, !insn.addr !23
  br i1 %6, label %dec_label_pc_1247, label %dec_label_pc_123b, !insn.addr !24

dec_label_pc_123b:                                ; preds = %dec_label_pc_122d
  %7 = load i64, i64* inttoptr (i64 16392 to i64*), align 8, !insn.addr !25
  %8 = inttoptr i64 %7 to i64*, !insn.addr !26
  call void @__cxa_finalize(i64* %8), !insn.addr !26
  br label %dec_label_pc_1247, !insn.addr !26

dec_label_pc_1247:                                ; preds = %dec_label_pc_123b, %dec_label_pc_122d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !27
  store i8 1, i8* @global_var_4020, align 1, !insn.addr !28
  ret i64 %9, !insn.addr !29

dec_label_pc_1258:                                ; preds = %dec_label_pc_1220
  ret i64 %1, !insn.addr !30

; uselistorder directives
  uselistorder i8* @global_var_4020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1260:
  %0 = call i64 @register_tm_clones(), !insn.addr !31
  ret i64 %0, !insn.addr !31
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_1269:
  store i32 1, i32* bitcast (i64* @global_var_4128 to i32*), align 8, !insn.addr !32
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4140, i64 1), !insn.addr !33
  ret i64 %0, !insn.addr !33
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_128e:
  store i32 1, i32* bitcast (i64* @global_var_4040 to i32*), align 8, !insn.addr !34
  %0 = call i64 @__longjmp_chk(i64* nonnull @global_var_4060, i64 1), !insn.addr !35
  ret i64 %0, !insn.addr !35

; uselistorder directives
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_12b3:
  %0 = and i64 %arg1, 4294967295, !insn.addr !36
  ret i64 %0, !insn.addr !37
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_12ba:
  ret i64 10, !insn.addr !38
}

define i64 @param_opaque_predicate(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_12c4:
  %rcx.0.in.reg2mem = alloca i64, !insn.addr !39
  %rax.0.reg2mem = alloca i64, !insn.addr !39
  %0 = mul i64 %arg1, 2, !insn.addr !40
  %1 = add i64 %arg1, 1, !insn.addr !41
  %2 = trunc i64 %1 to i32, !insn.addr !42
  %3 = icmp eq i32 %2, 0, !insn.addr !42
  br i1 %3, label %dec_label_pc_1306, label %dec_label_pc_12e8, !insn.addr !43

dec_label_pc_12e8:                                ; preds = %dec_label_pc_12c4
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !44
  %5 = mul nsw i64 %4, %4, !insn.addr !44
  %6 = or i64 %0, 1, !insn.addr !45
  %7 = add i64 %5, %6, !insn.addr !45
  %8 = trunc i64 %7 to i32, !insn.addr !45
  %sext2 = mul i64 %1, 4294967296
  %9 = ashr exact i64 %sext2, 32, !insn.addr !46
  %10 = mul nsw i64 %9, %9, !insn.addr !46
  %11 = trunc i64 %10 to i32, !insn.addr !46
  %12 = icmp eq i32 %8, %11, !insn.addr !47
  %13 = and i64 %arg1, 4294967295, !insn.addr !48
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !48
  store i64 %1, i64* %rcx.0.in.reg2mem, !insn.addr !48
  br label %dec_label_pc_12ea, !insn.addr !48

dec_label_pc_12ea:                                ; preds = %dec_label_pc_12ea, %dec_label_pc_12e8
  %rcx.0.in.reload = load i64, i64* %rcx.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rcx.0 = and i64 %rcx.0.in.reload, 4294967295
  %14 = trunc i64 %rax.0.reload to i32, !insn.addr !49
  %15 = ashr i32 %14, 31, !insn.addr !49
  %16 = zext i32 %15 to i64, !insn.addr !50
  %17 = mul i64 %16, 4294967296, !insn.addr !50
  %18 = or i64 %17, %rax.0.reload, !insn.addr !50
  %19 = srem i64 %18, %rcx.0, !insn.addr !50
  %20 = trunc i64 %19 to i32, !insn.addr !51
  %21 = icmp eq i32 %20, 0, !insn.addr !51
  %22 = icmp eq i1 %21, false, !insn.addr !52
  store i64 %rcx.0, i64* %rax.0.reg2mem, !insn.addr !52
  store i64 %19, i64* %rcx.0.in.reg2mem, !insn.addr !52
  br i1 %22, label %dec_label_pc_12ea, label %dec_label_pc_12f7, !insn.addr !52

dec_label_pc_12f7:                                ; preds = %dec_label_pc_12ea
  %23 = trunc i64 %rcx.0.in.reload to i32, !insn.addr !53
  %24 = icmp eq i32 %23, 1, !insn.addr !53
  %25 = icmp eq i1 %12, %24
  br i1 %25, label %dec_label_pc_1301, label %dec_label_pc_1306, !insn.addr !54

dec_label_pc_1301:                                ; preds = %dec_label_pc_12f7
  %26 = add i64 %0, 10, !insn.addr !55
  %27 = and i64 %26, 4294967294, !insn.addr !55
  ret i64 %27, !insn.addr !56

dec_label_pc_1306:                                ; preds = %dec_label_pc_12f7, %dec_label_pc_12c4
  %28 = add i64 %arg1, 20, !insn.addr !57
  %29 = add i64 %28, %0, !insn.addr !57
  %30 = and i64 %29, 4294967295, !insn.addr !57
  ret i64 %30, !insn.addr !58

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rcx.0.in.reload, { 1, 0 }
  uselistorder i64 %0, { 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 3, 2, 0, 4, 1 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_130b:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %6 = call i64 @param_opaque_predicate(i64 5, i64 %3, i64 %4, i64 %5, i64 %2, i64 %1), !insn.addr !59
  ret i64 %6, !insn.addr !60

; uselistorder directives
  uselistorder i64* %0, { 4, 3, 2, 1, 0 }
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
dec_label_pc_1338:
  ret i64 225, !insn.addr !66
}

define i64 @decrypt_string(i64 %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1342:
  %rdx.0.reg2mem = alloca i64, !insn.addr !67
  %rax.0.in.reg2mem = alloca i8, !insn.addr !67
  %rsi = alloca i64, align 8
  %0 = ptrtoint i64* %arg2 to i64
  %1 = bitcast i64* %arg2 to i8*, !insn.addr !68
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !68
  %3 = trunc i64 %arg3 to i32, !insn.addr !68
  %4 = call i8* @strncpy(i8* %1, i8* %2, i32 %3), !insn.addr !68
  %5 = add i64 %0, -1, !insn.addr !69
  %6 = add i64 %5, %arg3, !insn.addr !69
  %7 = inttoptr i64 %6 to i8*, !insn.addr !69
  store i8 0, i8* %7, align 1, !insn.addr !69
  %8 = bitcast i64* %rsi to i8*
  %9 = load i8, i8* %8, align 8, !insn.addr !70
  %10 = icmp eq i8 %9, 0, !insn.addr !71
  br i1 %10, label %dec_label_pc_137d, label %dec_label_pc_136e.preheader, !insn.addr !72

dec_label_pc_136e.preheader:                      ; preds = %dec_label_pc_1342
  %11 = trunc i64 %arg4 to i8
  store i8 %9, i8* %rax.0.in.reg2mem
  store i64 %0, i64* %rdx.0.reg2mem
  br label %dec_label_pc_136e

dec_label_pc_136e:                                ; preds = %dec_label_pc_136e.preheader, %dec_label_pc_136e
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.in.reload = load i8, i8* %rax.0.in.reg2mem
  %12 = xor i8 %rax.0.in.reload, %11, !insn.addr !73
  %13 = inttoptr i64 %rdx.0.reload to i8*, !insn.addr !73
  store i8 %12, i8* %13, align 1, !insn.addr !73
  %14 = add i64 %rdx.0.reload, 1, !insn.addr !74
  %15 = inttoptr i64 %14 to i8*, !insn.addr !75
  %16 = load i8, i8* %15, align 1, !insn.addr !75
  %17 = icmp eq i8 %16, 0, !insn.addr !76
  %18 = icmp eq i1 %17, false, !insn.addr !77
  store i8 %16, i8* %rax.0.in.reg2mem, !insn.addr !77
  store i64 %14, i64* %rdx.0.reg2mem, !insn.addr !77
  br i1 %18, label %dec_label_pc_136e, label %dec_label_pc_137d, !insn.addr !77

dec_label_pc_137d:                                ; preds = %dec_label_pc_136e, %dec_label_pc_1342
  ret i64 %0, !insn.addr !78

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i8* %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_136e, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1385:
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !79
  %1 = bitcast i32* %stack_var_-56 to i64*, !insn.addr !80
  %2 = call i64 @decrypt_string(i64 16400, i64* nonnull %1, i64 32, i64 90), !insn.addr !80
  %3 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !81
  %4 = call i32 @strlen(i8* nonnull %3), !insn.addr !81
  %5 = load i32, i32* %stack_var_-56, align 4, !insn.addr !82
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !83
  %7 = icmp eq i64 %0, %6, !insn.addr !83
  %8 = icmp eq i1 %7, false, !insn.addr !84
  br i1 %8, label %dec_label_pc_13e1, label %dec_label_pc_13db, !insn.addr !84

dec_label_pc_13db:                                ; preds = %dec_label_pc_1385
  %sext = mul i32 %5, 16777216
  %9 = ashr exact i32 %sext, 24, !insn.addr !85
  %10 = add i32 %9, %4, !insn.addr !85
  %11 = zext i32 %10 to i64, !insn.addr !85
  ret i64 %11, !insn.addr !86

dec_label_pc_13e1:                                ; preds = %dec_label_pc_1385
  call void @__stack_chk_fail(), !insn.addr !87
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !87

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 0, 2, 1 }
  uselistorder i64 32, { 2, 0, 1 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_13e6:
  %0 = call i64 @param_string_encryption(), !insn.addr !88
  ret i64 %0, !insn.addr !89
}

define i64 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_13fd:
  %0 = icmp slt i32 %arg1, 1
  br i1 %0, label %dec_label_pc_141a, label %dec_label_pc_1407, !insn.addr !90

dec_label_pc_1407:                                ; preds = %dec_label_pc_13fd
  %1 = add i32 %arg2, %arg1, !insn.addr !91
  %2 = add i32 %arg1, -1, !insn.addr !92
  %3 = call i64 @param_tail_call_optimized(i32 %2, i32 %1), !insn.addr !93
  ret i64 %3, !insn.addr !94

dec_label_pc_141a:                                ; preds = %dec_label_pc_13fd
  %4 = zext i32 %arg2 to i64, !insn.addr !95
  ret i64 %4, !insn.addr !96

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_141b:
  %0 = call i64 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !97
  ret i64 %0, !insn.addr !98

; uselistorder directives
  uselistorder i64 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_1437:
  %0 = trunc i64 %arg1 to i32, !insn.addr !99
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1453, label %dec_label_pc_1444, !insn.addr !100

dec_label_pc_1444:                                ; preds = %dec_label_pc_1437
  %2 = add i64 %arg1, 4294967295, !insn.addr !101
  %3 = and i64 %2, 4294967295, !insn.addr !101
  %4 = call i64 @param_non_tail_call(i64 %3), !insn.addr !102
  %5 = add i64 %4, %arg1, !insn.addr !103
  %6 = and i64 %5, 4294967295, !insn.addr !103
  ret i64 %6, !insn.addr !104

dec_label_pc_1453:                                ; preds = %dec_label_pc_1437
  ret i64 0, !insn.addr !105
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1454:
  %0 = call i64 @param_non_tail_call(i64 100), !insn.addr !106
  ret i64 %0, !insn.addr !107

; uselistorder directives
  uselistorder i64 (i64)* @param_non_tail_call, { 1, 0 }
}

define i64 @param_vectorized_loop(i64* %arg1, i32* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_146b:
  %rdx.1.reg2mem = alloca i64, !insn.addr !108
  %rdx.0.reg2mem = alloca i32, !insn.addr !108
  %rax.1.reg2mem = alloca i64, !insn.addr !108
  %rax.0.reg2mem = alloca i64, !insn.addr !108
  %0 = trunc i64 %arg4 to i32, !insn.addr !109
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rdx.1.reg2mem, !insn.addr !110
  br i1 %1, label %dec_label_pc_14ab, label %dec_label_pc_1473, !insn.addr !110

dec_label_pc_1473:                                ; preds = %dec_label_pc_146b
  %2 = ptrtoint i64* %arg3 to i64
  %3 = ptrtoint i32* %arg2 to i64
  %4 = ptrtoint i64* %arg1 to i64
  %5 = and i64 %arg4, 4294967295, !insn.addr !111
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_147e, !insn.addr !112

dec_label_pc_147e:                                ; preds = %dec_label_pc_147e, %dec_label_pc_1473
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = mul i64 %rax.0.reload, 4, !insn.addr !113
  %7 = add i64 %6, %3, !insn.addr !113
  %8 = inttoptr i64 %7 to i32*, !insn.addr !113
  %9 = load i32, i32* %8, align 4, !insn.addr !113
  %10 = add i64 %6, %4, !insn.addr !114
  %11 = inttoptr i64 %10 to i32*, !insn.addr !114
  %12 = load i32, i32* %11, align 4, !insn.addr !114
  %13 = add i32 %12, %9, !insn.addr !114
  %14 = add i64 %6, %2, !insn.addr !115
  %15 = inttoptr i64 %14 to i32*, !insn.addr !115
  store i32 %13, i32* %15, align 4, !insn.addr !115
  %16 = add i64 %rax.0.reload, 1, !insn.addr !116
  %17 = icmp eq i64 %16, %5, !insn.addr !117
  %18 = icmp eq i1 %17, false, !insn.addr !118
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !118
  br i1 %18, label %dec_label_pc_147e, label %dec_label_pc_1493, !insn.addr !118

dec_label_pc_1493:                                ; preds = %dec_label_pc_147e
  %19 = mul i64 %arg4, 4, !insn.addr !119
  %20 = add i64 %19, 17179869180, !insn.addr !119
  %21 = and i64 %20, 17179869180, !insn.addr !120
  %22 = add i64 %2, 4, !insn.addr !120
  %23 = add i64 %22, %21, !insn.addr !120
  store i64 %2, i64* %rax.1.reg2mem, !insn.addr !121
  store i32 0, i32* %rdx.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_14a0, !insn.addr !121

dec_label_pc_14a0:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_1493
  %rdx.0.reload = load i32, i32* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %24 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !122
  %25 = load i32, i32* %24, align 4, !insn.addr !122
  %26 = add i32 %25, %rdx.0.reload, !insn.addr !122
  %27 = add i64 %rax.1.reload, 4, !insn.addr !123
  %28 = icmp eq i64 %27, %23, !insn.addr !124
  %29 = icmp eq i1 %28, false, !insn.addr !125
  store i64 %27, i64* %rax.1.reg2mem, !insn.addr !125
  store i32 %26, i32* %rdx.0.reg2mem, !insn.addr !125
  br i1 %29, label %dec_label_pc_14a0, label %dec_label_pc_14ab.loopexit, !insn.addr !125

dec_label_pc_14ab.loopexit:                       ; preds = %dec_label_pc_14a0
  %30 = zext i32 %26 to i64, !insn.addr !122
  store i64 %30, i64* %rdx.1.reg2mem
  br label %dec_label_pc_14ab

dec_label_pc_14ab:                                ; preds = %dec_label_pc_14ab.loopexit, %dec_label_pc_146b
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  ret i64 %rdx.1.reload, !insn.addr !126

; uselistorder directives
  uselistorder i32 %26, { 1, 0 }
  uselistorder i64 %6, { 2, 1, 0 }
  uselistorder i64 %2, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 17179869180, { 1, 0 }
  uselistorder i64 4, { 2, 3, 0, 1 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_14b5:
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !127
  store i64 1, i64* %stack_var_-120, align 8, !insn.addr !128
  store i32 8, i32* %stack_var_-88, align 4, !insn.addr !129
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !130
  %1 = call i64 @param_vectorized_loop(i64* nonnull %stack_var_-120, i32* nonnull %stack_var_-88, i64* nonnull %stack_var_-56, i64 8), !insn.addr !131
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !132
  %3 = icmp eq i64 %0, %2, !insn.addr !132
  %4 = icmp eq i1 %3, false, !insn.addr !133
  br i1 %4, label %dec_label_pc_159c, label %dec_label_pc_1597, !insn.addr !133

dec_label_pc_1597:                                ; preds = %dec_label_pc_14b5
  ret i64 %1, !insn.addr !134

dec_label_pc_159c:                                ; preds = %dec_label_pc_14b5
  call void @__stack_chk_fail(), !insn.addr !135
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !135

; uselistorder directives
  uselistorder i64 1, { 0, 5, 6, 1, 2, 3, 4 }
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_15a1:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !136
  %1 = and i64 %0, 4294967294, !insn.addr !136
  ret i64 %1, !insn.addr !137
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_15aa:
  ret i64 20, !insn.addr !138
}

define i64 @param_division_by_zero(i64 %arg1) local_unnamed_addr {
dec_label_pc_15b4:
  %storemerge.reg2mem = alloca i64, !insn.addr !139
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4713 to void (i32)*)), !insn.addr !140
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4140 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !141
  %2 = icmp eq i32 %1, 0, !insn.addr !142
  %3 = icmp eq i1 %2, false, !insn.addr !143
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !143
  br i1 %3, label %dec_label_pc_15ef, label %dec_label_pc_15e5, !insn.addr !143

dec_label_pc_15e5:                                ; preds = %dec_label_pc_15b4
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %storemerge.reg2mem, !insn.addr !144
  br label %dec_label_pc_15ef, !insn.addr !144

dec_label_pc_15ef:                                ; preds = %dec_label_pc_15b4, %dec_label_pc_15e5
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !145

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_15ef, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_15fb:
  %0 = call i64 @param_division_by_zero(i64 5), !insn.addr !146
  %1 = call i64 @param_division_by_zero(i64 0), !insn.addr !147
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !148
  %3 = add i64 %1, %0, !insn.addr !149
  %4 = and i64 %3, 4294967295, !insn.addr !149
  ret i64 %4, !insn.addr !150

; uselistorder directives
  uselistorder i64 (i64)* @param_division_by_zero, { 1, 0 }
}

define i64 @param_null_pointer_deref(i32* %arg1) local_unnamed_addr {
dec_label_pc_1636:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4750 to void (i32)*)), !insn.addr !151
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @global_var_4060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !152
  %4 = icmp eq i32 %3, 0, !insn.addr !153
  %5 = icmp eq i1 %4, false, !insn.addr !154
  %6 = and i64 %1, 4294967295
  %storemerge = select i1 %5, i64 4294967295, i64 %6
  ret i64 %storemerge, !insn.addr !155

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_167b:
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !156
  store i32 42, i32* %stack_var_-36, align 4, !insn.addr !157
  %1 = call i64 @param_null_pointer_deref(i32* nonnull %stack_var_-36), !insn.addr !158
  %2 = call i64 @param_null_pointer_deref(i32* null), !insn.addr !159
  %3 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !160
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !161
  %5 = icmp eq i64 %0, %4, !insn.addr !161
  %6 = icmp eq i1 %5, false, !insn.addr !162
  br i1 %6, label %dec_label_pc_16de, label %dec_label_pc_16d7, !insn.addr !162

dec_label_pc_16d7:                                ; preds = %dec_label_pc_167b
  %7 = add i64 %2, %1, !insn.addr !163
  %8 = and i64 %7, 4294967295, !insn.addr !163
  ret i64 %8, !insn.addr !164

dec_label_pc_16de:                                ; preds = %dec_label_pc_167b
  call void @__stack_chk_fail(), !insn.addr !165
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !165

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 0 }
  uselistorder void ()* @__stack_chk_fail, { 2, 1, 0, 3 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_16e3:
  %0 = and i64 %arg1, 4294967295, !insn.addr !166
  ret i64 %0, !insn.addr !167
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_16ea:
  %rbx.0.reg2mem = alloca i64, !insn.addr !168
  %0 = call i64* @malloc(i32 16), !insn.addr !169
  %1 = icmp eq i64* %0, null, !insn.addr !170
  store i64 4294967294, i64* %rbx.0.reg2mem, !insn.addr !171
  br i1 %1, label %dec_label_pc_1712, label %dec_label_pc_1708.preheader, !insn.addr !171

dec_label_pc_1708.preheader:                      ; preds = %dec_label_pc_16ea
  %2 = and i64 %arg1, 4294967295, !insn.addr !172
  call void @free(i64* nonnull %0), !insn.addr !173
  store i64 %2, i64* %rbx.0.reg2mem, !insn.addr !173
  br label %dec_label_pc_1712, !insn.addr !173

dec_label_pc_1712:                                ; preds = %dec_label_pc_16ea, %dec_label_pc_1708.preheader
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  ret i64 %rbx.0.reload, !insn.addr !174

; uselistorder directives
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1712, { 1, 0 }
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_171d:
  %0 = call i64 @param_buffer_overflow_heap(i64 20), !insn.addr !175
  %1 = add i64 %0, 10, !insn.addr !176
  %2 = and i64 %1, 4294967295, !insn.addr !176
  ret i64 %2, !insn.addr !177

; uselistorder directives
  uselistorder i64 20, { 1, 0, 2 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1737:
  %rax.0.reg2mem = alloca i64, !insn.addr !178
  %0 = add i64 %arg2, %arg1, !insn.addr !179
  %1 = trunc i64 %arg1 to i32, !insn.addr !180
  %2 = icmp eq i32 %1, 0, !insn.addr !180
  %3 = icmp slt i32 %1, 0, !insn.addr !180
  %4 = icmp eq i1 %3, false, !insn.addr !181
  %5 = icmp eq i1 %2, false, !insn.addr !181
  %6 = icmp eq i1 %4, %5, !insn.addr !181
  %7 = trunc i64 %arg2 to i32, !insn.addr !182
  %8 = icmp eq i32 %7, 0, !insn.addr !182
  %9 = icmp slt i32 %7, 0, !insn.addr !182
  %10 = icmp eq i1 %9, false, !insn.addr !183
  %11 = icmp eq i1 %8, false, !insn.addr !183
  %12 = icmp eq i1 %10, %11, !insn.addr !183
  %13 = icmp eq i1 %6, %12
  %14 = trunc i64 %0 to i32, !insn.addr !184
  %15 = icmp slt i32 %14, 0, !insn.addr !184
  %or.cond = icmp eq i1 %15, %13
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !185
  br i1 %or.cond, label %dec_label_pc_1764, label %dec_label_pc_1750, !insn.addr !185

dec_label_pc_1750:                                ; preds = %dec_label_pc_1737
  %16 = and i64 %0, 4294967295, !insn.addr !179
  %17 = and i64 %arg2, %arg1
  %18 = trunc i64 %17 to i32, !insn.addr !186
  %19 = icmp slt i32 %18, 0, !insn.addr !186
  %20 = icmp eq i1 %19, false, !insn.addr !187
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !187
  br i1 %20, label %dec_label_pc_1764, label %dec_label_pc_1754, !insn.addr !187

dec_label_pc_1754:                                ; preds = %dec_label_pc_1750
  %21 = icmp eq i32 %14, 0, !insn.addr !188
  %22 = icmp eq i1 %15, false, !insn.addr !189
  %23 = icmp eq i1 %21, false, !insn.addr !189
  %24 = icmp eq i1 %22, %23, !insn.addr !189
  %25 = select i1 %24, i64 4294967294, i64 %16, !insn.addr !189
  ret i64 %25, !insn.addr !190

dec_label_pc_1764:                                ; preds = %dec_label_pc_1737, %dec_label_pc_1750
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !191

; uselistorder directives
  uselistorder i64 %16, { 1, 0 }
  uselistorder i1 %15, { 1, 0 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967295, { 5, 0, 6, 7, 8, 9, 4, 2, 10, 1, 11, 12, 13, 14, 15, 3, 16, 17 }
  uselistorder i1 false, { 3, 0, 4, 5, 1, 6, 2, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i32 0, { 4, 5, 1, 6, 7, 8, 9, 10, 11, 0, 2, 12, 13, 3 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1764, { 1, 0 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1765:
  ret i64 2000000000, !insn.addr !192
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_176f:
  %0 = mul i64 %arg1, 2, !insn.addr !193
  %1 = and i64 %0, 4294967294, !insn.addr !193
  ret i64 %1, !insn.addr !194

; uselistorder directives
  uselistorder i64 4294967294, { 3, 4, 0, 1, 2 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1777:
  ret i64 10, !insn.addr !195

; uselistorder directives
  uselistorder i64 10, { 0, 3, 2, 4, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1781:
  ret i64 47, !insn.addr !196
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_178b:
  ret i64 47, !insn.addr !197
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1795:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2008 to i8*)), !insn.addr !198
  %1 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2137 to i8*)), !insn.addr !199
  %2 = call i64 @call_opaque_predicate(), !insn.addr !200
  %3 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2153 to i8*)), !insn.addr !201
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_216f to i8*)), !insn.addr !202
  %5 = call i64 @param_string_encryption(), !insn.addr !203
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_218c to i8*)), !insn.addr !204
  %7 = call i64 @call_tail_call_optimized(), !insn.addr !205
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2038 to i8*)), !insn.addr !206
  %9 = call i64 @call_non_tail_call(), !insn.addr !207
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2068 to i8*)), !insn.addr !208
  %11 = call i64 @call_vectorized_loop(), !insn.addr !209
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2090 to i8*)), !insn.addr !210
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20b8 to i8*)), !insn.addr !211
  %14 = call i64 @call_division_by_zero(), !insn.addr !212
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !213
  %16 = call i64 @call_null_pointer_deref(), !insn.addr !214
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !215
  %18 = call i64 @call_buffer_overflow(), !insn.addr !216
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21e1 to i8*)), !insn.addr !217
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20d8 to i8*)), !insn.addr !218
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21fe to i8*)), !insn.addr !219
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2110 to i8*)), !insn.addr !220
  %23 = sext i32 %22 to i64, !insn.addr !220
  ret i64 %23, !insn.addr !221

; uselistorder directives
  uselistorder i64 ()* @param_string_encryption, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1960:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !222
  ret i64 0, !insn.addr !223

; uselistorder directives
  uselistorder i64 0, { 3, 36, 41, 1, 0, 4, 42, 5, 2, 43, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 39, 40 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_197c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !224

; uselistorder directives
  uselistorder i32 1, { 3, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 4, 5, 36, 2, 6, 39, 38, 37, 30, 10, 9, 8, 7, 31, 32, 35, 34, 12, 11, 1, 33, 14, 13, 41, 42, 0, 40, 15 }
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
!17 = !{i64 4511}
!18 = !{i64 4517}
!19 = !{i64 4568}
!20 = !{i64 4632}
!21 = !{i64 4644}
!22 = !{i64 4651}
!23 = !{i64 4654}
!24 = !{i64 4665}
!25 = !{i64 4667}
!26 = !{i64 4674}
!27 = !{i64 4679}
!28 = !{i64 4684}
!29 = !{i64 4692}
!30 = !{i64 4696}
!31 = !{i64 4708}
!32 = !{i64 4723}
!33 = !{i64 4745}
!34 = !{i64 4760}
!35 = !{i64 4782}
!36 = !{i64 4791}
!37 = !{i64 4793}
!38 = !{i64 4803}
!39 = !{i64 4804}
!40 = !{i64 4808}
!41 = !{i64 4812}
!42 = !{i64 4836}
!43 = !{i64 4838}
!44 = !{i64 4817}
!45 = !{i64 4820}
!46 = !{i64 4827}
!47 = !{i64 4830}
!48 = !{i64 4840}
!49 = !{i64 4844}
!50 = !{i64 4845}
!51 = !{i64 4851}
!52 = !{i64 4853}
!53 = !{i64 4855}
!54 = !{i64 4858}
!55 = !{i64 4865}
!56 = !{i64 4869}
!57 = !{i64 4870}
!58 = !{i64 4874}
!59 = !{i64 4884}
!60 = !{i64 4889}
!61 = !{i64 4899}
!62 = !{i64 4905}
!63 = !{i64 4908}
!64 = !{i64 4917}
!65 = !{i64 4919}
!66 = !{i64 4929}
!67 = !{i64 4930}
!68 = !{i64 4952}
!69 = !{i64 4957}
!70 = !{i64 4963}
!71 = !{i64 4967}
!72 = !{i64 4969}
!73 = !{i64 4976}
!74 = !{i64 4978}
!75 = !{i64 4982}
!76 = !{i64 4985}
!77 = !{i64 4987}
!78 = !{i64 4996}
!79 = !{i64 5006}
!80 = !{i64 5045}
!81 = !{i64 5053}
!82 = !{i64 5061}
!83 = !{i64 5072}
!84 = !{i64 5081}
!85 = !{i64 5065}
!86 = !{i64 5088}
!87 = !{i64 5089}
!88 = !{i64 5107}
!89 = !{i64 5116}
!90 = !{i64 5125}
!91 = !{i64 5131}
!92 = !{i64 5133}
!93 = !{i64 5136}
!94 = !{i64 5145}
!95 = !{i64 5121}
!96 = !{i64 5146}
!97 = !{i64 5165}
!98 = !{i64 5174}
!99 = !{i64 5184}
!100 = !{i64 5186}
!101 = !{i64 5191}
!102 = !{i64 5194}
!103 = !{i64 5199}
!104 = !{i64 5202}
!105 = !{i64 5203}
!106 = !{i64 5217}
!107 = !{i64 5226}
!108 = !{i64 5227}
!109 = !{i64 5231}
!110 = !{i64 5233}
!111 = !{i64 5239}
!112 = !{i64 5241}
!113 = !{i64 5246}
!114 = !{i64 5250}
!115 = !{i64 5254}
!116 = !{i64 5258}
!117 = !{i64 5262}
!118 = !{i64 5265}
!119 = !{i64 5235}
!120 = !{i64 5270}
!121 = !{i64 5275}
!122 = !{i64 5280}
!123 = !{i64 5282}
!124 = !{i64 5286}
!125 = !{i64 5289}
!126 = !{i64 5293}
!127 = !{i64 5309}
!128 = !{i64 5325}
!129 = !{i64 5388}
!130 = !{i64 5452}
!131 = !{i64 5506}
!132 = !{i64 5516}
!133 = !{i64 5525}
!134 = !{i64 5531}
!135 = !{i64 5532}
!136 = !{i64 5541}
!137 = !{i64 5545}
!138 = !{i64 5555}
!139 = !{i64 5556}
!140 = !{i64 5580}
!141 = !{i64 5592}
!142 = !{i64 5601}
!143 = !{i64 5603}
!144 = !{i64 5611}
!145 = !{i64 5619}
!146 = !{i64 5642}
!147 = !{i64 5654}
!148 = !{i64 5671}
!149 = !{i64 5676}
!150 = !{i64 5685}
!151 = !{i64 5711}
!152 = !{i64 5723}
!153 = !{i64 5732}
!154 = !{i64 5734}
!155 = !{i64 5747}
!156 = !{i64 5765}
!157 = !{i64 5781}
!158 = !{i64 5794}
!159 = !{i64 5806}
!160 = !{i64 5823}
!161 = !{i64 5836}
!162 = !{i64 5845}
!163 = !{i64 5828}
!164 = !{i64 5853}
!165 = !{i64 5854}
!166 = !{i64 5863}
!167 = !{i64 5865}
!168 = !{i64 5866}
!169 = !{i64 5878}
!170 = !{i64 5883}
!171 = !{i64 5886}
!172 = !{i64 5871}
!173 = !{i64 5901}
!174 = !{i64 5909}
!175 = !{i64 5930}
!176 = !{i64 5935}
!177 = !{i64 5942}
!178 = !{i64 5943}
!179 = !{i64 5947}
!180 = !{i64 5950}
!181 = !{i64 5952}
!182 = !{i64 5955}
!183 = !{i64 5957}
!184 = !{i64 5964}
!185 = !{i64 5962}
!186 = !{i64 5968}
!187 = !{i64 5970}
!188 = !{i64 5972}
!189 = !{i64 5979}
!190 = !{i64 5982}
!191 = !{i64 5988}
!192 = !{i64 5998}
!193 = !{i64 6003}
!194 = !{i64 6006}
!195 = !{i64 6016}
!196 = !{i64 6026}
!197 = !{i64 6036}
!198 = !{i64 6052}
!199 = !{i64 6079}
!200 = !{i64 6089}
!201 = !{i64 6113}
!202 = !{i64 6140}
!203 = !{i64 6150}
!204 = !{i64 6174}
!205 = !{i64 6184}
!206 = !{i64 6208}
!207 = !{i64 6218}
!208 = !{i64 6242}
!209 = !{i64 6252}
!210 = !{i64 6276}
!211 = !{i64 6303}
!212 = !{i64 6313}
!213 = !{i64 6337}
!214 = !{i64 6347}
!215 = !{i64 6371}
!216 = !{i64 6381}
!217 = !{i64 6405}
!218 = !{i64 6432}
!219 = !{i64 6459}
!220 = !{i64 6486}
!221 = !{i64 6495}
!222 = !{i64 6509}
!223 = !{i64 6523}
!224 = !{i64 6536}
