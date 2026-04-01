source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_2838 = local_unnamed_addr constant i32 222429829
@global_var_2779 = constant i32 889192432
@global_var_261a = local_unnamed_addr constant i32 7995391
@global_var_25fb = constant i32 -2025519859
@global_var_25ab = local_unnamed_addr constant i32 -1086464
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

define void @function_10f0(i32* %d) local_unnamed_addr {
dec_label_pc_10f0:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_1100(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1110([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_1120(i32* %ptr) local_unnamed_addr {
dec_label_pc_1120:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define void (i32)* @function_1130(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !8
  ret void (i32)* %0, !insn.addr !8
}

define void @function_1140() local_unnamed_addr {
dec_label_pc_1140:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32* @function_1150(i32 %size) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i32* @malloc(i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_1160(i8* %s) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 @puts(i8* %s), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1170(i8* %s) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @strlen(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i8* @function_1180(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !13
  ret i8* %0, !insn.addr !13
}

define i32 @function_1190(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @function_11a0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32 @__longjmp_chk(i32 %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @main() local_unnamed_addr {
dec_label_pc_11b0:
  call void @test_obf_opt_edge(), !insn.addr !16
  ret i32 0, !insn.addr !17
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_11fc(i32 %2), !insn.addr !18
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 11796, !insn.addr !19
  %6 = inttoptr i32 %5 to i32*, !insn.addr !19
  %7 = load i32, i32* %6, align 4, !insn.addr !19
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !20
  %9 = call i32 @__asm_hlt(), !insn.addr !21
  unreachable, !insn.addr !21

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_11fc(i32 %arg1) local_unnamed_addr {
dec_label_pc_11fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !22
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1200:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !23
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !24
  %3 = add i32 %1, 11771, !insn.addr !25
  ret i32 %3, !insn.addr !26
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !27
  ret i32 0, !insn.addr !28
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12a0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !29
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !30
  %3 = add i32 %1, 11635, !insn.addr !31
  %4 = inttoptr i32 %3 to i8*, !insn.addr !31
  %5 = load i8, i8* %4, align 1, !insn.addr !31
  %6 = icmp eq i8 %5, 0, !insn.addr !31
  %7 = icmp eq i1 %6, false, !insn.addr !32
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !32
  br i1 %7, label %dec_label_pc_1322, label %dec_label_pc_12c1, !insn.addr !32

dec_label_pc_12c1:                                ; preds = %dec_label_pc_12a0
  %8 = add i32 %1, 11587, !insn.addr !33
  %9 = inttoptr i32 %8 to i32*, !insn.addr !33
  %10 = load i32, i32* %9, align 4, !insn.addr !33
  %11 = icmp eq i32 %10, 0, !insn.addr !34
  br i1 %11, label %dec_label_pc_12de, label %dec_label_pc_12cb, !insn.addr !35

dec_label_pc_12cb:                                ; preds = %dec_label_pc_12c1
  %12 = add i32 %1, 11607, !insn.addr !36
  %13 = inttoptr i32 %12 to i32*, !insn.addr !36
  %14 = load i32, i32* %13, align 4, !insn.addr !36
  %15 = inttoptr i32 %14 to i32*, !insn.addr !37
  call void @__cxa_finalize(i32* %15), !insn.addr !37
  br label %dec_label_pc_12de, !insn.addr !38

dec_label_pc_12de:                                ; preds = %dec_label_pc_12cb, %dec_label_pc_12c1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !39
  store i8 1, i8* %4, align 1, !insn.addr !40
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !40
  br label %dec_label_pc_1322, !insn.addr !40

dec_label_pc_1322:                                ; preds = %dec_label_pc_12de, %dec_label_pc_12a0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !41

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i32 @register_tm_clones(), !insn.addr !42
  ret i32 %0, !insn.addr !42
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1339:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !43
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_133d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !44
}

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1341:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !45
  %3 = add i32 %1, 11694, !insn.addr !46
  %4 = inttoptr i32 %3 to i32*, !insn.addr !46
  store i32 1, i32* %4, align 4, !insn.addr !46
  %5 = add i32 %1, 11698, !insn.addr !47
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !48
  ret void, !insn.addr !48

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_136f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !49
  %3 = add i32 %1, 11460, !insn.addr !50
  %4 = inttoptr i32 %3 to i32*, !insn.addr !50
  store i32 1, i32* %4, align 4, !insn.addr !50
  %5 = add i32 %1, 11492, !insn.addr !51
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !52
  ret void, !insn.addr !52

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @__longjmp_chk, { 1, 0, 2 }
}

define i32 @param_fake_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_139d:
  ret i32 %arg1, !insn.addr !53
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_13a9:
  ret i32 10, !insn.addr !54
}

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_13b3:
  %eax.1.reg2mem = alloca i32, !insn.addr !55
  %eax.01.reg2mem = alloca i32, !insn.addr !55
  %esi.02.reg2mem = alloca i32, !insn.addr !55
  %0 = add i32 %x, 1, !insn.addr !56
  %1 = mul i32 %x, 2, !insn.addr !57
  %2 = mul i32 %x, %x, !insn.addr !58
  %3 = or i32 %1, 1, !insn.addr !59
  %4 = add i32 %3, %2, !insn.addr !59
  %5 = mul i32 %0, %0, !insn.addr !60
  %6 = icmp eq i32 %4, %5, !insn.addr !61
  %7 = icmp eq i32 %0, 0, !insn.addr !62
  store i32 %0, i32* %esi.02.reg2mem, !insn.addr !63
  store i32 %x, i32* %eax.01.reg2mem, !insn.addr !63
  br i1 %7, label %dec_label_pc_13f2, label %dec_label_pc_13df, !insn.addr !63

dec_label_pc_13df:                                ; preds = %dec_label_pc_13b3, %dec_label_pc_13df
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %esi.02.reload = load i32, i32* %esi.02.reg2mem
  %8 = ashr i32 %eax.01.reload, 31, !insn.addr !64
  %9 = zext i32 %eax.01.reload to i64, !insn.addr !65
  %10 = zext i32 %8 to i64, !insn.addr !65
  %11 = mul i64 %10, 4294967296, !insn.addr !65
  %12 = or i64 %11, %9, !insn.addr !65
  %13 = zext i32 %esi.02.reload to i64, !insn.addr !65
  %14 = srem i64 %12, %13, !insn.addr !65
  %15 = trunc i64 %14 to i32, !insn.addr !65
  %16 = icmp eq i32 %15, 0, !insn.addr !62
  store i32 %15, i32* %esi.02.reg2mem, !insn.addr !63
  store i32 %esi.02.reload, i32* %eax.01.reg2mem, !insn.addr !63
  br i1 %16, label %dec_label_pc_13e8, label %dec_label_pc_13df, !insn.addr !63

dec_label_pc_13e8:                                ; preds = %dec_label_pc_13df
  %17 = icmp eq i32 %esi.02.reload, 1, !insn.addr !66
  %18 = icmp eq i1 %17, false, !insn.addr !67
  br i1 %18, label %dec_label_pc_13f2, label %dec_label_pc_13eb, !insn.addr !67

dec_label_pc_13eb:                                ; preds = %dec_label_pc_13e8
  %19 = add i32 %1, 10, !insn.addr !68
  %20 = icmp eq i1 %6, false, !insn.addr !69
  %21 = icmp eq i1 %20, false, !insn.addr !70
  store i32 %19, i32* %eax.1.reg2mem, !insn.addr !70
  br i1 %21, label %dec_label_pc_13f8, label %dec_label_pc_13f2, !insn.addr !70

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13b3, %dec_label_pc_13eb, %dec_label_pc_13e8
  %22 = mul i32 %x, 3, !insn.addr !71
  %23 = add i32 %22, 20, !insn.addr !72
  store i32 %23, i32* %eax.1.reg2mem, !insn.addr !72
  br label %dec_label_pc_13f8, !insn.addr !72

dec_label_pc_13f8:                                ; preds = %dec_label_pc_13f2, %dec_label_pc_13eb
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !73

; uselistorder directives
  uselistorder i32 %esi.02.reload, { 2, 0, 1 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %esi.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 %x, { 2, 0, 3, 4, 1, 5 }
  uselistorder label %dec_label_pc_13f2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_13df, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_13fd:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !74
  ret i32 %0, !insn.addr !75
}

define i32 @param_instruction_substitution(i32 %arg1) local_unnamed_addr {
dec_label_pc_1413:
  %0 = udiv i32 %arg1, 2, !insn.addr !76
  %1 = urem i32 %arg1, 16, !insn.addr !77
  %reass.mul = mul i32 %arg1, 21
  %2 = add nuw i32 %1, %0, !insn.addr !78
  %3 = add i32 %2, %reass.mul, !insn.addr !79
  ret i32 %3, !insn.addr !80

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1434:
  ret i32 225, !insn.addr !81
}

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i32 %len, i8 %key) local_unnamed_addr {
dec_label_pc_143e:
  %0 = alloca i32
  %ecx.03.reg2mem = alloca i32, !insn.addr !82
  %.reg2mem5 = alloca i8*, !insn.addr !82
  %.reg2mem = alloca i8, !insn.addr !82
  %1 = load i32, i32* %0
  %2 = ptrtoint i8* %buffer to i32
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !83
  %4 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %len), !insn.addr !84
  %5 = add i32 %2, -1, !insn.addr !85
  %6 = add i32 %5, %len, !insn.addr !85
  %7 = inttoptr i32 %6 to i8*, !insn.addr !85
  store i8 0, i8* %7, align 1, !insn.addr !85
  %8 = load i8, i8* %buffer, align 1, !insn.addr !86
  %9 = icmp eq i8 %8, 0, !insn.addr !87
  store i8 %8, i8* %.reg2mem, !insn.addr !88
  store i8* %buffer, i8** %.reg2mem5, !insn.addr !88
  store i32 %2, i32* %ecx.03.reg2mem, !insn.addr !88
  br i1 %9, label %dec_label_pc_1487, label %dec_label_pc_147f, !insn.addr !88

dec_label_pc_147f:                                ; preds = %dec_label_pc_143e, %dec_label_pc_147f
  %ecx.03.reload = load i32, i32* %ecx.03.reg2mem
  %.reload6 = load i8*, i8** %.reg2mem5
  %.reload = load i8, i8* %.reg2mem
  %10 = xor i8 %.reload, %key
  %11 = add i32 %ecx.03.reload, 1, !insn.addr !89
  store i8 %10, i8* %.reload6, align 1, !insn.addr !90
  %12 = inttoptr i32 %11 to i8*, !insn.addr !86
  %13 = load i8, i8* %12, align 1, !insn.addr !86
  %14 = icmp eq i8 %13, 0, !insn.addr !87
  store i8 %13, i8* %.reg2mem, !insn.addr !88
  store i8* %12, i8** %.reg2mem5, !insn.addr !88
  store i32 %11, i32* %ecx.03.reg2mem, !insn.addr !88
  br i1 %14, label %dec_label_pc_1487, label %dec_label_pc_147f, !insn.addr !88

dec_label_pc_1487:                                ; preds = %dec_label_pc_147f, %dec_label_pc_143e
  ret i8* %buffer, !insn.addr !91

; uselistorder directives
  uselistorder i8* %.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.reg2mem5, { 2, 0, 1 }
  uselistorder i32* %ecx.03.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 2, 0, 3, 1 }
  uselistorder i8* %buffer, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_147f, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1491:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !92
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i8, align 1
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !93
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !94
  %4 = add i32 %1, 11110, !insn.addr !95
  %5 = inttoptr i32 %4 to i8*, !insn.addr !96
  %6 = call i8* @decrypt_string(i8* %5, i8* nonnull %stack_var_-48, i32 32, i8 90), !insn.addr !97
  %7 = call i32 @strlen(i8* nonnull %stack_var_-48), !insn.addr !98
  %8 = load i8, i8* %stack_var_-48, align 1, !insn.addr !99
  %9 = sext i8 %8 to i32, !insn.addr !99
  %10 = add i32 %7, %9, !insn.addr !100
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !101
  %12 = icmp eq i32 %3, %11, !insn.addr !101
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !102
  br i1 %12, label %dec_label_pc_14e9, label %dec_label_pc_14e4, !insn.addr !102

dec_label_pc_14e4:                                ; preds = %dec_label_pc_1491
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !103
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !103
  br label %dec_label_pc_14e9, !insn.addr !103

dec_label_pc_14e9:                                ; preds = %dec_label_pc_14e4, %dec_label_pc_1491
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !104

; uselistorder directives
  uselistorder i8* %stack_var_-48, { 2, 0, 1 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_14f0:
  %0 = call i32 @param_string_encryption(), !insn.addr !105
  ret i32 %0, !insn.addr !105
}

define i32 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14f6:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !106
  %0 = icmp slt i32 %arg1, 1
  store i32 %arg2, i32* %eax.0.lcssa.reg2mem, !insn.addr !107
  br i1 %0, label %dec_label_pc_150c, label %dec_label_pc_1507.lr.ph, !insn.addr !107

dec_label_pc_1507.lr.ph:                          ; preds = %dec_label_pc_14f6
  %1 = add i32 %arg1, -1
  %2 = mul i32 %1, %1
  %3 = zext i32 %1 to i33
  %4 = add i32 %arg1, -2
  %5 = zext i32 %4 to i33
  %6 = mul i33 %3, %5
  %7 = udiv i33 %6, 2
  %8 = trunc i33 %7 to i32
  %9 = add i32 %arg2, %arg1
  %10 = add i32 %9, %2
  %11 = sub i32 %10, %8
  store i32 %11, i32* %eax.0.lcssa.reg2mem
  br label %dec_label_pc_150c

dec_label_pc_150c:                                ; preds = %dec_label_pc_1507.lr.ph, %dec_label_pc_14f6
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !108

; uselistorder directives
  uselistorder i32* %eax.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_150e:
  ret i32 500500, !insn.addr !109
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_1518:
  %edx.0.lcssa.reg2mem = alloca i32, !insn.addr !110
  %0 = icmp slt i32 %n, 1
  store i32 0, i32* %edx.0.lcssa.reg2mem, !insn.addr !111
  br i1 %0, label %dec_label_pc_152d, label %dec_label_pc_1528.lr.ph, !insn.addr !111

dec_label_pc_1528.lr.ph:                          ; preds = %dec_label_pc_1518
  %1 = add i32 %n, -1
  %2 = mul i32 %1, %1
  %3 = zext i32 %1 to i33
  %4 = add i32 %n, -2
  %5 = zext i32 %4 to i33
  %6 = mul i33 %3, %5
  %7 = udiv i33 %6, 2
  %8 = trunc i33 %7 to i32
  %9 = add i32 %2, %n
  %10 = sub i32 %9, %8
  store i32 %10, i32* %edx.0.lcssa.reg2mem
  br label %dec_label_pc_152d

dec_label_pc_152d:                                ; preds = %dec_label_pc_1528.lr.ph, %dec_label_pc_1518
  %edx.0.lcssa.reload = load i32, i32* %edx.0.lcssa.reg2mem
  ret i32 %edx.0.lcssa.reload, !insn.addr !112

; uselistorder directives
  uselistorder i32* %edx.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1531:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !113
  ret i32 %0, !insn.addr !114
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_1547:
  %edx.0.lcssa.reg2mem = alloca i32, !insn.addr !115
  %eax.11.reg2mem = alloca i32, !insn.addr !115
  %edx.02.reg2mem = alloca i32, !insn.addr !115
  %eax.03.reg2mem = alloca i32, !insn.addr !115
  %0 = ptrtoint i32* %c to i32
  %1 = ptrtoint i32* %b to i32
  %2 = ptrtoint i32* %a to i32
  %3 = icmp sgt i32 %n, 0
  store i32 0, i32* %eax.03.reg2mem, !insn.addr !116
  store i32 0, i32* %edx.0.lcssa.reg2mem, !insn.addr !116
  br i1 %3, label %dec_label_pc_1560, label %dec_label_pc_157d, !insn.addr !116

dec_label_pc_1560:                                ; preds = %dec_label_pc_1547, %dec_label_pc_1560
  %eax.03.reload = load i32, i32* %eax.03.reg2mem
  %4 = mul i32 %eax.03.reload, 4, !insn.addr !117
  %5 = add i32 %4, %1, !insn.addr !117
  %6 = inttoptr i32 %5 to i32*, !insn.addr !117
  %7 = load i32, i32* %6, align 4, !insn.addr !117
  %8 = add i32 %4, %2, !insn.addr !118
  %9 = inttoptr i32 %8 to i32*, !insn.addr !118
  %10 = load i32, i32* %9, align 4, !insn.addr !118
  %11 = add i32 %10, %7, !insn.addr !118
  %12 = add i32 %4, %0, !insn.addr !119
  %13 = inttoptr i32 %12 to i32*, !insn.addr !119
  store i32 %11, i32* %13, align 4, !insn.addr !119
  %14 = add nuw nsw i32 %eax.03.reload, 1, !insn.addr !120
  %exitcond4 = icmp eq i32 %14, %n
  store i32 %14, i32* %eax.03.reg2mem, !insn.addr !116
  store i32 0, i32* %edx.02.reg2mem, !insn.addr !116
  store i32 0, i32* %eax.11.reg2mem, !insn.addr !116
  br i1 %exitcond4, label %dec_label_pc_1577, label %dec_label_pc_1560, !insn.addr !116

dec_label_pc_1577:                                ; preds = %dec_label_pc_1560, %dec_label_pc_1577
  %eax.11.reload = load i32, i32* %eax.11.reg2mem
  %edx.02.reload = load i32, i32* %edx.02.reg2mem
  %15 = mul i32 %eax.11.reload, 4, !insn.addr !121
  %16 = add i32 %15, %0, !insn.addr !121
  %17 = inttoptr i32 %16 to i32*, !insn.addr !121
  %18 = load i32, i32* %17, align 4, !insn.addr !121
  %19 = add i32 %18, %edx.02.reload, !insn.addr !121
  %20 = add nuw nsw i32 %eax.11.reload, 1, !insn.addr !122
  %exitcond = icmp eq i32 %20, %n
  store i32 %19, i32* %edx.02.reg2mem, !insn.addr !123
  store i32 %20, i32* %eax.11.reg2mem, !insn.addr !123
  store i32 %19, i32* %edx.0.lcssa.reg2mem, !insn.addr !123
  br i1 %exitcond, label %dec_label_pc_157d, label %dec_label_pc_1577, !insn.addr !123

dec_label_pc_157d:                                ; preds = %dec_label_pc_1577, %dec_label_pc_1547
  %edx.0.lcssa.reload = load i32, i32* %edx.0.lcssa.reg2mem
  ret i32 %edx.0.lcssa.reload, !insn.addr !124

; uselistorder directives
  uselistorder i32 %4, { 2, 1, 0 }
  uselistorder i32* %eax.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.11.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1577, { 1, 0 }
  uselistorder label %dec_label_pc_1560, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1584:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !125
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-112 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !126
  %3 = add i32 %1, 2707, !insn.addr !127
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !128
  %5 = inttoptr i32 %3 to i8*, !insn.addr !129
  %6 = bitcast i32* %stack_var_-112 to i8*, !insn.addr !129
  call void @__asm_rep_movsd_memcpy(i8* nonnull %6, i8* %5, i32 8), !insn.addr !129
  %7 = add i32 %1, 2739, !insn.addr !130
  %8 = inttoptr i32 %7 to i8*, !insn.addr !131
  %9 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !131
  call void @__asm_rep_movsd_memcpy(i8* nonnull %9, i8* %8, i32 8), !insn.addr !131
  %10 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !132
  call void @__asm_rep_stosd_memset(i8* nonnull %10, i32 0, i32 8), !insn.addr !132
  %11 = call i32 @param_vectorized_loop(i32* nonnull %stack_var_-112, i32* nonnull %stack_var_-80, i32* nonnull %stack_var_-48, i32 8), !insn.addr !133
  %12 = call i32 @__readgsdword(i32 20), !insn.addr !134
  %13 = icmp eq i32 %4, %12, !insn.addr !134
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !135
  br i1 %13, label %dec_label_pc_15f6, label %dec_label_pc_15f1, !insn.addr !135

dec_label_pc_15f1:                                ; preds = %dec_label_pc_1584
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !136
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !136
  br label %dec_label_pc_15f6, !insn.addr !136

dec_label_pc_15f6:                                ; preds = %dec_label_pc_15f1, %dec_label_pc_1584
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !137
}

define i32 @param_link_time_optimization(i32 %arg1) local_unnamed_addr {
dec_label_pc_15fd:
  %0 = mul i32 %arg1, 2, !insn.addr !138
  %1 = add i32 %0, 10, !insn.addr !139
  ret i32 %1, !insn.addr !140
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_160e:
  ret i32 20, !insn.addr !141
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_1618:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !142
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !143
  %3 = add i32 %1, -740, !insn.addr !144
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !145
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !146
  %6 = add i32 %1, 10971, !insn.addr !147
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !148
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !148
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !148
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !148
  %11 = icmp eq i32 %10, 0, !insn.addr !149
  %12 = icmp eq i1 %11, false, !insn.addr !150
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !150
  br i1 %12, label %dec_label_pc_1663, label %dec_label_pc_165a, !insn.addr !150

dec_label_pc_165a:                                ; preds = %dec_label_pc_1618
  %13 = udiv i32 10, %x
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_1663, !insn.addr !151

dec_label_pc_1663:                                ; preds = %dec_label_pc_165a, %dec_label_pc_1618
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1668:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !153
  %3 = call i32 @param_division_by_zero(i32 5), !insn.addr !154
  %4 = call i32 @param_division_by_zero(i32 0), !insn.addr !155
  %5 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !156
  %6 = add i32 %4, %3, !insn.addr !157
  ret i32 %6, !insn.addr !158

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_16ad:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !159
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !160
  %3 = add i32 %1, -843, !insn.addr !161
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !162
  %5 = call void (i32)* @signal(i32 11, void (i32)* %4), !insn.addr !163
  %6 = add i32 %1, 10662, !insn.addr !164
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !165
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !165
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !165
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !165
  %11 = icmp eq i32 %10, 0, !insn.addr !166
  %12 = icmp eq i1 %11, false, !insn.addr !167
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !167
  br i1 %12, label %dec_label_pc_16f4, label %dec_label_pc_16ef, !insn.addr !167

dec_label_pc_16ef:                                ; preds = %dec_label_pc_16ad
  %13 = load i32, i32* %p, align 4, !insn.addr !168
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !168
  br label %dec_label_pc_16f4, !insn.addr !168

dec_label_pc_16f4:                                ; preds = %dec_label_pc_16ef, %dec_label_pc_16ad
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !169

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_16f9:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !170
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !171
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !172
  store i32 42, i32* %stack_var_-36, align 4, !insn.addr !173
  %4 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-36), !insn.addr !174
  %5 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !175
  %6 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !176
  %7 = add i32 %5, %4, !insn.addr !177
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !178
  %9 = icmp eq i32 %3, %8, !insn.addr !178
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !179
  br i1 %9, label %dec_label_pc_175b, label %dec_label_pc_1756, !insn.addr !179

dec_label_pc_1756:                                ; preds = %dec_label_pc_16f9
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !180
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !180
  br label %dec_label_pc_175b, !insn.addr !180

dec_label_pc_175b:                                ; preds = %dec_label_pc_1756, %dec_label_pc_16f9
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !181

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 2, 1, 0 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 2, 3, 0, 1, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_1763:
  ret i32 %arg1, !insn.addr !182
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_176f:
  %0 = alloca i32
  %edx.0.reg2mem = alloca i32, !insn.addr !183
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !184
  %3 = call i32* @malloc(i32 16), !insn.addr !185
  %4 = icmp eq i32* %3, null, !insn.addr !186
  store i32 -2, i32* %edx.0.reg2mem, !insn.addr !187
  br i1 %4, label %dec_label_pc_17a7, label %dec_label_pc_1798, !insn.addr !187

dec_label_pc_1798:                                ; preds = %dec_label_pc_176f
  call void @free(i32* nonnull %3), !insn.addr !188
  store i32 %x, i32* %edx.0.reg2mem, !insn.addr !189
  br label %dec_label_pc_17a7, !insn.addr !189

dec_label_pc_17a7:                                ; preds = %dec_label_pc_1798, %dec_label_pc_176f
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  ret i32 %edx.0.reload, !insn.addr !190

; uselistorder directives
  uselistorder i32 16, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_17ae:
  %0 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !191
  %1 = add i32 %0, 10, !insn.addr !192
  ret i32 %1, !insn.addr !193

; uselistorder directives
  uselistorder i32 20, { 1, 2, 3, 0, 4, 5, 6, 7, 8 }
}

define i32 @param_integer_overflow(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17c4:
  %eax.0.reg2mem = alloca i32, !insn.addr !194
  %0 = add i32 %arg2, %arg1, !insn.addr !195
  %1 = icmp slt i32 %arg1, 1
  %2 = icmp slt i32 %arg2, 1
  %or.cond = or i1 %1, %2
  br i1 %or.cond, label %dec_label_pc_17e8, label %dec_label_pc_17dc, !insn.addr !196

dec_label_pc_17dc:                                ; preds = %dec_label_pc_17c4
  %3 = icmp sgt i32 %0, -1, !insn.addr !197
  %4 = select i1 %3, i32 %0, i32 -1, !insn.addr !198
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !199
  br label %dec_label_pc_17f6, !insn.addr !199

dec_label_pc_17e8:                                ; preds = %dec_label_pc_17c4
  %5 = and i32 %arg2, %arg1, !insn.addr !200
  %6 = icmp slt i32 %5, 0, !insn.addr !200
  %7 = icmp eq i1 %6, false, !insn.addr !201
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !201
  br i1 %7, label %dec_label_pc_17f6, label %dec_label_pc_17ec, !insn.addr !201

dec_label_pc_17ec:                                ; preds = %dec_label_pc_17e8
  %8 = icmp eq i32 %0, 0, !insn.addr !202
  %9 = icmp slt i32 %0, 0, !insn.addr !202
  %10 = icmp eq i1 %9, false, !insn.addr !203
  %11 = icmp eq i1 %8, false, !insn.addr !203
  %12 = icmp eq i1 %10, %11, !insn.addr !203
  %13 = select i1 %12, i32 -2, i32 %0, !insn.addr !203
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_17f6, !insn.addr !203

dec_label_pc_17f6:                                ; preds = %dec_label_pc_17ec, %dec_label_pc_17e8, %dec_label_pc_17dc
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !204

; uselistorder directives
  uselistorder i32 %0, { 5, 3, 4, 0, 2, 1 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 -2, { 3, 0, 1, 2 }
  uselistorder i32 0, { 11, 12, 13, 15, 9, 16, 10, 1, 2, 0, 3, 7, 4, 17, 8, 14, 5, 6 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_17f8:
  ret i32 2000000000, !insn.addr !205
}

define i32 @param_undefined_behavior(i32 %arg1) local_unnamed_addr {
dec_label_pc_1802:
  %0 = mul i32 %arg1, 2, !insn.addr !206
  ret i32 %0, !insn.addr !207

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1810:
  ret i32 10, !insn.addr !208

; uselistorder directives
  uselistorder i32 10, { 0, 4, 2, 3, 5, 1 }
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_181a:
  ret i32 43, !insn.addr !209
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1824:
  ret i32 43, !insn.addr !210
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_182e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !211
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -8020), !insn.addr !212
  %4 = inttoptr i32 %3 to i8*, !insn.addr !213
  %5 = call i32 @puts(i8* %4), !insn.addr !214
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7975), !insn.addr !215
  %7 = inttoptr i32 %6 to i8*, !insn.addr !216
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !217
  %9 = call i32 @call_opaque_predicate(), !insn.addr !218
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7947), !insn.addr !219
  %11 = inttoptr i32 %10 to i8*, !insn.addr !220
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !221
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7919), !insn.addr !222
  %14 = inttoptr i32 %13 to i8*, !insn.addr !223
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !224
  %16 = call i32 @param_string_encryption(), !insn.addr !225
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7890), !insn.addr !226
  %18 = inttoptr i32 %17 to i8*, !insn.addr !227
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %18), !insn.addr !228
  %20 = call i32 @call_tail_call_optimized(), !insn.addr !229
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7862), !insn.addr !230
  %22 = inttoptr i32 %21 to i8*, !insn.addr !231
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !232
  %24 = call i32 @call_non_tail_call(), !insn.addr !233
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7820), !insn.addr !234
  %26 = inttoptr i32 %25 to i8*, !insn.addr !235
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !236
  %28 = call i32 @call_vectorized_loop(), !insn.addr !237
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7783), !insn.addr !238
  %30 = inttoptr i32 %29 to i8*, !insn.addr !239
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %30), !insn.addr !240
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7745), !insn.addr !241
  %33 = inttoptr i32 %32 to i8*, !insn.addr !242
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !243
  %35 = call i32 @call_division_by_zero(), !insn.addr !244
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7713), !insn.addr !245
  %37 = inttoptr i32 %36 to i8*, !insn.addr !246
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !247
  %39 = call i32 @call_null_pointer_deref(), !insn.addr !248
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7685), !insn.addr !249
  %41 = inttoptr i32 %40 to i8*, !insn.addr !250
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !251
  %43 = call i32 @call_buffer_overflow(), !insn.addr !252
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7656), !insn.addr !253
  %45 = inttoptr i32 %44 to i8*, !insn.addr !254
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %45), !insn.addr !255
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7627), !insn.addr !256
  %48 = inttoptr i32 %47 to i8*, !insn.addr !257
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !258
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7578), !insn.addr !259
  %51 = inttoptr i32 %50 to i8*, !insn.addr !260
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %51), !insn.addr !261
  %53 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2779 to i32), i32 -7549), !insn.addr !262
  %54 = inttoptr i32 %53 to i8*, !insn.addr !263
  %55 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %54), !insn.addr !264
  ret void, !insn.addr !265

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1990:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !266
  call void @__stack_chk_fail(), !insn.addr !267
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !268
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !269
  %ebx.0.reg2mem = alloca i32, !insn.addr !269
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !270
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_25fb to i32), i32 -232), !insn.addr !271
  %4 = inttoptr i32 %3 to i32*, !insn.addr !271
  %5 = load i32, i32* %4, align 4, !insn.addr !271
  %6 = icmp eq i32 %5, -1, !insn.addr !272
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !273
  store i32 -1, i32* %merge.reg2mem, !insn.addr !273
  br i1 %6, label %dec_label_pc_19ed, label %dec_label_pc_19e0, !insn.addr !273

dec_label_pc_19e0:                                ; preds = %dec_label_pc_19b0, %dec_label_pc_19e0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !274
  %8 = inttoptr i32 %7 to i32*, !insn.addr !274
  %9 = load i32, i32* %8, align 4, !insn.addr !274
  %10 = icmp eq i32 %9, -1, !insn.addr !275
  %11 = icmp eq i1 %10, false, !insn.addr !276
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !276
  store i32 %9, i32* %merge.reg2mem, !insn.addr !276
  br i1 %11, label %dec_label_pc_19e0, label %dec_label_pc_19ed, !insn.addr !276

dec_label_pc_19ed:                                ; preds = %dec_label_pc_19e0, %dec_label_pc_19b0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !277

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 5, 2, 1, 3, 6, 7, 8, 0, 9, 4 }
  uselistorder i32 -1, { 5, 0, 6, 7, 8, 1, 2, 3, 4, 9 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 2, 0, 1, 3 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_19e0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_19fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !278
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !279
  ret i32 %3, !insn.addr !280

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 12, 8, 0, 7, 5, 6, 3, 4, 1, 2, 10, 9, 11 }
  uselistorder i32 1, { 21, 23, 22, 20, 19, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 18, 48, 63, 24, 25, 17, 67, 26, 16, 27, 15, 14, 28, 13, 70, 69, 68, 29, 12, 74, 75, 33, 32, 31, 30, 44, 34, 45, 35, 66, 36, 11, 76, 39, 38, 37, 10, 64, 65, 77, 42, 41, 40, 46, 72, 9, 47, 73, 8, 7, 6, 43, 5, 4, 3, 2, 71, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @__longjmp_chk(i32, i32) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i32) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4340}
!5 = !{i64 4356}
!6 = !{i64 4372}
!7 = !{i64 4388}
!8 = !{i64 4404}
!9 = !{i64 4420}
!10 = !{i64 4436}
!11 = !{i64 4452}
!12 = !{i64 4468}
!13 = !{i64 4484}
!14 = !{i64 4500}
!15 = !{i64 4516}
!16 = !{i64 4538}
!17 = !{i64 4546}
!18 = !{i64 4575}
!19 = !{i64 4592}
!20 = !{i64 4598}
!21 = !{i64 4603}
!22 = !{i64 4607}
!23 = !{i64 4611}
!24 = !{i64 4624}
!25 = !{i64 4641}
!26 = !{i64 4680}
!27 = !{i64 4688}
!28 = !{i64 4758}
!29 = !{i64 4768}
!30 = !{i64 4776}
!31 = !{i64 4792}
!32 = !{i64 4799}
!33 = !{i64 4801}
!34 = !{i64 4807}
!35 = !{i64 4809}
!36 = !{i64 4814}
!37 = !{i64 4822}
!38 = !{i64 4827}
!39 = !{i64 4886}
!40 = !{i64 4891}
!41 = !{i64 4905}
!42 = !{i64 4916}
!43 = !{i64 4924}
!44 = !{i64 4928}
!45 = !{i64 4937}
!46 = !{i64 4953}
!47 = !{i64 4963}
!48 = !{i64 4970}
!49 = !{i64 4983}
!50 = !{i64 4999}
!51 = !{i64 5009}
!52 = !{i64 5016}
!53 = !{i64 5032}
!54 = !{i64 5042}
!55 = !{i64 5043}
!56 = !{i64 5058}
!57 = !{i64 5061}
!58 = !{i64 5064}
!59 = !{i64 5067}
!60 = !{i64 5073}
!61 = !{i64 5076}
!62 = !{i64 5083}
!63 = !{i64 5085}
!64 = !{i64 5087}
!65 = !{i64 5088}
!66 = !{i64 5096}
!67 = !{i64 5097}
!68 = !{i64 5099}
!69 = !{i64 5102}
!70 = !{i64 5104}
!71 = !{i64 5106}
!72 = !{i64 5109}
!73 = !{i64 5116}
!74 = !{i64 5129}
!75 = !{i64 5138}
!76 = !{i64 5155}
!77 = !{i64 5164}
!78 = !{i64 5167}
!79 = !{i64 5169}
!80 = !{i64 5171}
!81 = !{i64 5181}
!82 = !{i64 5182}
!83 = !{i64 5192}
!84 = !{i64 5223}
!85 = !{i64 5228}
!86 = !{i64 5241}
!87 = !{i64 5243}
!88 = !{i64 5245}
!89 = !{i64 5249}
!90 = !{i64 5250}
!91 = !{i64 5264}
!92 = !{i64 5265}
!93 = !{i64 5277}
!94 = !{i64 5291}
!95 = !{i64 5307}
!96 = !{i64 5313}
!97 = !{i64 5314}
!98 = !{i64 5322}
!99 = !{i64 5327}
!100 = !{i64 5334}
!101 = !{i64 5339}
!102 = !{i64 5346}
!103 = !{i64 5348}
!104 = !{i64 5359}
!105 = !{i64 5364}
!106 = !{i64 5366}
!107 = !{i64 5381}
!108 = !{i64 5389}
!109 = !{i64 5399}
!110 = !{i64 5400}
!111 = !{i64 5414}
!112 = !{i64 5424}
!113 = !{i64 5437}
!114 = !{i64 5446}
!115 = !{i64 5447}
!116 = !{i64 5470}
!117 = !{i64 5475}
!118 = !{i64 5478}
!119 = !{i64 5481}
!120 = !{i64 5484}
!121 = !{i64 5495}
!122 = !{i64 5498}
!123 = !{i64 5493}
!124 = !{i64 5507}
!125 = !{i64 5508}
!126 = !{i64 5512}
!127 = !{i64 5536}
!128 = !{i64 5545}
!129 = !{i64 5556}
!130 = !{i64 5558}
!131 = !{i64 5574}
!132 = !{i64 5584}
!133 = !{i64 5600}
!134 = !{i64 5608}
!135 = !{i64 5615}
!136 = !{i64 5617}
!137 = !{i64 5628}
!138 = !{i64 5640}
!139 = !{i64 5643}
!140 = !{i64 5645}
!141 = !{i64 5655}
!142 = !{i64 5656}
!143 = !{i64 5664}
!144 = !{i64 5678}
!145 = !{i64 5684}
!146 = !{i64 5687}
!147 = !{i64 5692}
!148 = !{i64 5701}
!149 = !{i64 5718}
!150 = !{i64 5720}
!151 = !{i64 5728}
!152 = !{i64 5735}
!153 = !{i64 5746}
!154 = !{i64 5762}
!155 = !{i64 5776}
!156 = !{i64 5789}
!157 = !{i64 5797}
!158 = !{i64 5804}
!159 = !{i64 5805}
!160 = !{i64 5813}
!161 = !{i64 5827}
!162 = !{i64 5833}
!163 = !{i64 5836}
!164 = !{i64 5841}
!165 = !{i64 5850}
!166 = !{i64 5867}
!167 = !{i64 5869}
!168 = !{i64 5874}
!169 = !{i64 5880}
!170 = !{i64 5881}
!171 = !{i64 5891}
!172 = !{i64 5905}
!173 = !{i64 5919}
!174 = !{i64 5927}
!175 = !{i64 5941}
!176 = !{i64 5954}
!177 = !{i64 5959}
!178 = !{i64 5965}
!179 = !{i64 5972}
!180 = !{i64 5974}
!181 = !{i64 5986}
!182 = !{i64 5998}
!183 = !{i64 5999}
!184 = !{i64 6007}
!185 = !{i64 6023}
!186 = !{i64 6036}
!187 = !{i64 6038}
!188 = !{i64 6044}
!189 = !{i64 6052}
!190 = !{i64 6061}
!191 = !{i64 6074}
!192 = !{i64 6080}
!193 = !{i64 6083}
!194 = !{i64 6084}
!195 = !{i64 6097}
!196 = !{i64 6102}
!197 = !{i64 6108}
!198 = !{i64 6115}
!199 = !{i64 6118}
!200 = !{i64 6120}
!201 = !{i64 6122}
!202 = !{i64 6124}
!203 = !{i64 6131}
!204 = !{i64 6135}
!205 = !{i64 6145}
!206 = !{i64 6157}
!207 = !{i64 6159}
!208 = !{i64 6169}
!209 = !{i64 6179}
!210 = !{i64 6189}
!211 = !{i64 6198}
!212 = !{i64 6212}
!213 = !{i64 6218}
!214 = !{i64 6219}
!215 = !{i64 6227}
!216 = !{i64 6235}
!217 = !{i64 6238}
!218 = !{i64 6243}
!219 = !{i64 6252}
!220 = !{i64 6258}
!221 = !{i64 6261}
!222 = !{i64 6269}
!223 = !{i64 6280}
!224 = !{i64 6283}
!225 = !{i64 6288}
!226 = !{i64 6297}
!227 = !{i64 6303}
!228 = !{i64 6306}
!229 = !{i64 6311}
!230 = !{i64 6320}
!231 = !{i64 6326}
!232 = !{i64 6329}
!233 = !{i64 6334}
!234 = !{i64 6343}
!235 = !{i64 6349}
!236 = !{i64 6352}
!237 = !{i64 6357}
!238 = !{i64 6366}
!239 = !{i64 6372}
!240 = !{i64 6375}
!241 = !{i64 6383}
!242 = !{i64 6391}
!243 = !{i64 6394}
!244 = !{i64 6399}
!245 = !{i64 6408}
!246 = !{i64 6414}
!247 = !{i64 6417}
!248 = !{i64 6422}
!249 = !{i64 6431}
!250 = !{i64 6437}
!251 = !{i64 6440}
!252 = !{i64 6445}
!253 = !{i64 6454}
!254 = !{i64 6460}
!255 = !{i64 6463}
!256 = !{i64 6471}
!257 = !{i64 6482}
!258 = !{i64 6485}
!259 = !{i64 6493}
!260 = !{i64 6501}
!261 = !{i64 6504}
!262 = !{i64 6512}
!263 = !{i64 6520}
!264 = !{i64 6523}
!265 = !{i64 6535}
!266 = !{i64 6549}
!267 = !{i64 6563}
!268 = !{i64 6574}
!269 = !{i64 6576}
!270 = !{i64 6580}
!271 = !{i64 6591}
!272 = !{i64 6597}
!273 = !{i64 6600}
!274 = !{i64 6626}
!275 = !{i64 6632}
!276 = !{i64 6635}
!277 = !{i64 6641}
!278 = !{i64 6660}
!279 = !{i64 6671}
!280 = !{i64 6680}
