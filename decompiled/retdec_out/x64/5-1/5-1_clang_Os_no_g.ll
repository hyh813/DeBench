source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_3d78_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_3da0_type = type { i64 ()*, i64 ()*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_40cc = global i64 0
@global_var_40a0 = external local_unnamed_addr global i64
@global_var_40c8 = global i64 0
@global_var_21f8 = local_unnamed_addr constant [5 x i8] c"Test\00"
@global_var_3d10 = local_unnamed_addr global i64 0
@global_var_3d28 = global i64 0
@global_var_3d38 = global i64 0
@global_var_3d50 = global i64 0
@0 = external global i32
@global_var_3ff8 = local_unnamed_addr global void (i64*)* null
@global_var_2207 = external local_unnamed_addr constant i128
@global_var_40d0 = local_unnamed_addr global i32 0
@global_var_40d1 = global i32 0
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

define i64 @function_1030(i64 %arg1) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i32 @function_1040(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i64 @function_1050(i64 %arg1) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !8
  ret i64 %0, !insn.addr !8
}

define i32 @function_1060(i8* %s) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_1070(i64 %arg1) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i32 @function_1080(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_1090(i64* %ptr) local_unnamed_addr {
dec_label_pc_1090:
  call void @_ZdlPv(i64* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define i64 @function_10a0(i64 %arg1) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_10b0(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define void @function_10c0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !15
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !15
  ret void, !insn.addr !15
}

define i64 @function_10d0() local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define i64 @function_10e0() local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i32 @function_10f0(i8* %s) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @puts(i8* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i64 @function_1100() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !19
  ret i64 %0, !insn.addr !19
}

define i64 @function_1110(i64 %arg1, i64 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i32 %arg3), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define void @function_1120(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1120:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !21
  ret void, !insn.addr !21
}

define void @function_1130(i64* %d) local_unnamed_addr {
dec_label_pc_1130:
  call void @__cxa_finalize(i64* %d), !insn.addr !22
  ret void, !insn.addr !22
}

define i64 @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !23
  %1 = load void (i64*)*, void (i64*)** @global_var_3ff8, align 8, !insn.addr !24
  %2 = call i32 @__cxa_atexit(void (i64*)* %1, i64* nonnull @global_var_40cc, i64* inttoptr (i64 16544 to i64*)), !insn.addr !25
  %3 = sext i32 %2 to i64, !insn.addr !25
  ret i64 %3, !insn.addr !25
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1170:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !26
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !26
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !26
  %3 = call i32 @__libc_start_main(i64 5544, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !26
  %4 = call i64 @__asm_hlt(), !insn.addr !27
  unreachable, !insn.addr !27
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11a0:
  ret i64 ptrtoint (i64* @global_var_40c8 to i64), !insn.addr !28
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_11d0:
  ret i64 0, !insn.addr !29
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_40c8 to i8*), align 8, !insn.addr !30
  %3 = icmp eq i8 %2, 0, !insn.addr !30
  %4 = icmp eq i1 %3, false, !insn.addr !31
  br i1 %4, label %dec_label_pc_1248, label %dec_label_pc_121d, !insn.addr !31

dec_label_pc_121d:                                ; preds = %dec_label_pc_1210
  %5 = load i64, i64* inttoptr (i64 16336 to i64*), align 16, !insn.addr !32
  %6 = icmp eq i64 %5, 0, !insn.addr !32
  br i1 %6, label %dec_label_pc_1237, label %dec_label_pc_122b, !insn.addr !33

dec_label_pc_122b:                                ; preds = %dec_label_pc_121d
  %7 = load i64, i64* @global_var_40a0, align 8, !insn.addr !34
  %8 = inttoptr i64 %7 to i64*, !insn.addr !35
  call void @__cxa_finalize(i64* %8), !insn.addr !35
  br label %dec_label_pc_1237, !insn.addr !35

dec_label_pc_1237:                                ; preds = %dec_label_pc_122b, %dec_label_pc_121d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !36
  store i8 1, i8* bitcast (i64* @global_var_40c8 to i8*), align 8, !insn.addr !37
  ret i64 %9, !insn.addr !38

dec_label_pc_1248:                                ; preds = %dec_label_pc_1210
  ret i64 %1, !insn.addr !39
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i64 @register_tm_clones(), !insn.addr !40
  ret i64 %0, !insn.addr !40
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_125c:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %stack_var_-36 = alloca i128, align 8
  %2 = load i128, i128* %0
  %3 = load i128, i128* @global_var_2207, align 8, !insn.addr !41
  %4 = call i128 @__asm_movups(i128 %3), !insn.addr !41
  call void @__asm_movups.5(i128 %1, i128 %4), !insn.addr !42
  %5 = call i128 @__asm_movups(i128 1953719636), !insn.addr !43
  %6 = mul i128 %2, 18446744073709551615
  %7 = ashr exact i128 %6, 64, !insn.addr !44
  call void @__asm_movups.5(i128 %7, i128 %5), !insn.addr !44
  %8 = bitcast i128* %stack_var_-36 to i8*, !insn.addr !45
  %9 = call i32 @strlen(i8* nonnull %8), !insn.addr !45
  %10 = add i32 %9, 4700, !insn.addr !46
  %11 = zext i32 %10 to i64, !insn.addr !46
  ret i64 %11, !insn.addr !47

; uselistorder directives
  uselistorder i128* %0, { 1, 0 }
}

define i64 @_Z20test_cpp_constructorv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1294:
  %rdx.0.reg2mem = alloca i64, !insn.addr !48
  %rcx.0.reg2mem = alloca i64, !insn.addr !48
  %0 = call i64 @_Znam(i64 20), !insn.addr !49
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !50
  store i64 %0, i64* %rdx.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_12a4, !insn.addr !50

dec_label_pc_12a4:                                ; preds = %dec_label_pc_12a4, %dec_label_pc_1294
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %1 = trunc i64 %rcx.0.reload to i32, !insn.addr !51
  %2 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !51
  store i32 %1, i32* %2, align 4, !insn.addr !51
  %3 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !52
  %4 = add i64 %rdx.0.reload, 4, !insn.addr !53
  %5 = icmp eq i64 %rcx.0.reload, 40, !insn.addr !54
  %6 = icmp eq i1 %5, false, !insn.addr !55
  store i64 %3, i64* %rcx.0.reg2mem, !insn.addr !55
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !55
  br i1 %6, label %dec_label_pc_12a4, label %dec_label_pc_12b4, !insn.addr !55

dec_label_pc_12b4:                                ; preds = %dec_label_pc_12a4
  store i32 ptrtoint (i32* @global_var_40d1 to i32), i32* @global_var_40d0, align 4, !insn.addr !56
  %7 = add i64 %0, 8, !insn.addr !57
  %8 = inttoptr i64 %7 to i32*, !insn.addr !57
  %9 = load i32, i32* %8, align 4, !insn.addr !57
  %10 = add i32 %9, ptrtoint (i32* @global_var_40d1 to i32), !insn.addr !57
  %11 = inttoptr i64 %0 to i64*, !insn.addr !58
  %12 = and i64 %arg2, 4294967295
  %13 = inttoptr i64 %12 to i64*, !insn.addr !58
  call void @_ZdaPv(i64* %11, i64* %13), !insn.addr !58
  %14 = load i32, i32* @global_var_40d0, align 4, !insn.addr !59
  %15 = add i32 %14, -1, !insn.addr !60
  store i32 %15, i32* @global_var_40d0, align 4, !insn.addr !61
  %16 = mul i32 %15, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !62
  %17 = add i32 %10, %16, !insn.addr !63
  %18 = zext i32 %17 to i64, !insn.addr !63
  ret i64 %18, !insn.addr !64

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %0, { 2, 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* @global_var_40d0, { 2, 1, 0 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12e5:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !65
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_12ed:
  ret i64 42, !insn.addr !66
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_12f3:
  ret i64 71, !insn.addr !67
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_12f9:
  ret i64 650, !insn.addr !68
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_12ff:
  ret i64 22, !insn.addr !69
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1305:
  ret i64 39, !insn.addr !70
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_130b:
  ret i64 16, !insn.addr !71
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1311:
  ret i64 85, !insn.addr !72
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1317:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !73
  %1 = inttoptr i64 %0 to i32*, !insn.addr !74
  store i32 42, i32* %1, align 4, !insn.addr !74
  %2 = load i64, i64* inttoptr (i64 16328 to i64*), align 8, !insn.addr !75
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i32 0), !insn.addr !76
  %4 = inttoptr i64 %3 to %_Unwind_Exception*, !insn.addr !77
  call void @_Unwind_Resume(%_Unwind_Exception* %4), !insn.addr !77
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !77
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_13d7:
  ret i64 703, !insn.addr !78
}

define i64 @_Z13test_cpp_rttiv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_13dd:
  %0 = call i64 @_Znwm(i64 8), !insn.addr !79
  %1 = inttoptr i64 %0 to i64*, !insn.addr !80
  store i64 ptrtoint (%vtable_3d78_type* @global_var_3d78 to i64), i64* %1, align 8, !insn.addr !80
  %2 = call i64 @_Znwm(i64 8), !insn.addr !81
  %3 = inttoptr i64 %2 to i64*, !insn.addr !82
  store i64 ptrtoint (%vtable_3da0_type* @global_var_3da0 to i64), i64* %3, align 8, !insn.addr !82
  %4 = call i64 @__dynamic_cast(i64 %0, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d38, i32 0), !insn.addr !83
  %5 = icmp eq i64 %4, 0, !insn.addr !84
  %6 = select i1 %5, i64 30, i64 130, !insn.addr !85
  %7 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_3d28 to i64), i64* nonnull @global_var_3d50, i32 0), !insn.addr !86
  %8 = add nuw nsw i64 %6, 200, !insn.addr !87
  %9 = icmp eq i64 %7, 0, !insn.addr !88
  %10 = select i1 %9, i64 %6, i64 %8, !insn.addr !89
  call void @_ZdlPv(i64* %1), !insn.addr !90
  %11 = add nuw nsw i64 %10, 14, !insn.addr !91
  ret i64 %11, !insn.addr !92

; uselistorder directives
  uselistorder i64 (i64, i64, i64*, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_147f:
  %0 = alloca i128
  %1 = alloca i64
  %2 = load i64, i64* %1
  %3 = load i64, i64* %1
  %4 = load i128, i128* %0
  %stack_var_-36 = alloca i128, align 8
  %5 = load i128, i128* %0
  %6 = call i32 @puts(i8* bitcast (i8** @global_var_21d4 to i8*)), !insn.addr !93
  %7 = load i128, i128* @global_var_2207, align 8, !insn.addr !94
  %8 = call i128 @__asm_movups(i128 %7), !insn.addr !94
  call void @__asm_movups.5(i128 %4, i128 %8), !insn.addr !95
  %9 = call i128 @__asm_movups(i128 1953719636), !insn.addr !96
  %10 = mul i128 %5, 18446744073709551615
  %11 = ashr exact i128 %10, 64, !insn.addr !97
  call void @__asm_movups.5(i128 %11, i128 %9), !insn.addr !97
  %12 = bitcast i128* %stack_var_-36 to i8*, !insn.addr !98
  %13 = call i32 @strlen(i8* nonnull %12), !insn.addr !98
  %14 = add i32 %13, 4700, !insn.addr !99
  %15 = zext i32 %14 to i64, !insn.addr !99
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_207d to i8*)), !insn.addr !100
  %17 = call i64 @_Z20test_cpp_constructorv(i64 ptrtoint (i8** @global_var_207d to i64), i64 %15, i64 %2, i64 %3), !insn.addr !101
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_209b to i8*)), !insn.addr !102
  %19 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20b7 to i8*)), !insn.addr !103
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20d3 to i8*)), !insn.addr !104
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_20ef to i8*)), !insn.addr !105
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_210c to i8*)), !insn.addr !106
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2128 to i8*)), !insn.addr !107
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2144 to i8*)), !insn.addr !108
  %25 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2160 to i8*)), !insn.addr !109
  %26 = call i64 @_Z18test_cpp_exceptionv(i64 ptrtoint (i8** @global_var_2160 to i64), i64 85, i64 %2), !insn.addr !110
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_217c to i8*)), !insn.addr !111
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2199 to i8*)), !insn.addr !112
  %29 = call i64 @_Z13test_cpp_rttiv(i64 ptrtoint (i8** @global_var_2199 to i64), i64 703, i64 %2, i64 %3), !insn.addr !113
  %30 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_21b6 to i8*)), !insn.addr !114
  %31 = sext i32 %30 to i64, !insn.addr !114
  ret i64 %31, !insn.addr !114

; uselistorder directives
  uselistorder i64* %1, { 1, 0 }
  uselistorder i128* %0, { 1, 0 }
  uselistorder i64 703, { 1, 0 }
  uselistorder i8** @global_var_2199, { 1, 0 }
  uselistorder i64 85, { 1, 0 }
  uselistorder i8** @global_var_2160, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i8** @global_var_207d, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i128* @global_var_2207, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_15a8:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !115
  ret i64 0, !insn.addr !116
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_15b2:
  %0 = sub i32 %arg1, %arg2, !insn.addr !117
  %1 = xor i32 %arg2, %arg1, !insn.addr !117
  %2 = xor i32 %0, %arg1, !insn.addr !117
  %3 = and i32 %2, %1, !insn.addr !117
  %4 = icmp slt i32 %3, 0, !insn.addr !117
  %5 = icmp eq i32 %0, 0, !insn.addr !117
  %6 = icmp slt i32 %0, 0, !insn.addr !117
  %7 = icmp eq i1 %6, %4, !insn.addr !118
  %8 = icmp eq i1 %5, false, !insn.addr !118
  %9 = icmp eq i1 %7, %8, !insn.addr !118
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !118
  ret i32 %10, !insn.addr !119

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_15ba:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = fptrunc double %arg2 to float, !insn.addr !120
  %3 = bitcast float %2 to i32, !insn.addr !120
  %4 = sext i32 %3 to i128, !insn.addr !120
  %5 = call i128 @__asm_maxsd(i128 %1, i128 %4), !insn.addr !120
  %6 = trunc i128 %5 to i64, !insn.addr !121
  %7 = bitcast i64 %6 to double, !insn.addr !121
  ret double %7, !insn.addr !121
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_15bf:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !122
  store i32 %3, i32* %arg2, align 4, !insn.addr !123
  ret void, !insn.addr !124

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_15c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 40, !insn.addr !125
  %4 = inttoptr i64 %3 to i32*, !insn.addr !125
  store i32 0, i32* %4, align 4, !insn.addr !125
  ret i64 %1, !insn.addr !126
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !127
  %2 = inttoptr i64 %1 to i32*, !insn.addr !127
  %3 = load i32, i32* %2, align 4, !insn.addr !127
  %4 = sext i32 %3 to i64, !insn.addr !127
  %5 = icmp sgt i32 %3, 9, !insn.addr !128
  br i1 %5, label %dec_label_pc_15e3, label %dec_label_pc_15da, !insn.addr !128

dec_label_pc_15da:                                ; preds = %dec_label_pc_15d0
  %6 = add i32 %3, 1, !insn.addr !129
  store i32 %6, i32* %2, align 4, !insn.addr !130
  %7 = mul i64 %4, 4, !insn.addr !131
  %8 = add i64 %7, %0, !insn.addr !131
  %9 = inttoptr i64 %8 to i32*, !insn.addr !131
  store i32 %arg2, i32* %9, align 4, !insn.addr !131
  br label %dec_label_pc_15e3, !insn.addr !131

dec_label_pc_15e3:                                ; preds = %dec_label_pc_15da, %dec_label_pc_15d0
  ret i64 %4, !insn.addr !132

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_15e4:
  %rax.0.reg2mem = alloca i64, !insn.addr !133
  %0 = icmp slt i32 %arg2, 0, !insn.addr !134
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !135
  br i1 %0, label %dec_label_pc_15f4, label %dec_label_pc_15ea, !insn.addr !135

dec_label_pc_15ea:                                ; preds = %dec_label_pc_15e4
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !136
  %3 = inttoptr i64 %2 to i32*, !insn.addr !136
  %4 = load i32, i32* %3, align 4, !insn.addr !136
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !137
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !137
  br i1 %5, label %dec_label_pc_15ef, label %dec_label_pc_15f4, !insn.addr !137

dec_label_pc_15ef:                                ; preds = %dec_label_pc_15ea
  %6 = sext i32 %arg2 to i64
  %7 = mul i64 %6, 4, !insn.addr !138
  %8 = and i64 %7, 17179869180, !insn.addr !139
  %9 = add i64 %8, %1, !insn.addr !139
  %10 = inttoptr i64 %9 to i32*, !insn.addr !139
  %11 = load i32, i32* %10, align 4, !insn.addr !139
  %12 = zext i32 %11 to i64, !insn.addr !139
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !139
  br label %dec_label_pc_15f4, !insn.addr !139

dec_label_pc_15f4:                                ; preds = %dec_label_pc_15ea, %dec_label_pc_15ef, %dec_label_pc_15e4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !140

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 0, { 0, 1, 4, 38, 39, 2, 40, 5, 3, 41, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder label %dec_label_pc_15f4, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_15f6:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !141
  %2 = inttoptr i64 %1 to i32*, !insn.addr !141
  %3 = load i32, i32* %2, align 4, !insn.addr !141
  %4 = zext i32 %3 to i64, !insn.addr !141
  ret i64 %4, !insn.addr !142

; uselistorder directives
  uselistorder i64 40, { 1, 2, 3, 4, 0 }
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_15fa:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !143
  %4 = inttoptr i64 %3 to i32*, !insn.addr !143
  store i32 0, i32* %4, align 4, !insn.addr !143
  ret i64 %1, !insn.addr !144
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_1602:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = add i64 %2, 80, !insn.addr !145
  %4 = inttoptr i64 %3 to i32*, !insn.addr !145
  %5 = load i32, i32* %4, align 4, !insn.addr !145
  %6 = sext i32 %5 to i64, !insn.addr !145
  %7 = icmp sgt i32 %5, 9, !insn.addr !146
  br i1 %7, label %dec_label_pc_1617, label %dec_label_pc_160c, !insn.addr !146

dec_label_pc_160c:                                ; preds = %dec_label_pc_1602
  %8 = add i32 %5, 1, !insn.addr !147
  store i32 %8, i32* %4, align 4, !insn.addr !148
  %9 = call i64 @__asm_movsd(i128 %1), !insn.addr !149
  %10 = mul i64 %6, 8, !insn.addr !149
  %11 = add i64 %10, %2, !insn.addr !149
  %12 = inttoptr i64 %11 to i64*, !insn.addr !149
  store i64 %9, i64* %12, align 8, !insn.addr !149
  br label %dec_label_pc_1617, !insn.addr !149

dec_label_pc_1617:                                ; preds = %dec_label_pc_160c, %dec_label_pc_1602
  ret i64 %6, !insn.addr !150

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1618:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !151
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !151
  %3 = icmp slt i32 %arg2, 0, !insn.addr !152
  br i1 %3, label %dec_label_pc_162b, label %dec_label_pc_161f, !insn.addr !153

dec_label_pc_161f:                                ; preds = %dec_label_pc_1618
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !154
  %6 = inttoptr i64 %5 to i32*, !insn.addr !154
  %7 = load i32, i32* %6, align 4, !insn.addr !154
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !155
  br i1 %8, label %dec_label_pc_1624, label %dec_label_pc_162b, !insn.addr !155

dec_label_pc_1624:                                ; preds = %dec_label_pc_161f
  %9 = zext i32 %arg2 to i64
  %10 = mul i64 %9, 8, !insn.addr !156
  %11 = add i64 %10, %4, !insn.addr !156
  %12 = inttoptr i64 %11 to i64*, !insn.addr !156
  %13 = load i64, i64* %12, align 8, !insn.addr !156
  %14 = call i128 @__asm_movsd.6(i64 %13), !insn.addr !156
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !156
  br label %dec_label_pc_162b, !insn.addr !156

dec_label_pc_162b:                                ; preds = %dec_label_pc_161f, %dec_label_pc_1624, %dec_label_pc_1618
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !157

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 12, 0, 1, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_162b, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_162c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !158
  %2 = inttoptr i64 %1 to i32*, !insn.addr !158
  %3 = load i32, i32* %2, align 4, !insn.addr !158
  %4 = zext i32 %3 to i64, !insn.addr !158
  ret i64 %4, !insn.addr !159
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_1630:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !160
  call void @_ZdlPv(i64* %2), !insn.addr !160
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !160
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1636:
  ret i64 1, !insn.addr !161
}

define i64 @_ZN8RTTIBaseD2Ev() {
dec_label_pc_163c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !162
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_163e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !163
  call void @_ZdlPv(i64* %2), !insn.addr !163
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !163

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 0 }
  uselistorder void (i64*)* @_ZdlPv, { 2, 1, 0, 3 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1644:
  ret i64 2, !insn.addr !164
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_164c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !165

; uselistorder directives
  uselistorder i32 1, { 13, 12, 11, 10, 14, 4, 19, 3, 9, 15, 20, 8, 7, 2, 21, 6, 1, 17, 16, 22, 0, 5, 23, 18 }
}

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i64 @_Znam(i64) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdlPv(i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64, i64*, i32) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

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
!21 = !{i64 4384}
!22 = !{i64 4400}
!23 = !{i64 4427}
!24 = !{i64 4432}
!25 = !{i64 4450}
!26 = !{i64 4495}
!27 = !{i64 4501}
!28 = !{i64 4552}
!29 = !{i64 4616}
!30 = !{i64 4628}
!31 = !{i64 4635}
!32 = !{i64 4638}
!33 = !{i64 4649}
!34 = !{i64 4651}
!35 = !{i64 4658}
!36 = !{i64 4663}
!37 = !{i64 4668}
!38 = !{i64 4676}
!39 = !{i64 4680}
!40 = !{i64 4692}
!41 = !{i64 4709}
!42 = !{i64 4716}
!43 = !{i64 4720}
!44 = !{i64 4727}
!45 = !{i64 4741}
!46 = !{i64 4746}
!47 = !{i64 4755}
!48 = !{i64 4756}
!49 = !{i64 4762}
!50 = !{i64 4769}
!51 = !{i64 4772}
!52 = !{i64 4774}
!53 = !{i64 4778}
!54 = !{i64 4782}
!55 = !{i64 4786}
!56 = !{i64 4796}
!57 = !{i64 4802}
!58 = !{i64 4808}
!59 = !{i64 4813}
!60 = !{i64 4819}
!61 = !{i64 4821}
!62 = !{i64 4827}
!63 = !{i64 4833}
!64 = !{i64 4836}
!65 = !{i64 4843}
!66 = !{i64 4850}
!67 = !{i64 4856}
!68 = !{i64 4862}
!69 = !{i64 4868}
!70 = !{i64 4874}
!71 = !{i64 4880}
!72 = !{i64 4886}
!73 = !{i64 4897}
!74 = !{i64 4902}
!75 = !{i64 4908}
!76 = !{i64 4923}
!77 = !{i64 5074}
!78 = !{i64 5084}
!79 = !{i64 5098}
!80 = !{i64 5113}
!81 = !{i64 5121}
!82 = !{i64 5136}
!83 = !{i64 5162}
!84 = !{i64 5167}
!85 = !{i64 5180}
!86 = !{i64 5198}
!87 = !{i64 5203}
!88 = !{i64 5209}
!89 = !{i64 5212}
!90 = !{i64 5218}
!91 = !{i64 5233}
!92 = !{i64 5246}
!93 = !{i64 5258}
!94 = !{i64 5268}
!95 = !{i64 5275}
!96 = !{i64 5279}
!97 = !{i64 5286}
!98 = !{i64 5300}
!99 = !{i64 5305}
!100 = !{i64 5320}
!101 = !{i64 5325}
!102 = !{i64 5341}
!103 = !{i64 5360}
!104 = !{i64 5379}
!105 = !{i64 5398}
!106 = !{i64 5417}
!107 = !{i64 5436}
!108 = !{i64 5455}
!109 = !{i64 5474}
!110 = !{i64 5479}
!111 = !{i64 5495}
!112 = !{i64 5514}
!113 = !{i64 5519}
!114 = !{i64 5539}
!115 = !{i64 5545}
!116 = !{i64 5553}
!117 = !{i64 5556}
!118 = !{i64 5558}
!119 = !{i64 5561}
!120 = !{i64 5562}
!121 = !{i64 5566}
!122 = !{i64 5571}
!123 = !{i64 5573}
!124 = !{i64 5575}
!125 = !{i64 5576}
!126 = !{i64 5583}
!127 = !{i64 5584}
!128 = !{i64 5592}
!129 = !{i64 5594}
!130 = !{i64 5597}
!131 = !{i64 5600}
!132 = !{i64 5603}
!133 = !{i64 5604}
!134 = !{i64 5606}
!135 = !{i64 5608}
!136 = !{i64 5610}
!137 = !{i64 5613}
!138 = !{i64 5615}
!139 = !{i64 5617}
!140 = !{i64 5620}
!141 = !{i64 5622}
!142 = !{i64 5625}
!143 = !{i64 5626}
!144 = !{i64 5633}
!145 = !{i64 5634}
!146 = !{i64 5642}
!147 = !{i64 5644}
!148 = !{i64 5647}
!149 = !{i64 5650}
!150 = !{i64 5655}
!151 = !{i64 5656}
!152 = !{i64 5659}
!153 = !{i64 5661}
!154 = !{i64 5663}
!155 = !{i64 5666}
!156 = !{i64 5670}
!157 = !{i64 5675}
!158 = !{i64 5676}
!159 = !{i64 5679}
!160 = !{i64 5680}
!161 = !{i64 5691}
!162 = !{i64 5692}
!163 = !{i64 5694}
!164 = !{i64 5705}
!165 = !{i64 5720}
