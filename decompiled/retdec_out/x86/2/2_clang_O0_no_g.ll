source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_1dcd = local_unnamed_addr constant i32 -393377024
@global_var_4036 = local_unnamed_addr constant i32 1835008
@global_var_4004 = local_unnamed_addr constant i32 135151872
@global_var_3f61 = constant i32 0
@global_var_39b5 = constant i32 0
@global_var_3936 = local_unnamed_addr constant i32 25691140
@global_var_3864 = constant i32 -5880
@global_var_37e6 = local_unnamed_addr constant i32 74776575
@global_var_3741 = constant i32 -134217728
@global_var_3224 = constant [27 x i8] c"L1-08 (process_ld): %.2Lf\0A\00"
@global_var_31d7 = constant [9 x i8] c"): %lld\0A\00"
@global_var_3187 = local_unnamed_addr constant i32 1413742602
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

define i32* @function_1060(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !6
  ret i32* %0, !insn.addr !6
}

define i32 @function_1070() local_unnamed_addr {
dec_label_pc_1070:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !7
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1080:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10ac(i32 %2), !insn.addr !8
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20324, !insn.addr !9
  %6 = inttoptr i32 %5 to i32*, !insn.addr !9
  %7 = load i32, i32* %6, align 4, !insn.addr !9
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !10
  %9 = call i32 @__asm_hlt(), !insn.addr !11
  unreachable, !insn.addr !11

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10ac(i32 %arg1) local_unnamed_addr {
dec_label_pc_10ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !12
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !14
  %3 = add i32 %1, 20315, !insn.addr !15
  ret i32 %3, !insn.addr !16
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !17
  ret i32 0, !insn.addr !18
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !19
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !20
  %3 = add i32 %1, 20163, !insn.addr !21
  %4 = inttoptr i32 %3 to i8*, !insn.addr !21
  %5 = load i8, i8* %4, align 1, !insn.addr !21
  %6 = icmp eq i8 %5, 0, !insn.addr !21
  %7 = icmp eq i1 %6, false, !insn.addr !22
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !22
  br i1 %7, label %dec_label_pc_11d2, label %dec_label_pc_1171, !insn.addr !22

dec_label_pc_1171:                                ; preds = %dec_label_pc_1150
  %8 = add i32 %1, 20115, !insn.addr !23
  %9 = inttoptr i32 %8 to i32*, !insn.addr !23
  %10 = load i32, i32* %9, align 4, !insn.addr !23
  %11 = icmp eq i32 %10, 0, !insn.addr !24
  br i1 %11, label %dec_label_pc_118e, label %dec_label_pc_117b, !insn.addr !25

dec_label_pc_117b:                                ; preds = %dec_label_pc_1171
  %12 = call i32 @function_1070(), !insn.addr !26
  br label %dec_label_pc_118e, !insn.addr !27

dec_label_pc_118e:                                ; preds = %dec_label_pc_117b, %dec_label_pc_1171
  %13 = call i32 @deregister_tm_clones(), !insn.addr !28
  store i8 1, i8* %4, align 1, !insn.addr !29
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !29
  br label %dec_label_pc_11d2, !insn.addr !29

dec_label_pc_11d2:                                ; preds = %dec_label_pc_118e, %dec_label_pc_1150
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !30

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32 @register_tm_clones(), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_11e9:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !32
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_11ed:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !33
}

define i32 @process_char(i32 %arg1) local_unnamed_addr {
dec_label_pc_1200:
  %sext = mul i32 %arg1, 16777216
  %0 = trunc i32 %arg1 to i8
  %.off = add i8 %0, -65
  %1 = icmp ugt i8 %.off, 25
  %2 = add i32 %sext, 536870912
  %sext5 = select i1 %1, i32 %sext, i32 %2
  %3 = ashr exact i32 %sext5, 24, !insn.addr !34
  ret i32 %3, !insn.addr !35

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @process_short(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1240:
  %0 = add i32 %arg2, %arg1, !insn.addr !36
  %sext2 = mul i32 %0, 65536
  %1 = ashr exact i32 %sext2, 16, !insn.addr !37
  ret i32 %1, !insn.addr !38
}

define i32 @process_int(i32 %arg1) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i32 %arg1, 2, !insn.addr !39
  %1 = or i32 %0, 1, !insn.addr !40
  ret i32 %1, !insn.addr !41
}

define i32 @process_long(i32 %arg1) local_unnamed_addr {
dec_label_pc_1280:
  %0 = mul i32 %arg1, 2, !insn.addr !42
  ret i32 %0, !insn.addr !43
}

define i32 @process_ll(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1290:
  %0 = mul i32 %arg1, %arg1, !insn.addr !44
  ret i32 %0, !insn.addr !45
}

define x86_fp80 @process_float(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = bitcast i32 %arg2 to float, !insn.addr !46
  %3 = fpext float %2 to x86_fp80, !insn.addr !46
  %4 = add i32 %1, 7504, !insn.addr !47
  %5 = inttoptr i32 %4 to float*, !insn.addr !47
  %6 = load float, float* %5, align 4, !insn.addr !47
  %7 = fpext float %6 to x86_fp80, !insn.addr !47
  %8 = fmul x86_fp80 %3, %7, !insn.addr !48
  %9 = add i32 %1, 7508, !insn.addr !49
  %10 = inttoptr i32 %9 to float*, !insn.addr !49
  %11 = load float, float* %10, align 4, !insn.addr !49
  %12 = fpext float %11 to x86_fp80, !insn.addr !49
  %13 = fadd x86_fp80 %8, %12, !insn.addr !50
  ret x86_fp80 %13, !insn.addr !51

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define x86_fp80 @process_double(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = sext i32 %arg2 to i64
  %3 = bitcast i64 %2 to double
  %4 = fpext double %3 to x86_fp80, !insn.addr !52
  %5 = add i32 %1, 7464, !insn.addr !53
  %6 = inttoptr i32 %5 to float*, !insn.addr !53
  %7 = load float, float* %6, align 4, !insn.addr !53
  %8 = fpext float %7 to x86_fp80, !insn.addr !53
  %9 = fdiv x86_fp80 %4, %8, !insn.addr !54
  %10 = add i32 %1, 7480, !insn.addr !55
  %11 = inttoptr i32 %10 to double*, !insn.addr !55
  %12 = load double, double* %11, align 4, !insn.addr !55
  %13 = fpext double %12 to x86_fp80, !insn.addr !55
  %14 = fadd x86_fp80 %9, %13, !insn.addr !56
  ret x86_fp80 %14, !insn.addr !57

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @process_ld(x86_fp80 %arg1) local_unnamed_addr {
dec_label_pc_1310:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !58
}

define i32 @process_bool(i32 %arg1) local_unnamed_addr {
dec_label_pc_1330:
  %stack_var_-5.0.reg2mem = alloca i32, !insn.addr !59
  %0 = icmp slt i32 %arg1, 1, !insn.addr !60
  store i32 0, i32* %stack_var_-5.0.reg2mem, !insn.addr !60
  br i1 %0, label %dec_label_pc_135a, label %dec_label_pc_1346, !insn.addr !60

dec_label_pc_1346:                                ; preds = %dec_label_pc_1330
  %1 = zext i32 %arg1 to i64, !insn.addr !61
  %2 = mul i64 %1, 4294967296, !insn.addr !61
  %3 = or i64 %2, %1, !insn.addr !61
  %4 = srem i64 %3, 2, !insn.addr !61
  %5 = trunc i64 %4 to i32, !insn.addr !61
  %6 = icmp eq i32 %5, 0, !insn.addr !62
  %phitmp = zext i1 %6 to i32
  store i32 %phitmp, i32* %stack_var_-5.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_135a, !insn.addr !63

dec_label_pc_135a:                                ; preds = %dec_label_pc_1346, %dec_label_pc_1330
  %stack_var_-5.0.reload = load i32, i32* %stack_var_-5.0.reg2mem
  ret i32 %stack_var_-5.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @const_param(i32* %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !65
  %1 = add i32 %0, 10, !insn.addr !66
  ret i32 %1, !insn.addr !67
}

define i32 @volatile_access(i32* %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = load i32, i32* %arg1, align 4
  %1 = mul i32 %0, 2, !insn.addr !68
  ret i32 %1, !insn.addr !69
}

define i32 @test_data_types_l1(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = alloca i32
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 7536, !insn.addr !70
  %3 = inttoptr i32 %2 to i8*, !insn.addr !71
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !72
  %5 = call i32 @process_char(i32 65), !insn.addr !73
  %6 = add i32 %1, 7570, !insn.addr !74
  %7 = inttoptr i32 %6 to i8*, !insn.addr !75
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !76
  %9 = call i32 @process_char(i32 98), !insn.addr !77
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !78
  %11 = call i32 @process_short(i32 100, i32 200), !insn.addr !79
  %12 = add i32 %1, 7599, !insn.addr !80
  %13 = inttoptr i32 %12 to i8*, !insn.addr !81
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !82
  %15 = call i32 @process_int(i32 5), !insn.addr !83
  %16 = add i32 %1, 7629, !insn.addr !84
  %17 = inttoptr i32 %16 to i8*, !insn.addr !85
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !86
  %19 = call i32 @process_long(i32 100), !insn.addr !87
  %20 = add i32 %1, 7657, !insn.addr !88
  %21 = inttoptr i32 %20 to i8*, !insn.addr !89
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !90
  %23 = call i32 @process_ll(i32 100, i32 0), !insn.addr !91
  %24 = add i32 %1, 7687, !insn.addr !92
  %25 = inttoptr i32 %24 to i8*, !insn.addr !93
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !94
  %27 = call x86_fp80 @process_float(i32 1073741824, i32 ptrtoint (i32* @0 to i32)), !insn.addr !95
  %28 = add i32 %1, 7716, !insn.addr !96
  %29 = inttoptr i32 %28 to i8*, !insn.addr !97
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !98
  %31 = call x86_fp80 @process_double(i32 0, i32 1074790400), !insn.addr !99
  %32 = add i32 %1, 7748, !insn.addr !100
  %33 = inttoptr i32 %32 to i8*, !insn.addr !101
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !102
  %35 = add i32 %1, 7256, !insn.addr !103
  %36 = inttoptr i32 %35 to float*, !insn.addr !103
  %37 = load float, float* %36, align 4, !insn.addr !103
  %38 = fpext float %37 to x86_fp80
  %39 = call i32 @process_ld(x86_fp80 %38), !insn.addr !104
  %40 = add i32 %1, 7781, !insn.addr !105
  %41 = inttoptr i32 %40 to i8*, !insn.addr !106
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !107
  %43 = call i32 @process_bool(i32 4), !insn.addr !108
  %44 = add i32 %1, 7811, !insn.addr !109
  %45 = inttoptr i32 %44 to i8*, !insn.addr !110
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !111
  %47 = call i32 @process_bool(i32 3), !insn.addr !112
  %48 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !113
  %49 = call i32 @process_bool(i32 -2), !insn.addr !114
  %50 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !115
  store i32 5, i32* %stack_var_-12, align 4, !insn.addr !116
  %51 = call i32 @const_param(i32* nonnull %stack_var_-12), !insn.addr !117
  %52 = add i32 %1, 7840, !insn.addr !118
  %53 = inttoptr i32 %52 to i8*, !insn.addr !119
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !120
  store i32 10, i32* %stack_var_-16, align 4, !insn.addr !121
  %55 = call i32 @volatile_access(i32* nonnull %stack_var_-16), !insn.addr !122
  %56 = add i32 %1, 7868, !insn.addr !123
  %57 = inttoptr i32 %56 to i8*, !insn.addr !124
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !125
  ret i32 %58, !insn.addr !126

; uselistorder directives
  uselistorder i32 (i32)* @process_bool, { 2, 1, 0 }
  uselistorder i32 (i32)* @process_char, { 1, 0 }
}

define i32 @array_1d_stack(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1640:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !127
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !127
  %storemerge2.reg2mem = alloca i32, !insn.addr !127
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !128
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !128
  store i32 0, i32* %stack_var_-8.01.reg2mem, !insn.addr !128
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !128
  br i1 %1, label %dec_label_pc_1666, label %dec_label_pc_1683, !insn.addr !128

dec_label_pc_1666:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1666
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !129
  %3 = add i32 %2, %0, !insn.addr !129
  %4 = inttoptr i32 %3 to i32*, !insn.addr !129
  %5 = load i32, i32* %4, align 4, !insn.addr !129
  %6 = add i32 %5, %stack_var_-8.01.reload, !insn.addr !130
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !131
  %exitcond = icmp eq i32 %7, %arg2
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !128
  store i32 %6, i32* %stack_var_-8.01.reg2mem, !insn.addr !128
  store i32 %6, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !128
  br i1 %exitcond, label %dec_label_pc_1683, label %dec_label_pc_1666, !insn.addr !128

dec_label_pc_1683:                                ; preds = %dec_label_pc_1666, %dec_label_pc_1640
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !132

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1666, { 1, 0 }
}

define i32 @array_string(i32* %arg1) local_unnamed_addr {
dec_label_pc_1690:
  %storemerge.reg2mem = alloca i32, !insn.addr !133
  %0 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !134
  br label %dec_label_pc_169e, !insn.addr !134

dec_label_pc_169e:                                ; preds = %dec_label_pc_169e, %dec_label_pc_1690
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %1 = add i32 %storemerge.reload, %0, !insn.addr !135
  %2 = inttoptr i32 %1 to i8*, !insn.addr !135
  %3 = load i8, i8* %2, align 1, !insn.addr !135
  %4 = icmp eq i8 %3, 0, !insn.addr !136
  %5 = add i32 %storemerge.reload, 1, !insn.addr !137
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !138
  br i1 %4, label %dec_label_pc_16bf, label %dec_label_pc_169e, !insn.addr !138

dec_label_pc_16bf:                                ; preds = %dec_label_pc_169e
  ret i32 %storemerge.reload, !insn.addr !139

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
}

define i32 @array_2d_stack(i32* %arg1) local_unnamed_addr {
dec_label_pc_16d0:
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !140
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !140
  %0 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge.off03.reg2mem
  store i32 0, i32* %stack_var_-8.02.reg2mem
  br label %dec_label_pc_16f1

dec_label_pc_16f1:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_16f1
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %reass.mul = mul nuw nsw i32 %storemerge.off03.reload, 44
  %1 = add i32 %reass.mul, %0, !insn.addr !141
  %2 = inttoptr i32 %1 to i32*, !insn.addr !141
  %3 = load i32, i32* %2, align 4, !insn.addr !141
  %4 = add i32 %3, %stack_var_-8.02.reload, !insn.addr !142
  %5 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !143
  %exitcond = icmp eq i32 %5, 10
  store i32 %5, i32* %storemerge.off03.reg2mem, !insn.addr !144
  store i32 %4, i32* %stack_var_-8.02.reg2mem, !insn.addr !144
  br i1 %exitcond, label %dec_label_pc_1714, label %dec_label_pc_16f1, !insn.addr !144

dec_label_pc_1714:                                ; preds = %dec_label_pc_16f1
  ret i32 %4, !insn.addr !145

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %storemerge.off03.reload, { 1, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16f1, { 1, 0 }
}

define i32 @array_3d(i32* %arg1) local_unnamed_addr {
dec_label_pc_1720:
  %stack_var_-8.25.reg2mem = alloca i32, !insn.addr !146
  %storemerge6.reg2mem = alloca i32, !insn.addr !146
  %stack_var_-8.17.reg2mem = alloca i32, !insn.addr !146
  %storemerge3.off08.reg2mem = alloca i32, !insn.addr !146
  %stack_var_-8.09.reg2mem = alloca i32, !insn.addr !146
  %storemerge4.off010.reg2mem = alloca i32, !insn.addr !146
  %0 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge4.off010.reg2mem
  store i32 0, i32* %stack_var_-8.09.reg2mem
  br label %dec_label_pc_1748.preheader

dec_label_pc_1748.preheader:                      ; preds = %dec_label_pc_1720, %dec_label_pc_17a4
  %stack_var_-8.09.reload = load i32, i32* %stack_var_-8.09.reg2mem
  %storemerge4.off010.reload = load i32, i32* %storemerge4.off010.reg2mem
  %1 = mul nuw nsw i32 %storemerge4.off010.reload, 100, !insn.addr !147
  %2 = add i32 %1, %0, !insn.addr !148
  store i32 0, i32* %storemerge3.off08.reg2mem
  store i32 %stack_var_-8.09.reload, i32* %stack_var_-8.17.reg2mem
  br label %dec_label_pc_1759.preheader

dec_label_pc_1759.preheader:                      ; preds = %dec_label_pc_1748.preheader, %dec_label_pc_1791
  %stack_var_-8.17.reload = load i32, i32* %stack_var_-8.17.reg2mem
  %storemerge3.off08.reload = load i32, i32* %storemerge3.off08.reg2mem
  %3 = mul nuw nsw i32 %storemerge3.off08.reload, 20, !insn.addr !149
  %4 = add i32 %2, %3, !insn.addr !150
  store i32 0, i32* %storemerge6.reg2mem
  store i32 %stack_var_-8.17.reload, i32* %stack_var_-8.25.reg2mem
  br label %dec_label_pc_1763

dec_label_pc_1763:                                ; preds = %dec_label_pc_1759.preheader, %dec_label_pc_1763
  %stack_var_-8.25.reload = load i32, i32* %stack_var_-8.25.reg2mem
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %5 = mul i32 %storemerge6.reload, 4, !insn.addr !151
  %6 = add i32 %4, %5, !insn.addr !151
  %7 = inttoptr i32 %6 to i32*, !insn.addr !151
  %8 = load i32, i32* %7, align 4, !insn.addr !151
  %9 = add i32 %8, %stack_var_-8.25.reload, !insn.addr !152
  %10 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !153
  %exitcond = icmp eq i32 %10, 5
  store i32 %10, i32* %storemerge6.reg2mem, !insn.addr !154
  store i32 %9, i32* %stack_var_-8.25.reg2mem, !insn.addr !154
  br i1 %exitcond, label %dec_label_pc_1791, label %dec_label_pc_1763, !insn.addr !154

dec_label_pc_1791:                                ; preds = %dec_label_pc_1763
  %11 = add nuw nsw i32 %storemerge3.off08.reload, 1, !insn.addr !155
  %exitcond11 = icmp eq i32 %11, 5
  store i32 %11, i32* %storemerge3.off08.reg2mem, !insn.addr !156
  store i32 %9, i32* %stack_var_-8.17.reg2mem, !insn.addr !156
  br i1 %exitcond11, label %dec_label_pc_17a4, label %dec_label_pc_1759.preheader, !insn.addr !156

dec_label_pc_17a4:                                ; preds = %dec_label_pc_1791
  %12 = add nuw nsw i32 %storemerge4.off010.reload, 1, !insn.addr !157
  %exitcond12 = icmp eq i32 %12, 5
  store i32 %12, i32* %storemerge4.off010.reg2mem, !insn.addr !158
  store i32 %9, i32* %stack_var_-8.09.reg2mem, !insn.addr !158
  br i1 %exitcond12, label %dec_label_pc_17b2, label %dec_label_pc_1748.preheader, !insn.addr !158

dec_label_pc_17b2:                                ; preds = %dec_label_pc_17a4
  ret i32 %9, !insn.addr !159

; uselistorder directives
  uselistorder i32 %9, { 3, 2, 1, 0 }
  uselistorder i32* %storemerge4.off010.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.09.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge3.off08.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.17.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge6.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.25.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1763, { 1, 0 }
  uselistorder label %dec_label_pc_1759.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1748.preheader, { 1, 0 }
}

define i32 @array_vla(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_17c0:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !160
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !160
  %storemerge2.reg2mem = alloca i32, !insn.addr !160
  %0 = ptrtoint i32* %arg2 to i32
  %1 = icmp sgt i32 %arg1, 0, !insn.addr !161
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !161
  store i32 0, i32* %stack_var_-8.01.reg2mem, !insn.addr !161
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !161
  br i1 %1, label %dec_label_pc_17e6, label %dec_label_pc_1803, !insn.addr !161

dec_label_pc_17e6:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17e6
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !162
  %3 = add i32 %2, %0, !insn.addr !162
  %4 = inttoptr i32 %3 to i32*, !insn.addr !162
  %5 = load i32, i32* %4, align 4, !insn.addr !162
  %6 = add i32 %5, %stack_var_-8.01.reload, !insn.addr !163
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !164
  %exitcond = icmp eq i32 %7, %arg1
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !161
  store i32 %6, i32* %stack_var_-8.01.reg2mem, !insn.addr !161
  store i32 %6, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !161
  br i1 %exitcond, label %dec_label_pc_1803, label %dec_label_pc_17e6, !insn.addr !161

dec_label_pc_1803:                                ; preds = %dec_label_pc_17e6, %dec_label_pc_17c0
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !165

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_17e6, { 1, 0 }
}

define i32 @array_pointer(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1810:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !166
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !166
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !166
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !167
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !167
  store i32 0, i32* %stack_var_-8.02.reg2mem, !insn.addr !167
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !167
  br i1 %1, label %dec_label_pc_1836, label %dec_label_pc_1855, !insn.addr !167

dec_label_pc_1836:                                ; preds = %dec_label_pc_1810, %dec_label_pc_1836
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %2 = mul i32 %storemerge.off03.reload, 40, !insn.addr !168
  %3 = add i32 %2, %0, !insn.addr !169
  %4 = inttoptr i32 %3 to i32*, !insn.addr !170
  %5 = load i32, i32* %4, align 4, !insn.addr !170
  %6 = add i32 %5, %stack_var_-8.02.reload, !insn.addr !171
  %7 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !172
  %exitcond = icmp eq i32 %7, %arg2
  store i32 %7, i32* %storemerge.off03.reg2mem, !insn.addr !167
  store i32 %6, i32* %stack_var_-8.02.reg2mem, !insn.addr !167
  store i32 %6, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !167
  br i1 %exitcond, label %dec_label_pc_1855, label %dec_label_pc_1836, !insn.addr !167

dec_label_pc_1855:                                ; preds = %dec_label_pc_1836, %dec_label_pc_1810
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !173

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1836, { 1, 0 }
}

define i32 @pointer_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1860:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !174
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !174
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !174
  %storemerge3.reg2mem = alloca i32, !insn.addr !174
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp slt i32 %arg2, 10, !insn.addr !175
  %storemerge1 = select i1 %1, i32 %arg2, i32 10
  %2 = icmp sgt i32 %arg2, 0, !insn.addr !176
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !176
  store i32 0, i32* %stack_var_-8.02.reg2mem, !insn.addr !176
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !176
  br i1 %2, label %dec_label_pc_18ae, label %dec_label_pc_18e2, !insn.addr !176

dec_label_pc_18ae:                                ; preds = %dec_label_pc_1860, %dec_label_pc_18d4
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %3 = mul i32 %storemerge3.reload, 4, !insn.addr !177
  %4 = add i32 %3, %0, !insn.addr !177
  %5 = inttoptr i32 %4 to i32*, !insn.addr !177
  %6 = load i32, i32* %5, align 4, !insn.addr !177
  %7 = icmp eq i32 %6, 0, !insn.addr !177
  store i32 %stack_var_-8.02.reload, i32* %stack_var_-8.1.reg2mem, !insn.addr !178
  br i1 %7, label %dec_label_pc_18d4, label %dec_label_pc_18be, !insn.addr !178

dec_label_pc_18be:                                ; preds = %dec_label_pc_18ae
  %8 = inttoptr i32 %6 to i32*, !insn.addr !179
  %9 = load i32, i32* %8, align 4, !insn.addr !179
  %10 = add i32 %9, %stack_var_-8.02.reload, !insn.addr !180
  store i32 %10, i32* %stack_var_-8.1.reg2mem, !insn.addr !181
  br label %dec_label_pc_18d4, !insn.addr !181

dec_label_pc_18d4:                                ; preds = %dec_label_pc_18ae, %dec_label_pc_18be
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  %11 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !182
  %12 = icmp slt i32 %11, %storemerge1, !insn.addr !176
  store i32 %11, i32* %storemerge3.reg2mem, !insn.addr !176
  store i32 %stack_var_-8.1.reload, i32* %stack_var_-8.02.reg2mem, !insn.addr !176
  store i32 %stack_var_-8.1.reload, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !176
  br i1 %12, label %dec_label_pc_18ae, label %dec_label_pc_18e2, !insn.addr !176

dec_label_pc_18e2:                                ; preds = %dec_label_pc_18d4, %dec_label_pc_1860
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !183

; uselistorder directives
  uselistorder i32 %stack_var_-8.02.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_18d4, { 1, 0 }
  uselistorder label %dec_label_pc_18ae, { 1, 0 }
}

define i32 @array_complex_index(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_18f0:
  %storemerge.reg2mem = alloca i32, !insn.addr !184
  %0 = icmp slt i32 %arg4, 0, !insn.addr !185
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !186
  br i1 %0, label %dec_label_pc_194e, label %dec_label_pc_190d, !insn.addr !186

dec_label_pc_190d:                                ; preds = %dec_label_pc_18f0
  %1 = icmp slt i32 %arg4, %arg2, !insn.addr !187
  %2 = icmp sgt i32 %arg5, -1, !insn.addr !188
  %or.cond.not = icmp eq i1 %1, %2
  %3 = icmp slt i32 %arg5, %arg3, !insn.addr !189
  %or.cond2 = icmp eq i1 %3, %or.cond.not
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !187
  br i1 %or.cond2, label %dec_label_pc_193b, label %dec_label_pc_194e, !insn.addr !187

dec_label_pc_193b:                                ; preds = %dec_label_pc_190d
  %4 = ptrtoint i32* %arg1 to i32
  %5 = mul i32 %arg5, %arg2, !insn.addr !190
  %6 = add i32 %5, %arg4, !insn.addr !191
  %7 = mul i32 %6, 4, !insn.addr !192
  %8 = add i32 %7, %4, !insn.addr !192
  %9 = inttoptr i32 %8 to i32*, !insn.addr !192
  %10 = load i32, i32* %9, align 4, !insn.addr !192
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !193
  br label %dec_label_pc_194e, !insn.addr !193

dec_label_pc_194e:                                ; preds = %dec_label_pc_190d, %dec_label_pc_18f0, %dec_label_pc_193b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !194

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg5, { 0, 2, 1 }
  uselistorder label %dec_label_pc_194e, { 2, 0, 1 }
}

define i32 @array_oob(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1960:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !195
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !195
  %storemerge2.reg2mem = alloca i32, !insn.addr !195
  %0 = icmp slt i32 %arg2, 0, !insn.addr !196
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !196
  store i32 0, i32* %stack_var_-8.01.reg2mem, !insn.addr !196
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !196
  br i1 %0, label %dec_label_pc_19a3, label %dec_label_pc_1986, !insn.addr !196

dec_label_pc_1986:                                ; preds = %dec_label_pc_1960, %dec_label_pc_1986
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = mul i32 %storemerge2.reload, 4, !insn.addr !197
  %2 = add i32 %1, %arg1, !insn.addr !197
  %3 = inttoptr i32 %2 to i32*, !insn.addr !197
  %4 = load i32, i32* %3, align 4, !insn.addr !197
  %5 = add i32 %4, %stack_var_-8.01.reload, !insn.addr !198
  %6 = add i32 %storemerge2.reload, 1, !insn.addr !199
  %7 = icmp sgt i32 %6, %arg2, !insn.addr !196
  store i32 %6, i32* %storemerge2.reg2mem, !insn.addr !196
  store i32 %5, i32* %stack_var_-8.01.reg2mem, !insn.addr !196
  store i32 %5, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !196
  br i1 %7, label %dec_label_pc_19a3, label %dec_label_pc_1986, !insn.addr !196

dec_label_pc_19a3:                                ; preds = %dec_label_pc_1986, %dec_label_pc_1960
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !200

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_1986, { 1, 0 }
}

define i32 @test_array_types(i32 %arg1) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i32
  %storemerge1213.reg2mem = alloca i32, !insn.addr !201
  %stack_var_-1320.0.reg2mem = alloca i32, !insn.addr !201
  %storemerge11.off014.reg2mem = alloca i32, !insn.addr !201
  %storemerge815.reg2mem = alloca i32, !insn.addr !201
  %storemerge9.off016.reg2mem = alloca i32, !insn.addr !201
  %storemerge10.off017.reg2mem = alloca i32, !insn.addr !201
  %storemerge18.reg2mem = alloca i32, !insn.addr !201
  %storemerge7.off019.reg2mem = alloca i32, !insn.addr !201
  %stack_var_-1304 = alloca i32, align 4
  %stack_var_-1208 = alloca i32, align 4
  %stack_var_-1224 = alloca i32, align 4
  %stack_var_-1184 = alloca i32, align 4
  %stack_var_-1176 = alloca i32, align 4
  %stack_var_-1168 = alloca i32, align 4
  %stack_var_-968 = alloca i32, align 4
  %stack_var_-944 = alloca i32, align 4
  %stack_var_-436 = alloca i32, align 4
  %stack_var_-34 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = add i32 %1, 6361, !insn.addr !202
  %3 = inttoptr i32 %2 to i8*, !insn.addr !203
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !204
  %5 = add i32 %1, 5777, !insn.addr !205
  %6 = inttoptr i32 %5 to i32*, !insn.addr !206
  %7 = call i32* @memcpy(i32* nonnull %stack_var_-28, i32* %6, i32 20), !insn.addr !206
  %8 = call i32 @array_1d_stack(i32* nonnull %stack_var_-28, i32 5), !insn.addr !207
  %9 = add i32 %1, 6389, !insn.addr !208
  %10 = inttoptr i32 %9 to i8*, !insn.addr !209
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !210
  %12 = add i32 %1, 6421, !insn.addr !211
  %13 = inttoptr i32 %12 to i32*, !insn.addr !211
  %14 = load i32, i32* %13, align 4, !insn.addr !211
  store i32 %14, i32* %stack_var_-34, align 4, !insn.addr !212
  %15 = call i32 @array_string(i32* nonnull %stack_var_-34), !insn.addr !213
  %16 = add i32 %1, 6427, !insn.addr !214
  %17 = inttoptr i32 %16 to i8*, !insn.addr !215
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !216
  %19 = ptrtoint i32* %stack_var_-436 to i32, !insn.addr !217
  store i32 0, i32* %storemerge7.off019.reg2mem
  br label %dec_label_pc_1a8c.preheader

dec_label_pc_1a8c.preheader:                      ; preds = %dec_label_pc_19b0, %dec_label_pc_1b00
  %storemerge7.off019.reload = load i32, i32* %storemerge7.off019.reg2mem
  %20 = mul nuw nsw i32 %storemerge7.off019.reload, 40, !insn.addr !218
  %21 = add i32 %20, %19, !insn.addr !219
  store i32 0, i32* %storemerge18.reg2mem
  br label %dec_label_pc_1a99

dec_label_pc_1a99:                                ; preds = %dec_label_pc_1a8c.preheader, %dec_label_pc_1a99
  %storemerge18.reload = load i32, i32* %storemerge18.reg2mem
  %22 = icmp eq i32 %storemerge18.reload, %storemerge7.off019.reload, !insn.addr !220
  %23 = icmp eq i1 %22, false, !insn.addr !221
  %storemerge6 = select i1 %23, i32 0, i32 %storemerge7.off019.reload
  %24 = mul i32 %storemerge18.reload, 4, !insn.addr !222
  %25 = add i32 %21, %24, !insn.addr !222
  %26 = inttoptr i32 %25 to i32*, !insn.addr !222
  store i32 %storemerge6, i32* %26, align 4, !insn.addr !222
  %27 = add nuw nsw i32 %storemerge18.reload, 1, !insn.addr !223
  %exitcond24 = icmp eq i32 %27, 10
  store i32 %27, i32* %storemerge18.reg2mem, !insn.addr !224
  br i1 %exitcond24, label %dec_label_pc_1b00, label %dec_label_pc_1a99, !insn.addr !224

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1a99
  %28 = add nuw nsw i32 %storemerge7.off019.reload, 1, !insn.addr !225
  %exitcond25 = icmp eq i32 %28, 10
  store i32 %28, i32* %storemerge7.off019.reg2mem, !insn.addr !226
  br i1 %exitcond25, label %dec_label_pc_1b14, label %dec_label_pc_1a8c.preheader, !insn.addr !226

dec_label_pc_1b14:                                ; preds = %dec_label_pc_1b00
  %29 = call i32 @array_2d_stack(i32* nonnull %stack_var_-436), !insn.addr !227
  %30 = add i32 %1, 6457, !insn.addr !228
  %31 = inttoptr i32 %30 to i8*, !insn.addr !229
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !230
  %33 = ptrtoint i32* %stack_var_-944 to i32, !insn.addr !231
  store i32 0, i32* %storemerge10.off017.reg2mem
  br label %dec_label_pc_1b61.preheader

dec_label_pc_1b61.preheader:                      ; preds = %dec_label_pc_1b14, %dec_label_pc_1bdc
  %storemerge10.off017.reload = load i32, i32* %storemerge10.off017.reg2mem
  %34 = mul nuw nsw i32 %storemerge10.off017.reload, 100, !insn.addr !232
  %35 = add i32 %34, %33, !insn.addr !233
  store i32 0, i32* %storemerge9.off016.reg2mem
  br label %dec_label_pc_1b78.preheader

dec_label_pc_1b78.preheader:                      ; preds = %dec_label_pc_1b61.preheader, %dec_label_pc_1bc3
  %storemerge9.off016.reload = load i32, i32* %storemerge9.off016.reg2mem
  %36 = mul nuw nsw i32 %storemerge9.off016.reload, 20, !insn.addr !234
  %37 = add i32 %35, %36, !insn.addr !235
  store i32 0, i32* %storemerge815.reg2mem
  br label %dec_label_pc_1b85

dec_label_pc_1b85:                                ; preds = %dec_label_pc_1b78.preheader, %dec_label_pc_1b85
  %storemerge815.reload = load i32, i32* %storemerge815.reg2mem
  %38 = mul i32 %storemerge815.reload, 4, !insn.addr !236
  %39 = add i32 %37, %38, !insn.addr !236
  %40 = inttoptr i32 %39 to i32*, !insn.addr !236
  store i32 1, i32* %40, align 4, !insn.addr !236
  %41 = add nuw nsw i32 %storemerge815.reload, 1, !insn.addr !237
  %exitcond21 = icmp eq i32 %41, 5
  store i32 %41, i32* %storemerge815.reg2mem, !insn.addr !238
  br i1 %exitcond21, label %dec_label_pc_1bc3, label %dec_label_pc_1b85, !insn.addr !238

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1b85
  %42 = add nuw nsw i32 %storemerge9.off016.reload, 1, !insn.addr !239
  %exitcond22 = icmp eq i32 %42, 5
  store i32 %42, i32* %storemerge9.off016.reg2mem, !insn.addr !240
  br i1 %exitcond22, label %dec_label_pc_1bdc, label %dec_label_pc_1b78.preheader, !insn.addr !240

dec_label_pc_1bdc:                                ; preds = %dec_label_pc_1bc3
  %43 = add nuw nsw i32 %storemerge10.off017.reload, 1, !insn.addr !241
  %exitcond23 = icmp eq i32 %43, 5
  store i32 %43, i32* %storemerge10.off017.reg2mem, !insn.addr !242
  br i1 %exitcond23, label %dec_label_pc_1bf0, label %dec_label_pc_1b61.preheader, !insn.addr !242

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1bdc
  %44 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !243
  %45 = call i32 @array_3d(i32* nonnull %stack_var_-944), !insn.addr !244
  %46 = add i32 %1, 6489, !insn.addr !245
  %47 = inttoptr i32 %46 to i8*, !insn.addr !246
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !247
  %49 = add i32 %1, 5797, !insn.addr !248
  %50 = inttoptr i32 %49 to i32*, !insn.addr !248
  %51 = load i32, i32* %50, align 4, !insn.addr !248
  store i32 %51, i32* %stack_var_-968, align 4, !insn.addr !249
  %52 = call i32 @array_vla(i32 3, i32* nonnull %stack_var_-968), !insn.addr !250
  %53 = add i32 %1, 6515, !insn.addr !251
  %54 = inttoptr i32 %53 to i8*, !insn.addr !252
  %55 = call i32 (i8*, ...) @printf(i8* %54), !insn.addr !253
  %56 = ptrtoint i32* %stack_var_-1168 to i32, !insn.addr !254
  store i32 0, i32* %storemerge11.off014.reg2mem
  br label %dec_label_pc_1c8b

dec_label_pc_1c8b:                                ; preds = %dec_label_pc_1bf0, %dec_label_pc_1c8b
  %storemerge11.off014.reload = load i32, i32* %storemerge11.off014.reg2mem
  %57 = mul nuw nsw i32 %storemerge11.off014.reload, 10, !insn.addr !255
  %58 = mul nuw nsw i32 %storemerge11.off014.reload, 40, !insn.addr !256
  %59 = add i32 %58, %56, !insn.addr !257
  %60 = inttoptr i32 %59 to i32*, !insn.addr !258
  store i32 %57, i32* %60, align 4, !insn.addr !258
  %61 = add nuw nsw i32 %storemerge11.off014.reload, 1, !insn.addr !259
  %exitcond20 = icmp eq i32 %61, 5
  store i32 %61, i32* %storemerge11.off014.reg2mem, !insn.addr !260
  br i1 %exitcond20, label %dec_label_pc_1cb7, label %dec_label_pc_1c8b, !insn.addr !260

dec_label_pc_1cb7:                                ; preds = %dec_label_pc_1c8b
  %62 = call i32 @array_pointer(i32* nonnull %stack_var_-1168, i32 5), !insn.addr !261
  %63 = add i32 %1, 6542, !insn.addr !262
  %64 = inttoptr i32 %63 to i8*, !insn.addr !263
  %65 = call i32 (i8*, ...) @printf(i8* %64), !insn.addr !264
  store i32 10, i32* %stack_var_-1176, align 4, !insn.addr !265
  store i32 30, i32* %stack_var_-1184, align 4, !insn.addr !266
  %66 = ptrtoint i32* %stack_var_-1176 to i32, !insn.addr !267
  store i32 %66, i32* %stack_var_-1224, align 4, !insn.addr !267
  %67 = ptrtoint i32* %stack_var_-1184 to i32, !insn.addr !268
  %68 = ptrtoint i32* %stack_var_-1208 to i32, !insn.addr !269
  store i32 %68, i32* %stack_var_-1320.0.reg2mem, !insn.addr !269
  br label %dec_label_pc_1d5a, !insn.addr !269

dec_label_pc_1d5a:                                ; preds = %dec_label_pc_1d5a, %dec_label_pc_1cb7
  %stack_var_-1320.0.reload = load i32, i32* %stack_var_-1320.0.reg2mem
  %69 = inttoptr i32 %stack_var_-1320.0.reload to i32*, !insn.addr !270
  store i32 0, i32* %69, align 4, !insn.addr !270
  %70 = add i32 %stack_var_-1320.0.reload, 4, !insn.addr !271
  %71 = icmp eq i32 %70, %67, !insn.addr !272
  %72 = icmp eq i1 %71, false, !insn.addr !273
  store i32 %70, i32* %stack_var_-1320.0.reg2mem, !insn.addr !273
  br i1 %72, label %dec_label_pc_1d5a, label %dec_label_pc_1d83, !insn.addr !273

dec_label_pc_1d83:                                ; preds = %dec_label_pc_1d5a
  %73 = call i32 @pointer_array(i32* nonnull %stack_var_-1224, i32 3), !insn.addr !274
  %74 = add i32 %1, 6573, !insn.addr !275
  %75 = inttoptr i32 %74 to i8*, !insn.addr !276
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !277
  %77 = add i32 %44, -1300, !insn.addr !278
  store i32 0, i32* %storemerge1213.reg2mem
  br label %dec_label_pc_1dce

dec_label_pc_1dce:                                ; preds = %dec_label_pc_1d83, %dec_label_pc_1dce
  %storemerge1213.reload = load i32, i32* %storemerge1213.reg2mem
  %78 = mul i32 %storemerge1213.reload, 4, !insn.addr !278
  %79 = add i32 %77, %78, !insn.addr !278
  %80 = inttoptr i32 %79 to i32*, !insn.addr !278
  store i32 %storemerge1213.reload, i32* %80, align 4, !insn.addr !278
  %81 = add nuw nsw i32 %storemerge1213.reload, 1, !insn.addr !279
  %exitcond = icmp eq i32 %81, 20
  store i32 %81, i32* %storemerge1213.reg2mem, !insn.addr !280
  br i1 %exitcond, label %dec_label_pc_1df5, label %dec_label_pc_1dce, !insn.addr !280

dec_label_pc_1df5:                                ; preds = %dec_label_pc_1dce
  %82 = call i32 @array_complex_index(i32* nonnull %stack_var_-1304, i32 5, i32 4, i32 2, i32 3), !insn.addr !281
  %83 = add i32 %1, 6604, !insn.addr !282
  %84 = inttoptr i32 %83 to i8*, !insn.addr !283
  %85 = call i32 (i8*, ...) @printf(i8* %84), !insn.addr !284
  ret i32 %85, !insn.addr !285

; uselistorder directives
  uselistorder i32 %stack_var_-1320.0.reload, { 1, 0 }
  uselistorder i32 %storemerge11.off014.reload, { 2, 1, 0 }
  uselistorder i32 %storemerge18.reload, { 0, 2, 1 }
  uselistorder i32 %storemerge7.off019.reload, { 0, 2, 1, 3 }
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 0, 1, 2, 3, 4 }
  uselistorder i32* %storemerge7.off019.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge10.off017.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge9.off016.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge815.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge11.off014.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-1320.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1213.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1dce, { 1, 0 }
  uselistorder label %dec_label_pc_1c8b, { 1, 0 }
  uselistorder label %dec_label_pc_1b85, { 1, 0 }
  uselistorder label %dec_label_pc_1b78.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1b61.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1a99, { 1, 0 }
  uselistorder label %dec_label_pc_1a8c.preheader, { 1, 0 }
}

define i32 @ptr_single(i32* %arg1) local_unnamed_addr {
dec_label_pc_1e50:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !286
  %1 = add i32 %0, 10, !insn.addr !287
  ret i32 %1, !insn.addr !288
}

define i32 @ptr_double(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !289
  %1 = load i32, i32* %0, align 4, !insn.addr !289
  %2 = inttoptr i32 %1 to i32*, !insn.addr !290
  %3 = load i32, i32* %2, align 4, !insn.addr !290
  %4 = add i32 %3, 5, !insn.addr !291
  ret i32 %4, !insn.addr !292
}

define i32 @ptr_triple(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e80:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !293
  %1 = load i32, i32* %0, align 4, !insn.addr !293
  %2 = inttoptr i32 %1 to i32*, !insn.addr !294
  %3 = load i32, i32* %2, align 4, !insn.addr !294
  %4 = inttoptr i32 %3 to i32*, !insn.addr !295
  %5 = load i32, i32* %4, align 4, !insn.addr !295
  %6 = add i32 %5, 1, !insn.addr !296
  ret i32 %6, !insn.addr !297
}

define i32 @ptr_increment(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ea0:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !298
  %stack_var_4.01.reg2mem = alloca i32, !insn.addr !298
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !298
  %storemerge3.reg2mem = alloca i32, !insn.addr !298
  %0 = icmp sgt i32 %arg2, 0, !insn.addr !299
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !299
  br i1 %0, label %dec_label_pc_1ec6.lr.ph, label %dec_label_pc_1ee8, !insn.addr !299

dec_label_pc_1ec6.lr.ph:                          ; preds = %dec_label_pc_1ea0
  %1 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %stack_var_-8.02.reg2mem
  store i32 %1, i32* %stack_var_4.01.reg2mem
  br label %dec_label_pc_1ec6

dec_label_pc_1ec6:                                ; preds = %dec_label_pc_1ec6, %dec_label_pc_1ec6.lr.ph
  %stack_var_4.01.reload = load i32, i32* %stack_var_4.01.reg2mem
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = inttoptr i32 %stack_var_4.01.reload to i32*, !insn.addr !300
  %3 = load i32, i32* %2, align 4, !insn.addr !300
  %4 = add i32 %3, %stack_var_-8.02.reload, !insn.addr !301
  %5 = add i32 %stack_var_4.01.reload, 4, !insn.addr !302
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !303
  %exitcond = icmp eq i32 %6, %arg2
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !299
  store i32 %4, i32* %stack_var_-8.02.reg2mem, !insn.addr !299
  store i32 %5, i32* %stack_var_4.01.reg2mem, !insn.addr !299
  store i32 %4, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !299
  br i1 %exitcond, label %dec_label_pc_1ee8, label %dec_label_pc_1ec6, !insn.addr !299

dec_label_pc_1ee8:                                ; preds = %dec_label_pc_1ec6, %dec_label_pc_1ea0
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !304

; uselistorder directives
  uselistorder i32 %stack_var_4.01.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_4.01.reg2mem, { 1, 0, 2 }
}

define i32 @ptr_offset(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = mul i32 %arg2, 4, !insn.addr !305
  %2 = add i32 %1, %0, !insn.addr !305
  %3 = inttoptr i32 %2 to i32*, !insn.addr !305
  %4 = load i32, i32* %3, align 4, !insn.addr !305
  ret i32 %4, !insn.addr !306
}

define i32 @ptr_diff(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1f10:
  %0 = ptrtoint i32* %arg2 to i32
  %1 = ptrtoint i32* %arg1 to i32
  %2 = sub i32 %1, %0, !insn.addr !307
  %3 = ashr i32 %2, 2, !insn.addr !308
  ret i32 %3, !insn.addr !309
}

define i32 @ptr_void(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f30:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !310
  %0 = icmp eq i32 %arg2, 0, !insn.addr !311
  %1 = icmp eq i1 %0, false, !insn.addr !312
  br i1 %1, label %dec_label_pc_1f51, label %dec_label_pc_1f44, !insn.addr !312

dec_label_pc_1f44:                                ; preds = %dec_label_pc_1f30
  %2 = load i32, i32* %arg1, align 4, !insn.addr !313
  store i32 %2, i32* %stack_var_-8.0.reg2mem, !insn.addr !314
  br label %dec_label_pc_1f75, !insn.addr !314

dec_label_pc_1f51:                                ; preds = %dec_label_pc_1f30
  %3 = icmp eq i32 %arg2, 1, !insn.addr !315
  %4 = icmp eq i1 %3, false, !insn.addr !316
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !316
  br i1 %4, label %dec_label_pc_1f75, label %dec_label_pc_1f5b, !insn.addr !316

dec_label_pc_1f5b:                                ; preds = %dec_label_pc_1f51
  %5 = bitcast i32* %arg1 to i8*, !insn.addr !317
  %6 = load i8, i8* %5, align 1, !insn.addr !317
  %7 = sext i8 %6 to i32, !insn.addr !317
  store i32 %7, i32* %stack_var_-8.0.reg2mem, !insn.addr !318
  br label %dec_label_pc_1f75, !insn.addr !318

dec_label_pc_1f75:                                ; preds = %dec_label_pc_1f51, %dec_label_pc_1f5b, %dec_label_pc_1f44
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !319

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1f75, { 1, 0, 2 }
}

define i32 @ptr_const(i32* %arg1) local_unnamed_addr {
dec_label_pc_1f80:
  %0 = load i32, i32* %arg1, align 4
  %1 = mul i32 %0, 2, !insn.addr !320
  ret i32 %1, !insn.addr !321
}

define i32 @ptr_const_ptr(i32* %arg1) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !322
  %1 = add i32 %0, 5, !insn.addr !323
  store i32 %1, i32* %arg1, align 4, !insn.addr !324
  ret i32 %1, !insn.addr !325
}

define i32 @ptr_func_simple(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1fc0:
  ret i32 %arg2, !insn.addr !326
}

define i32 @ptr_func_complex(i32 %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = ptrtoint i32* %arg2 to i32
  ret i32 %0, !insn.addr !327
}

define i32 @ptr_cast(i32* %arg1) local_unnamed_addr {
dec_label_pc_2040:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !328
  ret i32 %0, !insn.addr !329
}

define i32 @opaque_handle_create(i32 %arg1) local_unnamed_addr {
dec_label_pc_2070:
  ret i32 %arg1, !insn.addr !330
}

define i32 @opaque_handle_op(i32 %arg1) local_unnamed_addr {
dec_label_pc_2080:
  %0 = mul i32 %arg1, 2, !insn.addr !331
  ret i32 %0, !insn.addr !332
}

define i32 @test_pointer_types(i32 %arg1) local_unnamed_addr {
dec_label_pc_2090:
  %0 = alloca i32
  %stack_var_-124 = alloca i32, align 4
  %stack_var_-120 = alloca i32, align 4
  %stack_var_-116 = alloca i32, align 4
  %stack_var_-112 = alloca i32, align 4
  %stack_var_-105 = alloca i8, align 1
  %stack_var_-104 = alloca i32, align 4
  %stack_var_-84 = alloca i32, align 4
  %stack_var_-100 = alloca i32, align 4
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11339), !insn.addr !333
  %3 = inttoptr i32 %2 to i8*, !insn.addr !334
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !335
  store i32 5, i32* %stack_var_-12, align 4, !insn.addr !336
  %5 = call i32 @ptr_single(i32* nonnull %stack_var_-12), !insn.addr !337
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11311), !insn.addr !338
  %7 = inttoptr i32 %6 to i8*, !insn.addr !339
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !340
  store i32 10, i32* %stack_var_-16, align 4, !insn.addr !341
  %9 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !342
  store i32 %9, i32* %stack_var_-20, align 4, !insn.addr !342
  %10 = ptrtoint i32* %stack_var_-20 to i32, !insn.addr !343
  %11 = call i32 @ptr_double(i32 %10), !insn.addr !343
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11283), !insn.addr !344
  %13 = inttoptr i32 %12 to i8*, !insn.addr !345
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !346
  store i32 5, i32* %stack_var_-28, align 4, !insn.addr !347
  %15 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !348
  store i32 %15, i32* %stack_var_-32, align 4, !insn.addr !348
  %16 = ptrtoint i32* %stack_var_-32 to i32, !insn.addr !349
  store i32 %16, i32* %stack_var_-36, align 4, !insn.addr !349
  %17 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !350
  %18 = call i32 @ptr_triple(i32 %17), !insn.addr !350
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11255), !insn.addr !351
  %20 = inttoptr i32 %19 to i8*, !insn.addr !352
  %21 = call i32 (i8*, ...) @printf(i8* %20), !insn.addr !353
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12176), !insn.addr !354
  %23 = inttoptr i32 %22 to i32*, !insn.addr !355
  %24 = call i32* @memcpy(i32* nonnull %stack_var_-60, i32* %23, i32 20), !insn.addr !355
  %25 = call i32 @ptr_increment(i32* nonnull %stack_var_-60, i32 5), !insn.addr !356
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11227), !insn.addr !357
  %27 = inttoptr i32 %26 to i8*, !insn.addr !358
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !359
  %29 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12156), !insn.addr !360
  %30 = inttoptr i32 %29 to i32*, !insn.addr !361
  %31 = call i32* @memcpy(i32* nonnull %stack_var_-80, i32* %30, i32 20), !insn.addr !361
  %32 = call i32 @ptr_offset(i32* nonnull %stack_var_-80, i32 2), !insn.addr !362
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11196), !insn.addr !363
  %34 = inttoptr i32 %33 to i8*, !insn.addr !364
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !365
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12136), !insn.addr !366
  %37 = inttoptr i32 %36 to i32*, !insn.addr !367
  %38 = call i32* @memcpy(i32* nonnull %stack_var_-100, i32* %37, i32 20), !insn.addr !367
  %39 = call i32 @ptr_diff(i32* nonnull %stack_var_-84, i32* nonnull %stack_var_-100), !insn.addr !368
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11168), !insn.addr !369
  %41 = inttoptr i32 %40 to i8*, !insn.addr !370
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !371
  store i32 42, i32* %stack_var_-104, align 4, !insn.addr !372
  store i8 65, i8* %stack_var_-105, align 1, !insn.addr !373
  %43 = call i32 @ptr_void(i32* nonnull %stack_var_-104, i32 0), !insn.addr !374
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11142), !insn.addr !375
  %45 = inttoptr i32 %44 to i8*, !insn.addr !376
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !377
  %47 = bitcast i8* %stack_var_-105 to i32*
  %48 = call i32 @ptr_void(i32* nonnull %47, i32 1), !insn.addr !378
  %49 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !379
  store i32 10, i32* %stack_var_-112, align 4, !insn.addr !380
  %50 = call i32 @ptr_const(i32* nonnull %stack_var_-112), !insn.addr !381
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11116), !insn.addr !382
  %52 = inttoptr i32 %51 to i8*, !insn.addr !383
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !384
  store i32 10, i32* %stack_var_-116, align 4, !insn.addr !385
  %54 = call i32 @ptr_const_ptr(i32* nonnull %stack_var_-116), !insn.addr !386
  %55 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11089), !insn.addr !387
  %56 = inttoptr i32 %55 to i8*, !insn.addr !388
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !389
  %58 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -15424), !insn.addr !390
  %59 = call i32 @ptr_func_simple(i32 %58, i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !391
  %60 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11058), !insn.addr !392
  %61 = inttoptr i32 %60 to i8*, !insn.addr !393
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !394
  store i32 5, i32* %stack_var_-120, align 4, !insn.addr !395
  %63 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -15408), !insn.addr !396
  %64 = call i32 @ptr_func_complex(i32 %63, i32* nonnull %stack_var_-120, i32 ptrtoint (i32* @0 to i32)), !insn.addr !397
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11025), !insn.addr !398
  %66 = inttoptr i32 %65 to i8*, !insn.addr !399
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !400
  store i32 305419896, i32* %stack_var_-124, align 4, !insn.addr !401
  %68 = call i32 @ptr_cast(i32* nonnull %stack_var_-124), !insn.addr !402
  %69 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -10991), !insn.addr !403
  %70 = inttoptr i32 %69 to i8*, !insn.addr !404
  %71 = call i32 (i8*, ...) @printf(i8* %70), !insn.addr !405
  %72 = call i32 @opaque_handle_create(i32 10), !insn.addr !406
  %73 = call i32 @opaque_handle_op(i32 %72), !insn.addr !407
  %74 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -10963), !insn.addr !408
  %75 = inttoptr i32 %74 to i8*, !insn.addr !409
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !410
  ret i32 %76, !insn.addr !411

; uselistorder directives
  uselistorder i32 %1, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32* %stack_var_-100, { 1, 0 }
  uselistorder i32 (i32*, i32)* @ptr_void, { 1, 0 }
  uselistorder i32 5, { 13, 8, 9, 14, 15, 17, 18, 10, 11, 3, 0, 1, 2, 12, 4, 5, 6, 16, 7 }
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_23c0:
  %0 = mul i32 %arg1, 2, !insn.addr !412
  ret i32 %0, !insn.addr !413
}

define i32 @complex_callback(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !414
  %1 = load i32, i32* %0, align 4, !insn.addr !414
  %2 = add i32 %1, 10, !insn.addr !415
  store i32 %2, i32* %0, align 4, !insn.addr !416
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !417
  %4 = load i32, i32* %3, align 4, !insn.addr !417
  %5 = icmp eq i32 %4, 0, !insn.addr !418
  %6 = icmp eq i1 %5, false, !insn.addr !419
  %7 = zext i1 %6 to i32, !insn.addr !419
  ret i32 %7, !insn.addr !420
}

define i32 @struct_simple(i32* %arg1) local_unnamed_addr {
dec_label_pc_2400:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = load i32, i32* %arg1, align 4, !insn.addr !421
  %2 = add i32 %0, 4, !insn.addr !422
  %3 = inttoptr i32 %2 to i32*, !insn.addr !422
  %4 = load i32, i32* %3, align 4, !insn.addr !422
  %5 = add i32 %4, %1, !insn.addr !422
  %6 = add i32 %0, 8, !insn.addr !423
  %7 = inttoptr i32 %6 to i32*, !insn.addr !423
  %8 = load i32, i32* %7, align 4, !insn.addr !423
  %9 = add i32 %5, %8, !insn.addr !423
  ret i32 %9, !insn.addr !424
}

define i32 @struct_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2420:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !425
  %stack_var_-8.02.reg2mem = alloca i32, !insn.addr !425
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !425
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !426
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !426
  store i32 0, i32* %stack_var_-8.02.reg2mem, !insn.addr !426
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !426
  br i1 %1, label %dec_label_pc_2446, label %dec_label_pc_247d, !insn.addr !426

dec_label_pc_2446:                                ; preds = %dec_label_pc_2420, %dec_label_pc_2446
  %stack_var_-8.02.reload = load i32, i32* %stack_var_-8.02.reg2mem
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %2 = mul i32 %storemerge.off03.reload, 12, !insn.addr !427
  %3 = add i32 %2, %0, !insn.addr !428
  %4 = inttoptr i32 %3 to i32*, !insn.addr !429
  %5 = load i32, i32* %4, align 4, !insn.addr !429
  %6 = add i32 %3, 4, !insn.addr !430
  %7 = inttoptr i32 %6 to i32*, !insn.addr !430
  %8 = load i32, i32* %7, align 4, !insn.addr !430
  %9 = add i32 %3, 8, !insn.addr !431
  %10 = inttoptr i32 %9 to i32*, !insn.addr !431
  %11 = load i32, i32* %10, align 4, !insn.addr !431
  %12 = add i32 %5, %stack_var_-8.02.reload, !insn.addr !430
  %13 = add i32 %12, %8, !insn.addr !431
  %14 = add i32 %13, %11, !insn.addr !432
  %15 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !433
  %exitcond = icmp eq i32 %15, %arg2
  store i32 %15, i32* %storemerge.off03.reg2mem, !insn.addr !426
  store i32 %14, i32* %stack_var_-8.02.reg2mem, !insn.addr !426
  store i32 %14, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !426
  br i1 %exitcond, label %dec_label_pc_247d, label %dec_label_pc_2446, !insn.addr !426

dec_label_pc_247d:                                ; preds = %dec_label_pc_2446, %dec_label_pc_2420
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !434

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2446, { 1, 0 }
}

define i32 @struct_nested(i32* %arg1) local_unnamed_addr {
dec_label_pc_2490:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = load i32, i32* %arg1, align 4, !insn.addr !435
  %2 = add i32 %0, 12, !insn.addr !436
  %3 = inttoptr i32 %2 to i32*, !insn.addr !436
  %4 = load i32, i32* %3, align 4, !insn.addr !436
  %5 = add i32 %4, %1, !insn.addr !436
  ret i32 %5, !insn.addr !437

; uselistorder directives
  uselistorder i32 12, { 1, 0 }
}

define i32 @struct_deep(i32* %arg1) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 8, !insn.addr !438
  %2 = inttoptr i32 %1 to i32*, !insn.addr !438
  %3 = load i32, i32* %2, align 4, !insn.addr !438
  %4 = add i32 %0, 20, !insn.addr !439
  %5 = inttoptr i32 %4 to i32*, !insn.addr !439
  %6 = load i32, i32* %5, align 4, !insn.addr !439
  %7 = add i32 %6, %3, !insn.addr !439
  ret i32 %7, !insn.addr !440
}

define i32 @struct_with_ptr(i32* %arg1) local_unnamed_addr {
dec_label_pc_24d0:
  %storemerge.reg2mem = alloca i32, !insn.addr !441
  %0 = ptrtoint i32* %arg1 to i32
  %1 = load i32, i32* %arg1, align 4, !insn.addr !442
  %2 = add i32 %0, 4, !insn.addr !443
  %3 = inttoptr i32 %2 to i32*, !insn.addr !443
  %4 = load i32, i32* %3, align 4, !insn.addr !443
  %5 = icmp eq i32 %4, 0, !insn.addr !443
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !444
  br i1 %5, label %dec_label_pc_2508, label %dec_label_pc_24ee, !insn.addr !444

dec_label_pc_24ee:                                ; preds = %dec_label_pc_24d0
  %6 = inttoptr i32 %4 to i32*, !insn.addr !445
  %7 = load i32, i32* %6, align 4, !insn.addr !445
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !446
  br label %dec_label_pc_2508, !insn.addr !446

dec_label_pc_2508:                                ; preds = %dec_label_pc_24d0, %dec_label_pc_24ee
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %8 = add i32 %storemerge.reload, %1, !insn.addr !447
  ret i32 %8, !insn.addr !448

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2508, { 1, 0 }
}

define i32 @struct_bitfields(i32* %arg1) local_unnamed_addr {
dec_label_pc_2520:
  %0 = bitcast i32* %arg1 to i16*, !insn.addr !449
  %1 = load i16, i16* %0, align 2
  %2 = urem i16 %1, 2, !insn.addr !450
  %3 = udiv i16 %1, 2, !insn.addr !451
  %4 = urem i16 %3, 4, !insn.addr !452
  %5 = udiv i16 %1, 8, !insn.addr !453
  %6 = urem i16 %5, 8, !insn.addr !454
  %7 = udiv i16 %1, 64, !insn.addr !455
  %narrow = add nuw nsw i16 %7, %2
  %narrow1 = add nuw nsw i16 %narrow, %4
  %narrow2 = add nuw nsw i16 %narrow1, %6
  %8 = zext i16 %narrow2 to i32, !insn.addr !456
  ret i32 %8, !insn.addr !457

; uselistorder directives
  uselistorder i16 8, { 1, 0 }
}

define i32 @union_type(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2570:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !458
  %0 = icmp eq i32 %arg2, 0, !insn.addr !459
  %1 = icmp eq i1 %0, false, !insn.addr !460
  br i1 %1, label %dec_label_pc_2593, label %dec_label_pc_2586, !insn.addr !460

dec_label_pc_2586:                                ; preds = %dec_label_pc_2570
  %2 = load i32, i32* %arg1, align 4, !insn.addr !461
  store i32 %2, i32* %stack_var_-8.0.reg2mem, !insn.addr !462
  br label %dec_label_pc_25cf, !insn.addr !462

dec_label_pc_2593:                                ; preds = %dec_label_pc_2570
  %3 = icmp eq i32 %arg2, 1, !insn.addr !463
  %4 = icmp eq i1 %3, false, !insn.addr !464
  br i1 %4, label %dec_label_pc_25c6, label %dec_label_pc_259d, !insn.addr !464

dec_label_pc_259d:                                ; preds = %dec_label_pc_2593
  %5 = load i32, i32* %arg1, align 4
  %6 = bitcast i32 %5 to float
  %7 = fptosi float %6 to i32, !insn.addr !465
  store i32 %7, i32* %stack_var_-8.0.reg2mem, !insn.addr !466
  br label %dec_label_pc_25cf, !insn.addr !466

dec_label_pc_25c6:                                ; preds = %dec_label_pc_2593
  %8 = bitcast i32* %arg1 to i8*, !insn.addr !467
  %9 = load i8, i8* %8, align 1, !insn.addr !467
  %10 = sext i8 %9 to i32, !insn.addr !467
  store i32 %10, i32* %stack_var_-8.0.reg2mem, !insn.addr !468
  br label %dec_label_pc_25cf, !insn.addr !468

dec_label_pc_25cf:                                ; preds = %dec_label_pc_25c6, %dec_label_pc_259d, %dec_label_pc_2586
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !469

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %arg1, { 1, 0, 2 }
}

define i32 @union_array(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25e0:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !470
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !470
  %storemerge2.reg2mem = alloca i32, !insn.addr !470
  %0 = ptrtoint i32* %arg1 to i32
  %1 = icmp sgt i32 %arg2, 0, !insn.addr !471
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !471
  store i32 0, i32* %stack_var_-8.01.reg2mem, !insn.addr !471
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !471
  br i1 %1, label %dec_label_pc_2606, label %dec_label_pc_2623, !insn.addr !471

dec_label_pc_2606:                                ; preds = %dec_label_pc_25e0, %dec_label_pc_2606
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !472
  %3 = add i32 %2, %0, !insn.addr !472
  %4 = inttoptr i32 %3 to i32*, !insn.addr !472
  %5 = load i32, i32* %4, align 4, !insn.addr !472
  %6 = add i32 %5, %stack_var_-8.01.reload, !insn.addr !473
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !474
  %exitcond = icmp eq i32 %7, %arg2
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !471
  store i32 %6, i32* %stack_var_-8.01.reg2mem, !insn.addr !471
  store i32 %6, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !471
  br i1 %exitcond, label %dec_label_pc_2623, label %dec_label_pc_2606, !insn.addr !471

dec_label_pc_2623:                                ; preds = %dec_label_pc_2606, %dec_label_pc_25e0
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !475

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2606, { 1, 0 }
}

define i32 @enum_type(i32 %arg1) local_unnamed_addr {
dec_label_pc_2630:
  %0 = mul i32 %arg1, 10, !insn.addr !476
  ret i32 %0, !insn.addr !477
}

define i32 @enum_switch(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2640:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp ult i32 %arg2, 4
  br i1 %2, label %dec_label_pc_2667, label %dec_label_pc_26a8, !insn.addr !478

dec_label_pc_2667:                                ; preds = %dec_label_pc_2640
  %3 = add i32 %1, ptrtoint (i32* @global_var_39b5 to i32), !insn.addr !479
  %4 = mul i32 %arg2, 4, !insn.addr !480
  %5 = add i32 %4, add (i32 ptrtoint (i32* @global_var_39b5 to i32), i32 -12224), !insn.addr !480
  %6 = add i32 %5, %1, !insn.addr !480
  %7 = inttoptr i32 %6 to i32*, !insn.addr !480
  %8 = load i32, i32* %7, align 4, !insn.addr !480
  %9 = add i32 %3, %8, !insn.addr !481
  ret i32 %9, !insn.addr !482

dec_label_pc_26a8:                                ; preds = %dec_label_pc_2640
  ret i32 -99, !insn.addr !483

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @struct_func_ptr(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = add i32 %arg2, 4, !insn.addr !484
  %1 = inttoptr i32 %0 to i32*, !insn.addr !484
  %2 = load i32, i32* %1, align 4, !insn.addr !484
  ret i32 %2, !insn.addr !485
}

define i32 @linked_list(i32* %arg1) local_unnamed_addr {
dec_label_pc_26f0:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !486
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !486
  %storemerge2.reg2mem = alloca i32, !insn.addr !486
  %0 = icmp eq i32* %arg1, null, !insn.addr !487
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !488
  br i1 %0, label %dec_label_pc_2729, label %dec_label_pc_2710.lr.ph, !insn.addr !488

dec_label_pc_2710.lr.ph:                          ; preds = %dec_label_pc_26f0
  %1 = ptrtoint i32* %arg1 to i32
  store i32 %1, i32* %storemerge2.reg2mem
  store i32 0, i32* %stack_var_-8.01.reg2mem
  br label %dec_label_pc_2710

dec_label_pc_2710:                                ; preds = %dec_label_pc_2710.lr.ph, %dec_label_pc_2710
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = inttoptr i32 %storemerge2.reload to i32*, !insn.addr !489
  %3 = load i32, i32* %2, align 4, !insn.addr !489
  %4 = add i32 %3, %stack_var_-8.01.reload, !insn.addr !490
  %5 = add i32 %storemerge2.reload, 4, !insn.addr !491
  %6 = inttoptr i32 %5 to i32*, !insn.addr !491
  %7 = load i32, i32* %6, align 4, !insn.addr !491
  %8 = icmp eq i32 %7, 0, !insn.addr !487
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !488
  store i32 %4, i32* %stack_var_-8.01.reg2mem, !insn.addr !488
  store i32 %4, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !488
  br i1 %8, label %dec_label_pc_2729, label %dec_label_pc_2710, !insn.addr !488

dec_label_pc_2729:                                ; preds = %dec_label_pc_2710, %dec_label_pc_26f0
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !492

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2710, { 1, 0 }
}

define i32 @doubly_linked_list(i32* %arg1) local_unnamed_addr {
dec_label_pc_2740:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !493
  %stack_var_-8.01.reg2mem = alloca i32, !insn.addr !493
  %storemerge2.reg2mem = alloca i32, !insn.addr !493
  %0 = icmp eq i32* %arg1, null, !insn.addr !494
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !495
  br i1 %0, label %dec_label_pc_2779, label %dec_label_pc_2760.lr.ph, !insn.addr !495

dec_label_pc_2760.lr.ph:                          ; preds = %dec_label_pc_2740
  %1 = ptrtoint i32* %arg1 to i32
  store i32 %1, i32* %storemerge2.reg2mem
  store i32 0, i32* %stack_var_-8.01.reg2mem
  br label %dec_label_pc_2760

dec_label_pc_2760:                                ; preds = %dec_label_pc_2760.lr.ph, %dec_label_pc_2760
  %stack_var_-8.01.reload = load i32, i32* %stack_var_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = inttoptr i32 %storemerge2.reload to i32*, !insn.addr !496
  %3 = load i32, i32* %2, align 4, !insn.addr !496
  %4 = add i32 %3, %stack_var_-8.01.reload, !insn.addr !497
  %5 = add i32 %storemerge2.reload, 4, !insn.addr !498
  %6 = inttoptr i32 %5 to i32*, !insn.addr !498
  %7 = load i32, i32* %6, align 4, !insn.addr !498
  %8 = icmp eq i32 %7, 0, !insn.addr !494
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !495
  store i32 %4, i32* %stack_var_-8.01.reg2mem, !insn.addr !495
  store i32 %4, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !495
  br i1 %8, label %dec_label_pc_2779, label %dec_label_pc_2760, !insn.addr !495

dec_label_pc_2779:                                ; preds = %dec_label_pc_2760, %dec_label_pc_2740
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !499

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2760, { 1, 0 }
}

define i32 @binary_tree_sum(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2790:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !500
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg2, 0, !insn.addr !501
  %3 = icmp eq i1 %2, false, !insn.addr !502
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !502
  br i1 %3, label %dec_label_pc_27bf, label %dec_label_pc_27fd, !insn.addr !502

dec_label_pc_27bf:                                ; preds = %dec_label_pc_2790
  %4 = add i32 %1, ptrtoint (i32* @global_var_3864 to i32), !insn.addr !503
  %5 = add i32 %arg2, 4, !insn.addr !504
  %6 = inttoptr i32 %5 to i32*, !insn.addr !504
  %7 = load i32, i32* %6, align 4, !insn.addr !504
  %8 = call i32 @binary_tree_sum(i32 %7, i32 %4), !insn.addr !505
  %9 = add i32 %8, %7, !insn.addr !506
  %10 = add i32 %arg2, 8, !insn.addr !507
  %11 = inttoptr i32 %10 to i32*, !insn.addr !507
  %12 = load i32, i32* %11, align 4, !insn.addr !507
  %13 = call i32 @binary_tree_sum(i32 %12, i32 %9), !insn.addr !508
  %14 = add i32 %13, %9, !insn.addr !509
  store i32 %14, i32* %storemerge.reg2mem, !insn.addr !510
  br label %dec_label_pc_27fd, !insn.addr !510

dec_label_pc_27fd:                                ; preds = %dec_label_pc_2790, %dec_label_pc_27bf
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !511

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 2, 1, 0 }
  uselistorder label %dec_label_pc_27fd, { 1, 0 }
}

define i32 @binary_tree(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2810:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @binary_tree_sum(i32 %arg2, i32 %1), !insn.addr !512
  ret i32 %2, !insn.addr !513

; uselistorder directives
  uselistorder i32 (i32, i32)* @binary_tree_sum, { 2, 1, 0 }
}

define i32 @graph_traverse(i32* %arg1) local_unnamed_addr {
dec_label_pc_2840:
  %stack_var_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !514
  %stack_var_-8.1.lcssa.reg2mem = alloca i32, !insn.addr !514
  %stack_var_-8.14.reg2mem = alloca i32, !insn.addr !514
  %storemerge5.reg2mem = alloca i32, !insn.addr !514
  %stack_var_-8.06.reg2mem = alloca i32, !insn.addr !514
  %storemerge17.reg2mem = alloca i32, !insn.addr !514
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 40, !insn.addr !515
  %2 = inttoptr i32 %1 to i32*, !insn.addr !515
  %3 = load i32, i32* %2, align 4, !insn.addr !515
  %4 = icmp sgt i32 %3, 0, !insn.addr !516
  store i32 0, i32* %storemerge17.reg2mem, !insn.addr !516
  store i32 0, i32* %stack_var_-8.06.reg2mem, !insn.addr !516
  store i32 0, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !516
  br i1 %4, label %dec_label_pc_2866, label %dec_label_pc_28a8, !insn.addr !516

dec_label_pc_2866:                                ; preds = %dec_label_pc_2840, %dec_label_pc_289a
  %stack_var_-8.06.reload = load i32, i32* %stack_var_-8.06.reg2mem
  %storemerge17.reload = load i32, i32* %storemerge17.reg2mem
  %5 = mul i32 %storemerge17.reload, 4, !insn.addr !517
  %6 = add i32 %5, %0, !insn.addr !517
  %storemerge.in2 = inttoptr i32 %6 to i32*
  %storemerge3 = load i32, i32* %storemerge.in2, align 4
  %7 = icmp eq i32 %storemerge3, 0, !insn.addr !518
  store i32 %storemerge3, i32* %storemerge5.reg2mem, !insn.addr !519
  store i32 %stack_var_-8.06.reload, i32* %stack_var_-8.14.reg2mem, !insn.addr !519
  store i32 %stack_var_-8.06.reload, i32* %stack_var_-8.1.lcssa.reg2mem, !insn.addr !519
  br i1 %7, label %dec_label_pc_289a, label %dec_label_pc_287c, !insn.addr !519

dec_label_pc_287c:                                ; preds = %dec_label_pc_2866, %dec_label_pc_287c
  %stack_var_-8.14.reload = load i32, i32* %stack_var_-8.14.reg2mem
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %8 = inttoptr i32 %storemerge5.reload to i32*, !insn.addr !520
  %9 = load i32, i32* %8, align 4, !insn.addr !520
  %10 = add i32 %9, %stack_var_-8.14.reload, !insn.addr !521
  %11 = add i32 %storemerge5.reload, 4, !insn.addr !522
  %storemerge.in = inttoptr i32 %11 to i32*
  %storemerge = load i32, i32* %storemerge.in, align 4
  %12 = icmp eq i32 %storemerge, 0, !insn.addr !518
  store i32 %storemerge, i32* %storemerge5.reg2mem, !insn.addr !519
  store i32 %10, i32* %stack_var_-8.14.reg2mem, !insn.addr !519
  store i32 %10, i32* %stack_var_-8.1.lcssa.reg2mem, !insn.addr !519
  br i1 %12, label %dec_label_pc_289a, label %dec_label_pc_287c, !insn.addr !519

dec_label_pc_289a:                                ; preds = %dec_label_pc_287c, %dec_label_pc_2866
  %stack_var_-8.1.lcssa.reload = load i32, i32* %stack_var_-8.1.lcssa.reg2mem
  %13 = add nuw nsw i32 %storemerge17.reload, 1, !insn.addr !523
  %exitcond = icmp eq i32 %13, %3
  store i32 %13, i32* %storemerge17.reg2mem, !insn.addr !516
  store i32 %stack_var_-8.1.lcssa.reload, i32* %stack_var_-8.06.reg2mem, !insn.addr !516
  store i32 %stack_var_-8.1.lcssa.reload, i32* %stack_var_-8.0.lcssa.reg2mem, !insn.addr !516
  br i1 %exitcond, label %dec_label_pc_28a8, label %dec_label_pc_2866, !insn.addr !516

dec_label_pc_28a8:                                ; preds = %dec_label_pc_289a, %dec_label_pc_2840
  %stack_var_-8.0.lcssa.reload = load i32, i32* %stack_var_-8.0.lcssa.reg2mem
  ret i32 %stack_var_-8.0.lcssa.reload, !insn.addr !524

; uselistorder directives
  uselistorder i32 %storemerge5.reload, { 1, 0 }
  uselistorder i32* %storemerge17.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-8.14.reg2mem, { 2, 0, 1 }
  uselistorder i32 4, { 16, 0, 17, 18, 19, 20, 1, 13, 2, 21, 22, 23, 3, 24, 15, 4, 25, 5, 6, 7, 8, 9, 10, 11, 12, 14 }
  uselistorder i32 40, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_287c, { 1, 0 }
  uselistorder label %dec_label_pc_2866, { 1, 0 }
}

define i32 @test_composite_types(i32 %arg1) local_unnamed_addr {
dec_label_pc_28b0:
  %0 = alloca i32
  %stack_var_-292 = alloca i32, align 4
  %stack_var_-244 = alloca i32, align 4
  %stack_var_-236 = alloca i32, align 4
  %stack_var_-220 = alloca i32, align 4
  %stack_var_-196 = alloca i32, align 4
  %stack_var_-172 = alloca i32, align 4
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-148 = alloca i32, align 4
  %stack_var_-140 = alloca i32, align 4
  %stack_var_-132 = alloca i32, align 4
  %stack_var_-116 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10929), !insn.addr !525
  %3 = inttoptr i32 %2 to i8*, !insn.addr !526
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !527
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12116), !insn.addr !528
  %6 = inttoptr i32 %5 to i32*, !insn.addr !528
  %7 = load i32, i32* %6, align 4, !insn.addr !528
  store i32 %7, i32* %stack_var_-20, align 4, !insn.addr !529
  %8 = call i32 @struct_simple(i32* nonnull %stack_var_-20), !insn.addr !530
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10901), !insn.addr !531
  %10 = inttoptr i32 %9 to i8*, !insn.addr !532
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !533
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12104), !insn.addr !534
  %13 = inttoptr i32 %12 to i32*, !insn.addr !535
  %14 = call i32* @memcpy(i32* nonnull %stack_var_-44, i32* %13, i32 24), !insn.addr !535
  %15 = call i32 @struct_array(i32* nonnull %stack_var_-44, i32 2), !insn.addr !536
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10870), !insn.addr !537
  %17 = inttoptr i32 %16 to i8*, !insn.addr !538
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !539
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12080), !insn.addr !540
  %20 = inttoptr i32 %19 to i32*, !insn.addr !541
  %21 = call i32* @memcpy(i32* nonnull %stack_var_-68, i32* %20, i32 20), !insn.addr !541
  %22 = call i32 @struct_nested(i32* nonnull %stack_var_-68), !insn.addr !542
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10840), !insn.addr !543
  %24 = inttoptr i32 %23 to i8*, !insn.addr !544
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !545
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12060), !insn.addr !546
  %27 = inttoptr i32 %26 to i32*, !insn.addr !547
  %28 = call i32* @memcpy(i32* nonnull %stack_var_-116, i32* %27, i32 48), !insn.addr !547
  %29 = call i32 @struct_deep(i32* nonnull %stack_var_-116), !insn.addr !548
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10809), !insn.addr !549
  %31 = inttoptr i32 %30 to i8*, !insn.addr !550
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !551
  store i32 10, i32* %stack_var_-132, align 4, !insn.addr !552
  %33 = call i32 @struct_with_ptr(i32* nonnull %stack_var_-132), !insn.addr !553
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10780), !insn.addr !554
  %35 = inttoptr i32 %34 to i8*, !insn.addr !555
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !556
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12240), !insn.addr !557
  %38 = inttoptr i32 %37 to i32*, !insn.addr !557
  %39 = load i32, i32* %38, align 4, !insn.addr !557
  store i32 %39, i32* %stack_var_-140, align 4, !insn.addr !558
  %40 = call i32 @struct_bitfields(i32* nonnull %stack_var_-140), !insn.addr !559
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10747), !insn.addr !560
  %42 = inttoptr i32 %41 to i8*, !insn.addr !561
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !562
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12264), !insn.addr !563
  %45 = inttoptr i32 %44 to i32*, !insn.addr !563
  %46 = load i32, i32* %45, align 4, !insn.addr !563
  store i32 %46, i32* %stack_var_-148, align 4, !insn.addr !564
  %47 = call i32 @union_type(i32* nonnull %stack_var_-148, i32 0), !insn.addr !565
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10713), !insn.addr !566
  %49 = inttoptr i32 %48 to i8*, !insn.addr !567
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !568
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12012), !insn.addr !569
  %52 = inttoptr i32 %51 to i32*, !insn.addr !569
  %53 = load i32, i32* %52, align 4, !insn.addr !569
  store i32 %53, i32* %stack_var_-164, align 4, !insn.addr !570
  %54 = call i32 @union_array(i32* nonnull %stack_var_-164, i32 3), !insn.addr !571
  %55 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10685), !insn.addr !572
  %56 = inttoptr i32 %55 to i8*, !insn.addr !573
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !574
  %58 = call i32 @enum_type(i32 1), !insn.addr !575
  %59 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10656), !insn.addr !576
  %60 = inttoptr i32 %59 to i8*, !insn.addr !577
  %61 = call i32 (i8*, ...) @printf(i8* %60), !insn.addr !578
  %62 = call i32 @enum_switch(i32 2, i32 ptrtoint (i32* @0 to i32)), !insn.addr !579
  %63 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10629), !insn.addr !580
  %64 = inttoptr i32 %63 to i8*, !insn.addr !581
  %65 = call i32 (i8*, ...) @printf(i8* %64), !insn.addr !582
  %66 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -236), !insn.addr !583
  %67 = inttoptr i32 %66 to i32*, !insn.addr !583
  %68 = load i32, i32* %67, align 4, !insn.addr !583
  store i32 %68, i32* %stack_var_-172, align 4, !insn.addr !584
  %69 = call i32 @struct_func_ptr(i32* nonnull %stack_var_-172, i32 ptrtoint (i32* @0 to i32)), !insn.addr !585
  %70 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10600), !insn.addr !586
  %71 = inttoptr i32 %70 to i8*, !insn.addr !587
  %72 = call i32 (i8*, ...) @printf(i8* %71), !insn.addr !588
  store i32 10, i32* %stack_var_-196, align 4, !insn.addr !589
  %73 = call i32 @linked_list(i32* nonnull %stack_var_-196), !insn.addr !590
  %74 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10567), !insn.addr !591
  %75 = inttoptr i32 %74 to i8*, !insn.addr !592
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !593
  store i32 10, i32* %stack_var_-220, align 4, !insn.addr !594
  %77 = call i32 @doubly_linked_list(i32* nonnull %stack_var_-220), !insn.addr !595
  %78 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10538), !insn.addr !596
  %79 = inttoptr i32 %78 to i8*, !insn.addr !597
  %80 = call i32 (i8*, ...) @printf(i8* %79), !insn.addr !598
  %81 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12000), !insn.addr !599
  %82 = inttoptr i32 %81 to i32*, !insn.addr !599
  %83 = load i32, i32* %82, align 4, !insn.addr !599
  store i32 %83, i32* %stack_var_-236, align 4, !insn.addr !600
  %84 = call i32 @binary_tree(i32* nonnull %stack_var_-236, i32 ptrtoint (i32* @0 to i32)), !insn.addr !601
  %85 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10502), !insn.addr !602
  %86 = inttoptr i32 %85 to i8*, !insn.addr !603
  %87 = call i32 (i8*, ...) @printf(i8* %86), !insn.addr !604
  %88 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12232), !insn.addr !605
  %89 = inttoptr i32 %88 to i32*, !insn.addr !605
  %90 = load i32, i32* %89, align 4, !insn.addr !605
  store i32 %90, i32* %stack_var_-244, align 4, !insn.addr !606
  %91 = ptrtoint i32* %stack_var_-244 to i32, !insn.addr !607
  store i32 %91, i32* %stack_var_-292, align 4, !insn.addr !607
  %92 = call i32 @graph_traverse(i32* nonnull %stack_var_-292), !insn.addr !608
  %93 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10473), !insn.addr !609
  %94 = inttoptr i32 %93 to i8*, !insn.addr !610
  %95 = call i32 (i8*, ...) @printf(i8* %94), !insn.addr !611
  ret i32 %95, !insn.addr !612

; uselistorder directives
  uselistorder i32 %1, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 3, { 2, 3, 4, 0, 1 }
  uselistorder i32 10, { 8, 9, 10, 5, 16, 6, 11, 12, 13, 17, 14, 7, 0, 1, 3, 4, 2, 15, 18 }
  uselistorder i32 20, { 3, 8, 4, 5, 6, 0, 1, 7, 2 }
  uselistorder i32 2, { 6, 7, 0, 8, 1, 2, 10, 9, 3, 4, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 55 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2dd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint ([27 x i8]* @global_var_3224 to i32), !insn.addr !613
  %3 = call i32 @test_data_types_l1(i32 %2), !insn.addr !614
  %4 = call i32 @test_array_types(i32 ptrtoint (i32* @0 to i32)), !insn.addr !615
  %5 = call i32 @test_pointer_types(i32 ptrtoint (i32* @0 to i32)), !insn.addr !616
  %6 = call i32 @test_composite_types(i32 ptrtoint (i32* @0 to i32)), !insn.addr !617
  ret i32 0, !insn.addr !618

; uselistorder directives
  uselistorder i32 0, { 48, 62, 67, 59, 0, 1, 2, 50, 3, 68, 69, 5, 4, 70, 7, 6, 8, 9, 10, 51, 71, 11, 72, 12, 13, 14, 52, 73, 63, 74, 16, 17, 15, 53, 18, 75, 19, 20, 21, 22, 60, 23, 24, 25, 26, 27, 54, 76, 77, 28, 29, 30, 55, 31, 32, 33, 56, 34, 35, 36, 57, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 58, 61, 64, 78, 47, 79, 49, 65, 66 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2e20:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !619
  %ebx.0.reg2mem = alloca i32, !insn.addr !619
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !620
  %3 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_31d7 to i32), i32 -260), !insn.addr !621
  %4 = inttoptr i32 %3 to i32*, !insn.addr !621
  %5 = load i32, i32* %4, align 4, !insn.addr !621
  %6 = icmp eq i32 %5, -1, !insn.addr !622
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !623
  store i32 -1, i32* %merge.reg2mem, !insn.addr !623
  br i1 %6, label %dec_label_pc_2e5d, label %dec_label_pc_2e50, !insn.addr !623

dec_label_pc_2e50:                                ; preds = %dec_label_pc_2e20, %dec_label_pc_2e50
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !624
  %8 = inttoptr i32 %7 to i32*, !insn.addr !624
  %9 = load i32, i32* %8, align 4, !insn.addr !624
  %10 = icmp eq i32 %9, -1, !insn.addr !625
  %11 = icmp eq i1 %10, false, !insn.addr !626
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !626
  store i32 %9, i32* %merge.reg2mem, !insn.addr !626
  br i1 %11, label %dec_label_pc_2e50, label %dec_label_pc_2e5d, !insn.addr !626

dec_label_pc_2e5d:                                ; preds = %dec_label_pc_2e50, %dec_label_pc_2e20
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !627

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 9, 0, 1, 2, 3, 4, 5, 6, 7, 8 }
  uselistorder i32 -1, { 5, 0, 6, 1, 3, 4, 2 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e50, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_2e6c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !628
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !629
  ret i32 %3, !insn.addr !630

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 21, 23, 22, 20, 19, 86, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 18, 137, 29, 28, 27, 26, 25, 24, 17, 30, 16, 33, 32, 31, 36, 35, 34, 15, 138, 39, 38, 37, 87, 40, 41, 139, 44, 43, 42, 91, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 14, 88, 45, 140, 49, 48, 47, 46, 141, 142, 143, 144, 145, 146, 147, 148, 149, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 57, 56, 55, 54, 53, 52, 51, 50, 13, 150, 60, 59, 58, 61, 151, 65, 64, 63, 62, 152, 68, 67, 66, 153, 71, 70, 69, 154, 155, 156, 77, 76, 75, 74, 73, 72, 157, 79, 78, 158, 80, 159, 83, 82, 81, 135, 134, 12, 89, 84, 11, 10, 9, 90, 8, 7, 85, 6, 5, 4, 3, 136, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4239}
!9 = !{i64 4256}
!10 = !{i64 4262}
!11 = !{i64 4267}
!12 = !{i64 4271}
!13 = !{i64 4275}
!14 = !{i64 4288}
!15 = !{i64 4305}
!16 = !{i64 4344}
!17 = !{i64 4352}
!18 = !{i64 4422}
!19 = !{i64 4432}
!20 = !{i64 4440}
!21 = !{i64 4456}
!22 = !{i64 4463}
!23 = !{i64 4465}
!24 = !{i64 4471}
!25 = !{i64 4473}
!26 = !{i64 4486}
!27 = !{i64 4491}
!28 = !{i64 4550}
!29 = !{i64 4555}
!30 = !{i64 4569}
!31 = !{i64 4580}
!32 = !{i64 4588}
!33 = !{i64 4592}
!34 = !{i64 4662}
!35 = !{i64 4670}
!36 = !{i64 4691}
!37 = !{i64 4693}
!38 = !{i64 4695}
!39 = !{i64 4713}
!40 = !{i64 4716}
!41 = !{i64 4720}
!42 = !{i64 4745}
!43 = !{i64 4749}
!44 = !{i64 4774}
!45 = !{i64 4781}
!46 = !{i64 4804}
!47 = !{i64 4807}
!48 = !{i64 4813}
!49 = !{i64 4815}
!50 = !{i64 4821}
!51 = !{i64 4824}
!52 = !{i64 4852}
!53 = !{i64 4855}
!54 = !{i64 4861}
!55 = !{i64 4863}
!56 = !{i64 4869}
!57 = !{i64 4872}
!58 = !{i64 4905}
!59 = !{i64 4912}
!60 = !{i64 4928}
!61 = !{i64 4943}
!62 = !{i64 4945}
!63 = !{i64 4951}
!64 = !{i64 4966}
!65 = !{i64 4985}
!66 = !{i64 4987}
!67 = !{i64 4991}
!68 = !{i64 5020}
!69 = !{i64 5027}
!70 = !{i64 5062}
!71 = !{i64 5070}
!72 = !{i64 5072}
!73 = !{i64 5088}
!74 = !{i64 5104}
!75 = !{i64 5113}
!76 = !{i64 5115}
!77 = !{i64 5131}
!78 = !{i64 5152}
!79 = !{i64 5175}
!80 = !{i64 5191}
!81 = !{i64 5197}
!82 = !{i64 5199}
!83 = !{i64 5215}
!84 = !{i64 5230}
!85 = !{i64 5236}
!86 = !{i64 5238}
!87 = !{i64 5254}
!88 = !{i64 5269}
!89 = !{i64 5275}
!90 = !{i64 5277}
!91 = !{i64 5300}
!92 = !{i64 5318}
!93 = !{i64 5324}
!94 = !{i64 5326}
!95 = !{i64 5342}
!96 = !{i64 5361}
!97 = !{i64 5367}
!98 = !{i64 5369}
!99 = !{i64 5392}
!100 = !{i64 5411}
!101 = !{i64 5417}
!102 = !{i64 5419}
!103 = !{i64 5429}
!104 = !{i64 5437}
!105 = !{i64 5456}
!106 = !{i64 5462}
!107 = !{i64 5464}
!108 = !{i64 5479}
!109 = !{i64 5492}
!110 = !{i64 5498}
!111 = !{i64 5505}
!112 = !{i64 5520}
!113 = !{i64 5546}
!114 = !{i64 5561}
!115 = !{i64 5587}
!116 = !{i64 5595}
!117 = !{i64 5608}
!118 = !{i64 5616}
!119 = !{i64 5622}
!120 = !{i64 5629}
!121 = !{i64 5637}
!122 = !{i64 5650}
!123 = !{i64 5658}
!124 = !{i64 5664}
!125 = !{i64 5671}
!126 = !{i64 5681}
!127 = !{i64 5696}
!128 = !{i64 5728}
!129 = !{i64 5740}
!130 = !{i64 5743}
!131 = !{i64 5752}
!132 = !{i64 5770}
!133 = !{i64 5776}
!134 = !{i64 5783}
!135 = !{i64 5796}
!136 = !{i64 5800}
!137 = !{i64 5812}
!138 = !{i64 5803}
!139 = !{i64 5830}
!140 = !{i64 5840}
!141 = !{i64 5885}
!142 = !{i64 5888}
!143 = !{i64 5897}
!144 = !{i64 5867}
!145 = !{i64 5915}
!146 = !{i64 5920}
!147 = !{i64 5990}
!148 = !{i64 5994}
!149 = !{i64 5996}
!150 = !{i64 6000}
!151 = !{i64 6005}
!152 = !{i64 6008}
!153 = !{i64 6017}
!154 = !{i64 5981}
!155 = !{i64 6036}
!156 = !{i64 5964}
!157 = !{i64 6055}
!158 = !{i64 5947}
!159 = !{i64 6073}
!160 = !{i64 6080}
!161 = !{i64 6112}
!162 = !{i64 6124}
!163 = !{i64 6127}
!164 = !{i64 6136}
!165 = !{i64 6154}
!166 = !{i64 6160}
!167 = !{i64 6192}
!168 = !{i64 6201}
!169 = !{i64 6205}
!170 = !{i64 6207}
!171 = !{i64 6209}
!172 = !{i64 6218}
!173 = !{i64 6236}
!174 = !{i64 6240}
!175 = !{i64 6263}
!176 = !{i64 6312}
!177 = !{i64 6324}
!178 = !{i64 6328}
!179 = !{i64 6343}
!180 = !{i64 6345}
!181 = !{i64 6348}
!182 = !{i64 6359}
!183 = !{i64 6377}
!184 = !{i64 6384}
!185 = !{i64 6403}
!186 = !{i64 6407}
!187 = !{i64 6419}
!188 = !{i64 6425}
!189 = !{i64 6441}
!190 = !{i64 6465}
!191 = !{i64 6469}
!192 = !{i64 6472}
!193 = !{i64 6475}
!194 = !{i64 6485}
!195 = !{i64 6496}
!196 = !{i64 6528}
!197 = !{i64 6540}
!198 = !{i64 6543}
!199 = !{i64 6552}
!200 = !{i64 6570}
!201 = !{i64 6576}
!202 = !{i64 6604}
!203 = !{i64 6610}
!204 = !{i64 6613}
!205 = !{i64 6627}
!206 = !{i64 6648}
!207 = !{i64 6673}
!208 = !{i64 6684}
!209 = !{i64 6690}
!210 = !{i64 6697}
!211 = !{i64 6708}
!212 = !{i64 6714}
!213 = !{i64 6734}
!214 = !{i64 6745}
!215 = !{i64 6751}
!216 = !{i64 6758}
!217 = !{i64 6863}
!218 = !{i64 6869}
!219 = !{i64 6876}
!220 = !{i64 6815}
!221 = !{i64 6821}
!222 = !{i64 6884}
!223 = !{i64 6893}
!224 = !{i64 6803}
!225 = !{i64 6918}
!226 = !{i64 6780}
!227 = !{i64 6947}
!228 = !{i64 6958}
!229 = !{i64 6964}
!230 = !{i64 6971}
!231 = !{i64 7045}
!232 = !{i64 7051}
!233 = !{i64 7058}
!234 = !{i64 7060}
!235 = !{i64 7067}
!236 = !{i64 7075}
!237 = !{i64 7088}
!238 = !{i64 7039}
!239 = !{i64 7113}
!240 = !{i64 7016}
!241 = !{i64 7138}
!242 = !{i64 6993}
!243 = !{i64 6577}
!244 = !{i64 7167}
!245 = !{i64 7178}
!246 = !{i64 7184}
!247 = !{i64 7191}
!248 = !{i64 7202}
!249 = !{i64 7208}
!250 = !{i64 7255}
!251 = !{i64 7266}
!252 = !{i64 7272}
!253 = !{i64 7279}
!254 = !{i64 7314}
!255 = !{i64 7307}
!256 = !{i64 7320}
!257 = !{i64 7327}
!258 = !{i64 7329}
!259 = !{i64 7337}
!260 = !{i64 7301}
!261 = !{i64 7374}
!262 = !{i64 7385}
!263 = !{i64 7391}
!264 = !{i64 7398}
!265 = !{i64 7403}
!266 = !{i64 7423}
!267 = !{i64 7445}
!268 = !{i64 7502}
!269 = !{i64 7508}
!270 = !{i64 7526}
!271 = !{i64 7532}
!272 = !{i64 7541}
!273 = !{i64 7549}
!274 = !{i64 7578}
!275 = !{i64 7589}
!276 = !{i64 7595}
!277 = !{i64 7602}
!278 = !{i64 7642}
!279 = !{i64 7655}
!280 = !{i64 7624}
!281 = !{i64 7716}
!282 = !{i64 7727}
!283 = !{i64 7733}
!284 = !{i64 7740}
!285 = !{i64 7753}
!286 = !{i64 7769}
!287 = !{i64 7771}
!288 = !{i64 7775}
!289 = !{i64 7785}
!290 = !{i64 7787}
!291 = !{i64 7789}
!292 = !{i64 7793}
!293 = !{i64 7817}
!294 = !{i64 7819}
!295 = !{i64 7821}
!296 = !{i64 7823}
!297 = !{i64 7827}
!298 = !{i64 7840}
!299 = !{i64 7872}
!300 = !{i64 7881}
!301 = !{i64 7883}
!302 = !{i64 7892}
!303 = !{i64 7901}
!304 = !{i64 7919}
!305 = !{i64 7935}
!306 = !{i64 7939}
!307 = !{i64 7967}
!308 = !{i64 7969}
!309 = !{i64 7973}
!310 = !{i64 7984}
!311 = !{i64 7994}
!312 = !{i64 7998}
!313 = !{i64 8007}
!314 = !{i64 8012}
!315 = !{i64 8017}
!316 = !{i64 8021}
!317 = !{i64 8030}
!318 = !{i64 8036}
!319 = !{i64 8060}
!320 = !{i64 8078}
!321 = !{i64 8081}
!322 = !{i64 8105}
!323 = !{i64 8107}
!324 = !{i64 8113}
!325 = !{i64 8121}
!326 = !{i64 8167}
!327 = !{i64 8242}
!328 = !{i64 8286}
!329 = !{i64 8292}
!330 = !{i64 8314}
!331 = !{i64 8329}
!332 = !{i64 8333}
!333 = !{i64 8361}
!334 = !{i64 8367}
!335 = !{i64 8370}
!336 = !{i64 8378}
!337 = !{i64 8391}
!338 = !{i64 8399}
!339 = !{i64 8405}
!340 = !{i64 8412}
!341 = !{i64 8420}
!342 = !{i64 8430}
!343 = !{i64 8445}
!344 = !{i64 8453}
!345 = !{i64 8459}
!346 = !{i64 8466}
!347 = !{i64 8474}
!348 = !{i64 8484}
!349 = !{i64 8490}
!350 = !{i64 8505}
!351 = !{i64 8513}
!352 = !{i64 8519}
!353 = !{i64 8526}
!354 = !{i64 8537}
!355 = !{i64 8558}
!356 = !{i64 8580}
!357 = !{i64 8588}
!358 = !{i64 8594}
!359 = !{i64 8601}
!360 = !{i64 8612}
!361 = !{i64 8633}
!362 = !{i64 8655}
!363 = !{i64 8663}
!364 = !{i64 8669}
!365 = !{i64 8676}
!366 = !{i64 8687}
!367 = !{i64 8708}
!368 = !{i64 8732}
!369 = !{i64 8740}
!370 = !{i64 8746}
!371 = !{i64 8753}
!372 = !{i64 8761}
!373 = !{i64 8768}
!374 = !{i64 8788}
!375 = !{i64 8796}
!376 = !{i64 8802}
!377 = !{i64 8809}
!378 = !{i64 8831}
!379 = !{i64 8852}
!380 = !{i64 8860}
!381 = !{i64 8873}
!382 = !{i64 8881}
!383 = !{i64 8887}
!384 = !{i64 8894}
!385 = !{i64 8902}
!386 = !{i64 8915}
!387 = !{i64 8923}
!388 = !{i64 8929}
!389 = !{i64 8936}
!390 = !{i64 8944}
!391 = !{i64 8961}
!392 = !{i64 8969}
!393 = !{i64 8975}
!394 = !{i64 8982}
!395 = !{i64 8990}
!396 = !{i64 8997}
!397 = !{i64 9013}
!398 = !{i64 9021}
!399 = !{i64 9027}
!400 = !{i64 9034}
!401 = !{i64 9042}
!402 = !{i64 9055}
!403 = !{i64 9063}
!404 = !{i64 9069}
!405 = !{i64 9076}
!406 = !{i64 9091}
!407 = !{i64 9108}
!408 = !{i64 9116}
!409 = !{i64 9122}
!410 = !{i64 9129}
!411 = !{i64 9142}
!412 = !{i64 9161}
!413 = !{i64 9165}
!414 = !{i64 9180}
!415 = !{i64 9182}
!416 = !{i64 9188}
!417 = !{i64 9193}
!418 = !{i64 9202}
!419 = !{i64 9205}
!420 = !{i64 9209}
!421 = !{i64 9225}
!422 = !{i64 9230}
!423 = !{i64 9236}
!424 = !{i64 9240}
!425 = !{i64 9248}
!426 = !{i64 9280}
!427 = !{i64 9289}
!428 = !{i64 9293}
!429 = !{i64 9295}
!430 = !{i64 9306}
!431 = !{i64 9318}
!432 = !{i64 9321}
!433 = !{i64 9330}
!434 = !{i64 9348}
!435 = !{i64 9369}
!436 = !{i64 9374}
!437 = !{i64 9378}
!438 = !{i64 9401}
!439 = !{i64 9407}
!440 = !{i64 9411}
!441 = !{i64 9424}
!442 = !{i64 9436}
!443 = !{i64 9444}
!444 = !{i64 9448}
!445 = !{i64 9460}
!446 = !{i64 9465}
!447 = !{i64 9486}
!448 = !{i64 9492}
!449 = !{i64 9513}
!450 = !{i64 9516}
!451 = !{i64 9529}
!452 = !{i64 9533}
!453 = !{i64 9548}
!454 = !{i64 9552}
!455 = !{i64 9567}
!456 = !{i64 9574}
!457 = !{i64 9577}
!458 = !{i64 9584}
!459 = !{i64 9596}
!460 = !{i64 9600}
!461 = !{i64 9609}
!462 = !{i64 9614}
!463 = !{i64 9619}
!464 = !{i64 9623}
!465 = !{i64 9653}
!466 = !{i64 9665}
!467 = !{i64 9673}
!468 = !{i64 9676}
!469 = !{i64 9686}
!470 = !{i64 9696}
!471 = !{i64 9728}
!472 = !{i64 9740}
!473 = !{i64 9743}
!474 = !{i64 9752}
!475 = !{i64 9770}
!476 = !{i64 9782}
!477 = !{i64 9787}
!478 = !{i64 9825}
!479 = !{i64 9804}
!480 = !{i64 9837}
!481 = !{i64 9844}
!482 = !{i64 9846}
!483 = !{i64 9910}
!484 = !{i64 9943}
!485 = !{i64 9961}
!486 = !{i64 9968}
!487 = !{i64 9990}
!488 = !{i64 9994}
!489 = !{i64 10003}
!490 = !{i64 10005}
!491 = !{i64 10014}
!492 = !{i64 10032}
!493 = !{i64 10048}
!494 = !{i64 10070}
!495 = !{i64 10074}
!496 = !{i64 10083}
!497 = !{i64 10085}
!498 = !{i64 10094}
!499 = !{i64 10112}
!500 = !{i64 10128}
!501 = !{i64 10153}
!502 = !{i64 10157}
!503 = !{i64 10141}
!504 = !{i64 10189}
!505 = !{i64 10195}
!506 = !{i64 10208}
!507 = !{i64 10216}
!508 = !{i64 10222}
!509 = !{i64 10232}
!510 = !{i64 10234}
!511 = !{i64 10245}
!512 = !{i64 10282}
!513 = !{i64 10292}
!514 = !{i64 10304}
!515 = !{i64 10333}
!516 = !{i64 10336}
!517 = !{i64 10348}
!518 = !{i64 10354}
!519 = !{i64 10358}
!520 = !{i64 10367}
!521 = !{i64 10369}
!522 = !{i64 10378}
!523 = !{i64 10397}
!524 = !{i64 10415}
!525 = !{i64 10444}
!526 = !{i64 10450}
!527 = !{i64 10453}
!528 = !{i64 10464}
!529 = !{i64 10470}
!530 = !{i64 10497}
!531 = !{i64 10508}
!532 = !{i64 10514}
!533 = !{i64 10521}
!534 = !{i64 10535}
!535 = !{i64 10556}
!536 = !{i64 10581}
!537 = !{i64 10592}
!538 = !{i64 10598}
!539 = !{i64 10605}
!540 = !{i64 10619}
!541 = !{i64 10640}
!542 = !{i64 10657}
!543 = !{i64 10668}
!544 = !{i64 10674}
!545 = !{i64 10681}
!546 = !{i64 10695}
!547 = !{i64 10716}
!548 = !{i64 10733}
!549 = !{i64 10744}
!550 = !{i64 10750}
!551 = !{i64 10757}
!552 = !{i64 10786}
!553 = !{i64 10805}
!554 = !{i64 10816}
!555 = !{i64 10822}
!556 = !{i64 10829}
!557 = !{i64 10840}
!558 = !{i64 10846}
!559 = !{i64 10873}
!560 = !{i64 10884}
!561 = !{i64 10890}
!562 = !{i64 10897}
!563 = !{i64 10908}
!564 = !{i64 10914}
!565 = !{i64 10939}
!566 = !{i64 10950}
!567 = !{i64 10956}
!568 = !{i64 10963}
!569 = !{i64 10974}
!570 = !{i64 10980}
!571 = !{i64 11027}
!572 = !{i64 11038}
!573 = !{i64 11044}
!574 = !{i64 11051}
!575 = !{i64 11069}
!576 = !{i64 11080}
!577 = !{i64 11086}
!578 = !{i64 11093}
!579 = !{i64 11111}
!580 = !{i64 11122}
!581 = !{i64 11128}
!582 = !{i64 11135}
!583 = !{i64 11146}
!584 = !{i64 11152}
!585 = !{i64 11179}
!586 = !{i64 11190}
!587 = !{i64 11196}
!588 = !{i64 11203}
!589 = !{i64 11214}
!590 = !{i64 11293}
!591 = !{i64 11304}
!592 = !{i64 11310}
!593 = !{i64 11317}
!594 = !{i64 11328}
!595 = !{i64 11419}
!596 = !{i64 11430}
!597 = !{i64 11436}
!598 = !{i64 11443}
!599 = !{i64 11454}
!600 = !{i64 11460}
!601 = !{i64 11499}
!602 = !{i64 11510}
!603 = !{i64 11516}
!604 = !{i64 11523}
!605 = !{i64 11534}
!606 = !{i64 11540}
!607 = !{i64 11668}
!608 = !{i64 11683}
!609 = !{i64 11694}
!610 = !{i64 11700}
!611 = !{i64 11707}
!612 = !{i64 11720}
!613 = !{i64 11741}
!614 = !{i64 11757}
!615 = !{i64 11765}
!616 = !{i64 11773}
!617 = !{i64 11781}
!618 = !{i64 11793}
!619 = !{i64 11808}
!620 = !{i64 11812}
!621 = !{i64 11823}
!622 = !{i64 11829}
!623 = !{i64 11832}
!624 = !{i64 11858}
!625 = !{i64 11864}
!626 = !{i64 11867}
!627 = !{i64 11873}
!628 = !{i64 11892}
!629 = !{i64 11903}
!630 = !{i64 11912}
