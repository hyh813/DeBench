source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_400 = constant [10 x i8] c"loneTable\00"
@global_var_200 = global i32 4
@global_var_2b9a = constant i32 1157627904
@global_var_1f4 = global i32 5
@global_var_2b1a = constant i32 1111232071
@global_var_2aca = constant i32 -252444672
@global_var_2a7a = constant i32 1308984084
@global_var_25f8 = local_unnamed_addr constant i32 0
@global_var_2597 = local_unnamed_addr constant i32 4096
@global_var_24a7 = local_unnamed_addr constant i32 135135232
@global_var_23fb = constant i32 -690176
@global_var_23c4 = constant i32 -3480
@global_var_22ca = local_unnamed_addr constant [11 x i8] c"tin_macros\00"
@global_var_22ab = constant i32 -1159360840
@global_var_225b = local_unnamed_addr constant i32 -1779845233
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

define void @function_10b0(i32* %d) local_unnamed_addr {
dec_label_pc_10b0:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_10c0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10d0(i32* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @mprotect(i32* %addr, i32 %len, i32 %prot), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10e0() local_unnamed_addr {
dec_label_pc_10e0:
  call void @__stack_chk_fail(), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_10f0(i32 %name) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32* @function_1100(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32* @mmap(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_1110(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_1120(i32* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 @munmap(i32* %addr, i32 %len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @test_preprocessing_features(), !insn.addr !12
  %1 = call i32 @test_asm_features(), !insn.addr !13
  ret i32 0, !insn.addr !14
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_117c(i32 %2), !insn.addr !15
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 11924, !insn.addr !16
  %6 = inttoptr i32 %5 to i32*, !insn.addr !16
  %7 = load i32, i32* %6, align 4, !insn.addr !16
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !17
  %9 = call i32 @__asm_hlt(), !insn.addr !18
  unreachable, !insn.addr !18

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_117c(i32 %arg1) local_unnamed_addr {
dec_label_pc_117c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !20
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1190:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !21
  %3 = add i32 %1, 11895, !insn.addr !22
  ret i32 %3, !insn.addr !23
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !24
  ret i32 0, !insn.addr !25
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1220:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !26
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !27
  %3 = add i32 %1, 11743, !insn.addr !28
  %4 = inttoptr i32 %3 to i8*, !insn.addr !28
  %5 = load i8, i8* %4, align 1, !insn.addr !28
  %6 = icmp eq i8 %5, 0, !insn.addr !28
  %7 = icmp eq i1 %6, false, !insn.addr !29
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !29
  br i1 %7, label %dec_label_pc_12a2, label %dec_label_pc_1241, !insn.addr !29

dec_label_pc_1241:                                ; preds = %dec_label_pc_1220
  %8 = add i32 %1, 11715, !insn.addr !30
  %9 = inttoptr i32 %8 to i32*, !insn.addr !30
  %10 = load i32, i32* %9, align 4, !insn.addr !30
  %11 = icmp eq i32 %10, 0, !insn.addr !31
  br i1 %11, label %dec_label_pc_125e, label %dec_label_pc_124b, !insn.addr !32

dec_label_pc_124b:                                ; preds = %dec_label_pc_1241
  %12 = add i32 %1, 11735, !insn.addr !33
  %13 = inttoptr i32 %12 to i32*, !insn.addr !33
  %14 = load i32, i32* %13, align 4, !insn.addr !33
  %15 = inttoptr i32 %14 to i32*, !insn.addr !34
  call void @__cxa_finalize(i32* %15), !insn.addr !34
  br label %dec_label_pc_125e, !insn.addr !35

dec_label_pc_125e:                                ; preds = %dec_label_pc_124b, %dec_label_pc_1241
  %16 = call i32 @deregister_tm_clones(), !insn.addr !36
  store i8 1, i8* %4, align 1, !insn.addr !37
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !37
  br label %dec_label_pc_12a2, !insn.addr !37

dec_label_pc_12a2:                                ; preds = %dec_label_pc_125e, %dec_label_pc_1220
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !38

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_12b0:
  %0 = call i32 @register_tm_clones(), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !40
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_12bd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !41
}

define i32 @param_macro_constants(i32 %arg1) local_unnamed_addr {
dec_label_pc_12d0:
  %0 = sub i32 %arg1, ptrtoint ([10 x i8]* @global_var_400 to i32), !insn.addr !42
  %1 = xor i32 %arg1, ptrtoint ([10 x i8]* @global_var_400 to i32), !insn.addr !42
  %2 = xor i32 %0, %arg1, !insn.addr !42
  %3 = and i32 %2, %1, !insn.addr !42
  %4 = icmp slt i32 %3, 0, !insn.addr !42
  %5 = icmp eq i32 %0, 0, !insn.addr !42
  %6 = icmp slt i32 %0, 0, !insn.addr !42
  %7 = icmp eq i1 %6, %4, !insn.addr !43
  %8 = icmp eq i1 %5, false, !insn.addr !43
  %9 = icmp eq i1 %7, %8, !insn.addr !43
  %10 = select i1 %9, i32 64, i32 ptrtoint (i32* @global_var_200 to i32), !insn.addr !43
  ret i32 %10, !insn.addr !44

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 ptrtoint ([10 x i8]* @global_var_400 to i32), { 1, 0 }
}

define i32 @call_macro_constants() local_unnamed_addr {
dec_label_pc_12f0:
  ret i32 64, !insn.addr !45
}

define i32 @param_macro_functions(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1300:
  %0 = mul i32 %arg1, %arg1, !insn.addr !46
  %1 = sub i32 %arg1, %arg2, !insn.addr !47
  %2 = xor i32 %arg2, %arg1, !insn.addr !47
  %3 = xor i32 %1, %arg1, !insn.addr !47
  %4 = and i32 %3, %2, !insn.addr !47
  %5 = icmp slt i32 %4, 0, !insn.addr !47
  %6 = icmp slt i32 %1, 0, !insn.addr !47
  %7 = icmp eq i1 %6, %5, !insn.addr !48
  %8 = select i1 %7, i32 %arg1, i32 %arg2, !insn.addr !48
  %9 = add i32 %8, %0, !insn.addr !49
  ret i32 %9, !insn.addr !50

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 5, 3, 4 }
}

define i32 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1320:
  ret i32 30, !insn.addr !51
}

define i32 @param_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %0 = mul i32 %arg1, 2, !insn.addr !52
  %1 = add i32 %arg1, 2, !insn.addr !52
  %2 = add i32 %1, %0, !insn.addr !52
  ret i32 %2, !insn.addr !53

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1340:
  ret i32 32, !insn.addr !54
}

define i32 @param_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %0 = mul i32 %arg1, 4, !insn.addr !55
  %1 = add i32 %arg1, 57072, !insn.addr !55
  %2 = add i32 %1, %0, !insn.addr !55
  ret i32 %2, !insn.addr !56

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1360:
  ret i32 57122, !insn.addr !57
}

define i32 @param_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = add i32 %arg1, 16, !insn.addr !58
  ret i32 %0, !insn.addr !59
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1380:
  ret i32 116, !insn.addr !60
}

define i32 @param_stringize() local_unnamed_addr {
dec_label_pc_1390:
  ret i32 19, !insn.addr !61
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_13a0:
  ret i32 19, !insn.addr !62
}

define i32 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = mul i32 %arg1, 10, !insn.addr !63
  ret i32 %0, !insn.addr !64
}

define i32 @param_token_paste(i32 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = mul i32 %arg1, 10, !insn.addr !65
  %1 = add i32 %arg1, 5, !insn.addr !65
  %2 = add i32 %1, %0, !insn.addr !65
  ret i32 %2, !insn.addr !66

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_13d0:
  ret i32 60, !insn.addr !67
}

define i32 @param_variadic_macro(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !68
  %3 = add i32 %1, 3101, !insn.addr !69
  %4 = inttoptr i32 %3 to i8*, !insn.addr !70
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !71
  %6 = add i32 %arg1, 50, !insn.addr !72
  ret i32 %6, !insn.addr !73
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_1420:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !74
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2b9a to i32), i32 -8124), !insn.addr !75
  %4 = inttoptr i32 %3 to i8*, !insn.addr !76
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !77
  ret i32 60, !insn.addr !78
}

define i32 @param_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_1460:
  %0 = mul i32 %arg1, 2, !insn.addr !79
  %1 = add i32 %arg1, 1, !insn.addr !79
  %2 = add i32 %1, %0, !insn.addr !79
  ret i32 %2, !insn.addr !80

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_1470:
  ret i32 16, !insn.addr !81
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_1480:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !82
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_1490:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !83
}

define i32 @param_builtin_macros(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !84
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2b1a to i32), i32 -7680), !insn.addr !85
  %4 = inttoptr i32 %3 to i8*, !insn.addr !86
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !87
  %6 = add i32 %arg1, 282, !insn.addr !88
  ret i32 %6, !insn.addr !89
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_14f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !90
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2aca to i32), i32 -7680), !insn.addr !91
  %4 = inttoptr i32 %3 to i8*, !insn.addr !92
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !93
  ret i32 382, !insn.addr !94
}

define i32 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !95
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7632), !insn.addr !96
  %4 = inttoptr i32 %3 to i8*, !insn.addr !97
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !98
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -8067), !insn.addr !99
  %7 = inttoptr i32 %6 to i8*, !insn.addr !100
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !101
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -8040), !insn.addr !102
  %10 = inttoptr i32 %9 to i8*, !insn.addr !103
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %10), !insn.addr !104
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -8013), !insn.addr !105
  %13 = inttoptr i32 %12 to i8*, !insn.addr !106
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %13), !insn.addr !107
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7592), !insn.addr !108
  %16 = inttoptr i32 %15 to i8*, !insn.addr !109
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !110
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7986), !insn.addr !111
  %19 = inttoptr i32 %18 to i8*, !insn.addr !112
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %19), !insn.addr !113
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7560), !insn.addr !114
  %22 = inttoptr i32 %21 to i8*, !insn.addr !115
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !116
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7958), !insn.addr !117
  %25 = inttoptr i32 %24 to i8*, !insn.addr !118
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %25), !insn.addr !119
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -8124), !insn.addr !120
  %28 = inttoptr i32 %27 to i8*, !insn.addr !121
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !122
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7931), !insn.addr !123
  %31 = inttoptr i32 %30 to i8*, !insn.addr !124
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %31), !insn.addr !125
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7904), !insn.addr !126
  %34 = inttoptr i32 %33 to i8*, !insn.addr !127
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %34), !insn.addr !128
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7877), !insn.addr !129
  %37 = inttoptr i32 %36 to i8*, !insn.addr !130
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !131
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7680), !insn.addr !132
  %40 = inttoptr i32 %39 to i8*, !insn.addr !133
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %40), !insn.addr !134
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2a7a to i32), i32 -7516), !insn.addr !135
  %43 = inttoptr i32 %42 to i8*, !insn.addr !136
  %44 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %43), !insn.addr !137
  ret i32 %44, !insn.addr !138
}

define i32 @param_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1690:
  %0 = add i32 %arg1, 10, !insn.addr !139
  ret i32 %0, !insn.addr !140

; uselistorder directives
  uselistorder i32 10, { 2, 0, 1 }
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_16b0:
  ret i32 15, !insn.addr !141
}

define i32 @param_asm_clobber(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16d0:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !142
  %eax.01.reg2mem = alloca i32, !insn.addr !142
  %storemerge2.reg2mem = alloca i32, !insn.addr !142
  %0 = icmp sgt i32 %arg2, 0, !insn.addr !143
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !143
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !143
  store i32 0, i32* %eax.0.lcssa.reg2mem, !insn.addr !143
  br i1 %0, label %dec_label_pc_16e5, label %dec_label_pc_16eb, !insn.addr !143

dec_label_pc_16e5:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_16e5
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = mul i32 %storemerge2.reload, 4, !insn.addr !144
  %2 = add i32 %1, %arg1, !insn.addr !144
  %3 = inttoptr i32 %2 to i32*, !insn.addr !144
  %4 = load i32, i32* %3, align 4, !insn.addr !144
  %5 = add i32 %4, %eax.01.reload, !insn.addr !144
  %6 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !145
  %exitcond = icmp eq i32 %6, %arg2
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !143
  store i32 %5, i32* %eax.01.reg2mem, !insn.addr !143
  store i32 %5, i32* %eax.0.lcssa.reg2mem, !insn.addr !143
  br i1 %exitcond, label %dec_label_pc_16eb, label %dec_label_pc_16e5, !insn.addr !143

dec_label_pc_16eb:                                ; preds = %dec_label_pc_16e5, %dec_label_pc_16d0
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !146

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_16e5, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_1700:
  %eax.01.reg2mem = alloca i32, !insn.addr !147
  %storemerge2.reg2mem = alloca i32, !insn.addr !147
  %stack_var_-36 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !148
  %1 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !149
  store i32 0, i32* %storemerge2.reg2mem
  store i32 0, i32* %eax.01.reg2mem
  br label %dec_label_pc_1725

dec_label_pc_1725:                                ; preds = %dec_label_pc_1725, %dec_label_pc_1700
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !150
  %3 = add i32 %2, %1, !insn.addr !150
  %4 = inttoptr i32 %3 to i32*, !insn.addr !150
  %5 = load i32, i32* %4, align 4, !insn.addr !150
  %6 = add i32 %5, %eax.01.reload, !insn.addr !150
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !151
  %exitcond = icmp eq i32 %7, 5
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !152
  store i32 %6, i32* %eax.01.reg2mem, !insn.addr !152
  br i1 %exitcond, label %dec_label_pc_172b, label %dec_label_pc_1725, !insn.addr !152

dec_label_pc_172b:                                ; preds = %dec_label_pc_1725
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !153
  %9 = icmp eq i32 %0, %8, !insn.addr !153
  %10 = icmp eq i1 %9, false, !insn.addr !154
  br i1 %10, label %dec_label_pc_1741, label %dec_label_pc_173a, !insn.addr !154

dec_label_pc_173a:                                ; preds = %dec_label_pc_172b
  ret i32 %6, !insn.addr !155

dec_label_pc_1741:                                ; preds = %dec_label_pc_172b
  %11 = call i32 @__stack_chk_fail_local(), !insn.addr !156
  ret i32 %11, !insn.addr !157

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0, 2 }
}

define i32 @param_asm_multi_insn(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1750:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !158
  %eax.01.reg2mem = alloca i32, !insn.addr !158
  %ecx.02.reg2mem = alloca i32, !insn.addr !158
  %edx.03.reg2mem = alloca i32, !insn.addr !158
  %storemerge4.reg2mem = alloca i32, !insn.addr !158
  %0 = icmp eq i32 %arg3, 0, !insn.addr !159
  store i32 %arg3, i32* %storemerge4.reg2mem, !insn.addr !160
  store i32 %arg1, i32* %edx.03.reg2mem, !insn.addr !160
  store i32 %arg2, i32* %ecx.02.reg2mem, !insn.addr !160
  br i1 %0, label %dec_label_pc_1770, label %dec_label_pc_1767, !insn.addr !160

dec_label_pc_1767:                                ; preds = %dec_label_pc_1750, %dec_label_pc_1767
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %edx.03.reload = load i32, i32* %edx.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !161
  %2 = load i8, i8* %1, align 1, !insn.addr !161
  %3 = zext i8 %2 to i32, !insn.addr !161
  %4 = and i32 %eax.01.reload, -256, !insn.addr !161
  %5 = or i32 %4, %3, !insn.addr !161
  %6 = inttoptr i32 %edx.03.reload to i8*, !insn.addr !162
  store i8 %2, i8* %6, align 1, !insn.addr !162
  %7 = add i32 %edx.03.reload, 1, !insn.addr !163
  %8 = add i32 %ecx.02.reload, 1, !insn.addr !164
  %9 = add i32 %storemerge4.reload, -1, !insn.addr !165
  %10 = icmp eq i32 %9, 0, !insn.addr !159
  store i32 %9, i32* %storemerge4.reg2mem, !insn.addr !160
  store i32 %7, i32* %edx.03.reg2mem, !insn.addr !160
  store i32 %8, i32* %ecx.02.reg2mem, !insn.addr !160
  store i32 %5, i32* %eax.01.reg2mem, !insn.addr !160
  store i32 %5, i32* %eax.0.lcssa.reg2mem, !insn.addr !160
  br i1 %10, label %dec_label_pc_1770, label %dec_label_pc_1767, !insn.addr !160

dec_label_pc_1770:                                ; preds = %dec_label_pc_1767, %dec_label_pc_1750
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !166

; uselistorder directives
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_1767, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1780:
  %ecx.04.reg2mem = alloca i32, !insn.addr !167
  %edx.05.reg2mem = alloca i32, !insn.addr !167
  %ebx.06.reg2mem = alloca i32, !insn.addr !167
  %stack_var_-48 = alloca i8, align 1
  %stack_var_-58 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !168
  store i32 1819043144, i32* %stack_var_-58, align 4, !insn.addr !169
  %1 = ptrtoint i8* %stack_var_-48 to i32, !insn.addr !170
  %2 = ptrtoint i32* %stack_var_-58 to i32, !insn.addr !171
  store i8 0, i8* %stack_var_-48, align 1, !insn.addr !172
  store i32 9, i32* %ebx.06.reg2mem
  store i32 %1, i32* %edx.05.reg2mem
  store i32 %2, i32* %ecx.04.reg2mem
  br label %dec_label_pc_1801

dec_label_pc_1801:                                ; preds = %dec_label_pc_1780, %dec_label_pc_1801
  %ecx.04.reload = load i32, i32* %ecx.04.reg2mem
  %edx.05.reload = load i32, i32* %edx.05.reg2mem
  %ebx.06.reload = load i32, i32* %ebx.06.reg2mem
  %3 = inttoptr i32 %ecx.04.reload to i8*, !insn.addr !173
  %4 = load i8, i8* %3, align 1, !insn.addr !173
  %5 = inttoptr i32 %edx.05.reload to i8*, !insn.addr !174
  store i8 %4, i8* %5, align 1, !insn.addr !174
  %6 = add i32 %edx.05.reload, 1, !insn.addr !175
  %7 = add i32 %ecx.04.reload, 1, !insn.addr !176
  %8 = add nsw i32 %ebx.06.reload, -1, !insn.addr !177
  %9 = icmp eq i32 %8, 0, !insn.addr !178
  store i32 %8, i32* %ebx.06.reg2mem, !insn.addr !179
  store i32 %6, i32* %edx.05.reg2mem, !insn.addr !179
  store i32 %7, i32* %ecx.04.reg2mem, !insn.addr !179
  br i1 %9, label %dec_label_pc_180a, label %dec_label_pc_1801, !insn.addr !179

dec_label_pc_180a:                                ; preds = %dec_label_pc_1801
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !180
  %11 = icmp eq i32 %0, %10, !insn.addr !180
  %12 = icmp eq i1 %11, false, !insn.addr !181
  br i1 %12, label %dec_label_pc_183f, label %dec_label_pc_1830, !insn.addr !181

dec_label_pc_1830:                                ; preds = %dec_label_pc_180a
  ret i32 -1, !insn.addr !182

dec_label_pc_183f:                                ; preds = %dec_label_pc_180a
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !183
  ret i32 %13, !insn.addr !184

; uselistorder directives
  uselistorder i8* %stack_var_-48, { 1, 0 }
  uselistorder i32* %ebx.06.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.05.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.04.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1801, { 1, 0 }
}

define i32 @param_asm_simd(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1850:
  %0 = inttoptr i32 %arg1 to i128*, !insn.addr !185
  %1 = load i128, i128* %0, align 4, !insn.addr !185
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !185
  %3 = inttoptr i32 %arg2 to i128*, !insn.addr !186
  %4 = load i128, i128* %3, align 4, !insn.addr !186
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !186
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !187
  %7 = call i32 @__asm_movaps.1(i128 %6), !insn.addr !188
  %8 = sext i32 %7 to i128, !insn.addr !188
  %9 = inttoptr i32 %arg3 to i128*, !insn.addr !188
  store i128 %8, i128* %9, align 4, !insn.addr !188
  ret i32 0, !insn.addr !189
}

define i32 @param_simd_intrinsics(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1870:
  %0 = inttoptr i32 %arg2 to i128*, !insn.addr !190
  %1 = load i128, i128* %0, align 4, !insn.addr !190
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !190
  %3 = inttoptr i32 %arg1 to i128*, !insn.addr !191
  %4 = load i128, i128* %3, align 4, !insn.addr !191
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !191
  %6 = call i32 @__asm_movaps.1(i128 %5), !insn.addr !192
  %7 = sext i32 %6 to i128, !insn.addr !192
  %8 = inttoptr i32 %arg3 to i128*, !insn.addr !192
  store i128 %7, i128* %8, align 4, !insn.addr !192
  ret i32 0, !insn.addr !193
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1890:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !194
  %5 = call i128 @__asm_movaps(i128 1), !insn.addr !195
  %6 = call i128 @__asm_movaps(i128 5), !insn.addr !196
  %7 = call i128 @__asm_paddd(i128 %5, i128 %6), !insn.addr !197
  %8 = call i32 @__asm_movaps.1(i128 %7), !insn.addr !198
  %9 = call i32 @__readgsdword(i32 20), !insn.addr !199
  %10 = icmp eq i32 %4, %9, !insn.addr !199
  %11 = icmp eq i1 %10, false, !insn.addr !200
  br i1 %11, label %dec_label_pc_191d, label %dec_label_pc_1919, !insn.addr !200

dec_label_pc_1919:                                ; preds = %dec_label_pc_1890
  %12 = add i32 %2, %1, !insn.addr !201
  %13 = add i32 %12, %3, !insn.addr !202
  %14 = add i32 %13, %8, !insn.addr !203
  ret i32 %14, !insn.addr !204

dec_label_pc_191d:                                ; preds = %dec_label_pc_1890
  %15 = call i32 @__stack_chk_fail_local(), !insn.addr !205
  ret i32 %15, !insn.addr !206

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 (i128)* @__asm_movaps.1, { 2, 0, 1 }
  uselistorder i128 (i128, i128)* @__asm_paddd, { 2, 0, 1 }
  uselistorder i128 (i128)* @__asm_movaps, { 2, 3, 0, 1 }
}

define i32 @param_asm_atomic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1930:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !207
  %1 = load i32, i32* %0, align 4, !insn.addr !207
  %2 = add i32 %1, %arg2, !insn.addr !207
  store i32 %2, i32* %0, align 4, !insn.addr !207
  ret i32 %2, !insn.addr !208
}

define i32 @param_atomic_c11(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1950:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !209
  %1 = load i32, i32* %0, align 4, !insn.addr !209
  %2 = add i32 %1, %arg2, !insn.addr !209
  store i32 %2, i32* %0, align 4, !insn.addr !209
  ret i32 %2, !insn.addr !210
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1970:
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !211
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !212
  %2 = icmp eq i32 %0, %1, !insn.addr !212
  %3 = icmp eq i1 %2, false, !insn.addr !213
  br i1 %3, label %dec_label_pc_19b1, label %dec_label_pc_19ad, !insn.addr !213

dec_label_pc_19ad:                                ; preds = %dec_label_pc_1970
  ret i32 30, !insn.addr !214

dec_label_pc_19b1:                                ; preds = %dec_label_pc_1970
  %4 = call i32 @__stack_chk_fail_local(), !insn.addr !215
  ret i32 %4, !insn.addr !216
}

define i32 @param_dynamic_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_19c0:
  %0 = alloca i32
  %edi.0.reg2mem = alloca i32, !insn.addr !217
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !218
  %3 = call i32 @sysconf(i32 30), !insn.addr !219
  %4 = call i32* @mmap(i32* null, i32 %3, i32 7, i32 34, i32 -1, i32 0), !insn.addr !220
  %5 = icmp eq i32* %4, inttoptr (i32 -1 to i32*), !insn.addr !221
  store i32 -1, i32* %edi.0.reg2mem, !insn.addr !222
  br i1 %5, label %dec_label_pc_1a0c, label %dec_label_pc_19f8, !insn.addr !222

dec_label_pc_19f8:                                ; preds = %dec_label_pc_19c0
  %6 = add i32 %arg1, 5, !insn.addr !223
  %7 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !224
  store i32 %6, i32* %edi.0.reg2mem, !insn.addr !225
  br label %dec_label_pc_1a0c, !insn.addr !225

dec_label_pc_1a0c:                                ; preds = %dec_label_pc_19c0, %dec_label_pc_19f8
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  ret i32 %edi.0.reload, !insn.addr !226

; uselistorder directives
  uselistorder i32* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1a0c, { 1, 0 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_1a20:
  %0 = alloca i32
  %ebp.0.reg2mem = alloca i32, !insn.addr !227
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !228
  %3 = call i32 @sysconf(i32 30), !insn.addr !229
  %4 = call i32* @mmap(i32* null, i32 %3, i32 3, i32 34, i32 -1, i32 0), !insn.addr !230
  %5 = icmp eq i32* %4, inttoptr (i32 -1 to i32*), !insn.addr !231
  store i32 -1, i32* %ebp.0.reg2mem, !insn.addr !232
  br i1 %5, label %dec_label_pc_1aa0, label %dec_label_pc_1a5d, !insn.addr !232

dec_label_pc_1a5d:                                ; preds = %dec_label_pc_1a20
  store i32 42, i32* %4, align 4, !insn.addr !233
  %6 = call i32 @mprotect(i32* %4, i32 %3, i32 1), !insn.addr !234
  %7 = icmp eq i32 %6, 0, !insn.addr !235
  %8 = icmp eq i1 %7, false, !insn.addr !236
  br i1 %8, label %dec_label_pc_1ab0, label %dec_label_pc_1a78, !insn.addr !236

dec_label_pc_1a78:                                ; preds = %dec_label_pc_1a5d
  %9 = load i32, i32* %4, align 4, !insn.addr !237
  %10 = call i32 @mprotect(i32* %4, i32 %3, i32 3), !insn.addr !238
  %11 = icmp eq i32 %10, 0, !insn.addr !239
  %12 = icmp eq i1 %11, false, !insn.addr !240
  br i1 %12, label %dec_label_pc_1ac8, label %dec_label_pc_1a8d, !insn.addr !240

dec_label_pc_1a8d:                                ; preds = %dec_label_pc_1a78
  store i32 100, i32* %4, align 4, !insn.addr !241
  %13 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !242
  store i32 %9, i32* %ebp.0.reg2mem, !insn.addr !243
  br label %dec_label_pc_1aa0, !insn.addr !243

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1a20, %dec_label_pc_1ac8, %dec_label_pc_1ab0, %dec_label_pc_1a8d
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  ret i32 %ebp.0.reload, !insn.addr !244

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a5d
  %14 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !245
  store i32 -2, i32* %ebp.0.reg2mem, !insn.addr !246
  br label %dec_label_pc_1aa0, !insn.addr !246

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1a78
  %15 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !247
  store i32 -3, i32* %ebp.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_1aa0, !insn.addr !248

; uselistorder directives
  uselistorder i32* %4, { 1, 0, 2, 3, 4, 5, 6, 7, 8 }
  uselistorder i32 %3, { 1, 3, 0, 2, 4, 5 }
  uselistorder i32* %ebp.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder i32 (i32*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1aa0, { 1, 2, 3, 0 }
}

define i32 @param_clobber_importance(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1af0:
  %0 = add i32 %arg2, %arg1, !insn.addr !249
  %1 = mul i32 %0, 2, !insn.addr !250
  ret i32 %1, !insn.addr !251

; uselistorder directives
  uselistorder i32 2, { 0, 1, 3, 2 }
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i32
  %edi.0.reg2mem = alloca i1, !insn.addr !252
  %esi.0.reg2mem = alloca i32, !insn.addr !252
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !253
  %3 = call i32 @sysconf(i32 30), !insn.addr !254
  %4 = call i32* @mmap(i32* null, i32 %3, i32 7, i32 34, i32 -1, i32 0), !insn.addr !255
  %5 = icmp eq i32* %4, inttoptr (i32 -1 to i32*), !insn.addr !256
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !257
  store i1 true, i1* %edi.0.reg2mem, !insn.addr !257
  br i1 %5, label %dec_label_pc_1b60, label %dec_label_pc_1b49, !insn.addr !257

dec_label_pc_1b49:                                ; preds = %dec_label_pc_1b10
  %6 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !258
  store i32 15, i32* %esi.0.reg2mem, !insn.addr !259
  store i1 false, i1* %edi.0.reg2mem, !insn.addr !259
  br label %dec_label_pc_1b60, !insn.addr !259

dec_label_pc_1b60:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1b49
  %edi.0.reload = load i1, i1* %edi.0.reg2mem
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %7 = call i32 @param_memory_protection(), !insn.addr !260
  %8 = icmp eq i32 %7, 42, !insn.addr !261
  %9 = icmp eq i1 %8, false, !insn.addr !262
  %or.cond = or i1 %edi.0.reload, %9
  %esi.1 = select i1 %or.cond, i32 %esi.0.reload, i32 77
  ret i32 %esi.1, !insn.addr !263

; uselistorder directives
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 1 }
  uselistorder i1* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32*, i32)* @munmap, { 0, 3, 2, 1, 4, 5 }
  uselistorder i32 30, { 2, 3, 4, 0, 1 }
  uselistorder label %dec_label_pc_1b60, { 1, 0 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.cx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !264
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23fb to i32), i32 68), !insn.addr !265
  %4 = inttoptr i32 %3 to i32*, !insn.addr !265
  %5 = load i32, i32* %4, align 4, !insn.addr !265
  %6 = add i32 %5, 50, !insn.addr !265
  ret i32 %6, !insn.addr !266
}

define i32 @test_asm_features() local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !267
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !268
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7472), !insn.addr !269
  %5 = inttoptr i32 %4 to i8*, !insn.addr !270
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %5), !insn.addr !271
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7849), !insn.addr !272
  %8 = inttoptr i32 %7 to i8*, !insn.addr !273
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !274
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7821), !insn.addr !275
  %11 = inttoptr i32 %10 to i8*, !insn.addr !276
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %11), !insn.addr !277
  %13 = call i32 @call_asm_multi_insn(), !insn.addr !278
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7793), !insn.addr !279
  %15 = inttoptr i32 %14 to i8*, !insn.addr !280
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %15), !insn.addr !281
  %17 = call i32 @call_asm_simd(), !insn.addr !282
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7765), !insn.addr !283
  %19 = inttoptr i32 %18 to i8*, !insn.addr !284
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %19), !insn.addr !285
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7737), !insn.addr !286
  %22 = inttoptr i32 %21 to i8*, !insn.addr !287
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !288
  %24 = call i32 @call_asm_privileged(), !insn.addr !289
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c4 to i32), i32 -7709), !insn.addr !290
  %26 = inttoptr i32 %25 to i8*, !insn.addr !291
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %26), !insn.addr !292
  %28 = call i32 @__readgsdword(i32 20), !insn.addr !293
  %29 = sub i32 %3, %28, !insn.addr !293
  %30 = icmp eq i32 %29, 0, !insn.addr !293
  %31 = icmp eq i1 %30, false, !insn.addr !294
  br i1 %31, label %dec_label_pc_1ce7, label %dec_label_pc_1ce1, !insn.addr !294

dec_label_pc_1ce1:                                ; preds = %dec_label_pc_1bf0
  ret i32 %29, !insn.addr !295

dec_label_pc_1ce7:                                ; preds = %dec_label_pc_1bf0
  %32 = call i32 @__stack_chk_fail_local(), !insn.addr !296
  ret i32 %32, !insn.addr !296

; uselistorder directives
  uselistorder i32 %1, { 7, 6, 5, 4, 3, 0, 1, 2 }
  uselistorder i32 ()* @__stack_chk_fail_local, { 0, 4, 2, 1, 3 }
  uselistorder i32 0, { 25, 11, 22, 23, 12, 13, 5, 6, 24, 15, 10, 0, 1, 2, 3, 4, 9, 16, 17, 18, 19, 20, 21, 7, 8, 14 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 24, 23, 22, 21, 25 }
}

define i32 @__x86.get_pc_thunk.cx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !297
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !298
  call void @__stack_chk_fail(), !insn.addr !299
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !300
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1d10:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !301
  %ebx.0.reg2mem = alloca i32, !insn.addr !301
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !302
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_22ab to i32), i32 -232), !insn.addr !303
  %4 = inttoptr i32 %3 to i32*, !insn.addr !303
  %5 = load i32, i32* %4, align 4, !insn.addr !303
  %6 = icmp eq i32 %5, -1, !insn.addr !304
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !305
  store i32 -1, i32* %merge.reg2mem, !insn.addr !305
  br i1 %6, label %dec_label_pc_1d4d, label %dec_label_pc_1d40, !insn.addr !305

dec_label_pc_1d40:                                ; preds = %dec_label_pc_1d10, %dec_label_pc_1d40
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !306
  %8 = inttoptr i32 %7 to i32*, !insn.addr !306
  %9 = load i32, i32* %8, align 4, !insn.addr !306
  %10 = icmp eq i32 %9, -1, !insn.addr !307
  %11 = icmp eq i1 %10, false, !insn.addr !308
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !308
  store i32 %9, i32* %merge.reg2mem, !insn.addr !308
  br i1 %11, label %dec_label_pc_1d40, label %dec_label_pc_1d4d, !insn.addr !308

dec_label_pc_1d4d:                                ; preds = %dec_label_pc_1d40, %dec_label_pc_1d10
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !309

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 11, 10, 7, 0, 5, 6, 1, 8, 9, 2, 3, 4 }
  uselistorder i32 -1, { 5, 0, 6, 1, 7, 2, 8, 3, 9, 10, 4, 11, 12 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d40, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1d5c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !310
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !311
  ret i32 %3, !insn.addr !312

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 11, 5, 2, 3, 4, 10, 1, 9, 8, 7, 6, 0 }
  uselistorder i32 1, { 22, 24, 23, 21, 20, 19, 43, 44, 45, 46, 47, 48, 49, 18, 17, 26, 25, 16, 50, 27, 15, 28, 14, 13, 78, 79, 70, 69, 31, 30, 29, 73, 74, 36, 35, 34, 33, 32, 75, 71, 38, 37, 76, 41, 40, 39, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 12, 65, 11, 66, 10, 77, 67, 9, 68, 8, 7, 6, 42, 5, 4, 3, 2, 72, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @mprotect(i32*, i32, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i32* @mmap(i32*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32 @munmap(i32*, i32) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i32 @__asm_movaps.1(i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4276}
!5 = !{i64 4292}
!6 = !{i64 4308}
!7 = !{i64 4324}
!8 = !{i64 4340}
!9 = !{i64 4356}
!10 = !{i64 4372}
!11 = !{i64 4388}
!12 = !{i64 4410}
!13 = !{i64 4415}
!14 = !{i64 4423}
!15 = !{i64 4447}
!16 = !{i64 4464}
!17 = !{i64 4470}
!18 = !{i64 4475}
!19 = !{i64 4479}
!20 = !{i64 4483}
!21 = !{i64 4496}
!22 = !{i64 4513}
!23 = !{i64 4552}
!24 = !{i64 4560}
!25 = !{i64 4630}
!26 = !{i64 4640}
!27 = !{i64 4648}
!28 = !{i64 4664}
!29 = !{i64 4671}
!30 = !{i64 4673}
!31 = !{i64 4679}
!32 = !{i64 4681}
!33 = !{i64 4686}
!34 = !{i64 4694}
!35 = !{i64 4699}
!36 = !{i64 4758}
!37 = !{i64 4763}
!38 = !{i64 4777}
!39 = !{i64 4788}
!40 = !{i64 4796}
!41 = !{i64 4800}
!42 = !{i64 4820}
!43 = !{i64 4838}
!44 = !{i64 4841}
!45 = !{i64 4857}
!46 = !{i64 4878}
!47 = !{i64 4881}
!48 = !{i64 4883}
!49 = !{i64 4886}
!50 = !{i64 4888}
!51 = !{i64 4905}
!52 = !{i64 4920}
!53 = !{i64 4924}
!54 = !{i64 4937}
!55 = !{i64 4952}
!56 = !{i64 4959}
!57 = !{i64 4969}
!58 = !{i64 4984}
!59 = !{i64 4987}
!60 = !{i64 5001}
!61 = !{i64 5017}
!62 = !{i64 5033}
!63 = !{i64 5051}
!64 = !{i64 5053}
!65 = !{i64 5067}
!66 = !{i64 5071}
!67 = !{i64 5081}
!68 = !{i64 5094}
!69 = !{i64 5121}
!70 = !{i64 5127}
!71 = !{i64 5130}
!72 = !{i64 5138}
!73 = !{i64 5143}
!74 = !{i64 5157}
!75 = !{i64 5177}
!76 = !{i64 5183}
!77 = !{i64 5186}
!78 = !{i64 5200}
!79 = !{i64 5224}
!80 = !{i64 5228}
!81 = !{i64 5241}
!82 = !{i64 5257}
!83 = !{i64 5273}
!84 = !{i64 5285}
!85 = !{i64 5332}
!86 = !{i64 5338}
!87 = !{i64 5341}
!88 = !{i64 5354}
!89 = !{i64 5359}
!90 = !{i64 5365}
!91 = !{i64 5412}
!92 = !{i64 5418}
!93 = !{i64 5421}
!94 = !{i64 5435}
!95 = !{i64 5445}
!96 = !{i64 5459}
!97 = !{i64 5465}
!98 = !{i64 5468}
!99 = !{i64 5476}
!100 = !{i64 5484}
!101 = !{i64 5487}
!102 = !{i64 5495}
!103 = !{i64 5503}
!104 = !{i64 5506}
!105 = !{i64 5514}
!106 = !{i64 5522}
!107 = !{i64 5525}
!108 = !{i64 5533}
!109 = !{i64 5544}
!110 = !{i64 5547}
!111 = !{i64 5555}
!112 = !{i64 5563}
!113 = !{i64 5566}
!114 = !{i64 5574}
!115 = !{i64 5582}
!116 = !{i64 5585}
!117 = !{i64 5593}
!118 = !{i64 5601}
!119 = !{i64 5604}
!120 = !{i64 5609}
!121 = !{i64 5626}
!122 = !{i64 5629}
!123 = !{i64 5637}
!124 = !{i64 5645}
!125 = !{i64 5648}
!126 = !{i64 5656}
!127 = !{i64 5664}
!128 = !{i64 5667}
!129 = !{i64 5675}
!130 = !{i64 5686}
!131 = !{i64 5689}
!132 = !{i64 5730}
!133 = !{i64 5736}
!134 = !{i64 5739}
!135 = !{i64 5747}
!136 = !{i64 5758}
!137 = !{i64 5761}
!138 = !{i64 5770}
!139 = !{i64 5786}
!140 = !{i64 5793}
!141 = !{i64 5826}
!142 = !{i64 5840}
!143 = !{i64 5859}
!144 = !{i64 5861}
!145 = !{i64 5864}
!146 = !{i64 5872}
!147 = !{i64 5888}
!148 = !{i64 5901}
!149 = !{i64 5913}
!150 = !{i64 5925}
!151 = !{i64 5928}
!152 = !{i64 5923}
!153 = !{i64 5937}
!154 = !{i64 5944}
!155 = !{i64 5952}
!156 = !{i64 5953}
!157 = !{i64 5965}
!158 = !{i64 5968}
!159 = !{i64 5986}
!160 = !{i64 5989}
!161 = !{i64 5991}
!162 = !{i64 5993}
!163 = !{i64 5995}
!164 = !{i64 5996}
!165 = !{i64 5997}
!166 = !{i64 6001}
!167 = !{i64 6016}
!168 = !{i64 6029}
!169 = !{i64 6046}
!170 = !{i64 6054}
!171 = !{i64 6066}
!172 = !{i64 6075}
!173 = !{i64 6145}
!174 = !{i64 6147}
!175 = !{i64 6149}
!176 = !{i64 6150}
!177 = !{i64 6151}
!178 = !{i64 6140}
!179 = !{i64 6143}
!180 = !{i64 6183}
!181 = !{i64 6190}
!182 = !{i64 6196}
!183 = !{i64 6207}
!184 = !{i64 6223}
!185 = !{i64 6240}
!186 = !{i64 6243}
!187 = !{i64 6246}
!188 = !{i64 6250}
!189 = !{i64 6255}
!190 = !{i64 6264}
!191 = !{i64 6272}
!192 = !{i64 6280}
!193 = !{i64 6285}
!194 = !{i64 6295}
!195 = !{i64 6383}
!196 = !{i64 6386}
!197 = !{i64 6389}
!198 = !{i64 6393}
!199 = !{i64 6416}
!200 = !{i64 6423}
!201 = !{i64 6400}
!202 = !{i64 6404}
!203 = !{i64 6408}
!204 = !{i64 6428}
!205 = !{i64 6429}
!206 = !{i64 6441}
!207 = !{i64 6462}
!208 = !{i64 6468}
!209 = !{i64 6494}
!210 = !{i64 6500}
!211 = !{i64 6519}
!212 = !{i64 6564}
!213 = !{i64 6571}
!214 = !{i64 6576}
!215 = !{i64 6577}
!216 = !{i64 6589}
!217 = !{i64 6592}
!218 = !{i64 6599}
!219 = !{i64 6615}
!220 = !{i64 6635}
!221 = !{i64 6643}
!222 = !{i64 6646}
!223 = !{i64 6657}
!224 = !{i64 6660}
!225 = !{i64 6665}
!226 = !{i64 6673}
!227 = !{i64 6688}
!228 = !{i64 6696}
!229 = !{i64 6712}
!230 = !{i64 6732}
!231 = !{i64 6740}
!232 = !{i64 6743}
!233 = !{i64 6752}
!234 = !{i64 6764}
!235 = !{i64 6772}
!236 = !{i64 6774}
!237 = !{i64 6779}
!238 = !{i64 6785}
!239 = !{i64 6793}
!240 = !{i64 6795}
!241 = !{i64 6800}
!242 = !{i64 6808}
!243 = !{i64 6813}
!244 = !{i64 6825}
!245 = !{i64 6842}
!246 = !{i64 6850}
!247 = !{i64 6866}
!248 = !{i64 6874}
!249 = !{i64 6912}
!250 = !{i64 6922}
!251 = !{i64 6927}
!252 = !{i64 6928}
!253 = !{i64 6936}
!254 = !{i64 6952}
!255 = !{i64 6972}
!256 = !{i64 6980}
!257 = !{i64 6983}
!258 = !{i64 7000}
!259 = !{i64 7005}
!260 = !{i64 7008}
!261 = !{i64 7041}
!262 = !{i64 7044}
!263 = !{i64 7083}
!264 = !{i64 7108}
!265 = !{i64 7126}
!266 = !{i64 7136}
!267 = !{i64 7163}
!268 = !{i64 7177}
!269 = !{i64 7189}
!270 = !{i64 7195}
!271 = !{i64 7198}
!272 = !{i64 7213}
!273 = !{i64 7220}
!274 = !{i64 7223}
!275 = !{i64 7251}
!276 = !{i64 7258}
!277 = !{i64 7261}
!278 = !{i64 7266}
!279 = !{i64 7275}
!280 = !{i64 7281}
!281 = !{i64 7284}
!282 = !{i64 7289}
!283 = !{i64 7298}
!284 = !{i64 7304}
!285 = !{i64 7307}
!286 = !{i64 7340}
!287 = !{i64 7346}
!288 = !{i64 7349}
!289 = !{i64 7354}
!290 = !{i64 7363}
!291 = !{i64 7369}
!292 = !{i64 7372}
!293 = !{i64 7384}
!294 = !{i64 7391}
!295 = !{i64 7398}
!296 = !{i64 7399}
!297 = !{i64 7407}
!298 = !{i64 7413}
!299 = !{i64 7427}
!300 = !{i64 7438}
!301 = !{i64 7440}
!302 = !{i64 7444}
!303 = !{i64 7455}
!304 = !{i64 7461}
!305 = !{i64 7464}
!306 = !{i64 7490}
!307 = !{i64 7496}
!308 = !{i64 7499}
!309 = !{i64 7505}
!310 = !{i64 7524}
!311 = !{i64 7535}
!312 = !{i64 7544}
