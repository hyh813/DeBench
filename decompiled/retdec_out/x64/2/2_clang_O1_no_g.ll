source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_4038 = global i64 0
@global_var_2010 = local_unnamed_addr constant i64 4602678819172646912
@global_var_2018 = local_unnamed_addr constant i64 4591870180066957722
@global_var_2030 = constant [29 x i8] c"DT-L1-01 (process_char): %c\0A\00"
@global_var_204d = constant [30 x i8] c"DT-L1-02 (process_short): %d\0A\00"
@global_var_206b = constant [28 x i8] c"DT-L1-03 (process_int): %d\0A\00"
@global_var_2087 = constant [30 x i8] c"DT-L1-04 (process_long): %ld\0A\00"
@global_var_20a5 = constant [29 x i8] c"DT-L1-05 (process_ll): %lld\0A\00"
@global_var_20c2 = constant [32 x i8] c"DT-L1-06 (process_float): %.2f\0A\00"
@global_var_2020 = local_unnamed_addr constant i64 4615063718147915776
@global_var_20e2 = constant [33 x i8] c"DT-L1-07 (process_double): %.2f\0A\00"
@global_var_2028 = local_unnamed_addr constant i64 4611911198408756429
@global_var_2103 = constant [30 x i8] c"DT-L1-08 (process_ld): %.2Lf\0A\00"
@global_var_2121 = constant [29 x i8] c"DT-L1-09 (process_bool): %d\0A\00"
@global_var_213e = constant [28 x i8] c"DT-L1-10 (const_param): %d\0A\00"
@global_var_215a = constant [32 x i8] c"DT-L1-11 (volatile_access): %d\0A\00"
@global_var_510 = local_unnamed_addr constant [12 x i8] c"MCloneTable\00"
@global_var_217a = constant [32 x i8] c"ARR-L1-01 (array_1d_stack): %d\0A\00"
@global_var_219a = constant [30 x i8] c"ARR-L1-02 (array_string): %d\0A\00"
@global_var_21b8 = constant [32 x i8] c"ARR-L1-03 (array_2d_stack): %d\0A\00"
@global_var_21d8 = constant [26 x i8] c"ARR-L1-04 (array_3d): %d\0A\00"
@global_var_21f2 = constant [27 x i8] c"ARR-L2-01 (array_vla): %d\0A\00"
@global_var_220d = constant [31 x i8] c"ARR-L2-02 (array_pointer): %d\0A\00"
@global_var_222c = constant [31 x i8] c"ARR-L2-03 (pointer_array): %d\0A\00"
@global_var_224b = constant [37 x i8] c"ARR-L2-04 (array_complex_index): %d\0A\00"
@global_var_2270 = constant [5 x i8] c"test\00"
@global_var_3de0 = local_unnamed_addr global [5 x i8]* @global_var_2270
@global_var_2275 = constant [28 x i8] c"PTR-L2-01 (ptr_single): %d\0A\00"
@global_var_2291 = constant [28 x i8] c"PTR-L2-02 (ptr_double): %d\0A\00"
@global_var_22ad = constant [28 x i8] c"PTR-L2-03 (ptr_triple): %d\0A\00"
@global_var_22c9 = constant [31 x i8] c"PTR-L2-04 (ptr_increment): %d\0A\00"
@global_var_22e8 = constant [28 x i8] c"PTR-L2-05 (ptr_offset): %d\0A\00"
@global_var_2304 = constant [26 x i8] c"PTR-L2-06 (ptr_diff): %d\0A\00"
@global_var_231e = constant [26 x i8] c"PTR-L2-07 (ptr_void): %d\0A\00"
@global_var_2338 = constant [27 x i8] c"PTR-L2-08 (ptr_const): %d\0A\00"
@global_var_2353 = constant [31 x i8] c"PTR-L2-09 (ptr_const_ptr): %d\0A\00"
@global_var_2372 = constant [33 x i8] c"PTR-L2-10 (ptr_func_simple): %d\0A\00"
@global_var_2393 = constant [34 x i8] c"PTR-L2-11 (ptr_func_complex): %d\0A\00"
@global_var_23b5 = constant [28 x i8] c"PTR-L2-12 (ptr_cast): 0x%x\0A\00"
@global_var_23d1 = constant [34 x i8] c"PTR-L2-13 (opaque_handle_op): %d\0A\00"
@global_var_23f3 = constant [31 x i8] c"CMP-L2-01 (struct_simple): %d\0A\00"
@global_var_2412 = constant [30 x i8] c"CMP-L2-02 (struct_array): %d\0A\00"
@global_var_2430 = constant [31 x i8] c"CMP-L2-03 (struct_nested): %d\0A\00"
@global_var_244f = constant [29 x i8] c"CMP-L2-04 (struct_deep): %d\0A\00"
@global_var_246c = constant [33 x i8] c"CMP-L2-05 (struct_with_ptr): %d\0A\00"
@global_var_248d = constant [34 x i8] c"CMP-L2-06 (struct_bitfields): %d\0A\00"
@global_var_24af = constant [28 x i8] c"CMP-L2-07 (union_type): %d\0A\00"
@global_var_24cb = constant [29 x i8] c"CMP-L2-08 (union_array): %d\0A\00"
@global_var_24e8 = constant [27 x i8] c"CMP-L2-09 (enum_type): %d\0A\00"
@global_var_2503 = constant [29 x i8] c"CMP-L2-10 (enum_switch): %d\0A\00"
@global_var_2520 = constant [33 x i8] c"CMP-L2-11 (struct_func_ptr): %d\0A\00"
@global_var_2541 = constant [29 x i8] c"CMP-L2-12 (linked_list): %d\0A\00"
@global_var_255e = constant [36 x i8] c"CMP-L2-13 (doubly_linked_list): %d\0A\00"
@global_var_2668 = local_unnamed_addr constant i64 0
@global_var_2582 = constant [29 x i8] c"CMP-L2-14 (binary_tree): %d\0A\00"
@global_var_259f = constant [32 x i8] c"CMP-L2-15 (graph_traverse): %d\0A\00"
@0 = external global i32
@global_var_2004 = local_unnamed_addr constant i32 1069547520
@global_var_2008 = local_unnamed_addr constant i32 1056964608
@1 = internal constant [33 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\95\B0\E6\8D\AE\E7\B1\BB\E5\9E\8B ===\00"
@global_var_25bf = constant i8* getelementptr inbounds ([33 x i8], [33 x i8]* @1, i64 0, i64 0)
@global_var_2710 = constant i32 812
@global_var_200c = local_unnamed_addr constant float 1.000000e+01
@2 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\95\B0\E7\BB\84\E7\B1\BB\E5\9E\8B ===\00"
@global_var_25e0 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @2, i64 0, i64 0)
@3 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\8C\87\E9\92\88\E7\B1\BB\E5\9E\8B ===\00"
@global_var_25fb = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @3, i64 0, i64 0)
@global_var_2650 = local_unnamed_addr constant i32 5
@global_var_2640 = external local_unnamed_addr constant i128
@global_var_2680 = constant i32* inttoptr (i64 429496729600 to i32*)
@4 = internal constant [27 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A4\8D\E5\90\88\E7\B1\BB\E5\9E\8B ===\00"
@global_var_2616 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @4, i64 0, i64 0)
@global_var_2658 = external local_unnamed_addr constant i128
@global_var_2670 = external local_unnamed_addr constant i128

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 16352 to i64*), align 32, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define i32 @function_1030(i8* %s) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 @puts(i8* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1040(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @function_1050(i64* %d) local_unnamed_addr {
dec_label_pc_1050:
  call void @__cxa_finalize(i64* %d), !insn.addr !8
  ret void, !insn.addr !8
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1060:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !9
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !9
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !9
  %3 = call i32 @__libc_start_main(i64 7824, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !9
  %4 = call i64 @__asm_hlt(), !insn.addr !10
  unreachable, !insn.addr !10
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1090:
  ret i64 ptrtoint (i64* @global_var_4038 to i64), !insn.addr !11
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_10c0:
  ret i64 0, !insn.addr !12
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1100:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_4038 to i8*), align 8, !insn.addr !13
  %3 = icmp eq i8 %2, 0, !insn.addr !13
  %4 = icmp eq i1 %3, false, !insn.addr !14
  br i1 %4, label %dec_label_pc_1138, label %dec_label_pc_110d, !insn.addr !14

dec_label_pc_110d:                                ; preds = %dec_label_pc_1100
  %5 = load i64, i64* inttoptr (i64 16368 to i64*), align 16, !insn.addr !15
  %6 = icmp eq i64 %5, 0, !insn.addr !15
  br i1 %6, label %dec_label_pc_1127, label %dec_label_pc_111b, !insn.addr !16

dec_label_pc_111b:                                ; preds = %dec_label_pc_110d
  %7 = load i64, i64* inttoptr (i64 16432 to i64*), align 16, !insn.addr !17
  %8 = inttoptr i64 %7 to i64*, !insn.addr !18
  call void @__cxa_finalize(i64* %8), !insn.addr !18
  br label %dec_label_pc_1127, !insn.addr !18

dec_label_pc_1127:                                ; preds = %dec_label_pc_111b, %dec_label_pc_110d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !19
  store i8 1, i8* bitcast (i64* @global_var_4038 to i8*), align 8, !insn.addr !20
  ret i64 %9, !insn.addr !21

dec_label_pc_1138:                                ; preds = %dec_label_pc_1100
  ret i64 %1, !insn.addr !22
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i64 @register_tm_clones(), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define i64 @process_char(i64 %arg1) local_unnamed_addr {
dec_label_pc_1150:
  %0 = trunc i64 %arg1 to i8
  %1 = add i8 %0, -65, !insn.addr !24
  %2 = add i64 %arg1, 32, !insn.addr !25
  %3 = icmp ult i8 %1, 26, !insn.addr !26
  %4 = icmp eq i1 %3, false, !insn.addr !27
  %5 = urem i64 %2, 256, !insn.addr !27
  %6 = select i1 %4, i64 %arg1, i64 %5, !insn.addr !27
  %7 = and i64 %6, 4294967295, !insn.addr !27
  ret i64 %7, !insn.addr !28
}

define i64 @process_short(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1160:
  %0 = add i64 %arg2, %arg1, !insn.addr !29
  %1 = and i64 %0, 4294967295, !insn.addr !29
  ret i64 %1, !insn.addr !30
}

define i64 @process_int(i64 %arg1) local_unnamed_addr {
dec_label_pc_1170:
  %0 = mul i64 %arg1, 2, !insn.addr !31
  %1 = and i64 %0, 4294967294, !insn.addr !32
  %2 = or i64 %1, 1, !insn.addr !32
  ret i64 %2, !insn.addr !33
}

define i64 @process_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_1180:
  %0 = mul i64 %arg1, 2, !insn.addr !34
  ret i64 %0, !insn.addr !35
}

define i64 @process_ll(i64 %arg1) local_unnamed_addr {
dec_label_pc_1190:
  %0 = mul i64 %arg1, %arg1, !insn.addr !36
  ret i64 %0, !insn.addr !37
}

define i128 @process_float() local_unnamed_addr {
dec_label_pc_11a0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_mulss(i128 %1, i32 1069547520), !insn.addr !38
  %3 = call i128 @__asm_addss(i128 %2, i32 1056964608), !insn.addr !39
  ret i128 %3, !insn.addr !40
}

define i128 @process_double() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_mulsd(i128 %1, i64 4602678819172646912), !insn.addr !41
  %3 = call i128 @__asm_addsd(i128 %2, i64 4591870180066957722), !insn.addr !42
  ret i128 %3, !insn.addr !43
}

define i64 @process_ld(x86_fp80 %arg1) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !44
}

define i64 @process_bool(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg1 to i32, !insn.addr !45
  %3 = icmp eq i32 %2, 0, !insn.addr !45
  %4 = icmp slt i32 %2, 0, !insn.addr !45
  %5 = icmp eq i1 %4, false, !insn.addr !46
  %6 = icmp eq i1 %3, false, !insn.addr !46
  %7 = icmp eq i1 %5, %6, !insn.addr !46
  %8 = urem i64 %arg1, 2
  %9 = icmp eq i64 %8, 0, !insn.addr !47
  %10 = and i64 %1, -256, !insn.addr !48
  %11 = icmp eq i1 %9, %7
  %12 = zext i1 %11 to i64, !insn.addr !49
  %13 = or i64 %10, %12, !insn.addr !49
  ret i64 %13, !insn.addr !50

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @const_param() local_unnamed_addr {
dec_label_pc_1200:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !51
  %3 = and i64 %2, 4294967295, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @volatile_access() local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !53
  %3 = and i64 %2, 4294967294, !insn.addr !53
  ret i64 %3, !insn.addr !54
}

define i64 @test_data_types_l1() local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_25bf to i8*)), !insn.addr !55
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2030, i64 0, i64 0), i8 97), !insn.addr !56
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2030, i64 0, i64 0), i8 98), !insn.addr !57
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_204d, i64 0, i64 0), i64 300), !insn.addr !58
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_206b, i64 0, i64 0), i64 11), !insn.addr !59
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2087, i64 0, i64 0), i32 200), !insn.addr !60
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_20a5, i64 0, i64 0), i64 ptrtoint (i32* @global_var_2710 to i64)), !insn.addr !61
  %7 = call i128 @__asm_movsd(i64 4615063718147915776), !insn.addr !62
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_20c2, i64 0, i64 0)), !insn.addr !63
  %9 = call i128 @__asm_movsd(i64 4611911198408756429), !insn.addr !64
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_20e2, i64 0, i64 0)), !insn.addr !65
  %11 = trunc i128 %9 to i80, !insn.addr !66
  %12 = bitcast i80 %11 to x86_fp80, !insn.addr !66
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2103, i64 0, i64 0), x86_fp80 %12), !insn.addr !66
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2121, i64 0, i64 0), i64 1), !insn.addr !67
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2121, i64 0, i64 0), i64 0), !insn.addr !68
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2121, i64 0, i64 0), i64 0), !insn.addr !69
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_213e, i64 0, i64 0), i64 15), !insn.addr !70
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_215a, i64 0, i64 0), i64 20), !insn.addr !71
  %19 = sext i32 %18 to i64, !insn.addr !71
  ret i64 %19, !insn.addr !72
}

define i64 @array_1d_stack(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1350:
  %rdx.0.reg2mem = alloca i64, !insn.addr !73
  %rax.0.reg2mem = alloca i32, !insn.addr !73
  %0 = trunc i64 %arg2 to i32, !insn.addr !73
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_136d, label %dec_label_pc_1354, !insn.addr !74

dec_label_pc_1354:                                ; preds = %dec_label_pc_1350
  %2 = and i64 %arg2, 4294967295, !insn.addr !75
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !76
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_1360, !insn.addr !76

dec_label_pc_1360:                                ; preds = %dec_label_pc_1360, %dec_label_pc_1354
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 4, !insn.addr !77
  %4 = add i64 %3, %arg1, !insn.addr !77
  %5 = inttoptr i64 %4 to i32*, !insn.addr !77
  %6 = load i32, i32* %5, align 4, !insn.addr !77
  %7 = add i32 %6, %rax.0.reload, !insn.addr !77
  %8 = add i64 %rdx.0.reload, 1, !insn.addr !78
  %9 = icmp eq i64 %2, %8, !insn.addr !79
  %10 = icmp eq i1 %9, false, !insn.addr !80
  store i32 %7, i32* %rax.0.reg2mem, !insn.addr !80
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !80
  br i1 %10, label %dec_label_pc_1360, label %dec_label_pc_136c, !insn.addr !80

dec_label_pc_136c:                                ; preds = %dec_label_pc_1360
  %11 = zext i32 %7 to i64, !insn.addr !77
  ret i64 %11, !insn.addr !81

dec_label_pc_136d:                                ; preds = %dec_label_pc_1350
  ret i64 0, !insn.addr !82

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @array_string() local_unnamed_addr {
dec_label_pc_1370:
  %rdi.0.reg2mem = alloca i64, !insn.addr !83
  %rax.0.reg2mem = alloca i64, !insn.addr !83
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_1380, !insn.addr !84

dec_label_pc_1380:                                ; preds = %dec_label_pc_1380, %dec_label_pc_1370
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %0 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !85
  %1 = and i64 %0, 4294967295, !insn.addr !85
  %2 = inttoptr i64 %rdi.0.reload to i8*, !insn.addr !86
  %3 = load i8, i8* %2, align 1, !insn.addr !86
  %4 = icmp eq i8 %3, 0, !insn.addr !86
  %5 = add i64 %rdi.0.reload, 1, !insn.addr !87
  %6 = icmp eq i1 %4, false, !insn.addr !88
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !88
  store i64 %5, i64* %rdi.0.reg2mem, !insn.addr !88
  br i1 %6, label %dec_label_pc_1380, label %dec_label_pc_138c, !insn.addr !88

dec_label_pc_138c:                                ; preds = %dec_label_pc_1380
  ret i64 %1, !insn.addr !89

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0 }
}

define i64 @array_2d_stack(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1390:
  %rcx.0.reg2mem = alloca i64, !insn.addr !90
  %rax.0.reg2mem = alloca i32, !insn.addr !90
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !91
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_13a0, !insn.addr !91

dec_label_pc_13a0:                                ; preds = %dec_label_pc_13a0, %dec_label_pc_1390
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %0 = add i64 %rcx.0.reload, %arg1, !insn.addr !92
  %1 = inttoptr i64 %0 to i32*, !insn.addr !92
  %2 = load i32, i32* %1, align 4, !insn.addr !92
  %3 = add i32 %2, %rax.0.reload, !insn.addr !92
  %4 = add nuw nsw i64 %rcx.0.reload, 44, !insn.addr !93
  %5 = icmp eq i64 %rcx.0.reload, 396, !insn.addr !94
  %6 = icmp eq i1 %5, false, !insn.addr !95
  store i32 %3, i32* %rax.0.reg2mem, !insn.addr !95
  store i64 %4, i64* %rcx.0.reg2mem, !insn.addr !95
  br i1 %6, label %dec_label_pc_13a0, label %dec_label_pc_13b0, !insn.addr !95

dec_label_pc_13b0:                                ; preds = %dec_label_pc_13a0
  %7 = zext i32 %3 to i64, !insn.addr !92
  ret i64 %7, !insn.addr !96

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @array_3d(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_13c0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !97
  %rax.2.reg2mem = alloca i32, !insn.addr !97
  %rsi.0.reg2mem = alloca i64, !insn.addr !97
  %rdx.0.reg2mem = alloca i64, !insn.addr !97
  %rax.1.reg2mem = alloca i32, !insn.addr !97
  %r8.0.reg2mem = alloca i64, !insn.addr !97
  %rdi.0.reg2mem = alloca i64, !insn.addr !97
  %rax.0.reg2mem = alloca i32, !insn.addr !97
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !98
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !98
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !98
  br label %dec_label_pc_13d0, !insn.addr !98

dec_label_pc_13d0:                                ; preds = %dec_label_pc_140b, %dec_label_pc_13c0
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  store i32 %rax.0.reload, i32* %rax.1.reg2mem, !insn.addr !99
  store i64 %rdi.0.reload, i64* %rdx.0.reg2mem, !insn.addr !99
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_13e0, !insn.addr !99

dec_label_pc_13e0:                                ; preds = %dec_label_pc_13fd, %dec_label_pc_13d0
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i32, i32* %rax.1.reg2mem
  store i32 %rax.1.reload, i32* %rax.2.reg2mem, !insn.addr !100
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !100
  br label %dec_label_pc_13f0, !insn.addr !100

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13f0, %dec_label_pc_13e0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.2.reload = load i32, i32* %rax.2.reg2mem
  %0 = mul i64 %rcx.0.reload, 4, !insn.addr !101
  %1 = add i64 %0, %rdx.0.reload, !insn.addr !101
  %2 = inttoptr i64 %1 to i32*, !insn.addr !101
  %3 = load i32, i32* %2, align 4, !insn.addr !101
  %4 = add i32 %3, %rax.2.reload, !insn.addr !101
  %5 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !102
  %exitcond = icmp eq i64 %5, 5
  store i32 %4, i32* %rax.2.reg2mem, !insn.addr !103
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !103
  br i1 %exitcond, label %dec_label_pc_13fd, label %dec_label_pc_13f0, !insn.addr !103

dec_label_pc_13fd:                                ; preds = %dec_label_pc_13f0
  %6 = add nuw nsw i64 %rsi.0.reload, 1, !insn.addr !104
  %7 = add i64 %rdx.0.reload, 20, !insn.addr !105
  %exitcond3 = icmp eq i64 %6, 5
  store i32 %4, i32* %rax.1.reg2mem, !insn.addr !106
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !106
  store i64 %6, i64* %rsi.0.reg2mem, !insn.addr !106
  br i1 %exitcond3, label %dec_label_pc_140b, label %dec_label_pc_13e0, !insn.addr !106

dec_label_pc_140b:                                ; preds = %dec_label_pc_13fd
  %8 = add nuw nsw i64 %r8.0.reload, 1, !insn.addr !107
  %9 = add i64 %rdi.0.reload, 100, !insn.addr !108
  %exitcond4 = icmp eq i64 %8, 5
  store i32 %4, i32* %rax.0.reg2mem, !insn.addr !109
  store i64 %9, i64* %rdi.0.reg2mem, !insn.addr !109
  store i64 %8, i64* %r8.0.reg2mem, !insn.addr !109
  br i1 %exitcond4, label %dec_label_pc_1419, label %dec_label_pc_13d0, !insn.addr !109

dec_label_pc_1419:                                ; preds = %dec_label_pc_140b
  %10 = zext i32 %4 to i64, !insn.addr !101
  ret i64 %10, !insn.addr !110

; uselistorder directives
  uselistorder i32 %4, { 3, 2, 1, 0 }
  uselistorder i64 %rdi.0.reload, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @array_vla(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1420:
  %rax.0.reg2mem = alloca i32, !insn.addr !111
  %rdx.0.reg2mem = alloca i64, !insn.addr !111
  %0 = trunc i64 %arg1 to i32, !insn.addr !111
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_143d, label %dec_label_pc_1424, !insn.addr !112

dec_label_pc_1424:                                ; preds = %dec_label_pc_1420
  %2 = and i64 %arg1, 4294967295, !insn.addr !113
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !114
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !114
  br label %dec_label_pc_1430, !insn.addr !114

dec_label_pc_1430:                                ; preds = %dec_label_pc_1430, %dec_label_pc_1424
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 4, !insn.addr !115
  %4 = add i64 %3, %arg2, !insn.addr !115
  %5 = inttoptr i64 %4 to i32*, !insn.addr !115
  %6 = load i32, i32* %5, align 4, !insn.addr !115
  %7 = add i32 %6, %rax.0.reload, !insn.addr !115
  %8 = add i64 %rdx.0.reload, 1, !insn.addr !116
  %9 = icmp eq i64 %2, %8, !insn.addr !117
  %10 = icmp eq i1 %9, false, !insn.addr !118
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !118
  store i32 %7, i32* %rax.0.reg2mem, !insn.addr !118
  br i1 %10, label %dec_label_pc_1430, label %dec_label_pc_143c, !insn.addr !118

dec_label_pc_143c:                                ; preds = %dec_label_pc_1430
  %11 = zext i32 %7 to i64, !insn.addr !115
  ret i64 %11, !insn.addr !119

dec_label_pc_143d:                                ; preds = %dec_label_pc_1420
  ret i64 0, !insn.addr !120

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @array_pointer(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1440:
  %rdx.0.reg2mem = alloca i64, !insn.addr !121
  %rax.0.reg2mem = alloca i32, !insn.addr !121
  %0 = trunc i64 %arg2 to i32, !insn.addr !121
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_146d, label %dec_label_pc_1444, !insn.addr !122

dec_label_pc_1444:                                ; preds = %dec_label_pc_1440
  %2 = mul i64 %arg2, 8, !insn.addr !123
  %3 = and i64 %2, 34359738360, !insn.addr !124
  %4 = mul nuw nsw i64 %3, 5, !insn.addr !125
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !126
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !126
  br label %dec_label_pc_1460, !insn.addr !126

dec_label_pc_1460:                                ; preds = %dec_label_pc_1460, %dec_label_pc_1444
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %5 = add i64 %rdx.0.reload, %arg1, !insn.addr !127
  %6 = inttoptr i64 %5 to i32*, !insn.addr !127
  %7 = load i32, i32* %6, align 4, !insn.addr !127
  %8 = add i32 %7, %rax.0.reload, !insn.addr !127
  %9 = add i64 %rdx.0.reload, 40, !insn.addr !128
  %10 = icmp eq i64 %4, %9, !insn.addr !129
  %11 = icmp eq i1 %10, false, !insn.addr !130
  store i32 %8, i32* %rax.0.reg2mem, !insn.addr !130
  store i64 %9, i64* %rdx.0.reg2mem, !insn.addr !130
  br i1 %11, label %dec_label_pc_1460, label %dec_label_pc_146c, !insn.addr !130

dec_label_pc_146c:                                ; preds = %dec_label_pc_1460
  %12 = zext i32 %8 to i64, !insn.addr !127
  ret i64 %12, !insn.addr !131

dec_label_pc_146d:                                ; preds = %dec_label_pc_1440
  ret i64 0, !insn.addr !132

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @pointer_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1470:
  %rax.2.reg2mem = alloca i64, !insn.addr !133
  %rdx.0.reg2mem = alloca i64, !insn.addr !133
  %rax.1.reg2mem = alloca i64, !insn.addr !133
  %rax.0.reg2mem = alloca i64, !insn.addr !133
  %0 = trunc i64 %arg2 to i32, !insn.addr !133
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !134
  br i1 %1, label %dec_label_pc_14a8, label %dec_label_pc_1474, !insn.addr !134

dec_label_pc_1474:                                ; preds = %dec_label_pc_1470
  %2 = add i32 %0, -10, !insn.addr !135
  %3 = sub i32 9, %0
  %4 = and i32 %3, %0, !insn.addr !135
  %5 = icmp slt i32 %4, 0, !insn.addr !135
  %6 = icmp slt i32 %2, 0, !insn.addr !135
  %7 = icmp eq i1 %6, %5, !insn.addr !136
  %8 = and i64 %arg2, 4294967295
  %9 = select i1 %7, i64 10, i64 %8, !insn.addr !136
  %10 = trunc i64 %9 to i32, !insn.addr !137
  %11 = add i32 %10, -2, !insn.addr !137
  %12 = sub i32 1, %10
  %13 = and i32 %12, %10, !insn.addr !137
  %14 = icmp slt i32 %13, 0, !insn.addr !137
  %15 = icmp slt i32 %11, 0, !insn.addr !137
  %16 = icmp eq i1 %15, %14, !insn.addr !138
  %17 = select i1 %16, i64 %9, i64 1, !insn.addr !138
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !139
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !139
  br label %dec_label_pc_1499, !insn.addr !139

dec_label_pc_1490:                                ; preds = %dec_label_pc_14a2, %dec_label_pc_1499
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %18 = add i64 %rdx.0.reload, 1, !insn.addr !140
  %19 = icmp eq i64 %17, %18, !insn.addr !141
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !142
  store i64 %18, i64* %rdx.0.reg2mem, !insn.addr !142
  store i64 %rax.0.reload, i64* %rax.2.reg2mem, !insn.addr !142
  br i1 %19, label %dec_label_pc_14a8, label %dec_label_pc_1499, !insn.addr !142

dec_label_pc_1499:                                ; preds = %dec_label_pc_1490, %dec_label_pc_1474
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %20 = mul i64 %rdx.0.reload, 8, !insn.addr !143
  %21 = add i64 %20, %arg1, !insn.addr !143
  %22 = inttoptr i64 %21 to i64*, !insn.addr !143
  %23 = load i64, i64* %22, align 8, !insn.addr !143
  %24 = icmp eq i64 %23, 0, !insn.addr !144
  store i64 %rax.1.reload, i64* %rax.0.reg2mem, !insn.addr !145
  br i1 %24, label %dec_label_pc_1490, label %dec_label_pc_14a2, !insn.addr !145

dec_label_pc_14a2:                                ; preds = %dec_label_pc_1499
  %25 = trunc i64 %rax.1.reload to i32, !insn.addr !146
  %26 = inttoptr i64 %23 to i32*, !insn.addr !146
  %27 = load i32, i32* %26, align 4, !insn.addr !146
  %28 = add i32 %27, %25, !insn.addr !146
  %29 = zext i32 %28 to i64, !insn.addr !146
  store i64 %29, i64* %rax.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_1490, !insn.addr !147

dec_label_pc_14a8:                                ; preds = %dec_label_pc_1490, %dec_label_pc_1470
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !148

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i32 %0, { 0, 2, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 1, 2, 0 }
}

define i64 @array_complex_index(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_14b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !149
  %0 = trunc i64 %arg4 to i32, !insn.addr !150
  %1 = icmp sgt i32 %0, -1, !insn.addr !150
  %2 = icmp slt i64 %arg5, %arg3, !insn.addr !151
  %or.cond = icmp eq i1 %1, %2
  %3 = icmp slt i64 %arg4, %arg2, !insn.addr !152
  %or.cond3 = icmp eq i1 %3, %or.cond
  %or.cond3.not = icmp ne i1 %or.cond3, true
  %4 = trunc i64 %arg5 to i32, !insn.addr !153
  %5 = icmp slt i32 %4, 0, !insn.addr !153
  %or.cond5 = or i1 %5, %or.cond3.not
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !154
  br i1 %or.cond5, label %dec_label_pc_14d4, label %dec_label_pc_14c7, !insn.addr !154

dec_label_pc_14c7:                                ; preds = %dec_label_pc_14b0
  %sext = mul i64 %arg5, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !155
  %sext1 = mul i64 %arg2, 4294967296
  %7 = ashr exact i64 %sext1, 32, !insn.addr !155
  %8 = mul nsw i64 %6, %7, !insn.addr !155
  %9 = add i64 %8, %arg4, !insn.addr !156
  %sext2 = mul i64 %9, 4294967296
  %10 = ashr exact i64 %sext2, 30, !insn.addr !157
  %11 = add i64 %10, %arg1, !insn.addr !157
  %12 = inttoptr i64 %11 to i32*, !insn.addr !157
  %13 = load i32, i32* %12, align 4, !insn.addr !157
  %14 = zext i32 %13 to i64, !insn.addr !157
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !157
  br label %dec_label_pc_14d4, !insn.addr !157

dec_label_pc_14d4:                                ; preds = %dec_label_pc_14b0, %dec_label_pc_14c7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !158

; uselistorder directives
  uselistorder label %dec_label_pc_14d4, { 1, 0 }
}

define i64 @array_oob(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_14e0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !159
  %rax.0.reg2mem = alloca i32, !insn.addr !159
  %0 = trunc i64 %arg2 to i32, !insn.addr !159
  %1 = icmp slt i32 %0, 0, !insn.addr !159
  br i1 %1, label %dec_label_pc_14fd, label %dec_label_pc_14e4, !insn.addr !160

dec_label_pc_14e4:                                ; preds = %dec_label_pc_14e0
  %2 = add i64 %arg2, 1, !insn.addr !161
  %3 = and i64 %2, 4294967295, !insn.addr !161
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !162
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_14f0, !insn.addr !162

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14e4
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %4 = mul i64 %rcx.0.reload, 4, !insn.addr !163
  %5 = add i64 %4, %arg1, !insn.addr !163
  %6 = inttoptr i64 %5 to i32*, !insn.addr !163
  %7 = load i32, i32* %6, align 4, !insn.addr !163
  %8 = add i32 %7, %rax.0.reload, !insn.addr !163
  %9 = add i64 %rcx.0.reload, 1, !insn.addr !164
  %10 = icmp eq i64 %3, %9, !insn.addr !165
  %11 = icmp eq i1 %10, false, !insn.addr !166
  store i32 %8, i32* %rax.0.reg2mem, !insn.addr !166
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !166
  br i1 %11, label %dec_label_pc_14f0, label %dec_label_pc_14fc, !insn.addr !166

dec_label_pc_14fc:                                ; preds = %dec_label_pc_14f0
  %12 = zext i32 %8 to i64, !insn.addr !163
  ret i64 %12, !insn.addr !167

dec_label_pc_14fd:                                ; preds = %dec_label_pc_14e0
  ret i64 0, !insn.addr !168

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @test_array_types() local_unnamed_addr {
dec_label_pc_1500:
  %0 = alloca i128
  %1 = alloca i32
  %rbx.5.reg2mem = alloca i64, !insn.addr !169
  %rsi.7.reg2mem = alloca i64, !insn.addr !169
  %rbx.4.reg2mem = alloca i64, !insn.addr !169
  %rsi.6.reg2mem = alloca i64, !insn.addr !169
  %rsi.5.reg2mem = alloca i32, !insn.addr !169
  %rax.4.reg2mem = alloca i64, !insn.addr !169
  %rbx.3.reg2mem = alloca i64, !insn.addr !169
  %rsi.4.reg2mem = alloca i32, !insn.addr !169
  %rbx.2.reg2mem = alloca i64, !insn.addr !169
  %rdi.0.reg2mem = alloca i64, !insn.addr !169
  %rsi.3.reg2mem = alloca i32, !insn.addr !169
  %rdx.1.reg2mem = alloca i64, !insn.addr !169
  %rsi.2.reg2mem = alloca i32, !insn.addr !169
  %rcx.2.reg2mem = alloca i64, !insn.addr !169
  %rax.3.reg2mem = alloca i64, !insn.addr !169
  %rsi.1.reg2mem = alloca i64, !insn.addr !169
  %rdx.0.reg2mem = alloca i64, !insn.addr !169
  %rcx.1.reg2mem = alloca i64, !insn.addr !169
  %rbx.1.reg2mem = alloca i64, !insn.addr !169
  %rax.2.reg2mem = alloca i64, !insn.addr !169
  %rsi.0.reg2mem = alloca i32, !insn.addr !169
  %rax.1.reg2mem = alloca i64, !insn.addr !169
  %rcx.0.reg2mem = alloca i64, !insn.addr !169
  %rbx.0.reg2mem = alloca i64, !insn.addr !169
  %rax.0.reg2mem = alloca i64, !insn.addr !169
  %2 = load i128, i128* %0
  %3 = load i32, i32* %1
  %4 = load i128, i128* %0
  %5 = load i128, i128* %0
  %6 = load i128, i128* %0
  %stack_var_-520 = alloca i64, align 8
  %stack_var_-920 = alloca i64, align 8
  %stack_var_-1304 = alloca i64, align 8
  %7 = call i32 @puts(i8* bitcast (i8** @global_var_25e0 to i8*)), !insn.addr !170
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_217a, i64 0, i64 0), i64 15), !insn.addr !171
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_219a, i64 0, i64 0), i64 5), !insn.addr !172
  %10 = ptrtoint i64* %stack_var_-920 to i64, !insn.addr !173
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !174
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !174
  br label %dec_label_pc_1550, !insn.addr !174

dec_label_pc_1550:                                ; preds = %dec_label_pc_1578, %dec_label_pc_1500
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_1560, !insn.addr !175

dec_label_pc_1560:                                ; preds = %dec_label_pc_1560, %dec_label_pc_1550
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %11 = icmp eq i64 %rbx.0.reload, %rcx.0.reload, !insn.addr !176
  %12 = select i1 %11, i64 %rbx.0.reload, i64 0, !insn.addr !177
  %13 = trunc i64 %12 to i32, !insn.addr !178
  %14 = mul i64 %rcx.0.reload, 4, !insn.addr !178
  %15 = add i64 %14, %rax.0.reload, !insn.addr !178
  %16 = inttoptr i64 %15 to i32*, !insn.addr !178
  store i32 %13, i32* %16, align 4, !insn.addr !178
  %17 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !179
  %exitcond14 = icmp eq i64 %17, 10
  store i64 %17, i64* %rcx.0.reg2mem, !insn.addr !180
  br i1 %exitcond14, label %dec_label_pc_1578, label %dec_label_pc_1560, !insn.addr !180

dec_label_pc_1578:                                ; preds = %dec_label_pc_1560
  %18 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !181
  %19 = add i64 %rax.0.reload, 40, !insn.addr !182
  %exitcond15 = icmp eq i64 %18, 10
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !183
  store i64 %18, i64* %rbx.0.reg2mem, !insn.addr !183
  br i1 %exitcond15, label %dec_label_pc_1590.preheader, label %dec_label_pc_1550, !insn.addr !183

dec_label_pc_1590.preheader:                      ; preds = %dec_label_pc_1578
  %20 = ptrtoint i64* %stack_var_-1304 to i64, !insn.addr !184
  %21 = add i64 %20, 384, !insn.addr !185
  store i64 0, i64* %rax.1.reg2mem
  store i32 0, i32* %rsi.0.reg2mem
  br label %dec_label_pc_1590

dec_label_pc_1590:                                ; preds = %dec_label_pc_1590.preheader, %dec_label_pc_1590
  %rsi.0.reload = load i32, i32* %rsi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %22 = add i64 %21, %rax.1.reload, !insn.addr !185
  %23 = inttoptr i64 %22 to i32*, !insn.addr !185
  %24 = load i32, i32* %23, align 4, !insn.addr !185
  %25 = add i32 %24, %rsi.0.reload, !insn.addr !185
  %26 = add nuw nsw i64 %rax.1.reload, 44, !insn.addr !186
  %27 = icmp eq i64 %rax.1.reload, 396, !insn.addr !187
  %28 = icmp eq i1 %27, false, !insn.addr !188
  store i64 %26, i64* %rax.1.reg2mem, !insn.addr !188
  store i32 %25, i32* %rsi.0.reg2mem, !insn.addr !188
  br i1 %28, label %dec_label_pc_1590, label %dec_label_pc_15a3, !insn.addr !188

dec_label_pc_15a3:                                ; preds = %dec_label_pc_1590
  %29 = zext i32 %25 to i64, !insn.addr !185
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_21b8, i64 0, i64 0), i64 %29), !insn.addr !189
  %31 = ptrtoint i64* %stack_var_-520 to i64, !insn.addr !190
  store i64 %31, i64* %rax.2.reg2mem, !insn.addr !191
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !191
  br label %dec_label_pc_15c0, !insn.addr !191

dec_label_pc_15c0:                                ; preds = %dec_label_pc_15ff, %dec_label_pc_15a3
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  store i64 %rax.2.reload, i64* %rcx.1.reg2mem, !insn.addr !192
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !192
  br label %dec_label_pc_15d0, !insn.addr !192

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15f1, %dec_label_pc_15c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  store i64 0, i64* %rsi.1.reg2mem, !insn.addr !193
  br label %dec_label_pc_15e0, !insn.addr !193

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_15d0
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %32 = mul i64 %rsi.1.reload, 4, !insn.addr !194
  %33 = add i64 %32, %rcx.1.reload, !insn.addr !194
  %34 = inttoptr i64 %33 to i32*, !insn.addr !194
  store i32 1, i32* %34, align 4, !insn.addr !194
  %35 = add nuw nsw i64 %rsi.1.reload, 1, !insn.addr !195
  %exitcond11 = icmp eq i64 %35, 5
  store i64 %35, i64* %rsi.1.reg2mem, !insn.addr !196
  br i1 %exitcond11, label %dec_label_pc_15f1, label %dec_label_pc_15e0, !insn.addr !196

dec_label_pc_15f1:                                ; preds = %dec_label_pc_15e0
  %36 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !197
  %37 = add i64 %rcx.1.reload, 20, !insn.addr !198
  %exitcond12 = icmp eq i64 %36, 5
  store i64 %37, i64* %rcx.1.reg2mem, !insn.addr !199
  store i64 %36, i64* %rdx.0.reg2mem, !insn.addr !199
  br i1 %exitcond12, label %dec_label_pc_15ff, label %dec_label_pc_15d0, !insn.addr !199

dec_label_pc_15ff:                                ; preds = %dec_label_pc_15f1
  %38 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !200
  %39 = add i64 %rax.2.reload, 100, !insn.addr !201
  %exitcond13 = icmp eq i64 %38, 5
  store i64 %39, i64* %rax.2.reg2mem, !insn.addr !202
  store i64 %38, i64* %rbx.1.reg2mem, !insn.addr !202
  store i64 0, i64* %rax.3.reg2mem, !insn.addr !202
  store i64 %31, i64* %rcx.2.reg2mem, !insn.addr !202
  store i32 0, i32* %rsi.2.reg2mem, !insn.addr !202
  br i1 %exitcond13, label %dec_label_pc_1620, label %dec_label_pc_15c0, !insn.addr !202

dec_label_pc_1620:                                ; preds = %dec_label_pc_15ff, %dec_label_pc_165b
  %rsi.2.reload = load i32, i32* %rsi.2.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  store i64 %rcx.2.reload, i64* %rdx.1.reg2mem, !insn.addr !203
  store i32 %rsi.2.reload, i32* %rsi.3.reg2mem, !insn.addr !203
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_1630, !insn.addr !203

dec_label_pc_1630:                                ; preds = %dec_label_pc_164d, %dec_label_pc_1620
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rsi.3.reload = load i32, i32* %rsi.3.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !204
  store i32 %rsi.3.reload, i32* %rsi.4.reg2mem, !insn.addr !204
  br label %dec_label_pc_1640, !insn.addr !204

dec_label_pc_1640:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1630
  %rsi.4.reload = load i32, i32* %rsi.4.reg2mem
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %40 = mul i64 %rbx.2.reload, 4, !insn.addr !205
  %41 = add i64 %40, %rdx.1.reload, !insn.addr !205
  %42 = inttoptr i64 %41 to i32*, !insn.addr !205
  %43 = load i32, i32* %42, align 4, !insn.addr !205
  %44 = add i32 %43, %rsi.4.reload, !insn.addr !205
  %45 = add nuw nsw i64 %rbx.2.reload, 1, !insn.addr !206
  %exitcond8 = icmp eq i64 %45, 5
  store i64 %45, i64* %rbx.2.reg2mem, !insn.addr !207
  store i32 %44, i32* %rsi.4.reg2mem, !insn.addr !207
  br i1 %exitcond8, label %dec_label_pc_164d, label %dec_label_pc_1640, !insn.addr !207

dec_label_pc_164d:                                ; preds = %dec_label_pc_1640
  %46 = add nuw nsw i64 %rdi.0.reload, 1, !insn.addr !208
  %47 = add i64 %rdx.1.reload, 20, !insn.addr !209
  %exitcond9 = icmp eq i64 %46, 5
  store i64 %47, i64* %rdx.1.reg2mem, !insn.addr !210
  store i32 %44, i32* %rsi.3.reg2mem, !insn.addr !210
  store i64 %46, i64* %rdi.0.reg2mem, !insn.addr !210
  br i1 %exitcond9, label %dec_label_pc_165b, label %dec_label_pc_1630, !insn.addr !210

dec_label_pc_165b:                                ; preds = %dec_label_pc_164d
  %48 = add nuw nsw i64 %rax.3.reload, 1, !insn.addr !211
  %49 = add i64 %rcx.2.reload, 100, !insn.addr !212
  %exitcond10 = icmp eq i64 %48, 5
  store i64 %48, i64* %rax.3.reg2mem, !insn.addr !213
  store i64 %49, i64* %rcx.2.reg2mem, !insn.addr !213
  store i32 %44, i32* %rsi.2.reg2mem, !insn.addr !213
  br i1 %exitcond10, label %dec_label_pc_1669, label %dec_label_pc_1620, !insn.addr !213

dec_label_pc_1669:                                ; preds = %dec_label_pc_165b
  %50 = zext i32 %44 to i64, !insn.addr !205
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_21d8, i64 0, i64 0), i64 %50), !insn.addr !214
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_21f2, i64 0, i64 0), i64 60), !insn.addr !215
  %53 = add i64 %20, 176, !insn.addr !216
  store i64 0, i64* %rbx.3.reg2mem, !insn.addr !217
  br label %dec_label_pc_1690, !insn.addr !217

dec_label_pc_1690:                                ; preds = %dec_label_pc_1690, %dec_label_pc_1669
  %rbx.3.reload = load i64, i64* %rbx.3.reg2mem
  %54 = trunc i64 %rbx.3.reload to i32, !insn.addr !216
  %55 = mul i64 %rbx.3.reload, 4, !insn.addr !216
  %56 = add i64 %55, %53, !insn.addr !216
  %57 = inttoptr i64 %56 to i32*, !insn.addr !216
  store i32 %54, i32* %57, align 8, !insn.addr !216
  %58 = add nuw nsw i64 %rbx.3.reload, 10, !insn.addr !218
  %59 = icmp eq i64 %rbx.3.reload, 40, !insn.addr !219
  %60 = icmp eq i1 %59, false, !insn.addr !220
  store i64 %58, i64* %rbx.3.reg2mem, !insn.addr !220
  store i64 0, i64* %rax.4.reg2mem, !insn.addr !220
  store i32 0, i32* %rsi.5.reg2mem, !insn.addr !220
  br i1 %60, label %dec_label_pc_1690, label %dec_label_pc_16b0, !insn.addr !220

dec_label_pc_16b0:                                ; preds = %dec_label_pc_1690, %dec_label_pc_16b0
  %rsi.5.reload = load i32, i32* %rsi.5.reg2mem
  %rax.4.reload = load i64, i64* %rax.4.reg2mem
  %61 = add i64 %rax.4.reload, %53, !insn.addr !221
  %62 = inttoptr i64 %61 to i32*, !insn.addr !221
  %63 = load i32, i32* %62, align 8, !insn.addr !221
  %64 = add i32 %63, %rsi.5.reload, !insn.addr !221
  %65 = add nuw nsw i64 %rax.4.reload, 40, !insn.addr !222
  %66 = icmp eq i64 %rax.4.reload, 160, !insn.addr !223
  %67 = icmp eq i1 %66, false, !insn.addr !224
  store i64 %65, i64* %rax.4.reg2mem, !insn.addr !224
  store i32 %64, i32* %rsi.5.reg2mem, !insn.addr !224
  br i1 %67, label %dec_label_pc_16b0, label %dec_label_pc_16c3, !insn.addr !224

dec_label_pc_16c3:                                ; preds = %dec_label_pc_16b0
  %68 = zext i32 %64 to i64, !insn.addr !221
  %69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_220d, i64 0, i64 0), i64 %68), !insn.addr !225
  %70 = call i128 @__asm_xorps(i128 %2, i128 %2), !insn.addr !226
  call void @__asm_movups(i128 %6, i128 %70), !insn.addr !227
  call void @__asm_movups(i128 %5, i128 %70), !insn.addr !228
  call void @__asm_movups(i128 %4, i128 %70), !insn.addr !229
  %71 = add i64 %20, 16, !insn.addr !230
  store i64 0, i64* %rbx.4.reg2mem, !insn.addr !231
  store i64 0, i64* %rsi.7.reg2mem, !insn.addr !231
  br label %dec_label_pc_173a, !insn.addr !231

dec_label_pc_1730:                                ; preds = %dec_label_pc_1744, %dec_label_pc_173a
  %rsi.6.reload = load i64, i64* %rsi.6.reg2mem
  %72 = add nuw nsw i64 %rbx.4.reload, 1, !insn.addr !232
  %73 = icmp eq i64 %rbx.4.reload, 2, !insn.addr !233
  store i64 %72, i64* %rbx.4.reg2mem, !insn.addr !234
  store i64 %rsi.6.reload, i64* %rsi.7.reg2mem, !insn.addr !234
  br i1 %73, label %dec_label_pc_1748, label %dec_label_pc_173a, !insn.addr !234

dec_label_pc_173a:                                ; preds = %dec_label_pc_1730, %dec_label_pc_16c3
  %rsi.7.reload = load i64, i64* %rsi.7.reg2mem
  %rbx.4.reload = load i64, i64* %rbx.4.reg2mem
  %74 = mul i64 %rbx.4.reload, 8, !insn.addr !230
  %75 = add i64 %71, %74, !insn.addr !230
  %76 = inttoptr i64 %75 to i64*, !insn.addr !230
  %77 = load i64, i64* %76, align 8, !insn.addr !230
  %78 = icmp eq i64 %77, 0, !insn.addr !235
  store i64 %rsi.7.reload, i64* %rsi.6.reg2mem, !insn.addr !236
  br i1 %78, label %dec_label_pc_1730, label %dec_label_pc_1744, !insn.addr !236

dec_label_pc_1744:                                ; preds = %dec_label_pc_173a
  %79 = trunc i64 %rsi.7.reload to i32, !insn.addr !237
  %80 = inttoptr i64 %77 to i32*, !insn.addr !237
  %81 = load i32, i32* %80, align 4, !insn.addr !237
  %82 = add i32 %81, %79, !insn.addr !237
  %83 = zext i32 %82 to i64, !insn.addr !237
  store i64 %83, i64* %rsi.6.reg2mem, !insn.addr !238
  br label %dec_label_pc_1730, !insn.addr !238

dec_label_pc_1748:                                ; preds = %dec_label_pc_1730
  %84 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_222c, i64 0, i64 0), i64 %rsi.6.reload), !insn.addr !239
  %85 = add i64 %20, 96, !insn.addr !240
  store i64 0, i64* %rbx.5.reg2mem, !insn.addr !241
  br label %dec_label_pc_1760, !insn.addr !241

dec_label_pc_1760:                                ; preds = %dec_label_pc_1760, %dec_label_pc_1748
  %rbx.5.reload = load i64, i64* %rbx.5.reg2mem
  %86 = trunc i64 %rbx.5.reload to i32, !insn.addr !240
  %87 = mul i64 %rbx.5.reload, 4, !insn.addr !240
  %88 = add i64 %85, %87, !insn.addr !240
  %89 = inttoptr i64 %88 to i32*, !insn.addr !240
  store i32 %86, i32* %89, align 4, !insn.addr !240
  %90 = add nuw nsw i64 %rbx.5.reload, 1, !insn.addr !242
  %exitcond = icmp eq i64 %90, 20
  store i64 %90, i64* %rbx.5.reg2mem, !insn.addr !243
  br i1 %exitcond, label %dec_label_pc_176e, label %dec_label_pc_1760, !insn.addr !243

dec_label_pc_176e:                                ; preds = %dec_label_pc_1760
  %91 = zext i32 %3 to i64, !insn.addr !244
  %92 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_224b, i64 0, i64 0), i64 %91), !insn.addr !245
  %93 = sext i32 %92 to i64, !insn.addr !245
  ret i64 %93, !insn.addr !246

; uselistorder directives
  uselistorder i64 %rbx.5.reload, { 1, 2, 0 }
  uselistorder i64 %rbx.4.reload, { 2, 1, 0 }
  uselistorder i64 %rsi.6.reload, { 1, 0 }
  uselistorder i128 %70, { 2, 1, 0 }
  uselistorder i32 %64, { 1, 0 }
  uselistorder i64 %rbx.3.reload, { 1, 2, 3, 0 }
  uselistorder i32 %44, { 3, 2, 1, 0 }
  uselistorder i64 %rcx.2.reload, { 1, 0 }
  uselistorder i64 %rax.2.reload, { 1, 0 }
  uselistorder i32 %25, { 1, 0 }
  uselistorder i64 %rax.1.reload, { 1, 2, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 2, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rsi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.3.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rsi.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rsi.3.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rsi.4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.3.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rsi.5.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.6.reg2mem, { 1, 2, 0 }
  uselistorder i64* %rbx.5.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 3, 2, 1, 0 }
  uselistorder i64 40, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_16b0, { 1, 0 }
  uselistorder label %dec_label_pc_1620, { 1, 0 }
  uselistorder label %dec_label_pc_1590, { 1, 0 }
}

define i64 @ptr_single() local_unnamed_addr {
dec_label_pc_1790:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 10, !insn.addr !247
  %3 = and i64 %2, 4294967295, !insn.addr !247
  ret i64 %3, !insn.addr !248
}

define i64 @ptr_double(i64 %arg1) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 5, !insn.addr !249
  %3 = and i64 %2, 4294967295, !insn.addr !249
  ret i64 %3, !insn.addr !250
}

define i64 @ptr_triple(i64 %arg1) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !251
  %3 = and i64 %2, 4294967295, !insn.addr !251
  ret i64 %3, !insn.addr !252
}

define i64 @ptr_increment(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_17c0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !253
  %rax.0.reg2mem = alloca i32, !insn.addr !253
  %0 = trunc i64 %arg2 to i32, !insn.addr !253
  %1 = icmp slt i32 %0, 1
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !254
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !254
  br i1 %1, label %dec_label_pc_17dc, label %dec_label_pc_17d0, !insn.addr !254

dec_label_pc_17d0:                                ; preds = %dec_label_pc_17c0, %dec_label_pc_17d0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %2 = mul i64 %rdx.0.reload, 4, !insn.addr !255
  %3 = add i64 %2, %arg1, !insn.addr !255
  %4 = inttoptr i64 %3 to i32*, !insn.addr !255
  %5 = load i32, i32* %4, align 4, !insn.addr !255
  %6 = add i32 %5, %rax.0.reload, !insn.addr !255
  %7 = add i64 %rdx.0.reload, 1, !insn.addr !256
  %8 = trunc i64 %7 to i32, !insn.addr !257
  %9 = icmp eq i32 %0, %8, !insn.addr !257
  %10 = icmp eq i1 %9, false, !insn.addr !258
  store i32 %6, i32* %rax.0.reg2mem, !insn.addr !258
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !258
  br i1 %10, label %dec_label_pc_17d0, label %dec_label_pc_17db, !insn.addr !258

dec_label_pc_17db:                                ; preds = %dec_label_pc_17d0
  %11 = zext i32 %6 to i64, !insn.addr !255
  ret i64 %11, !insn.addr !259

dec_label_pc_17dc:                                ; preds = %dec_label_pc_17c0
  ret i64 0, !insn.addr !260

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_17d0, { 1, 0 }
}

define i64 @ptr_offset(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17e0:
  %sext = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext, 30, !insn.addr !261
  %1 = add i64 %0, %arg1, !insn.addr !261
  %2 = inttoptr i64 %1 to i32*, !insn.addr !261
  %3 = load i32, i32* %2, align 4, !insn.addr !261
  %4 = zext i32 %3 to i64, !insn.addr !261
  ret i64 %4, !insn.addr !262
}

define i64 @ptr_diff(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17f0:
  %0 = sub i64 %arg1, %arg2, !insn.addr !263
  %1 = udiv i64 %0, 4, !insn.addr !264
  ret i64 %1, !insn.addr !265
}

define i64 @ptr_void(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1800:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !266
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !266
  %3 = icmp eq i32 %2, 1, !insn.addr !266
  br i1 %3, label %dec_label_pc_1811, label %dec_label_pc_1805, !insn.addr !267

dec_label_pc_1805:                                ; preds = %dec_label_pc_1800
  %4 = icmp eq i32 %2, 0, !insn.addr !268
  %5 = icmp eq i1 %4, false, !insn.addr !269
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !269
  br i1 %5, label %dec_label_pc_1814, label %dec_label_pc_180e, !insn.addr !269

dec_label_pc_180e:                                ; preds = %dec_label_pc_1805
  %6 = and i64 %1, 4294967295, !insn.addr !270
  ret i64 %6, !insn.addr !271

dec_label_pc_1811:                                ; preds = %dec_label_pc_1800
  %sext = mul i64 %1, 72057594037927936
  %7 = ashr exact i64 %sext, 56, !insn.addr !272
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !272
  br label %dec_label_pc_1814, !insn.addr !272

dec_label_pc_1814:                                ; preds = %dec_label_pc_1811, %dec_label_pc_1805
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !273

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
}

define i64 @ptr_const() local_unnamed_addr {
dec_label_pc_1820:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !274
  %3 = and i64 %2, 4294967294, !insn.addr !274
  ret i64 %3, !insn.addr !275
}

define i64 @ptr_const_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1830:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 5, !insn.addr !276
  %4 = zext i32 %3 to i64, !insn.addr !276
  %5 = inttoptr i64 %arg1 to i32*, !insn.addr !277
  store i32 %3, i32* %5, align 4, !insn.addr !277
  ret i64 %4, !insn.addr !278

; uselistorder directives
  uselistorder i32 5, { 1, 0 }
}

define i64 @ptr_func_simple(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1840:
  ret i64 %arg1, !insn.addr !279
}

define i64 @ptr_func_complex(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1850:
  %0 = load i128, i128* bitcast ([5 x i8]** @global_var_3de0 to i128*), align 8, !insn.addr !280
  %1 = call i128 @__asm_movaps(i128 %0), !insn.addr !280
  %2 = call i64 @__asm_movaps.1(i128 %1), !insn.addr !281
  ret i64 %arg1, !insn.addr !282
}

define i64 @ptr_cast() local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !283
  ret i64 %2, !insn.addr !284
}

define i64 @opaque_handle_create(i64 %arg1) local_unnamed_addr {
dec_label_pc_1890:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !285
  ret i64 %0, !insn.addr !286
}

define i64 @opaque_handle_op(i64 %arg1) local_unnamed_addr {
dec_label_pc_18a0:
  %0 = mul i64 %arg1, 2, !insn.addr !287
  %1 = and i64 %0, 4294967294, !insn.addr !287
  ret i64 %1, !insn.addr !288

; uselistorder directives
  uselistorder i64 2, { 0, 1, 6, 2, 5, 3, 4 }
}

define i64 @test_pointer_types() local_unnamed_addr {
dec_label_pc_18b0:
  %rsi.0.reg2mem = alloca i32, !insn.addr !289
  %rbx.0.reg2mem = alloca i64, !insn.addr !289
  %stack_var_-40 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !290
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_25fb to i8*)), !insn.addr !291
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2275, i64 0, i64 0), i64 15), !insn.addr !292
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_2291, i64 0, i64 0), i64 15), !insn.addr !293
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_22ad, i64 0, i64 0), i64 6), !insn.addr !294
  %5 = load i128, i128* @global_var_2640, align 8, !insn.addr !295
  %6 = call i128 @__asm_movaps(i128 %5), !insn.addr !295
  %7 = call i64 @__asm_movaps.1(i128 %6), !insn.addr !296
  store i64 %7, i64* %stack_var_-40, align 8, !insn.addr !296
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !297
  store i32 0, i32* %rsi.0.reg2mem, !insn.addr !297
  br label %dec_label_pc_1920, !insn.addr !297

dec_label_pc_1920:                                ; preds = %dec_label_pc_1920, %dec_label_pc_18b0
  %rsi.0.reload = load i32, i32* %rsi.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %8 = mul i64 %rbx.0.reload, 4, !insn.addr !298
  %9 = add i64 %8, %0, !insn.addr !298
  %10 = inttoptr i64 %9 to i32*, !insn.addr !298
  %11 = load i32, i32* %10, align 4, !insn.addr !298
  %12 = add i32 %11, %rsi.0.reload, !insn.addr !298
  %13 = add nuw nsw i64 %rbx.0.reload, 1, !insn.addr !299
  %exitcond = icmp eq i64 %13, 5
  store i64 %13, i64* %rbx.0.reg2mem, !insn.addr !300
  store i32 %12, i32* %rsi.0.reg2mem, !insn.addr !300
  br i1 %exitcond, label %dec_label_pc_192c, label %dec_label_pc_1920, !insn.addr !300

dec_label_pc_192c:                                ; preds = %dec_label_pc_1920
  %14 = zext i32 %12 to i64, !insn.addr !298
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_22c9, i64 0, i64 0), i64 %14), !insn.addr !301
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_22e8, i64 0, i64 0), i64 30), !insn.addr !302
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_2304, i64 0, i64 0), i64 4), !insn.addr !303
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_231e, i64 0, i64 0), i64 42), !insn.addr !304
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_231e, i64 0, i64 0), i64 65), !insn.addr !305
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_2338, i64 0, i64 0), i64 20), !insn.addr !306
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2353, i64 0, i64 0), i64 15), !insn.addr !307
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2372, i64 0, i64 0), i64 10), !insn.addr !308
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_2393, i64 0, i64 0), i64 1), !insn.addr !309
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_23b5, i64 0, i64 0), i32 305419896), !insn.addr !310
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_23d1, i64 0, i64 0), i64 20), !insn.addr !311
  %26 = sext i32 %25 to i64, !insn.addr !311
  ret i64 %26, !insn.addr !312

; uselistorder directives
  uselistorder i32 %12, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rsi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 5, { 1, 0, 5, 6, 7, 2, 3, 4, 12, 11, 8, 9, 10 }
}

define i64 @struct_simple(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 4, !insn.addr !313
  %3 = inttoptr i64 %2 to i32*, !insn.addr !313
  %4 = load i32, i32* %3, align 4, !insn.addr !313
  %5 = trunc i64 %1 to i32
  %6 = add i32 %4, %5, !insn.addr !314
  %7 = add i64 %arg1, 8, !insn.addr !315
  %8 = inttoptr i64 %7 to i32*, !insn.addr !315
  %9 = load i32, i32* %8, align 4, !insn.addr !315
  %10 = add i32 %6, %9, !insn.addr !315
  %11 = zext i32 %10 to i64, !insn.addr !315
  ret i64 %11, !insn.addr !316

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @struct_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a10:
  %rdx.0.reg2mem = alloca i64, !insn.addr !317
  %rax.0.reg2mem = alloca i32, !insn.addr !317
  %0 = trunc i64 %arg2 to i32, !insn.addr !317
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1a45, label %dec_label_pc_1a14, !insn.addr !318

dec_label_pc_1a14:                                ; preds = %dec_label_pc_1a10
  %2 = mul i64 %arg2, 4, !insn.addr !319
  %3 = and i64 %2, 17179869180, !insn.addr !320
  %4 = mul nuw nsw i64 %3, 3, !insn.addr !321
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !322
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !322
  br label %dec_label_pc_1a30, !insn.addr !322

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1a14
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %5 = add i64 %rdx.0.reload, %arg1
  %6 = inttoptr i64 %5 to i32*, !insn.addr !323
  %7 = load i32, i32* %6, align 4, !insn.addr !323
  %8 = add i32 %7, %rax.0.reload, !insn.addr !323
  %9 = add i64 %5, 4, !insn.addr !324
  %10 = inttoptr i64 %9 to i32*, !insn.addr !324
  %11 = load i32, i32* %10, align 4, !insn.addr !324
  %12 = add i32 %8, %11, !insn.addr !324
  %13 = add i64 %5, 8, !insn.addr !325
  %14 = inttoptr i64 %13 to i32*, !insn.addr !325
  %15 = load i32, i32* %14, align 4, !insn.addr !325
  %16 = add i32 %12, %15, !insn.addr !325
  %17 = add i64 %rdx.0.reload, 12, !insn.addr !326
  %18 = icmp eq i64 %4, %17, !insn.addr !327
  %19 = icmp eq i1 %18, false, !insn.addr !328
  store i32 %16, i32* %rax.0.reg2mem, !insn.addr !328
  store i64 %17, i64* %rdx.0.reg2mem, !insn.addr !328
  br i1 %19, label %dec_label_pc_1a30, label %dec_label_pc_1a44, !insn.addr !328

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a30
  %20 = zext i32 %16 to i64, !insn.addr !325
  ret i64 %20, !insn.addr !329

dec_label_pc_1a45:                                ; preds = %dec_label_pc_1a10
  ret i64 0, !insn.addr !330

; uselistorder directives
  uselistorder i32 %16, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @struct_nested(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 12, !insn.addr !331
  %3 = inttoptr i64 %2 to i32*, !insn.addr !331
  %4 = load i32, i32* %3, align 4, !insn.addr !331
  %5 = trunc i64 %1 to i32
  %6 = add i32 %4, %5, !insn.addr !332
  %7 = zext i32 %6 to i64, !insn.addr !332
  ret i64 %7, !insn.addr !333
}

define i64 @struct_deep(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a60:
  %0 = add i64 %arg1, 20, !insn.addr !334
  %1 = inttoptr i64 %0 to i32*, !insn.addr !334
  %2 = load i32, i32* %1, align 4, !insn.addr !334
  %3 = add i64 %arg1, 8, !insn.addr !335
  %4 = inttoptr i64 %3 to i32*, !insn.addr !335
  %5 = load i32, i32* %4, align 4, !insn.addr !335
  %6 = add i32 %5, %2, !insn.addr !335
  %7 = zext i32 %6 to i64, !insn.addr !335
  ret i64 %7, !insn.addr !336

; uselistorder directives
  uselistorder i64 20, { 4, 2, 3, 0, 5, 6, 7, 1 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @struct_with_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, 8, !insn.addr !337
  %3 = inttoptr i64 %2 to i64*, !insn.addr !337
  %4 = load i64, i64* %3, align 8, !insn.addr !337
  %5 = icmp eq i64 %4, 0, !insn.addr !338
  br i1 %5, label %dec_label_pc_1a80, label %dec_label_pc_1a7b, !insn.addr !339

dec_label_pc_1a7b:                                ; preds = %dec_label_pc_1a70
  %6 = trunc i64 %1 to i32
  %7 = inttoptr i64 %4 to i32*, !insn.addr !340
  %8 = load i32, i32* %7, align 4, !insn.addr !340
  %9 = add i32 %8, %6, !insn.addr !341
  %10 = zext i32 %9 to i64, !insn.addr !341
  ret i64 %10, !insn.addr !342

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a70
  %11 = and i64 %1, 4294967295, !insn.addr !343
  ret i64 %11, !insn.addr !344

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @struct_bitfields() local_unnamed_addr {
dec_label_pc_1a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i16
  %3 = urem i16 %2, 2
  %4 = udiv i16 %2, 2
  %5 = urem i16 %4, 4
  %6 = udiv i16 %2, 8
  %7 = urem i16 %6, 8
  %8 = udiv i16 %2, 64
  %narrow = add nuw nsw i16 %8, %3
  %narrow1 = add nuw nsw i16 %narrow, %5
  %narrow2 = add nuw nsw i16 %narrow1, %7
  %9 = zext i16 %narrow2 to i64, !insn.addr !345
  ret i64 %9, !insn.addr !346

; uselistorder directives
  uselistorder i16 8, { 1, 0 }
}

define i64 @union_type(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ac0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !347
  %3 = icmp eq i32 %2, 1, !insn.addr !347
  br i1 %3, label %dec_label_pc_1acc, label %dec_label_pc_1ac5, !insn.addr !348

dec_label_pc_1ac5:                                ; preds = %dec_label_pc_1ac0
  %4 = icmp eq i32 %2, 0, !insn.addr !349
  %5 = icmp eq i1 %4, false, !insn.addr !350
  br i1 %5, label %dec_label_pc_1ad1, label %dec_label_pc_1ac9, !insn.addr !350

dec_label_pc_1ac9:                                ; preds = %dec_label_pc_1ac5
  %6 = and i64 %1, 4294967295, !insn.addr !351
  ret i64 %6, !insn.addr !352

dec_label_pc_1acc:                                ; preds = %dec_label_pc_1ac0
  %7 = trunc i64 %1 to i32
  %8 = call i32 @__asm_cvttss2si(i32 %7), !insn.addr !353
  %9 = sext i32 %8 to i64, !insn.addr !353
  ret i64 %9, !insn.addr !354

dec_label_pc_1ad1:                                ; preds = %dec_label_pc_1ac5
  %sext = mul i64 %1, 72057594037927936
  %10 = ashr exact i64 %sext, 56, !insn.addr !355
  ret i64 %10, !insn.addr !356

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @union_array(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1ae0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !357
  %rax.0.reg2mem = alloca i32, !insn.addr !357
  %0 = trunc i64 %arg2 to i32, !insn.addr !357
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1afd, label %dec_label_pc_1ae4, !insn.addr !358

dec_label_pc_1ae4:                                ; preds = %dec_label_pc_1ae0
  %2 = and i64 %arg2, 4294967295, !insn.addr !359
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !360
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !360
  br label %dec_label_pc_1af0, !insn.addr !360

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1af0, %dec_label_pc_1ae4
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %3 = mul i64 %rdx.0.reload, 4, !insn.addr !361
  %4 = add i64 %3, %arg1, !insn.addr !361
  %5 = inttoptr i64 %4 to i32*, !insn.addr !361
  %6 = load i32, i32* %5, align 4, !insn.addr !361
  %7 = add i32 %6, %rax.0.reload, !insn.addr !361
  %8 = add i64 %rdx.0.reload, 1, !insn.addr !362
  %9 = icmp eq i64 %2, %8, !insn.addr !363
  %10 = icmp eq i1 %9, false, !insn.addr !364
  store i32 %7, i32* %rax.0.reg2mem, !insn.addr !364
  store i64 %8, i64* %rdx.0.reg2mem, !insn.addr !364
  br i1 %10, label %dec_label_pc_1af0, label %dec_label_pc_1afc, !insn.addr !364

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1af0
  %11 = zext i32 %7 to i64, !insn.addr !361
  ret i64 %11, !insn.addr !365

dec_label_pc_1afd:                                ; preds = %dec_label_pc_1ae0
  ret i64 0, !insn.addr !366

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 4, { 0, 14, 1, 16, 15, 2, 13, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }
}

define i64 @enum_type(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b00:
  %0 = mul i64 %arg1, 10, !insn.addr !367
  %1 = and i64 %0, 4294967294, !insn.addr !367
  ret i64 %1, !insn.addr !368

; uselistorder directives
  uselistorder i64 4294967294, { 2, 3, 0, 1, 4 }
}

define i64 @enum_switch(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b10:
  %rax.0.reg2mem = alloca i64, !insn.addr !369
  %0 = trunc i64 %arg1 to i32, !insn.addr !370
  %1 = icmp ult i32 %0, 4
  store i64 4294967197, i64* %rax.0.reg2mem, !insn.addr !371
  br i1 %1, label %dec_label_pc_1b1a, label %dec_label_pc_1b27, !insn.addr !371

dec_label_pc_1b1a:                                ; preds = %dec_label_pc_1b10
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !372
  %3 = add i64 %2, ptrtoint (i32** @global_var_2680 to i64), !insn.addr !372
  %4 = inttoptr i64 %3 to i32*, !insn.addr !372
  %5 = load i32, i32* %4, align 4, !insn.addr !372
  %6 = zext i32 %5 to i64, !insn.addr !372
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !372
  br label %dec_label_pc_1b27, !insn.addr !372

dec_label_pc_1b27:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1b1a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !373

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1b27, { 1, 0 }
}

define i64 @struct_func_ptr(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b30:
  ret i64 %arg1, !insn.addr !374
}

define i64 @linked_list(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b40:
  %rax.1.reg2mem = alloca i64, !insn.addr !375
  %rdi.0.reg2mem = alloca i64, !insn.addr !375
  %rax.0.reg2mem = alloca i32, !insn.addr !375
  %0 = icmp eq i64 %arg1, 0, !insn.addr !376
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !377
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !377
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !377
  br i1 %0, label %dec_label_pc_1b5b, label %dec_label_pc_1b50, !insn.addr !377

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b40, %dec_label_pc_1b50
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %1 = inttoptr i64 %rdi.0.reload to i32*, !insn.addr !378
  %2 = load i32, i32* %1, align 4, !insn.addr !378
  %3 = add i32 %2, %rax.0.reload, !insn.addr !378
  %4 = add i64 %rdi.0.reload, 8, !insn.addr !379
  %5 = inttoptr i64 %4 to i64*, !insn.addr !379
  %6 = load i64, i64* %5, align 8, !insn.addr !379
  %7 = icmp eq i64 %6, 0, !insn.addr !380
  %8 = icmp eq i1 %7, false, !insn.addr !381
  store i32 %3, i32* %rax.0.reg2mem, !insn.addr !381
  store i64 %6, i64* %rdi.0.reg2mem, !insn.addr !381
  br i1 %8, label %dec_label_pc_1b50, label %dec_label_pc_1b5b.loopexit, !insn.addr !381

dec_label_pc_1b5b.loopexit:                       ; preds = %dec_label_pc_1b50
  %9 = zext i32 %3 to i64, !insn.addr !378
  store i64 %9, i64* %rax.1.reg2mem
  br label %dec_label_pc_1b5b

dec_label_pc_1b5b:                                ; preds = %dec_label_pc_1b5b.loopexit, %dec_label_pc_1b40
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !382

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b50, { 1, 0 }
}

define i64 @doubly_linked_list(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b60:
  %rax.1.reg2mem = alloca i64, !insn.addr !383
  %rdi.0.reg2mem = alloca i64, !insn.addr !383
  %rax.0.reg2mem = alloca i32, !insn.addr !383
  %0 = icmp eq i64 %arg1, 0, !insn.addr !384
  store i32 0, i32* %rax.0.reg2mem, !insn.addr !385
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !385
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !385
  br i1 %0, label %dec_label_pc_1b7b, label %dec_label_pc_1b70, !insn.addr !385

dec_label_pc_1b70:                                ; preds = %dec_label_pc_1b60, %dec_label_pc_1b70
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  %1 = inttoptr i64 %rdi.0.reload to i32*, !insn.addr !386
  %2 = load i32, i32* %1, align 4, !insn.addr !386
  %3 = add i32 %2, %rax.0.reload, !insn.addr !386
  %4 = add i64 %rdi.0.reload, 8, !insn.addr !387
  %5 = inttoptr i64 %4 to i64*, !insn.addr !387
  %6 = load i64, i64* %5, align 8, !insn.addr !387
  %7 = icmp eq i64 %6, 0, !insn.addr !388
  %8 = icmp eq i1 %7, false, !insn.addr !389
  store i32 %3, i32* %rax.0.reg2mem, !insn.addr !389
  store i64 %6, i64* %rdi.0.reg2mem, !insn.addr !389
  br i1 %8, label %dec_label_pc_1b70, label %dec_label_pc_1b7b.loopexit, !insn.addr !389

dec_label_pc_1b7b.loopexit:                       ; preds = %dec_label_pc_1b70
  %9 = zext i32 %3 to i64, !insn.addr !386
  store i64 %9, i64* %rax.1.reg2mem
  br label %dec_label_pc_1b7b

dec_label_pc_1b7b:                                ; preds = %dec_label_pc_1b7b.loopexit, %dec_label_pc_1b60
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !390

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b70, { 1, 0 }
}

define i64 @binary_tree_sum(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = icmp eq i64 %arg1, 0, !insn.addr !391
  br i1 %0, label %dec_label_pc_1bad, label %dec_label_pc_1b85, !insn.addr !392

dec_label_pc_1b85:                                ; preds = %dec_label_pc_1b80
  %1 = add i64 %arg1, 8, !insn.addr !393
  %2 = inttoptr i64 %1 to i64*, !insn.addr !393
  %3 = load i64, i64* %2, align 8, !insn.addr !393
  %4 = call i64 @binary_tree_sum(i64 %3), !insn.addr !394
  %5 = add i64 %4, %arg1, !insn.addr !395
  %6 = add i64 %arg1, 16, !insn.addr !396
  %7 = inttoptr i64 %6 to i64*, !insn.addr !396
  %8 = load i64, i64* %7, align 8, !insn.addr !396
  %9 = call i64 @binary_tree_sum(i64 %8), !insn.addr !397
  %10 = add i64 %5, %9, !insn.addr !398
  %11 = and i64 %10, 4294967295, !insn.addr !398
  ret i64 %11, !insn.addr !399

dec_label_pc_1bad:                                ; preds = %dec_label_pc_1b80
  ret i64 0, !insn.addr !400

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2, 3 }
}

define i64 @binary_tree() local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @binary_tree_sum(i64 %1), !insn.addr !401
  ret i64 %2, !insn.addr !402
}

define i64 @graph_traverse(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1bc0:
  %rax.3.reg2mem = alloca i64, !insn.addr !403
  %rsi.0.reg2mem = alloca i64, !insn.addr !403
  %rax.2.reg2mem = alloca i64, !insn.addr !403
  %rdx.0.reg2mem = alloca i64, !insn.addr !403
  %rax.1.reg2mem = alloca i64, !insn.addr !403
  %rax.0.reg2mem = alloca i64, !insn.addr !403
  %0 = add i64 %arg1, 80, !insn.addr !403
  %1 = inttoptr i64 %0 to i32*, !insn.addr !403
  %2 = load i32, i32* %1, align 4, !insn.addr !403
  %3 = zext i32 %2 to i64, !insn.addr !403
  %4 = icmp slt i32 %2, 1
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !404
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !404
  store i64 0, i64* %rax.3.reg2mem, !insn.addr !404
  br i1 %4, label %dec_label_pc_1bff, label %dec_label_pc_1bd9, !insn.addr !404

dec_label_pc_1bd0:                                ; preds = %dec_label_pc_1bf0, %dec_label_pc_1bd9
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = add i64 %rdx.0.reload, 1, !insn.addr !405
  %6 = icmp eq i64 %5, %3, !insn.addr !406
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !407
  store i64 %5, i64* %rdx.0.reg2mem, !insn.addr !407
  store i64 %rax.0.reload, i64* %rax.3.reg2mem, !insn.addr !407
  br i1 %6, label %dec_label_pc_1bff, label %dec_label_pc_1bd9, !insn.addr !407

dec_label_pc_1bd9:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1bd0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %7 = mul i64 %rdx.0.reload, 8, !insn.addr !408
  %8 = add i64 %7, %arg1, !insn.addr !408
  %9 = inttoptr i64 %8 to i64*, !insn.addr !408
  %10 = load i64, i64* %9, align 8, !insn.addr !408
  %11 = icmp eq i64 %10, 0, !insn.addr !409
  store i64 %rax.1.reload, i64* %rax.0.reg2mem, !insn.addr !410
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !410
  store i64 %10, i64* %rsi.0.reg2mem, !insn.addr !410
  br i1 %11, label %dec_label_pc_1bd0, label %dec_label_pc_1bf0, !insn.addr !410

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1bd9, %dec_label_pc_1bf0
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %12 = trunc i64 %rax.2.reload to i32, !insn.addr !411
  %13 = inttoptr i64 %rsi.0.reload to i32*, !insn.addr !411
  %14 = load i32, i32* %13, align 4, !insn.addr !411
  %15 = add i32 %14, %12, !insn.addr !411
  %16 = zext i32 %15 to i64, !insn.addr !411
  %17 = add i64 %rsi.0.reload, 8, !insn.addr !412
  %18 = inttoptr i64 %17 to i64*, !insn.addr !412
  %19 = load i64, i64* %18, align 8, !insn.addr !412
  %20 = icmp eq i64 %19, 0, !insn.addr !413
  %21 = icmp eq i1 %20, false, !insn.addr !414
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !414
  store i64 %16, i64* %rax.2.reg2mem, !insn.addr !414
  store i64 %19, i64* %rsi.0.reg2mem, !insn.addr !414
  br i1 %21, label %dec_label_pc_1bf0, label %dec_label_pc_1bd0, !insn.addr !414

dec_label_pc_1bff:                                ; preds = %dec_label_pc_1bd0, %dec_label_pc_1bc0
  %rax.3.reload = load i64, i64* %rax.3.reg2mem
  ret i64 %rax.3.reload, !insn.addr !415

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 2, 0 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1bf0, { 1, 0 }
  uselistorder label %dec_label_pc_1bd9, { 1, 0 }
}

define i64 @test_composite_types() local_unnamed_addr {
dec_label_pc_1c00:
  %rsi.2.reg2mem = alloca i64, !insn.addr !416
  %rax.2.reg2mem = alloca i64, !insn.addr !416
  %rsi.1.reg2mem = alloca i64, !insn.addr !416
  %rbx.1.reg2mem = alloca i64, !insn.addr !416
  %rsi.0.reg2mem = alloca i64, !insn.addr !416
  %rbp.0.reg2mem = alloca i32, !insn.addr !416
  %rax.1.reg2mem = alloca i64, !insn.addr !416
  %rbx.0.reg2mem = alloca i32, !insn.addr !416
  %rax.0.reg2mem = alloca i64, !insn.addr !416
  %stack_var_-136 = alloca i128, align 8
  %stack_var_-200 = alloca i64, align 8
  %stack_var_-248 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-248 to i64, !insn.addr !417
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_2616 to i8*)), !insn.addr !418
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_23f3, i64 0, i64 0), i64 6), !insn.addr !419
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_2412, i64 0, i64 0), i64 9), !insn.addr !420
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_2430, i64 0, i64 0), i64 105), !insn.addr !421
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_244f, i64 0, i64 0), i64 258), !insn.addr !422
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_246c, i64 0, i64 0), i64 30), !insn.addr !423
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_248d, i64 0, i64 0), i64 106), !insn.addr !424
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_24af, i64 0, i64 0), i64 305419896), !insn.addr !425
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_24cb, i64 0, i64 0), i64 60), !insn.addr !426
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_24e8, i64 0, i64 0), i64 10), !insn.addr !427
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2503, i64 0, i64 0), i64 50), !insn.addr !428
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_2520, i64 0, i64 0), i64 21), !insn.addr !429
  store i64 10, i64* %stack_var_-248, align 8, !insn.addr !430
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !431
  store i32 0, i32* %rbx.0.reg2mem, !insn.addr !431
  br label %dec_label_pc_1d20, !insn.addr !431

dec_label_pc_1d20:                                ; preds = %dec_label_pc_1d20, %dec_label_pc_1c00
  %rbx.0.reload = load i32, i32* %rbx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = inttoptr i64 %rax.0.reload to i32*, !insn.addr !432
  %14 = load i32, i32* %13, align 4, !insn.addr !432
  %15 = add i32 %14, %rbx.0.reload, !insn.addr !432
  %16 = add i64 %rax.0.reload, 8, !insn.addr !433
  %17 = inttoptr i64 %16 to i64*, !insn.addr !433
  %18 = load i64, i64* %17, align 8, !insn.addr !433
  %19 = icmp eq i64 %18, 0, !insn.addr !434
  %20 = icmp eq i1 %19, false, !insn.addr !435
  store i64 %18, i64* %rax.0.reg2mem, !insn.addr !435
  store i32 %15, i32* %rbx.0.reg2mem, !insn.addr !435
  br i1 %20, label %dec_label_pc_1d20, label %dec_label_pc_1d2b, !insn.addr !435

dec_label_pc_1d2b:                                ; preds = %dec_label_pc_1d20
  %21 = zext i32 %15 to i64, !insn.addr !432
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2541, i64 0, i64 0), i64 %21), !insn.addr !436
  %23 = ptrtoint i64* %stack_var_-200 to i64, !insn.addr !437
  store i64 10, i64* %stack_var_-200, align 8, !insn.addr !438
  store i64 %23, i64* %rax.1.reg2mem, !insn.addr !439
  store i32 0, i32* %rbp.0.reg2mem, !insn.addr !439
  br label %dec_label_pc_1d80, !insn.addr !439

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d80, %dec_label_pc_1d2b
  %rbp.0.reload = load i32, i32* %rbp.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %24 = inttoptr i64 %rax.1.reload to i32*, !insn.addr !440
  %25 = load i32, i32* %24, align 4, !insn.addr !440
  %26 = add i32 %25, %rbp.0.reload, !insn.addr !440
  %27 = add i64 %rax.1.reload, 8, !insn.addr !441
  %28 = inttoptr i64 %27 to i64*, !insn.addr !441
  %29 = load i64, i64* %28, align 8, !insn.addr !441
  %30 = icmp eq i64 %29, 0, !insn.addr !442
  %31 = icmp eq i1 %30, false, !insn.addr !443
  store i64 %29, i64* %rax.1.reg2mem, !insn.addr !443
  store i32 %26, i32* %rbp.0.reg2mem, !insn.addr !443
  br i1 %31, label %dec_label_pc_1d80, label %dec_label_pc_1d8b, !insn.addr !443

dec_label_pc_1d8b:                                ; preds = %dec_label_pc_1d80
  %32 = zext i32 %26 to i64, !insn.addr !440
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_255e, i64 0, i64 0), i64 %32), !insn.addr !444
  %34 = load i128, i128* @global_var_2658, align 8, !insn.addr !445
  %35 = call i128 @__asm_movups.2(i128 %34), !insn.addr !445
  %36 = call i64 @__asm_movaps.1(i128 %35), !insn.addr !446
  %37 = sext i64 %36 to i128, !insn.addr !446
  store i128 %37, i128* %stack_var_-136, align 8, !insn.addr !446
  %38 = ptrtoint i128* %stack_var_-136 to i64, !insn.addr !447
  %39 = call i64 @binary_tree_sum(i64 %38), !insn.addr !448
  %40 = and i64 %39, 4294967295, !insn.addr !449
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_2582, i64 0, i64 0), i64 %40), !insn.addr !450
  %42 = load i128, i128* @global_var_2670, align 8, !insn.addr !451
  %43 = call i128 @__asm_movups.2(i128 %42), !insn.addr !451
  %44 = call i64 @__asm_movaps.1(i128 %43), !insn.addr !452
  %45 = call i128 @__asm_xorps(i128 %43, i128 %43), !insn.addr !453
  %46 = call i64 @__asm_movaps.1(i128 %45), !insn.addr !454
  %47 = call i64 @__asm_movaps.1(i128 %45), !insn.addr !455
  %48 = call i64 @__asm_movaps.1(i128 %45), !insn.addr !456
  %49 = call i64 @__asm_movaps.1(i128 %45), !insn.addr !457
  %50 = call i64 @__asm_movaps.1(i128 %45), !insn.addr !458
  %51 = add i64 %0, 144, !insn.addr !459
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !460
  store i64 0, i64* %rsi.1.reg2mem, !insn.addr !460
  br label %dec_label_pc_1e4a, !insn.addr !460

dec_label_pc_1e40:                                ; preds = %dec_label_pc_1e60, %dec_label_pc_1e4a
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %52 = add nuw nsw i64 %rbx.1.reload, 1, !insn.addr !461
  %53 = icmp eq i64 %rbx.1.reload, 1, !insn.addr !462
  store i64 %52, i64* %rbx.1.reg2mem, !insn.addr !463
  store i64 %rsi.0.reload, i64* %rsi.1.reg2mem, !insn.addr !463
  br i1 %53, label %dec_label_pc_1e6d, label %dec_label_pc_1e4a, !insn.addr !463

dec_label_pc_1e4a:                                ; preds = %dec_label_pc_1e40, %dec_label_pc_1d8b
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %54 = mul i64 %rbx.1.reload, 8, !insn.addr !459
  %55 = add i64 %51, %54, !insn.addr !459
  %56 = inttoptr i64 %55 to i64*, !insn.addr !459
  %57 = load i64, i64* %56, align 8, !insn.addr !459
  %58 = icmp eq i64 %57, 0, !insn.addr !464
  store i64 %rsi.1.reload, i64* %rsi.0.reg2mem, !insn.addr !465
  store i64 %57, i64* %rax.2.reg2mem, !insn.addr !465
  store i64 %rsi.1.reload, i64* %rsi.2.reg2mem, !insn.addr !465
  br i1 %58, label %dec_label_pc_1e40, label %dec_label_pc_1e60, !insn.addr !465

dec_label_pc_1e60:                                ; preds = %dec_label_pc_1e4a, %dec_label_pc_1e60
  %rsi.2.reload = load i64, i64* %rsi.2.reg2mem
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %59 = trunc i64 %rsi.2.reload to i32, !insn.addr !466
  %60 = inttoptr i64 %rax.2.reload to i32*, !insn.addr !466
  %61 = load i32, i32* %60, align 4, !insn.addr !466
  %62 = add i32 %61, %59, !insn.addr !466
  %63 = zext i32 %62 to i64, !insn.addr !466
  %64 = add i64 %rax.2.reload, 8, !insn.addr !467
  %65 = inttoptr i64 %64 to i64*, !insn.addr !467
  %66 = load i64, i64* %65, align 8, !insn.addr !467
  %67 = icmp eq i64 %66, 0, !insn.addr !468
  %68 = icmp eq i1 %67, false, !insn.addr !469
  store i64 %63, i64* %rsi.0.reg2mem, !insn.addr !469
  store i64 %66, i64* %rax.2.reg2mem, !insn.addr !469
  store i64 %63, i64* %rsi.2.reg2mem, !insn.addr !469
  br i1 %68, label %dec_label_pc_1e60, label %dec_label_pc_1e40, !insn.addr !469

dec_label_pc_1e6d:                                ; preds = %dec_label_pc_1e40
  %69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_259f, i64 0, i64 0), i64 %rsi.0.reload), !insn.addr !470
  %70 = sext i32 %69 to i64, !insn.addr !470
  ret i64 %70, !insn.addr !471

; uselistorder directives
  uselistorder i64 %rbx.1.reload, { 2, 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i128 %45, { 4, 2, 3, 1, 0 }
  uselistorder i128 %43, { 2, 1, 0 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i32 %15, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 1, 2, 0 }
  uselistorder i64* %rax.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.2.reg2mem, { 2, 0, 1 }
  uselistorder i64 1, { 1, 8, 9, 10, 6, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 2, 24, 3, 25, 26, 27, 28, 29, 4, 30, 7, 5 }
  uselistorder i64 4294967295, { 12, 3, 13, 4, 5, 6, 7, 0, 8, 9, 10, 14, 1, 15, 16, 17, 2, 18, 11, 19, 20 }
  uselistorder i64 (i64)* @binary_tree_sum, { 3, 2, 1, 0 }
  uselistorder i1 false, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 22, 23 }
  uselistorder i64 8, { 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 5, 15, 2, 3, 4 }
  uselistorder i32 0, { 0, 1, 2, 3, 4, 18, 5, 6, 19, 7, 8, 9, 10, 11, 20, 17, 21, 22, 23, 24, 12, 13, 14, 15, 16, 25, 26 }
  uselistorder i64 10, { 4, 5, 8, 6, 9, 0, 10, 2, 3, 7, 1 }
  uselistorder i64 30, { 3, 0, 4, 1, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 51 }
  uselistorder i32 (i8*)* @puts, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_1e60, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1e90:
  %0 = call i64 @test_data_types_l1(), !insn.addr !472
  %1 = call i64 @test_array_types(), !insn.addr !473
  %2 = call i64 @test_pointer_types(), !insn.addr !474
  %3 = call i64 @test_composite_types(), !insn.addr !475
  ret i64 0, !insn.addr !476

; uselistorder directives
  uselistorder i64 0, { 37, 55, 56, 155, 156, 0, 1, 57, 58, 59, 60, 157, 61, 62, 158, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 159, 160, 2, 3, 4, 38, 161, 162, 5, 163, 164, 6, 165, 39, 7, 166, 40, 8, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 9, 105, 106, 107, 108, 109, 110, 41, 10, 112, 113, 11, 114, 115, 167, 12, 13, 116, 117, 14, 15, 118, 119, 120, 121, 16, 17, 18, 19, 20, 21, 122, 123, 22, 111, 23, 24, 124, 125, 126, 127, 42, 25, 168, 27, 28, 26, 43, 29, 44, 30, 31, 32, 33, 34, 45, 35, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 169, 46, 36, 170, 47, 48, 49, 50, 51, 52, 53, 54, 153, 154 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1eac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !477

; uselistorder directives
  uselistorder i32 1, { 21, 118, 117, 116, 31, 30, 29, 28, 27, 26, 25, 24, 23, 105, 37, 36, 35, 34, 33, 32, 20, 40, 39, 38, 43, 42, 41, 44, 106, 46, 45, 107, 19, 18, 17, 16, 108, 48, 47, 15, 119, 50, 49, 14, 13, 12, 109, 51, 11, 110, 53, 52, 10, 9, 8, 124, 122, 121, 120, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 22, 2, 80, 79, 81, 111, 112, 85, 84, 83, 82, 113, 87, 86, 114, 89, 88, 97, 96, 95, 94, 93, 92, 91, 90, 99, 98, 101, 100, 115, 103, 102, 7, 6, 5, 4, 1, 0, 3, 123, 104 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_mulss(i128, i32) local_unnamed_addr

declare i128 @__asm_addss(i128, i32) local_unnamed_addr

declare i128 @__asm_mulsd(i128, i64) local_unnamed_addr

declare i128 @__asm_addsd(i128, i64) local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare void @__asm_movups(i128, i128) local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i64 @__asm_movaps.1(i128) local_unnamed_addr

declare i32 @__asm_cvttss2si(i32) local_unnamed_addr

declare i128 @__asm_movups.2(i128) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4223}
!10 = !{i64 4229}
!11 = !{i64 4280}
!12 = !{i64 4344}
!13 = !{i64 4356}
!14 = !{i64 4363}
!15 = !{i64 4366}
!16 = !{i64 4377}
!17 = !{i64 4379}
!18 = !{i64 4386}
!19 = !{i64 4391}
!20 = !{i64 4396}
!21 = !{i64 4404}
!22 = !{i64 4408}
!23 = !{i64 4420}
!24 = !{i64 4432}
!25 = !{i64 4435}
!26 = !{i64 4438}
!27 = !{i64 4443}
!28 = !{i64 4446}
!29 = !{i64 4448}
!30 = !{i64 4451}
!31 = !{i64 4464}
!32 = !{i64 4467}
!33 = !{i64 4470}
!34 = !{i64 4480}
!35 = !{i64 4484}
!36 = !{i64 4499}
!37 = !{i64 4503}
!38 = !{i64 4512}
!39 = !{i64 4520}
!40 = !{i64 4528}
!41 = !{i64 4544}
!42 = !{i64 4552}
!43 = !{i64 4560}
!44 = !{i64 4586}
!45 = !{i64 4592}
!46 = !{i64 4594}
!47 = !{i64 4597}
!48 = !{i64 4601}
!49 = !{i64 4604}
!50 = !{i64 4606}
!51 = !{i64 4610}
!52 = !{i64 4613}
!53 = !{i64 4626}
!54 = !{i64 4628}
!55 = !{i64 4652}
!56 = !{i64 4674}
!57 = !{i64 4689}
!58 = !{i64 4708}
!59 = !{i64 4727}
!60 = !{i64 4746}
!61 = !{i64 4765}
!62 = !{i64 4777}
!63 = !{i64 4787}
!64 = !{i64 4799}
!65 = !{i64 4809}
!66 = !{i64 4832}
!67 = !{i64 4854}
!68 = !{i64 4866}
!69 = !{i64 4878}
!70 = !{i64 4897}
!71 = !{i64 4927}
!72 = !{i64 4937}
!73 = !{i64 4944}
!74 = !{i64 4946}
!75 = !{i64 4948}
!76 = !{i64 4954}
!77 = !{i64 4960}
!78 = !{i64 4963}
!79 = !{i64 4967}
!80 = !{i64 4970}
!81 = !{i64 4972}
!82 = !{i64 4975}
!83 = !{i64 4976}
!84 = !{i64 4991}
!85 = !{i64 4992}
!86 = !{i64 4995}
!87 = !{i64 4998}
!88 = !{i64 5002}
!89 = !{i64 5004}
!90 = !{i64 5008}
!91 = !{i64 5022}
!92 = !{i64 5024}
!93 = !{i64 5027}
!94 = !{i64 5031}
!95 = !{i64 5038}
!96 = !{i64 5040}
!97 = !{i64 5056}
!98 = !{i64 5071}
!99 = !{i64 5087}
!100 = !{i64 5100}
!101 = !{i64 5104}
!102 = !{i64 5107}
!103 = !{i64 5115}
!104 = !{i64 5117}
!105 = !{i64 5121}
!106 = !{i64 5129}
!107 = !{i64 5131}
!108 = !{i64 5135}
!109 = !{i64 5143}
!110 = !{i64 5145}
!111 = !{i64 5152}
!112 = !{i64 5154}
!113 = !{i64 5156}
!114 = !{i64 5162}
!115 = !{i64 5168}
!116 = !{i64 5171}
!117 = !{i64 5175}
!118 = !{i64 5178}
!119 = !{i64 5180}
!120 = !{i64 5183}
!121 = !{i64 5184}
!122 = !{i64 5186}
!123 = !{i64 5188}
!124 = !{i64 5190}
!125 = !{i64 5194}
!126 = !{i64 5212}
!127 = !{i64 5216}
!128 = !{i64 5219}
!129 = !{i64 5223}
!130 = !{i64 5226}
!131 = !{i64 5228}
!132 = !{i64 5231}
!133 = !{i64 5232}
!134 = !{i64 5234}
!135 = !{i64 5236}
!136 = !{i64 5244}
!137 = !{i64 5247}
!138 = !{i64 5255}
!139 = !{i64 5262}
!140 = !{i64 5264}
!141 = !{i64 5268}
!142 = !{i64 5271}
!143 = !{i64 5273}
!144 = !{i64 5277}
!145 = !{i64 5280}
!146 = !{i64 5282}
!147 = !{i64 5284}
!148 = !{i64 5288}
!149 = !{i64 5296}
!150 = !{i64 5301}
!151 = !{i64 5308}
!152 = !{i64 5312}
!153 = !{i64 5314}
!154 = !{i64 5303}
!155 = !{i64 5319}
!156 = !{i64 5323}
!157 = !{i64 5329}
!158 = !{i64 5332}
!159 = !{i64 5344}
!160 = !{i64 5346}
!161 = !{i64 5348}
!162 = !{i64 5355}
!163 = !{i64 5360}
!164 = !{i64 5363}
!165 = !{i64 5367}
!166 = !{i64 5370}
!167 = !{i64 5372}
!168 = !{i64 5375}
!169 = !{i64 5376}
!170 = !{i64 5391}
!171 = !{i64 5412}
!172 = !{i64 5431}
!173 = !{i64 5436}
!174 = !{i64 5454}
!175 = !{i64 5468}
!176 = !{i64 5472}
!177 = !{i64 5480}
!178 = !{i64 5483}
!179 = !{i64 5486}
!180 = !{i64 5494}
!181 = !{i64 5496}
!182 = !{i64 5500}
!183 = !{i64 5508}
!184 = !{i64 5377}
!185 = !{i64 5520}
!186 = !{i64 5527}
!187 = !{i64 5531}
!188 = !{i64 5537}
!189 = !{i64 5550}
!190 = !{i64 5555}
!191 = !{i64 5563}
!192 = !{i64 5583}
!193 = !{i64 5596}
!194 = !{i64 5600}
!195 = !{i64 5607}
!196 = !{i64 5615}
!197 = !{i64 5617}
!198 = !{i64 5621}
!199 = !{i64 5629}
!200 = !{i64 5631}
!201 = !{i64 5635}
!202 = !{i64 5643}
!203 = !{i64 5679}
!204 = !{i64 5692}
!205 = !{i64 5696}
!206 = !{i64 5699}
!207 = !{i64 5707}
!208 = !{i64 5709}
!209 = !{i64 5713}
!210 = !{i64 5721}
!211 = !{i64 5723}
!212 = !{i64 5727}
!213 = !{i64 5735}
!214 = !{i64 5748}
!215 = !{i64 5767}
!216 = !{i64 5776}
!217 = !{i64 5772}
!218 = !{i64 5783}
!219 = !{i64 5787}
!220 = !{i64 5791}
!221 = !{i64 5808}
!222 = !{i64 5815}
!223 = !{i64 5819}
!224 = !{i64 5825}
!225 = !{i64 5838}
!226 = !{i64 5897}
!227 = !{i64 5900}
!228 = !{i64 5905}
!229 = !{i64 5910}
!230 = !{i64 5946}
!231 = !{i64 5926}
!232 = !{i64 5936}
!233 = !{i64 5940}
!234 = !{i64 5944}
!235 = !{i64 5951}
!236 = !{i64 5954}
!237 = !{i64 5956}
!238 = !{i64 5958}
!239 = !{i64 5971}
!240 = !{i64 5984}
!241 = !{i64 5976}
!242 = !{i64 5988}
!243 = !{i64 5996}
!244 = !{i64 5998}
!245 = !{i64 6014}
!246 = !{i64 6027}
!247 = !{i64 6034}
!248 = !{i64 6037}
!249 = !{i64 6053}
!250 = !{i64 6056}
!251 = !{i64 6072}
!252 = !{i64 6075}
!253 = !{i64 6080}
!254 = !{i64 6082}
!255 = !{i64 6096}
!256 = !{i64 6099}
!257 = !{i64 6103}
!258 = !{i64 6105}
!259 = !{i64 6107}
!260 = !{i64 6110}
!261 = !{i64 6115}
!262 = !{i64 6118}
!263 = !{i64 6131}
!264 = !{i64 6134}
!265 = !{i64 6138}
!266 = !{i64 6144}
!267 = !{i64 6147}
!268 = !{i64 6154}
!269 = !{i64 6156}
!270 = !{i64 6158}
!271 = !{i64 6160}
!272 = !{i64 6161}
!273 = !{i64 6164}
!274 = !{i64 6178}
!275 = !{i64 6180}
!276 = !{i64 6194}
!277 = !{i64 6197}
!278 = !{i64 6199}
!279 = !{i64 6217}
!280 = !{i64 6234}
!281 = !{i64 6241}
!282 = !{i64 6257}
!283 = !{i64 6272}
!284 = !{i64 6274}
!285 = !{i64 6288}
!286 = !{i64 6291}
!287 = !{i64 6304}
!288 = !{i64 6307}
!289 = !{i64 6320}
!290 = !{i64 6321}
!291 = !{i64 6332}
!292 = !{i64 6353}
!293 = !{i64 6372}
!294 = !{i64 6391}
!295 = !{i64 6406}
!296 = !{i64 6413}
!297 = !{i64 6429}
!298 = !{i64 6432}
!299 = !{i64 6435}
!300 = !{i64 6442}
!301 = !{i64 6453}
!302 = !{i64 6472}
!303 = !{i64 6491}
!304 = !{i64 6513}
!305 = !{i64 6528}
!306 = !{i64 6547}
!307 = !{i64 6566}
!308 = !{i64 6585}
!309 = !{i64 6604}
!310 = !{i64 6623}
!311 = !{i64 6642}
!312 = !{i64 6652}
!313 = !{i64 6656}
!314 = !{i64 6659}
!315 = !{i64 6661}
!316 = !{i64 6664}
!317 = !{i64 6672}
!318 = !{i64 6674}
!319 = !{i64 6676}
!320 = !{i64 6678}
!321 = !{i64 6682}
!322 = !{i64 6700}
!323 = !{i64 6704}
!324 = !{i64 6707}
!325 = !{i64 6711}
!326 = !{i64 6715}
!327 = !{i64 6719}
!328 = !{i64 6722}
!329 = !{i64 6724}
!330 = !{i64 6727}
!331 = !{i64 6736}
!332 = !{i64 6739}
!333 = !{i64 6741}
!334 = !{i64 6752}
!335 = !{i64 6755}
!336 = !{i64 6758}
!337 = !{i64 6770}
!338 = !{i64 6774}
!339 = !{i64 6777}
!340 = !{i64 6779}
!341 = !{i64 6781}
!342 = !{i64 6783}
!343 = !{i64 6768}
!344 = !{i64 6788}
!345 = !{i64 6830}
!346 = !{i64 6832}
!347 = !{i64 6848}
!348 = !{i64 6851}
!349 = !{i64 6853}
!350 = !{i64 6855}
!351 = !{i64 6857}
!352 = !{i64 6859}
!353 = !{i64 6860}
!354 = !{i64 6864}
!355 = !{i64 6865}
!356 = !{i64 6868}
!357 = !{i64 6880}
!358 = !{i64 6882}
!359 = !{i64 6884}
!360 = !{i64 6890}
!361 = !{i64 6896}
!362 = !{i64 6899}
!363 = !{i64 6903}
!364 = !{i64 6906}
!365 = !{i64 6908}
!366 = !{i64 6911}
!367 = !{i64 6914}
!368 = !{i64 6917}
!369 = !{i64 6928}
!370 = !{i64 6933}
!371 = !{i64 6936}
!372 = !{i64 6948}
!373 = !{i64 6951}
!374 = !{i64 6970}
!375 = !{i64 6976}
!376 = !{i64 6978}
!377 = !{i64 6981}
!378 = !{i64 6992}
!379 = !{i64 6994}
!380 = !{i64 6998}
!381 = !{i64 7001}
!382 = !{i64 7003}
!383 = !{i64 7008}
!384 = !{i64 7010}
!385 = !{i64 7013}
!386 = !{i64 7024}
!387 = !{i64 7026}
!388 = !{i64 7030}
!389 = !{i64 7033}
!390 = !{i64 7035}
!391 = !{i64 7040}
!392 = !{i64 7043}
!393 = !{i64 7055}
!394 = !{i64 7059}
!395 = !{i64 7066}
!396 = !{i64 7069}
!397 = !{i64 7073}
!398 = !{i64 7078}
!399 = !{i64 7084}
!400 = !{i64 7087}
!401 = !{i64 7089}
!402 = !{i64 7095}
!403 = !{i64 7104}
!404 = !{i64 7109}
!405 = !{i64 7120}
!406 = !{i64 7124}
!407 = !{i64 7127}
!408 = !{i64 7129}
!409 = !{i64 7133}
!410 = !{i64 7136}
!411 = !{i64 7152}
!412 = !{i64 7154}
!413 = !{i64 7158}
!414 = !{i64 7161}
!415 = !{i64 7167}
!416 = !{i64 7168}
!417 = !{i64 7170}
!418 = !{i64 7184}
!419 = !{i64 7205}
!420 = !{i64 7224}
!421 = !{i64 7243}
!422 = !{i64 7262}
!423 = !{i64 7281}
!424 = !{i64 7300}
!425 = !{i64 7319}
!426 = !{i64 7338}
!427 = !{i64 7357}
!428 = !{i64 7376}
!429 = !{i64 7395}
!430 = !{i64 7403}
!431 = !{i64 7455}
!432 = !{i64 7456}
!433 = !{i64 7458}
!434 = !{i64 7462}
!435 = !{i64 7465}
!436 = !{i64 7480}
!437 = !{i64 7485}
!438 = !{i64 7490}
!439 = !{i64 7549}
!440 = !{i64 7552}
!441 = !{i64 7554}
!442 = !{i64 7558}
!443 = !{i64 7561}
!444 = !{i64 7576}
!445 = !{i64 7596}
!446 = !{i64 7603}
!447 = !{i64 7608}
!448 = !{i64 7613}
!449 = !{i64 7625}
!450 = !{i64 7629}
!451 = !{i64 7634}
!452 = !{i64 7641}
!453 = !{i64 7646}
!454 = !{i64 7649}
!455 = !{i64 7657}
!456 = !{i64 7665}
!457 = !{i64 7673}
!458 = !{i64 7681}
!459 = !{i64 7754}
!460 = !{i64 7727}
!461 = !{i64 7744}
!462 = !{i64 7748}
!463 = !{i64 7752}
!464 = !{i64 7762}
!465 = !{i64 7765}
!466 = !{i64 7776}
!467 = !{i64 7778}
!468 = !{i64 7782}
!469 = !{i64 7785}
!470 = !{i64 7798}
!471 = !{i64 7812}
!472 = !{i64 7825}
!473 = !{i64 7830}
!474 = !{i64 7835}
!475 = !{i64 7840}
!476 = !{i64 7848}
!477 = !{i64 7864}
