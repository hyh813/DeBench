source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3ff8 = local_unnamed_addr global i64 0
@global_var_2004 = constant [5 x i8] c"test\00"
@global_var_2218 = local_unnamed_addr constant i64 17179869187
@global_var_2220 = local_unnamed_addr constant i64 25769803781
@global_var_2228 = local_unnamed_addr constant i64 34359738375
@global_var_2238 = local_unnamed_addr constant i64 21474836486
@global_var_2240 = local_unnamed_addr constant i64 12884901892
@global_var_2248 = local_unnamed_addr constant i64 4294967298
@global_var_4090 = local_unnamed_addr global i64 0
@global_var_4168 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4080 = local_unnamed_addr global i8 0
@global_var_3e8 = global i32 0
@global_var_2210 = local_unnamed_addr constant i32 1
@global_var_2230 = local_unnamed_addr constant i32 8
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

define i32 @param_fake_branch(i32 %x) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = mul i32 %x, %x, !insn.addr !31
  %1 = icmp slt i32 %0, 0, !insn.addr !32
  %2 = icmp eq i1 %1, false, !insn.addr !33
  %3 = mul i32 %x, 2
  %4 = add i32 %3, -559038737
  %result_-16.0 = select i1 %2, i32 %x, i32 %4
  %5 = call i32 @strlen(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2004, i64 0, i64 0)), !insn.addr !34
  ret i32 %result_-16.0, !insn.addr !35

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 2, 3 }
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @param_fake_branch(i32 10), !insn.addr !36
  ret i32 %0, !insn.addr !37
}

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_1240:
  %a_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !38
  %a_-24.04.reg2mem = alloca i32, !insn.addr !38
  %b_-28.05.reg2mem = alloca i32, !insn.addr !38
  %0 = add i32 %x, 1, !insn.addr !39
  %1 = icmp eq i32 %0, 0, !insn.addr !40
  store i32 %0, i32* %b_-28.05.reg2mem, !insn.addr !41
  store i32 %x, i32* %a_-24.04.reg2mem, !insn.addr !41
  store i32 -1, i32* %a_-24.0.lcssa.reg2mem, !insn.addr !41
  br i1 %1, label %dec_label_pc_12a9, label %dec_label_pc_128e, !insn.addr !41

dec_label_pc_128e:                                ; preds = %dec_label_pc_1240, %dec_label_pc_128e
  %a_-24.04.reload = load i32, i32* %a_-24.04.reg2mem
  %b_-28.05.reload = load i32, i32* %b_-28.05.reg2mem
  %2 = ashr i32 %a_-24.04.reload, 31, !insn.addr !42
  %3 = zext i32 %a_-24.04.reload to i64, !insn.addr !43
  %4 = zext i32 %2 to i64, !insn.addr !43
  %5 = mul i64 %4, 4294967296, !insn.addr !43
  %6 = or i64 %5, %3, !insn.addr !43
  %7 = zext i32 %b_-28.05.reload to i64, !insn.addr !43
  %8 = srem i64 %6, %7, !insn.addr !43
  %9 = trunc i64 %8 to i32, !insn.addr !43
  %10 = icmp eq i32 %9, 0, !insn.addr !40
  store i32 %9, i32* %b_-28.05.reg2mem, !insn.addr !41
  store i32 %b_-28.05.reload, i32* %a_-24.04.reg2mem, !insn.addr !41
  store i32 %b_-28.05.reload, i32* %a_-24.0.lcssa.reg2mem, !insn.addr !41
  br i1 %10, label %dec_label_pc_12a9, label %dec_label_pc_128e, !insn.addr !41

dec_label_pc_12a9:                                ; preds = %dec_label_pc_128e, %dec_label_pc_1240
  %11 = add i32 %x, 2
  %12 = mul i32 %11, %x, !insn.addr !44
  %13 = add i32 %12, 1, !insn.addr !45
  %14 = mul i32 %0, %0, !insn.addr !46
  %15 = icmp eq i32 %13, %14, !insn.addr !47
  %a_-24.0.lcssa.reload = load i32, i32* %a_-24.0.lcssa.reg2mem
  %16 = icmp eq i32 %a_-24.0.lcssa.reload, 1, !insn.addr !48
  %17 = icmp eq i1 %15, %16
  %18 = mul i32 %x, 3
  %19 = add i32 %18, 20
  %20 = mul i32 %x, 2
  %21 = add i32 %20, 10
  %storemerge = select i1 %17, i32 %21, i32 %19
  ret i32 %storemerge, !insn.addr !49

; uselistorder directives
  uselistorder i32 %a_-24.04.reload, { 1, 0 }
  uselistorder i32 %0, { 2, 3, 0, 1 }
  uselistorder i32* %b_-28.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-24.04.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 1, 3, 2, 5, 0, 4 }
  uselistorder label %dec_label_pc_128e, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !50
  ret i32 %0, !insn.addr !51
}

define i32 @param_instruction_substitution(i32 %x) local_unnamed_addr {
dec_label_pc_1330:
  %0 = udiv i32 %x, 2, !insn.addr !52
  %1 = urem i32 %x, 16, !insn.addr !53
  %reass.mul = mul i32 %x, 21
  %2 = add nuw i32 %1, %0, !insn.addr !54
  %3 = add i32 %2, %reass.mul, !insn.addr !55
  ret i32 %3, !insn.addr !56

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @param_instruction_substitution(i32 10), !insn.addr !57
  ret i32 %0, !insn.addr !58
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i64 %len, i8 %key) local_unnamed_addr {
dec_label_pc_1390:
  %storemerge3.reg2mem = alloca i8*, !insn.addr !59
  %.reg2mem = alloca i8, !insn.addr !59
  %0 = ptrtoint i8* %buffer to i64
  %1 = trunc i64 %len to i32, !insn.addr !60
  %2 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %1), !insn.addr !60
  %3 = add i64 %len, -1, !insn.addr !61
  %4 = add i64 %3, %0, !insn.addr !62
  %5 = inttoptr i64 %4 to i8*, !insn.addr !62
  store i8 0, i8* %5, align 1, !insn.addr !62
  %6 = load i8, i8* %buffer, align 1, !insn.addr !63
  %7 = icmp eq i8 %6, 0, !insn.addr !63
  store i8 %6, i8* %.reg2mem, !insn.addr !64
  store i8* %buffer, i8** %storemerge3.reg2mem, !insn.addr !64
  br i1 %7, label %dec_label_pc_13ff, label %dec_label_pc_13df, !insn.addr !64

dec_label_pc_13df:                                ; preds = %dec_label_pc_1390, %dec_label_pc_13df
  %storemerge3.reload = load i8*, i8** %storemerge3.reg2mem
  %.reload = load i8, i8* %.reg2mem
  %8 = xor i8 %.reload, %key, !insn.addr !65
  store i8 %8, i8* %storemerge3.reload, align 1, !insn.addr !65
  %9 = ptrtoint i8* %storemerge3.reload to i64, !insn.addr !66
  %10 = add i64 %9, 1, !insn.addr !67
  %11 = inttoptr i64 %10 to i8*, !insn.addr !68
  %12 = load i8, i8* %11, align 1, !insn.addr !63
  %13 = icmp eq i8 %12, 0, !insn.addr !63
  store i8 %12, i8* %.reg2mem, !insn.addr !64
  store i8* %11, i8** %storemerge3.reg2mem, !insn.addr !64
  br i1 %13, label %dec_label_pc_13ff, label %dec_label_pc_13df, !insn.addr !64

dec_label_pc_13ff:                                ; preds = %dec_label_pc_13df, %dec_label_pc_1390
  ret i8* %buffer, !insn.addr !69

; uselistorder directives
  uselistorder i8* %storemerge3.reload, { 1, 0 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 3, 0, 4, 2, 1 }
  uselistorder i8* %buffer, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_13df, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1410:
  %stack_var_-40 = alloca i8, align 1
  %0 = call i8* @decrypt_string(i8* inttoptr (i64 16496 to i8*), i8* nonnull %stack_var_-40, i64 32, i8 90), !insn.addr !70
  %1 = call i32 @strlen(i8* nonnull %stack_var_-40), !insn.addr !71
  %2 = load i8, i8* %stack_var_-40, align 1, !insn.addr !72
  %3 = sext i8 %2 to i32, !insn.addr !72
  %4 = add i32 %1, %3, !insn.addr !73
  ret i32 %4, !insn.addr !74

; uselistorder directives
  uselistorder i8* %stack_var_-40, { 0, 2, 1 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1450:
  %0 = call i32 @param_string_encryption(), !insn.addr !75
  ret i32 %0, !insn.addr !76
}

define i32 @param_tail_call_optimized(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_1460:
  %storemerge.reg2mem = alloca i32, !insn.addr !77
  %0 = icmp eq i32 %n, 0, !insn.addr !78
  %1 = icmp slt i32 %n, 0, !insn.addr !78
  %2 = icmp eq i1 %1, false, !insn.addr !79
  %3 = icmp eq i1 %0, false, !insn.addr !79
  %4 = icmp eq i1 %2, %3, !insn.addr !79
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !79
  br i1 %4, label %dec_label_pc_1483, label %dec_label_pc_1497, !insn.addr !79

dec_label_pc_1483:                                ; preds = %dec_label_pc_1460
  %5 = add i32 %n, -1, !insn.addr !80
  %6 = add i32 %acc, %n, !insn.addr !81
  %7 = call i32 @param_tail_call_optimized(i32 %5, i32 %6), !insn.addr !82
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !83
  br label %dec_label_pc_1497, !insn.addr !83

dec_label_pc_1497:                                ; preds = %dec_label_pc_1460, %dec_label_pc_1483
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !84

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder i32 %n, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_1497, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !85
  ret i32 %0, !insn.addr !86

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_14c0:
  %storemerge.reg2mem = alloca i32, !insn.addr !87
  %0 = icmp eq i32 %n, 0, !insn.addr !88
  %1 = icmp slt i32 %n, 0, !insn.addr !88
  %2 = icmp eq i1 %1, false, !insn.addr !89
  %3 = icmp eq i1 %0, false, !insn.addr !89
  %4 = icmp eq i1 %2, %3, !insn.addr !89
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !89
  br i1 %4, label %dec_label_pc_14e1, label %dec_label_pc_14fc, !insn.addr !89

dec_label_pc_14e1:                                ; preds = %dec_label_pc_14c0
  %5 = add i32 %n, -1, !insn.addr !90
  %6 = call i32 @param_non_tail_call(i32 %5), !insn.addr !91
  %7 = add i32 %6, %n, !insn.addr !92
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !93
  br label %dec_label_pc_14fc, !insn.addr !93

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14c0, %dec_label_pc_14e1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !94

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_14fc, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !95
  ret i32 %0, !insn.addr !96

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_1520:
  %sum_-44.0.lcssa.reg2mem = alloca i32, !insn.addr !97
  %sum_-44.05.reg2mem = alloca i32, !insn.addr !97
  %indvars.iv.reg2mem = alloca i64, !insn.addr !97
  %indvars.iv8.reg2mem = alloca i64, !insn.addr !97
  %0 = icmp sgt i32 %n, 0
  store i32 0, i32* %sum_-44.0.lcssa.reg2mem, !insn.addr !98
  br i1 %0, label %dec_label_pc_1546.lr.ph, label %dec_label_pc_15ae, !insn.addr !98

dec_label_pc_1546.lr.ph:                          ; preds = %dec_label_pc_1520
  %1 = ptrtoint i32* %a to i64, !insn.addr !99
  %2 = ptrtoint i32* %b to i64, !insn.addr !100
  %3 = ptrtoint i32* %c to i64, !insn.addr !101
  %wide.trip.count10 = zext i32 %n to i64
  store i64 0, i64* %indvars.iv8.reg2mem
  br label %dec_label_pc_1546

dec_label_pc_1546:                                ; preds = %dec_label_pc_1546, %dec_label_pc_1546.lr.ph
  %indvars.iv8.reload = load i64, i64* %indvars.iv8.reg2mem
  %4 = mul i64 %indvars.iv8.reload, 4, !insn.addr !102
  %5 = add i64 %4, %1, !insn.addr !102
  %6 = inttoptr i64 %5 to i32*, !insn.addr !102
  %7 = load i32, i32* %6, align 4, !insn.addr !102
  %8 = add i64 %4, %2, !insn.addr !103
  %9 = inttoptr i64 %8 to i32*, !insn.addr !103
  %10 = load i32, i32* %9, align 4, !insn.addr !103
  %11 = add i32 %10, %7, !insn.addr !103
  %12 = add i64 %4, %3, !insn.addr !104
  %13 = inttoptr i64 %12 to i32*, !insn.addr !104
  store i32 %11, i32* %13, align 4, !insn.addr !104
  %indvars.iv.next9 = add nuw nsw i64 %indvars.iv8.reload, 1
  %exitcond11 = icmp eq i64 %indvars.iv.next9, %wide.trip.count10
  store i64 %indvars.iv.next9, i64* %indvars.iv8.reg2mem, !insn.addr !98
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !98
  store i32 0, i32* %sum_-44.05.reg2mem, !insn.addr !98
  br i1 %exitcond11, label %dec_label_pc_158f, label %dec_label_pc_1546, !insn.addr !98

dec_label_pc_158f:                                ; preds = %dec_label_pc_1546, %dec_label_pc_158f
  %sum_-44.05.reload = load i32, i32* %sum_-44.05.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %14 = mul i64 %indvars.iv.reload, 4, !insn.addr !105
  %15 = add i64 %14, %3, !insn.addr !105
  %16 = inttoptr i64 %15 to i32*, !insn.addr !105
  %17 = load i32, i32* %16, align 4, !insn.addr !105
  %18 = add i32 %17, %sum_-44.05.reload, !insn.addr !106
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !107
  store i32 %18, i32* %sum_-44.05.reg2mem, !insn.addr !107
  store i32 %18, i32* %sum_-44.0.lcssa.reg2mem, !insn.addr !107
  br i1 %exitcond, label %dec_label_pc_15ae, label %dec_label_pc_158f, !insn.addr !107

dec_label_pc_15ae:                                ; preds = %dec_label_pc_158f, %dec_label_pc_1520
  %sum_-44.0.lcssa.reload = load i32, i32* %sum_-44.0.lcssa.reg2mem
  ret i32 %sum_-44.0.lcssa.reload, !insn.addr !108

; uselistorder directives
  uselistorder i64 %4, { 2, 1, 0 }
  uselistorder i64* %indvars.iv8.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-44.05.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_158f, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_15c0:
  %b_-72 = alloca [1 x i32], align 4
  %a_-40 = alloca [1 x i32], align 4
  %stack_var_-104 = alloca i64, align 8
  store [1 x i32] [i32 1], [1 x i32]* %a_-40, align 4, !insn.addr !109
  store [1 x i32] [i32 8], [1 x i32]* %b_-72, align 4, !insn.addr !110
  %0 = call i64* @memset(i64* nonnull %stack_var_-104, i32 0, i32 32), !insn.addr !111
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %a_-40, i64 0, i64 0, !insn.addr !112
  %2 = getelementptr inbounds [1 x i32], [1 x i32]* %b_-72, i64 0, i64 0, !insn.addr !112
  %3 = bitcast i64* %stack_var_-104 to i32*, !insn.addr !112
  %4 = call i32 @param_vectorized_loop(i32* nonnull %1, i32* nonnull %2, i32* nonnull %3, i32 8), !insn.addr !112
  ret i32 %4, !insn.addr !113
}

define i32 @param_link_time_optimization(i32 %x) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i32 @lto_target_func(i32 %x), !insn.addr !114
  ret i32 %0, !insn.addr !115
}

define i32 @lto_target_func(i32 %x) local_unnamed_addr {
dec_label_pc_1670:
  %0 = mul i32 %x, 2, !insn.addr !116
  %1 = add i32 %0, 10, !insn.addr !117
  ret i32 %1, !insn.addr !118
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32 @param_link_time_optimization(i32 5), !insn.addr !119
  ret i32 %0, !insn.addr !120
}

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_16a0:
  store i32 1, i32* bitcast (i64* @global_var_4090 to i32*), align 8, !insn.addr !121
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_40a0 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !122
  ret void, !insn.addr !122
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_16d0:
  %storemerge.reg2mem = alloca i32, !insn.addr !123
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5792 to void (i32)*)), !insn.addr !124
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_40a0 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !125
  %2 = icmp eq i32 %1, 0, !insn.addr !126
  %3 = icmp eq i1 %2, false, !insn.addr !127
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !127
  br i1 %3, label %dec_label_pc_171f, label %dec_label_pc_1701, !insn.addr !127

dec_label_pc_1701:                                ; preds = %dec_label_pc_16d0
  %4 = udiv i32 10, %x
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !128
  br label %dec_label_pc_171f, !insn.addr !128

dec_label_pc_171f:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_1701
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !129

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_171f, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !130
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !131
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !132
  %3 = add i32 %1, %0, !insn.addr !133
  ret i32 %3, !insn.addr !134

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1770:
  store i32 1, i32* bitcast (i64* @global_var_4168 to i32*), align 8, !insn.addr !135
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4170 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !136
  ret void, !insn.addr !136

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 6000 to void (i32)*)), !insn.addr !137
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4170 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !138
  %4 = icmp eq i32 %3, 0, !insn.addr !139
  %5 = icmp eq i1 %4, false, !insn.addr !140
  %6 = trunc i64 %1 to i32
  %storemerge = select i1 %5, i32 -1, i32 %6
  ret i32 %storemerge, !insn.addr !141

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1800:
  %valid_-12 = alloca i32, align 4
  store i32 42, i32* %valid_-12, align 4, !insn.addr !142
  %0 = call i32 @param_null_pointer_deref(i32* nonnull %valid_-12), !insn.addr !143
  %1 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !144
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !145
  %3 = add i32 %1, %0, !insn.addr !146
  ret i32 %3, !insn.addr !147

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %x) local_unnamed_addr {
dec_label_pc_1850:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !148
  %buffer_-12 = alloca [1 x i8], align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !149
  %1 = trunc i32 %x to i8, !insn.addr !150
  %2 = insertvalue [1 x i8] undef, i8 %1, 0, !insn.addr !150
  store [1 x i8] %2, [1 x i8]* %buffer_-12, align 4, !insn.addr !150
  %3 = add i64 %0, -12, !insn.addr !151
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_186f

dec_label_pc_186f:                                ; preds = %dec_label_pc_1850, %dec_label_pc_186f
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = add i64 %3, %indvars.iv.reload, !insn.addr !151
  %5 = inttoptr i64 %4 to i8*, !insn.addr !151
  store i8 65, i8* %5, align 1, !insn.addr !151
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 17
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !152
  br i1 %exitcond, label %dec_label_pc_1893, label %dec_label_pc_186f, !insn.addr !152

dec_label_pc_1893:                                ; preds = %dec_label_pc_186f
  %6 = bitcast [1 x i8]* %buffer_-12 to i32*, !insn.addr !153
  %7 = load i32, i32* %6, align 4, !insn.addr !153
  ret i32 %7, !insn.addr !154

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_186f, { 1, 0 }
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_18b0:
  %.reg2mem = alloca i8*, !insn.addr !155
  %indvars.iv.reg2mem = alloca i64, !insn.addr !155
  %heap_buffer_-16 = alloca i8*, align 8
  %0 = zext i32 %x to i64
  %1 = inttoptr i64 %0 to i8*, !insn.addr !156
  store i8* %1, i8** %heap_buffer_-16, align 8, !insn.addr !156
  %2 = call i64* @malloc(i32 16), !insn.addr !157
  %3 = icmp eq i64* %2, null, !insn.addr !158
  %4 = icmp eq i1 %3, false, !insn.addr !159
  store i8* inttoptr (i32 -2 to i8*), i8** %.reg2mem, !insn.addr !159
  br i1 %4, label %dec_label_pc_18e7.preheader, label %dec_label_pc_191a, !insn.addr !159

dec_label_pc_18e7.preheader:                      ; preds = %dec_label_pc_18b0
  %5 = ptrtoint i64* %2 to i64, !insn.addr !160
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_18f1

dec_label_pc_18f1:                                ; preds = %dec_label_pc_18e7.preheader, %dec_label_pc_18f1
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = add i64 %indvars.iv.reload, %5, !insn.addr !161
  %7 = inttoptr i64 %6 to i8*, !insn.addr !161
  store i8 66, i8* %7, align 1, !insn.addr !161
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !162
  br i1 %exitcond, label %dec_label_pc_190b, label %dec_label_pc_18f1, !insn.addr !162

dec_label_pc_190b:                                ; preds = %dec_label_pc_18f1
  call void @free(i64* %2), !insn.addr !163
  %8 = load i8*, i8** %heap_buffer_-16, align 8
  store i8* %8, i8** %.reg2mem, !insn.addr !164
  br label %dec_label_pc_191a, !insn.addr !164

dec_label_pc_191a:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_190b
  %.reload = load i8*, i8** %.reg2mem, !insn.addr !165
  %9 = ptrtoint i8* %.reload to i64
  %10 = trunc i64 %9 to i32, !insn.addr !165
  ret i32 %10, !insn.addr !166

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i8** %.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 0, 1, 3, 2, 4 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_191a, { 1, 0 }
  uselistorder label %dec_label_pc_18f1, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1930:
  %0 = call i32 @param_buffer_overflow_stack(i32 10), !insn.addr !167
  %1 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !168
  %2 = add i32 %1, %0, !insn.addr !169
  ret i32 %2, !insn.addr !170

; uselistorder directives
  uselistorder i32 10, { 0, 1, 4, 2, 5, 3 }
}

define i32 @param_integer_overflow(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1960:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !171
  %0 = add i32 %b, %a, !insn.addr !172
  %1 = icmp slt i32 %a, 1, !insn.addr !173
  %2 = icmp slt i32 %b, 1, !insn.addr !174
  %or.cond = or i1 %1, %2
  %3 = icmp slt i32 %0, 0, !insn.addr !175
  %4 = icmp eq i1 %3, false, !insn.addr !176
  %or.cond5 = or i1 %or.cond, %4
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !173
  br i1 %or.cond5, label %dec_label_pc_19b2, label %dec_label_pc_19e2, !insn.addr !173

dec_label_pc_19b2:                                ; preds = %dec_label_pc_1960
  %5 = icmp slt i32 %a, 0, !insn.addr !177
  %6 = icmp eq i1 %5, false, !insn.addr !178
  br i1 %6, label %dec_label_pc_19dc, label %dec_label_pc_19bc, !insn.addr !178

dec_label_pc_19bc:                                ; preds = %dec_label_pc_19b2
  %7 = icmp slt i32 %b, 0, !insn.addr !179
  %8 = icmp eq i1 %7, false, !insn.addr !180
  %9 = icmp slt i32 %0, 1, !insn.addr !181
  %or.cond3 = or i1 %8, %9
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !180
  br i1 %or.cond3, label %dec_label_pc_19dc, label %dec_label_pc_19e2, !insn.addr !180

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_19b2
  store i32 %0, i32* %stack_var_-12.0.reg2mem, !insn.addr !182
  br label %dec_label_pc_19e2, !insn.addr !182

dec_label_pc_19e2:                                ; preds = %dec_label_pc_19bc, %dec_label_pc_1960, %dec_label_pc_19dc
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !183

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 false, { 1, 2, 0, 7, 8, 9, 10, 3, 11, 4, 5, 6 }
  uselistorder i32 0, { 12, 13, 5, 14, 6, 15, 7, 1, 0, 3, 2, 16, 17, 8, 18, 19, 20, 4, 21, 9, 10, 11 }
  uselistorder i32 %b, { 1, 2, 0 }
  uselistorder i32 %a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_19e2, { 2, 0, 1 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_19f0:
  %0 = call i32 @param_integer_overflow(i32 1000000000, i32 1000000000), !insn.addr !184
  %1 = call i32 @param_integer_overflow(i32 -1, i32 1), !insn.addr !185
  %2 = add i32 %1, %0, !insn.addr !186
  ret i32 %2, !insn.addr !187

; uselistorder directives
  uselistorder i32 -1, { 4, 0, 3, 1, 5, 6, 2 }
  uselistorder i32 (i32, i32)* @param_integer_overflow, { 1, 0 }
}

define i32 @param_undefined_behavior(i32 %i) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = mul i32 %i, 2, !insn.addr !188
  ret i32 %0, !insn.addr !189

; uselistorder directives
  uselistorder i32 2, { 0, 1, 4, 2, 5, 3 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1a50:
  %0 = call i32 @param_undefined_behavior(i32 5), !insn.addr !190
  ret i32 %0, !insn.addr !191
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1a70:
  ret i32 47, !insn.addr !192
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1b00:
  %0 = call i32 @param_implementation_defined(), !insn.addr !193
  ret i32 %0, !insn.addr !194
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2009 to i8*)), !insn.addr !195
  %1 = call i32 @call_fake_branch(), !insn.addr !196
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2037 to i8*)), !insn.addr !197
  %3 = call i32 @call_opaque_predicate(), !insn.addr !198
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2053 to i8*)), !insn.addr !199
  %5 = call i32 @call_instruction_substitution(), !insn.addr !200
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_206f to i8*)), !insn.addr !201
  %7 = call i32 @call_string_encryption(), !insn.addr !202
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_208c to i8*)), !insn.addr !203
  %9 = call i32 @call_tail_call_optimized(), !insn.addr !204
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20a8 to i8*)), !insn.addr !205
  %11 = call i32 @call_non_tail_call(), !insn.addr !206
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d2 to i8*)), !insn.addr !207
  %13 = call i32 @call_vectorized_loop(), !insn.addr !208
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20f7 to i8*)), !insn.addr !209
  %15 = call i32 @call_link_time_optimization(), !insn.addr !210
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_211d to i8*)), !insn.addr !211
  %17 = call i32 @call_division_by_zero(), !insn.addr !212
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_213d to i8*)), !insn.addr !213
  %19 = call i32 @call_null_pointer_deref(), !insn.addr !214
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2159 to i8*)), !insn.addr !215
  %21 = call i32 @call_buffer_overflow(), !insn.addr !216
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2176 to i8*)), !insn.addr !217
  %23 = call i32 @call_integer_overflow(), !insn.addr !218
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2193 to i8*)), !insn.addr !219
  %25 = call i32 @call_undefined_behavior(), !insn.addr !220
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !221
  %27 = call i32 @call_implementation_defined(), !insn.addr !222
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21e1 to i8*)), !insn.addr !223
  ret void, !insn.addr !224

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i64 0, { 0, 1, 36, 37, 38, 39, 2, 3, 40, 41, 45, 5, 4, 46, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 42, 43, 44 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1c50:
  call void @test_obf_opt_edge(), !insn.addr !225
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !226
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1c6c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !227

; uselistorder directives
  uselistorder i32 1, { 2, 22, 20, 21, 23, 3, 29, 5, 4, 31, 30, 6, 32, 1, 24, 37, 7, 25, 38, 35, 34, 33, 11, 10, 9, 8, 12, 13, 27, 15, 14, 26, 40, 39, 18, 17, 16, 0, 36, 19, 28 }
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
!35 = !{i64 4640}
!36 = !{i64 4665}
!37 = !{i64 4671}
!38 = !{i64 4672}
!39 = !{i64 4700}
!40 = !{i64 4740}
!41 = !{i64 4744}
!42 = !{i64 4759}
!43 = !{i64 4760}
!44 = !{i64 4692}
!45 = !{i64 4694}
!46 = !{i64 4709}
!47 = !{i64 4712}
!48 = !{i64 4777}
!49 = !{i64 4880}
!50 = !{i64 4905}
!51 = !{i64 4911}
!52 = !{i64 4951}
!53 = !{i64 4960}
!54 = !{i64 4984}
!55 = !{i64 4987}
!56 = !{i64 4991}
!57 = !{i64 5001}
!58 = !{i64 5007}
!59 = !{i64 5008}
!60 = !{i64 5045}
!61 = !{i64 5058}
!62 = !{i64 5062}
!63 = !{i64 5078}
!64 = !{i64 5081}
!65 = !{i64 5100}
!66 = !{i64 5102}
!67 = !{i64 5106}
!68 = !{i64 5110}
!69 = !{i64 5128}
!70 = !{i64 5165}
!71 = !{i64 5174}
!72 = !{i64 5179}
!73 = !{i64 5184}
!74 = !{i64 5192}
!75 = !{i64 5204}
!76 = !{i64 5210}
!77 = !{i64 5216}
!78 = !{i64 5230}
!79 = !{i64 5234}
!80 = !{i64 5254}
!81 = !{i64 5260}
!82 = !{i64 5263}
!83 = !{i64 5268}
!84 = !{i64 5279}
!85 = !{i64 5291}
!86 = !{i64 5297}
!87 = !{i64 5312}
!88 = !{i64 5323}
!89 = !{i64 5327}
!90 = !{i64 5354}
!91 = !{i64 5357}
!92 = !{i64 5367}
!93 = !{i64 5369}
!94 = !{i64 5380}
!95 = !{i64 5401}
!96 = !{i64 5407}
!97 = !{i64 5408}
!98 = !{i64 5440}
!99 = !{i64 5446}
!100 = !{i64 5457}
!101 = !{i64 5468}
!102 = !{i64 5454}
!103 = !{i64 5465}
!104 = !{i64 5476}
!105 = !{i64 5527}
!106 = !{i64 5530}
!107 = !{i64 5513}
!108 = !{i64 5554}
!109 = !{i64 5583}
!110 = !{i64 5627}
!111 = !{i64 5675}
!112 = !{i64 5697}
!113 = !{i64 5707}
!114 = !{i64 5726}
!115 = !{i64 5736}
!116 = !{i64 5754}
!117 = !{i64 5757}
!118 = !{i64 5761}
!119 = !{i64 5785}
!120 = !{i64 5791}
!121 = !{i64 5803}
!122 = !{i64 5825}
!123 = !{i64 5840}
!124 = !{i64 5863}
!125 = !{i64 5875}
!126 = !{i64 5880}
!127 = !{i64 5883}
!128 = !{i64 5907}
!129 = !{i64 5927}
!130 = !{i64 5949}
!131 = !{i64 5959}
!132 = !{i64 5976}
!133 = !{i64 5984}
!134 = !{i64 5992}
!135 = !{i64 6011}
!136 = !{i64 6033}
!137 = !{i64 6072}
!138 = !{i64 6084}
!139 = !{i64 6089}
!140 = !{i64 6092}
!141 = !{i64 6133}
!142 = !{i64 6152}
!143 = !{i64 6163}
!144 = !{i64 6175}
!145 = !{i64 6192}
!146 = !{i64 6200}
!147 = !{i64 6208}
!148 = !{i64 6224}
!149 = !{i64 6225}
!150 = !{i64 6228}
!151 = !{i64 6259}
!152 = !{i64 6249}
!153 = !{i64 6291}
!154 = !{i64 6319}
!155 = !{i64 6320}
!156 = !{i64 6328}
!157 = !{i64 6336}
!158 = !{i64 6345}
!159 = !{i64 6350}
!160 = !{i64 6385}
!161 = !{i64 6393}
!162 = !{i64 6379}
!163 = !{i64 6415}
!164 = !{i64 6423}
!165 = !{i64 6426}
!166 = !{i64 6434}
!167 = !{i64 6461}
!168 = !{i64 6474}
!169 = !{i64 6485}
!170 = !{i64 6493}
!171 = !{i64 6496}
!172 = !{i64 6509}
!173 = !{i64 6540}
!174 = !{i64 6550}
!175 = !{i64 6556}
!176 = !{i64 6560}
!177 = !{i64 6578}
!178 = !{i64 6582}
!179 = !{i64 6588}
!180 = !{i64 6592}
!181 = !{i64 6602}
!182 = !{i64 6623}
!183 = !{i64 6630}
!184 = !{i64 6655}
!185 = !{i64 6673}
!186 = !{i64 6684}
!187 = !{i64 6692}
!188 = !{i64 6721}
!189 = !{i64 6725}
!190 = !{i64 6749}
!191 = !{i64 6765}
!192 = !{i64 6910}
!193 = !{i64 6916}
!194 = !{i64 6922}
!195 = !{i64 6941}
!196 = !{i64 6946}
!197 = !{i64 6962}
!198 = !{i64 6967}
!199 = !{i64 6983}
!200 = !{i64 6988}
!201 = !{i64 7004}
!202 = !{i64 7009}
!203 = !{i64 7025}
!204 = !{i64 7030}
!205 = !{i64 7046}
!206 = !{i64 7051}
!207 = !{i64 7067}
!208 = !{i64 7072}
!209 = !{i64 7088}
!210 = !{i64 7093}
!211 = !{i64 7109}
!212 = !{i64 7114}
!213 = !{i64 7130}
!214 = !{i64 7135}
!215 = !{i64 7151}
!216 = !{i64 7156}
!217 = !{i64 7172}
!218 = !{i64 7177}
!219 = !{i64 7193}
!220 = !{i64 7198}
!221 = !{i64 7214}
!222 = !{i64 7219}
!223 = !{i64 7235}
!224 = !{i64 7241}
!225 = !{i64 7263}
!226 = !{i64 7275}
!227 = !{i64 7288}
