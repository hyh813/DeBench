source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3e8 = constant [6 x i8] c".so.6\00"
@global_var_290c = constant i32 -3829
@global_var_28bd = local_unnamed_addr constant i32 1293946434
@global_var_287a = constant i32 403587348
@global_var_282c = local_unnamed_addr constant i32 -3955
@global_var_27b7 = local_unnamed_addr constant i32 1090684680
@global_var_26e4 = constant i32 239272579
@global_var_257a = local_unnamed_addr constant i32 -275841024
@global_var_255b = constant i32 11263
@global_var_250b = local_unnamed_addr constant i32 239403008
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

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_11dc(i32 %2), !insn.addr !16
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 11828, !insn.addr !17
  %6 = inttoptr i32 %5 to i32*, !insn.addr !17
  %7 = load i32, i32* %6, align 4, !insn.addr !17
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !18
  %9 = call i32 @__asm_hlt(), !insn.addr !19
  unreachable, !insn.addr !19

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_11dc(i32 %arg1) local_unnamed_addr {
dec_label_pc_11dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !20
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !21
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !22
  %3 = add i32 %1, 11803, !insn.addr !23
  ret i32 %3, !insn.addr !24
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !25
  ret i32 0, !insn.addr !26
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !27
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !28
  %3 = add i32 %1, 11667, !insn.addr !29
  %4 = inttoptr i32 %3 to i8*, !insn.addr !29
  %5 = load i8, i8* %4, align 1, !insn.addr !29
  %6 = icmp eq i8 %5, 0, !insn.addr !29
  %7 = icmp eq i1 %6, false, !insn.addr !30
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !30
  br i1 %7, label %dec_label_pc_1302, label %dec_label_pc_12a1, !insn.addr !30

dec_label_pc_12a1:                                ; preds = %dec_label_pc_1280
  %8 = add i32 %1, 11619, !insn.addr !31
  %9 = inttoptr i32 %8 to i32*, !insn.addr !31
  %10 = load i32, i32* %9, align 4, !insn.addr !31
  %11 = icmp eq i32 %10, 0, !insn.addr !32
  br i1 %11, label %dec_label_pc_12be, label %dec_label_pc_12ab, !insn.addr !33

dec_label_pc_12ab:                                ; preds = %dec_label_pc_12a1
  %12 = add i32 %1, 11639, !insn.addr !34
  %13 = inttoptr i32 %12 to i32*, !insn.addr !34
  %14 = load i32, i32* %13, align 4, !insn.addr !34
  %15 = inttoptr i32 %14 to i32*, !insn.addr !35
  call void @__cxa_finalize(i32* %15), !insn.addr !35
  br label %dec_label_pc_12be, !insn.addr !36

dec_label_pc_12be:                                ; preds = %dec_label_pc_12ab, %dec_label_pc_12a1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !37
  store i8 1, i8* %4, align 1, !insn.addr !38
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !38
  br label %dec_label_pc_1302, !insn.addr !38

dec_label_pc_1302:                                ; preds = %dec_label_pc_12be, %dec_label_pc_1280
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !39

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1310:
  %0 = call i32 @register_tm_clones(), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1319:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !41
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_131d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !42
}

define i32 @div_zero_handler() local_unnamed_addr {
dec_label_pc_1321:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !43
  %3 = add i32 %1, 11726, !insn.addr !44
  %4 = inttoptr i32 %3 to i32*, !insn.addr !44
  store i32 1, i32* %4, align 4, !insn.addr !44
  %5 = add i32 %1, 11730, !insn.addr !45
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !46
  ret i32 %6, !insn.addr !46

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @segv_handler() local_unnamed_addr {
dec_label_pc_134c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !47
  %3 = add i32 %1, 11495, !insn.addr !48
  %4 = inttoptr i32 %3 to i32*, !insn.addr !48
  store i32 1, i32* %4, align 4, !insn.addr !48
  %5 = add i32 %1, 11527, !insn.addr !49
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !50
  ret i32 %6, !insn.addr !50

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @__longjmp_chk, { 1, 0, 2 }
}

define i32 @param_fake_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1377:
  ret i32 %arg1, !insn.addr !51
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1380:
  ret i32 10, !insn.addr !52
}

define i32 @param_opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_138a:
  %storemerge.reg2mem = alloca i32, !insn.addr !53
  %ecx.0.reg2mem = alloca i32, !insn.addr !53
  %eax.0.reg2mem = alloca i32, !insn.addr !53
  %0 = mul i32 %arg1, 2, !insn.addr !54
  %1 = add i32 %arg1, 1, !insn.addr !55
  %2 = mul i32 %arg1, %arg1, !insn.addr !56
  %3 = or i32 %0, 1, !insn.addr !57
  %4 = add i32 %3, %2, !insn.addr !57
  %5 = mul i32 %1, %1, !insn.addr !58
  %6 = icmp eq i32 %4, %5, !insn.addr !59
  %7 = icmp eq i32 %1, 0, !insn.addr !60
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !61
  store i32 %1, i32* %ecx.0.reg2mem, !insn.addr !61
  br i1 %7, label %dec_label_pc_13d7, label %dec_label_pc_13b7, !insn.addr !61

dec_label_pc_13b7:                                ; preds = %dec_label_pc_138a, %dec_label_pc_13b7
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = ashr i32 %eax.0.reload, 31, !insn.addr !62
  %9 = zext i32 %eax.0.reload to i64, !insn.addr !63
  %10 = zext i32 %8 to i64, !insn.addr !63
  %11 = mul i64 %10, 4294967296, !insn.addr !63
  %12 = or i64 %11, %9, !insn.addr !63
  %13 = zext i32 %ecx.0.reload to i64, !insn.addr !63
  %14 = srem i64 %12, %13, !insn.addr !63
  %15 = trunc i64 %14 to i32, !insn.addr !63
  %16 = icmp eq i32 %15, 0, !insn.addr !64
  %17 = icmp eq i1 %16, false, !insn.addr !65
  store i32 %ecx.0.reload, i32* %eax.0.reg2mem, !insn.addr !65
  store i32 %15, i32* %ecx.0.reg2mem, !insn.addr !65
  br i1 %17, label %dec_label_pc_13b7, label %dec_label_pc_13c4, !insn.addr !65

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13b7
  %18 = icmp eq i32 %ecx.0.reload, 1, !insn.addr !66
  %19 = icmp eq i1 %6, %18
  br i1 %19, label %dec_label_pc_13cf, label %dec_label_pc_13d7, !insn.addr !67

dec_label_pc_13cf:                                ; preds = %dec_label_pc_13c4
  %20 = add i32 %0, 10, !insn.addr !68
  store i32 %20, i32* %storemerge.reg2mem, !insn.addr !68
  br label %dec_label_pc_13d2, !insn.addr !68

dec_label_pc_13d2:                                ; preds = %dec_label_pc_13d7, %dec_label_pc_13cf
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !69

dec_label_pc_13d7:                                ; preds = %dec_label_pc_13c4, %dec_label_pc_138a
  %21 = add i32 %arg1, 20, !insn.addr !70
  %22 = add i32 %21, %0, !insn.addr !70
  store i32 %22, i32* %storemerge.reg2mem, !insn.addr !71
  br label %dec_label_pc_13d2, !insn.addr !71

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 2, 0 }
  uselistorder i32 %1, { 0, 3, 1, 2 }
  uselistorder i32 %0, { 2, 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 2, 0, 3, 4, 5, 1 }
  uselistorder label %dec_label_pc_13b7, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_13dd:
  %0 = call i32 @param_opaque_predicate(i32 5), !insn.addr !72
  ret i32 %0, !insn.addr !73
}

define i32 @param_instruction_substitution(i32 %arg1) local_unnamed_addr {
dec_label_pc_13ec:
  %0 = udiv i32 %arg1, 2, !insn.addr !74
  %1 = urem i32 %arg1, 16, !insn.addr !75
  %reass.mul = mul i32 %arg1, 21
  %2 = add nuw i32 %1, %0, !insn.addr !76
  %3 = add i32 %2, %reass.mul, !insn.addr !77
  ret i32 %3, !insn.addr !78

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_140e:
  ret i32 225, !insn.addr !79
}

define i32 @decrypt_string(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1418:
  %0 = alloca i32
  %eax.0.in.reg2mem = alloca i8, !insn.addr !80
  %edx.0.reg2mem = alloca i32, !insn.addr !80
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %arg2 to i32
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !81
  %4 = bitcast i32* %arg2 to i8*, !insn.addr !82
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !82
  %6 = call i8* @strncpy(i8* %4, i8* %5, i32 %arg3), !insn.addr !82
  %7 = add i32 %2, -1, !insn.addr !83
  %8 = add i32 %7, %arg3, !insn.addr !83
  %9 = inttoptr i32 %8 to i8*, !insn.addr !83
  store i8 0, i8* %9, align 1, !insn.addr !83
  %10 = load i8, i8* %4, align 1, !insn.addr !84
  %11 = icmp eq i8 %10, 0, !insn.addr !85
  br i1 %11, label %dec_label_pc_1465, label %dec_label_pc_1457.preheader, !insn.addr !86

dec_label_pc_1457.preheader:                      ; preds = %dec_label_pc_1418
  %12 = trunc i32 %arg4 to i8
  store i32 %2, i32* %edx.0.reg2mem
  store i8 %10, i8* %eax.0.in.reg2mem
  br label %dec_label_pc_1457

dec_label_pc_1457:                                ; preds = %dec_label_pc_1457.preheader, %dec_label_pc_1457
  %eax.0.in.reload = load i8, i8* %eax.0.in.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %13 = xor i8 %eax.0.in.reload, %12, !insn.addr !87
  %14 = inttoptr i32 %edx.0.reload to i8*, !insn.addr !87
  store i8 %13, i8* %14, align 1, !insn.addr !87
  %15 = add i32 %edx.0.reload, 1, !insn.addr !88
  %16 = inttoptr i32 %15 to i8*, !insn.addr !89
  %17 = load i8, i8* %16, align 1, !insn.addr !89
  %18 = icmp eq i8 %17, 0, !insn.addr !90
  %19 = icmp eq i1 %18, false, !insn.addr !91
  store i32 %15, i32* %edx.0.reg2mem, !insn.addr !91
  store i8 %17, i8* %eax.0.in.reg2mem, !insn.addr !91
  br i1 %19, label %dec_label_pc_1457, label %dec_label_pc_1465, !insn.addr !91

dec_label_pc_1465:                                ; preds = %dec_label_pc_1457, %dec_label_pc_1418
  ret i32 %2, !insn.addr !92

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i8* %eax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1457, { 1, 0 }
}

define i32 @param_string_encryption() local_unnamed_addr {
dec_label_pc_146f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i8, align 1
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !93
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !94
  %4 = add i32 %1, 11147, !insn.addr !95
  %5 = bitcast i8* %stack_var_-48 to i32*, !insn.addr !96
  %6 = call i32 @decrypt_string(i32 %4, i32* nonnull %5, i32 32, i32 90), !insn.addr !96
  %7 = call i32 @strlen(i8* nonnull %stack_var_-48), !insn.addr !97
  %8 = load i8, i8* %stack_var_-48, align 1, !insn.addr !98
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !99
  %10 = icmp eq i32 %3, %9, !insn.addr !99
  %11 = icmp eq i1 %10, false, !insn.addr !100
  br i1 %11, label %dec_label_pc_14cb, label %dec_label_pc_14c5, !insn.addr !100

dec_label_pc_14c5:                                ; preds = %dec_label_pc_146f
  %12 = sext i8 %8 to i32, !insn.addr !98
  %13 = add i32 %7, %12, !insn.addr !101
  ret i32 %13, !insn.addr !102

dec_label_pc_14cb:                                ; preds = %dec_label_pc_146f
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !103
  ret i32 %14, !insn.addr !103

; uselistorder directives
  uselistorder i8* %stack_var_-48, { 2, 0, 1 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i32 @param_string_encryption(), !insn.addr !104
  ret i32 %0, !insn.addr !105
}

define i32 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14e0:
  %eax.0.reg2mem = alloca i32, !insn.addr !106
  %0 = icmp slt i32 %arg1, 1
  store i32 %arg2, i32* %eax.0.reg2mem, !insn.addr !107
  br i1 %0, label %dec_label_pc_1507, label %dec_label_pc_14f5, !insn.addr !107

dec_label_pc_14f5:                                ; preds = %dec_label_pc_14e0
  %1 = add i32 %arg2, %arg1, !insn.addr !108
  %2 = add i32 %arg1, -1, !insn.addr !109
  %3 = call i32 @param_tail_call_optimized(i32 %2, i32 %1), !insn.addr !110
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_1507, !insn.addr !111

dec_label_pc_1507:                                ; preds = %dec_label_pc_14f5, %dec_label_pc_14e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !112

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_150b:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint ([6 x i8]* @global_var_3e8 to i32), i32 0), !insn.addr !113
  ret i32 %0, !insn.addr !114

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %arg1) local_unnamed_addr {
dec_label_pc_1522:
  %eax.0.reg2mem = alloca i32, !insn.addr !115
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !116
  br i1 %0, label %dec_label_pc_1548, label %dec_label_pc_1537, !insn.addr !116

dec_label_pc_1537:                                ; preds = %dec_label_pc_1522
  %1 = add i32 %arg1, -1, !insn.addr !117
  %2 = call i32 @param_non_tail_call(i32 %1), !insn.addr !118
  %3 = add i32 %2, %arg1, !insn.addr !119
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !119
  br label %dec_label_pc_1548, !insn.addr !119

dec_label_pc_1548:                                ; preds = %dec_label_pc_1537, %dec_label_pc_1522
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !120
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_154d:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !121
  ret i32 %0, !insn.addr !122

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %arg1, i32* %arg2, i32* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_155f:
  %eax.2.reg2mem = alloca i32, !insn.addr !123
  %edx.0.reg2mem = alloca i32, !insn.addr !123
  %eax.1.reg2mem = alloca i32, !insn.addr !123
  %eax.0.reg2mem = alloca i32, !insn.addr !123
  %0 = ptrtoint i32* %arg3 to i32
  %1 = ptrtoint i32* %arg2 to i32
  %2 = ptrtoint i32* %arg1 to i32
  %3 = icmp slt i32 %arg4, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !124
  store i32 0, i32* %eax.2.reg2mem, !insn.addr !124
  br i1 %3, label %dec_label_pc_15a2, label %dec_label_pc_157f, !insn.addr !124

dec_label_pc_157f:                                ; preds = %dec_label_pc_155f, %dec_label_pc_157f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = mul i32 %eax.0.reload, 4, !insn.addr !125
  %5 = add i32 %4, %1, !insn.addr !125
  %6 = inttoptr i32 %5 to i32*, !insn.addr !125
  %7 = load i32, i32* %6, align 4, !insn.addr !125
  %8 = add i32 %4, %2, !insn.addr !126
  %9 = inttoptr i32 %8 to i32*, !insn.addr !126
  %10 = load i32, i32* %9, align 4, !insn.addr !126
  %11 = add i32 %10, %7, !insn.addr !126
  %12 = add i32 %4, %0, !insn.addr !127
  %13 = inttoptr i32 %12 to i32*, !insn.addr !127
  store i32 %11, i32* %13, align 4, !insn.addr !127
  %14 = add i32 %eax.0.reload, 1, !insn.addr !128
  %15 = icmp eq i32 %14, %arg4, !insn.addr !129
  %16 = icmp eq i1 %15, false, !insn.addr !130
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !130
  br i1 %16, label %dec_label_pc_157f, label %dec_label_pc_158f, !insn.addr !130

dec_label_pc_158f:                                ; preds = %dec_label_pc_157f
  %17 = mul i32 %14, 4, !insn.addr !131
  %18 = add i32 %17, %0, !insn.addr !131
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !132
  store i32 %0, i32* %edx.0.reg2mem, !insn.addr !132
  br label %dec_label_pc_1599, !insn.addr !132

dec_label_pc_1599:                                ; preds = %dec_label_pc_1599, %dec_label_pc_158f
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %19 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !133
  %20 = load i32, i32* %19, align 4, !insn.addr !133
  %21 = add i32 %20, %eax.1.reload, !insn.addr !133
  %22 = add i32 %edx.0.reload, 4, !insn.addr !134
  %23 = icmp eq i32 %22, %18, !insn.addr !135
  %24 = icmp eq i1 %23, false, !insn.addr !136
  store i32 %21, i32* %eax.1.reg2mem, !insn.addr !136
  store i32 %22, i32* %edx.0.reg2mem, !insn.addr !136
  store i32 %21, i32* %eax.2.reg2mem, !insn.addr !136
  br i1 %24, label %dec_label_pc_1599, label %dec_label_pc_15a2, !insn.addr !136

dec_label_pc_15a2:                                ; preds = %dec_label_pc_1599, %dec_label_pc_155f
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  ret i32 %eax.2.reload, !insn.addr !137

; uselistorder directives
  uselistorder i32 %14, { 1, 0, 2 }
  uselistorder i32 %4, { 2, 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_157f, { 1, 0 }
}

define i32 @call_vectorized_loop() local_unnamed_addr {
dec_label_pc_15ad:
  %eax.0.reg2mem = alloca i32, !insn.addr !138
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-112 = alloca i32, align 4
  %stack_var_-124 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-124 to i32, !insn.addr !139
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !140
  store i32 1, i32* %stack_var_-112, align 4, !insn.addr !141
  store i32 8, i32* %stack_var_-80, align 4, !insn.addr !142
  %2 = add i32 %0, 76, !insn.addr !143
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !144
  br label %dec_label_pc_164a, !insn.addr !144

dec_label_pc_164a:                                ; preds = %dec_label_pc_164a, %dec_label_pc_15ad
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = add i32 %2, %eax.0.reload, !insn.addr !143
  %4 = inttoptr i32 %3 to i32*, !insn.addr !143
  store i32 0, i32* %4, align 4, !insn.addr !143
  %5 = add nuw nsw i32 %eax.0.reload, 4, !insn.addr !145
  %6 = icmp ult i32 %5, 32, !insn.addr !146
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !147
  br i1 %6, label %dec_label_pc_164a, label %dec_label_pc_1655, !insn.addr !147

dec_label_pc_1655:                                ; preds = %dec_label_pc_164a
  %7 = call i32 @param_vectorized_loop(i32* nonnull %stack_var_-112, i32* nonnull %stack_var_-80, i32* nonnull %stack_var_-48, i32 8), !insn.addr !148
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !149
  %9 = icmp eq i32 %1, %8, !insn.addr !149
  %10 = icmp eq i1 %9, false, !insn.addr !150
  br i1 %10, label %dec_label_pc_167f, label %dec_label_pc_167b, !insn.addr !150

dec_label_pc_167b:                                ; preds = %dec_label_pc_1655
  ret i32 %7, !insn.addr !151

dec_label_pc_167f:                                ; preds = %dec_label_pc_1655
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !152
  ret i32 %11, !insn.addr !152

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 4, { 2, 3, 0, 1 }
}

define i32 @param_link_time_optimization(i32 %arg1) local_unnamed_addr {
dec_label_pc_1684:
  %factor = mul i32 %arg1, 2
  %0 = add i32 %factor, 10, !insn.addr !153
  ret i32 %0, !insn.addr !154
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1691:
  ret i32 20, !insn.addr !155
}

define i32 @param_division_by_zero(i32 %arg1) local_unnamed_addr {
dec_label_pc_169b:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !156
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !157
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_290c to i32), i32 -11411), !insn.addr !158
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !159
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !160
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_290c to i32), i32 332), !insn.addr !161
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !162
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !162
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !162
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !162
  %11 = icmp eq i32 %10, 0, !insn.addr !163
  %12 = icmp eq i1 %11, false, !insn.addr !164
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !164
  br i1 %12, label %dec_label_pc_16df, label %dec_label_pc_16d5, !insn.addr !164

dec_label_pc_16d5:                                ; preds = %dec_label_pc_169b
  %13 = udiv i32 10, %arg1
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !165
  br label %dec_label_pc_16df, !insn.addr !165

dec_label_pc_16df:                                ; preds = %dec_label_pc_169b, %dec_label_pc_16d5
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !166

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16df, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_16eb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !167
  %3 = call i32 @param_division_by_zero(i32 5), !insn.addr !168
  %4 = call i32 @param_division_by_zero(i32 0), !insn.addr !169
  %5 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !170
  %6 = add i32 %4, %3, !insn.addr !171
  ret i32 %6, !insn.addr !172

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define i32 @param_null_pointer_deref(i32* %arg1) local_unnamed_addr {
dec_label_pc_172d:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !173
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !174
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_287a to i32), i32 -11368), !insn.addr !175
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !176
  %5 = call void (i32)* @signal(i32 11, void (i32)* %4), !insn.addr !177
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_287a to i32), i32 172), !insn.addr !178
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !179
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !179
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !179
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !179
  %11 = icmp eq i32 %10, 0, !insn.addr !180
  %12 = icmp eq i1 %11, false, !insn.addr !181
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !181
  br i1 %12, label %dec_label_pc_176d, label %dec_label_pc_1767, !insn.addr !181

dec_label_pc_1767:                                ; preds = %dec_label_pc_172d
  %13 = load i32, i32* %arg1, align 4, !insn.addr !182
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !182
  br label %dec_label_pc_176d, !insn.addr !182

dec_label_pc_176d:                                ; preds = %dec_label_pc_172d, %dec_label_pc_1767
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !183

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_176d, { 1, 0 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1779:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !184
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !185
  store i32 42, i32* %stack_var_-20, align 4, !insn.addr !186
  %4 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-20), !insn.addr !187
  %5 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !188
  %6 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !189
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !190
  %8 = icmp eq i32 %3, %7, !insn.addr !190
  %9 = icmp eq i1 %8, false, !insn.addr !191
  br i1 %9, label %dec_label_pc_17e2, label %dec_label_pc_17db, !insn.addr !191

dec_label_pc_17db:                                ; preds = %dec_label_pc_1779
  %10 = add i32 %5, %4, !insn.addr !192
  ret i32 %10, !insn.addr !193

dec_label_pc_17e2:                                ; preds = %dec_label_pc_1779
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !194
  ret i32 %11, !insn.addr !194

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 2, 1, 0 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_17e7:
  ret i32 %arg1, !insn.addr !195
}

define i32 @param_buffer_overflow_heap(i32 %arg1) local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i32
  %stack_var_4.0.reg2mem = alloca i32, !insn.addr !196
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !197
  %3 = call i32* @malloc(i32 16), !insn.addr !198
  %4 = icmp eq i32* %3, null, !insn.addr !199
  store i32 -2, i32* %stack_var_4.0.reg2mem, !insn.addr !200
  br i1 %4, label %dec_label_pc_1827, label %dec_label_pc_1816.preheader, !insn.addr !200

dec_label_pc_1816.preheader:                      ; preds = %dec_label_pc_17f0
  call void @free(i32* nonnull %3), !insn.addr !201
  store i32 %arg1, i32* %stack_var_4.0.reg2mem, !insn.addr !202
  br label %dec_label_pc_1827, !insn.addr !202

dec_label_pc_1827:                                ; preds = %dec_label_pc_17f0, %dec_label_pc_1816.preheader
  %stack_var_4.0.reload = load i32, i32* %stack_var_4.0.reg2mem
  ret i32 %stack_var_4.0.reload, !insn.addr !203

; uselistorder directives
  uselistorder i32* %stack_var_4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1827, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_183a:
  %0 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !204
  %1 = add i32 %0, 10, !insn.addr !205
  ret i32 %1, !insn.addr !206

; uselistorder directives
  uselistorder i32 20, { 1, 2, 3, 0, 4, 5, 6, 7, 8 }
}

define i32 @param_integer_overflow(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_184f:
  %eax.0.reg2mem = alloca i32, !insn.addr !207
  %0 = add i32 %arg2, %arg1, !insn.addr !208
  %1 = icmp eq i32 %arg1, 0, !insn.addr !209
  %2 = icmp slt i32 %arg1, 0, !insn.addr !209
  %3 = icmp eq i1 %2, false, !insn.addr !210
  %4 = icmp eq i1 %1, false, !insn.addr !210
  %5 = icmp eq i1 %3, %4, !insn.addr !210
  %6 = icmp eq i32 %arg2, 0, !insn.addr !211
  %7 = icmp slt i32 %arg2, 0, !insn.addr !211
  %8 = icmp eq i1 %7, false, !insn.addr !212
  %9 = icmp eq i1 %6, false, !insn.addr !212
  %10 = icmp eq i1 %8, %9, !insn.addr !212
  %11 = icmp eq i1 %5, %10
  %12 = icmp slt i32 %0, 0, !insn.addr !213
  %or.cond = icmp eq i1 %12, %11
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !214
  br i1 %or.cond, label %dec_label_pc_1885, label %dec_label_pc_1877, !insn.addr !214

dec_label_pc_1877:                                ; preds = %dec_label_pc_184f
  %13 = and i32 %arg2, %arg1, !insn.addr !215
  %14 = icmp slt i32 %13, 0, !insn.addr !215
  %15 = icmp eq i1 %14, false, !insn.addr !216
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !216
  br i1 %15, label %dec_label_pc_1885, label %dec_label_pc_187b, !insn.addr !216

dec_label_pc_187b:                                ; preds = %dec_label_pc_1877
  %16 = icmp eq i32 %0, 0, !insn.addr !217
  %17 = icmp eq i1 %12, false, !insn.addr !218
  %18 = icmp eq i1 %16, false, !insn.addr !218
  %19 = icmp eq i1 %17, %18, !insn.addr !218
  %20 = select i1 %19, i32 -2, i32 %0, !insn.addr !218
  store i32 %20, i32* %eax.0.reg2mem, !insn.addr !218
  br label %dec_label_pc_1885, !insn.addr !218

dec_label_pc_1885:                                ; preds = %dec_label_pc_184f, %dec_label_pc_187b, %dec_label_pc_1877
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !219

; uselistorder directives
  uselistorder i1 %12, { 1, 0 }
  uselistorder i32 %0, { 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 -2, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 3, 1 }
  uselistorder i32 %arg1, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_1885, { 1, 2, 0 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_1890:
  ret i32 2000000000, !insn.addr !220
}

define i32 @param_undefined_behavior(i32 %arg1) local_unnamed_addr {
dec_label_pc_189a:
  %0 = mul i32 %arg1, 2, !insn.addr !221
  ret i32 %0, !insn.addr !222

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_18a5:
  ret i32 10, !insn.addr !223

; uselistorder directives
  uselistorder i32 10, { 0, 4, 3, 2, 5, 1 }
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_18af:
  ret i32 43, !insn.addr !224
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_18b9:
  ret i32 43, !insn.addr !225
}

define i32 @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_18c3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !226
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8108), !insn.addr !227
  %4 = inttoptr i32 %3 to i8*, !insn.addr !228
  %5 = call i32 @puts(i8* %4), !insn.addr !229
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7813), !insn.addr !230
  %7 = inttoptr i32 %6 to i8*, !insn.addr !231
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !232
  %9 = call i32 @call_opaque_predicate(), !insn.addr !233
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7785), !insn.addr !234
  %11 = inttoptr i32 %10 to i8*, !insn.addr !235
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !236
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7757), !insn.addr !237
  %14 = inttoptr i32 %13 to i8*, !insn.addr !238
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !239
  %16 = call i32 @param_string_encryption(), !insn.addr !240
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7728), !insn.addr !241
  %18 = inttoptr i32 %17 to i8*, !insn.addr !242
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %18), !insn.addr !243
  %20 = call i32 @call_tail_call_optimized(), !insn.addr !244
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8060), !insn.addr !245
  %22 = inttoptr i32 %21 to i8*, !insn.addr !246
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !247
  %24 = call i32 @call_non_tail_call(), !insn.addr !248
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8016), !insn.addr !249
  %26 = inttoptr i32 %25 to i8*, !insn.addr !250
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !251
  %28 = call i32 @call_vectorized_loop(), !insn.addr !252
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7976), !insn.addr !253
  %30 = inttoptr i32 %29 to i8*, !insn.addr !254
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %30), !insn.addr !255
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7936), !insn.addr !256
  %33 = inttoptr i32 %32 to i8*, !insn.addr !257
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !258
  %35 = call i32 @call_division_by_zero(), !insn.addr !259
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7700), !insn.addr !260
  %37 = inttoptr i32 %36 to i8*, !insn.addr !261
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !262
  %39 = call i32 @call_null_pointer_deref(), !insn.addr !263
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7672), !insn.addr !264
  %41 = inttoptr i32 %40 to i8*, !insn.addr !265
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !266
  %43 = call i32 @call_buffer_overflow(), !insn.addr !267
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7643), !insn.addr !268
  %45 = inttoptr i32 %44 to i8*, !insn.addr !269
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %45), !insn.addr !270
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7904), !insn.addr !271
  %48 = inttoptr i32 %47 to i8*, !insn.addr !272
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !273
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7614), !insn.addr !274
  %51 = inttoptr i32 %50 to i8*, !insn.addr !275
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %51), !insn.addr !276
  %53 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7852), !insn.addr !277
  %54 = inttoptr i32 %53 to i8*, !insn.addr !278
  %55 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %54), !insn.addr !279
  ret i32 %55, !insn.addr !280

; uselistorder directives
  uselistorder i32 ()* @param_string_encryption, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1a17:
  %0 = call i32 @test_obf_opt_edge(), !insn.addr !281
  ret i32 0, !insn.addr !282

; uselistorder directives
  uselistorder i32 0, { 5, 11, 12, 8, 13, 14, 15, 16, 17, 9, 18, 7, 0, 2, 1, 3, 4, 10, 19, 20, 21, 6 }
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1a30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !283
  call void @__stack_chk_fail(), !insn.addr !284
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !285
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1a50:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !286
  %ebx.0.reg2mem = alloca i32, !insn.addr !286
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !287
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_255b to i32), i32 -232), !insn.addr !288
  %4 = inttoptr i32 %3 to i32*, !insn.addr !288
  %5 = load i32, i32* %4, align 4, !insn.addr !288
  %6 = icmp eq i32 %5, -1, !insn.addr !289
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !290
  store i32 -1, i32* %merge.reg2mem, !insn.addr !290
  br i1 %6, label %dec_label_pc_1a8d, label %dec_label_pc_1a80, !insn.addr !290

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a50, %dec_label_pc_1a80
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !291
  %8 = inttoptr i32 %7 to i32*, !insn.addr !291
  %9 = load i32, i32* %8, align 4, !insn.addr !291
  %10 = icmp eq i32 %9, -1, !insn.addr !292
  %11 = icmp eq i1 %10, false, !insn.addr !293
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !293
  store i32 %9, i32* %merge.reg2mem, !insn.addr !293
  br i1 %11, label %dec_label_pc_1a80, label %dec_label_pc_1a8d, !insn.addr !293

dec_label_pc_1a8d:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a50
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !294

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 17, 3, 0, 4, 5, 1, 6, 2, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i32 -1, { 4, 0, 5, 1, 2, 3, 7, 6, 8 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1a9c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !295
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !296
  ret i32 %3, !insn.addr !297

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 12, 5, 11, 10, 9, 8, 7, 6, 4, 3, 2, 1, 0 }
  uselistorder i32 1, { 20, 22, 21, 19, 18, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 17, 23, 24, 16, 62, 15, 25, 14, 13, 26, 12, 65, 67, 66, 64, 63, 27, 69, 54, 31, 30, 29, 28, 55, 32, 56, 33, 61, 11, 70, 35, 34, 10, 57, 58, 71, 38, 37, 36, 59, 72, 9, 60, 73, 8, 7, 6, 39, 5, 4, 3, 2, 68, 1, 0 }
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
!16 = !{i64 4543}
!17 = !{i64 4560}
!18 = !{i64 4566}
!19 = !{i64 4571}
!20 = !{i64 4575}
!21 = !{i64 4579}
!22 = !{i64 4592}
!23 = !{i64 4609}
!24 = !{i64 4648}
!25 = !{i64 4656}
!26 = !{i64 4726}
!27 = !{i64 4736}
!28 = !{i64 4744}
!29 = !{i64 4760}
!30 = !{i64 4767}
!31 = !{i64 4769}
!32 = !{i64 4775}
!33 = !{i64 4777}
!34 = !{i64 4782}
!35 = !{i64 4790}
!36 = !{i64 4795}
!37 = !{i64 4854}
!38 = !{i64 4859}
!39 = !{i64 4873}
!40 = !{i64 4884}
!41 = !{i64 4892}
!42 = !{i64 4896}
!43 = !{i64 4905}
!44 = !{i64 4916}
!45 = !{i64 4928}
!46 = !{i64 4935}
!47 = !{i64 4948}
!48 = !{i64 4959}
!49 = !{i64 4971}
!50 = !{i64 4978}
!51 = !{i64 4991}
!52 = !{i64 5001}
!53 = !{i64 5002}
!54 = !{i64 5014}
!55 = !{i64 5017}
!56 = !{i64 5022}
!57 = !{i64 5025}
!58 = !{i64 5031}
!59 = !{i64 5034}
!60 = !{i64 5039}
!61 = !{i64 5041}
!62 = !{i64 5049}
!63 = !{i64 5050}
!64 = !{i64 5056}
!65 = !{i64 5058}
!66 = !{i64 5060}
!67 = !{i64 5063}
!68 = !{i64 5071}
!69 = !{i64 5078}
!70 = !{i64 5079}
!71 = !{i64 5083}
!72 = !{i64 5091}
!73 = !{i64 5099}
!74 = !{i64 5113}
!75 = !{i64 5119}
!76 = !{i64 5122}
!77 = !{i64 5131}
!78 = !{i64 5133}
!79 = !{i64 5143}
!80 = !{i64 5144}
!81 = !{i64 5155}
!82 = !{i64 5185}
!83 = !{i64 5190}
!84 = !{i64 5195}
!85 = !{i64 5201}
!86 = !{i64 5203}
!87 = !{i64 5209}
!88 = !{i64 5211}
!89 = !{i64 5214}
!90 = !{i64 5217}
!91 = !{i64 5219}
!92 = !{i64 5230}
!93 = !{i64 5240}
!94 = !{i64 5251}
!95 = !{i64 5272}
!96 = !{i64 5279}
!97 = !{i64 5287}
!98 = !{i64 5297}
!99 = !{i64 5308}
!100 = !{i64 5315}
!101 = !{i64 5302}
!102 = !{i64 5322}
!103 = !{i64 5323}
!104 = !{i64 5335}
!105 = !{i64 5343}
!106 = !{i64 5344}
!107 = !{i64 5363}
!108 = !{i64 5368}
!109 = !{i64 5371}
!110 = !{i64 5375}
!111 = !{i64 5380}
!112 = !{i64 5386}
!113 = !{i64 5401}
!114 = !{i64 5409}
!115 = !{i64 5410}
!116 = !{i64 5429}
!117 = !{i64 5434}
!118 = !{i64 5438}
!119 = !{i64 5446}
!120 = !{i64 5452}
!121 = !{i64 5462}
!122 = !{i64 5470}
!123 = !{i64 5471}
!124 = !{i64 5496}
!125 = !{i64 5503}
!126 = !{i64 5506}
!127 = !{i64 5509}
!128 = !{i64 5512}
!129 = !{i64 5515}
!130 = !{i64 5517}
!131 = !{i64 5521}
!132 = !{i64 5524}
!133 = !{i64 5529}
!134 = !{i64 5531}
!135 = !{i64 5534}
!136 = !{i64 5536}
!137 = !{i64 5541}
!138 = !{i64 5549}
!139 = !{i64 5553}
!140 = !{i64 5556}
!141 = !{i64 5568}
!142 = !{i64 5632}
!143 = !{i64 5706}
!144 = !{i64 5701}
!145 = !{i64 5710}
!146 = !{i64 5713}
!147 = !{i64 5715}
!148 = !{i64 5734}
!149 = !{i64 5746}
!150 = !{i64 5753}
!151 = !{i64 5758}
!152 = !{i64 5759}
!153 = !{i64 5772}
!154 = !{i64 5776}
!155 = !{i64 5786}
!156 = !{i64 5787}
!157 = !{i64 5795}
!158 = !{i64 5806}
!159 = !{i64 5812}
!160 = !{i64 5815}
!161 = !{i64 5820}
!162 = !{i64 5829}
!163 = !{i64 5841}
!164 = !{i64 5843}
!165 = !{i64 5851}
!166 = !{i64 5859}
!167 = !{i64 5874}
!168 = !{i64 5890}
!169 = !{i64 5904}
!170 = !{i64 5918}
!171 = !{i64 5923}
!172 = !{i64 5932}
!173 = !{i64 5933}
!174 = !{i64 5941}
!175 = !{i64 5952}
!176 = !{i64 5958}
!177 = !{i64 5961}
!178 = !{i64 5966}
!179 = !{i64 5975}
!180 = !{i64 5987}
!181 = !{i64 5989}
!182 = !{i64 5995}
!183 = !{i64 6001}
!184 = !{i64 6019}
!185 = !{i64 6030}
!186 = !{i64 6042}
!187 = !{i64 6055}
!188 = !{i64 6069}
!189 = !{i64 6083}
!190 = !{i64 6098}
!191 = !{i64 6105}
!192 = !{i64 6088}
!193 = !{i64 6113}
!194 = !{i64 6114}
!195 = !{i64 6127}
!196 = !{i64 6128}
!197 = !{i64 6136}
!198 = !{i64 6149}
!199 = !{i64 6157}
!200 = !{i64 6159}
!201 = !{i64 6175}
!202 = !{i64 6180}
!203 = !{i64 6191}
!204 = !{i64 6211}
!205 = !{i64 6216}
!206 = !{i64 6222}
!207 = !{i64 6223}
!208 = !{i64 6238}
!209 = !{i64 6241}
!210 = !{i64 6243}
!211 = !{i64 6248}
!212 = !{i64 6250}
!213 = !{i64 6259}
!214 = !{i64 6257}
!215 = !{i64 6263}
!216 = !{i64 6265}
!217 = !{i64 6267}
!218 = !{i64 6274}
!219 = !{i64 6280}
!220 = !{i64 6297}
!221 = !{i64 6306}
!222 = !{i64 6308}
!223 = !{i64 6318}
!224 = !{i64 6328}
!225 = !{i64 6338}
!226 = !{i64 6347}
!227 = !{i64 6358}
!228 = !{i64 6364}
!229 = !{i64 6365}
!230 = !{i64 6375}
!231 = !{i64 6381}
!232 = !{i64 6384}
!233 = !{i64 6389}
!234 = !{i64 6398}
!235 = !{i64 6404}
!236 = !{i64 6407}
!237 = !{i64 6420}
!238 = !{i64 6426}
!239 = !{i64 6429}
!240 = !{i64 6434}
!241 = !{i64 6443}
!242 = !{i64 6449}
!243 = !{i64 6452}
!244 = !{i64 6457}
!245 = !{i64 6466}
!246 = !{i64 6472}
!247 = !{i64 6475}
!248 = !{i64 6480}
!249 = !{i64 6489}
!250 = !{i64 6495}
!251 = !{i64 6498}
!252 = !{i64 6503}
!253 = !{i64 6512}
!254 = !{i64 6518}
!255 = !{i64 6521}
!256 = !{i64 6531}
!257 = !{i64 6537}
!258 = !{i64 6540}
!259 = !{i64 6545}
!260 = !{i64 6554}
!261 = !{i64 6560}
!262 = !{i64 6563}
!263 = !{i64 6568}
!264 = !{i64 6577}
!265 = !{i64 6583}
!266 = !{i64 6586}
!267 = !{i64 6591}
!268 = !{i64 6600}
!269 = !{i64 6606}
!270 = !{i64 6609}
!271 = !{i64 6622}
!272 = !{i64 6628}
!273 = !{i64 6631}
!274 = !{i64 6641}
!275 = !{i64 6647}
!276 = !{i64 6650}
!277 = !{i64 6660}
!278 = !{i64 6666}
!279 = !{i64 6669}
!280 = !{i64 6678}
!281 = !{i64 6689}
!282 = !{i64 6700}
!283 = !{i64 6709}
!284 = !{i64 6723}
!285 = !{i64 6734}
!286 = !{i64 6736}
!287 = !{i64 6740}
!288 = !{i64 6751}
!289 = !{i64 6757}
!290 = !{i64 6760}
!291 = !{i64 6786}
!292 = !{i64 6792}
!293 = !{i64 6795}
!294 = !{i64 6801}
!295 = !{i64 6820}
!296 = !{i64 6831}
!297 = !{i64 6840}
