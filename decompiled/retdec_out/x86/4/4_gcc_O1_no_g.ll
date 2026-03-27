source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

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

define void @function_1090(i32* %d) local_unnamed_addr {
dec_label_pc_1090:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_10a0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_10b0() local_unnamed_addr {
dec_label_pc_10b0:
  call void @__stack_chk_fail(), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_10c0(i8* %s) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_10d0(i8* %s) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_10e0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_111c(i32 %2), !insn.addr !10
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 16116, !insn.addr !11
  %6 = inttoptr i32 %5 to i32*, !insn.addr !11
  %7 = load i32, i32* %6, align 4, !insn.addr !11
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !12
  %9 = call i32 @__asm_hlt(), !insn.addr !13
  unreachable, !insn.addr !13

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_111c(i32 %arg1) local_unnamed_addr {
dec_label_pc_111c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1120:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !16
  %3 = add i32 %1, 16095, !insn.addr !17
  ret i32 %3, !insn.addr !18
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !19
  ret i32 0, !insn.addr !20
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !21
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !22
  %3 = add i32 %1, 15943, !insn.addr !23
  %4 = inttoptr i32 %3 to i8*, !insn.addr !23
  %5 = load i8, i8* %4, align 1, !insn.addr !23
  %6 = icmp eq i8 %5, 0, !insn.addr !23
  %7 = icmp eq i1 %6, false, !insn.addr !24
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !24
  br i1 %7, label %dec_label_pc_1242, label %dec_label_pc_11e1, !insn.addr !24

dec_label_pc_11e1:                                ; preds = %dec_label_pc_11c0
  %8 = add i32 %1, 15907, !insn.addr !25
  %9 = inttoptr i32 %8 to i32*, !insn.addr !25
  %10 = load i32, i32* %9, align 4, !insn.addr !25
  %11 = icmp eq i32 %10, 0, !insn.addr !26
  br i1 %11, label %dec_label_pc_11fe, label %dec_label_pc_11eb, !insn.addr !27

dec_label_pc_11eb:                                ; preds = %dec_label_pc_11e1
  %12 = add i32 %1, 15927, !insn.addr !28
  %13 = inttoptr i32 %12 to i32*, !insn.addr !28
  %14 = load i32, i32* %13, align 4, !insn.addr !28
  %15 = inttoptr i32 %14 to i32*, !insn.addr !29
  call void @__cxa_finalize(i32* %15), !insn.addr !29
  br label %dec_label_pc_11fe, !insn.addr !30

dec_label_pc_11fe:                                ; preds = %dec_label_pc_11eb, %dec_label_pc_11e1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* %4, align 1, !insn.addr !32
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !32
  br label %dec_label_pc_1242, !insn.addr !32

dec_label_pc_1242:                                ; preds = %dec_label_pc_11fe, %dec_label_pc_11c0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !33

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 @register_tm_clones(), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1259:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_125d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !36
}

define i32 @callback_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1261:
  %0 = mul i32 %arg1, 2, !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @func_a(i32 %arg1) local_unnamed_addr {
dec_label_pc_126c:
  %0 = add i32 %arg1, 10, !insn.addr !39
  ret i32 %0, !insn.addr !40
}

define i32 @func_b(i32 %arg1) local_unnamed_addr {
dec_label_pc_1278:
  %0 = mul i32 %arg1, 2, !insn.addr !41
  ret i32 %0, !insn.addr !42
}

define i32 @cdecl_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1283:
  %0 = add i32 %arg2, %arg1, !insn.addr !43
  ret i32 %0, !insn.addr !44
}

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_1290:
  ret i32 15, !insn.addr !45
}

define i32 @stdcall_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_129a:
  %0 = mul i32 %arg2, %arg1, !insn.addr !46
  ret i32 %0, !insn.addr !47
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_12aa:
  ret i32 50, !insn.addr !48
}

define i32 @fastcall_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %1, %arg1, !insn.addr !49
  %4 = add i32 %3, %2, !insn.addr !50
  ret i32 %4, !insn.addr !51

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_12c2:
  ret i32 6, !insn.addr !52
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_12cc:
  ret i32 15, !insn.addr !53
}

define i32 @arm_aapcs_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_12d6:
  %0 = add i32 %arg2, %arg1, !insn.addr !54
  %1 = add i32 %0, %arg3, !insn.addr !55
  %2 = add i32 %1, %arg4, !insn.addr !56
  %3 = add i32 %2, %arg5, !insn.addr !57
  ret i32 %3, !insn.addr !58
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_12ef:
  ret i32 15, !insn.addr !59
}

define i32 @mips_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12f9:
  %0 = add i32 %arg2, %arg1, !insn.addr !60
  %1 = add i32 %0, %arg3, !insn.addr !61
  %2 = add i32 %1, %arg4, !insn.addr !62
  ret i32 %2, !insn.addr !63
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_130e:
  ret i32 100, !insn.addr !64
}

define i32 @amd64_sysv_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1318:
  %0 = add i32 %arg2, %arg1, !insn.addr !65
  %1 = add i32 %0, %arg3, !insn.addr !66
  %2 = add i32 %1, %arg4, !insn.addr !67
  %3 = add i32 %2, %arg5, !insn.addr !68
  %4 = add i32 %3, %arg6, !insn.addr !69
  ret i32 %4, !insn.addr !70
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1335:
  ret i32 21, !insn.addr !71
}

define i32 @ms_x64_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_133f:
  %0 = add i32 %arg2, %arg1, !insn.addr !72
  %1 = add i32 %0, %arg3, !insn.addr !73
  %2 = add i32 %1, %arg4, !insn.addr !74
  %3 = add i32 %2, %arg5, !insn.addr !75
  ret i32 %3, !insn.addr !76
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1358:
  ret i32 15, !insn.addr !77
}

define i32 @vectorcall_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1362:
  %0 = add i32 %arg2, %arg1, !insn.addr !78
  %1 = add i32 %0, %arg3, !insn.addr !79
  %2 = add i32 %1, %arg4, !insn.addr !80
  ret i32 %2, !insn.addr !81
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1377:
  ret i32 10, !insn.addr !82
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1381:
  ret i32 33, !insn.addr !83
}

define i32 @varargs_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_138b:
  %ecx.1.reg2mem = alloca i32, !insn.addr !84
  %edx.0.reg2mem = alloca i32, !insn.addr !84
  %ecx.0.reg2mem = alloca i32, !insn.addr !84
  %eax.0.reg2mem = alloca i32, !insn.addr !84
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %ecx.1.reg2mem, !insn.addr !85
  br i1 %0, label %dec_label_pc_13b5, label %dec_label_pc_1399, !insn.addr !85

dec_label_pc_1399:                                ; preds = %dec_label_pc_138b
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !86
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !87
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !87
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !87
  br label %dec_label_pc_13a7, !insn.addr !87

dec_label_pc_13a7:                                ; preds = %dec_label_pc_13a7, %dec_label_pc_1399
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = add i32 %eax.0.reload, 4, !insn.addr !88
  %3 = inttoptr i32 %eax.0.reload to i32*, !insn.addr !89
  %4 = load i32, i32* %3, align 4, !insn.addr !89
  %5 = add i32 %4, %ecx.0.reload, !insn.addr !89
  %6 = add i32 %edx.0.reload, 1, !insn.addr !90
  %7 = icmp eq i32 %6, %arg1, !insn.addr !91
  %8 = icmp eq i1 %7, false, !insn.addr !92
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !92
  store i32 %5, i32* %ecx.0.reg2mem, !insn.addr !92
  store i32 %6, i32* %edx.0.reg2mem, !insn.addr !92
  store i32 %5, i32* %ecx.1.reg2mem, !insn.addr !92
  br i1 %8, label %dec_label_pc_13a7, label %dec_label_pc_13b5, !insn.addr !92

dec_label_pc_13b5:                                ; preds = %dec_label_pc_13a7, %dec_label_pc_138b
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  ret i32 %ecx.1.reload, !insn.addr !93

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_13c1:
  ret i32 42, !insn.addr !94
}

define i32 @func_many_args(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_13cb:
  %0 = add i32 %arg2, %arg1, !insn.addr !95
  %1 = add i32 %0, %arg3, !insn.addr !96
  %2 = add i32 %1, %arg4, !insn.addr !97
  %3 = add i32 %2, %arg5, !insn.addr !98
  %4 = add i32 %3, %arg6, !insn.addr !99
  %5 = add i32 %4, %arg7, !insn.addr !100
  %6 = add i32 %5, %arg8, !insn.addr !101
  ret i32 %6, !insn.addr !102
}

define i32 @func_mixed_args(i32 %arg1, i32 %arg2, double %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = alloca i32
  %1 = alloca x86_fp80
  %2 = load i32, i32* %0
  %3 = load x86_fp80, x86_fp80* %1
  %4 = call i32 @__x86.get_pc_thunk.bx(i32 %2), !insn.addr !103
  %5 = icmp eq i32 %arg2, 0, !insn.addr !104
  br i1 %5, label %dec_label_pc_142d, label %dec_label_pc_1421, !insn.addr !105

dec_label_pc_1421:                                ; preds = %dec_label_pc_13f0
  %6 = inttoptr i32 %arg2 to i8*, !insn.addr !106
  %7 = call i32 @strlen(i8* %6), !insn.addr !106
  br label %dec_label_pc_142d, !insn.addr !107

dec_label_pc_142d:                                ; preds = %dec_label_pc_1421, %dec_label_pc_13f0
  %8 = sitofp i32 %arg4 to x86_fp80, !insn.addr !108
  %9 = fadd x86_fp80 %3, %8, !insn.addr !109
  %10 = fptosi x86_fp80 %9 to i32, !insn.addr !110
  ret i32 %10, !insn.addr !111
}

define i32 @func_struct_byval() local_unnamed_addr {
dec_label_pc_146e:
  %edx.0.reg2mem = alloca i32, !insn.addr !112
  %ecx.0.reg2mem = alloca i32, !insn.addr !112
  %stack_var_132 = alloca i32, align 4
  %stack_var_4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_4 to i32, !insn.addr !113
  %1 = ptrtoint i32* %stack_var_132 to i32, !insn.addr !114
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !115
  store i32 %0, i32* %edx.0.reg2mem, !insn.addr !115
  br label %dec_label_pc_1488, !insn.addr !115

dec_label_pc_1488:                                ; preds = %dec_label_pc_1488, %dec_label_pc_146e
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %2 = inttoptr i32 %edx.0.reload to i32*, !insn.addr !116
  %3 = load i32, i32* %2, align 4, !insn.addr !116
  %4 = add i32 %3, %ecx.0.reload, !insn.addr !116
  %5 = add i32 %edx.0.reload, 8, !insn.addr !117
  %6 = icmp eq i32 %5, %1, !insn.addr !118
  %7 = icmp eq i1 %6, false, !insn.addr !119
  store i32 %4, i32* %ecx.0.reg2mem, !insn.addr !119
  store i32 %5, i32* %edx.0.reg2mem, !insn.addr !119
  br i1 %7, label %dec_label_pc_1488, label %dec_label_pc_1494, !insn.addr !119

dec_label_pc_1494:                                ; preds = %dec_label_pc_1488
  ret i32 %4, !insn.addr !120

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @func_struct_byptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1498:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !121
  br i1 %0, label %dec_label_pc_14ab, label %dec_label_pc_14a4, !insn.addr !122

dec_label_pc_14a4:                                ; preds = %dec_label_pc_1498
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !123
  %2 = load i32, i32* %1, align 4, !insn.addr !123
  %3 = add i32 %arg1, 4, !insn.addr !124
  %4 = inttoptr i32 %3 to i32*, !insn.addr !124
  %5 = load i32, i32* %4, align 4, !insn.addr !124
  %6 = mul i32 %5, %2, !insn.addr !124
  ret i32 %6, !insn.addr !125

dec_label_pc_14ab:                                ; preds = %dec_label_pc_1498
  ret i32 -1, !insn.addr !126

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_14b1:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !127
  %edx.0.reg2mem = alloca i32, !insn.addr !127
  %eax.0.reg2mem = alloca i32, !insn.addr !127
  %1 = load i32, i32* %0
  %stack_var_-144 = alloca i32, align 4
  %stack_var_-272 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !128
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !129
  store i32 %3, i32* %stack_var_-16, align 4, !insn.addr !130
  %4 = add i32 %1, 2885, !insn.addr !131
  %5 = inttoptr i32 %4 to i8*, !insn.addr !132
  %6 = call i32 @puts(i8* %5), !insn.addr !133
  %7 = add i32 %1, 3202, !insn.addr !134
  %8 = inttoptr i32 %7 to i8*, !insn.addr !135
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !136
  %10 = add i32 %1, 3218, !insn.addr !137
  %11 = inttoptr i32 %10 to i8*, !insn.addr !138
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !139
  %13 = add i32 %1, 3234, !insn.addr !140
  %14 = inttoptr i32 %13 to i8*, !insn.addr !141
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !142
  %16 = add i32 %1, 3250, !insn.addr !143
  %17 = inttoptr i32 %16 to i8*, !insn.addr !144
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %17), !insn.addr !145
  %19 = add i32 %1, 3266, !insn.addr !146
  %20 = inttoptr i32 %19 to i8*, !insn.addr !147
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !148
  %22 = add i32 %1, 3282, !insn.addr !149
  %23 = inttoptr i32 %22 to i8*, !insn.addr !150
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %23), !insn.addr !151
  %25 = add i32 %1, 3298, !insn.addr !152
  %26 = inttoptr i32 %25 to i8*, !insn.addr !153
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !154
  %28 = add i32 %1, 3314, !insn.addr !155
  %29 = inttoptr i32 %28 to i8*, !insn.addr !156
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !157
  %31 = add i32 %1, 3330, !insn.addr !158
  %32 = inttoptr i32 %31 to i8*, !insn.addr !159
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !160
  %34 = add i32 %1, 3346, !insn.addr !161
  %35 = inttoptr i32 %34 to i8*, !insn.addr !162
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %35), !insn.addr !163
  %37 = call i32 @varargs_func(i32 5), !insn.addr !164
  %38 = add i32 %1, 2921, !insn.addr !165
  %39 = inttoptr i32 %38 to i8*, !insn.addr !166
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %39), !insn.addr !167
  %41 = add i32 %1, 2961, !insn.addr !168
  %42 = inttoptr i32 %41 to i8*, !insn.addr !169
  %43 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %42), !insn.addr !170
  %44 = add i32 %1, 2997, !insn.addr !171
  %45 = inttoptr i32 %44 to i8*, !insn.addr !172
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %45), !insn.addr !173
  %47 = add i32 %1, 3037, !insn.addr !174
  %48 = inttoptr i32 %47 to i8*, !insn.addr !175
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !176
  %50 = ptrtoint i32* %stack_var_-272 to i32, !insn.addr !177
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !177
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !177
  br label %dec_label_pc_1612, !insn.addr !177

dec_label_pc_1612:                                ; preds = %dec_label_pc_1612, %dec_label_pc_14b1
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %51 = mul i32 %eax.0.reload, 8, !insn.addr !178
  %52 = add i32 %51, %50
  %53 = add i32 %52, -8, !insn.addr !179
  %54 = inttoptr i32 %53 to i32*, !insn.addr !179
  store i32 %eax.0.reload, i32* %54, align 4, !insn.addr !179
  %55 = add i32 %52, -4, !insn.addr !180
  %56 = inttoptr i32 %55 to i32*, !insn.addr !180
  store i32 %edx.0.reload, i32* %56, align 4, !insn.addr !180
  %57 = add i32 %eax.0.reload, 1, !insn.addr !181
  %58 = icmp eq i32 %eax.0.reload, -1, !insn.addr !181
  %59 = zext i1 %58 to i32, !insn.addr !182
  %60 = add i32 %edx.0.reload, %59, !insn.addr !182
  %61 = xor i32 %57, 17, !insn.addr !183
  %62 = or i32 %60, %61, !insn.addr !184
  %63 = icmp eq i32 %62, 0, !insn.addr !184
  %64 = icmp eq i1 %63, false, !insn.addr !185
  store i32 %57, i32* %eax.0.reg2mem, !insn.addr !185
  store i32 %60, i32* %edx.0.reg2mem, !insn.addr !185
  br i1 %64, label %dec_label_pc_1612, label %dec_label_pc_1632, !insn.addr !185

dec_label_pc_1632:                                ; preds = %dec_label_pc_1612
  %65 = bitcast i32* %stack_var_-272 to i8*, !insn.addr !186
  %66 = bitcast i32* %stack_var_-144 to i8*, !insn.addr !186
  call void @__asm_rep_movsd_memcpy(i8* nonnull %66, i8* nonnull %65, i32 32), !insn.addr !186
  %67 = ptrtoint i32* %stack_var_-144 to i32, !insn.addr !187
  %68 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !188
  store i32 %67, i32* %eax.1.reg2mem, !insn.addr !189
  br label %dec_label_pc_165c, !insn.addr !189

dec_label_pc_165c:                                ; preds = %dec_label_pc_165c, %dec_label_pc_1632
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %69 = add i32 %eax.1.reload, 8, !insn.addr !190
  %70 = icmp eq i32 %69, %68, !insn.addr !191
  %71 = icmp eq i1 %70, false, !insn.addr !192
  store i32 %69, i32* %eax.1.reg2mem, !insn.addr !192
  br i1 %71, label %dec_label_pc_165c, label %dec_label_pc_1668, !insn.addr !192

dec_label_pc_1668:                                ; preds = %dec_label_pc_165c
  %72 = add i32 %1, 3077, !insn.addr !193
  %73 = inttoptr i32 %72 to i8*, !insn.addr !194
  %74 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %73), !insn.addr !195
  %75 = add i32 %1, 3121, !insn.addr !196
  %76 = inttoptr i32 %75 to i8*, !insn.addr !197
  %77 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %76), !insn.addr !198
  %78 = load i32, i32* %stack_var_-16, align 4, !insn.addr !199
  %79 = call i32 @__readgsdword(i32 20), !insn.addr !200
  %80 = sub i32 %78, %79, !insn.addr !200
  %81 = icmp eq i32 %80, 0, !insn.addr !200
  %82 = icmp eq i1 %81, false, !insn.addr !201
  br i1 %82, label %dec_label_pc_16aa, label %dec_label_pc_16a0, !insn.addr !201

dec_label_pc_16a0:                                ; preds = %dec_label_pc_1668
  ret i32 %80, !insn.addr !202

dec_label_pc_16aa:                                ; preds = %dec_label_pc_1668
  %83 = call i32 @__stack_chk_fail_local(), !insn.addr !203
  ret i32 %83, !insn.addr !203

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 2, 0, 3 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-144, { 1, 0 }
  uselistorder i32 %1, { 17, 16, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
}

define i32 @param_by_value_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_16af:
  %0 = mul i32 %arg1, 2, !insn.addr !204
  ret i32 %0, !insn.addr !205
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_16ba:
  ret i32 15, !insn.addr !206
}

define i32 @param_by_value_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_16c4:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !207
  %1 = load i32, i32* %0, align 4, !insn.addr !207
  %2 = mul i32 %1, 2, !insn.addr !207
  store i32 %2, i32* %0, align 4, !insn.addr !207
  ret i32 1, !insn.addr !208
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_16d4:
  ret i32 11, !insn.addr !209
}

define i32 @param_array_decay() local_unnamed_addr {
dec_label_pc_16de:
  ret i32 4, !insn.addr !210
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_16e8:
  ret i32 4, !insn.addr !211
}

define i32 @param_string(i32 %arg1) local_unnamed_addr {
dec_label_pc_16f2:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !212
  %1 = load i8, i8* %0, align 1, !insn.addr !212
  %2 = sext i8 %1 to i32, !insn.addr !212
  %3 = add i32 %arg1, 1, !insn.addr !213
  %4 = inttoptr i32 %3 to i8*, !insn.addr !213
  %5 = load i8, i8* %4, align 1, !insn.addr !213
  %6 = sext i8 %5 to i32, !insn.addr !213
  %7 = add nsw i32 %6, %2, !insn.addr !214
  ret i32 %7, !insn.addr !215

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_1704:
  ret i32 173, !insn.addr !216
}

define i32 @param_ptr_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_170e:
  %edx.1.reg2mem = alloca i32, !insn.addr !217
  %edx.0.reg2mem = alloca i32, !insn.addr !217
  %eax.0.reg2mem = alloca i32, !insn.addr !217
  %0 = icmp slt i32 %arg2, 1
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !218
  br i1 %0, label %dec_label_pc_1737, label %dec_label_pc_171f, !insn.addr !218

dec_label_pc_171f:                                ; preds = %dec_label_pc_170e
  %1 = ptrtoint i32* %arg1 to i32
  %2 = mul i32 %arg2, 4, !insn.addr !219
  %3 = add i32 %2, %1, !insn.addr !219
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !220
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_1729, !insn.addr !220

dec_label_pc_1729:                                ; preds = %dec_label_pc_1729, %dec_label_pc_171f
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = inttoptr i32 %eax.0.reload to i32*, !insn.addr !221
  %5 = load i32, i32* %4, align 4, !insn.addr !221
  %6 = inttoptr i32 %5 to i8*, !insn.addr !222
  %7 = load i8, i8* %6, align 1, !insn.addr !222
  %8 = sext i8 %7 to i32, !insn.addr !222
  %9 = add i32 %edx.0.reload, %8, !insn.addr !223
  %10 = add i32 %eax.0.reload, 4, !insn.addr !224
  %11 = icmp eq i32 %10, %3, !insn.addr !225
  %12 = icmp eq i1 %11, false, !insn.addr !226
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !226
  store i32 %9, i32* %edx.0.reg2mem, !insn.addr !226
  store i32 %9, i32* %edx.1.reg2mem, !insn.addr !226
  br i1 %12, label %dec_label_pc_1729, label %dec_label_pc_1737, !insn.addr !226

dec_label_pc_1737:                                ; preds = %dec_label_pc_1729, %dec_label_pc_170e
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  ret i32 %edx.1.reload, !insn.addr !227

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1742:
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !228
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !229
  %2 = add i32 %0, 2711, !insn.addr !230
  store i32 %2, i32* %stack_var_-28, align 4, !insn.addr !231
  %3 = call i32 @param_ptr_array(i32* nonnull %stack_var_-28, i32 3), !insn.addr !232
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !233
  %5 = icmp eq i32 %1, %4, !insn.addr !233
  %6 = icmp eq i1 %5, false, !insn.addr !234
  br i1 %6, label %dec_label_pc_179d, label %dec_label_pc_1799, !insn.addr !234

dec_label_pc_1799:                                ; preds = %dec_label_pc_1742
  ret i32 %3, !insn.addr !235

dec_label_pc_179d:                                ; preds = %dec_label_pc_1742
  %7 = call i32 @__stack_chk_fail_local(), !insn.addr !236
  ret i32 %7, !insn.addr !236
}

define i32 @param_varargs(i32 %arg1) local_unnamed_addr {
dec_label_pc_17a2:
  %ecx.1.reg2mem = alloca i32, !insn.addr !237
  %edx.0.reg2mem = alloca i32, !insn.addr !237
  %ecx.0.reg2mem = alloca i32, !insn.addr !237
  %eax.0.reg2mem = alloca i32, !insn.addr !237
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %ecx.1.reg2mem, !insn.addr !238
  br i1 %0, label %dec_label_pc_17cc, label %dec_label_pc_17b0, !insn.addr !238

dec_label_pc_17b0:                                ; preds = %dec_label_pc_17a2
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !239
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !240
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !240
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !240
  br label %dec_label_pc_17be, !insn.addr !240

dec_label_pc_17be:                                ; preds = %dec_label_pc_17be, %dec_label_pc_17b0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = add i32 %eax.0.reload, 4, !insn.addr !241
  %3 = inttoptr i32 %eax.0.reload to i32*, !insn.addr !242
  %4 = load i32, i32* %3, align 4, !insn.addr !242
  %5 = add i32 %4, %ecx.0.reload, !insn.addr !242
  %6 = add i32 %edx.0.reload, 1, !insn.addr !243
  %7 = icmp eq i32 %6, %arg1, !insn.addr !244
  %8 = icmp eq i1 %7, false, !insn.addr !245
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !245
  store i32 %5, i32* %ecx.0.reg2mem, !insn.addr !245
  store i32 %6, i32* %edx.0.reg2mem, !insn.addr !245
  store i32 %5, i32* %ecx.1.reg2mem, !insn.addr !245
  br i1 %8, label %dec_label_pc_17be, label %dec_label_pc_17cc, !insn.addr !245

dec_label_pc_17cc:                                ; preds = %dec_label_pc_17be, %dec_label_pc_17a2
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  ret i32 %ecx.1.reload, !insn.addr !246

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_17d8:
  %0 = call i32 @param_varargs(i32 4), !insn.addr !247
  ret i32 %0, !insn.addr !248
}

define i32 @param_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_17ef:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10, !insn.addr !249
  ret i32 %2, !insn.addr !250
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1805:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !251
  %1 = add i32 %0, -1456, !insn.addr !252
  %2 = call i32 @param_func_ptr(i32 %1), !insn.addr !253
  ret i32 %2, !insn.addr !254
}

define i32 @param_double_ptr(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1828:
  %0 = icmp eq i32* %arg1, null, !insn.addr !255
  br i1 %0, label %dec_label_pc_184c, label %dec_label_pc_1834, !insn.addr !256

dec_label_pc_1834:                                ; preds = %dec_label_pc_1828
  %1 = load i32, i32* %arg1, align 4, !insn.addr !257
  %2 = icmp eq i32 %1, 0, !insn.addr !258
  br i1 %2, label %dec_label_pc_184c, label %dec_label_pc_183a, !insn.addr !259

dec_label_pc_183a:                                ; preds = %dec_label_pc_1834
  %3 = inttoptr i32 %1 to i32*, !insn.addr !260
  store i32 %arg2, i32* %3, align 4, !insn.addr !260
  store i32 0, i32* %arg1, align 4, !insn.addr !261
  ret i32 1, !insn.addr !262

dec_label_pc_184c:                                ; preds = %dec_label_pc_1834, %dec_label_pc_1828
  ret i32 -1, !insn.addr !263
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1858:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !264
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !265
  %1 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !266
  store i32 %1, i32* %stack_var_-20, align 4, !insn.addr !266
  %2 = call i32 @param_double_ptr(i32* nonnull %stack_var_-20, i32 20), !insn.addr !267
  %3 = load i32, i32* %stack_var_-20, align 4, !insn.addr !268
  %4 = load i32, i32* %stack_var_-24, align 4, !insn.addr !269
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !270
  %6 = icmp eq i32 %0, %5, !insn.addr !270
  %7 = icmp eq i1 %6, false, !insn.addr !271
  br i1 %7, label %dec_label_pc_18aa, label %dec_label_pc_18a6, !insn.addr !271

dec_label_pc_18a6:                                ; preds = %dec_label_pc_1858
  %8 = icmp eq i32 %3, 0, !insn.addr !268
  %9 = zext i1 %8 to i32, !insn.addr !272
  %10 = add i32 %4, %9, !insn.addr !269
  ret i32 %10, !insn.addr !273

dec_label_pc_18aa:                                ; preds = %dec_label_pc_1858
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !274
  ret i32 %11, !insn.addr !274

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
}

define i32 @param_complex_cast(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18af:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !275
  br i1 %0, label %dec_label_pc_18ca, label %dec_label_pc_18bf, !insn.addr !276

dec_label_pc_18bf:                                ; preds = %dec_label_pc_18af
  %1 = icmp eq i32 %arg2, 1, !insn.addr !277
  %2 = icmp eq i1 %1, false, !insn.addr !278
  br i1 %2, label %dec_label_pc_18cd, label %dec_label_pc_18c4, !insn.addr !278

dec_label_pc_18c4:                                ; preds = %dec_label_pc_18bf
  %3 = add i32 %arg1, 4, !insn.addr !279
  %4 = inttoptr i32 %3 to i32*, !insn.addr !279
  %5 = load i32, i32* %4, align 4, !insn.addr !279
  %6 = inttoptr i32 %arg1 to i32*, !insn.addr !280
  %7 = load i32, i32* %6, align 4, !insn.addr !280
  %8 = add i32 %7, %5, !insn.addr !280
  ret i32 %8, !insn.addr !281

dec_label_pc_18ca:                                ; preds = %dec_label_pc_18af
  %9 = inttoptr i32 %arg1 to i32*, !insn.addr !282
  %10 = load i32, i32* %9, align 4, !insn.addr !282
  ret i32 %10, !insn.addr !283

dec_label_pc_18cd:                                ; preds = %dec_label_pc_18bf
  ret i32 -1, !insn.addr !284

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_18d3:
  ret i32 305419896, !insn.addr !285
}

define i32 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_18dd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !286
  ret i32 %2, !insn.addr !287
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_18ea:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !288
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-92 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-92 to i32, !insn.addr !289
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !290
  %5 = add i32 %3, 12, !insn.addr !291
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !292
  br label %dec_label_pc_18fd, !insn.addr !292

dec_label_pc_18fd:                                ; preds = %dec_label_pc_18fd, %dec_label_pc_18ea
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = mul i32 %eax.0.reload, 4, !insn.addr !291
  %7 = add i32 %5, %6, !insn.addr !291
  %8 = inttoptr i32 %7 to i32*, !insn.addr !291
  store i32 %eax.0.reload, i32* %8, align 4, !insn.addr !291
  %9 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !293
  %exitcond = icmp eq i32 %9, 16
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !294
  br i1 %exitcond, label %dec_label_pc_1909, label %dec_label_pc_18fd, !insn.addr !294

dec_label_pc_1909:                                ; preds = %dec_label_pc_18fd
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !295
  %11 = icmp eq i32 %4, %10, !insn.addr !295
  %12 = icmp eq i1 %11, false, !insn.addr !296
  br i1 %12, label %dec_label_pc_1922, label %dec_label_pc_191e, !insn.addr !296

dec_label_pc_191e:                                ; preds = %dec_label_pc_1909
  %13 = add i32 %2, %1, !insn.addr !297
  ret i32 %13, !insn.addr !298

dec_label_pc_1922:                                ; preds = %dec_label_pc_1909
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !299
  ret i32 %14, !insn.addr !299

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_order_dep(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1927:
  %0 = add i32 %arg2, %arg1, !insn.addr !300
  ret i32 %0, !insn.addr !301
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_1934:
  ret i32 4, !insn.addr !302
}

define i32 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_193e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !303
  %3 = add i32 %1, 2009, !insn.addr !304
  %4 = inttoptr i32 %3 to i8*, !insn.addr !305
  %5 = call i32 @puts(i8* %4), !insn.addr !306
  %6 = add i32 %1, 2214, !insn.addr !307
  %7 = inttoptr i32 %6 to i8*, !insn.addr !308
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !309
  %9 = call i32 @call_by_value_ptr(), !insn.addr !310
  %10 = add i32 %1, 2231, !insn.addr !311
  %11 = inttoptr i32 %10 to i8*, !insn.addr !312
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !313
  %13 = add i32 %1, 2248, !insn.addr !314
  %14 = inttoptr i32 %13 to i8*, !insn.addr !315
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !316
  %16 = add i32 %1, 2265, !insn.addr !317
  %17 = inttoptr i32 %16 to i8*, !insn.addr !318
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %17), !insn.addr !319
  %19 = call i32 @call_ptr_array(), !insn.addr !320
  %20 = add i32 %1, 2282, !insn.addr !321
  %21 = inttoptr i32 %20 to i8*, !insn.addr !322
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %21), !insn.addr !323
  %23 = call i32 @call_varargs_param(), !insn.addr !324
  %24 = add i32 %1, 2299, !insn.addr !325
  %25 = inttoptr i32 %24 to i8*, !insn.addr !326
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %25), !insn.addr !327
  %27 = call i32 @call_func_ptr_param(), !insn.addr !328
  %28 = add i32 %1, 2316, !insn.addr !329
  %29 = inttoptr i32 %28 to i8*, !insn.addr !330
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !331
  %31 = call i32 @call_double_ptr(), !insn.addr !332
  %32 = add i32 %1, 2333, !insn.addr !333
  %33 = inttoptr i32 %32 to i8*, !insn.addr !334
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !335
  %35 = call i32 @call_complex_cast(), !insn.addr !336
  %36 = add i32 %1, 2350, !insn.addr !337
  %37 = inttoptr i32 %36 to i8*, !insn.addr !338
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !339
  %39 = call i32 @call_struct_byval(), !insn.addr !340
  %40 = add i32 %1, 2367, !insn.addr !341
  %41 = inttoptr i32 %40 to i8*, !insn.addr !342
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !343
  %43 = add i32 %1, 2384, !insn.addr !344
  %44 = inttoptr i32 %43 to i8*, !insn.addr !345
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %44), !insn.addr !346
  ret i32 %45, !insn.addr !347

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @ret_basic_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a52:
  %0 = mul i32 %arg1, 2, !insn.addr !348
  ret i32 %0, !insn.addr !349
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1a5d:
  ret i32 42, !insn.addr !350
}

define i32 @ret_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a67:
  %0 = add i32 %arg1, 4, !insn.addr !351
  ret i32 %0, !insn.addr !352
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_1a73:
  ret i32 20, !insn.addr !353
}

define i32 @ret_small_struct(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1a7d:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !354
  store i32 %arg2, i32* %0, align 4, !insn.addr !354
  %1 = add i32 %arg1, 4, !insn.addr !355
  %2 = inttoptr i32 %1 to i32*, !insn.addr !355
  store i32 %arg3, i32* %2, align 4, !insn.addr !355
  ret i32 %arg1, !insn.addr !356

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1a95:
  ret i32 7, !insn.addr !357
}

define i32 @ret_large_struct(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a9f:
  %eax.0.reg2mem = alloca i32, !insn.addr !358
  %stack_var_-92 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-92 to i32, !insn.addr !359
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !360
  %2 = mul i32 %arg2, 4, !insn.addr !361
  %3 = sub i32 12, %2, !insn.addr !362
  %4 = add i32 %3, %0, !insn.addr !362
  %5 = add nsw i32 %arg2, 15
  store i32 %arg2, i32* %eax.0.reg2mem, !insn.addr !362
  br label %dec_label_pc_1ac6, !insn.addr !362

dec_label_pc_1ac6:                                ; preds = %dec_label_pc_1ac6, %dec_label_pc_1a9f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = mul i32 %eax.0.reload, 4, !insn.addr !363
  %7 = add i32 %4, %6, !insn.addr !363
  %8 = inttoptr i32 %7 to i32*, !insn.addr !363
  store i32 %eax.0.reload, i32* %8, align 4, !insn.addr !363
  %9 = add i32 %eax.0.reload, 1, !insn.addr !364
  %10 = icmp eq i32 %eax.0.reload, %5, !insn.addr !365
  %11 = icmp eq i1 %10, false, !insn.addr !366
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !366
  br i1 %11, label %dec_label_pc_1ac6, label %dec_label_pc_1ad0, !insn.addr !366

dec_label_pc_1ad0:                                ; preds = %dec_label_pc_1ac6
  %12 = ptrtoint i32* %arg1 to i32
  %13 = add i32 %12, 4, !insn.addr !367
  %14 = inttoptr i32 %13 to i32*, !insn.addr !367
  %15 = add i32 %12, 8, !insn.addr !368
  %16 = inttoptr i32 %15 to i32*, !insn.addr !368
  %17 = add i32 %12, 12, !insn.addr !369
  %18 = inttoptr i32 %17 to i32*, !insn.addr !369
  %19 = add i32 %12, 16, !insn.addr !370
  %20 = inttoptr i32 %19 to i32*, !insn.addr !370
  %21 = add i32 %12, 20, !insn.addr !371
  %22 = inttoptr i32 %21 to i32*, !insn.addr !371
  %23 = add i32 %12, 24, !insn.addr !372
  %24 = inttoptr i32 %23 to i32*, !insn.addr !372
  %25 = add i32 %12, 28, !insn.addr !373
  %26 = inttoptr i32 %25 to i32*, !insn.addr !373
  %27 = add i32 %12, 32, !insn.addr !374
  %28 = inttoptr i32 %27 to i32*, !insn.addr !374
  %29 = add i32 %12, 36, !insn.addr !375
  %30 = inttoptr i32 %29 to i32*, !insn.addr !375
  %31 = add i32 %12, 40, !insn.addr !376
  %32 = inttoptr i32 %31 to i32*, !insn.addr !376
  %33 = add i32 %12, 44, !insn.addr !377
  %34 = inttoptr i32 %33 to i32*, !insn.addr !377
  %35 = add i32 %12, 48, !insn.addr !378
  %36 = inttoptr i32 %35 to i32*, !insn.addr !378
  %37 = add i32 %12, 52, !insn.addr !379
  %38 = inttoptr i32 %37 to i32*, !insn.addr !379
  %39 = add i32 %12, 56, !insn.addr !380
  %40 = inttoptr i32 %39 to i32*, !insn.addr !380
  %41 = add i32 %12, 60, !insn.addr !381
  %42 = inttoptr i32 %41 to i32*, !insn.addr !381
  %43 = call i32 @__readgsdword(i32 20), !insn.addr !382
  %44 = icmp eq i32 %1, %43, !insn.addr !382
  %45 = icmp eq i1 %44, false, !insn.addr !383
  br i1 %45, label %dec_label_pc_1b55, label %dec_label_pc_1b4c, !insn.addr !383

dec_label_pc_1b4c:                                ; preds = %dec_label_pc_1ad0
  ret i32 %12, !insn.addr !384

dec_label_pc_1b55:                                ; preds = %dec_label_pc_1ad0
  %46 = call i32 @__stack_chk_fail_local(), !insn.addr !385
  ret i32 %46, !insn.addr !385

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 32, { 1, 0 }
  uselistorder i32 16, { 1, 0 }
  uselistorder i32 8, { 1, 2, 0, 3 }
  uselistorder i32 15, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 12, { 1, 0, 2 }
  uselistorder i32 4, { 8, 0, 1, 9, 10, 4, 2, 11, 7, 12, 13, 3, 5, 6, 14, 15 }
  uselistorder i32 %arg2, { 0, 2, 1 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1b5a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !386
  %5 = call i32 @ret_large_struct(i32* nonnull %stack_var_-80, i32 100), !insn.addr !387
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !388
  %7 = icmp eq i32 %1, %6, !insn.addr !388
  %8 = icmp eq i1 %7, false, !insn.addr !389
  br i1 %8, label %dec_label_pc_1b98, label %dec_label_pc_1b94, !insn.addr !389

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b5a
  %9 = add i32 %3, %2, !insn.addr !390
  ret i32 %9, !insn.addr !391

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b5a
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !392
  ret i32 %10, !insn.addr !392

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 100, { 1, 0 }
}

define i32 @ret_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b9d:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !393
  %1 = icmp eq i32 %arg1, 0, !insn.addr !394
  %.v = select i1 %1, i32 -2362, i32 -2350
  %2 = add i32 %0, %.v, !insn.addr !395
  ret i32 %2, !insn.addr !396
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = call i32 @func_b(i32 5), !insn.addr !397
  ret i32 %0, !insn.addr !398
}

define i32 @ret_opaque_handle(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bcf:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !399
  %1 = icmp eq i32 %arg1, 0, !insn.addr !400
  %2 = icmp eq i1 %1, false, !insn.addr !401
  %.v = select i1 %2, i32 13360, i32 13368
  %3 = add i32 %0, %.v, !insn.addr !401
  ret i32 %3, !insn.addr !402
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1bf2:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !403
  %1 = add i32 %0, 13333, !insn.addr !404
  %2 = inttoptr i32 %1 to i32*, !insn.addr !404
  %3 = load i32, i32* %2, align 4, !insn.addr !404
  ret i32 %3, !insn.addr !405

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 4, 3, 2, 1, 0 }
}

define i32 @ret_complex_expr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1c07:
  %0 = mul i32 %arg3, 2, !insn.addr !406
  %1 = add i32 %arg3, 10, !insn.addr !407
  %2 = sub i32 %arg1, %arg2, !insn.addr !408
  %3 = xor i32 %arg2, %arg1, !insn.addr !408
  %4 = xor i32 %2, %arg1, !insn.addr !408
  %5 = and i32 %4, %3, !insn.addr !408
  %6 = icmp slt i32 %5, 0, !insn.addr !408
  %7 = icmp eq i32 %2, 0, !insn.addr !408
  %8 = icmp slt i32 %2, 0, !insn.addr !408
  %9 = icmp eq i1 %8, %6, !insn.addr !409
  %10 = icmp eq i1 %7, false, !insn.addr !409
  %11 = icmp eq i1 %9, %10, !insn.addr !409
  %12 = select i1 %11, i32 %0, i32 %1, !insn.addr !409
  ret i32 %12, !insn.addr !410

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1c21:
  ret i32 40, !insn.addr !411
}

define i32 @ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c2b:
  %eax.0.reg2mem = alloca i32, !insn.addr !412
  store i32 20, i32* %eax.0.reg2mem
  switch i32 %arg1, label %dec_label_pc_1c47 [
    i32 1, label %dec_label_pc_1c52
    i32 2, label %dec_label_pc_1c52.fold.split
  ]

dec_label_pc_1c47:                                ; preds = %dec_label_pc_1c2b
  %0 = icmp eq i32 %arg1, 0, !insn.addr !413
  %1 = select i1 %0, i32 10, i32 -1, !insn.addr !414
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !414
  br label %dec_label_pc_1c52, !insn.addr !414

dec_label_pc_1c52.fold.split:                     ; preds = %dec_label_pc_1c2b
  store i32 30, i32* %eax.0.reg2mem
  br label %dec_label_pc_1c52

dec_label_pc_1c52:                                ; preds = %dec_label_pc_1c2b, %dec_label_pc_1c52.fold.split, %dec_label_pc_1c47
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !415

; uselistorder directives
  uselistorder i32 10, { 1, 3, 2, 4, 0, 5 }
  uselistorder i32 2, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32 20, { 0, 3, 4, 5, 15, 6, 1, 7, 8, 9, 2, 10, 11, 12, 13, 14 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1c52, { 1, 2, 0 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1c53:
  ret i32 60, !insn.addr !416
}

define i32 @ret_void(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c5d:
  %0 = mul i32 %arg1, 3, !insn.addr !417
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !418
  store i32 %0, i32* %1, align 4, !insn.addr !418
  ret i32 %arg2, !insn.addr !419

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_1c6f:
  ret i32 21, !insn.addr !420
}

define i32 @test_return_values() local_unnamed_addr {
dec_label_pc_1c79:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !421
  %3 = add i32 %1, 1574, !insn.addr !422
  %4 = inttoptr i32 %3 to i8*, !insn.addr !423
  %5 = call i32 @puts(i8* %4), !insn.addr !424
  %6 = add i32 %1, 1604, !insn.addr !425
  %7 = inttoptr i32 %6 to i8*, !insn.addr !426
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !427
  %9 = call i32 @call_ret_pointer(), !insn.addr !428
  %10 = add i32 %1, 1632, !insn.addr !429
  %11 = inttoptr i32 %10 to i8*, !insn.addr !430
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !431
  %13 = call i32 @call_ret_small_struct(), !insn.addr !432
  %14 = add i32 %1, 1660, !insn.addr !433
  %15 = inttoptr i32 %14 to i8*, !insn.addr !434
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %15), !insn.addr !435
  %17 = call i32 @call_ret_large_struct(), !insn.addr !436
  %18 = add i32 %1, 1687, !insn.addr !437
  %19 = inttoptr i32 %18 to i8*, !insn.addr !438
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %19), !insn.addr !439
  %21 = call i32 @call_ret_func_ptr(), !insn.addr !440
  %22 = add i32 %1, 1716, !insn.addr !441
  %23 = inttoptr i32 %22 to i8*, !insn.addr !442
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %23), !insn.addr !443
  %25 = add i32 %1, 1744, !insn.addr !444
  %26 = inttoptr i32 %25 to i8*, !insn.addr !445
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !446
  %28 = add i32 %1, 1773, !insn.addr !447
  %29 = inttoptr i32 %28 to i8*, !insn.addr !448
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !449
  %31 = add i32 %1, 1801, !insn.addr !450
  %32 = inttoptr i32 %31 to i8*, !insn.addr !451
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !452
  %34 = add i32 %1, 1829, !insn.addr !453
  %35 = inttoptr i32 %34 to i8*, !insn.addr !454
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %35), !insn.addr !455
  ret i32 %36, !insn.addr !456

; uselistorder directives
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1d5c:
  %0 = call i32 @test_calling_conventions(), !insn.addr !457
  %1 = call i32 @test_parameter_passing(), !insn.addr !458
  %2 = call i32 @test_return_values(), !insn.addr !459
  ret i32 0, !insn.addr !460

; uselistorder directives
  uselistorder i32 0, { 11, 13, 14, 15, 16, 17, 18, 0, 19, 20, 21, 22, 2, 3, 1, 5, 4, 23, 24, 6, 25, 7, 26, 9, 10, 8, 27, 12 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d7c:
  ret i32 %arg1, !insn.addr !461
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !462
  call void @__stack_chk_fail(), !insn.addr !463
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !464
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1da0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !465
  %ebx.0.reg2mem = alloca i32, !insn.addr !465
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !466
  %3 = add i32 %1, 12603, !insn.addr !467
  %4 = inttoptr i32 %3 to i32*, !insn.addr !467
  %5 = load i32, i32* %4, align 4, !insn.addr !467
  %6 = icmp eq i32 %5, -1, !insn.addr !468
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !469
  store i32 -1, i32* %merge.reg2mem, !insn.addr !469
  br i1 %6, label %dec_label_pc_1ddd, label %dec_label_pc_1dd0, !insn.addr !469

dec_label_pc_1dd0:                                ; preds = %dec_label_pc_1da0, %dec_label_pc_1dd0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !470
  %8 = inttoptr i32 %7 to i32*, !insn.addr !470
  %9 = load i32, i32* %8, align 4, !insn.addr !470
  %10 = icmp eq i32 %9, -1, !insn.addr !471
  %11 = icmp eq i1 %10, false, !insn.addr !472
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !472
  store i32 %9, i32* %merge.reg2mem, !insn.addr !472
  br i1 %11, label %dec_label_pc_1dd0, label %dec_label_pc_1ddd, !insn.addr !472

dec_label_pc_1ddd:                                ; preds = %dec_label_pc_1dd0, %dec_label_pc_1da0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !473

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }
  uselistorder i32 -4, { 1, 0 }
  uselistorder i32 -1, { 4, 0, 5, 6, 1, 2, 7, 3 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1dd0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1dec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !474
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !475
  ret i32 %3, !insn.addr !476

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 6, 3, 5, 4, 2, 1, 0 }
  uselistorder i32 1, { 19, 22, 21, 18, 17, 47, 48, 49, 50, 51, 52, 53, 54, 55, 16, 46, 23, 87, 15, 101, 88, 24, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 14, 102, 89, 25, 13, 12, 67, 91, 90, 44, 11, 103, 68, 92, 29, 28, 27, 26, 93, 69, 32, 31, 30, 104, 45, 70, 71, 105, 35, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 96, 95, 94, 36, 34, 33, 10, 98, 97, 38, 37, 20, 9, 106, 86, 99, 42, 41, 40, 39, 8, 7, 6, 43, 5, 4, 3, 2, 100, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4244}
!5 = !{i64 4260}
!6 = !{i64 4276}
!7 = !{i64 4292}
!8 = !{i64 4308}
!9 = !{i64 4324}
!10 = !{i64 4351}
!11 = !{i64 4368}
!12 = !{i64 4374}
!13 = !{i64 4379}
!14 = !{i64 4383}
!15 = !{i64 4387}
!16 = !{i64 4400}
!17 = !{i64 4417}
!18 = !{i64 4456}
!19 = !{i64 4464}
!20 = !{i64 4534}
!21 = !{i64 4544}
!22 = !{i64 4552}
!23 = !{i64 4568}
!24 = !{i64 4575}
!25 = !{i64 4577}
!26 = !{i64 4583}
!27 = !{i64 4585}
!28 = !{i64 4590}
!29 = !{i64 4598}
!30 = !{i64 4603}
!31 = !{i64 4662}
!32 = !{i64 4667}
!33 = !{i64 4681}
!34 = !{i64 4692}
!35 = !{i64 4700}
!36 = !{i64 4704}
!37 = !{i64 4713}
!38 = !{i64 4715}
!39 = !{i64 4724}
!40 = !{i64 4727}
!41 = !{i64 4736}
!42 = !{i64 4738}
!43 = !{i64 4747}
!44 = !{i64 4751}
!45 = !{i64 4761}
!46 = !{i64 4770}
!47 = !{i64 4775}
!48 = !{i64 4787}
!49 = !{i64 4792}
!50 = !{i64 4795}
!51 = !{i64 4799}
!52 = !{i64 4811}
!53 = !{i64 4821}
!54 = !{i64 4830}
!55 = !{i64 4834}
!56 = !{i64 4838}
!57 = !{i64 4842}
!58 = !{i64 4846}
!59 = !{i64 4856}
!60 = !{i64 4865}
!61 = !{i64 4869}
!62 = !{i64 4873}
!63 = !{i64 4877}
!64 = !{i64 4887}
!65 = !{i64 4896}
!66 = !{i64 4900}
!67 = !{i64 4904}
!68 = !{i64 4908}
!69 = !{i64 4912}
!70 = !{i64 4916}
!71 = !{i64 4926}
!72 = !{i64 4935}
!73 = !{i64 4939}
!74 = !{i64 4943}
!75 = !{i64 4947}
!76 = !{i64 4951}
!77 = !{i64 4961}
!78 = !{i64 4970}
!79 = !{i64 4974}
!80 = !{i64 4978}
!81 = !{i64 4982}
!82 = !{i64 4992}
!83 = !{i64 5002}
!84 = !{i64 5003}
!85 = !{i64 5015}
!86 = !{i64 5017}
!87 = !{i64 5026}
!88 = !{i64 5033}
!89 = !{i64 5036}
!90 = !{i64 5038}
!91 = !{i64 5041}
!92 = !{i64 5043}
!93 = !{i64 5049}
!94 = !{i64 5066}
!95 = !{i64 5075}
!96 = !{i64 5079}
!97 = !{i64 5083}
!98 = !{i64 5087}
!99 = !{i64 5091}
!100 = !{i64 5095}
!101 = !{i64 5099}
!102 = !{i64 5103}
!103 = !{i64 5114}
!104 = !{i64 5149}
!105 = !{i64 5151}
!106 = !{i64 5157}
!107 = !{i64 5162}
!108 = !{i64 5187}
!109 = !{i64 5190}
!110 = !{i64 5213}
!111 = !{i64 5229}
!112 = !{i64 5230}
!113 = !{i64 5235}
!114 = !{i64 5239}
!115 = !{i64 5251}
!116 = !{i64 5256}
!117 = !{i64 5261}
!118 = !{i64 5264}
!119 = !{i64 5266}
!120 = !{i64 5271}
!121 = !{i64 5280}
!122 = !{i64 5282}
!123 = !{i64 5284}
!124 = !{i64 5286}
!125 = !{i64 5290}
!126 = !{i64 5296}
!127 = !{i64 5297}
!128 = !{i64 5310}
!129 = !{i64 5321}
!130 = !{i64 5327}
!131 = !{i64 5336}
!132 = !{i64 5342}
!133 = !{i64 5343}
!134 = !{i64 5353}
!135 = !{i64 5359}
!136 = !{i64 5362}
!137 = !{i64 5372}
!138 = !{i64 5378}
!139 = !{i64 5381}
!140 = !{i64 5391}
!141 = !{i64 5397}
!142 = !{i64 5400}
!143 = !{i64 5410}
!144 = !{i64 5416}
!145 = !{i64 5419}
!146 = !{i64 5429}
!147 = !{i64 5435}
!148 = !{i64 5438}
!149 = !{i64 5448}
!150 = !{i64 5454}
!151 = !{i64 5457}
!152 = !{i64 5467}
!153 = !{i64 5473}
!154 = !{i64 5476}
!155 = !{i64 5486}
!156 = !{i64 5492}
!157 = !{i64 5495}
!158 = !{i64 5505}
!159 = !{i64 5511}
!160 = !{i64 5514}
!161 = !{i64 5524}
!162 = !{i64 5530}
!163 = !{i64 5533}
!164 = !{i64 5553}
!165 = !{i64 5562}
!166 = !{i64 5568}
!167 = !{i64 5571}
!168 = !{i64 5581}
!169 = !{i64 5587}
!170 = !{i64 5590}
!171 = !{i64 5600}
!172 = !{i64 5606}
!173 = !{i64 5609}
!174 = !{i64 5619}
!175 = !{i64 5625}
!176 = !{i64 5628}
!177 = !{i64 5646}
!178 = !{i64 5650}
!179 = !{i64 5657}
!180 = !{i64 5661}
!181 = !{i64 5665}
!182 = !{i64 5668}
!183 = !{i64 5673}
!184 = !{i64 5678}
!185 = !{i64 5680}
!186 = !{i64 5698}
!187 = !{i64 5700}
!188 = !{i64 5707}
!189 = !{i64 5719}
!190 = !{i64 5729}
!191 = !{i64 5732}
!192 = !{i64 5734}
!193 = !{i64 5740}
!194 = !{i64 5746}
!195 = !{i64 5749}
!196 = !{i64 5759}
!197 = !{i64 5765}
!198 = !{i64 5768}
!199 = !{i64 5776}
!200 = !{i64 5783}
!201 = !{i64 5790}
!202 = !{i64 5801}
!203 = !{i64 5802}
!204 = !{i64 5815}
!205 = !{i64 5817}
!206 = !{i64 5827}
!207 = !{i64 5836}
!208 = !{i64 5843}
!209 = !{i64 5853}
!210 = !{i64 5863}
!211 = !{i64 5873}
!212 = !{i64 5882}
!213 = !{i64 5885}
!214 = !{i64 5889}
!215 = !{i64 5891}
!216 = !{i64 5901}
!217 = !{i64 5902}
!218 = !{i64 5917}
!219 = !{i64 5921}
!220 = !{i64 5924}
!221 = !{i64 5929}
!222 = !{i64 5931}
!223 = !{i64 5934}
!224 = !{i64 5936}
!225 = !{i64 5939}
!226 = !{i64 5941}
!227 = !{i64 5946}
!228 = !{i64 5961}
!229 = !{i64 5971}
!230 = !{i64 5984}
!231 = !{i64 5990}
!232 = !{i64 6020}
!233 = !{i64 6032}
!234 = !{i64 6039}
!235 = !{i64 6044}
!236 = !{i64 6045}
!237 = !{i64 6050}
!238 = !{i64 6062}
!239 = !{i64 6064}
!240 = !{i64 6073}
!241 = !{i64 6080}
!242 = !{i64 6083}
!243 = !{i64 6085}
!244 = !{i64 6088}
!245 = !{i64 6090}
!246 = !{i64 6096}
!247 = !{i64 6118}
!248 = !{i64 6126}
!249 = !{i64 6142}
!250 = !{i64 6148}
!251 = !{i64 6156}
!252 = !{i64 6168}
!253 = !{i64 6175}
!254 = !{i64 6183}
!255 = !{i64 6192}
!256 = !{i64 6194}
!257 = !{i64 6196}
!258 = !{i64 6198}
!259 = !{i64 6200}
!260 = !{i64 6206}
!261 = !{i64 6208}
!262 = !{i64 6219}
!263 = !{i64 6225}
!264 = !{i64 6239}
!265 = !{i64 6251}
!266 = !{i64 6263}
!267 = !{i64 6274}
!268 = !{i64 6282}
!269 = !{i64 6293}
!270 = !{i64 6301}
!271 = !{i64 6308}
!272 = !{i64 6287}
!273 = !{i64 6313}
!274 = !{i64 6314}
!275 = !{i64 6331}
!276 = !{i64 6333}
!277 = !{i64 6335}
!278 = !{i64 6338}
!279 = !{i64 6340}
!280 = !{i64 6343}
!281 = !{i64 6345}
!282 = !{i64 6346}
!283 = !{i64 6348}
!284 = !{i64 6354}
!285 = !{i64 6364}
!286 = !{i64 6373}
!287 = !{i64 6377}
!288 = !{i64 6378}
!289 = !{i64 6382}
!290 = !{i64 6385}
!291 = !{i64 6397}
!292 = !{i64 6395}
!293 = !{i64 6401}
!294 = !{i64 6407}
!295 = !{i64 6421}
!296 = !{i64 6428}
!297 = !{i64 6413}
!298 = !{i64 6433}
!299 = !{i64 6434}
!300 = !{i64 6447}
!301 = !{i64 6451}
!302 = !{i64 6461}
!303 = !{i64 6470}
!304 = !{i64 6481}
!305 = !{i64 6487}
!306 = !{i64 6488}
!307 = !{i64 6498}
!308 = !{i64 6504}
!309 = !{i64 6507}
!310 = !{i64 6512}
!311 = !{i64 6521}
!312 = !{i64 6527}
!313 = !{i64 6530}
!314 = !{i64 6540}
!315 = !{i64 6546}
!316 = !{i64 6549}
!317 = !{i64 6562}
!318 = !{i64 6568}
!319 = !{i64 6571}
!320 = !{i64 6576}
!321 = !{i64 6585}
!322 = !{i64 6591}
!323 = !{i64 6594}
!324 = !{i64 6599}
!325 = !{i64 6608}
!326 = !{i64 6614}
!327 = !{i64 6617}
!328 = !{i64 6622}
!329 = !{i64 6631}
!330 = !{i64 6637}
!331 = !{i64 6640}
!332 = !{i64 6645}
!333 = !{i64 6654}
!334 = !{i64 6660}
!335 = !{i64 6663}
!336 = !{i64 6668}
!337 = !{i64 6677}
!338 = !{i64 6683}
!339 = !{i64 6686}
!340 = !{i64 6691}
!341 = !{i64 6700}
!342 = !{i64 6706}
!343 = !{i64 6709}
!344 = !{i64 6719}
!345 = !{i64 6725}
!346 = !{i64 6728}
!347 = !{i64 6737}
!348 = !{i64 6746}
!349 = !{i64 6748}
!350 = !{i64 6758}
!351 = !{i64 6767}
!352 = !{i64 6770}
!353 = !{i64 6780}
!354 = !{i64 6793}
!355 = !{i64 6799}
!356 = !{i64 6802}
!357 = !{i64 6814}
!358 = !{i64 6815}
!359 = !{i64 6820}
!360 = !{i64 6831}
!361 = !{i64 6848}
!362 = !{i64 6850}
!363 = !{i64 6854}
!364 = !{i64 6857}
!365 = !{i64 6860}
!366 = !{i64 6862}
!367 = !{i64 6874}
!368 = !{i64 6881}
!369 = !{i64 6888}
!370 = !{i64 6895}
!371 = !{i64 6902}
!372 = !{i64 6909}
!373 = !{i64 6916}
!374 = !{i64 6923}
!375 = !{i64 6930}
!376 = !{i64 6937}
!377 = !{i64 6944}
!378 = !{i64 6951}
!379 = !{i64 6958}
!380 = !{i64 6965}
!381 = !{i64 6972}
!382 = !{i64 6979}
!383 = !{i64 6986}
!384 = !{i64 6994}
!385 = !{i64 6997}
!386 = !{i64 7009}
!387 = !{i64 7031}
!388 = !{i64 7051}
!389 = !{i64 7058}
!390 = !{i64 7040}
!391 = !{i64 7063}
!392 = !{i64 7064}
!393 = !{i64 7073}
!394 = !{i64 7095}
!395 = !{i64 7100}
!396 = !{i64 7103}
!397 = !{i64 7110}
!398 = !{i64 7118}
!399 = !{i64 7123}
!400 = !{i64 7145}
!401 = !{i64 7150}
!402 = !{i64 7153}
!403 = !{i64 7158}
!404 = !{i64 7168}
!405 = !{i64 7174}
!406 = !{i64 7183}
!407 = !{i64 7186}
!408 = !{i64 7193}
!409 = !{i64 7197}
!410 = !{i64 7200}
!411 = !{i64 7210}
!412 = !{i64 7211}
!413 = !{i64 7239}
!414 = !{i64 7247}
!415 = !{i64 7250}
!416 = !{i64 7260}
!417 = !{i64 7269}
!418 = !{i64 7276}
!419 = !{i64 7278}
!420 = !{i64 7288}
!421 = !{i64 7297}
!422 = !{i64 7308}
!423 = !{i64 7314}
!424 = !{i64 7315}
!425 = !{i64 7325}
!426 = !{i64 7331}
!427 = !{i64 7334}
!428 = !{i64 7339}
!429 = !{i64 7348}
!430 = !{i64 7354}
!431 = !{i64 7357}
!432 = !{i64 7362}
!433 = !{i64 7371}
!434 = !{i64 7377}
!435 = !{i64 7380}
!436 = !{i64 7385}
!437 = !{i64 7394}
!438 = !{i64 7400}
!439 = !{i64 7403}
!440 = !{i64 7408}
!441 = !{i64 7417}
!442 = !{i64 7423}
!443 = !{i64 7426}
!444 = !{i64 7440}
!445 = !{i64 7446}
!446 = !{i64 7449}
!447 = !{i64 7459}
!448 = !{i64 7465}
!449 = !{i64 7468}
!450 = !{i64 7478}
!451 = !{i64 7484}
!452 = !{i64 7487}
!453 = !{i64 7497}
!454 = !{i64 7503}
!455 = !{i64 7506}
!456 = !{i64 7515}
!457 = !{i64 7526}
!458 = !{i64 7531}
!459 = !{i64 7536}
!460 = !{i64 7547}
!461 = !{i64 7551}
!462 = !{i64 7557}
!463 = !{i64 7571}
!464 = !{i64 7582}
!465 = !{i64 7584}
!466 = !{i64 7588}
!467 = !{i64 7599}
!468 = !{i64 7605}
!469 = !{i64 7608}
!470 = !{i64 7634}
!471 = !{i64 7640}
!472 = !{i64 7643}
!473 = !{i64 7649}
!474 = !{i64 7668}
!475 = !{i64 7679}
!476 = !{i64 7688}
