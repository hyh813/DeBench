source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_2ea8 = constant i32 239993475
@global_var_2e77 = constant i32 -984283891
@global_var_2e37 = constant i32 0
@global_var_2ddf = constant i32 6911
@global_var_2bbc = local_unnamed_addr constant i32 28
@global_var_404 = global i32 393216
@global_var_2b10 = constant i32* @global_var_404
@global_var_28af = constant i32 162816
@global_var_280a = constant i32 67374277
@global_var_2723 = constant i32 -985201395
@global_var_253d = constant i32 1962934259
@global_var_250d = constant i32 -1258291213
@global_var_24e7 = constant i32 407807
@global_var_2469 = constant i32 -1577058300
@global_var_2382 = local_unnamed_addr constant [4 x i8] c"0)\0A\00"
@global_var_2363 = constant [7 x i8] c" 100)\0A\00"
@global_var_2313 = local_unnamed_addr constant i32 1413829120
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

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @test_calling_conventions(), !insn.addr !10
  %1 = call i32 @test_parameter_passing(), !insn.addr !11
  %2 = call i32 @test_return_values(), !insn.addr !12
  ret i32 0, !insn.addr !13
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_113c(i32 %2), !insn.addr !14
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ea8 to i32), i32 44), !insn.addr !15
  %6 = inttoptr i32 %5 to i32*, !insn.addr !15
  %7 = load i32, i32* %6, align 4, !insn.addr !15
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !16
  %9 = call i32 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_113c(i32 %arg1) local_unnamed_addr {
dec_label_pc_113c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !18
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !20
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !20
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2e77 to i32), i32 88), !insn.addr !21
  store i32 %3, i32* %merge.reg2mem, !insn.addr !22
  br i1 icmp eq (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2e77 to i32), i32 88), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2e77 to i32), i32 88))), i32 0), label %dec_label_pc_1175, label %dec_label_pc_116b, !insn.addr !22

dec_label_pc_116b:                                ; preds = %dec_label_pc_1150
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2e77 to i32), i32 32), !insn.addr !23
  %5 = inttoptr i32 %4 to i32*, !insn.addr !23
  %6 = load i32, i32* %5, align 4, !insn.addr !23
  store i32 %6, i32* %merge.reg2mem
  br label %dec_label_pc_1175

dec_label_pc_1175:                                ; preds = %dec_label_pc_116b, %dec_label_pc_1150
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !24

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !25
  ret i32 ashr (i32 add (i32 lshr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2e37 to i32), i32 88), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2e37 to i32), i32 88))), i32 31), i32 ashr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2e37 to i32), i32 88), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2e37 to i32), i32 88))), i32 2)), i32 1), !insn.addr !26
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !27
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !28
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ddf to i32), i32 88), !insn.addr !29
  %4 = inttoptr i32 %3 to i8*, !insn.addr !29
  %5 = load i8, i8* %4, align 1, !insn.addr !29
  %6 = icmp eq i8 %5, 0, !insn.addr !29
  %7 = icmp eq i1 %6, false, !insn.addr !30
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !30
  br i1 %7, label %dec_label_pc_1262, label %dec_label_pc_1201, !insn.addr !30

dec_label_pc_1201:                                ; preds = %dec_label_pc_11e0
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ddf to i32), i32 36), !insn.addr !31
  %9 = inttoptr i32 %8 to i32*, !insn.addr !31
  %10 = load i32, i32* %9, align 4, !insn.addr !31
  %11 = icmp eq i32 %10, 0, !insn.addr !32
  br i1 %11, label %dec_label_pc_121e, label %dec_label_pc_120b, !insn.addr !33

dec_label_pc_120b:                                ; preds = %dec_label_pc_1201
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ddf to i32), i32 56), !insn.addr !34
  %13 = inttoptr i32 %12 to i32*, !insn.addr !34
  %14 = load i32, i32* %13, align 4, !insn.addr !34
  %15 = inttoptr i32 %14 to i32*, !insn.addr !35
  call void @__cxa_finalize(i32* %15), !insn.addr !35
  br label %dec_label_pc_121e, !insn.addr !36

dec_label_pc_121e:                                ; preds = %dec_label_pc_120b, %dec_label_pc_1201
  %16 = call i32 @deregister_tm_clones(), !insn.addr !37
  store i8 1, i8* %4, align 1, !insn.addr !38
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !38
  br label %dec_label_pc_1262, !insn.addr !38

dec_label_pc_1262:                                ; preds = %dec_label_pc_121e, %dec_label_pc_11e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !39

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1270:
  %0 = call i32 @register_tm_clones(), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1279:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !41
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_127d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !42
}

define i32 @func_a(i32 %arg1) local_unnamed_addr {
dec_label_pc_1281:
  %0 = add i32 %arg1, 10, !insn.addr !43
  ret i32 %0, !insn.addr !44
}

define i32 @func_b(i32 %arg1) local_unnamed_addr {
dec_label_pc_1290:
  %0 = mul i32 %arg1, 2, !insn.addr !45
  ret i32 %0, !insn.addr !46
}

define i32 @callback_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_129e:
  %0 = mul i32 %arg1, 2, !insn.addr !47
  ret i32 %0, !insn.addr !48
}

define i32 @cdecl_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12ac:
  %0 = add i32 %arg2, %arg1, !insn.addr !49
  ret i32 %0, !insn.addr !50
}

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_12bb:
  ret i32 15, !insn.addr !51
}

define i32 @stdcall_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12c5:
  %0 = mul i32 %arg2, %arg1, !insn.addr !52
  ret i32 %0, !insn.addr !53
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_12d7:
  ret i32 50, !insn.addr !54
}

define i32 @fastcall_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_12e1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %1, %arg1, !insn.addr !55
  %4 = add i32 %3, %2, !insn.addr !56
  ret i32 %4, !insn.addr !57

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_12f2:
  ret i32 6, !insn.addr !58
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_12fc:
  ret i32 15, !insn.addr !59
}

define i32 @arm_aapcs_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1306:
  %0 = add i32 %arg2, %arg1, !insn.addr !60
  %1 = add i32 %0, %arg3, !insn.addr !61
  %2 = add i32 %1, %arg4, !insn.addr !62
  %3 = add i32 %2, %arg5, !insn.addr !63
  ret i32 %3, !insn.addr !64
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_131e:
  ret i32 15, !insn.addr !65
}

define i32 @mips_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1328:
  %0 = add i32 %arg2, %arg1, !insn.addr !66
  %1 = add i32 %0, %arg3, !insn.addr !67
  %2 = add i32 %1, %arg4, !insn.addr !68
  ret i32 %2, !insn.addr !69
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_133d:
  ret i32 100, !insn.addr !70
}

define i32 @amd64_sysv_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1347:
  %0 = add i32 %arg2, %arg1, !insn.addr !71
  %1 = add i32 %0, %arg3, !insn.addr !72
  %2 = add i32 %1, %arg4, !insn.addr !73
  %3 = add i32 %2, %arg5, !insn.addr !74
  %4 = add i32 %3, %arg6, !insn.addr !75
  ret i32 %4, !insn.addr !76
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1362:
  ret i32 21, !insn.addr !77
}

define i32 @ms_x64_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_136c:
  %0 = add i32 %arg2, %arg1, !insn.addr !78
  %1 = add i32 %0, %arg3, !insn.addr !79
  %2 = add i32 %1, %arg4, !insn.addr !80
  %3 = add i32 %2, %arg5, !insn.addr !81
  ret i32 %3, !insn.addr !82
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1384:
  ret i32 15, !insn.addr !83
}

define i32 @vectorcall_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_138e:
  %0 = add i32 %arg2, %arg1, !insn.addr !84
  %1 = add i32 %0, %arg3, !insn.addr !85
  %2 = add i32 %1, %arg4, !insn.addr !86
  ret i32 %2, !insn.addr !87
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_13a3:
  ret i32 10, !insn.addr !88
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_13ad:
  ret i32 33, !insn.addr !89
}

define i32 @varargs_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b7:
  %edx.0.lcssa.reg2mem = alloca i32, !insn.addr !90
  %eax.01.reg2mem = alloca i32, !insn.addr !90
  %edx.02.reg2mem = alloca i32, !insn.addr !90
  %stack_var_8 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !91
  %1 = icmp sgt i32 %arg1, 0, !insn.addr !92
  store i32 0, i32* %edx.02.reg2mem, !insn.addr !92
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !92
  store i32 0, i32* %edx.0.lcssa.reg2mem, !insn.addr !92
  br i1 %1, label %dec_label_pc_13ca, label %dec_label_pc_13d0, !insn.addr !92

dec_label_pc_13ca:                                ; preds = %dec_label_pc_13b7, %dec_label_pc_13ca
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %edx.02.reload = load i32, i32* %edx.02.reg2mem
  %2 = mul i32 %eax.01.reload, 4, !insn.addr !93
  %3 = add i32 %2, %0, !insn.addr !93
  %4 = inttoptr i32 %3 to i32*, !insn.addr !93
  %5 = load i32, i32* %4, align 4, !insn.addr !93
  %6 = add i32 %5, %edx.02.reload, !insn.addr !93
  %7 = add nuw nsw i32 %eax.01.reload, 1, !insn.addr !94
  %exitcond = icmp eq i32 %7, %arg1
  store i32 %6, i32* %edx.02.reg2mem, !insn.addr !92
  store i32 %7, i32* %eax.01.reg2mem, !insn.addr !92
  store i32 %6, i32* %edx.0.lcssa.reg2mem, !insn.addr !92
  br i1 %exitcond, label %dec_label_pc_13d0, label %dec_label_pc_13ca, !insn.addr !92

dec_label_pc_13d0:                                ; preds = %dec_label_pc_13ca, %dec_label_pc_13b7
  %edx.0.lcssa.reload = load i32, i32* %edx.0.lcssa.reg2mem
  ret i32 %edx.0.lcssa.reload, !insn.addr !95

; uselistorder directives
  uselistorder i32* %edx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13ca, { 1, 0 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_13d4:
  ret i32 42, !insn.addr !96
}

define i32 @func_many_args(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_13de:
  %0 = add i32 %arg2, %arg1, !insn.addr !97
  %1 = add i32 %0, %arg3, !insn.addr !98
  %2 = add i32 %1, %arg4, !insn.addr !99
  %3 = add i32 %2, %arg5, !insn.addr !100
  %4 = add i32 %3, %arg6, !insn.addr !101
  %5 = add i32 %4, %arg7, !insn.addr !102
  %6 = add i32 %5, %arg8, !insn.addr !103
  ret i32 %6, !insn.addr !104
}

define i32 @func_mixed_args(i32 %arg1, i32 %arg2, double %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_13ff:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !105
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !106
  %3 = icmp eq i32 %arg2, 0, !insn.addr !107
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !108
  br i1 %3, label %dec_label_pc_143b, label %dec_label_pc_1429, !insn.addr !108

dec_label_pc_1429:                                ; preds = %dec_label_pc_13ff
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !109
  %5 = call i32 @strlen(i8* %4), !insn.addr !109
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !110
  br label %dec_label_pc_143b, !insn.addr !110

dec_label_pc_143b:                                ; preds = %dec_label_pc_1429, %dec_label_pc_13ff
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %st7.0 = fpext double %arg3 to x86_fp80
  %6 = add i32 %eax.0.reload, %arg1, !insn.addr !111
  %7 = sitofp i32 %6 to x86_fp80, !insn.addr !112
  %8 = fadd x86_fp80 %st7.0, %7, !insn.addr !112
  %9 = sitofp i32 %arg4 to x86_fp80, !insn.addr !113
  %10 = fadd x86_fp80 %8, %9, !insn.addr !114
  %11 = fptosi x86_fp80 %10 to i32, !insn.addr !115
  ret i32 %11, !insn.addr !116
}

define i32 @func_struct_byval() local_unnamed_addr {
dec_label_pc_1471:
  %ecx.0.reg2mem = alloca i32, !insn.addr !117
  %eax.0.reg2mem = alloca i32, !insn.addr !117
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !118
  %1 = add i32 %0, 8, !insn.addr !119
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !118
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !118
  br label %dec_label_pc_147e, !insn.addr !118

dec_label_pc_147e:                                ; preds = %dec_label_pc_147e, %dec_label_pc_1471
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = mul i32 %ecx.0.reload, 8, !insn.addr !119
  %3 = add i32 %1, %2, !insn.addr !119
  %4 = inttoptr i32 %3 to i32*, !insn.addr !119
  %5 = load i32, i32* %4, align 4, !insn.addr !119
  %6 = add i32 %5, %eax.0.reload, !insn.addr !119
  %7 = add nuw nsw i32 %ecx.0.reload, 1, !insn.addr !120
  %exitcond = icmp eq i32 %7, 16
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !121
  store i32 %7, i32* %ecx.0.reg2mem, !insn.addr !121
  br i1 %exitcond, label %dec_label_pc_148c, label %dec_label_pc_147e, !insn.addr !121

dec_label_pc_148c:                                ; preds = %dec_label_pc_147e
  ret i32 %6, !insn.addr !122

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
}

define i32 @func_struct_byptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_148e:
  %eax.0.reg2mem = alloca i32, !insn.addr !123
  %0 = icmp eq i32 %arg1, 0, !insn.addr !124
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !125
  br i1 %0, label %dec_label_pc_14a5, label %dec_label_pc_149f, !insn.addr !125

dec_label_pc_149f:                                ; preds = %dec_label_pc_148e
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !126
  %2 = load i32, i32* %1, align 4, !insn.addr !126
  %3 = add i32 %arg1, 4, !insn.addr !127
  %4 = inttoptr i32 %3 to i32*, !insn.addr !127
  %5 = load i32, i32* %4, align 4, !insn.addr !127
  %6 = mul i32 %5, %2, !insn.addr !127
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !127
  br label %dec_label_pc_14a5, !insn.addr !127

dec_label_pc_14a5:                                ; preds = %dec_label_pc_149f, %dec_label_pc_148e
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !128

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @test_calling_conventions() local_unnamed_addr {
dec_label_pc_14a7:
  %0 = alloca i32
  %eax.2.reg2mem = alloca i32, !insn.addr !129
  %edx.0.reg2mem = alloca i32, !insn.addr !129
  %eax.0.reg2mem = alloca i32, !insn.addr !129
  %1 = load i32, i32* %0
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-288 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-288 to i32, !insn.addr !130
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !131
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !132
  %5 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8132), !insn.addr !133
  %6 = inttoptr i32 %5 to i8*, !insn.addr !134
  %7 = call i32 @puts(i8* %6), !insn.addr !135
  %8 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8099), !insn.addr !136
  %9 = inttoptr i32 %8 to i8*, !insn.addr !137
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %9), !insn.addr !138
  %11 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8083), !insn.addr !139
  %12 = inttoptr i32 %11 to i8*, !insn.addr !140
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !141
  %14 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8067), !insn.addr !142
  %15 = inttoptr i32 %14 to i8*, !insn.addr !143
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %15), !insn.addr !144
  %17 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8051), !insn.addr !145
  %18 = inttoptr i32 %17 to i8*, !insn.addr !146
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %18), !insn.addr !147
  %20 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8035), !insn.addr !148
  %21 = inttoptr i32 %20 to i8*, !insn.addr !149
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %21), !insn.addr !150
  %23 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8019), !insn.addr !151
  %24 = inttoptr i32 %23 to i8*, !insn.addr !152
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !153
  %26 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -8003), !insn.addr !154
  %27 = inttoptr i32 %26 to i8*, !insn.addr !155
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %27), !insn.addr !156
  %29 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7987), !insn.addr !157
  %30 = inttoptr i32 %29 to i8*, !insn.addr !158
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %30), !insn.addr !159
  %32 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7971), !insn.addr !160
  %33 = inttoptr i32 %32 to i8*, !insn.addr !161
  %34 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %33), !insn.addr !162
  %35 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7955), !insn.addr !163
  %36 = inttoptr i32 %35 to i8*, !insn.addr !164
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %36), !insn.addr !165
  %38 = call i32 @varargs_func(i32 5), !insn.addr !166
  %39 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7939), !insn.addr !167
  %40 = inttoptr i32 %39 to i8*, !insn.addr !168
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %40), !insn.addr !169
  %42 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7899), !insn.addr !170
  %43 = inttoptr i32 %42 to i8*, !insn.addr !171
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %43), !insn.addr !172
  %45 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7865), !insn.addr !173
  %46 = inttoptr i32 %45 to i8*, !insn.addr !174
  %47 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %46), !insn.addr !175
  %48 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7826), !insn.addr !176
  %49 = inttoptr i32 %48 to i8*, !insn.addr !177
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %49), !insn.addr !178
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !179
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_1605, !insn.addr !179

dec_label_pc_1605:                                ; preds = %dec_label_pc_1605, %dec_label_pc_14a7
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %51 = mul i32 %eax.0.reload, 8, !insn.addr !180
  %52 = add i32 %51, %2
  %53 = add i32 %52, -8, !insn.addr !181
  %54 = inttoptr i32 %53 to i32*, !insn.addr !181
  store i32 %eax.0.reload, i32* %54, align 4, !insn.addr !181
  %55 = add i32 %eax.0.reload, 1, !insn.addr !182
  %56 = icmp eq i32 %eax.0.reload, -1, !insn.addr !182
  %57 = add i32 %52, -4, !insn.addr !183
  %58 = inttoptr i32 %57 to i32*, !insn.addr !183
  store i32 %edx.0.reload, i32* %58, align 4, !insn.addr !183
  %59 = zext i1 %56 to i32, !insn.addr !184
  %60 = add i32 %edx.0.reload, %59, !insn.addr !184
  %61 = xor i32 %55, 17, !insn.addr !185
  %62 = or i32 %60, %61, !insn.addr !186
  %63 = icmp eq i32 %62, 0, !insn.addr !186
  %64 = icmp eq i1 %63, false, !insn.addr !187
  store i32 %55, i32* %eax.0.reg2mem, !insn.addr !187
  store i32 %60, i32* %edx.0.reg2mem, !insn.addr !187
  br i1 %64, label %dec_label_pc_1605, label %dec_label_pc_1623, !insn.addr !187

dec_label_pc_1623:                                ; preds = %dec_label_pc_1605
  %65 = bitcast i32* %stack_var_-288 to i8*, !insn.addr !188
  %66 = bitcast i32* %stack_var_-160 to i8*, !insn.addr !188
  call void @__asm_rep_movsd_memcpy(i8* nonnull %66, i8* nonnull %65, i32 32), !insn.addr !188
  %67 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7786), !insn.addr !189
  %68 = inttoptr i32 %67 to i8*, !insn.addr !190
  %69 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %68), !insn.addr !191
  %70 = add i32 %1, add (i32 ptrtoint (i32** @global_var_2b10 to i32), i32 -7742), !insn.addr !192
  %71 = inttoptr i32 %70 to i8*, !insn.addr !193
  %72 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %71), !insn.addr !194
  %73 = call i32 @__readgsdword(i32 20), !insn.addr !195
  %74 = icmp eq i32 %4, %73, !insn.addr !195
  store i32 0, i32* %eax.2.reg2mem, !insn.addr !196
  br i1 %74, label %dec_label_pc_1680, label %dec_label_pc_167b, !insn.addr !196

dec_label_pc_167b:                                ; preds = %dec_label_pc_1623
  %75 = call i32 @__stack_chk_fail_local(), !insn.addr !197
  store i32 %75, i32* %eax.2.reg2mem, !insn.addr !197
  br label %dec_label_pc_1680, !insn.addr !197

dec_label_pc_1680:                                ; preds = %dec_label_pc_167b, %dec_label_pc_1623
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  ret i32 %eax.2.reload, !insn.addr !198

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 2, 0, 3 }
  uselistorder i32 %edx.0.reload, { 1, 0 }
  uselistorder i32 %1, { 17, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 32, { 1, 0 }
}

define i32 @param_by_value_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_1688:
  %0 = mul i32 %arg1, 2, !insn.addr !199
  ret i32 %0, !insn.addr !200
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1696:
  ret i32 15, !insn.addr !201
}

define i32 @param_by_value_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !202
  %1 = load i32, i32* %0, align 4, !insn.addr !202
  %2 = mul i32 %1, 2, !insn.addr !202
  store i32 %2, i32* %0, align 4, !insn.addr !202
  ret i32 1, !insn.addr !203
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_16b3:
  ret i32 11, !insn.addr !204
}

define i32 @param_array_decay() local_unnamed_addr {
dec_label_pc_16bd:
  ret i32 4, !insn.addr !205
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_16c7:
  ret i32 4, !insn.addr !206
}

define i32 @param_string(i32 %arg1) local_unnamed_addr {
dec_label_pc_16d1:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !207
  %1 = load i8, i8* %0, align 1, !insn.addr !207
  %2 = sext i8 %1 to i32, !insn.addr !207
  %3 = add i32 %arg1, 1, !insn.addr !208
  %4 = inttoptr i32 %3 to i8*, !insn.addr !208
  %5 = load i8, i8* %4, align 1, !insn.addr !208
  %6 = sext i8 %5 to i32, !insn.addr !208
  %7 = add nsw i32 %6, %2, !insn.addr !209
  ret i32 %7, !insn.addr !210

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_16e6:
  ret i32 173, !insn.addr !211
}

define i32 @param_ptr_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16f0:
  %edx.0.lcssa.reg2mem = alloca i32, !insn.addr !212
  %eax.01.reg2mem = alloca i32, !insn.addr !212
  %edx.02.reg2mem = alloca i32, !insn.addr !212
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !213
  store i32 0, i32* %edx.02.reg2mem, !insn.addr !213
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !213
  store i32 0, i32* %edx.0.lcssa.reg2mem, !insn.addr !213
  br i1 %1, label %dec_label_pc_1704, label %dec_label_pc_170f, !insn.addr !213

dec_label_pc_1704:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_1704
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %edx.02.reload = load i32, i32* %edx.02.reg2mem
  %2 = mul i32 %eax.01.reload, 4, !insn.addr !214
  %3 = add i32 %2, %0, !insn.addr !214
  %4 = inttoptr i32 %3 to i32*, !insn.addr !214
  %5 = load i32, i32* %4, align 4, !insn.addr !214
  %6 = add nuw nsw i32 %eax.01.reload, 1, !insn.addr !215
  %7 = inttoptr i32 %5 to i8*, !insn.addr !216
  %8 = load i8, i8* %7, align 1, !insn.addr !216
  %9 = sext i8 %8 to i32, !insn.addr !216
  %10 = add i32 %edx.02.reload, %9, !insn.addr !217
  %exitcond = icmp eq i32 %6, %arg2
  store i32 %10, i32* %edx.02.reg2mem, !insn.addr !213
  store i32 %6, i32* %eax.01.reg2mem, !insn.addr !213
  store i32 %10, i32* %edx.0.lcssa.reg2mem, !insn.addr !213
  br i1 %exitcond, label %dec_label_pc_170f, label %dec_label_pc_1704, !insn.addr !213

dec_label_pc_170f:                                ; preds = %dec_label_pc_1704, %dec_label_pc_16f0
  %edx.0.lcssa.reload = load i32, i32* %edx.0.lcssa.reg2mem
  ret i32 %edx.0.lcssa.reload, !insn.addr !218

; uselistorder directives
  uselistorder i32* %edx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1704, { 1, 0 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1714:
  %eax.0.reg2mem = alloca i32, !insn.addr !219
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !220
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_28af to i32), i32 60), !insn.addr !221
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !222
  %3 = inttoptr i32 %1 to i8*, !insn.addr !223
  %4 = bitcast i32* %stack_var_-28 to i8*, !insn.addr !223
  call void @__asm_rep_movsd_memcpy(i8* nonnull %4, i8* %3, i32 3), !insn.addr !223
  %5 = call i32 @param_ptr_array(i32* nonnull %stack_var_-28, i32 3), !insn.addr !224
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !225
  %7 = icmp eq i32 %2, %6, !insn.addr !225
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !226
  br i1 %7, label %dec_label_pc_1765, label %dec_label_pc_1760, !insn.addr !226

dec_label_pc_1760:                                ; preds = %dec_label_pc_1714
  %8 = call i32 @__stack_chk_fail_local(), !insn.addr !227
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !227
  br label %dec_label_pc_1765, !insn.addr !227

dec_label_pc_1765:                                ; preds = %dec_label_pc_1760, %dec_label_pc_1714
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !228
}

define i32 @param_varargs(i32 %arg1) local_unnamed_addr {
dec_label_pc_176c:
  %edx.0.lcssa.reg2mem = alloca i32, !insn.addr !229
  %eax.01.reg2mem = alloca i32, !insn.addr !229
  %edx.02.reg2mem = alloca i32, !insn.addr !229
  %stack_var_8 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !230
  %1 = icmp sgt i32 %arg1, 0, !insn.addr !231
  store i32 0, i32* %edx.02.reg2mem, !insn.addr !231
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !231
  store i32 0, i32* %edx.0.lcssa.reg2mem, !insn.addr !231
  br i1 %1, label %dec_label_pc_177f, label %dec_label_pc_1785, !insn.addr !231

dec_label_pc_177f:                                ; preds = %dec_label_pc_176c, %dec_label_pc_177f
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %edx.02.reload = load i32, i32* %edx.02.reg2mem
  %2 = mul i32 %eax.01.reload, 4, !insn.addr !232
  %3 = add i32 %2, %0, !insn.addr !232
  %4 = inttoptr i32 %3 to i32*, !insn.addr !232
  %5 = load i32, i32* %4, align 4, !insn.addr !232
  %6 = add i32 %5, %edx.02.reload, !insn.addr !232
  %7 = add nuw nsw i32 %eax.01.reload, 1, !insn.addr !233
  %exitcond = icmp eq i32 %7, %arg1
  store i32 %6, i32* %edx.02.reg2mem, !insn.addr !231
  store i32 %7, i32* %eax.01.reg2mem, !insn.addr !231
  store i32 %6, i32* %edx.0.lcssa.reg2mem, !insn.addr !231
  br i1 %exitcond, label %dec_label_pc_1785, label %dec_label_pc_177f, !insn.addr !231

dec_label_pc_1785:                                ; preds = %dec_label_pc_177f, %dec_label_pc_176c
  %edx.0.lcssa.reload = load i32, i32* %edx.0.lcssa.reg2mem
  ret i32 %edx.0.lcssa.reload, !insn.addr !234

; uselistorder directives
  uselistorder i32* %edx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_177f, { 1, 0 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1789:
  %0 = call i32 @param_varargs(i32 4), !insn.addr !235
  ret i32 %0, !insn.addr !236
}

define i32 @param_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_17a4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10, !insn.addr !237
  ret i32 %2, !insn.addr !238
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_17b9:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !239
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_280a to i32), i32 -11566), !insn.addr !240
  %2 = call i32 @param_func_ptr(i32 %1), !insn.addr !241
  ret i32 %2, !insn.addr !242
}

define i32 @param_double_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17dd:
  %eax.0.reg2mem = alloca i32, !insn.addr !243
  %0 = icmp eq i32 %arg1, 0, !insn.addr !244
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !245
  br i1 %0, label %dec_label_pc_1804, label %dec_label_pc_17ee, !insn.addr !245

dec_label_pc_17ee:                                ; preds = %dec_label_pc_17dd
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !246
  %2 = load i32, i32* %1, align 4, !insn.addr !246
  %3 = icmp eq i32 %2, 0, !insn.addr !247
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !248
  br i1 %3, label %dec_label_pc_1804, label %dec_label_pc_17f4, !insn.addr !248

dec_label_pc_17f4:                                ; preds = %dec_label_pc_17ee
  %4 = inttoptr i32 %2 to i32*, !insn.addr !249
  store i32 %arg2, i32* %4, align 4, !insn.addr !249
  store i32 0, i32* %1, align 4, !insn.addr !250
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !250
  br label %dec_label_pc_1804, !insn.addr !250

dec_label_pc_1804:                                ; preds = %dec_label_pc_17f4, %dec_label_pc_17ee, %dec_label_pc_17dd
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !251
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1806:
  ret i32 21, !insn.addr !252
}

define i32 @param_complex_cast(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1810:
  %eax.0.reg2mem = alloca i32, !insn.addr !253
  %0 = icmp eq i32 %arg2, 0, !insn.addr !254
  %1 = icmp eq i1 %0, false, !insn.addr !255
  br i1 %1, label %dec_label_pc_1825, label %dec_label_pc_1821, !insn.addr !255

dec_label_pc_1821:                                ; preds = %dec_label_pc_1810
  %2 = inttoptr i32 %arg1 to i32*, !insn.addr !256
  %3 = load i32, i32* %2, align 4, !insn.addr !256
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !257
  br label %dec_label_pc_1830, !insn.addr !257

dec_label_pc_1825:                                ; preds = %dec_label_pc_1810
  %4 = icmp eq i32 %arg2, 1, !insn.addr !258
  %5 = icmp eq i1 %4, false, !insn.addr !259
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !259
  br i1 %5, label %dec_label_pc_1830, label %dec_label_pc_182b, !insn.addr !259

dec_label_pc_182b:                                ; preds = %dec_label_pc_1825
  %6 = add i32 %arg1, 4, !insn.addr !260
  %7 = inttoptr i32 %6 to i32*, !insn.addr !260
  %8 = load i32, i32* %7, align 4, !insn.addr !260
  %9 = inttoptr i32 %arg1 to i32*, !insn.addr !261
  %10 = load i32, i32* %9, align 4, !insn.addr !261
  %11 = add i32 %10, %8, !insn.addr !261
  store i32 %11, i32* %eax.0.reg2mem, !insn.addr !261
  br label %dec_label_pc_1830, !insn.addr !261

dec_label_pc_1830:                                ; preds = %dec_label_pc_182b, %dec_label_pc_1825, %dec_label_pc_1821
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !262

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1832:
  ret i32 305419896, !insn.addr !263
}

define i32 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_183c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !264
  ret i32 %2, !insn.addr !265
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_184b:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !266
  %eax.0.reg2mem = alloca i32, !insn.addr !266
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !267
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !268
  %5 = add i32 %3, -76, !insn.addr !269
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_1860, !insn.addr !270

dec_label_pc_1860:                                ; preds = %dec_label_pc_1860, %dec_label_pc_184b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = mul i32 %eax.0.reload, 4, !insn.addr !269
  %7 = add i32 %5, %6, !insn.addr !269
  %8 = inttoptr i32 %7 to i32*, !insn.addr !269
  store i32 %eax.0.reload, i32* %8, align 4, !insn.addr !269
  %9 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !271
  %exitcond = icmp eq i32 %9, 16
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !272
  br i1 %exitcond, label %dec_label_pc_186a, label %dec_label_pc_1860, !insn.addr !272

dec_label_pc_186a:                                ; preds = %dec_label_pc_1860
  %10 = add i32 %2, %1, !insn.addr !273
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !274
  %12 = icmp eq i32 %4, %11, !insn.addr !274
  store i32 %10, i32* %eax.1.reg2mem, !insn.addr !275
  br i1 %12, label %dec_label_pc_1881, label %dec_label_pc_187c, !insn.addr !275

dec_label_pc_187c:                                ; preds = %dec_label_pc_186a
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !276
  store i32 %13, i32* %eax.1.reg2mem, !insn.addr !276
  br label %dec_label_pc_1881, !insn.addr !276

dec_label_pc_1881:                                ; preds = %dec_label_pc_187c, %dec_label_pc_186a
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !277

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_order_dep(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1883:
  %0 = add i32 %arg2, %arg1, !insn.addr !278
  ret i32 %0, !insn.addr !279
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_1892:
  ret i32 4, !insn.addr !280
}

define i32 @test_parameter_passing() local_unnamed_addr {
dec_label_pc_189c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !281
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7685), !insn.addr !282
  %4 = inttoptr i32 %3 to i8*, !insn.addr !283
  %5 = call i32 @puts(i8* %4), !insn.addr !284
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7652), !insn.addr !285
  %7 = inttoptr i32 %6 to i8*, !insn.addr !286
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !287
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7635), !insn.addr !288
  %10 = inttoptr i32 %9 to i8*, !insn.addr !289
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %10), !insn.addr !290
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7618), !insn.addr !291
  %13 = inttoptr i32 %12 to i8*, !insn.addr !292
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %13), !insn.addr !293
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7601), !insn.addr !294
  %16 = inttoptr i32 %15 to i8*, !insn.addr !295
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !296
  %18 = call i32 @call_ptr_array(), !insn.addr !297
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7584), !insn.addr !298
  %20 = inttoptr i32 %19 to i8*, !insn.addr !299
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !300
  %22 = call i32 @call_varargs_param(), !insn.addr !301
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7567), !insn.addr !302
  %24 = inttoptr i32 %23 to i8*, !insn.addr !303
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !304
  %26 = call i32 @call_func_ptr_param(), !insn.addr !305
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7550), !insn.addr !306
  %28 = inttoptr i32 %27 to i8*, !insn.addr !307
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !308
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7533), !insn.addr !309
  %31 = inttoptr i32 %30 to i8*, !insn.addr !310
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %31), !insn.addr !311
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7516), !insn.addr !312
  %34 = inttoptr i32 %33 to i8*, !insn.addr !313
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %34), !insn.addr !314
  %36 = call i32 @call_struct_byval(), !insn.addr !315
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7499), !insn.addr !316
  %38 = inttoptr i32 %37 to i8*, !insn.addr !317
  %39 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %38), !insn.addr !318
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2723 to i32), i32 -7482), !insn.addr !319
  %41 = inttoptr i32 %40 to i8*, !insn.addr !320
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !321
  ret i32 %42, !insn.addr !322
}

define i32 @ret_basic_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_19ad:
  %0 = mul i32 %arg1, 2, !insn.addr !323
  ret i32 %0, !insn.addr !324
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_19bb:
  ret i32 42, !insn.addr !325
}

define i32 @ret_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_19c5:
  %0 = add i32 %arg1, 4, !insn.addr !326
  ret i32 %0, !insn.addr !327
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_19d4:
  ret i32 20, !insn.addr !328
}

define i32 @ret_small_struct(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_19de:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !329
  store i32 %arg2, i32* %0, align 4, !insn.addr !329
  %1 = add i32 %arg1, 4, !insn.addr !330
  %2 = inttoptr i32 %1 to i32*, !insn.addr !330
  store i32 %arg3, i32* %2, align 4, !insn.addr !330
  ret i32 %arg1, !insn.addr !331

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_19f7:
  ret i32 7, !insn.addr !332
}

define i32 @ret_large_struct(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a01:
  %eax.0.reg2mem = alloca i32, !insn.addr !333
  %ecx.0.reg2mem = alloca i32, !insn.addr !333
  %stack_var_-80 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !334
  %1 = ptrtoint i32* %stack_var_-80 to i32, !insn.addr !335
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !336
  br label %dec_label_pc_1a1e, !insn.addr !336

dec_label_pc_1a1e:                                ; preds = %dec_label_pc_1a1e, %dec_label_pc_1a01
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %2 = add i32 %ecx.0.reload, %arg2, !insn.addr !337
  %3 = mul i32 %ecx.0.reload, 4, !insn.addr !338
  %4 = add i32 %3, %1, !insn.addr !338
  %5 = inttoptr i32 %4 to i32*, !insn.addr !338
  store i32 %2, i32* %5, align 4, !insn.addr !338
  %6 = add nuw nsw i32 %ecx.0.reload, 1, !insn.addr !339
  %exitcond = icmp eq i32 %6, 16
  store i32 %6, i32* %ecx.0.reg2mem, !insn.addr !340
  br i1 %exitcond, label %dec_label_pc_1a2f, label %dec_label_pc_1a1e, !insn.addr !340

dec_label_pc_1a2f:                                ; preds = %dec_label_pc_1a1e
  %7 = ptrtoint i32* %arg1 to i32
  %8 = bitcast i32* %stack_var_-80 to i8*, !insn.addr !341
  %9 = bitcast i32* %arg1 to i8*, !insn.addr !341
  call void @__asm_rep_movsd_memcpy(i8* %9, i8* nonnull %8, i32 16), !insn.addr !341
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !342
  %11 = icmp eq i32 %0, %10, !insn.addr !342
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !343
  br i1 %11, label %dec_label_pc_1a44, label %dec_label_pc_1a3f, !insn.addr !343

dec_label_pc_1a3f:                                ; preds = %dec_label_pc_1a2f
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !344
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !344
  br label %dec_label_pc_1a44, !insn.addr !344

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a3f, %dec_label_pc_1a2f
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !345

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 0, 2, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 16, { 1, 0, 2, 3 }
  uselistorder i32 4, { 0, 9, 10, 5, 1, 11, 8, 2, 3, 6, 7, 12, 4 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1a4d:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !346
  %1 = load i32, i32* %0
  %stack_var_-80 = alloca i32, align 4
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !347
  %3 = call i32 @ret_large_struct(i32* nonnull %stack_var_-80, i32 100), !insn.addr !348
  %4 = load i32, i32* %stack_var_-80, align 4, !insn.addr !349
  %5 = add i32 %4, %1, !insn.addr !349
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !350
  %7 = icmp eq i32 %2, %6, !insn.addr !350
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !351
  br i1 %7, label %dec_label_pc_1a84, label %dec_label_pc_1a7f, !insn.addr !351

dec_label_pc_1a7f:                                ; preds = %dec_label_pc_1a4d
  %8 = call i32 @__stack_chk_fail_local(), !insn.addr !352
  store i32 %8, i32* %eax.0.reg2mem, !insn.addr !352
  br label %dec_label_pc_1a84, !insn.addr !352

dec_label_pc_1a84:                                ; preds = %dec_label_pc_1a7f, %dec_label_pc_1a4d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !353

; uselistorder directives
  uselistorder i32* %stack_var_-80, { 1, 0 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 3, 4, 2, 1, 0 }
  uselistorder i32 100, { 1, 0 }
  uselistorder i32 20, { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10 }
}

define i32 @ret_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a86:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !354
  %3 = icmp eq i32 %arg1, 0, !insn.addr !355
  %spec.select.v = select i1 %3, i32 add (i32 ptrtoint (i32* @global_var_253d to i32), i32 -11595), i32 add (i32 ptrtoint (i32* @global_var_253d to i32), i32 -11580)
  %spec.select = add i32 %1, %spec.select.v
  ret i32 %spec.select, !insn.addr !356
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1aac:
  ret i32 10, !insn.addr !357
}

define i32 @ret_opaque_handle(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ab6:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !358
  %3 = icmp eq i32 %arg1, 0, !insn.addr !359
  %4 = icmp eq i1 %3, false, !insn.addr !360
  %spec.select.v = select i1 %4, i32 add (i32 ptrtoint (i32* @global_var_250d to i32), i32 76), i32 add (i32 ptrtoint (i32* @global_var_250d to i32), i32 84)
  %spec.select = add i32 %1, %spec.select.v
  ret i32 %spec.select, !insn.addr !361
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_1adc:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !362
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_24e7 to i32), i32 84), !insn.addr !363
  %2 = inttoptr i32 %1 to i32*, !insn.addr !363
  %3 = load i32, i32* %2, align 4, !insn.addr !363
  ret i32 %3, !insn.addr !364

; uselistorder directives
  uselistorder i32 84, { 1, 0 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 2, 1, 0 }
}

define i32 @ret_complex_expr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1af1:
  %0 = mul i32 %arg3, 2, !insn.addr !365
  %1 = add i32 %arg3, 10, !insn.addr !366
  %2 = sub i32 %arg1, %arg2, !insn.addr !367
  %3 = xor i32 %arg2, %arg1, !insn.addr !367
  %4 = xor i32 %2, %arg1, !insn.addr !367
  %5 = and i32 %4, %3, !insn.addr !367
  %6 = icmp slt i32 %5, 0, !insn.addr !367
  %7 = icmp eq i32 %2, 0, !insn.addr !367
  %8 = icmp slt i32 %2, 0, !insn.addr !367
  %9 = icmp eq i1 %8, %6, !insn.addr !368
  %10 = icmp eq i1 %7, false, !insn.addr !368
  %11 = icmp eq i1 %9, %10, !insn.addr !368
  %12 = select i1 %11, i32 %0, i32 %1, !insn.addr !368
  ret i32 %12, !insn.addr !369

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 0, { 23, 24, 25, 26, 27, 0, 1, 28, 29, 30, 31, 2, 3, 4, 16, 5, 6, 7, 17, 8, 35, 9, 32, 10, 11, 33, 12, 13, 14, 18, 34, 19, 20, 21, 15, 22 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1b0c:
  ret i32 40, !insn.addr !370
}

define i32 @ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b16:
  %0 = icmp ult i32 %arg1, 3
  %1 = mul i32 %arg1, 10
  %2 = add i32 %1, 10
  %eax.0 = select i1 %0, i32 %2, i32 -1
  ret i32 %eax.0, !insn.addr !371

; uselistorder directives
  uselistorder i32 10, { 2, 3, 4, 0, 6, 1, 5 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1b30:
  ret i32 60, !insn.addr !372
}

define i32 @ret_void(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b3a:
  %0 = mul i32 %arg1, 3, !insn.addr !373
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !374
  store i32 %0, i32* %1, align 4, !insn.addr !374
  ret i32 %arg2, !insn.addr !375

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_1b4c:
  ret i32 21, !insn.addr !376
}

define i32 @test_return_values() local_unnamed_addr {
dec_label_pc_1b56:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !377
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7465), !insn.addr !378
  %4 = inttoptr i32 %3 to i8*, !insn.addr !379
  %5 = call i32 @puts(i8* %4), !insn.addr !380
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7435), !insn.addr !381
  %7 = inttoptr i32 %6 to i8*, !insn.addr !382
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !383
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7407), !insn.addr !384
  %10 = inttoptr i32 %9 to i8*, !insn.addr !385
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %10), !insn.addr !386
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7379), !insn.addr !387
  %13 = inttoptr i32 %12 to i8*, !insn.addr !388
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %13), !insn.addr !389
  %15 = call i32 @call_ret_large_struct(), !insn.addr !390
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7352), !insn.addr !391
  %17 = inttoptr i32 %16 to i8*, !insn.addr !392
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %17), !insn.addr !393
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7323), !insn.addr !394
  %20 = inttoptr i32 %19 to i8*, !insn.addr !395
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !396
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7295), !insn.addr !397
  %23 = inttoptr i32 %22 to i8*, !insn.addr !398
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %23), !insn.addr !399
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7266), !insn.addr !400
  %26 = inttoptr i32 %25 to i8*, !insn.addr !401
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !402
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7238), !insn.addr !403
  %29 = inttoptr i32 %28 to i8*, !insn.addr !404
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !405
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2469 to i32), i32 -7210), !insn.addr !406
  %32 = inttoptr i32 %31 to i8*, !insn.addr !407
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !408
  ret i32 %33, !insn.addr !409

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 29, 31, 30, 35, 34, 33, 32, 14, 13, 12, 16, 15, 20, 19, 25, 24, 23, 11, 10, 22, 21, 28, 27, 26, 18, 17, 8, 7, 2, 1, 0, 4, 3, 6, 5, 9, 36 }
  uselistorder i32 (i8*)* @puts, { 2, 0, 1, 3 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c33:
  ret i32 %arg1, !insn.addr !410
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !411
  call void @__stack_chk_fail(), !insn.addr !412
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !413
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1c60:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !414
  %ebx.0.reg2mem = alloca i32, !insn.addr !414
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !415
  %3 = add i32 %1, add (i32 ptrtoint ([7 x i8]* @global_var_2363 to i32), i32 -232), !insn.addr !416
  %4 = inttoptr i32 %3 to i32*, !insn.addr !416
  %5 = load i32, i32* %4, align 4, !insn.addr !416
  %6 = icmp eq i32 %5, -1, !insn.addr !417
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !418
  store i32 -1, i32* %merge.reg2mem, !insn.addr !418
  br i1 %6, label %dec_label_pc_1c9d, label %dec_label_pc_1c90, !insn.addr !418

dec_label_pc_1c90:                                ; preds = %dec_label_pc_1c60, %dec_label_pc_1c90
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !419
  %8 = inttoptr i32 %7 to i32*, !insn.addr !419
  %9 = load i32, i32* %8, align 4, !insn.addr !419
  %10 = icmp eq i32 %9, -1, !insn.addr !420
  %11 = icmp eq i1 %10, false, !insn.addr !421
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !421
  store i32 %9, i32* %merge.reg2mem, !insn.addr !421
  br i1 %11, label %dec_label_pc_1c90, label %dec_label_pc_1c9d, !insn.addr !421

dec_label_pc_1c9d:                                ; preds = %dec_label_pc_1c90, %dec_label_pc_1c60
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !422

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 6, 0, 1, 2, 3, 5, 4 }
  uselistorder i32 -4, { 1, 0 }
  uselistorder i32 -1, { 6, 0, 7, 5, 1, 2, 3, 8, 4 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 4, 3, 0, 2 }
  uselistorder label %dec_label_pc_1c90, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1cac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !423
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !424
  ret i32 %3, !insn.addr !425

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 6, 4, 3, 2, 1, 5, 0 }
  uselistorder i32 1, { 21, 23, 22, 20, 19, 53, 54, 55, 56, 57, 58, 59, 60, 61, 18, 17, 16, 91, 24, 15, 103, 92, 26, 25, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 14, 104, 93, 28, 27, 13, 12, 73, 29, 30, 31, 11, 105, 94, 34, 33, 32, 95, 35, 106, 38, 37, 36, 101, 52, 74, 75, 108, 41, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 97, 96, 42, 40, 39, 10, 43, 102, 98, 45, 44, 46, 9, 107, 99, 49, 48, 47, 8, 7, 6, 50, 5, 90, 51, 4, 3, 2, 100, 1, 0 }
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
!10 = !{i64 4346}
!11 = !{i64 4351}
!12 = !{i64 4356}
!13 = !{i64 4364}
!14 = !{i64 4383}
!15 = !{i64 4400}
!16 = !{i64 4406}
!17 = !{i64 4411}
!18 = !{i64 4415}
!19 = !{i64 4419}
!20 = !{i64 4432}
!21 = !{i64 4449}
!22 = !{i64 4457}
!23 = !{i64 4459}
!24 = !{i64 4482}
!25 = !{i64 4496}
!26 = !{i64 4566}
!27 = !{i64 4576}
!28 = !{i64 4584}
!29 = !{i64 4600}
!30 = !{i64 4607}
!31 = !{i64 4609}
!32 = !{i64 4615}
!33 = !{i64 4617}
!34 = !{i64 4622}
!35 = !{i64 4630}
!36 = !{i64 4635}
!37 = !{i64 4694}
!38 = !{i64 4699}
!39 = !{i64 4713}
!40 = !{i64 4724}
!41 = !{i64 4732}
!42 = !{i64 4736}
!43 = !{i64 4748}
!44 = !{i64 4751}
!45 = !{i64 4763}
!46 = !{i64 4765}
!47 = !{i64 4777}
!48 = !{i64 4779}
!49 = !{i64 4790}
!50 = !{i64 4794}
!51 = !{i64 4804}
!52 = !{i64 4815}
!53 = !{i64 4820}
!54 = !{i64 4832}
!55 = !{i64 4838}
!56 = !{i64 4843}
!57 = !{i64 4847}
!58 = !{i64 4859}
!59 = !{i64 4869}
!60 = !{i64 4880}
!61 = !{i64 4883}
!62 = !{i64 4886}
!63 = !{i64 4889}
!64 = !{i64 4893}
!65 = !{i64 4903}
!66 = !{i64 4914}
!67 = !{i64 4917}
!68 = !{i64 4920}
!69 = !{i64 4924}
!70 = !{i64 4934}
!71 = !{i64 4945}
!72 = !{i64 4948}
!73 = !{i64 4951}
!74 = !{i64 4954}
!75 = !{i64 4957}
!76 = !{i64 4961}
!77 = !{i64 4971}
!78 = !{i64 4982}
!79 = !{i64 4985}
!80 = !{i64 4988}
!81 = !{i64 4991}
!82 = !{i64 4995}
!83 = !{i64 5005}
!84 = !{i64 5016}
!85 = !{i64 5019}
!86 = !{i64 5022}
!87 = !{i64 5026}
!88 = !{i64 5036}
!89 = !{i64 5046}
!90 = !{i64 5047}
!91 = !{i64 5058}
!92 = !{i64 5064}
!93 = !{i64 5066}
!94 = !{i64 5069}
!95 = !{i64 5075}
!96 = !{i64 5085}
!97 = !{i64 5096}
!98 = !{i64 5099}
!99 = !{i64 5102}
!100 = !{i64 5105}
!101 = !{i64 5108}
!102 = !{i64 5111}
!103 = !{i64 5114}
!104 = !{i64 5118}
!105 = !{i64 5119}
!106 = !{i64 5131}
!107 = !{i64 5157}
!108 = !{i64 5159}
!109 = !{i64 5168}
!110 = !{i64 5176}
!111 = !{i64 5182}
!112 = !{i64 5191}
!113 = !{i64 5201}
!114 = !{i64 5211}
!115 = !{i64 5216}
!116 = !{i64 5232}
!117 = !{i64 5233}
!118 = !{i64 5244}
!119 = !{i64 5246}
!120 = !{i64 5254}
!121 = !{i64 5258}
!122 = !{i64 5261}
!123 = !{i64 5262}
!124 = !{i64 5275}
!125 = !{i64 5277}
!126 = !{i64 5279}
!127 = !{i64 5281}
!128 = !{i64 5286}
!129 = !{i64 5287}
!130 = !{i64 5296}
!131 = !{i64 5303}
!132 = !{i64 5320}
!133 = !{i64 5331}
!134 = !{i64 5337}
!135 = !{i64 5338}
!136 = !{i64 5346}
!137 = !{i64 5354}
!138 = !{i64 5357}
!139 = !{i64 5365}
!140 = !{i64 5373}
!141 = !{i64 5376}
!142 = !{i64 5384}
!143 = !{i64 5392}
!144 = !{i64 5395}
!145 = !{i64 5403}
!146 = !{i64 5411}
!147 = !{i64 5414}
!148 = !{i64 5422}
!149 = !{i64 5430}
!150 = !{i64 5433}
!151 = !{i64 5441}
!152 = !{i64 5449}
!153 = !{i64 5452}
!154 = !{i64 5460}
!155 = !{i64 5468}
!156 = !{i64 5471}
!157 = !{i64 5479}
!158 = !{i64 5487}
!159 = !{i64 5490}
!160 = !{i64 5498}
!161 = !{i64 5506}
!162 = !{i64 5509}
!163 = !{i64 5517}
!164 = !{i64 5525}
!165 = !{i64 5528}
!166 = !{i64 5547}
!167 = !{i64 5556}
!168 = !{i64 5562}
!169 = !{i64 5565}
!170 = !{i64 5573}
!171 = !{i64 5581}
!172 = !{i64 5584}
!173 = !{i64 5592}
!174 = !{i64 5600}
!175 = !{i64 5603}
!176 = !{i64 5611}
!177 = !{i64 5619}
!178 = !{i64 5622}
!179 = !{i64 5635}
!180 = !{i64 5637}
!181 = !{i64 5644}
!182 = !{i64 5648}
!183 = !{i64 5651}
!184 = !{i64 5657}
!185 = !{i64 5660}
!186 = !{i64 5663}
!187 = !{i64 5665}
!188 = !{i64 5680}
!189 = !{i64 5706}
!190 = !{i64 5713}
!191 = !{i64 5716}
!192 = !{i64 5724}
!193 = !{i64 5732}
!194 = !{i64 5735}
!195 = !{i64 5746}
!196 = !{i64 5753}
!197 = !{i64 5755}
!198 = !{i64 5767}
!199 = !{i64 5779}
!200 = !{i64 5781}
!201 = !{i64 5791}
!202 = !{i64 5802}
!203 = !{i64 5810}
!204 = !{i64 5820}
!205 = !{i64 5830}
!206 = !{i64 5840}
!207 = !{i64 5852}
!208 = !{i64 5855}
!209 = !{i64 5859}
!210 = !{i64 5861}
!211 = !{i64 5871}
!212 = !{i64 5872}
!213 = !{i64 5890}
!214 = !{i64 5892}
!215 = !{i64 5895}
!216 = !{i64 5896}
!217 = !{i64 5899}
!218 = !{i64 5907}
!219 = !{i64 5908}
!220 = !{i64 5912}
!221 = !{i64 5935}
!222 = !{i64 5947}
!223 = !{i64 5959}
!224 = !{i64 5964}
!225 = !{i64 5975}
!226 = !{i64 5982}
!227 = !{i64 5984}
!228 = !{i64 5995}
!229 = !{i64 5996}
!230 = !{i64 6007}
!231 = !{i64 6013}
!232 = !{i64 6015}
!233 = !{i64 6018}
!234 = !{i64 6024}
!235 = !{i64 6045}
!236 = !{i64 6051}
!237 = !{i64 6069}
!238 = !{i64 6072}
!239 = !{i64 6077}
!240 = !{i64 6095}
!241 = !{i64 6102}
!242 = !{i64 6108}
!243 = !{i64 6109}
!244 = !{i64 6122}
!245 = !{i64 6124}
!246 = !{i64 6126}
!247 = !{i64 6128}
!248 = !{i64 6130}
!249 = !{i64 6135}
!250 = !{i64 6142}
!251 = !{i64 6149}
!252 = !{i64 6159}
!253 = !{i64 6160}
!254 = !{i64 6173}
!255 = !{i64 6175}
!256 = !{i64 6177}
!257 = !{i64 6179}
!258 = !{i64 6184}
!259 = !{i64 6185}
!260 = !{i64 6187}
!261 = !{i64 6190}
!262 = !{i64 6193}
!263 = !{i64 6203}
!264 = !{i64 6214}
!265 = !{i64 6218}
!266 = !{i64 6219}
!267 = !{i64 6224}
!268 = !{i64 6229}
!269 = !{i64 6240}
!270 = !{i64 6238}
!271 = !{i64 6244}
!272 = !{i64 6248}
!273 = !{i64 6253}
!274 = !{i64 6259}
!275 = !{i64 6266}
!276 = !{i64 6268}
!277 = !{i64 6274}
!278 = !{i64 6285}
!279 = !{i64 6289}
!280 = !{i64 6299}
!281 = !{i64 6308}
!282 = !{i64 6322}
!283 = !{i64 6328}
!284 = !{i64 6329}
!285 = !{i64 6337}
!286 = !{i64 6345}
!287 = !{i64 6348}
!288 = !{i64 6356}
!289 = !{i64 6364}
!290 = !{i64 6367}
!291 = !{i64 6375}
!292 = !{i64 6383}
!293 = !{i64 6386}
!294 = !{i64 6394}
!295 = !{i64 6405}
!296 = !{i64 6408}
!297 = !{i64 6413}
!298 = !{i64 6422}
!299 = !{i64 6428}
!300 = !{i64 6431}
!301 = !{i64 6436}
!302 = !{i64 6445}
!303 = !{i64 6451}
!304 = !{i64 6454}
!305 = !{i64 6459}
!306 = !{i64 6468}
!307 = !{i64 6474}
!308 = !{i64 6477}
!309 = !{i64 6485}
!310 = !{i64 6493}
!311 = !{i64 6496}
!312 = !{i64 6504}
!313 = !{i64 6515}
!314 = !{i64 6518}
!315 = !{i64 6523}
!316 = !{i64 6532}
!317 = !{i64 6538}
!318 = !{i64 6541}
!319 = !{i64 6549}
!320 = !{i64 6557}
!321 = !{i64 6560}
!322 = !{i64 6572}
!323 = !{i64 6584}
!324 = !{i64 6586}
!325 = !{i64 6596}
!326 = !{i64 6608}
!327 = !{i64 6611}
!328 = !{i64 6621}
!329 = !{i64 6635}
!330 = !{i64 6640}
!331 = !{i64 6644}
!332 = !{i64 6656}
!333 = !{i64 6657}
!334 = !{i64 6674}
!335 = !{i64 6689}
!336 = !{i64 6684}
!337 = !{i64 6692}
!338 = !{i64 6694}
!339 = !{i64 6697}
!340 = !{i64 6701}
!341 = !{i64 6705}
!342 = !{i64 6710}
!343 = !{i64 6717}
!344 = !{i64 6719}
!345 = !{i64 6730}
!346 = !{i64 6733}
!347 = !{i64 6743}
!348 = !{i64 6760}
!349 = !{i64 6768}
!350 = !{i64 6774}
!351 = !{i64 6781}
!352 = !{i64 6783}
!353 = !{i64 6789}
!354 = !{i64 6794}
!355 = !{i64 6808}
!356 = !{i64 6827}
!357 = !{i64 6837}
!358 = !{i64 6842}
!359 = !{i64 6856}
!360 = !{i64 6866}
!361 = !{i64 6875}
!362 = !{i64 6880}
!363 = !{i64 6890}
!364 = !{i64 6896}
!365 = !{i64 6910}
!366 = !{i64 6913}
!367 = !{i64 6916}
!368 = !{i64 6920}
!369 = !{i64 6923}
!370 = !{i64 6933}
!371 = !{i64 6959}
!372 = !{i64 6969}
!373 = !{i64 6977}
!374 = !{i64 6984}
!375 = !{i64 6987}
!376 = !{i64 6997}
!377 = !{i64 7006}
!378 = !{i64 7020}
!379 = !{i64 7026}
!380 = !{i64 7027}
!381 = !{i64 7035}
!382 = !{i64 7043}
!383 = !{i64 7046}
!384 = !{i64 7054}
!385 = !{i64 7062}
!386 = !{i64 7065}
!387 = !{i64 7073}
!388 = !{i64 7081}
!389 = !{i64 7084}
!390 = !{i64 7089}
!391 = !{i64 7098}
!392 = !{i64 7104}
!393 = !{i64 7107}
!394 = !{i64 7115}
!395 = !{i64 7123}
!396 = !{i64 7126}
!397 = !{i64 7134}
!398 = !{i64 7146}
!399 = !{i64 7149}
!400 = !{i64 7157}
!401 = !{i64 7165}
!402 = !{i64 7168}
!403 = !{i64 7176}
!404 = !{i64 7184}
!405 = !{i64 7187}
!406 = !{i64 7195}
!407 = !{i64 7203}
!408 = !{i64 7206}
!409 = !{i64 7218}
!410 = !{i64 7222}
!411 = !{i64 7237}
!412 = !{i64 7251}
!413 = !{i64 7262}
!414 = !{i64 7264}
!415 = !{i64 7268}
!416 = !{i64 7279}
!417 = !{i64 7285}
!418 = !{i64 7288}
!419 = !{i64 7314}
!420 = !{i64 7320}
!421 = !{i64 7323}
!422 = !{i64 7329}
!423 = !{i64 7348}
!424 = !{i64 7359}
!425 = !{i64 7368}
