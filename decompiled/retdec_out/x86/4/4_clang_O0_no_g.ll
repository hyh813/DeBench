source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_13dc = local_unnamed_addr constant [4 x i8] c"$\0C(\00"
@global_var_3f8f = local_unnamed_addr constant i32 239140864
@global_var_3f04 = local_unnamed_addr constant i32 -6436
@global_var_3ec4 = constant i32 56
@global_var_3d44 = local_unnamed_addr constant i32 14
@global_var_404 = global i32 263
@global_var_3cf4 = constant i32* @global_var_404
@global_var_3c84 = local_unnamed_addr constant i32 92686597
@global_var_3bf4 = local_unnamed_addr constant i32 135151872
@global_var_3b98 = constant i32 222429829
@global_var_3b64 = constant i32 28
@global_var_3b28 = constant i32 1252
@global_var_3af4 = local_unnamed_addr constant i32 135151872
@global_var_3a84 = local_unnamed_addr constant i32 1088
@global_var_3994 = local_unnamed_addr constant i32 4
@global_var_3904 = local_unnamed_addr constant i32 222429829
@global_var_38d4 = constant i32 -9092
@global_var_37a4 = constant i32 4
@global_var_3767 = constant i32 7172
@global_var_3717 = local_unnamed_addr constant i32 239140864
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

define i32 @function_1060(i8* %s) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @strlen(i8* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32* @function_1070(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32 @function_1080() local_unnamed_addr {
dec_label_pc_1080:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !8
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1090:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10bc(i32 %2), !insn.addr !9
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20308, !insn.addr !10
  %6 = inttoptr i32 %5 to i32*, !insn.addr !10
  %7 = load i32, i32* %6, align 4, !insn.addr !10
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !11
  %9 = call i32 @__asm_hlt(), !insn.addr !12
  unreachable, !insn.addr !12

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10bc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !15
  %3 = add i32 %1, 20323, !insn.addr !16
  ret i32 %3, !insn.addr !17
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !18
  ret i32 0, !insn.addr !19
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !20
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !21
  %3 = add i32 %1, 20171, !insn.addr !22
  %4 = inttoptr i32 %3 to i8*, !insn.addr !22
  %5 = load i8, i8* %4, align 1, !insn.addr !22
  %6 = icmp eq i8 %5, 0, !insn.addr !22
  %7 = icmp eq i1 %6, false, !insn.addr !23
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !23
  br i1 %7, label %dec_label_pc_11e2, label %dec_label_pc_1181, !insn.addr !23

dec_label_pc_1181:                                ; preds = %dec_label_pc_1160
  %8 = add i32 %1, 20099, !insn.addr !24
  %9 = inttoptr i32 %8 to i32*, !insn.addr !24
  %10 = load i32, i32* %9, align 4, !insn.addr !24
  %11 = icmp eq i32 %10, 0, !insn.addr !25
  br i1 %11, label %dec_label_pc_119e, label %dec_label_pc_118b, !insn.addr !26

dec_label_pc_118b:                                ; preds = %dec_label_pc_1181
  %12 = call i32 @function_1080(), !insn.addr !27
  br label %dec_label_pc_119e, !insn.addr !28

dec_label_pc_119e:                                ; preds = %dec_label_pc_118b, %dec_label_pc_1181
  %13 = call i32 @deregister_tm_clones(), !insn.addr !29
  store i8 1, i8* %4, align 1, !insn.addr !30
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !30
  br label %dec_label_pc_11e2, !insn.addr !30

dec_label_pc_11e2:                                ; preds = %dec_label_pc_119e, %dec_label_pc_1160
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !31

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i32 @register_tm_clones(), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_11f9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !33
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_11fd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !34
}

define i32 @cdecl_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1210:
  %0 = add i32 %arg2, %arg1, !insn.addr !35
  ret i32 %0, !insn.addr !36
}

define i32 @call_cdecl(i32 %arg1) local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @cdecl_func(i32 5, i32 10), !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @stdcall_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i32 %arg2, %arg1, !insn.addr !39
  ret i32 %0, !insn.addr !40
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_1280:
  %0 = call i32 @stdcall_func(i32 5, i32 10), !insn.addr !41
  ret i32 %0, !insn.addr !42
}

define i32 @fastcall_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %1, %arg1, !insn.addr !43
  %4 = add i32 %3, %2, !insn.addr !44
  ret i32 %4, !insn.addr !45

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_12d0:
  %0 = call i32 @fastcall_func(i32 3), !insn.addr !46
  ret i32 %0, !insn.addr !47
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_1300:
  ret i32 15, !insn.addr !48
}

define i32 @arm_aapcs_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1310:
  %0 = add i32 %arg2, %arg1, !insn.addr !49
  %1 = add i32 %0, %arg3, !insn.addr !50
  %2 = add i32 %1, %arg4, !insn.addr !51
  %3 = add i32 %2, %arg5, !insn.addr !52
  ret i32 %3, !insn.addr !53
}

define i32 @call_arm_aapcs(i32 %arg1) local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i32 @arm_aapcs_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !54
  ret i32 %0, !insn.addr !55
}

define i32 @mips_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1390:
  %0 = add i32 %arg2, %arg1, !insn.addr !56
  %1 = add i32 %0, %arg3, !insn.addr !57
  %2 = add i32 %1, %arg4, !insn.addr !58
  ret i32 %2, !insn.addr !59
}

define i32 @call_mips(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i32 @mips_func(i32 10, i32 20, i32 30, i32 40), !insn.addr !60
  ret i32 %0, !insn.addr !61
}

define i32 @amd64_sysv_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = add i32 %arg2, %arg1, !insn.addr !62
  %1 = add i32 %0, %arg3, !insn.addr !63
  %2 = add i32 %1, %arg4, !insn.addr !64
  %3 = add i32 %2, %arg5, !insn.addr !65
  %4 = add i32 %3, %arg6, !insn.addr !66
  ret i32 %4, !insn.addr !67
}

define i32 @call_amd64_sysv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @amd64_sysv_func(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6), !insn.addr !68
  ret i32 %0, !insn.addr !69
}

define i32 @ms_x64_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1470:
  %0 = add i32 %arg2, %arg1, !insn.addr !70
  %1 = add i32 %0, %arg3, !insn.addr !71
  %2 = add i32 %1, %arg4, !insn.addr !72
  %3 = add i32 %2, %arg5, !insn.addr !73
  ret i32 %3, !insn.addr !74
}

define i32 @call_ms_x64(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @ms_x64_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !75
  ret i32 %0, !insn.addr !76
}

define i32 @vectorcall_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = add i32 %arg2, %arg1, !insn.addr !77
  %1 = add i32 %0, %arg3, !insn.addr !78
  %2 = add i32 %1, %arg4, !insn.addr !79
  ret i32 %2, !insn.addr !80
}

define i32 @call_vectorcall(i32 %arg1) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @vectorcall_func(i32 1, i32 2, i32 3, i32 4), !insn.addr !81
  ret i32 %0, !insn.addr !82
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @cdecl_func(i32 1, i32 2), !insn.addr !83
  %1 = call i32 @stdcall_func(i32 3, i32 4), !insn.addr !84
  %2 = add i32 %1, %0, !insn.addr !85
  %3 = call i32 @fastcall_func(i32 7), !insn.addr !86
  %4 = add i32 %2, %3, !insn.addr !87
  ret i32 %4, !insn.addr !88

; uselistorder directives
  uselistorder i32 (i32)* @fastcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @stdcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @cdecl_func, { 1, 0 }
}

define i32 @varargs_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_15e0:
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !89
  %stack_var_-12.01.reg2mem = alloca i32, !insn.addr !89
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !89
  %storemerge3.reg2mem = alloca i32, !insn.addr !89
  %stack_var_8 = alloca i32, align 4
  %0 = icmp sgt i32 %arg1, 0, !insn.addr !90
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !90
  br i1 %0, label %dec_label_pc_160b.lr.ph, label %dec_label_pc_162c, !insn.addr !90

dec_label_pc_160b.lr.ph:                          ; preds = %dec_label_pc_15e0
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !91
  store i32 0, i32* %storemerge3.reg2mem
  store i32 %1, i32* %stack_var_-8.02.reg2mem
  store i32 0, i32* %stack_var_-12.01.reg2mem
  br label %dec_label_pc_160b

dec_label_pc_160b:                                ; preds = %dec_label_pc_160b, %dec_label_pc_160b.lr.ph
  %stack_var_-12.01.reload = load i32, i32* %stack_var_-12.01.reg2mem
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = add i32 %stack_var_-8.02.reload, 4, !insn.addr !92
  %3 = inttoptr i32 %stack_var_-8.02.reload to i32*, !insn.addr !93
  %4 = load i32, i32* %3, align 4, !insn.addr !93
  %5 = add i32 %4, %stack_var_-12.01.reload, !insn.addr !94
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !95
  %exitcond = icmp eq i32 %6, %arg1
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !90
  store i32 %2, i32* %stack_var_-8.02.reg2mem, !insn.addr !90
  store i32 %5, i32* %stack_var_-12.01.reg2mem, !insn.addr !90
  store i32 %5, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !90
  br i1 %exitcond, label %dec_label_pc_162c, label %dec_label_pc_160b, !insn.addr !90

dec_label_pc_162c:                                ; preds = %dec_label_pc_160b, %dec_label_pc_15e0
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !96

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.01.reg2mem, { 1, 0, 2 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_1640:
  ret i32 42, !insn.addr !97
}

define i32 @func_many_args(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_1650:
  %0 = add i32 %arg2, %arg1, !insn.addr !98
  %1 = add i32 %0, %arg3, !insn.addr !99
  %2 = add i32 %1, %arg4, !insn.addr !100
  %3 = add i32 %2, %arg5, !insn.addr !101
  %4 = add i32 %3, %arg6, !insn.addr !102
  %5 = add i32 %4, %arg7, !insn.addr !103
  %6 = add i32 %5, %arg8, !insn.addr !104
  ret i32 %6, !insn.addr !105
}

define i32 @func_mixed_args(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1690:
  %storemerge.reg2mem = alloca i32, !insn.addr !106
  %0 = icmp eq i32 %arg3, 0, !insn.addr !107
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !108
  br i1 %0, label %dec_label_pc_16e2, label %dec_label_pc_16c1, !insn.addr !108

dec_label_pc_16c1:                                ; preds = %dec_label_pc_1690
  %1 = inttoptr i32 %arg3 to i8*, !insn.addr !109
  %2 = call i32 @strlen(i8* %1), !insn.addr !109
  store i32 %2, i32* %storemerge.reg2mem, !insn.addr !110
  br label %dec_label_pc_16e2, !insn.addr !110

dec_label_pc_16e2:                                ; preds = %dec_label_pc_1690, %dec_label_pc_16c1
  %3 = sext i32 %arg4 to i64
  %4 = bitcast i64 %3 to double
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %5 = add i32 %storemerge.reload, %arg2, !insn.addr !111
  %6 = sitofp i32 %5 to x86_fp80, !insn.addr !112
  %7 = fpext double %4 to x86_fp80, !insn.addr !113
  %8 = fadd x86_fp80 %7, %6, !insn.addr !114
  %9 = sitofp i32 %arg5 to x86_fp80, !insn.addr !115
  %10 = fadd x86_fp80 %8, %9, !insn.addr !116
  %11 = fptosi x86_fp80 %10 to i32, !insn.addr !117
  ret i32 %11, !insn.addr !118

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16e2, { 1, 0 }
}

define i32 @func_struct_byval() local_unnamed_addr {
dec_label_pc_1730:
  %stack_var_-20.02.reg2mem = alloca i32, !insn.addr !119
  %storemerge3.reg2mem = alloca i32, !insn.addr !119
  %stack_var_4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_4 to i32, !insn.addr !120
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %stack_var_-20.02.reg2mem
  br label %dec_label_pc_175c

dec_label_pc_175c:                                ; preds = %dec_label_pc_1730, %dec_label_pc_175c
  %stack_var_-20.02.reload = load i32, i32* %stack_var_-20.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = mul i32 %storemerge3.reload, 8, !insn.addr !121
  %2 = add i32 %1, %0, !insn.addr !121
  %3 = inttoptr i32 %2 to i32*, !insn.addr !121
  %4 = load i32, i32* %3, align 4, !insn.addr !121
  %5 = add i32 %4, %stack_var_-20.02.reload, !insn.addr !122
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !123
  %exitcond = icmp eq i32 %6, 16
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !124
  store i32 %5, i32* %stack_var_-20.02.reg2mem, !insn.addr !124
  br i1 %exitcond, label %dec_label_pc_1787, label %dec_label_pc_175c, !insn.addr !124

dec_label_pc_1787:                                ; preds = %dec_label_pc_175c
  ret i32 %5, !insn.addr !125

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_175c, { 1, 0 }
}

define i32 @func_struct_byptr(i32* %arg1) local_unnamed_addr {
dec_label_pc_1790:
  %storemerge.reg2mem = alloca i32, !insn.addr !126
  %0 = icmp eq i32* %arg1, null, !insn.addr !127
  %1 = icmp eq i1 %0, false, !insn.addr !128
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !128
  br i1 %1, label %dec_label_pc_17ad, label %dec_label_pc_17bc, !insn.addr !128

dec_label_pc_17ad:                                ; preds = %dec_label_pc_1790
  %2 = ptrtoint i32* %arg1 to i32
  %3 = load i32, i32* %arg1, align 4, !insn.addr !129
  %4 = add i32 %2, 4, !insn.addr !130
  %5 = inttoptr i32 %4 to i32*, !insn.addr !130
  %6 = load i32, i32* %5, align 4, !insn.addr !130
  %7 = mul i32 %6, %3, !insn.addr !130
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !131
  br label %dec_label_pc_17bc, !insn.addr !131

dec_label_pc_17bc:                                ; preds = %dec_label_pc_1790, %dec_label_pc_17ad
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !132

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17bc, { 1, 0 }
}

define i32 @test_calling_conventions(i32 %arg1) local_unnamed_addr {
dec_label_pc_17d0:
  %0 = alloca i32
  %storemerge2.reg2mem = alloca i32, !insn.addr !133
  %stack_var_-180 = alloca i32, align 4
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-312 = alloca i8*, align 4
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !134
  %3 = add i32 %1, 6183, !insn.addr !135
  %4 = inttoptr i32 %3 to i8*, !insn.addr !136
  store i8* %4, i8** %stack_var_-312, align 4, !insn.addr !136
  %5 = call i32 (i8*, ...) @printf(i8* %4), !insn.addr !137
  %6 = call i32 @call_cdecl(i32 ptrtoint (i32* @0 to i32)), !insn.addr !138
  %7 = add i32 %1, 6217, !insn.addr !139
  %8 = inttoptr i32 %7 to i8*, !insn.addr !140
  store i8* %8, i8** %stack_var_-312, align 4, !insn.addr !140
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !141
  %10 = call i32 @call_stdcall(), !insn.addr !142
  %11 = add i32 %1, 6233, !insn.addr !143
  %12 = inttoptr i32 %11 to i8*, !insn.addr !144
  store i8* %12, i8** %stack_var_-312, align 4, !insn.addr !144
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !145
  %14 = call i32 @call_fastcall(), !insn.addr !146
  %15 = add i32 %1, 6249, !insn.addr !147
  %16 = inttoptr i32 %15 to i8*, !insn.addr !148
  store i8* %16, i8** %stack_var_-312, align 4, !insn.addr !148
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !149
  %18 = call i32 @call_thiscall(), !insn.addr !150
  %19 = add i32 %1, 6265, !insn.addr !151
  %20 = inttoptr i32 %19 to i8*, !insn.addr !152
  store i8* %20, i8** %stack_var_-312, align 4, !insn.addr !152
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !153
  %22 = call i32 @call_arm_aapcs(i32 ptrtoint (i32* @0 to i32)), !insn.addr !154
  %23 = add i32 %1, 6281, !insn.addr !155
  %24 = inttoptr i32 %23 to i8*, !insn.addr !156
  store i8* %24, i8** %stack_var_-312, align 4, !insn.addr !156
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !157
  %26 = call i32 @call_mips(i32 ptrtoint (i32* @0 to i32)), !insn.addr !158
  %27 = add i32 %1, 6297, !insn.addr !159
  %28 = inttoptr i32 %27 to i8*, !insn.addr !160
  store i8* %28, i8** %stack_var_-312, align 4, !insn.addr !160
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !161
  %30 = call i32 @call_amd64_sysv(i32 ptrtoint (i32* @0 to i32)), !insn.addr !162
  %31 = add i32 %1, 6313, !insn.addr !163
  %32 = inttoptr i32 %31 to i8*, !insn.addr !164
  store i8* %32, i8** %stack_var_-312, align 4, !insn.addr !164
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !165
  %34 = call i32 @call_ms_x64(i32 ptrtoint (i32* @0 to i32)), !insn.addr !166
  %35 = add i32 %1, 6329, !insn.addr !167
  %36 = inttoptr i32 %35 to i8*, !insn.addr !168
  store i8* %36, i8** %stack_var_-312, align 4, !insn.addr !168
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !169
  %38 = call i32 @call_vectorcall(i32 ptrtoint (i32* @0 to i32)), !insn.addr !170
  %39 = add i32 %1, 6345, !insn.addr !171
  %40 = inttoptr i32 %39 to i8*, !insn.addr !172
  store i8* %40, i8** %stack_var_-312, align 4, !insn.addr !172
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !173
  %42 = call i32 @mixed_conventions_test(), !insn.addr !174
  %43 = add i32 %1, 6361, !insn.addr !175
  %44 = inttoptr i32 %43 to i8*, !insn.addr !176
  store i8* %44, i8** %stack_var_-312, align 4, !insn.addr !176
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !177
  store i8* inttoptr (i32 5 to i8*), i8** %stack_var_-312, align 4, !insn.addr !178
  %46 = call i32 @varargs_func(i32 5), !insn.addr !179
  %47 = add i32 %1, 6377, !insn.addr !180
  %48 = inttoptr i32 %47 to i8*, !insn.addr !181
  store i8* %48, i8** %stack_var_-312, align 4, !insn.addr !181
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !182
  %50 = call i32 @func_no_args(), !insn.addr !183
  %51 = add i32 %1, 6417, !insn.addr !184
  %52 = inttoptr i32 %51 to i8*, !insn.addr !185
  store i8* %52, i8** %stack_var_-312, align 4, !insn.addr !185
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !186
  store i8* inttoptr (i32 1 to i8*), i8** %stack_var_-312, align 4, !insn.addr !187
  %54 = call i32 @func_many_args(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8), !insn.addr !188
  %55 = add i32 %1, 6451, !insn.addr !189
  %56 = inttoptr i32 %55 to i8*, !insn.addr !190
  store i8* %56, i8** %stack_var_-312, align 4, !insn.addr !190
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !191
  %58 = add i32 %1, 6490, !insn.addr !192
  store i8* inttoptr (i32 10 to i8*), i8** %stack_var_-312, align 4, !insn.addr !193
  %59 = call i32 @func_mixed_args(i32 10, i32 %58, i32 1374389535, i32 1074339512, i32 100, i32 0), !insn.addr !194
  %60 = add i32 %1, 6495, !insn.addr !195
  %61 = inttoptr i32 %60 to i8*, !insn.addr !196
  store i8* %61, i8** %stack_var_-312, align 4, !insn.addr !196
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !197
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1ab6

dec_label_pc_1ab6:                                ; preds = %dec_label_pc_17d0, %dec_label_pc_1ab6
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %63 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !198
  %64 = mul i32 %storemerge2.reload, 8, !insn.addr !199
  %65 = add i32 %64, %2
  %66 = add i32 %65, -160, !insn.addr !199
  %67 = inttoptr i32 %66 to i32*, !insn.addr !199
  store i32 %63, i32* %67, align 4, !insn.addr !199
  %68 = add i32 %65, -156, !insn.addr !200
  %69 = inttoptr i32 %68 to i32*, !insn.addr !200
  store i32 0, i32* %69, align 4, !insn.addr !200
  %exitcond = icmp eq i32 %63, 16
  store i32 %63, i32* %storemerge2.reg2mem, !insn.addr !201
  br i1 %exitcond, label %dec_label_pc_1ae8, label %dec_label_pc_1ab6, !insn.addr !201

dec_label_pc_1ae8:                                ; preds = %dec_label_pc_1ab6
  %70 = bitcast i32* %stack_var_-164 to i8*, !insn.addr !202
  %71 = bitcast i8** %stack_var_-312 to i8*, !insn.addr !202
  call void @__asm_rep_movsd_memcpy(i8* nonnull %71, i8* nonnull %70, i32 32), !insn.addr !202
  %72 = call i32 @func_struct_byval(), !insn.addr !203
  %73 = add i32 %1, 6535, !insn.addr !204
  %74 = inttoptr i32 %73 to i8*, !insn.addr !205
  store i8* %74, i8** %stack_var_-312, align 4, !insn.addr !205
  %75 = call i32 (i8*, ...) @printf(i8* %74), !insn.addr !206
  %76 = add i32 %1, 7147, !insn.addr !207
  %77 = inttoptr i32 %76 to i32*, !insn.addr !207
  %78 = load i32, i32* %77, align 4, !insn.addr !207
  store i32 %78, i32* %stack_var_-180, align 4, !insn.addr !208
  %79 = bitcast i32* %stack_var_-180 to i8*
  store i8* %79, i8** %stack_var_-312, align 4, !insn.addr !209
  %80 = call i32 @func_struct_byptr(i32* nonnull %stack_var_-180), !insn.addr !210
  %81 = add i32 %1, 6579, !insn.addr !211
  %82 = inttoptr i32 %81 to i8*, !insn.addr !212
  store i8* %82, i8** %stack_var_-312, align 4, !insn.addr !212
  %83 = call i32 (i8*, ...) @printf(i8* %82), !insn.addr !213
  ret i32 %83, !insn.addr !214

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32 %1, { 18, 17, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i8** %stack_var_-312, { 20, 19, 18, 21, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32 8, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ab6, { 1, 0 }
}

define i32 @param_by_value_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = mul i32 %arg1, 2, !insn.addr !215
  ret i32 %0, !insn.addr !216
}

define i32 @call_by_value_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = call i32 @param_by_value_int(i32 5), !insn.addr !217
  %1 = add i32 %0, 5, !insn.addr !218
  ret i32 %1, !insn.addr !219
}

define i32 @param_by_value_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !220
  %1 = load i32, i32* %0, align 4, !insn.addr !220
  %2 = mul i32 %1, 2, !insn.addr !221
  store i32 %2, i32* %0, align 4, !insn.addr !222
  ret i32 1, !insn.addr !223
}

define i32 @call_by_value_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c20:
  %stack_var_-12 = alloca i32, align 4
  store i32 5, i32* %stack_var_-12, align 4, !insn.addr !224
  %0 = ptrtoint i32* %stack_var_-12 to i32, !insn.addr !225
  %1 = call i32 @param_by_value_ptr(i32 %0), !insn.addr !226
  %2 = load i32, i32* %stack_var_-12, align 4, !insn.addr !227
  %3 = add i32 %2, %1, !insn.addr !228
  ret i32 %3, !insn.addr !229
}

define i32 @param_array_decay(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c60:
  ret i32 4, !insn.addr !230
}

define i32 @call_array_decay(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c70:
  %stack_var_-48 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-48, i32 0, i32 40), !insn.addr !231
  %1 = call i32 @param_array_decay(i32* nonnull %stack_var_-48, i32 10), !insn.addr !232
  ret i32 %1, !insn.addr !233
}

define i32 @param_string(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !234
  %1 = load i8, i8* %0, align 1, !insn.addr !234
  %2 = sext i8 %1 to i32, !insn.addr !234
  %3 = add i32 %arg1, 1, !insn.addr !235
  %4 = inttoptr i32 %3 to i8*, !insn.addr !235
  %5 = load i8, i8* %4, align 1, !insn.addr !235
  %6 = sext i8 %5 to i32, !insn.addr !235
  %7 = add nsw i32 %6, %2, !insn.addr !236
  ret i32 %7, !insn.addr !237
}

define i32 @call_string_param(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ce0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 5335, !insn.addr !238
  %3 = call i32 @param_string(i32 %2), !insn.addr !239
  ret i32 %3, !insn.addr !240
}

define i32 @param_ptr_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d10:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !241
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !241
  %storemerge2.reg2mem = alloca i32, !insn.addr !241
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !242
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !242
  store i32 0, i32* %stack_var_-8.01.reg2mem, !insn.addr !242
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !242
  br i1 %1, label %dec_label_pc_1d36, label %dec_label_pc_1d56, !insn.addr !242

dec_label_pc_1d36:                                ; preds = %dec_label_pc_1d10, %dec_label_pc_1d36
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !243
  %3 = add i32 %2, %0, !insn.addr !243
  %4 = inttoptr i32 %3 to i32*, !insn.addr !243
  %5 = load i32, i32* %4, align 4, !insn.addr !243
  %6 = inttoptr i32 %5 to i8*, !insn.addr !244
  %7 = load i8, i8* %6, align 1, !insn.addr !244
  %8 = sext i8 %7 to i32, !insn.addr !244
  %9 = add i32 %stack_var_-8.01.reload, %8, !insn.addr !245
  %10 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !246
  %exitcond = icmp eq i32 %10, %arg2
  store i32 %10, i32* %storemerge2.reg2mem, !insn.addr !242
  store i32 %9, i32* %stack_var_-8.01.reg2mem, !insn.addr !242
  store i32 %9, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !242
  br i1 %exitcond, label %dec_label_pc_1d56, label %dec_label_pc_1d36, !insn.addr !242

dec_label_pc_1d56:                                ; preds = %dec_label_pc_1d36, %dec_label_pc_1d10
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !247

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1d36, { 1, 0 }
}

define i32 @call_ptr_array(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d60:
  %stack_var_-20 = alloca i32, align 4
  store i32 3, i32* %stack_var_-20, align 4, !insn.addr !248
  %0 = call i32 @param_ptr_array(i32* nonnull %stack_var_-20, i32 3), !insn.addr !249
  ret i32 %0, !insn.addr !250
}

define i32 @param_varargs(i32 %arg1) local_unnamed_addr {
dec_label_pc_1db0:
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !251
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !251
  %stack_var_-12.02.reg2mem = alloca i32, !insn.addr !251
  %storemerge3.reg2mem = alloca i32, !insn.addr !251
  %stack_var_8 = alloca i32, align 4
  %0 = icmp sgt i32 %arg1, 0, !insn.addr !252
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !252
  br i1 %0, label %dec_label_pc_1ddb.lr.ph, label %dec_label_pc_1dfc, !insn.addr !252

dec_label_pc_1ddb.lr.ph:                          ; preds = %dec_label_pc_1db0
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !253
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %stack_var_-12.02.reg2mem
  store i32 %1, i32* %stack_var_-8.01.reg2mem
  br label %dec_label_pc_1ddb

dec_label_pc_1ddb:                                ; preds = %dec_label_pc_1ddb, %dec_label_pc_1ddb.lr.ph
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %stack_var_-12.02.reload = load i32, i32* %stack_var_-12.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = add i32 %stack_var_-8.01.reload, 4, !insn.addr !254
  %3 = inttoptr i32 %stack_var_-8.01.reload to i32*, !insn.addr !255
  %4 = load i32, i32* %3, align 4, !insn.addr !255
  %5 = add i32 %4, %stack_var_-12.02.reload, !insn.addr !256
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !257
  %exitcond = icmp eq i32 %6, %arg1
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !252
  store i32 %5, i32* %stack_var_-12.02.reg2mem, !insn.addr !252
  store i32 %2, i32* %stack_var_-8.01.reg2mem, !insn.addr !252
  store i32 %5, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !252
  br i1 %exitcond, label %dec_label_pc_1dfc, label %dec_label_pc_1ddb, !insn.addr !252

dec_label_pc_1dfc:                                ; preds = %dec_label_pc_1ddb, %dec_label_pc_1db0
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 1, 0, 2 }
}

define i32 @call_varargs_param(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = call i32 @param_varargs(i32 4), !insn.addr !259
  ret i32 %0, !insn.addr !260
}

define i32 @param_func_ptr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = add i32 %arg2, 10, !insn.addr !261
  ret i32 %0, !insn.addr !262
}

define i32 @call_func_ptr_param(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 36, !insn.addr !263
  %3 = call i32 @param_func_ptr(i32 %2, i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !264
  ret i32 %3, !insn.addr !265
}

define i32 @callback_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ec0:
  %0 = mul i32 %arg1, 2, !insn.addr !266
  ret i32 %0, !insn.addr !267
}

define i32 @param_double_ptr(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ed0:
  %storemerge.reg2mem = alloca i32, !insn.addr !268
  %0 = icmp eq i32* %arg1, null, !insn.addr !269
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !270
  br i1 %0, label %dec_label_pc_1f16, label %dec_label_pc_1ee4, !insn.addr !270

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1ed0
  %1 = load i32, i32* %arg1, align 4, !insn.addr !271
  %2 = icmp eq i32 %1, 0, !insn.addr !271
  %3 = icmp eq i1 %2, false, !insn.addr !272
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !272
  br i1 %3, label %dec_label_pc_1efc, label %dec_label_pc_1f16, !insn.addr !272

dec_label_pc_1efc:                                ; preds = %dec_label_pc_1ee4
  %4 = inttoptr i32 %1 to i32*, !insn.addr !273
  store i32 %arg2, i32* %4, align 4, !insn.addr !273
  store i32 0, i32* %arg1, align 4, !insn.addr !274
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !275
  br label %dec_label_pc_1f16, !insn.addr !275

dec_label_pc_1f16:                                ; preds = %dec_label_pc_1ed0, %dec_label_pc_1ee4, %dec_label_pc_1efc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !276

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1f16, { 2, 1, 0 }
}

define i32 @call_double_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f20:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  store i32 10, i32* %stack_var_-16, align 4, !insn.addr !277
  %0 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !278
  store i32 %0, i32* %stack_var_-20, align 4, !insn.addr !278
  %1 = call i32 @param_double_ptr(i32* nonnull %stack_var_-20, i32 20), !insn.addr !279
  %2 = load i32, i32* %stack_var_-16, align 4, !insn.addr !280
  %3 = load i32, i32* %stack_var_-20, align 4, !insn.addr !281
  %4 = icmp eq i32 %3, 0, !insn.addr !282
  %5 = zext i1 %4 to i32, !insn.addr !283
  %6 = add i32 %2, %5, !insn.addr !284
  ret i32 %6, !insn.addr !285

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
}

define i32 @param_complex_cast(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f80:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !286
  %0 = icmp eq i32 %arg2, 0, !insn.addr !287
  %1 = icmp eq i1 %0, false, !insn.addr !288
  br i1 %1, label %dec_label_pc_1fb5, label %dec_label_pc_1f96, !insn.addr !288

dec_label_pc_1f96:                                ; preds = %dec_label_pc_1f80
  %2 = load i32, i32* %arg1, align 4, !insn.addr !289
  store i32 %2, i32* %stack_var_-8.0.reg2mem, !insn.addr !290
  br label %dec_label_pc_1fe4, !insn.addr !290

dec_label_pc_1fb5:                                ; preds = %dec_label_pc_1f80
  %3 = icmp eq i32 %arg2, 1, !insn.addr !291
  %4 = icmp eq i1 %3, false, !insn.addr !292
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !292
  br i1 %4, label %dec_label_pc_1fe4, label %dec_label_pc_1fbf, !insn.addr !292

dec_label_pc_1fbf:                                ; preds = %dec_label_pc_1fb5
  %5 = ptrtoint i32* %arg1 to i32
  %6 = load i32, i32* %arg1, align 4, !insn.addr !293
  %7 = add i32 %5, 4, !insn.addr !294
  %8 = inttoptr i32 %7 to i32*, !insn.addr !294
  %9 = load i32, i32* %8, align 4, !insn.addr !294
  %10 = add i32 %9, %6, !insn.addr !294
  store i32 %10, i32* %stack_var_-8.0.reg2mem, !insn.addr !295
  br label %dec_label_pc_1fe4, !insn.addr !295

dec_label_pc_1fe4:                                ; preds = %dec_label_pc_1fb5, %dec_label_pc_1fbf, %dec_label_pc_1f96
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !296

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1fe4, { 1, 0, 2 }
}

define i32 @call_complex_cast(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = alloca i32
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  store i32 305419896, i32* %stack_var_-12, align 4, !insn.addr !297
  %2 = add i32 %1, 5080, !insn.addr !298
  %3 = inttoptr i32 %2 to i32*, !insn.addr !298
  %4 = load i32, i32* %3, align 4, !insn.addr !298
  store i32 %4, i32* %stack_var_-20, align 4, !insn.addr !299
  %5 = call i32 @param_complex_cast(i32* nonnull %stack_var_-20, i32 1), !insn.addr !300
  %6 = call i32 @param_complex_cast(i32* nonnull %stack_var_-12, i32 0), !insn.addr !301
  ret i32 %6, !insn.addr !302

; uselistorder directives
  uselistorder i32 (i32*, i32)* @param_complex_cast, { 1, 0 }
}

define i32 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_2050:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !303
  ret i32 %2, !insn.addr !304
}

define i32 @call_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_2060:
  %storemerge1.reg2mem = alloca i32, !insn.addr !305
  %stack_var_-84 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !306
  %1 = add i32 %0, -80, !insn.addr !307
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_208c

dec_label_pc_208c:                                ; preds = %dec_label_pc_2060, %dec_label_pc_208c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %2 = mul i32 %storemerge1.reload, 4, !insn.addr !307
  %3 = add i32 %1, %2, !insn.addr !307
  %4 = inttoptr i32 %3 to i32*, !insn.addr !307
  store i32 %storemerge1.reload, i32* %4, align 4, !insn.addr !307
  %5 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !308
  %exitcond = icmp eq i32 %5, 16
  store i32 %5, i32* %storemerge1.reg2mem, !insn.addr !309
  br i1 %exitcond, label %dec_label_pc_20a4, label %dec_label_pc_208c, !insn.addr !309

dec_label_pc_20a4:                                ; preds = %dec_label_pc_208c
  %6 = bitcast i32* %stack_var_-84 to i8*, !insn.addr !310
  %7 = bitcast i32* %stack_var_-152 to i8*, !insn.addr !310
  call void @__asm_rep_movsd_memcpy(i8* nonnull %7, i8* nonnull %6, i32 16), !insn.addr !310
  %8 = call i32 @param_struct_byval(i32 ptrtoint (i32* @0 to i32)), !insn.addr !311
  ret i32 %8, !insn.addr !312

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_208c, { 1, 0 }
}

define i32 @param_order_dep(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = add i32 %arg2, %arg1, !insn.addr !313
  ret i32 %0, !insn.addr !314
}

define i32 @call_order_dep(i32 %arg1) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i32 @param_order_dep(i32 1, i32 2), !insn.addr !315
  ret i32 %0, !insn.addr !316
}

define i32 @test_parameter_passing(i32 %arg1) local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11821), !insn.addr !317
  %3 = inttoptr i32 %2 to i8*, !insn.addr !318
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !319
  %5 = call i32 @call_by_value_int(i32 ptrtoint (i32* @0 to i32)), !insn.addr !320
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11787), !insn.addr !321
  %7 = inttoptr i32 %6 to i8*, !insn.addr !322
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !323
  %9 = call i32 @call_by_value_ptr(i32 ptrtoint (i32* @0 to i32)), !insn.addr !324
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11770), !insn.addr !325
  %11 = inttoptr i32 %10 to i8*, !insn.addr !326
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !327
  %13 = call i32 @call_array_decay(i32 ptrtoint (i32* @0 to i32)), !insn.addr !328
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11753), !insn.addr !329
  %15 = inttoptr i32 %14 to i8*, !insn.addr !330
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !331
  %17 = call i32 @call_string_param(i32 ptrtoint (i32* @0 to i32)), !insn.addr !332
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11736), !insn.addr !333
  %19 = inttoptr i32 %18 to i8*, !insn.addr !334
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !335
  %21 = call i32 @call_ptr_array(i32 ptrtoint (i32* @0 to i32)), !insn.addr !336
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11719), !insn.addr !337
  %23 = inttoptr i32 %22 to i8*, !insn.addr !338
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !339
  %25 = call i32 @call_varargs_param(i32 ptrtoint (i32* @0 to i32)), !insn.addr !340
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11702), !insn.addr !341
  %27 = inttoptr i32 %26 to i8*, !insn.addr !342
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !343
  %29 = call i32 @call_func_ptr_param(i32 ptrtoint (i32* @0 to i32)), !insn.addr !344
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11685), !insn.addr !345
  %31 = inttoptr i32 %30 to i8*, !insn.addr !346
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !347
  %33 = call i32 @call_double_ptr(i32 ptrtoint (i32* @0 to i32)), !insn.addr !348
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11668), !insn.addr !349
  %35 = inttoptr i32 %34 to i8*, !insn.addr !350
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !351
  %37 = call i32 @call_complex_cast(i32 ptrtoint (i32* @0 to i32)), !insn.addr !352
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11651), !insn.addr !353
  %39 = inttoptr i32 %38 to i8*, !insn.addr !354
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !355
  %41 = call i32 @call_struct_byval(i32 ptrtoint (i32* @0 to i32)), !insn.addr !356
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11634), !insn.addr !357
  %43 = inttoptr i32 %42 to i8*, !insn.addr !358
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !359
  %45 = call i32 @call_order_dep(i32 ptrtoint (i32* @0 to i32)), !insn.addr !360
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11617), !insn.addr !361
  %47 = inttoptr i32 %46 to i8*, !insn.addr !362
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !363
  ret i32 %48, !insn.addr !364

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @ret_basic_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = mul i32 %arg1, 2, !insn.addr !365
  ret i32 %0, !insn.addr !366
}

define i32 @call_ret_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = call i32 @ret_basic_type(i32 21), !insn.addr !367
  ret i32 %0, !insn.addr !368
}

define i32 @ret_pointer(i32* %arg1) local_unnamed_addr {
dec_label_pc_22f0:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 4, !insn.addr !369
  ret i32 %1, !insn.addr !370
}

define i32 @call_ret_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_2300:
  %0 = alloca i32
  %stack_var_-20 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32** @global_var_3cf4 to i32), i32 -11300), !insn.addr !371
  %3 = inttoptr i32 %2 to i32*, !insn.addr !371
  %4 = load i32, i32* %3, align 4, !insn.addr !371
  store i32 %4, i32* %stack_var_-20, align 4, !insn.addr !372
  %5 = call i32 @ret_pointer(i32* nonnull %stack_var_-20), !insn.addr !373
  %6 = inttoptr i32 %5 to i32*, !insn.addr !374
  %7 = load i32, i32* %6, align 4, !insn.addr !374
  ret i32 %7, !insn.addr !375
}

define i32 @ret_small_struct(i32* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2350:
  %0 = ptrtoint i32* %arg1 to i32
  store i32 %arg2, i32* %arg1, align 4, !insn.addr !376
  %1 = add i32 %0, 4, !insn.addr !377
  %2 = inttoptr i32 %1 to i32*, !insn.addr !377
  store i32 %arg3, i32* %2, align 4, !insn.addr !377
  ret i32 %0, !insn.addr !378
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_2370:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @ret_small_struct(i32* nonnull %stack_var_-20, i32 3, i32 4), !insn.addr !379
  %3 = load i32, i32* %stack_var_-20, align 4, !insn.addr !380
  %4 = add i32 %3, %1, !insn.addr !381
  ret i32 %4, !insn.addr !382

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
}

define i32 @ret_large_struct(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_23b0:
  %storemerge1.reg2mem = alloca i32, !insn.addr !383
  %0 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_23d3

dec_label_pc_23d3:                                ; preds = %dec_label_pc_23b0, %dec_label_pc_23d3
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %1 = add i32 %storemerge1.reload, %arg2, !insn.addr !384
  %2 = mul i32 %storemerge1.reload, 4, !insn.addr !385
  %3 = add i32 %2, %0, !insn.addr !385
  %4 = inttoptr i32 %3 to i32*, !insn.addr !385
  store i32 %1, i32* %4, align 4, !insn.addr !385
  %5 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !386
  %exitcond = icmp eq i32 %5, 16
  store i32 %5, i32* %storemerge1.reg2mem, !insn.addr !387
  br i1 %exitcond, label %dec_label_pc_23f0, label %dec_label_pc_23d3, !insn.addr !387

dec_label_pc_23f0:                                ; preds = %dec_label_pc_23d3
  ret i32 %0, !insn.addr !388

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 16, { 0, 4, 1, 2, 3 }
  uselistorder label %dec_label_pc_23d3, { 1, 0 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_2400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-76 = alloca i32, align 4
  %2 = call i32 @ret_large_struct(i32* nonnull %stack_var_-76, i32 100), !insn.addr !389
  %3 = load i32, i32* %stack_var_-76, align 4, !insn.addr !390
  %4 = add i32 %3, %1, !insn.addr !391
  ret i32 %4, !insn.addr !392

; uselistorder directives
  uselistorder i32* %stack_var_-76, { 1, 0 }
}

define i32 @func_a(i32 %arg1) local_unnamed_addr {
dec_label_pc_2440:
  %0 = add i32 %arg1, 10, !insn.addr !393
  ret i32 %0, !insn.addr !394
}

define i32 @func_b(i32 %arg1) local_unnamed_addr {
dec_label_pc_2450:
  %0 = mul i32 %arg1, 2, !insn.addr !395
  ret i32 %0, !insn.addr !396
}

define i32 @ret_func_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2460:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg2, 0, !insn.addr !397
  %3 = icmp eq i1 %2, false, !insn.addr !398
  %.v = select i1 %3, i32 add (i32 ptrtoint (i32* @global_var_3b98 to i32), i32 -15280), i32 add (i32 ptrtoint (i32* @global_var_3b98 to i32), i32 -15296)
  %4 = add i32 %1, %.v, !insn.addr !398
  ret i32 %4, !insn.addr !399

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3b98 to i32), { 1, 0 }
}

define i32 @call_ret_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_2490:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_3b64 to i32), !insn.addr !400
  %3 = call i32 @ret_func_ptr(i32 1, i32 %2), !insn.addr !401
  ret i32 %3, !insn.addr !402
}

define i32 @ret_opaque_handle(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_24d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg2, 0, !insn.addr !403
  %.v = select i1 %2, i32 add (i32 ptrtoint (i32* @global_var_3b28 to i32), i32 40), i32 add (i32 ptrtoint (i32* @global_var_3b28 to i32), i32 48)
  %3 = add i32 %1, %.v, !insn.addr !404
  ret i32 %3, !insn.addr !405

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_3b28 to i32), { 1, 0 }
}

define i32 @call_ret_opaque(i32 %arg1) local_unnamed_addr {
dec_label_pc_2500:
  %0 = call i32 @ret_opaque_handle(i32 0, i32 ptrtoint (i32* @0 to i32)), !insn.addr !406
  %1 = inttoptr i32 %0 to i32*, !insn.addr !407
  %2 = load i32, i32* %1, align 4, !insn.addr !407
  ret i32 %2, !insn.addr !408
}

define i32 @ret_complex_expr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2530:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !409
  %1 = add i32 %arg3, 10
  %2 = mul i32 %arg3, 2
  %storemerge = select i1 %0, i32 %2, i32 %1
  ret i32 %storemerge, !insn.addr !410
}

define i32 @call_ret_complex_expr(i32 %arg1) local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @ret_complex_expr(i32 5, i32 3, i32 10), !insn.addr !411
  %1 = call i32 @ret_complex_expr(i32 3, i32 5, i32 10), !insn.addr !412
  %2 = add i32 %1, %0, !insn.addr !413
  ret i32 %2, !insn.addr !414

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @ret_complex_expr, { 1, 0 }
  uselistorder i32 5, { 9, 0, 10, 13, 1, 2, 11, 3, 4, 5, 12, 6, 7, 8 }
}

define i32 @ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_25e0:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !415
  store i32 10, i32* %stack_var_-8.0.reg2mem
  switch i32 %arg1, label %dec_label_pc_2642 [
    i32 0, label %dec_label_pc_2649
    i32 1, label %dec_label_pc_262a
    i32 2, label %dec_label_pc_2636
  ]

dec_label_pc_262a:                                ; preds = %dec_label_pc_25e0
  store i32 20, i32* %stack_var_-8.0.reg2mem, !insn.addr !416
  br label %dec_label_pc_2649, !insn.addr !416

dec_label_pc_2636:                                ; preds = %dec_label_pc_25e0
  store i32 30, i32* %stack_var_-8.0.reg2mem, !insn.addr !417
  br label %dec_label_pc_2649, !insn.addr !417

dec_label_pc_2642:                                ; preds = %dec_label_pc_25e0
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !418
  br label %dec_label_pc_2649, !insn.addr !418

dec_label_pc_2649:                                ; preds = %dec_label_pc_25e0, %dec_label_pc_2642, %dec_label_pc_2636, %dec_label_pc_262a
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !419

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32 10, { 0, 4, 5, 10, 11, 9, 12, 6, 1, 2, 3, 7, 8 }
  uselistorder label %dec_label_pc_2649, { 1, 2, 3, 0 }
}

define i32 @call_ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_2660:
  %0 = call i32 @ret_multi_branch(i32 0), !insn.addr !420
  %1 = call i32 @ret_multi_branch(i32 1), !insn.addr !421
  %2 = add i32 %1, %0, !insn.addr !422
  %3 = call i32 @ret_multi_branch(i32 2), !insn.addr !423
  %4 = add i32 %2, %3, !insn.addr !424
  ret i32 %4, !insn.addr !425

; uselistorder directives
  uselistorder i32 2, { 7, 6, 0, 1, 2, 8, 3, 4, 5, 9, 10, 11, 12, 13, 14 }
  uselistorder i32 (i32)* @ret_multi_branch, { 2, 1, 0 }
}

define i32 @ret_void(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_26d0:
  %0 = ptrtoint i32* %arg2 to i32
  %1 = mul i32 %arg1, 3, !insn.addr !426
  store i32 %1, i32* %arg2, align 4, !insn.addr !427
  ret i32 %0, !insn.addr !428

; uselistorder directives
  uselistorder i32 3, { 0, 1, 5, 6, 2, 12, 7, 3, 8, 9, 10, 11, 4 }
}

define i32 @call_ret_void(i32 %arg1) local_unnamed_addr {
dec_label_pc_26f0:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @ret_void(i32 7, i32* nonnull %stack_var_-12), !insn.addr !429
  %1 = load i32, i32* %stack_var_-12, align 4, !insn.addr !430
  ret i32 %1, !insn.addr !431

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0 }
  uselistorder i32 7, { 0, 2, 1 }
}

define i32 @test_return_values(i32 %arg1) local_unnamed_addr {
dec_label_pc_2720:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11600), !insn.addr !432
  %3 = inttoptr i32 %2 to i8*, !insn.addr !433
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !434
  %5 = call i32 @call_ret_basic(i32 ptrtoint (i32* @0 to i32)), !insn.addr !435
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11569), !insn.addr !436
  %7 = inttoptr i32 %6 to i8*, !insn.addr !437
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !438
  %9 = call i32 @call_ret_pointer(i32 ptrtoint (i32* @0 to i32)), !insn.addr !439
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11541), !insn.addr !440
  %11 = inttoptr i32 %10 to i8*, !insn.addr !441
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !442
  %13 = call i32 @call_ret_small_struct(), !insn.addr !443
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11513), !insn.addr !444
  %15 = inttoptr i32 %14 to i8*, !insn.addr !445
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !446
  %17 = call i32 @call_ret_large_struct(), !insn.addr !447
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11486), !insn.addr !448
  %19 = inttoptr i32 %18 to i8*, !insn.addr !449
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !450
  %21 = call i32 @call_ret_func_ptr(i32 ptrtoint (i32* @0 to i32)), !insn.addr !451
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11457), !insn.addr !452
  %23 = inttoptr i32 %22 to i8*, !insn.addr !453
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !454
  %25 = call i32 @call_ret_opaque(i32 ptrtoint (i32* @0 to i32)), !insn.addr !455
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11429), !insn.addr !456
  %27 = inttoptr i32 %26 to i8*, !insn.addr !457
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !458
  %29 = call i32 @call_ret_complex_expr(i32 ptrtoint (i32* @0 to i32)), !insn.addr !459
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11400), !insn.addr !460
  %31 = inttoptr i32 %30 to i8*, !insn.addr !461
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !462
  %33 = call i32 @call_ret_multi_branch(i32 ptrtoint (i32* @0 to i32)), !insn.addr !463
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11372), !insn.addr !464
  %35 = inttoptr i32 %34 to i8*, !insn.addr !465
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !466
  %37 = call i32 @call_ret_void(i32 ptrtoint (i32* @0 to i32)), !insn.addr !467
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11344), !insn.addr !468
  %39 = inttoptr i32 %38 to i8*, !insn.addr !469
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !470
  ret i32 %40, !insn.addr !471

; uselistorder directives
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 39 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2850:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_37a4 to i32), !insn.addr !472
  %3 = call i32 @test_calling_conventions(i32 %2), !insn.addr !473
  %4 = call i32 @test_parameter_passing(i32 ptrtoint (i32* @0 to i32)), !insn.addr !474
  %5 = call i32 @test_return_values(i32 ptrtoint (i32* @0 to i32)), !insn.addr !475
  ret i32 0, !insn.addr !476

; uselistorder directives
  uselistorder i32 0, { 15, 22, 21, 23, 27, 28, 0, 1, 24, 29, 30, 31, 32, 3, 4, 2, 18, 5, 6, 7, 19, 25, 17, 8, 26, 9, 10, 11, 33, 13, 14, 12, 20, 34, 16 }
  uselistorder i32 4, { 0, 5, 14, 15, 1, 16, 4, 17, 2, 3, 6, 18, 19, 7, 8, 9, 10, 11, 12, 13 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2890:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !477
  %ebx.0.reg2mem = alloca i32, !insn.addr !477
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !478
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3767 to i32), i32 -256), !insn.addr !479
  %4 = inttoptr i32 %3 to i32*, !insn.addr !479
  %5 = load i32, i32* %4, align 4, !insn.addr !479
  %6 = icmp eq i32 %5, -1, !insn.addr !480
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !481
  store i32 -1, i32* %merge.reg2mem, !insn.addr !481
  br i1 %6, label %dec_label_pc_28cd, label %dec_label_pc_28c0, !insn.addr !481

dec_label_pc_28c0:                                ; preds = %dec_label_pc_2890, %dec_label_pc_28c0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !482
  %8 = inttoptr i32 %7 to i32*, !insn.addr !482
  %9 = load i32, i32* %8, align 4, !insn.addr !482
  %10 = icmp eq i32 %9, -1, !insn.addr !483
  %11 = icmp eq i1 %10, false, !insn.addr !484
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !484
  store i32 %9, i32* %merge.reg2mem, !insn.addr !484
  br i1 %11, label %dec_label_pc_28c0, label %dec_label_pc_28cd, !insn.addr !484

dec_label_pc_28cd:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_2890
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !485

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32 -1, { 6, 0, 7, 1, 2, 4, 3, 5 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_28c0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_28dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !486
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !487
  ret i32 %3, !insn.addr !488

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 25, 27, 26, 24, 23, 22, 66, 53, 52, 28, 21, 54, 20, 19, 67, 18, 87, 29, 68, 17, 69, 16, 15, 55, 88, 72, 71, 70, 30, 14, 65, 74, 73, 13, 56, 31, 76, 75, 32, 33, 12, 89, 77, 37, 36, 35, 34, 78, 90, 40, 39, 38, 11, 91, 79, 80, 51, 92, 57, 58, 83, 64, 82, 81, 41, 10, 42, 93, 84, 44, 43, 45, 94, 85, 49, 48, 47, 46, 59, 60, 61, 62, 63, 9, 8, 7, 50, 6, 5, 4, 3, 86, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4224}
!9 = !{i64 4255}
!10 = !{i64 4272}
!11 = !{i64 4278}
!12 = !{i64 4283}
!13 = !{i64 4287}
!14 = !{i64 4291}
!15 = !{i64 4304}
!16 = !{i64 4321}
!17 = !{i64 4360}
!18 = !{i64 4368}
!19 = !{i64 4438}
!20 = !{i64 4448}
!21 = !{i64 4456}
!22 = !{i64 4472}
!23 = !{i64 4479}
!24 = !{i64 4481}
!25 = !{i64 4487}
!26 = !{i64 4489}
!27 = !{i64 4502}
!28 = !{i64 4507}
!29 = !{i64 4566}
!30 = !{i64 4571}
!31 = !{i64 4585}
!32 = !{i64 4596}
!33 = !{i64 4604}
!34 = !{i64 4608}
!35 = !{i64 4636}
!36 = !{i64 4640}
!37 = !{i64 4690}
!38 = !{i64 4700}
!39 = !{i64 4716}
!40 = !{i64 4721}
!41 = !{i64 4770}
!42 = !{i64 4780}
!43 = !{i64 4802}
!44 = !{i64 4805}
!45 = !{i64 4812}
!46 = !{i64 4850}
!47 = !{i64 4857}
!48 = !{i64 4873}
!49 = !{i64 4901}
!50 = !{i64 4904}
!51 = !{i64 4907}
!52 = !{i64 4910}
!53 = !{i64 4914}
!54 = !{i64 4986}
!55 = !{i64 4996}
!56 = !{i64 5026}
!57 = !{i64 5029}
!58 = !{i64 5032}
!59 = !{i64 5036}
!60 = !{i64 5090}
!61 = !{i64 5100}
!62 = !{i64 5128}
!63 = !{i64 5131}
!64 = !{i64 5134}
!65 = !{i64 5137}
!66 = !{i64 5140}
!67 = !{i64 5144}
!68 = !{i64 5218}
!69 = !{i64 5228}
!70 = !{i64 5253}
!71 = !{i64 5256}
!72 = !{i64 5259}
!73 = !{i64 5262}
!74 = !{i64 5266}
!75 = !{i64 5338}
!76 = !{i64 5348}
!77 = !{i64 5378}
!78 = !{i64 5381}
!79 = !{i64 5384}
!80 = !{i64 5388}
!81 = !{i64 5442}
!82 = !{i64 5452}
!83 = !{i64 5500}
!84 = !{i64 5529}
!85 = !{i64 5540}
!86 = !{i64 5563}
!87 = !{i64 5571}
!88 = !{i64 5585}
!89 = !{i64 5600}
!90 = !{i64 5637}
!91 = !{i64 5622}
!92 = !{i64 5648}
!93 = !{i64 5654}
!94 = !{i64 5656}
!95 = !{i64 5665}
!96 = !{i64 5683}
!97 = !{i64 5705}
!98 = !{i64 5742}
!99 = !{i64 5745}
!100 = !{i64 5748}
!101 = !{i64 5751}
!102 = !{i64 5754}
!103 = !{i64 5757}
!104 = !{i64 5760}
!105 = !{i64 5764}
!106 = !{i64 5776}
!107 = !{i64 5815}
!108 = !{i64 5819}
!109 = !{i64 5835}
!110 = !{i64 5843}
!111 = !{i64 5870}
!112 = !{i64 5875}
!113 = !{i64 5878}
!114 = !{i64 5881}
!115 = !{i64 5883}
!116 = !{i64 5886}
!117 = !{i64 5907}
!118 = !{i64 5921}
!119 = !{i64 5936}
!120 = !{i64 5946}
!121 = !{i64 5986}
!122 = !{i64 5999}
!123 = !{i64 6012}
!124 = !{i64 5974}
!125 = !{i64 6031}
!126 = !{i64 6032}
!127 = !{i64 6039}
!128 = !{i64 6043}
!129 = !{i64 6064}
!130 = !{i64 6069}
!131 = !{i64 6073}
!132 = !{i64 6083}
!133 = !{i64 6096}
!134 = !{i64 6097}
!135 = !{i64 6126}
!136 = !{i64 6132}
!137 = !{i64 6135}
!138 = !{i64 6146}
!139 = !{i64 6157}
!140 = !{i64 6163}
!141 = !{i64 6170}
!142 = !{i64 6181}
!143 = !{i64 6192}
!144 = !{i64 6198}
!145 = !{i64 6205}
!146 = !{i64 6216}
!147 = !{i64 6227}
!148 = !{i64 6233}
!149 = !{i64 6240}
!150 = !{i64 6251}
!151 = !{i64 6262}
!152 = !{i64 6268}
!153 = !{i64 6275}
!154 = !{i64 6286}
!155 = !{i64 6297}
!156 = !{i64 6303}
!157 = !{i64 6310}
!158 = !{i64 6321}
!159 = !{i64 6332}
!160 = !{i64 6338}
!161 = !{i64 6345}
!162 = !{i64 6356}
!163 = !{i64 6367}
!164 = !{i64 6373}
!165 = !{i64 6380}
!166 = !{i64 6391}
!167 = !{i64 6402}
!168 = !{i64 6408}
!169 = !{i64 6415}
!170 = !{i64 6426}
!171 = !{i64 6437}
!172 = !{i64 6443}
!173 = !{i64 6450}
!174 = !{i64 6461}
!175 = !{i64 6472}
!176 = !{i64 6478}
!177 = !{i64 6485}
!178 = !{i64 6496}
!179 = !{i64 6543}
!180 = !{i64 6560}
!181 = !{i64 6566}
!182 = !{i64 6573}
!183 = !{i64 6584}
!184 = !{i64 6601}
!185 = !{i64 6607}
!186 = !{i64 6614}
!187 = !{i64 6625}
!188 = !{i64 6688}
!189 = !{i64 6705}
!190 = !{i64 6711}
!191 = !{i64 6718}
!192 = !{i64 6729}
!193 = !{i64 6774}
!194 = !{i64 6780}
!195 = !{i64 6797}
!196 = !{i64 6803}
!197 = !{i64 6810}
!198 = !{i64 6846}
!199 = !{i64 6854}
!200 = !{i64 6861}
!201 = !{i64 6832}
!202 = !{i64 6907}
!203 = !{i64 6909}
!204 = !{i64 6932}
!205 = !{i64 6938}
!206 = !{i64 6945}
!207 = !{i64 6956}
!208 = !{i64 6962}
!209 = !{i64 6986}
!210 = !{i64 6989}
!211 = !{i64 7012}
!212 = !{i64 7018}
!213 = !{i64 7025}
!214 = !{i64 7040}
!215 = !{i64 7065}
!216 = !{i64 7075}
!217 = !{i64 7120}
!218 = !{i64 7131}
!219 = !{i64 7139}
!220 = !{i64 7161}
!221 = !{i64 7163}
!222 = !{i64 7169}
!223 = !{i64 7195}
!224 = !{i64 7219}
!225 = !{i64 7229}
!226 = !{i64 7238}
!227 = !{i64 7246}
!228 = !{i64 7249}
!229 = !{i64 7257}
!230 = !{i64 7279}
!231 = !{i64 7326}
!232 = !{i64 7348}
!233 = !{i64 7358}
!234 = !{i64 7369}
!235 = !{i64 7375}
!236 = !{i64 7379}
!237 = !{i64 7382}
!238 = !{i64 7409}
!239 = !{i64 7418}
!240 = !{i64 7428}
!241 = !{i64 7440}
!242 = !{i64 7472}
!243 = !{i64 7484}
!244 = !{i64 7487}
!245 = !{i64 7490}
!246 = !{i64 7499}
!247 = !{i64 7517}
!248 = !{i64 7572}
!249 = !{i64 7580}
!250 = !{i64 7590}
!251 = !{i64 7600}
!252 = !{i64 7637}
!253 = !{i64 7615}
!254 = !{i64 7648}
!255 = !{i64 7654}
!256 = !{i64 7656}
!257 = !{i64 7665}
!258 = !{i64 7683}
!259 = !{i64 7754}
!260 = !{i64 7764}
!261 = !{i64 7810}
!262 = !{i64 7818}
!263 = !{i64 7843}
!264 = !{i64 7860}
!265 = !{i64 7870}
!266 = !{i64 7881}
!267 = !{i64 7885}
!268 = !{i64 7888}
!269 = !{i64 7898}
!270 = !{i64 7902}
!271 = !{i64 7911}
!272 = !{i64 7914}
!273 = !{i64 7940}
!274 = !{i64 7945}
!275 = !{i64 7951}
!276 = !{i64 7965}
!277 = !{i64 7988}
!278 = !{i64 7998}
!279 = !{i64 8015}
!280 = !{i64 8023}
!281 = !{i64 8026}
!282 = !{i64 8036}
!283 = !{i64 8039}
!284 = !{i64 8042}
!285 = !{i64 8050}
!286 = !{i64 8064}
!287 = !{i64 8076}
!288 = !{i64 8080}
!289 = !{i64 8107}
!290 = !{i64 8112}
!291 = !{i64 8117}
!292 = !{i64 8121}
!293 = !{i64 8136}
!294 = !{i64 8141}
!295 = !{i64 8147}
!296 = !{i64 8171}
!297 = !{i64 8198}
!298 = !{i64 8205}
!299 = !{i64 8211}
!300 = !{i64 8237}
!301 = !{i64 8261}
!302 = !{i64 8271}
!303 = !{i64 8280}
!304 = !{i64 8284}
!305 = !{i64 8288}
!306 = !{i64 8289}
!307 = !{i64 8338}
!308 = !{i64 8345}
!309 = !{i64 8326}
!310 = !{i64 8369}
!311 = !{i64 8371}
!312 = !{i64 8386}
!313 = !{i64 8412}
!314 = !{i64 8416}
!315 = !{i64 8483}
!316 = !{i64 8493}
!317 = !{i64 8518}
!318 = !{i64 8524}
!319 = !{i64 8527}
!320 = !{i64 8535}
!321 = !{i64 8543}
!322 = !{i64 8549}
!323 = !{i64 8556}
!324 = !{i64 8564}
!325 = !{i64 8572}
!326 = !{i64 8578}
!327 = !{i64 8585}
!328 = !{i64 8593}
!329 = !{i64 8601}
!330 = !{i64 8607}
!331 = !{i64 8614}
!332 = !{i64 8622}
!333 = !{i64 8630}
!334 = !{i64 8636}
!335 = !{i64 8643}
!336 = !{i64 8651}
!337 = !{i64 8659}
!338 = !{i64 8665}
!339 = !{i64 8672}
!340 = !{i64 8680}
!341 = !{i64 8688}
!342 = !{i64 8694}
!343 = !{i64 8701}
!344 = !{i64 8709}
!345 = !{i64 8717}
!346 = !{i64 8723}
!347 = !{i64 8730}
!348 = !{i64 8738}
!349 = !{i64 8746}
!350 = !{i64 8752}
!351 = !{i64 8759}
!352 = !{i64 8767}
!353 = !{i64 8775}
!354 = !{i64 8781}
!355 = !{i64 8788}
!356 = !{i64 8796}
!357 = !{i64 8804}
!358 = !{i64 8810}
!359 = !{i64 8817}
!360 = !{i64 8825}
!361 = !{i64 8833}
!362 = !{i64 8839}
!363 = !{i64 8846}
!364 = !{i64 8856}
!365 = !{i64 8873}
!366 = !{i64 8877}
!367 = !{i64 8912}
!368 = !{i64 8928}
!369 = !{i64 8953}
!370 = !{i64 8957}
!371 = !{i64 8979}
!372 = !{i64 8985}
!373 = !{i64 9012}
!374 = !{i64 9023}
!375 = !{i64 9030}
!376 = !{i64 9057}
!377 = !{i64 9062}
!378 = !{i64 9066}
!379 = !{i64 9113}
!380 = !{i64 9121}
!381 = !{i64 9124}
!382 = !{i64 9132}
!383 = !{i64 9136}
!384 = !{i64 9177}
!385 = !{i64 9183}
!386 = !{i64 9189}
!387 = !{i64 9165}
!388 = !{i64 9207}
!389 = !{i64 9249}
!390 = !{i64 9257}
!391 = !{i64 9260}
!392 = !{i64 9268}
!393 = !{i64 9289}
!394 = !{i64 9293}
!395 = !{i64 9305}
!396 = !{i64 9309}
!397 = !{i64 9345}
!398 = !{i64 9348}
!399 = !{i64 9352}
!400 = !{i64 9373}
!401 = !{i64 9389}
!402 = !{i64 9415}
!403 = !{i64 9457}
!404 = !{i64 9460}
!405 = !{i64 9464}
!406 = !{i64 9500}
!407 = !{i64 9511}
!408 = !{i64 9518}
!409 = !{i64 9539}
!410 = !{i64 9575}
!411 = !{i64 9629}
!412 = !{i64 9663}
!413 = !{i64 9674}
!414 = !{i64 9682}
!415 = !{i64 9696}
!416 = !{i64 9777}
!417 = !{i64 9789}
!418 = !{i64 9794}
!419 = !{i64 9808}
!420 = !{i64 9862}
!421 = !{i64 9883}
!422 = !{i64 9891}
!423 = !{i64 9904}
!424 = !{i64 9909}
!425 = !{i64 9923}
!426 = !{i64 9945}
!427 = !{i64 9952}
!428 = !{i64 9955}
!429 = !{i64 10001}
!430 = !{i64 10006}
!431 = !{i64 10014}
!432 = !{i64 10038}
!433 = !{i64 10044}
!434 = !{i64 10047}
!435 = !{i64 10055}
!436 = !{i64 10063}
!437 = !{i64 10069}
!438 = !{i64 10076}
!439 = !{i64 10084}
!440 = !{i64 10092}
!441 = !{i64 10098}
!442 = !{i64 10105}
!443 = !{i64 10113}
!444 = !{i64 10121}
!445 = !{i64 10127}
!446 = !{i64 10134}
!447 = !{i64 10142}
!448 = !{i64 10150}
!449 = !{i64 10156}
!450 = !{i64 10163}
!451 = !{i64 10171}
!452 = !{i64 10179}
!453 = !{i64 10185}
!454 = !{i64 10192}
!455 = !{i64 10200}
!456 = !{i64 10208}
!457 = !{i64 10214}
!458 = !{i64 10221}
!459 = !{i64 10229}
!460 = !{i64 10237}
!461 = !{i64 10243}
!462 = !{i64 10250}
!463 = !{i64 10258}
!464 = !{i64 10266}
!465 = !{i64 10272}
!466 = !{i64 10279}
!467 = !{i64 10287}
!468 = !{i64 10295}
!469 = !{i64 10301}
!470 = !{i64 10308}
!471 = !{i64 10318}
!472 = !{i64 10333}
!473 = !{i64 10349}
!474 = !{i64 10357}
!475 = !{i64 10365}
!476 = !{i64 10377}
!477 = !{i64 10384}
!478 = !{i64 10388}
!479 = !{i64 10399}
!480 = !{i64 10405}
!481 = !{i64 10408}
!482 = !{i64 10434}
!483 = !{i64 10440}
!484 = !{i64 10443}
!485 = !{i64 10449}
!486 = !{i64 10468}
!487 = !{i64 10479}
!488 = !{i64 10488}
