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
  %r14.0.reg2mem = alloca i64, !insn.addr !89
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
  store i64 30, i64* %r14.0.reg2mem, !insn.addr !98
  br i1 %13, label %dec_label_pc_1697, label %dec_label_pc_166e, !insn.addr !98

dec_label_pc_166e:                                ; preds = %dec_label_pc_1610
  %14 = inttoptr i64 %12 to i8*, !insn.addr !99
  %15 = load i8, i8* %14, align 1, !insn.addr !99
  %16 = icmp eq i8 %15, 42, !insn.addr !99
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !100
  store i64 20, i64* %r14.0.reg2mem, !insn.addr !100
  br i1 %16, label %dec_label_pc_1697, label %dec_label_pc_1679, !insn.addr !100

dec_label_pc_1679:                                ; preds = %dec_label_pc_166e
  %17 = call i32 @strcmp(i8* %14, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2218, i64 0, i64 0)), !insn.addr !101
  %18 = icmp eq i32 %17, 0, !insn.addr !102
  %19 = select i1 %18, i64 30, i64 20, !insn.addr !103
  %20 = select i1 %18, i64 10, i64 0, !insn.addr !104
  store i64 %20, i64* %rbx.0.reg2mem, !insn.addr !104
  store i64 %19, i64* %r14.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_1697, !insn.addr !104

dec_label_pc_1697:                                ; preds = %dec_label_pc_1610, %dec_label_pc_166e, %dec_label_pc_1679
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %21 = load [15 x i8]*, [15 x i8]** @global_var_3d18, align 8, !insn.addr !105
  %22 = icmp eq [15 x i8]* %21, @global_var_2228, !insn.addr !106
  store i64 %r14.0.reload, i64* %rbx.1.reg2mem, !insn.addr !107
  br i1 %22, label %dec_label_pc_16c2, label %dec_label_pc_16b2, !insn.addr !107

dec_label_pc_16b2:                                ; preds = %dec_label_pc_1697
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %23 = ptrtoint [15 x i8]* %21 to i64
  %24 = trunc i64 %23 to i8
  %25 = icmp eq i8 %24, 42, !insn.addr !108
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !109
  br i1 %25, label %dec_label_pc_16c2, label %dec_label_pc_16b7, !insn.addr !109

dec_label_pc_16b7:                                ; preds = %dec_label_pc_16b2
  %26 = getelementptr inbounds [15 x i8], [15 x i8]* %21, i64 0, i64 0, !insn.addr !110
  %27 = call i32 @strcmp(i8* %26, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2228, i64 0, i64 0)), !insn.addr !110
  %28 = icmp eq i32 %27, 0, !insn.addr !111
  %.v = select i1 %28, i64 %r14.0.reload, i64 %rbx.0.reload
  store i64 %.v, i64* %rbx.1.reg2mem, !insn.addr !112
  br label %dec_label_pc_16c2, !insn.addr !112

dec_label_pc_16c2:                                ; preds = %dec_label_pc_1697, %dec_label_pc_16b7, %dec_label_pc_16b2
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %29 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3cf8, i32 0, i64 %1), !insn.addr !113
  %30 = add nsw i64 %rbx.1.reload, 100, !insn.addr !114
  %31 = icmp eq i64 %29, 0, !insn.addr !115
  %32 = icmp eq i1 %31, false, !insn.addr !116
  %33 = select i1 %32, i64 %30, i64 %rbx.1.reload, !insn.addr !116
  %34 = call i64 @__dynamic_cast(i64 %4, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3d10, i32 0, i64 %29), !insn.addr !117
  %35 = add nsw i64 %33, 200, !insn.addr !118
  %36 = icmp eq i64 %34, 0, !insn.addr !119
  %37 = icmp eq i1 %36, false, !insn.addr !120
  %.v1 = select i1 %37, i64 %35, i64 %33
  %38 = inttoptr i64 %12 to i8*, !insn.addr !121
  %39 = load i8, i8* %38, align 1, !insn.addr !121
  %40 = icmp eq i8 %39, 42, !insn.addr !121
  %41 = zext i1 %40 to i64, !insn.addr !122
  %42 = add i64 %12, %41, !insn.addr !123
  %43 = inttoptr i64 %42 to i8*, !insn.addr !124
  %44 = call i32 @strlen(i8* %43), !insn.addr !124
  %45 = trunc i64 %.v1 to i32
  %46 = add i32 %44, %45, !insn.addr !125
  %47 = zext i32 %46 to i64, !insn.addr !126
  ret i64 %47, !insn.addr !127

; uselistorder directives
  uselistorder i64 %29, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder [15 x i8]* %21, { 1, 0, 2 }
  uselistorder i64 %r14.0.reload, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %r14.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 100, { 1, 0 }
  uselistorder i64 (i64, i64, i64*, i32, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16c2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1697, { 2, 1, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1780:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-60 = alloca i64, align 8
  %stack_var_-52 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !128
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_2018 to i8*)), !insn.addr !129
  store i64 1953719636, i64* %stack_var_-52, align 8, !insn.addr !130
  %4 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !131
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !131
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_203c to i8*)), !insn.addr !132
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_205a to i8*)), !insn.addr !133
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2076 to i8*)), !insn.addr !134
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !135
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20ae to i8*)), !insn.addr !136
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20cb to i8*)), !insn.addr !137
  %12 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !138
  %13 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !139
  %14 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !140
  %15 = trunc i128 %14 to i64, !insn.addr !141
  %16 = bitcast i64 %15 to double, !insn.addr !141
  %17 = fptrunc double %16 to float, !insn.addr !141
  %18 = bitcast float %17 to i32, !insn.addr !141
  %19 = sext i32 %18 to i128, !insn.addr !141
  %20 = call i128 @__asm_maxsd(i128 %19, i128 sext (i32 bitcast (float fptrunc (double bitcast (i64 ptrtoint (i32* @0 to i64) to double) to float) to i32) to i128)), !insn.addr !141
  %21 = trunc i128 %20 to i64, !insn.addr !141
  %22 = bitcast i64 %21 to double, !insn.addr !141
  %23 = fptrunc double %22 to float, !insn.addr !141
  %24 = bitcast float %23 to i32, !insn.addr !141
  %25 = sext i32 %24 to i128, !insn.addr !141
  store i64 10, i64* %stack_var_-64, align 8, !insn.addr !142
  %26 = call i64 @__asm_movsd.4(i128 %25), !insn.addr !143
  store i64 20, i64* %stack_var_-60, align 8, !insn.addr !144
  %27 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !145
  %28 = bitcast i64* %stack_var_-60 to i32*, !insn.addr !145
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %27, i32* nonnull %28), !insn.addr !145
  %29 = call i128 @__asm_movsd(i64 %26), !insn.addr !146
  %30 = call i32 @__asm_cvttsd2si(i128 %29), !insn.addr !147
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e7 to i8*)), !insn.addr !148
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2103 to i8*)), !insn.addr !149
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_211f to i8*)), !insn.addr !150
  %34 = call i64 @_Z18test_cpp_exceptionv(i64 1, i64 ptrtoint (i8** @global_var_211f to i64), i64 85), !insn.addr !151
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_213b to i8*)), !insn.addr !152
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2158 to i8*)), !insn.addr !153
  %37 = call i64 @_Z13test_cpp_rttiv(i64 1, i64 ptrtoint (i8** @global_var_2158 to i64), i64 703, i64 %1), !insn.addr !154
  %38 = call i64 @__readfsqword(i64 40), !insn.addr !155
  %39 = icmp eq i64 %2, %38, !insn.addr !155
  %40 = icmp eq i1 %39, false, !insn.addr !156
  br i1 %40, label %dec_label_pc_197f, label %dec_label_pc_1967, !insn.addr !156

dec_label_pc_1967:                                ; preds = %dec_label_pc_1780
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2175 to i8*)), !insn.addr !157
  %42 = sext i32 %41 to i64, !insn.addr !157
  ret i64 %42, !insn.addr !157

dec_label_pc_197f:                                ; preds = %dec_label_pc_1780
  call void @__stack_chk_fail(), !insn.addr !158
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !159

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 2, 0, 1, 3 }
  uselistorder i1 false, { 5, 3, 4, 0, 1, 2 }
  uselistorder i64 703, { 1, 0 }
  uselistorder i8** @global_var_2158, { 1, 0 }
  uselistorder i64 85, { 1, 0 }
  uselistorder i8** @global_var_211f, { 1, 0 }
  uselistorder i32 (i128)* @__asm_cvttsd2si, { 1, 0 }
  uselistorder i64 20, { 1, 2, 0 }
  uselistorder i64 10, { 1, 2, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1990:
  %0 = add i32 %arg2, 1, !insn.addr !160
  %1 = zext i32 %0 to i64, !insn.addr !160
  ret i64 %1, !insn.addr !161
}

define i64 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_19a0:
  ret i64 ptrtoint ([5 x i8]* @global_var_2004 to i64), !insn.addr !162
}

define i64 @_ZN4BaseD1Ev() local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !163
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_19c0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !164
  %2 = inttoptr i64 %1 to i32*, !insn.addr !164
  %3 = load i32, i32* %2, align 4, !insn.addr !164
  %4 = mul i32 %3, %arg2, !insn.addr !165
  %5 = zext i32 %4 to i64, !insn.addr !165
  ret i64 %5, !insn.addr !166
}

define i64 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_19d0:
  ret i64 ptrtoint ([8 x i8]* @global_var_2009 to i64), !insn.addr !167
}

define i64 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_19e0:
  ret i64 30, !insn.addr !168
}

define i64 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_19f0:
  ret i64 40, !insn.addr !169
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1a00:
  ret i64 40, !insn.addr !170
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !171
  %2 = inttoptr i64 %1 to i64*, !insn.addr !171
  %3 = load i64, i64* %2, align 8, !insn.addr !171
  %4 = add i64 %0, 8, !insn.addr !172
  %5 = add i64 %4, %3, !insn.addr !172
  %6 = inttoptr i64 %5 to i32*, !insn.addr !172
  %7 = load i32, i32* %6, align 4, !insn.addr !172
  %8 = add i32 %7, 150, !insn.addr !173
  %9 = zext i32 %8 to i64, !insn.addr !173
  ret i64 %9, !insn.addr !174

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = add i64 %arg1, -24, !insn.addr !175
  %1 = inttoptr i64 %0 to i64*, !insn.addr !175
  %2 = load i64, i64* %1, align 8, !insn.addr !175
  %3 = add i64 %2, %arg1, !insn.addr !175
  %4 = inttoptr i64 %3 to i64*, !insn.addr !176
  %5 = load i64, i64* %4, align 8, !insn.addr !176
  %6 = add i64 %5, -24, !insn.addr !177
  %7 = inttoptr i64 %6 to i64*, !insn.addr !177
  %8 = load i64, i64* %7, align 8, !insn.addr !177
  %9 = add i64 %3, 8, !insn.addr !178
  %10 = add i64 %9, %8, !insn.addr !178
  %11 = inttoptr i64 %10 to i32*, !insn.addr !178
  %12 = load i32, i32* %11, align 4, !insn.addr !178
  %13 = add i32 %12, 150, !insn.addr !179
  %14 = zext i32 %13 to i64, !insn.addr !179
  ret i64 %14, !insn.addr !180

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !181
  %2 = inttoptr i64 %1 to i64*, !insn.addr !181
  %3 = load i64, i64* %2, align 8, !insn.addr !181
  %4 = add i64 %0, 8, !insn.addr !182
  %5 = add i64 %4, %3, !insn.addr !182
  %6 = inttoptr i64 %5 to i32*, !insn.addr !182
  %7 = load i32, i32* %6, align 4, !insn.addr !182
  %8 = add i32 %7, 200, !insn.addr !183
  %9 = zext i32 %8 to i64, !insn.addr !183
  ret i64 %9, !insn.addr !184

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = add i64 %arg1, -24, !insn.addr !185
  %1 = inttoptr i64 %0 to i64*, !insn.addr !185
  %2 = load i64, i64* %1, align 8, !insn.addr !185
  %3 = add i64 %2, %arg1, !insn.addr !185
  %4 = inttoptr i64 %3 to i64*, !insn.addr !186
  %5 = load i64, i64* %4, align 8, !insn.addr !186
  %6 = add i64 %5, -24, !insn.addr !187
  %7 = inttoptr i64 %6 to i64*, !insn.addr !187
  %8 = load i64, i64* %7, align 8, !insn.addr !187
  %9 = add i64 %3, 8, !insn.addr !188
  %10 = add i64 %9, %8, !insn.addr !188
  %11 = inttoptr i64 %10 to i32*, !insn.addr !188
  %12 = load i32, i32* %11, align 4, !insn.addr !188
  %13 = add i32 %12, 200, !insn.addr !189
  %14 = zext i32 %13 to i64, !insn.addr !189
  ret i64 %14, !insn.addr !190

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a90:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !191
  %2 = inttoptr i64 %1 to i64*, !insn.addr !191
  %3 = load i64, i64* %2, align 8, !insn.addr !191
  %4 = add i64 %0, 8, !insn.addr !192
  %5 = add i64 %4, %3, !insn.addr !192
  %6 = inttoptr i64 %5 to i32*, !insn.addr !192
  %7 = load i32, i32* %6, align 4, !insn.addr !192
  %8 = add i32 %7, 250, !insn.addr !193
  %9 = zext i32 %8 to i64, !insn.addr !193
  ret i64 %9, !insn.addr !194

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = add i64 %arg1, -24, !insn.addr !195
  %1 = inttoptr i64 %0 to i64*, !insn.addr !195
  %2 = load i64, i64* %1, align 8, !insn.addr !195
  %3 = add i64 %2, %arg1, !insn.addr !195
  %4 = inttoptr i64 %3 to i64*, !insn.addr !196
  %5 = load i64, i64* %4, align 8, !insn.addr !196
  %6 = add i64 %5, -24, !insn.addr !197
  %7 = inttoptr i64 %6 to i64*, !insn.addr !197
  %8 = load i64, i64* %7, align 8, !insn.addr !197
  %9 = add i64 %3, 8, !insn.addr !198
  %10 = add i64 %9, %8, !insn.addr !198
  %11 = inttoptr i64 %10 to i32*, !insn.addr !198
  %12 = load i32, i32* %11, align 4, !insn.addr !198
  %13 = add i32 %12, 250, !insn.addr !199
  %14 = zext i32 %13 to i64, !insn.addr !199
  ret i64 %14, !insn.addr !200

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = add i64 %arg1, -16, !insn.addr !201
  %1 = inttoptr i64 %0 to i64*, !insn.addr !201
  %2 = load i64, i64* %1, align 8, !insn.addr !201
  %3 = add i64 %2, -24, !insn.addr !202
  %4 = inttoptr i64 %3 to i64*, !insn.addr !202
  %5 = load i64, i64* %4, align 8, !insn.addr !202
  %6 = add i64 %arg1, -8, !insn.addr !203
  %7 = add i64 %6, %5, !insn.addr !203
  %8 = inttoptr i64 %7 to i32*, !insn.addr !203
  %9 = load i32, i32* %8, align 4, !insn.addr !203
  %10 = add i32 %9, 250, !insn.addr !204
  %11 = zext i32 %10 to i64, !insn.addr !204
  ret i64 %11, !insn.addr !205

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1af0:
  ret i64 1, !insn.addr !206
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1b00:
  ret i64 2, !insn.addr !207
}

define i64 @_ZN12RTTIDerivedBD1Ev() {
dec_label_pc_1b10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !208
}

define i64 @_ZN12RTTIDerivedAD1Ev() {
dec_label_pc_1b20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !209
}

define i64 @_ZN14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !210
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !211
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !212
}

define i64 @_ZN12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !213
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !214
}

define i64 @_ZN7DerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !215
}

define i64 @_ZN4BaseD0Ev() local_unnamed_addr {
dec_label_pc_1b90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !216
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !216
  ret i64 %3, !insn.addr !216
}

define i64 @_ZN7DerivedD0Ev() local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !217
  %3 = call i64 @_ZdlPvm(i64* %2, i64 16), !insn.addr !217
  ret i64 %3, !insn.addr !217

; uselistorder directives
  uselistorder i64 16, { 1, 0 }
}

define i64 @_ZN12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !218
  %3 = call i64 @_ZdlPvm(i64* %2, i64 32), !insn.addr !218
  ret i64 %3, !insn.addr !218
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = add i64 %arg1, -16, !insn.addr !219
  %1 = inttoptr i64 %0 to i64*, !insn.addr !220
  %2 = call i64 @_ZdlPvm(i64* %1, i64 32), !insn.addr !220
  ret i64 %2, !insn.addr !220
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_1be0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !221
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !221
  ret i64 %3, !insn.addr !221
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_1bf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !222
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !222
  ret i64 %3, !insn.addr !222
}

define i64 @_ZN14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1c00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !223
  %3 = call i64 @_ZdlPvm(i64* %2, i64 48), !insn.addr !223
  ret i64 %3, !insn.addr !223
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = add i64 %arg1, -32, !insn.addr !224
  %1 = inttoptr i64 %0 to i64*, !insn.addr !224
  %2 = load i64, i64* %1, align 8, !insn.addr !224
  %3 = add i64 %2, %arg1, !insn.addr !224
  %4 = inttoptr i64 %3 to i64*, !insn.addr !225
  %5 = call i64 @_ZdlPvm(i64* %4, i64 48), !insn.addr !225
  ret i64 %5, !insn.addr !225
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = add i64 %arg1, -16, !insn.addr !226
  %1 = inttoptr i64 %0 to i64*, !insn.addr !227
  %2 = call i64 @_ZdlPvm(i64* %1, i64 48), !insn.addr !227
  ret i64 %2, !insn.addr !227

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c50:
  %0 = sub i32 %arg1, %arg2, !insn.addr !228
  %1 = xor i32 %arg2, %arg1, !insn.addr !228
  %2 = xor i32 %0, %arg1, !insn.addr !228
  %3 = and i32 %2, %1, !insn.addr !228
  %4 = icmp slt i32 %3, 0, !insn.addr !228
  %5 = icmp slt i32 %0, 0, !insn.addr !228
  %6 = icmp eq i1 %5, %4, !insn.addr !229
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !229
  ret i32 %7, !insn.addr !230

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1c60:
  %0 = fptrunc double %arg1 to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = fptrunc double %arg2 to float, !insn.addr !231
  %4 = bitcast float %3 to i32, !insn.addr !231
  %5 = sext i32 %4 to i128, !insn.addr !231
  %6 = call i128 @__asm_maxsd(i128 %2, i128 %5), !insn.addr !231
  %7 = trunc i128 %6 to i64, !insn.addr !232
  %8 = bitcast i64 %7 to double, !insn.addr !232
  ret double %8, !insn.addr !232

; uselistorder directives
  uselistorder i128 (i128, i128)* @__asm_maxsd, { 2, 0, 1 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !233
  store i32 %3, i32* %arg2, align 4, !insn.addr !234
  ret void, !insn.addr !235

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1c80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 40, !insn.addr !236
  %4 = inttoptr i64 %3 to i32*, !insn.addr !236
  store i32 0, i32* %4, align 4, !insn.addr !236
  ret i64 %1, !insn.addr !237
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !238
  %2 = inttoptr i64 %1 to i32*, !insn.addr !238
  %3 = load i32, i32* %2, align 4, !insn.addr !238
  %4 = sext i32 %3 to i64, !insn.addr !238
  %5 = icmp sgt i32 %3, 9, !insn.addr !239
  br i1 %5, label %dec_label_pc_1ca6, label %dec_label_pc_1c9d, !insn.addr !239

dec_label_pc_1c9d:                                ; preds = %dec_label_pc_1c90
  %6 = add i32 %3, 1, !insn.addr !240
  store i32 %6, i32* %2, align 4, !insn.addr !241
  %7 = mul i64 %4, 4, !insn.addr !242
  %8 = add i64 %7, %0, !insn.addr !242
  %9 = inttoptr i64 %8 to i32*, !insn.addr !242
  store i32 %arg2, i32* %9, align 4, !insn.addr !242
  br label %dec_label_pc_1ca6, !insn.addr !242

dec_label_pc_1ca6:                                ; preds = %dec_label_pc_1c9d, %dec_label_pc_1c90
  ret i64 %4, !insn.addr !243

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1cb0:
  %0 = icmp slt i32 %arg2, 0, !insn.addr !244
  br i1 %0, label %dec_label_pc_1cbf, label %dec_label_pc_1cba, !insn.addr !245

dec_label_pc_1cba:                                ; preds = %dec_label_pc_1cb0
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !246
  %3 = inttoptr i64 %2 to i32*, !insn.addr !246
  %4 = load i32, i32* %3, align 4, !insn.addr !246
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !247
  br i1 %5, label %dec_label_pc_1cc0, label %dec_label_pc_1cbf, !insn.addr !247

dec_label_pc_1cbf:                                ; preds = %dec_label_pc_1cba, %dec_label_pc_1cb0
  ret i64 0, !insn.addr !248

dec_label_pc_1cc0:                                ; preds = %dec_label_pc_1cba
  %6 = zext i32 %arg2 to i64
  %sext = mul i64 %6, 4294967296
  %7 = ashr exact i64 %sext, 30, !insn.addr !249
  %8 = add i64 %7, %1, !insn.addr !249
  %9 = inttoptr i64 %8 to i32*, !insn.addr !249
  %10 = load i32, i32* %9, align 4, !insn.addr !249
  %11 = zext i32 %10 to i64, !insn.addr !249
  ret i64 %11, !insn.addr !250

; uselistorder directives
  uselistorder i64 30, { 2, 1, 3, 0 }
  uselistorder i64 0, { 2, 47, 48, 7, 8, 5, 6, 37, 9, 10, 0, 46, 3, 4, 1, 49, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1cd0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !251
  %2 = inttoptr i64 %1 to i32*, !insn.addr !251
  %3 = load i32, i32* %2, align 4, !insn.addr !251
  %4 = zext i32 %3 to i64, !insn.addr !251
  ret i64 %4, !insn.addr !252

; uselistorder directives
  uselistorder i64 40, { 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7 }
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1ce0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !253
  %4 = inttoptr i64 %3 to i32*, !insn.addr !253
  store i32 0, i32* %4, align 4, !insn.addr !253
  ret i64 %1, !insn.addr !254
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = add i64 %2, 80, !insn.addr !255
  %4 = inttoptr i64 %3 to i32*, !insn.addr !255
  %5 = load i32, i32* %4, align 4, !insn.addr !255
  %6 = sext i32 %5 to i64, !insn.addr !255
  %7 = icmp sgt i32 %5, 9, !insn.addr !256
  br i1 %7, label %dec_label_pc_1d08, label %dec_label_pc_1cfd, !insn.addr !256

dec_label_pc_1cfd:                                ; preds = %dec_label_pc_1cf0
  %8 = add i32 %5, 1, !insn.addr !257
  store i32 %8, i32* %4, align 4, !insn.addr !258
  %9 = call i64 @__asm_movsd.4(i128 %1), !insn.addr !259
  %10 = mul i64 %6, 8, !insn.addr !259
  %11 = add i64 %10, %2, !insn.addr !259
  %12 = inttoptr i64 %11 to i64*, !insn.addr !259
  store i64 %9, i64* %12, align 8, !insn.addr !259
  br label %dec_label_pc_1d08, !insn.addr !259

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1cfd, %dec_label_pc_1cf0
  ret i64 %6, !insn.addr !260

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 8, { 0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13, 4, 5 }
  uselistorder i64 (i128)* @__asm_movsd.4, { 0, 2, 1 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d10:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !261
  %3 = icmp slt i32 %arg2, 0, !insn.addr !262
  br i1 %3, label %dec_label_pc_1d21, label %dec_label_pc_1d1c, !insn.addr !263

dec_label_pc_1d1c:                                ; preds = %dec_label_pc_1d10
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !264
  %6 = inttoptr i64 %5 to i32*, !insn.addr !264
  %7 = load i32, i32* %6, align 4, !insn.addr !264
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !265
  br i1 %8, label %dec_label_pc_1d28, label %dec_label_pc_1d21, !insn.addr !265

dec_label_pc_1d21:                                ; preds = %dec_label_pc_1d1c, %dec_label_pc_1d10
  ret i128 %2, !insn.addr !266

dec_label_pc_1d28:                                ; preds = %dec_label_pc_1d1c
  %9 = zext i32 %arg2 to i64
  %sext = mul i64 %9, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !267
  %11 = add i64 %10, %4, !insn.addr !267
  %12 = inttoptr i64 %11 to i64*, !insn.addr !267
  %13 = load i64, i64* %12, align 8, !insn.addr !267
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !267
  ret i128 %14, !insn.addr !268

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 4, 5, 6, 1, 2, 3 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 0, 1, 12, 2, 3, 4, 5 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1d40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !269
  %2 = inttoptr i64 %1 to i32*, !insn.addr !269
  %3 = load i32, i32* %2, align 4, !insn.addr !269
  %4 = zext i32 %3 to i64, !insn.addr !269
  ret i64 %4, !insn.addr !270
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1d48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !271

; uselistorder directives
  uselistorder i32 1, { 23, 1, 28, 0, 22, 29, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 47, 46, 45, 4, 26, 25, 24, 3, 43, 44, 48, 2, 49, 27 }
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
!90 = !{i64 5671}
!91 = !{i64 5691}
!92 = !{i64 5695}
!93 = !{i64 5700}
!94 = !{i64 5721}
!95 = !{i64 5725}
!96 = !{i64 5729}
!97 = !{i64 5733}
!98 = !{i64 5736}
!99 = !{i64 5742}
!100 = !{i64 5747}
!101 = !{i64 5756}
!102 = !{i64 5761}
!103 = !{i64 5771}
!104 = !{i64 5780}
!105 = !{i64 5797}
!106 = !{i64 5801}
!107 = !{i64 5804}
!108 = !{i64 5810}
!109 = !{i64 5813}
!110 = !{i64 5815}
!111 = !{i64 5820}
!112 = !{i64 5822}
!113 = !{i64 5848}
!114 = !{i64 5869}
!115 = !{i64 5872}
!116 = !{i64 5875}
!117 = !{i64 5880}
!118 = !{i64 5888}
!119 = !{i64 5894}
!120 = !{i64 5897}
!121 = !{i64 5902}
!122 = !{i64 5907}
!123 = !{i64 5910}
!124 = !{i64 5916}
!125 = !{i64 5924}
!126 = !{i64 5946}
!127 = !{i64 5959}
!128 = !{i64 6032}
!129 = !{i64 6048}
!130 = !{i64 6060}
!131 = !{i64 6110}
!132 = !{i64 6135}
!133 = !{i64 6167}
!134 = !{i64 6191}
!135 = !{i64 6215}
!136 = !{i64 6239}
!137 = !{i64 6263}
!138 = !{i64 6278}
!139 = !{i64 6283}
!140 = !{i64 6291}
!141 = !{i64 6301}
!142 = !{i64 6316}
!143 = !{i64 6324}
!144 = !{i64 6330}
!145 = !{i64 6338}
!146 = !{i64 6343}
!147 = !{i64 6363}
!148 = !{i64 6377}
!149 = !{i64 6401}
!150 = !{i64 6425}
!151 = !{i64 6430}
!152 = !{i64 6451}
!153 = !{i64 6475}
!154 = !{i64 6480}
!155 = !{i64 6492}
!156 = !{i64 6501}
!157 = !{i64 6522}
!158 = !{i64 6527}
!159 = !{i64 6542}
!160 = !{i64 6548}
!161 = !{i64 6551}
!162 = !{i64 6571}
!163 = !{i64 6580}
!164 = !{i64 6596}
!165 = !{i64 6599}
!166 = !{i64 6602}
!167 = !{i64 6619}
!168 = !{i64 6633}
!169 = !{i64 6649}
!170 = !{i64 6665}
!171 = !{i64 6679}
!172 = !{i64 6683}
!173 = !{i64 6687}
!174 = !{i64 6692}
!175 = !{i64 6711}
!176 = !{i64 6715}
!177 = !{i64 6718}
!178 = !{i64 6722}
!179 = !{i64 6726}
!180 = !{i64 6731}
!181 = !{i64 6743}
!182 = !{i64 6747}
!183 = !{i64 6751}
!184 = !{i64 6756}
!185 = !{i64 6775}
!186 = !{i64 6779}
!187 = !{i64 6782}
!188 = !{i64 6786}
!189 = !{i64 6790}
!190 = !{i64 6795}
!191 = !{i64 6807}
!192 = !{i64 6811}
!193 = !{i64 6815}
!194 = !{i64 6820}
!195 = !{i64 6839}
!196 = !{i64 6843}
!197 = !{i64 6846}
!198 = !{i64 6850}
!199 = !{i64 6854}
!200 = !{i64 6859}
!201 = !{i64 6868}
!202 = !{i64 6872}
!203 = !{i64 6876}
!204 = !{i64 6880}
!205 = !{i64 6885}
!206 = !{i64 6905}
!207 = !{i64 6921}
!208 = !{i64 6932}
!209 = !{i64 6948}
!210 = !{i64 6964}
!211 = !{i64 6980}
!212 = !{i64 6996}
!213 = !{i64 7012}
!214 = !{i64 7028}
!215 = !{i64 7044}
!216 = !{i64 7065}
!217 = !{i64 7081}
!218 = !{i64 7097}
!219 = !{i64 7108}
!220 = !{i64 7117}
!221 = !{i64 7145}
!222 = !{i64 7161}
!223 = !{i64 7177}
!224 = !{i64 7196}
!225 = !{i64 7200}
!226 = !{i64 7220}
!227 = !{i64 7229}
!228 = !{i64 7252}
!229 = !{i64 7256}
!230 = !{i64 7259}
!231 = !{i64 7268}
!232 = !{i64 7272}
!233 = !{i64 7288}
!234 = !{i64 7290}
!235 = !{i64 7292}
!236 = !{i64 7300}
!237 = !{i64 7307}
!238 = !{i64 7316}
!239 = !{i64 7323}
!240 = !{i64 7325}
!241 = !{i64 7328}
!242 = !{i64 7331}
!243 = !{i64 7334}
!244 = !{i64 7350}
!245 = !{i64 7352}
!246 = !{i64 7354}
!247 = !{i64 7357}
!248 = !{i64 7359}
!249 = !{i64 7363}
!250 = !{i64 7366}
!251 = !{i64 7380}
!252 = !{i64 7383}
!253 = !{i64 7396}
!254 = !{i64 7403}
!255 = !{i64 7412}
!256 = !{i64 7419}
!257 = !{i64 7421}
!258 = !{i64 7424}
!259 = !{i64 7427}
!260 = !{i64 7432}
!261 = !{i64 7444}
!262 = !{i64 7448}
!263 = !{i64 7450}
!264 = !{i64 7452}
!265 = !{i64 7455}
!266 = !{i64 7457}
!267 = !{i64 7467}
!268 = !{i64 7472}
!269 = !{i64 7492}
!270 = !{i64 7495}
!271 = !{i64 7508}
