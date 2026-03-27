source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@jmp_buffer = global i64 0
@div_zero_caught = local_unnamed_addr global i32 0
@segv_buffer = global i64 0
@segv_caught = local_unnamed_addr global i32 0
@0 = external global i32
@global_var_4020 = local_unnamed_addr global i8 0
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

define i32 @main() local_unnamed_addr {
dec_label_pc_1180:
  call void @test_obf_opt_edge(), !insn.addr !17
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !18
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

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1290:
  store i32 1, i32* @div_zero_caught, align 4, !insn.addr !34
  %0 = call i64 @__longjmp_chk(i64* nonnull @jmp_buffer, i64 1), !insn.addr !35
  ret void, !insn.addr !35
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_12c0:
  store i32 1, i32* @segv_caught, align 4, !insn.addr !36
  %0 = call i64 @__longjmp_chk(i64* nonnull @segv_buffer, i64 1), !insn.addr !37
  ret void, !insn.addr !37

; uselistorder directives
  uselistorder i64 (i64*, i64)* @__longjmp_chk, { 1, 0, 2 }
}

define i64 @param_fake_branch(i64 %arg1) local_unnamed_addr {
dec_label_pc_12f0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !38
  ret i64 %0, !insn.addr !39
}

define i64 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1300:
  ret i64 10, !insn.addr !40
}

define i64 @param_opaque_predicate(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1310:
  %rdx.0.in.reg2mem = alloca i64, !insn.addr !41
  %rax.0.reg2mem = alloca i64, !insn.addr !41
  %0 = add i64 %arg1, 1, !insn.addr !42
  %1 = mul i64 %arg1, 2, !insn.addr !43
  %2 = trunc i64 %0 to i32, !insn.addr !44
  %3 = icmp eq i32 %2, 0, !insn.addr !44
  br i1 %3, label %dec_label_pc_1358, label %dec_label_pc_1332, !insn.addr !45

dec_label_pc_1332:                                ; preds = %dec_label_pc_1310
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !46
  %5 = mul nsw i64 %4, %4, !insn.addr !46
  %6 = or i64 %1, 1, !insn.addr !47
  %7 = add i64 %5, %6, !insn.addr !47
  %8 = trunc i64 %7 to i32, !insn.addr !47
  %sext2 = mul i64 %0, 4294967296
  %9 = ashr exact i64 %sext2, 32, !insn.addr !48
  %10 = mul nsw i64 %9, %9, !insn.addr !48
  %11 = trunc i64 %10 to i32, !insn.addr !48
  %12 = icmp eq i32 %8, %11, !insn.addr !49
  %13 = and i64 %arg1, 4294967295, !insn.addr !50
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !51
  store i64 %0, i64* %rdx.0.in.reg2mem, !insn.addr !51
  br label %dec_label_pc_1338, !insn.addr !51

dec_label_pc_1338:                                ; preds = %dec_label_pc_1338, %dec_label_pc_1332
  %rdx.0.in.reload = load i64, i64* %rdx.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %rdx.0 = and i64 %rdx.0.in.reload, 4294967295
  %14 = trunc i64 %rax.0.reload to i32, !insn.addr !52
  %15 = ashr i32 %14, 31, !insn.addr !52
  %16 = zext i32 %15 to i64, !insn.addr !53
  %17 = mul i64 %16, 4294967296, !insn.addr !53
  %18 = or i64 %17, %rax.0.reload, !insn.addr !53
  %19 = srem i64 %18, %rdx.0, !insn.addr !53
  %20 = trunc i64 %19 to i32, !insn.addr !54
  %21 = icmp eq i32 %20, 0, !insn.addr !54
  %22 = icmp eq i1 %21, false, !insn.addr !55
  store i64 %rdx.0, i64* %rax.0.reg2mem, !insn.addr !55
  store i64 %19, i64* %rdx.0.in.reg2mem, !insn.addr !55
  br i1 %22, label %dec_label_pc_1338, label %dec_label_pc_1343, !insn.addr !55

dec_label_pc_1343:                                ; preds = %dec_label_pc_1338
  %23 = trunc i64 %rdx.0.in.reload to i32, !insn.addr !56
  %24 = icmp eq i32 %23, 1, !insn.addr !56
  %25 = icmp eq i1 %12, %24
  br i1 %25, label %dec_label_pc_134d, label %dec_label_pc_1358, !insn.addr !57

dec_label_pc_134d:                                ; preds = %dec_label_pc_1343
  %26 = add i64 %1, 10, !insn.addr !58
  %27 = and i64 %26, 4294967294, !insn.addr !58
  ret i64 %27, !insn.addr !59

dec_label_pc_1358:                                ; preds = %dec_label_pc_1343, %dec_label_pc_1310
  %28 = add i64 %arg1, 20, !insn.addr !60
  %29 = add i64 %28, %1, !insn.addr !60
  %30 = and i64 %29, 4294967295, !insn.addr !60
  ret i64 %30, !insn.addr !61

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.in.reload, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64 %arg1, { 3, 2, 0, 1, 4 }
}

define i64 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1360:
  %rdx.0.reg2mem = alloca i64, !insn.addr !62
  %rax.0.reg2mem = alloca i64, !insn.addr !62
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !63
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_1370, !insn.addr !63

dec_label_pc_1370:                                ; preds = %dec_label_pc_1370, %dec_label_pc_1360
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = trunc i64 %rax.0.reload to i32, !insn.addr !64
  %1 = ashr i32 %0, 31, !insn.addr !64
  %2 = zext i32 %1 to i64, !insn.addr !65
  %3 = mul i64 %2, 4294967296, !insn.addr !65
  %4 = or i64 %3, %rax.0.reload, !insn.addr !65
  %5 = srem i64 %4, %rdx.0.reload, !insn.addr !65
  %6 = and i64 %5, 4294967295, !insn.addr !65
  %7 = trunc i64 %5 to i32, !insn.addr !66
  %8 = icmp eq i32 %7, 0, !insn.addr !66
  %9 = icmp eq i1 %8, false, !insn.addr !67
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !67
  store i64 %6, i64* %rdx.0.reg2mem, !insn.addr !67
  br i1 %9, label %dec_label_pc_1370, label %dec_label_pc_137b, !insn.addr !67

dec_label_pc_137b:                                ; preds = %dec_label_pc_1370
  %10 = icmp eq i64 %rdx.0.reload, 1, !insn.addr !68
  %11 = icmp eq i1 %10, false, !insn.addr !69
  %12 = select i1 %11, i64 35, i64 20, !insn.addr !69
  ret i64 %12, !insn.addr !70

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @param_instruction_substitution(i64 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = trunc i64 %arg1 to i32
  %1 = udiv i32 %0, 2, !insn.addr !71
  %2 = urem i32 %0, 16, !insn.addr !72
  %reass.mul = mul i32 %0, 21
  %3 = add nuw i32 %2, %1, !insn.addr !73
  %4 = add i32 %3, %reass.mul, !insn.addr !74
  %5 = zext i32 %4 to i64, !insn.addr !74
  ret i64 %5, !insn.addr !75

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i64 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_13b0:
  ret i64 225, !insn.addr !76
}

define i64 @decrypt_string(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13c0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !77
  %rax.0.in.reg2mem = alloca i8, !insn.addr !77
  %0 = inttoptr i64 %arg2 to i8*, !insn.addr !78
  %1 = inttoptr i64 %arg1 to i8*, !insn.addr !78
  %2 = trunc i64 %arg3 to i32, !insn.addr !78
  %3 = call i8* @strncpy(i8* %0, i8* %1, i32 %2), !insn.addr !78
  %4 = ptrtoint i8* %3 to i64, !insn.addr !78
  %5 = add i64 %arg3, -1, !insn.addr !79
  %6 = add i64 %5, %4, !insn.addr !79
  %7 = inttoptr i64 %6 to i8*, !insn.addr !79
  store i8 0, i8* %7, align 1, !insn.addr !79
  %8 = load i8, i8* %3, align 1, !insn.addr !80
  %9 = icmp eq i8 %8, 0, !insn.addr !81
  br i1 %9, label %dec_label_pc_1400, label %dec_label_pc_13f0.preheader, !insn.addr !82

dec_label_pc_13f0.preheader:                      ; preds = %dec_label_pc_13c0
  %10 = trunc i64 %arg4 to i8
  store i8 %8, i8* %rax.0.in.reg2mem
  store i64 %4, i64* %rdx.0.reg2mem
  br label %dec_label_pc_13f0

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13f0.preheader, %dec_label_pc_13f0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.in.reload = load i8, i8* %rax.0.in.reg2mem
  %11 = add i64 %rdx.0.reload, 1, !insn.addr !83
  %12 = xor i8 %rax.0.in.reload, %10, !insn.addr !84
  %13 = inttoptr i64 %rdx.0.reload to i8*, !insn.addr !84
  store i8 %12, i8* %13, align 1, !insn.addr !84
  %14 = inttoptr i64 %11 to i8*, !insn.addr !85
  %15 = load i8, i8* %14, align 1, !insn.addr !85
  %16 = icmp eq i8 %15, 0, !insn.addr !86
  %17 = icmp eq i1 %16, false, !insn.addr !87
  store i8 %15, i8* %rax.0.in.reg2mem, !insn.addr !87
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !87
  br i1 %17, label %dec_label_pc_13f0, label %dec_label_pc_1400, !insn.addr !87

dec_label_pc_1400:                                ; preds = %dec_label_pc_13f0, %dec_label_pc_13c0
  ret i64 %4, !insn.addr !88

; uselistorder directives
  uselistorder i64 %4, { 2, 0, 1 }
  uselistorder i8* %rax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13f0, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1410:
  %rbx.1.reg2mem = alloca i64, !insn.addr !89
  %rbx.0.reg2mem = alloca i64, !insn.addr !89
  %rax.0.reg2mem = alloca i64, !insn.addr !89
  %stack_var_-56 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !90
  %1 = bitcast i32* %stack_var_-56 to i8*, !insn.addr !91
  %2 = call i8* @strncpy(i8* nonnull %1, i8* inttoptr (i64 16400 to i8*), i32 31), !insn.addr !91
  %3 = load i32, i32* %stack_var_-56, align 4, !insn.addr !92
  %4 = zext i32 %3 to i64, !insn.addr !92
  %sext = mul i64 %4, 72057594037927936
  %5 = ashr exact i64 %sext, 56, !insn.addr !92
  %6 = trunc i64 %5 to i8, !insn.addr !93
  %7 = icmp eq i8 %6, 0, !insn.addr !93
  store i64 %5, i64* %rbx.1.reg2mem, !insn.addr !94
  br i1 %7, label %dec_label_pc_1465, label %dec_label_pc_1450.preheader, !insn.addr !94

dec_label_pc_1450.preheader:                      ; preds = %dec_label_pc_1410
  %8 = ptrtoint i8* %2 to i64, !insn.addr !91
  store i64 %8, i64* %rax.0.reg2mem
  store i64 %5, i64* %rbx.0.reg2mem
  br label %dec_label_pc_1450

dec_label_pc_1450:                                ; preds = %dec_label_pc_1450.preheader, %dec_label_pc_1450
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = trunc i64 %rbx.0.reload to i8, !insn.addr !95
  %10 = xor i8 %9, 90, !insn.addr !95
  %11 = add i64 %rax.0.reload, 1, !insn.addr !96
  %12 = inttoptr i64 %rax.0.reload to i8*, !insn.addr !97
  store i8 %10, i8* %12, align 1, !insn.addr !97
  %13 = inttoptr i64 %11 to i8*, !insn.addr !98
  %14 = load i8, i8* %13, align 1, !insn.addr !98
  %15 = zext i8 %14 to i64, !insn.addr !98
  %16 = icmp eq i8 %14, 0, !insn.addr !99
  %17 = icmp eq i1 %16, false, !insn.addr !100
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !100
  store i64 %15, i64* %rbx.0.reg2mem, !insn.addr !100
  br i1 %17, label %dec_label_pc_1450, label %dec_label_pc_1461, !insn.addr !100

dec_label_pc_1461:                                ; preds = %dec_label_pc_1450
  %18 = load i32, i32* %stack_var_-56, align 4, !insn.addr !101
  %19 = zext i32 %18 to i64, !insn.addr !101
  %sext2 = mul i64 %19, 72057594037927936
  %20 = ashr exact i64 %sext2, 56, !insn.addr !101
  store i64 %20, i64* %rbx.1.reg2mem, !insn.addr !101
  br label %dec_label_pc_1465, !insn.addr !101

dec_label_pc_1465:                                ; preds = %dec_label_pc_1461, %dec_label_pc_1410
  %21 = call i32 @strlen(i8* %2), !insn.addr !102
  %22 = call i64 @__readfsqword(i64 40), !insn.addr !103
  %23 = icmp eq i64 %0, %22, !insn.addr !103
  %24 = icmp eq i1 %23, false, !insn.addr !104
  br i1 %24, label %dec_label_pc_1482, label %dec_label_pc_147c, !insn.addr !104

dec_label_pc_147c:                                ; preds = %dec_label_pc_1465
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %25 = trunc i64 %rbx.1.reload to i32, !insn.addr !105
  %26 = add i32 %21, %25, !insn.addr !105
  ret i32 %26, !insn.addr !106

dec_label_pc_1482:                                ; preds = %dec_label_pc_1465
  call void @__stack_chk_fail(), !insn.addr !107
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !108

; uselistorder directives
  uselistorder i64 %5, { 1, 0, 2 }
  uselistorder i32* %stack_var_-56, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 5, 6, 1, 2, 3, 4, 0 }
  uselistorder label %dec_label_pc_1450, { 1, 0 }
}

define i64 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i32 @param_string_encryption(), !insn.addr !109
  %1 = sext i32 %0 to i64, !insn.addr !109
  ret i64 %1, !insn.addr !109
}

define i64 @param_tail_call_optimized(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_14a0:
  %rax.1.reg2mem = alloca i64, !insn.addr !110
  %rdi.0.reg2mem = alloca i64, !insn.addr !110
  %rax.0.reg2mem = alloca i64, !insn.addr !110
  %0 = and i64 %arg2, 4294967295, !insn.addr !111
  %1 = trunc i64 %arg1 to i32, !insn.addr !112
  %2 = icmp slt i32 %1, 1
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !113
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !113
  store i64 %0, i64* %rax.1.reg2mem, !insn.addr !113
  br i1 %2, label %dec_label_pc_14b7, label %dec_label_pc_14b0, !insn.addr !113

dec_label_pc_14b0:                                ; preds = %dec_label_pc_14a0, %dec_label_pc_14b0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = add i64 %rdi.0.reload, %rax.0.reload, !insn.addr !114
  %4 = and i64 %3, 4294967295, !insn.addr !114
  %5 = trunc i64 %rdi.0.reload to i32, !insn.addr !115
  %6 = add i32 %5, -1, !insn.addr !115
  %7 = icmp eq i32 %6, 0, !insn.addr !115
  %8 = zext i32 %6 to i64, !insn.addr !115
  %9 = icmp eq i1 %7, false, !insn.addr !116
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !116
  store i64 %8, i64* %rdi.0.reg2mem, !insn.addr !116
  store i64 %4, i64* %rax.1.reg2mem, !insn.addr !116
  br i1 %9, label %dec_label_pc_14b0, label %dec_label_pc_14b7, !insn.addr !116

dec_label_pc_14b7:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_14a0
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !117

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14b0, { 1, 0 }
}

define i64 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_14c0:
  ret i64 500500, !insn.addr !118
}

define i64 @param_non_tail_call(i64 %arg1) local_unnamed_addr {
dec_label_pc_14d0:
  %rax.1.reg2mem = alloca i64, !insn.addr !119
  %rdi.0.reg2mem = alloca i64, !insn.addr !119
  %rax.0.reg2mem = alloca i64, !insn.addr !119
  %0 = trunc i64 %arg1 to i32, !insn.addr !120
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !121
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !121
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !121
  br i1 %1, label %dec_label_pc_14e7, label %dec_label_pc_14e0, !insn.addr !121

dec_label_pc_14e0:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14e0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add i64 %rdi.0.reload, %rax.0.reload, !insn.addr !122
  %3 = and i64 %2, 4294967295, !insn.addr !122
  %4 = trunc i64 %rdi.0.reload to i32, !insn.addr !123
  %5 = add i32 %4, -1, !insn.addr !123
  %6 = icmp eq i32 %5, 0, !insn.addr !123
  %7 = zext i32 %5 to i64, !insn.addr !123
  %8 = icmp eq i1 %6, false, !insn.addr !124
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !124
  store i64 %7, i64* %rdi.0.reg2mem, !insn.addr !124
  store i64 %3, i64* %rax.1.reg2mem, !insn.addr !124
  br i1 %8, label %dec_label_pc_14e0, label %dec_label_pc_14e7, !insn.addr !124

dec_label_pc_14e7:                                ; preds = %dec_label_pc_14e0, %dec_label_pc_14d0
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !125

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14e0, { 1, 0 }
}

define i64 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_14f0:
  ret i64 5050, !insn.addr !126
}

define i64 @param_vectorized_loop(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1500:
  %rdx.0.reg2mem = alloca i64, !insn.addr !127
  %rax.1.reg2mem = alloca i32, !insn.addr !127
  %rax.0.reg2mem = alloca i64, !insn.addr !127
  %0 = trunc i64 %arg4 to i32, !insn.addr !128
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1540, label %dec_label_pc_1508, !insn.addr !129

dec_label_pc_1508:                                ; preds = %dec_label_pc_1500
  %2 = and i64 %arg4, 4294967295, !insn.addr !130
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !130
  br label %dec_label_pc_1510, !insn.addr !130

dec_label_pc_1510:                                ; preds = %dec_label_pc_1510, %dec_label_pc_1508
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = mul i64 %rax.0.reload, 4, !insn.addr !131
  %4 = add i64 %3, %arg2, !insn.addr !131
  %5 = inttoptr i64 %4 to i32*, !insn.addr !131
  %6 = load i32, i32* %5, align 4, !insn.addr !131
  %7 = add i64 %3, %arg1, !insn.addr !132
  %8 = inttoptr i64 %7 to i32*, !insn.addr !132
  %9 = load i32, i32* %8, align 4, !insn.addr !132
  %10 = add i32 %9, %6, !insn.addr !132
  %11 = add i64 %3, %arg3, !insn.addr !133
  %12 = inttoptr i64 %11 to i32*, !insn.addr !133
  store i32 %10, i32* %12, align 4, !insn.addr !133
  %13 = add i64 %rax.0.reload, 1, !insn.addr !134
  %14 = icmp eq i64 %13, %2, !insn.addr !135
  %15 = icmp eq i1 %14, false, !insn.addr !136
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !136
  br i1 %15, label %dec_label_pc_1510, label %dec_label_pc_1525, !insn.addr !136

dec_label_pc_1525:                                ; preds = %dec_label_pc_1510
  %16 = mul i64 %arg4, 4, !insn.addr !137
  %17 = add i64 %16, 17179869180, !insn.addr !137
  %18 = and i64 %17, 17179869180, !insn.addr !138
  %19 = add i64 %arg3, 4, !insn.addr !138
  %20 = add i64 %19, %18, !insn.addr !138
  store i32 0, i32* %rax.1.reg2mem, !insn.addr !139
  store i64 %arg3, i64* %rdx.0.reg2mem, !insn.addr !139
  br label %dec_label_pc_1530, !insn.addr !139

dec_label_pc_1530:                                ; preds = %dec_label_pc_1530, %dec_label_pc_1525
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  %21 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !140
  %22 = load i32, i32* %21, align 4, !insn.addr !140
  %23 = add i32 %22, %rax.1.reload, !insn.addr !140
  %24 = add i64 %rdx.0.reload, 4, !insn.addr !141
  %25 = icmp eq i64 %20, %24, !insn.addr !142
  %26 = icmp eq i1 %25, false, !insn.addr !143
  store i32 %23, i32* %rax.1.reg2mem, !insn.addr !143
  store i64 %24, i64* %rdx.0.reg2mem, !insn.addr !143
  br i1 %26, label %dec_label_pc_1530, label %dec_label_pc_153b, !insn.addr !143

dec_label_pc_153b:                                ; preds = %dec_label_pc_1530
  %27 = zext i32 %23 to i64, !insn.addr !140
  ret i64 %27, !insn.addr !144

dec_label_pc_1540:                                ; preds = %dec_label_pc_1500
  ret i64 0, !insn.addr !145

; uselistorder directives
  uselistorder i32 %23, { 1, 0 }
  uselistorder i64 %3, { 2, 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 17179869180, { 1, 0 }
  uselistorder i64 1, { 5, 7, 6, 0, 1, 2, 3, 4 }
  uselistorder i64 %arg3, { 0, 2, 1 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1550:
  %0 = alloca i128
  %r8.0.reg2mem = alloca i32, !insn.addr !146
  %rax.1.reg2mem = alloca i64, !insn.addr !146
  %.reg2mem = alloca i64, !insn.addr !146
  %1 = load i128, i128* %0
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-120 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-120 to i64, !insn.addr !147
  %3 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !148
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !149
  %5 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !150
  %6 = call i64 @__asm_movaps(i128 %3), !insn.addr !151
  store i64 %6, i64* %stack_var_-56, align 8, !insn.addr !151
  %7 = call i64 @__asm_movaps(i128 %3), !insn.addr !152
  store i64 8589934593, i64* %stack_var_-120, align 8, !insn.addr !153
  %8 = bitcast i64* %stack_var_-56 to i32*, !insn.addr !154
  store i32 9, i32* %8, align 8, !insn.addr !154
  store i64 4, i64* %.reg2mem
  br label %dec_label_pc_1600

dec_label_pc_1600:                                ; preds = %dec_label_pc_1550, %dec_label_pc_1600
  %.reload = load i64, i64* %.reg2mem
  %9 = add i64 %.reload, %2
  %10 = inttoptr i64 %9 to i32*, !insn.addr !155
  %11 = load i32, i32* %10, align 4, !insn.addr !155
  %12 = add i64 %9, 32, !insn.addr !156
  %13 = inttoptr i64 %12 to i32*, !insn.addr !156
  %14 = load i32, i32* %13, align 4, !insn.addr !156
  %15 = add i32 %14, %11, !insn.addr !157
  %16 = add i64 %.reload, %5, !insn.addr !154
  %17 = inttoptr i64 %16 to i32*, !insn.addr !154
  store i32 %15, i32* %17, align 4, !insn.addr !154
  %18 = add nuw nsw i64 %.reload, 4, !insn.addr !158
  %19 = icmp eq i64 %.reload, 28, !insn.addr !159
  %20 = icmp eq i1 %19, false, !insn.addr !160
  store i64 %18, i64* %.reg2mem, !insn.addr !160
  br i1 %20, label %dec_label_pc_1600, label %dec_label_pc_1616, !insn.addr !160

dec_label_pc_1616:                                ; preds = %dec_label_pc_1600
  %21 = ptrtoint i64* %stack_var_-24 to i64, !insn.addr !161
  store i64 %5, i64* %rax.1.reg2mem, !insn.addr !162
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_1628, !insn.addr !162

dec_label_pc_1628:                                ; preds = %dec_label_pc_1628, %dec_label_pc_1616
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !163
  %23 = load i32, i32* %22, align 4, !insn.addr !163
  %24 = add i32 %23, %r8.0.reload, !insn.addr !163
  %25 = add i64 %rax.1.reload, 4, !insn.addr !164
  %26 = icmp eq i64 %25, %21, !insn.addr !165
  %27 = icmp eq i1 %26, false, !insn.addr !166
  store i64 %25, i64* %rax.1.reg2mem, !insn.addr !166
  store i32 %24, i32* %r8.0.reg2mem, !insn.addr !166
  br i1 %27, label %dec_label_pc_1628, label %dec_label_pc_1634, !insn.addr !166

dec_label_pc_1634:                                ; preds = %dec_label_pc_1628
  %28 = call i64 @__readfsqword(i64 40), !insn.addr !167
  %29 = icmp eq i64 %4, %28, !insn.addr !167
  %30 = icmp eq i1 %29, false, !insn.addr !168
  br i1 %30, label %dec_label_pc_164c, label %dec_label_pc_1644, !insn.addr !168

dec_label_pc_1644:                                ; preds = %dec_label_pc_1634
  ret i32 %24, !insn.addr !169

dec_label_pc_164c:                                ; preds = %dec_label_pc_1634
  call void @__stack_chk_fail(), !insn.addr !170
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !171

; uselistorder directives
  uselistorder i32 %24, { 1, 0 }
  uselistorder i64 %.reload, { 1, 0, 3, 2 }
  uselistorder i128 %3, { 1, 0 }
  uselistorder i64* %.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 4, { 5, 6, 0, 3, 4, 1, 2 }
  uselistorder label %dec_label_pc_1600, { 1, 0 }
}

define i64 @param_link_time_optimization(i64 %arg1) local_unnamed_addr {
dec_label_pc_1660:
  %factor = mul i64 %arg1, 2
  %0 = add i64 %factor, 10, !insn.addr !172
  %1 = and i64 %0, 4294967294, !insn.addr !172
  ret i64 %1, !insn.addr !173
}

define i64 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1670:
  ret i64 20, !insn.addr !174
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_1680:
  %storemerge.reg2mem = alloca i32, !insn.addr !175
  %0 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i64 4752 to void (i32)*)), !insn.addr !176
  %1 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @jmp_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !177
  %2 = icmp eq i32 %1, 0, !insn.addr !178
  %3 = icmp eq i1 %2, false, !insn.addr !179
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !179
  br i1 %3, label %dec_label_pc_16bb, label %dec_label_pc_16b1, !insn.addr !179

dec_label_pc_16b1:                                ; preds = %dec_label_pc_1680
  %4 = udiv i32 10, %x
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !180
  br label %dec_label_pc_16bb, !insn.addr !180

dec_label_pc_16bb:                                ; preds = %dec_label_pc_1680, %dec_label_pc_16b1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !181

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16bb, { 1, 0 }
}

define i64 @call_division_by_zero(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !182
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !183
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !184
  %3 = add i32 %1, %0, !insn.addr !185
  %4 = zext i32 %3 to i64, !insn.addr !185
  ret i64 %4, !insn.addr !186
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_1710:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i64 4800 to void (i32)*)), !insn.addr !187
  %3 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i64* @segv_buffer to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !188
  %4 = icmp eq i32 %3, 0, !insn.addr !189
  %5 = icmp eq i1 %4, false, !insn.addr !190
  %6 = trunc i64 %1 to i32
  %storemerge = select i1 %5, i32 -1, i32 %6
  ret i32 %storemerge, !insn.addr !191

; uselistorder directives
  uselistorder i32 -1, { 1, 0, 2, 3 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i64 @call_null_pointer_deref(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1760:
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !192
  store i64 42, i64* %stack_var_-36, align 8, !insn.addr !193
  %1 = bitcast i64* %stack_var_-36 to i32*, !insn.addr !194
  %2 = call i32 @param_null_pointer_deref(i32* nonnull %1), !insn.addr !194
  %3 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !195
  %4 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !196
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !197
  %6 = icmp eq i64 %0, %5, !insn.addr !197
  %7 = icmp eq i1 %6, false, !insn.addr !198
  br i1 %7, label %dec_label_pc_17bd, label %dec_label_pc_17b6, !insn.addr !198

dec_label_pc_17b6:                                ; preds = %dec_label_pc_1760
  %8 = add i32 %3, %2, !insn.addr !199
  %9 = zext i32 %8 to i64, !insn.addr !199
  ret i64 %9, !insn.addr !200

dec_label_pc_17bd:                                ; preds = %dec_label_pc_1760
  call void @__stack_chk_fail(), !insn.addr !201
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !202

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0 }
}

define i64 @param_buffer_overflow_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_17d0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !203
  ret i64 %0, !insn.addr !204
}

define i64 @param_buffer_overflow_heap(i64 %arg1) local_unnamed_addr {
dec_label_pc_17e0:
  %0 = call i64* @malloc(i32 16), !insn.addr !205
  %1 = icmp eq i64* %0, null, !insn.addr !206
  br i1 %1, label %dec_label_pc_1802, label %dec_label_pc_17f6, !insn.addr !207

dec_label_pc_17f6:                                ; preds = %dec_label_pc_17e0
  %2 = and i64 %arg1, 4294967295, !insn.addr !208
  call void @free(i64* nonnull %0), !insn.addr !209
  ret i64 %2, !insn.addr !210

dec_label_pc_1802:                                ; preds = %dec_label_pc_17e0
  ret i64 4294967294, !insn.addr !211
}

define i64 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1810:
  %storemerge.reg2mem = alloca i64, !insn.addr !212
  %0 = call i64* @malloc(i32 16), !insn.addr !213
  %1 = icmp eq i64* %0, null, !insn.addr !214
  store i64 8, i64* %storemerge.reg2mem, !insn.addr !215
  br i1 %1, label %dec_label_pc_1834, label %dec_label_pc_1827, !insn.addr !215

dec_label_pc_1827:                                ; preds = %dec_label_pc_1810
  call void @free(i64* nonnull %0), !insn.addr !216
  store i64 30, i64* %storemerge.reg2mem, !insn.addr !217
  br label %dec_label_pc_1834, !insn.addr !217

dec_label_pc_1834:                                ; preds = %dec_label_pc_1810, %dec_label_pc_1827
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !218

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1834, { 1, 0 }
}

define i64 @param_integer_overflow(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1840:
  %rax.0.reg2mem = alloca i64, !insn.addr !219
  %0 = add i64 %arg2, %arg1, !insn.addr !220
  %1 = and i64 %0, 4294967295, !insn.addr !220
  %2 = trunc i64 %arg1 to i32, !insn.addr !221
  %3 = icmp slt i32 %2, 1
  %4 = trunc i64 %arg2 to i32, !insn.addr !222
  %5 = icmp slt i32 %4, 1
  %or.cond = or i1 %3, %5
  br i1 %or.cond, label %dec_label_pc_1860, label %dec_label_pc_184f, !insn.addr !223

dec_label_pc_184f:                                ; preds = %dec_label_pc_1840
  %6 = trunc i64 %0 to i32, !insn.addr !224
  %7 = icmp slt i32 %6, 0, !insn.addr !224
  %8 = select i1 %7, i64 4294967295, i64 %1, !insn.addr !225
  ret i64 %8, !insn.addr !226

dec_label_pc_1860:                                ; preds = %dec_label_pc_1840
  %9 = and i64 %arg2, %arg1
  %10 = trunc i64 %9 to i32, !insn.addr !227
  %11 = icmp slt i32 %10, 0, !insn.addr !227
  %12 = icmp eq i1 %11, false, !insn.addr !228
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !228
  br i1 %12, label %dec_label_pc_186e, label %dec_label_pc_1864, !insn.addr !228

dec_label_pc_1864:                                ; preds = %dec_label_pc_1860
  %13 = trunc i64 %0 to i32, !insn.addr !229
  %14 = icmp eq i32 %13, 0, !insn.addr !229
  %15 = icmp slt i32 %13, 0, !insn.addr !229
  %16 = icmp eq i1 %15, false, !insn.addr !230
  %17 = icmp eq i1 %14, false, !insn.addr !230
  %18 = icmp eq i1 %16, %17, !insn.addr !230
  %19 = select i1 %18, i64 4294967294, i64 %1, !insn.addr !230
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_186e, !insn.addr !230

dec_label_pc_186e:                                ; preds = %dec_label_pc_1864, %dec_label_pc_1860
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !231

; uselistorder directives
  uselistorder i32 %13, { 1, 0 }
  uselistorder i64 %1, { 1, 0, 2 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1 }
}

define i64 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1870:
  ret i64 2000000000, !insn.addr !232
}

define i64 @param_undefined_behavior(i64 %arg1) local_unnamed_addr {
dec_label_pc_1880:
  %0 = mul i64 %arg1, 2, !insn.addr !233
  %1 = and i64 %0, 4294967294, !insn.addr !233
  ret i64 %1, !insn.addr !234

; uselistorder directives
  uselistorder i64 4294967294, { 3, 4, 0, 1, 2 }
}

define i64 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1890:
  ret i64 10, !insn.addr !235

; uselistorder directives
  uselistorder i64 10, { 0, 2, 3, 1 }
}

define i64 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_18a0:
  ret i64 47, !insn.addr !236
}

define i64 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_18b0:
  ret i64 47, !insn.addr !237
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_18c0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !238
  %rax.0.reg2mem = alloca i64, !insn.addr !238
  %stack_var_-36 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !239
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_2008 to i8*)), !insn.addr !240
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2137 to i8*)), !insn.addr !241
  store i64 5, i64* %rax.0.reg2mem, !insn.addr !242
  store i64 6, i64* %rdx.0.reg2mem, !insn.addr !242
  br label %dec_label_pc_1910, !insn.addr !242

dec_label_pc_1910:                                ; preds = %dec_label_pc_1910, %dec_label_pc_18c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = trunc i64 %rax.0.reload to i32, !insn.addr !243
  %4 = ashr i32 %3, 31, !insn.addr !243
  %5 = zext i32 %4 to i64, !insn.addr !244
  %6 = mul i64 %5, 4294967296, !insn.addr !244
  %7 = or i64 %6, %rax.0.reload, !insn.addr !244
  %8 = srem i64 %7, %rdx.0.reload, !insn.addr !244
  %9 = and i64 %8, 4294967295, !insn.addr !244
  %10 = trunc i64 %8 to i32, !insn.addr !245
  %11 = icmp eq i32 %10, 0, !insn.addr !245
  %12 = icmp eq i1 %11, false, !insn.addr !246
  store i64 %rdx.0.reload, i64* %rax.0.reg2mem, !insn.addr !246
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !246
  br i1 %12, label %dec_label_pc_1910, label %dec_label_pc_191b, !insn.addr !246

dec_label_pc_191b:                                ; preds = %dec_label_pc_1910
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2153 to i8*)), !insn.addr !247
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_216f to i8*)), !insn.addr !248
  %15 = call i32 @param_string_encryption(), !insn.addr !249
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_218c to i8*)), !insn.addr !250
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2038 to i8*)), !insn.addr !251
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2068 to i8*)), !insn.addr !252
  %19 = call i32 @call_vectorized_loop(), !insn.addr !253
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2090 to i8*)), !insn.addr !254
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20b8 to i8*)), !insn.addr !255
  %22 = call i32 @param_division_by_zero(i32 5), !insn.addr !256
  %23 = call i32 @param_division_by_zero(i32 0), !insn.addr !257
  %24 = call void (i32)* @signal(i32 8, void (i32)* inttoptr (i32 xor (i32 ptrtoint (i8** @global_var_20b8 to i32), i32 ptrtoint (i8** @global_var_20b8 to i32)) to void (i32)*)), !insn.addr !258
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21a8 to i8*)), !insn.addr !259
  store i64 42, i64* %stack_var_-36, align 8, !insn.addr !260
  %26 = bitcast i64* %stack_var_-36 to i32*, !insn.addr !261
  %27 = call i32 @param_null_pointer_deref(i32* nonnull %26), !insn.addr !261
  %28 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !262
  %29 = call void (i32)* @signal(i32 11, void (i32)* inttoptr (i32 xor (i32 ptrtoint (i8** @global_var_21a8 to i32), i32 ptrtoint (i8** @global_var_21a8 to i32)) to void (i32)*)), !insn.addr !263
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21c4 to i8*)), !insn.addr !264
  %31 = call i64* @malloc(i32 16), !insn.addr !265
  %32 = icmp eq i64* %31, null, !insn.addr !266
  br i1 %32, label %dec_label_pc_1a68, label %dec_label_pc_1a5e, !insn.addr !267

dec_label_pc_1a5e:                                ; preds = %dec_label_pc_191b
  call void @free(i64* nonnull %31), !insn.addr !268
  br label %dec_label_pc_1a68, !insn.addr !269

dec_label_pc_1a68:                                ; preds = %dec_label_pc_191b, %dec_label_pc_1a5e
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21e1 to i8*)), !insn.addr !270
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20d8 to i8*)), !insn.addr !271
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21fe to i8*)), !insn.addr !272
  %36 = call i64 @__readfsqword(i64 40), !insn.addr !273
  %37 = icmp eq i64 %0, %36, !insn.addr !273
  %38 = icmp eq i1 %37, false, !insn.addr !274
  br i1 %38, label %dec_label_pc_1ae0, label %dec_label_pc_1abb, !insn.addr !274

dec_label_pc_1abb:                                ; preds = %dec_label_pc_1a68
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2110 to i8*)), !insn.addr !275
  ret void, !insn.addr !275

dec_label_pc_1ae0:                                ; preds = %dec_label_pc_1a68
  call void @__stack_chk_fail(), !insn.addr !276
  ret void, !insn.addr !276

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 0, 3, 2, 1, 4 }
  uselistorder void (i64*)* @free, { 0, 2, 1, 3 }
  uselistorder i64* (i32)* @malloc, { 0, 2, 1, 3 }
  uselistorder i32 16, { 1, 2, 3, 0 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0, 3, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 0, 5, 3, 4, 2, 6 }
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0, 3, 2 }
  uselistorder i1 false, { 20, 21, 1, 0, 2, 3, 13, 14, 15, 16, 17, 4, 5, 6, 7, 18, 19, 8, 9, 10, 11, 12 }
  uselistorder i32 0, { 2, 17, 6, 7, 8, 9, 15, 3, 16, 0, 1, 10, 11, 12, 13, 14, 4, 5 }
  uselistorder i64 4294967295, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 12, 13 }
  uselistorder i32 31, { 3, 0, 1, 2 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i64 0, { 4, 0, 1, 2, 38, 5, 3, 39, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 }
  uselistorder label %dec_label_pc_1a68, { 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1ae8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !277

; uselistorder directives
  uselistorder i32 1, { 3, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 52, 5, 4, 31, 46, 6, 7, 53, 2, 8, 56, 55, 54, 11, 10, 9, 0, 47, 14, 13, 12, 48, 17, 16, 15, 49, 20, 19, 18, 51, 23, 22, 21, 25, 24, 27, 26, 50, 29, 28, 58, 59, 1, 57, 30 }
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

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__asm_movaps(i128) local_unnamed_addr

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
!38 = !{i64 4852}
!39 = !{i64 4854}
!40 = !{i64 4873}
!41 = !{i64 4880}
!42 = !{i64 4886}
!43 = !{i64 4889}
!44 = !{i64 4910}
!45 = !{i64 4912}
!46 = !{i64 4892}
!47 = !{i64 4895}
!48 = !{i64 4901}
!49 = !{i64 4904}
!50 = !{i64 4914}
!51 = !{i64 4916}
!52 = !{i64 4922}
!53 = !{i64 4923}
!54 = !{i64 4927}
!55 = !{i64 4929}
!56 = !{i64 4931}
!57 = !{i64 4934}
!58 = !{i64 4941}
!59 = !{i64 4944}
!60 = !{i64 4952}
!61 = !{i64 4956}
!62 = !{i64 4960}
!63 = !{i64 4974}
!64 = !{i64 4978}
!65 = !{i64 4979}
!66 = !{i64 4983}
!67 = !{i64 4985}
!68 = !{i64 4987}
!69 = !{i64 5000}
!70 = !{i64 5003}
!71 = !{i64 5017}
!72 = !{i64 5023}
!73 = !{i64 5026}
!74 = !{i64 5035}
!75 = !{i64 5037}
!76 = !{i64 5049}
!77 = !{i64 5056}
!78 = !{i64 5080}
!79 = !{i64 5085}
!80 = !{i64 5093}
!81 = !{i64 5096}
!82 = !{i64 5098}
!83 = !{i64 5106}
!84 = !{i64 5110}
!85 = !{i64 5113}
!86 = !{i64 5116}
!87 = !{i64 5118}
!88 = !{i64 5129}
!89 = !{i64 5136}
!90 = !{i64 5157}
!91 = !{i64 5176}
!92 = !{i64 5181}
!93 = !{i64 5193}
!94 = !{i64 5195}
!95 = !{i64 5200}
!96 = !{i64 5203}
!97 = !{i64 5207}
!98 = !{i64 5210}
!99 = !{i64 5213}
!100 = !{i64 5215}
!101 = !{i64 5217}
!102 = !{i64 5221}
!103 = !{i64 5233}
!104 = !{i64 5242}
!105 = !{i64 5226}
!106 = !{i64 5249}
!107 = !{i64 5250}
!108 = !{i64 5255}
!109 = !{i64 5270}
!110 = !{i64 5280}
!111 = !{i64 5284}
!112 = !{i64 5286}
!113 = !{i64 5288}
!114 = !{i64 5296}
!115 = !{i64 5298}
!116 = !{i64 5301}
!117 = !{i64 5303}
!118 = !{i64 5321}
!119 = !{i64 5328}
!120 = !{i64 5334}
!121 = !{i64 5336}
!122 = !{i64 5344}
!123 = !{i64 5346}
!124 = !{i64 5349}
!125 = !{i64 5351}
!126 = !{i64 5369}
!127 = !{i64 5376}
!128 = !{i64 5380}
!129 = !{i64 5382}
!130 = !{i64 5390}
!131 = !{i64 5392}
!132 = !{i64 5396}
!133 = !{i64 5400}
!134 = !{i64 5404}
!135 = !{i64 5408}
!136 = !{i64 5411}
!137 = !{i64 5384}
!138 = !{i64 5413}
!139 = !{i64 5420}
!140 = !{i64 5424}
!141 = !{i64 5426}
!142 = !{i64 5430}
!143 = !{i64 5433}
!144 = !{i64 5435}
!145 = !{i64 5442}
!146 = !{i64 5456}
!147 = !{i64 5460}
!148 = !{i64 5464}
!149 = !{i64 5478}
!150 = !{i64 5502}
!151 = !{i64 5507}
!152 = !{i64 5512}
!153 = !{i64 5517}
!154 = !{i64 5641}
!155 = !{i64 5632}
!156 = !{i64 5635}
!157 = !{i64 5639}
!158 = !{i64 5644}
!159 = !{i64 5648}
!160 = !{i64 5652}
!161 = !{i64 5660}
!162 = !{i64 5665}
!163 = !{i64 5672}
!164 = !{i64 5675}
!165 = !{i64 5679}
!166 = !{i64 5682}
!167 = !{i64 5689}
!168 = !{i64 5698}
!169 = !{i64 5707}
!170 = !{i64 5708}
!171 = !{i64 5724}
!172 = !{i64 5732}
!173 = !{i64 5736}
!174 = !{i64 5753}
!175 = !{i64 5760}
!176 = !{i64 5784}
!177 = !{i64 5796}
!178 = !{i64 5805}
!179 = !{i64 5807}
!180 = !{i64 5815}
!181 = !{i64 5823}
!182 = !{i64 5855}
!183 = !{i64 5864}
!184 = !{i64 5878}
!185 = !{i64 5887}
!186 = !{i64 5892}
!187 = !{i64 5929}
!188 = !{i64 5941}
!189 = !{i64 5950}
!190 = !{i64 5952}
!191 = !{i64 5965}
!192 = !{i64 5994}
!193 = !{i64 6015}
!194 = !{i64 6023}
!195 = !{i64 6032}
!196 = !{i64 6046}
!197 = !{i64 6059}
!198 = !{i64 6068}
!199 = !{i64 6051}
!200 = !{i64 6076}
!201 = !{i64 6077}
!202 = !{i64 6093}
!203 = !{i64 6100}
!204 = !{i64 6102}
!205 = !{i64 6124}
!206 = !{i64 6129}
!207 = !{i64 6132}
!208 = !{i64 6117}
!209 = !{i64 6137}
!210 = !{i64 6145}
!211 = !{i64 6152}
!212 = !{i64 6160}
!213 = !{i64 6173}
!214 = !{i64 6178}
!215 = !{i64 6181}
!216 = !{i64 6186}
!217 = !{i64 6191}
!218 = !{i64 6200}
!219 = !{i64 6208}
!220 = !{i64 6212}
!221 = !{i64 6215}
!222 = !{i64 6219}
!223 = !{i64 6217}
!224 = !{i64 6223}
!225 = !{i64 6230}
!226 = !{i64 6233}
!227 = !{i64 6240}
!228 = !{i64 6242}
!229 = !{i64 6244}
!230 = !{i64 6251}
!231 = !{i64 6254}
!232 = !{i64 6265}
!233 = !{i64 6276}
!234 = !{i64 6279}
!235 = !{i64 6297}
!236 = !{i64 6313}
!237 = !{i64 6329}
!238 = !{i64 6336}
!239 = !{i64 6353}
!240 = !{i64 6369}
!241 = !{i64 6393}
!242 = !{i64 6408}
!243 = !{i64 6418}
!244 = !{i64 6419}
!245 = !{i64 6423}
!246 = !{i64 6425}
!247 = !{i64 6457}
!248 = !{i64 6481}
!249 = !{i64 6488}
!250 = !{i64 6509}
!251 = !{i64 6533}
!252 = !{i64 6557}
!253 = !{i64 6564}
!254 = !{i64 6585}
!255 = !{i64 6609}
!256 = !{i64 6619}
!257 = !{i64 6628}
!258 = !{i64 6642}
!259 = !{i64 6664}
!260 = !{i64 6674}
!261 = !{i64 6682}
!262 = !{i64 6691}
!263 = !{i64 6705}
!264 = !{i64 6727}
!265 = !{i64 6737}
!266 = !{i64 6745}
!267 = !{i64 6748}
!268 = !{i64 6750}
!269 = !{i64 6755}
!270 = !{i64 6774}
!271 = !{i64 6798}
!272 = !{i64 6822}
!273 = !{i64 6832}
!274 = !{i64 6841}
!275 = !{i64 6868}
!276 = !{i64 6880}
!277 = !{i64 6900}
