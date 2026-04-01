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
@global_var_3b64 = local_unnamed_addr constant i32 28
@global_var_3b28 = constant i32 1252
@global_var_3af4 = local_unnamed_addr constant i32 135151872
@global_var_3a84 = local_unnamed_addr constant i32 1088
@global_var_3994 = local_unnamed_addr constant i32 4
@global_var_3904 = local_unnamed_addr constant i32 222429829
@global_var_38d4 = constant i32 -9092
@global_var_37a4 = local_unnamed_addr constant i32 4
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

define i32 @cdecl_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1210:
  %0 = add i32 %b, %a, !insn.addr !35
  ret i32 %0, !insn.addr !36
}

define i32 @call_cdecl() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @cdecl_func(i32 5, i32 10), !insn.addr !37
  ret i32 %0, !insn.addr !38
}

define i32 @stdcall_func(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i32 %b, %a, !insn.addr !39
  ret i32 %0, !insn.addr !40
}

define i32 @call_stdcall() local_unnamed_addr {
dec_label_pc_1280:
  %0 = call i32 @stdcall_func(i32 5, i32 10), !insn.addr !41
  ret i32 %0, !insn.addr !42
}

define i32 @fastcall_func(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %1, %a, !insn.addr !43
  %4 = add i32 %3, %2, !insn.addr !44
  ret i32 %4, !insn.addr !45

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @call_fastcall() local_unnamed_addr {
dec_label_pc_12d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @fastcall_func(i32 3, i32 %1, i32 ptrtoint (i32* @0 to i32)), !insn.addr !46
  ret i32 %2, !insn.addr !47
}

define i32 @call_thiscall() local_unnamed_addr {
dec_label_pc_1300:
  ret i32 15, !insn.addr !48
}

define i32 @arm_aapcs_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1310:
  %0 = add i32 %b, %a, !insn.addr !49
  %1 = add i32 %0, %c, !insn.addr !50
  %2 = add i32 %1, %d, !insn.addr !51
  %3 = add i32 %2, %e, !insn.addr !52
  ret i32 %3, !insn.addr !53
}

define i32 @call_arm_aapcs() local_unnamed_addr {
dec_label_pc_1340:
  %0 = call i32 @arm_aapcs_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !54
  ret i32 %0, !insn.addr !55
}

define i32 @mips_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_1390:
  %0 = add i32 %b, %a, !insn.addr !56
  %1 = add i32 %0, %c, !insn.addr !57
  %2 = add i32 %1, %d, !insn.addr !58
  ret i32 %2, !insn.addr !59
}

define i32 @call_mips() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = call i32 @mips_func(i32 10, i32 20, i32 30, i32 40), !insn.addr !60
  ret i32 %0, !insn.addr !61
}

define i32 @amd64_sysv_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = add i32 %b, %a, !insn.addr !62
  %1 = add i32 %0, %c, !insn.addr !63
  %2 = add i32 %1, %d, !insn.addr !64
  %3 = add i32 %2, %e, !insn.addr !65
  %4 = add i32 %3, %f, !insn.addr !66
  ret i32 %4, !insn.addr !67
}

define i32 @call_amd64_sysv() local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @amd64_sysv_func(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6), !insn.addr !68
  ret i32 %0, !insn.addr !69
}

define i32 @ms_x64_func(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1470:
  %0 = add i32 %b, %a, !insn.addr !70
  %1 = add i32 %0, %c, !insn.addr !71
  %2 = add i32 %1, %d, !insn.addr !72
  %3 = add i32 %2, %e, !insn.addr !73
  ret i32 %3, !insn.addr !74
}

define i32 @call_ms_x64() local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @ms_x64_func(i32 1, i32 2, i32 3, i32 4, i32 5), !insn.addr !75
  ret i32 %0, !insn.addr !76
}

define i32 @vectorcall_func(i32 %a, i32 %b, i32 %c, i32 %d) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = add i32 %b, %a, !insn.addr !77
  %1 = add i32 %0, %c, !insn.addr !78
  %2 = add i32 %1, %d, !insn.addr !79
  ret i32 %2, !insn.addr !80
}

define i32 @call_vectorcall() local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i32 @vectorcall_func(i32 1, i32 2, i32 3, i32 4), !insn.addr !81
  ret i32 %0, !insn.addr !82
}

define i32 @mixed_conventions_test() local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @cdecl_func(i32 1, i32 2), !insn.addr !83
  %1 = call i32 @stdcall_func(i32 3, i32 4), !insn.addr !84
  %2 = add i32 %1, %0, !insn.addr !85
  %3 = call i32 @fastcall_func(i32 7, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !86
  %4 = add i32 %2, %3, !insn.addr !87
  ret i32 %4, !insn.addr !88

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @fastcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @stdcall_func, { 1, 0 }
  uselistorder i32 (i32, i32)* @cdecl_func, { 1, 0 }
}

define i32 @varargs_func(i32 %count, ...) local_unnamed_addr {
dec_label_pc_15e0:
  %sum_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !89
  %sum_-12.01.reg2mem = alloca i32, !insn.addr !89
  %args_-8.02.reg2mem = alloca i8*, !insn.addr !89
  %storemerge3.reg2mem = alloca i32, !insn.addr !89
  %stack_var_8 = alloca i32, align 4
  %0 = icmp sgt i32 %count, 0, !insn.addr !90
  store i32 0, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !90
  br i1 %0, label %dec_label_pc_160b.lr.ph, label %dec_label_pc_162c, !insn.addr !90

dec_label_pc_160b.lr.ph:                          ; preds = %dec_label_pc_15e0
  %1 = bitcast i32* %stack_var_8 to i8*, !insn.addr !91
  store i32 0, i32* %storemerge3.reg2mem
  store i8* %1, i8** %args_-8.02.reg2mem
  store i32 0, i32* %sum_-12.01.reg2mem
  br label %dec_label_pc_160b

dec_label_pc_160b:                                ; preds = %dec_label_pc_160b, %dec_label_pc_160b.lr.ph
  %sum_-12.01.reload = load i32, i32* %sum_-12.01.reg2mem
  %args_-8.02.reload = load i8*, i8** %args_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = ptrtoint i8* %args_-8.02.reload to i32, !insn.addr !92
  %3 = add i32 %2, 4, !insn.addr !93
  %4 = inttoptr i32 %3 to i8*, !insn.addr !94
  %5 = bitcast i8* %args_-8.02.reload to i32*, !insn.addr !95
  %6 = load i32, i32* %5, align 4, !insn.addr !95
  %7 = add i32 %6, %sum_-12.01.reload, !insn.addr !96
  %8 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !97
  %exitcond = icmp eq i32 %8, %count
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !90
  store i8* %4, i8** %args_-8.02.reg2mem, !insn.addr !90
  store i32 %7, i32* %sum_-12.01.reg2mem, !insn.addr !90
  store i32 %7, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !90
  br i1 %exitcond, label %dec_label_pc_162c, label %dec_label_pc_160b, !insn.addr !90

dec_label_pc_162c:                                ; preds = %dec_label_pc_160b, %dec_label_pc_15e0
  %sum_-12.0.lcssa.reload = load i32, i32* %sum_-12.0.lcssa.reg2mem
  ret i32 %sum_-12.0.lcssa.reload, !insn.addr !98

; uselistorder directives
  uselistorder i8* %args_-8.02.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i8** %args_-8.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-12.01.reg2mem, { 1, 0, 2 }
}

define i32 @func_no_args() local_unnamed_addr {
dec_label_pc_1640:
  ret i32 42, !insn.addr !99
}

define i32 @func_many_args(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e, i32 %f, i32 %g, i32 %h) local_unnamed_addr {
dec_label_pc_1650:
  %0 = add i32 %b, %a, !insn.addr !100
  %1 = add i32 %0, %c, !insn.addr !101
  %2 = add i32 %1, %d, !insn.addr !102
  %3 = add i32 %2, %e, !insn.addr !103
  %4 = add i32 %3, %f, !insn.addr !104
  %5 = add i32 %4, %g, !insn.addr !105
  %6 = add i32 %5, %h, !insn.addr !106
  ret i32 %6, !insn.addr !107
}

define i32 @func_mixed_args(i32 %x, i8* %s, double %d, i64 %ll) local_unnamed_addr {
dec_label_pc_1690:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !108
  %1 = fptrunc double %d to float
  %2 = bitcast float %1 to i32
  %3 = load i64, i64* %0
  %4 = icmp eq i32 %2, 0, !insn.addr !109
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !110
  br i1 %4, label %dec_label_pc_16e2, label %dec_label_pc_16c1, !insn.addr !110

dec_label_pc_16c1:                                ; preds = %dec_label_pc_1690
  %5 = inttoptr i32 %2 to i8*
  %6 = call i32 @strlen(i8* %5), !insn.addr !111
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !112
  br label %dec_label_pc_16e2, !insn.addr !112

dec_label_pc_16e2:                                ; preds = %dec_label_pc_1690, %dec_label_pc_16c1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %7 = ptrtoint i8* %s to i32, !insn.addr !113
  %8 = add i32 %storemerge.reload, %7, !insn.addr !114
  %9 = sitofp i32 %8 to x86_fp80, !insn.addr !115
  %10 = bitcast i64 %ll to double, !insn.addr !116
  %11 = fpext double %10 to x86_fp80, !insn.addr !116
  %12 = fadd x86_fp80 %11, %9, !insn.addr !117
  %13 = mul i64 %3, 4294967296
  %14 = ashr exact i64 %13, 32, !insn.addr !118
  %15 = sitofp i64 %14 to x86_fp80, !insn.addr !118
  %16 = fadd x86_fp80 %12, %15, !insn.addr !119
  %17 = fptosi x86_fp80 %16 to i32, !insn.addr !120
  ret i32 %17, !insn.addr !121

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16e2, { 1, 0 }
}

define i32 @func_struct_byval(i32 %s) local_unnamed_addr {
dec_label_pc_1730:
  %sum_-20.0.off02.reg2mem = alloca i32, !insn.addr !122
  %storemerge3.reg2mem = alloca i32, !insn.addr !122
  %stack_var_4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_4 to i32, !insn.addr !123
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %sum_-20.0.off02.reg2mem
  br label %dec_label_pc_175c

dec_label_pc_175c:                                ; preds = %dec_label_pc_1730, %dec_label_pc_175c
  %sum_-20.0.off02.reload = load i32, i32* %sum_-20.0.off02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = mul i32 %storemerge3.reload, 8, !insn.addr !124
  %2 = add i32 %1, %0, !insn.addr !124
  %3 = inttoptr i32 %2 to i32*, !insn.addr !124
  %4 = load i32, i32* %3, align 4, !insn.addr !124
  %5 = add i32 %4, %sum_-20.0.off02.reload, !insn.addr !125
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !126
  %exitcond = icmp eq i32 %6, 16
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !127
  store i32 %5, i32* %sum_-20.0.off02.reg2mem, !insn.addr !127
  br i1 %exitcond, label %dec_label_pc_1787, label %dec_label_pc_175c, !insn.addr !127

dec_label_pc_1787:                                ; preds = %dec_label_pc_175c
  ret i32 %5, !insn.addr !128

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.0.off02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_175c, { 1, 0 }
}

define i32 @func_struct_byptr(i32* %p) local_unnamed_addr {
dec_label_pc_1790:
  %storemerge.reg2mem = alloca i32, !insn.addr !129
  %0 = icmp eq i32* %p, null, !insn.addr !130
  %1 = icmp eq i1 %0, false, !insn.addr !131
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !131
  br i1 %1, label %dec_label_pc_17ad, label %dec_label_pc_17bc, !insn.addr !131

dec_label_pc_17ad:                                ; preds = %dec_label_pc_1790
  %2 = ptrtoint i32* %p to i32
  %3 = load i32, i32* %p, align 4, !insn.addr !132
  %4 = add i32 %2, 4, !insn.addr !133
  %5 = inttoptr i32 %4 to i32*, !insn.addr !133
  %6 = load i32, i32* %5, align 4, !insn.addr !133
  %7 = mul i32 %6, %3, !insn.addr !133
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !134
  br label %dec_label_pc_17bc, !insn.addr !134

dec_label_pc_17bc:                                ; preds = %dec_label_pc_1790, %dec_label_pc_17ad
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !135

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %p, { 0, 2, 1 }
  uselistorder label %dec_label_pc_17bc, { 1, 0 }
}

define void @test_calling_conventions() local_unnamed_addr {
dec_label_pc_17d0:
  %0 = alloca i32
  %storemerge2.reg2mem = alloca i32, !insn.addr !136
  %s_-180 = alloca i32, align 4
  %large_-164 = alloca i32, align 4
  %stack_var_-312 = alloca i8*, align 4
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !137
  %3 = add i32 %1, 6183, !insn.addr !138
  %4 = inttoptr i32 %3 to i8*, !insn.addr !139
  store i8* %4, i8** %stack_var_-312, align 4, !insn.addr !139
  %5 = call i32 (i8*, ...) @printf(i8* %4), !insn.addr !140
  %6 = call i32 @call_cdecl(), !insn.addr !141
  %7 = add i32 %1, 6217, !insn.addr !142
  %8 = inttoptr i32 %7 to i8*, !insn.addr !143
  store i8* %8, i8** %stack_var_-312, align 4, !insn.addr !143
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !144
  %10 = call i32 @call_stdcall(), !insn.addr !145
  %11 = add i32 %1, 6233, !insn.addr !146
  %12 = inttoptr i32 %11 to i8*, !insn.addr !147
  store i8* %12, i8** %stack_var_-312, align 4, !insn.addr !147
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !148
  %14 = call i32 @call_fastcall(), !insn.addr !149
  %15 = add i32 %1, 6249, !insn.addr !150
  %16 = inttoptr i32 %15 to i8*, !insn.addr !151
  store i8* %16, i8** %stack_var_-312, align 4, !insn.addr !151
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !152
  %18 = call i32 @call_thiscall(), !insn.addr !153
  %19 = add i32 %1, 6265, !insn.addr !154
  %20 = inttoptr i32 %19 to i8*, !insn.addr !155
  store i8* %20, i8** %stack_var_-312, align 4, !insn.addr !155
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !156
  %22 = call i32 @call_arm_aapcs(), !insn.addr !157
  %23 = add i32 %1, 6281, !insn.addr !158
  %24 = inttoptr i32 %23 to i8*, !insn.addr !159
  store i8* %24, i8** %stack_var_-312, align 4, !insn.addr !159
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !160
  %26 = call i32 @call_mips(), !insn.addr !161
  %27 = add i32 %1, 6297, !insn.addr !162
  %28 = inttoptr i32 %27 to i8*, !insn.addr !163
  store i8* %28, i8** %stack_var_-312, align 4, !insn.addr !163
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !164
  %30 = call i32 @call_amd64_sysv(), !insn.addr !165
  %31 = add i32 %1, 6313, !insn.addr !166
  %32 = inttoptr i32 %31 to i8*, !insn.addr !167
  store i8* %32, i8** %stack_var_-312, align 4, !insn.addr !167
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !168
  %34 = call i32 @call_ms_x64(), !insn.addr !169
  %35 = add i32 %1, 6329, !insn.addr !170
  %36 = inttoptr i32 %35 to i8*, !insn.addr !171
  store i8* %36, i8** %stack_var_-312, align 4, !insn.addr !171
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !172
  %38 = call i32 @call_vectorcall(), !insn.addr !173
  %39 = add i32 %1, 6345, !insn.addr !174
  %40 = inttoptr i32 %39 to i8*, !insn.addr !175
  store i8* %40, i8** %stack_var_-312, align 4, !insn.addr !175
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !176
  %42 = call i32 @mixed_conventions_test(), !insn.addr !177
  %43 = add i32 %1, 6361, !insn.addr !178
  %44 = inttoptr i32 %43 to i8*, !insn.addr !179
  store i8* %44, i8** %stack_var_-312, align 4, !insn.addr !179
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !180
  store i8* inttoptr (i32 5 to i8*), i8** %stack_var_-312, align 4, !insn.addr !181
  %46 = call i32 (i32, ...) @varargs_func(i32 5), !insn.addr !182
  %47 = add i32 %1, 6377, !insn.addr !183
  %48 = inttoptr i32 %47 to i8*, !insn.addr !184
  store i8* %48, i8** %stack_var_-312, align 4, !insn.addr !184
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !185
  %50 = call i32 @func_no_args(), !insn.addr !186
  %51 = add i32 %1, 6417, !insn.addr !187
  %52 = inttoptr i32 %51 to i8*, !insn.addr !188
  store i8* %52, i8** %stack_var_-312, align 4, !insn.addr !188
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !189
  store i8* inttoptr (i32 1 to i8*), i8** %stack_var_-312, align 4, !insn.addr !190
  %54 = call i32 @func_many_args(i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8), !insn.addr !191
  %55 = add i32 %1, 6451, !insn.addr !192
  %56 = inttoptr i32 %55 to i8*, !insn.addr !193
  store i8* %56, i8** %stack_var_-312, align 4, !insn.addr !193
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !194
  %58 = add i32 %1, 6490, !insn.addr !195
  %59 = inttoptr i32 %58 to i8*, !insn.addr !196
  store i8* inttoptr (i32 10 to i8*), i8** %stack_var_-312, align 4, !insn.addr !197
  %60 = call i32 @func_mixed_args(i32 10, i8* %59, double 0x51EB851F, i64 1074339512), !insn.addr !198
  %61 = add i32 %1, 6495, !insn.addr !199
  %62 = inttoptr i32 %61 to i8*, !insn.addr !200
  store i8* %62, i8** %stack_var_-312, align 4, !insn.addr !200
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !201
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_1ab6

dec_label_pc_1ab6:                                ; preds = %dec_label_pc_17d0, %dec_label_pc_1ab6
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %64 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !202
  %65 = mul i32 %storemerge2.reload, 8, !insn.addr !203
  %66 = add i32 %65, %2
  %67 = add i32 %66, -160, !insn.addr !203
  %68 = inttoptr i32 %67 to i32*, !insn.addr !203
  store i32 %64, i32* %68, align 4, !insn.addr !203
  %69 = add i32 %66, -156, !insn.addr !204
  %70 = inttoptr i32 %69 to i32*, !insn.addr !204
  store i32 0, i32* %70, align 4, !insn.addr !204
  %exitcond = icmp eq i32 %64, 16
  store i32 %64, i32* %storemerge2.reg2mem, !insn.addr !205
  br i1 %exitcond, label %dec_label_pc_1ae8, label %dec_label_pc_1ab6, !insn.addr !205

dec_label_pc_1ae8:                                ; preds = %dec_label_pc_1ab6
  %71 = bitcast i32* %large_-164 to i8*, !insn.addr !206
  %72 = bitcast i8** %stack_var_-312 to i8*, !insn.addr !206
  call void @__asm_rep_movsd_memcpy(i8* nonnull %72, i8* nonnull %71, i32 32), !insn.addr !206
  %73 = call i32 @func_struct_byval(i32 ptrtoint (i32* @0 to i32)), !insn.addr !207
  %74 = add i32 %1, 6535, !insn.addr !208
  %75 = inttoptr i32 %74 to i8*, !insn.addr !209
  store i8* %75, i8** %stack_var_-312, align 4, !insn.addr !209
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !210
  %77 = add i32 %1, 7147, !insn.addr !211
  %78 = inttoptr i32 %77 to i32*, !insn.addr !211
  %79 = load i32, i32* %78, align 4, !insn.addr !211
  store i32 %79, i32* %s_-180, align 4, !insn.addr !212
  %80 = bitcast i32* %s_-180 to i8*
  store i8* %80, i8** %stack_var_-312, align 4, !insn.addr !213
  %81 = call i32 @func_struct_byptr(i32* nonnull %s_-180), !insn.addr !214
  %82 = add i32 %1, 6579, !insn.addr !215
  %83 = inttoptr i32 %82 to i8*, !insn.addr !216
  store i8* %83, i8** %stack_var_-312, align 4, !insn.addr !216
  %84 = call i32 (i8*, ...) @printf(i8* %83), !insn.addr !217
  ret void, !insn.addr !218

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32 %1, { 18, 17, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }
  uselistorder i8** %stack_var_-312, { 20, 19, 18, 21, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32 8, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ab6, { 1, 0 }
}

define i32 @param_by_value_int(i32 %x) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = mul i32 %x, 2, !insn.addr !219
  ret i32 %0, !insn.addr !220
}

define i32 @call_by_value_int() local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = call i32 @param_by_value_int(i32 5), !insn.addr !221
  %1 = add i32 %0, 5, !insn.addr !222
  ret i32 %1, !insn.addr !223
}

define i32 @param_by_value_ptr(i32* %p) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = load i32, i32* %p, align 4, !insn.addr !224
  %1 = mul i32 %0, 2, !insn.addr !225
  store i32 %1, i32* %p, align 4, !insn.addr !226
  ret i32 1, !insn.addr !227
}

define i32 @call_by_value_ptr() local_unnamed_addr {
dec_label_pc_1c20:
  %val_-12 = alloca i32, align 4
  store i32 5, i32* %val_-12, align 4, !insn.addr !228
  %0 = call i32 @param_by_value_ptr(i32* nonnull %val_-12), !insn.addr !229
  %1 = load i32, i32* %val_-12, align 4, !insn.addr !230
  %2 = add i32 %1, %0, !insn.addr !231
  ret i32 %2, !insn.addr !232

; uselistorder directives
  uselistorder i32* %val_-12, { 1, 0, 2 }
}

define i32 @param_array_decay(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1c60:
  ret i32 4, !insn.addr !233
}

define i32 @call_array_decay() local_unnamed_addr {
dec_label_pc_1c70:
  %array_-48 = alloca [1 x i32], align 4
  %0 = getelementptr inbounds [1 x i32], [1 x i32]* %array_-48, i32 0, i32 0, !insn.addr !234
  %1 = call i32* @memset(i32* nonnull %0, i32 0, i32 40), !insn.addr !234
  %2 = call i32 @param_array_decay(i32* nonnull %0, i32 10), !insn.addr !235
  ret i32 %2, !insn.addr !236
}

define i32 @param_string(i8* %str) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = ptrtoint i8* %str to i32
  %1 = load i8, i8* %str, align 1, !insn.addr !237
  %2 = sext i8 %1 to i32, !insn.addr !237
  %3 = add i32 %0, 1, !insn.addr !238
  %4 = inttoptr i32 %3 to i8*, !insn.addr !238
  %5 = load i8, i8* %4, align 1, !insn.addr !238
  %6 = sext i8 %5 to i32, !insn.addr !238
  %7 = add nsw i32 %6, %2, !insn.addr !239
  ret i32 %7, !insn.addr !240
}

define i32 @call_string_param() local_unnamed_addr {
dec_label_pc_1ce0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 5335, !insn.addr !241
  %3 = inttoptr i32 %2 to i8*, !insn.addr !242
  %4 = call i32 @param_string(i8* %3), !insn.addr !243
  ret i32 %4, !insn.addr !244
}

define i32 @param_ptr_array(i8** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1d10:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !245
  %sum_-8.02.reg2mem = alloca i32, !insn.addr !245
  %storemerge3.reg2mem = alloca i32, !insn.addr !245
  %0 = icmp sgt i32 %n, 0, !insn.addr !246
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !246
  br i1 %0, label %dec_label_pc_1d36.lr.ph, label %dec_label_pc_1d56, !insn.addr !246

dec_label_pc_1d36.lr.ph:                          ; preds = %dec_label_pc_1d10
  %1 = ptrtoint i8** %arr to i32, !insn.addr !247
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %sum_-8.02.reg2mem
  br label %dec_label_pc_1d36

dec_label_pc_1d36:                                ; preds = %dec_label_pc_1d36, %dec_label_pc_1d36.lr.ph
  %sum_-8.02.reload = load i32, i32* %sum_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = mul i32 %storemerge3.reload, 4, !insn.addr !248
  %3 = add i32 %2, %1, !insn.addr !248
  %4 = inttoptr i32 %3 to i32*, !insn.addr !248
  %5 = load i32, i32* %4, align 4, !insn.addr !248
  %6 = inttoptr i32 %5 to i8*, !insn.addr !249
  %7 = load i8, i8* %6, align 1, !insn.addr !249
  %8 = sext i8 %7 to i32, !insn.addr !249
  %9 = add i32 %sum_-8.02.reload, %8, !insn.addr !250
  %10 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !251
  %exitcond = icmp eq i32 %10, %n
  store i32 %10, i32* %storemerge3.reg2mem, !insn.addr !246
  store i32 %9, i32* %sum_-8.02.reg2mem, !insn.addr !246
  store i32 %9, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !246
  br i1 %exitcond, label %dec_label_pc_1d56, label %dec_label_pc_1d36, !insn.addr !246

dec_label_pc_1d56:                                ; preds = %dec_label_pc_1d36, %dec_label_pc_1d10
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !252

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.02.reg2mem, { 1, 0, 2 }
}

define i32 @call_ptr_array() local_unnamed_addr {
dec_label_pc_1d60:
  %strs_-20 = alloca [1 x i8*], align 4
  %0 = getelementptr inbounds [1 x i8*], [1 x i8*]* %strs_-20, i32 0, i32 0
  store [1 x i8*] [i8* inttoptr (i32 3 to i8*)], [1 x i8*]* %strs_-20, align 4, !insn.addr !253
  %1 = bitcast [1 x i8*]* %strs_-20 to i32*, !insn.addr !254
  %2 = load i32, i32* %1, align 4, !insn.addr !254
  %3 = call i32 @param_ptr_array(i8** nonnull %0, i32 %2), !insn.addr !254
  ret i32 %3, !insn.addr !255

; uselistorder directives
  uselistorder [1 x i8*]* %strs_-20, { 1, 2, 0 }
}

define i32 @param_varargs(i32 %count, ...) local_unnamed_addr {
dec_label_pc_1db0:
  %sum_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !256
  %args_-8.01.reg2mem = alloca i8*, !insn.addr !256
  %sum_-12.02.reg2mem = alloca i32, !insn.addr !256
  %storemerge3.reg2mem = alloca i32, !insn.addr !256
  %stack_var_8 = alloca i32, align 4
  %0 = icmp sgt i32 %count, 0, !insn.addr !257
  store i32 0, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !257
  br i1 %0, label %dec_label_pc_1ddb.lr.ph, label %dec_label_pc_1dfc, !insn.addr !257

dec_label_pc_1ddb.lr.ph:                          ; preds = %dec_label_pc_1db0
  %1 = bitcast i32* %stack_var_8 to i8*, !insn.addr !258
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %sum_-12.02.reg2mem
  store i8* %1, i8** %args_-8.01.reg2mem
  br label %dec_label_pc_1ddb

dec_label_pc_1ddb:                                ; preds = %dec_label_pc_1ddb, %dec_label_pc_1ddb.lr.ph
  %args_-8.01.reload = load i8*, i8** %args_-8.01.reg2mem
  %sum_-12.02.reload = load i32, i32* %sum_-12.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = ptrtoint i8* %args_-8.01.reload to i32, !insn.addr !259
  %3 = add i32 %2, 4, !insn.addr !260
  %4 = inttoptr i32 %3 to i8*, !insn.addr !261
  %5 = bitcast i8* %args_-8.01.reload to i32*, !insn.addr !262
  %6 = load i32, i32* %5, align 4, !insn.addr !262
  %7 = add i32 %6, %sum_-12.02.reload, !insn.addr !263
  %8 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !264
  %exitcond = icmp eq i32 %8, %count
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !257
  store i32 %7, i32* %sum_-12.02.reg2mem, !insn.addr !257
  store i8* %4, i8** %args_-8.01.reg2mem, !insn.addr !257
  store i32 %7, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !257
  br i1 %exitcond, label %dec_label_pc_1dfc, label %dec_label_pc_1ddb, !insn.addr !257

dec_label_pc_1dfc:                                ; preds = %dec_label_pc_1ddb, %dec_label_pc_1db0
  %sum_-12.0.lcssa.reload = load i32, i32* %sum_-12.0.lcssa.reg2mem
  ret i32 %sum_-12.0.lcssa.reload, !insn.addr !265

; uselistorder directives
  uselistorder i8* %args_-8.01.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-12.02.reg2mem, { 1, 0, 2 }
  uselistorder i8** %args_-8.01.reg2mem, { 1, 0, 2 }
}

define i32 @call_varargs_param() local_unnamed_addr {
dec_label_pc_1e10:
  %0 = call i32 (i32, ...) @param_varargs(i32 4), !insn.addr !266
  ret i32 %0, !insn.addr !267
}

define i32 @param_func_ptr(i32 (i32)* %callback, i32 %x) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = add i32 %x, 10, !insn.addr !268
  ret i32 %0, !insn.addr !269
}

define i32 @call_func_ptr_param() local_unnamed_addr {
dec_label_pc_1e90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 36, !insn.addr !270
  %3 = inttoptr i32 %2 to i32 (i32)*, !insn.addr !271
  %4 = call i32 @param_func_ptr(i32 (i32)* %3, i32 5), !insn.addr !272
  ret i32 %4, !insn.addr !273
}

define i32 @callback_func(i32 %x) local_unnamed_addr {
dec_label_pc_1ec0:
  %0 = mul i32 %x, 2, !insn.addr !274
  ret i32 %0, !insn.addr !275
}

define i32 @param_double_ptr(i32** %pp, i32 %new_val) local_unnamed_addr {
dec_label_pc_1ed0:
  %storemerge.reg2mem = alloca i32, !insn.addr !276
  %0 = icmp eq i32** %pp, null, !insn.addr !277
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !278
  br i1 %0, label %dec_label_pc_1f16, label %dec_label_pc_1ee4, !insn.addr !278

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1ed0
  %1 = load i32*, i32** %pp, align 4
  %2 = icmp eq i32* %1, null, !insn.addr !279
  %3 = icmp eq i1 %2, false, !insn.addr !280
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !280
  br i1 %3, label %dec_label_pc_1efc, label %dec_label_pc_1f16, !insn.addr !280

dec_label_pc_1efc:                                ; preds = %dec_label_pc_1ee4
  store i32 %new_val, i32* %1, align 4, !insn.addr !281
  %4 = bitcast i32** %pp to i32*
  store i32 0, i32* %4, align 4, !insn.addr !282
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !283
  br label %dec_label_pc_1f16, !insn.addr !283

dec_label_pc_1f16:                                ; preds = %dec_label_pc_1ed0, %dec_label_pc_1ee4, %dec_label_pc_1efc
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !284

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32** %pp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1f16, { 2, 1, 0 }
}

define i32 @call_double_ptr() local_unnamed_addr {
dec_label_pc_1f20:
  %ptr_-20 = alloca i32*, align 4
  %val_-16 = alloca i32, align 4
  store i32 10, i32* %val_-16, align 4, !insn.addr !285
  store i32* %val_-16, i32** %ptr_-20, align 4, !insn.addr !286
  %0 = call i32 @param_double_ptr(i32** nonnull %ptr_-20, i32 20), !insn.addr !287
  %1 = load i32, i32* %val_-16, align 4, !insn.addr !288
  %2 = load i32*, i32** %ptr_-20, align 4, !insn.addr !289
  %3 = icmp eq i32* %2, null, !insn.addr !290
  %4 = zext i1 %3 to i32, !insn.addr !291
  %5 = add i32 %1, %4, !insn.addr !292
  ret i32 %5, !insn.addr !293

; uselistorder directives
  uselistorder i32* %val_-16, { 1, 0, 2 }
  uselistorder i32** %ptr_-20, { 1, 0, 2 }
}

define i32 @param_complex_cast(i8* %p, i32 %type) local_unnamed_addr {
dec_label_pc_1f80:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !294
  %0 = icmp eq i32 %type, 0, !insn.addr !295
  %1 = icmp eq i1 %0, false, !insn.addr !296
  br i1 %1, label %dec_label_pc_1fb5, label %dec_label_pc_1f96, !insn.addr !296

dec_label_pc_1f96:                                ; preds = %dec_label_pc_1f80
  %2 = bitcast i8* %p to i32*
  %3 = load i32, i32* %2, align 4, !insn.addr !297
  store i32 %3, i32* %stack_var_-8.0.reg2mem, !insn.addr !298
  br label %dec_label_pc_1fe4, !insn.addr !298

dec_label_pc_1fb5:                                ; preds = %dec_label_pc_1f80
  %4 = icmp eq i32 %type, 1, !insn.addr !299
  %5 = icmp eq i1 %4, false, !insn.addr !300
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !300
  br i1 %5, label %dec_label_pc_1fe4, label %dec_label_pc_1fbf, !insn.addr !300

dec_label_pc_1fbf:                                ; preds = %dec_label_pc_1fb5
  %6 = ptrtoint i8* %p to i32
  %7 = bitcast i8* %p to i32*
  %8 = load i32, i32* %7, align 4, !insn.addr !301
  %9 = add i32 %6, 4, !insn.addr !302
  %10 = inttoptr i32 %9 to i32*, !insn.addr !302
  %11 = load i32, i32* %10, align 4, !insn.addr !302
  %12 = add i32 %11, %8, !insn.addr !302
  store i32 %12, i32* %stack_var_-8.0.reg2mem, !insn.addr !303
  br label %dec_label_pc_1fe4, !insn.addr !303

dec_label_pc_1fe4:                                ; preds = %dec_label_pc_1fb5, %dec_label_pc_1fbf, %dec_label_pc_1f96
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !304

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1fe4, { 1, 0, 2 }
}

define i32 @call_complex_cast() local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = alloca i32
  %pair_-20 = alloca i32, align 4
  %val_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  store i32 305419896, i32* %val_-12, align 4, !insn.addr !305
  %2 = add i32 %1, 5080, !insn.addr !306
  %3 = inttoptr i32 %2 to i32*, !insn.addr !306
  %4 = load i32, i32* %3, align 4, !insn.addr !306
  store i32 %4, i32* %pair_-20, align 4, !insn.addr !307
  %5 = bitcast i32* %pair_-20 to i8*
  %6 = call i32 @param_complex_cast(i8* nonnull %5, i32 1), !insn.addr !308
  %7 = bitcast i32* %val_-12 to i8*
  %8 = call i32 @param_complex_cast(i8* nonnull %7, i32 0), !insn.addr !309
  ret i32 %8, !insn.addr !310

; uselistorder directives
  uselistorder i32 (i8*, i32)* @param_complex_cast, { 1, 0 }
}

define i32 @param_struct_byval(i32 %s) local_unnamed_addr {
dec_label_pc_2050:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, %s, !insn.addr !311
  ret i32 %2, !insn.addr !312
}

define i32 @call_struct_byval() local_unnamed_addr {
dec_label_pc_2060:
  %storemerge1.reg2mem = alloca i32, !insn.addr !313
  %s_-84 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !314
  %1 = add i32 %0, -80, !insn.addr !315
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_208c

dec_label_pc_208c:                                ; preds = %dec_label_pc_2060, %dec_label_pc_208c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %2 = mul i32 %storemerge1.reload, 4, !insn.addr !315
  %3 = add i32 %1, %2, !insn.addr !315
  %4 = inttoptr i32 %3 to i32*, !insn.addr !315
  store i32 %storemerge1.reload, i32* %4, align 4, !insn.addr !315
  %5 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !316
  %exitcond = icmp eq i32 %5, 16
  store i32 %5, i32* %storemerge1.reg2mem, !insn.addr !317
  br i1 %exitcond, label %dec_label_pc_20a4, label %dec_label_pc_208c, !insn.addr !317

dec_label_pc_20a4:                                ; preds = %dec_label_pc_208c
  %6 = bitcast i32* %s_-84 to i8*, !insn.addr !318
  %7 = bitcast i32* %stack_var_-152 to i8*, !insn.addr !318
  call void @__asm_rep_movsd_memcpy(i8* nonnull %7, i8* nonnull %6, i32 16), !insn.addr !318
  %8 = call i32 @param_struct_byval(i32 ptrtoint (i32* @0 to i32)), !insn.addr !319
  ret i32 %8, !insn.addr !320

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_208c, { 1, 0 }
}

define i32 @param_order_dep(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = add i32 %b, %a, !insn.addr !321
  ret i32 %0, !insn.addr !322
}

define i32 @call_order_dep() local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i32 @param_order_dep(i32 1, i32 2), !insn.addr !323
  ret i32 %0, !insn.addr !324
}

define void @test_parameter_passing() local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11821), !insn.addr !325
  %3 = inttoptr i32 %2 to i8*, !insn.addr !326
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !327
  %5 = call i32 @call_by_value_int(), !insn.addr !328
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11787), !insn.addr !329
  %7 = inttoptr i32 %6 to i8*, !insn.addr !330
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !331
  %9 = call i32 @call_by_value_ptr(), !insn.addr !332
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11770), !insn.addr !333
  %11 = inttoptr i32 %10 to i8*, !insn.addr !334
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !335
  %13 = call i32 @call_array_decay(), !insn.addr !336
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11753), !insn.addr !337
  %15 = inttoptr i32 %14 to i8*, !insn.addr !338
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !339
  %17 = call i32 @call_string_param(), !insn.addr !340
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11736), !insn.addr !341
  %19 = inttoptr i32 %18 to i8*, !insn.addr !342
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !343
  %21 = call i32 @call_ptr_array(), !insn.addr !344
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11719), !insn.addr !345
  %23 = inttoptr i32 %22 to i8*, !insn.addr !346
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !347
  %25 = call i32 @call_varargs_param(), !insn.addr !348
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11702), !insn.addr !349
  %27 = inttoptr i32 %26 to i8*, !insn.addr !350
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !351
  %29 = call i32 @call_func_ptr_param(), !insn.addr !352
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11685), !insn.addr !353
  %31 = inttoptr i32 %30 to i8*, !insn.addr !354
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !355
  %33 = call i32 @call_double_ptr(), !insn.addr !356
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11668), !insn.addr !357
  %35 = inttoptr i32 %34 to i8*, !insn.addr !358
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !359
  %37 = call i32 @call_complex_cast(), !insn.addr !360
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11651), !insn.addr !361
  %39 = inttoptr i32 %38 to i8*, !insn.addr !362
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !363
  %41 = call i32 @call_struct_byval(), !insn.addr !364
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11634), !insn.addr !365
  %43 = inttoptr i32 %42 to i8*, !insn.addr !366
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !367
  %45 = call i32 @call_order_dep(), !insn.addr !368
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ec4 to i32), i32 -11617), !insn.addr !369
  %47 = inttoptr i32 %46 to i8*, !insn.addr !370
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !371
  ret void, !insn.addr !372

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @ret_basic_type(i32 %x) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = mul i32 %x, 2, !insn.addr !373
  ret i32 %0, !insn.addr !374
}

define i32 @call_ret_basic() local_unnamed_addr {
dec_label_pc_22b0:
  %0 = call i32 @ret_basic_type(i32 21), !insn.addr !375
  ret i32 %0, !insn.addr !376
}

define i32* @ret_pointer(i32* %p) local_unnamed_addr {
dec_label_pc_22f0:
  %0 = ptrtoint i32* %p to i32
  %1 = add i32 %0, 4, !insn.addr !377
  %2 = inttoptr i32 %1 to i32*, !insn.addr !378
  ret i32* %2, !insn.addr !378
}

define i32 @call_ret_pointer() local_unnamed_addr {
dec_label_pc_2300:
  %0 = alloca i32
  %arr_-20 = alloca [1 x i32], align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32** @global_var_3cf4 to i32), i32 -11300), !insn.addr !379
  %3 = inttoptr i32 %2 to i32*, !insn.addr !379
  %4 = load i32, i32* %3, align 4, !insn.addr !379
  %5 = insertvalue [1 x i32] undef, i32 %4, 0, !insn.addr !380
  store [1 x i32] %5, [1 x i32]* %arr_-20, align 4, !insn.addr !380
  %6 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_-20, i32 0, i32 0, !insn.addr !381
  %7 = call i32* @ret_pointer(i32* nonnull %6), !insn.addr !381
  %8 = load i32, i32* %7, align 4, !insn.addr !382
  ret i32 %8, !insn.addr !383
}

define i32 @ret_small_struct(i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_2350:
  %0 = inttoptr i32 %x to i32*, !insn.addr !384
  store i32 %y, i32* %0, align 4, !insn.addr !384
  %1 = add i32 %x, 4, !insn.addr !385
  %2 = inttoptr i32 %1 to i32*, !insn.addr !385
  ret i32 %x, !insn.addr !386
}

define i32 @call_ret_small_struct() local_unnamed_addr {
dec_label_pc_2370:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %p_-20 = alloca i32, align 4
  %2 = ptrtoint i32* %p_-20 to i32, !insn.addr !387
  %3 = call i32 @ret_small_struct(i32 %2, i32 3), !insn.addr !388
  %4 = load i32, i32* %p_-20, align 4, !insn.addr !389
  %5 = add i32 %4, %1, !insn.addr !390
  ret i32 %5, !insn.addr !391
}

define i32 @ret_large_struct(i32 %seed) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !392
  %1 = load i32, i32* %0
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_23d3

dec_label_pc_23d3:                                ; preds = %dec_label_pc_23b0, %dec_label_pc_23d3
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %2 = add i32 %storemerge1.reload, %1, !insn.addr !393
  %3 = mul i32 %storemerge1.reload, 4, !insn.addr !394
  %4 = add i32 %3, %seed, !insn.addr !394
  %5 = inttoptr i32 %4 to i32*, !insn.addr !394
  store i32 %2, i32* %5, align 4, !insn.addr !394
  %6 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !395
  %exitcond = icmp eq i32 %6, 16
  store i32 %6, i32* %storemerge1.reg2mem, !insn.addr !396
  br i1 %exitcond, label %dec_label_pc_23f0, label %dec_label_pc_23d3, !insn.addr !396

dec_label_pc_23f0:                                ; preds = %dec_label_pc_23d3
  ret i32 %seed, !insn.addr !397

; uselistorder directives
  uselistorder i32 %storemerge1.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 16, { 0, 4, 1, 2, 3 }
  uselistorder i32 4, { 0, 13, 14, 1, 15, 4, 16, 2, 3, 5, 17, 18, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder i32 %seed, { 1, 0 }
  uselistorder label %dec_label_pc_23d3, { 1, 0 }
}

define i32 @call_ret_large_struct() local_unnamed_addr {
dec_label_pc_2400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %d_-76 = alloca i32, align 4
  %2 = ptrtoint i32* %d_-76 to i32, !insn.addr !398
  %3 = call i32 @ret_large_struct(i32 %2), !insn.addr !399
  %4 = load i32, i32* %d_-76, align 4, !insn.addr !400
  %5 = add i32 %4, %1, !insn.addr !401
  ret i32 %5, !insn.addr !402
}

define i32 @func_a(i32 %x) local_unnamed_addr {
dec_label_pc_2440:
  %0 = add i32 %x, 10, !insn.addr !403
  ret i32 %0, !insn.addr !404
}

define i32 @func_b(i32 %x) local_unnamed_addr {
dec_label_pc_2450:
  %0 = mul i32 %x, 2, !insn.addr !405
  ret i32 %0, !insn.addr !406
}

define i32 (i32)* @ret_func_ptr(i32 %selector) local_unnamed_addr {
dec_label_pc_2460:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp eq i32 %2, 0, !insn.addr !407
  %4 = icmp eq i1 %3, false, !insn.addr !408
  %.v = select i1 %4, i32 add (i32 ptrtoint (i32* @global_var_3b98 to i32), i32 -15280), i32 add (i32 ptrtoint (i32* @global_var_3b98 to i32), i32 -15296)
  %5 = add i32 %.v, %1, !insn.addr !408
  %6 = inttoptr i32 %5 to i32 (i32)*, !insn.addr !409
  ret i32 (i32)* %6, !insn.addr !409

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3b98 to i32), { 1, 0 }
}

define i32 @call_ret_func_ptr() local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i32 (i32)* @ret_func_ptr(i32 1), !insn.addr !410
  %1 = ptrtoint i32 (i32)* %0 to i32, !insn.addr !410
  ret i32 %1, !insn.addr !411
}

define i8* @ret_opaque_handle(i32 %type) local_unnamed_addr {
dec_label_pc_24d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp eq i32 %2, 0, !insn.addr !412
  %.v = select i1 %3, i32 add (i32 ptrtoint (i32* @global_var_3b28 to i32), i32 40), i32 add (i32 ptrtoint (i32* @global_var_3b28 to i32), i32 48)
  %4 = add i32 %.v, %1, !insn.addr !413
  %5 = inttoptr i32 %4 to i8*, !insn.addr !414
  ret i8* %5, !insn.addr !414

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3b28 to i32), { 1, 0 }
}

define i32 @call_ret_opaque() local_unnamed_addr {
dec_label_pc_2500:
  %0 = call i8* @ret_opaque_handle(i32 0), !insn.addr !415
  %1 = bitcast i8* %0 to i32*, !insn.addr !416
  %2 = load i32, i32* %1, align 4, !insn.addr !416
  ret i32 %2, !insn.addr !417
}

define i32 @ret_complex_expr(i32 %x, i32 %y, i32 %z) local_unnamed_addr {
dec_label_pc_2530:
  %0 = icmp sgt i32 %x, %y, !insn.addr !418
  %1 = add i32 %z, 10
  %2 = mul i32 %z, 2
  %storemerge = select i1 %0, i32 %2, i32 %1
  ret i32 %storemerge, !insn.addr !419
}

define i32 @call_ret_complex_expr() local_unnamed_addr {
dec_label_pc_2570:
  %0 = call i32 @ret_complex_expr(i32 5, i32 3, i32 10), !insn.addr !420
  %1 = call i32 @ret_complex_expr(i32 3, i32 5, i32 10), !insn.addr !421
  %2 = add i32 %1, %0, !insn.addr !422
  ret i32 %2, !insn.addr !423

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @ret_complex_expr, { 1, 0 }
  uselistorder i32 5, { 9, 0, 10, 13, 1, 2, 11, 3, 4, 5, 12, 6, 7, 8 }
}

define i32 @ret_multi_branch(i32 %op) local_unnamed_addr {
dec_label_pc_25e0:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !424
  store i32 10, i32* %stack_var_-8.0.reg2mem
  switch i32 %op, label %dec_label_pc_2642 [
    i32 0, label %dec_label_pc_2649
    i32 1, label %dec_label_pc_262a
    i32 2, label %dec_label_pc_2636
  ]

dec_label_pc_262a:                                ; preds = %dec_label_pc_25e0
  store i32 20, i32* %stack_var_-8.0.reg2mem, !insn.addr !425
  br label %dec_label_pc_2649, !insn.addr !425

dec_label_pc_2636:                                ; preds = %dec_label_pc_25e0
  store i32 30, i32* %stack_var_-8.0.reg2mem, !insn.addr !426
  br label %dec_label_pc_2649, !insn.addr !426

dec_label_pc_2642:                                ; preds = %dec_label_pc_25e0
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !427
  br label %dec_label_pc_2649, !insn.addr !427

dec_label_pc_2649:                                ; preds = %dec_label_pc_25e0, %dec_label_pc_2642, %dec_label_pc_2636, %dec_label_pc_262a
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !428

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32 10, { 0, 4, 5, 10, 11, 9, 12, 6, 1, 2, 3, 7, 8 }
  uselistorder label %dec_label_pc_2649, { 1, 2, 3, 0 }
}

define i32 @call_ret_multi_branch() local_unnamed_addr {
dec_label_pc_2660:
  %0 = call i32 @ret_multi_branch(i32 0), !insn.addr !429
  %1 = call i32 @ret_multi_branch(i32 1), !insn.addr !430
  %2 = add i32 %1, %0, !insn.addr !431
  %3 = call i32 @ret_multi_branch(i32 2), !insn.addr !432
  %4 = add i32 %2, %3, !insn.addr !433
  ret i32 %4, !insn.addr !434

; uselistorder directives
  uselistorder i32 2, { 7, 6, 0, 1, 2, 8, 3, 4, 5, 9, 10, 11, 12, 13, 14 }
  uselistorder i32 (i32)* @ret_multi_branch, { 2, 1, 0 }
}

define void @ret_void(i32 %x, i32* %out) local_unnamed_addr {
dec_label_pc_26d0:
  %0 = mul i32 %x, 3, !insn.addr !435
  store i32 %0, i32* %out, align 4, !insn.addr !436
  ret void, !insn.addr !437

; uselistorder directives
  uselistorder i32 3, { 0, 1, 5, 6, 2, 7, 3, 8, 9, 10, 11, 4 }
}

define i32 @call_ret_void() local_unnamed_addr {
dec_label_pc_26f0:
  %result_-12 = alloca i32, align 4
  call void @ret_void(i32 7, i32* nonnull %result_-12), !insn.addr !438
  %0 = load i32, i32* %result_-12, align 4, !insn.addr !439
  ret i32 %0, !insn.addr !440

; uselistorder directives
  uselistorder i32* %result_-12, { 1, 0 }
  uselistorder i32 7, { 0, 2, 1 }
}

define void @test_return_values() local_unnamed_addr {
dec_label_pc_2720:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11600), !insn.addr !441
  %3 = inttoptr i32 %2 to i8*, !insn.addr !442
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !443
  %5 = call i32 @call_ret_basic(), !insn.addr !444
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11569), !insn.addr !445
  %7 = inttoptr i32 %6 to i8*, !insn.addr !446
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !447
  %9 = call i32 @call_ret_pointer(), !insn.addr !448
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11541), !insn.addr !449
  %11 = inttoptr i32 %10 to i8*, !insn.addr !450
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !451
  %13 = call i32 @call_ret_small_struct(), !insn.addr !452
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11513), !insn.addr !453
  %15 = inttoptr i32 %14 to i8*, !insn.addr !454
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !455
  %17 = call i32 @call_ret_large_struct(), !insn.addr !456
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11486), !insn.addr !457
  %19 = inttoptr i32 %18 to i8*, !insn.addr !458
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !459
  %21 = call i32 @call_ret_func_ptr(), !insn.addr !460
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11457), !insn.addr !461
  %23 = inttoptr i32 %22 to i8*, !insn.addr !462
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !463
  %25 = call i32 @call_ret_opaque(), !insn.addr !464
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11429), !insn.addr !465
  %27 = inttoptr i32 %26 to i8*, !insn.addr !466
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !467
  %29 = call i32 @call_ret_complex_expr(), !insn.addr !468
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11400), !insn.addr !469
  %31 = inttoptr i32 %30 to i8*, !insn.addr !470
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !471
  %33 = call i32 @call_ret_multi_branch(), !insn.addr !472
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11372), !insn.addr !473
  %35 = inttoptr i32 %34 to i8*, !insn.addr !474
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !475
  %37 = call i32 @call_ret_void(), !insn.addr !476
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_38d4 to i32), i32 -11344), !insn.addr !477
  %39 = inttoptr i32 %38 to i8*, !insn.addr !478
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !479
  ret void, !insn.addr !480

; uselistorder directives
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 35, 32, 38, 36, 34, 33, 31, 27, 29, 30, 28, 26, 37, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 39 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2850:
  call void @test_calling_conventions(), !insn.addr !481
  call void @test_parameter_passing(), !insn.addr !482
  call void @test_return_values(), !insn.addr !483
  ret i32 0, !insn.addr !484

; uselistorder directives
  uselistorder i32 0, { 15, 22, 21, 23, 33, 34, 0, 24, 25, 1, 30, 35, 36, 3, 4, 2, 18, 26, 27, 6, 7, 5, 19, 31, 28, 29, 17, 8, 9, 10, 11, 37, 13, 14, 12, 20, 32, 16 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2890:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !485
  %ebx.0.reg2mem = alloca i32, !insn.addr !485
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !486
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3767 to i32), i32 -256), !insn.addr !487
  %4 = inttoptr i32 %3 to i32*, !insn.addr !487
  %5 = load i32, i32* %4, align 4, !insn.addr !487
  %6 = icmp eq i32 %5, -1, !insn.addr !488
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !489
  store i32 -1, i32* %merge.reg2mem, !insn.addr !489
  br i1 %6, label %dec_label_pc_28cd, label %dec_label_pc_28c0, !insn.addr !489

dec_label_pc_28c0:                                ; preds = %dec_label_pc_2890, %dec_label_pc_28c0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !490
  %8 = inttoptr i32 %7 to i32*, !insn.addr !490
  %9 = load i32, i32* %8, align 4, !insn.addr !490
  %10 = icmp eq i32 %9, -1, !insn.addr !491
  %11 = icmp eq i1 %10, false, !insn.addr !492
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !492
  store i32 %9, i32* %merge.reg2mem, !insn.addr !492
  br i1 %11, label %dec_label_pc_28c0, label %dec_label_pc_28cd, !insn.addr !492

dec_label_pc_28cd:                                ; preds = %dec_label_pc_28c0, %dec_label_pc_2890
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !493

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i32 -1, { 6, 0, 7, 1, 2, 4, 3, 5 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_28c0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_28dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !494
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !495
  ret i32 %3, !insn.addr !496

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 26, 28, 27, 25, 24, 67, 54, 53, 29, 23, 55, 22, 68, 21, 88, 30, 20, 69, 19, 70, 18, 17, 56, 89, 73, 72, 71, 31, 16, 66, 75, 74, 15, 57, 32, 77, 76, 33, 34, 14, 90, 78, 38, 37, 36, 35, 79, 91, 41, 40, 39, 13, 92, 80, 81, 52, 93, 58, 59, 84, 65, 83, 82, 42, 12, 43, 94, 85, 45, 44, 46, 0, 95, 86, 50, 49, 48, 47, 60, 61, 62, 63, 64, 11, 10, 9, 8, 51, 7, 6, 5, 4, 87, 3, 2, 1 }
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
!92 = !{i64 5643}
!93 = !{i64 5648}
!94 = !{i64 5651}
!95 = !{i64 5654}
!96 = !{i64 5656}
!97 = !{i64 5665}
!98 = !{i64 5683}
!99 = !{i64 5705}
!100 = !{i64 5742}
!101 = !{i64 5745}
!102 = !{i64 5748}
!103 = !{i64 5751}
!104 = !{i64 5754}
!105 = !{i64 5757}
!106 = !{i64 5760}
!107 = !{i64 5764}
!108 = !{i64 5776}
!109 = !{i64 5815}
!110 = !{i64 5819}
!111 = !{i64 5835}
!112 = !{i64 5843}
!113 = !{i64 5864}
!114 = !{i64 5870}
!115 = !{i64 5875}
!116 = !{i64 5878}
!117 = !{i64 5881}
!118 = !{i64 5883}
!119 = !{i64 5886}
!120 = !{i64 5907}
!121 = !{i64 5921}
!122 = !{i64 5936}
!123 = !{i64 5946}
!124 = !{i64 5986}
!125 = !{i64 5999}
!126 = !{i64 6012}
!127 = !{i64 5974}
!128 = !{i64 6031}
!129 = !{i64 6032}
!130 = !{i64 6039}
!131 = !{i64 6043}
!132 = !{i64 6064}
!133 = !{i64 6069}
!134 = !{i64 6073}
!135 = !{i64 6083}
!136 = !{i64 6096}
!137 = !{i64 6097}
!138 = !{i64 6126}
!139 = !{i64 6132}
!140 = !{i64 6135}
!141 = !{i64 6146}
!142 = !{i64 6157}
!143 = !{i64 6163}
!144 = !{i64 6170}
!145 = !{i64 6181}
!146 = !{i64 6192}
!147 = !{i64 6198}
!148 = !{i64 6205}
!149 = !{i64 6216}
!150 = !{i64 6227}
!151 = !{i64 6233}
!152 = !{i64 6240}
!153 = !{i64 6251}
!154 = !{i64 6262}
!155 = !{i64 6268}
!156 = !{i64 6275}
!157 = !{i64 6286}
!158 = !{i64 6297}
!159 = !{i64 6303}
!160 = !{i64 6310}
!161 = !{i64 6321}
!162 = !{i64 6332}
!163 = !{i64 6338}
!164 = !{i64 6345}
!165 = !{i64 6356}
!166 = !{i64 6367}
!167 = !{i64 6373}
!168 = !{i64 6380}
!169 = !{i64 6391}
!170 = !{i64 6402}
!171 = !{i64 6408}
!172 = !{i64 6415}
!173 = !{i64 6426}
!174 = !{i64 6437}
!175 = !{i64 6443}
!176 = !{i64 6450}
!177 = !{i64 6461}
!178 = !{i64 6472}
!179 = !{i64 6478}
!180 = !{i64 6485}
!181 = !{i64 6496}
!182 = !{i64 6543}
!183 = !{i64 6560}
!184 = !{i64 6566}
!185 = !{i64 6573}
!186 = !{i64 6584}
!187 = !{i64 6601}
!188 = !{i64 6607}
!189 = !{i64 6614}
!190 = !{i64 6625}
!191 = !{i64 6688}
!192 = !{i64 6705}
!193 = !{i64 6711}
!194 = !{i64 6718}
!195 = !{i64 6729}
!196 = !{i64 6735}
!197 = !{i64 6774}
!198 = !{i64 6780}
!199 = !{i64 6797}
!200 = !{i64 6803}
!201 = !{i64 6810}
!202 = !{i64 6846}
!203 = !{i64 6854}
!204 = !{i64 6861}
!205 = !{i64 6832}
!206 = !{i64 6907}
!207 = !{i64 6909}
!208 = !{i64 6932}
!209 = !{i64 6938}
!210 = !{i64 6945}
!211 = !{i64 6956}
!212 = !{i64 6962}
!213 = !{i64 6986}
!214 = !{i64 6989}
!215 = !{i64 7012}
!216 = !{i64 7018}
!217 = !{i64 7025}
!218 = !{i64 7040}
!219 = !{i64 7065}
!220 = !{i64 7075}
!221 = !{i64 7120}
!222 = !{i64 7131}
!223 = !{i64 7139}
!224 = !{i64 7161}
!225 = !{i64 7163}
!226 = !{i64 7169}
!227 = !{i64 7195}
!228 = !{i64 7219}
!229 = !{i64 7238}
!230 = !{i64 7246}
!231 = !{i64 7249}
!232 = !{i64 7257}
!233 = !{i64 7279}
!234 = !{i64 7326}
!235 = !{i64 7348}
!236 = !{i64 7358}
!237 = !{i64 7369}
!238 = !{i64 7375}
!239 = !{i64 7379}
!240 = !{i64 7382}
!241 = !{i64 7409}
!242 = !{i64 7415}
!243 = !{i64 7418}
!244 = !{i64 7428}
!245 = !{i64 7440}
!246 = !{i64 7472}
!247 = !{i64 7478}
!248 = !{i64 7484}
!249 = !{i64 7487}
!250 = !{i64 7490}
!251 = !{i64 7499}
!252 = !{i64 7517}
!253 = !{i64 7572}
!254 = !{i64 7580}
!255 = !{i64 7590}
!256 = !{i64 7600}
!257 = !{i64 7637}
!258 = !{i64 7615}
!259 = !{i64 7643}
!260 = !{i64 7648}
!261 = !{i64 7651}
!262 = !{i64 7654}
!263 = !{i64 7656}
!264 = !{i64 7665}
!265 = !{i64 7683}
!266 = !{i64 7754}
!267 = !{i64 7764}
!268 = !{i64 7810}
!269 = !{i64 7818}
!270 = !{i64 7843}
!271 = !{i64 7849}
!272 = !{i64 7860}
!273 = !{i64 7870}
!274 = !{i64 7881}
!275 = !{i64 7885}
!276 = !{i64 7888}
!277 = !{i64 7898}
!278 = !{i64 7902}
!279 = !{i64 7911}
!280 = !{i64 7914}
!281 = !{i64 7940}
!282 = !{i64 7945}
!283 = !{i64 7951}
!284 = !{i64 7965}
!285 = !{i64 7988}
!286 = !{i64 7998}
!287 = !{i64 8015}
!288 = !{i64 8023}
!289 = !{i64 8026}
!290 = !{i64 8036}
!291 = !{i64 8039}
!292 = !{i64 8042}
!293 = !{i64 8050}
!294 = !{i64 8064}
!295 = !{i64 8076}
!296 = !{i64 8080}
!297 = !{i64 8107}
!298 = !{i64 8112}
!299 = !{i64 8117}
!300 = !{i64 8121}
!301 = !{i64 8136}
!302 = !{i64 8141}
!303 = !{i64 8147}
!304 = !{i64 8171}
!305 = !{i64 8198}
!306 = !{i64 8205}
!307 = !{i64 8211}
!308 = !{i64 8237}
!309 = !{i64 8261}
!310 = !{i64 8271}
!311 = !{i64 8280}
!312 = !{i64 8284}
!313 = !{i64 8288}
!314 = !{i64 8289}
!315 = !{i64 8338}
!316 = !{i64 8345}
!317 = !{i64 8326}
!318 = !{i64 8369}
!319 = !{i64 8371}
!320 = !{i64 8386}
!321 = !{i64 8412}
!322 = !{i64 8416}
!323 = !{i64 8483}
!324 = !{i64 8493}
!325 = !{i64 8518}
!326 = !{i64 8524}
!327 = !{i64 8527}
!328 = !{i64 8535}
!329 = !{i64 8543}
!330 = !{i64 8549}
!331 = !{i64 8556}
!332 = !{i64 8564}
!333 = !{i64 8572}
!334 = !{i64 8578}
!335 = !{i64 8585}
!336 = !{i64 8593}
!337 = !{i64 8601}
!338 = !{i64 8607}
!339 = !{i64 8614}
!340 = !{i64 8622}
!341 = !{i64 8630}
!342 = !{i64 8636}
!343 = !{i64 8643}
!344 = !{i64 8651}
!345 = !{i64 8659}
!346 = !{i64 8665}
!347 = !{i64 8672}
!348 = !{i64 8680}
!349 = !{i64 8688}
!350 = !{i64 8694}
!351 = !{i64 8701}
!352 = !{i64 8709}
!353 = !{i64 8717}
!354 = !{i64 8723}
!355 = !{i64 8730}
!356 = !{i64 8738}
!357 = !{i64 8746}
!358 = !{i64 8752}
!359 = !{i64 8759}
!360 = !{i64 8767}
!361 = !{i64 8775}
!362 = !{i64 8781}
!363 = !{i64 8788}
!364 = !{i64 8796}
!365 = !{i64 8804}
!366 = !{i64 8810}
!367 = !{i64 8817}
!368 = !{i64 8825}
!369 = !{i64 8833}
!370 = !{i64 8839}
!371 = !{i64 8846}
!372 = !{i64 8856}
!373 = !{i64 8873}
!374 = !{i64 8877}
!375 = !{i64 8912}
!376 = !{i64 8928}
!377 = !{i64 8953}
!378 = !{i64 8957}
!379 = !{i64 8979}
!380 = !{i64 8985}
!381 = !{i64 9012}
!382 = !{i64 9023}
!383 = !{i64 9030}
!384 = !{i64 9057}
!385 = !{i64 9062}
!386 = !{i64 9066}
!387 = !{i64 9094}
!388 = !{i64 9113}
!389 = !{i64 9121}
!390 = !{i64 9124}
!391 = !{i64 9132}
!392 = !{i64 9136}
!393 = !{i64 9177}
!394 = !{i64 9183}
!395 = !{i64 9189}
!396 = !{i64 9165}
!397 = !{i64 9207}
!398 = !{i64 9238}
!399 = !{i64 9249}
!400 = !{i64 9257}
!401 = !{i64 9260}
!402 = !{i64 9268}
!403 = !{i64 9289}
!404 = !{i64 9293}
!405 = !{i64 9305}
!406 = !{i64 9309}
!407 = !{i64 9345}
!408 = !{i64 9348}
!409 = !{i64 9352}
!410 = !{i64 9389}
!411 = !{i64 9415}
!412 = !{i64 9457}
!413 = !{i64 9460}
!414 = !{i64 9464}
!415 = !{i64 9500}
!416 = !{i64 9511}
!417 = !{i64 9518}
!418 = !{i64 9539}
!419 = !{i64 9575}
!420 = !{i64 9629}
!421 = !{i64 9663}
!422 = !{i64 9674}
!423 = !{i64 9682}
!424 = !{i64 9696}
!425 = !{i64 9777}
!426 = !{i64 9789}
!427 = !{i64 9794}
!428 = !{i64 9808}
!429 = !{i64 9862}
!430 = !{i64 9883}
!431 = !{i64 9891}
!432 = !{i64 9904}
!433 = !{i64 9909}
!434 = !{i64 9923}
!435 = !{i64 9945}
!436 = !{i64 9952}
!437 = !{i64 9955}
!438 = !{i64 10001}
!439 = !{i64 10006}
!440 = !{i64 10014}
!441 = !{i64 10038}
!442 = !{i64 10044}
!443 = !{i64 10047}
!444 = !{i64 10055}
!445 = !{i64 10063}
!446 = !{i64 10069}
!447 = !{i64 10076}
!448 = !{i64 10084}
!449 = !{i64 10092}
!450 = !{i64 10098}
!451 = !{i64 10105}
!452 = !{i64 10113}
!453 = !{i64 10121}
!454 = !{i64 10127}
!455 = !{i64 10134}
!456 = !{i64 10142}
!457 = !{i64 10150}
!458 = !{i64 10156}
!459 = !{i64 10163}
!460 = !{i64 10171}
!461 = !{i64 10179}
!462 = !{i64 10185}
!463 = !{i64 10192}
!464 = !{i64 10200}
!465 = !{i64 10208}
!466 = !{i64 10214}
!467 = !{i64 10221}
!468 = !{i64 10229}
!469 = !{i64 10237}
!470 = !{i64 10243}
!471 = !{i64 10250}
!472 = !{i64 10258}
!473 = !{i64 10266}
!474 = !{i64 10272}
!475 = !{i64 10279}
!476 = !{i64 10287}
!477 = !{i64 10295}
!478 = !{i64 10301}
!479 = !{i64 10308}
!480 = !{i64 10318}
!481 = !{i64 10349}
!482 = !{i64 10357}
!483 = !{i64 10365}
!484 = !{i64 10377}
!485 = !{i64 10384}
!486 = !{i64 10388}
!487 = !{i64 10399}
!488 = !{i64 10405}
!489 = !{i64 10408}
!490 = !{i64 10434}
!491 = !{i64 10440}
!492 = !{i64 10443}
!493 = !{i64 10449}
!494 = !{i64 10468}
!495 = !{i64 10479}
!496 = !{i64 10488}
