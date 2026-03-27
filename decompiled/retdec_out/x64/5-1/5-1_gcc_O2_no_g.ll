source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_3c70_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_3c98_type = type { i64 ()*, i64 ()*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_3cb0 = global i64 0
@global_var_3cc0 = local_unnamed_addr global i64 0
@global_var_4038 = global i64 0
@global_var_4008 = external local_unnamed_addr global i64
@global_var_4030 = global i64 0
@global_var_3fd0 = local_unnamed_addr global i64 0
@global_var_2238 = local_unnamed_addr constant i64 4609434218613702656
@global_var_2240 = local_unnamed_addr constant i64 4612811918334230528
@global_var_2218 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_3c90 = local_unnamed_addr global i64 15632
@global_var_3d10 = global i64 0
@global_var_2228 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_3d18 = local_unnamed_addr global [15 x i8]* @global_var_2228
@global_var_3ce8 = global i64 0
@global_var_3cf8 = global i64 0
@global_var_2004 = constant [5 x i8] c"Base\00"
@global_var_2009 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_4034 = local_unnamed_addr global i32 0
@global_var_3e9 = global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_2018 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_203c = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_205a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2076 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_2092 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_20ae = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_20cb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_20e7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_2103 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_211f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_213b = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_2158 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_2175 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_3c70 = global %vtable_3c70_type { i64 ()* @_ZN12RTTIDerivedAD1Ev, i64 ()* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_3c98 = global %vtable_3c98_type { i64 ()* @_ZN12RTTIDerivedBD1Ev, i64 ()* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 16360 to i64*), align 8, !insn.addr !1
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

define void @function_1130(i64* %d) local_unnamed_addr {
dec_label_pc_1130:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1140(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i64 @function_1150(i64 %arg1) local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !8
  ret i64 %0, !insn.addr !8
}

define i32 @function_1160(i8* %s) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_1170(i64 %arg1) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i32 @function_1180(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i64 @function_1190(i64 %arg1) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !12
  ret i64 %0, !insn.addr !12
}

define i64 @function_11a0(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define void @function_11b0() local_unnamed_addr {
dec_label_pc_11b0:
  call void @__stack_chk_fail(), !insn.addr !14
  ret void, !insn.addr !14
}

define i64 @function_11c0(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4, i64 %arg5), !insn.addr !15
  ret i64 %0, !insn.addr !15
}

define i32 @function_11d0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_11e0() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_11f0() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define i32 @function_1200(i8* %s) local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @puts(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i64 @function_1210() local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i64 @function_1220(i64 %arg1, i64* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64* %arg2, i32 %arg3), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define void @function_1230(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1230:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !22
  ret void, !insn.addr !22
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !23
  %1 = inttoptr i64 %0 to i32*, !insn.addr !24
  store i32 42, i32* %1, align 4, !insn.addr !24
  %2 = call i64 @__cxa_throw(i64 %0, i64* nonnull @global_var_3cb0, i32 0), !insn.addr !25
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !26
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !26
  %4 = call i64 @__cxa_begin_catch(i64 %2), !insn.addr !27
  %5 = call i64 @__cxa_end_catch(), !insn.addr !28
  ret i64 100, !insn.addr !29

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1310:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !30
  ret i64 0, !insn.addr !31
}

define i64 @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !32
  %1 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !33
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !34
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_4038, i64* inttoptr (i64 16392 to i64*)), !insn.addr !34
  %4 = sext i32 %3 to i64, !insn.addr !34
  ret i64 %4, !insn.addr !34
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1360:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !35
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !35
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !35
  %3 = call i32 @__libc_start_main(i64 4880, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !35
  %4 = call i64 @__asm_hlt(), !insn.addr !36
  unreachable, !insn.addr !36
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1390:
  ret i64 ptrtoint (i64* @global_var_4030 to i64), !insn.addr !37
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_13c0:
  ret i64 0, !insn.addr !38
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1400:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_4030 to i8*), align 8, !insn.addr !39
  %3 = icmp eq i8 %2, 0, !insn.addr !39
  %4 = icmp eq i1 %3, false, !insn.addr !40
  br i1 %4, label %dec_label_pc_1438, label %dec_label_pc_140d, !insn.addr !40

dec_label_pc_140d:                                ; preds = %dec_label_pc_1400
  %5 = load i64, i64* @global_var_3fd0, align 8, !insn.addr !41
  %6 = icmp eq i64 %5, 0, !insn.addr !41
  br i1 %6, label %dec_label_pc_1427, label %dec_label_pc_141b, !insn.addr !42

dec_label_pc_141b:                                ; preds = %dec_label_pc_140d
  %7 = load i64, i64* @global_var_4008, align 8, !insn.addr !43
  %8 = inttoptr i64 %7 to i64*, !insn.addr !44
  call void @__cxa_finalize(i64* %8), !insn.addr !44
  br label %dec_label_pc_1427, !insn.addr !44

dec_label_pc_1427:                                ; preds = %dec_label_pc_141b, %dec_label_pc_140d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !45
  store i8 1, i8* bitcast (i64* @global_var_4030 to i8*), align 8, !insn.addr !46
  ret i64 %9, !insn.addr !47

dec_label_pc_1438:                                ; preds = %dec_label_pc_1400
  ret i64 %1, !insn.addr !48
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1440:
  %0 = call i64 @register_tm_clones(), !insn.addr !49
  ret i64 %0, !insn.addr !49
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1450:
  %stack_var_-52 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !50
  store i64 1953719636, i64* %stack_var_-52, align 8, !insn.addr !51
  %1 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !52
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !52
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !53
  %4 = icmp eq i64 %0, %3, !insn.addr !53
  %5 = icmp eq i1 %4, false, !insn.addr !54
  br i1 %5, label %dec_label_pc_14c0, label %dec_label_pc_14bb, !insn.addr !54

dec_label_pc_14bb:                                ; preds = %dec_label_pc_1450
  %6 = add i32 %2, 4700, !insn.addr !55
  %7 = zext i32 %6 to i64, !insn.addr !55
  ret i64 %7, !insn.addr !56

dec_label_pc_14c0:                                ; preds = %dec_label_pc_1450
  call void @__stack_chk_fail(), !insn.addr !57
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !58
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_14d0:
  %0 = load i32, i32* @global_var_4034, align 4, !insn.addr !59
  %1 = mul i32 %0, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !59
  %2 = add i32 %1, 21, !insn.addr !60
  %3 = zext i32 %2 to i64, !insn.addr !60
  ret i64 %3, !insn.addr !61
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !62
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1500:
  ret i64 42, !insn.addr !63
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1510:
  ret i64 71, !insn.addr !64
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1520:
  ret i64 650, !insn.addr !65
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1530:
  ret i64 22, !insn.addr !66
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1540:
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !67
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !68
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !69
  %3 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !70
  %4 = trunc i128 %3 to i64, !insn.addr !71
  %5 = bitcast i64 %4 to double, !insn.addr !71
  %6 = fptrunc double %5 to float, !insn.addr !71
  %7 = bitcast float %6 to i32, !insn.addr !71
  %8 = sext i32 %7 to i128, !insn.addr !71
  %9 = call i128 @__asm_maxsd(i128 %8, i128 sext (i32 bitcast (float fptrunc (double bitcast (i64 ptrtoint (i32* @0 to i64) to double) to float) to i32) to i128)), !insn.addr !71
  %10 = trunc i128 %9 to i64, !insn.addr !71
  %11 = bitcast i64 %10 to double, !insn.addr !71
  %12 = fptrunc double %11 to float, !insn.addr !71
  %13 = bitcast float %12 to i32, !insn.addr !71
  %14 = sext i32 %13 to i128, !insn.addr !71
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !72
  %15 = call i64 @__asm_movsd.4(i128 %14), !insn.addr !73
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !74
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-20), !insn.addr !75
  %16 = call i128 @__asm_movsd(i64 %15), !insn.addr !76
  %17 = call i32 @__asm_cvttsd2si(i128 %16), !insn.addr !77
  %18 = load i32, i32* %stack_var_-24, align 4, !insn.addr !78
  %19 = load i32, i32* %stack_var_-20, align 4, !insn.addr !79
  %20 = call i64 @__readfsqword(i64 40), !insn.addr !80
  %21 = icmp eq i64 %0, %20, !insn.addr !80
  %22 = icmp eq i1 %21, false, !insn.addr !81
  br i1 %22, label %dec_label_pc_15ce, label %dec_label_pc_15c8, !insn.addr !81

dec_label_pc_15c8:                                ; preds = %dec_label_pc_1540
  %23 = add i32 %17, %1, !insn.addr !82
  %24 = add i32 %23, %18, !insn.addr !78
  %25 = add i32 %24, %19, !insn.addr !79
  %26 = zext i32 %25 to i64, !insn.addr !79
  ret i64 %26, !insn.addr !83

dec_label_pc_15ce:                                ; preds = %dec_label_pc_1540
  call void @__stack_chk_fail(), !insn.addr !84
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !85

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_15e0:
  ret i64 16, !insn.addr !86
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_15f0:
  ret i64 85, !insn.addr !87
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1600:
  ret i64 703, !insn.addr !88
}

define i64 @_Z13test_cpp_rttiv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1610:
  %0 = alloca i64
  %rbx.1.reg2mem = alloca i64, !insn.addr !89
  %rbx.0.reg2mem = alloca i64, !insn.addr !89
  %1 = load i64, i64* %0
  %2 = call i64 @_Znwm(i64 8), !insn.addr !90
  %3 = inttoptr i64 %2 to i64*, !insn.addr !91
  store i64 ptrtoint (%vtable_3c70_type* @global_var_3c70 to i64), i64* %3, align 8, !insn.addr !91
  %4 = call i64 @_Znwm(i64 8), !insn.addr !92
  %5 = load i64, i64* %3, align 8, !insn.addr !93
  %6 = inttoptr i64 %4 to i64*, !insn.addr !94
  store i64 ptrtoint (%vtable_3c98_type* @global_var_3c98 to i64), i64* %6, align 8, !insn.addr !94
  %7 = add i64 %5, -8, !insn.addr !95
  %8 = inttoptr i64 %7 to i64*, !insn.addr !95
  %9 = load i64, i64* %8, align 8, !insn.addr !95
  %10 = add i64 %9, 8, !insn.addr !96
  %11 = inttoptr i64 %10 to i64*, !insn.addr !96
  %12 = load i64, i64* %11, align 8, !insn.addr !96
  %13 = icmp eq i64 %12, ptrtoint ([15 x i8]* @global_var_2218 to i64), !insn.addr !97
  store i64 10, i64* %rbx.0.reg2mem, !insn.addr !98
  br i1 %13, label %dec_label_pc_1688, label %dec_label_pc_166f, !insn.addr !98

dec_label_pc_166f:                                ; preds = %dec_label_pc_1610
  %14 = inttoptr i64 %12 to i8*, !insn.addr !99
  %15 = load i8, i8* %14, align 1, !insn.addr !99
  %16 = icmp eq i8 %15, 42, !insn.addr !99
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !100
  br i1 %16, label %dec_label_pc_1688, label %dec_label_pc_1678, !insn.addr !100

dec_label_pc_1678:                                ; preds = %dec_label_pc_166f
  %17 = call i32 @strcmp(i8* %14, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2218, i64 0, i64 0)), !insn.addr !101
  %18 = icmp eq i32 %17, 0, !insn.addr !102
  %19 = select i1 %18, i64 10, i64 0, !insn.addr !103
  store i64 %19, i64* %rbx.0.reg2mem, !insn.addr !103
  br label %dec_label_pc_1688, !insn.addr !103

dec_label_pc_1688:                                ; preds = %dec_label_pc_1678, %dec_label_pc_166f, %dec_label_pc_1610
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %20 = load [15 x i8]*, [15 x i8]** @global_var_3d18, align 8, !insn.addr !104
  %21 = icmp eq [15 x i8]* %20, @global_var_2228, !insn.addr !105
  br i1 %21, label %dec_label_pc_16ad, label %dec_label_pc_169f, !insn.addr !106

dec_label_pc_169f:                                ; preds = %dec_label_pc_1688
  %22 = ptrtoint [15 x i8]* %20 to i64
  %23 = trunc i64 %22 to i8
  %24 = icmp eq i8 %23, 42, !insn.addr !107
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !108
  br i1 %24, label %dec_label_pc_16b0, label %dec_label_pc_16a4, !insn.addr !108

dec_label_pc_16a4:                                ; preds = %dec_label_pc_169f
  %25 = getelementptr inbounds [15 x i8], [15 x i8]* %20, i64 0, i64 0, !insn.addr !109
  %26 = call i32 @strcmp(i8* %25, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2228, i64 0, i64 0)), !insn.addr !109
  %27 = icmp eq i32 %26, 0, !insn.addr !110
  %28 = icmp eq i1 %27, false, !insn.addr !111
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !111
  br i1 %28, label %dec_label_pc_16b0, label %dec_label_pc_16ad, !insn.addr !111

dec_label_pc_16ad:                                ; preds = %dec_label_pc_16a4, %dec_label_pc_1688
  %29 = or i64 %rbx.0.reload, 20, !insn.addr !112
  store i64 %29, i64* %rbx.1.reg2mem, !insn.addr !112
  br label %dec_label_pc_16b0, !insn.addr !112

dec_label_pc_16b0:                                ; preds = %dec_label_pc_16ad, %dec_label_pc_16a4, %dec_label_pc_169f
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %30 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3cf8, i32 0, i64 %1), !insn.addr !113
  %31 = add nsw i64 %rbx.1.reload, 100, !insn.addr !114
  %32 = icmp eq i64 %30, 0, !insn.addr !115
  %33 = icmp eq i1 %32, false, !insn.addr !116
  %34 = select i1 %33, i64 %31, i64 %rbx.1.reload, !insn.addr !116
  %35 = call i64 @__dynamic_cast(i64 %4, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3d10, i32 0, i64 %30), !insn.addr !117
  %36 = add nsw i64 %34, 200, !insn.addr !118
  %37 = icmp eq i64 %35, 0, !insn.addr !119
  %38 = icmp eq i1 %37, false, !insn.addr !120
  %.v = select i1 %38, i64 %36, i64 %34
  %39 = inttoptr i64 %12 to i8*, !insn.addr !121
  %40 = load i8, i8* %39, align 1, !insn.addr !121
  %41 = icmp eq i8 %40, 42, !insn.addr !121
  %42 = zext i1 %41 to i64, !insn.addr !122
  %43 = add i64 %12, %42, !insn.addr !123
  %44 = inttoptr i64 %43 to i8*, !insn.addr !124
  %45 = call i32 @strlen(i8* %44), !insn.addr !124
  %46 = trunc i64 %.v to i32
  %47 = add i32 %45, %46, !insn.addr !125
  %48 = zext i32 %47 to i64, !insn.addr !126
  ret i64 %48, !insn.addr !127

; uselistorder directives
  uselistorder i64 %30, { 1, 0 }
  uselistorder [15 x i8]* %20, { 1, 0, 2 }
  uselistorder i64 %rbx.0.reload, { 2, 0, 1 }
  uselistorder i64 %12, { 0, 2, 1, 3 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 (i64, i64, i64*, i32, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 10, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1740:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-52 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !128
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2018 to i8*)), !insn.addr !129
  store i64 1953719636, i64* %stack_var_-52, align 8, !insn.addr !130
  %4 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !131
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !131
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_203c to i8*)), !insn.addr !132
  %7 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !133
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_205a to i8*)), !insn.addr !134
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2076 to i8*)), !insn.addr !135
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !136
  %11 = call i64 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !137
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20ae to i8*)), !insn.addr !138
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20cb to i8*)), !insn.addr !139
  %14 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !140
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e7 to i8*)), !insn.addr !141
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2103 to i8*)), !insn.addr !142
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_211f to i8*)), !insn.addr !143
  %18 = call i64 @_Z18test_cpp_exceptionv(i64 1, i64 ptrtoint (i8** @global_var_211f to i64), i64 85), !insn.addr !144
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_213b to i8*)), !insn.addr !145
  %20 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !146
  %21 = and i64 %20, 4294967295, !insn.addr !147
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2158 to i8*)), !insn.addr !148
  %23 = call i64 @_Z13test_cpp_rttiv(i64 1, i64 ptrtoint (i8** @global_var_2158 to i64), i64 %21, i64 %1), !insn.addr !149
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !150
  %25 = icmp eq i64 %2, %24, !insn.addr !150
  %26 = icmp eq i1 %25, false, !insn.addr !151
  br i1 %26, label %dec_label_pc_18e3, label %dec_label_pc_18cc, !insn.addr !151

dec_label_pc_18cc:                                ; preds = %dec_label_pc_1740
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2175 to i8*)), !insn.addr !152
  %28 = sext i32 %27 to i64, !insn.addr !152
  ret i64 %28, !insn.addr !152

dec_label_pc_18e3:                                ; preds = %dec_label_pc_1740
  call void @__stack_chk_fail(), !insn.addr !153
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !154

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 0 }
  uselistorder i1 false, { 6, 2, 3, 4, 5, 0, 1 }
  uselistorder i8** @global_var_2158, { 1, 0 }
  uselistorder i64 85, { 1, 0 }
  uselistorder i8** @global_var_211f, { 1, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_18f0:
  %0 = add i32 %arg2, 1, !insn.addr !155
  %1 = zext i32 %0 to i64, !insn.addr !155
  ret i64 %1, !insn.addr !156
}

define i64 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_1900:
  ret i64 ptrtoint ([5 x i8]* @global_var_2004 to i64), !insn.addr !157
}

define i64 @_ZN4BaseD1Ev() local_unnamed_addr {
dec_label_pc_1910:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !158
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1920:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !159
  %2 = inttoptr i64 %1 to i32*, !insn.addr !159
  %3 = load i32, i32* %2, align 4, !insn.addr !159
  %4 = mul i32 %3, %arg2, !insn.addr !160
  %5 = zext i32 %4 to i64, !insn.addr !160
  ret i64 %5, !insn.addr !161
}

define i64 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_1930:
  ret i64 ptrtoint ([8 x i8]* @global_var_2009 to i64), !insn.addr !162
}

define i64 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_1940:
  ret i64 30, !insn.addr !163
}

define i64 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1950:
  ret i64 40, !insn.addr !164
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1960:
  ret i64 40, !insn.addr !165
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1970:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !166
  %2 = inttoptr i64 %1 to i64*, !insn.addr !166
  %3 = load i64, i64* %2, align 8, !insn.addr !166
  %4 = add i64 %0, 8, !insn.addr !167
  %5 = add i64 %4, %3, !insn.addr !167
  %6 = inttoptr i64 %5 to i32*, !insn.addr !167
  %7 = load i32, i32* %6, align 4, !insn.addr !167
  %8 = add i32 %7, 150, !insn.addr !168
  %9 = zext i32 %8 to i64, !insn.addr !168
  ret i64 %9, !insn.addr !169

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1990:
  %0 = add i64 %arg1, -24, !insn.addr !170
  %1 = inttoptr i64 %0 to i64*, !insn.addr !170
  %2 = load i64, i64* %1, align 8, !insn.addr !170
  %3 = add i64 %2, %arg1, !insn.addr !170
  %4 = inttoptr i64 %3 to i64*, !insn.addr !171
  %5 = load i64, i64* %4, align 8, !insn.addr !171
  %6 = add i64 %5, -24, !insn.addr !172
  %7 = inttoptr i64 %6 to i64*, !insn.addr !172
  %8 = load i64, i64* %7, align 8, !insn.addr !172
  %9 = add i64 %3, 8, !insn.addr !173
  %10 = add i64 %9, %8, !insn.addr !173
  %11 = inttoptr i64 %10 to i32*, !insn.addr !173
  %12 = load i32, i32* %11, align 4, !insn.addr !173
  %13 = add i32 %12, 150, !insn.addr !174
  %14 = zext i32 %13 to i64, !insn.addr !174
  ret i64 %14, !insn.addr !175

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !176
  %2 = inttoptr i64 %1 to i64*, !insn.addr !176
  %3 = load i64, i64* %2, align 8, !insn.addr !176
  %4 = add i64 %0, 8, !insn.addr !177
  %5 = add i64 %4, %3, !insn.addr !177
  %6 = inttoptr i64 %5 to i32*, !insn.addr !177
  %7 = load i32, i32* %6, align 4, !insn.addr !177
  %8 = add i32 %7, 200, !insn.addr !178
  %9 = zext i32 %8 to i64, !insn.addr !178
  ret i64 %9, !insn.addr !179

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_19d0:
  %0 = add i64 %arg1, -24, !insn.addr !180
  %1 = inttoptr i64 %0 to i64*, !insn.addr !180
  %2 = load i64, i64* %1, align 8, !insn.addr !180
  %3 = add i64 %2, %arg1, !insn.addr !180
  %4 = inttoptr i64 %3 to i64*, !insn.addr !181
  %5 = load i64, i64* %4, align 8, !insn.addr !181
  %6 = add i64 %5, -24, !insn.addr !182
  %7 = inttoptr i64 %6 to i64*, !insn.addr !182
  %8 = load i64, i64* %7, align 8, !insn.addr !182
  %9 = add i64 %3, 8, !insn.addr !183
  %10 = add i64 %9, %8, !insn.addr !183
  %11 = inttoptr i64 %10 to i32*, !insn.addr !183
  %12 = load i32, i32* %11, align 4, !insn.addr !183
  %13 = add i32 %12, 200, !insn.addr !184
  %14 = zext i32 %13 to i64, !insn.addr !184
  ret i64 %14, !insn.addr !185

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !186
  %2 = inttoptr i64 %1 to i64*, !insn.addr !186
  %3 = load i64, i64* %2, align 8, !insn.addr !186
  %4 = add i64 %0, 8, !insn.addr !187
  %5 = add i64 %4, %3, !insn.addr !187
  %6 = inttoptr i64 %5 to i32*, !insn.addr !187
  %7 = load i32, i32* %6, align 4, !insn.addr !187
  %8 = add i32 %7, 250, !insn.addr !188
  %9 = zext i32 %8 to i64, !insn.addr !188
  ret i64 %9, !insn.addr !189

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = add i64 %arg1, -24, !insn.addr !190
  %1 = inttoptr i64 %0 to i64*, !insn.addr !190
  %2 = load i64, i64* %1, align 8, !insn.addr !190
  %3 = add i64 %2, %arg1, !insn.addr !190
  %4 = inttoptr i64 %3 to i64*, !insn.addr !191
  %5 = load i64, i64* %4, align 8, !insn.addr !191
  %6 = add i64 %5, -24, !insn.addr !192
  %7 = inttoptr i64 %6 to i64*, !insn.addr !192
  %8 = load i64, i64* %7, align 8, !insn.addr !192
  %9 = add i64 %3, 8, !insn.addr !193
  %10 = add i64 %9, %8, !insn.addr !193
  %11 = inttoptr i64 %10 to i32*, !insn.addr !193
  %12 = load i32, i32* %11, align 4, !insn.addr !193
  %13 = add i32 %12, 250, !insn.addr !194
  %14 = zext i32 %13 to i64, !insn.addr !194
  ret i64 %14, !insn.addr !195

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = add i64 %arg1, -16, !insn.addr !196
  %1 = inttoptr i64 %0 to i64*, !insn.addr !196
  %2 = load i64, i64* %1, align 8, !insn.addr !196
  %3 = add i64 %2, -24, !insn.addr !197
  %4 = inttoptr i64 %3 to i64*, !insn.addr !197
  %5 = load i64, i64* %4, align 8, !insn.addr !197
  %6 = add i64 %arg1, -8, !insn.addr !198
  %7 = add i64 %6, %5, !insn.addr !198
  %8 = inttoptr i64 %7 to i32*, !insn.addr !198
  %9 = load i32, i32* %8, align 4, !insn.addr !198
  %10 = add i32 %9, 250, !insn.addr !199
  %11 = zext i32 %10 to i64, !insn.addr !199
  ret i64 %11, !insn.addr !200

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1a50:
  ret i64 1, !insn.addr !201
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1a60:
  ret i64 2, !insn.addr !202
}

define i64 @_ZN12RTTIDerivedBD1Ev() {
dec_label_pc_1a70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !203
}

define i64 @_ZN12RTTIDerivedAD1Ev() {
dec_label_pc_1a80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !204
}

define i64 @_ZN14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !205
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !206
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !207
}

define i64 @_ZN12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1ac0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !208
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !209
}

define i64 @_ZN7DerivedD1Ev() local_unnamed_addr {
dec_label_pc_1ae0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !210
}

define i64 @_ZN4BaseD0Ev() local_unnamed_addr {
dec_label_pc_1af0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !211
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !211
  ret i64 %3, !insn.addr !211
}

define i64 @_ZN7DerivedD0Ev() local_unnamed_addr {
dec_label_pc_1b00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !212
  %3 = call i64 @_ZdlPvm(i64* %2, i64 16), !insn.addr !212
  ret i64 %3, !insn.addr !212

; uselistorder directives
  uselistorder i64 16, { 1, 0 }
}

define i64 @_ZN12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !213
  %3 = call i64 @_ZdlPvm(i64* %2, i64 32), !insn.addr !213
  ret i64 %3, !insn.addr !213
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = add i64 %arg1, -16, !insn.addr !214
  %1 = inttoptr i64 %0 to i64*, !insn.addr !215
  %2 = call i64 @_ZdlPvm(i64* %1, i64 32), !insn.addr !215
  ret i64 %2, !insn.addr !215
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_1b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !216
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !216
  ret i64 %3, !insn.addr !216
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_1b50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !217
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !217
  ret i64 %3, !insn.addr !217
}

define i64 @_ZN14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !218
  %3 = call i64 @_ZdlPvm(i64* %2, i64 48), !insn.addr !218
  ret i64 %3, !insn.addr !218
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b70:
  %0 = add i64 %arg1, -32, !insn.addr !219
  %1 = inttoptr i64 %0 to i64*, !insn.addr !219
  %2 = load i64, i64* %1, align 8, !insn.addr !219
  %3 = add i64 %2, %arg1, !insn.addr !219
  %4 = inttoptr i64 %3 to i64*, !insn.addr !220
  %5 = call i64 @_ZdlPvm(i64* %4, i64 48), !insn.addr !220
  ret i64 %5, !insn.addr !220
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = add i64 %arg1, -16, !insn.addr !221
  %1 = inttoptr i64 %0 to i64*, !insn.addr !222
  %2 = call i64 @_ZdlPvm(i64* %1, i64 48), !insn.addr !222
  ret i64 %2, !insn.addr !222

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = sub i32 %arg1, %arg2, !insn.addr !223
  %1 = xor i32 %arg2, %arg1, !insn.addr !223
  %2 = xor i32 %0, %arg1, !insn.addr !223
  %3 = and i32 %2, %1, !insn.addr !223
  %4 = icmp slt i32 %3, 0, !insn.addr !223
  %5 = icmp slt i32 %0, 0, !insn.addr !223
  %6 = icmp eq i1 %5, %4, !insn.addr !224
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !224
  ret i32 %7, !insn.addr !225

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = fptrunc double %arg1 to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = fptrunc double %arg2 to float, !insn.addr !226
  %4 = bitcast float %3 to i32, !insn.addr !226
  %5 = sext i32 %4 to i128, !insn.addr !226
  %6 = call i128 @__asm_maxsd(i128 %2, i128 %5), !insn.addr !226
  %7 = trunc i128 %6 to i64, !insn.addr !227
  %8 = bitcast i64 %7 to double, !insn.addr !227
  ret double %8, !insn.addr !227

; uselistorder directives
  uselistorder i128 (i128, i128)* @__asm_maxsd, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !228
  store i32 %3, i32* %arg2, align 4, !insn.addr !229
  ret void, !insn.addr !230

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1be0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 40, !insn.addr !231
  %4 = inttoptr i64 %3 to i32*, !insn.addr !231
  store i32 0, i32* %4, align 4, !insn.addr !231
  ret i64 %1, !insn.addr !232
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !233
  %2 = inttoptr i64 %1 to i32*, !insn.addr !233
  %3 = load i32, i32* %2, align 4, !insn.addr !233
  %4 = sext i32 %3 to i64, !insn.addr !233
  %5 = icmp sgt i32 %3, 9, !insn.addr !234
  br i1 %5, label %dec_label_pc_1c06, label %dec_label_pc_1bfd, !insn.addr !234

dec_label_pc_1bfd:                                ; preds = %dec_label_pc_1bf0
  %6 = add i32 %3, 1, !insn.addr !235
  store i32 %6, i32* %2, align 4, !insn.addr !236
  %7 = mul i64 %4, 4, !insn.addr !237
  %8 = add i64 %7, %0, !insn.addr !237
  %9 = inttoptr i64 %8 to i32*, !insn.addr !237
  store i32 %arg2, i32* %9, align 4, !insn.addr !237
  br label %dec_label_pc_1c06, !insn.addr !237

dec_label_pc_1c06:                                ; preds = %dec_label_pc_1bfd, %dec_label_pc_1bf0
  ret i64 %4, !insn.addr !238

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = icmp slt i32 %arg2, 0, !insn.addr !239
  br i1 %0, label %dec_label_pc_1c1f, label %dec_label_pc_1c1a, !insn.addr !240

dec_label_pc_1c1a:                                ; preds = %dec_label_pc_1c10
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !241
  %3 = inttoptr i64 %2 to i32*, !insn.addr !241
  %4 = load i32, i32* %3, align 4, !insn.addr !241
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !242
  br i1 %5, label %dec_label_pc_1c20, label %dec_label_pc_1c1f, !insn.addr !242

dec_label_pc_1c1f:                                ; preds = %dec_label_pc_1c1a, %dec_label_pc_1c10
  ret i64 0, !insn.addr !243

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c1a
  %6 = zext i32 %arg2 to i64
  %sext = mul i64 %6, 4294967296
  %7 = ashr exact i64 %sext, 30, !insn.addr !244
  %8 = add i64 %7, %1, !insn.addr !244
  %9 = inttoptr i64 %8 to i32*, !insn.addr !244
  %10 = load i32, i32* %9, align 4, !insn.addr !244
  %11 = zext i32 %10 to i64, !insn.addr !244
  ret i64 %11, !insn.addr !245

; uselistorder directives
  uselistorder i64 30, { 1, 0 }
  uselistorder i64 0, { 2, 47, 48, 7, 8, 5, 6, 37, 9, 10, 0, 46, 3, 4, 1, 49, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !246
  %2 = inttoptr i64 %1 to i32*, !insn.addr !246
  %3 = load i32, i32* %2, align 4, !insn.addr !246
  %4 = zext i32 %3 to i64, !insn.addr !246
  ret i64 %4, !insn.addr !247

; uselistorder directives
  uselistorder i64 40, { 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7 }
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !248
  %4 = inttoptr i64 %3 to i32*, !insn.addr !248
  store i32 0, i32* %4, align 4, !insn.addr !248
  ret i64 %1, !insn.addr !249
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_1c50:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = add i64 %2, 80, !insn.addr !250
  %4 = inttoptr i64 %3 to i32*, !insn.addr !250
  %5 = load i32, i32* %4, align 4, !insn.addr !250
  %6 = sext i32 %5 to i64, !insn.addr !250
  %7 = icmp sgt i32 %5, 9, !insn.addr !251
  br i1 %7, label %dec_label_pc_1c68, label %dec_label_pc_1c5d, !insn.addr !251

dec_label_pc_1c5d:                                ; preds = %dec_label_pc_1c50
  %8 = add i32 %5, 1, !insn.addr !252
  store i32 %8, i32* %4, align 4, !insn.addr !253
  %9 = call i64 @__asm_movsd.4(i128 %1), !insn.addr !254
  %10 = mul i64 %6, 8, !insn.addr !254
  %11 = add i64 %10, %2, !insn.addr !254
  %12 = inttoptr i64 %11 to i64*, !insn.addr !254
  store i64 %9, i64* %12, align 8, !insn.addr !254
  br label %dec_label_pc_1c68, !insn.addr !254

dec_label_pc_1c68:                                ; preds = %dec_label_pc_1c5d, %dec_label_pc_1c50
  ret i64 %6, !insn.addr !255

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 8, { 0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13, 4, 5 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !256
  %3 = icmp slt i32 %arg2, 0, !insn.addr !257
  br i1 %3, label %dec_label_pc_1c81, label %dec_label_pc_1c7c, !insn.addr !258

dec_label_pc_1c7c:                                ; preds = %dec_label_pc_1c70
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !259
  %6 = inttoptr i64 %5 to i32*, !insn.addr !259
  %7 = load i32, i32* %6, align 4, !insn.addr !259
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !260
  br i1 %8, label %dec_label_pc_1c88, label %dec_label_pc_1c81, !insn.addr !260

dec_label_pc_1c81:                                ; preds = %dec_label_pc_1c7c, %dec_label_pc_1c70
  ret i128 %2, !insn.addr !261

dec_label_pc_1c88:                                ; preds = %dec_label_pc_1c7c
  %9 = zext i32 %arg2 to i64
  %sext = mul i64 %9, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !262
  %11 = add i64 %10, %4, !insn.addr !262
  %12 = inttoptr i64 %11 to i64*, !insn.addr !262
  %13 = load i64, i64* %12, align 8, !insn.addr !262
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !262
  ret i128 %14, !insn.addr !263

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 0, 1, 12, 2, 3, 4, 5 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1ca0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !264
  %2 = inttoptr i64 %1 to i32*, !insn.addr !264
  %3 = load i32, i32* %2, align 4, !insn.addr !264
  %4 = zext i32 %3 to i64, !insn.addr !264
  ret i64 %4, !insn.addr !265
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1ca8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !266

; uselistorder directives
  uselistorder i32 1, { 23, 1, 27, 0, 22, 28, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 44, 4, 25, 24, 3, 42, 43, 45, 2, 46, 26 }
}

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @_ZdlPvm(i64*, i64) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64, i64*, i32, i64) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64*, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i64 @__asm_movsd.4(i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i128 @__asm_maxsd(i128, i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4404}
!7 = !{i64 4420}
!8 = !{i64 4436}
!9 = !{i64 4452}
!10 = !{i64 4468}
!11 = !{i64 4484}
!12 = !{i64 4500}
!13 = !{i64 4516}
!14 = !{i64 4532}
!15 = !{i64 4548}
!16 = !{i64 4564}
!17 = !{i64 4580}
!18 = !{i64 4596}
!19 = !{i64 4612}
!20 = !{i64 4628}
!21 = !{i64 4644}
!22 = !{i64 4660}
!23 = !{i64 4685}
!24 = !{i64 4699}
!25 = !{i64 4708}
!26 = !{i64 4830}
!27 = !{i64 4835}
!28 = !{i64 4844}
!29 = !{i64 4875}
!30 = !{i64 4888}
!31 = !{i64 4899}
!32 = !{i64 4927}
!33 = !{i64 4932}
!34 = !{i64 4950}
!35 = !{i64 4991}
!36 = !{i64 4997}
!37 = !{i64 5048}
!38 = !{i64 5112}
!39 = !{i64 5124}
!40 = !{i64 5131}
!41 = !{i64 5134}
!42 = !{i64 5145}
!43 = !{i64 5147}
!44 = !{i64 5154}
!45 = !{i64 5159}
!46 = !{i64 5164}
!47 = !{i64 5172}
!48 = !{i64 5176}
!49 = !{i64 5188}
!50 = !{i64 5208}
!51 = !{i64 5236}
!52 = !{i64 5281}
!53 = !{i64 5296}
!54 = !{i64 5305}
!55 = !{i64 5286}
!56 = !{i64 5311}
!57 = !{i64 5312}
!58 = !{i64 5317}
!59 = !{i64 5332}
!60 = !{i64 5342}
!61 = !{i64 5345}
!62 = !{i64 5367}
!63 = !{i64 5385}
!64 = !{i64 5401}
!65 = !{i64 5417}
!66 = !{i64 5433}
!67 = !{i64 5459}
!68 = !{i64 5475}
!69 = !{i64 5480}
!70 = !{i64 5488}
!71 = !{i64 5498}
!72 = !{i64 5513}
!73 = !{i64 5521}
!74 = !{i64 5527}
!75 = !{i64 5535}
!76 = !{i64 5540}
!77 = !{i64 5546}
!78 = !{i64 5552}
!79 = !{i64 5556}
!80 = !{i64 5565}
!81 = !{i64 5574}
!82 = !{i64 5550}
!83 = !{i64 5581}
!84 = !{i64 5582}
!85 = !{i64 5598}
!86 = !{i64 5609}
!87 = !{i64 5625}
!88 = !{i64 5641}
!89 = !{i64 5648}
!90 = !{i64 5676}
!91 = !{i64 5696}
!92 = !{i64 5700}
!93 = !{i64 5705}
!94 = !{i64 5726}
!95 = !{i64 5730}
!96 = !{i64 5734}
!97 = !{i64 5738}
!98 = !{i64 5741}
!99 = !{i64 5745}
!100 = !{i64 5750}
!101 = !{i64 5755}
!102 = !{i64 5760}
!103 = !{i64 5765}
!104 = !{i64 5782}
!105 = !{i64 5786}
!106 = !{i64 5789}
!107 = !{i64 5791}
!108 = !{i64 5794}
!109 = !{i64 5796}
!110 = !{i64 5801}
!111 = !{i64 5803}
!112 = !{i64 5805}
!113 = !{i64 5830}
!114 = !{i64 5851}
!115 = !{i64 5854}
!116 = !{i64 5857}
!117 = !{i64 5862}
!118 = !{i64 5870}
!119 = !{i64 5876}
!120 = !{i64 5879}
!121 = !{i64 5884}
!122 = !{i64 5889}
!123 = !{i64 5892}
!124 = !{i64 5898}
!125 = !{i64 5906}
!126 = !{i64 5928}
!127 = !{i64 5941}
!128 = !{i64 5967}
!129 = !{i64 5983}
!130 = !{i64 5995}
!131 = !{i64 6045}
!132 = !{i64 6070}
!133 = !{i64 6087}
!134 = !{i64 6096}
!135 = !{i64 6120}
!136 = !{i64 6144}
!137 = !{i64 6161}
!138 = !{i64 6170}
!139 = !{i64 6194}
!140 = !{i64 6199}
!141 = !{i64 6220}
!142 = !{i64 6244}
!143 = !{i64 6268}
!144 = !{i64 6273}
!145 = !{i64 6294}
!146 = !{i64 6311}
!147 = !{i64 6316}
!148 = !{i64 6320}
!149 = !{i64 6325}
!150 = !{i64 6337}
!151 = !{i64 6346}
!152 = !{i64 6366}
!153 = !{i64 6371}
!154 = !{i64 6376}
!155 = !{i64 6388}
!156 = !{i64 6391}
!157 = !{i64 6411}
!158 = !{i64 6420}
!159 = !{i64 6436}
!160 = !{i64 6439}
!161 = !{i64 6442}
!162 = !{i64 6459}
!163 = !{i64 6473}
!164 = !{i64 6489}
!165 = !{i64 6505}
!166 = !{i64 6519}
!167 = !{i64 6523}
!168 = !{i64 6527}
!169 = !{i64 6532}
!170 = !{i64 6551}
!171 = !{i64 6555}
!172 = !{i64 6558}
!173 = !{i64 6562}
!174 = !{i64 6566}
!175 = !{i64 6571}
!176 = !{i64 6583}
!177 = !{i64 6587}
!178 = !{i64 6591}
!179 = !{i64 6596}
!180 = !{i64 6615}
!181 = !{i64 6619}
!182 = !{i64 6622}
!183 = !{i64 6626}
!184 = !{i64 6630}
!185 = !{i64 6635}
!186 = !{i64 6647}
!187 = !{i64 6651}
!188 = !{i64 6655}
!189 = !{i64 6660}
!190 = !{i64 6679}
!191 = !{i64 6683}
!192 = !{i64 6686}
!193 = !{i64 6690}
!194 = !{i64 6694}
!195 = !{i64 6699}
!196 = !{i64 6708}
!197 = !{i64 6712}
!198 = !{i64 6716}
!199 = !{i64 6720}
!200 = !{i64 6725}
!201 = !{i64 6745}
!202 = !{i64 6761}
!203 = !{i64 6772}
!204 = !{i64 6788}
!205 = !{i64 6804}
!206 = !{i64 6820}
!207 = !{i64 6836}
!208 = !{i64 6852}
!209 = !{i64 6868}
!210 = !{i64 6884}
!211 = !{i64 6905}
!212 = !{i64 6921}
!213 = !{i64 6937}
!214 = !{i64 6948}
!215 = !{i64 6957}
!216 = !{i64 6985}
!217 = !{i64 7001}
!218 = !{i64 7017}
!219 = !{i64 7036}
!220 = !{i64 7040}
!221 = !{i64 7060}
!222 = !{i64 7069}
!223 = !{i64 7092}
!224 = !{i64 7096}
!225 = !{i64 7099}
!226 = !{i64 7108}
!227 = !{i64 7112}
!228 = !{i64 7128}
!229 = !{i64 7130}
!230 = !{i64 7132}
!231 = !{i64 7140}
!232 = !{i64 7147}
!233 = !{i64 7156}
!234 = !{i64 7163}
!235 = !{i64 7165}
!236 = !{i64 7168}
!237 = !{i64 7171}
!238 = !{i64 7174}
!239 = !{i64 7190}
!240 = !{i64 7192}
!241 = !{i64 7194}
!242 = !{i64 7197}
!243 = !{i64 7199}
!244 = !{i64 7203}
!245 = !{i64 7206}
!246 = !{i64 7220}
!247 = !{i64 7223}
!248 = !{i64 7236}
!249 = !{i64 7243}
!250 = !{i64 7252}
!251 = !{i64 7259}
!252 = !{i64 7261}
!253 = !{i64 7264}
!254 = !{i64 7267}
!255 = !{i64 7272}
!256 = !{i64 7284}
!257 = !{i64 7288}
!258 = !{i64 7290}
!259 = !{i64 7292}
!260 = !{i64 7295}
!261 = !{i64 7297}
!262 = !{i64 7307}
!263 = !{i64 7312}
!264 = !{i64 7332}
!265 = !{i64 7335}
!266 = !{i64 7348}
