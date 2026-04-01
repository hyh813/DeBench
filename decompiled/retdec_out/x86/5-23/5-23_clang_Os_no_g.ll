source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_401 = global i32 -922746368
@global_var_200 = global i32 0
@global_var_1f4 = global i32 1
@global_var_2aa8 = constant i32 1091833345
@global_var_29b6 = constant i32 68043016
@global_var_291e = constant i32 0
@global_var_28bb = constant i32 266240
@global_var_27f1 = local_unnamed_addr constant i32 1092357708
@global_var_2799 = constant i32 1
@global_var_2774 = constant i32 239150094
@global_var_2604 = local_unnamed_addr constant i32 344
@global_var_25d7 = constant i32 4096
@global_var_2587 = local_unnamed_addr constant i32 4096
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
dec_label_pc_1234:
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
dec_label_pc_124a:
  ret i32 64, !insn.addr !41
}

define i32 @param_macro_functions(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1250:
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
dec_label_pc_1265:
  ret i32 30, !insn.addr !47
}

define i32 @param_conditional_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_126b:
  %0 = mul i32 %arg1, 3, !insn.addr !48
  %1 = add i32 %0, 2, !insn.addr !49
  ret i32 %1, !insn.addr !50
}

define i32 @call_conditional_compile() local_unnamed_addr {
dec_label_pc_1276:
  ret i32 32, !insn.addr !51
}

define i32 @param_multi_branch_compile(i32 %arg1) local_unnamed_addr {
dec_label_pc_127c:
  %0 = mul i32 %arg1, 5, !insn.addr !52
  %1 = add i32 %0, 57072, !insn.addr !53
  ret i32 %1, !insn.addr !54
}

define i32 @call_multi_branch_compile() local_unnamed_addr {
dec_label_pc_1289:
  ret i32 57122, !insn.addr !55
}

define i32 @param_macro_recursion(i32 %arg1) local_unnamed_addr {
dec_label_pc_128f:
  %0 = add i32 %arg1, 16, !insn.addr !56
  ret i32 %0, !insn.addr !57
}

define i32 @call_macro_recursion() local_unnamed_addr {
dec_label_pc_1297:
  ret i32 116, !insn.addr !58
}

define i32 @param_stringize() local_unnamed_addr {
dec_label_pc_129d:
  ret i32 19, !insn.addr !59
}

define i32 @call_stringize() local_unnamed_addr {
dec_label_pc_12a3:
  ret i32 19, !insn.addr !60
}

define i32 @my_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_12a9:
  %0 = mul i32 %arg1, 10, !insn.addr !61
  ret i32 %0, !insn.addr !62
}

define i32 @param_token_paste(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b3:
  %0 = mul i32 %arg1, 11, !insn.addr !63
  %1 = add i32 %0, 5, !insn.addr !64
  ret i32 %1, !insn.addr !65
}

define i32 @call_token_paste() local_unnamed_addr {
dec_label_pc_12c1:
  ret i32 60, !insn.addr !66
}

define i32 @param_variadic_macro(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_12c7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3457, !insn.addr !67
  %3 = inttoptr i32 %2 to i8*, !insn.addr !68
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !69
  %5 = add i32 %arg2, 50, !insn.addr !70
  ret i32 %5, !insn.addr !71
}

define i32 @call_variadic_macro(i32 %arg1) local_unnamed_addr {
dec_label_pc_12fd:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3402, !insn.addr !72
  %3 = inttoptr i32 %2 to i8*, !insn.addr !73
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !74
  ret i32 60, !insn.addr !75
}

define i32 @param_macro_override(i32 %arg1) local_unnamed_addr {
dec_label_pc_132c:
  %0 = mul i32 %arg1, 3, !insn.addr !76
  %1 = add i32 %0, 1, !insn.addr !77
  ret i32 %1, !insn.addr !78
}

define i32 @call_macro_override() local_unnamed_addr {
dec_label_pc_1335:
  ret i32 16, !insn.addr !79
}

define i32 @param_include_guard() local_unnamed_addr {
dec_label_pc_133b:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !80
}

define i32 @call_include_guard() local_unnamed_addr {
dec_label_pc_1341:
  ret i32 ptrtoint (i32* @global_var_1f4 to i32), !insn.addr !81
}

define i32 @param_builtin_macros(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1347:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3407, !insn.addr !82
  %3 = inttoptr i32 %2 to i8*, !insn.addr !83
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !84
  %5 = add i32 %arg2, 282, !insn.addr !85
  ret i32 %5, !insn.addr !86
}

define i32 @call_builtin_macros(i32 %arg1) local_unnamed_addr {
dec_label_pc_1396:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3328, !insn.addr !87
  %3 = inttoptr i32 %2 to i8*, !insn.addr !88
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !89
  ret i32 382, !insn.addr !90
}

define i32 @test_preprocessing_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_13e1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3808, !insn.addr !91
  %3 = inttoptr i32 %2 to i8*, !insn.addr !92
  %4 = call i32 @puts(i8* %3), !insn.addr !93
  %5 = add i32 %1, 3298, !insn.addr !94
  %6 = inttoptr i32 %5 to i8*, !insn.addr !95
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !96
  %8 = add i32 %1, 3325, !insn.addr !97
  %9 = inttoptr i32 %8 to i8*, !insn.addr !98
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !99
  %11 = add i32 %1, 3352, !insn.addr !100
  %12 = inttoptr i32 %11 to i8*, !insn.addr !101
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !102
  %14 = add i32 %1, 3379, !insn.addr !103
  %15 = inttoptr i32 %14 to i8*, !insn.addr !104
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !105
  %17 = add i32 %1, 3410, !insn.addr !106
  %18 = inttoptr i32 %17 to i8*, !insn.addr !107
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !108
  %20 = add i32 %1, 3438, !insn.addr !109
  %21 = inttoptr i32 %20 to i8*, !insn.addr !110
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !111
  %23 = add i32 %1, 3480, !insn.addr !112
  %24 = inttoptr i32 %23 to i8*, !insn.addr !113
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !114
  %26 = add i32 %1, 3175, !insn.addr !115
  %27 = inttoptr i32 %26 to i8*, !insn.addr !116
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !117
  %29 = add i32 %1, 3507, !insn.addr !118
  %30 = inttoptr i32 %29 to i8*, !insn.addr !119
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !120
  %32 = add i32 %1, 3534, !insn.addr !121
  %33 = inttoptr i32 %32 to i8*, !insn.addr !122
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !123
  %35 = add i32 %1, 3561, !insn.addr !124
  %36 = inttoptr i32 %35 to i8*, !insn.addr !125
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !126
  %38 = add i32 %1, 3253, !insn.addr !127
  %39 = inttoptr i32 %38 to i8*, !insn.addr !128
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !129
  %41 = add i32 %1, 3589, !insn.addr !130
  %42 = inttoptr i32 %41 to i8*, !insn.addr !131
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !132
  ret i32 %43, !insn.addr !133

; uselistorder directives
  uselistorder i32 %1, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @param_asm_basic(i32 %arg1) local_unnamed_addr {
dec_label_pc_1515:
  %0 = add i32 %arg1, 10, !insn.addr !134
  ret i32 %0, !insn.addr !135
}

define i32 @call_asm_basic() local_unnamed_addr {
dec_label_pc_1523:
  ret i32 15, !insn.addr !136
}

define i32 @param_asm_clobber(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1532:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !137
  %eax.01.reg2mem = alloca i32, !insn.addr !137
  %storemerge2.reg2mem = alloca i32, !insn.addr !137
  %0 = icmp sgt i32 %arg2, 0, !insn.addr !138
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.01.reg2mem, !insn.addr !138
  store i32 0, i32* %eax.0.lcssa.reg2mem, !insn.addr !138
  br i1 %0, label %dec_label_pc_1543, label %dec_label_pc_1549, !insn.addr !138

dec_label_pc_1543:                                ; preds = %dec_label_pc_1532, %dec_label_pc_1543
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
  br i1 %exitcond, label %dec_label_pc_1549, label %dec_label_pc_1543, !insn.addr !138

dec_label_pc_1549:                                ; preds = %dec_label_pc_1543, %dec_label_pc_1532
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1543, { 1, 0 }
}

define i32 @call_asm_clobber(i32 %arg1) local_unnamed_addr {
dec_label_pc_154f:
  %0 = alloca i32
  %eax.01.reg2mem = alloca i32, !insn.addr !142
  %storemerge2.reg2mem = alloca i32, !insn.addr !142
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !143
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2aa8 to i32), i32 -7396), !insn.addr !144
  %4 = inttoptr i32 %3 to i128*, !insn.addr !144
  %5 = load i128, i128* %4, align 4, !insn.addr !144
  %6 = call i128 @__asm_movups(i128 %5), !insn.addr !144
  %7 = call i32 @__asm_movaps(i128 %6), !insn.addr !145
  store i32 %7, i32* %stack_var_-24, align 4, !insn.addr !145
  store i32 0, i32* %storemerge2.reg2mem
  store i32 0, i32* %eax.01.reg2mem
  br label %dec_label_pc_1581

dec_label_pc_1581:                                ; preds = %dec_label_pc_1581, %dec_label_pc_154f
  %eax.01.reload = load i32, i32* %eax.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %8 = mul i32 %storemerge2.reload, 4, !insn.addr !146
  %9 = add i32 %8, %2, !insn.addr !146
  %10 = inttoptr i32 %9 to i32*, !insn.addr !146
  %11 = load i32, i32* %10, align 4, !insn.addr !146
  %12 = add i32 %11, %eax.01.reload, !insn.addr !146
  %13 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !147
  %exitcond = icmp eq i32 %13, 5
  store i32 %13, i32* %storemerge2.reg2mem, !insn.addr !148
  store i32 %12, i32* %eax.01.reg2mem, !insn.addr !148
  br i1 %exitcond, label %dec_label_pc_1587, label %dec_label_pc_1581, !insn.addr !148

dec_label_pc_1587:                                ; preds = %dec_label_pc_1581
  ret i32 %12, !insn.addr !149

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0, 2 }
}

define i32 @param_asm_multi_insn(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1590:
  %eax.0.lcssa.reg2mem = alloca i32, !insn.addr !150
  %eax.01.reg2mem = alloca i32, !insn.addr !150
  %ecx.02.reg2mem = alloca i32, !insn.addr !150
  %edx.03.reg2mem = alloca i32, !insn.addr !150
  %storemerge4.reg2mem = alloca i32, !insn.addr !150
  %0 = icmp eq i32 %arg3, 0, !insn.addr !151
  store i32 %arg3, i32* %storemerge4.reg2mem, !insn.addr !152
  store i32 %arg2, i32* %edx.03.reg2mem, !insn.addr !152
  store i32 %arg1, i32* %ecx.02.reg2mem, !insn.addr !152
  br i1 %0, label %dec_label_pc_15ac, label %dec_label_pc_15a3, !insn.addr !152

dec_label_pc_15a3:                                ; preds = %dec_label_pc_1590, %dec_label_pc_15a3
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
  br i1 %10, label %dec_label_pc_15ac, label %dec_label_pc_15a3, !insn.addr !152

dec_label_pc_15ac:                                ; preds = %dec_label_pc_15a3, %dec_label_pc_1590
  %eax.0.lcssa.reload = load i32, i32* %eax.0.lcssa.reg2mem
  ret i32 %eax.0.lcssa.reload, !insn.addr !158

; uselistorder directives
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.01.reg2mem, { 1, 0 }
  uselistorder label %dec_label_pc_15a3, { 1, 0 }
}

define i32 @call_asm_multi_insn() local_unnamed_addr {
dec_label_pc_15ae:
  %0 = alloca i128
  %1 = alloca i8
  %ecx.02.reg2mem = alloca i32, !insn.addr !159
  %esi.03.reg2mem = alloca i32, !insn.addr !159
  %edi.04.reg2mem = alloca i32, !insn.addr !159
  %2 = load i128, i128* %0
  %3 = load i8, i8* %1
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %4 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !160
  store i32 1819043144, i32* %stack_var_-56, align 4, !insn.addr !161
  %5 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !162
  %6 = call i32 @__asm_movaps(i128 %5), !insn.addr !163
  %7 = call i32 @__asm_movaps(i128 %5), !insn.addr !164
  store i32 %7, i32* %stack_var_-44, align 4, !insn.addr !164
  %8 = ptrtoint i32* %stack_var_-44 to i32, !insn.addr !165
  store i32 %8, i32* %edi.04.reg2mem
  store i32 9, i32* %esi.03.reg2mem
  store i32 %4, i32* %ecx.02.reg2mem
  br label %dec_label_pc_15e5

dec_label_pc_15e5:                                ; preds = %dec_label_pc_15ae, %dec_label_pc_15e5
  %ecx.02.reload = load i32, i32* %ecx.02.reg2mem
  %esi.03.reload = load i32, i32* %esi.03.reg2mem
  %edi.04.reload = load i32, i32* %edi.04.reg2mem
  %9 = inttoptr i32 %ecx.02.reload to i8*, !insn.addr !166
  %10 = load i8, i8* %9, align 1, !insn.addr !166
  %11 = inttoptr i32 %edi.04.reload to i8*, !insn.addr !167
  store i8 %10, i8* %11, align 1, !insn.addr !167
  %12 = add i32 %edi.04.reload, 1, !insn.addr !168
  %13 = add i32 %ecx.02.reload, 1, !insn.addr !169
  %14 = add nsw i32 %esi.03.reload, -1, !insn.addr !170
  %15 = icmp eq i32 %14, 0, !insn.addr !171
  store i32 %12, i32* %edi.04.reg2mem, !insn.addr !172
  store i32 %14, i32* %esi.03.reg2mem, !insn.addr !172
  store i32 %13, i32* %ecx.02.reg2mem, !insn.addr !172
  br i1 %15, label %dec_label_pc_15ee, label %dec_label_pc_15e5, !insn.addr !172

dec_label_pc_15ee:                                ; preds = %dec_label_pc_15e5
  %16 = load i32, i32* %stack_var_-44, align 4, !insn.addr !173
  %17 = trunc i32 %16 to i8
  %18 = icmp eq i8 %3, 111
  %19 = icmp eq i8 %17, 72
  %20 = icmp eq i1 %18, %19, !insn.addr !174
  %21 = icmp eq i1 %20, false, !insn.addr !175
  %22 = select i1 %21, i32 -1, i32 42, !insn.addr !175
  ret i32 %22, !insn.addr !176

; uselistorder directives
  uselistorder i128 %5, { 1, 0 }
  uselistorder i32* %edi.04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_15e5, { 1, 0 }
}

define i32 @param_asm_simd(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_160b:
  %0 = inttoptr i32 %arg1 to i128*, !insn.addr !177
  %1 = load i128, i128* %0, align 4, !insn.addr !177
  %2 = call i128 @__asm_movaps.1(i128 %1), !insn.addr !177
  %3 = inttoptr i32 %arg2 to i128*, !insn.addr !178
  %4 = load i128, i128* %3, align 4, !insn.addr !178
  %5 = call i128 @__asm_movaps.1(i128 %4), !insn.addr !178
  %6 = call i128 @__asm_paddd(i128 %2, i128 %5), !insn.addr !179
  %7 = call i32 @__asm_movaps(i128 %6), !insn.addr !180
  %8 = sext i32 %7 to i128, !insn.addr !180
  %9 = inttoptr i32 %arg3 to i128*, !insn.addr !180
  store i128 %8, i128* %9, align 4, !insn.addr !180
  ret i32 0, !insn.addr !181
}

define i32 @param_simd_intrinsics(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1627:
  %0 = inttoptr i32 %arg2 to i128*, !insn.addr !182
  %1 = load i128, i128* %0, align 4, !insn.addr !182
  %2 = call i128 @__asm_movdqa(i128 %1), !insn.addr !182
  %3 = inttoptr i32 %arg1 to i128*, !insn.addr !183
  %4 = load i128, i128* %3, align 4, !insn.addr !183
  %5 = call i128 @__asm_paddd(i128 %2, i128 %4), !insn.addr !183
  %6 = call i32 @__asm_movdqa.2(i128 %5), !insn.addr !184
  %7 = sext i32 %6 to i128, !insn.addr !184
  %8 = inttoptr i32 %arg3 to i128*, !insn.addr !184
  store i128 %7, i128* %8, align 4, !insn.addr !184
  ret i32 0, !insn.addr !185
}

define i32 @call_asm_simd() local_unnamed_addr {
dec_label_pc_1642:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_29b6 to i32), i32 -8144), !insn.addr !186
  %3 = inttoptr i32 %2 to i128*, !insn.addr !186
  %4 = load i128, i128* %3, align 4, !insn.addr !186
  %5 = call i128 @__asm_movups(i128 %4), !insn.addr !186
  %6 = call i32 @__asm_movaps(i128 %5), !insn.addr !187
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_29b6 to i32), i32 -8128), !insn.addr !188
  %8 = inttoptr i32 %7 to i128*, !insn.addr !188
  %9 = load i128, i128* %8, align 4, !insn.addr !188
  %10 = call i128 @__asm_movups(i128 %9), !insn.addr !188
  %11 = call i32 @__asm_movaps(i128 %10), !insn.addr !189
  %12 = sext i32 %6 to i128, !insn.addr !190
  %13 = call i128 @__asm_movaps.1(i128 %12), !insn.addr !190
  %14 = sext i32 %11 to i128, !insn.addr !191
  %15 = call i128 @__asm_movaps.1(i128 %14), !insn.addr !191
  %16 = call i128 @__asm_paddd(i128 %13, i128 %15), !insn.addr !192
  %17 = call i32 @__asm_movaps(i128 %16), !insn.addr !193
  %18 = sext i32 %17 to i128, !insn.addr !194
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !194
  %20 = call i128 @__asm_pshufd(i128 %19, i8 -18), !insn.addr !195
  %21 = call i128 @__asm_paddd(i128 %20, i128 %19), !insn.addr !196
  %22 = call i128 @__asm_pshufd(i128 %21, i8 85), !insn.addr !197
  %23 = call i128 @__asm_paddd(i128 %22, i128 %21), !insn.addr !198
  %24 = call i32 @__asm_movd(i128 %23), !insn.addr !199
  ret i32 %24, !insn.addr !200

; uselistorder directives
  uselistorder i128 %21, { 1, 0 }
  uselistorder i128 %19, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
}

define i32 @param_asm_atomic(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_169a:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !201
  %1 = load i32, i32* %0, align 4, !insn.addr !201
  %2 = add i32 %1, %arg2, !insn.addr !201
  store i32 %2, i32* %0, align 4, !insn.addr !201
  ret i32 %2, !insn.addr !202
}

define i32 @param_atomic_c11(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16ab:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !203
  %1 = load i32, i32* %0, align 4, !insn.addr !203
  %2 = add i32 %1, %arg2, !insn.addr !203
  store i32 %2, i32* %0, align 4, !insn.addr !203
  ret i32 %2, !insn.addr !204
}

define i32 @call_asm_atomic() local_unnamed_addr {
dec_label_pc_16bc:
  ret i32 30, !insn.addr !205
}

define i32 @param_dynamic_code(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_16d7:
  %0 = alloca i128
  %1 = alloca i32
  %edi.0.reg2mem = alloca i32, !insn.addr !206
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = call i32 @sysconf(i32 30), !insn.addr !207
  %5 = add i32 %3, add (i32 ptrtoint (i32* @global_var_291e to i32), i32 -8176), !insn.addr !208
  %6 = inttoptr i32 %5 to i128*, !insn.addr !208
  %7 = load i128, i128* %6, align 4, !insn.addr !208
  %8 = call i128 @__asm_movaps.1(i128 %7), !insn.addr !208
  call void @__asm_movups.3(i128 %2, i128 %8), !insn.addr !209
  %9 = call i32* @mmap(i32* null, i32 %4, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !210
  %10 = icmp eq i32* %9, inttoptr (i32 -1 to i32*), !insn.addr !211
  store i32 -1, i32* %edi.0.reg2mem, !insn.addr !212
  br i1 %10, label %dec_label_pc_1730, label %dec_label_pc_1718, !insn.addr !212

dec_label_pc_1718:                                ; preds = %dec_label_pc_16d7
  %11 = add i32 %arg2, 5, !insn.addr !213
  %12 = call i32 @munmap(i32* %9, i32 %4), !insn.addr !214
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !215
  br label %dec_label_pc_1730, !insn.addr !215

dec_label_pc_1730:                                ; preds = %dec_label_pc_16d7, %dec_label_pc_1718
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  ret i32 %edi.0.reload, !insn.addr !216

; uselistorder directives
  uselistorder i32* %edi.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 2, 0, 3, 1 }
  uselistorder label %dec_label_pc_1730, { 1, 0 }
}

define i32 @param_memory_protection(i32 %arg1) local_unnamed_addr {
dec_label_pc_1739:
  %0 = alloca i128
  %1 = alloca i32
  %ebp.1.reg2mem = alloca i32, !insn.addr !217
  %ebp.0.reg2mem = alloca i32, !insn.addr !217
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = call i32 @sysconf(i32 30), !insn.addr !218
  %5 = add i32 %3, add (i32 ptrtoint (i32* @global_var_28bb to i32), i32 -8160), !insn.addr !219
  %6 = inttoptr i32 %5 to i128*, !insn.addr !219
  %7 = load i128, i128* %6, align 4, !insn.addr !219
  %8 = call i128 @__asm_movaps.1(i128 %7), !insn.addr !219
  call void @__asm_movups.3(i128 %2, i128 %8), !insn.addr !220
  %9 = call i32* @mmap(i32* null, i32 %4, i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !221
  %10 = icmp eq i32* %9, inttoptr (i32 -1 to i32*), !insn.addr !222
  store i32 -1, i32* %ebp.1.reg2mem, !insn.addr !223
  br i1 %10, label %dec_label_pc_17de, label %dec_label_pc_177b, !insn.addr !223

dec_label_pc_177b:                                ; preds = %dec_label_pc_1739
  store i32 42, i32* %9, align 4, !insn.addr !224
  %11 = call i32 @mprotect(i32* %9, i32 %4, i32 1), !insn.addr !225
  %12 = icmp eq i32 %11, 0, !insn.addr !226
  %13 = icmp eq i1 %12, false, !insn.addr !227
  store i32 -2, i32* %ebp.0.reg2mem, !insn.addr !227
  br i1 %13, label %dec_label_pc_17cd, label %dec_label_pc_17a0, !insn.addr !227

dec_label_pc_17a0:                                ; preds = %dec_label_pc_177b
  %14 = load i32, i32* %9, align 4, !insn.addr !228
  %15 = call i32 @mprotect(i32* %9, i32 %4, i32 3), !insn.addr !229
  %16 = icmp eq i32 %15, 0, !insn.addr !230
  %17 = icmp eq i1 %16, false, !insn.addr !231
  store i32 -3, i32* %ebp.0.reg2mem, !insn.addr !231
  br i1 %17, label %dec_label_pc_17cd, label %dec_label_pc_17c3, !insn.addr !231

dec_label_pc_17c3:                                ; preds = %dec_label_pc_17a0
  store i32 100, i32* %9, align 4, !insn.addr !232
  store i32 %14, i32* %ebp.0.reg2mem, !insn.addr !233
  br label %dec_label_pc_17cd, !insn.addr !233

dec_label_pc_17cd:                                ; preds = %dec_label_pc_17c3, %dec_label_pc_17a0, %dec_label_pc_177b
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %18 = call i32 @munmap(i32* %9, i32 %4), !insn.addr !234
  store i32 %ebp.0.reload, i32* %ebp.1.reg2mem, !insn.addr !235
  br label %dec_label_pc_17de, !insn.addr !235

dec_label_pc_17de:                                ; preds = %dec_label_pc_1739, %dec_label_pc_17cd
  %ebp.1.reload = load i32, i32* %ebp.1.reg2mem
  ret i32 %ebp.1.reload, !insn.addr !236

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 2, 3 }
  uselistorder i32* %ebp.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32*, i32)* @munmap, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32)* @mprotect, { 1, 0, 2 }
  uselistorder i32* (i32*, i32, i32, i32, i32, i32)* @mmap, { 1, 0, 2 }
  uselistorder i32 (i32)* @sysconf, { 1, 0, 2 }
  uselistorder i32 30, { 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_17de, { 1, 0 }
}

define i32 @param_clobber_importance(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_17e8:
  %0 = add i32 %arg2, %arg1, !insn.addr !237
  %1 = mul i32 %0, 2, !insn.addr !238
  ret i32 %1, !insn.addr !239
}

define i32 @call_asm_privileged(i32 %arg1) local_unnamed_addr {
dec_label_pc_1803:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @param_dynamic_code(i32 10, i32 %1), !insn.addr !240
  %3 = call i32 @param_memory_protection(i32 ptrtoint (i32* @0 to i32)), !insn.addr !241
  %4 = icmp eq i32 %3, 42
  %5 = icmp eq i32 %2, 15
  %6 = icmp eq i1 %5, %4, !insn.addr !242
  %7 = icmp eq i1 %6, false, !insn.addr !243
  %8 = select i1 %7, i32 %2, i32 77, !insn.addr !243
  ret i32 %8, !insn.addr !244

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 15, { 1, 0 }
  uselistorder i32 42, { 0, 2, 1 }
  uselistorder i32 10, { 0, 2, 1 }
}

define i32 @param_memory_clobber_demo(i32 %arg1) local_unnamed_addr {
dec_label_pc_1862:
  %0 = add i32 %arg1, add (i32 ptrtoint (i32* @global_var_2799 to i32), i32 48), !insn.addr !245
  %1 = inttoptr i32 %0 to i32*, !insn.addr !245
  %2 = load i32, i32* %1, align 4, !insn.addr !245
  %3 = add i32 %2, 50, !insn.addr !245
  ret i32 %3, !insn.addr !246
}

define i32 @test_asm_features(i32 %arg1) local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i32
  %ecx.06.reg2mem = alloca i32, !insn.addr !247
  %edx.07.reg2mem = alloca i32, !insn.addr !247
  %edi.08.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-72 = alloca i128, align 8
  %stack_var_-56 = alloca i128, align 8
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7440), !insn.addr !248
  %3 = inttoptr i32 %2 to i8*, !insn.addr !249
  %4 = call i32 @puts(i8* %3), !insn.addr !250
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7647), !insn.addr !251
  %6 = inttoptr i32 %5 to i8*, !insn.addr !252
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !253
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7396), !insn.addr !254
  %9 = inttoptr i32 %8 to i128*, !insn.addr !254
  %10 = load i128, i128* %9, align 4, !insn.addr !254
  %11 = call i128 @__asm_movups(i128 %10), !insn.addr !254
  %12 = call i32 @__asm_movaps(i128 %11), !insn.addr !255
  %13 = sext i32 %12 to i128, !insn.addr !255
  store i128 %13, i128* %stack_var_-56, align 8, !insn.addr !255
  %14 = ptrtoint i128* %stack_var_-56 to i32, !insn.addr !256
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7619), !insn.addr !257
  %16 = inttoptr i32 %15 to i8*, !insn.addr !258
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !259
  store i128 1819043144, i128* %stack_var_-72, align 8, !insn.addr !260
  %18 = call i128 @__asm_xorps(i128 %11, i128 %11), !insn.addr !261
  %19 = call i32 @__asm_movaps(i128 %18), !insn.addr !262
  %20 = call i32 @__asm_movaps(i128 %18), !insn.addr !263
  %21 = sext i32 %20 to i128, !insn.addr !263
  store i128 %21, i128* %stack_var_-56, align 8, !insn.addr !263
  %22 = ptrtoint i128* %stack_var_-72 to i32, !insn.addr !264
  store i32 %14, i32* %edi.08.reg2mem
  store i32 %22, i32* %edx.07.reg2mem
  store i32 9, i32* %ecx.06.reg2mem
  br label %dec_label_pc_1929

dec_label_pc_1929:                                ; preds = %dec_label_pc_1880, %dec_label_pc_1929
  %ecx.06.reload = load i32, i32* %ecx.06.reg2mem
  %edx.07.reload = load i32, i32* %edx.07.reg2mem
  %edi.08.reload = load i32, i32* %edi.08.reg2mem
  %23 = inttoptr i32 %edx.07.reload to i8*, !insn.addr !265
  %24 = load i8, i8* %23, align 1, !insn.addr !265
  %25 = inttoptr i32 %edi.08.reload to i8*, !insn.addr !266
  store i8 %24, i8* %25, align 1, !insn.addr !266
  %26 = add i32 %edi.08.reload, 1, !insn.addr !267
  %27 = add i32 %edx.07.reload, 1, !insn.addr !268
  %28 = add nsw i32 %ecx.06.reload, -1, !insn.addr !269
  %29 = icmp eq i32 %28, 0, !insn.addr !270
  store i32 %26, i32* %edi.08.reg2mem, !insn.addr !271
  store i32 %27, i32* %edx.07.reg2mem, !insn.addr !271
  store i32 %28, i32* %ecx.06.reg2mem, !insn.addr !271
  br i1 %29, label %dec_label_pc_1932, label %dec_label_pc_1929, !insn.addr !271

dec_label_pc_1932:                                ; preds = %dec_label_pc_1929
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7591), !insn.addr !272
  %31 = inttoptr i32 %30 to i8*, !insn.addr !273
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !274
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -8144), !insn.addr !275
  %34 = inttoptr i32 %33 to i128*, !insn.addr !275
  %35 = load i128, i128* %34, align 4, !insn.addr !275
  %36 = call i128 @__asm_movups(i128 %35), !insn.addr !275
  %37 = call i32 @__asm_movaps(i128 %36), !insn.addr !276
  %38 = sext i32 %37 to i128, !insn.addr !276
  store i128 %38, i128* %stack_var_-56, align 8, !insn.addr !276
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -8128), !insn.addr !277
  %40 = inttoptr i32 %39 to i128*, !insn.addr !277
  %41 = load i128, i128* %40, align 4, !insn.addr !277
  %42 = call i128 @__asm_movups(i128 %41), !insn.addr !277
  %43 = call i32 @__asm_movaps(i128 %42), !insn.addr !278
  %44 = sext i32 %43 to i128, !insn.addr !278
  store i128 %44, i128* %stack_var_-72, align 8, !insn.addr !278
  %45 = load i128, i128* %stack_var_-56, align 8, !insn.addr !279
  %46 = mul i128 %45, 18446744073709551615
  %47 = ashr exact i128 %46, 96, !insn.addr !279
  %48 = call i128 @__asm_movaps.1(i128 %47), !insn.addr !279
  %49 = load i128, i128* %stack_var_-72, align 8, !insn.addr !280
  %50 = mul i128 %49, 18446744073709551615
  %51 = ashr exact i128 %50, 96, !insn.addr !280
  %52 = call i128 @__asm_movaps.1(i128 %51), !insn.addr !280
  %53 = call i128 @__asm_paddd(i128 %48, i128 %52), !insn.addr !281
  %54 = call i32 @__asm_movaps(i128 %53), !insn.addr !282
  %55 = sext i32 %54 to i128, !insn.addr !283
  %56 = call i128 @__asm_movdqa(i128 %55), !insn.addr !283
  %57 = call i128 @__asm_pshufd(i128 %56, i8 -18), !insn.addr !284
  %58 = call i128 @__asm_paddd(i128 %57, i128 %56), !insn.addr !285
  %59 = call i128 @__asm_pshufd(i128 %58, i8 85), !insn.addr !286
  %60 = call i128 @__asm_paddd(i128 %59, i128 %58), !insn.addr !287
  %61 = call i32 @__asm_movd(i128 %60), !insn.addr !288
  %62 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7563), !insn.addr !289
  %63 = inttoptr i32 %62 to i8*, !insn.addr !290
  %64 = call i32 (i8*, ...) @printf(i8* %63), !insn.addr !291
  store i128 15, i128* %stack_var_-56, align 8, !insn.addr !292
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7535), !insn.addr !293
  %66 = inttoptr i32 %65 to i8*, !insn.addr !294
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !295
  %68 = call i32 @call_asm_privileged(i32 ptrtoint (i32* @0 to i32)), !insn.addr !296
  %69 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2774 to i32), i32 -7507), !insn.addr !297
  %70 = inttoptr i32 %69 to i8*, !insn.addr !298
  %71 = call i32 (i8*, ...) @printf(i8* %70), !insn.addr !299
  ret i32 %71, !insn.addr !300

; uselistorder directives
  uselistorder i128 %58, { 1, 0 }
  uselistorder i128 %56, { 1, 0 }
  uselistorder i128 %18, { 1, 0 }
  uselistorder i128 %11, { 1, 0, 2 }
  uselistorder i32 %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %stack_var_-56, { 5, 4, 3, 2, 0, 1 }
  uselistorder i128* %stack_var_-72, { 3, 2, 1, 0 }
  uselistorder i32* %edi.08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.06.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 23 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1929, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_19f3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_preprocessing_features(i32 %1), !insn.addr !301
  %3 = call i32 @test_asm_features(i32 ptrtoint (i32* @0 to i32)), !insn.addr !302
  ret i32 0, !insn.addr !303

; uselistorder directives
  uselistorder i32 0, { 5, 13, 14, 15, 6, 7, 16, 17, 10, 0, 1, 2, 3, 4, 9, 18, 19, 20, 21, 22, 23, 8, 11, 12 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1a20:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !304
  %ebx.0.reg2mem = alloca i32, !insn.addr !304
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !305
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_25d7 to i32), i32 -252), !insn.addr !306
  %4 = inttoptr i32 %3 to i32*, !insn.addr !306
  %5 = load i32, i32* %4, align 4, !insn.addr !306
  %6 = icmp eq i32 %5, -1, !insn.addr !307
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !308
  store i32 -1, i32* %merge.reg2mem, !insn.addr !308
  br i1 %6, label %dec_label_pc_1a5d, label %dec_label_pc_1a50, !insn.addr !308

dec_label_pc_1a50:                                ; preds = %dec_label_pc_1a20, %dec_label_pc_1a50
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !309
  %8 = inttoptr i32 %7 to i32*, !insn.addr !309
  %9 = load i32, i32* %8, align 4, !insn.addr !309
  %10 = icmp eq i32 %9, -1, !insn.addr !310
  %11 = icmp eq i1 %10, false, !insn.addr !311
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !311
  store i32 %9, i32* %merge.reg2mem, !insn.addr !311
  br i1 %11, label %dec_label_pc_1a50, label %dec_label_pc_1a5d, !insn.addr !311

dec_label_pc_1a5d:                                ; preds = %dec_label_pc_1a50, %dec_label_pc_1a20
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !312

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32 -1, { 3, 0, 4, 5, 1, 2, 6, 8, 7, 9 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1a50, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1a6c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !313
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !314
  ret i32 %3, !insn.addr !315

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 25, 28, 27, 24, 23, 58, 59, 50, 51, 31, 30, 29, 22, 21, 49, 33, 32, 20, 2, 34, 19, 1, 18, 60, 61, 55, 54, 37, 36, 35, 26, 0, 62, 63, 42, 41, 40, 39, 38, 64, 56, 44, 43, 17, 65, 47, 46, 45, 16, 15, 14, 66, 13, 12, 11, 10, 48, 9, 8, 7, 6, 57, 5, 4, 3, 52, 53 }
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

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

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
!38 = !{i64 4660}
!39 = !{i64 4678}
!40 = !{i64 4681}
!41 = !{i64 4687}
!42 = !{i64 4698}
!43 = !{i64 4701}
!44 = !{i64 4703}
!45 = !{i64 4706}
!46 = !{i64 4708}
!47 = !{i64 4714}
!48 = !{i64 4719}
!49 = !{i64 4722}
!50 = !{i64 4725}
!51 = !{i64 4731}
!52 = !{i64 4736}
!53 = !{i64 4739}
!54 = !{i64 4744}
!55 = !{i64 4750}
!56 = !{i64 4755}
!57 = !{i64 4758}
!58 = !{i64 4764}
!59 = !{i64 4770}
!60 = !{i64 4776}
!61 = !{i64 4783}
!62 = !{i64 4786}
!63 = !{i64 4794}
!64 = !{i64 4797}
!65 = !{i64 4800}
!66 = !{i64 4806}
!67 = !{i64 4826}
!68 = !{i64 4841}
!69 = !{i64 4842}
!70 = !{i64 4850}
!71 = !{i64 4860}
!72 = !{i64 4877}
!73 = !{i64 4889}
!74 = !{i64 4890}
!75 = !{i64 4907}
!76 = !{i64 4912}
!77 = !{i64 4915}
!78 = !{i64 4916}
!79 = !{i64 4922}
!80 = !{i64 4928}
!81 = !{i64 4934}
!82 = !{i64 4977}
!83 = !{i64 4992}
!84 = !{i64 4993}
!85 = !{i64 5006}
!86 = !{i64 5013}
!87 = !{i64 5056}
!88 = !{i64 5071}
!89 = !{i64 5072}
!90 = !{i64 5088}
!91 = !{i64 5107}
!92 = !{i64 5113}
!93 = !{i64 5114}
!94 = !{i64 5122}
!95 = !{i64 5130}
!96 = !{i64 5131}
!97 = !{i64 5144}
!98 = !{i64 5151}
!99 = !{i64 5152}
!100 = !{i64 5160}
!101 = !{i64 5168}
!102 = !{i64 5169}
!103 = !{i64 5177}
!104 = !{i64 5188}
!105 = !{i64 5189}
!106 = !{i64 5197}
!107 = !{i64 5205}
!108 = !{i64 5206}
!109 = !{i64 5214}
!110 = !{i64 5222}
!111 = !{i64 5223}
!112 = !{i64 5236}
!113 = !{i64 5243}
!114 = !{i64 5244}
!115 = !{i64 5252}
!116 = !{i64 5263}
!117 = !{i64 5264}
!118 = !{i64 5272}
!119 = !{i64 5279}
!120 = !{i64 5280}
!121 = !{i64 5288}
!122 = !{i64 5296}
!123 = !{i64 5297}
!124 = !{i64 5305}
!125 = !{i64 5316}
!126 = !{i64 5317}
!127 = !{i64 5349}
!128 = !{i64 5364}
!129 = !{i64 5365}
!130 = !{i64 5373}
!131 = !{i64 5384}
!132 = !{i64 5385}
!133 = !{i64 5396}
!134 = !{i64 5403}
!135 = !{i64 5410}
!136 = !{i64 5425}
!137 = !{i64 5426}
!138 = !{i64 5441}
!139 = !{i64 5443}
!140 = !{i64 5446}
!141 = !{i64 5454}
!142 = !{i64 5455}
!143 = !{i64 5477}
!144 = !{i64 5482}
!145 = !{i64 5489}
!146 = !{i64 5505}
!147 = !{i64 5508}
!148 = !{i64 5503}
!149 = !{i64 5519}
!150 = !{i64 5520}
!151 = !{i64 5534}
!152 = !{i64 5537}
!153 = !{i64 5539}
!154 = !{i64 5541}
!155 = !{i64 5543}
!156 = !{i64 5544}
!157 = !{i64 5545}
!158 = !{i64 5549}
!159 = !{i64 5550}
!160 = !{i64 5555}
!161 = !{i64 5572}
!162 = !{i64 5578}
!163 = !{i64 5585}
!164 = !{i64 5589}
!165 = !{i64 5597}
!166 = !{i64 5605}
!167 = !{i64 5607}
!168 = !{i64 5609}
!169 = !{i64 5610}
!170 = !{i64 5611}
!171 = !{i64 5600}
!172 = !{i64 5603}
!173 = !{i64 5614}
!174 = !{i64 5627}
!175 = !{i64 5634}
!176 = !{i64 5642}
!177 = !{i64 5655}
!178 = !{i64 5658}
!179 = !{i64 5661}
!180 = !{i64 5665}
!181 = !{i64 5670}
!182 = !{i64 5683}
!183 = !{i64 5687}
!184 = !{i64 5691}
!185 = !{i64 5697}
!186 = !{i64 5713}
!187 = !{i64 5724}
!188 = !{i64 5727}
!189 = !{i64 5738}
!190 = !{i64 5743}
!191 = !{i64 5746}
!192 = !{i64 5749}
!193 = !{i64 5753}
!194 = !{i64 5756}
!195 = !{i64 5760}
!196 = !{i64 5765}
!197 = !{i64 5769}
!198 = !{i64 5774}
!199 = !{i64 5778}
!200 = !{i64 5785}
!201 = !{i64 5796}
!202 = !{i64 5802}
!203 = !{i64 5813}
!204 = !{i64 5819}
!205 = !{i64 5846}
!206 = !{i64 5847}
!207 = !{i64 5872}
!208 = !{i64 5879}
!209 = !{i64 5886}
!210 = !{i64 5902}
!211 = !{i64 5907}
!212 = !{i64 5910}
!213 = !{i64 5916}
!214 = !{i64 5926}
!215 = !{i64 5931}
!216 = !{i64 5944}
!217 = !{i64 5945}
!218 = !{i64 5971}
!219 = !{i64 5978}
!220 = !{i64 5985}
!221 = !{i64 6001}
!222 = !{i64 6006}
!223 = !{i64 6009}
!224 = !{i64 6013}
!225 = !{i64 6034}
!226 = !{i64 6044}
!227 = !{i64 6046}
!228 = !{i64 6048}
!229 = !{i64 6069}
!230 = !{i64 6079}
!231 = !{i64 6081}
!232 = !{i64 6083}
!233 = !{i64 6089}
!234 = !{i64 6100}
!235 = !{i64 6105}
!236 = !{i64 6119}
!237 = !{i64 6132}
!238 = !{i64 6142}
!239 = !{i64 6146}
!240 = !{i64 6173}
!241 = !{i64 6180}
!242 = !{i64 6224}
!243 = !{i64 6231}
!244 = !{i64 6241}
!245 = !{i64 6261}
!246 = !{i64 6271}
!247 = !{i64 6272}
!248 = !{i64 6291}
!249 = !{i64 6297}
!250 = !{i64 6300}
!251 = !{i64 6321}
!252 = !{i64 6327}
!253 = !{i64 6330}
!254 = !{i64 6348}
!255 = !{i64 6355}
!256 = !{i64 6341}
!257 = !{i64 6378}
!258 = !{i64 6384}
!259 = !{i64 6387}
!260 = !{i64 6409}
!261 = !{i64 6416}
!262 = !{i64 6419}
!263 = !{i64 6423}
!264 = !{i64 6431}
!265 = !{i64 6441}
!266 = !{i64 6443}
!267 = !{i64 6445}
!268 = !{i64 6446}
!269 = !{i64 6447}
!270 = !{i64 6436}
!271 = !{i64 6439}
!272 = !{i64 6477}
!273 = !{i64 6483}
!274 = !{i64 6486}
!275 = !{i64 6491}
!276 = !{i64 6498}
!277 = !{i64 6501}
!278 = !{i64 6508}
!279 = !{i64 6516}
!280 = !{i64 6519}
!281 = !{i64 6523}
!282 = !{i64 6527}
!283 = !{i64 6530}
!284 = !{i64 6534}
!285 = !{i64 6539}
!286 = !{i64 6543}
!287 = !{i64 6548}
!288 = !{i64 6552}
!289 = !{i64 6558}
!290 = !{i64 6564}
!291 = !{i64 6567}
!292 = !{i64 6583}
!293 = !{i64 6598}
!294 = !{i64 6604}
!295 = !{i64 6607}
!296 = !{i64 6612}
!297 = !{i64 6621}
!298 = !{i64 6627}
!299 = !{i64 6630}
!300 = !{i64 6642}
!301 = !{i64 6659}
!302 = !{i64 6664}
!303 = !{i64 6675}
!304 = !{i64 6688}
!305 = !{i64 6692}
!306 = !{i64 6703}
!307 = !{i64 6709}
!308 = !{i64 6712}
!309 = !{i64 6738}
!310 = !{i64 6744}
!311 = !{i64 6747}
!312 = !{i64 6753}
!313 = !{i64 6772}
!314 = !{i64 6783}
!315 = !{i64 6792}
