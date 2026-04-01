source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_2008 = local_unnamed_addr constant [5 x i8] c"test\00"
@global_var_4010 = external global i64
@global_var_3e8 = global i64 0
@global_var_4108 = local_unnamed_addr global i64 0
@global_var_41e8 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_4020 = local_unnamed_addr global i8 0
@global_var_4040 = global i32 0
@global_var_4120 = global i32 0
@1 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2010 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @1, i64 0, i64 0)
@2 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_203d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2059 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_2075 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_2092 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20b0 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @6, i64 0, i64 0)
@7 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20e0 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2108 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @8, i64 0, i64 0)
@9 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2130 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_2150 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_216c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_2189 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @13, i64 0, i64 0)
@14 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21d9 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @14, i64 0, i64 0)
@15 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21f8 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @15, i64 0, i64 0)

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

define i32 @function_1130(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_1140([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define void (i32)* @function_1150(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !14
  ret void (i32)* %0, !insn.addr !14
}

define i64* @function_1160(i32 %size) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i64* @malloc(i32 %size), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define void @function_1170([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1170:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !16
  ret void, !insn.addr !16
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1180:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !17
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !17
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !17
  %3 = call i32 @__libc_start_main(i64 7416, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !17
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

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1269:
  %0 = and i64 %arg1, 4294967295, !insn.addr !32
  ret i64 %0, !insn.addr !33
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_128a:
  %0 = call i64 @param_fake_branch(i64 10), !insn.addr !34
  ret i64 %0, !insn.addr !35
}

define i64 @param_opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_129e:
  %storemerge.reg2mem = alloca i64, !insn.addr !36
  %.lcssa.reg2mem = alloca i32, !insn.addr !36
  %stack_var_-32.011.reg2mem = alloca i64, !insn.addr !36
  %stack_var_-28.012.reg2mem = alloca i32, !insn.addr !36
  %.reg2mem = alloca i32, !insn.addr !36
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !37
  %1 = trunc i64 %arg1 to i32
  %2 = add i32 %1, 1, !insn.addr !38
  %3 = icmp eq i32 %2, 0, !insn.addr !39
  %4 = icmp eq i1 %3, false, !insn.addr !40
  %5 = trunc i64 %0 to i32
  store i32 %5, i32* %.reg2mem, !insn.addr !40
  store i32 %2, i32* %stack_var_-28.012.reg2mem, !insn.addr !40
  store i64 %0, i64* %stack_var_-32.011.reg2mem, !insn.addr !40
  store i32 %5, i32* %.lcssa.reg2mem, !insn.addr !40
  br i1 %4, label %dec_label_pc_12e6, label %dec_label_pc_1302, !insn.addr !40

dec_label_pc_12e6:                                ; preds = %dec_label_pc_129e, %dec_label_pc_12e6
  %stack_var_-32.011.reload = load i64, i64* %stack_var_-32.011.reg2mem
  %stack_var_-28.012.reload = load i32, i32* %stack_var_-28.012.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = ashr i32 %.reload, 31, !insn.addr !41
  %7 = and i64 %stack_var_-32.011.reload, 4294967295, !insn.addr !42
  %8 = zext i32 %6 to i64, !insn.addr !42
  %9 = mul i64 %8, 4294967296, !insn.addr !42
  %10 = or i64 %9, %7, !insn.addr !42
  %11 = zext i32 %stack_var_-28.012.reload to i64, !insn.addr !42
  %12 = srem i64 %10, %11, !insn.addr !42
  %13 = trunc i64 %12 to i32, !insn.addr !42
  %14 = sext i32 %stack_var_-28.012.reload to i64, !insn.addr !43
  %15 = icmp eq i32 %13, 0, !insn.addr !39
  %16 = icmp eq i1 %15, false, !insn.addr !40
  store i32 %stack_var_-28.012.reload, i32* %.reg2mem, !insn.addr !40
  store i32 %13, i32* %stack_var_-28.012.reg2mem, !insn.addr !40
  store i64 %14, i64* %stack_var_-32.011.reg2mem, !insn.addr !40
  store i32 %stack_var_-28.012.reload, i32* %.lcssa.reg2mem, !insn.addr !40
  br i1 %16, label %dec_label_pc_12e6, label %dec_label_pc_1302, !insn.addr !40

dec_label_pc_1302:                                ; preds = %dec_label_pc_12e6, %dec_label_pc_129e
  %17 = mul nsw i64 %0, %0, !insn.addr !44
  %18 = mul i64 %arg1, 2, !insn.addr !45
  %19 = add i64 %17, %18, !insn.addr !46
  %20 = trunc i64 %19 to i32
  %21 = add i32 %20, 1, !insn.addr !47
  %sext5 = add i64 %sext, 4294967296
  %22 = ashr exact i64 %sext5, 32, !insn.addr !48
  %23 = mul nsw i64 %22, %22, !insn.addr !48
  %24 = trunc i64 %23 to i32, !insn.addr !49
  %25 = icmp eq i32 %21, %24, !insn.addr !49
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %26 = icmp eq i32 %.lcssa.reload, 1, !insn.addr !50
  %27 = icmp eq i1 %25, %26
  br i1 %27, label %dec_label_pc_1328, label %dec_label_pc_1332, !insn.addr !51

dec_label_pc_1328:                                ; preds = %dec_label_pc_1302
  %28 = add i64 %18, 10, !insn.addr !52
  %29 = and i64 %28, 4294967294, !insn.addr !52
  store i64 %29, i64* %storemerge.reg2mem, !insn.addr !53
  br label %dec_label_pc_133e, !insn.addr !53

dec_label_pc_1332:                                ; preds = %dec_label_pc_1302
  %30 = mul nsw i64 %0, 3, !insn.addr !54
  %31 = add nsw i64 %30, 20, !insn.addr !55
  %32 = and i64 %31, 4294967295, !insn.addr !55
  store i64 %32, i64* %storemerge.reg2mem, !insn.addr !55
  br label %dec_label_pc_133e, !insn.addr !55

dec_label_pc_133e:                                ; preds = %dec_label_pc_1332, %dec_label_pc_1328
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !56

; uselistorder directives
  uselistorder i32 %stack_var_-28.012.reload, { 0, 3, 1, 2 }
  uselistorder i64 %0, { 2, 3, 4, 0, 1 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-28.012.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-32.011.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_12e6, { 1, 0 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i64 @param_opaque_predicate(i64 5), !insn.addr !57
  ret i64 %0, !insn.addr !58
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_1354:
  %0 = trunc i64 %arg1 to i32, !insn.addr !59
  %1 = udiv i32 %0, 2, !insn.addr !60
  %2 = urem i32 %0, 16, !insn.addr !61
  %reass.mul = mul i32 %0, 21
  %3 = add nuw i32 %2, %1, !insn.addr !62
  %4 = add i32 %3, %reass.mul, !insn.addr !63
  %5 = zext i32 %4 to i64, !insn.addr !63
  ret i64 %5, !insn.addr !64

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_13b3:
  %0 = call i64 @param_instruction_substitution(i64 10), !insn.addr !65
  ret i64 %0, !insn.addr !66
}

define i64 @decrypt_string(i64* %arg1, i64* %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13c7:
  %storemerge2.reg2mem = alloca i64, !insn.addr !67
  %.reg2mem3 = alloca i8*, !insn.addr !67
  %.reg2mem = alloca i8, !insn.addr !67
  %0 = ptrtoint i64* %arg2 to i64
  %1 = bitcast i64* %arg2 to i8*
  %2 = bitcast i64* %arg1 to i8*, !insn.addr !68
  %3 = trunc i64 %arg3 to i32, !insn.addr !68
  %4 = call i8* @strncpy(i8* %1, i8* %2, i32 %3), !insn.addr !68
  %5 = add i64 %arg3, -1, !insn.addr !69
  %6 = add i64 %5, %0, !insn.addr !70
  %7 = inttoptr i64 %6 to i8*, !insn.addr !71
  store i8 0, i8* %7, align 1, !insn.addr !71
  %8 = load i8, i8* %1, align 1, !insn.addr !72
  %9 = icmp eq i8 %8, 0, !insn.addr !73
  %10 = icmp eq i1 %9, false, !insn.addr !74
  br i1 %10, label %dec_label_pc_1417.lr.ph, label %dec_label_pc_1439, !insn.addr !74

dec_label_pc_1417.lr.ph:                          ; preds = %dec_label_pc_13c7
  %11 = trunc i64 %arg4 to i8, !insn.addr !75
  store i8 %8, i8* %.reg2mem
  store i8* %1, i8** %.reg2mem3
  store i64 %0, i64* %storemerge2.reg2mem
  br label %dec_label_pc_1417

dec_label_pc_1417:                                ; preds = %dec_label_pc_1417.lr.ph, %dec_label_pc_1417
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %.reload4 = load i8*, i8** %.reg2mem3
  %.reload = load i8, i8* %.reg2mem
  %12 = xor i8 %.reload, %11, !insn.addr !75
  store i8 %12, i8* %.reload4, align 1, !insn.addr !76
  %13 = add i64 %storemerge2.reload, 1, !insn.addr !77
  %14 = inttoptr i64 %13 to i8*, !insn.addr !72
  %15 = load i8, i8* %14, align 1, !insn.addr !72
  %16 = icmp eq i8 %15, 0, !insn.addr !73
  %17 = icmp eq i1 %16, false, !insn.addr !74
  store i8 %15, i8* %.reg2mem, !insn.addr !74
  store i8* %14, i8** %.reg2mem3, !insn.addr !74
  store i64 %13, i64* %storemerge2.reg2mem, !insn.addr !74
  br i1 %17, label %dec_label_pc_1417, label %dec_label_pc_1439, !insn.addr !74

dec_label_pc_1439:                                ; preds = %dec_label_pc_1417, %dec_label_pc_13c7
  ret i64 %0, !insn.addr !78

; uselistorder directives
  uselistorder i64 %0, { 2, 0, 1 }
  uselistorder i8* %.reg2mem, { 1, 0, 2 }
  uselistorder i8** %.reg2mem3, { 1, 0, 2 }
  uselistorder i64* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i8 0, { 2, 0, 3, 4, 1 }
  uselistorder label %dec_label_pc_1417, { 1, 0 }
}

define i64 @param_string_encryption() local_unnamed_addr {
dec_label_pc_143f:
  %rax.0.reg2mem = alloca i64, !insn.addr !79
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !80
  %1 = bitcast i32* %stack_var_-56 to i64*, !insn.addr !81
  %2 = call i64 @decrypt_string(i64* nonnull @global_var_4010, i64* nonnull %1, i64 32, i64 90), !insn.addr !81
  %3 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !82
  %4 = call i32 @strlen(i8* nonnull %3), !insn.addr !82
  %5 = load i32, i32* %stack_var_-56, align 4, !insn.addr !83
  %sext = mul i32 %5, 16777216
  %6 = ashr exact i32 %sext, 24, !insn.addr !84
  %7 = add i32 %6, %4, !insn.addr !84
  %8 = zext i32 %7 to i64, !insn.addr !84
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !85
  %10 = icmp eq i64 %0, %9, !insn.addr !85
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !86
  br i1 %10, label %dec_label_pc_14a5, label %dec_label_pc_14a0, !insn.addr !86

dec_label_pc_14a0:                                ; preds = %dec_label_pc_143f
  call void @__stack_chk_fail(), !insn.addr !87
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !87
  br label %dec_label_pc_14a5, !insn.addr !87

dec_label_pc_14a5:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_143f
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !88

; uselistorder directives
  uselistorder i32* %stack_var_-56, { 0, 2, 1 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_14a7:
  %0 = call i64 @param_string_encryption(), !insn.addr !89
  ret i64 %0, !insn.addr !90
}

define i64 @param_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_14bb:
  %storemerge.reg2mem = alloca i64, !insn.addr !91
  %0 = trunc i64 %arg1 to i32, !insn.addr !92
  %sext3 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext3, 32, !insn.addr !93
  %2 = icmp eq i32 %0, 0, !insn.addr !94
  %3 = icmp slt i32 %0, 0, !insn.addr !94
  %4 = icmp eq i1 %3, false, !insn.addr !95
  %5 = icmp eq i1 %2, false, !insn.addr !95
  %6 = icmp eq i1 %4, %5, !insn.addr !95
  br i1 %6, label %dec_label_pc_14d8, label %dec_label_pc_14d3, !insn.addr !95

dec_label_pc_14d3:                                ; preds = %dec_label_pc_14bb
  %7 = and i64 %1, 4294967295, !insn.addr !96
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !97
  br label %dec_label_pc_14ef, !insn.addr !97

dec_label_pc_14d8:                                ; preds = %dec_label_pc_14bb
  %sext = mul i64 %arg1, 4294967296
  %8 = ashr exact i64 %sext, 32, !insn.addr !92
  %9 = add nsw i64 %1, %8, !insn.addr !98
  %10 = add nsw i64 %8, 4294967295, !insn.addr !99
  %11 = and i64 %9, 4294967295, !insn.addr !100
  %12 = and i64 %10, 4294967295, !insn.addr !101
  %13 = call i64 @param_tail_call_optimized(i64 %12, i64 %11), !insn.addr !102
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !102
  br label %dec_label_pc_14ef, !insn.addr !102

dec_label_pc_14ef:                                ; preds = %dec_label_pc_14d8, %dec_label_pc_14d3
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !103

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_14f1:
  %0 = call i64 @param_tail_call_optimized(i64 ptrtoint (i64* @global_var_3e8 to i64), i64 0), !insn.addr !104
  ret i64 %0, !insn.addr !105

; uselistorder directives
  uselistorder i64 (i64, i64)* @param_tail_call_optimized, { 1, 0 }
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_150a:
  %storemerge.reg2mem = alloca i64, !insn.addr !106
  %0 = trunc i64 %arg1 to i32, !insn.addr !107
  %1 = icmp eq i32 %0, 0, !insn.addr !108
  %2 = icmp slt i32 %0, 0, !insn.addr !108
  %3 = icmp eq i1 %2, false, !insn.addr !109
  %4 = icmp eq i1 %1, false, !insn.addr !109
  %5 = icmp eq i1 %3, %4, !insn.addr !109
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !109
  br i1 %5, label %dec_label_pc_1526, label %dec_label_pc_1538, !insn.addr !109

dec_label_pc_1526:                                ; preds = %dec_label_pc_150a
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !107
  %7 = add nsw i64 %6, 4294967295, !insn.addr !110
  %8 = and i64 %7, 4294967295, !insn.addr !111
  %9 = call i64 @param_non_tail_call(i64 %8), !insn.addr !112
  %10 = add i64 %9, %6, !insn.addr !113
  %11 = and i64 %10, 4294967295, !insn.addr !113
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !113
  br label %dec_label_pc_1538, !insn.addr !113

dec_label_pc_1538:                                ; preds = %dec_label_pc_150a, %dec_label_pc_1526
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !114

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 32, { 0, 2, 1, 5, 3, 4 }
  uselistorder i64 4294967296, { 0, 2, 1, 5, 3, 4 }
  uselistorder label %dec_label_pc_1538, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_153a:
  %0 = call i64 @param_non_tail_call(i64 100), !insn.addr !115
  ret i64 %0, !insn.addr !116

; uselistorder directives
  uselistorder i64 (i64)* @param_non_tail_call, { 1, 0 }
}

define i64 @param_vectorized_loop(i64* %arg1, i32* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_154e:
  %stack_var_-16.0.lcssa.reg2mem = alloca i64, !insn.addr !117
  %stack_var_-16.04.reg2mem = alloca i32, !insn.addr !117
  %indvars.iv.reg2mem = alloca i64, !insn.addr !117
  %indvars.iv8.reg2mem = alloca i64, !insn.addr !117
  %0 = trunc i64 %arg4 to i32, !insn.addr !118
  %1 = icmp sgt i32 %0, 0
  store i64 0, i64* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !119
  br i1 %1, label %dec_label_pc_156e.lr.ph, label %dec_label_pc_15f3, !insn.addr !119

dec_label_pc_156e.lr.ph:                          ; preds = %dec_label_pc_154e
  %2 = ptrtoint i64* %arg3 to i64
  %3 = ptrtoint i64* %arg1 to i64
  %4 = ptrtoint i32* %arg2 to i64, !insn.addr !120
  %wide.trip.count10 = and i64 %arg4, 4294967295
  store i64 0, i64* %indvars.iv8.reg2mem
  br label %dec_label_pc_156e

dec_label_pc_156e:                                ; preds = %dec_label_pc_156e, %dec_label_pc_156e.lr.ph
  %indvars.iv8.reload = load i64, i64* %indvars.iv8.reg2mem
  %5 = mul i64 %indvars.iv8.reload, 4, !insn.addr !121
  %6 = add i64 %5, %3, !insn.addr !122
  %7 = inttoptr i64 %6 to i32*, !insn.addr !123
  %8 = load i32, i32* %7, align 4, !insn.addr !123
  %9 = add i64 %5, %4, !insn.addr !124
  %10 = inttoptr i64 %9 to i32*, !insn.addr !125
  %11 = load i32, i32* %10, align 4, !insn.addr !125
  %12 = add i64 %5, %2, !insn.addr !126
  %13 = add i32 %11, %8, !insn.addr !127
  %14 = inttoptr i64 %12 to i32*, !insn.addr !128
  store i32 %13, i32* %14, align 4, !insn.addr !128
  %indvars.iv.next9 = add nuw nsw i64 %indvars.iv8.reload, 1
  %exitcond11 = icmp eq i64 %indvars.iv.next9, %wide.trip.count10
  store i64 %indvars.iv.next9, i64* %indvars.iv8.reg2mem, !insn.addr !119
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !119
  store i32 0, i32* %stack_var_-16.04.reg2mem, !insn.addr !119
  br i1 %exitcond11, label %dec_label_pc_15ce, label %dec_label_pc_156e, !insn.addr !119

dec_label_pc_15ce:                                ; preds = %dec_label_pc_156e, %dec_label_pc_15ce
  %stack_var_-16.04.reload = load i32, i32* %stack_var_-16.04.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 4, !insn.addr !129
  %16 = add i64 %15, %2, !insn.addr !130
  %17 = inttoptr i64 %16 to i32*, !insn.addr !131
  %18 = load i32, i32* %17, align 4, !insn.addr !131
  %19 = add i32 %18, %stack_var_-16.04.reload, !insn.addr !132
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !133
  store i32 %19, i32* %stack_var_-16.04.reg2mem, !insn.addr !133
  br i1 %exitcond, label %dec_label_pc_15eb.dec_label_pc_15f3_crit_edge, label %dec_label_pc_15ce, !insn.addr !133

dec_label_pc_15eb.dec_label_pc_15f3_crit_edge:    ; preds = %dec_label_pc_15ce
  %phitmp = zext i32 %19 to i64
  store i64 %phitmp, i64* %stack_var_-16.0.lcssa.reg2mem
  br label %dec_label_pc_15f3

dec_label_pc_15f3:                                ; preds = %dec_label_pc_154e, %dec_label_pc_15eb.dec_label_pc_15f3_crit_edge
  %stack_var_-16.0.lcssa.reload = load i64, i64* %stack_var_-16.0.lcssa.reg2mem
  ret i64 %stack_var_-16.0.lcssa.reload, !insn.addr !134

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64* %indvars.iv8.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.04.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-16.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_15f3, { 1, 0 }
  uselistorder label %dec_label_pc_15ce, { 1, 0 }
}

define i64 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_15f8:
  %rax.0.reg2mem = alloca i64, !insn.addr !135
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !136
  store i64 1, i64* %stack_var_-120, align 8, !insn.addr !137
  store i32 8, i32* %stack_var_-88, align 4, !insn.addr !138
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !139
  %1 = call i64 @param_vectorized_loop(i64* nonnull %stack_var_-120, i32* nonnull %stack_var_-88, i64* nonnull %stack_var_-56, i64 8), !insn.addr !140
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !141
  %3 = icmp eq i64 %0, %2, !insn.addr !141
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !142
  br i1 %3, label %dec_label_pc_16d0, label %dec_label_pc_16cb, !insn.addr !142

dec_label_pc_16cb:                                ; preds = %dec_label_pc_15f8
  call void @__stack_chk_fail(), !insn.addr !143
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !143
  br label %dec_label_pc_16d0, !insn.addr !143

dec_label_pc_16d0:                                ; preds = %dec_label_pc_16cb, %dec_label_pc_15f8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !144
}

define i64 @lto_target_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_16d2:
  %0 = mul i64 %arg1, 2, !insn.addr !145
  %1 = add i64 %0, 10, !insn.addr !146
  %2 = and i64 %1, 4294967294, !insn.addr !146
  ret i64 %2, !insn.addr !147
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_16e3:
  %0 = and i64 %arg1, 4294967295, !insn.addr !148
  %1 = call i64 @lto_target_func(i64 %0), !insn.addr !149
  ret i64 %1, !insn.addr !150
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_16fe:
  %0 = call i64 @param_link_time_optimization(i64 5), !insn.addr !151
  ret i64 %0, !insn.addr !152
}

define i64 @div_zero_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_1712:
  store i32 1, i32* bitcast (i64* @global_var_4108 to i32*), align 8, !insn.addr !153
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !154
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !154
}

define i64 @param_division_by_zero(i64 %arg1) local_unnamed_addr {
dec_label_pc_173f:
  %storemerge.reg2mem = alloca i64, !insn.addr !155
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5906 to void (i32)*)), !insn.addr !156
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !157
  %2 = icmp eq i32 %1, 0, !insn.addr !158
  %3 = icmp eq i1 %2, false, !insn.addr !159
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !159
  br i1 %3, label %dec_label_pc_178f, label %dec_label_pc_1779, !insn.addr !159

dec_label_pc_1779:                                ; preds = %dec_label_pc_173f
  %.rhs.trunc = trunc i64 %arg1 to i32
  %4 = udiv i32 10, %.rhs.trunc
  %.zext = zext i32 %4 to i64
  store i64 %.zext, i64* %storemerge.reg2mem, !insn.addr !160
  br label %dec_label_pc_178f, !insn.addr !160

dec_label_pc_178f:                                ; preds = %dec_label_pc_173f, %dec_label_pc_1779
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !161

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_178f, { 1, 0 }
}

define i64 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1791:
  %0 = call i64 @param_division_by_zero(i64 5), !insn.addr !162
  %1 = call i64 @param_division_by_zero(i64 0), !insn.addr !163
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !164
  %3 = add i64 %1, %0, !insn.addr !165
  %4 = and i64 %3, 4294967295, !insn.addr !165
  ret i64 %4, !insn.addr !166

; uselistorder directives
  uselistorder i64 (i64)* @param_division_by_zero, { 1, 0 }
}

define i64 @segv_handler(i64 %arg1) local_unnamed_addr {
dec_label_pc_17d0:
  store i32 1, i32* bitcast (i64* @global_var_41e8 to i32*), align 8, !insn.addr !167
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4120 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !168
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !168

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i64 @param_null_pointer_deref(i32* %arg1) local_unnamed_addr {
dec_label_pc_17fd:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 6096 to void (i32)*)), !insn.addr !169
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_4120 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !170
  %4 = icmp eq i32 %3, 0, !insn.addr !171
  %5 = icmp eq i1 %4, false, !insn.addr !172
  %6 = and i64 %1, 4294967295
  %storemerge = select i1 %5, i64 4294967295, i64 %6
  ret i64 %storemerge, !insn.addr !173

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_184d:
  %rax.0.reg2mem = alloca i64, !insn.addr !174
  %stack_var_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !175
  store i32 42, i32* %stack_var_-28, align 4, !insn.addr !176
  %1 = call i64 @param_null_pointer_deref(i32* nonnull %stack_var_-28), !insn.addr !177
  %2 = call i64 @param_null_pointer_deref(i32* null), !insn.addr !178
  %3 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !179
  %4 = add i64 %2, %1, !insn.addr !180
  %5 = and i64 %4, 4294967295, !insn.addr !180
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !181
  %7 = icmp eq i64 %0, %6, !insn.addr !181
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !182
  br i1 %7, label %dec_label_pc_18b6, label %dec_label_pc_18b1, !insn.addr !182

dec_label_pc_18b1:                                ; preds = %dec_label_pc_184d
  call void @__stack_chk_fail(), !insn.addr !183
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !183
  br label %dec_label_pc_18b6, !insn.addr !183

dec_label_pc_18b6:                                ; preds = %dec_label_pc_18b1, %dec_label_pc_184d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !184

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b8:
  %rax.0.reg2mem = alloca i64, !insn.addr !185
  %indvars.iv.reg2mem = alloca i64, !insn.addr !185
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !186
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !187
  %2 = add i64 %0, -16, !insn.addr !188
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_18e6

dec_label_pc_18e6:                                ; preds = %dec_label_pc_18e6, %dec_label_pc_18b8
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = add i64 %2, %indvars.iv.reload, !insn.addr !188
  %4 = inttoptr i64 %3 to i8*, !insn.addr !188
  store i8 65, i8* %4, align 1, !insn.addr !188
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 17
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !189
  br i1 %exitcond, label %dec_label_pc_18fa, label %dec_label_pc_18e6, !insn.addr !189

dec_label_pc_18fa:                                ; preds = %dec_label_pc_18e6
  %5 = and i64 %arg1, 4294967295
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !190
  %7 = icmp eq i64 %1, %6, !insn.addr !190
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !191
  br i1 %7, label %dec_label_pc_1921, label %dec_label_pc_191c, !insn.addr !191

dec_label_pc_191c:                                ; preds = %dec_label_pc_18fa
  call void @__stack_chk_fail(), !insn.addr !192
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_1921, !insn.addr !192

dec_label_pc_1921:                                ; preds = %dec_label_pc_191c, %dec_label_pc_18fa
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !193

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 0, 1, 5, 6, 2, 3, 4 }
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0, 4 }
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_1923:
  %storemerge.reg2mem = alloca i64, !insn.addr !194
  %indvars.iv.reg2mem = alloca i64, !insn.addr !194
  %0 = and i64 %arg1, 4294967295
  %1 = call i64* @malloc(i32 16), !insn.addr !195
  %2 = ptrtoint i64* %1 to i64, !insn.addr !195
  %3 = icmp eq i64* %1, null, !insn.addr !196
  %4 = icmp eq i1 %3, false, !insn.addr !197
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !197
  store i64 4294967294, i64* %storemerge.reg2mem, !insn.addr !197
  br i1 %4, label %dec_label_pc_1957, label %dec_label_pc_1980, !insn.addr !197

dec_label_pc_1957:                                ; preds = %dec_label_pc_1923, %dec_label_pc_1957
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = add i64 %indvars.iv.reload, %2, !insn.addr !198
  %6 = inttoptr i64 %5 to i8*, !insn.addr !199
  store i8 66, i8* %6, align 1, !insn.addr !199
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !200
  br i1 %exitcond, label %dec_label_pc_1971, label %dec_label_pc_1957, !insn.addr !200

dec_label_pc_1971:                                ; preds = %dec_label_pc_1957
  call void @free(i64* %1), !insn.addr !201
  store i64 %0, i64* %storemerge.reg2mem, !insn.addr !202
  br label %dec_label_pc_1980, !insn.addr !202

dec_label_pc_1980:                                ; preds = %dec_label_pc_1923, %dec_label_pc_1971
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !203

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1980, { 1, 0 }
  uselistorder label %dec_label_pc_1957, { 1, 0 }
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1982:
  %0 = call i64 @param_buffer_overflow_stack(i64 10), !insn.addr !204
  %1 = call i64 @param_buffer_overflow_heap(i64 20), !insn.addr !205
  %2 = add i64 %1, %0, !insn.addr !206
  %3 = and i64 %2, 4294967295, !insn.addr !206
  ret i64 %3, !insn.addr !207

; uselistorder directives
  uselistorder i64 20, { 1, 0 }
  uselistorder i64 10, { 2, 0, 3, 1, 4 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19b2:
  %rax.0.reg2mem = alloca i64, !insn.addr !208
  %0 = trunc i64 %arg1 to i32, !insn.addr !209
  %1 = trunc i64 %arg2 to i32
  %2 = add i32 %1, %0, !insn.addr !210
  %3 = icmp slt i32 %0, 1, !insn.addr !211
  %4 = icmp slt i32 %1, 1, !insn.addr !212
  %or.cond6 = or i1 %3, %4
  %5 = icmp slt i32 %2, 0, !insn.addr !213
  %6 = icmp eq i1 %5, false, !insn.addr !214
  %or.cond8 = or i1 %or.cond6, %6
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !211
  br i1 %or.cond8, label %dec_label_pc_19fb, label %dec_label_pc_1a17, !insn.addr !211

dec_label_pc_19fb:                                ; preds = %dec_label_pc_19b2
  %7 = icmp slt i32 %0, 0, !insn.addr !215
  %8 = icmp eq i1 %7, false, !insn.addr !216
  br i1 %8, label %dec_label_pc_1a14, label %dec_label_pc_1a01, !insn.addr !216

dec_label_pc_1a01:                                ; preds = %dec_label_pc_19fb
  %9 = icmp slt i32 %1, 0, !insn.addr !217
  %10 = icmp eq i1 %9, false, !insn.addr !218
  %11 = icmp slt i32 %2, 1, !insn.addr !219
  %or.cond = or i1 %10, %11
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !218
  br i1 %or.cond, label %dec_label_pc_1a14, label %dec_label_pc_1a17, !insn.addr !218

dec_label_pc_1a14:                                ; preds = %dec_label_pc_1a01, %dec_label_pc_19fb
  %12 = zext i32 %2 to i64, !insn.addr !220
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_1a17, !insn.addr !220

dec_label_pc_1a17:                                ; preds = %dec_label_pc_1a01, %dec_label_pc_19b2, %dec_label_pc_1a14
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !221

; uselistorder directives
  uselistorder i32 %2, { 2, 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 false, { 5, 6, 2, 7, 8, 9, 10, 3, 11, 4, 12, 0, 13, 1, 14 }
  uselistorder i32 0, { 6, 7, 3, 8, 9, 0, 1, 10, 11, 12, 13, 14, 2, 4, 5 }
  uselistorder label %dec_label_pc_1a17, { 2, 0, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1a19:
  %0 = call i64 @param_integer_overflow(i64 1000000000, i64 1000000000), !insn.addr !222
  %1 = call i64 @param_integer_overflow(i64 4294967295, i64 1), !insn.addr !223
  %2 = add i64 %1, %0, !insn.addr !224
  %3 = and i64 %2, 4294967295, !insn.addr !224
  ret i64 %3, !insn.addr !225

; uselistorder directives
  uselistorder i64 1, { 5, 0, 1, 4, 3, 2, 6 }
  uselistorder i64 (i64, i64)* @param_integer_overflow, { 1, 0 }
  uselistorder i64 1000000000, { 1, 0 }
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a53:
  %0 = mul i64 %arg1, 2, !insn.addr !226
  %1 = and i64 %0, 4294967294, !insn.addr !226
  ret i64 %1, !insn.addr !227

; uselistorder directives
  uselistorder i64 4294967294, { 2, 0, 1, 3, 4 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1a6c:
  %0 = call i64 @param_undefined_behavior(i64 5), !insn.addr !228
  %1 = and i64 %0, 4294967295, !insn.addr !229
  ret i64 %1, !insn.addr !230

; uselistorder directives
  uselistorder i64 4294967295, { 7, 8, 23, 0, 9, 4, 5, 10, 6, 2, 11, 1, 12, 3, 13, 14, 15, 16, 18, 17, 19, 21, 20, 22 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1a8a:
  ret i64 47, !insn.addr !231
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1b0a:
  %0 = call i64 @param_implementation_defined(), !insn.addr !232
  ret i64 %0, !insn.addr !233
}

define i64 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1b1e:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2010 to i8*)), !insn.addr !234
  %1 = call i64 @call_fake_branch(), !insn.addr !235
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_203d to i8*)), !insn.addr !236
  %3 = call i64 @call_opaque_predicate(), !insn.addr !237
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2059 to i8*)), !insn.addr !238
  %5 = call i64 @call_instruction_substitution(), !insn.addr !239
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2075 to i8*)), !insn.addr !240
  %7 = call i64 @call_string_encryption(), !insn.addr !241
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !242
  %9 = call i64 @call_tail_call_optimized(), !insn.addr !243
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b0 to i8*)), !insn.addr !244
  %11 = call i64 @call_non_tail_call(), !insn.addr !245
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20e0 to i8*)), !insn.addr !246
  %13 = call i64 @call_vectorized_loop(), !insn.addr !247
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2108 to i8*)), !insn.addr !248
  %15 = call i64 @call_link_time_optimization(), !insn.addr !249
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2130 to i8*)), !insn.addr !250
  %17 = call i64 @call_division_by_zero(), !insn.addr !251
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2150 to i8*)), !insn.addr !252
  %19 = call i64 @call_null_pointer_deref(), !insn.addr !253
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_216c to i8*)), !insn.addr !254
  %21 = call i64 @call_buffer_overflow(), !insn.addr !255
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2189 to i8*)), !insn.addr !256
  %23 = call i64 @call_integer_overflow(), !insn.addr !257
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !258
  %25 = call i64 @call_undefined_behavior(), !insn.addr !259
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21d9 to i8*)), !insn.addr !260
  %27 = call i64 @call_implementation_defined(), !insn.addr !261
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21f8 to i8*)), !insn.addr !262
  %29 = sext i32 %28 to i64, !insn.addr !262
  ret i64 %29, !insn.addr !263

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1cf8:
  %0 = call i64 @test_obf_opt_edge(), !insn.addr !264
  ret i64 0, !insn.addr !265

; uselistorder directives
  uselistorder i64 0, { 7, 0, 1, 39, 44, 3, 4, 2, 5, 40, 45, 8, 6, 46, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41, 42, 43 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1d14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !266

; uselistorder directives
  uselistorder i32 1, { 2, 28, 27, 29, 3, 5, 4, 36, 7, 6, 37, 8, 1, 30, 42, 9, 31, 43, 40, 39, 38, 10, 14, 13, 12, 11, 15, 16, 35, 17, 20, 19, 18, 33, 34, 32, 25, 24, 23, 22, 21, 0, 41, 26 }
}

declare void @free(i64*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

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
!32 = !{i64 4741}
!33 = !{i64 4745}
!34 = !{i64 4759}
!35 = !{i64 4765}
!36 = !{i64 4766}
!37 = !{i64 4774}
!38 = !{i64 4833}
!39 = !{i64 4860}
!40 = !{i64 4864}
!41 = !{i64 4847}
!42 = !{i64 4848}
!43 = !{i64 4857}
!44 = !{i64 4780}
!45 = !{i64 4788}
!46 = !{i64 4790}
!47 = !{i64 4792}
!48 = !{i64 4807}
!49 = !{i64 4810}
!50 = !{i64 4866}
!51 = !{i64 4890}
!52 = !{i64 4910}
!53 = !{i64 4912}
!54 = !{i64 4921}
!55 = !{i64 4923}
!56 = !{i64 4927}
!57 = !{i64 4941}
!58 = !{i64 4947}
!59 = !{i64 4956}
!60 = !{i64 4997}
!61 = !{i64 5005}
!62 = !{i64 5034}
!63 = !{i64 5039}
!64 = !{i64 5042}
!65 = !{i64 5056}
!66 = !{i64 5062}
!67 = !{i64 5063}
!68 = !{i64 5110}
!69 = !{i64 5119}
!70 = !{i64 5127}
!71 = !{i64 5130}
!72 = !{i64 5170}
!73 = !{i64 5173}
!74 = !{i64 5175}
!75 = !{i64 5150}
!76 = !{i64 5159}
!77 = !{i64 5161}
!78 = !{i64 5182}
!79 = !{i64 5183}
!80 = !{i64 5195}
!81 = !{i64 5237}
!82 = !{i64 5249}
!83 = !{i64 5256}
!84 = !{i64 5263}
!85 = !{i64 5269}
!86 = !{i64 5278}
!87 = !{i64 5280}
!88 = !{i64 5286}
!89 = !{i64 5300}
!90 = !{i64 5306}
!91 = !{i64 5307}
!92 = !{i64 5319}
!93 = !{i64 5322}
!94 = !{i64 5325}
!95 = !{i64 5329}
!96 = !{i64 5331}
!97 = !{i64 5334}
!98 = !{i64 5342}
!99 = !{i64 5347}
!100 = !{i64 5350}
!101 = !{i64 5352}
!102 = !{i64 5354}
!103 = !{i64 5360}
!104 = !{i64 5379}
!105 = !{i64 5385}
!106 = !{i64 5386}
!107 = !{i64 5398}
!108 = !{i64 5401}
!109 = !{i64 5405}
!110 = !{i64 5417}
!111 = !{i64 5420}
!112 = !{i64 5422}
!113 = !{i64 5430}
!114 = !{i64 5433}
!115 = !{i64 5447}
!116 = !{i64 5453}
!117 = !{i64 5454}
!118 = !{i64 5561}
!119 = !{i64 5564}
!120 = !{i64 5521}
!121 = !{i64 5491}
!122 = !{i64 5503}
!123 = !{i64 5506}
!124 = !{i64 5525}
!125 = !{i64 5528}
!126 = !{i64 5547}
!127 = !{i64 5550}
!128 = !{i64 5552}
!129 = !{i64 5587}
!130 = !{i64 5599}
!131 = !{i64 5602}
!132 = !{i64 5604}
!133 = !{i64 5617}
!134 = !{i64 5623}
!135 = !{i64 5624}
!136 = !{i64 5636}
!137 = !{i64 5651}
!138 = !{i64 5707}
!139 = !{i64 5763}
!140 = !{i64 5815}
!141 = !{i64 5824}
!142 = !{i64 5833}
!143 = !{i64 5835}
!144 = !{i64 5841}
!145 = !{i64 5852}
!146 = !{i64 5855}
!147 = !{i64 5858}
!148 = !{i64 5877}
!149 = !{i64 5879}
!150 = !{i64 5885}
!151 = !{i64 5899}
!152 = !{i64 5905}
!153 = !{i64 5921}
!154 = !{i64 5946}
!155 = !{i64 5951}
!156 = !{i64 5981}
!157 = !{i64 5996}
!158 = !{i64 6005}
!159 = !{i64 6007}
!160 = !{i64 6024}
!161 = !{i64 6032}
!162 = !{i64 6050}
!163 = !{i64 6063}
!164 = !{i64 6081}
!165 = !{i64 6092}
!166 = !{i64 6095}
!167 = !{i64 6111}
!168 = !{i64 6136}
!169 = !{i64 6172}
!170 = !{i64 6187}
!171 = !{i64 6196}
!172 = !{i64 6198}
!173 = !{i64 6220}
!174 = !{i64 6221}
!175 = !{i64 6233}
!176 = !{i64 6248}
!177 = !{i64 6262}
!178 = !{i64 6275}
!179 = !{i64 6293}
!180 = !{i64 6304}
!181 = !{i64 6310}
!182 = !{i64 6319}
!183 = !{i64 6321}
!184 = !{i64 6327}
!185 = !{i64 6328}
!186 = !{i64 6333}
!187 = !{i64 6343}
!188 = !{i64 6379}
!189 = !{i64 6392}
!190 = !{i64 6417}
!191 = !{i64 6426}
!192 = !{i64 6428}
!193 = !{i64 6434}
!194 = !{i64 6435}
!195 = !{i64 6455}
!196 = !{i64 6464}
!197 = !{i64 6469}
!198 = !{i64 6497}
!199 = !{i64 6500}
!200 = !{i64 6511}
!201 = !{i64 6520}
!202 = !{i64 6525}
!203 = !{i64 6529}
!204 = !{i64 6547}
!205 = !{i64 6560}
!206 = !{i64 6574}
!207 = !{i64 6577}
!208 = !{i64 6578}
!209 = !{i64 6586}
!210 = !{i64 6598}
!211 = !{i64 6630}
!212 = !{i64 6636}
!213 = !{i64 6638}
!214 = !{i64 6642}
!215 = !{i64 6651}
!216 = !{i64 6655}
!217 = !{i64 6657}
!218 = !{i64 6661}
!219 = !{i64 6667}
!220 = !{i64 6676}
!221 = !{i64 6680}
!222 = !{i64 6703}
!223 = !{i64 6721}
!224 = !{i64 6735}
!225 = !{i64 6738}
!226 = !{i64 6760}
!227 = !{i64 6763}
!228 = !{i64 6781}
!229 = !{i64 6789}
!230 = !{i64 6793}
!231 = !{i64 6921}
!232 = !{i64 6935}
!233 = !{i64 6941}
!234 = !{i64 6960}
!235 = !{i64 6970}
!236 = !{i64 6992}
!237 = !{i64 7002}
!238 = !{i64 7024}
!239 = !{i64 7034}
!240 = !{i64 7056}
!241 = !{i64 7066}
!242 = !{i64 7088}
!243 = !{i64 7098}
!244 = !{i64 7120}
!245 = !{i64 7130}
!246 = !{i64 7152}
!247 = !{i64 7162}
!248 = !{i64 7184}
!249 = !{i64 7194}
!250 = !{i64 7216}
!251 = !{i64 7226}
!252 = !{i64 7248}
!253 = !{i64 7258}
!254 = !{i64 7280}
!255 = !{i64 7290}
!256 = !{i64 7312}
!257 = !{i64 7322}
!258 = !{i64 7344}
!259 = !{i64 7354}
!260 = !{i64 7376}
!261 = !{i64 7386}
!262 = !{i64 7408}
!263 = !{i64 7415}
!264 = !{i64 7429}
!265 = !{i64 7440}
!266 = !{i64 7456}
