source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_2979 = constant i32 239817742
@global_var_27ea = constant i32 4128767
@global_var_2788 = local_unnamed_addr constant i32 247677200
@global_var_274a = constant i32 68076353
@global_var_26f8 = local_unnamed_addr constant i32 54
@global_var_267a = local_unnamed_addr constant i32 -968815602
@global_var_263a = local_unnamed_addr constant i32 -253493248
@global_var_2568 = constant i32 1091047111
@global_var_230a = local_unnamed_addr constant i32 87883775
@global_var_22eb = constant i32 301311
@global_var_229b = local_unnamed_addr constant i32 201983
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
dec_label_pc_1350:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !45
  %3 = add i32 %1, 11682, !insn.addr !46
  %4 = inttoptr i32 %3 to i32*, !insn.addr !46
  store i32 1, i32* %4, align 4, !insn.addr !46
  %5 = add i32 %1, 11686, !insn.addr !47
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !48
  ret void, !insn.addr !48

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1380:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !49
  %3 = add i32 %1, 11446, !insn.addr !50
  %4 = inttoptr i32 %3 to i32*, !insn.addr !50
  store i32 1, i32* %4, align 4, !insn.addr !50
  %5 = add i32 %1, 11478, !insn.addr !51
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !52
  ret void, !insn.addr !52

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @__longjmp_chk, { 1, 0, 2 }
}

define i32 @param_division_by_zero.constprop.0() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !53
  %3 = add i32 %1, -102, !insn.addr !54
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !55
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !56
  %6 = add i32 %1, 11594, !insn.addr !57
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !58
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !58
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !58
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !58
  ret i32 -1, !insn.addr !59

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @param_division_by_zero.constprop.1() local_unnamed_addr {
dec_label_pc_1400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !60
  %3 = add i32 %1, -182, !insn.addr !61
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !62
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !63
  %6 = add i32 %1, 11514, !insn.addr !64
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !65
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !65
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !65
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !65
  %11 = icmp eq i32 %10, 0, !insn.addr !66
  %12 = select i1 %11, i32 2, i32 -1, !insn.addr !67
  ret i32 %12, !insn.addr !68

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @param_fake_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1440:
  ret i32 %arg1, !insn.addr !69
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1450:
  ret i32 10, !insn.addr !70
}

define i32 @param_opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_1460:
  %edx.0.reg2mem = alloca i32, !insn.addr !71
  %eax.0.reg2mem = alloca i32, !insn.addr !71
  %0 = add i32 %arg1, 1, !insn.addr !72
  %1 = mul i32 %arg1, 2, !insn.addr !73
  %2 = mul i32 %arg1, %arg1, !insn.addr !74
  %3 = or i32 %1, 1, !insn.addr !75
  %4 = add i32 %3, %2, !insn.addr !75
  %5 = mul i32 %0, %0, !insn.addr !76
  %6 = icmp eq i32 %4, %5, !insn.addr !77
  %7 = icmp eq i32 %0, 0, !insn.addr !78
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !79
  store i32 %0, i32* %edx.0.reg2mem, !insn.addr !79
  br i1 %7, label %dec_label_pc_14b0, label %dec_label_pc_1490, !insn.addr !79

dec_label_pc_1490:                                ; preds = %dec_label_pc_1460, %dec_label_pc_1490
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = ashr i32 %eax.0.reload, 31, !insn.addr !80
  %9 = zext i32 %eax.0.reload to i64, !insn.addr !81
  %10 = zext i32 %8 to i64, !insn.addr !81
  %11 = mul i64 %10, 4294967296, !insn.addr !81
  %12 = or i64 %11, %9, !insn.addr !81
  %13 = zext i32 %edx.0.reload to i64, !insn.addr !81
  %14 = srem i64 %12, %13, !insn.addr !81
  %15 = trunc i64 %14 to i32, !insn.addr !81
  %16 = icmp eq i32 %15, 0, !insn.addr !82
  %17 = icmp eq i1 %16, false, !insn.addr !83
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !83
  store i32 %15, i32* %edx.0.reg2mem, !insn.addr !83
  br i1 %17, label %dec_label_pc_1490, label %dec_label_pc_149b, !insn.addr !83

dec_label_pc_149b:                                ; preds = %dec_label_pc_1490
  %18 = icmp eq i32 %edx.0.reload, 1, !insn.addr !84
  %19 = icmp eq i1 %6, %18
  br i1 %19, label %dec_label_pc_14a6, label %dec_label_pc_14b0, !insn.addr !85

dec_label_pc_14a6:                                ; preds = %dec_label_pc_149b
  %20 = add i32 %1, 10, !insn.addr !86
  ret i32 %20, !insn.addr !87

dec_label_pc_14b0:                                ; preds = %dec_label_pc_149b, %dec_label_pc_1460
  %21 = add i32 %arg1, 20, !insn.addr !88
  %22 = add i32 %21, %1, !insn.addr !88
  ret i32 %22, !insn.addr !89

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 2, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32 %0, { 0, 3, 1, 2 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 2, 0, 3, 4, 1, 5 }
  uselistorder label %dec_label_pc_1490, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_14c0:
  %edx.0.reg2mem = alloca i32, !insn.addr !90
  %eax.0.reg2mem = alloca i32, !insn.addr !90
  store i32 5, i32* %eax.0.reg2mem, !insn.addr !91
  store i32 6, i32* %edx.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_14d0, !insn.addr !91

dec_label_pc_14d0:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14c0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %0 = ashr i32 %eax.0.reload, 31, !insn.addr !92
  %1 = zext i32 %eax.0.reload to i64, !insn.addr !93
  %2 = zext i32 %0 to i64, !insn.addr !93
  %3 = mul i64 %2, 4294967296, !insn.addr !93
  %4 = or i64 %3, %1, !insn.addr !93
  %5 = zext i32 %edx.0.reload to i64, !insn.addr !93
  %6 = srem i64 %4, %5, !insn.addr !93
  %7 = trunc i64 %6 to i32, !insn.addr !93
  %8 = icmp eq i32 %7, 0, !insn.addr !94
  %9 = icmp eq i1 %8, false, !insn.addr !95
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !95
  store i32 %7, i32* %edx.0.reg2mem, !insn.addr !95
  br i1 %9, label %dec_label_pc_14d0, label %dec_label_pc_14db, !insn.addr !95

dec_label_pc_14db:                                ; preds = %dec_label_pc_14d0
  %10 = icmp eq i32 %edx.0.reload, 1, !insn.addr !96
  %11 = icmp eq i1 %10, false, !insn.addr !97
  %12 = select i1 %11, i32 35, i32 20, !insn.addr !97
  ret i32 %12, !insn.addr !98

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 2, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_instruction_substitution(i32 %arg1) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = udiv i32 %arg1, 2, !insn.addr !99
  %1 = urem i32 %arg1, 16, !insn.addr !100
  %reass.mul = mul i32 %arg1, 21
  %2 = add nuw i32 %1, %0, !insn.addr !101
  %3 = add i32 %2, %reass.mul, !insn.addr !102
  ret i32 %3, !insn.addr !103

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_1520:
  ret i32 225, !insn.addr !104
}

define i32 @decrypt_string(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_1530:
  %0 = alloca i32
  %eax.0.in.reg2mem = alloca i8, !insn.addr !105
  %edx.0.reg2mem = alloca i32, !insn.addr !105
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !106
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !107
  %4 = inttoptr i32 %arg1 to i8*, !insn.addr !107
  %5 = call i8* @strncpy(i8* %3, i8* %4, i32 %arg3), !insn.addr !107
  %6 = add i32 %arg2, -1, !insn.addr !108
  %7 = add i32 %6, %arg3, !insn.addr !108
  %8 = inttoptr i32 %7 to i8*, !insn.addr !108
  store i8 0, i8* %8, align 1, !insn.addr !108
  %9 = load i8, i8* %3, align 1, !insn.addr !109
  %10 = icmp eq i8 %9, 0, !insn.addr !110
  store i32 %arg2, i32* %edx.0.reg2mem, !insn.addr !111
  store i8 %9, i8* %eax.0.in.reg2mem, !insn.addr !111
  br i1 %10, label %dec_label_pc_157f, label %dec_label_pc_1570, !insn.addr !111

dec_label_pc_1570:                                ; preds = %dec_label_pc_1530, %dec_label_pc_1570
  %eax.0.in.reload = load i8, i8* %eax.0.in.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %11 = xor i8 %eax.0.in.reload, %arg4
  %12 = add i32 %edx.0.reload, 1, !insn.addr !112
  %13 = inttoptr i32 %edx.0.reload to i8*, !insn.addr !113
  store i8 %11, i8* %13, align 1, !insn.addr !113
  %14 = inttoptr i32 %12 to i8*, !insn.addr !114
  %15 = load i8, i8* %14, align 1, !insn.addr !114
  %16 = icmp eq i8 %15, 0, !insn.addr !115
  %17 = icmp eq i1 %16, false, !insn.addr !116
  store i32 %12, i32* %edx.0.reg2mem, !insn.addr !116
  store i8 %15, i8* %eax.0.in.reg2mem, !insn.addr !116
  br i1 %17, label %dec_label_pc_1570, label %dec_label_pc_157f, !insn.addr !116

dec_label_pc_157f:                                ; preds = %dec_label_pc_1570, %dec_label_pc_1530
  ret i32 %arg2, !insn.addr !117

; uselistorder directives
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i8* %eax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1570, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_1590:
  %0 = alloca i32
  %edx.1.reg2mem = alloca i32, !insn.addr !118
  %edx.0.reg2mem = alloca i32, !insn.addr !118
  %eax.0.reg2mem = alloca i32, !insn.addr !118
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !119
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !120
  %4 = add i32 %1, 10861, !insn.addr !121
  %5 = inttoptr i32 %4 to i8*, !insn.addr !122
  %6 = bitcast i32* %stack_var_-48 to i8*
  %7 = call i8* @strncpy(i8* nonnull %6, i8* %5, i32 31), !insn.addr !123
  %8 = load i32, i32* %stack_var_-48, align 4, !insn.addr !124
  %9 = urem i32 %8, 256, !insn.addr !124
  %10 = trunc i32 %8 to i8, !insn.addr !125
  %11 = icmp eq i8 %10, 0, !insn.addr !125
  store i32 %9, i32* %edx.1.reg2mem, !insn.addr !126
  br i1 %11, label %dec_label_pc_15f5, label %dec_label_pc_15d4, !insn.addr !126

dec_label_pc_15d4:                                ; preds = %dec_label_pc_1590
  %12 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !127
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !128
  store i32 %9, i32* %edx.0.reg2mem, !insn.addr !128
  br label %dec_label_pc_15e0, !insn.addr !128

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_15d4
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %13 = add i32 %eax.0.reload, 1, !insn.addr !129
  %14 = trunc i32 %edx.0.reload to i8
  %15 = xor i8 %14, 90, !insn.addr !130
  %16 = inttoptr i32 %eax.0.reload to i8*, !insn.addr !130
  store i8 %15, i8* %16, align 1, !insn.addr !130
  %17 = inttoptr i32 %13 to i8*, !insn.addr !131
  %18 = load i8, i8* %17, align 1, !insn.addr !131
  %19 = zext i8 %18 to i32, !insn.addr !131
  %20 = icmp eq i8 %18, 0, !insn.addr !132
  %21 = icmp eq i1 %20, false, !insn.addr !133
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !133
  store i32 %19, i32* %edx.0.reg2mem, !insn.addr !133
  br i1 %21, label %dec_label_pc_15e0, label %dec_label_pc_15f0, !insn.addr !133

dec_label_pc_15f0:                                ; preds = %dec_label_pc_15e0
  %22 = load i32, i32* %stack_var_-48, align 4, !insn.addr !134
  %23 = urem i32 %22, 256, !insn.addr !134
  store i32 %23, i32* %edx.1.reg2mem, !insn.addr !134
  br label %dec_label_pc_15f5, !insn.addr !134

dec_label_pc_15f5:                                ; preds = %dec_label_pc_15f0, %dec_label_pc_1590
  %24 = call i32 @strlen(i8* nonnull %6), !insn.addr !135
  %25 = call i32 @__readgsdword(i32 20), !insn.addr !136
  %26 = icmp eq i32 %3, %25, !insn.addr !136
  %27 = icmp eq i1 %26, false, !insn.addr !137
  br i1 %27, label %dec_label_pc_161f, label %dec_label_pc_1619, !insn.addr !137

dec_label_pc_1619:                                ; preds = %dec_label_pc_15f5
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %sext = mul i32 %edx.1.reload, 16777216
  %28 = ashr exact i32 %sext, 24, !insn.addr !138
  %29 = add i32 %28, %24, !insn.addr !139
  ret i32 %29, !insn.addr !140

dec_label_pc_161f:                                ; preds = %dec_label_pc_15f5
  %30 = call i32 @__stack_chk_fail_local(), !insn.addr !141
  ret i32 %30, !insn.addr !142

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32* %stack_var_-48, { 1, 2, 3, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_1630:
  %0 = alloca i32
  %edx.1.reg2mem = alloca i32, !insn.addr !143
  %edx.0.reg2mem = alloca i32, !insn.addr !143
  %eax.0.reg2mem = alloca i32, !insn.addr !143
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !144
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !145
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2979 to i32), i32 84), !insn.addr !146
  %5 = inttoptr i32 %4 to i8*, !insn.addr !147
  %6 = bitcast i32* %stack_var_-48 to i8*
  %7 = call i8* @strncpy(i8* nonnull %6, i8* %5, i32 31), !insn.addr !148
  %8 = load i32, i32* %stack_var_-48, align 4, !insn.addr !149
  %9 = urem i32 %8, 256, !insn.addr !149
  %10 = trunc i32 %8 to i8, !insn.addr !150
  %11 = icmp eq i8 %10, 0, !insn.addr !150
  store i32 %9, i32* %edx.1.reg2mem, !insn.addr !151
  br i1 %11, label %dec_label_pc_1695, label %dec_label_pc_1674, !insn.addr !151

dec_label_pc_1674:                                ; preds = %dec_label_pc_1630
  %12 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !152
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !153
  store i32 %9, i32* %edx.0.reg2mem, !insn.addr !153
  br label %dec_label_pc_1680, !insn.addr !153

dec_label_pc_1680:                                ; preds = %dec_label_pc_1680, %dec_label_pc_1674
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %13 = add i32 %eax.0.reload, 1, !insn.addr !154
  %14 = trunc i32 %edx.0.reload to i8
  %15 = xor i8 %14, 90, !insn.addr !155
  %16 = inttoptr i32 %eax.0.reload to i8*, !insn.addr !155
  store i8 %15, i8* %16, align 1, !insn.addr !155
  %17 = inttoptr i32 %13 to i8*, !insn.addr !156
  %18 = load i8, i8* %17, align 1, !insn.addr !156
  %19 = zext i8 %18 to i32, !insn.addr !156
  %20 = icmp eq i8 %18, 0, !insn.addr !157
  %21 = icmp eq i1 %20, false, !insn.addr !158
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !158
  store i32 %19, i32* %edx.0.reg2mem, !insn.addr !158
  br i1 %21, label %dec_label_pc_1680, label %dec_label_pc_1690, !insn.addr !158

dec_label_pc_1690:                                ; preds = %dec_label_pc_1680
  %22 = load i32, i32* %stack_var_-48, align 4, !insn.addr !159
  %23 = urem i32 %22, 256, !insn.addr !159
  store i32 %23, i32* %edx.1.reg2mem, !insn.addr !159
  br label %dec_label_pc_1695, !insn.addr !159

dec_label_pc_1695:                                ; preds = %dec_label_pc_1690, %dec_label_pc_1630
  %24 = call i32 @strlen(i8* nonnull %6), !insn.addr !160
  %25 = call i32 @__readgsdword(i32 20), !insn.addr !161
  %26 = icmp eq i32 %3, %25, !insn.addr !161
  %27 = icmp eq i1 %26, false, !insn.addr !162
  br i1 %27, label %dec_label_pc_16bf, label %dec_label_pc_16b9, !insn.addr !162

dec_label_pc_16b9:                                ; preds = %dec_label_pc_1695
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %sext = mul i32 %edx.1.reload, 16777216
  %28 = ashr exact i32 %sext, 24, !insn.addr !163
  %29 = add i32 %28, %24, !insn.addr !164
  ret i32 %29, !insn.addr !165

dec_label_pc_16bf:                                ; preds = %dec_label_pc_1695
  %30 = call i32 @__stack_chk_fail_local(), !insn.addr !166
  ret i32 %30, !insn.addr !167

; uselistorder directives
  uselistorder i32 %9, { 1, 0 }
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32* %stack_var_-48, { 1, 2, 3, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16d0:
  %edx.1.reg2mem = alloca i32, !insn.addr !168
  %edx.0.reg2mem = alloca i32, !insn.addr !168
  %eax.0.reg2mem = alloca i32, !insn.addr !168
  %0 = icmp slt i32 %arg1, 1
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !169
  store i32 %arg2, i32* %edx.0.reg2mem, !insn.addr !169
  store i32 %arg2, i32* %edx.1.reg2mem, !insn.addr !169
  br i1 %0, label %dec_label_pc_16e7, label %dec_label_pc_16e0, !insn.addr !169

dec_label_pc_16e0:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_16e0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !170
  %2 = add i32 %eax.0.reload, -1, !insn.addr !171
  %3 = icmp eq i32 %2, 0, !insn.addr !171
  %4 = icmp eq i1 %3, false, !insn.addr !172
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !172
  store i32 %1, i32* %edx.0.reg2mem, !insn.addr !172
  store i32 %1, i32* %edx.1.reg2mem, !insn.addr !172
  br i1 %4, label %dec_label_pc_16e0, label %dec_label_pc_16e7, !insn.addr !172

dec_label_pc_16e7:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_16d0
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  ret i32 %edx.1.reload, !insn.addr !173

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_16e0, { 1, 0 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_16f0:
  ret i32 500500, !insn.addr !174
}

define i32 @param_non_tail_call(i32 %arg1) local_unnamed_addr {
dec_label_pc_1700:
  %edx.1.reg2mem = alloca i32, !insn.addr !175
  %edx.0.reg2mem = alloca i32, !insn.addr !175
  %eax.0.reg2mem = alloca i32, !insn.addr !175
  %0 = icmp slt i32 %arg1, 1
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !176
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !176
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !176
  br i1 %0, label %dec_label_pc_1717, label %dec_label_pc_1710, !insn.addr !176

dec_label_pc_1710:                                ; preds = %dec_label_pc_1700, %dec_label_pc_1710
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !177
  %2 = add i32 %eax.0.reload, -1, !insn.addr !178
  %3 = icmp eq i32 %2, 0, !insn.addr !178
  %4 = icmp eq i1 %3, false, !insn.addr !179
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !179
  store i32 %1, i32* %edx.0.reg2mem, !insn.addr !179
  store i32 %1, i32* %edx.1.reg2mem, !insn.addr !179
  br i1 %4, label %dec_label_pc_1710, label %dec_label_pc_1717, !insn.addr !179

dec_label_pc_1717:                                ; preds = %dec_label_pc_1710, %dec_label_pc_1700
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  ret i32 %edx.1.reload, !insn.addr !180

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1710, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_1720:
  ret i32 5050, !insn.addr !181
}

define i32 @param_vectorized_loop(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1730:
  %merge.reg2mem = alloca i32, !insn.addr !182
  %edx.0.reg2mem = alloca i32, !insn.addr !182
  %eax.1.reg2mem = alloca i32, !insn.addr !182
  %eax.0.reg2mem = alloca i32, !insn.addr !182
  %0 = icmp slt i32 %arg4, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !183
  store i32 0, i32* %merge.reg2mem, !insn.addr !183
  br i1 %0, label %dec_label_pc_1779, label %dec_label_pc_1750, !insn.addr !183

dec_label_pc_1750:                                ; preds = %dec_label_pc_1730, %dec_label_pc_1750
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %eax.0.reload, 4, !insn.addr !184
  %2 = add i32 %1, %arg2, !insn.addr !184
  %3 = inttoptr i32 %2 to i32*, !insn.addr !184
  %4 = load i32, i32* %3, align 4, !insn.addr !184
  %5 = add i32 %1, %arg1, !insn.addr !185
  %6 = inttoptr i32 %5 to i32*, !insn.addr !185
  %7 = load i32, i32* %6, align 4, !insn.addr !185
  %8 = add i32 %7, %4, !insn.addr !185
  %9 = add i32 %1, %arg3, !insn.addr !186
  %10 = inttoptr i32 %9 to i32*, !insn.addr !186
  store i32 %8, i32* %10, align 4, !insn.addr !186
  %11 = add i32 %eax.0.reload, 1, !insn.addr !187
  %12 = icmp eq i32 %11, %arg4, !insn.addr !188
  %13 = icmp eq i1 %12, false, !insn.addr !189
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !189
  br i1 %13, label %dec_label_pc_1750, label %dec_label_pc_1760, !insn.addr !189

dec_label_pc_1760:                                ; preds = %dec_label_pc_1750
  %14 = mul i32 %arg4, 4, !insn.addr !190
  %15 = add i32 %14, %arg3, !insn.addr !190
  store i32 %arg3, i32* %eax.1.reg2mem, !insn.addr !191
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1770, !insn.addr !191

dec_label_pc_1770:                                ; preds = %dec_label_pc_1770, %dec_label_pc_1760
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %16 = inttoptr i32 %eax.1.reload to i32*, !insn.addr !192
  %17 = load i32, i32* %16, align 4, !insn.addr !192
  %18 = add i32 %17, %edx.0.reload, !insn.addr !192
  %19 = add i32 %eax.1.reload, 4, !insn.addr !193
  %20 = icmp eq i32 %15, %19, !insn.addr !194
  %21 = icmp eq i1 %20, false, !insn.addr !195
  store i32 %19, i32* %eax.1.reg2mem, !insn.addr !195
  store i32 %18, i32* %edx.0.reg2mem, !insn.addr !195
  store i32 %18, i32* %merge.reg2mem, !insn.addr !195
  br i1 %21, label %dec_label_pc_1770, label %dec_label_pc_1779, !insn.addr !195

dec_label_pc_1779:                                ; preds = %dec_label_pc_1770, %dec_label_pc_1730
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !196

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 4, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1750, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_1790:
  ret i32 72, !insn.addr !197
}

define i32 @param_link_time_optimization(i32 %arg1) local_unnamed_addr {
dec_label_pc_17a0:
  %factor = mul i32 %arg1, 2
  %0 = add i32 %factor, 10, !insn.addr !198
  ret i32 %0, !insn.addr !199
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_17b0:
  ret i32 20, !insn.addr !200
}

define i32 @param_division_by_zero(i32 %arg1) local_unnamed_addr {
dec_label_pc_17c0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !201
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !202
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_27ea to i32), i32 -11364), !insn.addr !203
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !204
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !205
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_27ea to i32), i32 332), !insn.addr !206
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !207
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !207
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !207
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !207
  %11 = icmp eq i32 %10, 0, !insn.addr !208
  %12 = icmp eq i1 %11, false, !insn.addr !209
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !209
  br i1 %12, label %dec_label_pc_1804, label %dec_label_pc_17fa, !insn.addr !209

dec_label_pc_17fa:                                ; preds = %dec_label_pc_17c0
  %13 = udiv i32 10, %arg1
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !210
  br label %dec_label_pc_1804, !insn.addr !210

dec_label_pc_1804:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17fa
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !211

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1804, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_1820:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !212
  %3 = call i32 @param_division_by_zero.constprop.1(), !insn.addr !213
  %4 = call i32 @param_division_by_zero.constprop.0(), !insn.addr !214
  %5 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !215
  %6 = add i32 %4, %3, !insn.addr !216
  ret i32 %6, !insn.addr !217
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_1860:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !218
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !219
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_274a to i32), i32 -11316), !insn.addr !220
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !221
  %5 = call void (i32)* @signal(i32 11, void (i32)* %4), !insn.addr !222
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_274a to i32), i32 172), !insn.addr !223
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !224
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !224
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !224
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !224
  %11 = icmp eq i32 %10, 0, !insn.addr !225
  %12 = icmp eq i1 %11, false, !insn.addr !226
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !226
  br i1 %12, label %dec_label_pc_18a0, label %dec_label_pc_189a, !insn.addr !226

dec_label_pc_189a:                                ; preds = %dec_label_pc_1860
  %13 = load i32, i32* %p, align 4, !insn.addr !227
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !227
  br label %dec_label_pc_18a0, !insn.addr !227

dec_label_pc_18a0:                                ; preds = %dec_label_pc_1860, %dec_label_pc_189a
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !228

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 2, 3, 1, 0, 4 }
  uselistorder label %dec_label_pc_18a0, { 1, 0 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_18b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !229
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !230
  store i32 42, i32* %stack_var_-20, align 4, !insn.addr !231
  %4 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-20), !insn.addr !232
  %5 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !233
  %6 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !234
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !235
  %8 = icmp eq i32 %3, %7, !insn.addr !235
  %9 = icmp eq i1 %8, false, !insn.addr !236
  br i1 %9, label %dec_label_pc_1918, label %dec_label_pc_1911, !insn.addr !236

dec_label_pc_1911:                                ; preds = %dec_label_pc_18b0
  %10 = add i32 %5, %4, !insn.addr !237
  ret i32 %10, !insn.addr !238

dec_label_pc_1918:                                ; preds = %dec_label_pc_18b0
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !239
  ret i32 %11, !insn.addr !240
}

define i32 @param_buffer_overflow_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_1920:
  ret i32 %arg1, !insn.addr !241
}

define i32 @param_buffer_overflow_heap(i32 %arg1) local_unnamed_addr {
dec_label_pc_1930:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !242
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !243
  %3 = call i32* @malloc(i32 16), !insn.addr !244
  %4 = icmp eq i32* %3, null, !insn.addr !245
  store i32 -2, i32* %storemerge.reg2mem, !insn.addr !246
  br i1 %4, label %dec_label_pc_1961, label %dec_label_pc_1951, !insn.addr !246

dec_label_pc_1951:                                ; preds = %dec_label_pc_1930
  call void @free(i32* nonnull %3), !insn.addr !247
  store i32 %arg1, i32* %storemerge.reg2mem, !insn.addr !248
  br label %dec_label_pc_1961, !insn.addr !248

dec_label_pc_1961:                                ; preds = %dec_label_pc_1930, %dec_label_pc_1951
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !249

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1961, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_1970:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !250
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !251
  %3 = call i32* @malloc(i32 16), !insn.addr !252
  %4 = icmp eq i32* %3, null, !insn.addr !253
  store i32 8, i32* %storemerge.reg2mem, !insn.addr !254
  br i1 %4, label %dec_label_pc_19a2, label %dec_label_pc_1991, !insn.addr !254

dec_label_pc_1991:                                ; preds = %dec_label_pc_1970
  call void @free(i32* nonnull %3), !insn.addr !255
  store i32 30, i32* %storemerge.reg2mem, !insn.addr !256
  br label %dec_label_pc_19a2, !insn.addr !256

dec_label_pc_19a2:                                ; preds = %dec_label_pc_1970, %dec_label_pc_1991
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !257

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19a2, { 1, 0 }
}

define i32 @param_integer_overflow(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_19b0:
  %eax.0.reg2mem = alloca i32, !insn.addr !258
  %0 = add i32 %arg2, %arg1, !insn.addr !259
  %1 = icmp slt i32 %arg1, 1
  %2 = icmp slt i32 %arg2, 1
  %or.cond = or i1 %1, %2
  br i1 %or.cond, label %dec_label_pc_19d8, label %dec_label_pc_19c7, !insn.addr !260

dec_label_pc_19c7:                                ; preds = %dec_label_pc_19b0
  %3 = icmp sgt i32 %0, -1, !insn.addr !261
  %4 = select i1 %3, i32 %0, i32 -1, !insn.addr !262
  ret i32 %4, !insn.addr !263

dec_label_pc_19d8:                                ; preds = %dec_label_pc_19b0
  %5 = and i32 %arg2, %arg1, !insn.addr !264
  %6 = icmp slt i32 %5, 0, !insn.addr !264
  %7 = icmp eq i1 %6, false, !insn.addr !265
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !265
  br i1 %7, label %dec_label_pc_19e6, label %dec_label_pc_19dc, !insn.addr !265

dec_label_pc_19dc:                                ; preds = %dec_label_pc_19d8
  %8 = icmp eq i32 %0, 0, !insn.addr !266
  %9 = icmp slt i32 %0, 0, !insn.addr !266
  %10 = icmp eq i1 %9, false, !insn.addr !267
  %11 = icmp eq i1 %8, false, !insn.addr !267
  %12 = icmp eq i1 %10, %11, !insn.addr !267
  %13 = select i1 %12, i32 -2, i32 %0, !insn.addr !267
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !267
  br label %dec_label_pc_19e6, !insn.addr !267

dec_label_pc_19e6:                                ; preds = %dec_label_pc_19dc, %dec_label_pc_19d8
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !268

; uselistorder directives
  uselistorder i32 %0, { 5, 3, 4, 0, 2, 1 }
  uselistorder i32 -2, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_19f0:
  ret i32 2000000000, !insn.addr !269
}

define i32 @param_undefined_behavior(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = mul i32 %arg1, 2, !insn.addr !270
  ret i32 %0, !insn.addr !271

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2, 4 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_1a10:
  ret i32 10, !insn.addr !272

; uselistorder directives
  uselistorder i32 10, { 0, 3, 2, 4, 1 }
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1a20:
  ret i32 43, !insn.addr !273
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1a30:
  ret i32 43, !insn.addr !274
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = alloca i32
  %edx.1.reg2mem = alloca i32, !insn.addr !275
  %eax.1.reg2mem = alloca i32, !insn.addr !275
  %edx.0.reg2mem = alloca i32, !insn.addr !275
  %eax.0.reg2mem = alloca i32, !insn.addr !275
  %1 = load i32, i32* %0
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !276
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !277
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -8108), !insn.addr !278
  %5 = inttoptr i32 %4 to i8*, !insn.addr !279
  %6 = call i32 @puts(i8* %5), !insn.addr !280
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7813), !insn.addr !281
  %8 = inttoptr i32 %7 to void (i32)*, !insn.addr !282
  %9 = bitcast void (i32)* %8 to i8*
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %9), !insn.addr !283
  store i32 5, i32* %eax.0.reg2mem, !insn.addr !284
  store i32 6, i32* %edx.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_1a90, !insn.addr !284

dec_label_pc_1a90:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1a40
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %11 = ashr i32 %eax.0.reload, 31, !insn.addr !285
  %12 = zext i32 %eax.0.reload to i64, !insn.addr !286
  %13 = zext i32 %11 to i64, !insn.addr !286
  %14 = mul i64 %13, 4294967296, !insn.addr !286
  %15 = or i64 %14, %12, !insn.addr !286
  %16 = zext i32 %edx.0.reload to i64, !insn.addr !286
  %17 = srem i64 %15, %16, !insn.addr !286
  %18 = trunc i64 %17 to i32, !insn.addr !286
  %19 = icmp eq i32 %18, 0, !insn.addr !287
  %20 = icmp eq i1 %19, false, !insn.addr !288
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !288
  store i32 %18, i32* %edx.0.reg2mem, !insn.addr !288
  br i1 %20, label %dec_label_pc_1a90, label %dec_label_pc_1a9b, !insn.addr !288

dec_label_pc_1a9b:                                ; preds = %dec_label_pc_1a90
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7785), !insn.addr !289
  %22 = inttoptr i32 %21 to void (i32)*, !insn.addr !290
  %23 = bitcast void (i32)* %22 to i8*
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %23), !insn.addr !291
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7757), !insn.addr !292
  %26 = inttoptr i32 %25 to void (i32)*, !insn.addr !293
  %27 = bitcast void (i32)* %26 to i8*
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %27), !insn.addr !294
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 84), !insn.addr !295
  %30 = inttoptr i32 %29 to void (i32)*, !insn.addr !296
  %31 = bitcast i32* %stack_var_-48 to i8*
  %32 = bitcast void (i32)* %30 to i8*
  %33 = call i8* @strncpy(i8* nonnull %31, i8* %32, i32 31), !insn.addr !297
  %34 = load i32, i32* %stack_var_-48, align 4, !insn.addr !298
  %35 = trunc i32 %34 to i8, !insn.addr !299
  %36 = icmp eq i8 %35, 0, !insn.addr !299
  br i1 %36, label %dec_label_pc_1b15, label %dec_label_pc_1afa, !insn.addr !300

dec_label_pc_1afa:                                ; preds = %dec_label_pc_1a9b
  %37 = urem i32 %34, 256, !insn.addr !298
  %38 = ptrtoint i32* %stack_var_-48 to i32, !insn.addr !301
  store i32 %38, i32* %eax.1.reg2mem, !insn.addr !302
  store i32 %37, i32* %edx.1.reg2mem, !insn.addr !302
  br label %dec_label_pc_1b00, !insn.addr !302

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1afa
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %39 = add i32 %eax.1.reload, 1, !insn.addr !303
  %40 = trunc i32 %edx.1.reload to i8
  %41 = xor i8 %40, 90, !insn.addr !304
  %42 = inttoptr i32 %eax.1.reload to i8*, !insn.addr !304
  store i8 %41, i8* %42, align 1, !insn.addr !304
  %43 = inttoptr i32 %39 to i8*, !insn.addr !305
  %44 = load i8, i8* %43, align 1, !insn.addr !305
  %45 = zext i8 %44 to i32, !insn.addr !305
  %46 = icmp eq i8 %44, 0, !insn.addr !306
  %47 = icmp eq i1 %46, false, !insn.addr !307
  store i32 %39, i32* %eax.1.reg2mem, !insn.addr !307
  store i32 %45, i32* %edx.1.reg2mem, !insn.addr !307
  br i1 %47, label %dec_label_pc_1b00, label %dec_label_pc_1b15, !insn.addr !307

dec_label_pc_1b15:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1a9b
  %48 = call i32 @strlen(i8* nonnull %31), !insn.addr !308
  %49 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7728), !insn.addr !309
  %50 = inttoptr i32 %49 to void (i32)*, !insn.addr !310
  %51 = bitcast void (i32)* %50 to i8*
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %51), !insn.addr !311
  %53 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -8060), !insn.addr !312
  %54 = inttoptr i32 %53 to void (i32)*, !insn.addr !313
  %55 = bitcast void (i32)* %54 to i8*
  %56 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %55), !insn.addr !314
  %57 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -8016), !insn.addr !315
  %58 = inttoptr i32 %57 to void (i32)*, !insn.addr !316
  %59 = bitcast void (i32)* %58 to i8*
  %60 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %59), !insn.addr !317
  %61 = call i32 @call_vectorized_loop(), !insn.addr !318
  %62 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7976), !insn.addr !319
  %63 = inttoptr i32 %62 to void (i32)*, !insn.addr !320
  %64 = bitcast void (i32)* %63 to i8*
  %65 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %64), !insn.addr !321
  %66 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7936), !insn.addr !322
  %67 = inttoptr i32 %66 to void (i32)*, !insn.addr !323
  %68 = bitcast void (i32)* %67 to i8*
  %69 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %68), !insn.addr !324
  %70 = call i32 @param_division_by_zero.constprop.1(), !insn.addr !325
  %71 = call i32 @param_division_by_zero.constprop.0(), !insn.addr !326
  %72 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !327
  %73 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7700), !insn.addr !328
  %74 = inttoptr i32 %73 to void (i32)*, !insn.addr !329
  %75 = bitcast void (i32)* %74 to i8*
  %76 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %75), !insn.addr !330
  store i32 42, i32* %stack_var_-52, align 4, !insn.addr !331
  %77 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-52), !insn.addr !332
  %78 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !333
  %79 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !334
  %80 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7672), !insn.addr !335
  %81 = inttoptr i32 %80 to void (i32)*, !insn.addr !336
  %82 = bitcast void (i32)* %81 to i8*
  %83 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %82), !insn.addr !337
  %84 = call i32* @malloc(i32 16), !insn.addr !338
  %85 = icmp eq i32* %84, null, !insn.addr !339
  br i1 %85, label %dec_label_pc_1c24, label %dec_label_pc_1c13, !insn.addr !340

dec_label_pc_1c13:                                ; preds = %dec_label_pc_1b15
  call void @free(i32* nonnull %84), !insn.addr !341
  br label %dec_label_pc_1c24, !insn.addr !342

dec_label_pc_1c24:                                ; preds = %dec_label_pc_1b15, %dec_label_pc_1c13
  %86 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7643), !insn.addr !343
  %87 = inttoptr i32 %86 to void (i32)*, !insn.addr !344
  %88 = bitcast void (i32)* %87 to i8*
  %89 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %88), !insn.addr !345
  %90 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7904), !insn.addr !346
  %91 = inttoptr i32 %90 to void (i32)*, !insn.addr !347
  %92 = bitcast void (i32)* %91 to i8*
  %93 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %92), !insn.addr !348
  %94 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7614), !insn.addr !349
  %95 = inttoptr i32 %94 to void (i32)*, !insn.addr !350
  %96 = bitcast void (i32)* %95 to i8*
  %97 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %96), !insn.addr !351
  %98 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2568 to i32), i32 -7852), !insn.addr !352
  %99 = inttoptr i32 %98 to void (i32)*, !insn.addr !353
  %100 = bitcast void (i32)* %99 to i8*
  %101 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %100), !insn.addr !354
  %102 = call i32 @__readgsdword(i32 20), !insn.addr !355
  %103 = icmp eq i32 %3, %102, !insn.addr !355
  %104 = icmp eq i1 %103, false, !insn.addr !356
  br i1 %104, label %dec_label_pc_1c90, label %dec_label_pc_1c82, !insn.addr !356

dec_label_pc_1c82:                                ; preds = %dec_label_pc_1c24
  ret void, !insn.addr !357

dec_label_pc_1c90:                                ; preds = %dec_label_pc_1c24
  %105 = call i32 @__stack_chk_fail_local(), !insn.addr !358
  ret void, !insn.addr !359

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-48, { 1, 2, 0 }
  uselistorder i32 %1, { 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 0, 1, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 0, 3, 2, 1 }
  uselistorder void (i32*)* @free, { 0, 2, 1, 3 }
  uselistorder i32* (i32)* @malloc, { 0, 2, 1, 3 }
  uselistorder i32 16, { 1, 2, 3, 0 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0, 3, 2 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 0, 7, 4, 6, 5, 3, 2, 8 }
  uselistorder i32 8, { 1, 0, 2, 3, 4, 5 }
  uselistorder i32 (i8*)* @strlen, { 0, 2, 1, 3 }
  uselistorder i8 0, { 8, 9, 0, 1, 2, 3, 4, 5, 6, 7 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 0, 3, 2, 1, 4 }
  uselistorder i32 0, { 19, 8, 9, 10, 18, 11, 1, 0, 2, 12, 3, 4, 13, 14, 15, 16, 7, 17, 5, 6 }
  uselistorder i32 31, { 0, 5, 1, 2, 3, 4 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
  uselistorder i32 20, { 2, 3, 4, 5, 0, 6, 7, 8, 9, 1, 10 }
  uselistorder label %dec_label_pc_1c24, { 1, 0 }
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1ca0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !360
  call void @__stack_chk_fail(), !insn.addr !361
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !362
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !363
  %ebx.0.reg2mem = alloca i32, !insn.addr !363
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !364
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_22eb to i32), i32 -232), !insn.addr !365
  %4 = inttoptr i32 %3 to i32*, !insn.addr !365
  %5 = load i32, i32* %4, align 4, !insn.addr !365
  %6 = icmp eq i32 %5, -1, !insn.addr !366
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !367
  store i32 -1, i32* %merge.reg2mem, !insn.addr !367
  br i1 %6, label %dec_label_pc_1cfd, label %dec_label_pc_1cf0, !insn.addr !367

dec_label_pc_1cf0:                                ; preds = %dec_label_pc_1cc0, %dec_label_pc_1cf0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !368
  %8 = inttoptr i32 %7 to i32*, !insn.addr !368
  %9 = load i32, i32* %8, align 4, !insn.addr !368
  %10 = icmp eq i32 %9, -1, !insn.addr !369
  %11 = icmp eq i1 %10, false, !insn.addr !370
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !370
  store i32 %9, i32* %merge.reg2mem, !insn.addr !370
  br i1 %11, label %dec_label_pc_1cf0, label %dec_label_pc_1cfd, !insn.addr !370

dec_label_pc_1cfd:                                ; preds = %dec_label_pc_1cf0, %dec_label_pc_1cc0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !371

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 18, 20, 21, 22, 1, 0, 2, 3, 19, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 }
  uselistorder i32 -1, { 4, 0, 5, 6, 7, 1, 2, 8, 9, 11, 10, 3 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_1cf0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1d0c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !372
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !373
  ret i32 %3, !insn.addr !374

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 16, 4, 0, 15, 14, 13, 3, 12, 11, 10, 9, 8, 2, 1, 6, 5, 7 }
  uselistorder i32 1, { 24, 26, 25, 23, 22, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 96, 73, 74, 75, 84, 83, 30, 29, 28, 27, 21, 61, 76, 31, 32, 20, 33, 19, 85, 18, 34, 17, 16, 35, 15, 89, 77, 39, 38, 37, 36, 78, 42, 41, 40, 79, 45, 44, 43, 90, 86, 48, 47, 46, 14, 91, 87, 51, 50, 49, 13, 92, 53, 52, 12, 80, 55, 54, 81, 82, 93, 57, 56, 11, 10, 59, 94, 9, 60, 95, 8, 7, 6, 58, 5, 4, 3, 2, 88, 1, 0 }
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
!45 = !{i64 4949}
!46 = !{i64 4965}
!47 = !{i64 4975}
!48 = !{i64 4982}
!49 = !{i64 4997}
!50 = !{i64 5013}
!51 = !{i64 5023}
!52 = !{i64 5030}
!53 = !{i64 5041}
!54 = !{i64 5055}
!55 = !{i64 5061}
!56 = !{i64 5064}
!57 = !{i64 5069}
!58 = !{i64 5078}
!59 = !{i64 5113}
!60 = !{i64 5121}
!61 = !{i64 5135}
!62 = !{i64 5141}
!63 = !{i64 5144}
!64 = !{i64 5149}
!65 = !{i64 5158}
!66 = !{i64 5167}
!67 = !{i64 5179}
!68 = !{i64 5182}
!69 = !{i64 5192}
!70 = !{i64 5209}
!71 = !{i64 5216}
!72 = !{i64 5230}
!73 = !{i64 5233}
!74 = !{i64 5236}
!75 = !{i64 5239}
!76 = !{i64 5245}
!77 = !{i64 5248}
!78 = !{i64 5253}
!79 = !{i64 5255}
!80 = !{i64 5266}
!81 = !{i64 5267}
!82 = !{i64 5271}
!83 = !{i64 5273}
!84 = !{i64 5275}
!85 = !{i64 5278}
!86 = !{i64 5287}
!87 = !{i64 5293}
!88 = !{i64 5296}
!89 = !{i64 5304}
!90 = !{i64 5312}
!91 = !{i64 5327}
!92 = !{i64 5330}
!93 = !{i64 5331}
!94 = !{i64 5335}
!95 = !{i64 5337}
!96 = !{i64 5339}
!97 = !{i64 5353}
!98 = !{i64 5356}
!99 = !{i64 5373}
!100 = !{i64 5379}
!101 = !{i64 5382}
!102 = !{i64 5391}
!103 = !{i64 5393}
!104 = !{i64 5417}
!105 = !{i64 5424}
!106 = !{i64 5432}
!107 = !{i64 5465}
!108 = !{i64 5470}
!109 = !{i64 5475}
!110 = !{i64 5481}
!111 = !{i64 5483}
!112 = !{i64 5490}
!113 = !{i64 5493}
!114 = !{i64 5496}
!115 = !{i64 5499}
!116 = !{i64 5501}
!117 = !{i64 5512}
!118 = !{i64 5520}
!119 = !{i64 5526}
!120 = !{i64 5540}
!121 = !{i64 5554}
!122 = !{i64 5560}
!123 = !{i64 5566}
!124 = !{i64 5571}
!125 = !{i64 5584}
!126 = !{i64 5586}
!127 = !{i64 5588}
!128 = !{i64 5597}
!129 = !{i64 5603}
!130 = !{i64 5606}
!131 = !{i64 5609}
!132 = !{i64 5612}
!133 = !{i64 5614}
!134 = !{i64 5616}
!135 = !{i64 5629}
!136 = !{i64 5648}
!137 = !{i64 5655}
!138 = !{i64 5634}
!139 = !{i64 5642}
!140 = !{i64 5662}
!141 = !{i64 5663}
!142 = !{i64 5679}
!143 = !{i64 5680}
!144 = !{i64 5686}
!145 = !{i64 5700}
!146 = !{i64 5714}
!147 = !{i64 5720}
!148 = !{i64 5726}
!149 = !{i64 5731}
!150 = !{i64 5744}
!151 = !{i64 5746}
!152 = !{i64 5748}
!153 = !{i64 5757}
!154 = !{i64 5763}
!155 = !{i64 5766}
!156 = !{i64 5769}
!157 = !{i64 5772}
!158 = !{i64 5774}
!159 = !{i64 5776}
!160 = !{i64 5789}
!161 = !{i64 5808}
!162 = !{i64 5815}
!163 = !{i64 5794}
!164 = !{i64 5802}
!165 = !{i64 5822}
!166 = !{i64 5823}
!167 = !{i64 5839}
!168 = !{i64 5840}
!169 = !{i64 5854}
!170 = !{i64 5856}
!171 = !{i64 5858}
!172 = !{i64 5861}
!173 = !{i64 5865}
!174 = !{i64 5881}
!175 = !{i64 5888}
!176 = !{i64 5900}
!177 = !{i64 5904}
!178 = !{i64 5906}
!179 = !{i64 5909}
!180 = !{i64 5913}
!181 = !{i64 5929}
!182 = !{i64 5936}
!183 = !{i64 5961}
!184 = !{i64 5968}
!185 = !{i64 5971}
!186 = !{i64 5974}
!187 = !{i64 5977}
!188 = !{i64 5980}
!189 = !{i64 5982}
!190 = !{i64 5986}
!191 = !{i64 5998}
!192 = !{i64 6000}
!193 = !{i64 6002}
!194 = !{i64 6005}
!195 = !{i64 6007}
!196 = !{i64 6014}
!197 = !{i64 6041}
!198 = !{i64 6056}
!199 = !{i64 6060}
!200 = !{i64 6073}
!201 = !{i64 6080}
!202 = !{i64 6085}
!203 = !{i64 6099}
!204 = !{i64 6105}
!205 = !{i64 6108}
!206 = !{i64 6113}
!207 = !{i64 6122}
!208 = !{i64 6134}
!209 = !{i64 6136}
!210 = !{i64 6144}
!211 = !{i64 6152}
!212 = !{i64 6183}
!213 = !{i64 6194}
!214 = !{i64 6201}
!215 = !{i64 6215}
!216 = !{i64 6223}
!217 = !{i64 6229}
!218 = !{i64 6240}
!219 = !{i64 6245}
!220 = !{i64 6259}
!221 = !{i64 6265}
!222 = !{i64 6268}
!223 = !{i64 6273}
!224 = !{i64 6282}
!225 = !{i64 6294}
!226 = !{i64 6296}
!227 = !{i64 6302}
!228 = !{i64 6308}
!229 = !{i64 6327}
!230 = !{i64 6341}
!231 = !{i64 6357}
!232 = !{i64 6366}
!233 = !{i64 6380}
!234 = !{i64 6393}
!235 = !{i64 6408}
!236 = !{i64 6415}
!237 = !{i64 6401}
!238 = !{i64 6423}
!239 = !{i64 6424}
!240 = !{i64 6429}
!241 = !{i64 6440}
!242 = !{i64 6448}
!243 = !{i64 6453}
!244 = !{i64 6469}
!245 = !{i64 6477}
!246 = !{i64 6479}
!247 = !{i64 6485}
!248 = !{i64 6494}
!249 = !{i64 6501}
!250 = !{i64 6512}
!251 = !{i64 6517}
!252 = !{i64 6533}
!253 = !{i64 6541}
!254 = !{i64 6543}
!255 = !{i64 6549}
!256 = !{i64 6557}
!257 = !{i64 6566}
!258 = !{i64 6576}
!259 = !{i64 6588}
!260 = !{i64 6593}
!261 = !{i64 6599}
!262 = !{i64 6606}
!263 = !{i64 6609}
!264 = !{i64 6616}
!265 = !{i64 6618}
!266 = !{i64 6620}
!267 = !{i64 6627}
!268 = !{i64 6630}
!269 = !{i64 6649}
!270 = !{i64 6664}
!271 = !{i64 6666}
!272 = !{i64 6681}
!273 = !{i64 6697}
!274 = !{i64 6713}
!275 = !{i64 6720}
!276 = !{i64 6727}
!277 = !{i64 6741}
!278 = !{i64 6753}
!279 = !{i64 6759}
!280 = !{i64 6760}
!281 = !{i64 6768}
!282 = !{i64 6776}
!283 = !{i64 6779}
!284 = !{i64 6797}
!285 = !{i64 6802}
!286 = !{i64 6803}
!287 = !{i64 6807}
!288 = !{i64 6809}
!289 = !{i64 6831}
!290 = !{i64 6837}
!291 = !{i64 6840}
!292 = !{i64 6848}
!293 = !{i64 6859}
!294 = !{i64 6862}
!295 = !{i64 6870}
!296 = !{i64 6878}
!297 = !{i64 6884}
!298 = !{i64 6889}
!299 = !{i64 6902}
!300 = !{i64 6904}
!301 = !{i64 6906}
!302 = !{i64 6908}
!303 = !{i64 6915}
!304 = !{i64 6918}
!305 = !{i64 6921}
!306 = !{i64 6924}
!307 = !{i64 6926}
!308 = !{i64 6941}
!309 = !{i64 6956}
!310 = !{i64 6963}
!311 = !{i64 6966}
!312 = !{i64 6974}
!313 = !{i64 6985}
!314 = !{i64 6988}
!315 = !{i64 6996}
!316 = !{i64 7007}
!317 = !{i64 7010}
!318 = !{i64 7015}
!319 = !{i64 7024}
!320 = !{i64 7030}
!321 = !{i64 7033}
!322 = !{i64 7041}
!323 = !{i64 7049}
!324 = !{i64 7052}
!325 = !{i64 7057}
!326 = !{i64 7064}
!327 = !{i64 7079}
!328 = !{i64 7087}
!329 = !{i64 7094}
!330 = !{i64 7097}
!331 = !{i64 7102}
!332 = !{i64 7116}
!333 = !{i64 7130}
!334 = !{i64 7145}
!335 = !{i64 7153}
!336 = !{i64 7160}
!337 = !{i64 7163}
!338 = !{i64 7175}
!339 = !{i64 7183}
!340 = !{i64 7185}
!341 = !{i64 7191}
!342 = !{i64 7199}
!343 = !{i64 7208}
!344 = !{i64 7214}
!345 = !{i64 7217}
!346 = !{i64 7225}
!347 = !{i64 7236}
!348 = !{i64 7239}
!349 = !{i64 7247}
!350 = !{i64 7255}
!351 = !{i64 7258}
!352 = !{i64 7266}
!353 = !{i64 7274}
!354 = !{i64 7277}
!355 = !{i64 7289}
!356 = !{i64 7296}
!357 = !{i64 7304}
!358 = !{i64 7312}
!359 = !{i64 7327}
!360 = !{i64 7333}
!361 = !{i64 7347}
!362 = !{i64 7358}
!363 = !{i64 7360}
!364 = !{i64 7364}
!365 = !{i64 7375}
!366 = !{i64 7381}
!367 = !{i64 7384}
!368 = !{i64 7410}
!369 = !{i64 7416}
!370 = !{i64 7419}
!371 = !{i64 7425}
!372 = !{i64 7444}
!373 = !{i64 7455}
!374 = !{i64 7464}
