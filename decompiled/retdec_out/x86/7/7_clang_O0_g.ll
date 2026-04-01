source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3e8 = global i32 1230962783
@global_var_3874 = constant i32 67374175
@global_var_37d6 = local_unnamed_addr constant i32 72351744
@global_var_3786 = local_unnamed_addr constant i32 33885506
@global_var_3cc = constant [15 x i8] c"erTMCloneTable\00"
@global_var_3754 = constant [15 x i8]* @global_var_3cc
@global_var_3714 = constant i32 -7236
@global_var_36a4 = local_unnamed_addr constant i32 4
@global_var_3644 = constant i32 24
@global_var_3604 = constant i32 28
@global_var_3594 = local_unnamed_addr constant i32 222429829
@global_var_34b4 = local_unnamed_addr constant i32 300
@global_var_3424 = local_unnamed_addr constant i32 222429829
@global_var_3344 = local_unnamed_addr constant i32 1284
@global_var_2f0 = global i32 0
@global_var_32c4 = local_unnamed_addr constant i32* @global_var_2f0
@global_var_31f6 = local_unnamed_addr constant i32 -1662607460
@global_var_31d4 = constant i32 673211429
@global_var_3016 = local_unnamed_addr constant i32 -1212684651
@0 = external global i32

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define i32 @function_1040(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_1060([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1060:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1070([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @function_1080(i32* %ptr) local_unnamed_addr {
dec_label_pc_1080:
  call void @free(i32* %ptr), !insn.addr !8
  ret void, !insn.addr !8
}

define i32* @function_1090(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define void (i32)* @function_10a0(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !10
  ret void (i32)* %0, !insn.addr !10
}

define i32* @function_10b0(i32 %size) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !11
  ret i32* %0, !insn.addr !11
}

define i32 @function_10c0(i8* %s) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32* @function_10d0(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !13
  ret i32* %0, !insn.addr !13
}

define i8* @function_10e0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_10f0() local_unnamed_addr {
dec_label_pc_10f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1100:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_112c(i32 %2), !insn.addr !16
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 16100, !insn.addr !17
  %6 = inttoptr i32 %5 to i32*, !insn.addr !17
  %7 = load i32, i32* %6, align 4, !insn.addr !17
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !18
  %9 = call i32 @__asm_hlt(), !insn.addr !19
  unreachable, !insn.addr !19

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_112c(i32 %arg1) local_unnamed_addr {
dec_label_pc_112c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !20
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !21
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !22
  %3 = add i32 %1, 16131, !insn.addr !23
  ret i32 %3, !insn.addr !24
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !25
  ret i32 0, !insn.addr !26
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !27
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !28
  %3 = add i32 %1, 15979, !insn.addr !29
  %4 = inttoptr i32 %3 to i8*, !insn.addr !29
  %5 = load i8, i8* %4, align 1, !insn.addr !29
  %6 = icmp eq i8 %5, 0, !insn.addr !29
  %7 = icmp eq i1 %6, false, !insn.addr !30
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !30
  br i1 %7, label %dec_label_pc_1252, label %dec_label_pc_11f1, !insn.addr !30

dec_label_pc_11f1:                                ; preds = %dec_label_pc_11d0
  %8 = add i32 %1, 15891, !insn.addr !31
  %9 = inttoptr i32 %8 to i32*, !insn.addr !31
  %10 = load i32, i32* %9, align 4, !insn.addr !31
  %11 = icmp eq i32 %10, 0, !insn.addr !32
  br i1 %11, label %dec_label_pc_120e, label %dec_label_pc_11fb, !insn.addr !33

dec_label_pc_11fb:                                ; preds = %dec_label_pc_11f1
  %12 = call i32 @function_10f0(), !insn.addr !34
  br label %dec_label_pc_120e, !insn.addr !35

dec_label_pc_120e:                                ; preds = %dec_label_pc_11fb, %dec_label_pc_11f1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !36
  store i8 1, i8* %4, align 1, !insn.addr !37
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !37
  br label %dec_label_pc_1252, !insn.addr !37

dec_label_pc_1252:                                ; preds = %dec_label_pc_120e, %dec_label_pc_11d0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !38

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1260:
  %0 = call i32 @register_tm_clones(), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1269:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !40
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_126d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !41
}

define i32 @param_fake_branch(i32 %x) local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = trunc i64 %2 to i32, !insn.addr !42
  %5 = mul i64 %2, 4294967296
  %6 = ashr exact i64 %5, 32, !insn.addr !43
  %7 = mul nsw i64 %6, %6, !insn.addr !43
  %8 = trunc i64 %7 to i32, !insn.addr !43
  %9 = icmp slt i32 %8, 0, !insn.addr !44
  %10 = icmp eq i1 %9, false, !insn.addr !45
  %11 = mul i32 %4, 2
  %12 = add i32 %11, -559038737
  %result_-12.0 = select i1 %10, i32 %4, i32 %12
  %13 = add i32 %3, 7548, !insn.addr !46
  %14 = inttoptr i32 %13 to i8*, !insn.addr !47
  %15 = call i32 @strlen(i8* %14), !insn.addr !48
  ret i32 %result_-12.0, !insn.addr !49

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i32 @param_fake_branch(i32 10), !insn.addr !50
  ret i32 %0, !insn.addr !51
}

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_1330:
  %a_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !52
  %a_-16.04.reg2mem = alloca i32, !insn.addr !52
  %b_-20.05.reg2mem = alloca i32, !insn.addr !52
  %0 = add i32 %x, 1, !insn.addr !53
  %1 = icmp eq i32 %0, 0, !insn.addr !54
  store i32 %0, i32* %b_-20.05.reg2mem, !insn.addr !55
  store i32 %x, i32* %a_-16.04.reg2mem, !insn.addr !55
  store i32 -1, i32* %a_-16.0.lcssa.reg2mem, !insn.addr !55
  br i1 %1, label %dec_label_pc_139b, label %dec_label_pc_1380, !insn.addr !55

dec_label_pc_1380:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1380
  %a_-16.04.reload = load i32, i32* %a_-16.04.reg2mem
  %b_-20.05.reload = load i32, i32* %b_-20.05.reg2mem
  %2 = ashr i32 %a_-16.04.reload, 31, !insn.addr !56
  %3 = zext i32 %a_-16.04.reload to i64, !insn.addr !57
  %4 = zext i32 %2 to i64, !insn.addr !57
  %5 = mul i64 %4, 4294967296, !insn.addr !57
  %6 = or i64 %5, %3, !insn.addr !57
  %7 = zext i32 %b_-20.05.reload to i64, !insn.addr !57
  %8 = srem i64 %6, %7, !insn.addr !57
  %9 = trunc i64 %8 to i32, !insn.addr !57
  %10 = icmp eq i32 %9, 0, !insn.addr !54
  store i32 %9, i32* %b_-20.05.reg2mem, !insn.addr !55
  store i32 %b_-20.05.reload, i32* %a_-16.04.reg2mem, !insn.addr !55
  store i32 %b_-20.05.reload, i32* %a_-16.0.lcssa.reg2mem, !insn.addr !55
  br i1 %10, label %dec_label_pc_139b, label %dec_label_pc_1380, !insn.addr !55

dec_label_pc_139b:                                ; preds = %dec_label_pc_1380, %dec_label_pc_1330
  %11 = add i32 %x, 2
  %12 = mul i32 %11, %x, !insn.addr !58
  %13 = add i32 %12, 1, !insn.addr !59
  %14 = mul i32 %0, %0, !insn.addr !60
  %15 = icmp eq i32 %13, %14, !insn.addr !61
  %a_-16.0.lcssa.reload = load i32, i32* %a_-16.0.lcssa.reg2mem
  %16 = icmp eq i32 %a_-16.0.lcssa.reload, 1, !insn.addr !62
  %17 = icmp eq i1 %15, %16
  %18 = mul i32 %x, 3
  %19 = add i32 %18, 20
  %20 = mul i32 %x, 2
  %21 = add i32 %20, 10
  %storemerge = select i1 %17, i32 %21, i32 %19
  ret i32 %storemerge, !insn.addr !63

; uselistorder directives
  uselistorder i32 %0, { 2, 3, 0, 1 }
  uselistorder i32* %b_-20.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-16.04.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 1, 3, 2, 4, 0, 5 }
  uselistorder label %dec_label_pc_1380, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !64
  ret i32 %0, !insn.addr !65
}

define i32 @param_instruction_substitution(i32 %x) local_unnamed_addr {
dec_label_pc_1440:
  %0 = udiv i32 %x, 2, !insn.addr !66
  %1 = urem i32 %x, 16, !insn.addr !67
  %reass.mul = mul i32 %x, 21
  %2 = add nuw i32 %1, %0, !insn.addr !68
  %3 = add i32 %2, %reass.mul, !insn.addr !69
  ret i32 %3, !insn.addr !70

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @param_instruction_substitution(i32 10), !insn.addr !71
  ret i32 %0, !insn.addr !72
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i32 %len, i8 %key) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = alloca i8
  %storemerge.in6.reg2mem = alloca i32, !insn.addr !73
  %storemerge7.reg2mem = alloca i8*, !insn.addr !73
  %.reg2mem = alloca i8, !insn.addr !73
  %1 = sext i8 %key to i32
  %2 = inttoptr i32 %len to i8*
  %3 = load i8, i8* %0
  %4 = call i8* @strncpy(i8* %2, i8* %buffer, i32 %1), !insn.addr !74
  %5 = add i32 %len, -1, !insn.addr !75
  %6 = add i32 %5, %1, !insn.addr !76
  %7 = inttoptr i32 %6 to i8*, !insn.addr !76
  store i8 0, i8* %7, align 1, !insn.addr !76
  %8 = load i8, i8* %2, align 1, !insn.addr !77
  %9 = icmp eq i8 %8, 0, !insn.addr !77
  store i8 %8, i8* %.reg2mem, !insn.addr !78
  store i8* %2, i8** %storemerge7.reg2mem, !insn.addr !78
  store i32 %len, i32* %storemerge.in6.reg2mem, !insn.addr !78
  br i1 %9, label %dec_label_pc_1543, label %dec_label_pc_1527, !insn.addr !78

dec_label_pc_1527:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_1527
  %storemerge.in6.reload = load i32, i32* %storemerge.in6.reg2mem
  %storemerge7.reload = load i8*, i8** %storemerge7.reg2mem
  %.reload = load i8, i8* %.reg2mem
  %10 = xor i8 %.reload, %3
  store i8 %10, i8* %storemerge7.reload, align 1, !insn.addr !79
  %11 = add i32 %storemerge.in6.reload, 1, !insn.addr !80
  %storemerge = inttoptr i32 %11 to i8*
  %12 = load i8, i8* %storemerge, align 1, !insn.addr !77
  %13 = icmp eq i8 %12, 0, !insn.addr !77
  store i8 %12, i8* %.reg2mem, !insn.addr !78
  store i8* %storemerge, i8** %storemerge7.reg2mem, !insn.addr !78
  store i32 %11, i32* %storemerge.in6.reg2mem, !insn.addr !78
  br i1 %13, label %dec_label_pc_1543, label %dec_label_pc_1527, !insn.addr !78

dec_label_pc_1543:                                ; preds = %dec_label_pc_1527, %dec_label_pc_14d0
  ret i8* %2, !insn.addr !81

; uselistorder directives
  uselistorder i8* %2, { 2, 0, 1, 3 }
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %storemerge7.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.in6.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1527, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1550:
  %0 = alloca i32
  %decrypted_-40 = alloca [1 x i8], align 1
  %1 = load i32, i32* %0
  %2 = add i32 %1, 15076, !insn.addr !82
  %3 = inttoptr i32 %2 to i8*, !insn.addr !83
  %4 = getelementptr inbounds [1 x i8], [1 x i8]* %decrypted_-40, i32 0, i32 0, !insn.addr !84
  %5 = call i8* @decrypt_string(i8* %3, i8* nonnull %4, i32 32, i8 90), !insn.addr !84
  %6 = call i32 @strlen(i8* nonnull %4), !insn.addr !85
  %7 = load i8, i8* %4, align 1, !insn.addr !86
  %8 = sext i8 %7 to i32, !insn.addr !86
  %9 = add i32 %6, %8, !insn.addr !87
  ret i32 %9, !insn.addr !88

; uselistorder directives
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i32 @param_string_encryption(), !insn.addr !89
  ret i32 %0, !insn.addr !90
}

define i32 @param_tail_call_optimized(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !91
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %acc, 0, !insn.addr !92
  %3 = icmp slt i32 %acc, 0, !insn.addr !92
  %4 = icmp eq i1 %3, false, !insn.addr !93
  %5 = icmp eq i1 %2, false, !insn.addr !93
  %6 = icmp eq i1 %4, %5, !insn.addr !93
  br i1 %6, label %dec_label_pc_1601, label %dec_label_pc_161f, !insn.addr !93

dec_label_pc_1601:                                ; preds = %dec_label_pc_15d0
  %7 = add i32 %acc, -1, !insn.addr !94
  %8 = add i32 %1, %acc, !insn.addr !95
  %9 = call i32 @param_tail_call_optimized(i32 %7, i32 %8), !insn.addr !96
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !97
  br label %dec_label_pc_161f, !insn.addr !97

dec_label_pc_161f:                                ; preds = %dec_label_pc_15d0, %dec_label_pc_1601
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !98

; uselistorder directives
  uselistorder i32 %acc, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_161f, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_1630:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), !insn.addr !99
  ret i32 %0, !insn.addr !100

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_1660:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !101
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !102
  %3 = icmp slt i32 %1, 0, !insn.addr !102
  %4 = icmp eq i1 %3, false, !insn.addr !103
  %5 = icmp eq i1 %2, false, !insn.addr !103
  %6 = icmp eq i1 %4, %5, !insn.addr !103
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !103
  br i1 %6, label %dec_label_pc_168f, label %dec_label_pc_16b0, !insn.addr !103

dec_label_pc_168f:                                ; preds = %dec_label_pc_1660
  %7 = add i32 %1, -1, !insn.addr !104
  %8 = call i32 @param_non_tail_call(i32 %7), !insn.addr !105
  %9 = add i32 %8, %1, !insn.addr !106
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !107
  br label %dec_label_pc_16b0, !insn.addr !107

dec_label_pc_16b0:                                ; preds = %dec_label_pc_1660, %dec_label_pc_168f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !108

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16b0, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !109
  ret i32 %0, !insn.addr !110

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_16f0:
  %sum_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !111
  %sum_-12.02.reg2mem = alloca i32, !insn.addr !111
  %storemerge13.reg2mem = alloca i32, !insn.addr !111
  %storemerge4.reg2mem = alloca i32, !insn.addr !111
  %0 = ptrtoint i32* %c to i32
  %1 = ptrtoint i32* %b to i32
  %2 = ptrtoint i32* %a to i32
  %3 = icmp sgt i32 %n, 0
  store i32 0, i32* %storemerge4.reg2mem, !insn.addr !112
  store i32 0, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !112
  br i1 %3, label %dec_label_pc_1715, label %dec_label_pc_1775, !insn.addr !112

dec_label_pc_1715:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_1715
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %4 = mul i32 %storemerge4.reload, 4, !insn.addr !113
  %5 = add i32 %4, %2, !insn.addr !113
  %6 = inttoptr i32 %5 to i32*, !insn.addr !113
  %7 = load i32, i32* %6, align 4, !insn.addr !113
  %8 = add i32 %4, %1, !insn.addr !114
  %9 = inttoptr i32 %8 to i32*, !insn.addr !114
  %10 = load i32, i32* %9, align 4, !insn.addr !114
  %11 = add i32 %10, %7, !insn.addr !114
  %12 = add i32 %4, %0, !insn.addr !115
  %13 = inttoptr i32 %12 to i32*, !insn.addr !115
  store i32 %11, i32* %13, align 4, !insn.addr !115
  %14 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !116
  %exitcond5 = icmp eq i32 %14, %n
  store i32 %14, i32* %storemerge4.reg2mem, !insn.addr !112
  store i32 0, i32* %storemerge13.reg2mem, !insn.addr !112
  store i32 0, i32* %sum_-12.02.reg2mem, !insn.addr !112
  br i1 %exitcond5, label %dec_label_pc_1758, label %dec_label_pc_1715, !insn.addr !112

dec_label_pc_1758:                                ; preds = %dec_label_pc_1715, %dec_label_pc_1758
  %sum_-12.02.reload = load i32, i32* %sum_-12.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %15 = mul i32 %storemerge13.reload, 4, !insn.addr !117
  %16 = add i32 %15, %0, !insn.addr !117
  %17 = inttoptr i32 %16 to i32*, !insn.addr !117
  %18 = load i32, i32* %17, align 4, !insn.addr !117
  %19 = add i32 %18, %sum_-12.02.reload, !insn.addr !118
  %20 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !119
  %exitcond = icmp eq i32 %20, %n
  store i32 %20, i32* %storemerge13.reg2mem, !insn.addr !120
  store i32 %19, i32* %sum_-12.02.reg2mem, !insn.addr !120
  store i32 %19, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !120
  br i1 %exitcond, label %dec_label_pc_1775, label %dec_label_pc_1758, !insn.addr !120

dec_label_pc_1775:                                ; preds = %dec_label_pc_1758, %dec_label_pc_16f0
  %sum_-12.0.lcssa.reload = load i32, i32* %sum_-12.0.lcssa.reg2mem
  ret i32 %sum_-12.0.lcssa.reload, !insn.addr !121

; uselistorder directives
  uselistorder i32 %4, { 2, 1, 0 }
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1758, { 1, 0 }
  uselistorder label %dec_label_pc_1715, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1780:
  %0 = alloca i32
  %c_-104 = alloca [1 x i32], align 4
  %b_-72 = alloca [1 x i32], align 4
  %a_-40 = alloca [1 x i32], align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3874 to i32), i32 -7668), !insn.addr !122
  %3 = getelementptr inbounds [1 x i32], [1 x i32]* %a_-40, i32 0, i32 0, !insn.addr !123
  %4 = inttoptr i32 %2 to i32*, !insn.addr !123
  %5 = call i32* @memcpy(i32* nonnull %3, i32* %4, i32 32), !insn.addr !123
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3874 to i32), i32 -7636), !insn.addr !124
  %7 = getelementptr inbounds [1 x i32], [1 x i32]* %b_-72, i32 0, i32 0, !insn.addr !125
  %8 = inttoptr i32 %6 to i32*, !insn.addr !125
  %9 = call i32* @memcpy(i32* nonnull %7, i32* %8, i32 32), !insn.addr !125
  %10 = getelementptr inbounds [1 x i32], [1 x i32]* %c_-104, i32 0, i32 0, !insn.addr !126
  %11 = call i32* @memset(i32* nonnull %10, i32 0, i32 32), !insn.addr !126
  %12 = call i32 @param_vectorized_loop(i32* nonnull %3, i32* nonnull %7, i32* nonnull %10, i32 8), !insn.addr !127
  ret i32 %12, !insn.addr !128

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 1, 0, 2 }
}

define i32 @param_link_time_optimization(i32 %x) local_unnamed_addr {
dec_label_pc_1820:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @lto_target_func(i32 %1), !insn.addr !129
  ret i32 %2, !insn.addr !130
}

define i32 @lto_target_func(i32 %x) local_unnamed_addr {
dec_label_pc_1850:
  %0 = mul i32 %x, 2, !insn.addr !131
  %1 = add i32 %0, 10, !insn.addr !132
  ret i32 %1, !insn.addr !133
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @param_link_time_optimization(i32 5), !insn.addr !134
  ret i32 %0, !insn.addr !135
}

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_18a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint ([15 x i8]** @global_var_3754 to i32), i32 80), !insn.addr !136
  %3 = inttoptr i32 %2 to i32*, !insn.addr !136
  store i32 1, i32* %3, align 4, !insn.addr !136
  %4 = add i32 %1, add (i32 ptrtoint ([15 x i8]** @global_var_3754 to i32), i32 84), !insn.addr !137
  %5 = insertvalue [8 x i32] undef, i32 %4, 0, !insn.addr !138
  %6 = insertvalue %__jmp_buf_tag undef, [8 x i32] %5, 0, !insn.addr !138
  %7 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %6, 0, !insn.addr !138
  call void @longjmp([1 x %__jmp_buf_tag] %7, i32 ptrtoint (i32* @0 to i32)), !insn.addr !138
  ret void, !insn.addr !138

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_18e0:
  %0 = alloca i64
  %1 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !139
  %2 = load i64, i64* %0
  %3 = load i32, i32* %1
  %4 = add i32 %3, add (i32 ptrtoint (i32* @global_var_3714 to i32), i32 -14176), !insn.addr !140
  %5 = inttoptr i32 %4 to void (i32)*, !insn.addr !141
  %6 = call void (i32)* @signal(i32 8, void (i32)* %5), !insn.addr !141
  %7 = add i32 %3, add (i32 ptrtoint (i32* @global_var_3714 to i32), i32 -14092), !insn.addr !142
  %8 = insertvalue [8 x i32] undef, i32 %7, 0, !insn.addr !143
  %9 = insertvalue %__jmp_buf_tag undef, [8 x i32] %8, 0, !insn.addr !143
  %10 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %9, 0, !insn.addr !143
  %11 = call i32 @_setjmp([1 x %__jmp_buf_tag] %10), !insn.addr !143
  %12 = icmp eq i32 %11, 0, !insn.addr !144
  %13 = icmp eq i1 %12, false, !insn.addr !145
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !145
  br i1 %13, label %dec_label_pc_1947, label %dec_label_pc_1929, !insn.addr !145

dec_label_pc_1929:                                ; preds = %dec_label_pc_18e0
  %.rhs.trunc = trunc i64 %2 to i32
  %14 = udiv i32 10, %.rhs.trunc
  store i32 %14, i32* %storemerge.reg2mem, !insn.addr !146
  br label %dec_label_pc_1947, !insn.addr !146

dec_label_pc_1947:                                ; preds = %dec_label_pc_18e0, %dec_label_pc_1929
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !147

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1947, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1950:
  %0 = call i32 @param_division_by_zero(i32 5), !insn.addr !148
  %1 = call i32 @param_division_by_zero(i32 0), !insn.addr !149
  %2 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !150
  %3 = add i32 %1, %0, !insn.addr !151
  ret i32 %3, !insn.addr !152

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3644 to i32), i32 240), !insn.addr !153
  %3 = inttoptr i32 %2 to i32*, !insn.addr !153
  store i32 1, i32* %3, align 4, !insn.addr !153
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3644 to i32), i32 244), !insn.addr !154
  %5 = insertvalue [8 x i32] undef, i32 %4, 0, !insn.addr !155
  %6 = insertvalue %__jmp_buf_tag undef, [8 x i32] %5, 0, !insn.addr !155
  %7 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %6, 0, !insn.addr !155
  call void @longjmp([1 x %__jmp_buf_tag] %7, i32 ptrtoint (i32* @0 to i32)), !insn.addr !155
  ret void, !insn.addr !155

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !156
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3604 to i32), i32 -13904), !insn.addr !157
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !158
  %5 = call void (i32)* @signal(i32 11, void (i32)* %4), !insn.addr !158
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_3604 to i32), i32 -13660), !insn.addr !159
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !160
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !160
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !160
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !160
  %11 = icmp eq i32 %10, 0, !insn.addr !161
  %12 = icmp eq i1 %11, false, !insn.addr !162
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !162
  br i1 %12, label %dec_label_pc_1a53, label %dec_label_pc_1a39, !insn.addr !162

dec_label_pc_1a39:                                ; preds = %dec_label_pc_19f0
  %13 = inttoptr i32 %1 to i32*, !insn.addr !163
  %14 = load i32, i32* %13, align 4, !insn.addr !163
  store i32 %14, i32* %storemerge.reg2mem, !insn.addr !164
  br label %dec_label_pc_1a53, !insn.addr !164

dec_label_pc_1a53:                                ; preds = %dec_label_pc_19f0, %dec_label_pc_1a39
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !165

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] undef, { 0, 2, 1, 3 }
  uselistorder %__jmp_buf_tag undef, { 0, 2, 1, 3 }
  uselistorder [8 x i32] undef, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1a53, { 1, 0 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1a60:
  %valid_-12 = alloca i32, align 4
  store i32 42, i32* %valid_-12, align 4, !insn.addr !166
  %0 = call i32 @param_null_pointer_deref(i32* nonnull %valid_-12), !insn.addr !167
  %1 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !168
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !169
  %3 = add i32 %1, %0, !insn.addr !170
  ret i32 %3, !insn.addr !171

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %x) local_unnamed_addr {
dec_label_pc_1ad0:
  %storemerge2.reg2mem = alloca i32, !insn.addr !172
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !173
  %1 = add i32 %0, -8, !insn.addr !174
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1af1

dec_label_pc_1af1:                                ; preds = %dec_label_pc_1ad0, %dec_label_pc_1af1
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = add i32 %1, %storemerge2.reload, !insn.addr !174
  %3 = inttoptr i32 %2 to i8*, !insn.addr !174
  store i8 65, i8* %3, align 1, !insn.addr !174
  %4 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !175
  %exitcond = icmp eq i32 %4, 17
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !176
  br i1 %exitcond, label %dec_label_pc_1b07, label %dec_label_pc_1af1, !insn.addr !176

dec_label_pc_1b07:                                ; preds = %dec_label_pc_1af1
  ret i32 %x, !insn.addr !177

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1af1, { 1, 0 }
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_1b40:
  %.reg2mem = alloca i8*, !insn.addr !178
  %storemerge2.reg2mem = alloca i32, !insn.addr !178
  %stack_var_4 = alloca i8*, align 4
  %0 = call i32* @malloc(i32 16), !insn.addr !179
  %1 = icmp eq i32* %0, null, !insn.addr !180
  %2 = icmp eq i1 %1, false, !insn.addr !181
  store i8* inttoptr (i32 -2 to i8*), i8** %.reg2mem, !insn.addr !181
  br i1 %2, label %dec_label_pc_1b85.preheader, label %dec_label_pc_1bbb, !insn.addr !181

dec_label_pc_1b85.preheader:                      ; preds = %dec_label_pc_1b40
  %3 = ptrtoint i32* %0 to i32, !insn.addr !182
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1b8f

dec_label_pc_1b8f:                                ; preds = %dec_label_pc_1b85.preheader, %dec_label_pc_1b8f
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = add i32 %storemerge2.reload, %3, !insn.addr !183
  %5 = inttoptr i32 %4 to i8*, !insn.addr !183
  store i8 66, i8* %5, align 1, !insn.addr !183
  %6 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !184
  %exitcond = icmp eq i32 %6, 33
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !185
  br i1 %exitcond, label %dec_label_pc_1ba7, label %dec_label_pc_1b8f, !insn.addr !185

dec_label_pc_1ba7:                                ; preds = %dec_label_pc_1b8f
  call void @free(i32* %0), !insn.addr !186
  %7 = load i8*, i8** %stack_var_4, align 4
  store i8* %7, i8** %.reg2mem, !insn.addr !187
  br label %dec_label_pc_1bbb, !insn.addr !187

dec_label_pc_1bbb:                                ; preds = %dec_label_pc_1b40, %dec_label_pc_1ba7
  %.reload = load i8*, i8** %.reg2mem, !insn.addr !188
  %8 = ptrtoint i8* %.reload to i32, !insn.addr !188
  ret i32 %8, !insn.addr !189

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i8** %.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1bbb, { 1, 0 }
  uselistorder label %dec_label_pc_1b8f, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = call i32 @param_buffer_overflow_stack(i32 10), !insn.addr !190
  %1 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !191
  %2 = add i32 %1, %0, !insn.addr !192
  ret i32 %2, !insn.addr !193

; uselistorder directives
  uselistorder i32 10, { 1, 0, 4, 2, 5, 3 }
}

define i32 @param_integer_overflow(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1c20:
  %signed_sum_-8.0.reg2mem = alloca i32, !insn.addr !194
  %0 = add i32 %b, %a, !insn.addr !195
  %1 = icmp slt i32 %a, 1, !insn.addr !196
  %2 = icmp slt i32 %b, 1, !insn.addr !197
  %or.cond = or i1 %1, %2
  %3 = icmp slt i32 %0, 0, !insn.addr !198
  %4 = icmp eq i1 %3, false, !insn.addr !199
  %or.cond5 = or i1 %or.cond, %4
  store i32 -1, i32* %signed_sum_-8.0.reg2mem, !insn.addr !196
  br i1 %or.cond5, label %dec_label_pc_1c74, label %dec_label_pc_1ca4, !insn.addr !196

dec_label_pc_1c74:                                ; preds = %dec_label_pc_1c20
  %5 = icmp slt i32 %a, 0, !insn.addr !200
  %6 = icmp eq i1 %5, false, !insn.addr !201
  br i1 %6, label %dec_label_pc_1c9e, label %dec_label_pc_1c7e, !insn.addr !201

dec_label_pc_1c7e:                                ; preds = %dec_label_pc_1c74
  %7 = icmp slt i32 %b, 0, !insn.addr !202
  %8 = icmp eq i1 %7, false, !insn.addr !203
  %9 = icmp slt i32 %0, 1, !insn.addr !204
  %or.cond3 = or i1 %8, %9
  store i32 -2, i32* %signed_sum_-8.0.reg2mem, !insn.addr !203
  br i1 %or.cond3, label %dec_label_pc_1c9e, label %dec_label_pc_1ca4, !insn.addr !203

dec_label_pc_1c9e:                                ; preds = %dec_label_pc_1c7e, %dec_label_pc_1c74
  store i32 %0, i32* %signed_sum_-8.0.reg2mem, !insn.addr !205
  br label %dec_label_pc_1ca4, !insn.addr !205

dec_label_pc_1ca4:                                ; preds = %dec_label_pc_1c7e, %dec_label_pc_1c20, %dec_label_pc_1c9e
  %signed_sum_-8.0.reload = load i32, i32* %signed_sum_-8.0.reg2mem
  ret i32 %signed_sum_-8.0.reload, !insn.addr !206

; uselistorder directives
  uselistorder i32 %0, { 0, 2, 1 }
  uselistorder i32* %signed_sum_-8.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 %b, { 1, 2, 0 }
  uselistorder i32 %a, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1ca4, { 2, 0, 1 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = call i32 @param_integer_overflow(i32 1000000000, i32 1000000000), !insn.addr !207
  %1 = call i32 @param_integer_overflow(i32 -1, i32 1), !insn.addr !208
  %2 = add i32 %1, %0, !insn.addr !209
  ret i32 %2, !insn.addr !210

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_integer_overflow, { 1, 0 }
  uselistorder i32 1000000000, { 1, 0 }
}

define i32 @param_undefined_behavior(i32 %i) local_unnamed_addr {
dec_label_pc_1d10:
  %0 = mul i32 %i, 2, !insn.addr !211
  ret i32 %0, !insn.addr !212

; uselistorder directives
  uselistorder i32 2, { 0, 1, 4, 2, 5, 3 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1d30:
  %0 = call i32 @param_undefined_behavior(i32 5), !insn.addr !213
  ret i32 %0, !insn.addr !214
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1d60:
  ret i32 43, !insn.addr !215
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1e00:
  %0 = call i32 @param_implementation_defined(), !insn.addr !216
  ret i32 %0, !insn.addr !217
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1e20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8179), !insn.addr !218
  %3 = inttoptr i32 %2 to i8*, !insn.addr !219
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !220
  %5 = call i32 @call_fake_branch(), !insn.addr !221
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8133), !insn.addr !222
  %7 = inttoptr i32 %6 to i8*, !insn.addr !223
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !224
  %9 = call i32 @call_opaque_predicate(), !insn.addr !225
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8105), !insn.addr !226
  %11 = inttoptr i32 %10 to i8*, !insn.addr !227
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !228
  %13 = call i32 @call_instruction_substitution(), !insn.addr !229
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8077), !insn.addr !230
  %15 = inttoptr i32 %14 to i8*, !insn.addr !231
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !232
  %17 = call i32 @call_string_encryption(), !insn.addr !233
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8048), !insn.addr !234
  %19 = inttoptr i32 %18 to i8*, !insn.addr !235
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !236
  %21 = call i32 @call_tail_call_optimized(), !insn.addr !237
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -8020), !insn.addr !238
  %23 = inttoptr i32 %22 to i8*, !insn.addr !239
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !240
  %25 = call i32 @call_non_tail_call(), !insn.addr !241
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7978), !insn.addr !242
  %27 = inttoptr i32 %26 to i8*, !insn.addr !243
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !244
  %29 = call i32 @call_vectorized_loop(), !insn.addr !245
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7941), !insn.addr !246
  %31 = inttoptr i32 %30 to i8*, !insn.addr !247
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !248
  %33 = call i32 @call_link_time_optimization(), !insn.addr !249
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7903), !insn.addr !250
  %35 = inttoptr i32 %34 to i8*, !insn.addr !251
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !252
  %37 = call i32 @call_division_by_zero(), !insn.addr !253
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7871), !insn.addr !254
  %39 = inttoptr i32 %38 to i8*, !insn.addr !255
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !256
  %41 = call i32 @call_null_pointer_deref(), !insn.addr !257
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7843), !insn.addr !258
  %43 = inttoptr i32 %42 to i8*, !insn.addr !259
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !260
  %45 = call i32 @call_buffer_overflow(), !insn.addr !261
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7814), !insn.addr !262
  %47 = inttoptr i32 %46 to i8*, !insn.addr !263
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !264
  %49 = call i32 @call_integer_overflow(), !insn.addr !265
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7785), !insn.addr !266
  %51 = inttoptr i32 %50 to i8*, !insn.addr !267
  %52 = call i32 (i8*, ...) @printf(i8* %51), !insn.addr !268
  %53 = call i32 @call_undefined_behavior(), !insn.addr !269
  %54 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7736), !insn.addr !270
  %55 = inttoptr i32 %54 to i8*, !insn.addr !271
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !272
  %57 = call i32 @call_implementation_defined(), !insn.addr !273
  %58 = add i32 %1, add (i32 ptrtoint (i32* @global_var_31d4 to i32), i32 -7707), !insn.addr !274
  %59 = inttoptr i32 %58 to i8*, !insn.addr !275
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !276
  ret void, !insn.addr !277

; uselistorder directives
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1fe0:
  call void @test_obf_opt_edge(), !insn.addr !278
  ret i32 0, !insn.addr !279

; uselistorder directives
  uselistorder i32 0, { 7, 25, 26, 11, 0, 1, 27, 12, 28, 21, 13, 14, 15, 16, 17, 18, 3, 4, 2, 5, 9, 6, 29, 30, 22, 31, 32, 19, 20, 33, 10, 34, 24, 8, 23 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2010:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !280
  %ebx.0.reg2mem = alloca i32, !insn.addr !280
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !281
  %3 = add i32 %1, 12019, !insn.addr !282
  %4 = inttoptr i32 %3 to i32*, !insn.addr !282
  %5 = load i32, i32* %4, align 4, !insn.addr !282
  %6 = icmp eq i32 %5, -1, !insn.addr !283
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !284
  store i32 -1, i32* %merge.reg2mem, !insn.addr !284
  br i1 %6, label %dec_label_pc_204d, label %dec_label_pc_2040, !insn.addr !284

dec_label_pc_2040:                                ; preds = %dec_label_pc_2010, %dec_label_pc_2040
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !285
  %8 = inttoptr i32 %7 to i32*, !insn.addr !285
  %9 = load i32, i32* %8, align 4, !insn.addr !285
  %10 = icmp eq i32 %9, -1, !insn.addr !286
  %11 = icmp eq i1 %10, false, !insn.addr !287
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !287
  store i32 %9, i32* %merge.reg2mem, !insn.addr !287
  br i1 %11, label %dec_label_pc_2040, label %dec_label_pc_204d, !insn.addr !287

dec_label_pc_204d:                                ; preds = %dec_label_pc_2040, %dec_label_pc_2010
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !288

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 7, 1, 2, 0, 8, 9, 10, 11, 3, 12, 4, 5, 6 }
  uselistorder i32 -1, { 5, 0, 6, 7, 1, 2, 3, 8, 9, 10, 4 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_2040, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_205c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !289
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !290
  ret i32 %3, !insn.addr !291

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 23, 26, 25, 22, 21, 51, 46, 47, 48, 27, 59, 50, 29, 28, 60, 52, 30, 53, 31, 20, 61, 19, 32, 18, 1, 62, 17, 16, 56, 55, 54, 15, 63, 64, 36, 35, 34, 33, 37, 14, 38, 13, 57, 12, 65, 41, 40, 39, 24, 49, 67, 66, 44, 43, 42, 11, 0, 10, 9, 45, 8, 7, 6, 5, 58, 4, 3, 2 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4224}
!9 = !{i64 4240}
!10 = !{i64 4256}
!11 = !{i64 4272}
!12 = !{i64 4288}
!13 = !{i64 4304}
!14 = !{i64 4320}
!15 = !{i64 4336}
!16 = !{i64 4367}
!17 = !{i64 4384}
!18 = !{i64 4390}
!19 = !{i64 4395}
!20 = !{i64 4399}
!21 = !{i64 4403}
!22 = !{i64 4416}
!23 = !{i64 4433}
!24 = !{i64 4472}
!25 = !{i64 4480}
!26 = !{i64 4550}
!27 = !{i64 4560}
!28 = !{i64 4568}
!29 = !{i64 4584}
!30 = !{i64 4591}
!31 = !{i64 4593}
!32 = !{i64 4599}
!33 = !{i64 4601}
!34 = !{i64 4614}
!35 = !{i64 4619}
!36 = !{i64 4678}
!37 = !{i64 4683}
!38 = !{i64 4697}
!39 = !{i64 4708}
!40 = !{i64 4716}
!41 = !{i64 4720}
!42 = !{i64 4761}
!43 = !{i64 4770}
!44 = !{i64 4774}
!45 = !{i64 4777}
!46 = !{i64 4800}
!47 = !{i64 4806}
!48 = !{i64 4816}
!49 = !{i64 4849}
!50 = !{i64 4888}
!51 = !{i64 4898}
!52 = !{i64 4912}
!53 = !{i64 4942}
!54 = !{i64 4982}
!55 = !{i64 4986}
!56 = !{i64 5001}
!57 = !{i64 5002}
!58 = !{i64 4934}
!59 = !{i64 4936}
!60 = !{i64 4951}
!61 = !{i64 4954}
!62 = !{i64 5019}
!63 = !{i64 5125}
!64 = !{i64 5160}
!65 = !{i64 5170}
!66 = !{i64 5225}
!67 = !{i64 5234}
!68 = !{i64 5258}
!69 = !{i64 5261}
!70 = !{i64 5268}
!71 = !{i64 5304}
!72 = !{i64 5314}
!73 = !{i64 5328}
!74 = !{i64 5379}
!75 = !{i64 5390}
!76 = !{i64 5393}
!77 = !{i64 5406}
!78 = !{i64 5409}
!79 = !{i64 5427}
!80 = !{i64 5432}
!81 = !{i64 5451}
!82 = !{i64 5481}
!83 = !{i64 5487}
!84 = !{i64 5510}
!85 = !{i64 5525}
!86 = !{i64 5530}
!87 = !{i64 5534}
!88 = !{i64 5541}
!89 = !{i64 5569}
!90 = !{i64 5579}
!91 = !{i64 5584}
!92 = !{i64 5612}
!93 = !{i64 5616}
!94 = !{i64 5639}
!95 = !{i64 5645}
!96 = !{i64 5655}
!97 = !{i64 5660}
!98 = !{i64 5671}
!99 = !{i64 5716}
!100 = !{i64 5726}
!101 = !{i64 5728}
!102 = !{i64 5753}
!103 = !{i64 5757}
!104 = !{i64 5787}
!105 = !{i64 5793}
!106 = !{i64 5803}
!107 = !{i64 5805}
!108 = !{i64 5816}
!109 = !{i64 5848}
!110 = !{i64 5858}
!111 = !{i64 5872}
!112 = !{i64 5903}
!113 = !{i64 5915}
!114 = !{i64 5924}
!115 = !{i64 5933}
!116 = !{i64 5939}
!117 = !{i64 5982}
!118 = !{i64 5985}
!119 = !{i64 5994}
!120 = !{i64 5970}
!121 = !{i64 6012}
!122 = !{i64 6041}
!123 = !{i64 6062}
!124 = !{i64 6073}
!125 = !{i64 6094}
!126 = !{i64 6126}
!127 = !{i64 6162}
!128 = !{i64 6172}
!129 = !{i64 6202}
!130 = !{i64 6212}
!131 = !{i64 6233}
!132 = !{i64 6236}
!133 = !{i64 6240}
!134 = !{i64 6280}
!135 = !{i64 6290}
!136 = !{i64 6326}
!137 = !{i64 6336}
!138 = !{i64 6353}
!139 = !{i64 6368}
!140 = !{i64 6393}
!141 = !{i64 6410}
!142 = !{i64 6418}
!143 = !{i64 6427}
!144 = !{i64 6432}
!145 = !{i64 6435}
!146 = !{i64 6459}
!147 = !{i64 6479}
!148 = !{i64 6509}
!149 = !{i64 6529}
!150 = !{i64 6557}
!151 = !{i64 6565}
!152 = !{i64 6573}
!153 = !{i64 6598}
!154 = !{i64 6608}
!155 = !{i64 6625}
!156 = !{i64 6640}
!157 = !{i64 6665}
!158 = !{i64 6682}
!159 = !{i64 6690}
!160 = !{i64 6699}
!161 = !{i64 6704}
!162 = !{i64 6707}
!163 = !{i64 6716}
!164 = !{i64 6727}
!165 = !{i64 6747}
!166 = !{i64 6774}
!167 = !{i64 6787}
!168 = !{i64 6807}
!169 = !{i64 6835}
!170 = !{i64 6843}
!171 = !{i64 6851}
!172 = !{i64 6864}
!173 = !{i64 6865}
!174 = !{i64 6900}
!175 = !{i64 6908}
!176 = !{i64 6891}
!177 = !{i64 6963}
!178 = !{i64 6976}
!179 = !{i64 7008}
!180 = !{i64 7016}
!181 = !{i64 7020}
!182 = !{i64 7055}
!183 = !{i64 7061}
!184 = !{i64 7068}
!185 = !{i64 7049}
!186 = !{i64 7088}
!187 = !{i64 7096}
!188 = !{i64 7099}
!189 = !{i64 7107}
!190 = !{i64 7149}
!191 = !{i64 7167}
!192 = !{i64 7178}
!193 = !{i64 7186}
!194 = !{i64 7200}
!195 = !{i64 7215}
!196 = !{i64 7246}
!197 = !{i64 7256}
!198 = !{i64 7262}
!199 = !{i64 7266}
!200 = !{i64 7284}
!201 = !{i64 7288}
!202 = !{i64 7294}
!203 = !{i64 7298}
!204 = !{i64 7308}
!205 = !{i64 7329}
!206 = !{i64 7339}
!207 = !{i64 7381}
!208 = !{i64 7407}
!209 = !{i64 7418}
!210 = !{i64 7426}
!211 = !{i64 7457}
!212 = !{i64 7464}
!213 = !{i64 7498}
!214 = !{i64 7514}
!215 = !{i64 7665}
!216 = !{i64 7697}
!217 = !{i64 7707}
!218 = !{i64 7734}
!219 = !{i64 7740}
!220 = !{i64 7743}
!221 = !{i64 7751}
!222 = !{i64 7759}
!223 = !{i64 7765}
!224 = !{i64 7772}
!225 = !{i64 7780}
!226 = !{i64 7788}
!227 = !{i64 7794}
!228 = !{i64 7801}
!229 = !{i64 7809}
!230 = !{i64 7817}
!231 = !{i64 7823}
!232 = !{i64 7830}
!233 = !{i64 7838}
!234 = !{i64 7846}
!235 = !{i64 7852}
!236 = !{i64 7859}
!237 = !{i64 7867}
!238 = !{i64 7875}
!239 = !{i64 7881}
!240 = !{i64 7888}
!241 = !{i64 7896}
!242 = !{i64 7904}
!243 = !{i64 7910}
!244 = !{i64 7917}
!245 = !{i64 7925}
!246 = !{i64 7933}
!247 = !{i64 7939}
!248 = !{i64 7946}
!249 = !{i64 7954}
!250 = !{i64 7962}
!251 = !{i64 7968}
!252 = !{i64 7975}
!253 = !{i64 7983}
!254 = !{i64 7991}
!255 = !{i64 7997}
!256 = !{i64 8004}
!257 = !{i64 8012}
!258 = !{i64 8020}
!259 = !{i64 8026}
!260 = !{i64 8033}
!261 = !{i64 8041}
!262 = !{i64 8049}
!263 = !{i64 8055}
!264 = !{i64 8062}
!265 = !{i64 8070}
!266 = !{i64 8078}
!267 = !{i64 8084}
!268 = !{i64 8091}
!269 = !{i64 8099}
!270 = !{i64 8107}
!271 = !{i64 8113}
!272 = !{i64 8120}
!273 = !{i64 8128}
!274 = !{i64 8136}
!275 = !{i64 8142}
!276 = !{i64 8149}
!277 = !{i64 8159}
!278 = !{i64 8184}
!279 = !{i64 8196}
!280 = !{i64 8208}
!281 = !{i64 8212}
!282 = !{i64 8223}
!283 = !{i64 8229}
!284 = !{i64 8232}
!285 = !{i64 8258}
!286 = !{i64 8264}
!287 = !{i64 8267}
!288 = !{i64 8273}
!289 = !{i64 8292}
!290 = !{i64 8303}
!291 = !{i64 8312}
