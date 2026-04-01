source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_27a1 = local_unnamed_addr constant i32 134217710
@global_var_2777 = constant i32 239140864
@global_var_40e = global i32 1686
@global_var_2727 = local_unnamed_addr constant i32* @global_var_40e
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

define void (i32)* @function_1080(i32 %sig, void (i32)* %handler) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call void (i32)* @signal(i32 %sig, void (i32)* %handler), !insn.addr !8
  ret void (i32)* %0, !insn.addr !8
}

define i32 @function_1090(i8* %s) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @puts(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10a0(i8* %s) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i8* @function_10b0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define i32 @function_10c0() local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !12
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10fc(i32 %2), !insn.addr !13
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 12052, !insn.addr !14
  %6 = inttoptr i32 %5 to i32*, !insn.addr !14
  %7 = load i32, i32* %6, align 4, !insn.addr !14
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !15
  %9 = call i32 @__asm_hlt(), !insn.addr !16
  unreachable, !insn.addr !16

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10fc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !17
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1100:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !18
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !19
  %3 = add i32 %1, 12071, !insn.addr !20
  ret i32 %3, !insn.addr !21
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !22
  ret i32 0, !insn.addr !23
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !24
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !25
  %3 = add i32 %1, 11919, !insn.addr !26
  %4 = inttoptr i32 %3 to i8*, !insn.addr !26
  %5 = load i8, i8* %4, align 1, !insn.addr !26
  %6 = icmp eq i8 %5, 0, !insn.addr !26
  %7 = icmp eq i1 %6, false, !insn.addr !27
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !27
  br i1 %7, label %dec_label_pc_1222, label %dec_label_pc_11c1, !insn.addr !27

dec_label_pc_11c1:                                ; preds = %dec_label_pc_11a0
  %8 = add i32 %1, 11843, !insn.addr !28
  %9 = inttoptr i32 %8 to i32*, !insn.addr !28
  %10 = load i32, i32* %9, align 4, !insn.addr !28
  %11 = icmp eq i32 %10, 0, !insn.addr !29
  br i1 %11, label %dec_label_pc_11de, label %dec_label_pc_11cb, !insn.addr !30

dec_label_pc_11cb:                                ; preds = %dec_label_pc_11c1
  %12 = call i32 @function_10c0(), !insn.addr !31
  br label %dec_label_pc_11de, !insn.addr !32

dec_label_pc_11de:                                ; preds = %dec_label_pc_11cb, %dec_label_pc_11c1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !33
  store i8 1, i8* %4, align 1, !insn.addr !34
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !34
  br label %dec_label_pc_1222, !insn.addr !34

dec_label_pc_1222:                                ; preds = %dec_label_pc_11de, %dec_label_pc_11a0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !35

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @register_tm_clones(), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1239:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !37
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_123d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !38
}

define i32 @param_fake_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1244:
  ret i32 %arg1, !insn.addr !39
}

define i32 @call_fake_branch() local_unnamed_addr {
dec_label_pc_1249:
  ret i32 10, !insn.addr !40
}

define i32 @param_opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_124f:
  %ebx.0.reg2mem = alloca i32, !insn.addr !41
  %edx.0.reg2mem = alloca i32, !insn.addr !41
  %eax.0.reg2mem = alloca i32, !insn.addr !41
  %0 = add i32 %arg1, 1, !insn.addr !42
  %1 = icmp eq i32 %0, 0, !insn.addr !42
  %2 = icmp eq i1 %1, false, !insn.addr !43
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !43
  store i32 %0, i32* %edx.0.reg2mem, !insn.addr !43
  store i32 -1, i32* %ebx.0.reg2mem, !insn.addr !43
  br i1 %2, label %dec_label_pc_1267, label %dec_label_pc_1272, !insn.addr !43

dec_label_pc_1267:                                ; preds = %dec_label_pc_124f, %dec_label_pc_1267
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = ashr i32 %eax.0.reload, 31, !insn.addr !44
  %4 = zext i32 %eax.0.reload to i64, !insn.addr !45
  %5 = zext i32 %3 to i64, !insn.addr !45
  %6 = mul i64 %5, 4294967296, !insn.addr !45
  %7 = or i64 %6, %4, !insn.addr !45
  %8 = zext i32 %edx.0.reload to i64, !insn.addr !45
  %9 = srem i64 %7, %8, !insn.addr !45
  %10 = trunc i64 %9 to i32, !insn.addr !45
  %11 = icmp eq i32 %10, 0, !insn.addr !46
  %12 = icmp eq i1 %11, false, !insn.addr !47
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !47
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !47
  store i32 %edx.0.reload, i32* %ebx.0.reg2mem, !insn.addr !47
  br i1 %12, label %dec_label_pc_1267, label %dec_label_pc_1272, !insn.addr !47

dec_label_pc_1272:                                ; preds = %dec_label_pc_1267, %dec_label_pc_124f
  %13 = mul i32 %arg1, 2, !insn.addr !48
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %14 = mul i32 %arg1, %arg1, !insn.addr !49
  %15 = or i32 %13, 1, !insn.addr !50
  %16 = add i32 %15, %14, !insn.addr !51
  %17 = mul i32 %0, %0, !insn.addr !52
  %18 = add i32 %13, 10, !insn.addr !53
  %19 = mul i32 %arg1, 3, !insn.addr !54
  %20 = add i32 %19, 20, !insn.addr !55
  %21 = icmp eq i32 %ebx.0.reload, 1
  %22 = icmp eq i32 %17, %16
  %23 = icmp eq i1 %22, %21, !insn.addr !56
  %24 = select i1 %23, i32 %18, i32 %20, !insn.addr !57
  ret i32 %24, !insn.addr !58

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 0, 2, 1 }
  uselistorder i32 %0, { 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_1267, { 1, 0 }
}

define i32 @call_opaque_predicate() local_unnamed_addr {
dec_label_pc_1298:
  %edx.0.reg2mem = alloca i32, !insn.addr !59
  %eax.0.reg2mem = alloca i32, !insn.addr !59
  store i32 5, i32* %eax.0.reg2mem, !insn.addr !60
  store i32 6, i32* %edx.0.reg2mem, !insn.addr !60
  br label %dec_label_pc_12a2, !insn.addr !60

dec_label_pc_12a2:                                ; preds = %dec_label_pc_12a2, %dec_label_pc_1298
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %0 = ashr i32 %eax.0.reload, 31, !insn.addr !61
  %1 = zext i32 %eax.0.reload to i64, !insn.addr !62
  %2 = zext i32 %0 to i64, !insn.addr !62
  %3 = mul i64 %2, 4294967296, !insn.addr !62
  %4 = or i64 %3, %1, !insn.addr !62
  %5 = zext i32 %edx.0.reload to i64, !insn.addr !62
  %6 = srem i64 %4, %5, !insn.addr !62
  %7 = trunc i64 %6 to i32, !insn.addr !62
  %8 = icmp eq i32 %7, 0, !insn.addr !63
  %9 = icmp eq i1 %8, false, !insn.addr !64
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !64
  store i32 %7, i32* %edx.0.reg2mem, !insn.addr !64
  br i1 %9, label %dec_label_pc_12a2, label %dec_label_pc_12ad, !insn.addr !64

dec_label_pc_12ad:                                ; preds = %dec_label_pc_12a2
  %10 = icmp eq i32 %edx.0.reload, 1, !insn.addr !65
  %11 = select i1 %10, i32 20, i32 35, !insn.addr !66
  ret i32 %11, !insn.addr !67

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 2, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @param_instruction_substitution(i32 %arg1) local_unnamed_addr {
dec_label_pc_12be:
  %0 = mul i32 %arg1, 21, !insn.addr !68
  %1 = udiv i32 %arg1, 2, !insn.addr !69
  %2 = urem i32 %arg1, 16, !insn.addr !70
  %3 = add nuw i32 %2, %1, !insn.addr !71
  %4 = add i32 %3, %0, !insn.addr !72
  ret i32 %4, !insn.addr !73

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @call_instruction_substitution() local_unnamed_addr {
dec_label_pc_12d4:
  ret i32 225, !insn.addr !74
}

define i32 @decrypt_string(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i8 %arg5) local_unnamed_addr {
dec_label_pc_12da:
  %edx.0.in.reg2mem = alloca i32, !insn.addr !75
  %eax.0.reg2mem = alloca i8, !insn.addr !75
  %0 = inttoptr i32 %arg3 to i8*, !insn.addr !76
  %1 = inttoptr i32 %arg2 to i8*, !insn.addr !76
  %2 = call i8* @strncpy(i8* %0, i8* %1, i32 %arg4), !insn.addr !76
  %3 = add i32 %arg3, -1, !insn.addr !77
  %4 = add i32 %3, %arg4, !insn.addr !77
  %5 = inttoptr i32 %4 to i8*, !insn.addr !77
  store i8 0, i8* %5, align 1, !insn.addr !77
  %6 = load i8, i8* %0, align 1, !insn.addr !78
  %7 = icmp eq i8 %6, 0, !insn.addr !79
  store i8 %6, i8* %eax.0.reg2mem, !insn.addr !80
  store i32 %arg3, i32* %edx.0.in.reg2mem, !insn.addr !80
  br i1 %7, label %dec_label_pc_1320, label %dec_label_pc_1314, !insn.addr !80

dec_label_pc_1314:                                ; preds = %dec_label_pc_12da, %dec_label_pc_1314
  %edx.0.in.reload = load i32, i32* %edx.0.in.reg2mem
  %eax.0.reload = load i8, i8* %eax.0.reg2mem
  %edx.0 = add i32 %edx.0.in.reload, 1
  %8 = xor i8 %eax.0.reload, %arg5, !insn.addr !81
  %9 = inttoptr i32 %edx.0.in.reload to i8*, !insn.addr !81
  store i8 %8, i8* %9, align 1, !insn.addr !81
  %10 = inttoptr i32 %edx.0 to i8*, !insn.addr !82
  %11 = load i8, i8* %10, align 1, !insn.addr !82
  %12 = icmp eq i8 %11, 0, !insn.addr !83
  %13 = icmp eq i1 %12, false, !insn.addr !84
  store i8 %11, i8* %eax.0.reg2mem, !insn.addr !84
  store i32 %edx.0, i32* %edx.0.in.reg2mem, !insn.addr !84
  br i1 %13, label %dec_label_pc_1314, label %dec_label_pc_1320, !insn.addr !84

dec_label_pc_1320:                                ; preds = %dec_label_pc_1314, %dec_label_pc_12da
  ret i32 %arg3, !insn.addr !85

; uselistorder directives
  uselistorder i32 %edx.0.in.reload, { 1, 0 }
  uselistorder i8* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg3, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_1314, { 1, 0 }
}

define i32 @param_string_encryption(i32 %arg1) local_unnamed_addr {
dec_label_pc_1326:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !86
  %ecx.0.reg2mem = alloca i32, !insn.addr !86
  %eax.0.reg2mem = alloca i8, !insn.addr !86
  %stack_var_-39 = alloca i32, align 4
  %stack_var_-40 = alloca i8, align 1
  %1 = load i32, i32* %0
  %2 = add i32 %1, 11523, !insn.addr !87
  %3 = inttoptr i32 %2 to i8*, !insn.addr !88
  %4 = call i8* @strncpy(i8* nonnull %stack_var_-40, i8* %3, i32 32), !insn.addr !89
  %5 = load i8, i8* %stack_var_-40, align 1, !insn.addr !90
  %6 = icmp eq i8 %5, 0, !insn.addr !91
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !92
  br i1 %6, label %dec_label_pc_1373, label %dec_label_pc_135b, !insn.addr !92

dec_label_pc_135b:                                ; preds = %dec_label_pc_1326
  %7 = ptrtoint i32* %stack_var_-39 to i32, !insn.addr !93
  store i8 %5, i8* %eax.0.reg2mem, !insn.addr !93
  store i32 %7, i32* %ecx.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_135f, !insn.addr !93

dec_label_pc_135f:                                ; preds = %dec_label_pc_135f, %dec_label_pc_135b
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i8, i8* %eax.0.reg2mem
  %8 = xor i8 %eax.0.reload, 90, !insn.addr !94
  %9 = add i32 %ecx.0.reload, -1, !insn.addr !94
  %10 = inttoptr i32 %9 to i8*, !insn.addr !94
  store i8 %8, i8* %10, align 1, !insn.addr !94
  %11 = inttoptr i32 %ecx.0.reload to i8*, !insn.addr !95
  %12 = load i8, i8* %11, align 1, !insn.addr !95
  %13 = add i32 %ecx.0.reload, 1, !insn.addr !96
  %14 = icmp eq i8 %12, 0, !insn.addr !97
  %15 = icmp eq i1 %14, false, !insn.addr !98
  store i8 %12, i8* %eax.0.reg2mem, !insn.addr !98
  store i32 %13, i32* %ecx.0.reg2mem, !insn.addr !98
  br i1 %15, label %dec_label_pc_135f, label %dec_label_pc_136b, !insn.addr !98

dec_label_pc_136b:                                ; preds = %dec_label_pc_135f
  %16 = load i8, i8* %stack_var_-40, align 1, !insn.addr !99
  %17 = sext i8 %16 to i32, !insn.addr !99
  store i32 %17, i32* %storemerge.reg2mem, !insn.addr !100
  br label %dec_label_pc_1373, !insn.addr !100

dec_label_pc_1373:                                ; preds = %dec_label_pc_1326, %dec_label_pc_136b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %18 = call i32 @strlen(i8* nonnull %stack_var_-40), !insn.addr !101
  %19 = add i32 %18, %storemerge.reload, !insn.addr !102
  ret i32 %19, !insn.addr !103

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 2, 1, 0 }
  uselistorder i8* %stack_var_-40, { 0, 3, 2, 1 }
  uselistorder i8* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1373, { 1, 0 }
}

define i32 @call_string_encryption(i32 %arg1) local_unnamed_addr {
dec_label_pc_1388:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_string_encryption(i32 %1), !insn.addr !104
  ret i32 %2, !insn.addr !105
}

define i32 @param_tail_call_optimized(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_13a2:
  %ecx.0.reg2mem = alloca i32, !insn.addr !106
  %0 = icmp slt i32 %arg1, 1
  store i32 %arg2, i32* %ecx.0.reg2mem, !insn.addr !107
  br i1 %0, label %dec_label_pc_13c7, label %dec_label_pc_13b0, !insn.addr !107

dec_label_pc_13b0:                                ; preds = %dec_label_pc_13a2
  %1 = add i32 %arg1, -1, !insn.addr !108
  %2 = add i32 %arg1, -2, !insn.addr !109
  %3 = zext i32 %2 to i64, !insn.addr !110
  %4 = zext i32 %1 to i64, !insn.addr !110
  %5 = mul nuw i64 %3, %4, !insn.addr !110
  %6 = trunc i64 %5 to i32, !insn.addr !110
  %7 = udiv i64 %5, 2
  %8 = trunc i64 %7 to i32
  %9 = and i32 %8, -2147483648, !insn.addr !111
  %10 = udiv i32 %6, 2, !insn.addr !111
  %11 = or i32 %9, %10, !insn.addr !111
  %12 = mul i32 %1, %1, !insn.addr !112
  %13 = add i32 %arg2, %arg1, !insn.addr !113
  %14 = add i32 %13, %12, !insn.addr !114
  %15 = sub i32 %14, %11, !insn.addr !115
  store i32 %15, i32* %ecx.0.reg2mem, !insn.addr !115
  br label %dec_label_pc_13c7, !insn.addr !115

dec_label_pc_13c7:                                ; preds = %dec_label_pc_13b0, %dec_label_pc_13a2
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  ret i32 %ecx.0.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 0, 2, 1, 3 }
}

define i32 @call_tail_call_optimized() local_unnamed_addr {
dec_label_pc_13cc:
  ret i32 500500, !insn.addr !117
}

define i32 @param_non_tail_call(i32 %arg1) local_unnamed_addr {
dec_label_pc_13d2:
  %storemerge.reg2mem = alloca i32, !insn.addr !118
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !119
  br i1 %0, label %dec_label_pc_13f4, label %dec_label_pc_13db, !insn.addr !119

dec_label_pc_13db:                                ; preds = %dec_label_pc_13d2
  %1 = add i32 %arg1, -1, !insn.addr !120
  %2 = mul i32 %1, %1, !insn.addr !121
  %3 = add i32 %arg1, -2, !insn.addr !122
  %4 = zext i32 %3 to i64, !insn.addr !123
  %5 = zext i32 %1 to i64, !insn.addr !123
  %6 = mul nuw i64 %4, %5, !insn.addr !123
  %7 = trunc i64 %6 to i32, !insn.addr !123
  %8 = udiv i64 %6, 2
  %9 = trunc i64 %8 to i32
  %10 = and i32 %9, -2147483648, !insn.addr !124
  %11 = udiv i32 %7, 2, !insn.addr !124
  %12 = or i32 %10, %11, !insn.addr !124
  %13 = add i32 %2, %arg1, !insn.addr !125
  %14 = sub i32 %13, %12, !insn.addr !126
  store i32 %14, i32* %storemerge.reg2mem, !insn.addr !127
  br label %dec_label_pc_13f4, !insn.addr !127

dec_label_pc_13f4:                                ; preds = %dec_label_pc_13d2, %dec_label_pc_13db
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !128

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_13f4, { 1, 0 }
}

define i32 @call_non_tail_call() local_unnamed_addr {
dec_label_pc_13f8:
  ret i32 5050, !insn.addr !129
}

define i32 @param_vectorized_loop(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_13fe:
  %eax.1.reg2mem = alloca i32, !insn.addr !130
  %esi.0.reg2mem = alloca i32, !insn.addr !130
  %eax.0.reg2mem = alloca i32, !insn.addr !130
  %edi.0.reg2mem = alloca i32, !insn.addr !130
  %0 = icmp slt i32 %arg4, 1
  store i32 0, i32* %edi.0.reg2mem, !insn.addr !131
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !131
  br i1 %0, label %dec_label_pc_1439, label %dec_label_pc_1417, !insn.addr !131

dec_label_pc_1417:                                ; preds = %dec_label_pc_13fe, %dec_label_pc_1417
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %1 = mul i32 %edi.0.reload, 4, !insn.addr !132
  %2 = add i32 %1, %arg2, !insn.addr !132
  %3 = inttoptr i32 %2 to i32*, !insn.addr !132
  %4 = load i32, i32* %3, align 4, !insn.addr !132
  %5 = add i32 %1, %arg1, !insn.addr !133
  %6 = inttoptr i32 %5 to i32*, !insn.addr !133
  %7 = load i32, i32* %6, align 4, !insn.addr !133
  %8 = add i32 %7, %4, !insn.addr !133
  %9 = add i32 %1, %arg3, !insn.addr !134
  %10 = inttoptr i32 %9 to i32*, !insn.addr !134
  store i32 %8, i32* %10, align 4, !insn.addr !134
  %11 = add i32 %edi.0.reload, 1, !insn.addr !135
  %12 = icmp eq i32 %11, %arg4, !insn.addr !136
  %13 = icmp eq i1 %12, false, !insn.addr !137
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !137
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !137
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !137
  br i1 %13, label %dec_label_pc_1417, label %dec_label_pc_142d, !insn.addr !137

dec_label_pc_142d:                                ; preds = %dec_label_pc_1417, %dec_label_pc_142d
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %14 = mul i32 %esi.0.reload, 4, !insn.addr !138
  %15 = add i32 %14, %arg3, !insn.addr !138
  %16 = inttoptr i32 %15 to i32*, !insn.addr !138
  %17 = load i32, i32* %16, align 4, !insn.addr !138
  %18 = add i32 %17, %eax.0.reload, !insn.addr !138
  %19 = add i32 %esi.0.reload, 1, !insn.addr !139
  %20 = icmp eq i32 %19, %arg4, !insn.addr !140
  %21 = icmp eq i1 %20, false, !insn.addr !141
  store i32 %18, i32* %eax.0.reg2mem, !insn.addr !141
  store i32 %19, i32* %esi.0.reg2mem, !insn.addr !141
  store i32 %18, i32* %eax.1.reg2mem, !insn.addr !141
  br i1 %21, label %dec_label_pc_142d, label %dec_label_pc_1439, !insn.addr !141

dec_label_pc_1439:                                ; preds = %dec_label_pc_142d, %dec_label_pc_13fe
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !142

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %edi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_142d, { 1, 0 }
  uselistorder label %dec_label_pc_1417, { 1, 0 }
}

define i32 @call_vectorized_loop(i32 %arg1) local_unnamed_addr {
dec_label_pc_143d:
  %0 = alloca i32
  %ecx.1.reg2mem = alloca i32, !insn.addr !143
  %eax.1.reg2mem = alloca i32, !insn.addr !143
  %edx.0.reg2mem = alloca i32, !insn.addr !143
  %ecx.0.reg2mem = alloca i32, !insn.addr !143
  %eax.0.reg2mem = alloca i32, !insn.addr !143
  %stack_var_-32 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-32 to i32, !insn.addr !144
  store i32 0, i32* %stack_var_-32, align 4, !insn.addr !145
  %3 = add i32 %1, 3042, !insn.addr !146
  %4 = add i32 %1, 3010, !insn.addr !147
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !147
  store i32 %3, i32* %ecx.0.reg2mem, !insn.addr !147
  store i32 %4, i32* %edx.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_147a, !insn.addr !147

dec_label_pc_147a:                                ; preds = %dec_label_pc_147a, %dec_label_pc_143d
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %5 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !148
  %6 = load i32, i32* %5, align 4, !insn.addr !148
  %7 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !149
  %8 = load i32, i32* %7, align 4, !insn.addr !149
  %9 = add i32 %8, %6, !insn.addr !149
  %10 = mul i32 %eax.0.reload, 4, !insn.addr !150
  %11 = add i32 %10, %2, !insn.addr !150
  %12 = inttoptr i32 %11 to i32*, !insn.addr !150
  store i32 %9, i32* %12, align 4, !insn.addr !150
  %13 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !151
  %14 = add i32 %ecx.0.reload, 4, !insn.addr !152
  %15 = add i32 %edx.0.reload, 4, !insn.addr !153
  %exitcond1 = icmp eq i32 %13, 8
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !154
  store i32 %14, i32* %ecx.0.reg2mem, !insn.addr !154
  store i32 %15, i32* %edx.0.reg2mem, !insn.addr !154
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !154
  store i32 0, i32* %ecx.1.reg2mem, !insn.addr !154
  br i1 %exitcond1, label %dec_label_pc_1491, label %dec_label_pc_147a, !insn.addr !154

dec_label_pc_1491:                                ; preds = %dec_label_pc_147a, %dec_label_pc_1491
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %16 = mul i32 %ecx.1.reload, 4, !insn.addr !155
  %17 = add i32 %16, %2, !insn.addr !155
  %18 = inttoptr i32 %17 to i32*, !insn.addr !155
  %19 = load i32, i32* %18, align 4, !insn.addr !155
  %20 = add i32 %19, %eax.1.reload, !insn.addr !155
  %21 = add nuw nsw i32 %ecx.1.reload, 1, !insn.addr !156
  %exitcond = icmp eq i32 %21, 8
  store i32 %20, i32* %eax.1.reg2mem, !insn.addr !157
  store i32 %21, i32* %ecx.1.reg2mem, !insn.addr !157
  br i1 %exitcond, label %dec_label_pc_149a, label %dec_label_pc_1491, !insn.addr !157

dec_label_pc_149a:                                ; preds = %dec_label_pc_1491
  ret i32 %20, !insn.addr !158

; uselistorder directives
  uselistorder i32 %20, { 1, 0 }
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.1.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1491, { 1, 0 }
}

define i32 @param_link_time_optimization(i32 %arg1) local_unnamed_addr {
dec_label_pc_149f:
  %0 = mul i32 %arg1, 2, !insn.addr !159
  %1 = add i32 %0, 10, !insn.addr !160
  ret i32 %1, !insn.addr !161
}

define i32 @call_link_time_optimization() local_unnamed_addr {
dec_label_pc_14a9:
  ret i32 20, !insn.addr !162
}

define i32 @div_zero_handler() local_unnamed_addr {
dec_label_pc_14af:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 11148, !insn.addr !163
  %3 = inttoptr i32 %2 to i32*, !insn.addr !163
  store i32 1, i32* %3, align 4, !insn.addr !163
  %4 = add i32 %1, 11152, !insn.addr !164
  %5 = insertvalue [8 x i32] undef, i32 %4, 0, !insn.addr !165
  %6 = insertvalue %__jmp_buf_tag undef, [8 x i32] %5, 0, !insn.addr !165
  %7 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %6, 0, !insn.addr !165
  call void @longjmp([1 x %__jmp_buf_tag] %7, i32 ptrtoint (i32* @0 to i32)), !insn.addr !165
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !165
}

define i32 @param_division_by_zero(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14d8:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !166
  %1 = load i32, i32* %0
  %2 = add i32 %1, -50, !insn.addr !167
  %3 = inttoptr i32 %2 to void (i32)*, !insn.addr !168
  %4 = call void (i32)* @signal(i32 8, void (i32)* %3), !insn.addr !169
  %5 = add i32 %1, 11111, !insn.addr !170
  %6 = insertvalue [8 x i32] undef, i32 %5, 0, !insn.addr !171
  %7 = insertvalue %__jmp_buf_tag undef, [8 x i32] %6, 0, !insn.addr !171
  %8 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %7, 0, !insn.addr !171
  %9 = call i32 @_setjmp([1 x %__jmp_buf_tag] %8), !insn.addr !171
  %10 = icmp eq i32 %9, 0, !insn.addr !172
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !173
  br i1 %10, label %dec_label_pc_1516, label %dec_label_pc_1521, !insn.addr !173

dec_label_pc_1516:                                ; preds = %dec_label_pc_14d8
  %11 = udiv i32 10, %arg2
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !174
  br label %dec_label_pc_1521, !insn.addr !174

dec_label_pc_1521:                                ; preds = %dec_label_pc_14d8, %dec_label_pc_1516
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !175

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1521, { 1, 0 }
}

define i32 @call_division_by_zero(i32 %arg1) local_unnamed_addr {
dec_label_pc_1526:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_division_by_zero(i32 5, i32 %1), !insn.addr !176
  %3 = call i32 @param_division_by_zero(i32 0, i32 ptrtoint (i32* @0 to i32)), !insn.addr !177
  %4 = call void (i32)* @signal(i32 8, void (i32)* null), !insn.addr !178
  %5 = add i32 %3, %2, !insn.addr !179
  ret i32 %5, !insn.addr !180

; uselistorder directives
  uselistorder i32 (i32, i32)* @param_division_by_zero, { 1, 0 }
}

define i32 @segv_handler() local_unnamed_addr {
dec_label_pc_156f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 11116, !insn.addr !181
  %3 = inttoptr i32 %2 to i32*, !insn.addr !181
  store i32 1, i32* %3, align 4, !insn.addr !181
  %4 = add i32 %1, 11120, !insn.addr !182
  %5 = insertvalue [8 x i32] undef, i32 %4, 0, !insn.addr !183
  %6 = insertvalue %__jmp_buf_tag undef, [8 x i32] %5, 0, !insn.addr !183
  %7 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %6, 0, !insn.addr !183
  call void @longjmp([1 x %__jmp_buf_tag] %7, i32 ptrtoint (i32* @0 to i32)), !insn.addr !183
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !183

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
}

define i32 @param_null_pointer_deref(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1598:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !184
  %1 = load i32, i32* %0
  %2 = add i32 %1, -50, !insn.addr !185
  %3 = inttoptr i32 %2 to void (i32)*, !insn.addr !186
  %4 = call void (i32)* @signal(i32 11, void (i32)* %3), !insn.addr !187
  %5 = add i32 %1, 11079, !insn.addr !188
  %6 = insertvalue [8 x i32] undef, i32 %5, 0, !insn.addr !189
  %7 = insertvalue %__jmp_buf_tag undef, [8 x i32] %6, 0, !insn.addr !189
  %8 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %7, 0, !insn.addr !189
  %9 = call i32 @_setjmp([1 x %__jmp_buf_tag] %8), !insn.addr !189
  %10 = icmp eq i32 %9, 0, !insn.addr !190
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !191
  br i1 %10, label %dec_label_pc_15d6, label %dec_label_pc_15dc, !insn.addr !191

dec_label_pc_15d6:                                ; preds = %dec_label_pc_1598
  %11 = inttoptr i32 %arg2 to i32*, !insn.addr !192
  %12 = load i32, i32* %11, align 4, !insn.addr !192
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !192
  br label %dec_label_pc_15dc, !insn.addr !192

dec_label_pc_15dc:                                ; preds = %dec_label_pc_1598, %dec_label_pc_15d6
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !193

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 ([1 x %__jmp_buf_tag])* @_setjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] undef, { 0, 2, 1, 3 }
  uselistorder %__jmp_buf_tag undef, { 0, 2, 1, 3 }
  uselistorder [8 x i32] undef, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_15dc, { 1, 0 }
}

define i32 @call_null_pointer_deref(i32 %arg1) local_unnamed_addr {
dec_label_pc_15e1:
  %stack_var_-16 = alloca i32, align 4
  store i32 42, i32* %stack_var_-16, align 4, !insn.addr !194
  %0 = call i32 @param_null_pointer_deref(i32* nonnull %stack_var_-16, i32 42), !insn.addr !195
  %1 = call i32 @param_null_pointer_deref(i32* null, i32 ptrtoint (i32* @0 to i32)), !insn.addr !196
  %2 = call void (i32)* @signal(i32 11, void (i32)* null), !insn.addr !197
  %3 = add i32 %1, %0, !insn.addr !198
  ret i32 %3, !insn.addr !199

; uselistorder directives
  uselistorder void (i32)* (i32, void (i32)*)* @signal, { 3, 1, 0, 2, 4 }
  uselistorder i32 (i32*, i32)* @param_null_pointer_deref, { 1, 0 }
}

define i32 @param_buffer_overflow_stack(i32 %arg1) local_unnamed_addr {
dec_label_pc_1630:
  ret i32 %arg1, !insn.addr !200
}

define i32 @param_buffer_overflow_heap(i32 %arg1) local_unnamed_addr {
dec_label_pc_1635:
  ret i32 %arg1, !insn.addr !201
}

define i32 @call_buffer_overflow() local_unnamed_addr {
dec_label_pc_163a:
  ret i32 30, !insn.addr !202
}

define i32 @param_integer_overflow(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1640:
  %storemerge.reg2mem = alloca i32, !insn.addr !203
  %0 = add i32 %arg2, %arg1, !insn.addr !204
  %1 = icmp slt i32 %arg1, 1
  %2 = icmp slt i32 %arg2, 1
  %or.cond = or i1 %1, %2
  %3 = icmp slt i32 %0, 0, !insn.addr !205
  %4 = icmp eq i1 %3, false, !insn.addr !206
  %or.cond3 = or i1 %or.cond, %4
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !207
  br i1 %or.cond3, label %dec_label_pc_165d, label %dec_label_pc_166c, !insn.addr !207

dec_label_pc_165d:                                ; preds = %dec_label_pc_1640
  %5 = icmp slt i32 %0, 1
  %6 = and i32 %arg2, %arg1, !insn.addr !208
  %7 = icmp slt i32 %6, 0, !insn.addr !208
  %8 = icmp eq i1 %7, false, !insn.addr !209
  %9 = or i1 %5, %8
  %10 = select i1 %9, i32 %0, i32 -2, !insn.addr !209
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !209
  br label %dec_label_pc_166c, !insn.addr !209

dec_label_pc_166c:                                ; preds = %dec_label_pc_1640, %dec_label_pc_165d
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !210

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_166c, { 1, 0 }
}

define i32 @call_integer_overflow() local_unnamed_addr {
dec_label_pc_166e:
  ret i32 2000000000, !insn.addr !211
}

define i32 @param_undefined_behavior(i32 %arg1) local_unnamed_addr {
dec_label_pc_1674:
  %0 = mul i32 %arg1, 2, !insn.addr !212
  ret i32 %0, !insn.addr !213

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 4, 5, 2 }
}

define i32 @call_undefined_behavior() local_unnamed_addr {
dec_label_pc_167b:
  ret i32 10, !insn.addr !214

; uselistorder directives
  uselistorder i32 10, { 0, 2, 3, 4, 1 }
}

define i32 @param_implementation_defined() local_unnamed_addr {
dec_label_pc_1681:
  ret i32 43, !insn.addr !215
}

define i32 @call_implementation_defined() local_unnamed_addr {
dec_label_pc_1687:
  ret i32 43, !insn.addr !216
}

define i32 @test_obf_opt_edge(i32 %arg1) local_unnamed_addr {
dec_label_pc_168d:
  %0 = alloca i32
  %edx.1.reg2mem = alloca i32, !insn.addr !217
  %ecx.0.reg2mem = alloca i32, !insn.addr !217
  %eax.1.reg2mem = alloca i32, !insn.addr !217
  %edx.0.reg2mem = alloca i32, !insn.addr !217
  %eax.0.reg2mem = alloca i32, !insn.addr !217
  %stack_var_-56 = alloca i8*, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 2946, !insn.addr !218
  %3 = inttoptr i32 %2 to i8*, !insn.addr !219
  %4 = call i32 @puts(i8* %3), !insn.addr !220
  %5 = add i32 %1, 2481, !insn.addr !221
  %6 = inttoptr i32 %5 to i8*, !insn.addr !222
  store i8* %6, i8** %stack_var_-56, align 4, !insn.addr !222
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !223
  store i32 5, i32* %eax.0.reg2mem, !insn.addr !224
  store i32 6, i32* %edx.0.reg2mem, !insn.addr !224
  br label %dec_label_pc_16cc, !insn.addr !224

dec_label_pc_16cc:                                ; preds = %dec_label_pc_16cc, %dec_label_pc_168d
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = ashr i32 %eax.0.reload, 31, !insn.addr !225
  %9 = zext i32 %eax.0.reload to i64, !insn.addr !226
  %10 = zext i32 %8 to i64, !insn.addr !226
  %11 = mul i64 %10, 4294967296, !insn.addr !226
  %12 = or i64 %11, %9, !insn.addr !226
  %13 = zext i32 %edx.0.reload to i64, !insn.addr !226
  %14 = srem i64 %12, %13, !insn.addr !226
  %15 = trunc i64 %14 to i32, !insn.addr !226
  %16 = icmp eq i32 %15, 0, !insn.addr !227
  %17 = icmp eq i1 %16, false, !insn.addr !228
  store i32 %edx.0.reload, i32* %eax.0.reg2mem, !insn.addr !228
  store i32 %15, i32* %edx.0.reg2mem, !insn.addr !228
  br i1 %17, label %dec_label_pc_16cc, label %dec_label_pc_16d7, !insn.addr !228

dec_label_pc_16d7:                                ; preds = %dec_label_pc_16cc
  %18 = ptrtoint i8** %stack_var_-56 to i32, !insn.addr !229
  %19 = add i32 %1, 2509, !insn.addr !230
  %20 = inttoptr i32 %19 to i8*, !insn.addr !231
  store i8* %20, i8** %stack_var_-56, align 4, !insn.addr !231
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !232
  %22 = add i32 %1, 2537, !insn.addr !233
  %23 = inttoptr i32 %22 to i8*, !insn.addr !234
  store i8* %23, i8** %stack_var_-56, align 4, !insn.addr !234
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !235
  %25 = call i32 @param_string_encryption(i32 ptrtoint (i32* @0 to i32)), !insn.addr !236
  %26 = add i32 %1, 2566, !insn.addr !237
  %27 = inttoptr i32 %26 to i8*, !insn.addr !238
  store i8* %27, i8** %stack_var_-56, align 4, !insn.addr !238
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !239
  %29 = add i32 %1, 2594, !insn.addr !240
  %30 = inttoptr i32 %29 to i8*, !insn.addr !241
  store i8* %30, i8** %stack_var_-56, align 4, !insn.addr !241
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !242
  %32 = add i32 %1, 2636, !insn.addr !243
  %33 = inttoptr i32 %32 to i8*, !insn.addr !244
  store i8* %33, i8** %stack_var_-56, align 4, !insn.addr !244
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !245
  %35 = add i32 %1, 2449, !insn.addr !246
  %36 = add i32 %1, 2417, !insn.addr !247
  %37 = add i32 %18, 20, !insn.addr !248
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !247
  store i32 %35, i32* %ecx.0.reg2mem, !insn.addr !247
  store i32 %36, i32* %edx.1.reg2mem, !insn.addr !247
  br label %dec_label_pc_1780, !insn.addr !247

dec_label_pc_1780:                                ; preds = %dec_label_pc_1780, %dec_label_pc_16d7
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %38 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !249
  %39 = load i32, i32* %38, align 4, !insn.addr !249
  %40 = inttoptr i32 %edx.1.reload to i32*, !insn.addr !250
  %41 = load i32, i32* %40, align 4, !insn.addr !250
  %42 = add i32 %41, %39, !insn.addr !250
  %43 = mul i32 %eax.1.reload, 4, !insn.addr !248
  %44 = add i32 %37, %43, !insn.addr !248
  %45 = inttoptr i32 %44 to i32*, !insn.addr !248
  store i32 %42, i32* %45, align 4, !insn.addr !248
  %46 = add nuw nsw i32 %eax.1.reload, 1, !insn.addr !251
  %47 = add i32 %ecx.0.reload, 4, !insn.addr !252
  %48 = add i32 %edx.1.reload, 4, !insn.addr !253
  %exitcond2 = icmp eq i32 %46, 8
  store i32 %46, i32* %eax.1.reg2mem, !insn.addr !254
  store i32 %47, i32* %ecx.0.reg2mem, !insn.addr !254
  store i32 %48, i32* %edx.1.reg2mem, !insn.addr !254
  br i1 %exitcond2, label %dec_label_pc_1798.preheader, label %dec_label_pc_1780, !insn.addr !254

dec_label_pc_1798.preheader:                      ; preds = %dec_label_pc_1780
  %49 = add i32 %1, 2673, !insn.addr !255
  %50 = inttoptr i32 %49 to i8*, !insn.addr !256
  store i8* %50, i8** %stack_var_-56, align 4, !insn.addr !256
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !257
  %52 = add i32 %1, 2711, !insn.addr !258
  %53 = inttoptr i32 %52 to i8*, !insn.addr !259
  store i8* %53, i8** %stack_var_-56, align 4, !insn.addr !259
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !260
  %55 = call i32 @call_division_by_zero(i32 ptrtoint (i32* @0 to i32)), !insn.addr !261
  %56 = add i32 %1, 2743, !insn.addr !262
  %57 = inttoptr i32 %56 to i8*, !insn.addr !263
  store i8* %57, i8** %stack_var_-56, align 4, !insn.addr !263
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !264
  %59 = call i32 @call_null_pointer_deref(i32 ptrtoint (i32* @0 to i32)), !insn.addr !265
  %60 = add i32 %1, 2771, !insn.addr !266
  %61 = inttoptr i32 %60 to i8*, !insn.addr !267
  store i8* %61, i8** %stack_var_-56, align 4, !insn.addr !267
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !268
  %63 = add i32 %1, 2800, !insn.addr !269
  %64 = inttoptr i32 %63 to i8*, !insn.addr !270
  store i8* %64, i8** %stack_var_-56, align 4, !insn.addr !270
  %65 = call i32 (i8*, ...) @printf(i8* %64), !insn.addr !271
  %66 = add i32 %1, 2829, !insn.addr !272
  %67 = inttoptr i32 %66 to i8*, !insn.addr !273
  store i8* %67, i8** %stack_var_-56, align 4, !insn.addr !273
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !274
  %69 = add i32 %1, 2878, !insn.addr !275
  %70 = inttoptr i32 %69 to i8*, !insn.addr !276
  store i8* %70, i8** %stack_var_-56, align 4, !insn.addr !276
  %71 = call i32 (i8*, ...) @printf(i8* %70), !insn.addr !277
  %72 = add i32 %1, 2907, !insn.addr !278
  %73 = inttoptr i32 %72 to i8*, !insn.addr !279
  store i8* %73, i8** %stack_var_-56, align 4, !insn.addr !279
  %74 = call i32 (i8*, ...) @printf(i8* %73), !insn.addr !280
  ret i32 %74, !insn.addr !281

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %edx.1.reload, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32 %1, { 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i8** %stack_var_-56, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32 8, { 0, 3, 4, 2, 1 }
  uselistorder i32 4, { 5, 6, 0, 1, 7, 8, 2, 3, 4 }
  uselistorder i32 20, { 2, 0, 1, 3 }
  uselistorder i32 (i32)* @param_string_encryption, { 1, 0 }
  uselistorder i32 5, { 0, 2, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 13, 12, 11, 10, 4, 3, 2, 1, 0, 8, 7, 6, 5, 9, 14 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1856:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_obf_opt_edge(i32 %1), !insn.addr !282
  ret i32 0, !insn.addr !283

; uselistorder directives
  uselistorder i32 0, { 10, 0, 15, 16, 12, 17, 13, 18, 1, 2, 3, 14, 5, 6, 4, 7, 8, 9, 19, 20, 21, 22, 11 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !284
  %ebx.0.reg2mem = alloca i32, !insn.addr !284
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !285
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2777 to i32), i32 -244), !insn.addr !286
  %4 = inttoptr i32 %3 to i32*, !insn.addr !286
  %5 = load i32, i32* %4, align 4, !insn.addr !286
  %6 = icmp eq i32 %5, -1, !insn.addr !287
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !288
  store i32 -1, i32* %merge.reg2mem, !insn.addr !288
  br i1 %6, label %dec_label_pc_18bd, label %dec_label_pc_18b0, !insn.addr !288

dec_label_pc_18b0:                                ; preds = %dec_label_pc_1880, %dec_label_pc_18b0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !289
  %8 = inttoptr i32 %7 to i32*, !insn.addr !289
  %9 = load i32, i32* %8, align 4, !insn.addr !289
  %10 = icmp eq i32 %9, -1, !insn.addr !290
  %11 = icmp eq i1 %10, false, !insn.addr !291
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !291
  store i32 %9, i32* %merge.reg2mem, !insn.addr !291
  br i1 %11, label %dec_label_pc_18b0, label %dec_label_pc_18bd, !insn.addr !291

dec_label_pc_18bd:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_1880
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !292

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 11, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10 }
  uselistorder i32 -1, { 5, 0, 6, 1, 2, 3, 7, 8, 9, 10, 4 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_18b0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_18cc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !293
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !294
  ret i32 %3, !insn.addr !295

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 20, 22, 21, 19, 18, 70, 64, 27, 26, 25, 24, 23, 17, 55, 54, 56, 28, 66, 29, 16, 57, 15, 14, 30, 13, 58, 12, 71, 72, 67, 35, 34, 33, 32, 31, 11, 73, 74, 59, 39, 38, 37, 36, 60, 40, 61, 41, 10, 75, 65, 68, 44, 43, 42, 9, 53, 46, 45, 62, 48, 47, 63, 76, 77, 51, 50, 49, 8, 7, 52, 6, 5, 4, 3, 69, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void (i32)* @signal(i32, void (i32)*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

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
!13 = !{i64 4319}
!14 = !{i64 4336}
!15 = !{i64 4342}
!16 = !{i64 4347}
!17 = !{i64 4351}
!18 = !{i64 4355}
!19 = !{i64 4368}
!20 = !{i64 4385}
!21 = !{i64 4424}
!22 = !{i64 4432}
!23 = !{i64 4502}
!24 = !{i64 4512}
!25 = !{i64 4520}
!26 = !{i64 4536}
!27 = !{i64 4543}
!28 = !{i64 4545}
!29 = !{i64 4551}
!30 = !{i64 4553}
!31 = !{i64 4566}
!32 = !{i64 4571}
!33 = !{i64 4630}
!34 = !{i64 4635}
!35 = !{i64 4649}
!36 = !{i64 4660}
!37 = !{i64 4668}
!38 = !{i64 4672}
!39 = !{i64 4680}
!40 = !{i64 4686}
!41 = !{i64 4687}
!42 = !{i64 4699}
!43 = !{i64 4700}
!44 = !{i64 4713}
!45 = !{i64 4714}
!46 = !{i64 4718}
!47 = !{i64 4720}
!48 = !{i64 4694}
!49 = !{i64 4724}
!50 = !{i64 4729}
!51 = !{i64 4732}
!52 = !{i64 4734}
!53 = !{i64 4742}
!54 = !{i64 4745}
!55 = !{i64 4748}
!56 = !{i64 4751}
!57 = !{i64 4753}
!58 = !{i64 4759}
!59 = !{i64 4760}
!60 = !{i64 4765}
!61 = !{i64 4772}
!62 = !{i64 4773}
!63 = !{i64 4777}
!64 = !{i64 4779}
!65 = !{i64 4781}
!66 = !{i64 4794}
!67 = !{i64 4797}
!68 = !{i64 4807}
!69 = !{i64 4810}
!70 = !{i64 4812}
!71 = !{i64 4815}
!72 = !{i64 4817}
!73 = !{i64 4819}
!74 = !{i64 4825}
!75 = !{i64 4826}
!76 = !{i64 4858}
!77 = !{i64 4866}
!78 = !{i64 4871}
!79 = !{i64 4873}
!80 = !{i64 4875}
!81 = !{i64 4886}
!82 = !{i64 4889}
!83 = !{i64 4892}
!84 = !{i64 4894}
!85 = !{i64 4901}
!86 = !{i64 4902}
!87 = !{i64 4923}
!88 = !{i64 4935}
!89 = !{i64 4937}
!90 = !{i64 4949}
!91 = !{i64 4951}
!92 = !{i64 4953}
!93 = !{i64 4955}
!94 = !{i64 4961}
!95 = !{i64 4964}
!96 = !{i64 4966}
!97 = !{i64 4967}
!98 = !{i64 4969}
!99 = !{i64 4971}
!100 = !{i64 4975}
!101 = !{i64 4983}
!102 = !{i64 4991}
!103 = !{i64 4999}
!104 = !{i64 5016}
!105 = !{i64 5025}
!106 = !{i64 5026}
!107 = !{i64 5038}
!108 = !{i64 5040}
!109 = !{i64 5043}
!110 = !{i64 5048}
!111 = !{i64 5050}
!112 = !{i64 5054}
!113 = !{i64 5057}
!114 = !{i64 5059}
!115 = !{i64 5061}
!116 = !{i64 5067}
!117 = !{i64 5073}
!118 = !{i64 5074}
!119 = !{i64 5081}
!120 = !{i64 5083}
!121 = !{i64 5088}
!122 = !{i64 5091}
!123 = !{i64 5094}
!124 = !{i64 5096}
!125 = !{i64 5100}
!126 = !{i64 5102}
!127 = !{i64 5104}
!128 = !{i64 5111}
!129 = !{i64 5117}
!130 = !{i64 5118}
!131 = !{i64 5127}
!132 = !{i64 5143}
!133 = !{i64 5146}
!134 = !{i64 5149}
!135 = !{i64 5152}
!136 = !{i64 5153}
!137 = !{i64 5155}
!138 = !{i64 5165}
!139 = !{i64 5168}
!140 = !{i64 5169}
!141 = !{i64 5171}
!142 = !{i64 5180}
!143 = !{i64 5181}
!144 = !{i64 5190}
!145 = !{i64 5227}
!146 = !{i64 5230}
!147 = !{i64 5236}
!148 = !{i64 5242}
!149 = !{i64 5244}
!150 = !{i64 5246}
!151 = !{i64 5249}
!152 = !{i64 5250}
!153 = !{i64 5253}
!154 = !{i64 5259}
!155 = !{i64 5265}
!156 = !{i64 5268}
!157 = !{i64 5272}
!158 = !{i64 5278}
!159 = !{i64 5283}
!160 = !{i64 5285}
!161 = !{i64 5288}
!162 = !{i64 5294}
!163 = !{i64 5314}
!164 = !{i64 5323}
!165 = !{i64 5331}
!166 = !{i64 5336}
!167 = !{i64 5354}
!168 = !{i64 5360}
!169 = !{i64 5369}
!170 = !{i64 5376}
!171 = !{i64 5384}
!172 = !{i64 5389}
!173 = !{i64 5391}
!174 = !{i64 5405}
!175 = !{i64 5413}
!176 = !{i64 5440}
!177 = !{i64 5452}
!178 = !{i64 5470}
!179 = !{i64 5475}
!180 = !{i64 5486}
!181 = !{i64 5506}
!182 = !{i64 5515}
!183 = !{i64 5523}
!184 = !{i64 5528}
!185 = !{i64 5546}
!186 = !{i64 5552}
!187 = !{i64 5561}
!188 = !{i64 5568}
!189 = !{i64 5576}
!190 = !{i64 5581}
!191 = !{i64 5583}
!192 = !{i64 5594}
!193 = !{i64 5600}
!194 = !{i64 5624}
!195 = !{i64 5633}
!196 = !{i64 5645}
!197 = !{i64 5663}
!198 = !{i64 5668}
!199 = !{i64 5679}
!200 = !{i64 5684}
!201 = !{i64 5689}
!202 = !{i64 5695}
!203 = !{i64 5696}
!204 = !{i64 5705}
!205 = !{i64 5716}
!206 = !{i64 5718}
!207 = !{i64 5710}
!208 = !{i64 5735}
!209 = !{i64 5737}
!210 = !{i64 5741}
!211 = !{i64 5747}
!212 = !{i64 5752}
!213 = !{i64 5754}
!214 = !{i64 5760}
!215 = !{i64 5766}
!216 = !{i64 5772}
!217 = !{i64 5773}
!218 = !{i64 5790}
!219 = !{i64 5796}
!220 = !{i64 5799}
!221 = !{i64 5804}
!222 = !{i64 5810}
!223 = !{i64 5821}
!224 = !{i64 5831}
!225 = !{i64 5838}
!226 = !{i64 5839}
!227 = !{i64 5843}
!228 = !{i64 5845}
!229 = !{i64 5783}
!230 = !{i64 5863}
!231 = !{i64 5869}
!232 = !{i64 5876}
!233 = !{i64 5881}
!234 = !{i64 5887}
!235 = !{i64 5898}
!236 = !{i64 5903}
!237 = !{i64 5912}
!238 = !{i64 5918}
!239 = !{i64 5921}
!240 = !{i64 5926}
!241 = !{i64 5932}
!242 = !{i64 5943}
!243 = !{i64 5948}
!244 = !{i64 5954}
!245 = !{i64 5965}
!246 = !{i64 6004}
!247 = !{i64 6010}
!248 = !{i64 6020}
!249 = !{i64 6016}
!250 = !{i64 6018}
!251 = !{i64 6024}
!252 = !{i64 6025}
!253 = !{i64 6028}
!254 = !{i64 6034}
!255 = !{i64 6054}
!256 = !{i64 6060}
!257 = !{i64 6063}
!258 = !{i64 6068}
!259 = !{i64 6074}
!260 = !{i64 6085}
!261 = !{i64 6090}
!262 = !{i64 6099}
!263 = !{i64 6105}
!264 = !{i64 6108}
!265 = !{i64 6113}
!266 = !{i64 6122}
!267 = !{i64 6128}
!268 = !{i64 6131}
!269 = !{i64 6136}
!270 = !{i64 6142}
!271 = !{i64 6153}
!272 = !{i64 6158}
!273 = !{i64 6164}
!274 = !{i64 6175}
!275 = !{i64 6180}
!276 = !{i64 6186}
!277 = !{i64 6197}
!278 = !{i64 6202}
!279 = !{i64 6208}
!280 = !{i64 6219}
!281 = !{i64 6229}
!282 = !{i64 6246}
!283 = !{i64 6257}
!284 = !{i64 6272}
!285 = !{i64 6276}
!286 = !{i64 6287}
!287 = !{i64 6293}
!288 = !{i64 6296}
!289 = !{i64 6322}
!290 = !{i64 6328}
!291 = !{i64 6331}
!292 = !{i64 6337}
!293 = !{i64 6356}
!294 = !{i64 6367}
!295 = !{i64 6376}
