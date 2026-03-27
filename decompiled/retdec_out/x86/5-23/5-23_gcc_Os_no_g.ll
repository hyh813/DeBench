source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_200 = global i32 4
@global_var_400 = constant [10 x i8] c"loneTable\00"
@global_var_1f4 = global i32 5
@global_var_2992 = constant i32 2293759
@global_var_28cf = constant i32 7172
@global_var_27e2 = local_unnamed_addr constant i32 2359295
@global_var_2788 = local_unnamed_addr constant i32 222429829
@global_var_266c = constant i32 222429829
@global_var_2647 = constant i32 239403008
@global_var_258a = local_unnamed_addr constant i32 1157958978
@global_var_256b = constant i32 2815
@global_var_251b = local_unnamed_addr constant i32 239403008
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
dec_label_pc_12c1:
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
dec_label_pc_12de:
  ret i32 64, !insn.addr !45
}

define i32 @param_macro_functions(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12e8:
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
dec_label_pc_1303:
  ret i32 30, !insn.addr !51
}

define i32 @param_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_130d:
  %0 = mul i32 %arg1, 3, !insn.addr !52
  %1 = add i32 %0, 2, !insn.addr !53
  ret i32 %1, !insn.addr !54
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_131d:
  ret i32 32, !insn.addr !55
}

define i32 @param_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1327:
  %0 = mul i32 %arg1, 5, !insn.addr !56
  %1 = add i32 %0, 57072, !insn.addr !57
  ret i32 %1, !insn.addr !58
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1339:
  ret i32 57122, !insn.addr !59
}

define i32 @param_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_1343:
  %0 = add i32 %arg1, 16, !insn.addr !60
  ret i32 %0, !insn.addr !61
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1352:
  ret i32 116, !insn.addr !62
}

define i32 @param_stringize() local_unnamed_addr {
dec_label_pc_135c:
  ret i32 19, !insn.addr !63
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_1366:
  ret i32 19, !insn.addr !64
}

define i32 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = mul i32 %arg1, 10, !insn.addr !65
  ret i32 %0, !insn.addr !66
}

define i32 @param_token_paste(i32 %arg1) local_unnamed_addr {
dec_label_pc_137d:
  %0 = mul i32 %arg1, 11, !insn.addr !67
  %1 = add i32 %0, 5, !insn.addr !68
  ret i32 %1, !insn.addr !69
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_138d:
  ret i32 60, !insn.addr !70
}

define i32 @param_variadic_macro(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1397:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !71
  %3 = add i32 %1, 3168, !insn.addr !72
  %4 = inttoptr i32 %3 to i8*, !insn.addr !73
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !74
  %6 = add i32 %arg1, 50, !insn.addr !75
  ret i32 %6, !insn.addr !76
}

define i32 @call_variadic_macro() local_unnamed_addr {
dec_label_pc_13d0:
  %0 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30), !insn.addr !77
  ret i32 %0, !insn.addr !78
}

define i32 @param_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_13e7:
  %0 = mul i32 %arg1, 2, !insn.addr !79
  %1 = add i32 %arg1, 1, !insn.addr !80
  %2 = add i32 %1, %0, !insn.addr !80
  ret i32 %2, !insn.addr !81

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_13fa:
  ret i32 16, !insn.addr !82
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_1404:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !83
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_140e:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !84
}

define i32 @param_builtin_macros(i32 %arg1) local_unnamed_addr {
dec_label_pc_1418:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !85
  %3 = add i32 %1, 3100, !insn.addr !86
  %4 = inttoptr i32 %3 to i8*, !insn.addr !87
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !88
  %6 = add i32 %arg1, 282, !insn.addr !89
  ret i32 %6, !insn.addr !90
}

define i32 @call_builtin_macros() local_unnamed_addr {
dec_label_pc_146a:
  %0 = call i32 @param_builtin_macros(i32 100), !insn.addr !91
  ret i32 %0, !insn.addr !92
}

define i32 @test_preprocessing_features() local_unnamed_addr {
dec_label_pc_147d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !93
  %3 = add i32 %1, 3044, !insn.addr !94
  %4 = inttoptr i32 %3 to i8*, !insn.addr !95
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !96
  %6 = add i32 %1, 3084, !insn.addr !97
  %7 = inttoptr i32 %6 to i8*, !insn.addr !98
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %7), !insn.addr !99
  %9 = add i32 %1, 3111, !insn.addr !100
  %10 = inttoptr i32 %9 to i8*, !insn.addr !101
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %10), !insn.addr !102
  %12 = add i32 %1, 3138, !insn.addr !103
  %13 = inttoptr i32 %12 to i8*, !insn.addr !104
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %13), !insn.addr !105
  %15 = add i32 %1, 3165, !insn.addr !106
  %16 = inttoptr i32 %15 to i8*, !insn.addr !107
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !108
  %18 = add i32 %1, 3196, !insn.addr !109
  %19 = inttoptr i32 %18 to i8*, !insn.addr !110
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %19), !insn.addr !111
  %21 = add i32 %1, 3224, !insn.addr !112
  %22 = inttoptr i32 %21 to i8*, !insn.addr !113
  %23 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %22), !insn.addr !114
  %24 = add i32 %1, 3266, !insn.addr !115
  %25 = inttoptr i32 %24 to i8*, !insn.addr !116
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %25), !insn.addr !117
  %27 = call i32 @call_variadic_macro(), !insn.addr !118
  %28 = add i32 %1, 3293, !insn.addr !119
  %29 = inttoptr i32 %28 to i8*, !insn.addr !120
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %29), !insn.addr !121
  %31 = add i32 %1, 3320, !insn.addr !122
  %32 = inttoptr i32 %31 to i8*, !insn.addr !123
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !124
  %34 = add i32 %1, 3347, !insn.addr !125
  %35 = inttoptr i32 %34 to i8*, !insn.addr !126
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %35), !insn.addr !127
  %37 = call i32 @call_builtin_macros(), !insn.addr !128
  %38 = add i32 %1, 3375, !insn.addr !129
  %39 = inttoptr i32 %38 to i8*, !insn.addr !130
  %40 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %39), !insn.addr !131
  ret i32 %40, !insn.addr !132

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @param_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1588:
  %0 = add i32 %arg1, 10, !insn.addr !133
  ret i32 %0, !insn.addr !134
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_159d:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !135
  ret i32 %0, !insn.addr !136
}

define i32 @param_asm_clobber(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_15b0:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !137
  %eax.01.reg2mem = alloca i32, !insn.addr !137
  %storemerge2.reg2mem = alloca i32, !insn.addr !137
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !138
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.0.lcssa.reg2mem, !insn.addr !138
  br i1 %1, label %dec_label_pc_15c6, label %dec_label_pc_15cc, !insn.addr !138

dec_label_pc_15c6:                                ; preds = %dec_label_pc_15b0, %dec_label_pc_15c6
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !139
  %3 = add i32 %2, %0, !insn.addr !139
  %4 = inttoptr i32 %3 to i32*, !insn.addr !139
  %5 = load i32, i32* %4, align 4, !insn.addr !139
  %6 = add i32 %5, %eax.01.reload, !insn.addr !139
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !140
  %exitcond = icmp eq i32 %7, %arg2
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !138
  store i32 %6, i32* %eax.01.reg2mem, !insn.addr !138
  store i32 %6, i32* %eax.0.lcssa.reg2mem, !insn.addr !138
  br i1 %exitcond, label %dec_label_pc_15cc, label %dec_label_pc_15c6, !insn.addr !138

dec_label_pc_15cc:                                ; preds = %dec_label_pc_15c6, %dec_label_pc_15b0
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_15c6, { 1, 0 }
}

define i32 @call_asm_clobber() local_unnamed_addr {
dec_label_pc_15d3:
  %eax.0.reg2mem = alloca i32, !insn.addr !142
  %stack_var_-36 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !143
  %1 = call i32 @param_asm_clobber(i32* nonnull %stack_var_-36, i32 5), !insn.addr !144
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !145
  %3 = icmp eq i32 %0, %2, !insn.addr !145
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !146
  br i1 %3, label %dec_label_pc_1604, label %dec_label_pc_15ff, !insn.addr !146

dec_label_pc_15ff:                                ; preds = %dec_label_pc_15d3
  %4 = call i32 @__stack_chk_fail_local(), !insn.addr !147
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_1604, !insn.addr !147

dec_label_pc_1604:                                ; preds = %dec_label_pc_15ff, %dec_label_pc_15d3
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !148
}

define i32 @param_asm_multi_insn(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1606:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !149
  %eax.01.reg2mem = alloca i32, !insn.addr !149
  %ecx.02.reg2mem = alloca i32, !insn.addr !149
  %edx.03.reg2mem = alloca i32, !insn.addr !149
  %storemerge4.reg2mem = alloca i32, !insn.addr !149
  %0 = icmp eq i32 %arg3, 0, !insn.addr !150
  br i1 %0, label %dec_label_pc_1626, label %dec_label_pc_161d.lr.ph, !insn.addr !151

dec_label_pc_161d.lr.ph:                          ; preds = %dec_label_pc_1606
  %1 = ptrtoint i32* %arg1 to i32
  %2 = ptrtoint i32* %arg2 to i32
  store i32 %arg3, i32* %storemerge4.reg2mem
  store i32 %1, i32* %edx.03.reg2mem
  store i32 %2, i32* %ecx.02.reg2mem
  br label %dec_label_pc_161d

dec_label_pc_161d:                                ; preds = %dec_label_pc_161d.lr.ph, %dec_label_pc_161d
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %edx.03.reload = load i32, i32* %edx.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %3 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !152
  %4 = load i8, i8* %3, align 1, !insn.addr !152
  %5 = zext i8 %4 to i32, !insn.addr !152
  %6 = and i32 %eax.01.reload, -256, !insn.addr !152
  %7 = or i32 %6, %5, !insn.addr !152
  %8 = inttoptr i32 %edx.03.reload to i8*, !insn.addr !153
  store i8 %4, i8* %8, align 1, !insn.addr !153
  %9 = add i32 %edx.03.reload, 1, !insn.addr !154
  %10 = add i32 %ecx.02.reload, 1, !insn.addr !155
  %11 = add i32 %storemerge4.reload, -1, !insn.addr !156
  %12 = icmp eq i32 %11, 0, !insn.addr !150
  store i32 %11, i32* %storemerge4.reg2mem, !insn.addr !151
  store i32 %9, i32* %edx.03.reg2mem, !insn.addr !151
  store i32 %10, i32* %ecx.02.reg2mem, !insn.addr !151
  store i32 %7, i32* %eax.01.reg2mem, !insn.addr !151
  store i32 %7, i32* %eax.0.lcssa.reg2mem, !insn.addr !151
  br i1 %12, label %dec_label_pc_1626, label %dec_label_pc_161d, !insn.addr !151

dec_label_pc_1626:                                ; preds = %dec_label_pc_161d, %dec_label_pc_1606
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !157

; uselistorder directives
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_161d, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1629:
  %eax.1.reg2mem = alloca i32, !insn.addr !158
  %eax.0.reg2mem = alloca i32, !insn.addr !158
  %stack_var_-44 = alloca i8, align 1
  %stack_var_-48 = alloca i8, align 1
  %stack_var_-58 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !159
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_2992 to i32), i32 -7650), !insn.addr !160
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !161
  store i8 0, i8* %stack_var_-48, align 1, !insn.addr !162
  %3 = inttoptr i32 %1 to i8*, !insn.addr !163
  %4 = bitcast i32* %stack_var_-58 to i8*, !insn.addr !163
  call void @__asm_rep_movsb_memcpy(i8* nonnull %4, i8* %3, i32 10), !insn.addr !163
  call void @__asm_rep_stosd_memset(i8* nonnull %stack_var_-44, i32 0, i32 7), !insn.addr !164
  %5 = bitcast i8* %stack_var_-48 to i32*, !insn.addr !165
  %6 = call i32 @param_asm_multi_insn(i32* nonnull %5, i32* nonnull %stack_var_-58, i32 9), !insn.addr !165
  %7 = load i8, i8* %stack_var_-48, align 1, !insn.addr !166
  %8 = icmp eq i8 %7, 72, !insn.addr !166
  %9 = icmp eq i1 %8, false, !insn.addr !167
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !167
  br i1 %9, label %dec_label_pc_1695, label %dec_label_pc_1689, !insn.addr !167

dec_label_pc_1689:                                ; preds = %dec_label_pc_1629
  %10 = load i8, i8* %stack_var_-44, align 1, !insn.addr !168
  %11 = icmp eq i8 %10, 111, !insn.addr !168
  %12 = select i1 %11, i32 42, i32 -1, !insn.addr !169
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !169
  br label %dec_label_pc_1695, !insn.addr !169

dec_label_pc_1695:                                ; preds = %dec_label_pc_1689, %dec_label_pc_1629
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %13 = call i32 @__readgsdword(i32 20), !insn.addr !170
  %14 = icmp eq i32 %2, %13, !insn.addr !170
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !171
  br i1 %14, label %dec_label_pc_16a6, label %dec_label_pc_16a1, !insn.addr !171

dec_label_pc_16a1:                                ; preds = %dec_label_pc_1695
  %15 = call i32 @__stack_chk_fail_local(), !insn.addr !172
  store i32 %15, i32* %eax.1.reg2mem, !insn.addr !172
  br label %dec_label_pc_16a6, !insn.addr !172

dec_label_pc_16a6:                                ; preds = %dec_label_pc_16a1, %dec_label_pc_1695
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !173

; uselistorder directives
  uselistorder i8* %stack_var_-48, { 2, 0, 1 }
}

define i32 @param_asm_simd(i32* %arg1, i32* %arg2, i32* %arg3) local_unnamed_addr {
dec_label_pc_16ad:
  %0 = bitcast i32* %arg1 to i128*, !insn.addr !174
  %1 = load i128, i128* %0, align 4, !insn.addr !174
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !174
  %3 = bitcast i32* %arg2 to i128*, !insn.addr !175
  %4 = load i128, i128* %3, align 4, !insn.addr !175
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !175
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !176
  %7 = call i32 @__asm_movaps.1(i128 %6), !insn.addr !177
  %8 = sext i32 %7 to i128, !insn.addr !177
  %9 = bitcast i32* %arg3 to i128*, !insn.addr !177
  store i128 %8, i128* %9, align 4, !insn.addr !177
  ret i32 0, !insn.addr !178
}

define i32 @param_simd_intrinsics(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_16ce:
  %0 = inttoptr i32 %arg2 to i128*, !insn.addr !179
  %1 = load i128, i128* %0, align 4, !insn.addr !179
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !179
  %3 = inttoptr i32 %arg1 to i128*, !insn.addr !180
  %4 = load i128, i128* %3, align 4, !insn.addr !180
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !180
  %6 = call i32 @__asm_movaps.1(i128 %5), !insn.addr !181
  %7 = sext i32 %6 to i128, !insn.addr !181
  %8 = inttoptr i32 %arg3 to i128*, !insn.addr !181
  store i128 %7, i128* %8, align 4, !insn.addr !181
  ret i32 0, !insn.addr !182
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_16ec:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !183
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %4 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !184
  %5 = add i32 %4, add (i32 ptrtoint (i32* @global_var_28cf to i32), i32 -7428), !insn.addr !185
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !186
  %7 = inttoptr i32 %5 to i8*, !insn.addr !187
  %8 = bitcast i32* %stack_var_-64 to i8*, !insn.addr !187
  call void @__asm_rep_movsd_memcpy(i8* nonnull %8, i8* %7, i32 4), !insn.addr !187
  %9 = add i32 %4, add (i32 ptrtoint (i32* @global_var_28cf to i32), i32 -7412), !insn.addr !188
  %10 = inttoptr i32 %9 to i8*, !insn.addr !189
  %11 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !189
  call void @__asm_rep_movsd_memcpy(i8* nonnull %11, i8* %10, i32 4), !insn.addr !189
  %12 = call i32 @param_asm_simd(i32* nonnull %stack_var_-64, i32* nonnull %stack_var_-48, i32* nonnull %stack_var_-32), !insn.addr !190
  %13 = load i32, i32* %stack_var_-32, align 4, !insn.addr !191
  %14 = add i32 %2, %1, !insn.addr !191
  %15 = add i32 %14, %3, !insn.addr !192
  %16 = add i32 %15, %13, !insn.addr !193
  %17 = call i32 @__readgsdword(i32 20), !insn.addr !194
  %18 = icmp eq i32 %6, %17, !insn.addr !194
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !195
  br i1 %18, label %dec_label_pc_175c, label %dec_label_pc_1757, !insn.addr !195

dec_label_pc_1757:                                ; preds = %dec_label_pc_16ec
  %19 = call i32 @__stack_chk_fail_local(), !insn.addr !196
  store i32 %19, i32* %eax.0.reg2mem, !insn.addr !196
  br label %dec_label_pc_175c, !insn.addr !196

dec_label_pc_175c:                                ; preds = %dec_label_pc_1757, %dec_label_pc_16ec
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !197

; uselistorder directives
  uselistorder i32* %stack_var_-32, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 4, { 1, 2, 0, 3 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 1, 0 }
}

define i32 @param_asm_atomic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1763:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !198
  %1 = load i32, i32* %0, align 4, !insn.addr !198
  %2 = add i32 %1, %arg2, !insn.addr !198
  store i32 %2, i32* %0, align 4, !insn.addr !198
  ret i32 %2, !insn.addr !199
}

define i32 @param_atomic_c11(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_177a:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !200
  %1 = load i32, i32* %0, align 4, !insn.addr !200
  %2 = add i32 %1, %arg2, !insn.addr !200
  store i32 %2, i32* %0, align 4, !insn.addr !200
  ret i32 %2, !insn.addr !201
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_1791:
  %eax.0.reg2mem = alloca i32, !insn.addr !202
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !203
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !204
  %2 = icmp eq i32 %0, %1, !insn.addr !204
  store i32 30, i32* %eax.0.reg2mem, !insn.addr !205
  br i1 %2, label %dec_label_pc_17d1, label %dec_label_pc_17cc, !insn.addr !205

dec_label_pc_17cc:                                ; preds = %dec_label_pc_1791
  %3 = call i32 @__stack_chk_fail_local(), !insn.addr !206
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_17d1, !insn.addr !206

dec_label_pc_17d1:                                ; preds = %dec_label_pc_17cc, %dec_label_pc_1791
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !207

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 3, 2, 1, 0 }
}

define i32 @param_dynamic_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_17d3:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !208
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !209
  %3 = call i32 @sysconf(i32 30), !insn.addr !210
  %4 = call i32* @mmap(i32* null, i32 %3, i32 7, i32 34, i32 -1, i32 0), !insn.addr !211
  %5 = icmp eq i32* %4, inttoptr (i32 -1 to i32*), !insn.addr !212
  store i32 -1, i32* %esi.0.reg2mem, !insn.addr !213
  br i1 %5, label %dec_label_pc_1823, label %dec_label_pc_1811, !insn.addr !213

dec_label_pc_1811:                                ; preds = %dec_label_pc_17d3
  %6 = add i32 %arg1, 5, !insn.addr !214
  %7 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !215
  store i32 %6, i32* %esi.0.reg2mem, !insn.addr !216
  br label %dec_label_pc_1823, !insn.addr !216

dec_label_pc_1823:                                ; preds = %dec_label_pc_1811, %dec_label_pc_17d3
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  ret i32 %esi.0.reload, !insn.addr !217

; uselistorder directives
  uselistorder i32 5, { 5, 0, 1, 4, 2, 3 }
}

define i32 @param_memory_protection() local_unnamed_addr {
dec_label_pc_182d:
  %0 = alloca i32
  %edx.0.reg2mem = alloca i32, !insn.addr !218
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !219
  %3 = call i32 @sysconf(i32 30), !insn.addr !220
  %4 = call i32* @mmap(i32* null, i32 %3, i32 3, i32 34, i32 -1, i32 0), !insn.addr !221
  %5 = icmp eq i32* %4, inttoptr (i32 -1 to i32*), !insn.addr !222
  store i32 -1, i32* %edx.0.reg2mem, !insn.addr !223
  br i1 %5, label %dec_label_pc_18db, label %dec_label_pc_186b, !insn.addr !223

dec_label_pc_186b:                                ; preds = %dec_label_pc_182d
  store i32 42, i32* %4, align 4, !insn.addr !224
  %6 = call i32 @mprotect(i32* %4, i32 %3, i32 1), !insn.addr !225
  %7 = icmp eq i32 %6, 0, !insn.addr !226
  br i1 %7, label %dec_label_pc_1897, label %dec_label_pc_1884, !insn.addr !227

dec_label_pc_1884:                                ; preds = %dec_label_pc_186b
  %8 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !228
  store i32 -2, i32* %edx.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_18db, !insn.addr !229

dec_label_pc_1897:                                ; preds = %dec_label_pc_186b
  %9 = load i32, i32* %4, align 4, !insn.addr !230
  %10 = call i32 @mprotect(i32* %4, i32 %3, i32 3), !insn.addr !231
  %11 = icmp eq i32 %10, 0, !insn.addr !232
  br i1 %11, label %dec_label_pc_18c3, label %dec_label_pc_18b0, !insn.addr !233

dec_label_pc_18b0:                                ; preds = %dec_label_pc_1897
  %12 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !234
  store i32 -3, i32* %edx.0.reg2mem, !insn.addr !235
  br label %dec_label_pc_18db, !insn.addr !235

dec_label_pc_18c3:                                ; preds = %dec_label_pc_1897
  store i32 100, i32* %4, align 4, !insn.addr !236
  %13 = call i32 @munmap(i32* %4, i32 %3), !insn.addr !237
  store i32 %9, i32* %edx.0.reg2mem, !insn.addr !238
  br label %dec_label_pc_18db, !insn.addr !238

dec_label_pc_18db:                                ; preds = %dec_label_pc_18c3, %dec_label_pc_18b0, %dec_label_pc_1884, %dec_label_pc_182d
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  ret i32 %edx.0.reload, !insn.addr !239

; uselistorder directives
  uselistorder i32 %3, { 2, 1, 3, 0, 4, 5 }
  uselistorder i32* %edx.0.reg2mem, { 0, 3, 2, 1, 4 }
  uselistorder i32 100, { 1, 0 }
  uselistorder i32 (i32*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32* (i32*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 0, { 18, 19, 9, 10, 3, 4, 11, 20, 8, 0, 1, 2, 7, 12, 13, 14, 15, 16, 17, 5, 6 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder i32 30, { 2, 3, 0, 4, 1 }
}

define i32 @param_clobber_importance(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18e5:
  %0 = add i32 %arg2, %arg1, !insn.addr !240
  %1 = mul i32 %0, 2, !insn.addr !241
  ret i32 %1, !insn.addr !242
}

define i32 @call_asm_privileged() local_unnamed_addr {
dec_label_pc_1907:
  %0 = call i32 @param_dynamic_code(i32 10), !insn.addr !243
  %1 = call i32 @param_memory_protection(), !insn.addr !244
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !245
  %3 = icmp eq i32 %0, 15, !insn.addr !246
  %4 = icmp eq i32 %1, 42, !insn.addr !247
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i32 %2, 20
  %7 = icmp eq i1 %5, %6
  %ebx.0 = select i1 %7, i32 77, i32 %0
  ret i32 %ebx.0, !insn.addr !248

; uselistorder directives
  uselistorder i32 20, { 0, 2, 3, 4, 5, 6, 7, 8, 9, 1 }
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder i32 10, { 0, 3, 4, 1, 2 }
}

define i32 @param_memory_clobber_demo() local_unnamed_addr {
dec_label_pc_194f:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.cx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !249
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_266c to i32), i32 68), !insn.addr !250
  %4 = inttoptr i32 %3 to i32*, !insn.addr !250
  %5 = load i32, i32* %4, align 4, !insn.addr !250
  %6 = add i32 %5, 50, !insn.addr !250
  ret i32 %6, !insn.addr !251
}

define i32 @test_asm_features() local_unnamed_addr {
dec_label_pc_1970:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !252
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7640), !insn.addr !253
  %4 = inttoptr i32 %3 to i8*, !insn.addr !254
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %4), !insn.addr !255
  %6 = call i32 @call_asm_basic(), !insn.addr !256
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7597), !insn.addr !257
  %8 = inttoptr i32 %7 to i8*, !insn.addr !258
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !259
  %10 = call i32 @call_asm_clobber(), !insn.addr !260
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7569), !insn.addr !261
  %12 = inttoptr i32 %11 to i8*, !insn.addr !262
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !263
  %14 = call i32 @call_asm_multi_insn(), !insn.addr !264
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7541), !insn.addr !265
  %16 = inttoptr i32 %15 to i8*, !insn.addr !266
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !267
  %18 = call i32 @call_asm_simd(), !insn.addr !268
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7513), !insn.addr !269
  %20 = inttoptr i32 %19 to i8*, !insn.addr !270
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !271
  %22 = call i32 @call_asm_atomic(), !insn.addr !272
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7485), !insn.addr !273
  %24 = inttoptr i32 %23 to i8*, !insn.addr !274
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !275
  %26 = call i32 @call_asm_privileged(), !insn.addr !276
  %27 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2647 to i32), i32 -7457), !insn.addr !277
  %28 = inttoptr i32 %27 to i8*, !insn.addr !278
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !279
  ret i32 %29, !insn.addr !280

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 20, 19, 18, 17, 16, 15, 14, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13, 12, 21 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a26:
  ret i32 %arg1, !insn.addr !281
}

define i32 @__x86.get_pc_thunk.cx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a2a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !282
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
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_256b to i32), i32 -232), !insn.addr !288
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
  uselistorder i1 false, { 3, 2, 0, 1 }
  uselistorder i32 -1, { 5, 0, 6, 1, 7, 2, 8, 9, 4, 3, 10 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
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
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 8, 7, 4, 6, 5, 1, 3, 2, 0 }
  uselistorder i32 1, { 19, 21, 20, 18, 17, 16, 38, 39, 40, 41, 42, 43, 44, 15, 14, 45, 22, 13, 23, 12, 24, 64, 63, 62, 25, 11, 65, 60, 61, 27, 26, 69, 70, 32, 31, 30, 29, 28, 66, 33, 71, 36, 35, 34, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 10, 58, 9, 68, 59, 8, 7, 6, 37, 5, 4, 3, 2, 67, 1, 0 }
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

declare void @__asm_rep_movsb_memcpy(i8*, i8*, i32) local_unnamed_addr

declare void @__asm_rep_stosd_memset(i8*, i32, i32) local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i32 @__asm_movaps.1(i128) local_unnamed_addr

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
!42 = !{i64 4818}
!43 = !{i64 4826}
!44 = !{i64 4829}
!45 = !{i64 4839}
!46 = !{i64 4856}
!47 = !{i64 4859}
!48 = !{i64 4861}
!49 = !{i64 4864}
!50 = !{i64 4866}
!51 = !{i64 4876}
!52 = !{i64 4884}
!53 = !{i64 4889}
!54 = !{i64 4892}
!55 = !{i64 4902}
!56 = !{i64 4910}
!57 = !{i64 4915}
!58 = !{i64 4920}
!59 = !{i64 4930}
!60 = !{i64 4942}
!61 = !{i64 4945}
!62 = !{i64 4955}
!63 = !{i64 4965}
!64 = !{i64 4975}
!65 = !{i64 4983}
!66 = !{i64 4988}
!67 = !{i64 4996}
!68 = !{i64 5001}
!69 = !{i64 5004}
!70 = !{i64 5014}
!71 = !{i64 5027}
!72 = !{i64 5048}
!73 = !{i64 5054}
!74 = !{i64 5057}
!75 = !{i64 5065}
!76 = !{i64 5071}
!77 = !{i64 5088}
!78 = !{i64 5094}
!79 = !{i64 5106}
!80 = !{i64 5109}
!81 = !{i64 5113}
!82 = !{i64 5123}
!83 = !{i64 5133}
!84 = !{i64 5143}
!85 = !{i64 5152}
!86 = !{i64 5199}
!87 = !{i64 5205}
!88 = !{i64 5208}
!89 = !{i64 5220}
!90 = !{i64 5225}
!91 = !{i64 5238}
!92 = !{i64 5244}
!93 = !{i64 5253}
!94 = !{i64 5267}
!95 = !{i64 5273}
!96 = !{i64 5276}
!97 = !{i64 5284}
!98 = !{i64 5292}
!99 = !{i64 5295}
!100 = !{i64 5303}
!101 = !{i64 5311}
!102 = !{i64 5314}
!103 = !{i64 5322}
!104 = !{i64 5330}
!105 = !{i64 5333}
!106 = !{i64 5341}
!107 = !{i64 5352}
!108 = !{i64 5355}
!109 = !{i64 5363}
!110 = !{i64 5371}
!111 = !{i64 5374}
!112 = !{i64 5382}
!113 = !{i64 5390}
!114 = !{i64 5393}
!115 = !{i64 5401}
!116 = !{i64 5409}
!117 = !{i64 5412}
!118 = !{i64 5417}
!119 = !{i64 5426}
!120 = !{i64 5432}
!121 = !{i64 5435}
!122 = !{i64 5443}
!123 = !{i64 5451}
!124 = !{i64 5454}
!125 = !{i64 5462}
!126 = !{i64 5473}
!127 = !{i64 5476}
!128 = !{i64 5481}
!129 = !{i64 5490}
!130 = !{i64 5496}
!131 = !{i64 5499}
!132 = !{i64 5511}
!133 = !{i64 5524}
!134 = !{i64 5532}
!135 = !{i64 5545}
!136 = !{i64 5551}
!137 = !{i64 5552}
!138 = !{i64 5572}
!139 = !{i64 5574}
!140 = !{i64 5577}
!141 = !{i64 5586}
!142 = !{i64 5587}
!143 = !{i64 5597}
!144 = !{i64 5614}
!145 = !{i64 5622}
!146 = !{i64 5629}
!147 = !{i64 5631}
!148 = !{i64 5637}
!149 = !{i64 5638}
!150 = !{i64 5656}
!151 = !{i64 5659}
!152 = !{i64 5661}
!153 = !{i64 5663}
!154 = !{i64 5665}
!155 = !{i64 5666}
!156 = !{i64 5667}
!157 = !{i64 5672}
!158 = !{i64 5673}
!159 = !{i64 5677}
!160 = !{i64 5700}
!161 = !{i64 5709}
!162 = !{i64 5721}
!163 = !{i64 5728}
!164 = !{i64 5740}
!165 = !{i64 5752}
!166 = !{i64 5763}
!167 = !{i64 5767}
!168 = !{i64 5769}
!169 = !{i64 5778}
!170 = !{i64 5784}
!171 = !{i64 5791}
!172 = !{i64 5793}
!173 = !{i64 5804}
!174 = !{i64 5821}
!175 = !{i64 5824}
!176 = !{i64 5827}
!177 = !{i64 5831}
!178 = !{i64 5837}
!179 = !{i64 5848}
!180 = !{i64 5854}
!181 = !{i64 5861}
!182 = !{i64 5867}
!183 = !{i64 5868}
!184 = !{i64 5872}
!185 = !{i64 5895}
!186 = !{i64 5904}
!187 = !{i64 5916}
!188 = !{i64 5918}
!189 = !{i64 5935}
!190 = !{i64 5946}
!191 = !{i64 5954}
!192 = !{i64 5957}
!193 = !{i64 5960}
!194 = !{i64 5966}
!195 = !{i64 5973}
!196 = !{i64 5975}
!197 = !{i64 5986}
!198 = !{i64 6002}
!199 = !{i64 6009}
!200 = !{i64 6025}
!201 = !{i64 6032}
!202 = !{i64 6033}
!203 = !{i64 6043}
!204 = !{i64 6083}
!205 = !{i64 6090}
!206 = !{i64 6092}
!207 = !{i64 6098}
!208 = !{i64 6099}
!209 = !{i64 6109}
!210 = !{i64 6125}
!211 = !{i64 6148}
!212 = !{i64 6156}
!213 = !{i64 6159}
!214 = !{i64 6164}
!215 = !{i64 6171}
!216 = !{i64 6176}
!217 = !{i64 6188}
!218 = !{i64 6189}
!219 = !{i64 6199}
!220 = !{i64 6215}
!221 = !{i64 6235}
!222 = !{i64 6246}
!223 = !{i64 6249}
!224 = !{i64 6253}
!225 = !{i64 6264}
!226 = !{i64 6272}
!227 = !{i64 6274}
!228 = !{i64 6280}
!229 = !{i64 6293}
!230 = !{i64 6295}
!231 = !{i64 6305}
!232 = !{i64 6316}
!233 = !{i64 6318}
!234 = !{i64 6324}
!235 = !{i64 6337}
!236 = !{i64 6339}
!237 = !{i64 6352}
!238 = !{i64 6360}
!239 = !{i64 6372}
!240 = !{i64 6390}
!241 = !{i64 6400}
!242 = !{i64 6406}
!243 = !{i64 6421}
!244 = !{i64 6428}
!245 = !{i64 6441}
!246 = !{i64 6449}
!247 = !{i64 6454}
!248 = !{i64 6478}
!249 = !{i64 6483}
!250 = !{i64 6501}
!251 = !{i64 6511}
!252 = !{i64 6520}
!253 = !{i64 6534}
!254 = !{i64 6540}
!255 = !{i64 6543}
!256 = !{i64 6548}
!257 = !{i64 6557}
!258 = !{i64 6563}
!259 = !{i64 6566}
!260 = !{i64 6571}
!261 = !{i64 6580}
!262 = !{i64 6586}
!263 = !{i64 6589}
!264 = !{i64 6594}
!265 = !{i64 6603}
!266 = !{i64 6609}
!267 = !{i64 6612}
!268 = !{i64 6617}
!269 = !{i64 6626}
!270 = !{i64 6632}
!271 = !{i64 6635}
!272 = !{i64 6640}
!273 = !{i64 6649}
!274 = !{i64 6655}
!275 = !{i64 6658}
!276 = !{i64 6663}
!277 = !{i64 6672}
!278 = !{i64 6678}
!279 = !{i64 6681}
!280 = !{i64 6693}
!281 = !{i64 6697}
!282 = !{i64 6701}
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
