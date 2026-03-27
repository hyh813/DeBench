source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_2008 = local_unnamed_addr constant [5 x i8] c"test\00"
@div_zero_caught = local_unnamed_addr global i32 0
@jmp_buffer = global i64 0
@segv_caught = local_unnamed_addr global i32 0
@segv_buffer = global i64 0
@0 = external global i32
@global_var_4020 = local_unnamed_addr global i8 0
@1 = internal constant [5 x i8] c"\1A+<M\00"
@global_var_4010 = global i8* getelementptr inbounds ([5 x i8], [5 x i8]* @1, i64 0, i64 0)
@global_var_3e8 = global i32 0
@2 = internal constant [45 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\B7\B7\E6\B7\86\E3\80\81\E4\BC\98\E5\8C\96\E4\B8\8E\E8\BE\B9\E7\95\8C\E6\83\85\E5\86\B5 ===\00"
@global_var_2010 = constant i8* getelementptr inbounds ([45 x i8], [45 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"OBF-L4-02: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_203d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"OBF-L4-03: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2059 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [29 x i8] c"OBF-L4-04: %d (\E6\9C\9F\E6\9C\9B: 225)\0A\00"
@global_var_2075 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @5, i64 0, i64 0)
@6 = internal constant [28 x i8] c"OBF-L4-05: %d (\E6\9C\9F\E6\9C\9B: 68)\0A\00"
@global_var_2092 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @6, i64 0, i64 0)
@7 = internal constant [42 x i8] c"OPT-L4-01 \E5\B0\BE\E9\80\92\E5\BD\92: %d (\E6\9C\9F\E6\9C\9B: 500500)\0A\00"
@global_var_20b0 = constant i8* getelementptr inbounds ([42 x i8], [42 x i8]* @7, i64 0, i64 0)
@8 = internal constant [37 x i8] c"OPT-L4-01 \E9\9D\9E\E5\B0\BE: %d (\E6\9C\9F\E6\9C\9B: 5050)\0A\00"
@global_var_20e0 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @8, i64 0, i64 0)
@9 = internal constant [38 x i8] c"OPT-L4-02 \E5\90\91\E9\87\8F\E5\8C\96: %d (\E6\9C\9F\E6\9C\9B: 72)\0A\00"
@global_var_2108 = constant i8* getelementptr inbounds ([38 x i8], [38 x i8]* @9, i64 0, i64 0)
@10 = internal constant [32 x i8] c"OPT-L5-01 LTO: %d (\E6\9C\9F\E6\9C\9B: 20)\0A\00"
@global_var_2130 = constant i8* getelementptr inbounds ([32 x i8], [32 x i8]* @10, i64 0, i64 0)
@11 = internal constant [28 x i8] c"EDGE-L3-01: %d (\E6\9C\9F\E6\9C\9B: 1)\0A\00"
@global_var_2150 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"EDGE-L3-02: %d (\E6\9C\9F\E6\9C\9B: 41)\0A\00"
@global_var_216c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [29 x i8] c"EDGE-L3-03: %d (\E6\9C\9F\E6\9C\9B: 19)\0A\00"
@global_var_2189 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @13, i64 0, i64 0)
@14 = internal constant [49 x i8] c"EDGE-L3-04: %d (\E6\9C\9F\E6\9C\9B: \E6\BA\A2\E5\87\BA\E6\A3\80\E6\B5\8B2000000000)\0A\00"
@global_var_21a8 = constant i8* getelementptr inbounds ([49 x i8], [49 x i8]* @14, i64 0, i64 0)
@15 = internal constant [29 x i8] c"EDGE-L4-01: %d (\E6\9C\9F\E6\9C\9B: 10)\0A\00"
@global_var_21d9 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @15, i64 0, i64 0)
@16 = internal constant [39 x i8] c"EDGE-L4-02: %d (\E6\9C\9F\E6\9C\9B: \E5\B9\B3\E5\8F\B0\E7\9B\B8\E5\85\B3)\0A\00"
@global_var_21f8 = constant i8* getelementptr inbounds ([39 x i8], [39 x i8]* @16, i64 0, i64 0)

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

define i32 @param_fake_branch(i32 %x) local_unnamed_addr {
dec_label_pc_1269:
  ret i32 %x, !insn.addr !32
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_128a:
  %0 = call i32 @param_fake_branch(i32 10), !insn.addr !33
  ret i32 %0, !insn.addr !34
}

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_129e:
  %p3_-32.0.lcssa.reg2mem = alloca i32, !insn.addr !35
  %p3_-32.04.reg2mem = alloca i32, !insn.addr !35
  %p2_-28.05.reg2mem = alloca i32, !insn.addr !35
  %0 = add i32 %x, 1, !insn.addr !36
  %1 = icmp eq i32 %0, 0, !insn.addr !37
  %2 = icmp eq i1 %1, false, !insn.addr !38
  store i32 %0, i32* %p2_-28.05.reg2mem, !insn.addr !38
  store i32 %x, i32* %p3_-32.04.reg2mem, !insn.addr !38
  store i32 %x, i32* %p3_-32.0.lcssa.reg2mem, !insn.addr !38
  br i1 %2, label %dec_label_pc_12e6, label %dec_label_pc_1302, !insn.addr !38

dec_label_pc_12e6:                                ; preds = %dec_label_pc_129e, %dec_label_pc_12e6
  %p3_-32.04.reload = load i32, i32* %p3_-32.04.reg2mem
  %p2_-28.05.reload = load i32, i32* %p2_-28.05.reg2mem
  %3 = ashr i32 %p3_-32.04.reload, 31, !insn.addr !39
  %4 = zext i32 %p3_-32.04.reload to i64, !insn.addr !40
  %5 = zext i32 %3 to i64, !insn.addr !40
  %6 = mul i64 %5, 4294967296, !insn.addr !40
  %7 = or i64 %6, %4, !insn.addr !40
  %8 = zext i32 %p2_-28.05.reload to i64, !insn.addr !40
  %9 = srem i64 %7, %8, !insn.addr !40
  %10 = trunc i64 %9 to i32, !insn.addr !40
  %11 = icmp eq i32 %10, 0, !insn.addr !37
  %12 = icmp eq i1 %11, false, !insn.addr !38
  store i32 %10, i32* %p2_-28.05.reg2mem, !insn.addr !38
  store i32 %p2_-28.05.reload, i32* %p3_-32.04.reg2mem, !insn.addr !38
  store i32 %p2_-28.05.reload, i32* %p3_-32.0.lcssa.reg2mem, !insn.addr !38
  br i1 %12, label %dec_label_pc_12e6, label %dec_label_pc_1302, !insn.addr !38

dec_label_pc_1302:                                ; preds = %dec_label_pc_12e6, %dec_label_pc_129e
  %13 = add i32 %x, 2
  %14 = mul i32 %13, %x, !insn.addr !41
  %15 = add i32 %14, 1, !insn.addr !42
  %16 = mul i32 %0, %0, !insn.addr !43
  %17 = icmp eq i32 %15, %16, !insn.addr !44
  %p3_-32.0.lcssa.reload = load i32, i32* %p3_-32.0.lcssa.reg2mem
  %18 = icmp eq i32 %p3_-32.0.lcssa.reload, 1, !insn.addr !45
  %19 = icmp eq i1 %17, %18
  %20 = mul i32 %x, 3
  %21 = add i32 %20, 20
  %22 = mul i32 %x, 2
  %23 = add i32 %22, 10
  %storemerge.in = select i1 %19, i32 %23, i32 %21
  ret i32 %storemerge.in, !insn.addr !46

; uselistorder directives
  uselistorder i32 %p3_-32.04.reload, { 1, 0 }
  uselistorder i32 %0, { 3, 2, 0, 1 }
  uselistorder i32* %p2_-28.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %p3_-32.04.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 2, 4, 3, 6, 0, 1, 5 }
  uselistorder label %dec_label_pc_12e6, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !47
  ret i32 %0, !insn.addr !48
}

define i32 @param_instruction_substitution(i32 %x) local_unnamed_addr {
dec_label_pc_1354:
  %0 = udiv i32 %x, 2, !insn.addr !49
  %1 = urem i32 %x, 16, !insn.addr !50
  %reass.mul = mul i32 %x, 21
  %2 = add nuw i32 %1, %0, !insn.addr !51
  %3 = add i32 %2, %reass.mul, !insn.addr !52
  ret i32 %3, !insn.addr !53

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_13b3:
  %0 = call i32 @param_instruction_substitution(i32 10), !insn.addr !54
  ret i32 %0, !insn.addr !55
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i64 %len, i8 %key) local_unnamed_addr {
dec_label_pc_13c7:
  %storemerge3.reg2mem = alloca i8*, !insn.addr !56
  %.reg2mem = alloca i8, !insn.addr !56
  %0 = ptrtoint i8* %buffer to i64
  %1 = trunc i64 %len to i32, !insn.addr !57
  %2 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %1), !insn.addr !57
  %3 = add i64 %len, -1, !insn.addr !58
  %4 = add i64 %3, %0, !insn.addr !59
  %5 = inttoptr i64 %4 to i8*, !insn.addr !60
  store i8 0, i8* %5, align 1, !insn.addr !60
  %6 = load i8, i8* %buffer, align 1, !insn.addr !61
  %7 = icmp eq i8 %6, 0, !insn.addr !62
  %8 = icmp eq i1 %7, false, !insn.addr !63
  store i8 %6, i8* %.reg2mem, !insn.addr !63
  store i8* %buffer, i8** %storemerge3.reg2mem, !insn.addr !63
  br i1 %8, label %dec_label_pc_1417, label %dec_label_pc_1439, !insn.addr !63

dec_label_pc_1417:                                ; preds = %dec_label_pc_13c7, %dec_label_pc_1417
  %storemerge3.reload = load i8*, i8** %storemerge3.reg2mem
  %.reload = load i8, i8* %.reg2mem
  %9 = xor i8 %.reload, %key, !insn.addr !64
  store i8 %9, i8* %storemerge3.reload, align 1, !insn.addr !65
  %10 = ptrtoint i8* %storemerge3.reload to i64, !insn.addr !66
  %11 = add i64 %10, 1, !insn.addr !66
  %12 = inttoptr i64 %11 to i8*, !insn.addr !66
  %13 = load i8, i8* %12, align 1, !insn.addr !61
  %14 = icmp eq i8 %13, 0, !insn.addr !62
  %15 = icmp eq i1 %14, false, !insn.addr !63
  store i8 %13, i8* %.reg2mem, !insn.addr !63
  store i8* %12, i8** %storemerge3.reg2mem, !insn.addr !63
  br i1 %15, label %dec_label_pc_1417, label %dec_label_pc_1439, !insn.addr !63

dec_label_pc_1439:                                ; preds = %dec_label_pc_1417, %dec_label_pc_13c7
  ret i8* %buffer, !insn.addr !67

; uselistorder directives
  uselistorder i8* %storemerge3.reload, { 1, 0 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i8* %buffer, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_1417, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_143f:
  %rax.0.reg2mem = alloca i32, !insn.addr !68
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !69
  %1 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !70
  %2 = call i8* @decrypt_string(i8* bitcast (i8** @global_var_4010 to i8*), i8* nonnull %1, i64 32, i8 90), !insn.addr !70
  %3 = call i32 @strlen(i8* nonnull %1), !insn.addr !71
  %4 = load i32, i32* %stack_var_-56, align 4, !insn.addr !72
  %sext = mul i32 %4, 16777216
  %5 = ashr exact i32 %sext, 24, !insn.addr !73
  %6 = add i32 %5, %3, !insn.addr !73
  %7 = call i64 @__readfsqword(i64 40), !insn.addr !74
  %8 = icmp eq i64 %0, %7, !insn.addr !74
  store i32 %6, i32* %rax.0.reg2mem, !insn.addr !75
  br i1 %8, label %dec_label_pc_14a5, label %dec_label_pc_14a0, !insn.addr !75

dec_label_pc_14a0:                                ; preds = %dec_label_pc_143f
  call void @__stack_chk_fail(), !insn.addr !76
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_14a5, !insn.addr !76

dec_label_pc_14a5:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_143f
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !77
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_14a7:
  %0 = call i32 @param_string_encryption(), !insn.addr !78
  ret i32 %0, !insn.addr !79
}

define i32 @param_tail_call_optimized(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_14bb:
  %storemerge.reg2mem = alloca i32, !insn.addr !80
  %0 = icmp eq i32 %n, 0, !insn.addr !81
  %1 = icmp slt i32 %n, 0, !insn.addr !81
  %2 = icmp eq i1 %1, false, !insn.addr !82
  %3 = icmp eq i1 %0, false, !insn.addr !82
  %4 = icmp eq i1 %2, %3, !insn.addr !82
  store i32 %acc, i32* %storemerge.reg2mem, !insn.addr !82
  br i1 %4, label %dec_label_pc_14d8, label %dec_label_pc_14ef, !insn.addr !82

dec_label_pc_14d8:                                ; preds = %dec_label_pc_14bb
  %5 = add i32 %acc, %n, !insn.addr !83
  %6 = add i32 %n, -1, !insn.addr !84
  %7 = call i32 @param_tail_call_optimized(i32 %6, i32 %5), !insn.addr !85
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !85
  br label %dec_label_pc_14ef, !insn.addr !85

dec_label_pc_14ef:                                ; preds = %dec_label_pc_14bb, %dec_label_pc_14d8
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !86

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %acc, { 1, 0 }
  uselistorder i32 %n, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_14ef, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_14f1:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !87
  ret i32 %0, !insn.addr !88

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_150a:
  %storemerge.reg2mem = alloca i32, !insn.addr !89
  %0 = icmp eq i32 %n, 0, !insn.addr !90
  %1 = icmp slt i32 %n, 0, !insn.addr !90
  %2 = icmp eq i1 %1, false, !insn.addr !91
  %3 = icmp eq i1 %0, false, !insn.addr !91
  %4 = icmp eq i1 %2, %3, !insn.addr !91
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !91
  br i1 %4, label %dec_label_pc_1526, label %dec_label_pc_1538, !insn.addr !91

dec_label_pc_1526:                                ; preds = %dec_label_pc_150a
  %5 = add i32 %n, -1, !insn.addr !92
  %6 = call i32 @param_non_tail_call(i32 %5), !insn.addr !93
  %7 = add i32 %6, %n, !insn.addr !94
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !94
  br label %dec_label_pc_1538, !insn.addr !94

dec_label_pc_1538:                                ; preds = %dec_label_pc_150a, %dec_label_pc_1526
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !95

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %n, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_1538, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_153a:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !96
  ret i32 %0, !insn.addr !97

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_154e:
  %stack_var_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !98
  %stack_var_-16.04.reg2mem = alloca i32, !insn.addr !98
  %indvars.iv.reg2mem = alloca i64, !insn.addr !98
  %indvars.iv7.reg2mem = alloca i64, !insn.addr !98
  %0 = icmp sgt i32 %n, 0
  store i32 0, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !99
  br i1 %0, label %dec_label_pc_156e.lr.ph, label %dec_label_pc_15f3, !insn.addr !99

dec_label_pc_156e.lr.ph:                          ; preds = %dec_label_pc_154e
  %1 = ptrtoint i32* %a to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !100
  %3 = ptrtoint i32* %b to i64, !insn.addr !101
  %4 = ptrtoint i32* %c to i64, !insn.addr !102
  %wide.trip.count9 = zext i32 %n to i64
  store i64 0, i64* %indvars.iv7.reg2mem
  br label %dec_label_pc_156e

dec_label_pc_156e:                                ; preds = %dec_label_pc_156e, %dec_label_pc_156e.lr.ph
  %indvars.iv7.reload = load i64, i64* %indvars.iv7.reg2mem
  %5 = mul i64 %indvars.iv7.reload, 4, !insn.addr !103
  %6 = add nsw i64 %5, %2, !insn.addr !104
  %7 = inttoptr i64 %6 to i32*, !insn.addr !105
  %8 = load i32, i32* %7, align 4, !insn.addr !105
  %9 = add i64 %5, %3, !insn.addr !106
  %10 = inttoptr i64 %9 to i32*, !insn.addr !107
  %11 = load i32, i32* %10, align 4, !insn.addr !107
  %12 = add i64 %5, %4, !insn.addr !108
  %13 = add i32 %11, %8, !insn.addr !109
  %14 = inttoptr i64 %12 to i32*, !insn.addr !110
  store i32 %13, i32* %14, align 4, !insn.addr !110
  %indvars.iv.next8 = add nuw nsw i64 %indvars.iv7.reload, 1
  %exitcond10 = icmp eq i64 %indvars.iv.next8, %wide.trip.count9
  store i64 %indvars.iv.next8, i64* %indvars.iv7.reg2mem, !insn.addr !99
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !99
  store i32 0, i32* %stack_var_-16.04.reg2mem, !insn.addr !99
  br i1 %exitcond10, label %dec_label_pc_15ce, label %dec_label_pc_156e, !insn.addr !99

dec_label_pc_15ce:                                ; preds = %dec_label_pc_156e, %dec_label_pc_15ce
  %stack_var_-16.04.reload = load i32, i32* %stack_var_-16.04.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 4, !insn.addr !111
  %16 = add i64 %15, %4, !insn.addr !112
  %17 = inttoptr i64 %16 to i32*, !insn.addr !113
  %18 = load i32, i32* %17, align 4, !insn.addr !113
  %19 = add i32 %18, %stack_var_-16.04.reload, !insn.addr !114
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count9
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !115
  store i32 %19, i32* %stack_var_-16.04.reg2mem, !insn.addr !115
  store i32 %19, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !115
  br i1 %exitcond, label %dec_label_pc_15f3, label %dec_label_pc_15ce, !insn.addr !115

dec_label_pc_15f3:                                ; preds = %dec_label_pc_15ce, %dec_label_pc_154e
  %stack_var_-16.0.lcssa.reload = load i32, i32* %stack_var_-16.0.lcssa.reg2mem
  ret i32 %stack_var_-16.0.lcssa.reload, !insn.addr !116

; uselistorder directives
  uselistorder i64 %5, { 2, 1, 0 }
  uselistorder i64* %indvars.iv7.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.04.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_15ce, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_15f8:
  %rax.0.reg2mem = alloca i32, !insn.addr !117
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i32, align 4
  %stack_var_-120 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !118
  store i64 1, i64* %stack_var_-120, align 8, !insn.addr !119
  store i32 8, i32* %stack_var_-88, align 4, !insn.addr !120
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !121
  %1 = bitcast i64* %stack_var_-120 to i32*, !insn.addr !122
  %2 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !122
  %3 = call i32 @param_vectorized_loop(i32* nonnull %1, i32* nonnull %stack_var_-88, i32* nonnull %2, i32 8), !insn.addr !122
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !123
  %5 = icmp eq i64 %0, %4, !insn.addr !123
  store i32 %3, i32* %rax.0.reg2mem, !insn.addr !124
  br i1 %5, label %dec_label_pc_16d0, label %dec_label_pc_16cb, !insn.addr !124

dec_label_pc_16cb:                                ; preds = %dec_label_pc_15f8
  call void @__stack_chk_fail(), !insn.addr !125
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !125
  br label %dec_label_pc_16d0, !insn.addr !125

dec_label_pc_16d0:                                ; preds = %dec_label_pc_16cb, %dec_label_pc_15f8
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !126
}

define i32 @lto_target_func(i32 %x) local_unnamed_addr {
dec_label_pc_16d2:
  %0 = mul i32 %x, 2, !insn.addr !127
  %1 = add i32 %0, 10, !insn.addr !128
  ret i32 %1, !insn.addr !129
}

define i32 @param_link_time_optimization(i32 %x) local_unnamed_addr {
dec_label_pc_16e3:
  %0 = call i32 @lto_target_func(i32 %x), !insn.addr !130
  ret i32 %0, !insn.addr !131
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_16fe:
  %0 = call i32 @param_link_time_optimization(i32 5), !insn.addr !132
  ret i32 %0, !insn.addr !133
}

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1712:
  store i32 1, i32* @div_zero_caught, align 4, !insn.addr !134
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !135
  ret void, !insn.addr !135
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_173f:
  %storemerge.reg2mem = alloca i32, !insn.addr !136
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 5906 to void (i32)*)), !insn.addr !137
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !138
  %2 = icmp eq i32 %1, 0, !insn.addr !139
  %3 = icmp eq i1 %2, false, !insn.addr !140
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !140
  br i1 %3, label %dec_label_pc_178f, label %dec_label_pc_1779, !insn.addr !140

dec_label_pc_1779:                                ; preds = %dec_label_pc_173f
  %4 = udiv i32 10, %x
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !141
  br label %dec_label_pc_178f, !insn.addr !141

dec_label_pc_178f:                                ; preds = %dec_label_pc_173f, %dec_label_pc_1779
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !142

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_178f, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1791:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !143
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !144
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !145
  %3 = add i32 %1, %0, !insn.addr !146
  ret i32 %3, !insn.addr !147

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_17d0:
  store i32 1, i32* @segv_caught, align 4, !insn.addr !148
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !149
  ret void, !insn.addr !149

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_17fd:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 6096 to void (i32)*)), !insn.addr !150
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !151
  %4 = icmp eq i32 %3, 0, !insn.addr !152
  %5 = icmp eq i1 %4, false, !insn.addr !153
  %6 = trunc i64 %1 to i32
  %storemerge = select i1 %5, i32 -1, i32 %6
  ret i32 %storemerge, !insn.addr !154

; uselistorder directives
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_184d:
  %rax.0.reg2mem = alloca i32, !insn.addr !155
  %r2_-28 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !156
  store i32 42, i32* %r2_-28, align 4, !insn.addr !157
  %1 = call i32 @param_null_pointer_deref(i32* nonnull %r2_-28), !insn.addr !158
  %2 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !159
  %3 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !160
  %4 = add i32 %2, %1, !insn.addr !161
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !162
  %6 = icmp eq i64 %0, %5, !insn.addr !162
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !163
  br i1 %6, label %dec_label_pc_18b6, label %dec_label_pc_18b1, !insn.addr !163

dec_label_pc_18b1:                                ; preds = %dec_label_pc_184d
  call void @__stack_chk_fail(), !insn.addr !164
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_18b6, !insn.addr !164

dec_label_pc_18b6:                                ; preds = %dec_label_pc_18b1, %dec_label_pc_184d
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !165

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %x) local_unnamed_addr {
dec_label_pc_18b8:
  %rax.0.reg2mem = alloca i32, !insn.addr !166
  %.reg2mem = alloca i32, !insn.addr !166
  %buffer_-32 = alloca [8 x i8], align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !167
  store [8 x i8] [i8 0, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef, i8 undef], [8 x i8]* %buffer_-32, align 4
  %1 = bitcast [8 x i8]* %buffer_-32 to i32*, !insn.addr !168
  %2 = load i32, i32* %1, align 4, !insn.addr !168
  %3 = icmp slt i32 %2, 17, !insn.addr !169
  br i1 %3, label %dec_label_pc_18e6.lr.ph, label %dec_label_pc_18fa, !insn.addr !169

dec_label_pc_18e6.lr.ph:                          ; preds = %dec_label_pc_18b8
  %4 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !170
  %5 = add i64 %4, -16, !insn.addr !171
  store i32 %2, i32* %.reg2mem
  br label %dec_label_pc_18e6

dec_label_pc_18e6:                                ; preds = %dec_label_pc_18e6.lr.ph, %dec_label_pc_18e6
  %.reload = load i32, i32* %.reg2mem
  %6 = sext i32 %.reload to i64, !insn.addr !172
  %7 = add i64 %5, %6, !insn.addr !171
  %8 = inttoptr i64 %7 to i8*, !insn.addr !171
  store i8 65, i8* %8, align 1, !insn.addr !171
  %9 = load i32, i32* %1, align 4, !insn.addr !173
  %10 = trunc i32 %9 to i8
  %11 = add i8 %10, 1, !insn.addr !173
  %12 = insertvalue [8 x i8] undef, i8 %11, 0, !insn.addr !173
  store [8 x i8] %12, [8 x i8]* %buffer_-32, align 4
  %13 = load i32, i32* %1, align 4, !insn.addr !168
  %14 = icmp slt i32 %13, 17, !insn.addr !169
  store i32 %13, i32* %.reg2mem, !insn.addr !169
  br i1 %14, label %dec_label_pc_18e6, label %dec_label_pc_18fa, !insn.addr !169

dec_label_pc_18fa:                                ; preds = %dec_label_pc_18e6, %dec_label_pc_18b8
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !174
  %16 = icmp eq i64 %0, %15, !insn.addr !174
  store i32 %x, i32* %rax.0.reg2mem, !insn.addr !175
  br i1 %16, label %dec_label_pc_1921, label %dec_label_pc_191c, !insn.addr !175

dec_label_pc_191c:                                ; preds = %dec_label_pc_18fa
  call void @__stack_chk_fail(), !insn.addr !176
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_1921, !insn.addr !176

dec_label_pc_1921:                                ; preds = %dec_label_pc_191c, %dec_label_pc_18fa
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !177

; uselistorder directives
  uselistorder i32* %1, { 2, 1, 0 }
  uselistorder [8 x i8]* %buffer_-32, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0, 4 }
  uselistorder i32 17, { 1, 0 }
  uselistorder i8 0, { 1, 4, 0, 5, 3, 2 }
  uselistorder label %dec_label_pc_18e6, { 1, 0 }
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_1923:
  %storemerge.reg2mem = alloca i32, !insn.addr !178
  %indvars.iv.reg2mem = alloca i64, !insn.addr !178
  %0 = call i64* @malloc(i32 16), !insn.addr !179
  %1 = ptrtoint i64* %0 to i64, !insn.addr !179
  %2 = icmp eq i64* %0, null, !insn.addr !180
  %3 = icmp eq i1 %2, false, !insn.addr !181
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !181
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !181
  br i1 %3, label %dec_label_pc_1957, label %dec_label_pc_1980, !insn.addr !181

dec_label_pc_1957:                                ; preds = %dec_label_pc_1923, %dec_label_pc_1957
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = add i64 %indvars.iv.reload, %1, !insn.addr !182
  %5 = inttoptr i64 %4 to i8*, !insn.addr !183
  store i8 66, i8* %5, align 1, !insn.addr !183
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 33
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !184
  br i1 %exitcond, label %dec_label_pc_1971, label %dec_label_pc_1957, !insn.addr !184

dec_label_pc_1971:                                ; preds = %dec_label_pc_1957
  call void @free(i64* %0), !insn.addr !185
  store i32 %x, i32* %storemerge.reg2mem, !insn.addr !186
  br label %dec_label_pc_1980, !insn.addr !186

dec_label_pc_1980:                                ; preds = %dec_label_pc_1923, %dec_label_pc_1971
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !187

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 0, 3, 2, 1, 4 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1980, { 1, 0 }
  uselistorder label %dec_label_pc_1957, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1982:
  %0 = call i32 @param_buffer_overflow_stack(i32 10), !insn.addr !188
  %1 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !189
  %2 = add i32 %1, %0, !insn.addr !190
  ret i32 %2, !insn.addr !191
}

define i32 @param_integer_overflow(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_19b2:
  %rax.0.reg2mem = alloca i32, !insn.addr !192
  %0 = add i32 %b, %a, !insn.addr !193
  %1 = icmp slt i32 %a, 1, !insn.addr !194
  %2 = icmp slt i32 %b, 1, !insn.addr !195
  %or.cond = or i1 %1, %2
  %3 = icmp slt i32 %0, 0, !insn.addr !196
  %4 = icmp eq i1 %3, false, !insn.addr !197
  %or.cond5 = or i1 %or.cond, %4
  store i32 -1, i32* %rax.0.reg2mem, !insn.addr !194
  br i1 %or.cond5, label %dec_label_pc_19fb, label %dec_label_pc_1a17, !insn.addr !194

dec_label_pc_19fb:                                ; preds = %dec_label_pc_19b2
  %5 = icmp slt i32 %a, 0, !insn.addr !198
  %6 = icmp eq i1 %5, false, !insn.addr !199
  br i1 %6, label %dec_label_pc_1a14, label %dec_label_pc_1a01, !insn.addr !199

dec_label_pc_1a01:                                ; preds = %dec_label_pc_19fb
  %7 = icmp slt i32 %b, 0, !insn.addr !200
  %8 = icmp eq i1 %7, false, !insn.addr !201
  %9 = icmp slt i32 %0, 1, !insn.addr !202
  %or.cond3 = or i1 %8, %9
  store i32 -2, i32* %rax.0.reg2mem, !insn.addr !201
  br i1 %or.cond3, label %dec_label_pc_1a14, label %dec_label_pc_1a17, !insn.addr !201

dec_label_pc_1a14:                                ; preds = %dec_label_pc_1a01, %dec_label_pc_19fb
  store i32 %0, i32* %rax.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_1a17, !insn.addr !203

dec_label_pc_1a17:                                ; preds = %dec_label_pc_1a01, %dec_label_pc_19b2, %dec_label_pc_1a14
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !204

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 false, { 6, 7, 2, 8, 9, 10, 11, 3, 12, 4, 13, 0, 14, 1, 5 }
  uselistorder i32 %b, { 1, 2, 0 }
  uselistorder i32 %a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1a17, { 2, 0, 1 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1a19:
  %0 = call i32 @param_integer_overflow(i32 1000000000, i32 1000000000), !insn.addr !205
  %1 = call i32 @param_integer_overflow(i32 -1, i32 1), !insn.addr !206
  %2 = add i32 %1, %0, !insn.addr !207
  ret i32 %2, !insn.addr !208

; uselistorder directives
  uselistorder i32 -1, { 3, 0, 2, 1, 4, 5 }
  uselistorder i32 (i32, i32)* @param_integer_overflow, { 1, 0 }
}

define i32 @param_undefined_behavior(i32 %i) local_unnamed_addr {
dec_label_pc_1a53:
  %0 = mul i32 %i, 2, !insn.addr !209
  ret i32 %0, !insn.addr !210

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2, 4 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1a6c:
  %0 = call i32 @param_undefined_behavior(i32 5), !insn.addr !211
  ret i32 %0, !insn.addr !212
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1a8a:
  ret i32 47, !insn.addr !213
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1b0a:
  %0 = call i32 @param_implementation_defined(), !insn.addr !214
  ret i32 %0, !insn.addr !215
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1b1e:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2010 to i8*)), !insn.addr !216
  %1 = call i32 @call_fake_branch(), !insn.addr !217
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_203d to i8*)), !insn.addr !218
  %3 = call i32 @call_opaque_predicate(), !insn.addr !219
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2059 to i8*)), !insn.addr !220
  %5 = call i32 @call_instruction_substitution(), !insn.addr !221
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2075 to i8*)), !insn.addr !222
  %7 = call i32 @call_string_encryption(), !insn.addr !223
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !224
  %9 = call i32 @call_tail_call_optimized(), !insn.addr !225
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b0 to i8*)), !insn.addr !226
  %11 = call i32 @call_non_tail_call(), !insn.addr !227
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20e0 to i8*)), !insn.addr !228
  %13 = call i32 @call_vectorized_loop(), !insn.addr !229
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2108 to i8*)), !insn.addr !230
  %15 = call i32 @call_link_time_optimization(), !insn.addr !231
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2130 to i8*)), !insn.addr !232
  %17 = call i32 @call_division_by_zero(), !insn.addr !233
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2150 to i8*)), !insn.addr !234
  %19 = call i32 @call_null_pointer_deref(), !insn.addr !235
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_216c to i8*)), !insn.addr !236
  %21 = call i32 @call_buffer_overflow(), !insn.addr !237
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2189 to i8*)), !insn.addr !238
  %23 = call i32 @call_integer_overflow(), !insn.addr !239
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !240
  %25 = call i32 @call_undefined_behavior(), !insn.addr !241
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21d9 to i8*)), !insn.addr !242
  %27 = call i32 @call_implementation_defined(), !insn.addr !243
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21f8 to i8*)), !insn.addr !244
  ret void, !insn.addr !245

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 0, 39, 1, 2, 40, 4, 3, 41, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1cf8:
  call void @test_obf_opt_edge(), !insn.addr !246
  ret i32 0, !insn.addr !247

; uselistorder directives
  uselistorder i32 0, { 3, 12, 13, 6, 14, 7, 15, 1, 0, 4, 2, 16, 17, 8, 18, 19, 20, 5, 9, 10, 11 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1d14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !248

; uselistorder directives
  uselistorder i32 1, { 2, 26, 24, 25, 27, 3, 5, 4, 35, 34, 7, 6, 36, 8, 1, 28, 41, 9, 29, 42, 39, 38, 37, 10, 14, 13, 12, 11, 15, 16, 33, 17, 19, 18, 30, 32, 31, 22, 21, 20, 0, 40, 23 }
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
!32 = !{i64 4745}
!33 = !{i64 4759}
!34 = !{i64 4765}
!35 = !{i64 4766}
!36 = !{i64 4798}
!37 = !{i64 4860}
!38 = !{i64 4864}
!39 = !{i64 4847}
!40 = !{i64 4848}
!41 = !{i64 4790}
!42 = !{i64 4792}
!43 = !{i64 4807}
!44 = !{i64 4810}
!45 = !{i64 4866}
!46 = !{i64 4927}
!47 = !{i64 4941}
!48 = !{i64 4947}
!49 = !{i64 4997}
!50 = !{i64 5005}
!51 = !{i64 5034}
!52 = !{i64 5039}
!53 = !{i64 5042}
!54 = !{i64 5056}
!55 = !{i64 5062}
!56 = !{i64 5063}
!57 = !{i64 5110}
!58 = !{i64 5119}
!59 = !{i64 5127}
!60 = !{i64 5130}
!61 = !{i64 5170}
!62 = !{i64 5173}
!63 = !{i64 5175}
!64 = !{i64 5150}
!65 = !{i64 5159}
!66 = !{i64 5161}
!67 = !{i64 5182}
!68 = !{i64 5183}
!69 = !{i64 5195}
!70 = !{i64 5237}
!71 = !{i64 5249}
!72 = !{i64 5256}
!73 = !{i64 5263}
!74 = !{i64 5269}
!75 = !{i64 5278}
!76 = !{i64 5280}
!77 = !{i64 5286}
!78 = !{i64 5300}
!79 = !{i64 5306}
!80 = !{i64 5307}
!81 = !{i64 5325}
!82 = !{i64 5329}
!83 = !{i64 5342}
!84 = !{i64 5347}
!85 = !{i64 5354}
!86 = !{i64 5360}
!87 = !{i64 5379}
!88 = !{i64 5385}
!89 = !{i64 5386}
!90 = !{i64 5401}
!91 = !{i64 5405}
!92 = !{i64 5417}
!93 = !{i64 5422}
!94 = !{i64 5430}
!95 = !{i64 5433}
!96 = !{i64 5447}
!97 = !{i64 5453}
!98 = !{i64 5454}
!99 = !{i64 5564}
!100 = !{i64 5499}
!101 = !{i64 5521}
!102 = !{i64 5543}
!103 = !{i64 5491}
!104 = !{i64 5503}
!105 = !{i64 5506}
!106 = !{i64 5525}
!107 = !{i64 5528}
!108 = !{i64 5547}
!109 = !{i64 5550}
!110 = !{i64 5552}
!111 = !{i64 5587}
!112 = !{i64 5599}
!113 = !{i64 5602}
!114 = !{i64 5604}
!115 = !{i64 5617}
!116 = !{i64 5623}
!117 = !{i64 5624}
!118 = !{i64 5636}
!119 = !{i64 5651}
!120 = !{i64 5707}
!121 = !{i64 5763}
!122 = !{i64 5815}
!123 = !{i64 5824}
!124 = !{i64 5833}
!125 = !{i64 5835}
!126 = !{i64 5841}
!127 = !{i64 5852}
!128 = !{i64 5855}
!129 = !{i64 5858}
!130 = !{i64 5879}
!131 = !{i64 5885}
!132 = !{i64 5899}
!133 = !{i64 5905}
!134 = !{i64 5921}
!135 = !{i64 5946}
!136 = !{i64 5951}
!137 = !{i64 5981}
!138 = !{i64 5996}
!139 = !{i64 6005}
!140 = !{i64 6007}
!141 = !{i64 6024}
!142 = !{i64 6032}
!143 = !{i64 6050}
!144 = !{i64 6063}
!145 = !{i64 6081}
!146 = !{i64 6092}
!147 = !{i64 6095}
!148 = !{i64 6111}
!149 = !{i64 6136}
!150 = !{i64 6172}
!151 = !{i64 6187}
!152 = !{i64 6196}
!153 = !{i64 6198}
!154 = !{i64 6220}
!155 = !{i64 6221}
!156 = !{i64 6233}
!157 = !{i64 6248}
!158 = !{i64 6262}
!159 = !{i64 6275}
!160 = !{i64 6293}
!161 = !{i64 6304}
!162 = !{i64 6310}
!163 = !{i64 6319}
!164 = !{i64 6321}
!165 = !{i64 6327}
!166 = !{i64 6328}
!167 = !{i64 6343}
!168 = !{i64 6388}
!169 = !{i64 6392}
!170 = !{i64 6333}
!171 = !{i64 6379}
!172 = !{i64 6377}
!173 = !{i64 6384}
!174 = !{i64 6417}
!175 = !{i64 6426}
!176 = !{i64 6428}
!177 = !{i64 6434}
!178 = !{i64 6435}
!179 = !{i64 6455}
!180 = !{i64 6464}
!181 = !{i64 6469}
!182 = !{i64 6497}
!183 = !{i64 6500}
!184 = !{i64 6511}
!185 = !{i64 6520}
!186 = !{i64 6525}
!187 = !{i64 6529}
!188 = !{i64 6547}
!189 = !{i64 6560}
!190 = !{i64 6574}
!191 = !{i64 6577}
!192 = !{i64 6578}
!193 = !{i64 6598}
!194 = !{i64 6630}
!195 = !{i64 6636}
!196 = !{i64 6638}
!197 = !{i64 6642}
!198 = !{i64 6651}
!199 = !{i64 6655}
!200 = !{i64 6657}
!201 = !{i64 6661}
!202 = !{i64 6667}
!203 = !{i64 6676}
!204 = !{i64 6680}
!205 = !{i64 6703}
!206 = !{i64 6721}
!207 = !{i64 6735}
!208 = !{i64 6738}
!209 = !{i64 6760}
!210 = !{i64 6763}
!211 = !{i64 6781}
!212 = !{i64 6793}
!213 = !{i64 6921}
!214 = !{i64 6935}
!215 = !{i64 6941}
!216 = !{i64 6960}
!217 = !{i64 6970}
!218 = !{i64 6992}
!219 = !{i64 7002}
!220 = !{i64 7024}
!221 = !{i64 7034}
!222 = !{i64 7056}
!223 = !{i64 7066}
!224 = !{i64 7088}
!225 = !{i64 7098}
!226 = !{i64 7120}
!227 = !{i64 7130}
!228 = !{i64 7152}
!229 = !{i64 7162}
!230 = !{i64 7184}
!231 = !{i64 7194}
!232 = !{i64 7216}
!233 = !{i64 7226}
!234 = !{i64 7248}
!235 = !{i64 7258}
!236 = !{i64 7280}
!237 = !{i64 7290}
!238 = !{i64 7312}
!239 = !{i64 7322}
!240 = !{i64 7344}
!241 = !{i64 7354}
!242 = !{i64 7376}
!243 = !{i64 7386}
!244 = !{i64 7408}
!245 = !{i64 7415}
!246 = !{i64 7429}
!247 = !{i64 7440}
!248 = !{i64 7456}
