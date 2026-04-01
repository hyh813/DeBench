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

define void @div_zero_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_1321:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !43
  %3 = add i32 %1, 11726, !insn.addr !44
  %4 = inttoptr i32 %3 to i32*, !insn.addr !44
  store i32 1, i32* %4, align 4, !insn.addr !44
  %5 = add i32 %1, 11730, !insn.addr !45
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !46
  ret void, !insn.addr !46

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define void @segv_handler(i32 %sig) local_unnamed_addr {
dec_label_pc_134c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !47
  %3 = add i32 %1, 11495, !insn.addr !48
  %4 = inttoptr i32 %3 to i32*, !insn.addr !48
  store i32 1, i32* %4, align 4, !insn.addr !48
  %5 = add i32 %1, 11527, !insn.addr !49
  %6 = call i32 @__longjmp_chk(i32 %5, i32 1), !insn.addr !50
  ret void, !insn.addr !50

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

define i32 @param_opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_138a:
  %storemerge.reg2mem = alloca i32, !insn.addr !53
  %ecx.0.reg2mem = alloca i32, !insn.addr !53
  %eax.0.reg2mem = alloca i32, !insn.addr !53
  %0 = mul i32 %x, 2, !insn.addr !54
  %1 = add i32 %x, 1, !insn.addr !55
  %2 = mul i32 %x, %x, !insn.addr !56
  %3 = or i32 %0, 1, !insn.addr !57
  %4 = add i32 %3, %2, !insn.addr !57
  %5 = mul i32 %1, %1, !insn.addr !58
  %6 = icmp eq i32 %4, %5, !insn.addr !59
  %7 = icmp eq i32 %1, 0, !insn.addr !60
  store i32 %x, i32* %eax.0.reg2mem, !insn.addr !61
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
  %21 = add i32 %x, 20, !insn.addr !70
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
  uselistorder i32 %x, { 2, 0, 3, 4, 5, 1 }
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

define i8* @decrypt_string(i8* %encrypted, i8* %buffer, i32 %len, i8 %key) local_unnamed_addr {
dec_label_pc_1418:
  %0 = alloca i32
  %eax.0.in.reg2mem = alloca i8, !insn.addr !80
  %edx.0.reg2mem = alloca i32, !insn.addr !80
  %1 = load i32, i32* %0
  %2 = ptrtoint i8* %buffer to i32
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !81
  %4 = call i8* @strncpy(i8* %buffer, i8* %encrypted, i32 %len), !insn.addr !82
  %5 = add i32 %2, -1, !insn.addr !83
  %6 = add i32 %5, %len, !insn.addr !83
  %7 = inttoptr i32 %6 to i8*, !insn.addr !83
  store i8 0, i8* %7, align 1, !insn.addr !83
  %8 = load i8, i8* %buffer, align 1, !insn.addr !84
  %9 = icmp eq i8 %8, 0, !insn.addr !85
  store i32 %2, i32* %edx.0.reg2mem, !insn.addr !86
  store i8 %8, i8* %eax.0.in.reg2mem, !insn.addr !86
  br i1 %9, label %dec_label_pc_1465, label %dec_label_pc_1457, !insn.addr !86

dec_label_pc_1457:                                ; preds = %dec_label_pc_1418, %dec_label_pc_1457
  %eax.0.in.reload = load i8, i8* %eax.0.in.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %10 = xor i8 %eax.0.in.reload, %key
  %11 = inttoptr i32 %edx.0.reload to i8*, !insn.addr !87
  store i8 %10, i8* %11, align 1, !insn.addr !87
  %12 = add i32 %edx.0.reload, 1, !insn.addr !88
  %13 = inttoptr i32 %12 to i8*, !insn.addr !89
  %14 = load i8, i8* %13, align 1, !insn.addr !89
  %15 = icmp eq i8 %14, 0, !insn.addr !90
  %16 = icmp eq i1 %15, false, !insn.addr !91
  store i32 %12, i32* %edx.0.reg2mem, !insn.addr !91
  store i8 %14, i8* %eax.0.in.reg2mem, !insn.addr !91
  br i1 %16, label %dec_label_pc_1457, label %dec_label_pc_1465, !insn.addr !91

dec_label_pc_1465:                                ; preds = %dec_label_pc_1457, %dec_label_pc_1418
  ret i8* %buffer, !insn.addr !92

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i8* %eax.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i8 0, { 1, 2, 3, 0 }
  uselistorder i8* %buffer, { 0, 2, 1, 3 }
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
  %5 = inttoptr i32 %4 to i8*, !insn.addr !96
  %6 = call i8* @decrypt_string(i8* %5, i8* nonnull %stack_var_-48, i32 32, i8 90), !insn.addr !97
  %7 = call i32 @strlen(i8* nonnull %stack_var_-48), !insn.addr !98
  %8 = load i8, i8* %stack_var_-48, align 1, !insn.addr !99
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !100
  %10 = icmp eq i32 %3, %9, !insn.addr !100
  %11 = icmp eq i1 %10, false, !insn.addr !101
  br i1 %11, label %dec_label_pc_14cb, label %dec_label_pc_14c5, !insn.addr !101

dec_label_pc_14c5:                                ; preds = %dec_label_pc_146f
  %12 = sext i8 %8 to i32, !insn.addr !99
  %13 = add i32 %7, %12, !insn.addr !102
  ret i32 %13, !insn.addr !103

dec_label_pc_14cb:                                ; preds = %dec_label_pc_146f
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !104
  ret i32 %14, !insn.addr !104

; uselistorder directives
  uselistorder i8* %stack_var_-48, { 2, 0, 1 }
}

define i32 @call_string_encryption() local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i32 @param_string_encryption(), !insn.addr !105
  ret i32 %0, !insn.addr !106
}

define i32 @param_tail_call_optimized(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_14e0:
  %eax.0.reg2mem = alloca i32, !insn.addr !107
  %0 = icmp slt i32 %n, 1
  store i32 %acc, i32* %eax.0.reg2mem, !insn.addr !108
  br i1 %0, label %dec_label_pc_1507, label %dec_label_pc_14f5, !insn.addr !108

dec_label_pc_14f5:                                ; preds = %dec_label_pc_14e0
  %1 = add i32 %acc, %n, !insn.addr !109
  %2 = add i32 %n, -1, !insn.addr !110
  %3 = call i32 @param_tail_call_optimized(i32 %2, i32 %1), !insn.addr !111
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_1507, !insn.addr !112

dec_label_pc_1507:                                ; preds = %dec_label_pc_14f5, %dec_label_pc_14e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !113

; uselistorder directives
  uselistorder i32 %acc, { 1, 0 }
  uselistorder i32 %n, { 1, 0, 2 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_150b:
  %0 = call i32 @param_tail_call_optimized(i32 ptrtoint ([6 x i8]* @global_var_3e8 to i32), i32 0), !insn.addr !114
  ret i32 %0, !insn.addr !115

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_tail_call_optimized, { 1, 0 }
}

define i32 @param_non_tail_call(i32 %n) local_unnamed_addr {
dec_label_pc_1522:
  %eax.0.reg2mem = alloca i32, !insn.addr !116
  %0 = icmp slt i32 %n, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !117
  br i1 %0, label %dec_label_pc_1548, label %dec_label_pc_1537, !insn.addr !117

dec_label_pc_1537:                                ; preds = %dec_label_pc_1522
  %1 = add i32 %n, -1, !insn.addr !118
  %2 = call i32 @param_non_tail_call(i32 %1), !insn.addr !119
  %3 = add i32 %2, %n, !insn.addr !120
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !120
  br label %dec_label_pc_1548, !insn.addr !120

dec_label_pc_1548:                                ; preds = %dec_label_pc_1537, %dec_label_pc_1522
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !121
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_154d:
  %0 = call i32 @param_non_tail_call(i32 100), !insn.addr !122
  ret i32 %0, !insn.addr !123

; uselistorder directives
  uselistorder i32 (i32)* @param_non_tail_call, { 1, 0 }
}

define i32 @param_vectorized_loop(i32* %a, i32* %b, i32* %c, i32 %n) local_unnamed_addr {
dec_label_pc_155f:
  %eax.2.reg2mem = alloca i32, !insn.addr !124
  %edx.0.reg2mem = alloca i32, !insn.addr !124
  %eax.1.reg2mem = alloca i32, !insn.addr !124
  %eax.0.reg2mem = alloca i32, !insn.addr !124
  %0 = ptrtoint i32* %c to i32
  %1 = ptrtoint i32* %b to i32
  %2 = ptrtoint i32* %a to i32
  %3 = icmp slt i32 %n, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !125
  store i32 0, i32* %eax.2.reg2mem, !insn.addr !125
  br i1 %3, label %dec_label_pc_15a2, label %dec_label_pc_157f, !insn.addr !125

dec_label_pc_157f:                                ; preds = %dec_label_pc_155f, %dec_label_pc_157f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = mul i32 %eax.0.reload, 4, !insn.addr !126
  %5 = add i32 %4, %1, !insn.addr !126
  %6 = inttoptr i32 %5 to i32*, !insn.addr !126
  %7 = load i32, i32* %6, align 4, !insn.addr !126
  %8 = add i32 %4, %2, !insn.addr !127
  %9 = inttoptr i32 %8 to i32*, !insn.addr !127
  %10 = load i32, i32* %9, align 4, !insn.addr !127
  %11 = add i32 %10, %7, !insn.addr !127
  %12 = add i32 %4, %0, !insn.addr !128
  %13 = inttoptr i32 %12 to i32*, !insn.addr !128
  store i32 %11, i32* %13, align 4, !insn.addr !128
  %14 = add i32 %eax.0.reload, 1, !insn.addr !129
  %15 = icmp eq i32 %14, %n, !insn.addr !130
  %16 = icmp eq i1 %15, false, !insn.addr !131
  store i32 %14, i32* %eax.0.reg2mem, !insn.addr !131
  br i1 %16, label %dec_label_pc_157f, label %dec_label_pc_158f, !insn.addr !131

dec_label_pc_158f:                                ; preds = %dec_label_pc_157f
  %17 = mul i32 %14, 4, !insn.addr !132
  %18 = add i32 %17, %0, !insn.addr !132
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !133
  store i32 %0, i32* %edx.0.reg2mem, !insn.addr !133
  br label %dec_label_pc_1599, !insn.addr !133

dec_label_pc_1599:                                ; preds = %dec_label_pc_1599, %dec_label_pc_158f
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %19 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !134
  %20 = load i32, i32* %19, align 4, !insn.addr !134
  %21 = add i32 %20, %eax.1.reload, !insn.addr !134
  %22 = add i32 %edx.0.reload, 4, !insn.addr !135
  %23 = icmp eq i32 %22, %18, !insn.addr !136
  %24 = icmp eq i1 %23, false, !insn.addr !137
  store i32 %21, i32* %eax.1.reg2mem, !insn.addr !137
  store i32 %22, i32* %edx.0.reg2mem, !insn.addr !137
  store i32 %21, i32* %eax.2.reg2mem, !insn.addr !137
  br i1 %24, label %dec_label_pc_1599, label %dec_label_pc_15a2, !insn.addr !137

dec_label_pc_15a2:                                ; preds = %dec_label_pc_1599, %dec_label_pc_155f
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  ret i32 %eax.2.reload, !insn.addr !138

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
  %eax.0.reg2mem = alloca i32, !insn.addr !139
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-112 = alloca i32, align 4
  %stack_var_-124 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-124 to i32, !insn.addr !140
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !141
  store i32 1, i32* %stack_var_-112, align 4, !insn.addr !142
  store i32 8, i32* %stack_var_-80, align 4, !insn.addr !143
  %2 = add i32 %0, 76, !insn.addr !144
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_164a, !insn.addr !145

dec_label_pc_164a:                                ; preds = %dec_label_pc_164a, %dec_label_pc_15ad
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = add i32 %2, %eax.0.reload, !insn.addr !144
  %4 = inttoptr i32 %3 to i32*, !insn.addr !144
  store i32 0, i32* %4, align 4, !insn.addr !144
  %5 = add nuw nsw i32 %eax.0.reload, 4, !insn.addr !146
  %6 = icmp ult i32 %5, 32, !insn.addr !147
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !148
  br i1 %6, label %dec_label_pc_164a, label %dec_label_pc_1655, !insn.addr !148

dec_label_pc_1655:                                ; preds = %dec_label_pc_164a
  %7 = call i32 @param_vectorized_loop(i32* nonnull %stack_var_-112, i32* nonnull %stack_var_-80, i32* nonnull %stack_var_-48, i32 8), !insn.addr !149
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !150
  %9 = icmp eq i32 %1, %8, !insn.addr !150
  %10 = icmp eq i1 %9, false, !insn.addr !151
  br i1 %10, label %dec_label_pc_167f, label %dec_label_pc_167b, !insn.addr !151

dec_label_pc_167b:                                ; preds = %dec_label_pc_1655
  ret i32 %7, !insn.addr !152

dec_label_pc_167f:                                ; preds = %dec_label_pc_1655
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !153
  ret i32 %11, !insn.addr !153

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 4, { 2, 3, 0, 1 }
}

define i32 @param_link_time_optimization(i32 %arg1) local_unnamed_addr {
dec_label_pc_1684:
  %factor = mul i32 %arg1, 2
  %0 = add i32 %factor, 10, !insn.addr !154
  ret i32 %0, !insn.addr !155
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_1691:
  ret i32 20, !insn.addr !156
}

define i32 @param_division_by_zero(i32 %x) local_unnamed_addr {
dec_label_pc_169b:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !157
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !158
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_290c to i32), i32 -11411), !insn.addr !159
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !160
  %5 = call void (i32)* @signal(i32 8, void (i32)* %4), !insn.addr !161
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_290c to i32), i32 332), !insn.addr !162
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !163
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !163
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !163
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !163
  %11 = icmp eq i32 %10, 0, !insn.addr !164
  %12 = icmp eq i1 %11, false, !insn.addr !165
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !165
  br i1 %12, label %dec_label_pc_16df, label %dec_label_pc_16d5, !insn.addr !165

dec_label_pc_16d5:                                ; preds = %dec_label_pc_169b
  %13 = udiv i32 10, %x
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !166
  br label %dec_label_pc_16df, !insn.addr !166

dec_label_pc_16df:                                ; preds = %dec_label_pc_169b, %dec_label_pc_16d5
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !167

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16df, { 1, 0 }
}

define i32 @call_division_by_zero() local_unnamed_addr {
dec_label_pc_16eb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !168
  %3 = call i32 @param_division_by_zero(i32 5), !insn.addr !169
  %4 = call i32 @param_division_by_zero(i32 0), !insn.addr !170
  %5 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !171
  %6 = add i32 %4, %3, !insn.addr !172
  ret i32 %6, !insn.addr !173

; uselistorder directives
  uselistorder i32 (i32)* @param_division_by_zero, { 1, 0 }
}

define i32 @param_null_pointer_deref(i32* %p) local_unnamed_addr {
dec_label_pc_172d:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !174
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !175
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_287a to i32), i32 -11368), !insn.addr !176
  %4 = inttoptr i32 %3 to void (i32)*, !insn.addr !177
  %5 = call void (i32)* @signal(i32 11, void (i32)* %4), !insn.addr !178
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_287a to i32), i32 172), !insn.addr !179
  %7 = insertvalue [8 x i32] undef, i32 %6, 0, !insn.addr !180
  %8 = insertvalue %__jmp_buf_tag undef, [8 x i32] %7, 0, !insn.addr !180
  %9 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %8, 0, !insn.addr !180
  %10 = call i32 @_setjmp([1 x %__jmp_buf_tag] %9), !insn.addr !180
  %11 = icmp eq i32 %10, 0, !insn.addr !181
  %12 = icmp eq i1 %11, false, !insn.addr !182
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !182
  br i1 %12, label %dec_label_pc_176d, label %dec_label_pc_1767, !insn.addr !182

dec_label_pc_1767:                                ; preds = %dec_label_pc_172d
  %13 = load i32, i32* %p, align 4, !insn.addr !183
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !183
  br label %dec_label_pc_176d, !insn.addr !183

dec_label_pc_176d:                                ; preds = %dec_label_pc_172d, %dec_label_pc_1767
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !184

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_176d, { 1, 0 }
}

define i32 @call_null_pointer_deref() local_unnamed_addr {
dec_label_pc_1779:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !185
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !186
  store i32 42, i32* %stack_var_-20, align 4, !insn.addr !187
  %4 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-20), !insn.addr !188
  %5 = call i32 @param_null_pointer_deref(i32* null), !insn.addr !189
  %6 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !190
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !191
  %8 = icmp eq i32 %3, %7, !insn.addr !191
  %9 = icmp eq i1 %8, false, !insn.addr !192
  br i1 %9, label %dec_label_pc_17e2, label %dec_label_pc_17db, !insn.addr !192

dec_label_pc_17db:                                ; preds = %dec_label_pc_1779
  %10 = add i32 %5, %4, !insn.addr !193
  ret i32 %10, !insn.addr !194

dec_label_pc_17e2:                                ; preds = %dec_label_pc_1779
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !195
  ret i32 %11, !insn.addr !195

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 2, 1, 0 }
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 1, 3, 2, 0, 4 }
  uselistorder i32 (i32*)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_17e7:
  ret i32 %arg1, !insn.addr !196
}

define i32 @param_buffer_overflow_heap(i32 %x) local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i32
  %stack_var_4.0.reg2mem = alloca i32, !insn.addr !197
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !198
  %3 = call i32* @malloc(i32 16), !insn.addr !199
  %4 = icmp eq i32* %3, null, !insn.addr !200
  store i32 -2, i32* %stack_var_4.0.reg2mem, !insn.addr !201
  br i1 %4, label %dec_label_pc_1827, label %dec_label_pc_1816.preheader, !insn.addr !201

dec_label_pc_1816.preheader:                      ; preds = %dec_label_pc_17f0
  call void @free(i32* nonnull %3), !insn.addr !202
  store i32 %x, i32* %stack_var_4.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_1827, !insn.addr !203

dec_label_pc_1827:                                ; preds = %dec_label_pc_17f0, %dec_label_pc_1816.preheader
  %stack_var_4.0.reload = load i32, i32* %stack_var_4.0.reg2mem
  ret i32 %stack_var_4.0.reload, !insn.addr !204

; uselistorder directives
  uselistorder i32* %stack_var_4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 16, { 1, 0 }
  uselistorder label %dec_label_pc_1827, { 1, 0 }
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_183a:
  %0 = call i32 @param_buffer_overflow_heap(i32 20), !insn.addr !205
  %1 = add i32 %0, 10, !insn.addr !206
  ret i32 %1, !insn.addr !207

; uselistorder directives
  uselistorder i32 20, { 1, 2, 3, 0, 4, 5, 6, 7, 8 }
}

define i32 @param_integer_overflow(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_184f:
  %eax.0.reg2mem = alloca i32, !insn.addr !208
  %0 = add i32 %arg2, %arg1, !insn.addr !209
  %1 = icmp eq i32 %arg1, 0, !insn.addr !210
  %2 = icmp slt i32 %arg1, 0, !insn.addr !210
  %3 = icmp eq i1 %2, false, !insn.addr !211
  %4 = icmp eq i1 %1, false, !insn.addr !211
  %5 = icmp eq i1 %3, %4, !insn.addr !211
  %6 = icmp eq i32 %arg2, 0, !insn.addr !212
  %7 = icmp slt i32 %arg2, 0, !insn.addr !212
  %8 = icmp eq i1 %7, false, !insn.addr !213
  %9 = icmp eq i1 %6, false, !insn.addr !213
  %10 = icmp eq i1 %8, %9, !insn.addr !213
  %11 = icmp eq i1 %5, %10
  %12 = icmp slt i32 %0, 0, !insn.addr !214
  %or.cond = icmp eq i1 %12, %11
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !215
  br i1 %or.cond, label %dec_label_pc_1885, label %dec_label_pc_1877, !insn.addr !215

dec_label_pc_1877:                                ; preds = %dec_label_pc_184f
  %13 = and i32 %arg2, %arg1, !insn.addr !216
  %14 = icmp slt i32 %13, 0, !insn.addr !216
  %15 = icmp eq i1 %14, false, !insn.addr !217
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !217
  br i1 %15, label %dec_label_pc_1885, label %dec_label_pc_187b, !insn.addr !217

dec_label_pc_187b:                                ; preds = %dec_label_pc_1877
  %16 = icmp eq i32 %0, 0, !insn.addr !218
  %17 = icmp eq i1 %12, false, !insn.addr !219
  %18 = icmp eq i1 %16, false, !insn.addr !219
  %19 = icmp eq i1 %17, %18, !insn.addr !219
  %20 = select i1 %19, i32 -2, i32 %0, !insn.addr !219
  store i32 %20, i32* %eax.0.reg2mem, !insn.addr !219
  br label %dec_label_pc_1885, !insn.addr !219

dec_label_pc_1885:                                ; preds = %dec_label_pc_184f, %dec_label_pc_187b, %dec_label_pc_1877
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !220

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
  ret i32 2000000000, !insn.addr !221
}

define i32 @param_undefined_behavior(i32 %arg1) local_unnamed_addr {
dec_label_pc_189a:
  %0 = mul i32 %arg1, 2, !insn.addr !222
  ret i32 %0, !insn.addr !223

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_18a5:
  ret i32 10, !insn.addr !224

; uselistorder directives
  uselistorder i32 10, { 0, 4, 3, 2, 5, 1 }
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_18af:
  ret i32 43, !insn.addr !225
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_18b9:
  ret i32 43, !insn.addr !226
}

define void @test_obf_opt_edge() local_unnamed_addr {
dec_label_pc_18c3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !227
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8108), !insn.addr !228
  %4 = inttoptr i32 %3 to i8*, !insn.addr !229
  %5 = call i32 @puts(i8* %4), !insn.addr !230
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7813), !insn.addr !231
  %7 = inttoptr i32 %6 to i8*, !insn.addr !232
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !233
  %9 = call i32 @call_opaque_predicate(), !insn.addr !234
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7785), !insn.addr !235
  %11 = inttoptr i32 %10 to i8*, !insn.addr !236
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !237
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7757), !insn.addr !238
  %14 = inttoptr i32 %13 to i8*, !insn.addr !239
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !240
  %16 = call i32 @param_string_encryption(), !insn.addr !241
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7728), !insn.addr !242
  %18 = inttoptr i32 %17 to i8*, !insn.addr !243
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %18), !insn.addr !244
  %20 = call i32 @call_tail_call_optimized(), !insn.addr !245
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8060), !insn.addr !246
  %22 = inttoptr i32 %21 to i8*, !insn.addr !247
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !248
  %24 = call i32 @call_non_tail_call(), !insn.addr !249
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -8016), !insn.addr !250
  %26 = inttoptr i32 %25 to i8*, !insn.addr !251
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !252
  %28 = call i32 @call_vectorized_loop(), !insn.addr !253
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7976), !insn.addr !254
  %30 = inttoptr i32 %29 to i8*, !insn.addr !255
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %30), !insn.addr !256
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7936), !insn.addr !257
  %33 = inttoptr i32 %32 to i8*, !insn.addr !258
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !259
  %35 = call i32 @call_division_by_zero(), !insn.addr !260
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7700), !insn.addr !261
  %37 = inttoptr i32 %36 to i8*, !insn.addr !262
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !263
  %39 = call i32 @call_null_pointer_deref(), !insn.addr !264
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7672), !insn.addr !265
  %41 = inttoptr i32 %40 to i8*, !insn.addr !266
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !267
  %43 = call i32 @call_buffer_overflow(), !insn.addr !268
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7643), !insn.addr !269
  %45 = inttoptr i32 %44 to i8*, !insn.addr !270
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %45), !insn.addr !271
  %47 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7904), !insn.addr !272
  %48 = inttoptr i32 %47 to i8*, !insn.addr !273
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !274
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7614), !insn.addr !275
  %51 = inttoptr i32 %50 to i8*, !insn.addr !276
  %52 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %51), !insn.addr !277
  %53 = add i32 %1, add (i32 ptrtoint (i32* @global_var_26e4 to i32), i32 -7852), !insn.addr !278
  %54 = inttoptr i32 %53 to i8*, !insn.addr !279
  %55 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %54), !insn.addr !280
  ret void, !insn.addr !281

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 13, 12, 3, 2, 10, 9, 5, 4, 1, 0, 8, 7, 6, 14 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1a17:
  call void @test_obf_opt_edge(), !insn.addr !282
  ret i32 0, !insn.addr !283

; uselistorder directives
  uselistorder i32 0, { 5, 11, 12, 8, 13, 14, 15, 16, 18, 9, 19, 7, 0, 2, 1, 3, 4, 10, 20, 21, 17, 6 }
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1a30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !284
  call void @__stack_chk_fail(), !insn.addr !285
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !286
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1a50:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !287
  %ebx.0.reg2mem = alloca i32, !insn.addr !287
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !288
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_255b to i32), i32 -232), !insn.addr !289
  %4 = inttoptr i32 %3 to i32*, !insn.addr !289
  %5 = load i32, i32* %4, align 4, !insn.addr !289
  %6 = icmp eq i32 %5, -1, !insn.addr !290
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !291
  store i32 -1, i32* %merge.reg2mem, !insn.addr !291
  br i1 %6, label %dec_label_pc_1a8d, label %dec_label_pc_1a80, !insn.addr !291

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a50, %dec_label_pc_1a80
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !292
  %8 = inttoptr i32 %7 to i32*, !insn.addr !292
  %9 = load i32, i32* %8, align 4, !insn.addr !292
  %10 = icmp eq i32 %9, -1, !insn.addr !293
  %11 = icmp eq i1 %10, false, !insn.addr !294
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !294
  store i32 %9, i32* %merge.reg2mem, !insn.addr !294
  br i1 %11, label %dec_label_pc_1a80, label %dec_label_pc_1a8d, !insn.addr !294

dec_label_pc_1a8d:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a50
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !295

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 8, 3, 0, 4, 5, 1, 6, 2, 9, 10, 11, 12, 13, 14, 15, 16, 17, 7 }
  uselistorder i32 -1, { 4, 0, 5, 1, 2, 3, 7, 6, 8 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1a9c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !296
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !297
  ret i32 %3, !insn.addr !298

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 12, 4, 10, 9, 8, 7, 6, 5, 3, 2, 1, 0, 11 }
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
!96 = !{i64 5278}
!97 = !{i64 5279}
!98 = !{i64 5287}
!99 = !{i64 5297}
!100 = !{i64 5308}
!101 = !{i64 5315}
!102 = !{i64 5302}
!103 = !{i64 5322}
!104 = !{i64 5323}
!105 = !{i64 5335}
!106 = !{i64 5343}
!107 = !{i64 5344}
!108 = !{i64 5363}
!109 = !{i64 5368}
!110 = !{i64 5371}
!111 = !{i64 5375}
!112 = !{i64 5380}
!113 = !{i64 5386}
!114 = !{i64 5401}
!115 = !{i64 5409}
!116 = !{i64 5410}
!117 = !{i64 5429}
!118 = !{i64 5434}
!119 = !{i64 5438}
!120 = !{i64 5446}
!121 = !{i64 5452}
!122 = !{i64 5462}
!123 = !{i64 5470}
!124 = !{i64 5471}
!125 = !{i64 5496}
!126 = !{i64 5503}
!127 = !{i64 5506}
!128 = !{i64 5509}
!129 = !{i64 5512}
!130 = !{i64 5515}
!131 = !{i64 5517}
!132 = !{i64 5521}
!133 = !{i64 5524}
!134 = !{i64 5529}
!135 = !{i64 5531}
!136 = !{i64 5534}
!137 = !{i64 5536}
!138 = !{i64 5541}
!139 = !{i64 5549}
!140 = !{i64 5553}
!141 = !{i64 5556}
!142 = !{i64 5568}
!143 = !{i64 5632}
!144 = !{i64 5706}
!145 = !{i64 5701}
!146 = !{i64 5710}
!147 = !{i64 5713}
!148 = !{i64 5715}
!149 = !{i64 5734}
!150 = !{i64 5746}
!151 = !{i64 5753}
!152 = !{i64 5758}
!153 = !{i64 5759}
!154 = !{i64 5772}
!155 = !{i64 5776}
!156 = !{i64 5786}
!157 = !{i64 5787}
!158 = !{i64 5795}
!159 = !{i64 5806}
!160 = !{i64 5812}
!161 = !{i64 5815}
!162 = !{i64 5820}
!163 = !{i64 5829}
!164 = !{i64 5841}
!165 = !{i64 5843}
!166 = !{i64 5851}
!167 = !{i64 5859}
!168 = !{i64 5874}
!169 = !{i64 5890}
!170 = !{i64 5904}
!171 = !{i64 5918}
!172 = !{i64 5923}
!173 = !{i64 5932}
!174 = !{i64 5933}
!175 = !{i64 5941}
!176 = !{i64 5952}
!177 = !{i64 5958}
!178 = !{i64 5961}
!179 = !{i64 5966}
!180 = !{i64 5975}
!181 = !{i64 5987}
!182 = !{i64 5989}
!183 = !{i64 5995}
!184 = !{i64 6001}
!185 = !{i64 6019}
!186 = !{i64 6030}
!187 = !{i64 6042}
!188 = !{i64 6055}
!189 = !{i64 6069}
!190 = !{i64 6083}
!191 = !{i64 6098}
!192 = !{i64 6105}
!193 = !{i64 6088}
!194 = !{i64 6113}
!195 = !{i64 6114}
!196 = !{i64 6127}
!197 = !{i64 6128}
!198 = !{i64 6136}
!199 = !{i64 6149}
!200 = !{i64 6157}
!201 = !{i64 6159}
!202 = !{i64 6175}
!203 = !{i64 6180}
!204 = !{i64 6191}
!205 = !{i64 6211}
!206 = !{i64 6216}
!207 = !{i64 6222}
!208 = !{i64 6223}
!209 = !{i64 6238}
!210 = !{i64 6241}
!211 = !{i64 6243}
!212 = !{i64 6248}
!213 = !{i64 6250}
!214 = !{i64 6259}
!215 = !{i64 6257}
!216 = !{i64 6263}
!217 = !{i64 6265}
!218 = !{i64 6267}
!219 = !{i64 6274}
!220 = !{i64 6280}
!221 = !{i64 6297}
!222 = !{i64 6306}
!223 = !{i64 6308}
!224 = !{i64 6318}
!225 = !{i64 6328}
!226 = !{i64 6338}
!227 = !{i64 6347}
!228 = !{i64 6358}
!229 = !{i64 6364}
!230 = !{i64 6365}
!231 = !{i64 6375}
!232 = !{i64 6381}
!233 = !{i64 6384}
!234 = !{i64 6389}
!235 = !{i64 6398}
!236 = !{i64 6404}
!237 = !{i64 6407}
!238 = !{i64 6420}
!239 = !{i64 6426}
!240 = !{i64 6429}
!241 = !{i64 6434}
!242 = !{i64 6443}
!243 = !{i64 6449}
!244 = !{i64 6452}
!245 = !{i64 6457}
!246 = !{i64 6466}
!247 = !{i64 6472}
!248 = !{i64 6475}
!249 = !{i64 6480}
!250 = !{i64 6489}
!251 = !{i64 6495}
!252 = !{i64 6498}
!253 = !{i64 6503}
!254 = !{i64 6512}
!255 = !{i64 6518}
!256 = !{i64 6521}
!257 = !{i64 6531}
!258 = !{i64 6537}
!259 = !{i64 6540}
!260 = !{i64 6545}
!261 = !{i64 6554}
!262 = !{i64 6560}
!263 = !{i64 6563}
!264 = !{i64 6568}
!265 = !{i64 6577}
!266 = !{i64 6583}
!267 = !{i64 6586}
!268 = !{i64 6591}
!269 = !{i64 6600}
!270 = !{i64 6606}
!271 = !{i64 6609}
!272 = !{i64 6622}
!273 = !{i64 6628}
!274 = !{i64 6631}
!275 = !{i64 6641}
!276 = !{i64 6647}
!277 = !{i64 6650}
!278 = !{i64 6660}
!279 = !{i64 6666}
!280 = !{i64 6669}
!281 = !{i64 6678}
!282 = !{i64 6689}
!283 = !{i64 6700}
!284 = !{i64 6709}
!285 = !{i64 6723}
!286 = !{i64 6734}
!287 = !{i64 6736}
!288 = !{i64 6740}
!289 = !{i64 6751}
!290 = !{i64 6757}
!291 = !{i64 6760}
!292 = !{i64 6786}
!293 = !{i64 6792}
!294 = !{i64 6795}
!295 = !{i64 6801}
!296 = !{i64 6820}
!297 = !{i64 6831}
!298 = !{i64 6840}
