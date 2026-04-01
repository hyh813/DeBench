source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2010 = constant i64 8589934593
@global_var_2030 = constant i64 30064771080
@global_var_4080 = local_unnamed_addr global i64 0
@global_var_4158 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4070 = local_unnamed_addr global i8 0
@global_var_4090 = global i32 0
@global_var_4160 = global i32 0
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2221 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2050 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_206c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_2088 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_20a5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20c1 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20eb = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2110 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2136 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_2156 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_2172 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_218f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_21ac = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21dd = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21fa = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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

define i8* @function_1030(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !6
  ret i8* %0, !insn.addr !6
}

define i32 @function_1040(i8* %s) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1050(i8* %s) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1060(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_1070([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void (i32)* @function_1080(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !11
  ret void (i32)* %0, !insn.addr !11
}

define void @function_1090([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1090:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !12
  ret void, !insn.addr !12
}

define void @function_10a0(i64* %d) local_unnamed_addr {
dec_label_pc_10a0:
  call void @__cxa_finalize(i64* %d), !insn.addr !13
  ret void, !insn.addr !13
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10b0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !14
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !14
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !14
  %3 = call i32 @__libc_start_main(i64 5685, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !14
  %4 = call i64 @__asm_hlt(), !insn.addr !15
  unreachable, !insn.addr !15
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10e0:
  ret i64 16488, !insn.addr !16
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  ret i64 0, !insn.addr !17
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_4070, align 1, !insn.addr !18
  %3 = icmp eq i8 %2, 0, !insn.addr !18
  %4 = icmp eq i1 %3, false, !insn.addr !19
  br i1 %4, label %dec_label_pc_1188, label %dec_label_pc_115d, !insn.addr !19

dec_label_pc_115d:                                ; preds = %dec_label_pc_1150
  %5 = load i64, i64* @global_var_3ff8, align 8, !insn.addr !20
  %6 = icmp eq i64 %5, 0, !insn.addr !20
  br i1 %6, label %dec_label_pc_1177, label %dec_label_pc_116b, !insn.addr !21

dec_label_pc_116b:                                ; preds = %dec_label_pc_115d
  %7 = load i64, i64* inttoptr (i64 16472 to i64*), align 8, !insn.addr !22
  %8 = inttoptr i64 %7 to i64*, !insn.addr !23
  call void @__cxa_finalize(i64* %8), !insn.addr !23
  br label %dec_label_pc_1177, !insn.addr !23

dec_label_pc_1177:                                ; preds = %dec_label_pc_116b, %dec_label_pc_115d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !24
  store i8 1, i8* @global_var_4070, align 1, !insn.addr !25
  ret i64 %9, !insn.addr !26

dec_label_pc_1188:                                ; preds = %dec_label_pc_1150
  ret i64 %1, !insn.addr !27

; uselistorder directives
  uselistorder i8* @global_var_4070, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64 @register_tm_clones(), !insn.addr !28
  ret i64 %0, !insn.addr !28
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_119c:
  %0 = and i64 %arg1, 4294967295, !insn.addr !29
  ret i64 %0, !insn.addr !30
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_119f:
  ret i64 10, !insn.addr !31
}

define i64 @param_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_11a5:
  %rcx.0.reg2mem = alloca i64, !insn.addr !32
  %rdx.0.reg2mem = alloca i64, !insn.addr !32
  %rax.0.reg2mem = alloca i64, !insn.addr !32
  %0 = trunc i64 %arg1 to i32, !insn.addr !33
  %1 = add i32 %0, 1, !insn.addr !34
  %2 = icmp eq i32 %1, 0, !insn.addr !34
  store i64 4294967295, i64* %rcx.0.reg2mem, !insn.addr !35
  br i1 %2, label %dec_label_pc_11c3, label %dec_label_pc_11b4, !insn.addr !35

dec_label_pc_11b4:                                ; preds = %dec_label_pc_11a5
  %3 = zext i32 %1 to i64, !insn.addr !34
  %4 = and i64 %arg1, 4294967295, !insn.addr !36
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !37
  store i64 %3, i64* %rdx.0.reg2mem, !insn.addr !37
  br label %dec_label_pc_11b8, !insn.addr !37

dec_label_pc_11b8:                                ; preds = %dec_label_pc_11b8, %dec_label_pc_11b4
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = trunc i64 %rax.0.reload to i32, !insn.addr !38
  %6 = ashr i32 %5, 31, !insn.addr !38
  %7 = zext i32 %6 to i64, !insn.addr !39
  %8 = mul i64 %7, 4294967296, !insn.addr !39
  %9 = or i64 %8, %rax.0.reload, !insn.addr !39
  %10 = srem i64 %9, %rdx.0.reload, !insn.addr !39
  %11 = and i64 %10, 4294967295, !insn.addr !39
  %12 = trunc i64 %10 to i32, !insn.addr !40
  %13 = icmp eq i32 %12, 0, !insn.addr !40
  %14 = icmp eq i1 %13, false, !insn.addr !41
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !41
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !41
  store i64 %rdx.0.reload, i64* %rcx.0.reg2mem, !insn.addr !41
  br i1 %14, label %dec_label_pc_11b8, label %dec_label_pc_11c3, !insn.addr !41

dec_label_pc_11c3:                                ; preds = %dec_label_pc_11b8, %dec_label_pc_11a5
  %15 = mul i64 %arg1, 2, !insn.addr !32
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %sext = mul i64 %arg1, 4294967296
  %16 = ashr exact i64 %sext, 32, !insn.addr !42
  %17 = mul nsw i64 %16, %16, !insn.addr !42
  %18 = trunc i64 %17 to i32, !insn.addr !42
  %19 = trunc i64 %15 to i32, !insn.addr !43
  %20 = or i32 %19, 1, !insn.addr !44
  %21 = add i32 %20, %18, !insn.addr !45
  %22 = mul i32 %1, %1, !insn.addr !46
  %23 = trunc i64 %rcx.0.reload to i32, !insn.addr !47
  %24 = add i64 %15, 10, !insn.addr !48
  %25 = mul i64 %arg1, 3, !insn.addr !49
  %26 = add i64 %25, 20, !insn.addr !50
  %27 = icmp eq i32 %23, 1
  %28 = icmp eq i32 %21, %22
  %29 = icmp eq i1 %28, %27, !insn.addr !51
  %30 = select i1 %29, i64 %24, i64 %26, !insn.addr !52
  %31 = and i64 %30, 4294967295, !insn.addr !52
  ret i64 %31, !insn.addr !53

; uselistorder directives
  uselistorder i64 %15, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 3, 0, 1, 2, 4 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_11e9:
  %rdx.0.reg2mem = alloca i64, !insn.addr !54
  %rax.0.reg2mem = alloca i64, !insn.addr !54
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !55
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !55
  br label %dec_label_pc_11f3, !insn.addr !55

dec_label_pc_11f3:                                ; preds = %dec_label_pc_11f3, %dec_label_pc_11e9
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = trunc i64 %rax.0.reload to i32, !insn.addr !56
  %1 = ashr i32 %0, 31, !insn.addr !56
  %2 = zext i32 %1 to i64, !insn.addr !57
  %3 = mul i64 %2, 4294967296, !insn.addr !57
  %4 = or i64 %3, %rax.0.reload, !insn.addr !57
  %5 = srem i64 %4, %rdx.0.reload, !insn.addr !57
  %6 = and i64 %5, 4294967295, !insn.addr !57
  %7 = trunc i64 %5 to i32, !insn.addr !58
  %8 = icmp eq i32 %7, 0, !insn.addr !58
  %9 = icmp eq i1 %8, false, !insn.addr !59
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !59
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !59
  br i1 %9, label %dec_label_pc_11f3, label %dec_label_pc_11fe, !insn.addr !59

dec_label_pc_11fe:                                ; preds = %dec_label_pc_11f3
  %10 = icmp eq i64 %rdx.0.reload, 1, !insn.addr !60
  %11 = select i1 %10, i64 20, i64 35, !insn.addr !61
  ret i64 %11, !insn.addr !62

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_120f:
  %0 = trunc i64 %arg1 to i32, !insn.addr !63
  %1 = mul i32 %0, 21, !insn.addr !64
  %2 = udiv i32 %0, 2, !insn.addr !65
  %3 = urem i32 %0, 16, !insn.addr !66
  %4 = add nuw i32 %2, %3, !insn.addr !67
  %5 = add i32 %4, %1, !insn.addr !68
  %6 = zext i32 %5 to i64, !insn.addr !68
  ret i64 %6, !insn.addr !69

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1223:
  ret i64 225, !insn.addr !70
}

define i64 @decrypt_string(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1229:
  %rcx.0.in.reg2mem = alloca i64, !insn.addr !71
  %rax.0.in.reg2mem = alloca i8, !insn.addr !71
  %rsi = alloca i64, align 8
  %0 = inttoptr i64 %arg2 to i8*, !insn.addr !72
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !72
  %2 = trunc i64 %arg3 to i32, !insn.addr !72
  %3 = call i8* @strncpy(i8* %0, i8* %1, i32 %2), !insn.addr !72
  %4 = add i64 %arg2, -1, !insn.addr !73
  %5 = add i64 %4, %arg3, !insn.addr !73
  %6 = inttoptr i64 %5 to i8*, !insn.addr !73
  store i8 0, i8* %6, align 1, !insn.addr !73
  %7 = bitcast i64* %rsi to i8*
  %8 = load i8, i8* %7, align 8, !insn.addr !74
  %9 = icmp eq i8 %8, 0, !insn.addr !75
  br i1 %9, label %dec_label_pc_1260, label %dec_label_pc_1252.preheader, !insn.addr !76

dec_label_pc_1252.preheader:                      ; preds = %dec_label_pc_1229
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %rax.0.in.reg2mem
  store i64 %arg2, i64* %rcx.0.in.reg2mem
  br label %dec_label_pc_1252

dec_label_pc_1252:                                ; preds = %dec_label_pc_1252.preheader, %dec_label_pc_1252
  %rcx.0.in.reload = load i64, i64* %rcx.0.in.reg2mem
  %rax.0.in.reload = load i8, i8* %rax.0.in.reg2mem
  %rcx.0 = add i64 %rcx.0.in.reload, 1
  %11 = xor i8 %rax.0.in.reload, %10, !insn.addr !77
  %12 = inttoptr i64 %rcx.0.in.reload to i8*, !insn.addr !77
  store i8 %11, i8* %12, align 1, !insn.addr !77
  %13 = inttoptr i64 %rcx.0 to i8*, !insn.addr !78
  %14 = load i8, i8* %13, align 1, !insn.addr !78
  %15 = icmp eq i8 %14, 0, !insn.addr !79
  %16 = icmp eq i1 %15, false, !insn.addr !80
  store i8 %14, i8* %rax.0.in.reg2mem, !insn.addr !80
  store i64 %rcx.0, i64* %rcx.0.in.reg2mem, !insn.addr !80
  br i1 %16, label %dec_label_pc_1252, label %dec_label_pc_1260, !insn.addr !80

dec_label_pc_1260:                                ; preds = %dec_label_pc_1252, %dec_label_pc_1229
  ret i64 %arg2, !insn.addr !81

; uselistorder directives
  uselistorder i64 %rcx.0.in.reload, { 1, 0 }
  uselistorder i8* %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_1252, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1269:
  %storemerge.reg2mem = alloca i32, !insn.addr !82
  %rcx.0.reg2mem = alloca i64, !insn.addr !82
  %rax.0.reg2mem = alloca i8, !insn.addr !82
  %stack_var_-39 = alloca i64, align 8
  %stack_var_-40 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !83
  %1 = call i8* @strncpy(i8* nonnull %0, i8* inttoptr (i64 16480 to i8*), i32 32), !insn.addr !83
  %2 = load i32, i32* %stack_var_-40, align 4, !insn.addr !84
  %3 = trunc i32 %2 to i8, !insn.addr !85
  %4 = icmp eq i8 %3, 0, !insn.addr !85
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !86
  br i1 %4, label %dec_label_pc_12ab, label %dec_label_pc_128f, !insn.addr !86

dec_label_pc_128f:                                ; preds = %dec_label_pc_1269
  %5 = ptrtoint i64* %stack_var_-39 to i64, !insn.addr !87
  store i8 %3, i8* %rax.0.reg2mem, !insn.addr !87
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !87
  br label %dec_label_pc_1294, !insn.addr !87

dec_label_pc_1294:                                ; preds = %dec_label_pc_1294, %dec_label_pc_128f
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i8, i8* %rax.0.reg2mem
  %6 = xor i8 %rax.0.reload, 90, !insn.addr !88
  %7 = add i64 %rcx.0.reload, -1, !insn.addr !88
  %8 = inttoptr i64 %7 to i8*, !insn.addr !88
  store i8 %6, i8* %8, align 1, !insn.addr !88
  %9 = inttoptr i64 %rcx.0.reload to i8*, !insn.addr !89
  %10 = load i8, i8* %9, align 1, !insn.addr !89
  %11 = add i64 %rcx.0.reload, 1, !insn.addr !90
  %12 = icmp eq i8 %10, 0, !insn.addr !91
  %13 = icmp eq i1 %12, false, !insn.addr !92
  store i8 %10, i8* %rax.0.reg2mem, !insn.addr !92
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !92
  br i1 %13, label %dec_label_pc_1294, label %dec_label_pc_12a2, !insn.addr !92

dec_label_pc_12a2:                                ; preds = %dec_label_pc_1294
  %14 = load i32, i32* %stack_var_-40, align 4, !insn.addr !93
  %15 = zext i32 %14 to i64, !insn.addr !93
  %sext = mul i64 %15, 72057594037927936
  %16 = ashr exact i64 %sext, 56, !insn.addr !93
  %phitmp = trunc i64 %16 to i32
  store i32 %phitmp, i32* %storemerge.reg2mem, !insn.addr !94
  br label %dec_label_pc_12ab, !insn.addr !94

dec_label_pc_12ab:                                ; preds = %dec_label_pc_1269, %dec_label_pc_12a2
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %17 = call i32 @strlen(i8* nonnull %0), !insn.addr !95
  %18 = add i32 %17, %storemerge.reload, !insn.addr !96
  %19 = zext i32 %18 to i64, !insn.addr !96
  ret i64 %19, !insn.addr !97

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 2, 1, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0, 2 }
  uselistorder i8* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8 0, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12ab, { 1, 0 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_12bb:
  %0 = call i64 @param_string_encryption(), !insn.addr !98
  ret i64 %0, !insn.addr !98
}

define i64 @param_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_12c0:
  %rax.0.in.reg2mem = alloca i64, !insn.addr !99
  %0 = trunc i64 %arg1 to i32, !insn.addr !100
  %1 = icmp slt i32 %0, 1
  store i64 %arg2, i64* %rax.0.in.reg2mem, !insn.addr !101
  br i1 %1, label %dec_label_pc_12dc, label %dec_label_pc_12c6, !insn.addr !101

dec_label_pc_12c6:                                ; preds = %dec_label_pc_12c0
  %2 = add i64 %arg1, 4294967295, !insn.addr !102
  %3 = and i64 %2, 4294967295, !insn.addr !102
  %4 = add i64 %arg1, 4294967294, !insn.addr !103
  %5 = and i64 %4, 4294967295, !insn.addr !103
  %narrow = mul nuw i64 %5, %3
  %sext = mul i64 %2, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !104
  %7 = mul nsw i64 %6, %6, !insn.addr !104
  %8 = udiv i64 %narrow, 2, !insn.addr !105
  %9 = add i64 %arg2, %arg1, !insn.addr !106
  %10 = add i64 %9, %7, !insn.addr !107
  %11 = sub i64 %10, %8, !insn.addr !108
  store i64 %11, i64* %rax.0.in.reg2mem, !insn.addr !108
  br label %dec_label_pc_12dc, !insn.addr !108

dec_label_pc_12dc:                                ; preds = %dec_label_pc_12c6, %dec_label_pc_12c0
  %rax.0.in.reload = load i64, i64* %rax.0.in.reg2mem
  %rax.0 = and i64 %rax.0.in.reload, 4294967295
  ret i64 %rax.0, !insn.addr !109

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64 %arg1, { 0, 2, 1, 3 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_12dd:
  ret i64 500500, !insn.addr !110
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_12e3:
  %0 = trunc i64 %arg1 to i32, !insn.addr !111
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_12fc, label %dec_label_pc_12e7, !insn.addr !112

dec_label_pc_12e7:                                ; preds = %dec_label_pc_12e3
  %2 = add i64 %arg1, 4294967295, !insn.addr !113
  %3 = and i64 %2, 4294967295, !insn.addr !113
  %4 = add i64 %arg1, 4294967294, !insn.addr !114
  %5 = and i64 %4, 4294967295, !insn.addr !114
  %narrow = mul nuw i64 %5, %3
  %sext = mul i64 %2, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !115
  %7 = mul nsw i64 %6, %6, !insn.addr !115
  %8 = udiv i64 %narrow, 2, !insn.addr !116
  %9 = add i64 %7, %arg1, !insn.addr !117
  %10 = sub i64 %9, %8, !insn.addr !118
  %11 = and i64 %10, 4294967295, !insn.addr !118
  ret i64 %11, !insn.addr !119

dec_label_pc_12fc:                                ; preds = %dec_label_pc_12e3
  ret i64 0, !insn.addr !120

; uselistorder directives
  uselistorder i64 %arg1, { 0, 2, 1, 3 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_12ff:
  ret i64 5050, !insn.addr !121
}

define i64 @param_vectorized_loop(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1305:
  %rcx.0.reg2mem = alloca i64, !insn.addr !122
  %rax.0.reg2mem = alloca i32, !insn.addr !122
  %r9.0.reg2mem = alloca i64, !insn.addr !122
  %0 = trunc i64 %arg4 to i32, !insn.addr !122
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1337, label %dec_label_pc_1309, !insn.addr !123

dec_label_pc_1309:                                ; preds = %dec_label_pc_1305
  %2 = and i64 %arg4, 4294967295, !insn.addr !124
  store i64 0, i64* %r9.0.reg2mem, !insn.addr !125
  br label %dec_label_pc_130f, !insn.addr !125

dec_label_pc_130f:                                ; preds = %dec_label_pc_130f, %dec_label_pc_1309
  %r9.0.reload = load i64, i64* %r9.0.reg2mem
  %3 = mul i64 %r9.0.reload, 4, !insn.addr !126
  %4 = add i64 %3, %arg2, !insn.addr !126
  %5 = inttoptr i64 %4 to i32*, !insn.addr !126
  %6 = load i32, i32* %5, align 4, !insn.addr !126
  %7 = add i64 %3, %arg1, !insn.addr !127
  %8 = inttoptr i64 %7 to i32*, !insn.addr !127
  %9 = load i32, i32* %8, align 4, !insn.addr !127
  %10 = add i32 %9, %6, !insn.addr !127
  %11 = add i64 %3, %arg3, !insn.addr !128
  %12 = inttoptr i64 %11 to i32*, !insn.addr !128
  store i32 %10, i32* %12, align 4, !insn.addr !128
  %13 = add i64 %r9.0.reload, 1, !insn.addr !129
  %14 = icmp eq i64 %2, %13, !insn.addr !130
  %15 = icmp eq i1 %14, false, !insn.addr !131
  store i64 %13, i64* %r9.0.reg2mem, !insn.addr !131
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !131
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !131
  br i1 %15, label %dec_label_pc_130f, label %dec_label_pc_132b, !insn.addr !131

dec_label_pc_132b:                                ; preds = %dec_label_pc_130f, %dec_label_pc_132b
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %16 = mul i64 %rcx.0.reload, 4, !insn.addr !132
  %17 = add i64 %16, %arg3, !insn.addr !132
  %18 = inttoptr i64 %17 to i32*, !insn.addr !132
  %19 = load i32, i32* %18, align 4, !insn.addr !132
  %20 = add i32 %19, %rax.0.reload, !insn.addr !132
  %21 = add i64 %rcx.0.reload, 1, !insn.addr !133
  %22 = icmp eq i64 %2, %21, !insn.addr !134
  %23 = icmp eq i1 %22, false, !insn.addr !135
  store i32 %20, i32* %rax.0.reg2mem, !insn.addr !135
  store i64 %21, i64* %rcx.0.reg2mem, !insn.addr !135
  br i1 %23, label %dec_label_pc_132b, label %dec_label_pc_1336, !insn.addr !135

dec_label_pc_1336:                                ; preds = %dec_label_pc_132b
  %24 = zext i32 %20 to i64, !insn.addr !132
  ret i64 %24, !insn.addr !136

dec_label_pc_1337:                                ; preds = %dec_label_pc_1305
  ret i64 0, !insn.addr !137

; uselistorder directives
  uselistorder i32 %20, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64* %r9.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 1, { 2, 3, 4, 0, 1 }
  uselistorder label %dec_label_pc_132b, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_133a:
  %0 = alloca i128
  %1 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !138
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = call i128 @__asm_pxor(i128 %3, i128 %3), !insn.addr !138
  %5 = call i64 @__asm_movdqa(i128 %4), !insn.addr !139
  %6 = call i64 @__asm_movdqa(i128 %4), !insn.addr !140
  %7 = add i64 %2, -40
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !141
  br label %dec_label_pc_135a, !insn.addr !141

dec_label_pc_135a:                                ; preds = %dec_label_pc_135a, %dec_label_pc_133a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %8 = add i64 %rax.0.reload, ptrtoint (i64* @global_var_2030 to i64), !insn.addr !142
  %9 = inttoptr i64 %8 to i128*, !insn.addr !142
  %10 = load i128, i128* %9, align 8, !insn.addr !142
  %11 = call i128 @__asm_movdqa.1(i128 %10), !insn.addr !142
  %12 = add i64 %rax.0.reload, ptrtoint (i64* @global_var_2010 to i64), !insn.addr !143
  %13 = inttoptr i64 %12 to i128*, !insn.addr !143
  %14 = load i128, i128* %13, align 8, !insn.addr !143
  %15 = call i128 @__asm_paddd(i128 %11, i128 %14), !insn.addr !143
  %16 = call i64 @__asm_movdqa(i128 %15), !insn.addr !144
  %17 = add i64 %7, %rax.0.reload, !insn.addr !144
  %18 = sext i64 %16 to i128, !insn.addr !144
  %19 = inttoptr i64 %17 to i128*, !insn.addr !144
  store i128 %18, i128* %19, align 8, !insn.addr !144
  %20 = add nuw nsw i64 %rax.0.reload, 16, !insn.addr !145
  %21 = icmp eq i64 %rax.0.reload, 16, !insn.addr !146
  %22 = icmp eq i1 %21, false, !insn.addr !147
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !147
  br i1 %22, label %dec_label_pc_135a, label %dec_label_pc_1374, !insn.addr !147

dec_label_pc_1374:                                ; preds = %dec_label_pc_135a
  %23 = sext i64 %5 to i128, !insn.addr !139
  %24 = sext i64 %6 to i128, !insn.addr !140
  %25 = call i128 @__asm_movdqa.1(i128 %23), !insn.addr !148
  %26 = call i128 @__asm_paddd(i128 %25, i128 %24), !insn.addr !149
  %27 = call i128 @__asm_pshufd(i128 %26, i8 -18), !insn.addr !150
  %28 = call i128 @__asm_paddd(i128 %27, i128 %26), !insn.addr !151
  %29 = call i128 @__asm_pshufd(i128 %28, i8 85), !insn.addr !152
  %30 = call i128 @__asm_paddd(i128 %29, i128 %28), !insn.addr !153
  %31 = call i32 @__asm_movd(i128 %30), !insn.addr !154
  %32 = sext i32 %31 to i64, !insn.addr !154
  ret i64 %32, !insn.addr !155

; uselistorder directives
  uselistorder i128 %28, { 1, 0 }
  uselistorder i128 %26, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 3, 4, 0, 1 }
  uselistorder i128 %4, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_1397:
  %0 = mul i64 %arg1, 2, !insn.addr !156
  %1 = add i64 %0, 10, !insn.addr !157
  %2 = and i64 %1, 4294967294, !insn.addr !157
  ret i64 %2, !insn.addr !158
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_139e:
  ret i64 20, !insn.addr !159
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_13a4:
  store i32 1, i32* bitcast (i64* @global_var_4080 to i32*), align 8, !insn.addr !160
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4090 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !161
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !161
}

define i64 @param_division_by_zero(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_13c0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !162
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5028 to void (i32)*)), !insn.addr !163
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4090 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !164
  %2 = icmp eq i32 %1, 0, !insn.addr !165
  %3 = icmp eq i1 %2, false, !insn.addr !166
  store i64 4294967295, i64* %rcx.0.reg2mem, !insn.addr !166
  br i1 %3, label %dec_label_pc_13f4, label %dec_label_pc_13e9, !insn.addr !166

dec_label_pc_13e9:                                ; preds = %dec_label_pc_13c0
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %rcx.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_13f4, !insn.addr !167

dec_label_pc_13f4:                                ; preds = %dec_label_pc_13e9, %dec_label_pc_13c0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  ret i64 %rcx.0.reload, !insn.addr !168
}

define i64 @call_division_by_zero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_division_by_zero(i64 5, i64 %arg2, i64 %1), !insn.addr !169
  %3 = call i64 @param_division_by_zero(i64 0, i64 %arg2, i64 %1), !insn.addr !170
  %4 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !171
  %5 = add i64 %3, %2, !insn.addr !172
  %6 = and i64 %5, 4294967295, !insn.addr !173
  ret i64 %6, !insn.addr !174

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i64, i64, i64)* @param_division_by_zero, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_1427:
  store i32 1, i32* bitcast (i64* @global_var_4158 to i32*), align 8, !insn.addr !175
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !176
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !176

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 0 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i64 @param_null_pointer_deref(i64* %arg1) local_unnamed_addr {
dec_label_pc_1443:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 5159 to void (i32)*)), !insn.addr !177
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !178
  %4 = icmp eq i32 %3, 0, !insn.addr !179
  %5 = icmp eq i1 %4, false, !insn.addr !180
  %6 = and i64 %1, 4294967295
  %rcx.0 = select i1 %5, i64 4294967295, i64 %6
  ret i64 %rcx.0, !insn.addr !181

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1473:
  %stack_var_-20 = alloca i64, align 8
  store i64 42, i64* %stack_var_-20, align 8, !insn.addr !182
  %0 = call i64 @param_null_pointer_deref(i64* nonnull %stack_var_-20), !insn.addr !183
  %1 = call i64 @param_null_pointer_deref(i64* null), !insn.addr !184
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !185
  %3 = add i64 %1, %0, !insn.addr !186
  %4 = and i64 %3, 4294967295, !insn.addr !187
  ret i64 %4, !insn.addr !188

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_14a8:
  %0 = and i64 %arg1, 4294967295, !insn.addr !189
  ret i64 %0, !insn.addr !190
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_14ab:
  %0 = and i64 %arg1, 4294967295, !insn.addr !191
  ret i64 %0, !insn.addr !192
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_14ae:
  ret i64 30, !insn.addr !193
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_14b4:
  %0 = add i64 %arg2, %arg1, !insn.addr !194
  %1 = trunc i64 %arg1 to i32, !insn.addr !195
  %2 = icmp slt i32 %1, 1
  %3 = trunc i64 %arg2 to i32, !insn.addr !196
  %4 = icmp slt i32 %3, 1
  %or.cond = or i1 %2, %4
  %.pre = trunc i64 %0 to i32
  %5 = icmp slt i32 %.pre, 0, !insn.addr !197
  %6 = icmp eq i1 %5, false, !insn.addr !198
  %or.cond3 = or i1 %or.cond, %6
  br i1 %or.cond3, label %dec_label_pc_14c9, label %dec_label_pc_14c8, !insn.addr !199

dec_label_pc_14c8:                                ; preds = %dec_label_pc_14b4
  ret i64 4294967295, !insn.addr !200

dec_label_pc_14c9:                                ; preds = %dec_label_pc_14b4
  %7 = and i64 %0, 4294967295, !insn.addr !194
  %8 = icmp slt i32 %.pre, 1
  %9 = and i64 %arg2, %arg1
  %10 = trunc i64 %9 to i32, !insn.addr !201
  %11 = icmp slt i32 %10, 0, !insn.addr !201
  %12 = icmp eq i1 %11, false, !insn.addr !202
  %13 = or i1 %8, %12
  %14 = select i1 %13, i64 %7, i64 4294967294, !insn.addr !202
  ret i64 %14, !insn.addr !203

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_14d9:
  ret i64 2000000000, !insn.addr !204
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_14df:
  %0 = mul i64 %arg1, 2, !insn.addr !205
  %1 = and i64 %0, 4294967294, !insn.addr !205
  ret i64 %1, !insn.addr !206

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2, 3, 4 }
  uselistorder i64 2, { 0, 1, 3, 4, 2 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_14e3:
  ret i64 10, !insn.addr !207

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_14e9:
  ret i64 47, !insn.addr !208
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_14ef:
  ret i64 47, !insn.addr !209
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_14f5:
  %rdx.0.reg2mem = alloca i64, !insn.addr !210
  %rax.0.reg2mem = alloca i64, !insn.addr !210
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2221 to i8*)), !insn.addr !211
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2050 to i8*)), !insn.addr !212
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !213
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_151f, !insn.addr !213

dec_label_pc_151f:                                ; preds = %dec_label_pc_151f, %dec_label_pc_14f5
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = trunc i64 %rax.0.reload to i32, !insn.addr !214
  %3 = ashr i32 %2, 31, !insn.addr !214
  %4 = zext i32 %3 to i64, !insn.addr !215
  %5 = mul i64 %4, 4294967296, !insn.addr !215
  %6 = or i64 %5, %rax.0.reload, !insn.addr !215
  %7 = srem i64 %6, %rdx.0.reload, !insn.addr !215
  %8 = and i64 %7, 4294967295, !insn.addr !215
  %9 = trunc i64 %7 to i32, !insn.addr !216
  %10 = icmp eq i32 %9, 0, !insn.addr !216
  %11 = icmp eq i1 %10, false, !insn.addr !217
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !217
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !217
  br i1 %11, label %dec_label_pc_151f, label %dec_label_pc_152a, !insn.addr !217

dec_label_pc_152a:                                ; preds = %dec_label_pc_151f
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_206c to i8*)), !insn.addr !218
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2088 to i8*)), !insn.addr !219
  %14 = call i64 @param_string_encryption(), !insn.addr !220
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20a5 to i8*)), !insn.addr !221
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20c1 to i8*)), !insn.addr !222
  %17 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20eb to i8*)), !insn.addr !223
  %18 = call i64 @call_vectorized_loop(), !insn.addr !224
  %19 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2110 to i8*)), !insn.addr !225
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2136 to i8*)), !insn.addr !226
  %21 = call i64 @call_division_by_zero(i64 ptrtoint (i8** @global_var_2136 to i64), i64 20), !insn.addr !227
  %22 = and i64 %21, 4294967295, !insn.addr !228
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2156 to i8*)), !insn.addr !229
  %24 = call i64 @call_null_pointer_deref(i64 ptrtoint (i8** @global_var_2156 to i64), i64 %22), !insn.addr !230
  %25 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2172 to i8*)), !insn.addr !231
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218f to i8*)), !insn.addr !232
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21ac to i8*)), !insn.addr !233
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21dd to i8*)), !insn.addr !234
  %29 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21fa to i8*)), !insn.addr !235
  %30 = sext i32 %29 to i64, !insn.addr !235
  ret i64 %30, !insn.addr !235

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i8** @global_var_2156, { 1, 0 }
  uselistorder i64 20, { 3, 0, 1, 2 }
  uselistorder i8** @global_var_2136, { 1, 0 }
  uselistorder i64 ()* @param_string_encryption, { 1, 0 }
  uselistorder i1 false, { 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder i32 0, { 5, 6, 2, 7, 8, 0, 1, 9, 10, 11, 3, 4 }
  uselistorder i64 4294967295, { 6, 7, 8, 2, 9, 10, 11, 4, 3, 12, 0, 13, 14, 15, 16, 17, 5, 18, 19, 20, 21, 22, 23, 24, 1, 25 }
  uselistorder i64 5, { 0, 2, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1635:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !236
  ret i64 0, !insn.addr !237

; uselistorder directives
  uselistorder i64 0, { 4, 38, 0, 5, 1, 2, 6, 42, 7, 3, 43, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 41 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1640:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !238

; uselistorder directives
  uselistorder i32 1, { 5, 7, 6, 26, 25, 27, 36, 4, 28, 39, 3, 8, 29, 40, 9, 2, 0, 30, 12, 11, 10, 31, 32, 13, 35, 37, 16, 15, 14, 34, 18, 17, 20, 19, 33, 41, 42, 23, 22, 21, 1, 38, 24 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_movdqa.1(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4192}
!10 = !{i64 4208}
!11 = !{i64 4224}
!12 = !{i64 4240}
!13 = !{i64 4256}
!14 = !{i64 4303}
!15 = !{i64 4309}
!16 = !{i64 4360}
!17 = !{i64 4424}
!18 = !{i64 4436}
!19 = !{i64 4443}
!20 = !{i64 4446}
!21 = !{i64 4457}
!22 = !{i64 4459}
!23 = !{i64 4466}
!24 = !{i64 4471}
!25 = !{i64 4476}
!26 = !{i64 4484}
!27 = !{i64 4488}
!28 = !{i64 4500}
!29 = !{i64 4508}
!30 = !{i64 4510}
!31 = !{i64 4516}
!32 = !{i64 4517}
!33 = !{i64 4521}
!34 = !{i64 4528}
!35 = !{i64 4530}
!36 = !{i64 4532}
!37 = !{i64 4534}
!38 = !{i64 4538}
!39 = !{i64 4539}
!40 = !{i64 4543}
!41 = !{i64 4545}
!42 = !{i64 4549}
!43 = !{i64 4552}
!44 = !{i64 4555}
!45 = !{i64 4558}
!46 = !{i64 4560}
!47 = !{i64 4565}
!48 = !{i64 4568}
!49 = !{i64 4572}
!50 = !{i64 4575}
!51 = !{i64 4578}
!52 = !{i64 4580}
!53 = !{i64 4584}
!54 = !{i64 4585}
!55 = !{i64 4590}
!56 = !{i64 4597}
!57 = !{i64 4598}
!58 = !{i64 4602}
!59 = !{i64 4604}
!60 = !{i64 4606}
!61 = !{i64 4619}
!62 = !{i64 4622}
!63 = !{i64 4623}
!64 = !{i64 4628}
!65 = !{i64 4633}
!66 = !{i64 4635}
!67 = !{i64 4638}
!68 = !{i64 4640}
!69 = !{i64 4642}
!70 = !{i64 4648}
!71 = !{i64 4649}
!72 = !{i64 4668}
!73 = !{i64 4673}
!74 = !{i64 4679}
!75 = !{i64 4682}
!76 = !{i64 4684}
!77 = !{i64 4692}
!78 = !{i64 4695}
!79 = !{i64 4700}
!80 = !{i64 4702}
!81 = !{i64 4712}
!82 = !{i64 4713}
!83 = !{i64 4736}
!84 = !{i64 4745}
!85 = !{i64 4747}
!86 = !{i64 4749}
!87 = !{i64 4751}
!88 = !{i64 4758}
!89 = !{i64 4761}
!90 = !{i64 4763}
!91 = !{i64 4766}
!92 = !{i64 4768}
!93 = !{i64 4770}
!94 = !{i64 4775}
!95 = !{i64 4782}
!96 = !{i64 4787}
!97 = !{i64 4794}
!98 = !{i64 4795}
!99 = !{i64 4800}
!100 = !{i64 4802}
!101 = !{i64 4804}
!102 = !{i64 4806}
!103 = !{i64 4809}
!104 = !{i64 4816}
!105 = !{i64 4819}
!106 = !{i64 4822}
!107 = !{i64 4824}
!108 = !{i64 4826}
!109 = !{i64 4828}
!110 = !{i64 4834}
!111 = !{i64 4835}
!112 = !{i64 4837}
!113 = !{i64 4839}
!114 = !{i64 4842}
!115 = !{i64 4849}
!116 = !{i64 4852}
!117 = !{i64 4855}
!118 = !{i64 4857}
!119 = !{i64 4859}
!120 = !{i64 4862}
!121 = !{i64 4868}
!122 = !{i64 4869}
!123 = !{i64 4871}
!124 = !{i64 4873}
!125 = !{i64 4876}
!126 = !{i64 4879}
!127 = !{i64 4883}
!128 = !{i64 4887}
!129 = !{i64 4891}
!130 = !{i64 4894}
!131 = !{i64 4897}
!132 = !{i64 4907}
!133 = !{i64 4910}
!134 = !{i64 4913}
!135 = !{i64 4916}
!136 = !{i64 4918}
!137 = !{i64 4921}
!138 = !{i64 4922}
!139 = !{i64 4926}
!140 = !{i64 4932}
!141 = !{i64 4947}
!142 = !{i64 4954}
!143 = !{i64 4959}
!144 = !{i64 4964}
!145 = !{i64 4970}
!146 = !{i64 4974}
!147 = !{i64 4978}
!148 = !{i64 4980}
!149 = !{i64 4986}
!150 = !{i64 4992}
!151 = !{i64 4997}
!152 = !{i64 5001}
!153 = !{i64 5006}
!154 = !{i64 5010}
!155 = !{i64 5014}
!156 = !{i64 5015}
!157 = !{i64 5018}
!158 = !{i64 5021}
!159 = !{i64 5027}
!160 = !{i64 5029}
!161 = !{i64 5051}
!162 = !{i64 5056}
!163 = !{i64 5071}
!164 = !{i64 5083}
!165 = !{i64 5093}
!166 = !{i64 5095}
!167 = !{i64 5106}
!168 = !{i64 5111}
!169 = !{i64 5120}
!170 = !{i64 5129}
!171 = !{i64 5143}
!172 = !{i64 5148}
!173 = !{i64 5150}
!174 = !{i64 5158}
!175 = !{i64 5160}
!176 = !{i64 5182}
!177 = !{i64 5203}
!178 = !{i64 5215}
!179 = !{i64 5225}
!180 = !{i64 5227}
!181 = !{i64 5234}
!182 = !{i64 5243}
!183 = !{i64 5249}
!184 = !{i64 5258}
!185 = !{i64 5272}
!186 = !{i64 5277}
!187 = !{i64 5279}
!188 = !{i64 5287}
!189 = !{i64 5288}
!190 = !{i64 5290}
!191 = !{i64 5291}
!192 = !{i64 5293}
!193 = !{i64 5299}
!194 = !{i64 5300}
!195 = !{i64 5303}
!196 = !{i64 5307}
!197 = !{i64 5316}
!198 = !{i64 5318}
!199 = !{i64 5305}
!200 = !{i64 5320}
!201 = !{i64 5331}
!202 = !{i64 5333}
!203 = !{i64 5336}
!204 = !{i64 5342}
!205 = !{i64 5343}
!206 = !{i64 5346}
!207 = !{i64 5352}
!208 = !{i64 5358}
!209 = !{i64 5364}
!210 = !{i64 5365}
!211 = !{i64 5373}
!212 = !{i64 5392}
!213 = !{i64 5402}
!214 = !{i64 5409}
!215 = !{i64 5410}
!216 = !{i64 5414}
!217 = !{i64 5416}
!218 = !{i64 5443}
!219 = !{i64 5462}
!220 = !{i64 5467}
!221 = !{i64 5483}
!222 = !{i64 5502}
!223 = !{i64 5521}
!224 = !{i64 5526}
!225 = !{i64 5542}
!226 = !{i64 5561}
!227 = !{i64 5566}
!228 = !{i64 5578}
!229 = !{i64 5582}
!230 = !{i64 5587}
!231 = !{i64 5603}
!232 = !{i64 5622}
!233 = !{i64 5641}
!234 = !{i64 5660}
!235 = !{i64 5680}
!236 = !{i64 5686}
!237 = !{i64 5694}
!238 = !{i64 5708}
