source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_1dcd = local_unnamed_addr constant i32 -393377024
@global_var_4036 = local_unnamed_addr constant i32 1835008
@global_var_4004 = local_unnamed_addr constant i32 135151872
@global_var_3f61 = constant i32 0
@global_var_39b5 = constant i32 0
@global_var_3936 = local_unnamed_addr constant i32 25691140
@global_var_3864 = local_unnamed_addr constant i32 -5880
@global_var_37e6 = local_unnamed_addr constant i32 74776575
@global_var_3741 = constant i32 -134217728
@global_var_3224 = local_unnamed_addr constant [27 x i8] c"L1-08 (process_ld): %.2Lf\0A\00"
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

define i8 @process_char(i8 %c) local_unnamed_addr {
dec_label_pc_1200:
  %c.off = add i8 %c, -65
  %0 = icmp ugt i8 %c.off, 25
  %1 = add i8 %c, 32
  %storemerge = select i1 %0, i8 %c, i8 %1
  ret i8 %storemerge, !insn.addr !34

; uselistorder directives
  uselistorder i8 %c, { 1, 2, 0 }
}

define i16 @process_short(i16 %a, i16 %b) local_unnamed_addr {
dec_label_pc_1240:
  %0 = add i16 %b, %a, !insn.addr !35
  ret i16 %0, !insn.addr !36
}

define i32 @process_int(i32 %x) local_unnamed_addr {
dec_label_pc_1260:
  %0 = mul i32 %x, 2, !insn.addr !37
  %1 = or i32 %0, 1, !insn.addr !38
  ret i32 %1, !insn.addr !39
}

define i32 @process_long(i32 %x) local_unnamed_addr {
dec_label_pc_1280:
  %0 = mul i32 %x, 2, !insn.addr !40
  ret i32 %0, !insn.addr !41
}

define i64 @process_ll(i64 %x) local_unnamed_addr {
dec_label_pc_1290:
  %0 = and i64 %x, 4294967295, !insn.addr !42
  %1 = mul i64 %x, 4294967296, !insn.addr !42
  %2 = mul i64 %1, %0
  %3 = ashr exact i64 %2, 32, !insn.addr !43
  ret i64 %3, !insn.addr !43
}

define float @process_float(float %f) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = alloca i32
  %1 = alloca float
  %2 = load i32, i32* %0
  %3 = load float, float* %1
  %4 = fpext float %3 to x86_fp80, !insn.addr !44
  %5 = add i32 %2, 7504, !insn.addr !45
  %6 = inttoptr i32 %5 to float*, !insn.addr !45
  %7 = load float, float* %6, align 4, !insn.addr !45
  %8 = fpext float %7 to x86_fp80, !insn.addr !45
  %9 = fmul x86_fp80 %4, %8, !insn.addr !46
  %10 = add i32 %2, 7508, !insn.addr !47
  %11 = inttoptr i32 %10 to float*, !insn.addr !47
  %12 = load float, float* %11, align 4, !insn.addr !47
  %13 = fpext float %12 to x86_fp80, !insn.addr !47
  %14 = fadd x86_fp80 %9, %13, !insn.addr !48
  %15 = fptrunc x86_fp80 %14 to float, !insn.addr !49
  ret float %15, !insn.addr !49

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define double @process_double(double %d) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = alloca i32
  %1 = alloca double
  %2 = load i32, i32* %0
  %3 = load double, double* %1
  %4 = fpext double %3 to x86_fp80, !insn.addr !50
  %5 = add i32 %2, 7464, !insn.addr !51
  %6 = inttoptr i32 %5 to float*, !insn.addr !51
  %7 = load float, float* %6, align 4, !insn.addr !51
  %8 = fpext float %7 to x86_fp80, !insn.addr !51
  %9 = fdiv x86_fp80 %4, %8, !insn.addr !52
  %10 = add i32 %2, 7480, !insn.addr !53
  %11 = inttoptr i32 %10 to double*, !insn.addr !53
  %12 = load double, double* %11, align 4, !insn.addr !53
  %13 = fpext double %12 to x86_fp80, !insn.addr !53
  %14 = fadd x86_fp80 %9, %13, !insn.addr !54
  %15 = fptrunc x86_fp80 %14 to double, !insn.addr !55
  ret double %15, !insn.addr !55

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define double @process_ld(double %d) local_unnamed_addr {
dec_label_pc_1310:
  %0 = fpext double %d to x86_fp80
  %1 = fmul x86_fp80 %0, %0, !insn.addr !56
  %2 = fadd x86_fp80 %1, 0xK3FFF8000000000000000, !insn.addr !57
  %3 = fptrunc x86_fp80 %2 to double, !insn.addr !58
  ret double %3, !insn.addr !58
}

define i1 @process_bool(i32 %x) local_unnamed_addr {
dec_label_pc_1330:
  %stack_var_-5.0.reg2mem = alloca i1, !insn.addr !59
  %0 = icmp slt i32 %x, 1, !insn.addr !60
  store i1 false, i1* %stack_var_-5.0.reg2mem, !insn.addr !60
  br i1 %0, label %dec_label_pc_135a, label %dec_label_pc_1346, !insn.addr !60

dec_label_pc_1346:                                ; preds = %dec_label_pc_1330
  %1 = zext i32 %x to i64, !insn.addr !61
  %2 = mul i64 %1, 4294967296, !insn.addr !61
  %3 = or i64 %2, %1, !insn.addr !61
  %4 = srem i64 %3, 2, !insn.addr !61
  %5 = trunc i64 %4 to i32, !insn.addr !61
  %6 = icmp eq i32 %5, 0, !insn.addr !62
  store i1 %6, i1* %stack_var_-5.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_135a, !insn.addr !63

dec_label_pc_135a:                                ; preds = %dec_label_pc_1346, %dec_label_pc_1330
  %stack_var_-5.0.reload = load i1, i1* %stack_var_-5.0.reg2mem
  ret i1 %stack_var_-5.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @const_param(i32* %p) local_unnamed_addr {
dec_label_pc_1370:
  %0 = load i32, i32* %p, align 4, !insn.addr !65
  %1 = add i32 %0, 10, !insn.addr !66
  ret i32 %1, !insn.addr !67
}

define i32 @volatile_access(i32* %p) local_unnamed_addr {
dec_label_pc_1380:
  %0 = load i32, i32* %p, align 4
  %1 = mul i32 %0, 2, !insn.addr !68
  ret i32 %1, !insn.addr !69
}

define void @test_data_types_l1() local_unnamed_addr {
dec_label_pc_13b0:
  %0 = alloca i32
  %vol_value_-16 = alloca i32, align 4
  %value_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 7536, !insn.addr !70
  %3 = inttoptr i32 %2 to i8*, !insn.addr !71
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !72
  %5 = call i8 @process_char(i8 65), !insn.addr !73
  %6 = add i32 %1, 7570, !insn.addr !74
  %7 = inttoptr i32 %6 to i8*, !insn.addr !75
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !76
  %9 = call i8 @process_char(i8 98), !insn.addr !77
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !78
  %11 = call i16 @process_short(i16 100, i16 200), !insn.addr !79
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
  %23 = call i64 @process_ll(i64 100), !insn.addr !91
  %24 = add i32 %1, 7687, !insn.addr !92
  %25 = inttoptr i32 %24 to i8*, !insn.addr !93
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !94
  %27 = call float @process_float(float 2.000000e+00), !insn.addr !95
  %28 = add i32 %1, 7716, !insn.addr !96
  %29 = inttoptr i32 %28 to i8*, !insn.addr !97
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !98
  %31 = call double @process_double(double 0.000000e+00), !insn.addr !99
  %32 = add i32 %1, 7748, !insn.addr !100
  %33 = inttoptr i32 %32 to i8*, !insn.addr !101
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !102
  %35 = add i32 %1, 7256, !insn.addr !103
  %36 = inttoptr i32 %35 to float*, !insn.addr !103
  %37 = load float, float* %36, align 4, !insn.addr !103
  %38 = fpext float %37 to double
  %39 = call double @process_ld(double %38), !insn.addr !104
  %40 = add i32 %1, 7781, !insn.addr !105
  %41 = inttoptr i32 %40 to i8*, !insn.addr !106
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !107
  %43 = call i1 @process_bool(i32 4), !insn.addr !108
  %44 = add i32 %1, 7811, !insn.addr !109
  %45 = inttoptr i32 %44 to i8*, !insn.addr !110
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !111
  %47 = call i1 @process_bool(i32 3), !insn.addr !112
  %48 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !113
  %49 = call i1 @process_bool(i32 -2), !insn.addr !114
  %50 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !115
  store i32 5, i32* %value_-12, align 4, !insn.addr !116
  %51 = call i32 @const_param(i32* nonnull %value_-12), !insn.addr !117
  %52 = add i32 %1, 7840, !insn.addr !118
  %53 = inttoptr i32 %52 to i8*, !insn.addr !119
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !120
  store i32 10, i32* %vol_value_-16, align 4, !insn.addr !121
  %55 = call i32 @volatile_access(i32* nonnull %vol_value_-16), !insn.addr !122
  %56 = add i32 %1, 7868, !insn.addr !123
  %57 = inttoptr i32 %56 to i8*, !insn.addr !124
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !125
  ret void, !insn.addr !126

; uselistorder directives
  uselistorder i1 (i32)* @process_bool, { 2, 1, 0 }
  uselistorder i8 (i8)* @process_char, { 1, 0 }
}

define i32 @array_1d_stack(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1640:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !127
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !127
  %storemerge2.reg2mem = alloca i32, !insn.addr !127
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !128
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !128
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !128
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !128
  br i1 %1, label %dec_label_pc_1666, label %dec_label_pc_1683, !insn.addr !128

dec_label_pc_1666:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1666
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !129
  %3 = add i32 %2, %0, !insn.addr !129
  %4 = inttoptr i32 %3 to i32*, !insn.addr !129
  %5 = load i32, i32* %4, align 4, !insn.addr !129
  %6 = add i32 %5, %sum_-8.01.reload, !insn.addr !130
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !131
  %exitcond = icmp eq i32 %7, %n
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !128
  store i32 %6, i32* %sum_-8.01.reg2mem, !insn.addr !128
  store i32 %6, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !128
  br i1 %exitcond, label %dec_label_pc_1683, label %dec_label_pc_1666, !insn.addr !128

dec_label_pc_1683:                                ; preds = %dec_label_pc_1666, %dec_label_pc_1640
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !132

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1666, { 1, 0 }
}

define i32 @array_string(i8* %str) local_unnamed_addr {
dec_label_pc_1690:
  %storemerge.reg2mem = alloca i32, !insn.addr !133
  %0 = ptrtoint i8* %str to i32, !insn.addr !134
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !135
  br label %dec_label_pc_169e, !insn.addr !135

dec_label_pc_169e:                                ; preds = %dec_label_pc_169e, %dec_label_pc_1690
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %1 = add i32 %storemerge.reload, %0, !insn.addr !136
  %2 = inttoptr i32 %1 to i8*, !insn.addr !136
  %3 = load i8, i8* %2, align 1, !insn.addr !136
  %4 = icmp eq i8 %3, 0, !insn.addr !137
  %5 = add i32 %storemerge.reload, 1, !insn.addr !138
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !139
  br i1 %4, label %dec_label_pc_16bf, label %dec_label_pc_169e, !insn.addr !139

dec_label_pc_16bf:                                ; preds = %dec_label_pc_169e
  ret i32 %storemerge.reload, !insn.addr !140

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
}

define i32 @array_2d_stack([1 x i32]* %arr) local_unnamed_addr {
dec_label_pc_16d0:
  %sum_-8.03.reg2mem = alloca i32, !insn.addr !141
  %storemerge.off04.reg2mem = alloca i32, !insn.addr !141
  %0 = ptrtoint [1 x i32]* %arr to i32, !insn.addr !142
  store i32 0, i32* %storemerge.off04.reg2mem
  store i32 0, i32* %sum_-8.03.reg2mem
  br label %dec_label_pc_16f1

dec_label_pc_16f1:                                ; preds = %dec_label_pc_16d0, %dec_label_pc_16f1
  %sum_-8.03.reload = load i32, i32* %sum_-8.03.reg2mem
  %storemerge.off04.reload = load i32, i32* %storemerge.off04.reg2mem
  %reass.mul = mul nuw nsw i32 %storemerge.off04.reload, 44
  %1 = add i32 %reass.mul, %0, !insn.addr !143
  %2 = inttoptr i32 %1 to i32*, !insn.addr !143
  %3 = load i32, i32* %2, align 4, !insn.addr !143
  %4 = add i32 %3, %sum_-8.03.reload, !insn.addr !144
  %5 = add nuw nsw i32 %storemerge.off04.reload, 1, !insn.addr !145
  %exitcond = icmp eq i32 %5, 10
  store i32 %5, i32* %storemerge.off04.reg2mem, !insn.addr !146
  store i32 %4, i32* %sum_-8.03.reg2mem, !insn.addr !146
  br i1 %exitcond, label %dec_label_pc_1714, label %dec_label_pc_16f1, !insn.addr !146

dec_label_pc_1714:                                ; preds = %dec_label_pc_16f1
  ret i32 %4, !insn.addr !147

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32 %storemerge.off04.reload, { 1, 0 }
  uselistorder i32* %storemerge.off04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16f1, { 1, 0 }
}

define i32 @array_3d([1 x [1 x i32]]* %arr) local_unnamed_addr {
dec_label_pc_1720:
  %sum_-8.26.reg2mem = alloca i32, !insn.addr !148
  %storemerge7.reg2mem = alloca i32, !insn.addr !148
  %sum_-8.18.reg2mem = alloca i32, !insn.addr !148
  %storemerge4.off09.reg2mem = alloca i32, !insn.addr !148
  %sum_-8.010.reg2mem = alloca i32, !insn.addr !148
  %storemerge5.off011.reg2mem = alloca i32, !insn.addr !148
  %0 = ptrtoint [1 x [1 x i32]]* %arr to i32, !insn.addr !149
  store i32 0, i32* %storemerge5.off011.reg2mem
  store i32 0, i32* %sum_-8.010.reg2mem
  br label %dec_label_pc_1748.preheader

dec_label_pc_1748.preheader:                      ; preds = %dec_label_pc_1720, %dec_label_pc_17a4
  %sum_-8.010.reload = load i32, i32* %sum_-8.010.reg2mem
  %storemerge5.off011.reload = load i32, i32* %storemerge5.off011.reg2mem
  %1 = mul nuw nsw i32 %storemerge5.off011.reload, 100, !insn.addr !150
  %2 = add i32 %1, %0, !insn.addr !151
  store i32 0, i32* %storemerge4.off09.reg2mem
  store i32 %sum_-8.010.reload, i32* %sum_-8.18.reg2mem
  br label %dec_label_pc_1759.preheader

dec_label_pc_1759.preheader:                      ; preds = %dec_label_pc_1748.preheader, %dec_label_pc_1791
  %sum_-8.18.reload = load i32, i32* %sum_-8.18.reg2mem
  %storemerge4.off09.reload = load i32, i32* %storemerge4.off09.reg2mem
  %3 = mul nuw nsw i32 %storemerge4.off09.reload, 20, !insn.addr !152
  %4 = add i32 %2, %3, !insn.addr !153
  store i32 0, i32* %storemerge7.reg2mem
  store i32 %sum_-8.18.reload, i32* %sum_-8.26.reg2mem
  br label %dec_label_pc_1763

dec_label_pc_1763:                                ; preds = %dec_label_pc_1759.preheader, %dec_label_pc_1763
  %sum_-8.26.reload = load i32, i32* %sum_-8.26.reg2mem
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %5 = mul i32 %storemerge7.reload, 4, !insn.addr !154
  %6 = add i32 %4, %5, !insn.addr !154
  %7 = inttoptr i32 %6 to i32*, !insn.addr !154
  %8 = load i32, i32* %7, align 4, !insn.addr !154
  %9 = add i32 %8, %sum_-8.26.reload, !insn.addr !155
  %10 = add nuw nsw i32 %storemerge7.reload, 1, !insn.addr !156
  %exitcond = icmp eq i32 %10, 5
  store i32 %10, i32* %storemerge7.reg2mem, !insn.addr !157
  store i32 %9, i32* %sum_-8.26.reg2mem, !insn.addr !157
  br i1 %exitcond, label %dec_label_pc_1791, label %dec_label_pc_1763, !insn.addr !157

dec_label_pc_1791:                                ; preds = %dec_label_pc_1763
  %11 = add nuw nsw i32 %storemerge4.off09.reload, 1, !insn.addr !158
  %exitcond12 = icmp eq i32 %11, 5
  store i32 %11, i32* %storemerge4.off09.reg2mem, !insn.addr !159
  store i32 %9, i32* %sum_-8.18.reg2mem, !insn.addr !159
  br i1 %exitcond12, label %dec_label_pc_17a4, label %dec_label_pc_1759.preheader, !insn.addr !159

dec_label_pc_17a4:                                ; preds = %dec_label_pc_1791
  %12 = add nuw nsw i32 %storemerge5.off011.reload, 1, !insn.addr !160
  %exitcond13 = icmp eq i32 %12, 5
  store i32 %12, i32* %storemerge5.off011.reg2mem, !insn.addr !161
  store i32 %9, i32* %sum_-8.010.reg2mem, !insn.addr !161
  br i1 %exitcond13, label %dec_label_pc_17b2, label %dec_label_pc_1748.preheader, !insn.addr !161

dec_label_pc_17b2:                                ; preds = %dec_label_pc_17a4
  ret i32 %9, !insn.addr !162

; uselistorder directives
  uselistorder i32 %9, { 3, 2, 1, 0 }
  uselistorder i32* %storemerge5.off011.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.010.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.off09.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge7.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.26.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1763, { 1, 0 }
  uselistorder label %dec_label_pc_1759.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1748.preheader, { 1, 0 }
}

define i32 @array_vla(i32 %n, i32* %arr) local_unnamed_addr {
dec_label_pc_17c0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !163
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !163
  %storemerge2.reg2mem = alloca i32, !insn.addr !163
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !164
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !164
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !164
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !164
  br i1 %1, label %dec_label_pc_17e6, label %dec_label_pc_1803, !insn.addr !164

dec_label_pc_17e6:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17e6
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !165
  %3 = add i32 %2, %0, !insn.addr !165
  %4 = inttoptr i32 %3 to i32*, !insn.addr !165
  %5 = load i32, i32* %4, align 4, !insn.addr !165
  %6 = add i32 %5, %sum_-8.01.reload, !insn.addr !166
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !167
  %exitcond = icmp eq i32 %7, %n
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !164
  store i32 %6, i32* %sum_-8.01.reg2mem, !insn.addr !164
  store i32 %6, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !164
  br i1 %exitcond, label %dec_label_pc_1803, label %dec_label_pc_17e6, !insn.addr !164

dec_label_pc_1803:                                ; preds = %dec_label_pc_17e6, %dec_label_pc_17c0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !168

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_17e6, { 1, 0 }
}

define i32 @array_pointer([1 x i32]* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1810:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !169
  %sum_-8.03.reg2mem = alloca i32, !insn.addr !169
  %storemerge.off04.reg2mem = alloca i32, !insn.addr !169
  %0 = icmp sgt i32 %n, 0, !insn.addr !170
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !170
  br i1 %0, label %dec_label_pc_1836.lr.ph, label %dec_label_pc_1855, !insn.addr !170

dec_label_pc_1836.lr.ph:                          ; preds = %dec_label_pc_1810
  %1 = ptrtoint [1 x i32]* %arr to i32, !insn.addr !171
  store i32 0, i32* %storemerge.off04.reg2mem
  store i32 0, i32* %sum_-8.03.reg2mem
  br label %dec_label_pc_1836

dec_label_pc_1836:                                ; preds = %dec_label_pc_1836, %dec_label_pc_1836.lr.ph
  %sum_-8.03.reload = load i32, i32* %sum_-8.03.reg2mem
  %storemerge.off04.reload = load i32, i32* %storemerge.off04.reg2mem
  %2 = mul i32 %storemerge.off04.reload, 40, !insn.addr !172
  %3 = add i32 %2, %1, !insn.addr !173
  %4 = inttoptr i32 %3 to i32*, !insn.addr !174
  %5 = load i32, i32* %4, align 4, !insn.addr !174
  %6 = add i32 %5, %sum_-8.03.reload, !insn.addr !175
  %7 = add nuw nsw i32 %storemerge.off04.reload, 1, !insn.addr !176
  %exitcond = icmp eq i32 %7, %n
  store i32 %7, i32* %storemerge.off04.reg2mem, !insn.addr !170
  store i32 %6, i32* %sum_-8.03.reg2mem, !insn.addr !170
  store i32 %6, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !170
  br i1 %exitcond, label %dec_label_pc_1855, label %dec_label_pc_1836, !insn.addr !170

dec_label_pc_1855:                                ; preds = %dec_label_pc_1836, %dec_label_pc_1810
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !177

; uselistorder directives
  uselistorder i32 %storemerge.off04.reload, { 1, 0 }
  uselistorder i32* %storemerge.off04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.03.reg2mem, { 1, 0, 2 }
}

define i32 @pointer_array(i32** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1860:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !178
  %sum_-8.1.reg2mem = alloca i32, !insn.addr !178
  %sum_-8.03.reg2mem = alloca i32, !insn.addr !178
  %storemerge4.reg2mem = alloca i32, !insn.addr !178
  %0 = icmp sgt i32 %n, 0, !insn.addr !179
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !179
  br i1 %0, label %dec_label_pc_18ae.lr.ph, label %dec_label_pc_18e2, !insn.addr !179

dec_label_pc_18ae.lr.ph:                          ; preds = %dec_label_pc_1860
  %1 = icmp slt i32 %n, 10, !insn.addr !180
  %storemerge2 = select i1 %1, i32 %n, i32 10
  %2 = ptrtoint i32** %arr to i32, !insn.addr !181
  store i32 0, i32* %storemerge4.reg2mem
  store i32 0, i32* %sum_-8.03.reg2mem
  br label %dec_label_pc_18ae

dec_label_pc_18ae:                                ; preds = %dec_label_pc_18ae.lr.ph, %dec_label_pc_18d4
  %sum_-8.03.reload = load i32, i32* %sum_-8.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %3 = mul i32 %storemerge4.reload, 4, !insn.addr !182
  %4 = add i32 %3, %2, !insn.addr !182
  %5 = inttoptr i32 %4 to i32*, !insn.addr !182
  %6 = load i32, i32* %5, align 4, !insn.addr !182
  %7 = icmp eq i32 %6, 0, !insn.addr !182
  store i32 %sum_-8.03.reload, i32* %sum_-8.1.reg2mem, !insn.addr !183
  br i1 %7, label %dec_label_pc_18d4, label %dec_label_pc_18be, !insn.addr !183

dec_label_pc_18be:                                ; preds = %dec_label_pc_18ae
  %8 = inttoptr i32 %6 to i32*, !insn.addr !184
  %9 = load i32, i32* %8, align 4, !insn.addr !184
  %10 = add i32 %9, %sum_-8.03.reload, !insn.addr !185
  store i32 %10, i32* %sum_-8.1.reg2mem, !insn.addr !186
  br label %dec_label_pc_18d4, !insn.addr !186

dec_label_pc_18d4:                                ; preds = %dec_label_pc_18ae, %dec_label_pc_18be
  %sum_-8.1.reload = load i32, i32* %sum_-8.1.reg2mem
  %11 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !187
  %12 = icmp slt i32 %11, %storemerge2, !insn.addr !179
  store i32 %11, i32* %storemerge4.reg2mem, !insn.addr !179
  store i32 %sum_-8.1.reload, i32* %sum_-8.03.reg2mem, !insn.addr !179
  store i32 %sum_-8.1.reload, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !179
  br i1 %12, label %dec_label_pc_18ae, label %dec_label_pc_18e2, !insn.addr !179

dec_label_pc_18e2:                                ; preds = %dec_label_pc_18d4, %dec_label_pc_1860
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !188

; uselistorder directives
  uselistorder i32 %sum_-8.03.reload, { 1, 0 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.03.reg2mem, { 1, 0, 2 }
  uselistorder i32 %n, { 1, 2, 0 }
  uselistorder label %dec_label_pc_18d4, { 1, 0 }
  uselistorder label %dec_label_pc_18ae, { 1, 0 }
}

define i32 @array_complex_index(i32* %arr, i32 %w, i32 %h, i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_18f0:
  %storemerge.reg2mem = alloca i32, !insn.addr !189
  %0 = icmp slt i32 %x, 0, !insn.addr !190
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !191
  br i1 %0, label %dec_label_pc_194e, label %dec_label_pc_190d, !insn.addr !191

dec_label_pc_190d:                                ; preds = %dec_label_pc_18f0
  %1 = icmp slt i32 %x, %w, !insn.addr !192
  %2 = icmp sgt i32 %y, -1, !insn.addr !193
  %or.cond.not = icmp eq i1 %1, %2
  %3 = icmp slt i32 %y, %h, !insn.addr !194
  %or.cond2 = icmp eq i1 %3, %or.cond.not
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !192
  br i1 %or.cond2, label %dec_label_pc_193b, label %dec_label_pc_194e, !insn.addr !192

dec_label_pc_193b:                                ; preds = %dec_label_pc_190d
  %4 = ptrtoint i32* %arr to i32
  %5 = mul i32 %y, %w, !insn.addr !195
  %6 = add i32 %5, %x, !insn.addr !196
  %7 = mul i32 %6, 4, !insn.addr !197
  %8 = add i32 %7, %4, !insn.addr !197
  %9 = inttoptr i32 %8 to i32*, !insn.addr !197
  %10 = load i32, i32* %9, align 4, !insn.addr !197
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !198
  br label %dec_label_pc_194e, !insn.addr !198

dec_label_pc_194e:                                ; preds = %dec_label_pc_190d, %dec_label_pc_18f0, %dec_label_pc_193b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !199

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %y, { 0, 2, 1 }
  uselistorder label %dec_label_pc_194e, { 2, 0, 1 }
}

define i32 @array_oob(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1960:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !200
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !200
  %storemerge2.reg2mem = alloca i32, !insn.addr !200
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp slt i32 %n, 0, !insn.addr !201
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !201
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !201
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !201
  br i1 %1, label %dec_label_pc_19a3, label %dec_label_pc_1986, !insn.addr !201

dec_label_pc_1986:                                ; preds = %dec_label_pc_1960, %dec_label_pc_1986
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !202
  %3 = add i32 %2, %0, !insn.addr !202
  %4 = inttoptr i32 %3 to i32*, !insn.addr !202
  %5 = load i32, i32* %4, align 4, !insn.addr !202
  %6 = add i32 %5, %sum_-8.01.reload, !insn.addr !203
  %7 = add i32 %storemerge2.reload, 1, !insn.addr !204
  %8 = icmp sgt i32 %7, %n, !insn.addr !201
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !201
  store i32 %6, i32* %sum_-8.01.reg2mem, !insn.addr !201
  store i32 %6, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !201
  br i1 %8, label %dec_label_pc_19a3, label %dec_label_pc_1986, !insn.addr !201

dec_label_pc_19a3:                                ; preds = %dec_label_pc_1986, %dec_label_pc_1960
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !205

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1986, { 1, 0 }
}

define void @test_array_types() local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i32
  %storemerge1112.reg2mem = alloca i32, !insn.addr !206
  %stack_var_-1320.0.reg2mem = alloca i32, !insn.addr !206
  %storemerge1013.reg2mem = alloca i32, !insn.addr !206
  %storemerge714.reg2mem = alloca i32, !insn.addr !206
  %storemerge8.off015.reg2mem = alloca i32, !insn.addr !206
  %storemerge9.off016.reg2mem = alloca i32, !insn.addr !206
  %storemerge17.reg2mem = alloca i32, !insn.addr !206
  %storemerge6.off018.reg2mem = alloca i32, !insn.addr !206
  %flat_-1304 = alloca [1 x i32], align 4
  %stack_var_-1208 = alloca i32, align 4
  %ptr_arr_-1224 = alloca [1 x i32*], align 4
  %c_-1184 = alloca i32, align 4
  %a_-1176 = alloca i32, align 4
  %arr2_-1168 = alloca [1 x [1 x i32]], align 4
  %vla_arr_-968 = alloca [1 x i32], align 4
  %cube_-944 = alloca [1 x [1 x [1 x i32]]], align 4
  %matrix_-436 = alloca [1 x [1 x i32]], align 4
  %str_-34 = alloca [1 x i8], align 1
  %arr1_-28 = alloca [1 x i32], align 4
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = add i32 %1, 6361, !insn.addr !207
  %3 = inttoptr i32 %2 to i8*
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !208
  %5 = add i32 %1, 5777, !insn.addr !209
  %6 = getelementptr inbounds [1 x i32], [1 x i32]* %arr1_-28, i32 0, i32 0
  %7 = inttoptr i32 %5 to i32*, !insn.addr !210
  %8 = call i32* @memcpy(i32* nonnull %6, i32* %7, i32 20), !insn.addr !210
  %9 = call i32 @array_1d_stack(i32* nonnull %6, i32 5), !insn.addr !211
  %10 = add i32 %1, 6389, !insn.addr !212
  %11 = inttoptr i32 %10 to i8*
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !213
  %13 = add i32 %1, 6421, !insn.addr !214
  %14 = inttoptr i32 %13 to i32*, !insn.addr !214
  %15 = load i32, i32* %14, align 4, !insn.addr !214
  %16 = trunc i32 %15 to i8, !insn.addr !215
  %17 = insertvalue [1 x i8] undef, i8 %16, 0, !insn.addr !215
  store [1 x i8] %17, [1 x i8]* %str_-34, align 1, !insn.addr !215
  %18 = getelementptr inbounds [1 x i8], [1 x i8]* %str_-34, i32 0, i32 0
  %19 = call i32 @array_string(i8* nonnull %18), !insn.addr !216
  %20 = add i32 %1, 6427, !insn.addr !217
  %21 = inttoptr i32 %20 to i8*
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !218
  %23 = ptrtoint [1 x [1 x i32]]* %matrix_-436 to i32, !insn.addr !219
  store i32 0, i32* %storemerge6.off018.reg2mem
  br label %dec_label_pc_1a8c.preheader

dec_label_pc_1a8c.preheader:                      ; preds = %dec_label_pc_19b0, %dec_label_pc_1b00
  %storemerge6.off018.reload = load i32, i32* %storemerge6.off018.reg2mem
  %24 = mul nuw nsw i32 %storemerge6.off018.reload, 40, !insn.addr !220
  %25 = add i32 %24, %23, !insn.addr !221
  store i32 0, i32* %storemerge17.reg2mem
  br label %dec_label_pc_1a99

dec_label_pc_1a99:                                ; preds = %dec_label_pc_1a8c.preheader, %dec_label_pc_1a99
  %storemerge17.reload = load i32, i32* %storemerge17.reg2mem
  %26 = icmp eq i32 %storemerge17.reload, %storemerge6.off018.reload, !insn.addr !222
  %27 = icmp eq i1 %26, false, !insn.addr !223
  %storemerge5 = select i1 %27, i32 0, i32 %storemerge6.off018.reload
  %28 = mul i32 %storemerge17.reload, 4, !insn.addr !224
  %29 = add i32 %25, %28, !insn.addr !224
  %30 = inttoptr i32 %29 to i32*, !insn.addr !224
  store i32 %storemerge5, i32* %30, align 4, !insn.addr !224
  %31 = add nuw nsw i32 %storemerge17.reload, 1, !insn.addr !225
  %exitcond23 = icmp eq i32 %31, 10
  store i32 %31, i32* %storemerge17.reg2mem, !insn.addr !226
  br i1 %exitcond23, label %dec_label_pc_1b00, label %dec_label_pc_1a99, !insn.addr !226

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1a99
  %32 = add nuw nsw i32 %storemerge6.off018.reload, 1, !insn.addr !227
  %exitcond24 = icmp eq i32 %32, 10
  store i32 %32, i32* %storemerge6.off018.reg2mem, !insn.addr !228
  br i1 %exitcond24, label %dec_label_pc_1b14, label %dec_label_pc_1a8c.preheader, !insn.addr !228

dec_label_pc_1b14:                                ; preds = %dec_label_pc_1b00
  %33 = getelementptr inbounds [1 x [1 x i32]], [1 x [1 x i32]]* %matrix_-436, i32 0, i32 0
  %34 = call i32 @array_2d_stack([1 x i32]* nonnull %33), !insn.addr !229
  %35 = add i32 %1, 6457, !insn.addr !230
  %36 = inttoptr i32 %35 to i8*
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !231
  %38 = ptrtoint [1 x [1 x [1 x i32]]]* %cube_-944 to i32, !insn.addr !232
  store i32 0, i32* %storemerge9.off016.reg2mem
  br label %dec_label_pc_1b61.preheader

dec_label_pc_1b61.preheader:                      ; preds = %dec_label_pc_1b14, %dec_label_pc_1bdc
  %storemerge9.off016.reload = load i32, i32* %storemerge9.off016.reg2mem
  %39 = mul nuw nsw i32 %storemerge9.off016.reload, 100, !insn.addr !233
  %40 = add i32 %39, %38, !insn.addr !234
  store i32 0, i32* %storemerge8.off015.reg2mem
  br label %dec_label_pc_1b78.preheader

dec_label_pc_1b78.preheader:                      ; preds = %dec_label_pc_1b61.preheader, %dec_label_pc_1bc3
  %storemerge8.off015.reload = load i32, i32* %storemerge8.off015.reg2mem
  %41 = mul nuw nsw i32 %storemerge8.off015.reload, 20, !insn.addr !235
  %42 = add i32 %40, %41, !insn.addr !236
  store i32 0, i32* %storemerge714.reg2mem
  br label %dec_label_pc_1b85

dec_label_pc_1b85:                                ; preds = %dec_label_pc_1b78.preheader, %dec_label_pc_1b85
  %storemerge714.reload = load i32, i32* %storemerge714.reg2mem
  %43 = mul i32 %storemerge714.reload, 4, !insn.addr !237
  %44 = add i32 %42, %43, !insn.addr !237
  %45 = inttoptr i32 %44 to i32*, !insn.addr !237
  store i32 1, i32* %45, align 4, !insn.addr !237
  %46 = add nuw nsw i32 %storemerge714.reload, 1, !insn.addr !238
  %exitcond20 = icmp eq i32 %46, 5
  store i32 %46, i32* %storemerge714.reg2mem, !insn.addr !239
  br i1 %exitcond20, label %dec_label_pc_1bc3, label %dec_label_pc_1b85, !insn.addr !239

dec_label_pc_1bc3:                                ; preds = %dec_label_pc_1b85
  %47 = add nuw nsw i32 %storemerge8.off015.reload, 1, !insn.addr !240
  %exitcond21 = icmp eq i32 %47, 5
  store i32 %47, i32* %storemerge8.off015.reg2mem, !insn.addr !241
  br i1 %exitcond21, label %dec_label_pc_1bdc, label %dec_label_pc_1b78.preheader, !insn.addr !241

dec_label_pc_1bdc:                                ; preds = %dec_label_pc_1bc3
  %48 = add nuw nsw i32 %storemerge9.off016.reload, 1, !insn.addr !242
  %exitcond22 = icmp eq i32 %48, 5
  store i32 %48, i32* %storemerge9.off016.reg2mem, !insn.addr !243
  br i1 %exitcond22, label %dec_label_pc_1bf0, label %dec_label_pc_1b61.preheader, !insn.addr !243

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1bdc
  %49 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !244
  %50 = getelementptr inbounds [1 x [1 x [1 x i32]]], [1 x [1 x [1 x i32]]]* %cube_-944, i32 0, i32 0
  %51 = call i32 @array_3d([1 x [1 x i32]]* nonnull %50), !insn.addr !245
  %52 = add i32 %1, 6489, !insn.addr !246
  %53 = inttoptr i32 %52 to i8*
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !247
  %55 = add i32 %1, 5797, !insn.addr !248
  %56 = inttoptr i32 %55 to i32*, !insn.addr !248
  %57 = load i32, i32* %56, align 4, !insn.addr !248
  %58 = insertvalue [1 x i32] undef, i32 %57, 0, !insn.addr !249
  store [1 x i32] %58, [1 x i32]* %vla_arr_-968, align 4, !insn.addr !249
  %59 = getelementptr inbounds [1 x i32], [1 x i32]* %vla_arr_-968, i32 0, i32 0, !insn.addr !250
  %60 = call i32 @array_vla(i32 3, i32* nonnull %59), !insn.addr !250
  %61 = add i32 %1, 6515, !insn.addr !251
  %62 = inttoptr i32 %61 to i8*
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !252
  %64 = ptrtoint [1 x [1 x i32]]* %arr2_-1168 to i32, !insn.addr !253
  store i32 0, i32* %storemerge1013.reg2mem
  br label %dec_label_pc_1c8b

dec_label_pc_1c8b:                                ; preds = %dec_label_pc_1bf0, %dec_label_pc_1c8b
  %storemerge1013.reload = load i32, i32* %storemerge1013.reg2mem
  %65 = mul nuw nsw i32 %storemerge1013.reload, 10, !insn.addr !254
  %66 = mul nuw nsw i32 %storemerge1013.reload, 40, !insn.addr !255
  %67 = add i32 %66, %64, !insn.addr !256
  %68 = inttoptr i32 %67 to i32*, !insn.addr !257
  store i32 %65, i32* %68, align 4, !insn.addr !257
  %69 = add nuw nsw i32 %storemerge1013.reload, 1, !insn.addr !258
  %exitcond19 = icmp eq i32 %69, 5
  store i32 %69, i32* %storemerge1013.reg2mem, !insn.addr !259
  br i1 %exitcond19, label %dec_label_pc_1cb7, label %dec_label_pc_1c8b, !insn.addr !259

dec_label_pc_1cb7:                                ; preds = %dec_label_pc_1c8b
  %70 = getelementptr inbounds [1 x [1 x i32]], [1 x [1 x i32]]* %arr2_-1168, i32 0, i32 0
  %71 = call i32 @array_pointer([1 x i32]* nonnull %70, i32 5), !insn.addr !260
  %72 = add i32 %1, 6542, !insn.addr !261
  %73 = inttoptr i32 %72 to i8*
  %74 = call i32 (i8*, ...) @printf(i8* %73), !insn.addr !262
  store i32 10, i32* %a_-1176, align 4, !insn.addr !263
  store i32 30, i32* %c_-1184, align 4, !insn.addr !264
  %75 = insertvalue [1 x i32*] undef, i32* %a_-1176, 0, !insn.addr !265
  store [1 x i32*] %75, [1 x i32*]* %ptr_arr_-1224, align 4, !insn.addr !265
  %76 = ptrtoint i32* %c_-1184 to i32, !insn.addr !266
  %77 = ptrtoint i32* %stack_var_-1208 to i32, !insn.addr !267
  store i32 %77, i32* %stack_var_-1320.0.reg2mem, !insn.addr !267
  br label %dec_label_pc_1d5a, !insn.addr !267

dec_label_pc_1d5a:                                ; preds = %dec_label_pc_1d5a, %dec_label_pc_1cb7
  %stack_var_-1320.0.reload = load i32, i32* %stack_var_-1320.0.reg2mem
  %78 = inttoptr i32 %stack_var_-1320.0.reload to i32*, !insn.addr !268
  store i32 0, i32* %78, align 4, !insn.addr !268
  %79 = add i32 %stack_var_-1320.0.reload, 4, !insn.addr !269
  %80 = icmp eq i32 %79, %76, !insn.addr !270
  %81 = icmp eq i1 %80, false, !insn.addr !271
  store i32 %79, i32* %stack_var_-1320.0.reg2mem, !insn.addr !271
  br i1 %81, label %dec_label_pc_1d5a, label %dec_label_pc_1d83, !insn.addr !271

dec_label_pc_1d83:                                ; preds = %dec_label_pc_1d5a
  %82 = getelementptr inbounds [1 x i32*], [1 x i32*]* %ptr_arr_-1224, i32 0, i32 0
  %83 = call i32 @pointer_array(i32** nonnull %82, i32 3), !insn.addr !272
  %84 = add i32 %1, 6573, !insn.addr !273
  %85 = inttoptr i32 %84 to i8*
  %86 = call i32 (i8*, ...) @printf(i8* %85), !insn.addr !274
  %87 = add i32 %49, -1300, !insn.addr !275
  store i32 0, i32* %storemerge1112.reg2mem
  br label %dec_label_pc_1dce

dec_label_pc_1dce:                                ; preds = %dec_label_pc_1d83, %dec_label_pc_1dce
  %storemerge1112.reload = load i32, i32* %storemerge1112.reg2mem
  %88 = mul i32 %storemerge1112.reload, 4, !insn.addr !275
  %89 = add i32 %87, %88, !insn.addr !275
  %90 = inttoptr i32 %89 to i32*, !insn.addr !275
  store i32 %storemerge1112.reload, i32* %90, align 4, !insn.addr !275
  %91 = add nuw nsw i32 %storemerge1112.reload, 1, !insn.addr !276
  %exitcond = icmp eq i32 %91, 20
  store i32 %91, i32* %storemerge1112.reg2mem, !insn.addr !277
  br i1 %exitcond, label %dec_label_pc_1df5, label %dec_label_pc_1dce, !insn.addr !277

dec_label_pc_1df5:                                ; preds = %dec_label_pc_1dce
  %92 = getelementptr inbounds [1 x i32], [1 x i32]* %flat_-1304, i32 0, i32 0
  %93 = call i32 @array_complex_index(i32* nonnull %92, i32 5, i32 4, i32 2, i32 3), !insn.addr !278
  %94 = add i32 %1, 6604, !insn.addr !279
  %95 = inttoptr i32 %94 to i8*
  %96 = call i32 (i8*, ...) @printf(i8* %95), !insn.addr !280
  ret void, !insn.addr !281

; uselistorder directives
  uselistorder i32 %stack_var_-1320.0.reload, { 1, 0 }
  uselistorder i32 %storemerge1013.reload, { 0, 2, 1 }
  uselistorder i32 %storemerge17.reload, { 0, 2, 1 }
  uselistorder i32 %storemerge6.off018.reload, { 0, 2, 1, 3 }
  uselistorder i32 %1, { 11, 10, 9, 8, 7, 6, 5, 0, 1, 2, 3, 4 }
  uselistorder i32* %storemerge6.off018.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge17.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge9.off016.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge8.off015.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge714.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1013.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-1320.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1112.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1dce, { 1, 0 }
  uselistorder label %dec_label_pc_1c8b, { 1, 0 }
  uselistorder label %dec_label_pc_1b85, { 1, 0 }
  uselistorder label %dec_label_pc_1b78.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1b61.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1a99, { 1, 0 }
  uselistorder label %dec_label_pc_1a8c.preheader, { 1, 0 }
}

define i32 @ptr_single(i32* %p) local_unnamed_addr {
dec_label_pc_1e50:
  %0 = load i32, i32* %p, align 4, !insn.addr !282
  %1 = add i32 %0, 10, !insn.addr !283
  ret i32 %1, !insn.addr !284
}

define i32 @ptr_double(i32** %p) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = load i32*, i32** %p, align 4, !insn.addr !285
  %1 = load i32, i32* %0, align 4, !insn.addr !286
  %2 = add i32 %1, 5, !insn.addr !287
  ret i32 %2, !insn.addr !288
}

define i32 @ptr_triple(i32*** %p) local_unnamed_addr {
dec_label_pc_1e80:
  %0 = load i32**, i32*** %p, align 4, !insn.addr !289
  %1 = load i32*, i32** %0, align 4, !insn.addr !290
  %2 = load i32, i32* %1, align 4, !insn.addr !291
  %3 = add i32 %2, 1, !insn.addr !292
  ret i32 %3, !insn.addr !293
}

define i32 @ptr_increment(i32* %p, i32 %n) local_unnamed_addr {
dec_label_pc_1ea0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !294
  %stack_var_4.01.reg2mem = alloca i32, !insn.addr !294
  %sum_-8.02.reg2mem = alloca i32, !insn.addr !294
  %storemerge3.reg2mem = alloca i32, !insn.addr !294
  %0 = icmp sgt i32 %n, 0, !insn.addr !295
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !295
  br i1 %0, label %dec_label_pc_1ec6.lr.ph, label %dec_label_pc_1ee8, !insn.addr !295

dec_label_pc_1ec6.lr.ph:                          ; preds = %dec_label_pc_1ea0
  %1 = ptrtoint i32* %p to i32
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %sum_-8.02.reg2mem
  store i32 %1, i32* %stack_var_4.01.reg2mem
  br label %dec_label_pc_1ec6

dec_label_pc_1ec6:                                ; preds = %dec_label_pc_1ec6, %dec_label_pc_1ec6.lr.ph
  %stack_var_4.01.reload = load i32, i32* %stack_var_4.01.reg2mem
  %sum_-8.02.reload = load i32, i32* %sum_-8.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = inttoptr i32 %stack_var_4.01.reload to i32*, !insn.addr !296
  %3 = load i32, i32* %2, align 4, !insn.addr !296
  %4 = add i32 %3, %sum_-8.02.reload, !insn.addr !297
  %5 = add i32 %stack_var_4.01.reload, 4, !insn.addr !298
  %6 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !299
  %exitcond = icmp eq i32 %6, %n
  store i32 %6, i32* %storemerge3.reg2mem, !insn.addr !295
  store i32 %4, i32* %sum_-8.02.reg2mem, !insn.addr !295
  store i32 %5, i32* %stack_var_4.01.reg2mem, !insn.addr !295
  store i32 %4, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !295
  br i1 %exitcond, label %dec_label_pc_1ee8, label %dec_label_pc_1ec6, !insn.addr !295

dec_label_pc_1ee8:                                ; preds = %dec_label_pc_1ec6, %dec_label_pc_1ea0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !300

; uselistorder directives
  uselistorder i32 %stack_var_4.01.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_4.01.reg2mem, { 1, 0, 2 }
}

define i32 @ptr_offset(i32* %p, i32 %offset) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = ptrtoint i32* %p to i32
  %1 = mul i32 %offset, 4, !insn.addr !301
  %2 = add i32 %1, %0, !insn.addr !301
  %3 = inttoptr i32 %2 to i32*, !insn.addr !301
  %4 = load i32, i32* %3, align 4, !insn.addr !301
  ret i32 %4, !insn.addr !302
}

define i32 @ptr_diff(i32* %p1, i32* %p2) local_unnamed_addr {
dec_label_pc_1f10:
  %0 = ptrtoint i32* %p2 to i32
  %1 = ptrtoint i32* %p1 to i32
  %2 = sub i32 %1, %0, !insn.addr !303
  %3 = ashr i32 %2, 2, !insn.addr !304
  ret i32 %3, !insn.addr !305
}

define i32 @ptr_void(i8* %p, i32 %type) local_unnamed_addr {
dec_label_pc_1f30:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !306
  %0 = icmp eq i32 %type, 0, !insn.addr !307
  %1 = icmp eq i1 %0, false, !insn.addr !308
  br i1 %1, label %dec_label_pc_1f51, label %dec_label_pc_1f44, !insn.addr !308

dec_label_pc_1f44:                                ; preds = %dec_label_pc_1f30
  %2 = bitcast i8* %p to i32*
  %3 = load i32, i32* %2, align 4, !insn.addr !309
  store i32 %3, i32* %stack_var_-8.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_1f75, !insn.addr !310

dec_label_pc_1f51:                                ; preds = %dec_label_pc_1f30
  %4 = icmp eq i32 %type, 1, !insn.addr !311
  %5 = icmp eq i1 %4, false, !insn.addr !312
  store i32 -1, i32* %stack_var_-8.0.reg2mem, !insn.addr !312
  br i1 %5, label %dec_label_pc_1f75, label %dec_label_pc_1f5b, !insn.addr !312

dec_label_pc_1f5b:                                ; preds = %dec_label_pc_1f51
  %6 = load i8, i8* %p, align 1, !insn.addr !313
  %7 = sext i8 %6 to i32, !insn.addr !313
  store i32 %7, i32* %stack_var_-8.0.reg2mem, !insn.addr !314
  br label %dec_label_pc_1f75, !insn.addr !314

dec_label_pc_1f75:                                ; preds = %dec_label_pc_1f51, %dec_label_pc_1f5b, %dec_label_pc_1f44
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !315

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i8* %p, { 1, 0 }
  uselistorder label %dec_label_pc_1f75, { 1, 0, 2 }
}

define i32 @ptr_const(i32* %p) local_unnamed_addr {
dec_label_pc_1f80:
  %0 = load i32, i32* %p, align 4
  %1 = mul i32 %0, 2, !insn.addr !316
  ret i32 %1, !insn.addr !317
}

define i32 @ptr_const_ptr(i32* %p) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = load i32, i32* %p, align 4, !insn.addr !318
  %1 = add i32 %0, 5, !insn.addr !319
  store i32 %1, i32* %p, align 4, !insn.addr !320
  ret i32 %1, !insn.addr !321
}

define i32 @ptr_func_simple(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_1fc0:
  ret i32 %x, !insn.addr !322
}

define i32 @ptr_func_complex(i32 (i32*, i8**)* %f, i32* %p) local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = ptrtoint i32* %p to i32
  ret i32 %0, !insn.addr !323
}

define i32 @ptr_cast(i8* %p) local_unnamed_addr {
dec_label_pc_2040:
  %0 = bitcast i8* %p to i32*
  %1 = load i32, i32* %0, align 4, !insn.addr !324
  ret i32 %1, !insn.addr !325
}

define i8* @opaque_handle_create(i32 %size) local_unnamed_addr {
dec_label_pc_2070:
  %0 = inttoptr i32 %size to i8*, !insn.addr !326
  ret i8* %0, !insn.addr !326
}

define i32 @opaque_handle_op(i8* %handle) local_unnamed_addr {
dec_label_pc_2080:
  %0 = ptrtoint i8* %handle to i32
  %1 = mul i32 %0, 2, !insn.addr !327
  ret i32 %1, !insn.addr !328
}

define void @test_pointer_types() local_unnamed_addr {
dec_label_pc_2090:
  %0 = alloca i32
  %val12_-124 = alloca i32, align 4
  %val11_-120 = alloca i32, align 4
  %val9_-116 = alloca i32, align 4
  %val8_-112 = alloca i32, align 4
  %c7_-105 = alloca i8, align 1
  %val7_-104 = alloca i32, align 4
  %stack_var_-84 = alloca i32, align 4
  %arr6_-100 = alloca [1 x i32], align 4
  %arr5_-80 = alloca [1 x i32], align 4
  %arr4_-60 = alloca [1 x i32], align 4
  %pptr3_-36 = alloca i32**, align 4
  %ptr3_-32 = alloca i32*, align 4
  %val3_-28 = alloca i32, align 4
  %ptr2_-20 = alloca i32*, align 4
  %val2_-16 = alloca i32, align 4
  %val1_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11339), !insn.addr !329
  %3 = inttoptr i32 %2 to i8*
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !330
  store i32 5, i32* %val1_-12, align 4, !insn.addr !331
  %5 = call i32 @ptr_single(i32* nonnull %val1_-12), !insn.addr !332
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11311), !insn.addr !333
  %7 = inttoptr i32 %6 to i8*
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !334
  store i32 10, i32* %val2_-16, align 4, !insn.addr !335
  store i32* %val2_-16, i32** %ptr2_-20, align 4, !insn.addr !336
  %9 = call i32 @ptr_double(i32** nonnull %ptr2_-20), !insn.addr !337
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11283), !insn.addr !338
  %11 = inttoptr i32 %10 to i8*
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !339
  store i32 5, i32* %val3_-28, align 4, !insn.addr !340
  store i32* %val3_-28, i32** %ptr3_-32, align 4, !insn.addr !341
  store i32** %ptr3_-32, i32*** %pptr3_-36, align 4, !insn.addr !342
  %13 = call i32 @ptr_triple(i32*** nonnull %pptr3_-36), !insn.addr !343
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11255), !insn.addr !344
  %15 = inttoptr i32 %14 to i8*
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !345
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12176), !insn.addr !346
  %18 = getelementptr inbounds [1 x i32], [1 x i32]* %arr4_-60, i32 0, i32 0
  %19 = inttoptr i32 %17 to i32*, !insn.addr !347
  %20 = call i32* @memcpy(i32* nonnull %18, i32* %19, i32 20), !insn.addr !347
  %21 = call i32 @ptr_increment(i32* nonnull %18, i32 5), !insn.addr !348
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11227), !insn.addr !349
  %23 = inttoptr i32 %22 to i8*
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !350
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12156), !insn.addr !351
  %26 = getelementptr inbounds [1 x i32], [1 x i32]* %arr5_-80, i32 0, i32 0
  %27 = inttoptr i32 %25 to i32*, !insn.addr !352
  %28 = call i32* @memcpy(i32* nonnull %26, i32* %27, i32 20), !insn.addr !352
  %29 = call i32 @ptr_offset(i32* nonnull %26, i32 2), !insn.addr !353
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11196), !insn.addr !354
  %31 = inttoptr i32 %30 to i8*
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !355
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -12136), !insn.addr !356
  %34 = getelementptr inbounds [1 x i32], [1 x i32]* %arr6_-100, i32 0, i32 0
  %35 = inttoptr i32 %33 to i32*, !insn.addr !357
  %36 = call i32* @memcpy(i32* nonnull %34, i32* %35, i32 20), !insn.addr !357
  %37 = call i32 @ptr_diff(i32* nonnull %stack_var_-84, i32* nonnull %34), !insn.addr !358
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11168), !insn.addr !359
  %39 = inttoptr i32 %38 to i8*
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !360
  store i32 42, i32* %val7_-104, align 4, !insn.addr !361
  store i8 65, i8* %c7_-105, align 1, !insn.addr !362
  %41 = bitcast i32* %val7_-104 to i8*
  %42 = call i32 @ptr_void(i8* nonnull %41, i32 0), !insn.addr !363
  %43 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11142), !insn.addr !364
  %44 = inttoptr i32 %43 to i8*
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !365
  %46 = call i32 @ptr_void(i8* nonnull %c7_-105, i32 1), !insn.addr !366
  %47 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !367
  store i32 10, i32* %val8_-112, align 4, !insn.addr !368
  %48 = call i32 @ptr_const(i32* nonnull %val8_-112), !insn.addr !369
  %49 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11116), !insn.addr !370
  %50 = inttoptr i32 %49 to i8*
  %51 = call i32 (i8*, ...) @printf(i8* %50), !insn.addr !371
  store i32 10, i32* %val9_-116, align 4, !insn.addr !372
  %52 = call i32 @ptr_const_ptr(i32* nonnull %val9_-116), !insn.addr !373
  %53 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11089), !insn.addr !374
  %54 = inttoptr i32 %53 to i8*
  %55 = call i32 (i8*, ...) @printf(i8* %54), !insn.addr !375
  %56 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -15424), !insn.addr !376
  %57 = inttoptr i32 %56 to i32 (i32)*
  %58 = call i32 @ptr_func_simple(i32 (i32)* %57, i32 5), !insn.addr !377
  %59 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11058), !insn.addr !378
  %60 = inttoptr i32 %59 to i8*
  %61 = call i32 (i8*, ...) @printf(i8* %60), !insn.addr !379
  store i32 5, i32* %val11_-120, align 4, !insn.addr !380
  %62 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -15408), !insn.addr !381
  %63 = inttoptr i32 %62 to i32 (i32*, i8**)*
  %64 = call i32 @ptr_func_complex(i32 (i32*, i8**)* %63, i32* nonnull %val11_-120), !insn.addr !382
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -11025), !insn.addr !383
  %66 = inttoptr i32 %65 to i8*
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !384
  store i32 305419896, i32* %val12_-124, align 4, !insn.addr !385
  %68 = bitcast i32* %val12_-124 to i8*
  %69 = call i32 @ptr_cast(i8* nonnull %68), !insn.addr !386
  %70 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -10991), !insn.addr !387
  %71 = inttoptr i32 %70 to i8*
  %72 = call i32 (i8*, ...) @printf(i8* %71), !insn.addr !388
  %73 = call i8* @opaque_handle_create(i32 10), !insn.addr !389
  %74 = call i32 @opaque_handle_op(i8* %73), !insn.addr !390
  %75 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3f61 to i32), i32 -10963), !insn.addr !391
  %76 = inttoptr i32 %75 to i8*
  %77 = call i32 (i8*, ...) @printf(i8* %76), !insn.addr !392
  ret void, !insn.addr !393

; uselistorder directives
  uselistorder i32 %1, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, i32)* @ptr_void, { 1, 0 }
  uselistorder i8 65, { 1, 0 }
  uselistorder i32 5, { 13, 8, 9, 14, 15, 17, 18, 10, 11, 3, 0, 1, 2, 12, 4, 5, 6, 16, 7 }
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_23c0:
  %0 = mul i32 %x, 2, !insn.addr !394
  ret i32 %0, !insn.addr !395
}

define i32 @complex_callback(i32* %p, i8** %args) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = load i32, i32* %p, align 4, !insn.addr !396
  %1 = add i32 %0, 10, !insn.addr !397
  store i32 %1, i32* %p, align 4, !insn.addr !398
  %2 = load i8*, i8** %args, align 4, !insn.addr !399
  %3 = icmp eq i8* %2, null, !insn.addr !400
  %4 = icmp eq i1 %3, false, !insn.addr !401
  %5 = zext i1 %4 to i32, !insn.addr !401
  ret i32 %5, !insn.addr !402
}

define i32 @struct_simple(i32* %p) local_unnamed_addr {
dec_label_pc_2400:
  %0 = ptrtoint i32* %p to i32
  %1 = load i32, i32* %p, align 4, !insn.addr !403
  %2 = add i32 %0, 4, !insn.addr !404
  %3 = inttoptr i32 %2 to i32*, !insn.addr !404
  %4 = load i32, i32* %3, align 4, !insn.addr !404
  %5 = add i32 %4, %1, !insn.addr !404
  %6 = add i32 %0, 8, !insn.addr !405
  %7 = inttoptr i32 %6 to i32*, !insn.addr !405
  %8 = load i32, i32* %7, align 4, !insn.addr !405
  %9 = add i32 %5, %8, !insn.addr !405
  ret i32 %9, !insn.addr !406
}

define i32 @struct_array(i32* %pts, i32 %n) local_unnamed_addr {
dec_label_pc_2420:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !407
  %sum_-8.02.reg2mem = alloca i32, !insn.addr !407
  %storemerge.off03.reg2mem = alloca i32, !insn.addr !407
  %0 = ptrtoint i32* %pts to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !408
  store i32 0, i32* %storemerge.off03.reg2mem, !insn.addr !408
  store i32 0, i32* %sum_-8.02.reg2mem, !insn.addr !408
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !408
  br i1 %1, label %dec_label_pc_2446, label %dec_label_pc_247d, !insn.addr !408

dec_label_pc_2446:                                ; preds = %dec_label_pc_2420, %dec_label_pc_2446
  %sum_-8.02.reload = load i32, i32* %sum_-8.02.reg2mem
  %storemerge.off03.reload = load i32, i32* %storemerge.off03.reg2mem
  %2 = mul i32 %storemerge.off03.reload, 12, !insn.addr !409
  %3 = add i32 %2, %0, !insn.addr !410
  %4 = inttoptr i32 %3 to i32*, !insn.addr !411
  %5 = load i32, i32* %4, align 4, !insn.addr !411
  %6 = add i32 %3, 4, !insn.addr !412
  %7 = inttoptr i32 %6 to i32*, !insn.addr !412
  %8 = load i32, i32* %7, align 4, !insn.addr !412
  %9 = add i32 %3, 8, !insn.addr !413
  %10 = inttoptr i32 %9 to i32*, !insn.addr !413
  %11 = load i32, i32* %10, align 4, !insn.addr !413
  %12 = add i32 %5, %sum_-8.02.reload, !insn.addr !412
  %13 = add i32 %12, %8, !insn.addr !413
  %14 = add i32 %13, %11, !insn.addr !414
  %15 = add nuw nsw i32 %storemerge.off03.reload, 1, !insn.addr !415
  %exitcond = icmp eq i32 %15, %n
  store i32 %15, i32* %storemerge.off03.reg2mem, !insn.addr !408
  store i32 %14, i32* %sum_-8.02.reg2mem, !insn.addr !408
  store i32 %14, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !408
  br i1 %exitcond, label %dec_label_pc_247d, label %dec_label_pc_2446, !insn.addr !408

dec_label_pc_247d:                                ; preds = %dec_label_pc_2446, %dec_label_pc_2420
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !416

; uselistorder directives
  uselistorder i32 %storemerge.off03.reload, { 1, 0 }
  uselistorder i32* %storemerge.off03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2446, { 1, 0 }
}

define i32 @struct_nested(i32* %r) local_unnamed_addr {
dec_label_pc_2490:
  %0 = ptrtoint i32* %r to i32
  %1 = load i32, i32* %r, align 4, !insn.addr !417
  %2 = add i32 %0, 12, !insn.addr !418
  %3 = inttoptr i32 %2 to i32*, !insn.addr !418
  %4 = load i32, i32* %3, align 4, !insn.addr !418
  %5 = add i32 %4, %1, !insn.addr !418
  ret i32 %5, !insn.addr !419

; uselistorder directives
  uselistorder i32 12, { 1, 0 }
}

define i32 @struct_deep(i32* %w) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = ptrtoint i32* %w to i32
  %1 = add i32 %0, 8, !insn.addr !420
  %2 = inttoptr i32 %1 to i32*, !insn.addr !420
  %3 = load i32, i32* %2, align 4, !insn.addr !420
  %4 = add i32 %0, 20, !insn.addr !421
  %5 = inttoptr i32 %4 to i32*, !insn.addr !421
  %6 = load i32, i32* %5, align 4, !insn.addr !421
  %7 = add i32 %6, %3, !insn.addr !421
  ret i32 %7, !insn.addr !422
}

define i32 @struct_with_ptr(i32* %node) local_unnamed_addr {
dec_label_pc_24d0:
  %storemerge.reg2mem = alloca i32, !insn.addr !423
  %0 = ptrtoint i32* %node to i32
  %1 = load i32, i32* %node, align 4, !insn.addr !424
  %2 = add i32 %0, 4, !insn.addr !425
  %3 = inttoptr i32 %2 to i32*, !insn.addr !425
  %4 = load i32, i32* %3, align 4, !insn.addr !425
  %5 = icmp eq i32 %4, 0, !insn.addr !425
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !426
  br i1 %5, label %dec_label_pc_2508, label %dec_label_pc_24ee, !insn.addr !426

dec_label_pc_24ee:                                ; preds = %dec_label_pc_24d0
  %6 = inttoptr i32 %4 to i32*, !insn.addr !427
  %7 = load i32, i32* %6, align 4, !insn.addr !427
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !428
  br label %dec_label_pc_2508, !insn.addr !428

dec_label_pc_2508:                                ; preds = %dec_label_pc_24d0, %dec_label_pc_24ee
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %8 = add i32 %storemerge.reload, %1, !insn.addr !429
  ret i32 %8, !insn.addr !430

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2508, { 1, 0 }
}

define i32 @struct_bitfields(i32* %f) local_unnamed_addr {
dec_label_pc_2520:
  %0 = bitcast i32* %f to i16*, !insn.addr !431
  %1 = load i16, i16* %0, align 2
  %2 = urem i16 %1, 2, !insn.addr !432
  %3 = udiv i16 %1, 2, !insn.addr !433
  %4 = urem i16 %3, 4, !insn.addr !434
  %5 = udiv i16 %1, 8, !insn.addr !435
  %6 = urem i16 %5, 8, !insn.addr !436
  %7 = udiv i16 %1, 64, !insn.addr !437
  %narrow = add nuw nsw i16 %7, %2
  %narrow1 = add nuw nsw i16 %narrow, %4
  %narrow2 = add nuw nsw i16 %narrow1, %6
  %8 = zext i16 %narrow2 to i32, !insn.addr !438
  ret i32 %8, !insn.addr !439

; uselistorder directives
  uselistorder i16 8, { 1, 0 }
}

define i32 @union_type(i32* %u, i32 %type) local_unnamed_addr {
dec_label_pc_2570:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !440
  %0 = icmp eq i32 %type, 0, !insn.addr !441
  %1 = icmp eq i1 %0, false, !insn.addr !442
  br i1 %1, label %dec_label_pc_2593, label %dec_label_pc_2586, !insn.addr !442

dec_label_pc_2586:                                ; preds = %dec_label_pc_2570
  %2 = load i32, i32* %u, align 4, !insn.addr !443
  store i32 %2, i32* %stack_var_-8.0.reg2mem, !insn.addr !444
  br label %dec_label_pc_25cf, !insn.addr !444

dec_label_pc_2593:                                ; preds = %dec_label_pc_2570
  %3 = icmp eq i32 %type, 1, !insn.addr !445
  %4 = icmp eq i1 %3, false, !insn.addr !446
  br i1 %4, label %dec_label_pc_25c6, label %dec_label_pc_259d, !insn.addr !446

dec_label_pc_259d:                                ; preds = %dec_label_pc_2593
  %5 = load i32, i32* %u, align 4
  %6 = bitcast i32 %5 to float
  %7 = fptosi float %6 to i32, !insn.addr !447
  store i32 %7, i32* %stack_var_-8.0.reg2mem, !insn.addr !448
  br label %dec_label_pc_25cf, !insn.addr !448

dec_label_pc_25c6:                                ; preds = %dec_label_pc_2593
  %8 = bitcast i32* %u to i8*, !insn.addr !449
  %9 = load i8, i8* %8, align 1, !insn.addr !449
  %10 = sext i8 %9 to i32, !insn.addr !449
  store i32 %10, i32* %stack_var_-8.0.reg2mem, !insn.addr !450
  br label %dec_label_pc_25cf, !insn.addr !450

dec_label_pc_25cf:                                ; preds = %dec_label_pc_25c6, %dec_label_pc_259d, %dec_label_pc_2586
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !451

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %u, { 1, 0, 2 }
}

define i32 @union_array(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_25e0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !452
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !452
  %storemerge2.reg2mem = alloca i32, !insn.addr !452
  %0 = ptrtoint i32* %arr to i32
  %1 = icmp sgt i32 %n, 0, !insn.addr !453
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !453
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !453
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !453
  br i1 %1, label %dec_label_pc_2606, label %dec_label_pc_2623, !insn.addr !453

dec_label_pc_2606:                                ; preds = %dec_label_pc_25e0, %dec_label_pc_2606
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = mul i32 %storemerge2.reload, 4, !insn.addr !454
  %3 = add i32 %2, %0, !insn.addr !454
  %4 = inttoptr i32 %3 to i32*, !insn.addr !454
  %5 = load i32, i32* %4, align 4, !insn.addr !454
  %6 = add i32 %5, %sum_-8.01.reload, !insn.addr !455
  %7 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !456
  %exitcond = icmp eq i32 %7, %n
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !453
  store i32 %6, i32* %sum_-8.01.reg2mem, !insn.addr !453
  store i32 %6, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !453
  br i1 %exitcond, label %dec_label_pc_2623, label %dec_label_pc_2606, !insn.addr !453

dec_label_pc_2623:                                ; preds = %dec_label_pc_2606, %dec_label_pc_25e0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !457

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2606, { 1, 0 }
}

define i32 @enum_type(i32 %s) local_unnamed_addr {
dec_label_pc_2630:
  %0 = mul i32 %s, 10, !insn.addr !458
  ret i32 %0, !insn.addr !459
}

define i32 @enum_switch(i32 %s) local_unnamed_addr {
dec_label_pc_2640:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp ult i32 %1, 4
  br i1 %3, label %dec_label_pc_2667, label %dec_label_pc_26a8, !insn.addr !460

dec_label_pc_2667:                                ; preds = %dec_label_pc_2640
  %4 = add i32 %2, ptrtoint (i32* @global_var_39b5 to i32), !insn.addr !461
  %5 = mul i32 %1, 4, !insn.addr !462
  %6 = add i32 %5, add (i32 ptrtoint (i32* @global_var_39b5 to i32), i32 -12224), !insn.addr !462
  %7 = add i32 %6, %2, !insn.addr !462
  %8 = inttoptr i32 %7 to i32*, !insn.addr !462
  %9 = load i32, i32* %8, align 4, !insn.addr !462
  %10 = add i32 %4, %9, !insn.addr !463
  ret i32 %10, !insn.addr !464

dec_label_pc_26a8:                                ; preds = %dec_label_pc_2640
  ret i32 -99, !insn.addr !465

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @struct_func_ptr(i32* %dev) local_unnamed_addr {
dec_label_pc_26c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 4, !insn.addr !466
  %3 = inttoptr i32 %2 to i32*, !insn.addr !466
  %4 = load i32, i32* %3, align 4, !insn.addr !466
  ret i32 %4, !insn.addr !467
}

define i32 @linked_list(i32* %head) local_unnamed_addr {
dec_label_pc_26f0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !468
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !468
  %storemerge2.reg2mem = alloca i32, !insn.addr !468
  %0 = icmp eq i32* %head, null, !insn.addr !469
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !470
  br i1 %0, label %dec_label_pc_2729, label %dec_label_pc_2710.lr.ph, !insn.addr !470

dec_label_pc_2710.lr.ph:                          ; preds = %dec_label_pc_26f0
  %1 = ptrtoint i32* %head to i32
  store i32 %1, i32* %storemerge2.reg2mem
  store i32 0, i32* %sum_-8.01.reg2mem
  br label %dec_label_pc_2710

dec_label_pc_2710:                                ; preds = %dec_label_pc_2710.lr.ph, %dec_label_pc_2710
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = inttoptr i32 %storemerge2.reload to i32*, !insn.addr !471
  %3 = load i32, i32* %2, align 4, !insn.addr !471
  %4 = add i32 %3, %sum_-8.01.reload, !insn.addr !472
  %5 = add i32 %storemerge2.reload, 4, !insn.addr !473
  %6 = inttoptr i32 %5 to i32*, !insn.addr !473
  %7 = load i32, i32* %6, align 4, !insn.addr !473
  %8 = icmp eq i32 %7, 0, !insn.addr !469
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !470
  store i32 %4, i32* %sum_-8.01.reg2mem, !insn.addr !470
  store i32 %4, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !470
  br i1 %8, label %dec_label_pc_2729, label %dec_label_pc_2710, !insn.addr !470

dec_label_pc_2729:                                ; preds = %dec_label_pc_2710, %dec_label_pc_26f0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !474

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %head, { 1, 0 }
  uselistorder label %dec_label_pc_2710, { 1, 0 }
}

define i32 @doubly_linked_list(i32* %head) local_unnamed_addr {
dec_label_pc_2740:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !475
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !475
  %storemerge2.reg2mem = alloca i32, !insn.addr !475
  %0 = icmp eq i32* %head, null, !insn.addr !476
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !477
  br i1 %0, label %dec_label_pc_2779, label %dec_label_pc_2760.lr.ph, !insn.addr !477

dec_label_pc_2760.lr.ph:                          ; preds = %dec_label_pc_2740
  %1 = ptrtoint i32* %head to i32
  store i32 %1, i32* %storemerge2.reg2mem
  store i32 0, i32* %sum_-8.01.reg2mem
  br label %dec_label_pc_2760

dec_label_pc_2760:                                ; preds = %dec_label_pc_2760.lr.ph, %dec_label_pc_2760
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %2 = inttoptr i32 %storemerge2.reload to i32*, !insn.addr !478
  %3 = load i32, i32* %2, align 4, !insn.addr !478
  %4 = add i32 %3, %sum_-8.01.reload, !insn.addr !479
  %5 = add i32 %storemerge2.reload, 4, !insn.addr !480
  %6 = inttoptr i32 %5 to i32*, !insn.addr !480
  %7 = load i32, i32* %6, align 4, !insn.addr !480
  %8 = icmp eq i32 %7, 0, !insn.addr !476
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !477
  store i32 %4, i32* %sum_-8.01.reg2mem, !insn.addr !477
  store i32 %4, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !477
  br i1 %8, label %dec_label_pc_2779, label %dec_label_pc_2760, !insn.addr !477

dec_label_pc_2779:                                ; preds = %dec_label_pc_2760, %dec_label_pc_2740
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !481

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-8.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %head, { 1, 0 }
  uselistorder label %dec_label_pc_2760, { 1, 0 }
}

define i32 @binary_tree_sum(i32* %root) local_unnamed_addr {
dec_label_pc_2790:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !482
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !483
  %3 = icmp eq i1 %2, false, !insn.addr !484
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !484
  br i1 %3, label %dec_label_pc_27bf, label %dec_label_pc_27fd, !insn.addr !484

dec_label_pc_27bf:                                ; preds = %dec_label_pc_2790
  %4 = add i32 %1, 4, !insn.addr !485
  %5 = inttoptr i32 %4 to i32*, !insn.addr !485
  %6 = load i32, i32* %5, align 4, !insn.addr !485
  %7 = inttoptr i32 %6 to i32*, !insn.addr !486
  %8 = call i32 @binary_tree_sum(i32* %7), !insn.addr !486
  %9 = add i32 %8, %6, !insn.addr !487
  %10 = add i32 %1, 8, !insn.addr !488
  %11 = inttoptr i32 %10 to i32*, !insn.addr !488
  %12 = load i32, i32* %11, align 4, !insn.addr !488
  %13 = inttoptr i32 %12 to i32*, !insn.addr !489
  %14 = call i32 @binary_tree_sum(i32* %13), !insn.addr !489
  %15 = add i32 %9, %14, !insn.addr !490
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !491
  br label %dec_label_pc_27fd, !insn.addr !491

dec_label_pc_27fd:                                ; preds = %dec_label_pc_2790, %dec_label_pc_27bf
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !492

; uselistorder directives
  uselistorder i32 %1, { 1, 2, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_27fd, { 1, 0 }
}

define i32 @binary_tree(i32* %root) local_unnamed_addr {
dec_label_pc_2810:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !493
  %3 = call i32 @binary_tree_sum(i32* %2), !insn.addr !493
  ret i32 %3, !insn.addr !494

; uselistorder directives
  uselistorder i32 (i32*)* @binary_tree_sum, { 2, 1, 0 }
}

define i32 @graph_traverse(i32* %g) local_unnamed_addr {
dec_label_pc_2840:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !495
  %sum_-8.1.lcssa.reg2mem = alloca i32, !insn.addr !495
  %sum_-8.14.reg2mem = alloca i32, !insn.addr !495
  %storemerge5.reg2mem = alloca i32, !insn.addr !495
  %sum_-8.06.reg2mem = alloca i32, !insn.addr !495
  %storemerge17.reg2mem = alloca i32, !insn.addr !495
  %0 = ptrtoint i32* %g to i32
  %1 = add i32 %0, 40, !insn.addr !496
  %2 = inttoptr i32 %1 to i32*, !insn.addr !496
  %3 = load i32, i32* %2, align 4, !insn.addr !496
  %4 = icmp sgt i32 %3, 0, !insn.addr !497
  store i32 0, i32* %storemerge17.reg2mem, !insn.addr !497
  store i32 0, i32* %sum_-8.06.reg2mem, !insn.addr !497
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !497
  br i1 %4, label %dec_label_pc_2866, label %dec_label_pc_28a8, !insn.addr !497

dec_label_pc_2866:                                ; preds = %dec_label_pc_2840, %dec_label_pc_289a
  %sum_-8.06.reload = load i32, i32* %sum_-8.06.reg2mem
  %storemerge17.reload = load i32, i32* %storemerge17.reg2mem
  %5 = mul i32 %storemerge17.reload, 4, !insn.addr !498
  %6 = add i32 %5, %0, !insn.addr !498
  %storemerge.in2 = inttoptr i32 %6 to i32*
  %storemerge3 = load i32, i32* %storemerge.in2, align 4
  %7 = icmp eq i32 %storemerge3, 0, !insn.addr !499
  store i32 %storemerge3, i32* %storemerge5.reg2mem, !insn.addr !500
  store i32 %sum_-8.06.reload, i32* %sum_-8.14.reg2mem, !insn.addr !500
  store i32 %sum_-8.06.reload, i32* %sum_-8.1.lcssa.reg2mem, !insn.addr !500
  br i1 %7, label %dec_label_pc_289a, label %dec_label_pc_287c, !insn.addr !500

dec_label_pc_287c:                                ; preds = %dec_label_pc_2866, %dec_label_pc_287c
  %sum_-8.14.reload = load i32, i32* %sum_-8.14.reg2mem
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %8 = inttoptr i32 %storemerge5.reload to i32*, !insn.addr !501
  %9 = load i32, i32* %8, align 4, !insn.addr !501
  %10 = add i32 %9, %sum_-8.14.reload, !insn.addr !502
  %11 = add i32 %storemerge5.reload, 4, !insn.addr !503
  %storemerge.in = inttoptr i32 %11 to i32*
  %storemerge = load i32, i32* %storemerge.in, align 4
  %12 = icmp eq i32 %storemerge, 0, !insn.addr !499
  store i32 %storemerge, i32* %storemerge5.reg2mem, !insn.addr !500
  store i32 %10, i32* %sum_-8.14.reg2mem, !insn.addr !500
  store i32 %10, i32* %sum_-8.1.lcssa.reg2mem, !insn.addr !500
  br i1 %12, label %dec_label_pc_289a, label %dec_label_pc_287c, !insn.addr !500

dec_label_pc_289a:                                ; preds = %dec_label_pc_287c, %dec_label_pc_2866
  %sum_-8.1.lcssa.reload = load i32, i32* %sum_-8.1.lcssa.reg2mem
  %13 = add nuw nsw i32 %storemerge17.reload, 1, !insn.addr !504
  %exitcond = icmp eq i32 %13, %3
  store i32 %13, i32* %storemerge17.reg2mem, !insn.addr !497
  store i32 %sum_-8.1.lcssa.reload, i32* %sum_-8.06.reg2mem, !insn.addr !497
  store i32 %sum_-8.1.lcssa.reload, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !497
  br i1 %exitcond, label %dec_label_pc_28a8, label %dec_label_pc_2866, !insn.addr !497

dec_label_pc_28a8:                                ; preds = %dec_label_pc_289a, %dec_label_pc_2840
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !505

; uselistorder directives
  uselistorder i32 %storemerge5.reload, { 1, 0 }
  uselistorder i32* %storemerge17.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.06.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.14.reg2mem, { 2, 0, 1 }
  uselistorder i32 4, { 16, 0, 17, 18, 19, 20, 1, 13, 2, 21, 22, 23, 3, 24, 15, 4, 25, 5, 6, 7, 8, 9, 10, 11, 12, 14 }
  uselistorder i32 40, { 3, 0, 1, 2 }
  uselistorder label %dec_label_pc_287c, { 1, 0 }
  uselistorder label %dec_label_pc_2866, { 1, 0 }
}

define void @test_composite_types() local_unnamed_addr {
dec_label_pc_28b0:
  %0 = alloca i32
  %g_-292 = alloca i32, align 4
  %e1_-244 = alloca i32, align 4
  %tree_-236 = alloca i32, align 4
  %dlist_-220 = alloca i32, align 4
  %list_-196 = alloca i32, align 4
  %dev_-172 = alloca i32, align 4
  %arr_u_-164 = alloca [1 x i32], align 4
  %u_-148 = alloca i32, align 4
  %f_-140 = alloca i32, align 4
  %node1_-132 = alloca i32, align 4
  %w_-116 = alloca i32, align 4
  %r_-68 = alloca i32, align 4
  %pts_-44 = alloca i32, align 4
  %p1_-20 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10929), !insn.addr !506
  %3 = inttoptr i32 %2 to i8*, !insn.addr !507
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !508
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12116), !insn.addr !509
  %6 = inttoptr i32 %5 to i32*, !insn.addr !509
  %7 = load i32, i32* %6, align 4, !insn.addr !509
  store i32 %7, i32* %p1_-20, align 4, !insn.addr !510
  %8 = call i32 @struct_simple(i32* nonnull %p1_-20), !insn.addr !511
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10901), !insn.addr !512
  %10 = inttoptr i32 %9 to i8*, !insn.addr !513
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !514
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12104), !insn.addr !515
  %13 = inttoptr i32 %12 to i32*, !insn.addr !516
  %14 = call i32* @memcpy(i32* nonnull %pts_-44, i32* %13, i32 24), !insn.addr !516
  %15 = call i32 @struct_array(i32* nonnull %pts_-44, i32 2), !insn.addr !517
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10870), !insn.addr !518
  %17 = inttoptr i32 %16 to i8*, !insn.addr !519
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !520
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12080), !insn.addr !521
  %20 = inttoptr i32 %19 to i32*, !insn.addr !522
  %21 = call i32* @memcpy(i32* nonnull %r_-68, i32* %20, i32 20), !insn.addr !522
  %22 = call i32 @struct_nested(i32* nonnull %r_-68), !insn.addr !523
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10840), !insn.addr !524
  %24 = inttoptr i32 %23 to i8*, !insn.addr !525
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !526
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12060), !insn.addr !527
  %27 = inttoptr i32 %26 to i32*, !insn.addr !528
  %28 = call i32* @memcpy(i32* nonnull %w_-116, i32* %27, i32 48), !insn.addr !528
  %29 = call i32 @struct_deep(i32* nonnull %w_-116), !insn.addr !529
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10809), !insn.addr !530
  %31 = inttoptr i32 %30 to i8*, !insn.addr !531
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !532
  store i32 10, i32* %node1_-132, align 4, !insn.addr !533
  %33 = call i32 @struct_with_ptr(i32* nonnull %node1_-132), !insn.addr !534
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10780), !insn.addr !535
  %35 = inttoptr i32 %34 to i8*, !insn.addr !536
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !537
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12240), !insn.addr !538
  %38 = inttoptr i32 %37 to i32*, !insn.addr !538
  %39 = load i32, i32* %38, align 4, !insn.addr !538
  store i32 %39, i32* %f_-140, align 4, !insn.addr !539
  %40 = call i32 @struct_bitfields(i32* nonnull %f_-140), !insn.addr !540
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10747), !insn.addr !541
  %42 = inttoptr i32 %41 to i8*, !insn.addr !542
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !543
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12264), !insn.addr !544
  %45 = inttoptr i32 %44 to i32*, !insn.addr !544
  %46 = load i32, i32* %45, align 4, !insn.addr !544
  store i32 %46, i32* %u_-148, align 4, !insn.addr !545
  %47 = call i32 @union_type(i32* nonnull %u_-148, i32 0), !insn.addr !546
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10713), !insn.addr !547
  %49 = inttoptr i32 %48 to i8*, !insn.addr !548
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !549
  %51 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12012), !insn.addr !550
  %52 = inttoptr i32 %51 to i32*, !insn.addr !550
  %53 = load i32, i32* %52, align 4, !insn.addr !550
  %54 = insertvalue [1 x i32] undef, i32 %53, 0, !insn.addr !551
  store [1 x i32] %54, [1 x i32]* %arr_u_-164, align 4, !insn.addr !551
  %55 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_u_-164, i32 0, i32 0
  %56 = call i32 @union_array(i32* nonnull %55, i32 3), !insn.addr !552
  %57 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10685), !insn.addr !553
  %58 = inttoptr i32 %57 to i8*, !insn.addr !554
  %59 = call i32 (i8*, ...) @printf(i8* %58), !insn.addr !555
  %60 = call i32 @enum_type(i32 1), !insn.addr !556
  %61 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10656), !insn.addr !557
  %62 = inttoptr i32 %61 to i8*, !insn.addr !558
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !559
  %64 = call i32 @enum_switch(i32 2), !insn.addr !560
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10629), !insn.addr !561
  %66 = inttoptr i32 %65 to i8*, !insn.addr !562
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !563
  %68 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -236), !insn.addr !564
  %69 = inttoptr i32 %68 to i32*, !insn.addr !564
  %70 = load i32, i32* %69, align 4, !insn.addr !564
  store i32 %70, i32* %dev_-172, align 4, !insn.addr !565
  %71 = call i32 @struct_func_ptr(i32* nonnull %dev_-172), !insn.addr !566
  %72 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10600), !insn.addr !567
  %73 = inttoptr i32 %72 to i8*, !insn.addr !568
  %74 = call i32 (i8*, ...) @printf(i8* %73), !insn.addr !569
  store i32 10, i32* %list_-196, align 4, !insn.addr !570
  %75 = call i32 @linked_list(i32* nonnull %list_-196), !insn.addr !571
  %76 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10567), !insn.addr !572
  %77 = inttoptr i32 %76 to i8*, !insn.addr !573
  %78 = call i32 (i8*, ...) @printf(i8* %77), !insn.addr !574
  store i32 10, i32* %dlist_-220, align 4, !insn.addr !575
  %79 = call i32 @doubly_linked_list(i32* nonnull %dlist_-220), !insn.addr !576
  %80 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10538), !insn.addr !577
  %81 = inttoptr i32 %80 to i8*, !insn.addr !578
  %82 = call i32 (i8*, ...) @printf(i8* %81), !insn.addr !579
  %83 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12000), !insn.addr !580
  %84 = inttoptr i32 %83 to i32*, !insn.addr !580
  %85 = load i32, i32* %84, align 4, !insn.addr !580
  store i32 %85, i32* %tree_-236, align 4, !insn.addr !581
  %86 = call i32 @binary_tree(i32* nonnull %tree_-236), !insn.addr !582
  %87 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10502), !insn.addr !583
  %88 = inttoptr i32 %87 to i8*, !insn.addr !584
  %89 = call i32 (i8*, ...) @printf(i8* %88), !insn.addr !585
  %90 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -12232), !insn.addr !586
  %91 = inttoptr i32 %90 to i32*, !insn.addr !586
  %92 = load i32, i32* %91, align 4, !insn.addr !586
  store i32 %92, i32* %e1_-244, align 4, !insn.addr !587
  %93 = ptrtoint i32* %e1_-244 to i32, !insn.addr !588
  store i32 %93, i32* %g_-292, align 4, !insn.addr !588
  %94 = call i32 @graph_traverse(i32* nonnull %g_-292), !insn.addr !589
  %95 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3741 to i32), i32 -10473), !insn.addr !590
  %96 = inttoptr i32 %95 to i8*, !insn.addr !591
  %97 = call i32 (i8*, ...) @printf(i8* %96), !insn.addr !592
  ret void, !insn.addr !593

; uselistorder directives
  uselistorder i32 %1, { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 3, { 2, 3, 4, 0, 1 }
  uselistorder i32 10, { 8, 9, 10, 5, 16, 6, 11, 12, 13, 17, 14, 7, 0, 1, 3, 4, 2, 15, 18 }
  uselistorder i32 20, { 3, 8, 4, 5, 6, 0, 1, 7, 2 }
  uselistorder i32 2, { 6, 7, 0, 8, 1, 2, 10, 9, 3, 4, 5 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 55 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2dd0:
  call void @test_data_types_l1(), !insn.addr !594
  call void @test_array_types(), !insn.addr !595
  call void @test_pointer_types(), !insn.addr !596
  call void @test_composite_types(), !insn.addr !597
  ret i32 0, !insn.addr !598

; uselistorder directives
  uselistorder i32 0, { 47, 60, 61, 84, 89, 58, 0, 1, 2, 49, 3, 90, 91, 5, 4, 92, 7, 6, 8, 9, 10, 50, 93, 11, 94, 12, 13, 14, 51, 85, 62, 63, 64, 65, 66, 67, 95, 16, 17, 15, 52, 68, 69, 18, 70, 71, 96, 72, 73, 19, 74, 75, 76, 77, 20, 21, 22, 78, 79, 59, 23, 24, 80, 81, 82, 83, 25, 26, 27, 53, 97, 98, 29, 30, 28, 54, 32, 33, 31, 55, 34, 35, 36, 56, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 57, 99, 88, 48, 86, 87 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2e20:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !599
  %ebx.0.reg2mem = alloca i32, !insn.addr !599
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !600
  %3 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_31d7 to i32), i32 -260), !insn.addr !601
  %4 = inttoptr i32 %3 to i32*, !insn.addr !601
  %5 = load i32, i32* %4, align 4, !insn.addr !601
  %6 = icmp eq i32 %5, -1, !insn.addr !602
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !603
  store i32 -1, i32* %merge.reg2mem, !insn.addr !603
  br i1 %6, label %dec_label_pc_2e5d, label %dec_label_pc_2e50, !insn.addr !603

dec_label_pc_2e50:                                ; preds = %dec_label_pc_2e20, %dec_label_pc_2e50
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !604
  %8 = inttoptr i32 %7 to i32*, !insn.addr !604
  %9 = load i32, i32* %8, align 4, !insn.addr !604
  %10 = icmp eq i32 %9, -1, !insn.addr !605
  %11 = icmp eq i1 %10, false, !insn.addr !606
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !606
  store i32 %9, i32* %merge.reg2mem, !insn.addr !606
  br i1 %11, label %dec_label_pc_2e50, label %dec_label_pc_2e5d, !insn.addr !606

dec_label_pc_2e5d:                                ; preds = %dec_label_pc_2e50, %dec_label_pc_2e20
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !607

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1 }
  uselistorder i32 -1, { 5, 0, 6, 1, 3, 4, 2 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2e50, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_2e6c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !608
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !609
  ret i32 %3, !insn.addr !610

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 20, 24, 23, 19, 87, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 18, 138, 30, 29, 28, 27, 26, 25, 17, 31, 16, 34, 33, 32, 37, 36, 35, 15, 14, 139, 40, 39, 38, 88, 41, 42, 140, 45, 44, 43, 92, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 13, 89, 46, 141, 50, 49, 48, 47, 142, 143, 144, 145, 146, 147, 148, 149, 150, 134, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 58, 57, 56, 55, 54, 53, 52, 51, 12, 151, 61, 60, 59, 62, 152, 66, 65, 64, 63, 153, 69, 68, 67, 154, 72, 71, 70, 155, 156, 157, 78, 77, 76, 75, 74, 73, 158, 80, 79, 159, 81, 160, 84, 83, 82, 136, 135, 11, 90, 85, 21, 10, 22, 9, 91, 8, 7, 86, 6, 5, 4, 3, 137, 2, 1, 0 }
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
!34 = !{i64 4670}
!35 = !{i64 4691}
!36 = !{i64 4695}
!37 = !{i64 4713}
!38 = !{i64 4716}
!39 = !{i64 4720}
!40 = !{i64 4745}
!41 = !{i64 4749}
!42 = !{i64 4774}
!43 = !{i64 4781}
!44 = !{i64 4804}
!45 = !{i64 4807}
!46 = !{i64 4813}
!47 = !{i64 4815}
!48 = !{i64 4821}
!49 = !{i64 4824}
!50 = !{i64 4852}
!51 = !{i64 4855}
!52 = !{i64 4861}
!53 = !{i64 4863}
!54 = !{i64 4869}
!55 = !{i64 4872}
!56 = !{i64 4895}
!57 = !{i64 4899}
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
!134 = !{i64 5790}
!135 = !{i64 5783}
!136 = !{i64 5796}
!137 = !{i64 5800}
!138 = !{i64 5812}
!139 = !{i64 5803}
!140 = !{i64 5830}
!141 = !{i64 5840}
!142 = !{i64 5873}
!143 = !{i64 5885}
!144 = !{i64 5888}
!145 = !{i64 5897}
!146 = !{i64 5867}
!147 = !{i64 5915}
!148 = !{i64 5920}
!149 = !{i64 5987}
!150 = !{i64 5990}
!151 = !{i64 5994}
!152 = !{i64 5996}
!153 = !{i64 6000}
!154 = !{i64 6005}
!155 = !{i64 6008}
!156 = !{i64 6017}
!157 = !{i64 5981}
!158 = !{i64 6036}
!159 = !{i64 5964}
!160 = !{i64 6055}
!161 = !{i64 5947}
!162 = !{i64 6073}
!163 = !{i64 6080}
!164 = !{i64 6112}
!165 = !{i64 6124}
!166 = !{i64 6127}
!167 = !{i64 6136}
!168 = !{i64 6154}
!169 = !{i64 6160}
!170 = !{i64 6192}
!171 = !{i64 6198}
!172 = !{i64 6201}
!173 = !{i64 6205}
!174 = !{i64 6207}
!175 = !{i64 6209}
!176 = !{i64 6218}
!177 = !{i64 6236}
!178 = !{i64 6240}
!179 = !{i64 6312}
!180 = !{i64 6263}
!181 = !{i64 6318}
!182 = !{i64 6324}
!183 = !{i64 6328}
!184 = !{i64 6343}
!185 = !{i64 6345}
!186 = !{i64 6348}
!187 = !{i64 6359}
!188 = !{i64 6377}
!189 = !{i64 6384}
!190 = !{i64 6403}
!191 = !{i64 6407}
!192 = !{i64 6419}
!193 = !{i64 6425}
!194 = !{i64 6441}
!195 = !{i64 6465}
!196 = !{i64 6469}
!197 = !{i64 6472}
!198 = !{i64 6475}
!199 = !{i64 6485}
!200 = !{i64 6496}
!201 = !{i64 6528}
!202 = !{i64 6540}
!203 = !{i64 6543}
!204 = !{i64 6552}
!205 = !{i64 6570}
!206 = !{i64 6576}
!207 = !{i64 6604}
!208 = !{i64 6613}
!209 = !{i64 6627}
!210 = !{i64 6648}
!211 = !{i64 6673}
!212 = !{i64 6684}
!213 = !{i64 6697}
!214 = !{i64 6708}
!215 = !{i64 6714}
!216 = !{i64 6734}
!217 = !{i64 6745}
!218 = !{i64 6758}
!219 = !{i64 6863}
!220 = !{i64 6869}
!221 = !{i64 6876}
!222 = !{i64 6815}
!223 = !{i64 6821}
!224 = !{i64 6884}
!225 = !{i64 6893}
!226 = !{i64 6803}
!227 = !{i64 6918}
!228 = !{i64 6780}
!229 = !{i64 6947}
!230 = !{i64 6958}
!231 = !{i64 6971}
!232 = !{i64 7045}
!233 = !{i64 7051}
!234 = !{i64 7058}
!235 = !{i64 7060}
!236 = !{i64 7067}
!237 = !{i64 7075}
!238 = !{i64 7088}
!239 = !{i64 7039}
!240 = !{i64 7113}
!241 = !{i64 7016}
!242 = !{i64 7138}
!243 = !{i64 6993}
!244 = !{i64 6577}
!245 = !{i64 7167}
!246 = !{i64 7178}
!247 = !{i64 7191}
!248 = !{i64 7202}
!249 = !{i64 7208}
!250 = !{i64 7255}
!251 = !{i64 7266}
!252 = !{i64 7279}
!253 = !{i64 7314}
!254 = !{i64 7307}
!255 = !{i64 7320}
!256 = !{i64 7327}
!257 = !{i64 7329}
!258 = !{i64 7337}
!259 = !{i64 7301}
!260 = !{i64 7374}
!261 = !{i64 7385}
!262 = !{i64 7398}
!263 = !{i64 7403}
!264 = !{i64 7423}
!265 = !{i64 7445}
!266 = !{i64 7502}
!267 = !{i64 7508}
!268 = !{i64 7526}
!269 = !{i64 7532}
!270 = !{i64 7541}
!271 = !{i64 7549}
!272 = !{i64 7578}
!273 = !{i64 7589}
!274 = !{i64 7602}
!275 = !{i64 7642}
!276 = !{i64 7655}
!277 = !{i64 7624}
!278 = !{i64 7716}
!279 = !{i64 7727}
!280 = !{i64 7740}
!281 = !{i64 7753}
!282 = !{i64 7769}
!283 = !{i64 7771}
!284 = !{i64 7775}
!285 = !{i64 7785}
!286 = !{i64 7787}
!287 = !{i64 7789}
!288 = !{i64 7793}
!289 = !{i64 7817}
!290 = !{i64 7819}
!291 = !{i64 7821}
!292 = !{i64 7823}
!293 = !{i64 7827}
!294 = !{i64 7840}
!295 = !{i64 7872}
!296 = !{i64 7881}
!297 = !{i64 7883}
!298 = !{i64 7892}
!299 = !{i64 7901}
!300 = !{i64 7919}
!301 = !{i64 7935}
!302 = !{i64 7939}
!303 = !{i64 7967}
!304 = !{i64 7969}
!305 = !{i64 7973}
!306 = !{i64 7984}
!307 = !{i64 7994}
!308 = !{i64 7998}
!309 = !{i64 8007}
!310 = !{i64 8012}
!311 = !{i64 8017}
!312 = !{i64 8021}
!313 = !{i64 8030}
!314 = !{i64 8036}
!315 = !{i64 8060}
!316 = !{i64 8078}
!317 = !{i64 8081}
!318 = !{i64 8105}
!319 = !{i64 8107}
!320 = !{i64 8113}
!321 = !{i64 8121}
!322 = !{i64 8167}
!323 = !{i64 8242}
!324 = !{i64 8286}
!325 = !{i64 8292}
!326 = !{i64 8314}
!327 = !{i64 8329}
!328 = !{i64 8333}
!329 = !{i64 8361}
!330 = !{i64 8370}
!331 = !{i64 8378}
!332 = !{i64 8391}
!333 = !{i64 8399}
!334 = !{i64 8412}
!335 = !{i64 8420}
!336 = !{i64 8430}
!337 = !{i64 8445}
!338 = !{i64 8453}
!339 = !{i64 8466}
!340 = !{i64 8474}
!341 = !{i64 8484}
!342 = !{i64 8490}
!343 = !{i64 8505}
!344 = !{i64 8513}
!345 = !{i64 8526}
!346 = !{i64 8537}
!347 = !{i64 8558}
!348 = !{i64 8580}
!349 = !{i64 8588}
!350 = !{i64 8601}
!351 = !{i64 8612}
!352 = !{i64 8633}
!353 = !{i64 8655}
!354 = !{i64 8663}
!355 = !{i64 8676}
!356 = !{i64 8687}
!357 = !{i64 8708}
!358 = !{i64 8732}
!359 = !{i64 8740}
!360 = !{i64 8753}
!361 = !{i64 8761}
!362 = !{i64 8768}
!363 = !{i64 8788}
!364 = !{i64 8796}
!365 = !{i64 8809}
!366 = !{i64 8831}
!367 = !{i64 8852}
!368 = !{i64 8860}
!369 = !{i64 8873}
!370 = !{i64 8881}
!371 = !{i64 8894}
!372 = !{i64 8902}
!373 = !{i64 8915}
!374 = !{i64 8923}
!375 = !{i64 8936}
!376 = !{i64 8944}
!377 = !{i64 8961}
!378 = !{i64 8969}
!379 = !{i64 8982}
!380 = !{i64 8990}
!381 = !{i64 8997}
!382 = !{i64 9013}
!383 = !{i64 9021}
!384 = !{i64 9034}
!385 = !{i64 9042}
!386 = !{i64 9055}
!387 = !{i64 9063}
!388 = !{i64 9076}
!389 = !{i64 9091}
!390 = !{i64 9108}
!391 = !{i64 9116}
!392 = !{i64 9129}
!393 = !{i64 9142}
!394 = !{i64 9161}
!395 = !{i64 9165}
!396 = !{i64 9180}
!397 = !{i64 9182}
!398 = !{i64 9188}
!399 = !{i64 9193}
!400 = !{i64 9202}
!401 = !{i64 9205}
!402 = !{i64 9209}
!403 = !{i64 9225}
!404 = !{i64 9230}
!405 = !{i64 9236}
!406 = !{i64 9240}
!407 = !{i64 9248}
!408 = !{i64 9280}
!409 = !{i64 9289}
!410 = !{i64 9293}
!411 = !{i64 9295}
!412 = !{i64 9306}
!413 = !{i64 9318}
!414 = !{i64 9321}
!415 = !{i64 9330}
!416 = !{i64 9348}
!417 = !{i64 9369}
!418 = !{i64 9374}
!419 = !{i64 9378}
!420 = !{i64 9401}
!421 = !{i64 9407}
!422 = !{i64 9411}
!423 = !{i64 9424}
!424 = !{i64 9436}
!425 = !{i64 9444}
!426 = !{i64 9448}
!427 = !{i64 9460}
!428 = !{i64 9465}
!429 = !{i64 9486}
!430 = !{i64 9492}
!431 = !{i64 9513}
!432 = !{i64 9516}
!433 = !{i64 9529}
!434 = !{i64 9533}
!435 = !{i64 9548}
!436 = !{i64 9552}
!437 = !{i64 9567}
!438 = !{i64 9574}
!439 = !{i64 9577}
!440 = !{i64 9584}
!441 = !{i64 9596}
!442 = !{i64 9600}
!443 = !{i64 9609}
!444 = !{i64 9614}
!445 = !{i64 9619}
!446 = !{i64 9623}
!447 = !{i64 9653}
!448 = !{i64 9665}
!449 = !{i64 9673}
!450 = !{i64 9676}
!451 = !{i64 9686}
!452 = !{i64 9696}
!453 = !{i64 9728}
!454 = !{i64 9740}
!455 = !{i64 9743}
!456 = !{i64 9752}
!457 = !{i64 9770}
!458 = !{i64 9782}
!459 = !{i64 9787}
!460 = !{i64 9825}
!461 = !{i64 9804}
!462 = !{i64 9837}
!463 = !{i64 9844}
!464 = !{i64 9846}
!465 = !{i64 9910}
!466 = !{i64 9943}
!467 = !{i64 9961}
!468 = !{i64 9968}
!469 = !{i64 9990}
!470 = !{i64 9994}
!471 = !{i64 10003}
!472 = !{i64 10005}
!473 = !{i64 10014}
!474 = !{i64 10032}
!475 = !{i64 10048}
!476 = !{i64 10070}
!477 = !{i64 10074}
!478 = !{i64 10083}
!479 = !{i64 10085}
!480 = !{i64 10094}
!481 = !{i64 10112}
!482 = !{i64 10128}
!483 = !{i64 10153}
!484 = !{i64 10157}
!485 = !{i64 10189}
!486 = !{i64 10195}
!487 = !{i64 10208}
!488 = !{i64 10216}
!489 = !{i64 10222}
!490 = !{i64 10232}
!491 = !{i64 10234}
!492 = !{i64 10245}
!493 = !{i64 10282}
!494 = !{i64 10292}
!495 = !{i64 10304}
!496 = !{i64 10333}
!497 = !{i64 10336}
!498 = !{i64 10348}
!499 = !{i64 10354}
!500 = !{i64 10358}
!501 = !{i64 10367}
!502 = !{i64 10369}
!503 = !{i64 10378}
!504 = !{i64 10397}
!505 = !{i64 10415}
!506 = !{i64 10444}
!507 = !{i64 10450}
!508 = !{i64 10453}
!509 = !{i64 10464}
!510 = !{i64 10470}
!511 = !{i64 10497}
!512 = !{i64 10508}
!513 = !{i64 10514}
!514 = !{i64 10521}
!515 = !{i64 10535}
!516 = !{i64 10556}
!517 = !{i64 10581}
!518 = !{i64 10592}
!519 = !{i64 10598}
!520 = !{i64 10605}
!521 = !{i64 10619}
!522 = !{i64 10640}
!523 = !{i64 10657}
!524 = !{i64 10668}
!525 = !{i64 10674}
!526 = !{i64 10681}
!527 = !{i64 10695}
!528 = !{i64 10716}
!529 = !{i64 10733}
!530 = !{i64 10744}
!531 = !{i64 10750}
!532 = !{i64 10757}
!533 = !{i64 10786}
!534 = !{i64 10805}
!535 = !{i64 10816}
!536 = !{i64 10822}
!537 = !{i64 10829}
!538 = !{i64 10840}
!539 = !{i64 10846}
!540 = !{i64 10873}
!541 = !{i64 10884}
!542 = !{i64 10890}
!543 = !{i64 10897}
!544 = !{i64 10908}
!545 = !{i64 10914}
!546 = !{i64 10939}
!547 = !{i64 10950}
!548 = !{i64 10956}
!549 = !{i64 10963}
!550 = !{i64 10974}
!551 = !{i64 10980}
!552 = !{i64 11027}
!553 = !{i64 11038}
!554 = !{i64 11044}
!555 = !{i64 11051}
!556 = !{i64 11069}
!557 = !{i64 11080}
!558 = !{i64 11086}
!559 = !{i64 11093}
!560 = !{i64 11111}
!561 = !{i64 11122}
!562 = !{i64 11128}
!563 = !{i64 11135}
!564 = !{i64 11146}
!565 = !{i64 11152}
!566 = !{i64 11179}
!567 = !{i64 11190}
!568 = !{i64 11196}
!569 = !{i64 11203}
!570 = !{i64 11214}
!571 = !{i64 11293}
!572 = !{i64 11304}
!573 = !{i64 11310}
!574 = !{i64 11317}
!575 = !{i64 11328}
!576 = !{i64 11419}
!577 = !{i64 11430}
!578 = !{i64 11436}
!579 = !{i64 11443}
!580 = !{i64 11454}
!581 = !{i64 11460}
!582 = !{i64 11499}
!583 = !{i64 11510}
!584 = !{i64 11516}
!585 = !{i64 11523}
!586 = !{i64 11534}
!587 = !{i64 11540}
!588 = !{i64 11668}
!589 = !{i64 11683}
!590 = !{i64 11694}
!591 = !{i64 11700}
!592 = !{i64 11707}
!593 = !{i64 11720}
!594 = !{i64 11757}
!595 = !{i64 11765}
!596 = !{i64 11773}
!597 = !{i64 11781}
!598 = !{i64 11793}
!599 = !{i64 11808}
!600 = !{i64 11812}
!601 = !{i64 11823}
!602 = !{i64 11829}
!603 = !{i64 11832}
!604 = !{i64 11858}
!605 = !{i64 11864}
!606 = !{i64 11867}
!607 = !{i64 11873}
!608 = !{i64 11892}
!609 = !{i64 11903}
!610 = !{i64 11912}
