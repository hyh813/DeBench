source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_3c70_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_3c98_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_3cb0 = global i64 0
@global_var_3cc0 = local_unnamed_addr global i64 0
@global_var_4038 = global i64 0
@global_var_4008 = external local_unnamed_addr global i64
@global_var_4030 = global i64 0
@global_var_3fd0 = local_unnamed_addr global i64 0
@global_var_4034 = local_unnamed_addr global i64 0
@global_var_3e9 = local_unnamed_addr global i64 8070450532247928832
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
@global_var_3c70 = global %vtable_3c70_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_3c98 = global %vtable_3c98_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

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

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !23
  %1 = inttoptr i64 %0 to i32*, !insn.addr !24
  store i32 42, i32* %1, align 4, !insn.addr !24
  %2 = call i64 @__cxa_throw(i64 %0, i64* nonnull @global_var_3cb0, i32 0), !insn.addr !25
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !26
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !26
  %4 = call i64 @__cxa_begin_catch(i64 %2), !insn.addr !27
  %5 = call i64 @__cxa_end_catch(), !insn.addr !28
  ret i32 100, !insn.addr !29

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1310:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !30
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !31
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1330:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !32
  %1 = load i64, i64* inttoptr (i64 16376 to i64*), align 8, !insn.addr !33
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !34
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_4038, i64* inttoptr (i64 16392 to i64*)), !insn.addr !34
  ret void, !insn.addr !34
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

define void @_Z20test_cpp_member_funcv() local_unnamed_addr {
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
  ret void, !insn.addr !55

dec_label_pc_14c0:                                ; preds = %dec_label_pc_1450
  call void @__stack_chk_fail(), !insn.addr !56
  ret void, !insn.addr !57
}

define void @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_14d0:
  ret void, !insn.addr !58
}

define void @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14f0:
  ret void, !insn.addr !59
}

define void @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1500:
  ret void, !insn.addr !60
}

define void @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1510:
  ret void, !insn.addr !61
}

define void @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1520:
  ret void, !insn.addr !62
}

define void @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1530:
  ret void, !insn.addr !63
}

define void @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1540:
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !64
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !65
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !66
  %3 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !67
  %4 = trunc i128 %3 to i64, !insn.addr !68
  %5 = bitcast i64 %4 to double, !insn.addr !68
  %6 = trunc i128 %2 to i64, !insn.addr !68
  %7 = bitcast i64 %6 to double, !insn.addr !68
  %8 = call double @_Z12template_maxIdET_S0_S0_(double %5, double %7), !insn.addr !68
  %9 = fptrunc double %8 to float, !insn.addr !68
  %10 = bitcast float %9 to i32, !insn.addr !68
  %11 = sext i32 %10 to i128, !insn.addr !68
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !69
  %12 = call i64 @__asm_movsd.4(i128 %11), !insn.addr !70
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !71
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-20), !insn.addr !72
  %13 = call i128 @__asm_movsd(i64 %12), !insn.addr !73
  %14 = call i32 @__asm_cvttsd2si(i128 %13), !insn.addr !74
  %15 = call i64 @__readfsqword(i64 40), !insn.addr !75
  %16 = icmp eq i64 %0, %15, !insn.addr !75
  %17 = icmp eq i1 %16, false, !insn.addr !76
  br i1 %17, label %dec_label_pc_15ce, label %dec_label_pc_15c8, !insn.addr !76

dec_label_pc_15c8:                                ; preds = %dec_label_pc_1540
  ret void, !insn.addr !77

dec_label_pc_15ce:                                ; preds = %dec_label_pc_1540
  call void @__stack_chk_fail(), !insn.addr !78
  ret void, !insn.addr !79

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0 }
  uselistorder i32* %stack_var_-24, { 1, 0 }
}

define void @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_15e0:
  ret void, !insn.addr !80
}

define void @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_15f0:
  ret void, !insn.addr !81
}

define void @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1600:
  ret void, !insn.addr !82
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_1610:
  %0 = alloca i64
  %rbx.1.reg2mem = alloca i64, !insn.addr !83
  %r14.0.reg2mem = alloca i64, !insn.addr !83
  %rbx.0.reg2mem = alloca i64, !insn.addr !83
  %1 = load i64, i64* %0
  %2 = call i64 @_Znwm(i64 8), !insn.addr !84
  %3 = inttoptr i64 %2 to i64*, !insn.addr !85
  store i64 ptrtoint (%vtable_3c70_type* @global_var_3c70 to i64), i64* %3, align 8, !insn.addr !85
  %4 = call i64 @_Znwm(i64 8), !insn.addr !86
  %5 = load i64, i64* %3, align 8, !insn.addr !87
  %6 = inttoptr i64 %4 to i64*, !insn.addr !88
  store i64 ptrtoint (%vtable_3c98_type* @global_var_3c98 to i64), i64* %6, align 8, !insn.addr !88
  %7 = add i64 %5, -8, !insn.addr !89
  %8 = inttoptr i64 %7 to i64*, !insn.addr !89
  %9 = load i64, i64* %8, align 8, !insn.addr !89
  %10 = add i64 %9, 8, !insn.addr !90
  %11 = inttoptr i64 %10 to i64*, !insn.addr !90
  %12 = load i64, i64* %11, align 8, !insn.addr !90
  %13 = icmp eq i64 %12, ptrtoint ([15 x i8]* @global_var_2218 to i64), !insn.addr !91
  store i64 10, i64* %rbx.0.reg2mem, !insn.addr !92
  store i64 30, i64* %r14.0.reg2mem, !insn.addr !92
  br i1 %13, label %dec_label_pc_1697, label %dec_label_pc_166e, !insn.addr !92

dec_label_pc_166e:                                ; preds = %dec_label_pc_1610
  %14 = inttoptr i64 %12 to i8*, !insn.addr !93
  %15 = load i8, i8* %14, align 1, !insn.addr !93
  %16 = icmp eq i8 %15, 42, !insn.addr !93
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !94
  store i64 20, i64* %r14.0.reg2mem, !insn.addr !94
  br i1 %16, label %dec_label_pc_1697, label %dec_label_pc_1679, !insn.addr !94

dec_label_pc_1679:                                ; preds = %dec_label_pc_166e
  %17 = call i32 @strcmp(i8* %14, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2218, i64 0, i64 0)), !insn.addr !95
  %18 = icmp eq i32 %17, 0, !insn.addr !96
  %19 = select i1 %18, i64 30, i64 20, !insn.addr !97
  %20 = select i1 %18, i64 10, i64 0, !insn.addr !98
  store i64 %20, i64* %rbx.0.reg2mem, !insn.addr !98
  store i64 %19, i64* %r14.0.reg2mem, !insn.addr !98
  br label %dec_label_pc_1697, !insn.addr !98

dec_label_pc_1697:                                ; preds = %dec_label_pc_1610, %dec_label_pc_166e, %dec_label_pc_1679
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %21 = load [15 x i8]*, [15 x i8]** @global_var_3d18, align 8, !insn.addr !99
  %22 = icmp eq [15 x i8]* %21, @global_var_2228, !insn.addr !100
  store i64 %r14.0.reload, i64* %rbx.1.reg2mem, !insn.addr !101
  br i1 %22, label %dec_label_pc_16c2, label %dec_label_pc_16b2, !insn.addr !101

dec_label_pc_16b2:                                ; preds = %dec_label_pc_1697
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %23 = ptrtoint [15 x i8]* %21 to i64
  %24 = trunc i64 %23 to i8
  %25 = icmp eq i8 %24, 42, !insn.addr !102
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !103
  br i1 %25, label %dec_label_pc_16c2, label %dec_label_pc_16b7, !insn.addr !103

dec_label_pc_16b7:                                ; preds = %dec_label_pc_16b2
  %26 = getelementptr inbounds [15 x i8], [15 x i8]* %21, i64 0, i64 0, !insn.addr !104
  %27 = call i32 @strcmp(i8* %26, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2228, i64 0, i64 0)), !insn.addr !104
  %28 = icmp eq i32 %27, 0, !insn.addr !105
  %.v = select i1 %28, i64 %r14.0.reload, i64 %rbx.0.reload
  store i64 %.v, i64* %rbx.1.reg2mem, !insn.addr !106
  br label %dec_label_pc_16c2, !insn.addr !106

dec_label_pc_16c2:                                ; preds = %dec_label_pc_1697, %dec_label_pc_16b7, %dec_label_pc_16b2
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %29 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3cf8, i32 0, i64 %1), !insn.addr !107
  %30 = add nsw i64 %rbx.1.reload, 100, !insn.addr !108
  %31 = icmp eq i64 %29, 0, !insn.addr !109
  %32 = icmp eq i1 %31, false, !insn.addr !110
  %33 = select i1 %32, i64 %30, i64 %rbx.1.reload, !insn.addr !110
  %34 = call i64 @__dynamic_cast(i64 %4, i64 ptrtoint (i64* @global_var_3ce8 to i64), i64* nonnull @global_var_3d10, i32 0, i64 %29), !insn.addr !111
  %35 = add nsw i64 %33, 200, !insn.addr !112
  %36 = icmp eq i64 %34, 0, !insn.addr !113
  %37 = icmp eq i1 %36, false, !insn.addr !114
  %.v1 = select i1 %37, i64 %35, i64 %33
  %38 = inttoptr i64 %12 to i8*, !insn.addr !115
  %39 = load i8, i8* %38, align 1, !insn.addr !115
  %40 = icmp eq i8 %39, 42, !insn.addr !115
  %41 = zext i1 %40 to i64, !insn.addr !116
  %42 = add i64 %12, %41, !insn.addr !117
  %43 = inttoptr i64 %42 to i8*, !insn.addr !118
  %44 = call i32 @strlen(i8* %43), !insn.addr !118
  %45 = trunc i64 %.v1 to i32
  %46 = add i32 %44, %45, !insn.addr !119
  ret i32 %46, !insn.addr !120

; uselistorder directives
  uselistorder i64 %29, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder [15 x i8]* %21, { 1, 0, 2 }
  uselistorder i64 %r14.0.reload, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %r14.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 (i64, i64, i64*, i32, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 30, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
  uselistorder label %dec_label_pc_16c2, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1697, { 2, 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1780:
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-60 = alloca i64, align 8
  %stack_var_-52 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !121
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_2018 to i8*)), !insn.addr !122
  store i64 1953719636, i64* %stack_var_-52, align 8, !insn.addr !123
  %2 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !124
  %3 = call i32 @strlen(i8* nonnull %2), !insn.addr !124
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_203c to i8*)), !insn.addr !125
  %5 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_205a to i8*)), !insn.addr !126
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2076 to i8*)), !insn.addr !127
  %7 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2092 to i8*)), !insn.addr !128
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20ae to i8*)), !insn.addr !129
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20cb to i8*)), !insn.addr !130
  %10 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !131
  %11 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !132
  %12 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !133
  %13 = trunc i128 %12 to i64, !insn.addr !134
  %14 = bitcast i64 %13 to double, !insn.addr !134
  %15 = trunc i128 %11 to i64, !insn.addr !134
  %16 = bitcast i64 %15 to double, !insn.addr !134
  %17 = call double @_Z12template_maxIdET_S0_S0_(double %14, double %16), !insn.addr !134
  %18 = fptrunc double %17 to float, !insn.addr !134
  %19 = bitcast float %18 to i32, !insn.addr !134
  %20 = sext i32 %19 to i128, !insn.addr !134
  store i64 10, i64* %stack_var_-64, align 8, !insn.addr !135
  %21 = call i64 @__asm_movsd.4(i128 %20), !insn.addr !136
  store i64 20, i64* %stack_var_-60, align 8, !insn.addr !137
  %22 = bitcast i64* %stack_var_-64 to i32*, !insn.addr !138
  %23 = bitcast i64* %stack_var_-60 to i32*, !insn.addr !138
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %22, i32* nonnull %23), !insn.addr !138
  %24 = call i128 @__asm_movsd(i64 %21), !insn.addr !139
  %25 = call i32 @__asm_cvttsd2si(i128 %24), !insn.addr !140
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_20e7 to i8*)), !insn.addr !141
  %27 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2103 to i8*)), !insn.addr !142
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_211f to i8*)), !insn.addr !143
  %29 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !144
  %30 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_213b to i8*)), !insn.addr !145
  %31 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2158 to i8*)), !insn.addr !146
  %32 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !147
  %33 = call i64 @__readfsqword(i64 40), !insn.addr !148
  %34 = icmp eq i64 %0, %33, !insn.addr !148
  %35 = icmp eq i1 %34, false, !insn.addr !149
  br i1 %35, label %dec_label_pc_197f, label %dec_label_pc_1967, !insn.addr !149

dec_label_pc_1967:                                ; preds = %dec_label_pc_1780
  %36 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2175 to i8*)), !insn.addr !150
  ret void, !insn.addr !150

dec_label_pc_197f:                                ; preds = %dec_label_pc_1780
  call void @__stack_chk_fail(), !insn.addr !151
  ret void, !insn.addr !152

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 1, 2, 0, 3 }
  uselistorder i1 false, { 5, 3, 4, 1, 2, 0 }
  uselistorder i32 (i128)* @__asm_cvttsd2si, { 1, 0 }
  uselistorder i64 20, { 1, 2, 0 }
  uselistorder i64 10, { 1, 2, 0 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i64 0, { 47, 48, 5, 6, 3, 4, 35, 7, 8, 0, 45, 2, 1, 46, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 44 }
}

define void @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1990:
  ret void, !insn.addr !153
}

define i64 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_19a0:
  ret i64 ptrtoint ([5 x i8]* @global_var_2004 to i64), !insn.addr !154
}

define void @_ZN4BaseD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19b0:
  ret void, !insn.addr !155
}

define void @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_19c0:
  ret void, !insn.addr !156
}

define i64 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_19d0:
  ret i64 ptrtoint ([8 x i8]* @global_var_2009 to i64), !insn.addr !157
}

define void @_ZN12MultiDerived5funcAEv(i64* %result) local_unnamed_addr {
dec_label_pc_19e0:
  ret void, !insn.addr !158
}

define void @_ZN12MultiDerived5funcBEv(i64* %result) local_unnamed_addr {
dec_label_pc_19f0:
  ret void, !insn.addr !159
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1a00:
  ret i64 40, !insn.addr !160
}

define void @_ZN7MiddleA4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a10:
  ret void, !insn.addr !161
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = add i64 %arg1, -24, !insn.addr !162
  %1 = inttoptr i64 %0 to i64*, !insn.addr !162
  %2 = load i64, i64* %1, align 8, !insn.addr !162
  %3 = add i64 %2, %arg1, !insn.addr !162
  %4 = inttoptr i64 %3 to i64*, !insn.addr !163
  %5 = load i64, i64* %4, align 8, !insn.addr !163
  %6 = add i64 %5, -24, !insn.addr !164
  %7 = inttoptr i64 %6 to i64*, !insn.addr !164
  %8 = load i64, i64* %7, align 8, !insn.addr !164
  %9 = add i64 %3, 8, !insn.addr !165
  %10 = add i64 %9, %8, !insn.addr !165
  %11 = inttoptr i64 %10 to i32*, !insn.addr !165
  %12 = load i32, i32* %11, align 4, !insn.addr !165
  %13 = add i32 %12, 150, !insn.addr !166
  %14 = zext i32 %13 to i64, !insn.addr !166
  ret i64 %14, !insn.addr !167

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define void @_ZN7MiddleB4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a50:
  ret void, !insn.addr !168
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = add i64 %arg1, -24, !insn.addr !169
  %1 = inttoptr i64 %0 to i64*, !insn.addr !169
  %2 = load i64, i64* %1, align 8, !insn.addr !169
  %3 = add i64 %2, %arg1, !insn.addr !169
  %4 = inttoptr i64 %3 to i64*, !insn.addr !170
  %5 = load i64, i64* %4, align 8, !insn.addr !170
  %6 = add i64 %5, -24, !insn.addr !171
  %7 = inttoptr i64 %6 to i64*, !insn.addr !171
  %8 = load i64, i64* %7, align 8, !insn.addr !171
  %9 = add i64 %3, 8, !insn.addr !172
  %10 = add i64 %9, %8, !insn.addr !172
  %11 = inttoptr i64 %10 to i32*, !insn.addr !172
  %12 = load i32, i32* %11, align 4, !insn.addr !172
  %13 = add i32 %12, 200, !insn.addr !173
  %14 = zext i32 %13 to i64, !insn.addr !173
  ret i64 %14, !insn.addr !174

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define void @_ZN14DiamondDerived4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1a90:
  ret void, !insn.addr !175
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = add i64 %arg1, -24, !insn.addr !176
  %1 = inttoptr i64 %0 to i64*, !insn.addr !176
  %2 = load i64, i64* %1, align 8, !insn.addr !176
  %3 = add i64 %2, %arg1, !insn.addr !176
  %4 = inttoptr i64 %3 to i64*, !insn.addr !177
  %5 = load i64, i64* %4, align 8, !insn.addr !177
  %6 = add i64 %5, -24, !insn.addr !178
  %7 = inttoptr i64 %6 to i64*, !insn.addr !178
  %8 = load i64, i64* %7, align 8, !insn.addr !178
  %9 = add i64 %3, 8, !insn.addr !179
  %10 = add i64 %9, %8, !insn.addr !179
  %11 = inttoptr i64 %10 to i32*, !insn.addr !179
  %12 = load i32, i32* %11, align 4, !insn.addr !179
  %13 = add i32 %12, 250, !insn.addr !180
  %14 = zext i32 %13 to i64, !insn.addr !180
  ret i64 %14, !insn.addr !181

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = add i64 %arg1, -16, !insn.addr !182
  %1 = inttoptr i64 %0 to i64*, !insn.addr !182
  %2 = load i64, i64* %1, align 8, !insn.addr !182
  %3 = add i64 %2, -24, !insn.addr !183
  %4 = inttoptr i64 %3 to i64*, !insn.addr !183
  %5 = load i64, i64* %4, align 8, !insn.addr !183
  %6 = add i64 %arg1, -8, !insn.addr !184
  %7 = add i64 %6, %5, !insn.addr !184
  %8 = inttoptr i64 %7 to i32*, !insn.addr !184
  %9 = load i32, i32* %8, align 4, !insn.addr !184
  %10 = add i32 %9, 250, !insn.addr !185
  %11 = zext i32 %10 to i64, !insn.addr !185
  ret i64 %11, !insn.addr !186

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1af0:
  ret i64 1, !insn.addr !187
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1b00:
  ret i64 2, !insn.addr !188
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_1b10:
  ret void, !insn.addr !189
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_1b20:
  ret void, !insn.addr !190
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1b30:
  ret void, !insn.addr !191
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !192
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !193
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1b60:
  ret void, !insn.addr !194
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !195
}

define void @_ZN7DerivedD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1b80:
  ret void, !insn.addr !196
}

define void @_ZN4BaseD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !197
  ret void, !insn.addr !197
}

define void @_ZN7DerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !198
  ret void, !insn.addr !198
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1bb0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !199
  ret void, !insn.addr !199
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = add i64 %arg1, -16, !insn.addr !200
  %1 = inttoptr i64 %0 to i64*, !insn.addr !201
  %2 = call i64 @_ZdlPvm(i64* %1, i64 32), !insn.addr !201
  ret i64 %2, !insn.addr !201
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_1be0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !202
  ret void, !insn.addr !202
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_1bf0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !203
  ret void, !insn.addr !203
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1c00:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !204
  ret void, !insn.addr !204
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c10:
  %0 = add i64 %arg1, -32, !insn.addr !205
  %1 = inttoptr i64 %0 to i64*, !insn.addr !205
  %2 = load i64, i64* %1, align 8, !insn.addr !205
  %3 = add i64 %2, %arg1, !insn.addr !205
  %4 = inttoptr i64 %3 to i64*, !insn.addr !206
  %5 = call i64 @_ZdlPvm(i64* %4, i64 48), !insn.addr !206
  ret i64 %5, !insn.addr !206
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = add i64 %arg1, -16, !insn.addr !207
  %1 = inttoptr i64 %0 to i64*, !insn.addr !208
  %2 = call i64 @_ZdlPvm(i64* %1, i64 48), !insn.addr !208
  ret i64 %2, !insn.addr !208

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 5, 4, 3, 6, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c50:
  %0 = sub i32 %arg1, %arg2, !insn.addr !209
  %1 = xor i32 %arg2, %arg1, !insn.addr !209
  %2 = xor i32 %0, %arg1, !insn.addr !209
  %3 = and i32 %2, %1, !insn.addr !209
  %4 = icmp slt i32 %3, 0, !insn.addr !209
  %5 = icmp slt i32 %0, 0, !insn.addr !209
  %6 = icmp eq i1 %5, %4, !insn.addr !210
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !210
  ret i32 %7, !insn.addr !211

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1c60:
  %0 = fptrunc double %arg2 to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = fptrunc double %arg1 to float
  %4 = bitcast float %3 to i32
  %5 = sext i32 %4 to i128
  %6 = call i128 @__asm_maxsd(i128 %5, i128 %2), !insn.addr !212
  %7 = trunc i128 %6 to i64, !insn.addr !213
  %8 = bitcast i64 %7 to double, !insn.addr !213
  ret double %8, !insn.addr !213
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !214
  store i32 %3, i32* %arg2, align 4, !insn.addr !215
  ret void, !insn.addr !216

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1c80:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !217
  %2 = inttoptr i64 %1 to i32*, !insn.addr !217
  store i32 0, i32* %2, align 4, !insn.addr !217
  ret void, !insn.addr !218
}

define void @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !219
  %2 = inttoptr i64 %1 to i32*, !insn.addr !219
  %3 = load i32, i32* %2, align 4, !insn.addr !219
  %4 = icmp sgt i32 %3, 9, !insn.addr !220
  br i1 %4, label %dec_label_pc_1ca6, label %dec_label_pc_1c9d, !insn.addr !220

dec_label_pc_1c9d:                                ; preds = %dec_label_pc_1c90
  %5 = sext i32 %3 to i64, !insn.addr !219
  %6 = add i32 %3, 1, !insn.addr !221
  store i32 %6, i32* %2, align 4, !insn.addr !222
  %7 = mul i64 %5, 4, !insn.addr !223
  %8 = add i64 %7, %0, !insn.addr !223
  %9 = inttoptr i64 %8 to i32*, !insn.addr !223
  store i32 %arg2, i32* %9, align 4, !insn.addr !223
  br label %dec_label_pc_1ca6, !insn.addr !223

dec_label_pc_1ca6:                                ; preds = %dec_label_pc_1c9d, %dec_label_pc_1c90
  ret void, !insn.addr !224

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i64 40, { 7, 8, 0, 1, 2, 3, 4, 5, 6 }
}

define void @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1cb0:
  ret void, !insn.addr !225
}

define void @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1cd0:
  ret void, !insn.addr !226
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1ce0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !227
  %2 = inttoptr i64 %1 to i32*, !insn.addr !227
  store i32 0, i32* %2, align 4, !insn.addr !227
  ret void, !insn.addr !228
}

define void @_ZN9ContainerIdE4pushEd(i64* %result, double %arg2) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !229
  %4 = inttoptr i64 %3 to i32*, !insn.addr !229
  %5 = load i32, i32* %4, align 4, !insn.addr !229
  %6 = icmp sgt i32 %5, 9, !insn.addr !230
  br i1 %6, label %dec_label_pc_1d08, label %dec_label_pc_1cfd, !insn.addr !230

dec_label_pc_1cfd:                                ; preds = %dec_label_pc_1cf0
  %7 = sext i32 %5 to i64, !insn.addr !229
  %8 = add i32 %5, 1, !insn.addr !231
  store i32 %8, i32* %4, align 4, !insn.addr !232
  %9 = call i64 @__asm_movsd.4(i128 %1), !insn.addr !233
  %10 = mul i64 %7, 8, !insn.addr !233
  %11 = add i64 %10, %2, !insn.addr !233
  %12 = inttoptr i64 %11 to i64*, !insn.addr !233
  store i64 %9, i64* %12, align 8, !insn.addr !233
  br label %dec_label_pc_1d08, !insn.addr !233

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1cfd, %dec_label_pc_1cf0
  ret void, !insn.addr !234

; uselistorder directives
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64 8, { 0, 1, 2, 3, 6, 7, 8, 9, 4, 5 }
  uselistorder i64 (i128)* @__asm_movsd.4, { 0, 2, 1 }
}

define void @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d10:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !235
  %3 = icmp slt i32 %arg2, 0, !insn.addr !236
  br i1 %3, label %dec_label_pc_1d21, label %dec_label_pc_1d1c, !insn.addr !237

dec_label_pc_1d1c:                                ; preds = %dec_label_pc_1d10
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !238
  %6 = inttoptr i64 %5 to i32*, !insn.addr !238
  %7 = load i32, i32* %6, align 4, !insn.addr !238
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !239
  br i1 %8, label %dec_label_pc_1d28, label %dec_label_pc_1d21, !insn.addr !239

dec_label_pc_1d21:                                ; preds = %dec_label_pc_1d1c, %dec_label_pc_1d10
  ret void, !insn.addr !240

dec_label_pc_1d28:                                ; preds = %dec_label_pc_1d1c
  %9 = zext i32 %arg2 to i64
  %sext = mul i64 %9, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !241
  %11 = add i64 %10, %4, !insn.addr !241
  %12 = inttoptr i64 %11 to i64*, !insn.addr !241
  %13 = load i64, i64* %12, align 8, !insn.addr !241
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !241
  ret void, !insn.addr !242

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 4, 5, 6, 1, 2, 3 }
  uselistorder i32 0, { 4, 5, 6, 7, 8, 0, 1, 9, 2, 3 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1d40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !243
  %2 = inttoptr i64 %1 to i32*, !insn.addr !243
  %3 = load i32, i32* %2, align 4, !insn.addr !243
  %4 = zext i32 %3 to i64, !insn.addr !243
  ret i64 %4, !insn.addr !244
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_1d48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !245

; uselistorder directives
  uselistorder i32 1, { 8, 1, 13, 0, 14, 7, 6, 5, 4, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 31, 30, 29, 11, 10, 9, 3, 27, 28, 32, 2, 33, 12 }
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
!55 = !{i64 5311}
!56 = !{i64 5312}
!57 = !{i64 5317}
!58 = !{i64 5345}
!59 = !{i64 5367}
!60 = !{i64 5385}
!61 = !{i64 5401}
!62 = !{i64 5417}
!63 = !{i64 5433}
!64 = !{i64 5459}
!65 = !{i64 5475}
!66 = !{i64 5480}
!67 = !{i64 5488}
!68 = !{i64 5498}
!69 = !{i64 5513}
!70 = !{i64 5521}
!71 = !{i64 5527}
!72 = !{i64 5535}
!73 = !{i64 5540}
!74 = !{i64 5546}
!75 = !{i64 5565}
!76 = !{i64 5574}
!77 = !{i64 5581}
!78 = !{i64 5582}
!79 = !{i64 5598}
!80 = !{i64 5609}
!81 = !{i64 5625}
!82 = !{i64 5641}
!83 = !{i64 5648}
!84 = !{i64 5671}
!85 = !{i64 5691}
!86 = !{i64 5695}
!87 = !{i64 5700}
!88 = !{i64 5721}
!89 = !{i64 5725}
!90 = !{i64 5729}
!91 = !{i64 5733}
!92 = !{i64 5736}
!93 = !{i64 5742}
!94 = !{i64 5747}
!95 = !{i64 5756}
!96 = !{i64 5761}
!97 = !{i64 5771}
!98 = !{i64 5780}
!99 = !{i64 5797}
!100 = !{i64 5801}
!101 = !{i64 5804}
!102 = !{i64 5810}
!103 = !{i64 5813}
!104 = !{i64 5815}
!105 = !{i64 5820}
!106 = !{i64 5822}
!107 = !{i64 5848}
!108 = !{i64 5869}
!109 = !{i64 5872}
!110 = !{i64 5875}
!111 = !{i64 5880}
!112 = !{i64 5888}
!113 = !{i64 5894}
!114 = !{i64 5897}
!115 = !{i64 5902}
!116 = !{i64 5907}
!117 = !{i64 5910}
!118 = !{i64 5916}
!119 = !{i64 5924}
!120 = !{i64 5959}
!121 = !{i64 6032}
!122 = !{i64 6048}
!123 = !{i64 6060}
!124 = !{i64 6110}
!125 = !{i64 6135}
!126 = !{i64 6167}
!127 = !{i64 6191}
!128 = !{i64 6215}
!129 = !{i64 6239}
!130 = !{i64 6263}
!131 = !{i64 6278}
!132 = !{i64 6283}
!133 = !{i64 6291}
!134 = !{i64 6301}
!135 = !{i64 6316}
!136 = !{i64 6324}
!137 = !{i64 6330}
!138 = !{i64 6338}
!139 = !{i64 6343}
!140 = !{i64 6363}
!141 = !{i64 6377}
!142 = !{i64 6401}
!143 = !{i64 6425}
!144 = !{i64 6430}
!145 = !{i64 6451}
!146 = !{i64 6475}
!147 = !{i64 6480}
!148 = !{i64 6492}
!149 = !{i64 6501}
!150 = !{i64 6522}
!151 = !{i64 6527}
!152 = !{i64 6542}
!153 = !{i64 6551}
!154 = !{i64 6571}
!155 = !{i64 6580}
!156 = !{i64 6602}
!157 = !{i64 6619}
!158 = !{i64 6633}
!159 = !{i64 6649}
!160 = !{i64 6665}
!161 = !{i64 6692}
!162 = !{i64 6711}
!163 = !{i64 6715}
!164 = !{i64 6718}
!165 = !{i64 6722}
!166 = !{i64 6726}
!167 = !{i64 6731}
!168 = !{i64 6756}
!169 = !{i64 6775}
!170 = !{i64 6779}
!171 = !{i64 6782}
!172 = !{i64 6786}
!173 = !{i64 6790}
!174 = !{i64 6795}
!175 = !{i64 6820}
!176 = !{i64 6839}
!177 = !{i64 6843}
!178 = !{i64 6846}
!179 = !{i64 6850}
!180 = !{i64 6854}
!181 = !{i64 6859}
!182 = !{i64 6868}
!183 = !{i64 6872}
!184 = !{i64 6876}
!185 = !{i64 6880}
!186 = !{i64 6885}
!187 = !{i64 6905}
!188 = !{i64 6921}
!189 = !{i64 6932}
!190 = !{i64 6948}
!191 = !{i64 6964}
!192 = !{i64 6980}
!193 = !{i64 6996}
!194 = !{i64 7012}
!195 = !{i64 7028}
!196 = !{i64 7044}
!197 = !{i64 7065}
!198 = !{i64 7081}
!199 = !{i64 7097}
!200 = !{i64 7108}
!201 = !{i64 7117}
!202 = !{i64 7145}
!203 = !{i64 7161}
!204 = !{i64 7177}
!205 = !{i64 7196}
!206 = !{i64 7200}
!207 = !{i64 7220}
!208 = !{i64 7229}
!209 = !{i64 7252}
!210 = !{i64 7256}
!211 = !{i64 7259}
!212 = !{i64 7268}
!213 = !{i64 7272}
!214 = !{i64 7288}
!215 = !{i64 7290}
!216 = !{i64 7292}
!217 = !{i64 7300}
!218 = !{i64 7307}
!219 = !{i64 7316}
!220 = !{i64 7323}
!221 = !{i64 7325}
!222 = !{i64 7328}
!223 = !{i64 7331}
!224 = !{i64 7334}
!225 = !{i64 7359}
!226 = !{i64 7383}
!227 = !{i64 7396}
!228 = !{i64 7403}
!229 = !{i64 7412}
!230 = !{i64 7419}
!231 = !{i64 7421}
!232 = !{i64 7424}
!233 = !{i64 7427}
!234 = !{i64 7432}
!235 = !{i64 7444}
!236 = !{i64 7448}
!237 = !{i64 7450}
!238 = !{i64 7452}
!239 = !{i64 7455}
!240 = !{i64 7457}
!241 = !{i64 7467}
!242 = !{i64 7472}
!243 = !{i64 7492}
!244 = !{i64 7495}
!245 = !{i64 7508}
