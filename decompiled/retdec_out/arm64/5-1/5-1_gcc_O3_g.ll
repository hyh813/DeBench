source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%_Unwind_Exception = type { i32 }
%vtable_12c28_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_12c50_type = type { void (i64*)*, void (i64*)*, i64 ()* }

@global_var_12f08 = local_unnamed_addr global i64 3760
@global_var_12f10 = local_unnamed_addr global i64 3760
@global_var_12f18 = local_unnamed_addr global i64 3760
@global_var_12f20 = local_unnamed_addr global i64 3760
@global_var_12f28 = local_unnamed_addr global i64 3760
@global_var_12f30 = local_unnamed_addr global i64 3760
@global_var_12f38 = local_unnamed_addr global i64 3760
@global_var_12f40 = local_unnamed_addr global i64 3760
@global_var_12f48 = local_unnamed_addr global i64 3760
@global_var_12f50 = local_unnamed_addr global i64 3760
@global_var_12f58 = local_unnamed_addr global i64 3760
@global_var_12f60 = local_unnamed_addr global i64 3760
@global_var_12f68 = local_unnamed_addr global i64 3760
@global_var_12f70 = local_unnamed_addr global i64 3760
@global_var_12f78 = local_unnamed_addr global i64 3760
@global_var_12f80 = local_unnamed_addr global i64 3760
@global_var_12f88 = local_unnamed_addr global i64 3760
@global_var_12f98 = local_unnamed_addr global i64 3760
@global_var_12fa0 = local_unnamed_addr global i64 3760
@global_var_12fa8 = local_unnamed_addr global i64 3760
@global_var_12fb0 = local_unnamed_addr global i64 3760
@global_var_12fc0 = local_unnamed_addr global i64 0
@global_var_10d0 = local_unnamed_addr constant [3 x i8] c"?\08\00"
@global_var_13000 = global i64 0
@global_var_13038 = local_unnamed_addr global i64 0
@global_var_13040 = global i64 0
@global_var_13008 = external local_unnamed_addr global i64
@global_var_12fd0 = local_unnamed_addr global i64 4384
@global_var_13030 = global i64 0
@global_var_12fd8 = local_unnamed_addr global i64 0
@global_var_1274 = local_unnamed_addr constant i64 4107496579118661664
@global_var_12fc8 = local_unnamed_addr global i64 0
@global_var_1b98 = constant [5 x i8] c"Test\00"
@global_var_3e8 = local_unnamed_addr global i64 0
@global_var_28a = local_unnamed_addr global i64 1970324837171200
@global_var_2bf = local_unnamed_addr global i64 0
@global_var_1d58 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_1d68 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_12c48 = local_unnamed_addr global i64 76944
@global_var_12c90 = global i64 0
@global_var_12c98 = local_unnamed_addr global [15 x i8]* @global_var_1d68
@global_var_c48 = global i64 0
@global_var_12c68 = global i64 0
@global_var_12c78 = global i64 0
@global_var_1b88 = constant [5 x i8] c"Base\00"
@global_var_1b90 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_12ca8 = global %_Unwind_Exception* null
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_1ba0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_1bc8 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_1be8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_1c08 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_1c28 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_1c48 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_1c68 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_1c88 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_1ca8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_1cc8 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_1ce8 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_1d08 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_1d28 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_12c28 = global %vtable_12c28_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_12c50 = global %vtable_12c50_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_e90:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i32 @function_ed0(i8* %s) local_unnamed_addr {
dec_label_pc_ed0:
  %0 = call i32 @puts(i8* %s), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_ee0(i8* %s) local_unnamed_addr {
dec_label_pc_ee0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define void @function_ef0() local_unnamed_addr {
dec_label_pc_ef0:
  call void @__stack_chk_fail(), !insn.addr !4
  ret void, !insn.addr !4
}

define i64 @function_f00(i64 %arg1) local_unnamed_addr {
dec_label_pc_f00:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
}

define i64 @function_f10(i64 %arg1) local_unnamed_addr {
dec_label_pc_f10:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_f20(i64 %arg1) local_unnamed_addr {
dec_label_pc_f20:
  %0 = call i64 @__cxa_finalize.6(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_f30(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_f30:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64 @function_f40(i64 %arg1) local_unnamed_addr {
dec_label_pc_f40:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !9
  ret i64 %0, !insn.addr !9
}

define i64 @function_f50(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_f50:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i8* @function_f60(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_f60:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define i64 @function_f70(i64 %arg1, i64 %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_f70:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i64 %arg4), !insn.addr !12
  ret i64 %0, !insn.addr !12
}

define i32 @function_f80(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_f80:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @function_f90(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_f90:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i64 @function_fa0(i64 %arg1) local_unnamed_addr {
dec_label_pc_fa0:
  %0 = call i64 @__cxa_rethrow(i64 %arg1), !insn.addr !15
  ret i64 %0, !insn.addr !15
}

define i64 @function_fb0() local_unnamed_addr {
dec_label_pc_fb0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define void @function_fc0() local_unnamed_addr {
dec_label_pc_fc0:
  call void @abort(), !insn.addr !17
  ret void, !insn.addr !17
}

define i64 @function_fd0(i64 %arg1) local_unnamed_addr {
dec_label_pc_fd0:
  %0 = call i64 @__cxa_end_catch(i64 %arg1), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define i64 @function_ff0(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_ff0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4), !insn.addr !19
  ret i64 %0, !insn.addr !19
}

define void @function_1000(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1000:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !20
  ret void, !insn.addr !20
}

define i32 @function_1010(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1010:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i64 @function_1020(i64 %arg1) local_unnamed_addr {
dec_label_pc_1020:
  %0 = call i64 @__gmon_start__.11(i64 %arg1), !insn.addr !22
  ret i64 %0, !insn.addr !22
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1040:
  %x20.3.in.reg2mem = alloca i64, !insn.addr !23
  %x20.2.reg2mem = alloca i64, !insn.addr !23
  %x0.2.reg2mem = alloca i64, !insn.addr !23
  %x20.1.reg2mem = alloca i64, !insn.addr !23
  %x0.1.reg2mem = alloca i64, !insn.addr !23
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !24
  %1 = inttoptr i64 %0 to i32*, !insn.addr !25
  store i32 42, i32* %1, align 4, !insn.addr !25
  %2 = load i64, i64* @global_var_12fc0, align 8, !insn.addr !26
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0, i64 42), !insn.addr !27
  %4 = icmp eq i64 %2, 1, !insn.addr !28
  store i64 %3, i64* %x0.1.reg2mem, !insn.addr !29
  br i1 %4, label %dec_label_pc_10a8, label %dec_label_pc_10e0, !insn.addr !29

dec_label_pc_10a8:                                ; preds = %dec_label_pc_1040
  %5 = call i64 @__cxa_begin_catch(i64 %3), !insn.addr !30
  %6 = inttoptr i64 %5 to i32*, !insn.addr !31
  %7 = load i32, i32* %6, align 4, !insn.addr !31
  %8 = call i64 @__cxa_rethrow(i64 %5), !insn.addr !32
  %9 = call i64 @__cxa_end_catch(i64 %8), !insn.addr !33
  %10 = call i64 @__cxa_begin_catch(i64 %8), !insn.addr !34
  %11 = inttoptr i64 %10 to i32*, !insn.addr !35
  %12 = load i32, i32* %11, align 4, !insn.addr !35
  %13 = call i64 @__cxa_end_catch(i64 %10), !insn.addr !36
  %14 = call i64 @__cxa_allocate_exception(i64 1), !insn.addr !37
  %15 = mul i32 %12, 2, !insn.addr !38
  %16 = add i32 %15, %7, !insn.addr !38
  %17 = zext i32 %16 to i64, !insn.addr !38
  %18 = call i64 @__cxa_throw(i64 %14, i64 ptrtoint (%_Unwind_Exception** @global_var_12ca8 to i64), i64 0, i64 42), !insn.addr !39
  store i64 %18, i64* %x0.2.reg2mem, !insn.addr !40
  store i64 %17, i64* %x20.2.reg2mem, !insn.addr !40
  br i1 icmp eq (i64 sub (i64 ptrtoint (%_Unwind_Exception** @global_var_12ca8 to i64), i64 2), i64 0), label %dec_label_pc_10e4, label %dec_label_pc_10d8, !insn.addr !40

dec_label_pc_10d8:                                ; preds = %dec_label_pc_10a8
  store i64 %18, i64* %x0.1.reg2mem, !insn.addr !41
  store i64 %17, i64* %x20.1.reg2mem, !insn.addr !41
  br i1 icmp eq (i64 ptrtoint (%_Unwind_Exception** @global_var_12ca8 to i64), i64 3), label %dec_label_pc_10f4, label %dec_label_pc_10e0, !insn.addr !41

dec_label_pc_10e0:                                ; preds = %dec_label_pc_1040, %dec_label_pc_10d8
  %x20.1.reload = load i64, i64* %x20.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %19 = inttoptr i64 %x0.1.reload to %_Unwind_Exception*, !insn.addr !42
  call void @_Unwind_Resume(%_Unwind_Exception* %19), !insn.addr !42
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.2.reg2mem, !insn.addr !42
  store i64 %x20.1.reload, i64* %x20.2.reg2mem, !insn.addr !42
  br label %dec_label_pc_10e4, !insn.addr !42

dec_label_pc_10e4:                                ; preds = %dec_label_pc_10e0, %dec_label_pc_10a8
  %x20.2.reload = load i64, i64* %x20.2.reg2mem
  %x0.2.reload = load i64, i64* %x0.2.reg2mem
  %20 = call i64 @__cxa_begin_catch(i64 %x0.2.reload), !insn.addr !43
  %21 = add i64 %x20.2.reload, 100, !insn.addr !44
  %22 = call i64 @__cxa_end_catch(i64 %20), !insn.addr !45
  store i64 %21, i64* %x20.3.in.reg2mem, !insn.addr !46
  br label %dec_label_pc_1100, !insn.addr !46

dec_label_pc_10f4:                                ; preds = %dec_label_pc_10d8
  %23 = call i64 @__cxa_begin_catch(i64 %18), !insn.addr !47
  %24 = add nuw nsw i64 %17, 200, !insn.addr !48
  %25 = call i64 @__cxa_end_catch(i64 %23), !insn.addr !49
  store i64 %24, i64* %x20.3.in.reg2mem, !insn.addr !49
  br label %dec_label_pc_1100, !insn.addr !49

dec_label_pc_1100:                                ; preds = %dec_label_pc_10f4, %dec_label_pc_10e4
  %x20.3.in.reload = load i64, i64* %x20.3.in.reg2mem
  %26 = trunc i64 %x20.3.in.reload to i32, !insn.addr !50
  ret i32 %26, !insn.addr !51

; uselistorder directives
  uselistorder i64 %18, { 2, 1, 0 }
  uselistorder i64 %17, { 2, 1, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x0.1.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64)* @__cxa_end_catch, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64)* @__cxa_begin_catch, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64, i64, i64, i64)* @__cxa_throw, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_allocate_exception, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10e0, { 1, 0 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_1120:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !52
  ret i32 0, !insn.addr !53
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !54
  %1 = load i64, i64* inttoptr (i64 77816 to i64*), align 8, !insn.addr !55
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !56
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_13040, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_13000 to i64), i64 8) to i64*)), !insn.addr !56
  ret void, !insn.addr !56
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_12fd0, align 8, !insn.addr !57
  %3 = trunc i64 %arg1 to i32, !insn.addr !58
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !58
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !58
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !58
  call void @abort(), !insn.addr !59
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !59

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0 }
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_11b4:
  %0 = load i64, i64* inttoptr (i64 77800 to i64*), align 8, !insn.addr !60
  %1 = icmp eq i64 %0, 0, !insn.addr !61
  br i1 %1, label %dec_label_pc_11c4, label %dec_label_pc_11c0, !insn.addr !61

dec_label_pc_11c0:                                ; preds = %dec_label_pc_11b4
  %2 = call i64 @__gmon_start__.11(i64 %0), !insn.addr !62
  ret i64 %2, !insn.addr !62

dec_label_pc_11c4:                                ; preds = %dec_label_pc_11b4
  ret i64 0, !insn.addr !63
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11d0:
  ret i64 ptrtoint (i64* @global_var_13030 to i64), !insn.addr !64
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1200:
  ret i64 ptrtoint (i64* @global_var_13030 to i64), !insn.addr !65
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1240:
  %x0.0.reg2mem = alloca i64, !insn.addr !66
  %0 = load i8, i8* bitcast (i64* @global_var_13030 to i8*), align 8, !insn.addr !67
  %1 = zext i8 %0 to i64, !insn.addr !67
  %2 = icmp eq i8 %0, 0, !insn.addr !68
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !68
  br i1 %2, label %dec_label_pc_1258, label %dec_label_pc_127c, !insn.addr !68

dec_label_pc_1258:                                ; preds = %dec_label_pc_1240
  %3 = load i64, i64* @global_var_12fd8, align 8, !insn.addr !69
  %4 = icmp eq i64 %3, 0, !insn.addr !70
  br i1 %4, label %dec_label_pc_1270, label %dec_label_pc_1264, !insn.addr !70

dec_label_pc_1264:                                ; preds = %dec_label_pc_1258
  %5 = load i64, i64* @global_var_13008, align 8, !insn.addr !71
  %6 = call i64 @__cxa_finalize.6(i64 %5), !insn.addr !72
  br label %dec_label_pc_1270, !insn.addr !72

dec_label_pc_1270:                                ; preds = %dec_label_pc_1264, %dec_label_pc_1258
  %7 = call i64 @deregister_tm_clones(), !insn.addr !73
  store i8 1, i8* bitcast (i64* @global_var_13030 to i8*), align 8, !insn.addr !74
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !74
  br label %dec_label_pc_127c, !insn.addr !74

dec_label_pc_127c:                                ; preds = %dec_label_pc_1240, %dec_label_pc_1270
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !75

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_127c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i64 @register_tm_clones(), !insn.addr !76
  ret i64 %0, !insn.addr !76
}

define void @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_12a0:
  %stack_var_-36 = alloca i64, align 8
  %0 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !77
  %1 = inttoptr i64 %0 to i64*, !insn.addr !78
  %2 = load i64, i64* %1, align 8, !insn.addr !78
  %3 = bitcast i64* %stack_var_-36 to i8*, !insn.addr !79
  %4 = call i8* @strncpy(i8* nonnull %3, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_1b98, i64 0, i64 0), i32 31), !insn.addr !79
  %5 = call i32 @strlen(i8* %4), !insn.addr !80
  %6 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !81
  %7 = inttoptr i64 %6 to i64*, !insn.addr !82
  %8 = load i64, i64* %7, align 8, !insn.addr !82
  %9 = icmp eq i64 %2, %8, !insn.addr !83
  br i1 %9, label %dec_label_pc_12f8, label %dec_label_pc_1308, !insn.addr !83

dec_label_pc_12f8:                                ; preds = %dec_label_pc_12a0
  ret void, !insn.addr !84

dec_label_pc_1308:                                ; preds = %dec_label_pc_12a0
  call void @__stack_chk_fail(), !insn.addr !85
  ret void, !insn.addr !86
}

define void @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1310:
  ret void, !insn.addr !87
}

define void @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1330:
  ret void, !insn.addr !88
}

define void @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1340:
  ret void, !insn.addr !89
}

define void @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1350:
  ret void, !insn.addr !90
}

define void @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1360:
  ret void, !insn.addr !91
}

define void @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1370:
  ret void, !insn.addr !92
}

define void @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1380:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %stack_var_-4 = alloca i32, align 4
  %stack_var_-8 = alloca i32, align 4
  %3 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !93
  %4 = inttoptr i64 %3 to i64*, !insn.addr !94
  %5 = load i64, i64* %4, align 8, !insn.addr !94
  %6 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !95
  %7 = trunc i128 %2 to i64, !insn.addr !96
  %8 = bitcast i64 %7 to double, !insn.addr !96
  %9 = trunc i128 %1 to i64, !insn.addr !96
  %10 = bitcast i64 %9 to double, !insn.addr !96
  %11 = call double @_Z12template_maxIdET_S0_S0_(double %8, double %10), !insn.addr !96
  store i32 10, i32* %stack_var_-8, align 4, !insn.addr !97
  store i32 20, i32* %stack_var_-4, align 4, !insn.addr !97
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-8, i32* nonnull %stack_var_-4), !insn.addr !98
  %12 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !99
  %13 = inttoptr i64 %12 to i64*, !insn.addr !100
  %14 = load i64, i64* %13, align 8, !insn.addr !100
  %15 = icmp eq i64 %5, %14, !insn.addr !101
  br i1 %15, label %dec_label_pc_140c, label %dec_label_pc_141c, !insn.addr !101

dec_label_pc_140c:                                ; preds = %dec_label_pc_1380
  ret void, !insn.addr !102

dec_label_pc_141c:                                ; preds = %dec_label_pc_1380
  call void @__stack_chk_fail(), !insn.addr !103
  ret void, !insn.addr !103

; uselistorder directives
  uselistorder i32* %stack_var_-8, { 1, 0 }
  uselistorder i32* %stack_var_-4, { 1, 0 }
  uselistorder i128* %0, { 1, 0 }
}

define void @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1420:
  ret void, !insn.addr !104
}

define void @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1430:
  ret void, !insn.addr !105
}

define void @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1440:
  ret void, !insn.addr !106
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_1450:
  %x0.0.reg2mem = alloca i64, !insn.addr !107
  %0 = call i64 @_Znwm(i64 8), !insn.addr !108
  %1 = inttoptr i64 %0 to i64*, !insn.addr !109
  store i64 ptrtoint (%vtable_12c28_type* @global_var_12c28 to i64), i64* %1, align 8, !insn.addr !109
  %2 = call i64 @_Znwm(i64 8), !insn.addr !110
  %3 = load i64, i64* %1, align 8, !insn.addr !111
  %4 = add i64 %3, -8, !insn.addr !112
  %5 = inttoptr i64 %4 to i64*, !insn.addr !112
  %6 = load i64, i64* %5, align 8, !insn.addr !112
  %7 = add i64 %6, 8, !insn.addr !113
  %8 = inttoptr i64 %7 to i64*, !insn.addr !113
  %9 = load i64, i64* %8, align 8, !insn.addr !113
  %10 = inttoptr i64 %2 to i64*, !insn.addr !114
  store i64 ptrtoint (%vtable_12c50_type* @global_var_12c50 to i64), i64* %10, align 8, !insn.addr !114
  %11 = icmp eq i64 %9, ptrtoint ([15 x i8]* @global_var_1d58 to i64), !insn.addr !115
  %12 = inttoptr i64 %9 to i8*
  %13 = load i8, i8* %12, align 1
  br i1 %11, label %dec_label_pc_14e0, label %dec_label_pc_14b4, !insn.addr !116

dec_label_pc_14b4:                                ; preds = %dec_label_pc_1450
  %14 = icmp eq i8 %13, 42, !insn.addr !117
  br i1 %14, label %dec_label_pc_15ac, label %dec_label_pc_14c0, !insn.addr !118

dec_label_pc_14c0:                                ; preds = %dec_label_pc_14b4
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1d58, i64 0, i64 0)), !insn.addr !119
  br label %dec_label_pc_14e0, !insn.addr !120

dec_label_pc_14e0:                                ; preds = %dec_label_pc_1450, %dec_label_pc_14c0
  %16 = load [15 x i8]*, [15 x i8]** @global_var_12c98, align 8, !insn.addr !121
  %17 = ptrtoint [15 x i8]* %16 to i64, !insn.addr !121
  %18 = icmp eq [15 x i8]* %16, @global_var_1d68, !insn.addr !122
  store i64 %17, i64* %x0.0.reg2mem, !insn.addr !123
  br i1 %18, label %dec_label_pc_1514, label %dec_label_pc_14fc, !insn.addr !123

dec_label_pc_14fc:                                ; preds = %dec_label_pc_15ac, %dec_label_pc_14e0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %19 = inttoptr i64 %x0.0.reload to i8*, !insn.addr !124
  %20 = load i8, i8* %19, align 1, !insn.addr !124
  %21 = icmp eq i8 %20, 42, !insn.addr !125
  br i1 %21, label %dec_label_pc_1514, label %dec_label_pc_1508, !insn.addr !126

dec_label_pc_1508:                                ; preds = %dec_label_pc_14fc
  %22 = call i32 @strcmp(i8* %19, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_1d68, i64 0, i64 0)), !insn.addr !127
  br label %dec_label_pc_1514, !insn.addr !128

dec_label_pc_1514:                                ; preds = %dec_label_pc_14e0, %dec_label_pc_15ac, %dec_label_pc_1508, %dec_label_pc_14fc
  %23 = call i64 @__dynamic_cast(i64 %0, i64 ptrtoint (i64* @global_var_12c68 to i64), i64* nonnull @global_var_12c78, i64 0), !insn.addr !129
  %24 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_12c68 to i64), i64* nonnull @global_var_12c90, i64 0), !insn.addr !130
  %25 = icmp eq i8 %13, 42, !insn.addr !131
  %26 = zext i1 %25 to i64
  %storemerge = add i64 %9, %26
  %27 = inttoptr i64 %storemerge to i8*, !insn.addr !132
  %28 = call i32 @strlen(i8* %27), !insn.addr !132
  %29 = trunc i64 %0 to i32, !insn.addr !133
  ret i32 %29, !insn.addr !133

dec_label_pc_15ac:                                ; preds = %dec_label_pc_14b4
  %30 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_c48 to i64), i64 73728) to i64*), align 8, !insn.addr !134
  %31 = add i64 %30, 8, !insn.addr !135
  %32 = inttoptr i64 %31 to i64*, !insn.addr !135
  %33 = load i64, i64* %32, align 8, !insn.addr !135
  %34 = icmp eq i64 %33, ptrtoint ([15 x i8]* @global_var_1d68 to i64), !insn.addr !136
  store i64 %33, i64* %x0.0.reg2mem, !insn.addr !136
  br i1 %34, label %dec_label_pc_1514, label %dec_label_pc_14fc, !insn.addr !136

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i64, i64, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder [15 x i8]* @global_var_1d68, { 3, 0, 1, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1514, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_14e0, { 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_15f0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-44 = alloca i64, align 8
  %stack_var_-36 = alloca i64, align 8
  %3 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !137
  %4 = inttoptr i64 %3 to i64*, !insn.addr !138
  %5 = load i64, i64* %4, align 8, !insn.addr !138
  %6 = call i32 @puts(i8* bitcast (i8** @global_var_1ba0 to i8*)), !insn.addr !139
  %7 = bitcast i64* %stack_var_-36 to i8*, !insn.addr !140
  %8 = call i8* @strncpy(i8* nonnull %7, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_1b98, i64 0, i64 0), i32 31), !insn.addr !140
  %9 = call i32 @strlen(i8* nonnull %7), !insn.addr !141
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1bc8 to i8*)), !insn.addr !142
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1be8 to i8*)), !insn.addr !143
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1c08 to i8*)), !insn.addr !144
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1c28 to i8*)), !insn.addr !145
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1c48 to i8*)), !insn.addr !146
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1c68 to i8*)), !insn.addr !147
  %16 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !148
  %17 = trunc i128 %2 to i64, !insn.addr !149
  %18 = bitcast i64 %17 to double, !insn.addr !149
  %19 = trunc i128 %1 to i64, !insn.addr !149
  %20 = bitcast i64 %19 to double, !insn.addr !149
  %21 = call double @_Z12template_maxIdET_S0_S0_(double %18, double %20), !insn.addr !149
  store i64 10, i64* %stack_var_-48, align 8, !insn.addr !150
  store i64 20, i64* %stack_var_-44, align 8, !insn.addr !150
  %22 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !151
  %23 = bitcast i64* %stack_var_-44 to i32*, !insn.addr !151
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %22, i32* nonnull %23), !insn.addr !151
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1c88 to i8*)), !insn.addr !152
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1ca8 to i8*)), !insn.addr !153
  %26 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1cc8 to i8*)), !insn.addr !154
  %27 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !155
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1ce8 to i8*)), !insn.addr !156
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1d08 to i8*)), !insn.addr !157
  %30 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !158
  %31 = load i64, i64* @global_var_12fc8, align 8, !insn.addr !159
  %32 = inttoptr i64 %31 to i64*, !insn.addr !160
  %33 = load i64, i64* %32, align 8, !insn.addr !160
  %34 = icmp eq i64 %5, %33, !insn.addr !161
  br i1 %34, label %dec_label_pc_17a4, label %dec_label_pc_17c0, !insn.addr !161

dec_label_pc_17a4:                                ; preds = %dec_label_pc_15f0
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_1d28 to i8*)), !insn.addr !162
  ret void, !insn.addr !162

dec_label_pc_17c0:                                ; preds = %dec_label_pc_15f0
  call void @__stack_chk_fail(), !insn.addr !163
  ret void, !insn.addr !164

; uselistorder directives
  uselistorder i128* %0, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i64 0, { 34, 35, 1, 2, 3, 4, 31, 32, 51, 0, 52, 33, 36, 37, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }
}

define void @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_17d0:
  ret void, !insn.addr !165
}

define i64 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_17e0:
  ret i64 ptrtoint ([5 x i8]* @global_var_1b88 to i64), !insn.addr !166
}

define void @_ZN4BaseD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_17f0:
  ret void, !insn.addr !167
}

define void @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1800:
  ret void, !insn.addr !168
}

define i64 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_1810:
  ret i64 ptrtoint ([8 x i8]* @global_var_1b90 to i64), !insn.addr !169
}

define void @_ZN12MultiDerived5funcAEv(i64* %result) local_unnamed_addr {
dec_label_pc_1820:
  ret void, !insn.addr !170
}

define void @_ZN12MultiDerived5funcBEv(i64* %result) local_unnamed_addr {
dec_label_pc_1830:
  ret void, !insn.addr !171
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1840:
  ret i64 40, !insn.addr !172
}

define void @_ZN7MiddleA4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_1850:
  ret void, !insn.addr !173
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_1870:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !174
  %3 = inttoptr i64 %2 to i64*, !insn.addr !174
  %4 = load i64, i64* %3, align 8, !insn.addr !174
  %5 = add i64 %4, %1, !insn.addr !175
  %6 = inttoptr i64 %5 to i64*, !insn.addr !176
  %7 = load i64, i64* %6, align 8, !insn.addr !176
  %8 = add i64 %7, -24, !insn.addr !177
  %9 = inttoptr i64 %8 to i64*, !insn.addr !177
  %10 = load i64, i64* %9, align 8, !insn.addr !177
  %11 = add i64 %5, 8, !insn.addr !178
  %12 = add i64 %11, %10, !insn.addr !179
  %13 = inttoptr i64 %12 to i32*, !insn.addr !179
  %14 = load i32, i32* %13, align 4, !insn.addr !179
  %15 = add i32 %14, 150, !insn.addr !180
  %16 = zext i32 %15 to i64, !insn.addr !180
  ret i64 %16, !insn.addr !181

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define void @_ZN7MiddleB4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_18a0:
  ret void, !insn.addr !182
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_18c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !183
  %3 = inttoptr i64 %2 to i64*, !insn.addr !183
  %4 = load i64, i64* %3, align 8, !insn.addr !183
  %5 = add i64 %4, %1, !insn.addr !184
  %6 = inttoptr i64 %5 to i64*, !insn.addr !185
  %7 = load i64, i64* %6, align 8, !insn.addr !185
  %8 = add i64 %7, -24, !insn.addr !186
  %9 = inttoptr i64 %8 to i64*, !insn.addr !186
  %10 = load i64, i64* %9, align 8, !insn.addr !186
  %11 = add i64 %5, 8, !insn.addr !187
  %12 = add i64 %11, %10, !insn.addr !188
  %13 = inttoptr i64 %12 to i32*, !insn.addr !188
  %14 = load i32, i32* %13, align 4, !insn.addr !188
  %15 = add i32 %14, 200, !insn.addr !189
  %16 = zext i32 %15 to i64, !insn.addr !189
  ret i64 %16, !insn.addr !190

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define void @_ZN14DiamondDerived4funcEv(i64* %result) local_unnamed_addr {
dec_label_pc_18f0:
  ret void, !insn.addr !191
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_1910:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !192
  %3 = inttoptr i64 %2 to i64*, !insn.addr !192
  %4 = load i64, i64* %3, align 8, !insn.addr !192
  %5 = add i64 %4, %1, !insn.addr !193
  %6 = inttoptr i64 %5 to i64*, !insn.addr !194
  %7 = load i64, i64* %6, align 8, !insn.addr !194
  %8 = add i64 %7, -24, !insn.addr !195
  %9 = inttoptr i64 %8 to i64*, !insn.addr !195
  %10 = load i64, i64* %9, align 8, !insn.addr !195
  %11 = add i64 %5, 8, !insn.addr !196
  %12 = add i64 %11, %10, !insn.addr !197
  %13 = inttoptr i64 %12 to i32*, !insn.addr !197
  %14 = load i32, i32* %13, align 4, !insn.addr !197
  %15 = add i32 %14, 250, !insn.addr !198
  %16 = zext i32 %15 to i64, !insn.addr !198
  ret i64 %16, !insn.addr !199

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_1934:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !200
  %3 = inttoptr i64 %2 to i64*, !insn.addr !200
  %4 = load i64, i64* %3, align 8, !insn.addr !200
  %5 = add i64 %4, -24, !insn.addr !201
  %6 = inttoptr i64 %5 to i64*, !insn.addr !201
  %7 = load i64, i64* %6, align 8, !insn.addr !201
  %8 = add i64 %1, -8, !insn.addr !202
  %9 = add i64 %8, %7, !insn.addr !203
  %10 = inttoptr i64 %9 to i32*, !insn.addr !203
  %11 = load i32, i32* %10, align 4, !insn.addr !203
  %12 = add i32 %11, 250, !insn.addr !204
  %13 = zext i32 %12 to i64, !insn.addr !204
  ret i64 %13, !insn.addr !205

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1950:
  ret i64 1, !insn.addr !206

; uselistorder directives
  uselistorder i64 1, { 1, 0, 2, 3 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1960:
  ret i64 2, !insn.addr !207
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_1970:
  ret void, !insn.addr !208
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_1980:
  ret void, !insn.addr !209
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1990:
  ret void, !insn.addr !210
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1994:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !211
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_19a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !212
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19b0:
  ret void, !insn.addr !213
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_19b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !214
}

define void @_ZN7DerivedD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19c0:
  ret void, !insn.addr !215
}

define void @_ZN4BaseD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19d0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !216
  ret void, !insn.addr !216
}

define void @_ZN7DerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19e0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !217
  ret void, !insn.addr !217
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !218
  ret void, !insn.addr !218
}

define i64 @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !219
  %3 = inttoptr i64 %2 to i64*, !insn.addr !220
  %4 = call i64 @_ZdlPvm(i64* %3, i64 32), !insn.addr !220
  ret i64 %4, !insn.addr !220
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_1a10:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !221
  ret void, !insn.addr !221
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_1a20:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !222
  ret void, !insn.addr !222
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !223
  ret void, !insn.addr !223
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !224
  %3 = inttoptr i64 %2 to i64*, !insn.addr !224
  %4 = load i64, i64* %3, align 8, !insn.addr !224
  %5 = add i64 %4, %1, !insn.addr !225
  %6 = inttoptr i64 %5 to i64*, !insn.addr !226
  %7 = call i64 @_ZdlPvm(i64* %6, i64 48), !insn.addr !226
  ret i64 %7, !insn.addr !226

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_1a54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !227
  %3 = inttoptr i64 %2 to i64*, !insn.addr !228
  %4 = call i64 @_ZdlPvm(i64* %3, i64 48), !insn.addr !228
  ret i64 %4, !insn.addr !228

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 5, 4, 3, 6, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a60:
  %0 = sub i32 %arg1, %arg2, !insn.addr !229
  %1 = xor i32 %arg2, %arg1, !insn.addr !229
  %2 = xor i32 %0, %arg1, !insn.addr !229
  %3 = and i32 %2, %1, !insn.addr !229
  %4 = icmp slt i32 %3, 0, !insn.addr !229
  %5 = icmp slt i32 %0, 0, !insn.addr !229
  %6 = icmp eq i1 %5, %4, !insn.addr !230
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !230
  ret i32 %7, !insn.addr !231

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = alloca double
  %1 = load double, double* %0
  %2 = load double, double* %0
  call void @__asm_fcmpe(double %2, double %1), !insn.addr !232
  ret double %arg1, !insn.addr !233

; uselistorder directives
  uselistorder double* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1a80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %3, i32* %arg1, align 4, !insn.addr !234
  store i32 %4, i32* %arg2, align 4, !insn.addr !235
  ret void, !insn.addr !236

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !237
  %2 = inttoptr i64 %1 to i32*, !insn.addr !237
  store i32 0, i32* %2, align 4, !insn.addr !237
  ret void, !insn.addr !238
}

define void @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !239
  %2 = inttoptr i64 %1 to i32*, !insn.addr !239
  %3 = load i32, i32* %2, align 4, !insn.addr !239
  %4 = icmp sgt i32 %3, 9, !insn.addr !240
  br i1 %4, label %dec_label_pc_1ac8, label %dec_label_pc_1abc, !insn.addr !240

dec_label_pc_1abc:                                ; preds = %dec_label_pc_1ab0
  %5 = zext i32 %3 to i64, !insn.addr !239
  %6 = add i32 %3, 1, !insn.addr !241
  store i32 %6, i32* %2, align 4, !insn.addr !242
  %7 = mul i64 %5, 4, !insn.addr !243
  %8 = and i64 %7, 4294967292, !insn.addr !243
  %9 = add i64 %8, %0, !insn.addr !243
  %10 = inttoptr i64 %9 to i32*, !insn.addr !243
  store i32 %arg2, i32* %10, align 4, !insn.addr !243
  br label %dec_label_pc_1ac8, !insn.addr !243

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1abc, %dec_label_pc_1ab0
  ret void, !insn.addr !244

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i64 40, { 1, 2, 0 }
}

define void @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ad0:
  ret void, !insn.addr !245
}

define void @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_1b00:
  ret void, !insn.addr !246
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1b10:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !247
  %2 = inttoptr i64 %1 to i32*, !insn.addr !247
  store i32 0, i32* %2, align 4, !insn.addr !247
  ret void, !insn.addr !248

; uselistorder directives
  uselistorder i32 0, { 1, 2, 3, 4, 0 }
}

define void @_ZN9ContainerIdE4pushEd(i64* %result, double %arg2) local_unnamed_addr {
dec_label_pc_1b20:
  %d0 = alloca double, align 8
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !249
  %2 = inttoptr i64 %1 to i32*, !insn.addr !249
  %3 = load i32, i32* %2, align 4, !insn.addr !249
  %4 = icmp sgt i32 %3, 9, !insn.addr !250
  br i1 %4, label %dec_label_pc_1b38, label %dec_label_pc_1b2c, !insn.addr !250

dec_label_pc_1b2c:                                ; preds = %dec_label_pc_1b20
  %5 = zext i32 %3 to i64, !insn.addr !249
  %6 = add i32 %3, 1, !insn.addr !251
  store i32 %6, i32* %2, align 4, !insn.addr !252
  %7 = load double, double* %d0, align 8
  %8 = bitcast double %7 to i64
  %9 = mul i64 %5, 8, !insn.addr !253
  %10 = and i64 %9, 4294967288, !insn.addr !253
  %11 = add i64 %10, %0, !insn.addr !253
  %12 = inttoptr i64 %11 to i64*
  store i64 %8, i64* %12, align 8
  br label %dec_label_pc_1b38, !insn.addr !253

dec_label_pc_1b38:                                ; preds = %dec_label_pc_1b2c, %dec_label_pc_1b20
  ret void, !insn.addr !254

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i64 8, { 0, 5, 6, 7, 1, 2, 3, 10, 11, 8, 9, 4 }
}

define void @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b40:
  ret void, !insn.addr !255
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_1b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !256
  %3 = inttoptr i64 %2 to i32*, !insn.addr !256
  %4 = load i32, i32* %3, align 4, !insn.addr !256
  %5 = zext i32 %4 to i64, !insn.addr !256
  ret i64 %5, !insn.addr !257
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b68:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !258

; uselistorder directives
  uselistorder i32 1, { 15, 14, 44, 36, 45, 13, 16, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 41, 40, 39, 1, 17, 37, 38, 0, 42, 18, 43, 2, 23, 22, 21, 20, 19 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i64 @__cxa_finalize.6(i64) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @_ZdlPvm(i64*, i64) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64, i64*, i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow(i64) local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i64 @__cxa_end_catch(i64) local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64 @__gmon_start__.11(i64) local_unnamed_addr

declare void @__asm_fcmpe(double, double) local_unnamed_addr

!0 = !{i64 3740}
!1 = !{i64 3748}
!2 = !{i64 3804}
!3 = !{i64 3820}
!4 = !{i64 3836}
!5 = !{i64 3852}
!6 = !{i64 3868}
!7 = !{i64 3884}
!8 = !{i64 3900}
!9 = !{i64 3916}
!10 = !{i64 3932}
!11 = !{i64 3948}
!12 = !{i64 3964}
!13 = !{i64 3980}
!14 = !{i64 3996}
!15 = !{i64 4012}
!16 = !{i64 4028}
!17 = !{i64 4044}
!18 = !{i64 4060}
!19 = !{i64 4092}
!20 = !{i64 4108}
!21 = !{i64 4124}
!22 = !{i64 4140}
!23 = !{i64 4160}
!24 = !{i64 4180}
!25 = !{i64 4192}
!26 = !{i64 4200}
!27 = !{i64 4204}
!28 = !{i64 4212}
!29 = !{i64 4216}
!30 = !{i64 4228}
!31 = !{i64 4232}
!32 = !{i64 4236}
!33 = !{i64 4248}
!34 = !{i64 4264}
!35 = !{i64 4268}
!36 = !{i64 4272}
!37 = !{i64 4280}
!38 = !{i64 4288}
!39 = !{i64 4300}
!40 = !{i64 4308}
!41 = !{i64 4316}
!42 = !{i64 4320}
!43 = !{i64 4324}
!44 = !{i64 4328}
!45 = !{i64 4332}
!46 = !{i64 4336}
!47 = !{i64 4340}
!48 = !{i64 4344}
!49 = !{i64 4348}
!50 = !{i64 4352}
!51 = !{i64 4368}
!52 = !{i64 4392}
!53 = !{i64 4404}
!54 = !{i64 4444}
!55 = !{i64 4472}
!56 = !{i64 4476}
!57 = !{i64 4512}
!58 = !{i64 4524}
!59 = !{i64 4528}
!60 = !{i64 4536}
!61 = !{i64 4540}
!62 = !{i64 4544}
!63 = !{i64 4548}
!64 = !{i64 4604}
!65 = !{i64 4664}
!66 = !{i64 4672}
!67 = !{i64 4688}
!68 = !{i64 4692}
!69 = !{i64 4700}
!70 = !{i64 4704}
!71 = !{i64 4712}
!72 = !{i64 4716}
!73 = !{i64 4720}
!74 = !{i64 4728}
!75 = !{i64 4740}
!76 = !{i64 4752}
!77 = !{i64 4784}
!78 = !{i64 4800}
!79 = !{i64 4816}
!80 = !{i64 4824}
!81 = !{i64 4832}
!82 = !{i64 4840}
!83 = !{i64 4852}
!84 = !{i64 4868}
!85 = !{i64 4872}
!86 = !{i64 4876}
!87 = !{i64 4900}
!88 = !{i64 4924}
!89 = !{i64 4932}
!90 = !{i64 4948}
!91 = !{i64 4964}
!92 = !{i64 4980}
!93 = !{i64 5008}
!94 = !{i64 5024}
!95 = !{i64 5036}
!96 = !{i64 5052}
!97 = !{i64 5076}
!98 = !{i64 5080}
!99 = !{i64 5096}
!100 = !{i64 5112}
!101 = !{i64 5128}
!102 = !{i64 5144}
!103 = !{i64 5148}
!104 = !{i64 5156}
!105 = !{i64 5172}
!106 = !{i64 5188}
!107 = !{i64 5200}
!108 = !{i64 5228}
!109 = !{i64 5248}
!110 = !{i64 5252}
!111 = !{i64 5260}
!112 = !{i64 5280}
!113 = !{i64 5284}
!114 = !{i64 5288}
!115 = !{i64 5292}
!116 = !{i64 5296}
!117 = !{i64 5304}
!118 = !{i64 5308}
!119 = !{i64 5316}
!120 = !{i64 5340}
!121 = !{i64 5360}
!122 = !{i64 5364}
!123 = !{i64 5368}
!124 = !{i64 5372}
!125 = !{i64 5376}
!126 = !{i64 5380}
!127 = !{i64 5384}
!128 = !{i64 5392}
!129 = !{i64 5424}
!130 = !{i64 5460}
!131 = !{i64 5480}
!132 = !{i64 5484}
!133 = !{i64 5500}
!134 = !{i64 5564}
!135 = !{i64 5572}
!136 = !{i64 5580}
!137 = !{i64 5632}
!138 = !{i64 5648}
!139 = !{i64 5664}
!140 = !{i64 5684}
!141 = !{i64 5696}
!142 = !{i64 5720}
!143 = !{i64 5756}
!144 = !{i64 5776}
!145 = !{i64 5796}
!146 = !{i64 5816}
!147 = !{i64 5836}
!148 = !{i64 5848}
!149 = !{i64 5864}
!150 = !{i64 5888}
!151 = !{i64 5892}
!152 = !{i64 5928}
!153 = !{i64 5948}
!154 = !{i64 5968}
!155 = !{i64 5972}
!156 = !{i64 5992}
!157 = !{i64 6012}
!158 = !{i64 6016}
!159 = !{i64 6028}
!160 = !{i64 6036}
!161 = !{i64 6048}
!162 = !{i64 6076}
!163 = !{i64 6080}
!164 = !{i64 6092}
!165 = !{i64 6100}
!166 = !{i64 6120}
!167 = !{i64 6128}
!168 = !{i64 6152}
!169 = !{i64 6168}
!170 = !{i64 6180}
!171 = !{i64 6196}
!172 = !{i64 6212}
!173 = !{i64 6244}
!174 = !{i64 6260}
!175 = !{i64 6264}
!176 = !{i64 6268}
!177 = !{i64 6272}
!178 = !{i64 6276}
!179 = !{i64 6280}
!180 = !{i64 6284}
!181 = !{i64 6288}
!182 = !{i64 6324}
!183 = !{i64 6340}
!184 = !{i64 6344}
!185 = !{i64 6348}
!186 = !{i64 6352}
!187 = !{i64 6356}
!188 = !{i64 6360}
!189 = !{i64 6364}
!190 = !{i64 6368}
!191 = !{i64 6404}
!192 = !{i64 6420}
!193 = !{i64 6424}
!194 = !{i64 6428}
!195 = !{i64 6432}
!196 = !{i64 6436}
!197 = !{i64 6440}
!198 = !{i64 6444}
!199 = !{i64 6448}
!200 = !{i64 6452}
!201 = !{i64 6456}
!202 = !{i64 6460}
!203 = !{i64 6464}
!204 = !{i64 6468}
!205 = !{i64 6472}
!206 = !{i64 6484}
!207 = !{i64 6500}
!208 = !{i64 6512}
!209 = !{i64 6528}
!210 = !{i64 6544}
!211 = !{i64 6548}
!212 = !{i64 6560}
!213 = !{i64 6576}
!214 = !{i64 6580}
!215 = !{i64 6592}
!216 = !{i64 6612}
!217 = !{i64 6628}
!218 = !{i64 6644}
!219 = !{i64 6656}
!220 = !{i64 6664}
!221 = !{i64 6676}
!222 = !{i64 6692}
!223 = !{i64 6708}
!224 = !{i64 6728}
!225 = !{i64 6732}
!226 = !{i64 6736}
!227 = !{i64 6740}
!228 = !{i64 6748}
!229 = !{i64 6752}
!230 = !{i64 6756}
!231 = !{i64 6760}
!232 = !{i64 6768}
!233 = !{i64 6776}
!234 = !{i64 6792}
!235 = !{i64 6796}
!236 = !{i64 6800}
!237 = !{i64 6816}
!238 = !{i64 6820}
!239 = !{i64 6832}
!240 = !{i64 6840}
!241 = !{i64 6844}
!242 = !{i64 6848}
!243 = !{i64 6852}
!244 = !{i64 6856}
!245 = !{i64 6892}
!246 = !{i64 6916}
!247 = !{i64 6928}
!248 = !{i64 6932}
!249 = !{i64 6944}
!250 = !{i64 6952}
!251 = !{i64 6956}
!252 = !{i64 6960}
!253 = !{i64 6964}
!254 = !{i64 6968}
!255 = !{i64 6996}
!256 = !{i64 7008}
!257 = !{i64 7012}
!258 = !{i64 7032}
