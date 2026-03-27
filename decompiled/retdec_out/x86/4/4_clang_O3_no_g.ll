source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_2da7 = local_unnamed_addr constant i32 4096
@global_var_2dab = local_unnamed_addr constant i32 500736
@global_var_2b94 = local_unnamed_addr constant i32 -2096099773
@global_var_2a97 = constant i32 1110183490
@global_var_2787 = local_unnamed_addr constant i32 98304
@global_var_2757 = local_unnamed_addr constant i32 0
@global_var_2667 = constant i32 0
@global_var_245b = constant i32 260351
@global_var_241b = constant i32 219391
@global_var_23eb = constant i32 188671
@global_var_2347 = constant i32 -1684216161
@global_var_2257 = constant i32 827075924
@global_var_2157 = constant [22 x i8] c"ct_byval(large) = %d\0A\00"
@global_var_2107 = local_unnamed_addr constant [18 x i8] c"y_args(1-8) = %d\0A\00"
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
  %0 = call i32 @puts(i8* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1070(i8* %s) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @strlen(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
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
  %5 = add i32 %1, 12116, !insn.addr !10
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
  %3 = add i32 %1, 12131, !insn.addr !16
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
  %3 = add i32 %1, 11979, !insn.addr !22
  %4 = inttoptr i32 %3 to i8*, !insn.addr !22
  %5 = load i8, i8* %4, align 1, !insn.addr !22
  %6 = icmp eq i8 %5, 0, !insn.addr !22
  %7 = icmp eq i1 %6, false, !insn.addr !23
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !23
  br i1 %7, label %dec_label_pc_11e2, label %dec_label_pc_1181, !insn.addr !23

dec_label_pc_1181:                                ; preds = %dec_label_pc_1160
  %8 = add i32 %1, 11907, !insn.addr !24
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

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_1220:
  ret i32 15, !insn.addr !37
}

define i32 @stdcall_func(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1230:
  %0 = mul i32 %arg2, %arg1, !insn.addr !38
  ret i32 %0, !insn.addr !39
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_1240:
  ret i32 50, !insn.addr !40
}

define i32 @fastcall_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %1, %arg1, !insn.addr !41
  %4 = add i32 %3, %2, !insn.addr !42
  ret i32 %4, !insn.addr !43

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_1260:
  ret i32 6, !insn.addr !44
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_1270:
  ret i32 15, !insn.addr !45
}

define i32 @arm_aapcs_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1280:
  %0 = add i32 %arg2, %arg1, !insn.addr !46
  %1 = add i32 %0, %arg3, !insn.addr !47
  %2 = add i32 %1, %arg4, !insn.addr !48
  %3 = add i32 %2, %arg5, !insn.addr !49
  ret i32 %3, !insn.addr !50
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_12a0:
  ret i32 15, !insn.addr !51
}

define i32 @mips_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = add i32 %arg2, %arg1, !insn.addr !52
  %1 = add i32 %0, %arg3, !insn.addr !53
  %2 = add i32 %1, %arg4, !insn.addr !54
  ret i32 %2, !insn.addr !55
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_12d0:
  ret i32 100, !insn.addr !56
}

define i32 @amd64_sysv_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = add i32 %arg2, %arg1, !insn.addr !57
  %1 = add i32 %0, %arg3, !insn.addr !58
  %2 = add i32 %1, %arg4, !insn.addr !59
  %3 = add i32 %2, %arg5, !insn.addr !60
  %4 = add i32 %3, %arg6, !insn.addr !61
  ret i32 %4, !insn.addr !62
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1300:
  ret i32 21, !insn.addr !63
}

define i32 @ms_x64_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1310:
  %0 = add i32 %arg2, %arg1, !insn.addr !64
  %1 = add i32 %0, %arg3, !insn.addr !65
  %2 = add i32 %1, %arg4, !insn.addr !66
  %3 = add i32 %2, %arg5, !insn.addr !67
  ret i32 %3, !insn.addr !68
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_1330:
  ret i32 15, !insn.addr !69
}

define i32 @vectorcall_func(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1340:
  %0 = add i32 %arg2, %arg1, !insn.addr !70
  %1 = add i32 %0, %arg3, !insn.addr !71
  %2 = add i32 %1, %arg4, !insn.addr !72
  ret i32 %2, !insn.addr !73
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1360:
  ret i32 10, !insn.addr !74
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1370:
  ret i32 33, !insn.addr !75
}

define i32 @varargs_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %eax.3.reg2mem = alloca i32, !insn.addr !76
  %edx.1.in.reg2mem = alloca i32, !insn.addr !76
  %ecx.0.reg2mem = alloca i32, !insn.addr !76
  %eax.2.reg2mem = alloca i32, !insn.addr !76
  %edx.0.reg2mem = alloca i32, !insn.addr !76
  %eax.1.reg2mem = alloca i32, !insn.addr !76
  %edi.0.reg2mem = alloca i32, !insn.addr !76
  %esi.0.reg2mem = alloca i32, !insn.addr !76
  %eax.0.reg2mem = alloca i32, !insn.addr !76
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !77
  br i1 %0, label %dec_label_pc_140e, label %dec_label_pc_1392, !insn.addr !77

dec_label_pc_1392:                                ; preds = %dec_label_pc_1380
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !78
  %2 = add i32 %arg1, -1, !insn.addr !79
  %3 = icmp ult i32 %2, 3, !insn.addr !80
  %4 = icmp eq i1 %3, false, !insn.addr !81
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !81
  store i32 %1, i32* %edx.0.reg2mem, !insn.addr !81
  br i1 %4, label %dec_label_pc_13aa, label %dec_label_pc_13ea, !insn.addr !81

dec_label_pc_13aa:                                ; preds = %dec_label_pc_1392
  %5 = and i32 %arg1, -4, !insn.addr !82
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !83
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !83
  store i32 %1, i32* %edi.0.reg2mem, !insn.addr !83
  br label %dec_label_pc_13c0, !insn.addr !83

dec_label_pc_13c0:                                ; preds = %dec_label_pc_13c0, %dec_label_pc_13aa
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = inttoptr i32 %edi.0.reload to i32*, !insn.addr !84
  %7 = load i32, i32* %6, align 4, !insn.addr !84
  %8 = add i32 %7, %eax.0.reload, !insn.addr !84
  %9 = add i32 %edi.0.reload, 4, !insn.addr !85
  %10 = inttoptr i32 %9 to i32*, !insn.addr !85
  %11 = load i32, i32* %10, align 4, !insn.addr !85
  %12 = add i32 %8, %11, !insn.addr !85
  %13 = add i32 %edi.0.reload, 8, !insn.addr !86
  %14 = inttoptr i32 %13 to i32*, !insn.addr !86
  %15 = load i32, i32* %14, align 4, !insn.addr !86
  %16 = add i32 %12, %15, !insn.addr !86
  %17 = add i32 %edi.0.reload, 16, !insn.addr !87
  %18 = add i32 %edi.0.reload, 12, !insn.addr !88
  %19 = inttoptr i32 %18 to i32*, !insn.addr !88
  %20 = load i32, i32* %19, align 4, !insn.addr !88
  %21 = add i32 %16, %20, !insn.addr !88
  %22 = add i32 %esi.0.reload, -4, !insn.addr !89
  %23 = icmp eq i32 %22, 0, !insn.addr !89
  %24 = icmp eq i1 %23, false, !insn.addr !90
  store i32 %21, i32* %eax.0.reg2mem, !insn.addr !90
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !90
  store i32 %17, i32* %edi.0.reg2mem, !insn.addr !90
  store i32 %21, i32* %eax.1.reg2mem, !insn.addr !90
  store i32 %17, i32* %edx.0.reg2mem, !insn.addr !90
  br i1 %24, label %dec_label_pc_13c0, label %dec_label_pc_13ea, !insn.addr !90

dec_label_pc_13ea:                                ; preds = %dec_label_pc_13c0, %dec_label_pc_1392
  %25 = urem i32 %arg1, 4, !insn.addr !91
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %26 = icmp eq i32 %25, 0, !insn.addr !92
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !93
  store i32 %25, i32* %ecx.0.reg2mem, !insn.addr !93
  store i32 %edx.0.reload, i32* %edx.1.in.reg2mem, !insn.addr !93
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !93
  br i1 %26, label %dec_label_pc_140e, label %dec_label_pc_1400, !insn.addr !93

dec_label_pc_1400:                                ; preds = %dec_label_pc_13ea, %dec_label_pc_1400
  %edx.1.in.reload = load i32, i32* %edx.1.in.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %edx.1 = add i32 %edx.1.in.reload, 4
  %27 = inttoptr i32 %edx.1.in.reload to i32*, !insn.addr !94
  %28 = load i32, i32* %27, align 4, !insn.addr !94
  %29 = add i32 %28, %eax.2.reload, !insn.addr !94
  %30 = add i32 %ecx.0.reload, -1, !insn.addr !95
  %31 = icmp eq i32 %30, 0, !insn.addr !95
  %32 = icmp eq i1 %31, false, !insn.addr !96
  store i32 %29, i32* %eax.2.reg2mem, !insn.addr !96
  store i32 %30, i32* %ecx.0.reg2mem, !insn.addr !96
  store i32 %edx.1, i32* %edx.1.in.reg2mem, !insn.addr !96
  store i32 %29, i32* %eax.3.reg2mem, !insn.addr !96
  br i1 %32, label %dec_label_pc_1400, label %dec_label_pc_140e, !insn.addr !96

dec_label_pc_140e:                                ; preds = %dec_label_pc_1400, %dec_label_pc_1380, %dec_label_pc_13ea
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !97

; uselistorder directives
  uselistorder i32 %edx.1.in.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 3, 4, 2, 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.3.reg2mem, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_140e, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1400, { 1, 0 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_1420:
  ret i32 42, !insn.addr !98
}

define i32 @func_many_args(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8) local_unnamed_addr {
dec_label_pc_1430:
  %0 = add i32 %arg2, %arg1, !insn.addr !99
  %1 = add i32 %0, %arg3, !insn.addr !100
  %2 = add i32 %1, %arg4, !insn.addr !101
  %3 = add i32 %2, %arg5, !insn.addr !102
  %4 = add i32 %3, %arg6, !insn.addr !103
  %5 = add i32 %4, %arg7, !insn.addr !104
  %6 = add i32 %5, %arg8, !insn.addr !105
  ret i32 %6, !insn.addr !106
}

define i32 @func_mixed_args(i32 %arg1, i32 %arg2, i32 %arg3, double %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1460:
  %eax.0.reg2mem = alloca i32, !insn.addr !107
  %0 = icmp eq i32 %arg3, 0, !insn.addr !108
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !109
  br i1 %0, label %dec_label_pc_149f, label %dec_label_pc_148b, !insn.addr !109

dec_label_pc_148b:                                ; preds = %dec_label_pc_1460
  %1 = inttoptr i32 %arg3 to i8*, !insn.addr !110
  %2 = call i32 @strlen(i8* %1), !insn.addr !110
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_149f, !insn.addr !111

dec_label_pc_149f:                                ; preds = %dec_label_pc_1460, %dec_label_pc_148b
  %3 = fpext double %arg4 to x86_fp80, !insn.addr !112
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = add i32 %eax.0.reload, %arg2, !insn.addr !113
  %5 = sitofp i32 %4 to x86_fp80, !insn.addr !114
  %6 = fadd x86_fp80 %3, %5, !insn.addr !114
  %7 = sitofp i32 %arg5 to x86_fp80, !insn.addr !115
  %8 = fadd x86_fp80 %6, %7, !insn.addr !116
  %9 = fptosi x86_fp80 %8 to i32, !insn.addr !117
  ret i32 %9, !insn.addr !118

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_149f, { 1, 0 }
}

define i32 @func_struct_byval(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8, i32 %arg9, i32 %arg10, i32 %arg11, i32 %arg12, i32 %arg13, i32 %arg14, i32 %arg15, i32 %arg16) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = add i32 %arg2, %arg1, !insn.addr !119
  %1 = add i32 %0, %arg3, !insn.addr !120
  %2 = add i32 %1, %arg4, !insn.addr !121
  %3 = add i32 %2, %arg5, !insn.addr !122
  %4 = add i32 %3, %arg6, !insn.addr !123
  %5 = add i32 %4, %arg7, !insn.addr !124
  %6 = add i32 %5, %arg8, !insn.addr !125
  %7 = add i32 %6, %arg9, !insn.addr !126
  %8 = add i32 %7, %arg10, !insn.addr !127
  %9 = add i32 %8, %arg11, !insn.addr !128
  %10 = add i32 %9, %arg12, !insn.addr !129
  %11 = add i32 %10, %arg13, !insn.addr !130
  %12 = add i32 %11, %arg14, !insn.addr !131
  %13 = add i32 %12, %arg15, !insn.addr !132
  %14 = add i32 %13, %arg16, !insn.addr !133
  ret i32 %14, !insn.addr !134
}

define i32 @func_struct_byptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1540:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !135
  br i1 %0, label %dec_label_pc_154f, label %dec_label_pc_1548, !insn.addr !136

dec_label_pc_1548:                                ; preds = %dec_label_pc_1540
  %1 = add i32 %arg1, 4, !insn.addr !137
  %2 = inttoptr i32 %1 to i32*, !insn.addr !137
  %3 = load i32, i32* %2, align 4, !insn.addr !137
  %4 = inttoptr i32 %arg1 to i32*, !insn.addr !138
  %5 = load i32, i32* %4, align 4, !insn.addr !138
  %6 = mul i32 %5, %3, !insn.addr !138
  ret i32 %6, !insn.addr !139

dec_label_pc_154f:                                ; preds = %dec_label_pc_1540
  ret i32 -1, !insn.addr !140

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @test_calling_conventions(i32 %arg1) local_unnamed_addr {
dec_label_pc_1560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7342), !insn.addr !141
  %3 = inttoptr i32 %2 to i8*, !insn.addr !142
  %4 = call i32 @puts(i8* %3), !insn.addr !143
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8184), !insn.addr !144
  %6 = inttoptr i32 %5 to i8*, !insn.addr !145
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !146
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8168), !insn.addr !147
  %9 = inttoptr i32 %8 to i8*, !insn.addr !148
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !149
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8152), !insn.addr !150
  %12 = inttoptr i32 %11 to i8*, !insn.addr !151
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !152
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8136), !insn.addr !153
  %15 = inttoptr i32 %14 to i8*, !insn.addr !154
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !155
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8120), !insn.addr !156
  %18 = inttoptr i32 %17 to i8*, !insn.addr !157
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !158
  %20 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8104), !insn.addr !159
  %21 = inttoptr i32 %20 to i8*, !insn.addr !160
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !161
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8088), !insn.addr !162
  %24 = inttoptr i32 %23 to i8*, !insn.addr !163
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !164
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8072), !insn.addr !165
  %27 = inttoptr i32 %26 to i8*, !insn.addr !166
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !167
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8056), !insn.addr !168
  %30 = inttoptr i32 %29 to i8*, !insn.addr !169
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !170
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8040), !insn.addr !171
  %33 = inttoptr i32 %32 to i8*, !insn.addr !172
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !173
  %35 = call i32 @varargs_func(i32 5), !insn.addr !174
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -8024), !insn.addr !175
  %37 = inttoptr i32 %36 to i8*, !insn.addr !176
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !177
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7984), !insn.addr !178
  %40 = inttoptr i32 %39 to i8*, !insn.addr !179
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !180
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7950), !insn.addr !181
  %43 = inttoptr i32 %42 to i8*, !insn.addr !182
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !183
  %45 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7911), !insn.addr !184
  %46 = inttoptr i32 %45 to i8*, !insn.addr !185
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !186
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7871), !insn.addr !187
  %49 = inttoptr i32 %48 to i8*, !insn.addr !188
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !189
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a97 to i32), i32 -7827), !insn.addr !190
  %52 = inttoptr i32 %51 to i8*, !insn.addr !191
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !192
  ret i32 %53, !insn.addr !193

; uselistorder directives
  uselistorder i32 %1, { 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @param_by_value_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = mul i32 %arg1, 2, !insn.addr !194
  ret i32 %0, !insn.addr !195
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_16c0:
  ret i32 15, !insn.addr !196
}

define i32 @param_by_value_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !197
  %1 = load i32, i32* %0, align 4, !insn.addr !197
  %2 = mul i32 %1, 2, !insn.addr !197
  store i32 %2, i32* %0, align 4, !insn.addr !197
  ret i32 1, !insn.addr !198
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_16e0:
  ret i32 11, !insn.addr !199
}

define i32 @param_array_decay() local_unnamed_addr {
dec_label_pc_16f0:
  ret i32 4, !insn.addr !200
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_1700:
  ret i32 4, !insn.addr !201
}

define i32 @param_string(i32 %arg1) local_unnamed_addr {
dec_label_pc_1710:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !202
  %1 = load i8, i8* %0, align 1, !insn.addr !202
  %2 = sext i8 %1 to i32, !insn.addr !202
  %3 = add i32 %arg1, 1, !insn.addr !203
  %4 = inttoptr i32 %3 to i8*, !insn.addr !203
  %5 = load i8, i8* %4, align 1, !insn.addr !203
  %6 = sext i8 %5 to i32, !insn.addr !203
  %7 = add nsw i32 %6, %2, !insn.addr !204
  ret i32 %7, !insn.addr !205

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_1720:
  ret i32 173, !insn.addr !206
}

define i32 @param_ptr_array(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1730:
  %eax.3.reg2mem = alloca i32, !insn.addr !207
  %esi.2.reg2mem = alloca i32, !insn.addr !207
  %eax.2.reg2mem = alloca i32, !insn.addr !207
  %esi.1.reg2mem = alloca i32, !insn.addr !207
  %eax.1.reg2mem = alloca i32, !insn.addr !207
  %esi.0.reg2mem = alloca i32, !insn.addr !207
  %eax.0.reg2mem = alloca i32, !insn.addr !207
  %0 = icmp slt i32 %arg2, 1
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !208
  br i1 %0, label %dec_label_pc_17af, label %dec_label_pc_173c, !insn.addr !208

dec_label_pc_173c:                                ; preds = %dec_label_pc_1730
  %1 = add i32 %arg2, -1, !insn.addr !209
  %2 = icmp ult i32 %1, 3, !insn.addr !210
  %3 = icmp eq i1 %2, false, !insn.addr !211
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !211
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !211
  br i1 %3, label %dec_label_pc_1757, label %dec_label_pc_178b, !insn.addr !211

dec_label_pc_1757:                                ; preds = %dec_label_pc_173c
  %4 = and i32 %arg2, -4, !insn.addr !212
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !213
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_1760, !insn.addr !213

dec_label_pc_1760:                                ; preds = %dec_label_pc_1760, %dec_label_pc_1757
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %5 = mul i32 %esi.0.reload, 4, !insn.addr !214
  %6 = add i32 %5, %arg1
  %7 = inttoptr i32 %6 to i32*, !insn.addr !214
  %8 = load i32, i32* %7, align 4, !insn.addr !214
  %9 = add i32 %6, 4, !insn.addr !215
  %10 = inttoptr i32 %9 to i32*, !insn.addr !215
  %11 = load i32, i32* %10, align 4, !insn.addr !215
  %12 = inttoptr i32 %8 to i8*, !insn.addr !216
  %13 = load i8, i8* %12, align 1, !insn.addr !216
  %14 = sext i8 %13 to i32, !insn.addr !216
  %15 = add i32 %eax.0.reload, %14, !insn.addr !217
  %16 = inttoptr i32 %11 to i8*, !insn.addr !218
  %17 = load i8, i8* %16, align 1, !insn.addr !218
  %18 = sext i8 %17 to i32, !insn.addr !218
  %19 = add i32 %15, %18, !insn.addr !219
  %20 = add i32 %6, 8, !insn.addr !220
  %21 = inttoptr i32 %20 to i32*, !insn.addr !220
  %22 = load i32, i32* %21, align 4, !insn.addr !220
  %23 = inttoptr i32 %22 to i8*, !insn.addr !221
  %24 = load i8, i8* %23, align 1, !insn.addr !221
  %25 = sext i8 %24 to i32, !insn.addr !221
  %26 = add i32 %19, %25, !insn.addr !222
  %27 = add i32 %6, 12, !insn.addr !223
  %28 = inttoptr i32 %27 to i32*, !insn.addr !223
  %29 = load i32, i32* %28, align 4, !insn.addr !223
  %30 = inttoptr i32 %29 to i8*, !insn.addr !224
  %31 = load i8, i8* %30, align 1, !insn.addr !224
  %32 = sext i8 %31 to i32, !insn.addr !224
  %33 = add i32 %26, %32, !insn.addr !225
  %34 = add i32 %esi.0.reload, 4, !insn.addr !226
  %35 = icmp eq i32 %4, %34, !insn.addr !227
  %36 = icmp eq i1 %35, false, !insn.addr !228
  store i32 %33, i32* %eax.0.reg2mem, !insn.addr !228
  store i32 %34, i32* %esi.0.reg2mem, !insn.addr !228
  store i32 %33, i32* %eax.1.reg2mem, !insn.addr !228
  store i32 %34, i32* %esi.1.reg2mem, !insn.addr !228
  br i1 %36, label %dec_label_pc_1760, label %dec_label_pc_178b, !insn.addr !228

dec_label_pc_178b:                                ; preds = %dec_label_pc_1760, %dec_label_pc_173c
  %37 = urem i32 %arg2, 4, !insn.addr !229
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %38 = icmp eq i32 %37, 0, !insn.addr !230
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !231
  store i32 0, i32* %esi.2.reg2mem, !insn.addr !231
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !231
  br i1 %38, label %dec_label_pc_17af, label %dec_label_pc_17a0, !insn.addr !231

dec_label_pc_17a0:                                ; preds = %dec_label_pc_178b, %dec_label_pc_17a0
  %esi.2.reload = load i32, i32* %esi.2.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %reass.add = add i32 %esi.2.reload, %esi.1.reload
  %reass.mul = mul i32 %reass.add, 4
  %39 = add i32 %reass.mul, %arg1, !insn.addr !232
  %40 = inttoptr i32 %39 to i32*, !insn.addr !232
  %41 = load i32, i32* %40, align 4, !insn.addr !232
  %42 = inttoptr i32 %41 to i8*, !insn.addr !233
  %43 = load i8, i8* %42, align 1, !insn.addr !233
  %44 = sext i8 %43 to i32, !insn.addr !233
  %45 = add i32 %eax.2.reload, %44, !insn.addr !234
  %46 = add i32 %esi.2.reload, 1, !insn.addr !235
  %47 = icmp eq i32 %37, %46, !insn.addr !236
  %48 = icmp eq i1 %47, false, !insn.addr !237
  store i32 %45, i32* %eax.2.reg2mem, !insn.addr !237
  store i32 %46, i32* %esi.2.reg2mem, !insn.addr !237
  store i32 %45, i32* %eax.3.reg2mem, !insn.addr !237
  br i1 %48, label %dec_label_pc_17a0, label %dec_label_pc_17af, !insn.addr !237

dec_label_pc_17af:                                ; preds = %dec_label_pc_17a0, %dec_label_pc_1730, %dec_label_pc_178b
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !238

; uselistorder directives
  uselistorder i32 %37, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.3.reg2mem, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_17af, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17a0, { 1, 0 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_17c0:
  ret i32 300, !insn.addr !239
}

define i32 @param_varargs(i32 %arg1) local_unnamed_addr {
dec_label_pc_17d0:
  %eax.3.reg2mem = alloca i32, !insn.addr !240
  %edx.1.in.reg2mem = alloca i32, !insn.addr !240
  %ecx.0.reg2mem = alloca i32, !insn.addr !240
  %eax.2.reg2mem = alloca i32, !insn.addr !240
  %edx.0.reg2mem = alloca i32, !insn.addr !240
  %eax.1.reg2mem = alloca i32, !insn.addr !240
  %edi.0.reg2mem = alloca i32, !insn.addr !240
  %esi.0.reg2mem = alloca i32, !insn.addr !240
  %eax.0.reg2mem = alloca i32, !insn.addr !240
  %stack_var_8 = alloca i32, align 4
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !241
  br i1 %0, label %dec_label_pc_185e, label %dec_label_pc_17e2, !insn.addr !241

dec_label_pc_17e2:                                ; preds = %dec_label_pc_17d0
  %1 = ptrtoint i32* %stack_var_8 to i32, !insn.addr !242
  %2 = add i32 %arg1, -1, !insn.addr !243
  %3 = icmp ult i32 %2, 3, !insn.addr !244
  %4 = icmp eq i1 %3, false, !insn.addr !245
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !245
  store i32 %1, i32* %edx.0.reg2mem, !insn.addr !245
  br i1 %4, label %dec_label_pc_17fa, label %dec_label_pc_183a, !insn.addr !245

dec_label_pc_17fa:                                ; preds = %dec_label_pc_17e2
  %5 = and i32 %arg1, -4, !insn.addr !246
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !247
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !247
  store i32 %1, i32* %edi.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_1810, !insn.addr !247

dec_label_pc_1810:                                ; preds = %dec_label_pc_1810, %dec_label_pc_17fa
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %6 = inttoptr i32 %edi.0.reload to i32*, !insn.addr !248
  %7 = load i32, i32* %6, align 4, !insn.addr !248
  %8 = add i32 %7, %eax.0.reload, !insn.addr !248
  %9 = add i32 %edi.0.reload, 4, !insn.addr !249
  %10 = inttoptr i32 %9 to i32*, !insn.addr !249
  %11 = load i32, i32* %10, align 4, !insn.addr !249
  %12 = add i32 %8, %11, !insn.addr !249
  %13 = add i32 %edi.0.reload, 8, !insn.addr !250
  %14 = inttoptr i32 %13 to i32*, !insn.addr !250
  %15 = load i32, i32* %14, align 4, !insn.addr !250
  %16 = add i32 %12, %15, !insn.addr !250
  %17 = add i32 %edi.0.reload, 16, !insn.addr !251
  %18 = add i32 %edi.0.reload, 12, !insn.addr !252
  %19 = inttoptr i32 %18 to i32*, !insn.addr !252
  %20 = load i32, i32* %19, align 4, !insn.addr !252
  %21 = add i32 %16, %20, !insn.addr !252
  %22 = add i32 %esi.0.reload, -4, !insn.addr !253
  %23 = icmp eq i32 %22, 0, !insn.addr !253
  %24 = icmp eq i1 %23, false, !insn.addr !254
  store i32 %21, i32* %eax.0.reg2mem, !insn.addr !254
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !254
  store i32 %17, i32* %edi.0.reg2mem, !insn.addr !254
  store i32 %21, i32* %eax.1.reg2mem, !insn.addr !254
  store i32 %17, i32* %edx.0.reg2mem, !insn.addr !254
  br i1 %24, label %dec_label_pc_1810, label %dec_label_pc_183a, !insn.addr !254

dec_label_pc_183a:                                ; preds = %dec_label_pc_1810, %dec_label_pc_17e2
  %25 = urem i32 %arg1, 4, !insn.addr !255
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %26 = icmp eq i32 %25, 0, !insn.addr !256
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !257
  store i32 %25, i32* %ecx.0.reg2mem, !insn.addr !257
  store i32 %edx.0.reload, i32* %edx.1.in.reg2mem, !insn.addr !257
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !257
  br i1 %26, label %dec_label_pc_185e, label %dec_label_pc_1850, !insn.addr !257

dec_label_pc_1850:                                ; preds = %dec_label_pc_183a, %dec_label_pc_1850
  %edx.1.in.reload = load i32, i32* %edx.1.in.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %edx.1 = add i32 %edx.1.in.reload, 4
  %27 = inttoptr i32 %edx.1.in.reload to i32*, !insn.addr !258
  %28 = load i32, i32* %27, align 4, !insn.addr !258
  %29 = add i32 %28, %eax.2.reload, !insn.addr !258
  %30 = add i32 %ecx.0.reload, -1, !insn.addr !259
  %31 = icmp eq i32 %30, 0, !insn.addr !259
  %32 = icmp eq i1 %31, false, !insn.addr !260
  store i32 %29, i32* %eax.2.reg2mem, !insn.addr !260
  store i32 %30, i32* %ecx.0.reg2mem, !insn.addr !260
  store i32 %edx.1, i32* %edx.1.in.reg2mem, !insn.addr !260
  store i32 %29, i32* %eax.3.reg2mem, !insn.addr !260
  br i1 %32, label %dec_label_pc_1850, label %dec_label_pc_185e, !insn.addr !260

dec_label_pc_185e:                                ; preds = %dec_label_pc_1850, %dec_label_pc_17d0, %dec_label_pc_183a
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !261

; uselistorder directives
  uselistorder i32 %edx.1.in.reload, { 1, 0 }
  uselistorder i32 %edi.0.reload, { 3, 4, 2, 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.3.reg2mem, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_185e, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1850, { 1, 0 }
}

define i32 @call_varargs_param(i32 %arg1) local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @param_varargs(i32 4), !insn.addr !262
  ret i32 %0, !insn.addr !263
}

define i32 @param_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_18a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 10, !insn.addr !264
  ret i32 %2, !insn.addr !265
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_18d0:
  ret i32 20, !insn.addr !266
}

define i32 @param_double_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18e0:
  %eax.0.reg2mem = alloca i32, !insn.addr !267
  %0 = icmp eq i32 %arg1, 0, !insn.addr !268
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !269
  br i1 %0, label %dec_label_pc_1904, label %dec_label_pc_18ed, !insn.addr !269

dec_label_pc_18ed:                                ; preds = %dec_label_pc_18e0
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !270
  %2 = load i32, i32* %1, align 4, !insn.addr !270
  %3 = icmp eq i32 %2, 0, !insn.addr !271
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !272
  br i1 %3, label %dec_label_pc_1904, label %dec_label_pc_18f3, !insn.addr !272

dec_label_pc_18f3:                                ; preds = %dec_label_pc_18ed
  %4 = inttoptr i32 %2 to i32*, !insn.addr !273
  store i32 %arg2, i32* %4, align 4, !insn.addr !273
  store i32 0, i32* %1, align 4, !insn.addr !274
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_1904, !insn.addr !275

dec_label_pc_1904:                                ; preds = %dec_label_pc_18f3, %dec_label_pc_18ed, %dec_label_pc_18e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !276
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1910:
  ret i32 21, !insn.addr !277
}

define i32 @param_complex_cast(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1920:
  %eax.0.reg2mem = alloca i32, !insn.addr !278
  %0 = icmp eq i32 %arg2, 1, !insn.addr !279
  br i1 %0, label %dec_label_pc_1939, label %dec_label_pc_192d, !insn.addr !280

dec_label_pc_192d:                                ; preds = %dec_label_pc_1920
  %1 = icmp eq i32 %arg2, 0, !insn.addr !281
  %2 = icmp eq i1 %1, false, !insn.addr !282
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !282
  br i1 %2, label %dec_label_pc_193e, label %dec_label_pc_1936, !insn.addr !282

dec_label_pc_1936:                                ; preds = %dec_label_pc_192d
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !283
  %4 = load i32, i32* %3, align 4, !insn.addr !283
  ret i32 %4, !insn.addr !284

dec_label_pc_1939:                                ; preds = %dec_label_pc_1920
  %5 = add i32 %arg1, 4, !insn.addr !285
  %6 = inttoptr i32 %5 to i32*, !insn.addr !285
  %7 = load i32, i32* %6, align 4, !insn.addr !285
  %8 = inttoptr i32 %arg1 to i32*, !insn.addr !286
  %9 = load i32, i32* %8, align 4, !insn.addr !286
  %10 = add i32 %9, %7, !insn.addr !286
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !286
  br label %dec_label_pc_193e, !insn.addr !286

dec_label_pc_193e:                                ; preds = %dec_label_pc_1939, %dec_label_pc_192d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !287

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1940:
  ret i32 305419896, !insn.addr !288
}

define i32 @param_struct_byval(i32 %arg1) local_unnamed_addr {
dec_label_pc_1950:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %arg1, !insn.addr !289
  ret i32 %2, !insn.addr !290
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_1960:
  ret i32 15, !insn.addr !291
}

define i32 @param_order_dep(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1970:
  %0 = add i32 %arg2, %arg1, !insn.addr !292
  ret i32 %0, !insn.addr !293
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_1980:
  ret i32 3, !insn.addr !294
}

define i32 @test_parameter_passing(i32 %arg1) local_unnamed_addr {
dec_label_pc_1990:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7309), !insn.addr !295
  %3 = inttoptr i32 %2 to i8*, !insn.addr !296
  %4 = call i32 @puts(i8* %3), !insn.addr !297
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7782), !insn.addr !298
  %6 = inttoptr i32 %5 to i8*, !insn.addr !299
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !300
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7765), !insn.addr !301
  %9 = inttoptr i32 %8 to i8*, !insn.addr !302
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !303
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7748), !insn.addr !304
  %12 = inttoptr i32 %11 to i8*, !insn.addr !305
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !306
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7731), !insn.addr !307
  %15 = inttoptr i32 %14 to i8*, !insn.addr !308
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !309
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7714), !insn.addr !310
  %18 = inttoptr i32 %17 to i8*, !insn.addr !311
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !312
  %20 = call i32 @param_varargs(i32 4), !insn.addr !313
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7697), !insn.addr !314
  %22 = inttoptr i32 %21 to i8*, !insn.addr !315
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !316
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7680), !insn.addr !317
  %25 = inttoptr i32 %24 to i8*, !insn.addr !318
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !319
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7663), !insn.addr !320
  %28 = inttoptr i32 %27 to i8*, !insn.addr !321
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !322
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7646), !insn.addr !323
  %31 = inttoptr i32 %30 to i8*, !insn.addr !324
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !325
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7629), !insn.addr !326
  %34 = inttoptr i32 %33 to i8*, !insn.addr !327
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !328
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2667 to i32), i32 -7612), !insn.addr !329
  %37 = inttoptr i32 %36 to i8*, !insn.addr !330
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !331
  ret i32 %38, !insn.addr !332

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32)* @param_varargs, { 1, 0 }
}

define i32 @ret_basic_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a90:
  %0 = mul i32 %arg1, 2, !insn.addr !333
  ret i32 %0, !insn.addr !334
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_1aa0:
  ret i32 42, !insn.addr !335
}

define i32 @ret_pointer(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = add i32 %arg1, 4, !insn.addr !336
  ret i32 %0, !insn.addr !337
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_1ac0:
  ret i32 20, !insn.addr !338
}

define i32 @ret_small_struct(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !339
  store i32 %arg2, i32* %0, align 4, !insn.addr !339
  %1 = add i32 %arg1, 4, !insn.addr !340
  %2 = inttoptr i32 %1 to i32*, !insn.addr !340
  store i32 %arg3, i32* %2, align 4, !insn.addr !340
  ret i32 %arg1, !insn.addr !341

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0 }
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_1af0:
  ret i32 7, !insn.addr !342
}

define i32 @ret_large_struct(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b00:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !343
  store i32 %arg2, i32* %0, align 4, !insn.addr !343
  %1 = add i32 %arg2, 1, !insn.addr !344
  %2 = add i32 %arg1, 4, !insn.addr !345
  %3 = inttoptr i32 %2 to i32*, !insn.addr !345
  store i32 %1, i32* %3, align 4, !insn.addr !345
  %4 = add i32 %arg2, 2, !insn.addr !346
  %5 = add i32 %arg1, 8, !insn.addr !347
  %6 = inttoptr i32 %5 to i32*, !insn.addr !347
  store i32 %4, i32* %6, align 4, !insn.addr !347
  %7 = add i32 %arg2, 3, !insn.addr !348
  %8 = add i32 %arg1, 12, !insn.addr !349
  %9 = inttoptr i32 %8 to i32*, !insn.addr !349
  store i32 %7, i32* %9, align 4, !insn.addr !349
  %10 = add i32 %arg2, 4, !insn.addr !350
  %11 = add i32 %arg1, 16, !insn.addr !351
  %12 = inttoptr i32 %11 to i32*, !insn.addr !351
  store i32 %10, i32* %12, align 4, !insn.addr !351
  %13 = add i32 %arg2, 5, !insn.addr !352
  %14 = add i32 %arg1, 20, !insn.addr !353
  %15 = inttoptr i32 %14 to i32*, !insn.addr !353
  store i32 %13, i32* %15, align 4, !insn.addr !353
  %16 = add i32 %arg2, 6, !insn.addr !354
  %17 = add i32 %arg1, 24, !insn.addr !355
  %18 = inttoptr i32 %17 to i32*, !insn.addr !355
  store i32 %16, i32* %18, align 4, !insn.addr !355
  %19 = add i32 %arg2, 7, !insn.addr !356
  %20 = add i32 %arg1, 28, !insn.addr !357
  %21 = inttoptr i32 %20 to i32*, !insn.addr !357
  store i32 %19, i32* %21, align 4, !insn.addr !357
  %22 = add i32 %arg2, 8, !insn.addr !358
  %23 = add i32 %arg1, 32, !insn.addr !359
  %24 = inttoptr i32 %23 to i32*, !insn.addr !359
  store i32 %22, i32* %24, align 4, !insn.addr !359
  %25 = add i32 %arg2, 9, !insn.addr !360
  %26 = add i32 %arg1, 36, !insn.addr !361
  %27 = inttoptr i32 %26 to i32*, !insn.addr !361
  store i32 %25, i32* %27, align 4, !insn.addr !361
  %28 = add i32 %arg2, 10, !insn.addr !362
  %29 = add i32 %arg1, 40, !insn.addr !363
  %30 = inttoptr i32 %29 to i32*, !insn.addr !363
  store i32 %28, i32* %30, align 4, !insn.addr !363
  %31 = add i32 %arg2, 11, !insn.addr !364
  %32 = add i32 %arg1, 44, !insn.addr !365
  %33 = inttoptr i32 %32 to i32*, !insn.addr !365
  store i32 %31, i32* %33, align 4, !insn.addr !365
  %34 = add i32 %arg2, 12, !insn.addr !366
  %35 = add i32 %arg1, 48, !insn.addr !367
  %36 = inttoptr i32 %35 to i32*, !insn.addr !367
  store i32 %34, i32* %36, align 4, !insn.addr !367
  %37 = add i32 %arg2, 13, !insn.addr !368
  %38 = add i32 %arg1, 52, !insn.addr !369
  %39 = inttoptr i32 %38 to i32*, !insn.addr !369
  store i32 %37, i32* %39, align 4, !insn.addr !369
  %40 = add i32 %arg2, 14, !insn.addr !370
  %41 = add i32 %arg1, 56, !insn.addr !371
  %42 = inttoptr i32 %41 to i32*, !insn.addr !371
  store i32 %40, i32* %42, align 4, !insn.addr !371
  %43 = add i32 %arg2, 15, !insn.addr !372
  %44 = add i32 %arg1, 60, !insn.addr !373
  %45 = inttoptr i32 %44 to i32*, !insn.addr !373
  store i32 %43, i32* %45, align 4, !insn.addr !373
  ret i32 %arg1, !insn.addr !374

; uselistorder directives
  uselistorder i32 15, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32 11, { 1, 0 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i32 6, { 1, 0 }
  uselistorder i32 20, { 2, 0, 1 }
  uselistorder i32 5, { 1, 0 }
  uselistorder i32 12, { 1, 2, 3, 0, 4 }
  uselistorder i32 8, { 1, 2, 3, 0, 4 }
  uselistorder i32 4, { 12, 13, 14, 15, 10, 16, 11, 8, 4, 17, 0, 5, 18, 7, 1, 2, 3, 19, 9, 6, 20 }
  uselistorder i32 %arg2, { 15, 14, 13, 12, 9, 11, 10, 2, 6, 8, 7, 0, 3, 1, 5, 4 }
  uselistorder i32 %arg1, { 3, 16, 8, 5, 15, 10, 14, 13, 11, 9, 7, 1, 4, 2, 0, 12, 6 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_1b70:
  ret i32 215, !insn.addr !375
}

define i32 @func_a(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = add i32 %arg1, 10, !insn.addr !376
  ret i32 %0, !insn.addr !377
}

define i32 @func_b(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = mul i32 %arg1, 2, !insn.addr !378
  ret i32 %0, !insn.addr !379
}

define i32 @ret_func_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !380
  %.v = select i1 %0, i32 add (i32 ptrtoint (i32* @global_var_245b to i32), i32 -9344), i32 add (i32 ptrtoint (i32* @global_var_245b to i32), i32 -9328)
  %1 = add i32 %.v, %arg1, !insn.addr !381
  ret i32 %1, !insn.addr !382
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_1bd0:
  ret i32 10, !insn.addr !383
}

define i32 @ret_opaque_handle(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1be0:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !384
  %.v = select i1 %0, i32 add (i32 ptrtoint (i32* @global_var_241b to i32), i32 40), i32 add (i32 ptrtoint (i32* @global_var_241b to i32), i32 48)
  %1 = add i32 %.v, %arg1, !insn.addr !385
  ret i32 %1, !insn.addr !386
}

define i32 @call_ret_opaque(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_23eb to i32), i32 40), !insn.addr !387
  %1 = inttoptr i32 %0 to i32*, !insn.addr !387
  %2 = load i32, i32* %1, align 4, !insn.addr !387
  ret i32 %2, !insn.addr !388
}

define i32 @ret_complex_expr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = mul i32 %arg3, 2, !insn.addr !389
  %1 = add i32 %arg3, 10, !insn.addr !390
  %2 = sub i32 %arg1, %arg2, !insn.addr !391
  %3 = xor i32 %arg2, %arg1, !insn.addr !391
  %4 = xor i32 %2, %arg1, !insn.addr !391
  %5 = and i32 %4, %3, !insn.addr !391
  %6 = icmp slt i32 %5, 0, !insn.addr !391
  %7 = icmp eq i32 %2, 0, !insn.addr !391
  %8 = icmp slt i32 %2, 0, !insn.addr !391
  %9 = icmp eq i1 %8, %6, !insn.addr !392
  %10 = icmp eq i1 %7, false, !insn.addr !392
  %11 = icmp eq i1 %9, %10, !insn.addr !392
  %12 = select i1 %11, i32 %0, i32 %1, !insn.addr !392
  ret i32 %12, !insn.addr !393

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i32 2, { 0, 1, 5, 2, 3, 4 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_1c50:
  ret i32 40, !insn.addr !394
}

define i32 @ret_multi_branch(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c60:
  %0 = icmp ult i32 %arg1, 3, !insn.addr !395
  %factor = mul i32 %arg1, 10
  %1 = add i32 %factor, 10, !insn.addr !396
  %2 = select i1 %0, i32 %1, i32 -1, !insn.addr !397
  ret i32 %2, !insn.addr !398

; uselistorder directives
  uselistorder i32 10, { 3, 2, 4, 0, 5, 6, 7, 1 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_1c80:
  ret i32 60, !insn.addr !399
}

define i32 @ret_void(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = mul i32 %arg1, 3, !insn.addr !400
  %1 = inttoptr i32 %arg2 to i32*, !insn.addr !401
  store i32 %0, i32* %1, align 4, !insn.addr !401
  ret i32 %arg2, !insn.addr !402

; uselistorder directives
  uselistorder i32 3, { 1, 2, 3, 0, 4, 5, 6 }
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_1ca0:
  ret i32 21, !insn.addr !403
}

define i32 @test_return_values(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7276), !insn.addr !404
  %3 = inttoptr i32 %2 to i8*, !insn.addr !405
  %4 = call i32 @puts(i8* %3), !insn.addr !406
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7595), !insn.addr !407
  %6 = inttoptr i32 %5 to i8*, !insn.addr !408
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !409
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7567), !insn.addr !410
  %9 = inttoptr i32 %8 to i8*, !insn.addr !411
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !412
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7539), !insn.addr !413
  %12 = inttoptr i32 %11 to i8*, !insn.addr !414
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !415
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7512), !insn.addr !416
  %15 = inttoptr i32 %14 to i8*, !insn.addr !417
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !418
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7483), !insn.addr !419
  %18 = inttoptr i32 %17 to i8*, !insn.addr !420
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !421
  %20 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7455), !insn.addr !422
  %21 = inttoptr i32 %20 to i8*, !insn.addr !423
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !424
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7426), !insn.addr !425
  %24 = inttoptr i32 %23 to i8*, !insn.addr !426
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !427
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7398), !insn.addr !428
  %27 = inttoptr i32 %26 to i8*, !insn.addr !429
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !430
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2347 to i32), i32 -7370), !insn.addr !431
  %30 = inttoptr i32 %29 to i8*, !insn.addr !432
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !433
  ret i32 %31, !insn.addr !434

; uselistorder directives
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1da0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @test_calling_conventions(i32 %1), !insn.addr !435
  %4 = call i32 @test_parameter_passing(i32 ptrtoint (i32* @0 to i32)), !insn.addr !436
  %5 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7276), !insn.addr !437
  %6 = inttoptr i32 %5 to i8*, !insn.addr !438
  %7 = call i32 @puts(i8* %6), !insn.addr !439
  %8 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7595), !insn.addr !440
  %9 = inttoptr i32 %8 to i8*, !insn.addr !441
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !442
  %11 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7567), !insn.addr !443
  %12 = inttoptr i32 %11 to i8*, !insn.addr !444
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !445
  %14 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7539), !insn.addr !446
  %15 = inttoptr i32 %14 to i8*, !insn.addr !447
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !448
  %17 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7512), !insn.addr !449
  %18 = inttoptr i32 %17 to i8*, !insn.addr !450
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !451
  %20 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7483), !insn.addr !452
  %21 = inttoptr i32 %20 to i8*, !insn.addr !453
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !454
  %23 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7455), !insn.addr !455
  %24 = inttoptr i32 %23 to i8*, !insn.addr !456
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !457
  %26 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7426), !insn.addr !458
  %27 = inttoptr i32 %26 to i8*, !insn.addr !459
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !460
  %29 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7398), !insn.addr !461
  %30 = inttoptr i32 %29 to i8*, !insn.addr !462
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !463
  %32 = add i32 %2, add (i32 ptrtoint (i32* @global_var_2257 to i32), i32 -7370), !insn.addr !464
  %33 = inttoptr i32 %32 to i8*, !insn.addr !465
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !466
  ret i32 0, !insn.addr !467

; uselistorder directives
  uselistorder i32 %2, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 0, { 13, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 1, 0, 4, 29, 7, 8, 5, 6, 3, 30, 9, 31, 32, 33, 34, 12, 11, 10, 35, 14, 15, 16 }
  uselistorder i32 (i8*, ...)* @printf, { 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 45 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1ea0:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !468
  %ebx.0.reg2mem = alloca i32, !insn.addr !468
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !469
  %3 = add i32 %1, add (i32 ptrtoint ([22 x i8]* @global_var_2157 to i32), i32 -244), !insn.addr !470
  %4 = inttoptr i32 %3 to i32*, !insn.addr !470
  %5 = load i32, i32* %4, align 4, !insn.addr !470
  %6 = icmp eq i32 %5, -1, !insn.addr !471
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !472
  store i32 -1, i32* %merge.reg2mem, !insn.addr !472
  br i1 %6, label %dec_label_pc_1edd, label %dec_label_pc_1ed0, !insn.addr !472

dec_label_pc_1ed0:                                ; preds = %dec_label_pc_1ea0, %dec_label_pc_1ed0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !473
  %8 = inttoptr i32 %7 to i32*, !insn.addr !473
  %9 = load i32, i32* %8, align 4, !insn.addr !473
  %10 = icmp eq i32 %9, -1, !insn.addr !474
  %11 = icmp eq i1 %10, false, !insn.addr !475
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !475
  store i32 %9, i32* %merge.reg2mem, !insn.addr !475
  br i1 %11, label %dec_label_pc_1ed0, label %dec_label_pc_1edd, !insn.addr !475

dec_label_pc_1edd:                                ; preds = %dec_label_pc_1ed0, %dec_label_pc_1ea0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !476

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
  uselistorder i32 -4, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 -1, { 5, 0, 6, 7, 1, 2, 3, 8, 9, 10, 4, 11, 12 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ed0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1eec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !477
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !478
  ret i32 %3, !insn.addr !479

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 17, 19, 18, 16, 15, 14, 58, 13, 12, 51, 20, 21, 22, 11, 52, 55, 31, 30, 29, 28, 27, 26, 25, 24, 23, 59, 53, 38, 37, 36, 35, 34, 33, 32, 60, 50, 10, 39, 54, 56, 48, 47, 46, 45, 44, 43, 42, 41, 40, 9, 8, 7, 49, 6, 5, 4, 3, 57, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

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
!35 = !{i64 4628}
!36 = !{i64 4632}
!37 = !{i64 4645}
!38 = !{i64 4660}
!39 = !{i64 4665}
!40 = !{i64 4677}
!41 = !{i64 4688}
!42 = !{i64 4691}
!43 = !{i64 4695}
!44 = !{i64 4709}
!45 = !{i64 4725}
!46 = !{i64 4740}
!47 = !{i64 4744}
!48 = !{i64 4748}
!49 = !{i64 4752}
!50 = !{i64 4756}
!51 = !{i64 4773}
!52 = !{i64 4788}
!53 = !{i64 4792}
!54 = !{i64 4796}
!55 = !{i64 4800}
!56 = !{i64 4821}
!57 = !{i64 4836}
!58 = !{i64 4840}
!59 = !{i64 4844}
!60 = !{i64 4848}
!61 = !{i64 4852}
!62 = !{i64 4856}
!63 = !{i64 4869}
!64 = !{i64 4884}
!65 = !{i64 4888}
!66 = !{i64 4892}
!67 = !{i64 4896}
!68 = !{i64 4900}
!69 = !{i64 4917}
!70 = !{i64 4932}
!71 = !{i64 4936}
!72 = !{i64 4940}
!73 = !{i64 4944}
!74 = !{i64 4965}
!75 = !{i64 4981}
!76 = !{i64 4992}
!77 = !{i64 5008}
!78 = !{i64 5003}
!79 = !{i64 5013}
!80 = !{i64 5021}
!81 = !{i64 5024}
!82 = !{i64 5034}
!83 = !{i64 5055}
!84 = !{i64 5062}
!85 = !{i64 5070}
!86 = !{i64 5079}
!87 = !{i64 5082}
!88 = !{i64 5088}
!89 = !{i64 5093}
!90 = !{i64 5096}
!91 = !{i64 5018}
!92 = !{i64 5098}
!93 = !{i64 5100}
!94 = !{i64 5123}
!95 = !{i64 5129}
!96 = !{i64 5132}
!97 = !{i64 5139}
!98 = !{i64 5157}
!99 = !{i64 5172}
!100 = !{i64 5176}
!101 = !{i64 5180}
!102 = !{i64 5184}
!103 = !{i64 5188}
!104 = !{i64 5192}
!105 = !{i64 5196}
!106 = !{i64 5200}
!107 = !{i64 5216}
!108 = !{i64 5255}
!109 = !{i64 5257}
!110 = !{i64 5266}
!111 = !{i64 5275}
!112 = !{i64 5243}
!113 = !{i64 5279}
!114 = !{i64 5285}
!115 = !{i64 5297}
!116 = !{i64 5301}
!117 = !{i64 5326}
!118 = !{i64 5345}
!119 = !{i64 5364}
!120 = !{i64 5368}
!121 = !{i64 5372}
!122 = !{i64 5376}
!123 = !{i64 5380}
!124 = !{i64 5384}
!125 = !{i64 5388}
!126 = !{i64 5392}
!127 = !{i64 5396}
!128 = !{i64 5400}
!129 = !{i64 5404}
!130 = !{i64 5408}
!131 = !{i64 5412}
!132 = !{i64 5416}
!133 = !{i64 5420}
!134 = !{i64 5424}
!135 = !{i64 5444}
!136 = !{i64 5446}
!137 = !{i64 5448}
!138 = !{i64 5451}
!139 = !{i64 5454}
!140 = !{i64 5460}
!141 = !{i64 5491}
!142 = !{i64 5497}
!143 = !{i64 5498}
!144 = !{i64 5506}
!145 = !{i64 5514}
!146 = !{i64 5515}
!147 = !{i64 5523}
!148 = !{i64 5531}
!149 = !{i64 5532}
!150 = !{i64 5540}
!151 = !{i64 5548}
!152 = !{i64 5549}
!153 = !{i64 5557}
!154 = !{i64 5565}
!155 = !{i64 5566}
!156 = !{i64 5574}
!157 = !{i64 5582}
!158 = !{i64 5583}
!159 = !{i64 5591}
!160 = !{i64 5599}
!161 = !{i64 5600}
!162 = !{i64 5608}
!163 = !{i64 5616}
!164 = !{i64 5617}
!165 = !{i64 5625}
!166 = !{i64 5633}
!167 = !{i64 5634}
!168 = !{i64 5642}
!169 = !{i64 5650}
!170 = !{i64 5651}
!171 = !{i64 5659}
!172 = !{i64 5667}
!173 = !{i64 5668}
!174 = !{i64 5688}
!175 = !{i64 5696}
!176 = !{i64 5703}
!177 = !{i64 5704}
!178 = !{i64 5712}
!179 = !{i64 5720}
!180 = !{i64 5721}
!181 = !{i64 5729}
!182 = !{i64 5737}
!183 = !{i64 5738}
!184 = !{i64 5746}
!185 = !{i64 5754}
!186 = !{i64 5755}
!187 = !{i64 5763}
!188 = !{i64 5774}
!189 = !{i64 5775}
!190 = !{i64 5783}
!191 = !{i64 5791}
!192 = !{i64 5792}
!193 = !{i64 5801}
!194 = !{i64 5812}
!195 = !{i64 5814}
!196 = !{i64 5829}
!197 = !{i64 5844}
!198 = !{i64 5851}
!199 = !{i64 5861}
!200 = !{i64 5877}
!201 = !{i64 5893}
!202 = !{i64 5908}
!203 = !{i64 5911}
!204 = !{i64 5915}
!205 = !{i64 5917}
!206 = !{i64 5925}
!207 = !{i64 5936}
!208 = !{i64 5946}
!209 = !{i64 5952}
!210 = !{i64 5960}
!211 = !{i64 5963}
!212 = !{i64 5975}
!213 = !{i64 5983}
!214 = !{i64 5984}
!215 = !{i64 5987}
!216 = !{i64 5991}
!217 = !{i64 5994}
!218 = !{i64 5996}
!219 = !{i64 6000}
!220 = !{i64 6002}
!221 = !{i64 6006}
!222 = !{i64 6009}
!223 = !{i64 6011}
!224 = !{i64 6015}
!225 = !{i64 6018}
!226 = !{i64 6020}
!227 = !{i64 6023}
!228 = !{i64 6025}
!229 = !{i64 5957}
!230 = !{i64 6027}
!231 = !{i64 6029}
!232 = !{i64 6048}
!233 = !{i64 6051}
!234 = !{i64 6054}
!235 = !{i64 6056}
!236 = !{i64 6059}
!237 = !{i64 6061}
!238 = !{i64 6067}
!239 = !{i64 6085}
!240 = !{i64 6096}
!241 = !{i64 6112}
!242 = !{i64 6107}
!243 = !{i64 6117}
!244 = !{i64 6125}
!245 = !{i64 6128}
!246 = !{i64 6138}
!247 = !{i64 6159}
!248 = !{i64 6166}
!249 = !{i64 6174}
!250 = !{i64 6183}
!251 = !{i64 6186}
!252 = !{i64 6192}
!253 = !{i64 6197}
!254 = !{i64 6200}
!255 = !{i64 6122}
!256 = !{i64 6202}
!257 = !{i64 6204}
!258 = !{i64 6227}
!259 = !{i64 6233}
!260 = !{i64 6236}
!261 = !{i64 6243}
!262 = !{i64 6285}
!263 = !{i64 6294}
!264 = !{i64 6331}
!265 = !{i64 6338}
!266 = !{i64 6357}
!267 = !{i64 6368}
!268 = !{i64 6377}
!269 = !{i64 6379}
!270 = !{i64 6381}
!271 = !{i64 6383}
!272 = !{i64 6385}
!273 = !{i64 6391}
!274 = !{i64 6393}
!275 = !{i64 6399}
!276 = !{i64 6404}
!277 = !{i64 6421}
!278 = !{i64 6432}
!279 = !{i64 6440}
!280 = !{i64 6443}
!281 = !{i64 6450}
!282 = !{i64 6452}
!283 = !{i64 6454}
!284 = !{i64 6456}
!285 = !{i64 6457}
!286 = !{i64 6460}
!287 = !{i64 6462}
!288 = !{i64 6469}
!289 = !{i64 6484}
!290 = !{i64 6488}
!291 = !{i64 6501}
!292 = !{i64 6516}
!293 = !{i64 6520}
!294 = !{i64 6533}
!295 = !{i64 6563}
!296 = !{i64 6569}
!297 = !{i64 6570}
!298 = !{i64 6578}
!299 = !{i64 6586}
!300 = !{i64 6587}
!301 = !{i64 6595}
!302 = !{i64 6603}
!303 = !{i64 6604}
!304 = !{i64 6612}
!305 = !{i64 6620}
!306 = !{i64 6621}
!307 = !{i64 6629}
!308 = !{i64 6640}
!309 = !{i64 6641}
!310 = !{i64 6649}
!311 = !{i64 6660}
!312 = !{i64 6661}
!313 = !{i64 6679}
!314 = !{i64 6687}
!315 = !{i64 6694}
!316 = !{i64 6695}
!317 = !{i64 6703}
!318 = !{i64 6711}
!319 = !{i64 6712}
!320 = !{i64 6720}
!321 = !{i64 6728}
!322 = !{i64 6729}
!323 = !{i64 6737}
!324 = !{i64 6748}
!325 = !{i64 6749}
!326 = !{i64 6757}
!327 = !{i64 6765}
!328 = !{i64 6766}
!329 = !{i64 6774}
!330 = !{i64 6782}
!331 = !{i64 6783}
!332 = !{i64 6792}
!333 = !{i64 6804}
!334 = !{i64 6806}
!335 = !{i64 6821}
!336 = !{i64 6836}
!337 = !{i64 6839}
!338 = !{i64 6853}
!339 = !{i64 6876}
!340 = !{i64 6878}
!341 = !{i64 6881}
!342 = !{i64 6901}
!343 = !{i64 6920}
!344 = !{i64 6922}
!345 = !{i64 6925}
!346 = !{i64 6928}
!347 = !{i64 6931}
!348 = !{i64 6934}
!349 = !{i64 6937}
!350 = !{i64 6940}
!351 = !{i64 6943}
!352 = !{i64 6946}
!353 = !{i64 6949}
!354 = !{i64 6952}
!355 = !{i64 6955}
!356 = !{i64 6958}
!357 = !{i64 6961}
!358 = !{i64 6964}
!359 = !{i64 6967}
!360 = !{i64 6970}
!361 = !{i64 6973}
!362 = !{i64 6976}
!363 = !{i64 6979}
!364 = !{i64 6982}
!365 = !{i64 6985}
!366 = !{i64 6988}
!367 = !{i64 6991}
!368 = !{i64 6994}
!369 = !{i64 6997}
!370 = !{i64 7000}
!371 = !{i64 7003}
!372 = !{i64 7006}
!373 = !{i64 7009}
!374 = !{i64 7012}
!375 = !{i64 7029}
!376 = !{i64 7044}
!377 = !{i64 7047}
!378 = !{i64 7060}
!379 = !{i64 7062}
!380 = !{i64 7084}
!381 = !{i64 7101}
!382 = !{i64 7104}
!383 = !{i64 7125}
!384 = !{i64 7148}
!385 = !{i64 7165}
!386 = !{i64 7168}
!387 = !{i64 7196}
!388 = !{i64 7202}
!389 = !{i64 7224}
!390 = !{i64 7227}
!391 = !{i64 7230}
!392 = !{i64 7234}
!393 = !{i64 7237}
!394 = !{i64 7253}
!395 = !{i64 7268}
!396 = !{i64 7274}
!397 = !{i64 7283}
!398 = !{i64 7286}
!399 = !{i64 7301}
!400 = !{i64 7320}
!401 = !{i64 7323}
!402 = !{i64 7325}
!403 = !{i64 7333}
!404 = !{i64 7360}
!405 = !{i64 7366}
!406 = !{i64 7369}
!407 = !{i64 7374}
!408 = !{i64 7380}
!409 = !{i64 7391}
!410 = !{i64 7396}
!411 = !{i64 7402}
!412 = !{i64 7413}
!413 = !{i64 7418}
!414 = !{i64 7424}
!415 = !{i64 7435}
!416 = !{i64 7440}
!417 = !{i64 7446}
!418 = !{i64 7457}
!419 = !{i64 7462}
!420 = !{i64 7468}
!421 = !{i64 7479}
!422 = !{i64 7494}
!423 = !{i64 7500}
!424 = !{i64 7503}
!425 = !{i64 7508}
!426 = !{i64 7514}
!427 = !{i64 7525}
!428 = !{i64 7530}
!429 = !{i64 7536}
!430 = !{i64 7547}
!431 = !{i64 7552}
!432 = !{i64 7558}
!433 = !{i64 7569}
!434 = !{i64 7578}
!435 = !{i64 7600}
!436 = !{i64 7605}
!437 = !{i64 7610}
!438 = !{i64 7616}
!439 = !{i64 7619}
!440 = !{i64 7624}
!441 = !{i64 7630}
!442 = !{i64 7641}
!443 = !{i64 7646}
!444 = !{i64 7652}
!445 = !{i64 7663}
!446 = !{i64 7668}
!447 = !{i64 7674}
!448 = !{i64 7685}
!449 = !{i64 7690}
!450 = !{i64 7696}
!451 = !{i64 7707}
!452 = !{i64 7712}
!453 = !{i64 7718}
!454 = !{i64 7729}
!455 = !{i64 7744}
!456 = !{i64 7750}
!457 = !{i64 7753}
!458 = !{i64 7758}
!459 = !{i64 7764}
!460 = !{i64 7775}
!461 = !{i64 7780}
!462 = !{i64 7786}
!463 = !{i64 7797}
!464 = !{i64 7802}
!465 = !{i64 7808}
!466 = !{i64 7819}
!467 = !{i64 7830}
!468 = !{i64 7840}
!469 = !{i64 7844}
!470 = !{i64 7855}
!471 = !{i64 7861}
!472 = !{i64 7864}
!473 = !{i64 7890}
!474 = !{i64 7896}
!475 = !{i64 7899}
!476 = !{i64 7905}
!477 = !{i64 7924}
!478 = !{i64 7935}
!479 = !{i64 7944}
