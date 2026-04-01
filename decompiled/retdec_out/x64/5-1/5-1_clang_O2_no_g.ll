source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_3d78_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_3da0_type = type { i64 ()*, i64 ()*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_40bc = global i64 0
@global_var_4090 = external local_unnamed_addr global i64
@global_var_40b8 = global i64 0
@global_var_21f8 = local_unnamed_addr constant [5 x i8] c"Test\00"
@global_var_3d10 = local_unnamed_addr global i64 0
@global_var_3d28 = global i64 0
@global_var_3d38 = global i64 0
@global_var_3d50 = global i64 0
@0 = external global i32
@global_var_3ff8 = local_unnamed_addr global void (i64*)* null
@global_var_2207 = external local_unnamed_addr constant i128
@global_var_40c0 = local_unnamed_addr global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_21d4 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_207d = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_209b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_20b7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_20d3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_20ef = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_210c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_2128 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_2144 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_2160 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_217c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_2199 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_21b6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_3d78 = global %vtable_3d78_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 ()* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_3da0 = global %vtable_3da0_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 ()* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

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

define i32 @function_1030(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i64 @function_1040(i64 %arg1) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_1050(i8* %s) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64 @function_1060(i64 %arg1) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !9
  ret i64 %0, !insn.addr !9
}

define i32 @function_1070(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_1080(i64* %ptr) local_unnamed_addr {
dec_label_pc_1080:
  call void @_ZdlPv(i64* %ptr), !insn.addr !11
  ret void, !insn.addr !11
}

define i64 @function_1090(i64 %arg1) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !12
  ret i64 %0, !insn.addr !12
}

define i64 @function_10a0(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_10b0() local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define i64 @function_10c0() local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !15
  ret i64 %0, !insn.addr !15
}

define i32 @function_10d0(i8* %s) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @puts(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_10e0() local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_10f0(i64 %arg1, i64 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i32 %arg3), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_1100(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1100:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !19
  ret void, !insn.addr !19
}

define void @function_1110(i64* %d) local_unnamed_addr {
dec_label_pc_1110:
  call void @__cxa_finalize(i64* %d), !insn.addr !20
  ret void, !insn.addr !20
}

define i64 @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !21
  %1 = load void (i64*)*, void (i64*)** @global_var_3ff8, align 8, !insn.addr !22
  %2 = call i32 @__cxa_atexit(void (i64*)* %1, i64* nonnull @global_var_40bc, i64* inttoptr (i64 16528 to i64*)), !insn.addr !23
  %3 = sext i32 %2 to i64, !insn.addr !23
  ret i64 %3, !insn.addr !23
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1150:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !24
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !24
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !24
  %3 = call i32 @__libc_start_main(i64 5760, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !24
  %4 = call i64 @__asm_hlt(), !insn.addr !25
  unreachable, !insn.addr !25
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 ptrtoint (i64* @global_var_40b8 to i64), !insn.addr !26
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11b0:
  ret i64 0, !insn.addr !27
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_40b8 to i8*), align 8, !insn.addr !28
  %3 = icmp eq i8 %2, 0, !insn.addr !28
  %4 = icmp eq i1 %3, false, !insn.addr !29
  br i1 %4, label %dec_label_pc_1228, label %dec_label_pc_11fd, !insn.addr !29

dec_label_pc_11fd:                                ; preds = %dec_label_pc_11f0
  %5 = load i64, i64* inttoptr (i64 16336 to i64*), align 16, !insn.addr !30
  %6 = icmp eq i64 %5, 0, !insn.addr !30
  br i1 %6, label %dec_label_pc_1217, label %dec_label_pc_120b, !insn.addr !31

dec_label_pc_120b:                                ; preds = %dec_label_pc_11fd
  %7 = load i64, i64* @global_var_4090, align 8, !insn.addr !32
  %8 = inttoptr i64 %7 to i64*, !insn.addr !33
  call void @__cxa_finalize(i64* %8), !insn.addr !33
  br label %dec_label_pc_1217, !insn.addr !33

dec_label_pc_1217:                                ; preds = %dec_label_pc_120b, %dec_label_pc_11fd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !34
  store i8 1, i8* bitcast (i64* @global_var_40b8 to i8*), align 8, !insn.addr !35
  ret i64 %9, !insn.addr !36

dec_label_pc_1228:                                ; preds = %dec_label_pc_11f0
  ret i64 %1, !insn.addr !37
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i64 @register_tm_clones(), !insn.addr !38
  ret i64 %0, !insn.addr !38
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1240:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %stack_var_-36 = alloca i128, align 8
  %2 = load i128, i128* %0
  %3 = load i128, i128* @global_var_2207, align 8, !insn.addr !39
  %4 = call i128 @__asm_movups(i128 %3), !insn.addr !39
  call void @__asm_movups.5(i128 %1, i128 %4), !insn.addr !40
  %5 = call i128 @__asm_movups(i128 1953719636), !insn.addr !41
  %6 = mul i128 %2, 18446744073709551615
  %7 = ashr exact i128 %6, 64, !insn.addr !42
  call void @__asm_movups.5(i128 %7, i128 %5), !insn.addr !42
  %8 = bitcast i128* %stack_var_-36 to i8*, !insn.addr !43
  %9 = call i32 @strlen(i8* nonnull %8), !insn.addr !43
  %10 = add i32 %9, 4700, !insn.addr !44
  %11 = zext i32 %10 to i64, !insn.addr !44
  ret i64 %11, !insn.addr !45

; uselistorder directives
  uselistorder i128* %0, { 1, 0 }
}

define i64 @_Z20test_cpp_constructorv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1280:
  %0 = load i32, i32* @global_var_40c0, align 4, !insn.addr !46
  %1 = mul i32 %0, add (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 1), !insn.addr !47
  %2 = add i32 %1, 21, !insn.addr !48
  %3 = zext i32 %2 to i64, !insn.addr !48
  ret i64 %3, !insn.addr !49
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !50
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_12b0:
  ret i64 42, !insn.addr !51
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_12c0:
  ret i64 71, !insn.addr !52
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_12d0:
  ret i64 650, !insn.addr !53
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_12e0:
  ret i64 22, !insn.addr !54
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_12f0:
  ret i64 39, !insn.addr !55
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1300:
  ret i64 16, !insn.addr !56
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1310:
  ret i64 85, !insn.addr !57
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1320:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !58
  %1 = inttoptr i64 %0 to i32*, !insn.addr !59
  store i32 42, i32* %1, align 4, !insn.addr !59
  %2 = load i64, i64* inttoptr (i64 16328 to i64*), align 8, !insn.addr !60
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i32 0), !insn.addr !61
  %4 = inttoptr i64 %3 to %_Unwind_Exception*, !insn.addr !62
  call void @_Unwind_Resume(%_Unwind_Exception* %4), !insn.addr !62
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !62
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_13e0:
  ret i64 703, !insn.addr !63
}

define i64 @_Z13test_cpp_rttiv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13f0:
  %0 = call i64 @_Znwm(i64 8), !insn.addr !64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !65
  store i64 ptrtoint (%vtable_3d78_type* @global_var_3d78 to i64), i64* %1, align 8, !insn.addr !65
  %2 = call i64 @_Znwm(i64 8), !insn.addr !66
  %3 = inttoptr i64 %2 to i64*, !insn.addr !67
  store i64 ptrtoint (%vtable_3da0_type* @global_var_3da0 to i64), i64* %3, align 8, !insn.addr !67
  %4 = call i64 @__dynamic_cast(i64 %0, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d38, i32 0), !insn.addr !68
  %5 = icmp eq i64 %4, 0, !insn.addr !69
  %6 = select i1 %5, i64 30, i64 130, !insn.addr !70
  %7 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d50, i32 0), !insn.addr !71
  %8 = add nuw nsw i64 %6, 200, !insn.addr !72
  %9 = icmp eq i64 %7, 0, !insn.addr !73
  %10 = select i1 %9, i64 %6, i64 %8, !insn.addr !74
  call void @_ZdlPv(i64* %1), !insn.addr !75
  %11 = add nuw nsw i64 %10, 14, !insn.addr !76
  ret i64 %11, !insn.addr !77
}

define i64 @_Z20test_cpp_oo_featuresv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %stack_var_-76 = alloca i128, align 8
  %2 = load i128, i128* %0
  %3 = call i32 @puts(i8* bitcast (i8** @global_var_21d4 to i8*)), !insn.addr !78
  %4 = load i128, i128* @global_var_2207, align 8, !insn.addr !79
  %5 = call i128 @__asm_movups(i128 %4), !insn.addr !79
  call void @__asm_movups.5(i128 %1, i128 %5), !insn.addr !80
  %6 = call i128 @__asm_movups(i128 1953719636), !insn.addr !81
  %7 = mul i128 %2, 18446744073709551615
  %8 = ashr exact i128 %7, 64, !insn.addr !82
  call void @__asm_movups.5(i128 %8, i128 %6), !insn.addr !82
  %9 = bitcast i128* %stack_var_-76 to i8*, !insn.addr !83
  %10 = call i32 @strlen(i8* nonnull %9), !insn.addr !83
  %11 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_207d to i8*)), !insn.addr !84
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_209b to i8*)), !insn.addr !85
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b7 to i8*)), !insn.addr !86
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d3 to i8*)), !insn.addr !87
  %15 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ef to i8*)), !insn.addr !88
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210c to i8*)), !insn.addr !89
  %17 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2128 to i8*)), !insn.addr !90
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2144 to i8*)), !insn.addr !91
  %19 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2160 to i8*)), !insn.addr !92
  %20 = call i64 @_Z18test_cpp_exceptionv(i64 ptrtoint (i8** @global_var_2160 to i64), i64 85, i64 %arg3), !insn.addr !93
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_217c to i8*)), !insn.addr !94
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2199 to i8*)), !insn.addr !95
  %23 = call i64 @_Znwm(i64 8), !insn.addr !96
  %24 = inttoptr i64 %23 to i64*, !insn.addr !97
  store i64 ptrtoint (%vtable_3d78_type* @global_var_3d78 to i64), i64* %24, align 8, !insn.addr !97
  %25 = call i64 @_Znwm(i64 8), !insn.addr !98
  %26 = inttoptr i64 %25 to i64*, !insn.addr !99
  store i64 ptrtoint (%vtable_3da0_type* @global_var_3da0 to i64), i64* %26, align 8, !insn.addr !99
  %27 = call i64 @__dynamic_cast(i64 %23, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d38, i32 0), !insn.addr !100
  %28 = call i64 @__dynamic_cast(i64 %25, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d50, i32 0), !insn.addr !101
  call void @_ZdlPv(i64* %24), !insn.addr !102
  %29 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21b6 to i8*)), !insn.addr !103
  %30 = sext i32 %29 to i64, !insn.addr !103
  ret i64 %30, !insn.addr !103

; uselistorder directives
  uselistorder i128* %0, { 1, 0 }
  uselistorder i64 (i64, i64, i64*, i32)* @__dynamic_cast, { 3, 2, 1, 0, 4 }
  uselistorder i64 ptrtoint (%vtable_3da0_type* @global_var_3da0 to i64), { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_3d78_type* @global_var_3d78 to i64), { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder i64 85, { 1, 0 }
  uselistorder i8** @global_var_2160, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i128* @global_var_2207, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1680:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @_Z20test_cpp_oo_featuresv(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !104
  ret i64 0, !insn.addr !105

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1690:
  %0 = sub i32 %arg1, %arg2, !insn.addr !106
  %1 = xor i32 %arg2, %arg1, !insn.addr !106
  %2 = xor i32 %0, %arg1, !insn.addr !106
  %3 = and i32 %2, %1, !insn.addr !106
  %4 = icmp slt i32 %3, 0, !insn.addr !106
  %5 = icmp eq i32 %0, 0, !insn.addr !106
  %6 = icmp slt i32 %0, 0, !insn.addr !106
  %7 = icmp eq i1 %6, %4, !insn.addr !107
  %8 = icmp eq i1 %5, false, !insn.addr !107
  %9 = icmp eq i1 %7, %8, !insn.addr !107
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !107
  ret i32 %10, !insn.addr !108

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = fptrunc double %arg2 to float, !insn.addr !109
  %3 = bitcast float %2 to i32, !insn.addr !109
  %4 = sext i32 %3 to i128, !insn.addr !109
  %5 = call i128 @__asm_maxsd(i128 %1, i128 %4), !insn.addr !109
  %6 = trunc i128 %5 to i64, !insn.addr !110
  %7 = bitcast i64 %6 to double, !insn.addr !110
  ret double %7, !insn.addr !110
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !111
  store i32 %3, i32* %arg2, align 4, !insn.addr !112
  ret void, !insn.addr !113

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 40, !insn.addr !114
  %4 = inttoptr i64 %3 to i32*, !insn.addr !114
  store i32 0, i32* %4, align 4, !insn.addr !114
  ret i64 %1, !insn.addr !115
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !116
  %2 = inttoptr i64 %1 to i32*, !insn.addr !116
  %3 = load i32, i32* %2, align 4, !insn.addr !116
  %4 = sext i32 %3 to i64, !insn.addr !116
  %5 = icmp sgt i32 %3, 9, !insn.addr !117
  br i1 %5, label %dec_label_pc_16e3, label %dec_label_pc_16da, !insn.addr !117

dec_label_pc_16da:                                ; preds = %dec_label_pc_16d0
  %6 = add i32 %3, 1, !insn.addr !118
  store i32 %6, i32* %2, align 4, !insn.addr !119
  %7 = mul i64 %4, 4, !insn.addr !120
  %8 = add i64 %7, %0, !insn.addr !120
  %9 = inttoptr i64 %8 to i32*, !insn.addr !120
  store i32 %arg2, i32* %9, align 4, !insn.addr !120
  br label %dec_label_pc_16e3, !insn.addr !120

dec_label_pc_16e3:                                ; preds = %dec_label_pc_16da, %dec_label_pc_16d0
  ret i64 %4, !insn.addr !121

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_16f0:
  %rax.0.reg2mem = alloca i64, !insn.addr !122
  %0 = icmp slt i32 %arg2, 0, !insn.addr !123
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !124
  br i1 %0, label %dec_label_pc_1700, label %dec_label_pc_16f6, !insn.addr !124

dec_label_pc_16f6:                                ; preds = %dec_label_pc_16f0
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !125
  %3 = inttoptr i64 %2 to i32*, !insn.addr !125
  %4 = load i32, i32* %3, align 4, !insn.addr !125
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !126
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !126
  br i1 %5, label %dec_label_pc_16fb, label %dec_label_pc_1700, !insn.addr !126

dec_label_pc_16fb:                                ; preds = %dec_label_pc_16f6
  %6 = sext i32 %arg2 to i64
  %7 = mul i64 %6, 4, !insn.addr !127
  %8 = and i64 %7, 17179869180, !insn.addr !128
  %9 = add i64 %8, %1, !insn.addr !128
  %10 = inttoptr i64 %9 to i32*, !insn.addr !128
  %11 = load i32, i32* %10, align 4, !insn.addr !128
  %12 = zext i32 %11 to i64, !insn.addr !128
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !128
  br label %dec_label_pc_1700, !insn.addr !128

dec_label_pc_1700:                                ; preds = %dec_label_pc_16f6, %dec_label_pc_16fb, %dec_label_pc_16f0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !129

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 0, { 0, 1, 3, 37, 38, 39, 4, 2, 40, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1700, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1710:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !130
  %2 = inttoptr i64 %1 to i32*, !insn.addr !130
  %3 = load i32, i32* %2, align 4, !insn.addr !130
  %4 = zext i32 %3 to i64, !insn.addr !130
  ret i64 %4, !insn.addr !131
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1720:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !132
  %4 = inttoptr i64 %3 to i32*, !insn.addr !132
  store i32 0, i32* %4, align 4, !insn.addr !132
  ret i64 %1, !insn.addr !133
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_1730:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = add i64 %2, 80, !insn.addr !134
  %4 = inttoptr i64 %3 to i32*, !insn.addr !134
  %5 = load i32, i32* %4, align 4, !insn.addr !134
  %6 = sext i32 %5 to i64, !insn.addr !134
  %7 = icmp sgt i32 %5, 9, !insn.addr !135
  br i1 %7, label %dec_label_pc_1745, label %dec_label_pc_173a, !insn.addr !135

dec_label_pc_173a:                                ; preds = %dec_label_pc_1730
  %8 = add i32 %5, 1, !insn.addr !136
  store i32 %8, i32* %4, align 4, !insn.addr !137
  %9 = call i64 @__asm_movsd(i128 %1), !insn.addr !138
  %10 = mul i64 %6, 8, !insn.addr !138
  %11 = add i64 %10, %2, !insn.addr !138
  %12 = inttoptr i64 %11 to i64*, !insn.addr !138
  store i64 %9, i64* %12, align 8, !insn.addr !138
  br label %dec_label_pc_1745, !insn.addr !138

dec_label_pc_1745:                                ; preds = %dec_label_pc_173a, %dec_label_pc_1730
  ret i64 %6, !insn.addr !139

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1750:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !140
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !140
  %3 = icmp slt i32 %arg2, 0, !insn.addr !141
  br i1 %3, label %dec_label_pc_1763, label %dec_label_pc_1757, !insn.addr !142

dec_label_pc_1757:                                ; preds = %dec_label_pc_1750
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !143
  %6 = inttoptr i64 %5 to i32*, !insn.addr !143
  %7 = load i32, i32* %6, align 4, !insn.addr !143
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !144
  br i1 %8, label %dec_label_pc_175c, label %dec_label_pc_1763, !insn.addr !144

dec_label_pc_175c:                                ; preds = %dec_label_pc_1757
  %9 = zext i32 %arg2 to i64
  %10 = mul i64 %9, 8, !insn.addr !145
  %11 = add i64 %10, %4, !insn.addr !145
  %12 = inttoptr i64 %11 to i64*, !insn.addr !145
  %13 = load i64, i64* %12, align 8, !insn.addr !145
  %14 = call i128 @__asm_movsd.6(i64 %13), !insn.addr !145
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_1763, !insn.addr !145

dec_label_pc_1763:                                ; preds = %dec_label_pc_1757, %dec_label_pc_175c, %dec_label_pc_1750
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !146

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i32 0, { 7, 8, 9, 10, 11, 12, 13, 0, 1, 2, 3, 4, 5, 6 }
  uselistorder label %dec_label_pc_1763, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1770:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !147
  %2 = inttoptr i64 %1 to i32*, !insn.addr !147
  %3 = load i32, i32* %2, align 4, !insn.addr !147
  %4 = zext i32 %3 to i64, !insn.addr !147
  ret i64 %4, !insn.addr !148
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_1780:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !149
  call void @_ZdlPv(i64* %2), !insn.addr !149
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !149
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1790:
  ret i64 1, !insn.addr !150
}

define i64 @_ZN8RTTIBaseD2Ev() {
dec_label_pc_17a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !151
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_17b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !152
  call void @_ZdlPv(i64* %2), !insn.addr !152
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !152

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 0 }
  uselistorder void (i64*)* @_ZdlPv, { 3, 2, 1, 0, 4 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_17c0:
  ret i64 2, !insn.addr !153
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_17c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !154

; uselistorder directives
  uselistorder i32 1, { 13, 12, 11, 10, 14, 4, 17, 3, 9, 15, 18, 8, 7, 2, 6, 20, 1, 19, 21, 0, 5, 22, 16 }
}

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdlPv(i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64, i64*, i32) local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movups(i128) local_unnamed_addr

declare void @__asm_movups.5(i128, i128) local_unnamed_addr

declare i128 @__asm_maxsd(i128, i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i128 @__asm_movsd.6(i64) local_unnamed_addr

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
!10 = !{i64 4208}
!11 = !{i64 4224}
!12 = !{i64 4240}
!13 = !{i64 4256}
!14 = !{i64 4272}
!15 = !{i64 4288}
!16 = !{i64 4304}
!17 = !{i64 4320}
!18 = !{i64 4336}
!19 = !{i64 4352}
!20 = !{i64 4368}
!21 = !{i64 4395}
!22 = !{i64 4400}
!23 = !{i64 4418}
!24 = !{i64 4463}
!25 = !{i64 4469}
!26 = !{i64 4520}
!27 = !{i64 4584}
!28 = !{i64 4596}
!29 = !{i64 4603}
!30 = !{i64 4606}
!31 = !{i64 4617}
!32 = !{i64 4619}
!33 = !{i64 4626}
!34 = !{i64 4631}
!35 = !{i64 4636}
!36 = !{i64 4644}
!37 = !{i64 4648}
!38 = !{i64 4660}
!39 = !{i64 4681}
!40 = !{i64 4688}
!41 = !{i64 4693}
!42 = !{i64 4700}
!43 = !{i64 4717}
!44 = !{i64 4722}
!45 = !{i64 4731}
!46 = !{i64 4736}
!47 = !{i64 4748}
!48 = !{i64 4750}
!49 = !{i64 4753}
!50 = !{i64 4774}
!51 = !{i64 4789}
!52 = !{i64 4805}
!53 = !{i64 4821}
!54 = !{i64 4837}
!55 = !{i64 4853}
!56 = !{i64 4869}
!57 = !{i64 4885}
!58 = !{i64 4906}
!59 = !{i64 4911}
!60 = !{i64 4917}
!61 = !{i64 4932}
!62 = !{i64 5083}
!63 = !{i64 5093}
!64 = !{i64 5117}
!65 = !{i64 5132}
!66 = !{i64 5140}
!67 = !{i64 5155}
!68 = !{i64 5181}
!69 = !{i64 5186}
!70 = !{i64 5199}
!71 = !{i64 5217}
!72 = !{i64 5222}
!73 = !{i64 5228}
!74 = !{i64 5231}
!75 = !{i64 5237}
!76 = !{i64 5252}
!77 = !{i64 5265}
!78 = !{i64 5299}
!79 = !{i64 5309}
!80 = !{i64 5316}
!81 = !{i64 5321}
!82 = !{i64 5328}
!83 = !{i64 5346}
!84 = !{i64 5366}
!85 = !{i64 5398}
!86 = !{i64 5417}
!87 = !{i64 5436}
!88 = !{i64 5455}
!89 = !{i64 5474}
!90 = !{i64 5493}
!91 = !{i64 5512}
!92 = !{i64 5531}
!93 = !{i64 5536}
!94 = !{i64 5552}
!95 = !{i64 5571}
!96 = !{i64 5581}
!97 = !{i64 5596}
!98 = !{i64 5604}
!99 = !{i64 5619}
!100 = !{i64 5645}
!101 = !{i64 5681}
!102 = !{i64 5701}
!103 = !{i64 5742}
!104 = !{i64 5761}
!105 = !{i64 5769}
!106 = !{i64 5778}
!107 = !{i64 5780}
!108 = !{i64 5783}
!109 = !{i64 5792}
!110 = !{i64 5796}
!111 = !{i64 5812}
!112 = !{i64 5814}
!113 = !{i64 5816}
!114 = !{i64 5824}
!115 = !{i64 5831}
!116 = !{i64 5840}
!117 = !{i64 5848}
!118 = !{i64 5850}
!119 = !{i64 5853}
!120 = !{i64 5856}
!121 = !{i64 5859}
!122 = !{i64 5872}
!123 = !{i64 5874}
!124 = !{i64 5876}
!125 = !{i64 5878}
!126 = !{i64 5881}
!127 = !{i64 5883}
!128 = !{i64 5885}
!129 = !{i64 5888}
!130 = !{i64 5904}
!131 = !{i64 5907}
!132 = !{i64 5920}
!133 = !{i64 5927}
!134 = !{i64 5936}
!135 = !{i64 5944}
!136 = !{i64 5946}
!137 = !{i64 5949}
!138 = !{i64 5952}
!139 = !{i64 5957}
!140 = !{i64 5968}
!141 = !{i64 5971}
!142 = !{i64 5973}
!143 = !{i64 5975}
!144 = !{i64 5978}
!145 = !{i64 5982}
!146 = !{i64 5987}
!147 = !{i64 6000}
!148 = !{i64 6003}
!149 = !{i64 6016}
!150 = !{i64 6037}
!151 = !{i64 6048}
!152 = !{i64 6064}
!153 = !{i64 6085}
!154 = !{i64 6100}
