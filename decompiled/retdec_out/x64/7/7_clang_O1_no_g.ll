source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2030 = constant i64 30064771080
@global_var_4080 = local_unnamed_addr global i64 0
@global_var_4158 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4070 = local_unnamed_addr global i8 0
@1 = internal constant [5 x i8] c"\1A+<M\00"
@global_var_4060 = global i8* getelementptr inbounds ([5 x i8], [5 x i8]* @1, i64 0, i64 0)
@global_var_3e8 = global i32 0
@global_var_2010 = constant i32 1
@global_var_4090 = global i32 0
@global_var_4160 = global i32 0
@2 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2221 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2050 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_206c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_2088 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_20a5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20c1 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20eb = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @8, i64 0, i64 0)
@9 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2110 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @9, i64 0, i64 0)
@10 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2136 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_2156 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_2172 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_218f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_21ac = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21dd = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21fa = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @16, i64 0, i64 0)

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
  %3 = call i32 @__libc_start_main(i64 6288, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !14
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
dec_label_pc_11a0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !29
  ret i64 %0, !insn.addr !30
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_11b0:
  ret i64 10, !insn.addr !31
}

define i64 @param_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_11c0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !32
  %rdx.0.reg2mem = alloca i64, !insn.addr !32
  %rax.0.reg2mem = alloca i64, !insn.addr !32
  %0 = trunc i64 %arg1 to i32, !insn.addr !33
  %1 = and i64 %arg1, 4294967295, !insn.addr !34
  %2 = add i32 %0, 1, !insn.addr !35
  %3 = icmp eq i32 %2, 0, !insn.addr !35
  store i64 %1, i64* %rcx.0.reg2mem, !insn.addr !36
  br i1 %3, label %dec_label_pc_11db, label %dec_label_pc_11cc, !insn.addr !36

dec_label_pc_11cc:                                ; preds = %dec_label_pc_11c0
  %4 = zext i32 %2 to i64, !insn.addr !35
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !37
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !37
  br label %dec_label_pc_11d0, !insn.addr !37

dec_label_pc_11d0:                                ; preds = %dec_label_pc_11d0, %dec_label_pc_11cc
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
  br i1 %14, label %dec_label_pc_11d0, label %dec_label_pc_11db, !insn.addr !41

dec_label_pc_11db:                                ; preds = %dec_label_pc_11d0, %dec_label_pc_11c0
  %15 = mul i64 %arg1, 2, !insn.addr !32
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %sext = mul i64 %arg1, 4294967296
  %16 = ashr exact i64 %sext, 32, !insn.addr !42
  %17 = mul nsw i64 %16, %16, !insn.addr !42
  %18 = trunc i64 %17 to i32, !insn.addr !42
  %19 = trunc i64 %15 to i32, !insn.addr !43
  %20 = or i32 %19, 1, !insn.addr !44
  %21 = add i32 %20, %18, !insn.addr !45
  %22 = mul i32 %2, %2, !insn.addr !46
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
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 2, 0, 1, 3, 4 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1210:
  %rdx.0.reg2mem = alloca i64, !insn.addr !54
  %rax.0.reg2mem = alloca i64, !insn.addr !54
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !55
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !55
  br label %dec_label_pc_1220, !insn.addr !55

dec_label_pc_1220:                                ; preds = %dec_label_pc_1220, %dec_label_pc_1210
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
  br i1 %9, label %dec_label_pc_1220, label %dec_label_pc_122b, !insn.addr !59

dec_label_pc_122b:                                ; preds = %dec_label_pc_1220
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
dec_label_pc_1240:
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
dec_label_pc_1260:
  ret i64 225, !insn.addr !70
}

define i64 @decrypt_string(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1270:
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
  br i1 %9, label %dec_label_pc_12b0, label %dec_label_pc_12a0.preheader, !insn.addr !76

dec_label_pc_12a0.preheader:                      ; preds = %dec_label_pc_1270
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %rax.0.in.reg2mem
  store i64 %arg2, i64* %rcx.0.in.reg2mem
  br label %dec_label_pc_12a0

dec_label_pc_12a0:                                ; preds = %dec_label_pc_12a0.preheader, %dec_label_pc_12a0
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
  br i1 %16, label %dec_label_pc_12a0, label %dec_label_pc_12b0, !insn.addr !80

dec_label_pc_12b0:                                ; preds = %dec_label_pc_12a0, %dec_label_pc_1270
  ret i64 %arg2, !insn.addr !81

; uselistorder directives
  uselistorder i64 %rcx.0.in.reload, { 1, 0 }
  uselistorder i8* %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg2, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_12a0, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_12c0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !82
  %rax.0.reg2mem = alloca i8, !insn.addr !82
  %stack_var_-39 = alloca i64, align 8
  %stack_var_-40 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !83
  %1 = call i8* @strncpy(i8* nonnull %0, i8* inttoptr (i64 16480 to i8*), i32 32), !insn.addr !83
  %2 = load i32, i32* %stack_var_-40, align 4, !insn.addr !84
  %3 = trunc i32 %2 to i8, !insn.addr !85
  %4 = icmp eq i8 %3, 0, !insn.addr !85
  br i1 %4, label %dec_label_pc_1300, label %dec_label_pc_12e4, !insn.addr !86

dec_label_pc_12e4:                                ; preds = %dec_label_pc_12c0
  %5 = ptrtoint i64* %stack_var_-39 to i64, !insn.addr !87
  store i8 %3, i8* %rax.0.reg2mem, !insn.addr !88
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_12f0, !insn.addr !88

dec_label_pc_12f0:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_12e4
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i8, i8* %rax.0.reg2mem
  %6 = xor i8 %rax.0.reload, 90, !insn.addr !89
  %7 = add i64 %rcx.0.reload, -1, !insn.addr !89
  %8 = inttoptr i64 %7 to i8*, !insn.addr !89
  store i8 %6, i8* %8, align 1, !insn.addr !89
  %9 = inttoptr i64 %rcx.0.reload to i8*, !insn.addr !90
  %10 = load i8, i8* %9, align 1, !insn.addr !90
  %11 = add i64 %rcx.0.reload, 1, !insn.addr !91
  %12 = icmp eq i8 %10, 0, !insn.addr !92
  %13 = icmp eq i1 %12, false, !insn.addr !93
  store i8 %10, i8* %rax.0.reg2mem, !insn.addr !93
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !93
  br i1 %13, label %dec_label_pc_12f0, label %dec_label_pc_1300, !insn.addr !93

dec_label_pc_1300:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_12c0
  %14 = call i32 @strlen(i8* nonnull %0), !insn.addr !94
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !95
  %sext = mul i32 %15, 16777216
  %16 = ashr exact i32 %sext, 24, !insn.addr !96
  %17 = add i32 %16, %14, !insn.addr !96
  %18 = zext i32 %17 to i64, !insn.addr !96
  ret i64 %18, !insn.addr !97

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0, 2 }
  uselistorder i8* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1320:
  %rcx.0.reg2mem = alloca i64, !insn.addr !98
  %rax.0.reg2mem = alloca i8, !insn.addr !98
  %stack_var_-39 = alloca i64, align 8
  %stack_var_-40 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_-40 to i8*, !insn.addr !99
  %1 = call i8* @strncpy(i8* nonnull %0, i8* bitcast (i8** @global_var_4060 to i8*), i32 32), !insn.addr !99
  %2 = load i32, i32* %stack_var_-40, align 4, !insn.addr !100
  %3 = trunc i32 %2 to i8, !insn.addr !101
  %4 = icmp eq i8 %3, 0, !insn.addr !101
  br i1 %4, label %dec_label_pc_1360, label %dec_label_pc_1344, !insn.addr !102

dec_label_pc_1344:                                ; preds = %dec_label_pc_1320
  %5 = ptrtoint i64* %stack_var_-39 to i64, !insn.addr !103
  store i8 %3, i8* %rax.0.reg2mem, !insn.addr !104
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_1350, !insn.addr !104

dec_label_pc_1350:                                ; preds = %dec_label_pc_1350, %dec_label_pc_1344
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i8, i8* %rax.0.reg2mem
  %6 = xor i8 %rax.0.reload, 90, !insn.addr !105
  %7 = add i64 %rcx.0.reload, -1, !insn.addr !105
  %8 = inttoptr i64 %7 to i8*, !insn.addr !105
  store i8 %6, i8* %8, align 1, !insn.addr !105
  %9 = inttoptr i64 %rcx.0.reload to i8*, !insn.addr !106
  %10 = load i8, i8* %9, align 1, !insn.addr !106
  %11 = add i64 %rcx.0.reload, 1, !insn.addr !107
  %12 = icmp eq i8 %10, 0, !insn.addr !108
  %13 = icmp eq i1 %12, false, !insn.addr !109
  store i8 %10, i8* %rax.0.reg2mem, !insn.addr !109
  store i64 %11, i64* %rcx.0.reg2mem, !insn.addr !109
  br i1 %13, label %dec_label_pc_1350, label %dec_label_pc_1360, !insn.addr !109

dec_label_pc_1360:                                ; preds = %dec_label_pc_1350, %dec_label_pc_1320
  %14 = call i32 @strlen(i8* nonnull %0), !insn.addr !110
  %15 = load i32, i32* %stack_var_-40, align 4, !insn.addr !111
  %sext = mul i32 %15, 16777216
  %16 = ashr exact i32 %sext, 24, !insn.addr !112
  %17 = add i32 %16, %14, !insn.addr !112
  %18 = zext i32 %17 to i64, !insn.addr !112
  ret i64 %18, !insn.addr !113

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i32* %stack_var_-40, { 1, 0, 2 }
  uselistorder i8* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_tail_call_optimized(i32 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1380:
  %rax.0.reg2mem = alloca i64, !insn.addr !114
  %0 = and i64 %arg2, 4294967295, !insn.addr !114
  %1 = icmp slt i32 %arg1, 1
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !115
  br i1 %1, label %dec_label_pc_1397, label %dec_label_pc_1386, !insn.addr !115

dec_label_pc_1386:                                ; preds = %dec_label_pc_1380
  %2 = zext i32 %arg1 to i64
  %3 = add i64 %2, %arg2, !insn.addr !116
  %4 = add i32 %arg1, -1, !insn.addr !117
  %5 = and i64 %3, 4294967295, !insn.addr !118
  %6 = call i64 @param_tail_call_optimized(i32 %4, i64 %5), !insn.addr !119
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !120
  br label %dec_label_pc_1397, !insn.addr !120

dec_label_pc_1397:                                ; preds = %dec_label_pc_1386, %dec_label_pc_1380
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !121

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i64 @call_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = call i64 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i64 0), !insn.addr !122
  ret i64 %0, !insn.addr !123
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !124
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_13c3, label %dec_label_pc_13b4, !insn.addr !125

dec_label_pc_13b4:                                ; preds = %dec_label_pc_13b0
  %2 = add i64 %arg1, 4294967295, !insn.addr !126
  %3 = and i64 %2, 4294967295, !insn.addr !126
  %4 = call i64 @param_non_tail_call(i64 %3), !insn.addr !127
  %5 = add i64 %4, %arg1, !insn.addr !128
  %6 = and i64 %5, 4294967295, !insn.addr !128
  ret i64 %6, !insn.addr !129

dec_label_pc_13c3:                                ; preds = %dec_label_pc_13b0
  ret i64 0, !insn.addr !130
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_13d0:
  %0 = call i64 @param_non_tail_call(i64 100), !insn.addr !131
  ret i64 %0, !insn.addr !132
}

define i64 @param_vectorized_loop(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_13e0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !133
  %rax.0.reg2mem = alloca i32, !insn.addr !133
  %r9.0.reg2mem = alloca i64, !insn.addr !133
  %0 = and i64 %arg4, 4294967295, !insn.addr !133
  %1 = trunc i64 %arg4 to i32, !insn.addr !134
  %2 = icmp slt i32 %1, 1
  store i64 0, i64* %r9.0.reg2mem, !insn.addr !135
  br i1 %2, label %dec_label_pc_141d, label %dec_label_pc_13f0, !insn.addr !135

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_13f0
  %r9.0.reload = load i64, i64* %r9.0.reg2mem
  %3 = mul i64 %r9.0.reload, 4, !insn.addr !136
  %4 = add i64 %3, %arg2, !insn.addr !136
  %5 = inttoptr i64 %4 to i32*, !insn.addr !136
  %6 = load i32, i32* %5, align 4, !insn.addr !136
  %7 = add i64 %3, %arg1, !insn.addr !137
  %8 = inttoptr i64 %7 to i32*, !insn.addr !137
  %9 = load i32, i32* %8, align 4, !insn.addr !137
  %10 = add i32 %9, %6, !insn.addr !137
  %11 = add i64 %3, %arg3, !insn.addr !138
  %12 = inttoptr i64 %11 to i32*, !insn.addr !138
  store i32 %10, i32* %12, align 4, !insn.addr !138
  %13 = add i64 %r9.0.reload, 1, !insn.addr !139
  %14 = icmp eq i64 %0, %13, !insn.addr !140
  %15 = icmp eq i1 %14, false, !insn.addr !141
  store i64 %13, i64* %r9.0.reg2mem, !insn.addr !141
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !141
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !141
  br i1 %15, label %dec_label_pc_13f0, label %dec_label_pc_1410, !insn.addr !141

dec_label_pc_1410:                                ; preds = %dec_label_pc_13f0, %dec_label_pc_1410
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %16 = mul i64 %rcx.0.reload, 4, !insn.addr !142
  %17 = add i64 %16, %arg3, !insn.addr !142
  %18 = inttoptr i64 %17 to i32*, !insn.addr !142
  %19 = load i32, i32* %18, align 4, !insn.addr !142
  %20 = add i32 %19, %rax.0.reload, !insn.addr !142
  %21 = add i64 %rcx.0.reload, 1, !insn.addr !143
  %22 = icmp eq i64 %0, %21, !insn.addr !144
  %23 = icmp eq i1 %22, false, !insn.addr !145
  store i32 %20, i32* %rax.0.reg2mem, !insn.addr !145
  store i64 %21, i64* %rcx.0.reg2mem, !insn.addr !145
  br i1 %23, label %dec_label_pc_1410, label %dec_label_pc_141c, !insn.addr !145

dec_label_pc_141c:                                ; preds = %dec_label_pc_1410
  %24 = zext i32 %20 to i64, !insn.addr !142
  ret i64 %24, !insn.addr !146

dec_label_pc_141d:                                ; preds = %dec_label_pc_13e0
  ret i64 0, !insn.addr !147

; uselistorder directives
  uselistorder i32 %20, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %r9.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1410, { 1, 0 }
  uselistorder label %dec_label_pc_13f0, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1420:
  %0 = alloca i128
  %1 = alloca i64
  %rax.1.reg2mem = alloca i32, !insn.addr !148
  %rcx.0.reg2mem = alloca i64, !insn.addr !148
  %rax.0.reg2mem = alloca i64, !insn.addr !148
  %2 = load i64, i64* %1
  %3 = load i128, i128* %0
  %4 = call i128 @__asm_xorps(i128 %3, i128 %3), !insn.addr !148
  %5 = call i64 @__asm_movaps(i128 %4), !insn.addr !149
  %6 = call i64 @__asm_movaps(i128 %4), !insn.addr !150
  %7 = add i64 %2, -40, !insn.addr !151
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !152
  br label %dec_label_pc_1440, !insn.addr !152

dec_label_pc_1440:                                ; preds = %dec_label_pc_1440, %dec_label_pc_1420
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %8 = add i64 %rax.0.reload, ptrtoint (i64* @global_var_2030 to i64), !insn.addr !153
  %9 = inttoptr i64 %8 to i32*, !insn.addr !153
  %10 = load i32, i32* %9, align 4, !insn.addr !153
  %11 = add i64 %rax.0.reload, ptrtoint (i32* @global_var_2010 to i64), !insn.addr !154
  %12 = inttoptr i64 %11 to i32*, !insn.addr !154
  %13 = load i32, i32* %12, align 4, !insn.addr !154
  %14 = add i32 %13, %10, !insn.addr !154
  %15 = add i64 %rax.0.reload, %7, !insn.addr !151
  %16 = inttoptr i64 %15 to i32*, !insn.addr !151
  store i32 %14, i32* %16, align 4, !insn.addr !151
  %17 = add nuw nsw i64 %rax.0.reload, 4, !insn.addr !155
  %18 = icmp eq i64 %rax.0.reload, 28, !insn.addr !156
  %19 = icmp eq i1 %18, false, !insn.addr !157
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !157
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !157
  store i32 0, i32* %rax.1.reg2mem, !insn.addr !157
  br i1 %19, label %dec_label_pc_1440, label %dec_label_pc_1460, !insn.addr !157

dec_label_pc_1460:                                ; preds = %dec_label_pc_1440, %dec_label_pc_1460
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %20 = mul i64 %rcx.0.reload, 4, !insn.addr !158
  %21 = add i64 %20, %7, !insn.addr !158
  %22 = inttoptr i64 %21 to i32*, !insn.addr !158
  %23 = load i32, i32* %22, align 4, !insn.addr !158
  %24 = add i32 %23, %rax.1.reload, !insn.addr !158
  %25 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !159
  %exitcond = icmp eq i64 %25, 8
  store i64 %25, i64* %rcx.0.reg2mem, !insn.addr !160
  store i32 %24, i32* %rax.1.reg2mem, !insn.addr !160
  br i1 %exitcond, label %dec_label_pc_146e, label %dec_label_pc_1460, !insn.addr !160

dec_label_pc_146e:                                ; preds = %dec_label_pc_1460
  %26 = zext i32 %24 to i64, !insn.addr !158
  ret i64 %26, !insn.addr !161

; uselistorder directives
  uselistorder i32 %24, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 3, 4, 0, 1 }
  uselistorder i128 %4, { 1, 0 }
  uselistorder i128 %3, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1460, { 1, 0 }
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_1470:
  %0 = mul i64 %arg1, 2, !insn.addr !162
  %1 = add i64 %0, 10, !insn.addr !163
  %2 = and i64 %1, 4294967294, !insn.addr !163
  ret i64 %2, !insn.addr !164
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1480:
  ret i64 20, !insn.addr !165
}

define i64 @div_zero_handler() local_unnamed_addr {
dec_label_pc_1490:
  store i32 1, i32* bitcast (i64* @global_var_4080 to i32*), align 8, !insn.addr !166
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4090 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !167
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !167
}

define i64 @param_division_by_zero(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_14b0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !168
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5264 to void (i32)*)), !insn.addr !169
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4090 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !170
  %2 = icmp eq i32 %1, 0, !insn.addr !171
  %3 = icmp eq i1 %2, false, !insn.addr !172
  store i64 4294967295, i64* %rcx.0.reg2mem, !insn.addr !172
  br i1 %3, label %dec_label_pc_14e4, label %dec_label_pc_14d9, !insn.addr !172

dec_label_pc_14d9:                                ; preds = %dec_label_pc_14b0
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %rcx.0.reg2mem, !insn.addr !173
  br label %dec_label_pc_14e4, !insn.addr !173

dec_label_pc_14e4:                                ; preds = %dec_label_pc_14d9, %dec_label_pc_14b0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  ret i64 %rcx.0.reload, !insn.addr !174
}

define i64 @call_division_by_zero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @param_division_by_zero(i64 5, i64 %arg2, i64 %1), !insn.addr !175
  %3 = call i64 @param_division_by_zero(i64 0, i64 %arg2, i64 %1), !insn.addr !176
  %4 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !177
  %5 = add i64 %3, %2, !insn.addr !178
  %6 = and i64 %5, 4294967295, !insn.addr !179
  ret i64 %6, !insn.addr !180

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @segv_handler() local_unnamed_addr {
dec_label_pc_1520:
  store i32 1, i32* bitcast (i64* @global_var_4158 to i32*), align 8, !insn.addr !181
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !182
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !182

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 0 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i64 @param_null_pointer_deref(i32* %arg1) local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 5408 to void (i32)*)), !insn.addr !183
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4160 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !184
  %4 = icmp eq i32 %3, 0, !insn.addr !185
  %5 = icmp eq i1 %4, false, !insn.addr !186
  %6 = and i64 %1, 4294967295
  %rcx.0 = select i1 %5, i64 4294967295, i64 %6
  ret i64 %rcx.0, !insn.addr !187

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1570:
  %stack_var_-20 = alloca i32, align 4
  store i32 42, i32* %stack_var_-20, align 4, !insn.addr !188
  %0 = call i64 @param_null_pointer_deref(i32* nonnull %stack_var_-20), !insn.addr !189
  %1 = call i64 @param_null_pointer_deref(i32* null), !insn.addr !190
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !191
  %3 = add i64 %1, %0, !insn.addr !192
  %4 = and i64 %3, 4294967295, !insn.addr !193
  ret i64 %4, !insn.addr !194
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !195
  ret i64 %0, !insn.addr !196
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !197
  ret i64 %0, !insn.addr !198
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_15d0:
  ret i64 30, !insn.addr !199
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = add i64 %arg2, %arg1, !insn.addr !200
  %1 = trunc i64 %arg1 to i32, !insn.addr !201
  %2 = icmp slt i32 %1, 1
  %3 = trunc i64 %arg2 to i32, !insn.addr !202
  %4 = icmp slt i32 %3, 1
  %or.cond = or i1 %2, %4
  %.pre = trunc i64 %0 to i32
  %5 = icmp slt i32 %.pre, 0, !insn.addr !203
  %6 = icmp eq i1 %5, false, !insn.addr !204
  %or.cond3 = or i1 %or.cond, %6
  br i1 %or.cond3, label %dec_label_pc_15f5, label %dec_label_pc_15f4, !insn.addr !205

dec_label_pc_15f4:                                ; preds = %dec_label_pc_15e0
  ret i64 4294967295, !insn.addr !206

dec_label_pc_15f5:                                ; preds = %dec_label_pc_15e0
  %7 = and i64 %0, 4294967295, !insn.addr !200
  %8 = icmp slt i32 %.pre, 1
  %9 = and i64 %arg2, %arg1
  %10 = trunc i64 %9 to i32, !insn.addr !207
  %11 = icmp slt i32 %10, 0, !insn.addr !207
  %12 = icmp eq i1 %11, false, !insn.addr !208
  %13 = or i1 %8, %12
  %14 = select i1 %13, i64 %7, i64 4294967294, !insn.addr !208
  ret i64 %14, !insn.addr !209

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1610:
  ret i64 2000000000, !insn.addr !210
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1620:
  %0 = mul i64 %arg1, 2, !insn.addr !211
  %1 = and i64 %0, 4294967294, !insn.addr !211
  ret i64 %1, !insn.addr !212

; uselistorder directives
  uselistorder i64 4294967294, { 1, 0, 2 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1630:
  ret i64 10, !insn.addr !213

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1640:
  ret i64 47, !insn.addr !214
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1650:
  ret i64 47, !insn.addr !215
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1660:
  %0 = alloca i128
  %rbx.0.reg2mem = alloca i64, !insn.addr !216
  %rcx.0.reg2mem = alloca i64, !insn.addr !216
  %rax.1.reg2mem = alloca i8, !insn.addr !216
  %rdx.0.reg2mem = alloca i64, !insn.addr !216
  %rax.0.reg2mem = alloca i64, !insn.addr !216
  %1 = load i128, i128* %0
  %stack_var_-55 = alloca i64, align 8
  %stack_var_-56 = alloca i32, align 4
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_2221 to i8*)), !insn.addr !217
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2050 to i8*)), !insn.addr !218
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !219
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !219
  br label %dec_label_pc_1690, !insn.addr !219

dec_label_pc_1690:                                ; preds = %dec_label_pc_1690, %dec_label_pc_1660
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %4 = trunc i64 %rax.0.reload to i32, !insn.addr !220
  %5 = ashr i32 %4, 31, !insn.addr !220
  %6 = zext i32 %5 to i64, !insn.addr !221
  %7 = mul i64 %6, 4294967296, !insn.addr !221
  %8 = or i64 %7, %rax.0.reload, !insn.addr !221
  %9 = srem i64 %8, %rdx.0.reload, !insn.addr !221
  %10 = and i64 %9, 4294967295, !insn.addr !221
  %11 = trunc i64 %9 to i32, !insn.addr !222
  %12 = icmp eq i32 %11, 0, !insn.addr !222
  %13 = icmp eq i1 %12, false, !insn.addr !223
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !223
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !223
  br i1 %13, label %dec_label_pc_1690, label %dec_label_pc_169b, !insn.addr !223

dec_label_pc_169b:                                ; preds = %dec_label_pc_1690
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_206c to i8*)), !insn.addr !224
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2088 to i8*)), !insn.addr !225
  %16 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !226
  %17 = call i8* @strncpy(i8* nonnull %16, i8* bitcast (i8** @global_var_4060 to i8*), i32 32), !insn.addr !226
  %18 = load i32, i32* %stack_var_-56, align 4, !insn.addr !227
  %19 = trunc i32 %18 to i8, !insn.addr !228
  %20 = icmp eq i8 %19, 0, !insn.addr !228
  br i1 %20, label %dec_label_pc_1710, label %dec_label_pc_16ec, !insn.addr !229

dec_label_pc_16ec:                                ; preds = %dec_label_pc_169b
  %21 = ptrtoint i64* %stack_var_-55 to i64, !insn.addr !230
  store i8 %19, i8* %rax.1.reg2mem, !insn.addr !231
  store i64 %21, i64* %rcx.0.reg2mem, !insn.addr !231
  br label %dec_label_pc_1700, !insn.addr !231

dec_label_pc_1700:                                ; preds = %dec_label_pc_1700, %dec_label_pc_16ec
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i8, i8* %rax.1.reg2mem
  %22 = xor i8 %rax.1.reload, 90, !insn.addr !232
  %23 = add i64 %rcx.0.reload, -1, !insn.addr !232
  %24 = inttoptr i64 %23 to i8*, !insn.addr !232
  store i8 %22, i8* %24, align 1, !insn.addr !232
  %25 = inttoptr i64 %rcx.0.reload to i8*, !insn.addr !233
  %26 = load i8, i8* %25, align 1, !insn.addr !233
  %27 = add i64 %rcx.0.reload, 1, !insn.addr !234
  %28 = icmp eq i8 %26, 0, !insn.addr !235
  %29 = icmp eq i1 %28, false, !insn.addr !236
  store i8 %26, i8* %rax.1.reg2mem, !insn.addr !236
  store i64 %27, i64* %rcx.0.reg2mem, !insn.addr !236
  br i1 %29, label %dec_label_pc_1700, label %dec_label_pc_1710, !insn.addr !236

dec_label_pc_1710:                                ; preds = %dec_label_pc_1700, %dec_label_pc_169b
  %30 = ptrtoint i32* %stack_var_-56 to i64, !insn.addr !237
  %31 = call i32 @strlen(i8* nonnull %16), !insn.addr !238
  %32 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20a5 to i8*)), !insn.addr !239
  %33 = call i64 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i64 0), !insn.addr !240
  %34 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20c1 to i8*)), !insn.addr !241
  %35 = call i64 @param_non_tail_call(i64 100), !insn.addr !242
  %36 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20eb to i8*)), !insn.addr !243
  %37 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !244
  %38 = call i64 @__asm_movaps(i128 %37), !insn.addr !245
  %39 = call i64 @__asm_movaps(i128 %37), !insn.addr !246
  %40 = trunc i64 %39 to i32, !insn.addr !246
  store i32 %40, i32* %stack_var_-56, align 4, !insn.addr !246
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_1780, !insn.addr !247

dec_label_pc_1780:                                ; preds = %dec_label_pc_1780, %dec_label_pc_1710
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %41 = add i64 %rbx.0.reload, ptrtoint (i64* @global_var_2030 to i64), !insn.addr !248
  %42 = inttoptr i64 %41 to i32*, !insn.addr !248
  %43 = load i32, i32* %42, align 4, !insn.addr !248
  %44 = add i64 %rbx.0.reload, ptrtoint (i32* @global_var_2010 to i64), !insn.addr !249
  %45 = inttoptr i64 %44 to i32*, !insn.addr !249
  %46 = load i32, i32* %45, align 4, !insn.addr !249
  %47 = add i32 %46, %43, !insn.addr !249
  %48 = add i64 %rbx.0.reload, %30, !insn.addr !250
  %49 = inttoptr i64 %48 to i32*, !insn.addr !250
  store i32 %47, i32* %49, align 4, !insn.addr !250
  %50 = add nuw nsw i64 %rbx.0.reload, 4, !insn.addr !251
  %51 = icmp eq i64 %rbx.0.reload, 28, !insn.addr !252
  %52 = icmp eq i1 %51, false, !insn.addr !253
  store i64 %50, i64* %rbx.0.reg2mem, !insn.addr !253
  br i1 %52, label %dec_label_pc_1780, label %dec_label_pc_17a0.preheader, !insn.addr !253

dec_label_pc_17a0.preheader:                      ; preds = %dec_label_pc_1780
  %53 = zext i32 %47 to i64, !insn.addr !249
  %54 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2110 to i8*)), !insn.addr !254
  %55 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2136 to i8*)), !insn.addr !255
  %56 = call i64 @param_division_by_zero(i64 5, i64 20, i64 %53), !insn.addr !256
  %57 = call i64 @param_division_by_zero(i64 0, i64 20, i64 %53), !insn.addr !257
  %58 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !258
  %59 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2156 to i8*)), !insn.addr !259
  store i32 42, i32* %stack_var_-56, align 4, !insn.addr !260
  %60 = call i64 @param_null_pointer_deref(i32* nonnull %stack_var_-56), !insn.addr !261
  %61 = call i64 @param_null_pointer_deref(i32* null), !insn.addr !262
  %62 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !263
  %63 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2172 to i8*)), !insn.addr !264
  %64 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_218f to i8*)), !insn.addr !265
  %65 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21ac to i8*)), !insn.addr !266
  %66 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21dd to i8*)), !insn.addr !267
  %67 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21fa to i8*)), !insn.addr !268
  %68 = sext i32 %67 to i64, !insn.addr !268
  ret i64 %68, !insn.addr !269

; uselistorder directives
  uselistorder i64 %53, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 2, 3, 4, 0, 1 }
  uselistorder i128 %37, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 5, 3, 2, 0, 1, 4 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i8* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i32*)* @param_null_pointer_deref, { 3, 2, 1, 0 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i64 (i64, i64, i64)* @param_division_by_zero, { 3, 2, 1, 0 }
  uselistorder i64 20, { 4, 3, 0, 1, 2 }
  uselistorder i64 4, { 3, 0, 4, 1, 2 }
  uselistorder i64 (i64)* @param_non_tail_call, { 2, 1, 0 }
  uselistorder i64 (i32, i64)* @param_tail_call_optimized, { 2, 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i64 1, { 2, 3, 4, 5, 6, 7, 0, 1 }
  uselistorder i8 0, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 3, 2, 1, 0, 4 }
  uselistorder i1 false, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i32 0, { 6, 7, 2, 8, 9, 0, 1, 10, 11, 12, 3, 4, 5 }
  uselistorder i64 4294967295, { 4, 5, 1, 6, 7, 8, 3, 2, 9, 0, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
  uselistorder i64 5, { 2, 0, 3, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1890:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !270
  ret i64 0, !insn.addr !271

; uselistorder directives
  uselistorder i64 0, { 6, 43, 0, 42, 44, 1, 2, 7, 3, 4, 8, 45, 49, 9, 5, 50, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 46, 47, 48 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_189c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !272

; uselistorder directives
  uselistorder i32 1, { 6, 42, 46, 11, 10, 9, 8, 7, 1, 33, 32, 34, 47, 5, 35, 51, 4, 12, 36, 52, 15, 14, 13, 3, 0, 37, 18, 17, 16, 38, 39, 19, 43, 48, 21, 20, 44, 49, 23, 22, 41, 25, 24, 27, 26, 40, 53, 54, 30, 29, 28, 2, 50, 31, 45 }
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

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

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
!29 = !{i64 4512}
!30 = !{i64 4514}
!31 = !{i64 4533}
!32 = !{i64 4544}
!33 = !{i64 4548}
!34 = !{i64 4550}
!35 = !{i64 4552}
!36 = !{i64 4554}
!37 = !{i64 4558}
!38 = !{i64 4562}
!39 = !{i64 4563}
!40 = !{i64 4567}
!41 = !{i64 4569}
!42 = !{i64 4573}
!43 = !{i64 4576}
!44 = !{i64 4579}
!45 = !{i64 4582}
!46 = !{i64 4584}
!47 = !{i64 4589}
!48 = !{i64 4592}
!49 = !{i64 4596}
!50 = !{i64 4599}
!51 = !{i64 4602}
!52 = !{i64 4604}
!53 = !{i64 4608}
!54 = !{i64 4624}
!55 = !{i64 4634}
!56 = !{i64 4642}
!57 = !{i64 4643}
!58 = !{i64 4647}
!59 = !{i64 4649}
!60 = !{i64 4651}
!61 = !{i64 4664}
!62 = !{i64 4667}
!63 = !{i64 4672}
!64 = !{i64 4677}
!65 = !{i64 4682}
!66 = !{i64 4684}
!67 = !{i64 4687}
!68 = !{i64 4689}
!69 = !{i64 4691}
!70 = !{i64 4709}
!71 = !{i64 4720}
!72 = !{i64 4739}
!73 = !{i64 4744}
!74 = !{i64 4750}
!75 = !{i64 4753}
!76 = !{i64 4755}
!77 = !{i64 4770}
!78 = !{i64 4773}
!79 = !{i64 4780}
!80 = !{i64 4782}
!81 = !{i64 4792}
!82 = !{i64 4800}
!83 = !{i64 4819}
!84 = !{i64 4829}
!85 = !{i64 4832}
!86 = !{i64 4834}
!87 = !{i64 4836}
!88 = !{i64 4841}
!89 = !{i64 4850}
!90 = !{i64 4853}
!91 = !{i64 4856}
!92 = !{i64 4860}
!93 = !{i64 4862}
!94 = !{i64 4867}
!95 = !{i64 4872}
!96 = !{i64 4876}
!97 = !{i64 4882}
!98 = !{i64 4896}
!99 = !{i64 4915}
!100 = !{i64 4925}
!101 = !{i64 4928}
!102 = !{i64 4930}
!103 = !{i64 4932}
!104 = !{i64 4937}
!105 = !{i64 4946}
!106 = !{i64 4949}
!107 = !{i64 4952}
!108 = !{i64 4956}
!109 = !{i64 4958}
!110 = !{i64 4963}
!111 = !{i64 4968}
!112 = !{i64 4972}
!113 = !{i64 4978}
!114 = !{i64 4992}
!115 = !{i64 4996}
!116 = !{i64 4999}
!117 = !{i64 5001}
!118 = !{i64 5004}
!119 = !{i64 5006}
!120 = !{i64 5011}
!121 = !{i64 5015}
!122 = !{i64 5032}
!123 = !{i64 5038}
!124 = !{i64 5040}
!125 = !{i64 5042}
!126 = !{i64 5047}
!127 = !{i64 5050}
!128 = !{i64 5055}
!129 = !{i64 5058}
!130 = !{i64 5061}
!131 = !{i64 5078}
!132 = !{i64 5084}
!133 = !{i64 5088}
!134 = !{i64 5091}
!135 = !{i64 5093}
!136 = !{i64 5104}
!137 = !{i64 5108}
!138 = !{i64 5112}
!139 = !{i64 5116}
!140 = !{i64 5120}
!141 = !{i64 5123}
!142 = !{i64 5136}
!143 = !{i64 5139}
!144 = !{i64 5143}
!145 = !{i64 5146}
!146 = !{i64 5148}
!147 = !{i64 5151}
!148 = !{i64 5152}
!149 = !{i64 5155}
!150 = !{i64 5160}
!151 = !{i64 5190}
!152 = !{i64 5181}
!153 = !{i64 5184}
!154 = !{i64 5187}
!155 = !{i64 5194}
!156 = !{i64 5198}
!157 = !{i64 5202}
!158 = !{i64 5216}
!159 = !{i64 5220}
!160 = !{i64 5228}
!161 = !{i64 5230}
!162 = !{i64 5232}
!163 = !{i64 5235}
!164 = !{i64 5238}
!165 = !{i64 5253}
!166 = !{i64 5265}
!167 = !{i64 5287}
!168 = !{i64 5296}
!169 = !{i64 5311}
!170 = !{i64 5323}
!171 = !{i64 5333}
!172 = !{i64 5335}
!173 = !{i64 5346}
!174 = !{i64 5351}
!175 = !{i64 5368}
!176 = !{i64 5377}
!177 = !{i64 5391}
!178 = !{i64 5396}
!179 = !{i64 5398}
!180 = !{i64 5406}
!181 = !{i64 5409}
!182 = !{i64 5431}
!183 = !{i64 5456}
!184 = !{i64 5468}
!185 = !{i64 5478}
!186 = !{i64 5480}
!187 = !{i64 5487}
!188 = !{i64 5491}
!189 = !{i64 5504}
!190 = !{i64 5513}
!191 = !{i64 5527}
!192 = !{i64 5532}
!193 = !{i64 5534}
!194 = !{i64 5542}
!195 = !{i64 5552}
!196 = !{i64 5554}
!197 = !{i64 5568}
!198 = !{i64 5570}
!199 = !{i64 5589}
!200 = !{i64 5600}
!201 = !{i64 5603}
!202 = !{i64 5607}
!203 = !{i64 5616}
!204 = !{i64 5618}
!205 = !{i64 5605}
!206 = !{i64 5620}
!207 = !{i64 5631}
!208 = !{i64 5633}
!209 = !{i64 5636}
!210 = !{i64 5653}
!211 = !{i64 5664}
!212 = !{i64 5667}
!213 = !{i64 5685}
!214 = !{i64 5701}
!215 = !{i64 5717}
!216 = !{i64 5728}
!217 = !{i64 5741}
!218 = !{i64 5760}
!219 = !{i64 5775}
!220 = !{i64 5778}
!221 = !{i64 5779}
!222 = !{i64 5783}
!223 = !{i64 5785}
!224 = !{i64 5812}
!225 = !{i64 5831}
!226 = !{i64 5851}
!227 = !{i64 5861}
!228 = !{i64 5864}
!229 = !{i64 5866}
!230 = !{i64 5868}
!231 = !{i64 5883}
!232 = !{i64 5890}
!233 = !{i64 5893}
!234 = !{i64 5896}
!235 = !{i64 5900}
!236 = !{i64 5902}
!237 = !{i64 5730}
!238 = !{i64 5907}
!239 = !{i64 5929}
!240 = !{i64 5941}
!241 = !{i64 5957}
!242 = !{i64 5967}
!243 = !{i64 5983}
!244 = !{i64 5988}
!245 = !{i64 5991}
!246 = !{i64 5996}
!247 = !{i64 6014}
!248 = !{i64 6016}
!249 = !{i64 6019}
!250 = !{i64 6022}
!251 = !{i64 6025}
!252 = !{i64 6029}
!253 = !{i64 6033}
!254 = !{i64 6070}
!255 = !{i64 6089}
!256 = !{i64 6099}
!257 = !{i64 6108}
!258 = !{i64 6122}
!259 = !{i64 6140}
!260 = !{i64 6145}
!261 = !{i64 6155}
!262 = !{i64 6164}
!263 = !{i64 6178}
!264 = !{i64 6196}
!265 = !{i64 6215}
!266 = !{i64 6234}
!267 = !{i64 6253}
!268 = !{i64 6272}
!269 = !{i64 6283}
!270 = !{i64 6289}
!271 = !{i64 6297}
!272 = !{i64 6312}
