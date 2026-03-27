source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [5 x i8] c"test\00"
@global_var_2210 = local_unnamed_addr constant i64 8589934593
@global_var_2218 = local_unnamed_addr constant i64 17179869187
@global_var_2220 = local_unnamed_addr constant i64 25769803781
@global_var_2228 = local_unnamed_addr constant i64 34359738375
@global_var_2230 = local_unnamed_addr constant i64 30064771080
@global_var_2238 = local_unnamed_addr constant i64 21474836486
@global_var_2240 = local_unnamed_addr constant i64 12884901892
@global_var_2248 = local_unnamed_addr constant i64 4294967298
@global_var_4090 = local_unnamed_addr global i64 0
@global_var_4168 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4080 = local_unnamed_addr global i8 0
@global_var_3e8 = global i32 0
@global_var_40a0 = global i32 0
@global_var_4170 = global i32 0
@1 = internal constant [46 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\0A\00"
@global_var_2009 = constant i8* getelementptr inbounds ([46 x i8], [46 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_2037 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2053 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_206f = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_208c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20a8 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20d2 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_20f7 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_211d = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_213d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_2159 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_2176 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_2193 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21c4 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21e1 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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

define void @function_1030(i64* %ptr) local_unnamed_addr {
dec_label_pc_1030:
  call void @free(i64* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i8* @function_1040(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !7
  ret i8* %0, !insn.addr !7
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

define i64* @function_1070(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i32 @function_1080([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void (i32)* @function_1090(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !12
  ret void (i32)* %0, !insn.addr !12
}

define i64* @function_10a0(i32 %size) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64* @malloc(i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define void @function_10b0([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_10b0:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !14
  ret void, !insn.addr !14
}

define void @function_10c0(i64* %d) local_unnamed_addr {
dec_label_pc_10c0:
  call void @__cxa_finalize(i64* %d), !insn.addr !15
  ret void, !insn.addr !15
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10d0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !16
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !16
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !16
  %3 = call i32 @__libc_start_main(i64 7248, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !16
  %4 = call i64 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1100:
  ret i64 16504, !insn.addr !18
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  ret i64 0, !insn.addr !19
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1170:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_4080, align 1, !insn.addr !20
  %3 = icmp eq i8 %2, 0, !insn.addr !20
  %4 = icmp eq i1 %3, false, !insn.addr !21
  br i1 %4, label %dec_label_pc_11a8, label %dec_label_pc_117d, !insn.addr !21

dec_label_pc_117d:                                ; preds = %dec_label_pc_1170
  %5 = load i64, i64* @global_var_3ff8, align 8, !insn.addr !22
  %6 = icmp eq i64 %5, 0, !insn.addr !22
  br i1 %6, label %dec_label_pc_1197, label %dec_label_pc_118b, !insn.addr !23

dec_label_pc_118b:                                ; preds = %dec_label_pc_117d
  %7 = load i64, i64* inttoptr (i64 16488 to i64*), align 8, !insn.addr !24
  %8 = inttoptr i64 %7 to i64*, !insn.addr !25
  call void @__cxa_finalize(i64* %8), !insn.addr !25
  br label %dec_label_pc_1197, !insn.addr !25

dec_label_pc_1197:                                ; preds = %dec_label_pc_118b, %dec_label_pc_117d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !26
  store i8 1, i8* @global_var_4080, align 1, !insn.addr !27
  ret i64 %9, !insn.addr !28

dec_label_pc_11a8:                                ; preds = %dec_label_pc_1170
  ret i64 %1, !insn.addr !29

; uselistorder directives
  uselistorder i8* @global_var_4080, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i64 @register_tm_clones(), !insn.addr !30
  ret i64 %0, !insn.addr !30
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_11c0:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !31
  %1 = mul nsw i64 %0, %0, !insn.addr !31
  %2 = trunc i64 %1 to i32, !insn.addr !31
  %3 = icmp slt i32 %2, 0, !insn.addr !32
  %4 = icmp eq i1 %3, false, !insn.addr !33
  %5 = mul i64 %arg1, 2
  %6 = add i64 %5, 3735928559
  %stack_var_-16.0 = select i1 %4, i64 %arg1, i64 %6
  %7 = call i32 @strlen(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2004, i64 0, i64 0)), !insn.addr !34
  %8 = and i64 %stack_var_-16.0, 4294967295, !insn.addr !35
  ret i64 %8, !insn.addr !36

; uselistorder directives
  uselistorder i64 %arg1, { 2, 0, 1 }
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i64 @param_fake_branch(i64 10), !insn.addr !37
  ret i64 %0, !insn.addr !38
}

define i64 @param_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %.lcssa.reg2mem = alloca i32, !insn.addr !39
  %stack_var_-24.012.reg2mem = alloca i64, !insn.addr !39
  %stack_var_-28.013.reg2mem = alloca i32, !insn.addr !39
  %.reg2mem = alloca i32, !insn.addr !39
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !40
  %1 = trunc i64 %arg1 to i32
  %2 = add i32 %1, 1, !insn.addr !41
  %3 = icmp eq i32 %2, 0, !insn.addr !42
  %4 = trunc i64 %0 to i32
  store i32 %4, i32* %.reg2mem, !insn.addr !43
  store i32 %2, i32* %stack_var_-28.013.reg2mem, !insn.addr !43
  store i64 %0, i64* %stack_var_-24.012.reg2mem, !insn.addr !43
  store i32 %4, i32* %.lcssa.reg2mem, !insn.addr !43
  br i1 %3, label %dec_label_pc_12a9, label %dec_label_pc_128e, !insn.addr !43

dec_label_pc_128e:                                ; preds = %dec_label_pc_1240, %dec_label_pc_128e
  %stack_var_-24.012.reload = load i64, i64* %stack_var_-24.012.reg2mem
  %stack_var_-28.013.reload = load i32, i32* %stack_var_-28.013.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %5 = ashr i32 %.reload, 31, !insn.addr !44
  %6 = and i64 %stack_var_-24.012.reload, 4294967295, !insn.addr !45
  %7 = zext i32 %5 to i64, !insn.addr !45
  %8 = mul i64 %7, 4294967296, !insn.addr !45
  %9 = or i64 %8, %6, !insn.addr !45
  %10 = zext i32 %stack_var_-28.013.reload to i64, !insn.addr !45
  %11 = srem i64 %9, %10, !insn.addr !45
  %12 = trunc i64 %11 to i32, !insn.addr !45
  %13 = sext i32 %stack_var_-28.013.reload to i64, !insn.addr !46
  %14 = icmp eq i32 %12, 0, !insn.addr !42
  store i32 %stack_var_-28.013.reload, i32* %.reg2mem, !insn.addr !43
  store i32 %12, i32* %stack_var_-28.013.reg2mem, !insn.addr !43
  store i64 %13, i64* %stack_var_-24.012.reg2mem, !insn.addr !43
  store i32 %stack_var_-28.013.reload, i32* %.lcssa.reg2mem, !insn.addr !43
  br i1 %14, label %dec_label_pc_12a9, label %dec_label_pc_128e, !insn.addr !43

dec_label_pc_12a9:                                ; preds = %dec_label_pc_128e, %dec_label_pc_1240
  %15 = mul nsw i64 %0, %0, !insn.addr !47
  %16 = mul i64 %arg1, 2, !insn.addr !48
  %17 = add i64 %15, %16, !insn.addr !49
  %sext5 = add i64 %sext, 4294967296
  %18 = ashr exact i64 %sext5, 32, !insn.addr !50
  %19 = mul nsw i64 %18, %18, !insn.addr !50
  %20 = trunc i64 %19 to i32, !insn.addr !50
  %21 = trunc i64 %17 to i32
  %22 = add i32 %21, 1, !insn.addr !51
  %23 = icmp eq i32 %22, %20, !insn.addr !51
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %24 = icmp eq i32 %.lcssa.reload, 1, !insn.addr !52
  %25 = icmp eq i1 %23, %24
  %26 = mul nsw i64 %0, 3
  %27 = add nsw i64 %26, 20
  %28 = add i64 %16, 10
  %storemerge = select i1 %25, i64 %28, i64 %27
  %29 = and i64 %storemerge, 4294967295, !insn.addr !53
  ret i64 %29, !insn.addr !54

; uselistorder directives
  uselistorder i32 %stack_var_-28.013.reload, { 0, 3, 1, 2 }
  uselistorder i64 %0, { 2, 3, 4, 0, 1 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-28.013.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-24.012.reg2mem, { 2, 0, 1 }
  uselistorder i64 4294967296, { 3, 0, 1, 2 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_128e, { 1, 0 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i64 @param_opaque_predicate(i64 5), !insn.addr !55
  ret i64 %0, !insn.addr !56
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %0 = trunc i64 %arg1 to i32, !insn.addr !57
  %1 = udiv i32 %0, 2, !insn.addr !58
  %2 = urem i32 %0, 16, !insn.addr !59
  %reass.mul = mul i32 %0, 21
  %3 = add nuw i32 %2, %1, !insn.addr !60
  %4 = add i32 %3, %reass.mul, !insn.addr !61
  %5 = zext i32 %4 to i64, !insn.addr !61
  ret i64 %5, !insn.addr !62

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i64 @param_instruction_substitution(i64 10), !insn.addr !63
  ret i64 %0, !insn.addr !64
}

define i64 @decrypt_string(i64 %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1390:
  %storemerge3.reg2mem = alloca i64, !insn.addr !65
  %.reg2mem4 = alloca i8*, !insn.addr !65
  %.reg2mem = alloca i8, !insn.addr !65
  %0 = ptrtoint i64* %arg2 to i64
  %1 = bitcast i64* %arg2 to i8*
  %2 = inttoptr i64 %arg1 to i8*, !insn.addr !66
  %3 = trunc i64 %arg3 to i32, !insn.addr !66
  %4 = call i8* @strncpy(i8* %1, i8* %2, i32 %3), !insn.addr !66
  %5 = add i64 %arg3, -1, !insn.addr !67
  %6 = add i64 %5, %0, !insn.addr !68
  %7 = inttoptr i64 %6 to i8*, !insn.addr !68
  store i8 0, i8* %7, align 1, !insn.addr !68
  %8 = load i8, i8* %1, align 1, !insn.addr !69
  %9 = icmp eq i8 %8, 0, !insn.addr !69
  br i1 %9, label %dec_label_pc_13ff, label %dec_label_pc_13df.lr.ph, !insn.addr !70

dec_label_pc_13df.lr.ph:                          ; preds = %dec_label_pc_1390
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %.reg2mem
  store i8* %1, i8** %.reg2mem4
  store i64 %0, i64* %storemerge3.reg2mem
  br label %dec_label_pc_13df

dec_label_pc_13df:                                ; preds = %dec_label_pc_13df.lr.ph, %dec_label_pc_13df
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  %.reload5 = load i8*, i8** %.reg2mem4
  %.reload = load i8, i8* %.reg2mem
  %11 = xor i8 %.reload, %10, !insn.addr !71
  store i8 %11, i8* %.reload5, align 1, !insn.addr !71
  %12 = add i64 %storemerge3.reload, 1, !insn.addr !72
  %13 = inttoptr i64 %12 to i8*, !insn.addr !69
  %14 = load i8, i8* %13, align 1, !insn.addr !69
  %15 = icmp eq i8 %14, 0, !insn.addr !69
  store i8 %14, i8* %.reg2mem, !insn.addr !70
  store i8* %13, i8** %.reg2mem4, !insn.addr !70
  store i64 %12, i64* %storemerge3.reg2mem, !insn.addr !70
  br i1 %15, label %dec_label_pc_13ff, label %dec_label_pc_13df, !insn.addr !70

dec_label_pc_13ff:                                ; preds = %dec_label_pc_13df, %dec_label_pc_1390
  ret i64 %0, !insn.addr !73

; uselistorder directives
  uselistorder i64 %0, { 2, 0, 1 }
  uselistorder i8* %.reg2mem, { 1, 0, 2 }
  uselistorder i8** %.reg2mem4, { 1, 0, 2 }
  uselistorder i64* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i8 0, { 2, 0, 3, 4, 1 }
  uselistorder label %dec_label_pc_13df, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1410:
  %stack_var_-40 = alloca i8, align 1
  %0 = bitcast i8* %stack_var_-40 to i64*, !insn.addr !74
  %1 = call i64 @decrypt_string(i64 16496, i64* nonnull %0, i64 32, i64 90), !insn.addr !74
  %2 = call i32 @strlen(i8* nonnull %stack_var_-40), !insn.addr !75
  %3 = sext i32 %2 to i64, !insn.addr !75
  %4 = load i8, i8* %stack_var_-40, align 1, !insn.addr !76
  %5 = sext i8 %4 to i64, !insn.addr !76
  %6 = add nsw i64 %5, %3, !insn.addr !77
  ret i64 %6, !insn.addr !78

; uselistorder directives
  uselistorder i8* %stack_var_-40, { 0, 2, 1 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i64 32, { 3, 0, 1, 2 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i64 @param_string_encryption(), !insn.addr !79
  ret i64 %0, !insn.addr !80
}

define i64 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1460:
  %storemerge.reg2mem = alloca i32, !insn.addr !81
  %0 = icmp eq i32 %arg1, 0, !insn.addr !82
  %1 = icmp slt i32 %arg1, 0, !insn.addr !82
  %2 = icmp eq i1 %1, false, !insn.addr !83
  %3 = icmp eq i1 %0, false, !insn.addr !83
  %4 = icmp eq i1 %2, %3, !insn.addr !83
  store i32 %arg2, i32* %storemerge.reg2mem, !insn.addr !83
  br i1 %4, label %dec_label_pc_1483, label %dec_label_pc_1497, !insn.addr !83

dec_label_pc_1483:                                ; preds = %dec_label_pc_1460
  %5 = add i32 %arg1, -1, !insn.addr !84
  %6 = add i32 %arg2, %arg1, !insn.addr !85
  %7 = call i64 @param_tail_call_optimized(i32 %5, i32 %6), !insn.addr !86
  %8 = trunc i64 %7 to i32, !insn.addr !87
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !87
  br label %dec_label_pc_1497, !insn.addr !87

dec_label_pc_1497:                                ; preds = %dec_label_pc_1460, %dec_label_pc_1483
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %9 = zext i32 %storemerge.reload to i64, !insn.addr !88
  ret i64 %9, !insn.addr !89

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_1497, { 1, 0 }
}

define i64 @call_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i64 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !90
  ret i64 %0, !insn.addr !91

; uselistorder directives
  uselistorder i64 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i64 @param_non_tail_call(i32 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %storemerge.reg2mem = alloca i64, !insn.addr !92
  %0 = icmp eq i32 %arg1, 0, !insn.addr !93
  %1 = icmp slt i32 %arg1, 0, !insn.addr !93
  %2 = icmp eq i1 %1, false, !insn.addr !94
  %3 = icmp eq i1 %0, false, !insn.addr !94
  %4 = icmp eq i1 %2, %3, !insn.addr !94
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !94
  br i1 %4, label %dec_label_pc_14e1, label %dec_label_pc_14fc, !insn.addr !94

dec_label_pc_14e1:                                ; preds = %dec_label_pc_14c0
  %5 = add i32 %arg1, -1, !insn.addr !95
  %6 = call i64 @param_non_tail_call(i32 %5), !insn.addr !96
  %7 = trunc i64 %6 to i32, !insn.addr !97
  %8 = add i32 %7, %arg1, !insn.addr !98
  %phitmp = zext i32 %8 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !99
  br label %dec_label_pc_14fc, !insn.addr !99

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14c0, %dec_label_pc_14e1
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !100

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_14fc, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i64 @param_non_tail_call(i32 100), !insn.addr !101
  ret i64 %0, !insn.addr !102

; uselistorder directives
  uselistorder i64 (i32)* @param_non_tail_call, { 1, 0 }
}

define i64 @param_vectorized_loop(i64* %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1520:
  %stack_var_-44.0.lcssa.reg2mem = alloca i64, !insn.addr !103
  %stack_var_-44.03.reg2mem = alloca i32, !insn.addr !103
  %indvars.iv.reg2mem = alloca i64, !insn.addr !103
  %indvars.iv7.reg2mem = alloca i64, !insn.addr !103
  %0 = trunc i64 %arg4 to i32, !insn.addr !104
  %1 = icmp sgt i32 %0, 0
  store i64 0, i64* %stack_var_-44.0.lcssa.reg2mem, !insn.addr !105
  br i1 %1, label %dec_label_pc_1546.preheader, label %dec_label_pc_15ae, !insn.addr !105

dec_label_pc_1546.preheader:                      ; preds = %dec_label_pc_1520
  %2 = ptrtoint i64* %arg3 to i64
  %3 = ptrtoint i64* %arg2 to i64
  %4 = ptrtoint i64* %arg1 to i64
  %wide.trip.count9 = and i64 %arg4, 4294967295
  store i64 0, i64* %indvars.iv7.reg2mem
  br label %dec_label_pc_1546

dec_label_pc_1546:                                ; preds = %dec_label_pc_1546.preheader, %dec_label_pc_1546
  %indvars.iv7.reload = load i64, i64* %indvars.iv7.reg2mem
  %5 = mul i64 %indvars.iv7.reload, 4, !insn.addr !106
  %6 = add i64 %5, %4, !insn.addr !106
  %7 = inttoptr i64 %6 to i32*, !insn.addr !106
  %8 = load i32, i32* %7, align 4, !insn.addr !106
  %9 = add i64 %5, %3, !insn.addr !107
  %10 = inttoptr i64 %9 to i32*, !insn.addr !107
  %11 = load i32, i32* %10, align 4, !insn.addr !107
  %12 = add i32 %11, %8, !insn.addr !107
  %13 = add i64 %5, %2, !insn.addr !108
  %14 = inttoptr i64 %13 to i32*, !insn.addr !108
  store i32 %12, i32* %14, align 4, !insn.addr !108
  %indvars.iv.next8 = add nuw nsw i64 %indvars.iv7.reload, 1
  %exitcond10 = icmp eq i64 %indvars.iv.next8, %wide.trip.count9
  store i64 %indvars.iv.next8, i64* %indvars.iv7.reg2mem, !insn.addr !105
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !105
  store i32 0, i32* %stack_var_-44.03.reg2mem, !insn.addr !105
  br i1 %exitcond10, label %dec_label_pc_158f, label %dec_label_pc_1546, !insn.addr !105

dec_label_pc_158f:                                ; preds = %dec_label_pc_1546, %dec_label_pc_158f
  %stack_var_-44.03.reload = load i32, i32* %stack_var_-44.03.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 4, !insn.addr !109
  %16 = add i64 %15, %2, !insn.addr !109
  %17 = inttoptr i64 %16 to i32*, !insn.addr !109
  %18 = load i32, i32* %17, align 4, !insn.addr !109
  %19 = add i32 %18, %stack_var_-44.03.reload, !insn.addr !110
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count9
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !111
  store i32 %19, i32* %stack_var_-44.03.reg2mem, !insn.addr !111
  br i1 %exitcond, label %dec_label_pc_1583.dec_label_pc_15ae_crit_edge, label %dec_label_pc_158f, !insn.addr !111

dec_label_pc_1583.dec_label_pc_15ae_crit_edge:    ; preds = %dec_label_pc_158f
  %phitmp = zext i32 %19 to i64
  store i64 %phitmp, i64* %stack_var_-44.0.lcssa.reg2mem
  br label %dec_label_pc_15ae

dec_label_pc_15ae:                                ; preds = %dec_label_pc_1520, %dec_label_pc_1583.dec_label_pc_15ae_crit_edge
  %stack_var_-44.0.lcssa.reload = load i64, i64* %stack_var_-44.0.lcssa.reg2mem
  ret i64 %stack_var_-44.0.lcssa.reload, !insn.addr !112

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64* %indvars.iv7.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-44.03.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-44.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_15ae, { 1, 0 }
  uselistorder label %dec_label_pc_158f, { 1, 0 }
  uselistorder label %dec_label_pc_1546, { 1, 0 }
}

define i64 @call_vectorized_loop(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_15c0:
  %stack_var_-72 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-104 = alloca i64, align 8
  store i64 8589934593, i64* %stack_var_-40, align 8, !insn.addr !113
  store i64 30064771080, i64* %stack_var_-72, align 8, !insn.addr !114
  %0 = call i64* @memset(i64* nonnull %stack_var_-104, i32 0, i32 32), !insn.addr !115
  %1 = call i64 @param_vectorized_loop(i64* nonnull %stack_var_-40, i64* nonnull %stack_var_-72, i64* nonnull %stack_var_-104, i64 8), !insn.addr !116
  ret i64 %1, !insn.addr !117
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_1650:
  %0 = trunc i64 %arg1 to i32, !insn.addr !118
  %1 = call i64 @lto_target_func(i32 %0), !insn.addr !119
  ret i64 %1, !insn.addr !120
}

define i64 @lto_target_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1670:
  %0 = mul i32 %arg1, 2, !insn.addr !121
  %1 = add i32 %0, 10, !insn.addr !122
  %2 = zext i32 %1 to i64, !insn.addr !122
  ret i64 %2, !insn.addr !123
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i64 @param_link_time_optimization(i64 5), !insn.addr !124
  ret i64 %0, !insn.addr !125
}

define i64 @div_zero_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_16a0:
  store i32 1, i32* bitcast (i64* @global_var_4090 to i32*), align 8, !insn.addr !126
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_40a0 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !127
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !127
}

define i64 @param_division_by_zero(i64 %arg1) local_unnamed_addr {
dec_label_pc_16d0:
  %storemerge.reg2mem = alloca i64, !insn.addr !128
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5792 to void (i32)*)), !insn.addr !129
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_40a0 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !130
  %2 = icmp eq i32 %1, 0, !insn.addr !131
  %3 = icmp eq i1 %2, false, !insn.addr !132
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !132
  br i1 %3, label %dec_label_pc_171f, label %dec_label_pc_1701, !insn.addr !132

dec_label_pc_1701:                                ; preds = %dec_label_pc_16d0
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %storemerge.reg2mem, !insn.addr !133
  br label %dec_label_pc_171f, !insn.addr !133

dec_label_pc_171f:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_1701
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !134

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_171f, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i64 @param_division_by_zero(i64 5), !insn.addr !135
  %1 = call i64 @param_division_by_zero(i64 0), !insn.addr !136
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !137
  %3 = add i64 %1, %0, !insn.addr !138
  %4 = and i64 %3, 4294967295, !insn.addr !138
  ret i64 %4, !insn.addr !139

; uselistorder directives
  uselistorder i64 (i64)* @param_division_by_zero, { 1, 0 }
}

define i64 @segv_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_1770:
  store i32 1, i32* bitcast (i64* @global_var_4168 to i32*), align 8, !insn.addr !140
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4170 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !141
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !141

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 0 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i64 @param_null_pointer_deref(i32* %arg1) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 6000 to void (i32)*)), !insn.addr !142
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4170 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !143
  %4 = icmp eq i32 %3, 0, !insn.addr !144
  %5 = icmp eq i1 %4, false, !insn.addr !145
  %phitmp = and i64 %1, 4294967295
  %storemerge = select i1 %5, i64 4294967295, i64 %phitmp
  ret i64 %storemerge, !insn.addr !146

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1800:
  %stack_var_-12 = alloca i32, align 4
  store i32 42, i32* %stack_var_-12, align 4, !insn.addr !147
  %0 = call i64 @param_null_pointer_deref(i32* nonnull %stack_var_-12), !insn.addr !148
  %1 = call i64 @param_null_pointer_deref(i32* null), !insn.addr !149
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !150
  %3 = add i64 %1, %0, !insn.addr !151
  %4 = and i64 %3, 4294967295, !insn.addr !151
  ret i64 %4, !insn.addr !152

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_1850:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !153
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !154
  %1 = add i64 %0, -12, !insn.addr !155
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_186f

dec_label_pc_186f:                                ; preds = %dec_label_pc_1850, %dec_label_pc_186f
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %2 = add i64 %1, %indvars.iv.reload, !insn.addr !155
  %3 = inttoptr i64 %2 to i8*, !insn.addr !155
  store i8 65, i8* %3, align 1, !insn.addr !155
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 17
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !156
  br i1 %exitcond, label %dec_label_pc_1886, label %dec_label_pc_186f, !insn.addr !156

dec_label_pc_1886:                                ; preds = %dec_label_pc_186f
  %4 = and i64 %arg1, 4294967295
  ret i64 %4, !insn.addr !157

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_186f, { 1, 0 }
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b0:
  %storemerge4.reg2mem = alloca i64, !insn.addr !158
  %indvars.iv.reg2mem = alloca i64, !insn.addr !158
  %0 = and i64 %arg1, 4294967295
  %1 = call i64* @malloc(i32 16), !insn.addr !159
  %2 = ptrtoint i64* %1 to i64, !insn.addr !159
  %3 = icmp eq i64* %1, null, !insn.addr !160
  %4 = icmp eq i1 %3, false, !insn.addr !161
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !161
  store i64 4294967294, i64* %storemerge4.reg2mem, !insn.addr !161
  br i1 %4, label %dec_label_pc_18f1, label %dec_label_pc_191a, !insn.addr !161

dec_label_pc_18f1:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_18f1
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = add i64 %indvars.iv.reload, %2, !insn.addr !162
  %6 = inttoptr i64 %5 to i8*, !insn.addr !162
  store i8 66, i8* %6, align 1, !insn.addr !162
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !163
  br i1 %exitcond, label %dec_label_pc_190b, label %dec_label_pc_18f1, !insn.addr !163

dec_label_pc_190b:                                ; preds = %dec_label_pc_18f1
  call void @free(i64* %1), !insn.addr !164
  store i64 %0, i64* %storemerge4.reg2mem, !insn.addr !165
  br label %dec_label_pc_191a, !insn.addr !165

dec_label_pc_191a:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_190b
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !166

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_191a, { 1, 0 }
  uselistorder label %dec_label_pc_18f1, { 1, 0 }
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1930:
  %0 = call i64 @param_buffer_overflow_stack(i64 10), !insn.addr !167
  %1 = call i64 @param_buffer_overflow_heap(i64 20), !insn.addr !168
  %2 = add i64 %1, %0, !insn.addr !169
  %3 = and i64 %2, 4294967295, !insn.addr !169
  ret i64 %3, !insn.addr !170

; uselistorder directives
  uselistorder i64 20, { 1, 0 }
  uselistorder i64 10, { 1, 2, 0, 3 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1960:
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !171
  %0 = trunc i64 %arg1 to i32, !insn.addr !172
  %1 = trunc i64 %arg2 to i32
  %2 = add i32 %1, %0, !insn.addr !173
  %3 = icmp slt i32 %0, 1, !insn.addr !174
  %4 = icmp slt i32 %1, 1, !insn.addr !175
  %or.cond6 = or i1 %3, %4
  %5 = icmp slt i32 %2, 0, !insn.addr !176
  %6 = icmp eq i1 %5, false, !insn.addr !177
  %or.cond8 = or i1 %or.cond6, %6
  store i64 4294967295, i64* %stack_var_-12.0.reg2mem, !insn.addr !174
  br i1 %or.cond8, label %dec_label_pc_19b2, label %dec_label_pc_19e2, !insn.addr !174

dec_label_pc_19b2:                                ; preds = %dec_label_pc_1960
  %7 = icmp slt i32 %0, 0, !insn.addr !178
  %8 = icmp eq i1 %7, false, !insn.addr !179
  br i1 %8, label %dec_label_pc_19dc, label %dec_label_pc_19bc, !insn.addr !179

dec_label_pc_19bc:                                ; preds = %dec_label_pc_19b2
  %9 = icmp slt i32 %1, 0, !insn.addr !180
  %10 = icmp eq i1 %9, false, !insn.addr !181
  %11 = icmp slt i32 %2, 1, !insn.addr !182
  %or.cond = or i1 %10, %11
  store i64 4294967294, i64* %stack_var_-12.0.reg2mem, !insn.addr !181
  br i1 %or.cond, label %dec_label_pc_19dc, label %dec_label_pc_19e2, !insn.addr !181

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_19b2
  %phitmp = zext i32 %2 to i64
  store i64 %phitmp, i64* %stack_var_-12.0.reg2mem, !insn.addr !183
  br label %dec_label_pc_19e2, !insn.addr !183

dec_label_pc_19e2:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_1960, %dec_label_pc_19dc
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  ret i64 %stack_var_-12.0.reload, !insn.addr !184

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 false, { 1, 2, 0, 6, 7, 8, 9, 3, 10, 4, 5, 11 }
  uselistorder i32 0, { 9, 10, 3, 11, 12, 4, 0, 1, 13, 14, 5, 15, 16, 17, 2, 18, 6, 7, 8 }
  uselistorder label %dec_label_pc_19e2, { 2, 0, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_19f0:
  %0 = call i64 @param_integer_overflow(i64 1000000000, i64 1000000000), !insn.addr !185
  %1 = call i64 @param_integer_overflow(i64 4294967295, i64 1), !insn.addr !186
  %2 = add i64 %1, %0, !insn.addr !187
  %3 = and i64 %2, 4294967295, !insn.addr !187
  ret i64 %3, !insn.addr !188

; uselistorder directives
  uselistorder i64 1, { 4, 0, 1, 3, 2, 5 }
  uselistorder i64 (i64, i64)* @param_integer_overflow, { 1, 0 }
  uselistorder i64 1000000000, { 1, 0 }
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = mul i64 %arg1, 2, !insn.addr !189
  %1 = and i64 %0, 4294967294, !insn.addr !189
  ret i64 %1, !insn.addr !190

; uselistorder directives
  uselistorder i64 4294967294, { 2, 0, 1 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1a50:
  %0 = call i64 @param_undefined_behavior(i64 5), !insn.addr !191
  %1 = and i64 %0, 4294967295, !insn.addr !192
  ret i64 %1, !insn.addr !193
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1a70:
  ret i64 47, !insn.addr !194
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1b00:
  %0 = call i64 @param_implementation_defined(), !insn.addr !195
  ret i64 %0, !insn.addr !196
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2009 to i8*)), !insn.addr !197
  %1 = call i64 @call_fake_branch(), !insn.addr !198
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2037 to i8*)), !insn.addr !199
  %3 = call i64 @call_opaque_predicate(), !insn.addr !200
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2053 to i8*)), !insn.addr !201
  %5 = call i64 @call_instruction_substitution(), !insn.addr !202
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_206f to i8*)), !insn.addr !203
  %7 = call i64 @call_string_encryption(), !insn.addr !204
  %8 = and i64 %7, 4294967295, !insn.addr !205
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_208c to i8*)), !insn.addr !206
  %10 = call i64 @call_tail_call_optimized(i64 ptrtoint (i8** @global_var_208c to i64), i64 %8), !insn.addr !207
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20a8 to i8*)), !insn.addr !208
  %12 = call i64 @call_non_tail_call(), !insn.addr !209
  %13 = and i64 %12, 4294967295, !insn.addr !210
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d2 to i8*)), !insn.addr !211
  %15 = call i64 @call_vectorized_loop(i64 ptrtoint (i8** @global_var_20d2 to i64), i64 %13), !insn.addr !212
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20f7 to i8*)), !insn.addr !213
  %17 = call i64 @call_link_time_optimization(), !insn.addr !214
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_211d to i8*)), !insn.addr !215
  %19 = call i64 @call_division_by_zero(), !insn.addr !216
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_213d to i8*)), !insn.addr !217
  %21 = call i64 @call_null_pointer_deref(), !insn.addr !218
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2159 to i8*)), !insn.addr !219
  %23 = call i64 @call_buffer_overflow(), !insn.addr !220
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2176 to i8*)), !insn.addr !221
  %25 = call i64 @call_integer_overflow(), !insn.addr !222
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2193 to i8*)), !insn.addr !223
  %27 = call i64 @call_undefined_behavior(), !insn.addr !224
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !225
  %29 = call i64 @call_implementation_defined(), !insn.addr !226
  %30 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e1 to i8*)), !insn.addr !227
  %31 = sext i32 %30 to i64, !insn.addr !227
  ret i64 %31, !insn.addr !228

; uselistorder directives
  uselistorder i8** @global_var_20d2, { 1, 0 }
  uselistorder i8** @global_var_208c, { 1, 0 }
  uselistorder i64 4294967295, { 8, 9, 10, 11, 17, 0, 12, 4, 5, 13, 7, 2, 14, 1, 3, 15, 16, 6 }
  uselistorder i32 (i8*, ...)* @printf, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1c50:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !229
  ret i64 0, !insn.addr !230

; uselistorder directives
  uselistorder i64 0, { 7, 0, 1, 39, 3, 4, 2, 5, 40, 41, 45, 8, 6, 46, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 42, 43, 44 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1c6c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !231

; uselistorder directives
  uselistorder i32 1, { 2, 23, 22, 24, 3, 5, 4, 31, 6, 32, 1, 25, 37, 7, 26, 38, 35, 34, 33, 11, 10, 9, 8, 12, 13, 30, 16, 15, 14, 29, 28, 27, 20, 19, 18, 17, 0, 36, 21 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

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
!14 = !{i64 4272}
!15 = !{i64 4288}
!16 = !{i64 4335}
!17 = !{i64 4341}
!18 = !{i64 4392}
!19 = !{i64 4456}
!20 = !{i64 4468}
!21 = !{i64 4475}
!22 = !{i64 4478}
!23 = !{i64 4489}
!24 = !{i64 4491}
!25 = !{i64 4498}
!26 = !{i64 4503}
!27 = !{i64 4508}
!28 = !{i64 4516}
!29 = !{i64 4520}
!30 = !{i64 4532}
!31 = !{i64 4564}
!32 = !{i64 4568}
!33 = !{i64 4571}
!34 = !{i64 4606}
!35 = !{i64 4632}
!36 = !{i64 4640}
!37 = !{i64 4665}
!38 = !{i64 4671}
!39 = !{i64 4672}
!40 = !{i64 4676}
!41 = !{i64 4737}
!42 = !{i64 4740}
!43 = !{i64 4744}
!44 = !{i64 4759}
!45 = !{i64 4760}
!46 = !{i64 4769}
!47 = !{i64 4682}
!48 = !{i64 4689}
!49 = !{i64 4692}
!50 = !{i64 4709}
!51 = !{i64 4712}
!52 = !{i64 4777}
!53 = !{i64 4876}
!54 = !{i64 4880}
!55 = !{i64 4905}
!56 = !{i64 4911}
!57 = !{i64 4916}
!58 = !{i64 4951}
!59 = !{i64 4960}
!60 = !{i64 4984}
!61 = !{i64 4987}
!62 = !{i64 4991}
!63 = !{i64 5001}
!64 = !{i64 5007}
!65 = !{i64 5008}
!66 = !{i64 5045}
!67 = !{i64 5058}
!68 = !{i64 5062}
!69 = !{i64 5078}
!70 = !{i64 5081}
!71 = !{i64 5100}
!72 = !{i64 5106}
!73 = !{i64 5128}
!74 = !{i64 5165}
!75 = !{i64 5174}
!76 = !{i64 5179}
!77 = !{i64 5184}
!78 = !{i64 5192}
!79 = !{i64 5204}
!80 = !{i64 5210}
!81 = !{i64 5216}
!82 = !{i64 5230}
!83 = !{i64 5234}
!84 = !{i64 5254}
!85 = !{i64 5260}
!86 = !{i64 5263}
!87 = !{i64 5268}
!88 = !{i64 5271}
!89 = !{i64 5279}
!90 = !{i64 5291}
!91 = !{i64 5297}
!92 = !{i64 5312}
!93 = !{i64 5323}
!94 = !{i64 5327}
!95 = !{i64 5354}
!96 = !{i64 5357}
!97 = !{i64 5362}
!98 = !{i64 5367}
!99 = !{i64 5369}
!100 = !{i64 5380}
!101 = !{i64 5401}
!102 = !{i64 5407}
!103 = !{i64 5408}
!104 = !{i64 5437}
!105 = !{i64 5440}
!106 = !{i64 5454}
!107 = !{i64 5465}
!108 = !{i64 5476}
!109 = !{i64 5527}
!110 = !{i64 5530}
!111 = !{i64 5513}
!112 = !{i64 5554}
!113 = !{i64 5583}
!114 = !{i64 5627}
!115 = !{i64 5675}
!116 = !{i64 5697}
!117 = !{i64 5707}
!118 = !{i64 5720}
!119 = !{i64 5726}
!120 = !{i64 5736}
!121 = !{i64 5754}
!122 = !{i64 5757}
!123 = !{i64 5761}
!124 = !{i64 5785}
!125 = !{i64 5791}
!126 = !{i64 5803}
!127 = !{i64 5825}
!128 = !{i64 5840}
!129 = !{i64 5863}
!130 = !{i64 5875}
!131 = !{i64 5880}
!132 = !{i64 5883}
!133 = !{i64 5907}
!134 = !{i64 5927}
!135 = !{i64 5949}
!136 = !{i64 5959}
!137 = !{i64 5976}
!138 = !{i64 5984}
!139 = !{i64 5992}
!140 = !{i64 6011}
!141 = !{i64 6033}
!142 = !{i64 6072}
!143 = !{i64 6084}
!144 = !{i64 6089}
!145 = !{i64 6092}
!146 = !{i64 6133}
!147 = !{i64 6152}
!148 = !{i64 6163}
!149 = !{i64 6175}
!150 = !{i64 6192}
!151 = !{i64 6200}
!152 = !{i64 6208}
!153 = !{i64 6224}
!154 = !{i64 6225}
!155 = !{i64 6259}
!156 = !{i64 6249}
!157 = !{i64 6319}
!158 = !{i64 6320}
!159 = !{i64 6336}
!160 = !{i64 6345}
!161 = !{i64 6350}
!162 = !{i64 6393}
!163 = !{i64 6379}
!164 = !{i64 6415}
!165 = !{i64 6423}
!166 = !{i64 6434}
!167 = !{i64 6461}
!168 = !{i64 6474}
!169 = !{i64 6485}
!170 = !{i64 6493}
!171 = !{i64 6496}
!172 = !{i64 6500}
!173 = !{i64 6509}
!174 = !{i64 6540}
!175 = !{i64 6550}
!176 = !{i64 6556}
!177 = !{i64 6560}
!178 = !{i64 6578}
!179 = !{i64 6582}
!180 = !{i64 6588}
!181 = !{i64 6592}
!182 = !{i64 6602}
!183 = !{i64 6623}
!184 = !{i64 6630}
!185 = !{i64 6655}
!186 = !{i64 6673}
!187 = !{i64 6684}
!188 = !{i64 6692}
!189 = !{i64 6721}
!190 = !{i64 6725}
!191 = !{i64 6749}
!192 = !{i64 6757}
!193 = !{i64 6765}
!194 = !{i64 6910}
!195 = !{i64 6916}
!196 = !{i64 6922}
!197 = !{i64 6941}
!198 = !{i64 6946}
!199 = !{i64 6962}
!200 = !{i64 6967}
!201 = !{i64 6983}
!202 = !{i64 6988}
!203 = !{i64 7004}
!204 = !{i64 7009}
!205 = !{i64 7014}
!206 = !{i64 7025}
!207 = !{i64 7030}
!208 = !{i64 7046}
!209 = !{i64 7051}
!210 = !{i64 7056}
!211 = !{i64 7067}
!212 = !{i64 7072}
!213 = !{i64 7088}
!214 = !{i64 7093}
!215 = !{i64 7109}
!216 = !{i64 7114}
!217 = !{i64 7130}
!218 = !{i64 7135}
!219 = !{i64 7151}
!220 = !{i64 7156}
!221 = !{i64 7172}
!222 = !{i64 7177}
!223 = !{i64 7193}
!224 = !{i64 7198}
!225 = !{i64 7214}
!226 = !{i64 7219}
!227 = !{i64 7235}
!228 = !{i64 7241}
!229 = !{i64 7263}
!230 = !{i64 7275}
!231 = !{i64 7288}
