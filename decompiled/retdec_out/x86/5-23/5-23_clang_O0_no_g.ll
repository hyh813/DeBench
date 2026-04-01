source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_200 = global i32 0
@global_var_404 = global i32 185
@global_var_3ab6 = local_unnamed_addr constant i32* @global_var_404
@global_var_3a83 = constant i32 239140864
@global_var_3a24 = local_unnamed_addr constant i32 222429829
@global_var_39b6 = local_unnamed_addr constant i32 1090519040
@global_var_3986 = local_unnamed_addr constant i32 1835008
@global_var_3946 = local_unnamed_addr constant i32 77856768
@global_var_3922 = constant i32 1835008
@global_var_3876 = local_unnamed_addr constant i32 207422339
@global_var_3844 = constant i32 -7972
@global_var_36a6 = local_unnamed_addr constant i32 263180
@global_var_3624 = constant i32 4
@global_var_3584 = constant i32 67374181
@global_var_3424 = constant i32 -6480
@global_var_3334 = local_unnamed_addr constant i32 -8784
@global_var_32f4 = local_unnamed_addr constant i32 3
@global_var_3244 = local_unnamed_addr constant i32 877407565
@global_var_30b4 = local_unnamed_addr constant i32 -1766004810
@global_var_3025 = constant [18 x i8] c"lues: %d, %d, %d\0A\00"
@0 = external global i32
@global_var_400 = global i1 true

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

define i32 @function_1050(i32* %addr, i32 %len, i32 %prot) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @mprotect(i32* %addr, i32 %len, i32 %prot), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1060(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32* @function_1070(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32 @function_1080(i32 %name) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32* @function_1090(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32* @mmap(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_10a0(i8* %s) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32* @function_10b0(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !11
  ret i32* %0, !insn.addr !11
}

define i32 @function_10c0(i32* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @munmap(i32* %addr, i32 %len), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_10d0() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_110c(i32 %2), !insn.addr !14
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 16132, !insn.addr !15
  %6 = inttoptr i32 %5 to i32*, !insn.addr !15
  %7 = load i32, i32* %6, align 4, !insn.addr !15
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !16
  %9 = call i32 @__asm_hlt(), !insn.addr !17
  unreachable, !insn.addr !17

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_110c(i32 %arg1) local_unnamed_addr {
dec_label_pc_110c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !18
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1120:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !20
  %3 = add i32 %1, 16151, !insn.addr !21
  ret i32 %3, !insn.addr !22
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !23
  ret i32 0, !insn.addr !24
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11b0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !25
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !26
  %3 = add i32 %1, 15999, !insn.addr !27
  %4 = inttoptr i32 %3 to i8*, !insn.addr !27
  %5 = load i8, i8* %4, align 1, !insn.addr !27
  %6 = icmp eq i8 %5, 0, !insn.addr !27
  %7 = icmp eq i1 %6, false, !insn.addr !28
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !28
  br i1 %7, label %dec_label_pc_1232, label %dec_label_pc_11d1, !insn.addr !28

dec_label_pc_11d1:                                ; preds = %dec_label_pc_11b0
  %8 = add i32 %1, 15923, !insn.addr !29
  %9 = inttoptr i32 %8 to i32*, !insn.addr !29
  %10 = load i32, i32* %9, align 4, !insn.addr !29
  %11 = icmp eq i32 %10, 0, !insn.addr !30
  br i1 %11, label %dec_label_pc_11ee, label %dec_label_pc_11db, !insn.addr !31

dec_label_pc_11db:                                ; preds = %dec_label_pc_11d1
  %12 = call i32 @function_10d0(), !insn.addr !32
  br label %dec_label_pc_11ee, !insn.addr !33

dec_label_pc_11ee:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11d1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !34
  store i8 1, i8* %4, align 1, !insn.addr !35
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !35
  br label %dec_label_pc_1232, !insn.addr !35

dec_label_pc_1232:                                ; preds = %dec_label_pc_11ee, %dec_label_pc_11b0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !36

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i32 @register_tm_clones(), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1249:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !38
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_124d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !39
}

define i32 @param_macro_constants(i32 %arg1) local_unnamed_addr {
dec_label_pc_1260:
  %0 = icmp sgt i32 %arg1, ptrtoint (i1* @global_var_400 to i32), !insn.addr !40
  %. = select i1 %0, i32 64, i32 ptrtoint (i32* @global_var_200 to i32)
  ret i32 %., !insn.addr !41
}

define i32 @call_macro_constants(i32 %arg1) local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i32 @param_macro_constants(i32 2048), !insn.addr !42
  ret i32 %0, !insn.addr !43
}

define i32 @param_macro_functions(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = mul i32 %arg1, %arg1, !insn.addr !44
  %1 = icmp sgt i32 %arg1, %arg2, !insn.addr !45
  %storemerge = select i1 %1, i32 %arg1, i32 %arg2
  %2 = add i32 %storemerge, %0, !insn.addr !46
  ret i32 %2, !insn.addr !47

; uselistorder directives
  uselistorder i32 %arg1, { 0, 3, 1, 2 }
}

define i32 @call_macro_functions(i32 %arg1) local_unnamed_addr {
dec_label_pc_1300:
  %0 = call i32 @param_macro_functions(i32 5, i32 3), !insn.addr !48
  ret i32 %0, !insn.addr !49
}

define i32 @param_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %0 = mul i32 %arg1, 3, !insn.addr !50
  %1 = add i32 %0, 2, !insn.addr !51
  ret i32 %1, !insn.addr !52
}

define i32 @call_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1350:
  %0 = call i32 @param_conditional_compile(i32 10), !insn.addr !53
  ret i32 %0, !insn.addr !54
}

define i32 @param_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = mul i32 %arg1, 5, !insn.addr !55
  %1 = add i32 %0, 57072, !insn.addr !56
  ret i32 %1, !insn.addr !57
}

define i32 @call_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_13a0:
  %0 = call i32 @param_multi_branch_compile(i32 10), !insn.addr !58
  ret i32 %0, !insn.addr !59
}

define i32 @param_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = add i32 %arg1, 16, !insn.addr !60
  ret i32 %0, !insn.addr !61
}

define i32 @call_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %0 = call i32 @param_macro_recursion(i32 100), !insn.addr !62
  ret i32 %0, !insn.addr !63
}

define i32 @param_stringize(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1440:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 7100, !insn.addr !64
  %3 = add i32 %1, 7112, !insn.addr !65
  %4 = add i32 %1, 7118, !insn.addr !66
  %5 = inttoptr i32 %2 to i8*, !insn.addr !67
  %6 = call i32 @strlen(i8* %5), !insn.addr !68
  %7 = inttoptr i32 %3 to i8*, !insn.addr !69
  %8 = call i32 @strlen(i8* %7), !insn.addr !70
  %9 = add i32 %8, %6, !insn.addr !71
  %10 = inttoptr i32 %4 to i8*, !insn.addr !72
  %11 = call i32 @strlen(i8* %10), !insn.addr !73
  %12 = add i32 %9, %11, !insn.addr !74
  ret i32 %12, !insn.addr !75

; uselistorder directives
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i32 @call_stringize(i32 %arg1) local_unnamed_addr {
dec_label_pc_14c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_stringize(i32 0, i32 %1), !insn.addr !76
  ret i32 %2, !insn.addr !77
}

define i32 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = mul i32 %arg1, 10, !insn.addr !78
  ret i32 %0, !insn.addr !79
}

define i32 @param_token_paste(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @my_func(i32 %arg2), !insn.addr !80
  %1 = add i32 %arg2, 5, !insn.addr !81
  %2 = add i32 %1, %0, !insn.addr !82
  ret i32 %2, !insn.addr !83
}

define i32 @call_token_paste(i32 %arg1) local_unnamed_addr {
dec_label_pc_1540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_token_paste(i32 5, i32 %1), !insn.addr !84
  ret i32 %2, !insn.addr !85
}

define i32 @param_variadic_macro(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1570:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3a83 to i32), i32 -8162), !insn.addr !86
  %3 = inttoptr i32 %2 to i8*, !insn.addr !87
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !88
  %5 = add i32 %arg2, 50, !insn.addr !89
  ret i32 %5, !insn.addr !90
}

define i32 @call_variadic_macro(i32 %arg1) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @param_variadic_macro(i32 10, i32 20, i32 30, i32 %2, i32 %1), !insn.addr !91
  ret i32 %3, !insn.addr !92

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_1610:
  %0 = add i32 %arg1, 1, !insn.addr !93
  %1 = mul i32 %arg1, 2, !insn.addr !94
  %2 = add i32 %0, %1, !insn.addr !95
  ret i32 %2, !insn.addr !96
}

define i32 @call_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_1640:
  %0 = call i32 @param_macro_override(i32 5), !insn.addr !97
  ret i32 %0, !insn.addr !98
}

define i32 @param_include_guard(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @header_func(i32 5), !insn.addr !99
  ret i32 %0, !insn.addr !100
}

define i32 @header_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = mul i32 %arg1, 100, !insn.addr !101
  ret i32 %0, !insn.addr !102
}

define i32 @call_include_guard(i32 %arg1) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @param_include_guard(i32 %2, i32 %1), !insn.addr !103
  ret i32 %3, !insn.addr !104

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @param_builtin_macros(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3922 to i32), i32 -8084), !insn.addr !105
  %3 = inttoptr i32 %2 to i8*, !insn.addr !106
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !107
  %5 = add i32 %arg2, 282, !insn.addr !108
  ret i32 %5, !insn.addr !109
}

define i32 @call_builtin_macros(i32 %arg1) local_unnamed_addr {
dec_label_pc_1780:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_builtin_macros(i32 100, i32 %1), !insn.addr !110
  ret i32 %2, !insn.addr !111
}

define i32 @test_preprocessing_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -8039), !insn.addr !112
  %3 = inttoptr i32 %2 to i8*, !insn.addr !113
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !114
  %5 = call i32 @call_macro_constants(i32 ptrtoint (i32* @0 to i32)), !insn.addr !115
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7999), !insn.addr !116
  %7 = inttoptr i32 %6 to i8*, !insn.addr !117
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !118
  %9 = call i32 @call_macro_functions(i32 ptrtoint (i32* @0 to i32)), !insn.addr !119
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7972), !insn.addr !120
  %11 = inttoptr i32 %10 to i8*, !insn.addr !121
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !122
  %13 = call i32 @call_conditional_compile(i32 ptrtoint (i32* @0 to i32)), !insn.addr !123
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7945), !insn.addr !124
  %15 = inttoptr i32 %14 to i8*, !insn.addr !125
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !126
  %17 = call i32 @call_multi_branch_compile(i32 ptrtoint (i32* @0 to i32)), !insn.addr !127
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7918), !insn.addr !128
  %19 = inttoptr i32 %18 to i8*, !insn.addr !129
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !130
  %21 = call i32 @call_macro_recursion(i32 ptrtoint (i32* @0 to i32)), !insn.addr !131
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7887), !insn.addr !132
  %23 = inttoptr i32 %22 to i8*, !insn.addr !133
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !134
  %25 = call i32 @call_stringize(i32 ptrtoint (i32* @0 to i32)), !insn.addr !135
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7859), !insn.addr !136
  %27 = inttoptr i32 %26 to i8*, !insn.addr !137
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !138
  %29 = call i32 @call_token_paste(i32 ptrtoint (i32* @0 to i32)), !insn.addr !139
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7817), !insn.addr !140
  %31 = inttoptr i32 %30 to i8*, !insn.addr !141
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !142
  %33 = call i32 @call_variadic_macro(i32 ptrtoint (i32* @0 to i32)), !insn.addr !143
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7790), !insn.addr !144
  %35 = inttoptr i32 %34 to i8*, !insn.addr !145
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !146
  %37 = call i32 @call_macro_override(i32 ptrtoint (i32* @0 to i32)), !insn.addr !147
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7763), !insn.addr !148
  %39 = inttoptr i32 %38 to i8*, !insn.addr !149
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !150
  %41 = call i32 @call_include_guard(i32 ptrtoint (i32* @0 to i32)), !insn.addr !151
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7736), !insn.addr !152
  %43 = inttoptr i32 %42 to i8*, !insn.addr !153
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !154
  %45 = call i32 @call_builtin_macros(i32 ptrtoint (i32* @0 to i32)), !insn.addr !155
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3844 to i32), i32 -7708), !insn.addr !156
  %47 = inttoptr i32 %46 to i8*, !insn.addr !157
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !158
  ret i32 %48, !insn.addr !159

; uselistorder directives
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @param_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1920:
  %0 = add i32 %arg1, 10, !insn.addr !160
  ret i32 %0, !insn.addr !161
}

define i32 @call_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1950:
  %0 = call i32 @param_asm_basic(i32 5), !insn.addr !162
  ret i32 %0, !insn.addr !163
}

define i32 @param_asm_clobber(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1980:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !164
  %eax.01.reg2mem = alloca i32, !insn.addr !164
  %storemerge2.reg2mem = alloca i32, !insn.addr !164
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !165
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !165
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !165
  store i32 0, i32* %eax.0.lcssa.reg2mem, !insn.addr !165
  br i1 %1, label %dec_label_pc_19a6, label %dec_label_pc_19af, !insn.addr !165

dec_label_pc_19a6:                                ; preds = %dec_label_pc_1980, %dec_label_pc_19a6
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !166
  %3 = add i32 %2, %0, !insn.addr !166
  %4 = inttoptr i32 %3 to i32*, !insn.addr !166
  %5 = load i32, i32* %4, align 4, !insn.addr !166
  %6 = add i32 %5, %eax.01.reload, !insn.addr !166
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !167
  %exitcond = icmp eq i32 %7, %arg2
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !165
  store i32 %6, i32* %eax.01.reg2mem, !insn.addr !165
  store i32 %6, i32* %eax.0.lcssa.reg2mem, !insn.addr !165
  br i1 %exitcond, label %dec_label_pc_19af, label %dec_label_pc_19a6, !insn.addr !165

dec_label_pc_19af:                                ; preds = %dec_label_pc_19a6, %dec_label_pc_1980
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !168

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19a6, { 1, 0 }
}

define i32 @call_asm_clobber(i32 %arg1) local_unnamed_addr {
dec_label_pc_19d0:
  %0 = alloca i32
  %stack_var_-28 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3624 to i32), i32 -7444), !insn.addr !169
  %3 = inttoptr i32 %2 to i32*, !insn.addr !170
  %4 = call i32* @memcpy(i32* nonnull %stack_var_-28, i32* %3, i32 20), !insn.addr !170
  %5 = call i32 @param_asm_clobber(i32* nonnull %stack_var_-28, i32 5), !insn.addr !171
  ret i32 %5, !insn.addr !172
}

define i32 @param_asm_multi_insn(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1a20:
  %ecx.02.reg2mem = alloca i32, !insn.addr !173
  %edx.03.reg2mem = alloca i32, !insn.addr !173
  %storemerge4.reg2mem = alloca i32, !insn.addr !173
  %0 = icmp eq i32 %arg3, 0, !insn.addr !174
  br i1 %0, label %dec_label_pc_1a4d, label %dec_label_pc_1a41.lr.ph, !insn.addr !175

dec_label_pc_1a41.lr.ph:                          ; preds = %dec_label_pc_1a20
  %1 = ptrtoint i32* %arg1 to i32
  %2 = ptrtoint i32* %arg2 to i32
  store i32 %arg3, i32* %storemerge4.reg2mem
  store i32 %1, i32* %edx.03.reg2mem
  store i32 %2, i32* %ecx.02.reg2mem
  br label %dec_label_pc_1a41

dec_label_pc_1a41:                                ; preds = %dec_label_pc_1a41.lr.ph, %dec_label_pc_1a41
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %edx.03.reload = load i32, i32* %edx.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %3 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !176
  %4 = load i8, i8* %3, align 1, !insn.addr !176
  %5 = inttoptr i32 %edx.03.reload to i8*, !insn.addr !177
  store i8 %4, i8* %5, align 1, !insn.addr !177
  %6 = add i32 %edx.03.reload, 1, !insn.addr !178
  %7 = add i32 %ecx.02.reload, 1, !insn.addr !179
  %8 = add i32 %storemerge4.reload, -1, !insn.addr !180
  %9 = icmp eq i32 %8, 0, !insn.addr !174
  store i32 %8, i32* %storemerge4.reg2mem, !insn.addr !175
  store i32 %6, i32* %edx.03.reg2mem, !insn.addr !175
  store i32 %7, i32* %ecx.02.reg2mem, !insn.addr !175
  br i1 %9, label %dec_label_pc_1a4d, label %dec_label_pc_1a41, !insn.addr !175

dec_label_pc_1a4d:                                ; preds = %dec_label_pc_1a41, %dec_label_pc_1a20
  ret i32 0, !insn.addr !181

; uselistorder directives
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1a41, { 1, 0 }
}

define i32 @call_asm_multi_insn(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = alloca i32
  %1 = alloca i8
  %stack_var_-51.0.reg2mem = alloca i32, !insn.addr !182
  %2 = load i8, i8* %1
  %stack_var_-50 = alloca i8, align 1
  %stack_var_-18 = alloca i32, align 4
  %3 = load i32, i32* %0
  %4 = add i32 %3, add (i32 ptrtoint (i32* @global_var_3584 to i32), i32 -7667), !insn.addr !183
  %5 = inttoptr i32 %4 to i32*, !insn.addr !183
  %6 = load i32, i32* %5, align 4, !insn.addr !183
  store i32 %6, i32* %stack_var_-18, align 4, !insn.addr !184
  %7 = bitcast i8* %stack_var_-50 to i32*, !insn.addr !185
  %8 = call i32* @memset(i32* nonnull %7, i32 0, i32 32), !insn.addr !185
  %9 = call i32 @param_asm_multi_insn(i32* nonnull %7, i32* nonnull %stack_var_-18, i32 9), !insn.addr !186
  %10 = load i8, i8* %stack_var_-50, align 1, !insn.addr !187
  %11 = icmp eq i8 %10, 72, !insn.addr !188
  %12 = icmp eq i1 %11, false, !insn.addr !189
  store i32 -1, i32* %stack_var_-51.0.reg2mem, !insn.addr !189
  br i1 %12, label %dec_label_pc_1afc, label %dec_label_pc_1aef, !insn.addr !189

dec_label_pc_1aef:                                ; preds = %dec_label_pc_1a70
  %13 = icmp eq i8 %2, 111, !insn.addr !190
  %phitmp = icmp eq i1 %13, false
  %phitmp2 = icmp eq i1 %phitmp, false
  %phitmp3 = select i1 %phitmp2, i32 42, i32 -1
  store i32 %phitmp3, i32* %stack_var_-51.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1afc, !insn.addr !191

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1aef, %dec_label_pc_1a70
  %stack_var_-51.0.reload = load i32, i32* %stack_var_-51.0.reg2mem
  ret i32 %stack_var_-51.0.reload, !insn.addr !192

; uselistorder directives
  uselistorder i8* %stack_var_-50, { 1, 0 }
}

define i32 @param_asm_simd(i32* %arg1, i32* %arg2, i32* %arg3) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = bitcast i32* %arg1 to i128*, !insn.addr !193
  %1 = load i128, i128* %0, align 4, !insn.addr !193
  %2 = call i128 @__asm_movaps(i128 %1), !insn.addr !193
  %3 = bitcast i32* %arg2 to i128*, !insn.addr !194
  %4 = load i128, i128* %3, align 4, !insn.addr !194
  %5 = call i128 @__asm_movaps(i128 %4), !insn.addr !194
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !195
  %7 = call i32 @__asm_movaps.1(i128 %6), !insn.addr !196
  %8 = sext i32 %7 to i128, !insn.addr !196
  %9 = bitcast i32* %arg3 to i128*, !insn.addr !196
  store i128 %8, i128* %9, align 4, !insn.addr !196
  ret i32 0, !insn.addr !197
}

define i32 @param_simd_intrinsics(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1b50:
  %0 = inttoptr i32 %arg1 to i128*, !insn.addr !198
  %1 = load i128, i128* %0, align 4, !insn.addr !198
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !198
  %3 = call i32 @__asm_movdqa.2(i128 %2), !insn.addr !199
  %4 = sext i32 %3 to i128, !insn.addr !199
  %5 = inttoptr i32 %arg2 to i128*, !insn.addr !200
  %6 = load i128, i128* %5, align 4, !insn.addr !200
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !200
  %8 = call i32 @__asm_movdqa.2(i128 %7), !insn.addr !201
  %9 = sext i32 %8 to i128, !insn.addr !201
  %10 = call i128 @__asm_movdqa(i128 %4), !insn.addr !202
  %11 = call i128 @__asm_movdqa(i128 %9), !insn.addr !203
  %12 = call i32 @__asm_movdqa.2(i128 %10), !insn.addr !204
  %13 = sext i32 %12 to i128, !insn.addr !204
  %14 = call i32 @__asm_movdqa.2(i128 %11), !insn.addr !205
  %15 = sext i32 %14 to i128, !insn.addr !205
  %16 = call i128 @__asm_movdqa(i128 %13), !insn.addr !206
  %17 = call i128 @__asm_movdqa(i128 %15), !insn.addr !207
  %18 = call i128 @__asm_paddd(i128 %16, i128 %17), !insn.addr !208
  %19 = call i32 @__asm_movdqa.2(i128 %18), !insn.addr !209
  %20 = sext i32 %19 to i128, !insn.addr !210
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !210
  %22 = call i32 @__asm_movdqa.2(i128 %21), !insn.addr !211
  %23 = sext i32 %22 to i128, !insn.addr !211
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !212
  %25 = call i32 @__asm_movdqa.2(i128 %24), !insn.addr !213
  %26 = sext i32 %25 to i128, !insn.addr !213
  %27 = inttoptr i32 %arg3 to i128*, !insn.addr !213
  store i128 %26, i128* %27, align 4, !insn.addr !213
  ret i32 0, !insn.addr !214
}

define i32 @call_asm_simd(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %4 = load i32, i32* %0
  %5 = add i32 %4, add (i32 ptrtoint (i32* @global_var_3424 to i32), i32 -7424), !insn.addr !215
  %6 = inttoptr i32 %5 to i32*, !insn.addr !215
  %7 = load i32, i32* %6, align 4, !insn.addr !215
  store i32 %7, i32* %stack_var_-24, align 4, !insn.addr !216
  %8 = add i32 %4, add (i32 ptrtoint (i32* @global_var_3424 to i32), i32 -7408), !insn.addr !217
  %9 = inttoptr i32 %8 to i32*, !insn.addr !217
  %10 = load i32, i32* %9, align 4, !insn.addr !217
  store i32 %10, i32* %stack_var_-40, align 4, !insn.addr !218
  %11 = call i32 @param_asm_simd(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-40, i32* nonnull %stack_var_-56), !insn.addr !219
  %12 = load i32, i32* %stack_var_-56, align 4, !insn.addr !220
  %13 = add i32 %2, %1, !insn.addr !221
  %14 = add i32 %13, %3, !insn.addr !222
  %15 = add i32 %14, %12, !insn.addr !223
  ret i32 %15, !insn.addr !224

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-56, { 1, 0 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
}

define i32 @param_asm_atomic(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c60:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !225
  %1 = add i32 %0, %arg2, !insn.addr !225
  store i32 %1, i32* %arg1, align 4, !insn.addr !225
  ret i32 %1, !insn.addr !226
}

define i32 @param_atomic_c11(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !227
  %1 = load i32, i32* %0, align 4, !insn.addr !227
  %2 = add i32 %1, %arg2, !insn.addr !227
  store i32 %2, i32* %0, align 4, !insn.addr !227
  ret i32 %2, !insn.addr !228
}

define i32 @call_asm_atomic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cc0:
  %stack_var_-12 = alloca i32, align 4
  store i32 10, i32* %stack_var_-12, align 4, !insn.addr !229
  %0 = call i32 @param_asm_atomic(i32* nonnull %stack_var_-12, i32 5), !insn.addr !230
  %1 = load i32, i32* %stack_var_-12, align 4, !insn.addr !231
  %2 = add i32 %1, %0, !insn.addr !232
  ret i32 %2, !insn.addr !233

; uselistorder directives
  uselistorder i32* %stack_var_-12, { 1, 0, 2 }
}

define i32 @param_dynamic_code(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d00:
  %storemerge.reg2mem = alloca i32, !insn.addr !234
  %0 = call i32 @sysconf(i32 30), !insn.addr !235
  %1 = call i32* @mmap(i32* null, i32 %0, i32 7, i32 34, i32 -1, i32 0), !insn.addr !236
  %2 = icmp eq i32* %1, inttoptr (i32 -1 to i32*), !insn.addr !237
  %3 = icmp eq i1 %2, false, !insn.addr !238
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !238
  br i1 %3, label %dec_label_pc_1d7d, label %dec_label_pc_1da1, !insn.addr !238

dec_label_pc_1d7d:                                ; preds = %dec_label_pc_1d00
  %4 = add i32 %arg2, 5, !insn.addr !239
  %5 = call i32 @munmap(i32* %1, i32 %0), !insn.addr !240
  store i32 %4, i32* %storemerge.reg2mem, !insn.addr !241
  br label %dec_label_pc_1da1, !insn.addr !241

dec_label_pc_1da1:                                ; preds = %dec_label_pc_1d00, %dec_label_pc_1d7d
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !242

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 8, 6, 7, 0, 1, 2, 3, 9, 4, 5 }
  uselistorder label %dec_label_pc_1da1, { 1, 0 }
}

define i32 @param_memory_protection(i32 %arg1) local_unnamed_addr {
dec_label_pc_1db0:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !243
  %0 = call i32 @sysconf(i32 30), !insn.addr !244
  %1 = call i32* @mmap(i32* null, i32 %0, i32 3, i32 34, i32 -1, i32 0), !insn.addr !245
  %2 = icmp eq i32* %1, inttoptr (i32 -1 to i32*), !insn.addr !246
  %3 = icmp eq i1 %2, false, !insn.addr !247
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !247
  br i1 %3, label %dec_label_pc_1e2a, label %dec_label_pc_1ef3, !insn.addr !247

dec_label_pc_1e2a:                                ; preds = %dec_label_pc_1db0
  store i32 42, i32* %1, align 4, !insn.addr !248
  %4 = call i32 @mprotect(i32* %1, i32 %0, i32 1), !insn.addr !249
  %5 = icmp eq i32 %4, 0, !insn.addr !250
  br i1 %5, label %dec_label_pc_1e80, label %dec_label_pc_1e5f, !insn.addr !251

dec_label_pc_1e5f:                                ; preds = %dec_label_pc_1e2a
  %6 = call i32 @munmap(i32* nonnull %1, i32 %0), !insn.addr !252
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !253
  br label %dec_label_pc_1ef3, !insn.addr !253

dec_label_pc_1e80:                                ; preds = %dec_label_pc_1e2a
  %7 = load i32, i32* %1, align 4, !insn.addr !254
  %8 = call i32 @mprotect(i32* nonnull %1, i32 %0, i32 3), !insn.addr !255
  %9 = icmp eq i32 %8, 0, !insn.addr !256
  br i1 %9, label %dec_label_pc_1ecf, label %dec_label_pc_1eae, !insn.addr !257

dec_label_pc_1eae:                                ; preds = %dec_label_pc_1e80
  %10 = call i32 @munmap(i32* nonnull %1, i32 %0), !insn.addr !258
  store i32 -3, i32* %stack_var_-12.0.reg2mem, !insn.addr !259
  br label %dec_label_pc_1ef3, !insn.addr !259

dec_label_pc_1ecf:                                ; preds = %dec_label_pc_1e80
  store i32 100, i32* %1, align 4, !insn.addr !260
  %11 = call i32 @munmap(i32* nonnull %1, i32 %0), !insn.addr !261
  store i32 %7, i32* %stack_var_-12.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_1ef3, !insn.addr !262

dec_label_pc_1ef3:                                ; preds = %dec_label_pc_1db0, %dec_label_pc_1ecf, %dec_label_pc_1eae, %dec_label_pc_1e5f
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !263

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 3, 0, 4, 5 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 100, { 3, 0, 1, 2 }
  uselistorder i32 (i32*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i32* (i32*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ef3, { 1, 2, 3, 0 }
}

define i32 @param_clobber_importance(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f00:
  %0 = add i32 %arg2, %arg1, !insn.addr !264
  %1 = mul i32 %0, 2, !insn.addr !265
  ret i32 %1, !insn.addr !266
}

define i32 @call_asm_privileged(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f40:
  %0 = call i32 @param_dynamic_code(i32 10, i32 ptrtoint (i32* @0 to i32)), !insn.addr !267
  %1 = call i32 @param_memory_protection(i32 %0), !insn.addr !268
  %2 = call i32 @param_clobber_importance(i32 3, i32 7), !insn.addr !269
  %3 = icmp eq i32 %0, 15, !insn.addr !270
  %4 = icmp eq i32 %1, 42, !insn.addr !271
  %5 = icmp eq i1 %3, %4
  %6 = icmp eq i32 %2, 20, !insn.addr !272
  %7 = icmp eq i1 %5, %6
  %storemerge = select i1 %7, i32 77, i32 %0
  ret i32 %storemerge, !insn.addr !273

; uselistorder directives
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder i32 3, { 0, 2, 3, 1, 4, 5 }
  uselistorder i32 10, { 0, 5, 6, 1, 2, 3, 4 }
}

define i32 @param_memory_clobber_demo(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint ([18 x i8]* @global_var_3025 to i32), i32 56), !insn.addr !274
  %3 = inttoptr i32 %2 to i32*, !insn.addr !274
  %4 = load i32, i32* %3, align 4, !insn.addr !274
  %5 = add i32 %4, 50, !insn.addr !274
  ret i32 %5, !insn.addr !275
}

define i32 @test_asm_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_2010:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 4603, !insn.addr !276
  %3 = inttoptr i32 %2 to i8*, !insn.addr !277
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !278
  %5 = call i32 @call_asm_basic(i32 ptrtoint (i32* @0 to i32)), !insn.addr !279
  %6 = add i32 %1, 4646, !insn.addr !280
  %7 = inttoptr i32 %6 to i8*, !insn.addr !281
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !282
  %9 = call i32 @call_asm_clobber(i32 ptrtoint (i32* @0 to i32)), !insn.addr !283
  %10 = add i32 %1, 4674, !insn.addr !284
  %11 = inttoptr i32 %10 to i8*, !insn.addr !285
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !286
  %13 = call i32 @call_asm_multi_insn(i32 ptrtoint (i32* @0 to i32)), !insn.addr !287
  %14 = add i32 %1, 4702, !insn.addr !288
  %15 = inttoptr i32 %14 to i8*, !insn.addr !289
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !290
  %17 = call i32 @call_asm_simd(i32 ptrtoint (i32* @0 to i32)), !insn.addr !291
  %18 = add i32 %1, 4730, !insn.addr !292
  %19 = inttoptr i32 %18 to i8*, !insn.addr !293
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !294
  %21 = call i32 @call_asm_atomic(i32 ptrtoint (i32* @0 to i32)), !insn.addr !295
  %22 = add i32 %1, 4758, !insn.addr !296
  %23 = inttoptr i32 %22 to i8*, !insn.addr !297
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !298
  %25 = call i32 @call_asm_privileged(i32 ptrtoint (i32* @0 to i32)), !insn.addr !299
  %26 = add i32 %1, 4786, !insn.addr !300
  %27 = inttoptr i32 %26 to i8*, !insn.addr !301
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !302
  ret i32 %28, !insn.addr !303

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 12036, !insn.addr !304
  %3 = call i32 @test_preprocessing_features(i32 %2), !insn.addr !305
  %4 = call i32 @test_asm_features(i32 ptrtoint (i32* @0 to i32)), !insn.addr !306
  ret i32 0, !insn.addr !307

; uselistorder directives
  uselistorder i32 0, { 3, 15, 16, 11, 12, 4, 5, 13, 6, 17, 9, 0, 1, 2, 8, 10, 18, 7, 14 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !308
  %ebx.0.reg2mem = alloca i32, !insn.addr !308
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !309
  %3 = add i32 %1, 11723, !insn.addr !310
  %4 = inttoptr i32 %3 to i32*, !insn.addr !310
  %5 = load i32, i32* %4, align 4, !insn.addr !310
  %6 = icmp eq i32 %5, -1, !insn.addr !311
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !312
  store i32 -1, i32* %merge.reg2mem, !insn.addr !312
  br i1 %6, label %dec_label_pc_216d, label %dec_label_pc_2160, !insn.addr !312

dec_label_pc_2160:                                ; preds = %dec_label_pc_2130, %dec_label_pc_2160
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !313
  %8 = inttoptr i32 %7 to i32*, !insn.addr !313
  %9 = load i32, i32* %8, align 4, !insn.addr !313
  %10 = icmp eq i32 %9, -1, !insn.addr !314
  %11 = icmp eq i1 %10, false, !insn.addr !315
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !315
  store i32 %9, i32* %merge.reg2mem, !insn.addr !315
  br i1 %11, label %dec_label_pc_2160, label %dec_label_pc_216d, !insn.addr !315

dec_label_pc_216d:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2130
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !316

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 6, 2, 3, 0, 1, 4, 5 }
  uselistorder i32 -1, { 5, 0, 6, 1, 9, 2, 7, 10, 4, 3, 8 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2160, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_217c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !317
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !318
  ret i32 %3, !insn.addr !319

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 25, 28, 27, 24, 23, 22, 21, 40, 29, 30, 41, 44, 43, 42, 20, 45, 39, 31, 26, 19, 48, 49, 34, 33, 32, 46, 18, 50, 37, 36, 35, 17, 16, 15, 14, 51, 13, 12, 11, 10, 9, 8, 7, 38, 6, 5, 4, 3, 47, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @mprotect(i32*, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i32* @mmap(i32*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @munmap(i32*, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i32 @__asm_movaps.1(i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i32 @__asm_movdqa.2(i128) local_unnamed_addr

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
!13 = !{i64 4304}
!14 = !{i64 4335}
!15 = !{i64 4352}
!16 = !{i64 4358}
!17 = !{i64 4363}
!18 = !{i64 4367}
!19 = !{i64 4371}
!20 = !{i64 4384}
!21 = !{i64 4401}
!22 = !{i64 4440}
!23 = !{i64 4448}
!24 = !{i64 4518}
!25 = !{i64 4528}
!26 = !{i64 4536}
!27 = !{i64 4552}
!28 = !{i64 4559}
!29 = !{i64 4561}
!30 = !{i64 4567}
!31 = !{i64 4569}
!32 = !{i64 4582}
!33 = !{i64 4587}
!34 = !{i64 4646}
!35 = !{i64 4651}
!36 = !{i64 4665}
!37 = !{i64 4676}
!38 = !{i64 4684}
!39 = !{i64 4688}
!40 = !{i64 4718}
!41 = !{i64 4750}
!42 = !{i64 4776}
!43 = !{i64 4786}
!44 = !{i64 4815}
!45 = !{i64 4828}
!46 = !{i64 4857}
!47 = !{i64 4863}
!48 = !{i64 4898}
!49 = !{i64 4908}
!50 = !{i64 4925}
!51 = !{i64 4929}
!52 = !{i64 4942}
!53 = !{i64 4968}
!54 = !{i64 4978}
!55 = !{i64 4998}
!56 = !{i64 5002}
!57 = !{i64 5008}
!58 = !{i64 5048}
!59 = !{i64 5058}
!60 = !{i64 5126}
!61 = !{i64 5130}
!62 = !{i64 5160}
!63 = !{i64 5170}
!64 = !{i64 5209}
!65 = !{i64 5218}
!66 = !{i64 5227}
!67 = !{i64 5241}
!68 = !{i64 5243}
!69 = !{i64 5259}
!70 = !{i64 5261}
!71 = !{i64 5274}
!72 = !{i64 5284}
!73 = !{i64 5286}
!74 = !{i64 5296}
!75 = !{i64 5303}
!76 = !{i64 5338}
!77 = !{i64 5348}
!78 = !{i64 5366}
!79 = !{i64 5371}
!80 = !{i64 5404}
!81 = !{i64 5415}
!82 = !{i64 5424}
!83 = !{i64 5438}
!84 = !{i64 5464}
!85 = !{i64 5474}
!86 = !{i64 5526}
!87 = !{i64 5532}
!88 = !{i64 5547}
!89 = !{i64 5563}
!90 = !{i64 5572}
!91 = !{i64 5626}
!92 = !{i64 5636}
!93 = !{i64 5660}
!94 = !{i64 5669}
!95 = !{i64 5678}
!96 = !{i64 5685}
!97 = !{i64 5720}
!98 = !{i64 5730}
!99 = !{i64 5768}
!100 = !{i64 5778}
!101 = !{i64 5798}
!102 = !{i64 5803}
!103 = !{i64 5825}
!104 = !{i64 5835}
!105 = !{i64 5925}
!106 = !{i64 5931}
!107 = !{i64 5957}
!108 = !{i64 5995}
!109 = !{i64 6005}
!110 = !{i64 6040}
!111 = !{i64 6050}
!112 = !{i64 6086}
!113 = !{i64 6092}
!114 = !{i64 6095}
!115 = !{i64 6103}
!116 = !{i64 6111}
!117 = !{i64 6117}
!118 = !{i64 6124}
!119 = !{i64 6132}
!120 = !{i64 6140}
!121 = !{i64 6146}
!122 = !{i64 6153}
!123 = !{i64 6161}
!124 = !{i64 6169}
!125 = !{i64 6175}
!126 = !{i64 6182}
!127 = !{i64 6190}
!128 = !{i64 6198}
!129 = !{i64 6204}
!130 = !{i64 6211}
!131 = !{i64 6219}
!132 = !{i64 6227}
!133 = !{i64 6233}
!134 = !{i64 6240}
!135 = !{i64 6248}
!136 = !{i64 6256}
!137 = !{i64 6262}
!138 = !{i64 6269}
!139 = !{i64 6277}
!140 = !{i64 6285}
!141 = !{i64 6291}
!142 = !{i64 6298}
!143 = !{i64 6306}
!144 = !{i64 6314}
!145 = !{i64 6320}
!146 = !{i64 6327}
!147 = !{i64 6335}
!148 = !{i64 6343}
!149 = !{i64 6349}
!150 = !{i64 6356}
!151 = !{i64 6364}
!152 = !{i64 6372}
!153 = !{i64 6378}
!154 = !{i64 6385}
!155 = !{i64 6393}
!156 = !{i64 6401}
!157 = !{i64 6407}
!158 = !{i64 6414}
!159 = !{i64 6424}
!160 = !{i64 6446}
!161 = !{i64 6467}
!162 = !{i64 6504}
!163 = !{i64 6514}
!164 = !{i64 6528}
!165 = !{i64 6560}
!166 = !{i64 6566}
!167 = !{i64 6569}
!168 = !{i64 6594}
!169 = !{i64 6633}
!170 = !{i64 6654}
!171 = !{i64 6676}
!172 = !{i64 6686}
!173 = !{i64 6688}
!174 = !{i64 6712}
!175 = !{i64 6715}
!176 = !{i64 6721}
!177 = !{i64 6723}
!178 = !{i64 6725}
!179 = !{i64 6726}
!180 = !{i64 6727}
!181 = !{i64 6753}
!182 = !{i64 6768}
!183 = !{i64 6790}
!184 = !{i64 6796}
!185 = !{i64 6843}
!186 = !{i64 6872}
!187 = !{i64 6877}
!188 = !{i64 6883}
!189 = !{i64 6889}
!190 = !{i64 6899}
!191 = !{i64 6905}
!192 = !{i64 6932}
!193 = !{i64 6965}
!194 = !{i64 6968}
!195 = !{i64 6971}
!196 = !{i64 6975}
!197 = !{i64 6981}
!198 = !{i64 7016}
!199 = !{i64 7020}
!200 = !{i64 7034}
!201 = !{i64 7038}
!202 = !{i64 7043}
!203 = !{i64 7048}
!204 = !{i64 7053}
!205 = !{i64 7058}
!206 = !{i64 7063}
!207 = !{i64 7068}
!208 = !{i64 7073}
!209 = !{i64 7077}
!210 = !{i64 7085}
!211 = !{i64 7093}
!212 = !{i64 7098}
!213 = !{i64 7106}
!214 = !{i64 7116}
!215 = !{i64 7139}
!216 = !{i64 7145}
!217 = !{i64 7175}
!218 = !{i64 7181}
!219 = !{i64 7231}
!220 = !{i64 7236}
!221 = !{i64 7239}
!222 = !{i64 7242}
!223 = !{i64 7245}
!224 = !{i64 7253}
!225 = !{i64 7280}
!226 = !{i64 7297}
!227 = !{i64 7336}
!228 = !{i64 7353}
!229 = !{i64 7379}
!230 = !{i64 7400}
!231 = !{i64 7408}
!232 = !{i64 7411}
!233 = !{i64 7419}
!234 = !{i64 7424}
!235 = !{i64 7456}
!236 = !{i64 7515}
!237 = !{i64 7528}
!238 = !{i64 7531}
!239 = !{i64 7555}
!240 = !{i64 7574}
!241 = !{i64 7582}
!242 = !{i64 7593}
!243 = !{i64 7600}
!244 = !{i64 7629}
!245 = !{i64 7688}
!246 = !{i64 7701}
!247 = !{i64 7704}
!248 = !{i64 7734}
!249 = !{i64 7761}
!250 = !{i64 7766}
!251 = !{i64 7769}
!252 = !{i64 7791}
!253 = !{i64 7803}
!254 = !{i64 7814}
!255 = !{i64 7840}
!256 = !{i64 7845}
!257 = !{i64 7848}
!258 = !{i64 7870}
!259 = !{i64 7882}
!260 = !{i64 7893}
!261 = !{i64 7912}
!262 = !{i64 7920}
!263 = !{i64 7931}
!264 = !{i64 7956}
!265 = !{i64 7987}
!266 = !{i64 7994}
!267 = !{i64 8029}
!268 = !{i64 8040}
!269 = !{i64 8066}
!270 = !{i64 8074}
!271 = !{i64 8084}
!272 = !{i64 8094}
!273 = !{i64 8130}
!274 = !{i64 8174}
!275 = !{i64 8198}
!276 = !{i64 8230}
!277 = !{i64 8236}
!278 = !{i64 8239}
!279 = !{i64 8247}
!280 = !{i64 8255}
!281 = !{i64 8261}
!282 = !{i64 8268}
!283 = !{i64 8276}
!284 = !{i64 8284}
!285 = !{i64 8290}
!286 = !{i64 8297}
!287 = !{i64 8305}
!288 = !{i64 8313}
!289 = !{i64 8319}
!290 = !{i64 8326}
!291 = !{i64 8334}
!292 = !{i64 8342}
!293 = !{i64 8348}
!294 = !{i64 8355}
!295 = !{i64 8363}
!296 = !{i64 8371}
!297 = !{i64 8377}
!298 = !{i64 8384}
!299 = !{i64 8392}
!300 = !{i64 8400}
!301 = !{i64 8406}
!302 = !{i64 8413}
!303 = !{i64 8423}
!304 = !{i64 8445}
!305 = !{i64 8461}
!306 = !{i64 8469}
!307 = !{i64 8481}
!308 = !{i64 8496}
!309 = !{i64 8500}
!310 = !{i64 8511}
!311 = !{i64 8517}
!312 = !{i64 8520}
!313 = !{i64 8546}
!314 = !{i64 8552}
!315 = !{i64 8555}
!316 = !{i64 8561}
!317 = !{i64 8580}
!318 = !{i64 8591}
!319 = !{i64 8600}
