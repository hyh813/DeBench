source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_6040 = global i64 0
@global_var_3020 = local_unnamed_addr constant i64 4611686018427387904
@global_var_3018 = local_unnamed_addr constant i64 4591870180066957722
@global_var_3172 = constant [29 x i8] c"DT-L1-01 (process_char): %c\0A\00"
@global_var_318f = constant [30 x i8] c"DT-L1-02 (process_short): %d\0A\00"
@global_var_31ad = constant [28 x i8] c"DT-L1-03 (process_int): %d\0A\00"
@global_var_31c9 = constant [30 x i8] c"DT-L1-04 (process_long): %ld\0A\00"
@global_var_31e7 = constant [29 x i8] c"DT-L1-05 (process_ll): %lld\0A\00"
@global_var_3204 = constant [32 x i8] c"DT-L1-06 (process_float): %.2f\0A\00"
@global_var_3028 = local_unnamed_addr constant i64 4616189618054758400
@global_var_3224 = constant [33 x i8] c"DT-L1-07 (process_double): %.2f\0A\00"
@global_var_3245 = constant [30 x i8] c"DT-L1-08 (process_ld): %.2Lf\0A\00"
@global_var_3263 = constant [29 x i8] c"DT-L1-09 (process_bool): %d\0A\00"
@global_var_3280 = constant [28 x i8] c"DT-L1-10 (const_param): %d\0A\00"
@global_var_329c = constant [32 x i8] c"DT-L1-11 (volatile_access): %d\0A\00"
@global_var_570 = local_unnamed_addr global i64 1125900017373588
@global_var_3058 = local_unnamed_addr constant i64 17179869187
@global_var_3060 = local_unnamed_addr constant i64 42949672965
@global_var_32d8 = constant [32 x i8] c"ARR-L1-01 (array_1d_stack): %d\0A\00"
@global_var_32f8 = local_unnamed_addr constant [6 x i8] c"hello\00"
@global_var_32fc = local_unnamed_addr constant i64 3552264037679038575
@global_var_32fe = constant [30 x i8] c"ARR-L1-02 (array_string): %d\0A\00"
@global_var_331c = constant [32 x i8] c"ARR-L1-03 (array_2d_stack): %d\0A\00"
@global_var_333c = constant [26 x i8] c"ARR-L1-04 (array_3d): %d\0A\00"
@global_var_306c = local_unnamed_addr constant i64 4294967326
@global_var_3356 = constant [27 x i8] c"ARR-L2-01 (array_vla): %d\0A\00"
@global_var_3371 = constant [31 x i8] c"ARR-L2-02 (array_pointer): %d\0A\00"
@global_var_3390 = constant [31 x i8] c"ARR-L2-03 (pointer_array): %d\0A\00"
@global_var_33af = constant [37 x i8] c"ARR-L2-04 (array_complex_index): %d\0A\00"
@global_var_33d4 = constant [5 x i8] c"test\00"
@global_var_5dd0 = local_unnamed_addr global [5 x i8]* @global_var_33d4
@global_var_5dd8 = local_unnamed_addr global i64 0
@global_var_33f5 = constant [28 x i8] c"PTR-L2-01 (ptr_single): %d\0A\00"
@global_var_3411 = constant [28 x i8] c"PTR-L2-02 (ptr_double): %d\0A\00"
@global_var_342d = constant [28 x i8] c"PTR-L2-03 (ptr_triple): %d\0A\00"
@global_var_3078 = local_unnamed_addr constant i64 17179869187
@global_var_3080 = local_unnamed_addr constant i64 5
@global_var_3449 = constant [31 x i8] c"PTR-L2-04 (ptr_increment): %d\0A\00"
@global_var_3098 = local_unnamed_addr constant i64 171798691870
@global_var_30a0 = local_unnamed_addr constant i64 50
@global_var_3468 = constant [28 x i8] c"PTR-L2-05 (ptr_offset): %d\0A\00"
@global_var_30b8 = local_unnamed_addr constant i64 128849018900
@global_var_3484 = constant [26 x i8] c"PTR-L2-06 (ptr_diff): %d\0A\00"
@global_var_349e = constant [26 x i8] c"PTR-L2-07 (ptr_void): %d\0A\00"
@global_var_34b8 = constant [27 x i8] c"PTR-L2-08 (ptr_const): %d\0A\00"
@global_var_34d3 = constant [31 x i8] c"PTR-L2-09 (ptr_const_ptr): %d\0A\00"
@global_var_34f2 = constant [33 x i8] c"PTR-L2-10 (ptr_func_simple): %d\0A\00"
@global_var_3513 = constant [34 x i8] c"PTR-L2-11 (ptr_func_complex): %d\0A\00"
@global_var_3535 = constant [28 x i8] c"PTR-L2-12 (ptr_cast): 0x%x\0A\00"
@global_var_3551 = constant [34 x i8] c"PTR-L2-13 (opaque_handle_op): %d\0A\00"
@global_var_30c4 = local_unnamed_addr constant i64 8589934593
@global_var_30cc = local_unnamed_addr constant i64 4294967299
@global_var_358f = constant [31 x i8] c"CMP-L2-01 (struct_simple): %d\0A\00"
@global_var_30d0 = local_unnamed_addr constant i64 4294967297
@global_var_30d8 = local_unnamed_addr constant i64 8589934593
@global_var_30e0 = local_unnamed_addr constant i64 8589934594
@global_var_35ae = constant [30 x i8] c"CMP-L2-02 (struct_array): %d\0A\00"
@global_var_30e8 = local_unnamed_addr constant i64 42949672965
@global_var_30f0 = local_unnamed_addr constant i64 429496729600
@global_var_30f8 = local_unnamed_addr constant i64 4294967496
@global_var_35cc = constant [31 x i8] c"CMP-L2-03 (struct_nested): %d\0A\00"
@global_var_30fc = constant i64 8589934593
@global_var_35eb = constant [29 x i8] c"CMP-L2-04 (struct_deep): %d\0A\00"
@global_var_3760 = local_unnamed_addr constant i64 20
@global_var_3768 = local_unnamed_addr constant i64 0
@global_var_3608 = constant [33 x i8] c"CMP-L2-05 (struct_with_ptr): %d\0A\00"
@global_var_3030 = local_unnamed_addr constant i64 6429
@global_var_191d = constant i64 -127079857426268055
@global_var_3629 = constant [34 x i8] c"CMP-L2-06 (struct_bitfields): %d\0A\00"
@global_var_364b = constant [28 x i8] c"CMP-L2-07 (union_type): %d\0A\00"
@global_var_3134 = local_unnamed_addr constant i64 429496729630
@global_var_3667 = constant [29 x i8] c"CMP-L2-08 (union_array): %d\0A\00"
@global_var_3684 = constant [27 x i8] c"CMP-L2-09 (enum_type): %d\0A\00"
@global_var_369f = constant [29 x i8] c"CMP-L2-10 (enum_switch): %d\0A\00"
@global_var_5de0 = local_unnamed_addr global i64 10
@global_var_5de8 = local_unnamed_addr global i64 4544
@global_var_36bc = constant [33 x i8] c"CMP-L2-11 (struct_func_ptr): %d\0A\00"
@global_var_36dd = constant [29 x i8] c"CMP-L2-12 (linked_list): %d\0A\00"
@global_var_36fa = constant [36 x i8] c"CMP-L2-13 (doubly_linked_list): %d\0A\00"
@global_var_3138 = local_unnamed_addr constant i64 100
@global_var_3140 = local_unnamed_addr constant i64 0
@global_var_3148 = local_unnamed_addr constant i64 0
@global_var_371e = constant [29 x i8] c"CMP-L2-14 (binary_tree): %d\0A\00"
@global_var_3770 = local_unnamed_addr constant i64 1
@global_var_3778 = local_unnamed_addr constant i64 0
@global_var_373b = constant [32 x i8] c"CMP-L2-15 (graph_traverse): %d\0A\00"
@0 = external global i32
@global_var_3004 = local_unnamed_addr constant i32 1069547520
@global_var_3008 = local_unnamed_addr constant i32 1056964608
@1 = internal constant [34 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\95\B0\E6\8D\AE\E7\B1\BB\E5\9E\8B ===\0A\00"
@global_var_3150 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @1, i64 0, i64 0)
@global_var_3010 = local_unnamed_addr constant i32 1073741824
@global_var_300c = local_unnamed_addr constant float 3.000000e+00
@2 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\95\B0\E7\BB\84\E7\B1\BB\E5\9E\8B ===\0A\00"
@global_var_32bc = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @2, i64 0, i64 0)
@global_var_3050 = local_unnamed_addr constant i32 1
@global_var_3064 = local_unnamed_addr constant i32 10
@3 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\8C\87\E9\92\88\E7\B1\BB\E5\9E\8B ===\0A\00"
@global_var_33d9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@global_var_3070 = local_unnamed_addr constant i32 1
@global_var_3090 = local_unnamed_addr constant i32 10
@global_var_30b0 = local_unnamed_addr constant i32 0
@global_var_30c0 = local_unnamed_addr constant i32* inttoptr (i64 4294967336 to i32*)
@global_var_3040 = constant i32 -3092
@4 = internal constant [28 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A4\8D\E5\90\88\E7\B1\BB\E5\9E\8B ===\0A\00"
@global_var_3573 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@global_var_3014 = local_unnamed_addr constant i32 305419896
@global_var_312c = local_unnamed_addr constant i32 10

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24544 to i64*), align 32, !insn.addr !1
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

define i32 @function_1030(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i64* @function_1040(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !7
  ret i64* %0, !insn.addr !7
}

define i64* @function_1050(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !8
  ret i64* %0, !insn.addr !8
}

define void @function_1060(i64* %d) local_unnamed_addr {
dec_label_pc_1060:
  call void @__cxa_finalize(i64* %d), !insn.addr !9
  ret void, !insn.addr !9
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1070:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !10
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !10
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !10
  %3 = call i32 @__libc_start_main(i64 10800, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !10
  %4 = call i64 @__asm_hlt(), !insn.addr !11
  unreachable, !insn.addr !11
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10a0:
  ret i64 ptrtoint (i64* @global_var_6040 to i64), !insn.addr !12
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_10d0:
  ret i64 0, !insn.addr !13
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6040 to i8*), align 8, !insn.addr !14
  %3 = icmp eq i8 %2, 0, !insn.addr !14
  %4 = icmp eq i1 %3, false, !insn.addr !15
  br i1 %4, label %dec_label_pc_1148, label %dec_label_pc_111d, !insn.addr !15

dec_label_pc_111d:                                ; preds = %dec_label_pc_1110
  %5 = load i64, i64* inttoptr (i64 24560 to i64*), align 16, !insn.addr !16
  %6 = icmp eq i64 %5, 0, !insn.addr !16
  br i1 %6, label %dec_label_pc_1137, label %dec_label_pc_112b, !insn.addr !17

dec_label_pc_112b:                                ; preds = %dec_label_pc_111d
  %7 = load i64, i64* inttoptr (i64 24632 to i64*), align 8, !insn.addr !18
  %8 = inttoptr i64 %7 to i64*, !insn.addr !19
  call void @__cxa_finalize(i64* %8), !insn.addr !19
  br label %dec_label_pc_1137, !insn.addr !19

dec_label_pc_1137:                                ; preds = %dec_label_pc_112b, %dec_label_pc_111d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !20
  store i8 1, i8* bitcast (i64* @global_var_6040 to i8*), align 8, !insn.addr !21
  ret i64 %9, !insn.addr !22

dec_label_pc_1148:                                ; preds = %dec_label_pc_1110
  ret i64 %1, !insn.addr !23
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i64 @register_tm_clones(), !insn.addr !24
  ret i64 %0, !insn.addr !24
}

define i8 @process_char(i8 %c) local_unnamed_addr {
dec_label_pc_1160:
  %c.off = add i8 %c, -65
  %0 = icmp ugt i8 %c.off, 25
  %1 = add i8 %c, 32
  %storemerge = select i1 %0, i8 %c, i8 %1
  ret i8 %storemerge, !insn.addr !25

; uselistorder directives
  uselistorder i8 %c, { 1, 2, 0 }
}

define i16 @process_short(i16 %a, i16 %b) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = add i16 %b, %a, !insn.addr !26
  ret i16 %0, !insn.addr !27
}

define i32 @process_int(i32 %x) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = mul i32 %x, 2, !insn.addr !28
  %1 = or i32 %0, 1, !insn.addr !29
  ret i32 %1, !insn.addr !30
}

define i64 @process_long(i64 %x) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = mul i64 %x, 2, !insn.addr !31
  ret i64 %0, !insn.addr !32
}

define i64 @process_ll(i64 %x) local_unnamed_addr {
dec_label_pc_1200:
  %0 = mul i64 %x, %x, !insn.addr !33
  ret i64 %0, !insn.addr !34
}

define float @process_float(float %f) local_unnamed_addr {
dec_label_pc_1220:
  %0 = bitcast float %f to i32
  %1 = sext i32 %0 to i128
  %2 = call i64 @__asm_movss(i128 %1), !insn.addr !35
  %3 = trunc i64 %2 to i32, !insn.addr !35
  %4 = call i128 @__asm_movss.1(i32 %3), !insn.addr !36
  %5 = call i128 @__asm_movss.1(i32 1069547520), !insn.addr !37
  %6 = call i128 @__asm_mulss(i128 %4, i128 %5), !insn.addr !38
  %7 = call i128 @__asm_movss.1(i32 1056964608), !insn.addr !39
  %8 = call i128 @__asm_addss(i128 %6, i128 %7), !insn.addr !40
  %9 = trunc i128 %8 to i32, !insn.addr !41
  %10 = bitcast i32 %9 to float, !insn.addr !41
  ret float %10, !insn.addr !41
}

define double @process_double(double %d) local_unnamed_addr {
dec_label_pc_1250:
  %0 = fptrunc double %d to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = call i64 @__asm_movsd(i128 %2), !insn.addr !42
  %4 = call i128 @__asm_movsd.2(i64 %3), !insn.addr !43
  %5 = call i128 @__asm_movsd.2(i64 4611686018427387904), !insn.addr !44
  %6 = call i128 @__asm_divsd(i128 %4, i128 %5), !insn.addr !45
  %7 = call i128 @__asm_movsd.2(i64 4591870180066957722), !insn.addr !46
  %8 = call i128 @__asm_addsd(i128 %6, i128 %7), !insn.addr !47
  %9 = trunc i128 %8 to i64, !insn.addr !48
  %10 = bitcast i64 %9 to double, !insn.addr !48
  ret double %10, !insn.addr !48
}

define fp128 @process_ld(fp128 %d) local_unnamed_addr {
dec_label_pc_1280:
  ret fp128 %d, !insn.addr !49
}

define i1 @process_bool(i32 %x) local_unnamed_addr {
dec_label_pc_12a0:
  %stack_var_-13.0.reg2mem = alloca i1, !insn.addr !50
  %0 = icmp slt i32 %x, 1, !insn.addr !51
  store i1 false, i1* %stack_var_-13.0.reg2mem, !insn.addr !51
  br i1 %0, label %dec_label_pc_12ca, label %dec_label_pc_12b6, !insn.addr !51

dec_label_pc_12b6:                                ; preds = %dec_label_pc_12a0
  %1 = zext i32 %x to i64, !insn.addr !52
  %2 = mul i64 %1, 4294967296, !insn.addr !52
  %3 = or i64 %2, %1, !insn.addr !52
  %4 = srem i64 %3, 2, !insn.addr !52
  %5 = trunc i64 %4 to i32, !insn.addr !52
  %6 = icmp eq i32 %5, 0, !insn.addr !53
  store i1 %6, i1* %stack_var_-13.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_12ca, !insn.addr !54

dec_label_pc_12ca:                                ; preds = %dec_label_pc_12b6, %dec_label_pc_12a0
  %stack_var_-13.0.reload = load i1, i1* %stack_var_-13.0.reg2mem
  ret i1 %stack_var_-13.0.reload, !insn.addr !55

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 2, { 1, 0 }
}

define i32 @const_param(i32* %p) local_unnamed_addr {
dec_label_pc_12e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 10, !insn.addr !56
  ret i32 %3, !insn.addr !57
}

define i32 @volatile_access(i32* %p) local_unnamed_addr {
dec_label_pc_1300:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !58
  ret i32 %3, !insn.addr !59
}

define void @test_data_types_l1() local_unnamed_addr {
dec_label_pc_1330:
  %vol_value_-16 = alloca i32, align 4
  %value_-12 = alloca i32, align 4
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3150 to i8*)), !insn.addr !60
  %1 = call i8 @process_char(i8 65), !insn.addr !61
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3172, i64 0, i64 0), i8 %1), !insn.addr !62
  %3 = call i8 @process_char(i8 98), !insn.addr !63
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3172, i64 0, i64 0), i8 %3), !insn.addr !64
  %5 = call i16 @process_short(i16 100, i16 200), !insn.addr !65
  %6 = sext i16 %5 to i64, !insn.addr !66
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_318f, i64 0, i64 0), i64 %6), !insn.addr !67
  %8 = call i32 @process_int(i32 5), !insn.addr !68
  %9 = zext i32 %8 to i64, !insn.addr !69
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_31ad, i64 0, i64 0), i64 %9), !insn.addr !70
  %11 = call i64 @process_long(i64 100), !insn.addr !71
  %12 = trunc i64 %11 to i32, !insn.addr !72
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31c9, i64 0, i64 0), i32 %12), !insn.addr !72
  %14 = call i64 @process_ll(i64 100), !insn.addr !73
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31e7, i64 0, i64 0), i64 %14), !insn.addr !74
  %16 = call i128 @__asm_movss.1(i32 1073741824), !insn.addr !75
  %17 = trunc i128 %16 to i32, !insn.addr !76
  %18 = bitcast i32 %17 to float, !insn.addr !76
  %19 = call float @process_float(float %18), !insn.addr !76
  %20 = bitcast float %19 to i32, !insn.addr !76
  %21 = sext i32 %20 to i128, !insn.addr !76
  %22 = call i128 @__asm_cvtss2sd(i128 %21), !insn.addr !77
  %23 = trunc i128 %22 to i64, !insn.addr !78
  %24 = bitcast i64 %23 to double, !insn.addr !78
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3204, i64 0, i64 0), double %24), !insn.addr !78
  %26 = call i128 @__asm_movsd.2(i64 4616189618054758400), !insn.addr !79
  %27 = trunc i128 %26 to i64, !insn.addr !80
  %28 = bitcast i64 %27 to double, !insn.addr !80
  %29 = call double @process_double(double %28), !insn.addr !80
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3224, i64 0, i64 0), double %29), !insn.addr !81
  %31 = fpext double %29 to fp128, !insn.addr !82
  %32 = call fp128 @process_ld(fp128 %31), !insn.addr !82
  %33 = fptrunc fp128 %32 to x86_fp80, !insn.addr !83
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3245, i64 0, i64 0), x86_fp80 %33), !insn.addr !83
  %35 = call i1 @process_bool(i32 4), !insn.addr !84
  %36 = zext i1 %35 to i64, !insn.addr !85
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3263, i64 0, i64 0), i64 %36), !insn.addr !86
  %38 = call i1 @process_bool(i32 3), !insn.addr !87
  %39 = zext i1 %38 to i64, !insn.addr !88
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3263, i64 0, i64 0), i64 %39), !insn.addr !89
  %41 = call i1 @process_bool(i32 -2), !insn.addr !90
  %42 = zext i1 %41 to i64, !insn.addr !91
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3263, i64 0, i64 0), i64 %42), !insn.addr !92
  store i32 5, i32* %value_-12, align 4, !insn.addr !93
  %44 = call i32 @const_param(i32* nonnull %value_-12), !insn.addr !94
  %45 = zext i32 %44 to i64, !insn.addr !95
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3280, i64 0, i64 0), i64 %45), !insn.addr !96
  store i32 10, i32* %vol_value_-16, align 4, !insn.addr !97
  %47 = call i32 @volatile_access(i32* nonnull %vol_value_-16), !insn.addr !98
  %48 = zext i32 %47 to i64, !insn.addr !99
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_329c, i64 0, i64 0), i64 %48), !insn.addr !100
  ret void, !insn.addr !101

; uselistorder directives
  uselistorder i1 (i32)* @process_bool, { 2, 1, 0 }
  uselistorder i8 (i8)* @process_char, { 1, 0 }
}

define i32 @array_1d_stack(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_14f0:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !102
  %sum_-24.01.reg2mem = alloca i32, !insn.addr !102
  %indvars.iv.reg2mem = alloca i64, !insn.addr !102
  %0 = icmp sgt i32 %n, 0, !insn.addr !103
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !103
  br i1 %0, label %dec_label_pc_1515.lr.ph, label %dec_label_pc_1534, !insn.addr !103

dec_label_pc_1515.lr.ph:                          ; preds = %dec_label_pc_14f0
  %1 = ptrtoint i32* %arr to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !104
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-24.01.reg2mem
  br label %dec_label_pc_1515

dec_label_pc_1515:                                ; preds = %dec_label_pc_1515, %dec_label_pc_1515.lr.ph
  %sum_-24.01.reload = load i32, i32* %sum_-24.01.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 4, !insn.addr !105
  %4 = add nsw i64 %3, %2, !insn.addr !105
  %5 = inttoptr i64 %4 to i32*, !insn.addr !105
  %6 = load i32, i32* %5, align 4, !insn.addr !105
  %7 = add i32 %6, %sum_-24.01.reload, !insn.addr !106
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !103
  store i32 %7, i32* %sum_-24.01.reg2mem, !insn.addr !103
  store i32 %7, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !103
  br i1 %exitcond, label %dec_label_pc_1534, label %dec_label_pc_1515, !insn.addr !103

dec_label_pc_1534:                                ; preds = %dec_label_pc_1515, %dec_label_pc_14f0
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !107

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.01.reg2mem, { 1, 0, 2 }
}

define i32 @array_string(i8* %str) local_unnamed_addr {
dec_label_pc_1540:
  %storemerge.reg2mem = alloca i32, !insn.addr !108
  %0 = ptrtoint i8* %str to i64, !insn.addr !109
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !110
  br label %dec_label_pc_154f, !insn.addr !110

dec_label_pc_154f:                                ; preds = %dec_label_pc_154f, %dec_label_pc_1540
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %1 = sext i32 %storemerge.reload to i64, !insn.addr !111
  %2 = add i64 %1, %0, !insn.addr !112
  %3 = inttoptr i64 %2 to i8*, !insn.addr !112
  %4 = load i8, i8* %3, align 1, !insn.addr !112
  %5 = icmp eq i8 %4, 0, !insn.addr !113
  %6 = add i32 %storemerge.reload, 1, !insn.addr !114
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !115
  br i1 %5, label %dec_label_pc_1572, label %dec_label_pc_154f, !insn.addr !115

dec_label_pc_1572:                                ; preds = %dec_label_pc_154f
  ret i32 %storemerge.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 2, 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
}

define i32 @array_2d_stack([1 x i32]* %arr) local_unnamed_addr {
dec_label_pc_1580:
  %sum_-20.05.reg2mem = alloca i32, !insn.addr !117
  %indvars.iv.reg2mem = alloca i64, !insn.addr !117
  %0 = ptrtoint [1 x i32]* %arr to i64, !insn.addr !118
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-20.05.reg2mem
  br label %dec_label_pc_15a0

dec_label_pc_15a0:                                ; preds = %dec_label_pc_1580, %dec_label_pc_15a0
  %sum_-20.05.reload = load i32, i32* %sum_-20.05.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %reass.mul = mul nuw nsw i64 %indvars.iv.reload, 44
  %1 = add i64 %reass.mul, %0, !insn.addr !119
  %2 = inttoptr i64 %1 to i32*, !insn.addr !119
  %3 = load i32, i32* %2, align 4, !insn.addr !119
  %4 = add i32 %3, %sum_-20.05.reload, !insn.addr !120
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !121
  store i32 %4, i32* %sum_-20.05.reg2mem, !insn.addr !121
  br i1 %exitcond, label %dec_label_pc_15ca, label %dec_label_pc_15a0, !insn.addr !121

dec_label_pc_15ca:                                ; preds = %dec_label_pc_15a0
  ret i32 %4, !insn.addr !122

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.05.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_15a0, { 1, 0 }
}

define i32 @array_3d([1 x [1 x i32]]* %arr) local_unnamed_addr {
dec_label_pc_15d0:
  %sum_-20.210.reg2mem = alloca i32, !insn.addr !123
  %indvars.iv.reg2mem = alloca i64, !insn.addr !123
  %sum_-20.112.reg2mem = alloca i32, !insn.addr !123
  %indvars.iv18.reg2mem = alloca i64, !insn.addr !123
  %sum_-20.015.reg2mem = alloca i32, !insn.addr !123
  %indvars.iv21.reg2mem = alloca i64, !insn.addr !123
  %0 = ptrtoint [1 x [1 x i32]]* %arr to i64, !insn.addr !124
  store i64 0, i64* %indvars.iv21.reg2mem
  store i32 0, i32* %sum_-20.015.reg2mem
  br label %dec_label_pc_15f7.preheader

dec_label_pc_15f7.preheader:                      ; preds = %dec_label_pc_15d0, %dec_label_pc_165f
  %sum_-20.015.reload = load i32, i32* %sum_-20.015.reg2mem
  %indvars.iv21.reload = load i64, i64* %indvars.iv21.reg2mem
  %1 = mul nuw nsw i64 %indvars.iv21.reload, 100, !insn.addr !125
  %2 = add i64 %1, %0, !insn.addr !126
  store i64 0, i64* %indvars.iv18.reg2mem
  store i32 %sum_-20.015.reload, i32* %sum_-20.112.reg2mem
  br label %dec_label_pc_1608.preheader

dec_label_pc_1608.preheader:                      ; preds = %dec_label_pc_15f7.preheader, %dec_label_pc_164c
  %sum_-20.112.reload = load i32, i32* %sum_-20.112.reg2mem
  %indvars.iv18.reload = load i64, i64* %indvars.iv18.reg2mem
  %3 = mul nuw nsw i64 %indvars.iv18.reload, 20, !insn.addr !127
  %4 = add i64 %2, %3, !insn.addr !128
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 %sum_-20.112.reload, i32* %sum_-20.210.reg2mem
  br label %dec_label_pc_1612

dec_label_pc_1612:                                ; preds = %dec_label_pc_1608.preheader, %dec_label_pc_1612
  %sum_-20.210.reload = load i32, i32* %sum_-20.210.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 4, !insn.addr !129
  %6 = add i64 %4, %5, !insn.addr !129
  %7 = inttoptr i64 %6 to i32*, !insn.addr !129
  %8 = load i32, i32* %7, align 4, !insn.addr !129
  %9 = add i32 %8, %sum_-20.210.reload, !insn.addr !130
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 5
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !131
  store i32 %9, i32* %sum_-20.210.reg2mem, !insn.addr !131
  br i1 %exitcond, label %dec_label_pc_164c, label %dec_label_pc_1612, !insn.addr !131

dec_label_pc_164c:                                ; preds = %dec_label_pc_1612
  %indvars.iv.next19 = add nuw nsw i64 %indvars.iv18.reload, 1
  %exitcond20 = icmp eq i64 %indvars.iv.next19, 5
  store i64 %indvars.iv.next19, i64* %indvars.iv18.reg2mem, !insn.addr !132
  store i32 %9, i32* %sum_-20.112.reg2mem, !insn.addr !132
  br i1 %exitcond20, label %dec_label_pc_165f, label %dec_label_pc_1608.preheader, !insn.addr !132

dec_label_pc_165f:                                ; preds = %dec_label_pc_164c
  %indvars.iv.next22 = add nuw nsw i64 %indvars.iv21.reload, 1
  %exitcond23 = icmp eq i64 %indvars.iv.next22, 5
  store i64 %indvars.iv.next22, i64* %indvars.iv21.reg2mem, !insn.addr !133
  store i32 %9, i32* %sum_-20.015.reg2mem, !insn.addr !133
  br i1 %exitcond23, label %dec_label_pc_166d, label %dec_label_pc_15f7.preheader, !insn.addr !133

dec_label_pc_166d:                                ; preds = %dec_label_pc_165f
  ret i32 %9, !insn.addr !134

; uselistorder directives
  uselistorder i32 %9, { 3, 2, 1, 0 }
  uselistorder i64* %indvars.iv21.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.015.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv18.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.112.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.210.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1612, { 1, 0 }
  uselistorder label %dec_label_pc_1608.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_15f7.preheader, { 1, 0 }
}

define i32 @array_vla(i32 %n, i32* %arr) local_unnamed_addr {
dec_label_pc_1680:
  %sum_-28.0.lcssa.reg2mem = alloca i32, !insn.addr !135
  %sum_-28.02.reg2mem = alloca i32, !insn.addr !135
  %indvars.iv.reg2mem = alloca i64, !insn.addr !135
  %0 = icmp sgt i32 %n, 0, !insn.addr !136
  store i32 0, i32* %sum_-28.0.lcssa.reg2mem, !insn.addr !136
  br i1 %0, label %dec_label_pc_16a5.lr.ph, label %dec_label_pc_16c4, !insn.addr !136

dec_label_pc_16a5.lr.ph:                          ; preds = %dec_label_pc_1680
  %1 = ptrtoint i32* %arr to i64, !insn.addr !137
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-28.02.reg2mem
  br label %dec_label_pc_16a5

dec_label_pc_16a5:                                ; preds = %dec_label_pc_16a5, %dec_label_pc_16a5.lr.ph
  %sum_-28.02.reload = load i32, i32* %sum_-28.02.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %2 = mul i64 %indvars.iv.reload, 4, !insn.addr !138
  %3 = add i64 %2, %1, !insn.addr !138
  %4 = inttoptr i64 %3 to i32*, !insn.addr !138
  %5 = load i32, i32* %4, align 4, !insn.addr !138
  %6 = add i32 %5, %sum_-28.02.reload, !insn.addr !139
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !136
  store i32 %6, i32* %sum_-28.02.reg2mem, !insn.addr !136
  store i32 %6, i32* %sum_-28.0.lcssa.reg2mem, !insn.addr !136
  br i1 %exitcond, label %dec_label_pc_16c4, label %dec_label_pc_16a5, !insn.addr !136

dec_label_pc_16c4:                                ; preds = %dec_label_pc_16a5, %dec_label_pc_1680
  %sum_-28.0.lcssa.reload = load i32, i32* %sum_-28.0.lcssa.reg2mem
  ret i32 %sum_-28.0.lcssa.reload, !insn.addr !140

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-28.02.reg2mem, { 1, 0, 2 }
}

define i32 @array_pointer([1 x i32]* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_16d0:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !141
  %sum_-24.04.reg2mem = alloca i32, !insn.addr !141
  %indvars.iv.reg2mem = alloca i64, !insn.addr !141
  %0 = icmp sgt i32 %n, 0, !insn.addr !142
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !142
  br i1 %0, label %dec_label_pc_16f5.lr.ph, label %dec_label_pc_171a, !insn.addr !142

dec_label_pc_16f5.lr.ph:                          ; preds = %dec_label_pc_16d0
  %1 = ptrtoint [1 x i32]* %arr to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !143
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-24.04.reg2mem
  br label %dec_label_pc_16f5

dec_label_pc_16f5:                                ; preds = %dec_label_pc_16f5, %dec_label_pc_16f5.lr.ph
  %sum_-24.04.reload = load i32, i32* %sum_-24.04.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul nuw nsw i64 %indvars.iv.reload, 40, !insn.addr !144
  %4 = add nsw i64 %3, %2, !insn.addr !145
  %5 = inttoptr i64 %4 to i32*, !insn.addr !146
  %6 = load i32, i32* %5, align 4, !insn.addr !146
  %7 = add i32 %6, %sum_-24.04.reload, !insn.addr !147
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !142
  store i32 %7, i32* %sum_-24.04.reg2mem, !insn.addr !142
  store i32 %7, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !142
  br i1 %exitcond, label %dec_label_pc_171a, label %dec_label_pc_16f5, !insn.addr !142

dec_label_pc_171a:                                ; preds = %dec_label_pc_16f5, %dec_label_pc_16d0
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !148

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.04.reg2mem, { 1, 0, 2 }
}

define i32 @pointer_array(i32** %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1720:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !149
  %sum_-24.1.reg2mem = alloca i32, !insn.addr !149
  %sum_-24.02.reg2mem = alloca i32, !insn.addr !149
  %indvars.iv.reg2mem = alloca i64, !insn.addr !149
  %0 = icmp sgt i32 %n, 0, !insn.addr !150
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !150
  br i1 %0, label %dec_label_pc_176d.lr.ph, label %dec_label_pc_17a7, !insn.addr !150

dec_label_pc_176d.lr.ph:                          ; preds = %dec_label_pc_1720
  %1 = icmp slt i32 %n, 10, !insn.addr !151
  %storemerge1 = select i1 %1, i32 %n, i32 10
  %2 = ptrtoint i32** %arr to i64
  %sext = mul i64 %2, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !152
  %4 = sext i32 %storemerge1 to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-24.02.reg2mem
  br label %dec_label_pc_176d

dec_label_pc_176d:                                ; preds = %dec_label_pc_176d.lr.ph, %dec_label_pc_1799
  %sum_-24.02.reload = load i32, i32* %sum_-24.02.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = mul i64 %indvars.iv.reload, 8, !insn.addr !153
  %6 = add nsw i64 %5, %3, !insn.addr !153
  %7 = inttoptr i64 %6 to i64*, !insn.addr !153
  %8 = load i64, i64* %7, align 8, !insn.addr !153
  %9 = icmp eq i64 %8, 0, !insn.addr !153
  store i32 %sum_-24.02.reload, i32* %sum_-24.1.reg2mem, !insn.addr !154
  br i1 %9, label %dec_label_pc_1799, label %dec_label_pc_1780, !insn.addr !154

dec_label_pc_1780:                                ; preds = %dec_label_pc_176d
  %10 = inttoptr i64 %8 to i32*, !insn.addr !155
  %11 = load i32, i32* %10, align 4, !insn.addr !155
  %12 = add i32 %11, %sum_-24.02.reload, !insn.addr !156
  store i32 %12, i32* %sum_-24.1.reg2mem, !insn.addr !157
  br label %dec_label_pc_1799, !insn.addr !157

dec_label_pc_1799:                                ; preds = %dec_label_pc_176d, %dec_label_pc_1780
  %sum_-24.1.reload = load i32, i32* %sum_-24.1.reg2mem
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %13 = icmp slt i64 %indvars.iv.next, %4, !insn.addr !150
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !150
  store i32 %sum_-24.1.reload, i32* %sum_-24.02.reg2mem, !insn.addr !150
  store i32 %sum_-24.1.reload, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !150
  br i1 %13, label %dec_label_pc_176d, label %dec_label_pc_17a7, !insn.addr !150

dec_label_pc_17a7:                                ; preds = %dec_label_pc_1799, %dec_label_pc_1720
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !158

; uselistorder directives
  uselistorder i32 %sum_-24.02.reload, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.02.reg2mem, { 1, 0, 2 }
  uselistorder i32 %n, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1799, { 1, 0 }
  uselistorder label %dec_label_pc_176d, { 1, 0 }
}

define i32 @array_complex_index(i32* %arr, i32 %w, i32 %h, i32 %x, i32 %y) local_unnamed_addr {
dec_label_pc_17b0:
  %storemerge.reg2mem = alloca i32, !insn.addr !159
  %0 = icmp slt i32 %x, 0, !insn.addr !160
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !161
  br i1 %0, label %dec_label_pc_1814, label %dec_label_pc_17cf, !insn.addr !161

dec_label_pc_17cf:                                ; preds = %dec_label_pc_17b0
  %1 = icmp slt i32 %x, %w, !insn.addr !162
  %2 = icmp sgt i32 %y, -1, !insn.addr !163
  %or.cond.not = icmp eq i1 %1, %2
  %3 = icmp slt i32 %y, %h, !insn.addr !164
  %or.cond3 = icmp eq i1 %3, %or.cond.not
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !162
  br i1 %or.cond3, label %dec_label_pc_17fd, label %dec_label_pc_1814, !insn.addr !162

dec_label_pc_17fd:                                ; preds = %dec_label_pc_17cf
  %4 = ptrtoint i32* %arr to i64, !insn.addr !165
  %5 = mul i32 %y, %w, !insn.addr !166
  %6 = add i32 %5, %x, !insn.addr !167
  %7 = sext i32 %6 to i64, !insn.addr !168
  %8 = mul i64 %7, 4, !insn.addr !169
  %9 = add i64 %8, %4, !insn.addr !169
  %10 = inttoptr i64 %9 to i32*, !insn.addr !169
  %11 = load i32, i32* %10, align 4, !insn.addr !169
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !170
  br label %dec_label_pc_1814, !insn.addr !170

dec_label_pc_1814:                                ; preds = %dec_label_pc_17cf, %dec_label_pc_17b0, %dec_label_pc_17fd
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !171

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %y, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1814, { 2, 0, 1 }
}

define i32 @array_oob(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_1820:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !172
  %sum_-24.01.reg2mem = alloca i32, !insn.addr !172
  %storemerge2.reg2mem = alloca i32, !insn.addr !172
  %0 = icmp slt i32 %n, 0, !insn.addr !173
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !173
  br i1 %0, label %dec_label_pc_1864, label %dec_label_pc_1845.lr.ph, !insn.addr !173

dec_label_pc_1845.lr.ph:                          ; preds = %dec_label_pc_1820
  %1 = ptrtoint i32* %arr to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !174
  store i32 0, i32* %storemerge2.reg2mem
  store i32 0, i32* %sum_-24.01.reg2mem
  br label %dec_label_pc_1845

dec_label_pc_1845:                                ; preds = %dec_label_pc_1845.lr.ph, %dec_label_pc_1845
  %sum_-24.01.reload = load i32, i32* %sum_-24.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %3 = sext i32 %storemerge2.reload to i64, !insn.addr !175
  %4 = mul i64 %3, 4, !insn.addr !176
  %5 = add nsw i64 %4, %2, !insn.addr !176
  %6 = inttoptr i64 %5 to i32*, !insn.addr !176
  %7 = load i32, i32* %6, align 4, !insn.addr !176
  %8 = add i32 %7, %sum_-24.01.reload, !insn.addr !177
  %9 = add i32 %storemerge2.reload, 1, !insn.addr !178
  %10 = icmp sgt i32 %9, %n, !insn.addr !173
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !173
  store i32 %8, i32* %sum_-24.01.reg2mem, !insn.addr !173
  store i32 %8, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !173
  br i1 %10, label %dec_label_pc_1864, label %dec_label_pc_1845, !insn.addr !173

dec_label_pc_1864:                                ; preds = %dec_label_pc_1845, %dec_label_pc_1820
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !179

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.01.reg2mem, { 1, 0, 2 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_1845, { 1, 0 }
}

define void @test_array_types() local_unnamed_addr {
dec_label_pc_1870:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !180
  %stack_var_-1384.0.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv27.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv30.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv33.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv36.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv39.reg2mem = alloca i64, !insn.addr !180
  %indvars.iv42.reg2mem = alloca i64, !insn.addr !180
  %flat_-1368 = alloca [1 x i32], align 4
  %stack_var_-1256 = alloca i64, align 8
  %ptr_arr_-1288 = alloca [1 x i32*], align 8
  %c_-1208 = alloca i32, align 4
  %a_-1200 = alloca i32, align 4
  %arr2_-1192 = alloca [1 x [1 x i32]], align 4
  %vla_arr_-992 = alloca [1 x i32], align 4
  %cube_-968 = alloca [1 x [1 x [1 x i32]]], align 4
  %matrix_-456 = alloca [1 x [1 x i32]], align 4
  %str_-46 = alloca [1 x i8], align 1
  %arr1_-40 = alloca [1 x i32], align 4
  %stack_var_-8 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32bc to i8*)), !insn.addr !181
  store [1 x i32] [i32 1], [1 x i32]* %arr1_-40, align 4, !insn.addr !182
  %1 = getelementptr inbounds [1 x i32], [1 x i32]* %arr1_-40, i64 0, i64 0, !insn.addr !183
  %2 = call i32 @array_1d_stack(i32* nonnull %1, i32 5), !insn.addr !183
  %3 = zext i32 %2 to i64, !insn.addr !184
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_32d8, i64 0, i64 0), i64 %3), !insn.addr !185
  store [1 x i8] c"h", [1 x i8]* %str_-46, align 1, !insn.addr !186
  %5 = getelementptr inbounds [1 x i8], [1 x i8]* %str_-46, i64 0, i64 0, !insn.addr !187
  %6 = call i32 @array_string(i8* nonnull %5), !insn.addr !187
  %7 = zext i32 %6 to i64, !insn.addr !188
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32fe, i64 0, i64 0), i64 %7), !insn.addr !189
  %9 = ptrtoint [1 x [1 x i32]]* %matrix_-456 to i64, !insn.addr !190
  store i64 0, i64* %indvars.iv42.reg2mem
  br label %dec_label_pc_1914.preheader

dec_label_pc_1914.preheader:                      ; preds = %dec_label_pc_1870, %dec_label_pc_198f
  %indvars.iv42.reload = load i64, i64* %indvars.iv42.reg2mem
  %10 = mul nuw nsw i64 %indvars.iv42.reload, 40, !insn.addr !191
  %11 = add i64 %10, %9, !insn.addr !192
  %12 = trunc i64 %indvars.iv42.reload to i32
  store i64 0, i64* %indvars.iv39.reg2mem
  br label %dec_label_pc_1921

dec_label_pc_1921:                                ; preds = %dec_label_pc_1914.preheader, %dec_label_pc_1921
  %indvars.iv39.reload = load i64, i64* %indvars.iv39.reg2mem
  %13 = icmp eq i64 %indvars.iv39.reload, %indvars.iv42.reload, !insn.addr !193
  %14 = icmp eq i1 %13, false, !insn.addr !194
  %storemerge4 = select i1 %14, i32 0, i32 %12
  %15 = mul i64 %indvars.iv39.reload, 4, !insn.addr !195
  %16 = add i64 %11, %15, !insn.addr !195
  %17 = inttoptr i64 %16 to i32*, !insn.addr !195
  store i32 %storemerge4, i32* %17, align 4, !insn.addr !195
  %indvars.iv.next40 = add nuw nsw i64 %indvars.iv39.reload, 1
  %exitcond41 = icmp eq i64 %indvars.iv.next40, 10
  store i64 %indvars.iv.next40, i64* %indvars.iv39.reg2mem, !insn.addr !196
  br i1 %exitcond41, label %dec_label_pc_198f, label %dec_label_pc_1921, !insn.addr !196

dec_label_pc_198f:                                ; preds = %dec_label_pc_1921
  %indvars.iv.next43 = add nuw nsw i64 %indvars.iv42.reload, 1
  %exitcond44 = icmp eq i64 %indvars.iv.next43, 10
  store i64 %indvars.iv.next43, i64* %indvars.iv42.reg2mem, !insn.addr !197
  br i1 %exitcond44, label %dec_label_pc_19a3, label %dec_label_pc_1914.preheader, !insn.addr !197

dec_label_pc_19a3:                                ; preds = %dec_label_pc_198f
  %18 = getelementptr inbounds [1 x [1 x i32]], [1 x [1 x i32]]* %matrix_-456, i64 0, i64 0, !insn.addr !198
  %19 = call i32 @array_2d_stack([1 x i32]* nonnull %18), !insn.addr !198
  %20 = zext i32 %19 to i64, !insn.addr !199
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_331c, i64 0, i64 0), i64 %20), !insn.addr !200
  %22 = ptrtoint [1 x [1 x [1 x i32]]]* %cube_-968 to i64, !insn.addr !201
  store i64 0, i64* %indvars.iv36.reg2mem
  br label %dec_label_pc_19e0.preheader

dec_label_pc_19e0.preheader:                      ; preds = %dec_label_pc_19a3, %dec_label_pc_1a67
  %indvars.iv36.reload = load i64, i64* %indvars.iv36.reg2mem
  %23 = mul nuw nsw i64 %indvars.iv36.reload, 100, !insn.addr !202
  %24 = add i64 %23, %22, !insn.addr !203
  store i64 0, i64* %indvars.iv33.reg2mem
  br label %dec_label_pc_19f7.preheader

dec_label_pc_19f7.preheader:                      ; preds = %dec_label_pc_19e0.preheader, %dec_label_pc_1a4e
  %indvars.iv33.reload = load i64, i64* %indvars.iv33.reg2mem
  %25 = mul nuw nsw i64 %indvars.iv33.reload, 20, !insn.addr !204
  %26 = add i64 %24, %25, !insn.addr !205
  store i64 0, i64* %indvars.iv30.reg2mem
  br label %dec_label_pc_1a04

dec_label_pc_1a04:                                ; preds = %dec_label_pc_19f7.preheader, %dec_label_pc_1a04
  %indvars.iv30.reload = load i64, i64* %indvars.iv30.reg2mem
  %27 = mul i64 %indvars.iv30.reload, 4, !insn.addr !206
  %28 = add i64 %26, %27, !insn.addr !206
  %29 = inttoptr i64 %28 to i32*, !insn.addr !206
  store i32 1, i32* %29, align 4, !insn.addr !206
  %indvars.iv.next31 = add nuw nsw i64 %indvars.iv30.reload, 1
  %exitcond32 = icmp eq i64 %indvars.iv.next31, 5
  store i64 %indvars.iv.next31, i64* %indvars.iv30.reg2mem, !insn.addr !207
  br i1 %exitcond32, label %dec_label_pc_1a4e, label %dec_label_pc_1a04, !insn.addr !207

dec_label_pc_1a4e:                                ; preds = %dec_label_pc_1a04
  %indvars.iv.next34 = add nuw nsw i64 %indvars.iv33.reload, 1
  %exitcond35 = icmp eq i64 %indvars.iv.next34, 5
  store i64 %indvars.iv.next34, i64* %indvars.iv33.reg2mem, !insn.addr !208
  br i1 %exitcond35, label %dec_label_pc_1a67, label %dec_label_pc_19f7.preheader, !insn.addr !208

dec_label_pc_1a67:                                ; preds = %dec_label_pc_1a4e
  %indvars.iv.next37 = add nuw nsw i64 %indvars.iv36.reload, 1
  %exitcond38 = icmp eq i64 %indvars.iv.next37, 5
  store i64 %indvars.iv.next37, i64* %indvars.iv36.reg2mem, !insn.addr !209
  br i1 %exitcond38, label %dec_label_pc_1a7b, label %dec_label_pc_19e0.preheader, !insn.addr !209

dec_label_pc_1a7b:                                ; preds = %dec_label_pc_1a67
  %30 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !210
  %31 = getelementptr inbounds [1 x [1 x [1 x i32]]], [1 x [1 x [1 x i32]]]* %cube_-968, i64 0, i64 0, !insn.addr !211
  %32 = call i32 @array_3d([1 x [1 x i32]]* nonnull %31), !insn.addr !211
  %33 = zext i32 %32 to i64, !insn.addr !212
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_333c, i64 0, i64 0), i64 %33), !insn.addr !213
  store [1 x i32] [i32 10], [1 x i32]* %vla_arr_-992, align 4, !insn.addr !214
  %35 = getelementptr inbounds [1 x i32], [1 x i32]* %vla_arr_-992, i64 0, i64 0, !insn.addr !215
  %36 = call i32 @array_vla(i32 3, i32* nonnull %35), !insn.addr !215
  %37 = zext i32 %36 to i64, !insn.addr !216
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3356, i64 0, i64 0), i64 %37), !insn.addr !217
  %39 = ptrtoint [1 x [1 x i32]]* %arr2_-1192 to i64, !insn.addr !218
  store i64 0, i64* %indvars.iv27.reg2mem
  br label %dec_label_pc_1ae9

dec_label_pc_1ae9:                                ; preds = %dec_label_pc_1a7b, %dec_label_pc_1ae9
  %indvars.iv27.reload = load i64, i64* %indvars.iv27.reg2mem
  %40 = mul nuw nsw i64 %indvars.iv27.reload, 40, !insn.addr !219
  %41 = add i64 %40, %39, !insn.addr !220
  %42 = inttoptr i64 %41 to i32*, !insn.addr !221
  %43 = trunc i64 %indvars.iv27.reload to i32
  %44 = mul i32 %43, 10
  store i32 %44, i32* %42, align 4, !insn.addr !221
  %indvars.iv.next28 = add nuw nsw i64 %indvars.iv27.reload, 1
  %exitcond29 = icmp eq i64 %indvars.iv.next28, 5
  store i64 %indvars.iv.next28, i64* %indvars.iv27.reg2mem, !insn.addr !222
  br i1 %exitcond29, label %dec_label_pc_1b1b, label %dec_label_pc_1ae9, !insn.addr !222

dec_label_pc_1b1b:                                ; preds = %dec_label_pc_1ae9
  %45 = getelementptr inbounds [1 x [1 x i32]], [1 x [1 x i32]]* %arr2_-1192, i64 0, i64 0, !insn.addr !223
  %46 = call i32 @array_pointer([1 x i32]* nonnull %45, i32 5), !insn.addr !223
  %47 = zext i32 %46 to i64, !insn.addr !224
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3371, i64 0, i64 0), i64 %47), !insn.addr !225
  store i32 10, i32* %a_-1200, align 4, !insn.addr !226
  store i32 30, i32* %c_-1208, align 4, !insn.addr !227
  %49 = insertvalue [1 x i32*] undef, i32* %a_-1200, 0, !insn.addr !228
  store [1 x i32*] %49, [1 x i32*]* %ptr_arr_-1288, align 8, !insn.addr !228
  %50 = ptrtoint i32* %c_-1208 to i64, !insn.addr !229
  %51 = ptrtoint i64* %stack_var_-1256 to i64, !insn.addr !230
  store i64 %51, i64* %stack_var_-1384.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_1bbb, !insn.addr !230

dec_label_pc_1bbb:                                ; preds = %dec_label_pc_1bbb, %dec_label_pc_1b1b
  %stack_var_-1384.0.reload = load i64, i64* %stack_var_-1384.0.reg2mem
  %52 = inttoptr i64 %stack_var_-1384.0.reload to i64*, !insn.addr !231
  store i64 0, i64* %52, align 8, !insn.addr !231
  %53 = add i64 %stack_var_-1384.0.reload, 8, !insn.addr !232
  %54 = icmp eq i64 %53, %50, !insn.addr !233
  %55 = icmp eq i1 %54, false, !insn.addr !234
  store i64 %53, i64* %stack_var_-1384.0.reg2mem, !insn.addr !234
  br i1 %55, label %dec_label_pc_1bbb, label %dec_label_pc_1beb, !insn.addr !234

dec_label_pc_1beb:                                ; preds = %dec_label_pc_1bbb
  %56 = getelementptr inbounds [1 x i32*], [1 x i32*]* %ptr_arr_-1288, i64 0, i64 0, !insn.addr !235
  %57 = call i32 @pointer_array(i32** nonnull %56, i32 3), !insn.addr !235
  %58 = zext i32 %57 to i64, !insn.addr !236
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3390, i64 0, i64 0), i64 %58), !insn.addr !237
  %60 = add i64 %30, -1360, !insn.addr !238
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1c23

dec_label_pc_1c23:                                ; preds = %dec_label_pc_1beb, %dec_label_pc_1c23
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %61 = mul i64 %indvars.iv.reload, 4, !insn.addr !238
  %62 = add i64 %60, %61, !insn.addr !238
  %63 = inttoptr i64 %62 to i32*, !insn.addr !238
  %64 = trunc i64 %indvars.iv.reload to i32
  store i32 %64, i32* %63, align 4, !insn.addr !238
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 20
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !239
  br i1 %exitcond, label %dec_label_pc_1c4b, label %dec_label_pc_1c23, !insn.addr !239

dec_label_pc_1c4b:                                ; preds = %dec_label_pc_1c23
  %65 = getelementptr inbounds [1 x i32], [1 x i32]* %flat_-1368, i64 0, i64 0, !insn.addr !240
  %66 = call i32 @array_complex_index(i32* nonnull %65, i32 5, i32 4, i32 2, i32 3), !insn.addr !240
  %67 = zext i32 %66 to i64, !insn.addr !241
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_33af, i64 0, i64 0), i64 %67), !insn.addr !242
  ret void, !insn.addr !243

; uselistorder directives
  uselistorder i64 %stack_var_-1384.0.reload, { 1, 0 }
  uselistorder i64 %indvars.iv27.reload, { 0, 2, 1 }
  uselistorder i64 %indvars.iv39.reload, { 0, 2, 1 }
  uselistorder i64 %indvars.iv42.reload, { 0, 2, 1, 3 }
  uselistorder i64* %indvars.iv42.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv39.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv36.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv33.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv30.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv27.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-1384.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 5, { 3, 0, 1, 2, 4, 5, 6, 7 }
  uselistorder label %dec_label_pc_1c23, { 1, 0 }
  uselistorder label %dec_label_pc_1ae9, { 1, 0 }
  uselistorder label %dec_label_pc_1a04, { 1, 0 }
  uselistorder label %dec_label_pc_19f7.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_19e0.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1921, { 1, 0 }
  uselistorder label %dec_label_pc_1914.preheader, { 1, 0 }
}

define i32 @ptr_single(i32* %p) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 10, !insn.addr !244
  ret i32 %3, !insn.addr !245
}

define i32 @ptr_double(i32** %p) local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 5, !insn.addr !246
  ret i32 %3, !insn.addr !247
}

define i32 @ptr_triple(i32*** %p) local_unnamed_addr {
dec_label_pc_1cd0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 1, !insn.addr !248
  ret i32 %3, !insn.addr !249
}

define i32 @ptr_increment(i32* %p, i32 %n) local_unnamed_addr {
dec_label_pc_1cf0:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !250
  %sum_-16.01.reg2mem = alloca i32, !insn.addr !250
  %sum_-24.02.reg2mem = alloca i32, !insn.addr !250
  %storemerge3.reg2mem = alloca i32, !insn.addr !250
  %0 = icmp sgt i32 %n, 0, !insn.addr !251
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !251
  br i1 %0, label %dec_label_pc_1d15.lr.ph, label %dec_label_pc_1d3b, !insn.addr !251

dec_label_pc_1d15.lr.ph:                          ; preds = %dec_label_pc_1cf0
  %1 = ptrtoint i32* %p to i64
  %2 = trunc i64 %1 to i32, !insn.addr !252
  store i32 0, i32* %storemerge3.reg2mem
  store i32 0, i32* %sum_-24.02.reg2mem
  store i32 %2, i32* %sum_-16.01.reg2mem
  br label %dec_label_pc_1d15

dec_label_pc_1d15:                                ; preds = %dec_label_pc_1d15, %dec_label_pc_1d15.lr.ph
  %sum_-16.01.reload = load i32, i32* %sum_-16.01.reg2mem
  %sum_-24.02.reload = load i32, i32* %sum_-24.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %3 = sext i32 %sum_-16.01.reload to i64, !insn.addr !253
  %4 = inttoptr i64 %3 to i32*, !insn.addr !254
  %5 = load i32, i32* %4, align 4, !insn.addr !254
  %6 = add i32 %5, %sum_-24.02.reload, !insn.addr !255
  %7 = add i32 %sum_-16.01.reload, 4, !insn.addr !256
  %8 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !257
  %exitcond = icmp eq i32 %8, %n
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !251
  store i32 %6, i32* %sum_-24.02.reg2mem, !insn.addr !251
  store i32 %7, i32* %sum_-16.01.reg2mem, !insn.addr !251
  store i32 %6, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !251
  br i1 %exitcond, label %dec_label_pc_1d3b, label %dec_label_pc_1d15, !insn.addr !251

dec_label_pc_1d3b:                                ; preds = %dec_label_pc_1d15, %dec_label_pc_1cf0
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !258

; uselistorder directives
  uselistorder i32* %storemerge3.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.02.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-16.01.reg2mem, { 1, 0, 2 }
}

define i32 @ptr_offset(i32* %p, i32 %offset) local_unnamed_addr {
dec_label_pc_1d40:
  %0 = ptrtoint i32* %p to i64
  %1 = sext i32 %offset to i64, !insn.addr !259
  %2 = mul i64 %1, 4, !insn.addr !260
  %3 = add i64 %2, %0, !insn.addr !260
  %4 = inttoptr i64 %3 to i32*, !insn.addr !260
  %5 = load i32, i32* %4, align 4, !insn.addr !260
  ret i32 %5, !insn.addr !261
}

define i32 @ptr_diff(i32* %p1, i32* %p2) local_unnamed_addr {
dec_label_pc_1d60:
  %0 = ptrtoint i32* %p2 to i64
  %1 = ptrtoint i32* %p1 to i64
  %2 = sub i64 %1, %0, !insn.addr !262
  %3 = udiv i64 %2, 4
  %4 = trunc i64 %3 to i32, !insn.addr !263
  ret i32 %4, !insn.addr !263
}

define i32 @ptr_void(i8* %p, i32 %type) local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i64
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !264
  %1 = load i64, i64* %0
  %2 = icmp eq i32 %type, 0, !insn.addr !265
  %3 = icmp eq i1 %2, false, !insn.addr !266
  %4 = trunc i64 %1 to i32
  store i32 %4, i32* %stack_var_-12.0.reg2mem, !insn.addr !266
  br i1 %3, label %dec_label_pc_1da3, label %dec_label_pc_1dc8, !insn.addr !266

dec_label_pc_1da3:                                ; preds = %dec_label_pc_1d80
  %5 = icmp eq i32 %type, 1, !insn.addr !267
  %6 = icmp eq i1 %5, false, !insn.addr !268
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !268
  br i1 %6, label %dec_label_pc_1dc8, label %dec_label_pc_1dad, !insn.addr !268

dec_label_pc_1dad:                                ; preds = %dec_label_pc_1da3
  %sext = mul i32 %4, 16777216
  %7 = ashr exact i32 %sext, 24, !insn.addr !269
  store i32 %7, i32* %stack_var_-12.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_1dc8, !insn.addr !270

dec_label_pc_1dc8:                                ; preds = %dec_label_pc_1d80, %dec_label_pc_1da3, %dec_label_pc_1dad
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !271

; uselistorder directives
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 -1, { 0, 2, 3, 1 }
  uselistorder label %dec_label_pc_1dc8, { 2, 1, 0 }
}

define i32 @ptr_const(i32* %p) local_unnamed_addr {
dec_label_pc_1dd0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = mul i32 %2, 2, !insn.addr !272
  ret i32 %3, !insn.addr !273
}

define i32 @ptr_const_ptr(i32* %p) local_unnamed_addr {
dec_label_pc_1df0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 5, !insn.addr !274
  store i32 %3, i32* %p, align 4, !insn.addr !275
  ret i32 %2, !insn.addr !276

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @ptr_func_simple(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = ptrtoint i32 (i32)* %f to i64
  %1 = trunc i64 %0 to i32, !insn.addr !277
  ret i32 %1, !insn.addr !277
}

define i32 @ptr_func_complex(i32 (i32*, i8**)* %f, i32* %p) local_unnamed_addr {
dec_label_pc_1e30:
  %0 = ptrtoint i32 (i32*, i8**)* %f to i64
  %1 = trunc i64 %0 to i32, !insn.addr !278
  ret i32 %1, !insn.addr !278
}

define i32 @ptr_cast(i8* %p) local_unnamed_addr {
dec_label_pc_1e70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  ret i32 %2, !insn.addr !279
}

define i8* @opaque_handle_create(i32 %size) local_unnamed_addr {
dec_label_pc_1ea0:
  %0 = sext i32 %size to i64, !insn.addr !280
  %1 = inttoptr i64 %0 to i8*, !insn.addr !281
  ret i8* %1, !insn.addr !281
}

define i32 @opaque_handle_op(i8* %handle) local_unnamed_addr {
dec_label_pc_1eb0:
  %0 = ptrtoint i8* %handle to i64
  %1 = trunc i64 %0 to i32, !insn.addr !282
  %2 = mul i32 %1, 2, !insn.addr !282
  ret i32 %2, !insn.addr !283
}

define void @test_pointer_types() local_unnamed_addr {
dec_label_pc_1ed0:
  %val12_-176 = alloca i32, align 4
  %val11_-172 = alloca i32, align 4
  %val9_-168 = alloca i32, align 4
  %val8_-164 = alloca i32, align 4
  %c7_-157 = alloca i8, align 1
  %val7_-156 = alloca i32, align 4
  %stack_var_-136 = alloca i32, align 4
  %arr6_-152 = alloca [1 x i32], align 4
  %arr5_-120 = alloca [1 x i32], align 4
  %arr4_-88 = alloca [1 x i32], align 4
  %pptr3_-56 = alloca i32**, align 8
  %ptr3_-48 = alloca i32*, align 8
  %val3_-36 = alloca i32, align 4
  %ptr2_-24 = alloca i32*, align 8
  %val2_-16 = alloca i32, align 4
  %val1_-12 = alloca i32, align 4
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_33d9 to i8*)), !insn.addr !284
  store i32 5, i32* %val1_-12, align 4, !insn.addr !285
  %1 = call i32 @ptr_single(i32* nonnull %val1_-12), !insn.addr !286
  %2 = zext i32 %1 to i64, !insn.addr !287
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_33f5, i64 0, i64 0), i64 %2), !insn.addr !288
  store i32 10, i32* %val2_-16, align 4, !insn.addr !289
  store i32* %val2_-16, i32** %ptr2_-24, align 8, !insn.addr !290
  %4 = call i32 @ptr_double(i32** nonnull %ptr2_-24), !insn.addr !291
  %5 = zext i32 %4 to i64, !insn.addr !292
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3411, i64 0, i64 0), i64 %5), !insn.addr !293
  store i32 5, i32* %val3_-36, align 4, !insn.addr !294
  store i32* %val3_-36, i32** %ptr3_-48, align 8, !insn.addr !295
  store i32** %ptr3_-48, i32*** %pptr3_-56, align 8, !insn.addr !296
  %7 = call i32 @ptr_triple(i32*** nonnull %pptr3_-56), !insn.addr !297
  %8 = zext i32 %7 to i64, !insn.addr !298
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_342d, i64 0, i64 0), i64 %8), !insn.addr !299
  store [1 x i32] [i32 1], [1 x i32]* %arr4_-88, align 4, !insn.addr !300
  %10 = getelementptr inbounds [1 x i32], [1 x i32]* %arr4_-88, i64 0, i64 0, !insn.addr !301
  %11 = call i32 @ptr_increment(i32* nonnull %10, i32 5), !insn.addr !301
  %12 = zext i32 %11 to i64, !insn.addr !302
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3449, i64 0, i64 0), i64 %12), !insn.addr !303
  store [1 x i32] [i32 10], [1 x i32]* %arr5_-120, align 4, !insn.addr !304
  %14 = getelementptr inbounds [1 x i32], [1 x i32]* %arr5_-120, i64 0, i64 0, !insn.addr !305
  %15 = call i32 @ptr_offset(i32* nonnull %14, i32 2), !insn.addr !305
  %16 = zext i32 %15 to i64, !insn.addr !306
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3468, i64 0, i64 0), i64 %16), !insn.addr !307
  store [1 x i32] zeroinitializer, [1 x i32]* %arr6_-152, align 4, !insn.addr !308
  store i32 40, i32* %stack_var_-136, align 4, !insn.addr !309
  %18 = getelementptr inbounds [1 x i32], [1 x i32]* %arr6_-152, i64 0, i64 0, !insn.addr !310
  %19 = call i32 @ptr_diff(i32* nonnull %stack_var_-136, i32* nonnull %18), !insn.addr !310
  %20 = zext i32 %19 to i64, !insn.addr !311
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3484, i64 0, i64 0), i64 %20), !insn.addr !312
  store i32 42, i32* %val7_-156, align 4, !insn.addr !313
  store i8 65, i8* %c7_-157, align 1, !insn.addr !314
  %22 = bitcast i32* %val7_-156 to i8*, !insn.addr !315
  %23 = call i32 @ptr_void(i8* nonnull %22, i32 0), !insn.addr !315
  %24 = zext i32 %23 to i64, !insn.addr !316
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_349e, i64 0, i64 0), i64 %24), !insn.addr !317
  %26 = call i32 @ptr_void(i8* nonnull %c7_-157, i32 1), !insn.addr !318
  %27 = zext i32 %26 to i64, !insn.addr !319
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_349e, i64 0, i64 0), i64 %27), !insn.addr !320
  store i32 10, i32* %val8_-164, align 4, !insn.addr !321
  %29 = call i32 @ptr_const(i32* nonnull %val8_-164), !insn.addr !322
  %30 = zext i32 %29 to i64, !insn.addr !323
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_34b8, i64 0, i64 0), i64 %30), !insn.addr !324
  store i32 10, i32* %val9_-168, align 4, !insn.addr !325
  %32 = call i32 @ptr_const_ptr(i32* nonnull %val9_-168), !insn.addr !326
  %33 = zext i32 %32 to i64, !insn.addr !327
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_34d3, i64 0, i64 0), i64 %33), !insn.addr !328
  %35 = call i32 @ptr_func_simple(i32 (i32)* inttoptr (i64 8576 to i32 (i32)*), i32 5), !insn.addr !329
  %36 = zext i32 %35 to i64, !insn.addr !330
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34f2, i64 0, i64 0), i64 %36), !insn.addr !331
  store i32 5, i32* %val11_-172, align 4, !insn.addr !332
  %38 = call i32 @ptr_func_complex(i32 (i32*, i8**)* inttoptr (i64 8592 to i32 (i32*, i8**)*), i32* nonnull %val11_-172), !insn.addr !333
  %39 = zext i32 %38 to i64, !insn.addr !334
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3513, i64 0, i64 0), i64 %39), !insn.addr !335
  store i32 305419896, i32* %val12_-176, align 4, !insn.addr !336
  %41 = bitcast i32* %val12_-176 to i8*, !insn.addr !337
  %42 = call i32 @ptr_cast(i8* nonnull %41), !insn.addr !337
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3535, i64 0, i64 0), i32 %42), !insn.addr !338
  %44 = call i8* @opaque_handle_create(i32 10), !insn.addr !339
  %45 = call i32 @opaque_handle_op(i8* %44), !insn.addr !340
  %46 = zext i32 %45 to i64, !insn.addr !341
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3551, i64 0, i64 0), i64 %46), !insn.addr !342
  ret void, !insn.addr !343

; uselistorder directives
  uselistorder i32 (i8*, i32)* @ptr_void, { 1, 0 }
  uselistorder i8 65, { 1, 0 }
  uselistorder i32 5, { 6, 0, 1, 7, 8, 10, 11, 2, 3, 4, 9, 5 }
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_2180:
  %0 = mul i32 %x, 2, !insn.addr !344
  ret i32 %0, !insn.addr !345
}

define i32 @complex_callback(i32* %p, i8** %args) local_unnamed_addr {
dec_label_pc_2190:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 10, !insn.addr !346
  store i32 %3, i32* %p, align 4, !insn.addr !347
  %4 = icmp eq i8** %args, null, !insn.addr !348
  %5 = icmp eq i1 %4, false, !insn.addr !349
  %6 = zext i1 %5 to i32, !insn.addr !349
  ret i32 %6, !insn.addr !350
}

define i32 @struct_simple(i32* %p) local_unnamed_addr {
dec_label_pc_21d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i32* %p to i64
  %3 = trunc i64 %1 to i32
  %4 = add i64 %2, 4, !insn.addr !351
  %5 = inttoptr i64 %4 to i32*, !insn.addr !351
  %6 = load i32, i32* %5, align 4, !insn.addr !351
  %7 = add i32 %6, %3, !insn.addr !351
  %8 = add i64 %2, 8, !insn.addr !352
  %9 = inttoptr i64 %8 to i32*, !insn.addr !352
  %10 = load i32, i32* %9, align 4, !insn.addr !352
  %11 = add i32 %7, %10, !insn.addr !352
  ret i32 %11, !insn.addr !353
}

define i32 @struct_array(i32* %pts, i32 %n) local_unnamed_addr {
dec_label_pc_21f0:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !354
  %sum_-24.04.reg2mem = alloca i32, !insn.addr !354
  %indvars.iv.reg2mem = alloca i64, !insn.addr !354
  %0 = icmp sgt i32 %n, 0, !insn.addr !355
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !355
  br i1 %0, label %dec_label_pc_2215.lr.ph, label %dec_label_pc_225e, !insn.addr !355

dec_label_pc_2215.lr.ph:                          ; preds = %dec_label_pc_21f0
  %1 = ptrtoint i32* %pts to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !356
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-24.04.reg2mem
  br label %dec_label_pc_2215

dec_label_pc_2215:                                ; preds = %dec_label_pc_2215, %dec_label_pc_2215.lr.ph
  %sum_-24.04.reload = load i32, i32* %sum_-24.04.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul nuw nsw i64 %indvars.iv.reload, 12, !insn.addr !357
  %4 = add nsw i64 %3, %2, !insn.addr !358
  %5 = inttoptr i64 %4 to i32*, !insn.addr !359
  %6 = load i32, i32* %5, align 4, !insn.addr !359
  %7 = add nsw i64 %4, 4, !insn.addr !360
  %8 = inttoptr i64 %7 to i32*, !insn.addr !360
  %9 = load i32, i32* %8, align 4, !insn.addr !360
  %10 = add nsw i64 %4, 8, !insn.addr !361
  %11 = inttoptr i64 %10 to i32*, !insn.addr !361
  %12 = load i32, i32* %11, align 4, !insn.addr !361
  %13 = add i32 %6, %sum_-24.04.reload, !insn.addr !360
  %14 = add i32 %13, %9, !insn.addr !361
  %15 = add i32 %14, %12, !insn.addr !362
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !355
  store i32 %15, i32* %sum_-24.04.reg2mem, !insn.addr !355
  store i32 %15, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !355
  br i1 %exitcond, label %dec_label_pc_225e, label %dec_label_pc_2215, !insn.addr !355

dec_label_pc_225e:                                ; preds = %dec_label_pc_2215, %dec_label_pc_21f0
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !363

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.04.reg2mem, { 1, 0, 2 }
}

define i32 @struct_nested(i32* %r) local_unnamed_addr {
dec_label_pc_2270:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i32* %r to i64
  %3 = trunc i64 %1 to i32
  %4 = add i64 %2, 12, !insn.addr !364
  %5 = inttoptr i64 %4 to i32*, !insn.addr !364
  %6 = load i32, i32* %5, align 4, !insn.addr !364
  %7 = add i32 %6, %3, !insn.addr !364
  ret i32 %7, !insn.addr !365

; uselistorder directives
  uselistorder i64 12, { 1, 0 }
}

define i32 @struct_deep(i32* %w) local_unnamed_addr {
dec_label_pc_2290:
  %0 = ptrtoint i32* %w to i64
  %1 = add i64 %0, 8, !insn.addr !366
  %2 = inttoptr i64 %1 to i32*, !insn.addr !366
  %3 = load i32, i32* %2, align 4, !insn.addr !366
  %4 = add i64 %0, 20, !insn.addr !367
  %5 = inttoptr i64 %4 to i32*, !insn.addr !367
  %6 = load i32, i32* %5, align 4, !insn.addr !367
  %7 = add i32 %6, %3, !insn.addr !367
  ret i32 %7, !insn.addr !368

; uselistorder directives
  uselistorder i64 20, { 4, 0, 1, 2, 3 }
}

define i32 @struct_with_ptr(i32* %node) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !369
  %1 = load i64, i64* %0
  %2 = ptrtoint i32* %node to i64
  %3 = add i64 %2, 8, !insn.addr !370
  %4 = inttoptr i64 %3 to i64*, !insn.addr !370
  %5 = load i64, i64* %4, align 8, !insn.addr !370
  %6 = icmp eq i64 %5, 0, !insn.addr !370
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !371
  br i1 %6, label %dec_label_pc_22ec, label %dec_label_pc_22d0, !insn.addr !371

dec_label_pc_22d0:                                ; preds = %dec_label_pc_22b0
  %7 = inttoptr i64 %5 to i32*, !insn.addr !372
  %8 = load i32, i32* %7, align 4, !insn.addr !372
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !373
  br label %dec_label_pc_22ec, !insn.addr !373

dec_label_pc_22ec:                                ; preds = %dec_label_pc_22b0, %dec_label_pc_22d0
  %9 = trunc i64 %1 to i32
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %10 = add i32 %storemerge.reload, %9, !insn.addr !374
  ret i32 %10, !insn.addr !375

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_22ec, { 1, 0 }
}

define i32 @struct_bitfields(i32* %f) local_unnamed_addr {
dec_label_pc_2300:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i16
  %3 = urem i16 %2, 2, !insn.addr !376
  %4 = udiv i16 %2, 2, !insn.addr !377
  %5 = urem i16 %4, 4, !insn.addr !378
  %6 = udiv i16 %2, 8, !insn.addr !379
  %7 = urem i16 %6, 8, !insn.addr !380
  %8 = udiv i16 %2, 64, !insn.addr !381
  %narrow = add nuw nsw i16 %8, %3
  %narrow1 = add nuw nsw i16 %narrow, %5
  %narrow2 = add nuw nsw i16 %narrow1, %7
  %9 = zext i16 %narrow2 to i32, !insn.addr !382
  ret i32 %9, !insn.addr !383

; uselistorder directives
  uselistorder i16 8, { 1, 0 }
}

define i32 @union_type(i32* %u, i32 %type) local_unnamed_addr {
dec_label_pc_2350:
  %0 = alloca i64
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !384
  %1 = load i64, i64* %0
  %2 = icmp eq i32 %type, 0, !insn.addr !385
  %3 = icmp eq i1 %2, false, !insn.addr !386
  %4 = trunc i64 %1 to i32
  store i32 %4, i32* %stack_var_-12.0.reg2mem, !insn.addr !386
  br i1 %3, label %dec_label_pc_2373, label %dec_label_pc_2397, !insn.addr !386

dec_label_pc_2373:                                ; preds = %dec_label_pc_2350
  %5 = icmp eq i32 %type, 1, !insn.addr !387
  %6 = icmp eq i1 %5, false, !insn.addr !388
  br i1 %6, label %dec_label_pc_238d, label %dec_label_pc_237d, !insn.addr !388

dec_label_pc_237d:                                ; preds = %dec_label_pc_2373
  %7 = call i32 @__asm_cvttss2si(i32 %4), !insn.addr !389
  store i32 %7, i32* %stack_var_-12.0.reg2mem, !insn.addr !390
  br label %dec_label_pc_2397, !insn.addr !390

dec_label_pc_238d:                                ; preds = %dec_label_pc_2373
  %sext = mul i32 %4, 16777216
  %8 = ashr exact i32 %sext, 24, !insn.addr !391
  store i32 %8, i32* %stack_var_-12.0.reg2mem, !insn.addr !391
  br label %dec_label_pc_2397, !insn.addr !391

dec_label_pc_2397:                                ; preds = %dec_label_pc_2350, %dec_label_pc_238d, %dec_label_pc_237d
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !392

; uselistorder directives
  uselistorder i32 %4, { 1, 2, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2397, { 1, 2, 0 }
}

define i32 @union_array(i32* %arr, i32 %n) local_unnamed_addr {
dec_label_pc_23a0:
  %sum_-24.0.lcssa.reg2mem = alloca i32, !insn.addr !393
  %sum_-24.01.reg2mem = alloca i32, !insn.addr !393
  %indvars.iv.reg2mem = alloca i64, !insn.addr !393
  %0 = icmp sgt i32 %n, 0, !insn.addr !394
  store i32 0, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !394
  br i1 %0, label %dec_label_pc_23c5.lr.ph, label %dec_label_pc_23e4, !insn.addr !394

dec_label_pc_23c5.lr.ph:                          ; preds = %dec_label_pc_23a0
  %1 = ptrtoint i32* %arr to i64
  %sext = mul i64 %1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !395
  %wide.trip.count = zext i32 %n to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-24.01.reg2mem
  br label %dec_label_pc_23c5

dec_label_pc_23c5:                                ; preds = %dec_label_pc_23c5, %dec_label_pc_23c5.lr.ph
  %sum_-24.01.reload = load i32, i32* %sum_-24.01.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 4, !insn.addr !396
  %4 = add nsw i64 %3, %2, !insn.addr !396
  %5 = inttoptr i64 %4 to i32*, !insn.addr !396
  %6 = load i32, i32* %5, align 4, !insn.addr !396
  %7 = add i32 %6, %sum_-24.01.reload, !insn.addr !397
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !394
  store i32 %7, i32* %sum_-24.01.reg2mem, !insn.addr !394
  store i32 %7, i32* %sum_-24.0.lcssa.reg2mem, !insn.addr !394
  br i1 %exitcond, label %dec_label_pc_23e4, label %dec_label_pc_23c5, !insn.addr !394

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23c5, %dec_label_pc_23a0
  %sum_-24.0.lcssa.reload = load i32, i32* %sum_-24.0.lcssa.reg2mem
  ret i32 %sum_-24.0.lcssa.reload, !insn.addr !398

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-24.01.reg2mem, { 1, 0, 2 }
}

define i32 @enum_type(i32 %s) local_unnamed_addr {
dec_label_pc_23f0:
  %0 = mul i32 %s, 10, !insn.addr !399
  ret i32 %0, !insn.addr !400

; uselistorder directives
  uselistorder i32 10, { 3, 13, 4, 8, 9, 10, 14, 11, 0, 1, 2, 12, 15, 5, 6, 7 }
}

define i32 @enum_switch(i32 %s) local_unnamed_addr {
dec_label_pc_2400:
  %0 = icmp ult i32 %s, 4
  br i1 %0, label %dec_label_pc_2418, label %dec_label_pc_245c, !insn.addr !401

dec_label_pc_2418:                                ; preds = %dec_label_pc_2400
  %1 = sext i32 %s to i64, !insn.addr !402
  %2 = mul i64 %1, 4, !insn.addr !403
  %3 = add i64 %2, ptrtoint (i32* @global_var_3040 to i64), !insn.addr !403
  %4 = inttoptr i64 %3 to i32*, !insn.addr !403
  %5 = load i32, i32* %4, align 4, !insn.addr !403
  %6 = add i32 %5, ptrtoint (i32* @global_var_3040 to i32), !insn.addr !404
  ret i32 %6, !insn.addr !405

dec_label_pc_245c:                                ; preds = %dec_label_pc_2400
  ret i32 -99, !insn.addr !406

; uselistorder directives
  uselistorder i64 4, { 0, 1, 12, 13, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
}

define i32 @struct_func_ptr(i32* %dev) local_unnamed_addr {
dec_label_pc_2470:
  %0 = ptrtoint i32* %dev to i64
  %1 = add i64 %0, 8, !insn.addr !407
  %2 = inttoptr i64 %1 to i64*, !insn.addr !407
  %3 = load i64, i64* %2, align 8, !insn.addr !407
  %4 = trunc i64 %3 to i32, !insn.addr !408
  ret i32 %4, !insn.addr !408
}

define i32 @linked_list(i32* %head) local_unnamed_addr {
dec_label_pc_24a0:
  %sum_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !409
  %sum_-20.01.reg2mem = alloca i32, !insn.addr !409
  %storemerge2.reg2mem = alloca i32*, !insn.addr !409
  %0 = icmp eq i32* %head, null, !insn.addr !410
  store i32* %head, i32** %storemerge2.reg2mem, !insn.addr !411
  store i32 0, i32* %sum_-20.01.reg2mem, !insn.addr !411
  store i32 0, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !411
  br i1 %0, label %dec_label_pc_24df, label %dec_label_pc_24c2, !insn.addr !411

dec_label_pc_24c2:                                ; preds = %dec_label_pc_24a0, %dec_label_pc_24c2
  %sum_-20.01.reload = load i32, i32* %sum_-20.01.reg2mem
  %storemerge2.reload = load i32*, i32** %storemerge2.reg2mem
  %1 = load i32, i32* %storemerge2.reload, align 4, !insn.addr !412
  %2 = add i32 %1, %sum_-20.01.reload, !insn.addr !413
  %3 = ptrtoint i32* %storemerge2.reload to i64, !insn.addr !414
  %4 = add i64 %3, 8, !insn.addr !415
  %5 = inttoptr i64 %4 to i64*, !insn.addr !415
  %6 = load i64, i64* %5, align 8, !insn.addr !415
  %7 = inttoptr i64 %6 to i32*, !insn.addr !416
  %8 = icmp eq i64 %6, 0, !insn.addr !410
  store i32* %7, i32** %storemerge2.reg2mem, !insn.addr !411
  store i32 %2, i32* %sum_-20.01.reg2mem, !insn.addr !411
  store i32 %2, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !411
  br i1 %8, label %dec_label_pc_24df, label %dec_label_pc_24c2, !insn.addr !411

dec_label_pc_24df:                                ; preds = %dec_label_pc_24c2, %dec_label_pc_24a0
  %sum_-20.0.lcssa.reload = load i32, i32* %sum_-20.0.lcssa.reg2mem
  ret i32 %sum_-20.0.lcssa.reload, !insn.addr !417

; uselistorder directives
  uselistorder i32* %storemerge2.reload, { 1, 0 }
  uselistorder i32** %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_24c2, { 1, 0 }
}

define i32 @doubly_linked_list(i32* %head) local_unnamed_addr {
dec_label_pc_24f0:
  %sum_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !418
  %sum_-20.01.reg2mem = alloca i32, !insn.addr !418
  %storemerge2.reg2mem = alloca i32*, !insn.addr !418
  %0 = icmp eq i32* %head, null, !insn.addr !419
  store i32* %head, i32** %storemerge2.reg2mem, !insn.addr !420
  store i32 0, i32* %sum_-20.01.reg2mem, !insn.addr !420
  store i32 0, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !420
  br i1 %0, label %dec_label_pc_252f, label %dec_label_pc_2512, !insn.addr !420

dec_label_pc_2512:                                ; preds = %dec_label_pc_24f0, %dec_label_pc_2512
  %sum_-20.01.reload = load i32, i32* %sum_-20.01.reg2mem
  %storemerge2.reload = load i32*, i32** %storemerge2.reg2mem
  %1 = load i32, i32* %storemerge2.reload, align 4, !insn.addr !421
  %2 = add i32 %1, %sum_-20.01.reload, !insn.addr !422
  %3 = ptrtoint i32* %storemerge2.reload to i64, !insn.addr !423
  %4 = add i64 %3, 8, !insn.addr !424
  %5 = inttoptr i64 %4 to i64*, !insn.addr !424
  %6 = load i64, i64* %5, align 8, !insn.addr !424
  %7 = inttoptr i64 %6 to i32*, !insn.addr !425
  %8 = icmp eq i64 %6, 0, !insn.addr !419
  store i32* %7, i32** %storemerge2.reg2mem, !insn.addr !420
  store i32 %2, i32* %sum_-20.01.reg2mem, !insn.addr !420
  store i32 %2, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !420
  br i1 %8, label %dec_label_pc_252f, label %dec_label_pc_2512, !insn.addr !420

dec_label_pc_252f:                                ; preds = %dec_label_pc_2512, %dec_label_pc_24f0
  %sum_-20.0.lcssa.reload = load i32, i32* %sum_-20.0.lcssa.reg2mem
  ret i32 %sum_-20.0.lcssa.reload, !insn.addr !426

; uselistorder directives
  uselistorder i32* %storemerge2.reload, { 1, 0 }
  uselistorder i32** %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-20.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2512, { 1, 0 }
}

define i32 @binary_tree_sum(i32* %root) local_unnamed_addr {
dec_label_pc_2540:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !427
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %root, null, !insn.addr !428
  %3 = icmp eq i1 %2, false, !insn.addr !429
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !429
  br i1 %3, label %dec_label_pc_2563, label %dec_label_pc_259a, !insn.addr !429

dec_label_pc_2563:                                ; preds = %dec_label_pc_2540
  %4 = trunc i64 %1 to i32
  %5 = ptrtoint i32* %root to i64, !insn.addr !430
  %6 = add i64 %5, 8, !insn.addr !431
  %7 = inttoptr i64 %6 to i64*, !insn.addr !431
  %8 = load i64, i64* %7, align 8, !insn.addr !431
  %9 = inttoptr i64 %8 to i32*, !insn.addr !432
  %10 = call i32 @binary_tree_sum(i32* %9), !insn.addr !432
  %11 = add i32 %10, %4, !insn.addr !433
  %12 = add i64 %5, 16, !insn.addr !434
  %13 = inttoptr i64 %12 to i64*, !insn.addr !434
  %14 = load i64, i64* %13, align 8, !insn.addr !434
  %15 = inttoptr i64 %14 to i32*, !insn.addr !435
  %16 = call i32 @binary_tree_sum(i32* %15), !insn.addr !435
  %17 = add i32 %11, %16, !insn.addr !436
  store i32 %17, i32* %storemerge.reg2mem, !insn.addr !437
  br label %dec_label_pc_259a, !insn.addr !437

dec_label_pc_259a:                                ; preds = %dec_label_pc_2540, %dec_label_pc_2563
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !438

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1 false, { 2, 3, 4, 5, 6, 7, 8, 9, 0, 1 }
  uselistorder i32* null, { 2, 0, 1 }
  uselistorder label %dec_label_pc_259a, { 1, 0 }
}

define i32 @binary_tree(i32* %root) local_unnamed_addr {
dec_label_pc_25b0:
  %0 = call i32 @binary_tree_sum(i32* %root), !insn.addr !439
  ret i32 %0, !insn.addr !440

; uselistorder directives
  uselistorder i32 (i32*)* @binary_tree_sum, { 2, 1, 0 }
}

define i32 @graph_traverse(i32* %g) local_unnamed_addr {
dec_label_pc_25d0:
  %sum_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !441
  %sum_-20.1.lcssa.reg2mem = alloca i32, !insn.addr !441
  %sum_-20.16.reg2mem = alloca i32, !insn.addr !441
  %storemerge.in7.reg2mem = alloca i64, !insn.addr !441
  %sum_-20.08.reg2mem = alloca i32, !insn.addr !441
  %indvars.iv.reg2mem = alloca i64, !insn.addr !441
  %0 = ptrtoint i32* %g to i64, !insn.addr !442
  %1 = add i64 %0, 80, !insn.addr !443
  %2 = inttoptr i64 %1 to i32*, !insn.addr !443
  %3 = load i32, i32* %2, align 4, !insn.addr !443
  %4 = icmp sgt i32 %3, 0, !insn.addr !444
  store i32 0, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !444
  br i1 %4, label %dec_label_pc_25f6.lr.ph, label %dec_label_pc_2641, !insn.addr !444

dec_label_pc_25f6.lr.ph:                          ; preds = %dec_label_pc_25d0
  %5 = sext i32 %3 to i64
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %sum_-20.08.reg2mem
  br label %dec_label_pc_25f6

dec_label_pc_25f6:                                ; preds = %dec_label_pc_2633, %dec_label_pc_25f6.lr.ph
  %sum_-20.08.reload = load i32, i32* %sum_-20.08.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 8, !insn.addr !445
  %7 = add i64 %6, %0, !insn.addr !445
  %storemerge.in.in4 = inttoptr i64 %7 to i64*
  %storemerge.in5 = load i64, i64* %storemerge.in.in4, align 8
  %8 = icmp eq i64 %storemerge.in5, 0, !insn.addr !446
  store i64 %storemerge.in5, i64* %storemerge.in7.reg2mem, !insn.addr !447
  store i32 %sum_-20.08.reload, i32* %sum_-20.16.reg2mem, !insn.addr !447
  store i32 %sum_-20.08.reload, i32* %sum_-20.1.lcssa.reg2mem, !insn.addr !447
  br i1 %8, label %dec_label_pc_2633, label %dec_label_pc_2611, !insn.addr !447

dec_label_pc_2611:                                ; preds = %dec_label_pc_25f6, %dec_label_pc_2611
  %sum_-20.16.reload = load i32, i32* %sum_-20.16.reg2mem
  %storemerge.in7.reload = load i64, i64* %storemerge.in7.reg2mem
  %storemerge = inttoptr i64 %storemerge.in7.reload to i32*
  %9 = load i32, i32* %storemerge, align 4, !insn.addr !448
  %10 = add i32 %9, %sum_-20.16.reload, !insn.addr !449
  %11 = add i64 %storemerge.in7.reload, 8, !insn.addr !450
  %storemerge.in.in = inttoptr i64 %11 to i64*
  %storemerge.in = load i64, i64* %storemerge.in.in, align 8
  %12 = icmp eq i64 %storemerge.in, 0, !insn.addr !446
  store i64 %storemerge.in, i64* %storemerge.in7.reg2mem, !insn.addr !447
  store i32 %10, i32* %sum_-20.16.reg2mem, !insn.addr !447
  store i32 %10, i32* %sum_-20.1.lcssa.reg2mem, !insn.addr !447
  br i1 %12, label %dec_label_pc_2633, label %dec_label_pc_2611, !insn.addr !447

dec_label_pc_2633:                                ; preds = %dec_label_pc_2611, %dec_label_pc_25f6
  %sum_-20.1.lcssa.reload = load i32, i32* %sum_-20.1.lcssa.reg2mem
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %5
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !444
  store i32 %sum_-20.1.lcssa.reload, i32* %sum_-20.08.reg2mem, !insn.addr !444
  store i32 %sum_-20.1.lcssa.reload, i32* %sum_-20.0.lcssa.reg2mem, !insn.addr !444
  br i1 %exitcond, label %dec_label_pc_2641, label %dec_label_pc_25f6, !insn.addr !444

dec_label_pc_2641:                                ; preds = %dec_label_pc_2633, %dec_label_pc_25d0
  %sum_-20.0.lcssa.reload = load i32, i32* %sum_-20.0.lcssa.reg2mem
  ret i32 %sum_-20.0.lcssa.reload, !insn.addr !451

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sum_-20.08.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.in7.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-20.16.reg2mem, { 2, 0, 1 }
  uselistorder i64 8, { 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1 }
  uselistorder label %dec_label_pc_2611, { 1, 0 }
}

define void @test_composite_types() local_unnamed_addr {
dec_label_pc_2650:
  %e1_-352 = alloca i64, align 8
  %tree_-336 = alloca i64, align 8
  %dlist_-312 = alloca i64, align 8
  %list_-264 = alloca i64, align 8
  %dev_-208 = alloca i64, align 8
  %arr_u_-192 = alloca [1 x i32], align 4
  %u_-176 = alloca i32, align 4
  %f_-168 = alloca i64, align 8
  %node1_-160 = alloca i64, align 8
  %w_-128 = alloca i64, align 8
  %r_-80 = alloca i64, align 8
  %pts_-56 = alloca i64, align 8
  %p1_-24 = alloca i64, align 8
  %stack_var_-440 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3573 to i8*)), !insn.addr !452
  store i64 8589934593, i64* %p1_-24, align 8, !insn.addr !453
  %1 = bitcast i64* %p1_-24 to i32*, !insn.addr !454
  %2 = call i32 @struct_simple(i32* nonnull %1), !insn.addr !454
  %3 = zext i32 %2 to i64, !insn.addr !455
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_358f, i64 0, i64 0), i64 %3), !insn.addr !456
  store i64 4294967297, i64* %pts_-56, align 8, !insn.addr !457
  %5 = bitcast i64* %pts_-56 to i32*, !insn.addr !458
  %6 = call i32 @struct_array(i32* nonnull %5, i32 2), !insn.addr !458
  %7 = zext i32 %6 to i64, !insn.addr !459
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35ae, i64 0, i64 0), i64 %7), !insn.addr !460
  store i64 42949672965, i64* %r_-80, align 8, !insn.addr !461
  %9 = bitcast i64* %r_-80 to i32*, !insn.addr !462
  %10 = call i32 @struct_nested(i32* nonnull %9), !insn.addr !462
  %11 = zext i32 %10 to i64, !insn.addr !463
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_35cc, i64 0, i64 0), i64 %11), !insn.addr !464
  %13 = call i64* @memcpy(i64* nonnull %w_-128, i64* nonnull @global_var_30fc, i32 48), !insn.addr !465
  %14 = bitcast i64* %w_-128 to i32*, !insn.addr !466
  %15 = call i32 @struct_deep(i32* nonnull %14), !insn.addr !466
  %16 = zext i32 %15 to i64, !insn.addr !467
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_35eb, i64 0, i64 0), i64 %16), !insn.addr !468
  store i64 10, i64* %node1_-160, align 8, !insn.addr !469
  %18 = bitcast i64* %node1_-160 to i32*, !insn.addr !470
  %19 = call i32 @struct_with_ptr(i32* nonnull %18), !insn.addr !470
  %20 = zext i32 %19 to i64, !insn.addr !471
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3608, i64 0, i64 0), i64 %20), !insn.addr !472
  store i64 ptrtoint (i64* @global_var_191d to i64), i64* %f_-168, align 8, !insn.addr !473
  %22 = bitcast i64* %f_-168 to i32*, !insn.addr !474
  %23 = call i32 @struct_bitfields(i32* nonnull %22), !insn.addr !474
  %24 = zext i32 %23 to i64, !insn.addr !475
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3629, i64 0, i64 0), i64 %24), !insn.addr !476
  store i32 305419896, i32* %u_-176, align 4, !insn.addr !477
  %26 = call i32 @union_type(i32* nonnull %u_-176, i32 0), !insn.addr !478
  %27 = zext i32 %26 to i64, !insn.addr !479
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_364b, i64 0, i64 0), i64 %27), !insn.addr !480
  store [1 x i32] [i32 10], [1 x i32]* %arr_u_-192, align 4, !insn.addr !481
  %29 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_u_-192, i64 0, i64 0, !insn.addr !482
  %30 = call i32 @union_array(i32* nonnull %29, i32 3), !insn.addr !482
  %31 = zext i32 %30 to i64, !insn.addr !483
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3667, i64 0, i64 0), i64 %31), !insn.addr !484
  %33 = call i32 @enum_type(i32 1), !insn.addr !485
  %34 = zext i32 %33 to i64, !insn.addr !486
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3684, i64 0, i64 0), i64 %34), !insn.addr !487
  %36 = call i32 @enum_switch(i32 2), !insn.addr !488
  %37 = zext i32 %36 to i64, !insn.addr !489
  %38 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_369f, i64 0, i64 0), i64 %37), !insn.addr !490
  %39 = load i64, i64* @global_var_5de0, align 8, !insn.addr !491
  store i64 %39, i64* %dev_-208, align 8, !insn.addr !492
  %40 = bitcast i64* %dev_-208 to i32*, !insn.addr !493
  %41 = call i32 @struct_func_ptr(i32* nonnull %40), !insn.addr !493
  %42 = zext i32 %41 to i64, !insn.addr !494
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_36bc, i64 0, i64 0), i64 %42), !insn.addr !495
  store i64 10, i64* %list_-264, align 8, !insn.addr !496
  %44 = bitcast i64* %list_-264 to i32*, !insn.addr !497
  %45 = call i32 @linked_list(i32* nonnull %44), !insn.addr !497
  %46 = zext i32 %45 to i64, !insn.addr !498
  %47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_36dd, i64 0, i64 0), i64 %46), !insn.addr !499
  store i64 10, i64* %dlist_-312, align 8, !insn.addr !500
  %48 = bitcast i64* %dlist_-312 to i32*, !insn.addr !501
  %49 = call i32 @doubly_linked_list(i32* nonnull %48), !insn.addr !501
  %50 = zext i32 %49 to i64, !insn.addr !502
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_36fa, i64 0, i64 0), i64 %50), !insn.addr !503
  store i64 100, i64* %tree_-336, align 8, !insn.addr !504
  %52 = bitcast i64* %tree_-336 to i32*, !insn.addr !505
  %53 = call i32 @binary_tree(i32* nonnull %52), !insn.addr !505
  %54 = zext i32 %53 to i64, !insn.addr !506
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_371e, i64 0, i64 0), i64 %54), !insn.addr !507
  store i64 1, i64* %e1_-352, align 8, !insn.addr !508
  %56 = call i64* @memset(i64* nonnull %stack_var_-440, i32 0, i32 88), !insn.addr !509
  %57 = ptrtoint i64* %e1_-352 to i64, !insn.addr !510
  store i64 %57, i64* %stack_var_-440, align 8, !insn.addr !510
  %58 = bitcast i64* %stack_var_-440 to i32*, !insn.addr !511
  %59 = call i32 @graph_traverse(i32* nonnull %58), !insn.addr !511
  %60 = zext i32 %59 to i64, !insn.addr !512
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_373b, i64 0, i64 0), i64 %60), !insn.addr !513
  ret void, !insn.addr !514

; uselistorder directives
  uselistorder i64* %stack_var_-440, { 0, 2, 1 }
  uselistorder i64 1, { 18, 0, 1, 2, 9, 8, 5, 6, 7, 3, 4, 10, 11, 12, 13, 14, 15, 16, 17, 19 }
  uselistorder i32 0, { 39, 40, 1, 0, 29, 2, 3, 4, 5, 6, 8, 7, 30, 43, 9, 11, 10, 31, 41, 44, 13, 14, 12, 32, 38, 16, 17, 15, 33, 45, 19, 18, 34, 21, 20, 35, 23, 22, 36, 24, 25, 26, 28, 27, 37, 46, 42 }
  uselistorder i32 305419896, { 0, 2, 1 }
  uselistorder i64 10, { 3, 4, 5, 0, 1, 2, 6 }
  uselistorder i32 2, { 5, 6, 0, 7, 1, 2, 8, 3, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 55 }
  uselistorder i64 0, { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 31, 32, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 22, 0, 20, 21, 1, 158, 2, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 64, 65, 86, 87, 66, 67, 88, 89, 68, 69, 90, 91, 92, 93, 94, 95, 112, 113, 96, 97, 3, 114, 115, 98, 99, 159, 116, 117, 100, 101, 4, 118, 119, 102, 103, 120, 121, 104, 105, 5, 6, 7, 122, 123, 106, 107, 8, 9, 124, 125, 108, 109, 126, 127, 110, 111, 160, 10, 11, 12, 13, 14, 15, 16, 17, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 156, 19, 18, 157, 23, 24, 25, 26, 27, 28, 29, 30, 150, 151, 152, 153, 154, 155 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2a30:
  call void @test_data_types_l1(), !insn.addr !515
  call void @test_array_types(), !insn.addr !516
  call void @test_pointer_types(), !insn.addr !517
  call void @test_composite_types(), !insn.addr !518
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !519
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2a5c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !520

; uselistorder directives
  uselistorder i32 1, { 17, 80, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 23, 22, 21, 20, 19, 18, 24, 16, 27, 26, 25, 30, 29, 28, 33, 32, 31, 81, 34, 15, 14, 35, 13, 12, 38, 37, 36, 11, 10, 82, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 9, 8, 7, 83, 39, 6, 133, 43, 42, 41, 40, 134, 5, 4, 3, 135, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 51, 50, 49, 48, 47, 46, 45, 44, 136, 54, 53, 52, 55, 59, 58, 57, 56, 62, 61, 60, 65, 64, 63, 71, 70, 69, 68, 67, 66, 73, 72, 137, 74, 77, 76, 75, 131, 130, 2, 1, 84, 78, 85, 0, 132, 79, 86, 87 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__asm_movss(i128) local_unnamed_addr

declare i128 @__asm_movss.1(i32) local_unnamed_addr

declare i128 @__asm_mulss(i128, i128) local_unnamed_addr

declare i128 @__asm_addss(i128, i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_movsd.2(i64) local_unnamed_addr

declare i128 @__asm_divsd(i128, i128) local_unnamed_addr

declare i128 @__asm_addsd(i128, i128) local_unnamed_addr

declare i128 @__asm_cvtss2sd(i128) local_unnamed_addr

declare i32 @__asm_cvttss2si(i32) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4192}
!10 = !{i64 4239}
!11 = !{i64 4245}
!12 = !{i64 4296}
!13 = !{i64 4360}
!14 = !{i64 4372}
!15 = !{i64 4379}
!16 = !{i64 4382}
!17 = !{i64 4393}
!18 = !{i64 4395}
!19 = !{i64 4402}
!20 = !{i64 4407}
!21 = !{i64 4412}
!22 = !{i64 4420}
!23 = !{i64 4424}
!24 = !{i64 4436}
!25 = !{i64 4510}
!26 = !{i64 4538}
!27 = !{i64 4542}
!28 = !{i64 4554}
!29 = !{i64 4557}
!30 = !{i64 4561}
!31 = !{i64 4588}
!32 = !{i64 4593}
!33 = !{i64 4620}
!34 = !{i64 4626}
!35 = !{i64 4644}
!36 = !{i64 4649}
!37 = !{i64 4654}
!38 = !{i64 4662}
!39 = !{i64 4666}
!40 = !{i64 4674}
!41 = !{i64 4679}
!42 = !{i64 4692}
!43 = !{i64 4697}
!44 = !{i64 4702}
!45 = !{i64 4710}
!46 = !{i64 4714}
!47 = !{i64 4722}
!48 = !{i64 4727}
!49 = !{i64 4756}
!50 = !{i64 4768}
!51 = !{i64 4784}
!52 = !{i64 4799}
!53 = !{i64 4801}
!54 = !{i64 4807}
!55 = !{i64 4819}
!56 = !{i64 4846}
!57 = !{i64 4850}
!58 = !{i64 4893}
!59 = !{i64 4897}
!60 = !{i64 4929}
!61 = !{i64 4939}
!62 = !{i64 4956}
!63 = !{i64 4966}
!64 = !{i64 4983}
!65 = !{i64 4998}
!66 = !{i64 5003}
!67 = !{i64 5015}
!68 = !{i64 5025}
!69 = !{i64 5030}
!70 = !{i64 5041}
!71 = !{i64 5051}
!72 = !{i64 5068}
!73 = !{i64 5078}
!74 = !{i64 5095}
!75 = !{i64 5100}
!76 = !{i64 5108}
!77 = !{i64 5113}
!78 = !{i64 5126}
!79 = !{i64 5131}
!80 = !{i64 5139}
!81 = !{i64 5153}
!82 = !{i64 5169}
!83 = !{i64 5188}
!84 = !{i64 5198}
!85 = !{i64 5205}
!86 = !{i64 5217}
!87 = !{i64 5227}
!88 = !{i64 5234}
!89 = !{i64 5246}
!90 = !{i64 5256}
!91 = !{i64 5263}
!92 = !{i64 5275}
!93 = !{i64 5280}
!94 = !{i64 5291}
!95 = !{i64 5296}
!96 = !{i64 5307}
!97 = !{i64 5312}
!98 = !{i64 5323}
!99 = !{i64 5328}
!100 = !{i64 5339}
!101 = !{i64 5349}
!102 = !{i64 5360}
!103 = !{i64 5391}
!104 = !{i64 5397}
!105 = !{i64 5405}
!106 = !{i64 5408}
!107 = !{i64 5432}
!108 = !{i64 5440}
!109 = !{i64 5455}
!110 = !{i64 5448}
!111 = !{i64 5459}
!112 = !{i64 5463}
!113 = !{i64 5467}
!114 = !{i64 5479}
!115 = !{i64 5470}
!116 = !{i64 5494}
!117 = !{i64 5504}
!118 = !{i64 5536}
!119 = !{i64 5555}
!120 = !{i64 5558}
!121 = !{i64 5530}
!122 = !{i64 5582}
!123 = !{i64 5584}
!124 = !{i64 5650}
!125 = !{i64 5658}
!126 = !{i64 5662}
!127 = !{i64 5669}
!128 = !{i64 5673}
!129 = !{i64 5680}
!130 = !{i64 5683}
!131 = !{i64 5644}
!132 = !{i64 5627}
!133 = !{i64 5610}
!134 = !{i64 5745}
!135 = !{i64 5760}
!136 = !{i64 5791}
!137 = !{i64 5797}
!138 = !{i64 5805}
!139 = !{i64 5808}
!140 = !{i64 5832}
!141 = !{i64 5840}
!142 = !{i64 5871}
!143 = !{i64 5877}
!144 = !{i64 5885}
!145 = !{i64 5889}
!146 = !{i64 5892}
!147 = !{i64 5894}
!148 = !{i64 5918}
!149 = !{i64 5920}
!150 = !{i64 5991}
!151 = !{i64 5942}
!152 = !{i64 5997}
!153 = !{i64 6005}
!154 = !{i64 6010}
!155 = !{i64 6028}
!156 = !{i64 6030}
!157 = !{i64 6033}
!158 = !{i64 6059}
!159 = !{i64 6064}
!160 = !{i64 6085}
!161 = !{i64 6089}
!162 = !{i64 6101}
!163 = !{i64 6107}
!164 = !{i64 6123}
!165 = !{i64 6141}
!166 = !{i64 6148}
!167 = !{i64 6152}
!168 = !{i64 6155}
!169 = !{i64 6158}
!170 = !{i64 6161}
!171 = !{i64 6168}
!172 = !{i64 6176}
!173 = !{i64 6207}
!174 = !{i64 6213}
!175 = !{i64 6217}
!176 = !{i64 6221}
!177 = !{i64 6224}
!178 = !{i64 6233}
!179 = !{i64 6248}
!180 = !{i64 6256}
!181 = !{i64 6276}
!182 = !{i64 6288}
!183 = !{i64 6321}
!184 = !{i64 6326}
!185 = !{i64 6337}
!186 = !{i64 6348}
!187 = !{i64 6366}
!188 = !{i64 6371}
!189 = !{i64 6382}
!190 = !{i64 6494}
!191 = !{i64 6501}
!192 = !{i64 6505}
!193 = !{i64 6439}
!194 = !{i64 6445}
!195 = !{i64 6515}
!196 = !{i64 6427}
!197 = !{i64 6404}
!198 = !{i64 6570}
!199 = !{i64 6575}
!200 = !{i64 6586}
!201 = !{i64 6667}
!202 = !{i64 6674}
!203 = !{i64 6678}
!204 = !{i64 6688}
!205 = !{i64 6692}
!206 = !{i64 6702}
!207 = !{i64 6654}
!208 = !{i64 6631}
!209 = !{i64 6608}
!210 = !{i64 6257}
!211 = !{i64 6786}
!212 = !{i64 6791}
!213 = !{i64 6802}
!214 = !{i64 6814}
!215 = !{i64 6845}
!216 = !{i64 6850}
!217 = !{i64 6861}
!218 = !{i64 6903}
!219 = !{i64 6910}
!220 = !{i64 6914}
!221 = !{i64 6917}
!222 = !{i64 6883}
!223 = !{i64 6951}
!224 = !{i64 6956}
!225 = !{i64 6967}
!226 = !{i64 6972}
!227 = !{i64 6992}
!228 = !{i64 7016}
!229 = !{i64 7085}
!230 = !{i64 7092}
!231 = !{i64 7113}
!232 = !{i64 7120}
!233 = !{i64 7131}
!234 = !{i64 7141}
!235 = !{i64 7159}
!236 = !{i64 7164}
!237 = !{i64 7175}
!238 = !{i64 7216}
!239 = !{i64 7197}
!240 = !{i64 7271}
!241 = !{i64 7276}
!242 = !{i64 7287}
!243 = !{i64 7300}
!244 = !{i64 7326}
!245 = !{i64 7330}
!246 = !{i64 7361}
!247 = !{i64 7365}
!248 = !{i64 7396}
!249 = !{i64 7400}
!250 = !{i64 7408}
!251 = !{i64 7439}
!252 = !{i64 7412}
!253 = !{i64 7445}
!254 = !{i64 7449}
!255 = !{i64 7451}
!256 = !{i64 7461}
!257 = !{i64 7472}
!258 = !{i64 7487}
!259 = !{i64 7503}
!260 = !{i64 7507}
!261 = !{i64 7511}
!262 = !{i64 7540}
!263 = !{i64 7548}
!264 = !{i64 7552}
!265 = !{i64 7563}
!266 = !{i64 7567}
!267 = !{i64 7587}
!268 = !{i64 7591}
!269 = !{i64 7604}
!270 = !{i64 7607}
!271 = !{i64 7628}
!272 = !{i64 7650}
!273 = !{i64 7653}
!274 = !{i64 7678}
!275 = !{i64 7685}
!276 = !{i64 7694}
!277 = !{i64 7725}
!278 = !{i64 7785}
!279 = !{i64 7831}
!280 = !{i64 7847}
!281 = !{i64 7852}
!282 = !{i64 7868}
!283 = !{i64 7872}
!284 = !{i64 7908}
!285 = !{i64 7913}
!286 = !{i64 7924}
!287 = !{i64 7929}
!288 = !{i64 7940}
!289 = !{i64 7945}
!290 = !{i64 7956}
!291 = !{i64 7972}
!292 = !{i64 7977}
!293 = !{i64 7988}
!294 = !{i64 7993}
!295 = !{i64 8004}
!296 = !{i64 8012}
!297 = !{i64 8028}
!298 = !{i64 8033}
!299 = !{i64 8044}
!300 = !{i64 8056}
!301 = !{i64 8089}
!302 = !{i64 8094}
!303 = !{i64 8105}
!304 = !{i64 8117}
!305 = !{i64 8150}
!306 = !{i64 8155}
!307 = !{i64 8166}
!308 = !{i64 8178}
!309 = !{i64 8205}
!310 = !{i64 8226}
!311 = !{i64 8231}
!312 = !{i64 8242}
!313 = !{i64 8247}
!314 = !{i64 8257}
!315 = !{i64 8273}
!316 = !{i64 8278}
!317 = !{i64 8289}
!318 = !{i64 8306}
!319 = !{i64 8311}
!320 = !{i64 8322}
!321 = !{i64 8327}
!322 = !{i64 8344}
!323 = !{i64 8349}
!324 = !{i64 8360}
!325 = !{i64 8365}
!326 = !{i64 8382}
!327 = !{i64 8387}
!328 = !{i64 8398}
!329 = !{i64 8415}
!330 = !{i64 8420}
!331 = !{i64 8431}
!332 = !{i64 8436}
!333 = !{i64 8460}
!334 = !{i64 8465}
!335 = !{i64 8476}
!336 = !{i64 8481}
!337 = !{i64 8498}
!338 = !{i64 8514}
!339 = !{i64 8524}
!340 = !{i64 8543}
!341 = !{i64 8548}
!342 = !{i64 8559}
!343 = !{i64 8572}
!344 = !{i64 8586}
!345 = !{i64 8590}
!346 = !{i64 8610}
!347 = !{i64 8617}
!348 = !{i64 8633}
!349 = !{i64 8637}
!350 = !{i64 8641}
!351 = !{i64 8674}
!352 = !{i64 8681}
!353 = !{i64 8685}
!354 = !{i64 8688}
!355 = !{i64 8719}
!356 = !{i64 8725}
!357 = !{i64 8733}
!358 = !{i64 8737}
!359 = !{i64 8740}
!360 = !{i64 8757}
!361 = !{i64 8775}
!362 = !{i64 8778}
!363 = !{i64 8802}
!364 = !{i64 8834}
!365 = !{i64 8838}
!366 = !{i64 8860}
!367 = !{i64 8867}
!368 = !{i64 8871}
!369 = !{i64 8880}
!370 = !{i64 8901}
!371 = !{i64 8906}
!372 = !{i64 8920}
!373 = !{i64 8925}
!374 = !{i64 8946}
!375 = !{i64 8949}
!376 = !{i64 8975}
!377 = !{i64 8989}
!378 = !{i64 8993}
!379 = !{i64 9009}
!380 = !{i64 9013}
!381 = !{i64 9029}
!382 = !{i64 9036}
!383 = !{i64 9039}
!384 = !{i64 9040}
!385 = !{i64 9051}
!386 = !{i64 9055}
!387 = !{i64 9075}
!388 = !{i64 9079}
!389 = !{i64 9089}
!390 = !{i64 9096}
!391 = !{i64 9108}
!392 = !{i64 9115}
!393 = !{i64 9120}
!394 = !{i64 9151}
!395 = !{i64 9157}
!396 = !{i64 9165}
!397 = !{i64 9168}
!398 = !{i64 9192}
!399 = !{i64 9207}
!400 = !{i64 9212}
!401 = !{i64 9234}
!402 = !{i64 9240}
!403 = !{i64 9251}
!404 = !{i64 9255}
!405 = !{i64 9258}
!406 = !{i64 9319}
!407 = !{i64 9344}
!408 = !{i64 9361}
!409 = !{i64 9376}
!410 = !{i64 9399}
!411 = !{i64 9404}
!412 = !{i64 9414}
!413 = !{i64 9416}
!414 = !{i64 9422}
!415 = !{i64 9426}
!416 = !{i64 9430}
!417 = !{i64 9443}
!418 = !{i64 9456}
!419 = !{i64 9479}
!420 = !{i64 9484}
!421 = !{i64 9494}
!422 = !{i64 9496}
!423 = !{i64 9502}
!424 = !{i64 9506}
!425 = !{i64 9510}
!426 = !{i64 9523}
!427 = !{i64 9536}
!428 = !{i64 9548}
!429 = !{i64 9553}
!430 = !{i64 9580}
!431 = !{i64 9584}
!432 = !{i64 9588}
!433 = !{i64 9598}
!434 = !{i64 9607}
!435 = !{i64 9611}
!436 = !{i64 9621}
!437 = !{i64 9623}
!438 = !{i64 9634}
!439 = !{i64 9664}
!440 = !{i64 9674}
!441 = !{i64 9680}
!442 = !{i64 9705}
!443 = !{i64 9709}
!444 = !{i64 9712}
!445 = !{i64 9726}
!446 = !{i64 9734}
!447 = !{i64 9739}
!448 = !{i64 9749}
!449 = !{i64 9751}
!450 = !{i64 9761}
!451 = !{i64 9797}
!452 = !{i64 9828}
!453 = !{i64 9840}
!454 = !{i64 9857}
!455 = !{i64 9862}
!456 = !{i64 9873}
!457 = !{i64 9885}
!458 = !{i64 9920}
!459 = !{i64 9925}
!460 = !{i64 9936}
!461 = !{i64 9948}
!462 = !{i64 9976}
!463 = !{i64 9981}
!464 = !{i64 9992}
!465 = !{i64 10013}
!466 = !{i64 10022}
!467 = !{i64 10027}
!468 = !{i64 10038}
!469 = !{i64 10068}
!470 = !{i64 10099}
!471 = !{i64 10104}
!472 = !{i64 10115}
!473 = !{i64 10127}
!474 = !{i64 10141}
!475 = !{i64 10146}
!476 = !{i64 10157}
!477 = !{i64 10168}
!478 = !{i64 10183}
!479 = !{i64 10188}
!480 = !{i64 10199}
!481 = !{i64 10211}
!482 = !{i64 10242}
!483 = !{i64 10247}
!484 = !{i64 10258}
!485 = !{i64 10268}
!486 = !{i64 10273}
!487 = !{i64 10284}
!488 = !{i64 10294}
!489 = !{i64 10299}
!490 = !{i64 10310}
!491 = !{i64 10315}
!492 = !{i64 10322}
!493 = !{i64 10350}
!494 = !{i64 10355}
!495 = !{i64 10366}
!496 = !{i64 10371}
!497 = !{i64 10455}
!498 = !{i64 10460}
!499 = !{i64 10471}
!500 = !{i64 10476}
!501 = !{i64 10575}
!502 = !{i64 10580}
!503 = !{i64 10591}
!504 = !{i64 10603}
!505 = !{i64 10645}
!506 = !{i64 10650}
!507 = !{i64 10661}
!508 = !{i64 10673}
!509 = !{i64 10708}
!510 = !{i64 10744}
!511 = !{i64 10758}
!512 = !{i64 10763}
!513 = !{i64 10774}
!514 = !{i64 10787}
!515 = !{i64 10815}
!516 = !{i64 10820}
!517 = !{i64 10825}
!518 = !{i64 10830}
!519 = !{i64 10842}
!520 = !{i64 10856}
