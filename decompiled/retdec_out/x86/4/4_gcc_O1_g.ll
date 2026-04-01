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

define i32 @callback_func(i32 %x) local_unnamed_addr {
dec_label_pc_1261:
  %0 = mul i32 %x, 2, !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_126c:
  %0 = add i32 %x, 10, !insn.addr !39
  ret i32 %0, !insn.addr !40
}

define i32 @func_b(i32 %x) local_unnamed_addr {
dec_label_pc_1278:
  %0 = mul i32 %x, 2, !insn.addr !41
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

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_138b:
  %ecx.1.reg2mem = alloca i32, !insn.addr !84
  %edx.0.reg2mem = alloca i32, !insn.addr !84
  %ecx.0.reg2mem = alloca i32, !insn.addr !84
  %eax.0.reg2mem = alloca i32, !insn.addr !84
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %count, 1
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
  %7 = icmp eq i32 %6, %count, !insn.addr !91
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

define void @test_calling_conventions() local_unnamed_addr {
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
  %37 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !164
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
  %80 = icmp eq i32 %78, %79, !insn.addr !200
  %81 = icmp eq i1 %80, false, !insn.addr !201
  br i1 %81, label %dec_label_pc_16aa, label %dec_label_pc_16a0, !insn.addr !201

dec_label_pc_16a0:                                ; preds = %dec_label_pc_1668
  ret void, !insn.addr !202

dec_label_pc_16aa:                                ; preds = %dec_label_pc_1668
  %82 = call i32 @__stack_chk_fail_local(), !insn.addr !203
  ret void, !insn.addr !203

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

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_170e:
  %edx.1.reg2mem = alloca i32, !insn.addr !217
  %edx.0.reg2mem = alloca i32, !insn.addr !217
  %eax.0.reg2mem = alloca i32, !insn.addr !217
  %0 = icmp slt i32 %n, 1
  store i32 0, i32* %edx.1.reg2mem, !insn.addr !218
  br i1 %0, label %dec_label_pc_1737, label %dec_label_pc_171f, !insn.addr !218

dec_label_pc_171f:                                ; preds = %dec_label_pc_170e
  %1 = ptrtoint i8** %arr to i32
  %2 = mul i32 %n, 4, !insn.addr !219
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
  %strs_-32 = alloca [3 x i8*], align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !228
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !229
  %2 = add i32 %0, 2711, !insn.addr !230
  store i32 %2, i32* %stack_var_-28, align 4, !insn.addr !231
  store [3 x i8*] [i8* inttoptr (i32 3 to i8*), i8* undef, i8* undef], [3 x i8*]* %strs_-32, align 4, !insn.addr !232
  %3 = bitcast i32* %stack_var_-28 to i8**
  %4 = bitcast [3 x i8*]* %strs_-32 to i32*, !insn.addr !233
  %5 = load i32, i32* %4, align 4, !insn.addr !233
  %6 = call i32 @param_ptr_array(i8** nonnull %3, i32 %5), !insn.addr !233
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !234
  %8 = icmp eq i32 %1, %7, !insn.addr !234
  %9 = icmp eq i1 %8, false, !insn.addr !235
  br i1 %9, label %dec_label_pc_179d, label %dec_label_pc_1799, !insn.addr !235

dec_label_pc_1799:                                ; preds = %dec_label_pc_1742
  ret i32 %6, !insn.addr !236

dec_label_pc_179d:                                ; preds = %dec_label_pc_1742
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !237
  ret i32 %10, !insn.addr !237
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_17a2:
  %ecx.1.reg2mem = alloca i32, !insn.addr !238
  %edx.0.reg2mem = alloca i32, !insn.addr !238
  %ecx.0.reg2mem = alloca i32, !insn.addr !238
  %eax.0.reg2mem = alloca i32, !insn.addr !238
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %count, 1
  store i32 0, i32* %ecx.1.reg2mem, !insn.addr !239
  br i1 %0, label %dec_label_pc_17cc, label %dec_label_pc_17b0, !insn.addr !239

dec_label_pc_17b0:                                ; preds = %dec_label_pc_17a2
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !240
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !241
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !241
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_17be, !insn.addr !241

dec_label_pc_17be:                                ; preds = %dec_label_pc_17be, %dec_label_pc_17b0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = add i32 %eax.0.reload, 4, !insn.addr !242
  %3 = inttoptr i32 %eax.0.reload to i32*, !insn.addr !243
  %4 = load i32, i32* %3, align 4, !insn.addr !243
  %5 = add i32 %4, %ecx.0.reload, !insn.addr !243
  %6 = add i32 %edx.0.reload, 1, !insn.addr !244
  %7 = icmp eq i32 %6, %count, !insn.addr !245
  %8 = icmp eq i1 %7, false, !insn.addr !246
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !246
  store i32 %5, i32* %ecx.0.reg2mem, !insn.addr !246
  store i32 %6, i32* %edx.0.reg2mem, !insn.addr !246
  store i32 %5, i32* %ecx.1.reg2mem, !insn.addr !246
  br i1 %8, label %dec_label_pc_17be, label %dec_label_pc_17cc, !insn.addr !246

dec_label_pc_17cc:                                ; preds = %dec_label_pc_17be, %dec_label_pc_17a2
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  ret i32 %ecx.1.reload, !insn.addr !247

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_17d8:
  %0 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !248
  ret i32 %0, !insn.addr !249
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_17ef:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10, !insn.addr !250
  ret i32 %2, !insn.addr !251
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1805:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !252
  %1 = add i32 %0, -1456, !insn.addr !253
  %2 = inttoptr i32 %1 to i32 (i32)*, !insn.addr !254
  %3 = call i32 @param_func_ptr(i32 (i32)* %2, i32 5), !insn.addr !255
  ret i32 %3, !insn.addr !256
}

define i32 @param_double_ptr(i32** %pp, i32 %new_val) local_unnamed_addr {
dec_label_pc_1828:
  %0 = icmp eq i32** %pp, null, !insn.addr !257
  br i1 %0, label %dec_label_pc_184c, label %dec_label_pc_1834, !insn.addr !258

dec_label_pc_1834:                                ; preds = %dec_label_pc_1828
  %1 = load i32*, i32** %pp, align 4
  %2 = icmp eq i32* %1, null, !insn.addr !259
  br i1 %2, label %dec_label_pc_184c, label %dec_label_pc_183a, !insn.addr !260

dec_label_pc_183a:                                ; preds = %dec_label_pc_1834
  %3 = bitcast i32** %pp to i32*, !insn.addr !261
  store i32 %new_val, i32* %1, align 4, !insn.addr !262
  store i32 0, i32* %3, align 4, !insn.addr !263
  ret i32 1, !insn.addr !264

dec_label_pc_184c:                                ; preds = %dec_label_pc_1834, %dec_label_pc_1828
  ret i32 -1, !insn.addr !265

; uselistorder directives
  uselistorder i32* %1, { 1, 0 }
  uselistorder i32** %pp, { 1, 0, 2 }
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1858:
  %stack_var_-20 = alloca i32, align 4
  %ptr_-24 = alloca i32*, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !266
  store i32* inttoptr (i32 10 to i32*), i32** %ptr_-24, align 4, !insn.addr !267
  %1 = ptrtoint i32** %ptr_-24 to i32, !insn.addr !268
  store i32 %1, i32* %stack_var_-20, align 4, !insn.addr !268
  %2 = bitcast i32* %stack_var_-20 to i32**
  %3 = call i32 @param_double_ptr(i32** nonnull %2, i32 20), !insn.addr !269
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !270
  %5 = load i32*, i32** %ptr_-24, align 4, !insn.addr !271
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !272
  %7 = icmp eq i32 %0, %6, !insn.addr !272
  %8 = icmp eq i1 %7, false, !insn.addr !273
  br i1 %8, label %dec_label_pc_18aa, label %dec_label_pc_18a6, !insn.addr !273

dec_label_pc_18a6:                                ; preds = %dec_label_pc_1858
  %9 = icmp eq i32 %4, 0, !insn.addr !270
  %10 = zext i1 %9 to i32, !insn.addr !274
  %11 = ptrtoint i32* %5 to i32, !insn.addr !271
  %12 = add i32 %10, %11, !insn.addr !271
  ret i32 %12, !insn.addr !275

dec_label_pc_18aa:                                ; preds = %dec_label_pc_1858
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !276
  ret i32 %13, !insn.addr !276

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
}

define i32 @param_complex_cast(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18af:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !277
  br i1 %0, label %dec_label_pc_18ca, label %dec_label_pc_18bf, !insn.addr !278

dec_label_pc_18bf:                                ; preds = %dec_label_pc_18af
  %1 = icmp eq i32 %arg2, 1, !insn.addr !279
  %2 = icmp eq i1 %1, false, !insn.addr !280
  br i1 %2, label %dec_label_pc_18cd, label %dec_label_pc_18c4, !insn.addr !280

dec_label_pc_18c4:                                ; preds = %dec_label_pc_18bf
  %3 = add i32 %arg1, 4, !insn.addr !281
  %4 = inttoptr i32 %3 to i32*, !insn.addr !281
  %5 = load i32, i32* %4, align 4, !insn.addr !281
  %6 = inttoptr i32 %arg1 to i32*, !insn.addr !282
  %7 = load i32, i32* %6, align 4, !insn.addr !282
  %8 = add i32 %7, %5, !insn.addr !282
  ret i32 %8, !insn.addr !283

dec_label_pc_18ca:                                ; preds = %dec_label_pc_18af
  %9 = inttoptr i32 %arg1 to i32*, !insn.addr !284
  %10 = load i32, i32* %9, align 4, !insn.addr !284
  ret i32 %10, !insn.addr !285

dec_label_pc_18cd:                                ; preds = %dec_label_pc_18bf
  ret i32 -1, !insn.addr !286

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_18d3:
  ret i32 305419896, !insn.addr !287
}

define i32 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_18dd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !288
  ret i32 %2, !insn.addr !289
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_18ea:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !290
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-92 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-92 to i32, !insn.addr !291
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !292
  %5 = add i32 %3, 12, !insn.addr !293
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_18fd, !insn.addr !294

dec_label_pc_18fd:                                ; preds = %dec_label_pc_18fd, %dec_label_pc_18ea
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = mul i32 %eax.0.reload, 4, !insn.addr !293
  %7 = add i32 %5, %6, !insn.addr !293
  %8 = inttoptr i32 %7 to i32*, !insn.addr !293
  store i32 %eax.0.reload, i32* %8, align 4, !insn.addr !293
  %9 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !295
  %exitcond = icmp eq i32 %9, 16
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !296
  br i1 %exitcond, label %dec_label_pc_1909, label %dec_label_pc_18fd, !insn.addr !296

dec_label_pc_1909:                                ; preds = %dec_label_pc_18fd
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !297
  %11 = icmp eq i32 %4, %10, !insn.addr !297
  %12 = icmp eq i1 %11, false, !insn.addr !298
  br i1 %12, label %dec_label_pc_1922, label %dec_label_pc_191e, !insn.addr !298

dec_label_pc_191e:                                ; preds = %dec_label_pc_1909
  %13 = add i32 %2, %1, !insn.addr !299
  ret i32 %13, !insn.addr !300

dec_label_pc_1922:                                ; preds = %dec_label_pc_1909
  %14 = call i32 @__stack_chk_fail_local(), !insn.addr !301
  ret i32 %14, !insn.addr !301

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_order_dep(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1927:
  %0 = add i32 %arg2, %arg1, !insn.addr !302
  ret i32 %0, !insn.addr !303
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_1934:
  ret i32 4, !insn.addr !304
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_193e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !305
  %3 = add i32 %1, 2009, !insn.addr !306
  %4 = inttoptr i32 %3 to i8*, !insn.addr !307
  %5 = call i32 @puts(i8* %4), !insn.addr !308
  %6 = add i32 %1, 2214, !insn.addr !309
  %7 = inttoptr i32 %6 to i8*, !insn.addr !310
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !311
  %9 = call i32 @call_by_value_ptr(), !insn.addr !312
  %10 = add i32 %1, 2231, !insn.addr !313
  %11 = inttoptr i32 %10 to i8*, !insn.addr !314
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !315
  %13 = add i32 %1, 2248, !insn.addr !316
  %14 = inttoptr i32 %13 to i8*, !insn.addr !317
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !318
  %16 = add i32 %1, 2265, !insn.addr !319
  %17 = inttoptr i32 %16 to i8*, !insn.addr !320
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %17), !insn.addr !321
  %19 = call i32 @call_ptr_array(), !insn.addr !322
  %20 = add i32 %1, 2282, !insn.addr !323
  %21 = inttoptr i32 %20 to i8*, !insn.addr !324
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %21), !insn.addr !325
  %23 = call i32 @call_varargs_param(), !insn.addr !326
  %24 = add i32 %1, 2299, !insn.addr !327
  %25 = inttoptr i32 %24 to i8*, !insn.addr !328
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %25), !insn.addr !329
  %27 = call i32 @call_func_ptr_param(), !insn.addr !330
  %28 = add i32 %1, 2316, !insn.addr !331
  %29 = inttoptr i32 %28 to i8*, !insn.addr !332
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !333
  %31 = call i32 @call_double_ptr(), !insn.addr !334
  %32 = add i32 %1, 2333, !insn.addr !335
  %33 = inttoptr i32 %32 to i8*, !insn.addr !336
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !337
  %35 = call i32 @call_complex_cast(), !insn.addr !338
  %36 = add i32 %1, 2350, !insn.addr !339
  %37 = inttoptr i32 %36 to i8*, !insn.addr !340
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !341
  %39 = call i32 @call_struct_byval(), !insn.addr !342
  %40 = add i32 %1, 2367, !insn.addr !343
  %41 = inttoptr i32 %40 to i8*, !insn.addr !344
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !345
  %43 = add i32 %1, 2384, !insn.addr !346
  %44 = inttoptr i32 %43 to i8*, !insn.addr !347
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %44), !insn.addr !348
  ret void, !insn.addr !349

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @ret_basic_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a52:
  %0 = mul i32 %arg1, 2, !insn.addr !350
  ret i32 %0, !insn.addr !351
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1a5d:
  ret i32 42, !insn.addr !352
}

define i32 @ret_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a67:
  %0 = add i32 %arg1, 4, !insn.addr !353
  ret i32 %0, !insn.addr !354
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_1a73:
  ret i32 20, !insn.addr !355
}

define i32 @ret_small_struct(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1a7d:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !356
  store i32 %arg2, i32* %0, align 4, !insn.addr !356
  %1 = add i32 %arg1, 4, !insn.addr !357
  %2 = inttoptr i32 %1 to i32*, !insn.addr !357
  store i32 %arg3, i32* %2, align 4, !insn.addr !357
  ret i32 %arg1, !insn.addr !358

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1a95:
  ret i32 7, !insn.addr !359
}

define i32 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_1a9f:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !360
  %1 = load i32, i32* %0
  %stack_var_-92 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-92 to i32, !insn.addr !361
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !362
  %4 = mul i32 %1, 4, !insn.addr !363
  %5 = sub i32 12, %4, !insn.addr !364
  %6 = add i32 %5, %2, !insn.addr !364
  %7 = add nsw i32 %1, 15
  br label %dec_label_pc_1ac6, !insn.addr !364

dec_label_pc_1ac6:                                ; preds = %dec_label_pc_1ac6, %dec_label_pc_1a9f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = mul i32 %eax.0.reload, 4, !insn.addr !365
  %9 = add i32 %6, %8, !insn.addr !365
  %10 = inttoptr i32 %9 to i32*, !insn.addr !365
  store i32 %eax.0.reload, i32* %10, align 4, !insn.addr !365
  %11 = add i32 %eax.0.reload, 1, !insn.addr !366
  %12 = icmp eq i32 %eax.0.reload, %7, !insn.addr !367
  %13 = icmp eq i1 %12, false, !insn.addr !368
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !368
  br i1 %13, label %dec_label_pc_1ac6, label %dec_label_pc_1ad0, !insn.addr !368

dec_label_pc_1ad0:                                ; preds = %dec_label_pc_1ac6
  %14 = inttoptr i32 %seed to i32*, !insn.addr !369
  %15 = add i32 %seed, 4, !insn.addr !370
  %16 = inttoptr i32 %15 to i32*, !insn.addr !370
  %17 = add i32 %seed, 8, !insn.addr !371
  %18 = inttoptr i32 %17 to i32*, !insn.addr !371
  %19 = add i32 %seed, 12, !insn.addr !372
  %20 = inttoptr i32 %19 to i32*, !insn.addr !372
  %21 = add i32 %seed, 16, !insn.addr !373
  %22 = inttoptr i32 %21 to i32*, !insn.addr !373
  %23 = add i32 %seed, 20, !insn.addr !374
  %24 = inttoptr i32 %23 to i32*, !insn.addr !374
  %25 = add i32 %seed, 24, !insn.addr !375
  %26 = inttoptr i32 %25 to i32*, !insn.addr !375
  %27 = add i32 %seed, 28, !insn.addr !376
  %28 = inttoptr i32 %27 to i32*, !insn.addr !376
  %29 = add i32 %seed, 32, !insn.addr !377
  %30 = inttoptr i32 %29 to i32*, !insn.addr !377
  %31 = add i32 %seed, 36, !insn.addr !378
  %32 = inttoptr i32 %31 to i32*, !insn.addr !378
  %33 = add i32 %seed, 40, !insn.addr !379
  %34 = inttoptr i32 %33 to i32*, !insn.addr !379
  %35 = add i32 %seed, 44, !insn.addr !380
  %36 = inttoptr i32 %35 to i32*, !insn.addr !380
  %37 = add i32 %seed, 48, !insn.addr !381
  %38 = inttoptr i32 %37 to i32*, !insn.addr !381
  %39 = add i32 %seed, 52, !insn.addr !382
  %40 = inttoptr i32 %39 to i32*, !insn.addr !382
  %41 = add i32 %seed, 56, !insn.addr !383
  %42 = inttoptr i32 %41 to i32*, !insn.addr !383
  %43 = add i32 %seed, 60, !insn.addr !384
  %44 = inttoptr i32 %43 to i32*, !insn.addr !384
  %45 = call i32 @__readgsdword(i32 20), !insn.addr !385
  %46 = icmp eq i32 %3, %45, !insn.addr !385
  %47 = icmp eq i1 %46, false, !insn.addr !386
  br i1 %47, label %dec_label_pc_1b55, label %dec_label_pc_1b4c, !insn.addr !386

dec_label_pc_1b4c:                                ; preds = %dec_label_pc_1ad0
  ret i32 %seed, !insn.addr !387

dec_label_pc_1b55:                                ; preds = %dec_label_pc_1ad0
  %48 = call i32 @__stack_chk_fail_local(), !insn.addr !388
  ret i32 %48, !insn.addr !388

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 2, 1, 0, 3 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0 }
  uselistorder i32 32, { 1, 0 }
  uselistorder i32 16, { 1, 0 }
  uselistorder i32 8, { 2, 3, 0, 1 }
  uselistorder i32 15, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 12, { 1, 0, 2 }
  uselistorder i32 4, { 12, 0, 1, 8, 9, 4, 2, 10, 7, 13, 14, 3, 5, 6, 11, 15 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1b5a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !389
  %5 = ptrtoint i32* %stack_var_-80 to i32, !insn.addr !390
  %6 = call i32 @ret_large_struct(i32 %5), !insn.addr !391
  %7 = call i32 @__readgsdword(i32 20), !insn.addr !392
  %8 = icmp eq i32 %1, %7, !insn.addr !392
  %9 = icmp eq i1 %8, false, !insn.addr !393
  br i1 %9, label %dec_label_pc_1b98, label %dec_label_pc_1b94, !insn.addr !393

dec_label_pc_1b94:                                ; preds = %dec_label_pc_1b5a
  %10 = add i32 %3, %2, !insn.addr !394
  ret i32 %10, !insn.addr !395

dec_label_pc_1b98:                                ; preds = %dec_label_pc_1b5a
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !396
  ret i32 %11, !insn.addr !396

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 5, 4, 3, 2, 1, 0 }
}

define i32 @ret_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b9d:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !397
  %1 = icmp eq i32 %arg1, 0, !insn.addr !398
  %.v = select i1 %1, i32 -2362, i32 -2350
  %2 = add i32 %0, %.v, !insn.addr !399
  ret i32 %2, !insn.addr !400
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = call i32 @func_b(i32 5), !insn.addr !401
  ret i32 %0, !insn.addr !402
}

define i32 @ret_opaque_handle(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bcf:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !403
  %1 = icmp eq i32 %arg1, 0, !insn.addr !404
  %2 = icmp eq i1 %1, false, !insn.addr !405
  %.v = select i1 %2, i32 13360, i32 13368
  %3 = add i32 %0, %.v, !insn.addr !405
  ret i32 %3, !insn.addr !406
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1bf2:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !407
  %1 = add i32 %0, 13333, !insn.addr !408
  %2 = inttoptr i32 %1 to i32*, !insn.addr !408
  %3 = load i32, i32* %2, align 4, !insn.addr !408
  ret i32 %3, !insn.addr !409

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 4, 3, 2, 1, 0 }
}

define i32 @ret_complex_expr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1c07:
  %0 = mul i32 %arg3, 2, !insn.addr !410
  %1 = add i32 %arg3, 10, !insn.addr !411
  %2 = sub i32 %arg1, %arg2, !insn.addr !412
  %3 = xor i32 %arg2, %arg1, !insn.addr !412
  %4 = xor i32 %2, %arg1, !insn.addr !412
  %5 = and i32 %4, %3, !insn.addr !412
  %6 = icmp slt i32 %5, 0, !insn.addr !412
  %7 = icmp eq i32 %2, 0, !insn.addr !412
  %8 = icmp slt i32 %2, 0, !insn.addr !412
  %9 = icmp eq i1 %8, %6, !insn.addr !413
  %10 = icmp eq i1 %7, false, !insn.addr !413
  %11 = icmp eq i1 %9, %10, !insn.addr !413
  %12 = select i1 %11, i32 %0, i32 %1, !insn.addr !413
  ret i32 %12, !insn.addr !414

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1c21:
  ret i32 40, !insn.addr !415
}

define i32 @ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c2b:
  %eax.0.reg2mem = alloca i32, !insn.addr !416
  store i32 20, i32* %eax.0.reg2mem
  switch i32 %arg1, label %dec_label_pc_1c47 [
    i32 1, label %dec_label_pc_1c52
    i32 2, label %dec_label_pc_1c52.fold.split
  ]

dec_label_pc_1c47:                                ; preds = %dec_label_pc_1c2b
  %0 = icmp eq i32 %arg1, 0, !insn.addr !417
  %1 = select i1 %0, i32 10, i32 -1, !insn.addr !418
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !418
  br label %dec_label_pc_1c52, !insn.addr !418

dec_label_pc_1c52.fold.split:                     ; preds = %dec_label_pc_1c2b
  store i32 30, i32* %eax.0.reg2mem
  br label %dec_label_pc_1c52

dec_label_pc_1c52:                                ; preds = %dec_label_pc_1c2b, %dec_label_pc_1c52.fold.split, %dec_label_pc_1c47
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !419

; uselistorder directives
  uselistorder i32 10, { 1, 3, 2, 4, 0, 5 }
  uselistorder i32 2, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32 20, { 0, 3, 4, 5, 15, 6, 1, 7, 8, 9, 2, 10, 11, 12, 13, 14 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1c52, { 1, 2, 0 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1c53:
  ret i32 60, !insn.addr !420
}

define i32 @ret_void(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c5d:
  %0 = mul i32 %arg1, 3, !insn.addr !421
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !422
  store i32 %0, i32* %1, align 4, !insn.addr !422
  ret i32 %arg2, !insn.addr !423

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_1c6f:
  ret i32 21, !insn.addr !424
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_1c79:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !425
  %3 = add i32 %1, 1574, !insn.addr !426
  %4 = inttoptr i32 %3 to i8*, !insn.addr !427
  %5 = call i32 @puts(i8* %4), !insn.addr !428
  %6 = add i32 %1, 1604, !insn.addr !429
  %7 = inttoptr i32 %6 to i8*, !insn.addr !430
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !431
  %9 = call i32 @call_ret_pointer(), !insn.addr !432
  %10 = add i32 %1, 1632, !insn.addr !433
  %11 = inttoptr i32 %10 to i8*, !insn.addr !434
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !435
  %13 = call i32 @call_ret_small_struct(), !insn.addr !436
  %14 = add i32 %1, 1660, !insn.addr !437
  %15 = inttoptr i32 %14 to i8*, !insn.addr !438
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %15), !insn.addr !439
  %17 = call i32 @call_ret_large_struct(), !insn.addr !440
  %18 = add i32 %1, 1687, !insn.addr !441
  %19 = inttoptr i32 %18 to i8*, !insn.addr !442
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %19), !insn.addr !443
  %21 = call i32 @call_ret_func_ptr(), !insn.addr !444
  %22 = add i32 %1, 1716, !insn.addr !445
  %23 = inttoptr i32 %22 to i8*, !insn.addr !446
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %23), !insn.addr !447
  %25 = add i32 %1, 1744, !insn.addr !448
  %26 = inttoptr i32 %25 to i8*, !insn.addr !449
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !450
  %28 = add i32 %1, 1773, !insn.addr !451
  %29 = inttoptr i32 %28 to i8*, !insn.addr !452
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !453
  %31 = add i32 %1, 1801, !insn.addr !454
  %32 = inttoptr i32 %31 to i8*, !insn.addr !455
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !456
  %34 = add i32 %1, 1829, !insn.addr !457
  %35 = inttoptr i32 %34 to i8*, !insn.addr !458
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %35), !insn.addr !459
  ret void, !insn.addr !460

; uselistorder directives
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1d5c:
  call void @test_calling_conventions(), !insn.addr !461
  call void @test_parameter_passing(), !insn.addr !462
  call void @test_return_values(), !insn.addr !463
  ret i32 0, !insn.addr !464

; uselistorder directives
  uselistorder i32 0, { 11, 13, 14, 15, 16, 17, 18, 0, 19, 23, 24, 2, 3, 1, 5, 4, 25, 6, 20, 7, 21, 9, 10, 8, 22, 12 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d7c:
  ret i32 %arg1, !insn.addr !465
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !466
  call void @__stack_chk_fail(), !insn.addr !467
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !468
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1da0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !469
  %ebx.0.reg2mem = alloca i32, !insn.addr !469
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !470
  %3 = add i32 %1, 12603, !insn.addr !471
  %4 = inttoptr i32 %3 to i32*, !insn.addr !471
  %5 = load i32, i32* %4, align 4, !insn.addr !471
  %6 = icmp eq i32 %5, -1, !insn.addr !472
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !473
  store i32 -1, i32* %merge.reg2mem, !insn.addr !473
  br i1 %6, label %dec_label_pc_1ddd, label %dec_label_pc_1dd0, !insn.addr !473

dec_label_pc_1dd0:                                ; preds = %dec_label_pc_1da0, %dec_label_pc_1dd0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !474
  %8 = inttoptr i32 %7 to i32*, !insn.addr !474
  %9 = load i32, i32* %8, align 4, !insn.addr !474
  %10 = icmp eq i32 %9, -1, !insn.addr !475
  %11 = icmp eq i1 %10, false, !insn.addr !476
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !476
  store i32 %9, i32* %merge.reg2mem, !insn.addr !476
  br i1 %11, label %dec_label_pc_1dd0, label %dec_label_pc_1ddd, !insn.addr !476

dec_label_pc_1ddd:                                ; preds = %dec_label_pc_1dd0, %dec_label_pc_1da0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !477

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 5, 0, 1, 6, 7, 8, 9, 2, 10, 11, 12, 13, 14, 15, 16, 3, 17, 4 }
  uselistorder i32 -4, { 1, 0 }
  uselistorder i32 -1, { 4, 0, 5, 6, 1, 2, 7, 3 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1dd0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1dec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !478
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !479
  ret i32 %3, !insn.addr !480

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 6, 1, 3, 2, 0, 5, 4 }
  uselistorder i32 1, { 20, 23, 22, 19, 18, 48, 49, 50, 51, 52, 53, 54, 55, 56, 17, 47, 24, 88, 16, 104, 89, 25, 15, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 14, 105, 90, 26, 13, 12, 68, 92, 91, 45, 11, 106, 69, 93, 30, 29, 28, 27, 95, 94, 70, 33, 32, 31, 103, 46, 71, 72, 107, 36, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 98, 97, 96, 37, 35, 34, 10, 100, 99, 39, 38, 21, 9, 108, 87, 101, 43, 42, 41, 40, 8, 7, 6, 44, 5, 4, 3, 2, 102, 1, 0 }
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
!232 = !{i64 6013}
!233 = !{i64 6020}
!234 = !{i64 6032}
!235 = !{i64 6039}
!236 = !{i64 6044}
!237 = !{i64 6045}
!238 = !{i64 6050}
!239 = !{i64 6062}
!240 = !{i64 6064}
!241 = !{i64 6073}
!242 = !{i64 6080}
!243 = !{i64 6083}
!244 = !{i64 6085}
!245 = !{i64 6088}
!246 = !{i64 6090}
!247 = !{i64 6096}
!248 = !{i64 6118}
!249 = !{i64 6126}
!250 = !{i64 6142}
!251 = !{i64 6148}
!252 = !{i64 6156}
!253 = !{i64 6168}
!254 = !{i64 6174}
!255 = !{i64 6175}
!256 = !{i64 6183}
!257 = !{i64 6192}
!258 = !{i64 6194}
!259 = !{i64 6198}
!260 = !{i64 6200}
!261 = !{i64 6196}
!262 = !{i64 6206}
!263 = !{i64 6208}
!264 = !{i64 6219}
!265 = !{i64 6225}
!266 = !{i64 6239}
!267 = !{i64 6251}
!268 = !{i64 6263}
!269 = !{i64 6274}
!270 = !{i64 6282}
!271 = !{i64 6293}
!272 = !{i64 6301}
!273 = !{i64 6308}
!274 = !{i64 6287}
!275 = !{i64 6313}
!276 = !{i64 6314}
!277 = !{i64 6331}
!278 = !{i64 6333}
!279 = !{i64 6335}
!280 = !{i64 6338}
!281 = !{i64 6340}
!282 = !{i64 6343}
!283 = !{i64 6345}
!284 = !{i64 6346}
!285 = !{i64 6348}
!286 = !{i64 6354}
!287 = !{i64 6364}
!288 = !{i64 6373}
!289 = !{i64 6377}
!290 = !{i64 6378}
!291 = !{i64 6382}
!292 = !{i64 6385}
!293 = !{i64 6397}
!294 = !{i64 6395}
!295 = !{i64 6401}
!296 = !{i64 6407}
!297 = !{i64 6421}
!298 = !{i64 6428}
!299 = !{i64 6413}
!300 = !{i64 6433}
!301 = !{i64 6434}
!302 = !{i64 6447}
!303 = !{i64 6451}
!304 = !{i64 6461}
!305 = !{i64 6470}
!306 = !{i64 6481}
!307 = !{i64 6487}
!308 = !{i64 6488}
!309 = !{i64 6498}
!310 = !{i64 6504}
!311 = !{i64 6507}
!312 = !{i64 6512}
!313 = !{i64 6521}
!314 = !{i64 6527}
!315 = !{i64 6530}
!316 = !{i64 6540}
!317 = !{i64 6546}
!318 = !{i64 6549}
!319 = !{i64 6562}
!320 = !{i64 6568}
!321 = !{i64 6571}
!322 = !{i64 6576}
!323 = !{i64 6585}
!324 = !{i64 6591}
!325 = !{i64 6594}
!326 = !{i64 6599}
!327 = !{i64 6608}
!328 = !{i64 6614}
!329 = !{i64 6617}
!330 = !{i64 6622}
!331 = !{i64 6631}
!332 = !{i64 6637}
!333 = !{i64 6640}
!334 = !{i64 6645}
!335 = !{i64 6654}
!336 = !{i64 6660}
!337 = !{i64 6663}
!338 = !{i64 6668}
!339 = !{i64 6677}
!340 = !{i64 6683}
!341 = !{i64 6686}
!342 = !{i64 6691}
!343 = !{i64 6700}
!344 = !{i64 6706}
!345 = !{i64 6709}
!346 = !{i64 6719}
!347 = !{i64 6725}
!348 = !{i64 6728}
!349 = !{i64 6737}
!350 = !{i64 6746}
!351 = !{i64 6748}
!352 = !{i64 6758}
!353 = !{i64 6767}
!354 = !{i64 6770}
!355 = !{i64 6780}
!356 = !{i64 6793}
!357 = !{i64 6799}
!358 = !{i64 6802}
!359 = !{i64 6814}
!360 = !{i64 6815}
!361 = !{i64 6820}
!362 = !{i64 6831}
!363 = !{i64 6848}
!364 = !{i64 6850}
!365 = !{i64 6854}
!366 = !{i64 6857}
!367 = !{i64 6860}
!368 = !{i64 6862}
!369 = !{i64 6868}
!370 = !{i64 6874}
!371 = !{i64 6881}
!372 = !{i64 6888}
!373 = !{i64 6895}
!374 = !{i64 6902}
!375 = !{i64 6909}
!376 = !{i64 6916}
!377 = !{i64 6923}
!378 = !{i64 6930}
!379 = !{i64 6937}
!380 = !{i64 6944}
!381 = !{i64 6951}
!382 = !{i64 6958}
!383 = !{i64 6965}
!384 = !{i64 6972}
!385 = !{i64 6979}
!386 = !{i64 6986}
!387 = !{i64 6994}
!388 = !{i64 6997}
!389 = !{i64 7009}
!390 = !{i64 7030}
!391 = !{i64 7031}
!392 = !{i64 7051}
!393 = !{i64 7058}
!394 = !{i64 7040}
!395 = !{i64 7063}
!396 = !{i64 7064}
!397 = !{i64 7073}
!398 = !{i64 7095}
!399 = !{i64 7100}
!400 = !{i64 7103}
!401 = !{i64 7110}
!402 = !{i64 7118}
!403 = !{i64 7123}
!404 = !{i64 7145}
!405 = !{i64 7150}
!406 = !{i64 7153}
!407 = !{i64 7158}
!408 = !{i64 7168}
!409 = !{i64 7174}
!410 = !{i64 7183}
!411 = !{i64 7186}
!412 = !{i64 7193}
!413 = !{i64 7197}
!414 = !{i64 7200}
!415 = !{i64 7210}
!416 = !{i64 7211}
!417 = !{i64 7239}
!418 = !{i64 7247}
!419 = !{i64 7250}
!420 = !{i64 7260}
!421 = !{i64 7269}
!422 = !{i64 7276}
!423 = !{i64 7278}
!424 = !{i64 7288}
!425 = !{i64 7297}
!426 = !{i64 7308}
!427 = !{i64 7314}
!428 = !{i64 7315}
!429 = !{i64 7325}
!430 = !{i64 7331}
!431 = !{i64 7334}
!432 = !{i64 7339}
!433 = !{i64 7348}
!434 = !{i64 7354}
!435 = !{i64 7357}
!436 = !{i64 7362}
!437 = !{i64 7371}
!438 = !{i64 7377}
!439 = !{i64 7380}
!440 = !{i64 7385}
!441 = !{i64 7394}
!442 = !{i64 7400}
!443 = !{i64 7403}
!444 = !{i64 7408}
!445 = !{i64 7417}
!446 = !{i64 7423}
!447 = !{i64 7426}
!448 = !{i64 7440}
!449 = !{i64 7446}
!450 = !{i64 7449}
!451 = !{i64 7459}
!452 = !{i64 7465}
!453 = !{i64 7468}
!454 = !{i64 7478}
!455 = !{i64 7484}
!456 = !{i64 7487}
!457 = !{i64 7497}
!458 = !{i64 7503}
!459 = !{i64 7506}
!460 = !{i64 7515}
!461 = !{i64 7526}
!462 = !{i64 7531}
!463 = !{i64 7536}
!464 = !{i64 7547}
!465 = !{i64 7551}
!466 = !{i64 7557}
!467 = !{i64 7571}
!468 = !{i64 7582}
!469 = !{i64 7584}
!470 = !{i64 7588}
!471 = !{i64 7599}
!472 = !{i64 7605}
!473 = !{i64 7608}
!474 = !{i64 7634}
!475 = !{i64 7640}
!476 = !{i64 7643}
!477 = !{i64 7649}
!478 = !{i64 7668}
!479 = !{i64 7679}
!480 = !{i64 7688}
