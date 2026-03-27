source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_401 = global i32 -922746368
@global_var_200 = global i32 0
@global_var_1f4 = global i32 1
@global_var_29e7 = constant i32 239144974
@global_var_28c8 = constant i32 135151872
@global_var_2805 = constant i32 403589152
@global_var_2794 = constant i32 -4852
@global_var_26b4 = constant i32 -4852
@global_var_261b = constant i32 -1240064
@global_var_25f4 = constant i32 -4836
@global_var_23f7 = local_unnamed_addr constant i32 243967
@global_var_23c7 = constant i32 194815
@global_var_2377 = local_unnamed_addr constant i32 143615
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

define i32 @function_1070(i32 %name) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @sysconf(i32 %name), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1080(i8* %s) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32* @function_1090(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32* @mmap(i32* %addr, i32 %len, i32 %prot, i32 %flags, i32 %fd, i32 %offset), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_10a0(i32* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @munmap(i32* %addr, i32 %len), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10b0() local_unnamed_addr {
dec_label_pc_10b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !11
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10ec(i32 %2), !insn.addr !12
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 12068, !insn.addr !13
  %6 = inttoptr i32 %5 to i32*, !insn.addr !13
  %7 = load i32, i32* %6, align 4, !insn.addr !13
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !14
  %9 = call i32 @__asm_hlt(), !insn.addr !15
  unreachable, !insn.addr !15

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10ec(i32 %arg1) local_unnamed_addr {
dec_label_pc_10ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !16
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !17
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1100:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !18
  %3 = add i32 %1, 12079, !insn.addr !19
  ret i32 %3, !insn.addr !20
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !21
  ret i32 0, !insn.addr !22
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1190:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !23
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !24
  %3 = add i32 %1, 11927, !insn.addr !25
  %4 = inttoptr i32 %3 to i8*, !insn.addr !25
  %5 = load i8, i8* %4, align 1, !insn.addr !25
  %6 = icmp eq i8 %5, 0, !insn.addr !25
  %7 = icmp eq i1 %6, false, !insn.addr !26
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !26
  br i1 %7, label %dec_label_pc_1212, label %dec_label_pc_11b1, !insn.addr !26

dec_label_pc_11b1:                                ; preds = %dec_label_pc_1190
  %8 = add i32 %1, 11859, !insn.addr !27
  %9 = inttoptr i32 %8 to i32*, !insn.addr !27
  %10 = load i32, i32* %9, align 4, !insn.addr !27
  %11 = icmp eq i32 %10, 0, !insn.addr !28
  br i1 %11, label %dec_label_pc_11ce, label %dec_label_pc_11bb, !insn.addr !29

dec_label_pc_11bb:                                ; preds = %dec_label_pc_11b1
  %12 = call i32 @function_10b0(), !insn.addr !30
  br label %dec_label_pc_11ce, !insn.addr !31

dec_label_pc_11ce:                                ; preds = %dec_label_pc_11bb, %dec_label_pc_11b1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !32
  store i8 1, i8* %4, align 1, !insn.addr !33
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !33
  br label %dec_label_pc_1212, !insn.addr !33

dec_label_pc_1212:                                ; preds = %dec_label_pc_11ce, %dec_label_pc_1190
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !34

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32 @register_tm_clones(), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1229:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !36
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_122d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !37
}

define i32 @param_macro_constants(i32 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = sub i32 %arg1, ptrtoint (i32* @global_var_401 to i32), !insn.addr !38
  %1 = xor i32 %arg1, ptrtoint (i32* @global_var_401 to i32), !insn.addr !38
  %2 = xor i32 %0, %arg1, !insn.addr !38
  %3 = and i32 %2, %1, !insn.addr !38
  %4 = icmp slt i32 %3, 0, !insn.addr !38
  %5 = icmp slt i32 %0, 0, !insn.addr !38
  %6 = icmp eq i1 %5, %4, !insn.addr !39
  %7 = select i1 %6, i32 64, i32 ptrtoint (i32* @global_var_200 to i32), !insn.addr !39
  ret i32 %7, !insn.addr !40

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_401 to i32), { 1, 0 }
}

define i32 @call_macro_constants() local_unnamed_addr {
dec_label_pc_1260:
  ret i32 64, !insn.addr !41
}

define i32 @param_macro_functions(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1270:
  %0 = mul i32 %arg1, %arg1, !insn.addr !42
  %1 = sub i32 %arg1, %arg2, !insn.addr !43
  %2 = xor i32 %arg2, %arg1, !insn.addr !43
  %3 = xor i32 %1, %arg1, !insn.addr !43
  %4 = and i32 %3, %2, !insn.addr !43
  %5 = icmp slt i32 %4, 0, !insn.addr !43
  %6 = icmp eq i32 %1, 0, !insn.addr !43
  %7 = icmp slt i32 %1, 0, !insn.addr !43
  %8 = icmp eq i1 %7, %5, !insn.addr !44
  %9 = icmp eq i1 %6, false, !insn.addr !44
  %10 = icmp eq i1 %8, %9, !insn.addr !44
  %11 = select i1 %10, i32 %arg1, i32 %arg2, !insn.addr !44
  %12 = add i32 %11, %0, !insn.addr !45
  ret i32 %12, !insn.addr !46

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 5, 0, 1, 4, 2, 3 }
}

define i32 @call_macro_functions() local_unnamed_addr {
dec_label_pc_1290:
  ret i32 30, !insn.addr !47
}

define i32 @param_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = mul i32 %arg1, 3, !insn.addr !48
  %1 = add i32 %0, 2, !insn.addr !49
  ret i32 %1, !insn.addr !50
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_12b0:
  ret i32 32, !insn.addr !51
}

define i32 @param_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = mul i32 %arg1, 5, !insn.addr !52
  %1 = add i32 %0, 57072, !insn.addr !53
  ret i32 %1, !insn.addr !54
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_12d0:
  ret i32 57122, !insn.addr !55
}

define i32 @param_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = add i32 %arg1, 16, !insn.addr !56
  ret i32 %0, !insn.addr !57
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_12f0:
  ret i32 116, !insn.addr !58
}

define i32 @param_stringize() local_unnamed_addr {
dec_label_pc_1300:
  ret i32 19, !insn.addr !59
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_1310:
  ret i32 19, !insn.addr !60
}

define i32 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1320:
  %0 = mul i32 %arg1, 10, !insn.addr !61
  ret i32 %0, !insn.addr !62
}

define i32 @param_token_paste(i32 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %0 = mul i32 %arg1, 11, !insn.addr !63
  %1 = add i32 %0, 5, !insn.addr !64
  ret i32 %1, !insn.addr !65
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_1340:
  ret i32 60, !insn.addr !66
}

define i32 @param_variadic_macro(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1350:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3320, !insn.addr !67
  %3 = inttoptr i32 %2 to i8*, !insn.addr !68
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !69
  %5 = add i32 %arg2, 50, !insn.addr !70
  ret i32 %5, !insn.addr !71
}

define i32 @call_variadic_macro(i32 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3255, !insn.addr !72
  %3 = inttoptr i32 %2 to i8*, !insn.addr !73
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !74
  ret i32 60, !insn.addr !75
}

define i32 @param_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = mul i32 %arg1, 3, !insn.addr !76
  %1 = add i32 %0, 1, !insn.addr !77
  ret i32 %1, !insn.addr !78
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_13d0:
  ret i32 16, !insn.addr !79
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_13e0:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !80
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_13f0:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !81
}

define i32 @param_builtin_macros(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1400:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3222, !insn.addr !82
  %3 = inttoptr i32 %2 to i8*, !insn.addr !83
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !84
  %5 = add i32 %arg2, 282, !insn.addr !85
  ret i32 %5, !insn.addr !86
}

define i32 @call_builtin_macros(i32 %arg1) local_unnamed_addr {
dec_label_pc_1450:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3142, !insn.addr !87
  %3 = inttoptr i32 %2 to i8*, !insn.addr !88
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !89
  ret i32 382, !insn.addr !90
}

define i32 @test_preprocessing_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3617, !insn.addr !91
  %3 = inttoptr i32 %2 to i8*, !insn.addr !92
  %4 = call i32 @puts(i8* %3), !insn.addr !93
  %5 = add i32 %1, 3107, !insn.addr !94
  %6 = inttoptr i32 %5 to i8*, !insn.addr !95
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !96
  %8 = add i32 %1, 3134, !insn.addr !97
  %9 = inttoptr i32 %8 to i8*, !insn.addr !98
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !99
  %11 = add i32 %1, 3161, !insn.addr !100
  %12 = inttoptr i32 %11 to i8*, !insn.addr !101
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !102
  %14 = add i32 %1, 3188, !insn.addr !103
  %15 = inttoptr i32 %14 to i8*, !insn.addr !104
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !105
  %17 = add i32 %1, 3219, !insn.addr !106
  %18 = inttoptr i32 %17 to i8*, !insn.addr !107
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !108
  %20 = add i32 %1, 3247, !insn.addr !109
  %21 = inttoptr i32 %20 to i8*, !insn.addr !110
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !111
  %23 = add i32 %1, 3289, !insn.addr !112
  %24 = inttoptr i32 %23 to i8*, !insn.addr !113
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !114
  %26 = add i32 %1, 2984, !insn.addr !115
  %27 = inttoptr i32 %26 to i8*, !insn.addr !116
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !117
  %29 = add i32 %1, 3316, !insn.addr !118
  %30 = inttoptr i32 %29 to i8*, !insn.addr !119
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !120
  %32 = add i32 %1, 3343, !insn.addr !121
  %33 = inttoptr i32 %32 to i8*, !insn.addr !122
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !123
  %35 = add i32 %1, 3370, !insn.addr !124
  %36 = inttoptr i32 %35 to i8*, !insn.addr !125
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !126
  %38 = add i32 %1, 3062, !insn.addr !127
  %39 = inttoptr i32 %38 to i8*, !insn.addr !128
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !129
  %41 = add i32 %1, 3398, !insn.addr !130
  %42 = inttoptr i32 %41 to i8*, !insn.addr !131
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !132
  ret i32 %43, !insn.addr !133

; uselistorder directives
  uselistorder i32 %1, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @param_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = add i32 %arg1, 10, !insn.addr !134
  ret i32 %0, !insn.addr !135

; uselistorder directives
  uselistorder i32 10, { 1, 0 }
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_15e0:
  ret i32 15, !insn.addr !136
}

define i32 @param_asm_clobber(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_15f0:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !137
  %eax.01.reg2mem = alloca i32, !insn.addr !137
  %storemerge2.reg2mem = alloca i32, !insn.addr !137
  %0 = icmp sgt i32 %arg2, 0, !insn.addr !138
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.0.lcssa.reg2mem, !insn.addr !138
  br i1 %0, label %dec_label_pc_1601, label %dec_label_pc_1607, !insn.addr !138

dec_label_pc_1601:                                ; preds = %dec_label_pc_15f0, %dec_label_pc_1601
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = mul i32 %storemerge2.reload, 4, !insn.addr !139
  %2 = add i32 %1, %arg1, !insn.addr !139
  %3 = inttoptr i32 %2 to i32*, !insn.addr !139
  %4 = load i32, i32* %3, align 4, !insn.addr !139
  %5 = add i32 %4, %eax.01.reload, !insn.addr !139
  %6 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !140
  %exitcond = icmp eq i32 %6, %arg2
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !138
  store i32 %5, i32* %eax.01.reg2mem, !insn.addr !138
  store i32 %5, i32* %eax.0.lcssa.reg2mem, !insn.addr !138
  br i1 %exitcond, label %dec_label_pc_1607, label %dec_label_pc_1601, !insn.addr !138

dec_label_pc_1607:                                ; preds = %dec_label_pc_1601, %dec_label_pc_15f0
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1601, { 1, 0 }
}

define i32 @call_asm_clobber(i32 %arg1) local_unnamed_addr {
dec_label_pc_1610:
  %0 = alloca i32
  %eax.01.reg2mem = alloca i32, !insn.addr !142
  %storemerge2.reg2mem = alloca i32, !insn.addr !142
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_29e7 to i32), i32 -7396), !insn.addr !143
  %3 = inttoptr i32 %2 to i128*, !insn.addr !143
  %4 = load i128, i128* %3, align 4, !insn.addr !143
  %5 = call i128 @__asm_movups(i128 %4), !insn.addr !143
  %6 = call i32 @__asm_movaps(i128 %5), !insn.addr !144
  store i32 %6, i32* %stack_var_-24, align 4, !insn.addr !144
  %7 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !145
  store i32 0, i32* %storemerge2.reg2mem
  store i32 0, i32* %eax.01.reg2mem
  br label %dec_label_pc_1644

dec_label_pc_1644:                                ; preds = %dec_label_pc_1644, %dec_label_pc_1610
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %8 = mul i32 %storemerge2.reload, 4, !insn.addr !146
  %9 = add i32 %8, %7, !insn.addr !146
  %10 = inttoptr i32 %9 to i32*, !insn.addr !146
  %11 = load i32, i32* %10, align 4, !insn.addr !146
  %12 = add i32 %11, %eax.01.reload, !insn.addr !146
  %13 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !147
  %exitcond = icmp eq i32 %13, 5
  store i32 %13, i32* %storemerge2.reg2mem, !insn.addr !148
  store i32 %12, i32* %eax.01.reg2mem, !insn.addr !148
  br i1 %exitcond, label %dec_label_pc_164a, label %dec_label_pc_1644, !insn.addr !148

dec_label_pc_164a:                                ; preds = %dec_label_pc_1644
  ret i32 %12, !insn.addr !149

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0, 2 }
}

define i32 @param_asm_multi_insn(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1660:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !150
  %eax.01.reg2mem = alloca i32, !insn.addr !150
  %ecx.02.reg2mem = alloca i32, !insn.addr !150
  %edx.03.reg2mem = alloca i32, !insn.addr !150
  %storemerge4.reg2mem = alloca i32, !insn.addr !150
  %0 = icmp eq i32 %arg3, 0, !insn.addr !151
  store i32 %arg3, i32* %storemerge4.reg2mem, !insn.addr !152
  store i32 %arg2, i32* %edx.03.reg2mem, !insn.addr !152
  store i32 %arg1, i32* %ecx.02.reg2mem, !insn.addr !152
  br i1 %0, label %dec_label_pc_167c, label %dec_label_pc_1673, !insn.addr !152

dec_label_pc_1673:                                ; preds = %dec_label_pc_1660, %dec_label_pc_1673
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %edx.03.reload = load i32, i32* %edx.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = inttoptr i32 %edx.03.reload to i8*, !insn.addr !153
  %2 = load i8, i8* %1, align 1, !insn.addr !153
  %3 = zext i8 %2 to i32, !insn.addr !153
  %4 = and i32 %eax.01.reload, -256, !insn.addr !153
  %5 = or i32 %4, %3, !insn.addr !153
  %6 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !154
  store i8 %2, i8* %6, align 1, !insn.addr !154
  %7 = add i32 %ecx.02.reload, 1, !insn.addr !155
  %8 = add i32 %edx.03.reload, 1, !insn.addr !156
  %9 = add i32 %storemerge4.reload, -1, !insn.addr !157
  %10 = icmp eq i32 %9, 0, !insn.addr !151
  store i32 %9, i32* %storemerge4.reg2mem, !insn.addr !152
  store i32 %8, i32* %edx.03.reg2mem, !insn.addr !152
  store i32 %7, i32* %ecx.02.reg2mem, !insn.addr !152
  store i32 %5, i32* %eax.01.reg2mem, !insn.addr !152
  store i32 %5, i32* %eax.0.lcssa.reg2mem, !insn.addr !152
  br i1 %10, label %dec_label_pc_167c, label %dec_label_pc_1673, !insn.addr !152

dec_label_pc_167c:                                ; preds = %dec_label_pc_1673, %dec_label_pc_1660
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !158

; uselistorder directives
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_1673, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_1680:
  %0 = alloca i128
  %1 = alloca i8
  %ecx.02.reg2mem = alloca i32, !insn.addr !159
  %edx.03.reg2mem = alloca i32, !insn.addr !159
  %storemerge4.reg2mem = alloca i32, !insn.addr !159
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-44 = alloca i128, align 8
  %stack_var_-56 = alloca i32, align 4
  store i32 1819043144, i32* %stack_var_-56, align 4, !insn.addr !160
  %4 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !161
  %5 = call i32 @__asm_movaps(i128 %4), !insn.addr !162
  %6 = call i32 @__asm_movaps(i128 %4), !insn.addr !163
  %7 = sext i32 %6 to i128, !insn.addr !163
  store i128 %7, i128* %stack_var_-44, align 8, !insn.addr !163
  %8 = ptrtoint i128* %stack_var_-44 to i32, !insn.addr !164
  %9 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !165
  store i32 9, i32* %storemerge4.reg2mem
  store i32 %9, i32* %edx.03.reg2mem
  store i32 %8, i32* %ecx.02.reg2mem
  br label %dec_label_pc_16bb

dec_label_pc_16bb:                                ; preds = %dec_label_pc_1680, %dec_label_pc_16bb
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %edx.03.reload = load i32, i32* %edx.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %10 = inttoptr i32 %edx.03.reload to i8*, !insn.addr !166
  %11 = load i8, i8* %10, align 1, !insn.addr !166
  %12 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !167
  store i8 %11, i8* %12, align 1, !insn.addr !167
  %13 = add i32 %ecx.02.reload, 1, !insn.addr !168
  %14 = add i32 %edx.03.reload, 1, !insn.addr !169
  %15 = add nsw i32 %storemerge4.reload, -1, !insn.addr !170
  %16 = icmp eq i32 %15, 0, !insn.addr !171
  store i32 %15, i32* %storemerge4.reg2mem, !insn.addr !172
  store i32 %14, i32* %edx.03.reg2mem, !insn.addr !172
  store i32 %13, i32* %ecx.02.reg2mem, !insn.addr !172
  br i1 %16, label %dec_label_pc_16c4, label %dec_label_pc_16bb, !insn.addr !172

dec_label_pc_16c4:                                ; preds = %dec_label_pc_16bb
  %17 = load i128, i128* %stack_var_-44, align 8, !insn.addr !173
  %18 = trunc i128 %17 to i8, !insn.addr !174
  %19 = icmp eq i8 %3, 111
  %20 = icmp eq i8 %18, 72
  %21 = icmp eq i1 %19, %20, !insn.addr !175
  %22 = select i1 %21, i32 42, i32 -1, !insn.addr !176
  ret i32 %22, !insn.addr !177

; uselistorder directives
  uselistorder i128 %4, { 1, 0 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16bb, { 1, 0 }
}

define i32 @param_asm_simd(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = inttoptr i32 %arg1 to i128*, !insn.addr !178
  %1 = load i128, i128* %0, align 4, !insn.addr !178
  %2 = call i128 @__asm_movaps.1(i128 %1), !insn.addr !178
  %3 = inttoptr i32 %arg2 to i128*, !insn.addr !179
  %4 = load i128, i128* %3, align 4, !insn.addr !179
  %5 = call i128 @__asm_movaps.1(i128 %4), !insn.addr !179
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !180
  %7 = call i32 @__asm_movaps(i128 %6), !insn.addr !181
  %8 = sext i32 %7 to i128, !insn.addr !181
  %9 = inttoptr i32 %arg3 to i128*, !insn.addr !181
  store i128 %8, i128* %9, align 4, !insn.addr !181
  ret i32 0, !insn.addr !182
}

define i32 @param_simd_intrinsics(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1710:
  %0 = inttoptr i32 %arg2 to i128*, !insn.addr !183
  %1 = load i128, i128* %0, align 4, !insn.addr !183
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !183
  %3 = inttoptr i32 %arg1 to i128*, !insn.addr !184
  %4 = load i128, i128* %3, align 4, !insn.addr !184
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !184
  %6 = call i32 @__asm_movdqa.2(i128 %5), !insn.addr !185
  %7 = sext i32 %6 to i128, !insn.addr !185
  %8 = inttoptr i32 %arg3 to i128*, !insn.addr !185
  store i128 %7, i128* %8, align 4, !insn.addr !185
  ret i32 0, !insn.addr !186
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1730:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = add i32 %4, add (i32 ptrtoint (i32* @global_var_28c8 to i32), i32 -8144), !insn.addr !187
  %6 = inttoptr i32 %5 to i128*, !insn.addr !187
  %7 = load i128, i128* %6, align 4, !insn.addr !187
  %8 = call i128 @__asm_movups(i128 %7), !insn.addr !187
  %9 = call i32 @__asm_movaps(i128 %8), !insn.addr !188
  %10 = sext i32 %9 to i128, !insn.addr !188
  %11 = add i32 %4, add (i32 ptrtoint (i32* @global_var_28c8 to i32), i32 -8128), !insn.addr !189
  %12 = inttoptr i32 %11 to i128*, !insn.addr !189
  %13 = load i128, i128* %12, align 4, !insn.addr !189
  %14 = call i128 @__asm_movups(i128 %13), !insn.addr !189
  %15 = call i32 @__asm_movaps(i128 %14), !insn.addr !190
  %16 = sext i32 %15 to i128, !insn.addr !190
  %17 = call i128 @__asm_movaps.1(i128 %10), !insn.addr !191
  %18 = call i128 @__asm_movaps.1(i128 %16), !insn.addr !192
  %19 = call i128 @__asm_paddd(i128 %17, i128 %18), !insn.addr !193
  %20 = call i32 @__asm_movaps(i128 %19), !insn.addr !194
  %21 = add i32 %2, %1, !insn.addr !195
  %22 = add i32 %21, %3, !insn.addr !196
  %23 = add i32 %22, %20, !insn.addr !197
  ret i32 %23, !insn.addr !198

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
}

define i32 @param_asm_atomic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1790:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !199
  %1 = load i32, i32* %0, align 4, !insn.addr !199
  %2 = add i32 %1, %arg2, !insn.addr !199
  store i32 %2, i32* %0, align 4, !insn.addr !199
  ret i32 %2, !insn.addr !200
}

define i32 @param_atomic_c11(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !201
  %1 = load i32, i32* %0, align 4, !insn.addr !201
  %2 = add i32 %1, %arg2, !insn.addr !201
  store i32 %2, i32* %0, align 4, !insn.addr !201
  ret i32 %2, !insn.addr !202
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_17d0:
  ret i32 30, !insn.addr !203
}

define i32 @param_dynamic_code(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17f0:
  %0 = alloca i128
  %1 = alloca i32
  %edi.0.reg2mem = alloca i32, !insn.addr !204
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = call i32 @sysconf(i32 30), !insn.addr !205
  %5 = add i32 %3, add (i32 ptrtoint (i32* @global_var_2805 to i32), i32 -8176), !insn.addr !206
  %6 = inttoptr i32 %5 to i128*, !insn.addr !206
  %7 = load i128, i128* %6, align 4, !insn.addr !206
  %8 = call i128 @__asm_movaps.1(i128 %7), !insn.addr !206
  call void @__asm_movups.3(i128 %2, i128 %8), !insn.addr !207
  %9 = call i32* @mmap(i32* null, i32 %4, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !208
  %10 = icmp eq i32* %9, inttoptr (i32 -1 to i32*), !insn.addr !209
  store i32 -1, i32* %edi.0.reg2mem, !insn.addr !210
  br i1 %10, label %dec_label_pc_184b, label %dec_label_pc_1831, !insn.addr !210

dec_label_pc_1831:                                ; preds = %dec_label_pc_17f0
  %11 = add i32 %arg2, 5, !insn.addr !211
  %12 = call i32 @munmap(i32* %9, i32 %4), !insn.addr !212
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_184b, !insn.addr !213

dec_label_pc_184b:                                ; preds = %dec_label_pc_17f0, %dec_label_pc_1831
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  ret i32 %edi.0.reload, !insn.addr !214

; uselistorder directives
  uselistorder i32* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_184b, { 1, 0 }
}

define i32 @param_memory_protection(i32 %arg1) local_unnamed_addr {
dec_label_pc_1860:
  %0 = alloca i128
  %1 = alloca i32
  %ebp.1.reg2mem = alloca i32, !insn.addr !215
  %ebp.0.reg2mem = alloca i32, !insn.addr !215
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = call i32 @sysconf(i32 30), !insn.addr !216
  %5 = add i32 %3, add (i32 ptrtoint (i32* @global_var_2794 to i32), i32 -8160), !insn.addr !217
  %6 = inttoptr i32 %5 to i128*, !insn.addr !217
  %7 = load i128, i128* %6, align 4, !insn.addr !217
  %8 = call i128 @__asm_movaps.1(i128 %7), !insn.addr !217
  call void @__asm_movups.3(i128 %2, i128 %8), !insn.addr !218
  %9 = call i32* @mmap(i32* null, i32 %4, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !219
  %10 = icmp eq i32* %9, inttoptr (i32 -1 to i32*), !insn.addr !220
  store i32 -1, i32* %ebp.1.reg2mem, !insn.addr !221
  br i1 %10, label %dec_label_pc_1907, label %dec_label_pc_18a2, !insn.addr !221

dec_label_pc_18a2:                                ; preds = %dec_label_pc_1860
  store i32 42, i32* %9, align 4, !insn.addr !222
  %11 = call i32 @mprotect(i32* %9, i32 %4, i32 1), !insn.addr !223
  %12 = icmp eq i32 %11, 0, !insn.addr !224
  %13 = icmp eq i1 %12, false, !insn.addr !225
  store i32 -2, i32* %ebp.0.reg2mem, !insn.addr !225
  br i1 %13, label %dec_label_pc_18f4, label %dec_label_pc_18c7, !insn.addr !225

dec_label_pc_18c7:                                ; preds = %dec_label_pc_18a2
  %14 = load i32, i32* %9, align 4, !insn.addr !226
  %15 = call i32 @mprotect(i32* %9, i32 %4, i32 3), !insn.addr !227
  %16 = icmp eq i32 %15, 0, !insn.addr !228
  %17 = icmp eq i1 %16, false, !insn.addr !229
  store i32 -3, i32* %ebp.0.reg2mem, !insn.addr !229
  br i1 %17, label %dec_label_pc_18f4, label %dec_label_pc_18ea, !insn.addr !229

dec_label_pc_18ea:                                ; preds = %dec_label_pc_18c7
  store i32 100, i32* %9, align 4, !insn.addr !230
  store i32 %14, i32* %ebp.0.reg2mem, !insn.addr !231
  br label %dec_label_pc_18f4, !insn.addr !231

dec_label_pc_18f4:                                ; preds = %dec_label_pc_18ea, %dec_label_pc_18c7, %dec_label_pc_18a2
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %18 = call i32 @munmap(i32* %9, i32 %4), !insn.addr !232
  store i32 %ebp.0.reload, i32* %ebp.1.reg2mem, !insn.addr !233
  br label %dec_label_pc_1907, !insn.addr !233

dec_label_pc_1907:                                ; preds = %dec_label_pc_1860, %dec_label_pc_18f4
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  ret i32 %ebp.1.reload, !insn.addr !234

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 2, 3 }
  uselistorder i32* %ebp.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1907, { 1, 0 }
}

define i32 @param_clobber_importance(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1920:
  %0 = add i32 %arg2, %arg1, !insn.addr !235
  %1 = mul i32 %0, 2, !insn.addr !236
  ret i32 %1, !insn.addr !237
}

define i32 @call_asm_privileged(i32 %arg1) local_unnamed_addr {
dec_label_pc_1940:
  %0 = alloca i128
  %1 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !238
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = call i32 @sysconf(i32 30), !insn.addr !239
  %5 = add i32 %3, add (i32 ptrtoint (i32* @global_var_26b4 to i32), i32 -8176), !insn.addr !240
  %6 = inttoptr i32 %5 to i128*, !insn.addr !240
  %7 = load i128, i128* %6, align 4, !insn.addr !240
  %8 = call i128 @__asm_movaps.1(i128 %7), !insn.addr !240
  call void @__asm_movups.3(i128 %2, i128 %8), !insn.addr !241
  %9 = call i32* @mmap(i32* null, i32 %4, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !242
  %10 = icmp eq i32* %9, inttoptr (i32 -1 to i32*), !insn.addr !243
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !244
  br i1 %10, label %dec_label_pc_199c, label %dec_label_pc_1984, !insn.addr !244

dec_label_pc_1984:                                ; preds = %dec_label_pc_1940
  %11 = call i32 @munmap(i32* %9, i32 %4), !insn.addr !245
  store i32 15, i32* %storemerge.reg2mem, !insn.addr !246
  br label %dec_label_pc_199c, !insn.addr !246

dec_label_pc_199c:                                ; preds = %dec_label_pc_1940, %dec_label_pc_1984
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %12 = call i32 @param_memory_protection(i32 ptrtoint (i32* @0 to i32)), !insn.addr !247
  %13 = icmp eq i32 %12, 42, !insn.addr !248
  %14 = icmp eq i1 %13, false, !insn.addr !249
  %15 = or i1 %10, %14
  %16 = select i1 %15, i32 %storemerge.reload, i32 77, !insn.addr !250
  ret i32 %16, !insn.addr !251

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder label %dec_label_pc_199c, { 1, 0 }
}

define i32 @param_memory_clobber_demo(i32 %arg1) local_unnamed_addr {
dec_label_pc_19e0:
  %0 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_261b to i32), i32 48), !insn.addr !252
  %1 = inttoptr i32 %0 to i32*, !insn.addr !252
  %2 = load i32, i32* %1, align 4, !insn.addr !252
  %3 = add i32 %2, 50, !insn.addr !252
  ret i32 %3, !insn.addr !253
}

define i32 @test_asm_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i128
  %1 = alloca i32
  %ecx.04.reg2mem = alloca i32, !insn.addr !254
  %edx.05.reg2mem = alloca i32, !insn.addr !254
  %ebp.06.reg2mem = alloca i32, !insn.addr !254
  %2 = load i128, i128* %0
  %stack_var_-88 = alloca i128, align 8
  %stack_var_-72 = alloca i128, align 8
  %3 = load i32, i32* %1
  %4 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7440), !insn.addr !255
  %5 = inttoptr i32 %4 to i8*, !insn.addr !256
  %6 = call i32 @puts(i8* %5), !insn.addr !257
  %7 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7647), !insn.addr !258
  %8 = inttoptr i32 %7 to i8*, !insn.addr !259
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !260
  %10 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7396), !insn.addr !261
  %11 = inttoptr i32 %10 to i128*, !insn.addr !261
  %12 = load i128, i128* %11, align 4, !insn.addr !261
  %13 = call i128 @__asm_movups(i128 %12), !insn.addr !261
  %14 = call i32 @__asm_movaps(i128 %13), !insn.addr !262
  %15 = sext i32 %14 to i128, !insn.addr !262
  store i128 %15, i128* %stack_var_-72, align 8, !insn.addr !262
  %16 = ptrtoint i128* %stack_var_-72 to i32, !insn.addr !263
  %17 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7619), !insn.addr !264
  %18 = inttoptr i32 %17 to i8*, !insn.addr !265
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !266
  store i128 1819043144, i128* %stack_var_-88, align 8, !insn.addr !267
  %20 = call i128 @__asm_xorps(i128 %13, i128 %13), !insn.addr !268
  %21 = call i32 @__asm_movaps(i128 %20), !insn.addr !269
  %22 = call i32 @__asm_movaps(i128 %20), !insn.addr !270
  %23 = sext i32 %22 to i128, !insn.addr !270
  store i128 %23, i128* %stack_var_-72, align 8, !insn.addr !270
  %24 = ptrtoint i128* %stack_var_-88 to i32, !insn.addr !271
  store i32 %24, i32* %ebp.06.reg2mem
  store i32 %16, i32* %edx.05.reg2mem
  store i32 9, i32* %ecx.04.reg2mem
  br label %dec_label_pc_1ab0

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1a00, %dec_label_pc_1ab0
  %ecx.04.reload = load i32, i32* %ecx.04.reg2mem
  %edx.05.reload = load i32, i32* %edx.05.reg2mem
  %ebp.06.reload = load i32, i32* %ebp.06.reg2mem
  %25 = inttoptr i32 %ebp.06.reload to i8*, !insn.addr !272
  %26 = load i8, i8* %25, align 1, !insn.addr !272
  %27 = inttoptr i32 %edx.05.reload to i8*, !insn.addr !273
  store i8 %26, i8* %27, align 1, !insn.addr !273
  %28 = add i32 %edx.05.reload, 1, !insn.addr !274
  %29 = add i32 %ebp.06.reload, 1, !insn.addr !275
  %30 = add nsw i32 %ecx.04.reload, -1, !insn.addr !276
  %31 = icmp eq i32 %30, 0, !insn.addr !277
  store i32 %29, i32* %ebp.06.reg2mem, !insn.addr !278
  store i32 %28, i32* %edx.05.reg2mem, !insn.addr !278
  store i32 %30, i32* %ecx.04.reg2mem, !insn.addr !278
  br i1 %31, label %dec_label_pc_1aba, label %dec_label_pc_1ab0, !insn.addr !278

dec_label_pc_1aba:                                ; preds = %dec_label_pc_1ab0
  %32 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7591), !insn.addr !279
  %33 = inttoptr i32 %32 to i8*, !insn.addr !280
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !281
  %35 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -8144), !insn.addr !282
  %36 = inttoptr i32 %35 to i128*, !insn.addr !282
  %37 = load i128, i128* %36, align 4, !insn.addr !282
  %38 = call i128 @__asm_movups(i128 %37), !insn.addr !282
  %39 = call i32 @__asm_movaps(i128 %38), !insn.addr !283
  %40 = sext i32 %39 to i128, !insn.addr !283
  store i128 %40, i128* %stack_var_-72, align 8, !insn.addr !283
  %41 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -8128), !insn.addr !284
  %42 = inttoptr i32 %41 to i128*, !insn.addr !284
  %43 = load i128, i128* %42, align 4, !insn.addr !284
  %44 = call i128 @__asm_movups(i128 %43), !insn.addr !284
  %45 = call i32 @__asm_movaps(i128 %44), !insn.addr !285
  %46 = sext i32 %45 to i128, !insn.addr !285
  store i128 %46, i128* %stack_var_-88, align 8, !insn.addr !285
  %47 = load i128, i128* %stack_var_-72, align 8, !insn.addr !286
  %48 = call i128 @__asm_movaps.1(i128 %47), !insn.addr !286
  %49 = load i128, i128* %stack_var_-88, align 8, !insn.addr !287
  %50 = mul i128 %49, 18446744073709551615
  %51 = ashr exact i128 %50, 96, !insn.addr !287
  %52 = call i128 @__asm_movaps.1(i128 %51), !insn.addr !287
  %53 = call i128 @__asm_paddd(i128 %48, i128 %52), !insn.addr !288
  %54 = call i32 @__asm_movaps(i128 %53), !insn.addr !289
  %55 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7563), !insn.addr !290
  %56 = inttoptr i32 %55 to i8*, !insn.addr !291
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !292
  store i128 15, i128* %stack_var_-72, align 8, !insn.addr !293
  %58 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7535), !insn.addr !294
  %59 = inttoptr i32 %58 to i8*, !insn.addr !295
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !296
  %61 = call i32 @sysconf(i32 30), !insn.addr !297
  %62 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -8176), !insn.addr !298
  %63 = inttoptr i32 %62 to i128*, !insn.addr !298
  %64 = load i128, i128* %63, align 4, !insn.addr !298
  %65 = call i128 @__asm_movaps.1(i128 %64), !insn.addr !298
  call void @__asm_movups.3(i128 %2, i128 %65), !insn.addr !299
  %66 = call i32* @mmap(i32* null, i32 %61, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !300
  %67 = icmp eq i32* %66, inttoptr (i32 -1 to i32*), !insn.addr !301
  br i1 %67, label %dec_label_pc_1ba0, label %dec_label_pc_1b8f, !insn.addr !302

dec_label_pc_1b8f:                                ; preds = %dec_label_pc_1aba
  %68 = call i32 @munmap(i32* %66, i32 %61), !insn.addr !303
  br label %dec_label_pc_1ba0, !insn.addr !304

dec_label_pc_1ba0:                                ; preds = %dec_label_pc_1b8f, %dec_label_pc_1aba
  %69 = call i32 @param_memory_protection(i32 ptrtoint (i32* @0 to i32)), !insn.addr !305
  %70 = add i32 %3, add (i32 ptrtoint (i32* @global_var_25f4 to i32), i32 -7507), !insn.addr !306
  %71 = inttoptr i32 %70 to i8*, !insn.addr !307
  %72 = call i32 (i8*, ...) @printf(i8* %71), !insn.addr !308
  ret i32 %72, !insn.addr !309

; uselistorder directives
  uselistorder i128 %20, { 1, 0 }
  uselistorder i128 %13, { 1, 0, 2 }
  uselistorder i32 %3, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %stack_var_-88, { 3, 2, 1, 0 }
  uselistorder i32* %ebp.06.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.05.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.04.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32)* @param_memory_protection, { 1, 0 }
  uselistorder i32 (i32*, i32)* @munmap, { 3, 2, 1, 0, 4 }
  uselistorder i32* (i32*, i32, i32, i32, i32, i32)* @mmap, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32)* @sysconf, { 3, 2, 1, 0, 4 }
  uselistorder i32 30, { 2, 3, 4, 5, 0, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 23 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1ab0, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1c00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_preprocessing_features(i32 %1), !insn.addr !310
  %3 = call i32 @test_asm_features(i32 ptrtoint (i32* @0 to i32)), !insn.addr !311
  ret i32 0, !insn.addr !312

; uselistorder directives
  uselistorder i32 0, { 5, 12, 13, 14, 6, 7, 15, 16, 10, 0, 1, 2, 3, 4, 9, 17, 18, 19, 20, 21, 22, 8, 11 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1c30:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !313
  %ebx.0.reg2mem = alloca i32, !insn.addr !313
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !314
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_23c7 to i32), i32 -252), !insn.addr !315
  %4 = inttoptr i32 %3 to i32*, !insn.addr !315
  %5 = load i32, i32* %4, align 4, !insn.addr !315
  %6 = icmp eq i32 %5, -1, !insn.addr !316
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !317
  store i32 -1, i32* %merge.reg2mem, !insn.addr !317
  br i1 %6, label %dec_label_pc_1c6d, label %dec_label_pc_1c60, !insn.addr !317

dec_label_pc_1c60:                                ; preds = %dec_label_pc_1c30, %dec_label_pc_1c60
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !318
  %8 = inttoptr i32 %7 to i32*, !insn.addr !318
  %9 = load i32, i32* %8, align 4, !insn.addr !318
  %10 = icmp eq i32 %9, -1, !insn.addr !319
  %11 = icmp eq i1 %10, false, !insn.addr !320
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !320
  store i32 %9, i32* %merge.reg2mem, !insn.addr !320
  br i1 %11, label %dec_label_pc_1c60, label %dec_label_pc_1c6d, !insn.addr !320

dec_label_pc_1c6d:                                ; preds = %dec_label_pc_1c60, %dec_label_pc_1c30
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !321

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 -1, { 4, 0, 5, 6, 1, 2, 3, 7, 10, 8, 9 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1c60, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1c7c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !322
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !323
  ret i32 %3, !insn.addr !324

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 27, 30, 29, 26, 25, 60, 61, 55, 53, 33, 32, 31, 24, 4, 34, 23, 3, 52, 36, 35, 22, 2, 37, 21, 1, 20, 62, 63, 57, 56, 40, 39, 38, 28, 0, 64, 65, 45, 44, 43, 42, 41, 66, 58, 47, 46, 19, 67, 50, 49, 48, 18, 17, 16, 68, 15, 14, 13, 12, 51, 11, 10, 9, 8, 59, 7, 6, 5, 54 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @mprotect(i32*, i32, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @sysconf(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @mmap(i32*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @munmap(i32*, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movups(i128) local_unnamed_addr

declare i32 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i128 @__asm_movaps.1(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i32 @__asm_movdqa.2(i128) local_unnamed_addr

declare void @__asm_movups.3(i128, i128) local_unnamed_addr

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
!12 = !{i64 4303}
!13 = !{i64 4320}
!14 = !{i64 4326}
!15 = !{i64 4331}
!16 = !{i64 4335}
!17 = !{i64 4339}
!18 = !{i64 4352}
!19 = !{i64 4369}
!20 = !{i64 4408}
!21 = !{i64 4416}
!22 = !{i64 4486}
!23 = !{i64 4496}
!24 = !{i64 4504}
!25 = !{i64 4520}
!26 = !{i64 4527}
!27 = !{i64 4529}
!28 = !{i64 4535}
!29 = !{i64 4537}
!30 = !{i64 4550}
!31 = !{i64 4555}
!32 = !{i64 4614}
!33 = !{i64 4619}
!34 = !{i64 4633}
!35 = !{i64 4644}
!36 = !{i64 4652}
!37 = !{i64 4656}
!38 = !{i64 4672}
!39 = !{i64 4690}
!40 = !{i64 4693}
!41 = !{i64 4709}
!42 = !{i64 4730}
!43 = !{i64 4733}
!44 = !{i64 4735}
!45 = !{i64 4738}
!46 = !{i64 4740}
!47 = !{i64 4757}
!48 = !{i64 4772}
!49 = !{i64 4775}
!50 = !{i64 4778}
!51 = !{i64 4789}
!52 = !{i64 4804}
!53 = !{i64 4807}
!54 = !{i64 4812}
!55 = !{i64 4821}
!56 = !{i64 4836}
!57 = !{i64 4839}
!58 = !{i64 4853}
!59 = !{i64 4869}
!60 = !{i64 4885}
!61 = !{i64 4902}
!62 = !{i64 4905}
!63 = !{i64 4919}
!64 = !{i64 4922}
!65 = !{i64 4925}
!66 = !{i64 4933}
!67 = !{i64 4963}
!68 = !{i64 4978}
!69 = !{i64 4979}
!70 = !{i64 4987}
!71 = !{i64 4997}
!72 = !{i64 5024}
!73 = !{i64 5036}
!74 = !{i64 5037}
!75 = !{i64 5054}
!76 = !{i64 5060}
!77 = !{i64 5063}
!78 = !{i64 5066}
!79 = !{i64 5077}
!80 = !{i64 5093}
!81 = !{i64 5109}
!82 = !{i64 5162}
!83 = !{i64 5177}
!84 = !{i64 5178}
!85 = !{i64 5191}
!86 = !{i64 5198}
!87 = !{i64 5242}
!88 = !{i64 5257}
!89 = !{i64 5258}
!90 = !{i64 5274}
!91 = !{i64 5298}
!92 = !{i64 5304}
!93 = !{i64 5305}
!94 = !{i64 5313}
!95 = !{i64 5321}
!96 = !{i64 5322}
!97 = !{i64 5330}
!98 = !{i64 5338}
!99 = !{i64 5339}
!100 = !{i64 5347}
!101 = !{i64 5355}
!102 = !{i64 5356}
!103 = !{i64 5364}
!104 = !{i64 5375}
!105 = !{i64 5376}
!106 = !{i64 5384}
!107 = !{i64 5392}
!108 = !{i64 5393}
!109 = !{i64 5401}
!110 = !{i64 5409}
!111 = !{i64 5410}
!112 = !{i64 5418}
!113 = !{i64 5426}
!114 = !{i64 5427}
!115 = !{i64 5435}
!116 = !{i64 5447}
!117 = !{i64 5448}
!118 = !{i64 5456}
!119 = !{i64 5464}
!120 = !{i64 5465}
!121 = !{i64 5473}
!122 = !{i64 5481}
!123 = !{i64 5482}
!124 = !{i64 5490}
!125 = !{i64 5501}
!126 = !{i64 5502}
!127 = !{i64 5534}
!128 = !{i64 5549}
!129 = !{i64 5550}
!130 = !{i64 5558}
!131 = !{i64 5569}
!132 = !{i64 5570}
!133 = !{i64 5581}
!134 = !{i64 5590}
!135 = !{i64 5597}
!136 = !{i64 5614}
!137 = !{i64 5616}
!138 = !{i64 5631}
!139 = !{i64 5633}
!140 = !{i64 5636}
!141 = !{i64 5644}
!142 = !{i64 5648}
!143 = !{i64 5674}
!144 = !{i64 5681}
!145 = !{i64 5685}
!146 = !{i64 5700}
!147 = !{i64 5703}
!148 = !{i64 5698}
!149 = !{i64 5714}
!150 = !{i64 5728}
!151 = !{i64 5742}
!152 = !{i64 5745}
!153 = !{i64 5747}
!154 = !{i64 5749}
!155 = !{i64 5751}
!156 = !{i64 5752}
!157 = !{i64 5753}
!158 = !{i64 5757}
!159 = !{i64 5760}
!160 = !{i64 5779}
!161 = !{i64 5787}
!162 = !{i64 5790}
!163 = !{i64 5795}
!164 = !{i64 5800}
!165 = !{i64 5804}
!166 = !{i64 5819}
!167 = !{i64 5821}
!168 = !{i64 5823}
!169 = !{i64 5824}
!170 = !{i64 5825}
!171 = !{i64 5814}
!172 = !{i64 5817}
!173 = !{i64 5828}
!174 = !{i64 5836}
!175 = !{i64 5841}
!176 = !{i64 5853}
!177 = !{i64 5860}
!178 = !{i64 5884}
!179 = !{i64 5887}
!180 = !{i64 5890}
!181 = !{i64 5894}
!182 = !{i64 5899}
!183 = !{i64 5916}
!184 = !{i64 5920}
!185 = !{i64 5924}
!186 = !{i64 5930}
!187 = !{i64 5951}
!188 = !{i64 5958}
!189 = !{i64 5963}
!190 = !{i64 5970}
!191 = !{i64 5985}
!192 = !{i64 5988}
!193 = !{i64 5991}
!194 = !{i64 5995}
!195 = !{i64 6002}
!196 = !{i64 6005}
!197 = !{i64 6009}
!198 = !{i64 6016}
!199 = !{i64 6042}
!200 = !{i64 6048}
!201 = !{i64 6074}
!202 = !{i64 6080}
!203 = !{i64 6124}
!204 = !{i64 6128}
!205 = !{i64 6153}
!206 = !{i64 6160}
!207 = !{i64 6167}
!208 = !{i64 6183}
!209 = !{i64 6188}
!210 = !{i64 6191}
!211 = !{i64 6197}
!212 = !{i64 6207}
!213 = !{i64 6212}
!214 = !{i64 6227}
!215 = !{i64 6240}
!216 = !{i64 6266}
!217 = !{i64 6273}
!218 = !{i64 6280}
!219 = !{i64 6296}
!220 = !{i64 6301}
!221 = !{i64 6304}
!222 = !{i64 6308}
!223 = !{i64 6329}
!224 = !{i64 6339}
!225 = !{i64 6341}
!226 = !{i64 6343}
!227 = !{i64 6364}
!228 = !{i64 6374}
!229 = !{i64 6376}
!230 = !{i64 6378}
!231 = !{i64 6384}
!232 = !{i64 6395}
!233 = !{i64 6400}
!234 = !{i64 6416}
!235 = !{i64 6444}
!236 = !{i64 6454}
!237 = !{i64 6458}
!238 = !{i64 6464}
!239 = !{i64 6490}
!240 = !{i64 6497}
!241 = !{i64 6504}
!242 = !{i64 6520}
!243 = !{i64 6527}
!244 = !{i64 6530}
!245 = !{i64 6539}
!246 = !{i64 6549}
!247 = !{i64 6556}
!248 = !{i64 6598}
!249 = !{i64 6605}
!250 = !{i64 6611}
!251 = !{i64 6621}
!252 = !{i64 6643}
!253 = !{i64 6653}
!254 = !{i64 6656}
!255 = !{i64 6675}
!256 = !{i64 6681}
!257 = !{i64 6684}
!258 = !{i64 6705}
!259 = !{i64 6711}
!260 = !{i64 6714}
!261 = !{i64 6729}
!262 = !{i64 6736}
!263 = !{i64 6741}
!264 = !{i64 6765}
!265 = !{i64 6771}
!266 = !{i64 6774}
!267 = !{i64 6794}
!268 = !{i64 6802}
!269 = !{i64 6805}
!270 = !{i64 6810}
!271 = !{i64 6815}
!272 = !{i64 6832}
!273 = !{i64 6835}
!274 = !{i64 6837}
!275 = !{i64 6838}
!276 = !{i64 6839}
!277 = !{i64 6827}
!278 = !{i64 6830}
!279 = !{i64 6874}
!280 = !{i64 6880}
!281 = !{i64 6883}
!282 = !{i64 6888}
!283 = !{i64 6895}
!284 = !{i64 6900}
!285 = !{i64 6907}
!286 = !{i64 6920}
!287 = !{i64 6923}
!288 = !{i64 6926}
!289 = !{i64 6930}
!290 = !{i64 6953}
!291 = !{i64 6959}
!292 = !{i64 6962}
!293 = !{i64 6975}
!294 = !{i64 6992}
!295 = !{i64 6998}
!296 = !{i64 7001}
!297 = !{i64 7013}
!298 = !{i64 7020}
!299 = !{i64 7027}
!300 = !{i64 7043}
!301 = !{i64 7050}
!302 = !{i64 7053}
!303 = !{i64 7062}
!304 = !{i64 7067}
!305 = !{i64 7072}
!306 = !{i64 7141}
!307 = !{i64 7147}
!308 = !{i64 7154}
!309 = !{i64 7166}
!310 = !{i64 7184}
!311 = !{i64 7189}
!312 = !{i64 7200}
!313 = !{i64 7216}
!314 = !{i64 7220}
!315 = !{i64 7231}
!316 = !{i64 7237}
!317 = !{i64 7240}
!318 = !{i64 7266}
!319 = !{i64 7272}
!320 = !{i64 7275}
!321 = !{i64 7281}
!322 = !{i64 7300}
!323 = !{i64 7311}
!324 = !{i64 7320}
