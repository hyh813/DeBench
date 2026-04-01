source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_8878_type = type { i64 (i64*, i32)*, i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_88b8_type = type { i64 (i64*, i32)*, i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8900_type = type { i64 (i64*)*, void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_89b0_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_89d8_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8a08_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8ad8_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8b78_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8c38_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8c68_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8ce0_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8d50_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_8d78_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_8da0_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%_Unwind_Exception = type { i32 }

@global_var_90ec = global i64 0
@global_var_90c0 = external local_unnamed_addr global i64
@global_var_90e8 = global i64 0
@global_var_5020 = constant [5 x i8] c"Test\00"
@global_var_5008 = local_unnamed_addr constant i64 4612811918334230528
@global_var_5010 = local_unnamed_addr constant i64 4609434218613702656
@global_var_5018 = local_unnamed_addr constant i64 4614253070214989087
@global_var_8810 = local_unnamed_addr global i64 0
@global_var_8838 = global i64 0
@global_var_8850 = global i64 0
@global_var_8828 = global i64 0
@global_var_1234 = global i64 153072634429440
@global_var_8868 = local_unnamed_addr global i64 0
@global_var_88a8 = local_unnamed_addr global i64 0
@global_var_88f0 = local_unnamed_addr global i64 0
@global_var_8930 = global i64 16416
@global_var_8a88 = external global i64
@global_var_8b10 = local_unnamed_addr global i64 16944
@global_var_8bb0 = local_unnamed_addr global i64 17184
@global_var_8a70 = global i64 17456
@global_var_8a38 = global i64 17360
@global_var_8a90 = external global i64
@global_var_8aa0 = external global i64
@global_var_89f0 = local_unnamed_addr global i64 32
@global_var_8d40 = local_unnamed_addr global i64 0
@global_var_8d90 = local_unnamed_addr global i64 0
@global_var_51a1 = constant [5 x i8] c"Base\00"
@global_var_51a6 = constant [8 x i8] c"Derived\00"
@global_var_89a0 = local_unnamed_addr global i64 0
@global_var_89c8 = local_unnamed_addr global i64 0
@global_var_8c28 = local_unnamed_addr global i64 0
@global_var_8ca0 = local_unnamed_addr global i64 16944
@global_var_8d18 = local_unnamed_addr global i64 17184
@global_var_8d68 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_8ff8 = local_unnamed_addr global void (i64*)* null
@global_var_3e8 = global i32 0
@1 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\0A\00"
@global_var_5025 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_504a = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_5068 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_5084 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_50a0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_50bc = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_50d9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_50f5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_5111 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_512d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_5149 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_5166 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_5183 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_90f0 = local_unnamed_addr global i32 0
@global_var_90f1 = global i32 0
@global_var_90ef = global i32 0
@global_var_8878 = global %vtable_8878_type { i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 (i64*)* @_ZNK4Base7getNameEv, void (i64*)* @_ZN4BaseD2Ev, void (i64*)* @_ZN4BaseD0Ev }
@global_var_88b8 = global %vtable_88b8_type { i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 (i64*)* @_ZNK7Derived7getNameEv, void (i64*)* @_ZN7DerivedD2Ev, void (i64*)* @_ZN7DerivedD0Ev }
@global_var_8900 = global %vtable_8900_type { i64 (i64*)* @_ZN12MultiDerived5funcAEv, void (i64*)* @_ZN12MultiDerivedD2Ev, void (i64*)* @_ZN12MultiDerivedD0Ev, i64 (i64*)* @_ZN12MultiDerived5funcBEv }
@global_var_89b0 = global %vtable_89b0_type { i64 (i64*)* @_ZN5BaseA5funcAEv, void (i64*)* @_ZN5BaseAD2Ev, void (i64*)* @_ZN5BaseAD0Ev }
@global_var_89d8 = global %vtable_89d8_type { i64 (i64*)* @_ZN5BaseB5funcBEv, void (i64*)* @_ZN5BaseBD2Ev, void (i64*)* @_ZN5BaseBD0Ev }
@global_var_8a08 = global %vtable_8a08_type { i64 (i64*)* @_ZN14DiamondDerived4funcEv, void (i64*)* @_ZN14DiamondDerivedD1Ev, void (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_8ad8 = local_unnamed_addr global %vtable_8ad8_type { i64 (i64*)* @_ZN7MiddleA4funcEv, void (i64*)* @_ZN7MiddleAD1Ev, void (i64*)* @_ZN7MiddleAD0Ev }
@global_var_8b78 = local_unnamed_addr global %vtable_8b78_type { i64 (i64*)* @_ZN7MiddleB4funcEv, void (i64*)* @_ZN7MiddleBD1Ev, void (i64*)* @_ZN7MiddleBD0Ev }
@global_var_8c38 = global %vtable_8c38_type { i64 (i64*)* @_ZN11VirtualBase4funcEv, void (i64*)* @_ZN11VirtualBaseD2Ev, void (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_8c68 = local_unnamed_addr global %vtable_8c68_type { i64 (i64*)* @_ZN7MiddleA4funcEv, void (i64*)* @_ZN7MiddleAD1Ev, void (i64*)* @_ZN7MiddleAD0Ev }
@global_var_8ce0 = local_unnamed_addr global %vtable_8ce0_type { i64 (i64*)* @_ZN7MiddleB4funcEv, void (i64*)* @_ZN7MiddleBD1Ev, void (i64*)* @_ZN7MiddleBD0Ev }
@global_var_8d50 = global %vtable_8d50_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_8d78 = global %vtable_8d78_type { void (i64*)* @_ZN8RTTIBaseD2Ev, void (i64*)* @_ZN8RTTIBaseD0Ev, i64 (i64*)* @_ZNK8RTTIBase7getTypeEv }
@global_var_8da0 = global %vtable_8da0_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 36840 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_2016, label %dec_label_pc_2014, !insn.addr !3

dec_label_pc_2014:                                ; preds = %dec_label_pc_2000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_2016, !insn.addr !4

dec_label_pc_2016:                                ; preds = %dec_label_pc_2014, %dec_label_pc_2000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define i64 @function_2030(i64 %arg1) local_unnamed_addr {
dec_label_pc_2030:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i32 @function_2040(i8* %format, ...) local_unnamed_addr {
dec_label_pc_2040:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i64 @function_2050() local_unnamed_addr {
dec_label_pc_2050:
  %0 = call i64 @_ZSt9terminatev(), !insn.addr !8
  ret i64 %0, !insn.addr !8
}

define i64 @function_2060(i64 %arg1) local_unnamed_addr {
dec_label_pc_2060:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !9
  ret i64 %0, !insn.addr !9
}

define i32 @function_2070(i8* %s) local_unnamed_addr {
dec_label_pc_2070:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @function_2080(i64 %arg1) local_unnamed_addr {
dec_label_pc_2080:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i8* @function_2090(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2090:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i64* @function_20a0(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define i32 @function_20b0(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_20b0:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void @function_20c0(i64* %ptr) local_unnamed_addr {
dec_label_pc_20c0:
  call void @_ZdlPv(i64* %ptr), !insn.addr !15
  ret void, !insn.addr !15
}

define i64 @function_20d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define i64 @function_20e0() local_unnamed_addr {
dec_label_pc_20e0:
  %0 = call i64 @__cxa_bad_typeid(), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_20f0(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_2100(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_2100:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !19
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_2110(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2110:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i64 @function_2120() local_unnamed_addr {
dec_label_pc_2120:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define i64 @function_2130() local_unnamed_addr {
dec_label_pc_2130:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !22
  ret i64 %0, !insn.addr !22
}

define i64 @function_2140() local_unnamed_addr {
dec_label_pc_2140:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define i64 @function_2150(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2150:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !24
  ret i64 %0, !insn.addr !24
}

define void @function_2160(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_2160:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !25
  ret void, !insn.addr !25
}

define void @function_2170(i64* %d) local_unnamed_addr {
dec_label_pc_2170:
  call void @__cxa_finalize(i64* %d), !insn.addr !26
  ret void, !insn.addr !26
}

define void @__cxx_global_var_init() local_unnamed_addr {
dec_label_pc_2180:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !27
  %1 = load void (i64*)*, void (i64*)** @global_var_8ff8, align 8, !insn.addr !28
  %2 = call i32 @__cxa_atexit(void (i64*)* %1, i64* nonnull @global_var_90ec, i64* inttoptr (i64 37056 to i64*)), !insn.addr !29
  ret void, !insn.addr !30
}

define void @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_21b0:
  call void @__cxx_global_var_init(), !insn.addr !31
  ret void, !insn.addr !32
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_21c0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !33
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !33
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !33
  %3 = call i32 @__libc_start_main(i64 12416, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !33
  %4 = call i64 @__asm_hlt(), !insn.addr !34
  unreachable, !insn.addr !34
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_21f0:
  ret i64 ptrtoint (i64* @global_var_90e8 to i64), !insn.addr !35
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_2220:
  ret i64 0, !insn.addr !36
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2260:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_90e8 to i8*), align 8, !insn.addr !37
  %3 = icmp eq i8 %2, 0, !insn.addr !37
  %4 = icmp eq i1 %3, false, !insn.addr !38
  br i1 %4, label %dec_label_pc_2298, label %dec_label_pc_226d, !insn.addr !38

dec_label_pc_226d:                                ; preds = %dec_label_pc_2260
  %5 = load i64, i64* inttoptr (i64 36816 to i64*), align 16, !insn.addr !39
  %6 = icmp eq i64 %5, 0, !insn.addr !39
  br i1 %6, label %dec_label_pc_2287, label %dec_label_pc_227b, !insn.addr !40

dec_label_pc_227b:                                ; preds = %dec_label_pc_226d
  %7 = load i64, i64* @global_var_90c0, align 8, !insn.addr !41
  %8 = inttoptr i64 %7 to i64*, !insn.addr !42
  call void @__cxa_finalize(i64* %8), !insn.addr !42
  br label %dec_label_pc_2287, !insn.addr !42

dec_label_pc_2287:                                ; preds = %dec_label_pc_227b, %dec_label_pc_226d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !43
  store i8 1, i8* bitcast (i64* @global_var_90e8 to i8*), align 8, !insn.addr !44
  ret i64 %9, !insn.addr !45

dec_label_pc_2298:                                ; preds = %dec_label_pc_2260
  ret i64 %1, !insn.addr !46
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_22a0:
  %0 = call i64 @register_tm_clones(), !insn.addr !47
  ret i64 %0, !insn.addr !47
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_22b0:
  %obj_-48 = alloca i64, align 8
  call void @_ZN11SimpleClassC2EiPKc(i64* nonnull %obj_-48, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5020, i64 0, i64 0)), !insn.addr !48
  %0 = call i64 @_ZN11SimpleClass8setValueEi(i64* nonnull %obj_-48, i32 10), !insn.addr !49
  %1 = call i64 @_ZNK11SimpleClass8getValueEv(i64* nonnull %obj_-48), !insn.addr !50
  %2 = trunc i64 %1 to i32, !insn.addr !51
  %3 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %obj_-48, i32 3), !insn.addr !52
  %4 = trunc i64 %3 to i32, !insn.addr !53
  %5 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !54
  %6 = trunc i64 %5 to i32, !insn.addr !55
  %7 = add i32 %4, %2, !insn.addr !56
  %8 = add i32 %7, %6, !insn.addr !57
  ret i32 %8, !insn.addr !58
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_2310:
  %stack_var_-32 = alloca i64, align 8
  call void @_ZN14LifecycleClassC2Em(i64* nonnull %stack_var_-32, i64 5), !insn.addr !59
  %0 = call i64 @_ZNK14LifecycleClass7getDataEm(i64* nonnull %stack_var_-32, i64 2), !insn.addr !60
  %1 = trunc i64 %0 to i32, !insn.addr !61
  %2 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !62
  %3 = trunc i64 %2 to i32, !insn.addr !63
  %4 = add i32 %3, %1, !insn.addr !64
  call void @_ZN14LifecycleClassD2Ev(i64* nonnull %stack_var_-32), !insn.addr !65
  %5 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !66
  %6 = trunc i64 %5 to i32
  %7 = mul i32 %6, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !67
  %8 = add i32 %4, %7, !insn.addr !68
  ret i32 %8, !insn.addr !69

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !70
  ret i32 %1, !insn.addr !70
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_23e0:
  %derived_-32 = alloca i64, align 8
  %base_-16 = alloca i64, align 8
  call void @_ZN4BaseC2Ev(i64* nonnull %base_-16), !insn.addr !71
  call void @_ZN7DerivedC2Ei(i64* nonnull %derived_-32, i32 3), !insn.addr !72
  %0 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %base_-16, i32 5), !insn.addr !73
  %1 = trunc i64 %0 to i32, !insn.addr !74
  %2 = call i64 @_ZN7Derived12virtual_funcEi(i64* nonnull %derived_-32, i32 5), !insn.addr !75
  %3 = trunc i64 %2 to i32, !insn.addr !76
  %4 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %base_-16, i32 5), !insn.addr !77
  %5 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %derived_-32, i32 5), !insn.addr !78
  %6 = add i32 %3, %1, !insn.addr !79
  %7 = add i32 %6, %4, !insn.addr !80
  %8 = add i32 %7, %5, !insn.addr !81
  call void @_ZN7DerivedD2Ev(i64* nonnull %derived_-32), !insn.addr !82
  call void @_ZN4BaseD2Ev(i64* nonnull %base_-16), !insn.addr !83
  ret i32 %8, !insn.addr !84

; uselistorder directives
  uselistorder i64* %derived_-32, { 1, 0, 2, 3 }
  uselistorder i32 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @function_24ae(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_24ae:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !85
  %3 = add i64 %1, -32, !insn.addr !86
  %4 = inttoptr i64 %3 to i64*, !insn.addr !86
  %5 = add i64 %1, -36, !insn.addr !87
  %6 = inttoptr i64 %5 to i32*, !insn.addr !87
  store i32 %2, i32* %6, align 4, !insn.addr !87
  %7 = call i64 @function_24d4(), !insn.addr !88
  ret i64 %7, !insn.addr !88

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_24bf(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_24bf:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !89
  %3 = add i64 %1, -32, !insn.addr !90
  %4 = inttoptr i64 %3 to i64*, !insn.addr !90
  %5 = add i64 %1, -36, !insn.addr !91
  %6 = inttoptr i64 %5 to i32*, !insn.addr !91
  store i32 %2, i32* %6, align 4, !insn.addr !91
  %7 = add i64 %1, -24, !insn.addr !92
  %8 = inttoptr i64 %7 to i64*, !insn.addr !93
  call void @_ZN7DerivedD2Ev(i64* %8), !insn.addr !93
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !93

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @function_24d4() local_unnamed_addr {
dec_label_pc_24d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !94
  %3 = inttoptr i64 %2 to i64*, !insn.addr !95
  call void @_ZN4BaseD2Ev(i64* %3), !insn.addr !95
  %4 = add i64 %1, -32, !insn.addr !96
  %5 = inttoptr i64 %4 to i64*, !insn.addr !96
  %6 = load i64, i64* %5, align 8, !insn.addr !96
  %7 = inttoptr i64 %6 to %_Unwind_Exception*, !insn.addr !97
  call void @_Unwind_Resume(%_Unwind_Exception* %7), !insn.addr !97
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !98

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_24f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %obj_-40 = alloca i64, align 8
  call void @_ZN12MultiDerivedC2Ev(i64* nonnull %obj_-40), !insn.addr !99
  %2 = load i64, i64* %obj_-40, align 8, !insn.addr !100
  %3 = inttoptr i64 %2 to i64*, !insn.addr !101
  %4 = load i64, i64* %3, align 8, !insn.addr !101
  %5 = trunc i64 %4 to i32, !insn.addr !102
  %6 = inttoptr i64 %1 to i64*, !insn.addr !103
  %7 = load i64, i64* %6, align 8, !insn.addr !103
  %8 = trunc i64 %7 to i32, !insn.addr !104
  %9 = add i32 %5, 1, !insn.addr !105
  %10 = add i32 %9, %8, !insn.addr !106
  call void @_ZN12MultiDerivedD2Ev(i64* nonnull %obj_-40), !insn.addr !107
  ret i32 %10, !insn.addr !108

; uselistorder directives
  uselistorder i64* %obj_-40, { 1, 0, 2 }
}

define i64 @function_25c6() local_unnamed_addr {
dec_label_pc_25c6:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !109
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_25d0:
  %obj_-56 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !110
  call void @_ZN14DiamondDerivedC1Ev(i64* nonnull %obj_-56), !insn.addr !111
  %1 = load i64, i64* %obj_-56, align 8, !insn.addr !112
  %2 = add i64 %1, -24, !insn.addr !113
  %3 = inttoptr i64 %2 to i64*, !insn.addr !113
  %4 = load i64, i64* %3, align 8, !insn.addr !113
  %5 = add i64 %0, -40, !insn.addr !114
  %6 = add i64 %4, %5, !insn.addr !114
  %7 = inttoptr i64 %6 to i32*, !insn.addr !114
  store i32 50, i32* %7, align 4, !insn.addr !114
  %8 = load i64, i64* %obj_-56, align 8, !insn.addr !115
  %9 = add i64 %8, -24, !insn.addr !116
  %10 = inttoptr i64 %9 to i64*, !insn.addr !116
  %11 = load i64, i64* %10, align 8, !insn.addr !116
  %12 = ptrtoint i64* %obj_-56 to i64, !insn.addr !117
  %13 = add i64 %11, %12, !insn.addr !118
  %14 = inttoptr i64 %13 to i64*, !insn.addr !119
  %15 = load i64, i64* %14, align 8, !insn.addr !119
  %16 = inttoptr i64 %15 to i64*, !insn.addr !120
  %17 = load i64, i64* %16, align 8, !insn.addr !120
  %18 = trunc i64 %17 to i32, !insn.addr !121
  %19 = add i64 %11, %5, !insn.addr !122
  %20 = inttoptr i64 %19 to i32*, !insn.addr !122
  store i32 100, i32* %20, align 4, !insn.addr !122
  %21 = load i64, i64* %14, align 8, !insn.addr !123
  %22 = inttoptr i64 %21 to i64*, !insn.addr !124
  %23 = load i64, i64* %22, align 8, !insn.addr !124
  %24 = trunc i64 %23 to i32, !insn.addr !125
  %25 = add i32 %24, %18, !insn.addr !126
  call void @_ZN14DiamondDerivedD1Ev(i64* nonnull %obj_-56), !insn.addr !127
  ret i32 %25, !insn.addr !128

; uselistorder directives
  uselistorder i64* %obj_-56, { 0, 2, 3, 4, 1 }
}

define i64 @function_2699() local_unnamed_addr {
dec_label_pc_2699:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !129
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_26a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %p3_-32 = alloca i64, align 8
  %p2_-24 = alloca i64, align 8
  %p1_-16 = alloca i64, align 8
  call void @_ZN5PointC2Eii(i64* nonnull %p1_-16, i32 1, i32 2), !insn.addr !130
  call void @_ZN5PointC2Eii(i64* nonnull %p2_-24, i32 3, i32 4), !insn.addr !131
  %2 = call i64 @_ZNK5PointplERKS_(i64* nonnull %p1_-16, i64* nonnull %p2_-24), !insn.addr !132
  store i64 %2, i64* %p3_-32, align 8, !insn.addr !133
  %3 = call i64 @_ZNK5PointeqERKS_(i64* nonnull %p1_-16, i64* nonnull %p2_-24), !insn.addr !134
  %4 = urem i64 %3, 2
  %5 = icmp ne i64 %4, 0
  %6 = call i64 @_ZN5PointppEv(i64* nonnull %p3_-32), !insn.addr !135
  %7 = load i64, i64* %p3_-32, align 8, !insn.addr !136
  %8 = trunc i64 %7 to i32, !insn.addr !136
  %9 = add i32 %1, %8, !insn.addr !137
  %10 = icmp eq i1 %5, false, !insn.addr !138
  %11 = icmp eq i1 %10, false, !insn.addr !139
  %12 = select i1 %11, i32 0, i32 10, !insn.addr !139
  %13 = add i32 %9, %12, !insn.addr !140
  ret i32 %13, !insn.addr !141

; uselistorder directives
  uselistorder i64* %p3_-32, { 1, 0, 2 }
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2720:
  %b_-32 = alloca i32, align 4
  %a_-28 = alloca i32, align 4
  %0 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !142
  %1 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !143
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !144
  %3 = trunc i128 %1 to i64, !insn.addr !145
  %4 = bitcast i64 %3 to double, !insn.addr !145
  %5 = trunc i128 %2 to i64, !insn.addr !145
  %6 = bitcast i64 %5 to double, !insn.addr !145
  %7 = call double @_Z12template_maxIdET_S0_S0_(double %4, double %6), !insn.addr !145
  %8 = fptrunc double %7 to float, !insn.addr !145
  %9 = bitcast float %8 to i32, !insn.addr !145
  %10 = sext i32 %9 to i128, !insn.addr !145
  %11 = call i64 @__asm_movsd.13(i128 %10), !insn.addr !146
  store i32 10, i32* %a_-28, align 4, !insn.addr !147
  store i32 20, i32* %b_-32, align 4, !insn.addr !148
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %a_-28, i32* nonnull %b_-32), !insn.addr !149
  %12 = call i32 @__asm_cvttsd2si(i64 %11), !insn.addr !150
  %13 = add i32 %12, %0, !insn.addr !151
  %14 = load i32, i32* %a_-28, align 4, !insn.addr !152
  %15 = add i32 %13, %14, !insn.addr !152
  %16 = load i32, i32* %b_-32, align 4, !insn.addr !153
  %17 = add i32 %15, %16, !insn.addr !153
  ret i32 %17, !insn.addr !154

; uselistorder directives
  uselistorder i32* %a_-28, { 1, 0, 2 }
  uselistorder i32* %b_-32, { 1, 0, 2 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2790:
  %double_container_-152 = alloca i64, align 8
  %int_container_-56 = alloca i64, align 8
  call void @_ZN9ContainerIiEC2Ev(i64* nonnull %int_container_-56), !insn.addr !155
  %0 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %int_container_-56, i32 10), !insn.addr !156
  %1 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %int_container_-56, i32 20), !insn.addr !157
  %2 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %int_container_-56, i32 30), !insn.addr !158
  %3 = call i64 @_ZNK9ContainerIiE3getEi(i64* nonnull %int_container_-56, i32 0), !insn.addr !159
  %4 = trunc i64 %3 to i32, !insn.addr !160
  %5 = call i64 @_ZNK9ContainerIiE7getSizeEv(i64* nonnull %int_container_-56), !insn.addr !161
  %6 = trunc i64 %5 to i32, !insn.addr !162
  call void @_ZN9ContainerIdEC2Ev(i64* nonnull %double_container_-152), !insn.addr !163
  %7 = ptrtoint i64* %double_container_-152 to i64, !insn.addr !164
  %8 = call i128 @__asm_movsd(i64 4614253070214989087), !insn.addr !165
  %9 = bitcast i64 %7 to double, !insn.addr !166
  %10 = call i64 @_ZN9ContainerIdE4pushEd(double %9), !insn.addr !166
  %11 = call i128 @_ZNK9ContainerIdE3getEi(i64* nonnull %double_container_-152, i32 0), !insn.addr !167
  %12 = call i64 @__asm_movsd.13(i128 %11), !insn.addr !168
  %13 = add i32 %6, %4, !insn.addr !169
  %14 = call i32 @__asm_cvttsd2si(i64 %12), !insn.addr !170
  %15 = add i32 %13, %14, !insn.addr !171
  ret i32 %15, !insn.addr !172

; uselistorder directives
  uselistorder i64* %double_container_-152, { 0, 2, 1 }
  uselistorder i64 (i64*, i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2840:
  %lambda2_-40 = alloca i64, align 8
  %lambda1_-32 = alloca i64, align 8
  store i64 10, i64* %lambda1_-32, align 8, !insn.addr !173
  call void @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* nonnull %lambda1_-32, i32 3), !insn.addr !174
  %0 = call i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* nonnull %lambda2_-40, i32 10, i32 20), !insn.addr !175
  %1 = add i32 %0, ptrtoint (i32* @0 to i32), !insn.addr !176
  ret i32 %1, !insn.addr !177
}

define void @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_28a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !178
  %2 = inttoptr i64 %1 to i64*, !insn.addr !178
  %3 = load i64, i64* %2, align 8, !insn.addr !178
  %4 = inttoptr i64 %3 to i32*, !insn.addr !179
  %5 = load i32, i32* %4, align 4, !insn.addr !179
  %6 = add i32 %5, 5, !insn.addr !180
  store i32 %6, i32* %4, align 4, !insn.addr !181
  ret void, !insn.addr !182
}

define i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_28d0:
  %0 = add i32 %arg3, %arg2, !insn.addr !183
  ret i32 %0, !insn.addr !184
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_28f0:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !185
  %1 = inttoptr i64 %0 to i32*, !insn.addr !186
  store i32 42, i32* %1, align 4, !insn.addr !186
  %2 = load i64, i64* inttoptr (i64 36808 to i64*), align 8, !insn.addr !187
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !188
  %4 = trunc i64 %3 to i32, !insn.addr !189
  ret i32 %4, !insn.addr !189

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2a50:
  %deleter_-64 = alloca i64, align 8
  %ptr3_-72 = alloca i64, align 8
  %arr_-56 = alloca i64, align 8
  %ptr2_-40 = alloca i64, align 8
  %ptr1_-16 = alloca i64, align 8
  %0 = call i64 @_Znwm(i64 4), !insn.addr !190
  %1 = inttoptr i64 %0 to i32*, !insn.addr !191
  store i32 100, i32* %1, align 4, !insn.addr !191
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* nonnull %ptr1_-16, i32* %1), !insn.addr !192
  %2 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %ptr1_-16), !insn.addr !193
  %3 = inttoptr i64 %2 to i32*, !insn.addr !194
  store i32 200, i32* %3, align 4, !insn.addr !195
  %4 = bitcast i64* %ptr1_-16 to i64**, !insn.addr !196
  %5 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** nonnull %4), !insn.addr !196
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* nonnull %ptr2_-40, i64* %5), !insn.addr !197
  %6 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %ptr2_-40), !insn.addr !198
  %7 = inttoptr i64 %6 to i32*, !insn.addr !199
  %8 = load i32, i32* %7, align 4, !insn.addr !200
  %9 = call i64 @_Znam(i64 20), !insn.addr !201
  %10 = inttoptr i64 %9 to i32*, !insn.addr !202
  store i32 1, i32* %10, align 4, !insn.addr !203
  %11 = add i64 %9, 4, !insn.addr !204
  %12 = inttoptr i64 %11 to i32*, !insn.addr !204
  store i32 2, i32* %12, align 4, !insn.addr !204
  %13 = add i64 %9, 8, !insn.addr !205
  %14 = inttoptr i64 %13 to i32*, !insn.addr !205
  store i32 3, i32* %14, align 4, !insn.addr !205
  %15 = add i64 %9, 12, !insn.addr !206
  %16 = inttoptr i64 %15 to i32*, !insn.addr !206
  store i32 4, i32* %16, align 4, !insn.addr !206
  %17 = add i64 %9, 16, !insn.addr !207
  %18 = inttoptr i64 %17 to i32*, !insn.addr !207
  store i32 5, i32* %18, align 4, !insn.addr !207
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* nonnull %arr_-56, i32* %10), !insn.addr !208
  %19 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %arr_-56, i64 2), !insn.addr !209
  %20 = inttoptr i64 %19 to i32*, !insn.addr !210
  %21 = load i32, i32* %20, align 4, !insn.addr !211
  %22 = call i64 @_Znwm(i64 4), !insn.addr !212
  %23 = inttoptr i64 %22 to i32*, !insn.addr !213
  store i32 500, i32* %23, align 4, !insn.addr !214
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* nonnull %ptr3_-72, i32* %23, i64* nonnull %deleter_-64), !insn.addr !215
  %24 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i64* nonnull %ptr3_-72), !insn.addr !216
  %25 = inttoptr i64 %24 to i32*, !insn.addr !217
  %26 = load i32, i32* %25, align 4, !insn.addr !218
  %27 = add i32 %21, %8, !insn.addr !219
  %28 = add i32 %27, %26, !insn.addr !220
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* nonnull %ptr3_-72), !insn.addr !221
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* nonnull %arr_-56), !insn.addr !222
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %ptr2_-40), !insn.addr !223
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %ptr1_-16), !insn.addr !224
  ret i32 %28, !insn.addr !225

; uselistorder directives
  uselistorder i32* %23, { 1, 0 }
  uselistorder i32* %10, { 1, 0 }
  uselistorder i64 %9, { 3, 2, 1, 0, 4 }
  uselistorder i32 5, { 5, 6, 0, 1, 2, 3, 4 }
  uselistorder i32 4, { 1, 0 }
  uselistorder i32 3, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i64 @function_2bce(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2bce:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !226
  %3 = add i64 %1, -16, !insn.addr !227
  %4 = inttoptr i64 %3 to i64*, !insn.addr !227
  %5 = add i64 %1, -20, !insn.addr !228
  %6 = inttoptr i64 %5 to i32*, !insn.addr !228
  store i32 %2, i32* %6, align 4, !insn.addr !228
  %7 = call i64 @function_2c28(), !insn.addr !229
  ret i64 %7, !insn.addr !229

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2bdf(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2bdf:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !230
  %3 = add i64 %1, -16, !insn.addr !231
  %4 = inttoptr i64 %3 to i64*, !insn.addr !231
  %5 = add i64 %1, -20, !insn.addr !232
  %6 = inttoptr i64 %5 to i32*, !insn.addr !232
  store i32 %2, i32* %6, align 4, !insn.addr !232
  %7 = call i64 @function_2c1f(), !insn.addr !233
  ret i64 %7, !insn.addr !233

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2bf0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2bf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !234
  %3 = add i64 %1, -16, !insn.addr !235
  %4 = inttoptr i64 %3 to i64*, !insn.addr !235
  %5 = add i64 %1, -20, !insn.addr !236
  %6 = inttoptr i64 %5 to i32*, !insn.addr !236
  store i32 %2, i32* %6, align 4, !insn.addr !236
  %7 = call i64 @function_2c16(), !insn.addr !237
  ret i64 %7, !insn.addr !237

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2c01(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2c01:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !238
  %3 = add i64 %1, -16, !insn.addr !239
  %4 = inttoptr i64 %3 to i64*, !insn.addr !239
  %5 = add i64 %1, -20, !insn.addr !240
  %6 = inttoptr i64 %5 to i32*, !insn.addr !240
  store i32 %2, i32* %6, align 4, !insn.addr !240
  %7 = add i64 %1, -64, !insn.addr !241
  %8 = inttoptr i64 %7 to i64*, !insn.addr !242
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %8), !insn.addr !242
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !242

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder void (i64*)* @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev", { 1, 0 }
}

define i64 @function_2c16() local_unnamed_addr {
dec_label_pc_2c16:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -48, !insn.addr !243
  %3 = inttoptr i64 %2 to i64*, !insn.addr !244
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %3), !insn.addr !244
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !244

; uselistorder directives
  uselistorder void (i64*)* @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev, { 1, 0 }
}

define i64 @function_2c1f() local_unnamed_addr {
dec_label_pc_2c1f:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !245
  %3 = inttoptr i64 %2 to i64*, !insn.addr !246
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !246
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !246
}

define i64 @function_2c28() local_unnamed_addr {
dec_label_pc_2c28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !247
  %3 = inttoptr i64 %2 to i64*, !insn.addr !248
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !248
  %4 = add i64 %1, -16, !insn.addr !249
  %5 = inttoptr i64 %4 to i64*, !insn.addr !249
  %6 = load i64, i64* %5, align 8, !insn.addr !249
  %7 = inttoptr i64 %6 to %_Unwind_Exception*, !insn.addr !250
  call void @_Unwind_Resume(%_Unwind_Exception* %7), !insn.addr !250
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !251

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder void (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 2, 3, 1, 0 }
}

define void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* %result, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_2c40:
  %0 = bitcast i64* %arg3 to i64**, !insn.addr !252
  call void @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %0), !insn.addr !252
  ret void, !insn.addr !253
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i64* %result) local_unnamed_addr {
dec_label_pc_2c80:
  %0 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i64* %result), !insn.addr !254
  ret i64 %0, !insn.addr !255
}

define void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %result) local_unnamed_addr {
dec_label_pc_2cb0:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result), !insn.addr !256
  %1 = inttoptr i64 %0 to i64*, !insn.addr !257
  %2 = load i64, i64* %1, align 8, !insn.addr !257
  %3 = icmp eq i64 %2, 0, !insn.addr !257
  br i1 %3, label %dec_label_pc_2d14, label %dec_label_pc_2ce8, !insn.addr !258

dec_label_pc_2ce8:                                ; preds = %dec_label_pc_2cb0
  %4 = inttoptr i64 %0 to i32***, !insn.addr !259
  %5 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i64* %result), !insn.addr !260
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !261
  %7 = load i64, i64* %6, align 8, !insn.addr !262
  %8 = inttoptr i64 %5 to i64*, !insn.addr !263
  %9 = inttoptr i64 %7 to i32*, !insn.addr !263
  call void @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %8, i32* %9), !insn.addr !263
  br label %dec_label_pc_2d14, !insn.addr !264

dec_label_pc_2d14:                                ; preds = %dec_label_pc_2ce8, %dec_label_pc_2cb0
  store i64 0, i64* %1, align 8, !insn.addr !265
  ret void, !insn.addr !266

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_2d30:
  %result_-28.3.reg2mem = alloca i32, !insn.addr !267
  %result_-28.2.reg2mem = alloca i32, !insn.addr !267
  %0 = call i64 @_Znwm(i64 8), !insn.addr !268
  %1 = inttoptr i64 %0 to i64*, !insn.addr !269
  %2 = call i64* @memset(i64* %1, i32 0, i32 8), !insn.addr !269
  call void @_ZN12RTTIDerivedAC2Ev(i64* %1), !insn.addr !270
  %3 = call i64 @_Znwm(i64 8), !insn.addr !271
  %4 = inttoptr i64 %3 to i64*, !insn.addr !272
  %5 = call i64* @memset(i64* %4, i32 0, i32 8), !insn.addr !272
  call void @_ZN12RTTIDerivedBC2Ev(i64* %4), !insn.addr !273
  %6 = icmp eq i64 %0, 0, !insn.addr !274
  %7 = icmp eq i1 %6, false, !insn.addr !275
  br i1 %7, label %dec_label_pc_2db5, label %dec_label_pc_2db0, !insn.addr !275

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d30
  %8 = call i64 @__cxa_bad_typeid(), !insn.addr !276
  br label %dec_label_pc_2db5, !insn.addr !276

dec_label_pc_2db5:                                ; preds = %dec_label_pc_2db0, %dec_label_pc_2d30
  %9 = load i64, i64* %1, align 8, !insn.addr !277
  %10 = add i64 %9, -8, !insn.addr !278
  %11 = inttoptr i64 %10 to i64*, !insn.addr !278
  %12 = load i64, i64* %11, align 8, !insn.addr !278
  %13 = inttoptr i64 %12 to i64*, !insn.addr !279
  %14 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %13, i64* nonnull @global_var_8838), !insn.addr !279
  %15 = icmp eq i64 %3, 0, !insn.addr !280
  %16 = icmp eq i1 %15, false, !insn.addr !281
  br i1 %16, label %dec_label_pc_2df9, label %dec_label_pc_2df4, !insn.addr !281

dec_label_pc_2df4:                                ; preds = %dec_label_pc_2db5
  %17 = call i64 @__cxa_bad_typeid(), !insn.addr !282
  br label %dec_label_pc_2df9, !insn.addr !282

dec_label_pc_2df9:                                ; preds = %dec_label_pc_2df4, %dec_label_pc_2db5
  %18 = urem i64 %14, 2
  %19 = icmp eq i64 %18, 0, !insn.addr !283
  %20 = icmp eq i1 %19, false, !insn.addr !284
  %spec.select = select i1 %20, i32 10, i32 0
  %21 = load i64, i64* %4, align 8, !insn.addr !285
  %22 = add i64 %21, -8, !insn.addr !286
  %23 = inttoptr i64 %22 to i64*, !insn.addr !286
  %24 = load i64, i64* %23, align 8, !insn.addr !286
  %25 = inttoptr i64 %24 to i64*, !insn.addr !287
  %26 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %25, i64* nonnull @global_var_8850), !insn.addr !287
  %27 = urem i64 %26, 2
  %28 = icmp eq i64 %27, 0, !insn.addr !288
  %29 = icmp eq i1 %28, false, !insn.addr !289
  %30 = or i32 %spec.select, 20
  %spec.select3 = select i1 %29, i32 %30, i32 %spec.select
  store i32 %spec.select3, i32* %result_-28.2.reg2mem, !insn.addr !290
  br i1 %6, label %dec_label_pc_2e89, label %dec_label_pc_2e67, !insn.addr !290

dec_label_pc_2e67:                                ; preds = %dec_label_pc_2df9
  %31 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_8828, i64* nonnull @global_var_8838, i64 0), !insn.addr !291
  %32 = icmp eq i64 %31, 0, !insn.addr !292
  store i32 %spec.select3, i32* %result_-28.2.reg2mem, !insn.addr !293
  br i1 %32, label %dec_label_pc_2e89, label %dec_label_pc_2e7a, !insn.addr !293

dec_label_pc_2e7a:                                ; preds = %dec_label_pc_2e67
  %33 = inttoptr i64 %31 to i64*, !insn.addr !294
  %34 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %33), !insn.addr !294
  %35 = trunc i64 %34 to i32, !insn.addr !295
  %36 = add i32 %spec.select3, %35, !insn.addr !295
  store i32 %36, i32* %result_-28.2.reg2mem, !insn.addr !296
  br label %dec_label_pc_2e89, !insn.addr !296

dec_label_pc_2e89:                                ; preds = %dec_label_pc_2df9, %dec_label_pc_2e7a, %dec_label_pc_2e67
  %result_-28.2.reload = load i32, i32* %result_-28.2.reg2mem
  store i32 %result_-28.2.reload, i32* %result_-28.3.reg2mem, !insn.addr !297
  br i1 %15, label %dec_label_pc_2eec, label %dec_label_pc_2eca, !insn.addr !297

dec_label_pc_2eca:                                ; preds = %dec_label_pc_2e89
  %37 = call i64 @__dynamic_cast(i64 %3, i64* nonnull @global_var_8828, i64* nonnull @global_var_8850, i64 0), !insn.addr !298
  %38 = icmp eq i64 %37, 0, !insn.addr !299
  store i32 %result_-28.2.reload, i32* %result_-28.3.reg2mem, !insn.addr !300
  br i1 %38, label %dec_label_pc_2eec, label %dec_label_pc_2edd, !insn.addr !300

dec_label_pc_2edd:                                ; preds = %dec_label_pc_2eca
  %39 = inttoptr i64 %37 to i64*, !insn.addr !301
  %40 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %39), !insn.addr !301
  %41 = trunc i64 %40 to i32, !insn.addr !302
  %42 = add i32 %result_-28.2.reload, %41, !insn.addr !302
  store i32 %42, i32* %result_-28.3.reg2mem, !insn.addr !303
  br label %dec_label_pc_2eec, !insn.addr !303

dec_label_pc_2eec:                                ; preds = %dec_label_pc_2e89, %dec_label_pc_2edd, %dec_label_pc_2eca
  %result_-28.3.reload = load i32, i32* %result_-28.3.reg2mem
  br i1 %7, label %dec_label_pc_2f03, label %dec_label_pc_2efe, !insn.addr !304

dec_label_pc_2efe:                                ; preds = %dec_label_pc_2eec
  %43 = call i64 @__cxa_bad_typeid(), !insn.addr !305
  br label %dec_label_pc_2f03, !insn.addr !305

dec_label_pc_2f03:                                ; preds = %dec_label_pc_2efe, %dec_label_pc_2eec
  %44 = load i64, i64* %1, align 8, !insn.addr !306
  %45 = add i64 %44, -8, !insn.addr !307
  %46 = inttoptr i64 %45 to i64*, !insn.addr !307
  %47 = load i64, i64* %46, align 8, !insn.addr !307
  %48 = inttoptr i64 %47 to i64*, !insn.addr !308
  %49 = call i64 @_ZNKSt9type_info4nameEv(i64* %48), !insn.addr !308
  %50 = inttoptr i64 %49 to i8*, !insn.addr !309
  %51 = call i32 @strlen(i8* %50), !insn.addr !309
  %52 = add i32 %51, %result_-28.3.reload, !insn.addr !310
  ret i32 %52, !insn.addr !311

; uselistorder directives
  uselistorder i64 %37, { 1, 0 }
  uselistorder i32 %result_-28.2.reload, { 2, 1, 0 }
  uselistorder i64 %31, { 1, 0 }
  uselistorder i32 %spec.select3, { 2, 1, 0 }
  uselistorder i32* %result_-28.2.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %result_-28.3.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i64*, i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 -8, { 2, 3, 4, 0, 1 }
  uselistorder i64 ()* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2eec, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2e89, { 1, 2, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2f70:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5025 to i8*)), !insn.addr !312
  %1 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !313
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_504a to i8*)), !insn.addr !314
  %3 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !315
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5068 to i8*)), !insn.addr !316
  %5 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !317
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5084 to i8*)), !insn.addr !318
  %7 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !319
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50a0 to i8*)), !insn.addr !320
  %9 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !321
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50bc to i8*)), !insn.addr !322
  %11 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !323
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d9 to i8*)), !insn.addr !324
  %13 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !325
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50f5 to i8*)), !insn.addr !326
  %15 = call i32 @_Z23test_cpp_template_classv(), !insn.addr !327
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5111 to i8*)), !insn.addr !328
  %17 = call i32 @_Z15test_cpp_lambdav(), !insn.addr !329
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_512d to i8*)), !insn.addr !330
  %19 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !331
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5149 to i8*)), !insn.addr !332
  %21 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !333
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5166 to i8*)), !insn.addr !334
  %23 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !335
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5183 to i8*)), !insn.addr !336
  ret void, !insn.addr !337

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_3080:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !338
  ret i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !339
}

define void @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30a0:
  call void @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3), !insn.addr !340
  ret void, !insn.addr !341
}

define void @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30d0:
  %stack_var_-24 = alloca i32*, align 8
  store i32* %arg2, i32** %stack_var_-24, align 8, !insn.addr !342
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !343
  %1 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %0), !insn.addr !343
  %2 = bitcast i32** %stack_var_-24 to i32***, !insn.addr !344
  call void @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** nonnull %2, i64** %1), !insn.addr !344
  ret void, !insn.addr !345

; uselistorder directives
  uselistorder i32** %stack_var_-24, { 1, 0 }
}

define i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3110:
  %0 = bitcast i64* %arg1 to i64**, !insn.addr !346
  ret i64** %0, !insn.addr !346
}

define void @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_3120:
  %0 = bitcast i32*** %arg2 to i64*, !insn.addr !347
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %0), !insn.addr !347
  %2 = bitcast i64** %arg3 to i64*, !insn.addr !348
  %3 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %2), !insn.addr !348
  %4 = ptrtoint i64** %3 to i64, !insn.addr !348
  call void @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %1, i64 %4), !insn.addr !349
  ret void, !insn.addr !350
}

define i64 @function_3171(i64 %arg1) local_unnamed_addr {
dec_label_pc_3171:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !351
}

define void @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3180:
  %0 = inttoptr i64 %arg3 to i64*, !insn.addr !352
  %1 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %0), !insn.addr !352
  %2 = bitcast i64** %1 to i64*, !insn.addr !353
  call void @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %2), !insn.addr !353
  %3 = bitcast i32*** %arg2 to i64*, !insn.addr !354
  %4 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %3), !insn.addr !354
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %4), !insn.addr !355
  ret void, !insn.addr !356

; uselistorder directives
  uselistorder i64** (i64*)* @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE", { 2, 1, 0 }
  uselistorder i64* %result, { 1, 0 }
}

define void @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_31e0:
  call void @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2), !insn.addr !357
  ret void, !insn.addr !358
}

define void @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3210:
  ret void, !insn.addr !359
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3220:
  %0 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %result), !insn.addr !360
  %1 = ptrtoint i64* %0 to i64, !insn.addr !360
  ret i64 %1, !insn.addr !361
}

define i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3240:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %result), !insn.addr !362
  ret i64 %0, !insn.addr !363
}

define void @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3270:
  store i32 -1, i32* %arg2, align 4, !insn.addr !364
  %0 = icmp eq i32* %arg2, null, !insn.addr !365
  br i1 %0, label %dec_label_pc_32a5, label %dec_label_pc_329c, !insn.addr !366

dec_label_pc_329c:                                ; preds = %dec_label_pc_3270
  %1 = bitcast i32* %arg2 to i64*
  call void @_ZdlPv(i64* %1), !insn.addr !367
  br label %dec_label_pc_32a5, !insn.addr !367

dec_label_pc_32a5:                                ; preds = %dec_label_pc_329c, %dec_label_pc_3270
  ret void, !insn.addr !368
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32b0:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !369
  %1 = bitcast i32** %0 to i64*, !insn.addr !370
  ret i64* %1, !insn.addr !370
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32d0:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1), !insn.addr !371
  %1 = inttoptr i64 %0 to i32**, !insn.addr !372
  ret i32** %1, !insn.addr !372
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32f0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !373
  ret i64 %0, !insn.addr !374
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3310:
  %0 = call i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %result), !insn.addr !375
  %1 = ptrtoint i64* %0 to i64, !insn.addr !375
  ret i64 %1, !insn.addr !376
}

define i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3330:
  %0 = call i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1), !insn.addr !377
  ret i64* %0, !insn.addr !378
}

define i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3350:
  %0 = call i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1), !insn.addr !379
  %1 = inttoptr i64 %0 to i64*, !insn.addr !380
  ret i64* %1, !insn.addr !380
}

define i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3370:
  %0 = call i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* %arg1), !insn.addr !381
  ret i64 %0, !insn.addr !382
}

define i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3390:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !383
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i64* %result) local_unnamed_addr {
dec_label_pc_33a0:
  %0 = call i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result), !insn.addr !384
  ret i64 %0, !insn.addr !385
}

define i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result) local_unnamed_addr {
dec_label_pc_33d0:
  %0 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %result), !insn.addr !386
  %1 = load i64, i64* %0, align 8, !insn.addr !387
  ret i64 %1, !insn.addr !388
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_33f0:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !389
  %1 = bitcast i32** %0 to i64*, !insn.addr !390
  ret i64* %1, !insn.addr !390
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3410:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1), !insn.addr !391
  %1 = inttoptr i64 %0 to i32**, !insn.addr !392
  ret i32** %1, !insn.addr !392
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3430:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !393
  ret i64 %0, !insn.addr !394
}

define void @_ZN11SimpleClassC2EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_3450:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !395
  store i32 %arg2, i32* %1, align 4, !insn.addr !395
  %2 = add i64 %0, 4, !insn.addr !396
  %3 = inttoptr i64 %2 to i8*, !insn.addr !397
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !397
  %5 = add i64 %0, 35, !insn.addr !398
  %6 = inttoptr i64 %5 to i8*, !insn.addr !398
  store i8 0, i8* %6, align 1, !insn.addr !398
  ret void, !insn.addr !399

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
}

define i64 @_ZN11SimpleClass8setValueEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3490:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !400
  store i32 %arg2, i32* %1, align 4, !insn.addr !400
  ret i64 %0, !insn.addr !401
}

define i64 @_ZNK11SimpleClass8getValueEv(i64* %result) local_unnamed_addr {
dec_label_pc_34b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !402
  ret i64 %2, !insn.addr !403
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_34c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !404
  %5 = sext i32 %4 to i64, !insn.addr !405
  %6 = add i64 %2, 4, !insn.addr !406
  %7 = inttoptr i64 %6 to i8*, !insn.addr !407
  %8 = call i32 @strlen(i8* %7), !insn.addr !407
  %9 = sext i32 %8 to i64, !insn.addr !407
  %10 = add nsw i64 %9, %5, !insn.addr !408
  ret i64 %10, !insn.addr !409
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_3500:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !410
}

define void @_ZN14LifecycleClassC2Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3510:
  %storemerge.off04.reg2mem = alloca i32, !insn.addr !411
  %storemerge.off025.reg2mem = alloca i64, !insn.addr !411
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !412
  %2 = inttoptr i64 %1 to i64*, !insn.addr !412
  store i64 %arg2, i64* %2, align 8, !insn.addr !412
  %3 = mul i64 %arg2, 4, !insn.addr !413
  %4 = icmp ugt i64 %arg2, 4611686018427387903, !insn.addr !413
  %5 = select i1 %4, i64 -1, i64 %3, !insn.addr !414
  %6 = call i64 @_Znam(i64 %5), !insn.addr !415
  store i64 %6, i64* %result, align 8, !insn.addr !416
  %7 = icmp ne i64 %arg2, 0, !insn.addr !417
  %8 = icmp eq i1 %7, false, !insn.addr !418
  store i64 0, i64* %storemerge.off025.reg2mem, !insn.addr !418
  store i32 0, i32* %storemerge.off04.reg2mem, !insn.addr !418
  br i1 %8, label %dec_label_pc_3598, label %dec_label_pc_3572, !insn.addr !418

dec_label_pc_3572:                                ; preds = %dec_label_pc_3510, %dec_label_pc_3572
  %storemerge.off04.reload = load i32, i32* %storemerge.off04.reg2mem
  %storemerge.off025.reload = load i64, i64* %storemerge.off025.reg2mem
  %9 = mul i32 %storemerge.off04.reload, 10, !insn.addr !419
  %10 = mul i64 %storemerge.off025.reload, 4, !insn.addr !420
  %11 = add i64 %10, %5, !insn.addr !420
  %12 = inttoptr i64 %11 to i32*, !insn.addr !420
  store i32 %9, i32* %12, align 4, !insn.addr !420
  %13 = add i64 %storemerge.off025.reload, 1, !insn.addr !421
  %extract.t = trunc i64 %13 to i32
  %14 = icmp ult i64 %13, %arg2, !insn.addr !417
  %15 = icmp eq i1 %14, false, !insn.addr !418
  store i64 %13, i64* %storemerge.off025.reg2mem, !insn.addr !418
  store i32 %extract.t, i32* %storemerge.off04.reg2mem, !insn.addr !418
  br i1 %15, label %dec_label_pc_3598, label %dec_label_pc_3572, !insn.addr !418

dec_label_pc_3598:                                ; preds = %dec_label_pc_3572, %dec_label_pc_3510
  store i32 ptrtoint (i32* @global_var_90f1 to i32), i32* @global_var_90f0, align 4, !insn.addr !422
  ret void, !insn.addr !423

; uselistorder directives
  uselistorder i64* %storemerge.off025.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.off04.reg2mem, { 2, 0, 1 }
  uselistorder i32 10, { 1, 0, 2, 3, 6, 4, 5 }
  uselistorder i64 %arg2, { 2, 1, 3, 0, 4 }
  uselistorder label %dec_label_pc_3572, { 1, 0 }
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_35b0:
  %storemerge.reg2mem = alloca i64, !insn.addr !424
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !425
  %2 = inttoptr i64 %1 to i64*, !insn.addr !425
  %3 = load i64, i64* %2, align 8, !insn.addr !425
  %4 = icmp ugt i64 %3, %arg2, !insn.addr !425
  %5 = icmp eq i1 %4, false, !insn.addr !426
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !426
  br i1 %5, label %dec_label_pc_35f5, label %dec_label_pc_35d2, !insn.addr !426

dec_label_pc_35d2:                                ; preds = %dec_label_pc_35b0
  %6 = mul i64 %arg2, 4, !insn.addr !427
  %7 = add i64 %6, %0, !insn.addr !427
  %8 = inttoptr i64 %7 to i32*, !insn.addr !427
  %9 = load i32, i32* %8, align 4, !insn.addr !427
  %phitmp = zext i32 %9 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !428
  br label %dec_label_pc_35f5, !insn.addr !428

dec_label_pc_35f5:                                ; preds = %dec_label_pc_35b0, %dec_label_pc_35d2
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !429

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_35f5, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_3600:
  %0 = load i32, i32* @global_var_90f0, align 4, !insn.addr !430
  %1 = zext i32 %0 to i64, !insn.addr !430
  ret i64 %1, !insn.addr !431
}

define void @_ZN14LifecycleClassD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3610:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !432
  br i1 %2, label %dec_label_pc_363a, label %dec_label_pc_3631, !insn.addr !433

dec_label_pc_3631:                                ; preds = %dec_label_pc_3610
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !434
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !434
  br label %dec_label_pc_363a, !insn.addr !434

dec_label_pc_363a:                                ; preds = %dec_label_pc_3631, %dec_label_pc_3610
  store i32 ptrtoint (i32* @global_var_90ef to i32), i32* @global_var_90f0, align 4, !insn.addr !435
  ret void, !insn.addr !436

; uselistorder directives
  uselistorder i32* @global_var_90f0, { 2, 1, 0 }
}

define void @_ZN4BaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3650:
  store i64 ptrtoint (%vtable_8878_type* @global_var_8878 to i64), i64* %result, align 8, !insn.addr !437
  ret void, !insn.addr !438

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
}

define void @_ZN7DerivedC2Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3670:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN4BaseC2Ev(i64* %result), !insn.addr !439
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !440
  %1 = add i64 %0, 8, !insn.addr !441
  %2 = inttoptr i64 %1 to i32*, !insn.addr !441
  store i32 %arg2, i32* %2, align 4, !insn.addr !441
  ret void, !insn.addr !442

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder void (i64*)* @_ZN4BaseC2Ev, { 1, 0 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_36b0:
  %0 = add i32 %arg2, 1, !insn.addr !443
  %1 = zext i32 %0 to i64, !insn.addr !443
  ret i64 %1, !insn.addr !444
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_36d0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !445
  %2 = inttoptr i64 %1 to i32*, !insn.addr !445
  %3 = load i32, i32* %2, align 4, !insn.addr !445
  %4 = mul i32 %3, %arg2, !insn.addr !445
  %5 = zext i32 %4 to i64, !insn.addr !445
  ret i64 %5, !insn.addr !446
}

define void @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_36f0:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !447
  ret void, !insn.addr !448
}

define void @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_3710:
  ret void, !insn.addr !449
}

define void @_ZN12MultiDerivedC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3720:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN5BaseAC2Ev(i64* %result), !insn.addr !450
  %1 = add i64 %0, 16, !insn.addr !451
  %2 = inttoptr i64 %1 to i64*, !insn.addr !452
  call void @_ZN5BaseBC2Ev(i64* %2), !insn.addr !452
  store i64 ptrtoint (%vtable_8900_type* @global_var_8900 to i64), i64* %result, align 8, !insn.addr !453
  store i64 ptrtoint (i64* @global_var_8930 to i64), i64* %2, align 8, !insn.addr !454
  ret void, !insn.addr !455
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) {
dec_label_pc_3770:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 16, !insn.addr !456
  %2 = inttoptr i64 %1 to i64*, !insn.addr !457
  call void @_ZN5BaseBD2Ev(i64* %2), !insn.addr !457
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !458
  ret void, !insn.addr !459
}

define void @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_37a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !460
  %2 = inttoptr i64 %1 to i64*, !insn.addr !461
  call void @_ZN11VirtualBaseC2Ev(i64* %2), !insn.addr !461
  %3 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_8a90), !insn.addr !462
  %4 = add i64 %0, 16, !insn.addr !463
  %5 = inttoptr i64 %4 to i64*, !insn.addr !464
  %6 = call i64 @_ZN7MiddleBC2Ev(i64* %5, i64* nonnull @global_var_8aa0), !insn.addr !464
  store i64 ptrtoint (%vtable_8a08_type* @global_var_8a08 to i64), i64* %result, align 8, !insn.addr !465
  store i64 ptrtoint (i64* @global_var_8a70 to i64), i64* %2, align 8, !insn.addr !466
  store i64 ptrtoint (i64* @global_var_8a38 to i64), i64* %5, align 8, !insn.addr !467
  ret void, !insn.addr !468
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_3830:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN14DiamondDerivedD2Ev(i64* %result, i64* nonnull @global_var_8a88), !insn.addr !469
  %2 = add i64 %0, 32, !insn.addr !470
  %3 = inttoptr i64 %2 to i64*, !insn.addr !471
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !471
  ret void, !insn.addr !472

; uselistorder directives
  uselistorder i64 32, { 1, 2, 0 }
}

define void @_ZN5PointC2Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_3870:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !473
  store i32 %arg2, i32* %1, align 4, !insn.addr !473
  %2 = add i64 %0, 4, !insn.addr !474
  %3 = inttoptr i64 %2 to i32*, !insn.addr !474
  store i32 %arg3, i32* %3, align 4, !insn.addr !474
  ret void, !insn.addr !475
}

define i64 @_ZNK5PointplERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3890:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i64* %arg2 to i64
  %4 = ptrtoint i64* %result to i64
  %stack_var_-16 = alloca i64, align 8
  %5 = trunc i64 %1 to i32
  %6 = trunc i64 %2 to i32
  %7 = add i32 %6, %5, !insn.addr !476
  %8 = add i64 %4, 4, !insn.addr !477
  %9 = inttoptr i64 %8 to i32*, !insn.addr !477
  %10 = load i32, i32* %9, align 4, !insn.addr !477
  %11 = add i64 %3, 4, !insn.addr !478
  %12 = inttoptr i64 %11 to i32*, !insn.addr !478
  %13 = load i32, i32* %12, align 4, !insn.addr !478
  %14 = add i32 %13, %10, !insn.addr !478
  call void @_ZN5PointC2Eii(i64* nonnull %stack_var_-16, i32 %7, i32 %14), !insn.addr !479
  %15 = load i64, i64* %stack_var_-16, align 8, !insn.addr !480
  ret i64 %15, !insn.addr !481

; uselistorder directives
  uselistorder i64* %stack_var_-16, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void (i64*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_38d0:
  %0 = alloca i64
  %stack_var_-25.0.reg2mem = alloca i64, !insn.addr !482
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !483
  %6 = icmp eq i1 %5, false, !insn.addr !484
  store i64 0, i64* %stack_var_-25.0.reg2mem, !insn.addr !484
  br i1 %6, label %dec_label_pc_390b, label %dec_label_pc_38f7, !insn.addr !484

dec_label_pc_38f7:                                ; preds = %dec_label_pc_38d0
  %7 = ptrtoint i64* %result to i64
  %8 = ptrtoint i64* %arg2 to i64
  %9 = add i64 %7, 4, !insn.addr !485
  %10 = inttoptr i64 %9 to i32*, !insn.addr !485
  %11 = load i32, i32* %10, align 4, !insn.addr !485
  %12 = add i64 %8, 4, !insn.addr !486
  %13 = inttoptr i64 %12 to i32*, !insn.addr !486
  %14 = load i32, i32* %13, align 4, !insn.addr !486
  %15 = icmp eq i32 %11, %14, !insn.addr !486
  %phitmp = zext i1 %15 to i64
  store i64 %phitmp, i64* %stack_var_-25.0.reg2mem, !insn.addr !487
  br label %dec_label_pc_390b, !insn.addr !487

dec_label_pc_390b:                                ; preds = %dec_label_pc_38f7, %dec_label_pc_38d0
  %stack_var_-25.0.reload = load i64, i64* %stack_var_-25.0.reg2mem
  ret i64 %stack_var_-25.0.reload, !insn.addr !488

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i1 false, { 7, 9, 10, 0, 3, 5, 4, 6, 8, 1, 2 }
}

define i64 @_ZN5PointppEv(i64* %result) local_unnamed_addr {
dec_label_pc_3920:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, 1, !insn.addr !489
  %5 = bitcast i64* %result to i32*, !insn.addr !490
  store i32 %4, i32* %5, align 4, !insn.addr !490
  %6 = add i64 %2, 4, !insn.addr !491
  %7 = inttoptr i64 %6 to i32*, !insn.addr !491
  %8 = load i32, i32* %7, align 4, !insn.addr !491
  %9 = add i32 %8, 1, !insn.addr !492
  store i32 %9, i32* %7, align 4, !insn.addr !493
  ret i64 %2, !insn.addr !494

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3940:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !495
  %storemerge = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge, !insn.addr !496
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3970:
  %0 = alloca i1
  %storemerge.reg2mem = alloca i64, !insn.addr !497
  %1 = load i1, i1* %0
  %2 = load i1, i1* %0
  %3 = fptrunc double %arg2 to float
  %4 = bitcast float %3 to i32
  %5 = sext i32 %4 to i128
  %6 = fptrunc double %arg1 to float
  %7 = bitcast float %6 to i32
  %8 = sext i32 %7 to i128
  %9 = call i64 @__asm_movsd.13(i128 %8), !insn.addr !498
  %10 = call i64 @__asm_movsd.13(i128 %5), !insn.addr !499
  %11 = call i128 @__asm_movsd(i64 %9), !insn.addr !500
  call void @__asm_ucomisd(i128 %11, i64 %10), !insn.addr !501
  %12 = or i1 %1, %2, !insn.addr !502
  br i1 %12, label %dec_label_pc_399d, label %dec_label_pc_398e, !insn.addr !502

dec_label_pc_398e:                                ; preds = %dec_label_pc_3970
  %13 = call i128 @__asm_movsd(i64 %9), !insn.addr !503
  %14 = call i64 @__asm_movsd.13(i128 %13), !insn.addr !504
  store i64 %14, i64* %storemerge.reg2mem, !insn.addr !505
  br label %dec_label_pc_39a7, !insn.addr !505

dec_label_pc_399d:                                ; preds = %dec_label_pc_3970
  %15 = call i128 @__asm_movsd(i64 %10), !insn.addr !506
  %16 = call i64 @__asm_movsd.13(i128 %15), !insn.addr !507
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !507
  br label %dec_label_pc_39a7, !insn.addr !507

dec_label_pc_39a7:                                ; preds = %dec_label_pc_399d, %dec_label_pc_398e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %17 = call i128 @__asm_movsd(i64 %storemerge.reload), !insn.addr !508
  %18 = trunc i128 %17 to i64, !insn.addr !509
  %19 = bitcast i64 %18 to double, !insn.addr !509
  ret double %19, !insn.addr !509

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_39b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !510
  store i32 %3, i32* %arg2, align 4, !insn.addr !511
  ret void, !insn.addr !512

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_39e0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !513
  %2 = inttoptr i64 %1 to i32*, !insn.addr !513
  store i32 0, i32* %2, align 4, !insn.addr !513
  ret void, !insn.addr !514
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a00:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !515
  %2 = inttoptr i64 %1 to i32*, !insn.addr !515
  %3 = load i32, i32* %2, align 4, !insn.addr !515
  %4 = icmp sgt i32 %3, 9, !insn.addr !516
  br i1 %4, label %dec_label_pc_3a35, label %dec_label_pc_3a1d, !insn.addr !516

dec_label_pc_3a1d:                                ; preds = %dec_label_pc_3a00
  %5 = add i32 %3, 1, !insn.addr !517
  store i32 %5, i32* %2, align 4, !insn.addr !518
  %6 = sext i32 %3 to i64, !insn.addr !519
  %7 = mul i64 %6, 4, !insn.addr !520
  %8 = add i64 %7, %0, !insn.addr !520
  %9 = inttoptr i64 %8 to i32*, !insn.addr !520
  store i32 %arg2, i32* %9, align 4, !insn.addr !520
  br label %dec_label_pc_3a35, !insn.addr !520

dec_label_pc_3a35:                                ; preds = %dec_label_pc_3a1d, %dec_label_pc_3a00
  ret i64 %0, !insn.addr !521

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i64 %0, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a40:
  %storemerge.reg2mem = alloca i64, !insn.addr !522
  %0 = icmp slt i32 %arg2, 0, !insn.addr !523
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !524
  br i1 %0, label %dec_label_pc_3a87, label %dec_label_pc_3a5d, !insn.addr !524

dec_label_pc_3a5d:                                ; preds = %dec_label_pc_3a40
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !525
  %3 = inttoptr i64 %2 to i32*, !insn.addr !525
  %4 = load i32, i32* %3, align 4, !insn.addr !525
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !526
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !526
  br i1 %5, label %dec_label_pc_3a6d, label %dec_label_pc_3a87, !insn.addr !526

dec_label_pc_3a6d:                                ; preds = %dec_label_pc_3a5d
  %6 = sext i32 %arg2 to i64, !insn.addr !527
  %7 = mul i64 %6, 4, !insn.addr !528
  %8 = add i64 %7, %1, !insn.addr !528
  %9 = inttoptr i64 %8 to i32*, !insn.addr !528
  %10 = load i32, i32* %9, align 4, !insn.addr !528
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !529
  br label %dec_label_pc_3a87, !insn.addr !529

dec_label_pc_3a87:                                ; preds = %dec_label_pc_3a40, %dec_label_pc_3a5d, %dec_label_pc_3a6d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !530

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3a87, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3a90:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !531
  %2 = inttoptr i64 %1 to i32*, !insn.addr !531
  %3 = load i32, i32* %2, align 4, !insn.addr !531
  %4 = zext i32 %3 to i64, !insn.addr !531
  ret i64 %4, !insn.addr !532
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ab0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !533
  %2 = inttoptr i64 %1 to i32*, !insn.addr !533
  store i32 0, i32* %2, align 4, !insn.addr !533
  ret void, !insn.addr !534
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3ad0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = call i64 @__asm_movsd.13(i128 %1), !insn.addr !535
  %4 = add i64 %2, 80, !insn.addr !536
  %5 = inttoptr i64 %4 to i32*, !insn.addr !536
  %6 = load i32, i32* %5, align 4, !insn.addr !536
  %7 = icmp sgt i32 %6, 9, !insn.addr !537
  br i1 %7, label %dec_label_pc_3b0b, label %dec_label_pc_3aef, !insn.addr !537

dec_label_pc_3aef:                                ; preds = %dec_label_pc_3ad0
  %8 = call i128 @__asm_movsd(i64 %3), !insn.addr !538
  %9 = load i32, i32* %5, align 4, !insn.addr !539
  %10 = add i32 %9, 1, !insn.addr !540
  store i32 %10, i32* %5, align 4, !insn.addr !541
  %11 = sext i32 %9 to i64, !insn.addr !542
  %12 = call i64 @__asm_movsd.13(i128 %8), !insn.addr !543
  %13 = mul i64 %11, 8, !insn.addr !543
  %14 = add i64 %13, %2, !insn.addr !543
  %15 = inttoptr i64 %14 to i64*, !insn.addr !543
  store i64 %12, i64* %15, align 8, !insn.addr !543
  br label %dec_label_pc_3b0b, !insn.addr !543

dec_label_pc_3b0b:                                ; preds = %dec_label_pc_3aef, %dec_label_pc_3ad0
  ret i64 %2, !insn.addr !544

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3b10:
  %0 = alloca i128
  %storemerge.reg2mem = alloca i64, !insn.addr !545
  %1 = load i128, i128* %0
  %2 = icmp slt i32 %arg2, 0, !insn.addr !546
  br i1 %2, label %dec_label_pc_3b54, label %dec_label_pc_3b2d, !insn.addr !547

dec_label_pc_3b2d:                                ; preds = %dec_label_pc_3b10
  %3 = ptrtoint i64* %result to i64
  %4 = add i64 %3, 80, !insn.addr !548
  %5 = inttoptr i64 %4 to i32*, !insn.addr !548
  %6 = load i32, i32* %5, align 4, !insn.addr !548
  %7 = icmp sgt i32 %6, %arg2, !insn.addr !549
  br i1 %7, label %dec_label_pc_3b3d, label %dec_label_pc_3b54, !insn.addr !549

dec_label_pc_3b3d:                                ; preds = %dec_label_pc_3b2d
  %8 = sext i32 %arg2 to i64, !insn.addr !550
  %9 = mul i64 %8, 8, !insn.addr !551
  %10 = add i64 %9, %3, !insn.addr !551
  %11 = inttoptr i64 %10 to i64*, !insn.addr !551
  %12 = load i64, i64* %11, align 8, !insn.addr !551
  %13 = call i128 @__asm_movsd(i64 %12), !insn.addr !551
  %14 = call i64 @__asm_movsd.13(i128 %13), !insn.addr !552
  store i64 %14, i64* %storemerge.reg2mem, !insn.addr !553
  br label %dec_label_pc_3b5c, !insn.addr !553

dec_label_pc_3b54:                                ; preds = %dec_label_pc_3b2d, %dec_label_pc_3b10
  %15 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !554
  %16 = call i64 @__asm_movsd.13(i128 %15), !insn.addr !555
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !555
  br label %dec_label_pc_3b5c, !insn.addr !555

dec_label_pc_3b5c:                                ; preds = %dec_label_pc_3b54, %dec_label_pc_3b3d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %17 = call i128 @__asm_movsd(i64 %storemerge.reload), !insn.addr !556
  ret i128 %17, !insn.addr !557

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i128)* @__asm_movsd.13, { 0, 1, 2, 3, 5, 6, 7, 8, 4, 9 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 1, 2, 4, 5, 6, 7, 3, 8, 9 }
  uselistorder i32 %arg2, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3b70:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !558
  %2 = inttoptr i64 %1 to i32*, !insn.addr !558
  %3 = load i32, i32* %2, align 4, !insn.addr !558
  %4 = zext i32 %3 to i64, !insn.addr !558
  ret i64 %4, !insn.addr !559
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3b90:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !560
  ret void, !insn.addr !561
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3bc0:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !562
  ret i64 %0, !insn.addr !563
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3bf0:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !564
  ret i64* %0, !insn.addr !564
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3c00:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !565
  ret void, !insn.addr !566
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c30:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !567
  ret void, !insn.addr !568
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3c60:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !569
  %1 = mul i64 %arg2, 4, !insn.addr !570
  %2 = add i64 %0, %1, !insn.addr !571
  ret i64 %2, !insn.addr !572

; uselistorder directives
  uselistorder i64 4, { 0, 1, 2, 10, 11, 12, 13, 14, 15, 3, 4, 5, 16, 17, 6, 9, 7, 8 }
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ca0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !573
  %1 = inttoptr i64 %0 to i64*, !insn.addr !574
  %2 = load i64, i64* %1, align 8, !insn.addr !574
  %3 = icmp eq i64 %2, 0, !insn.addr !574
  br i1 %3, label %dec_label_pc_3ced, label %dec_label_pc_3ccb, !insn.addr !575

dec_label_pc_3ccb:                                ; preds = %dec_label_pc_3ca0
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result), !insn.addr !576
  %5 = load i64, i64* %1, align 8, !insn.addr !577
  %6 = inttoptr i64 %4 to i64*, !insn.addr !578
  %7 = inttoptr i64 %5 to i32*, !insn.addr !578
  %8 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i64* %6, i32* %7), !insn.addr !578
  br label %dec_label_pc_3ced, !insn.addr !579

dec_label_pc_3ced:                                ; preds = %dec_label_pc_3ccb, %dec_label_pc_3ca0
  store i64 0, i64* %1, align 8, !insn.addr !580
  ret void, !insn.addr !581

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2 }
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3d10:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !582
  %1 = inttoptr i64 %0 to i64*, !insn.addr !583
  %2 = load i64, i64* %1, align 8, !insn.addr !583
  %3 = icmp eq i64 %2, 0, !insn.addr !583
  br i1 %3, label %dec_label_pc_3d67, label %dec_label_pc_3d3b, !insn.addr !584

dec_label_pc_3d3b:                                ; preds = %dec_label_pc_3d10
  %4 = inttoptr i64 %0 to i32***, !insn.addr !585
  %5 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result), !insn.addr !586
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !587
  %7 = load i64, i64* %6, align 8, !insn.addr !588
  %8 = inttoptr i64 %5 to i64*, !insn.addr !589
  %9 = inttoptr i64 %7 to i32*, !insn.addr !589
  %10 = call i64 @_ZNKSt14default_deleteIiEclEPi(i64* %8, i32* %9), !insn.addr !589
  br label %dec_label_pc_3d67, !insn.addr !590

dec_label_pc_3d67:                                ; preds = %dec_label_pc_3d3b, %dec_label_pc_3d10
  store i64 0, i64* %1, align 8, !insn.addr !591
  ret void, !insn.addr !592

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define void @_ZN12RTTIDerivedAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !593
  store i64 ptrtoint (%vtable_8d50_type* @global_var_8d50 to i64), i64* %result, align 8, !insn.addr !594
  ret void, !insn.addr !595
}

define void @_ZN12RTTIDerivedBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3dc0:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !596
  store i64 ptrtoint (%vtable_8da0_type* @global_var_8da0 to i64), i64* %result, align 8, !insn.addr !597
  ret void, !insn.addr !598

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3e00:
  %stack_var_-25.0.reg2mem = alloca i64, !insn.addr !599
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 8, !insn.addr !600
  %3 = inttoptr i64 %2 to i64*, !insn.addr !600
  %4 = load i64, i64* %3, align 8, !insn.addr !600
  %5 = add i64 %0, 8, !insn.addr !601
  %6 = inttoptr i64 %5 to i64*, !insn.addr !601
  %7 = load i64, i64* %6, align 8, !insn.addr !601
  %8 = icmp eq i64 %4, %7, !insn.addr !601
  store i64 1, i64* %stack_var_-25.0.reg2mem, !insn.addr !602
  br i1 %8, label %dec_label_pc_3e6c, label %dec_label_pc_3e2f, !insn.addr !602

dec_label_pc_3e2f:                                ; preds = %dec_label_pc_3e00
  %9 = inttoptr i64 %4 to i8*, !insn.addr !603
  %10 = load i8, i8* %9, align 1, !insn.addr !603
  %11 = icmp eq i8 %10, 42, !insn.addr !604
  store i64 0, i64* %stack_var_-25.0.reg2mem, !insn.addr !605
  br i1 %11, label %dec_label_pc_3e6c, label %dec_label_pc_3e48, !insn.addr !605

dec_label_pc_3e48:                                ; preds = %dec_label_pc_3e2f
  %12 = inttoptr i64 %7 to i8*, !insn.addr !606
  %13 = call i32 @strcmp(i8* %9, i8* %12), !insn.addr !606
  %14 = icmp eq i32 %13, 0, !insn.addr !607
  %15 = zext i1 %14 to i64, !insn.addr !608
  store i64 %15, i64* %stack_var_-25.0.reg2mem, !insn.addr !608
  br label %dec_label_pc_3e6c, !insn.addr !608

dec_label_pc_3e6c:                                ; preds = %dec_label_pc_3e2f, %dec_label_pc_3e48, %dec_label_pc_3e00
  %stack_var_-25.0.reload = load i64, i64* %stack_var_-25.0.reg2mem
  ret i64 %stack_var_-25.0.reload, !insn.addr !609

; uselistorder directives
  uselistorder i32 0, { 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
  uselistorder label %dec_label_pc_3e6c, { 1, 0, 2 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e80:
  ret i64 100, !insn.addr !610
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e90:
  ret i64 200, !insn.addr !611
}

define i64 @_ZNKSt9type_info4nameEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ea0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !612
  %2 = inttoptr i64 %1 to i64*, !insn.addr !612
  %3 = load i64, i64* %2, align 8, !insn.addr !612
  %4 = inttoptr i64 %3 to i8*, !insn.addr !613
  %5 = load i8, i8* %4, align 1, !insn.addr !613
  %6 = icmp eq i8 %5, 42, !insn.addr !614
  %7 = zext i1 %6 to i64
  %storemerge = add i64 %3, %7
  ret i64 %storemerge, !insn.addr !615
}

define i64 @_ZNK4Base7getNameEv(i64* %result) {
dec_label_pc_3ef0:
  ret i64 ptrtoint ([5 x i8]* @global_var_51a1 to i64), !insn.addr !616
}

define void @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_3f10:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !617
  call void @_ZdlPv(i64* %result), !insn.addr !618
  ret void, !insn.addr !619

; uselistorder directives
  uselistorder void (i64*)* @_ZN4BaseD2Ev, { 3, 2, 4, 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv(i64* %result) {
dec_label_pc_3f40:
  ret i64 ptrtoint ([8 x i8]* @global_var_51a6 to i64), !insn.addr !620
}

define void @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_3f60:
  call void @_ZN7DerivedD2Ev(i64* %result), !insn.addr !621
  call void @_ZdlPv(i64* %result), !insn.addr !622
  ret void, !insn.addr !623

; uselistorder directives
  uselistorder void (i64*)* @_ZN7DerivedD2Ev, { 2, 3, 1, 0 }
}

define void @_ZN5BaseAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3f90:
  store i64 ptrtoint (%vtable_89b0_type* @global_var_89b0 to i64), i64* %result, align 8, !insn.addr !624
  ret void, !insn.addr !625
}

define void @_ZN5BaseBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3fb0:
  store i64 ptrtoint (%vtable_89d8_type* @global_var_89d8 to i64), i64* %result, align 8, !insn.addr !626
  ret void, !insn.addr !627
}

define i64 @_ZN12MultiDerived5funcAEv(i64* %result) {
dec_label_pc_3fd0:
  ret i64 30, !insn.addr !628
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_3fe0:
  call void @_ZN12MultiDerivedD2Ev(i64* %result), !insn.addr !629
  call void @_ZdlPv(i64* %result), !insn.addr !630
  ret void, !insn.addr !631
}

define i64 @_ZN12MultiDerived5funcBEv(i64* %result) {
dec_label_pc_4010:
  ret i64 40, !insn.addr !632
}

define void @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_4020:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !633
  %3 = inttoptr i64 %2 to i64*, !insn.addr !634
  %4 = call i64 @_ZN12MultiDerived5funcBEv(i64* %3), !insn.addr !634
  ret void, !insn.addr !634

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerived5funcBEv, { 1, 0 }
}

define void @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4040:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !635
  %3 = inttoptr i64 %2 to i64*, !insn.addr !636
  call void @_ZN12MultiDerivedD2Ev(i64* %3), !insn.addr !636
  ret void, !insn.addr !636

; uselistorder directives
  uselistorder void (i64*)* @_ZN12MultiDerivedD2Ev, { 3, 2, 1, 0 }
}

define void @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4060:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !637
  %3 = inttoptr i64 %2 to i64*, !insn.addr !638
  call void @_ZN12MultiDerivedD0Ev(i64* %3), !insn.addr !638
  ret void, !insn.addr !638

; uselistorder directives
  uselistorder void (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define i64 @_ZN5BaseA5funcAEv(i64* %result) {
dec_label_pc_4080:
  ret i64 10, !insn.addr !639
}

define void @_ZN5BaseAD2Ev(i64* %result) {
dec_label_pc_4090:
  ret void, !insn.addr !640
}

define void @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_40a0:
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !641
  call void @_ZdlPv(i64* %result), !insn.addr !642
  ret void, !insn.addr !643

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseAD2Ev, { 2, 1, 0 }
}

define i64 @_ZN5BaseB5funcBEv(i64* %result) {
dec_label_pc_40d0:
  ret i64 20, !insn.addr !644
}

define void @_ZN5BaseBD2Ev(i64* %result) {
dec_label_pc_40e0:
  ret void, !insn.addr !645
}

define void @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_40f0:
  call void @_ZN5BaseBD2Ev(i64* %result), !insn.addr !646
  call void @_ZdlPv(i64* %result), !insn.addr !647
  ret void, !insn.addr !648

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseBD2Ev, { 2, 1, 0 }
}

define void @_ZN11VirtualBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4120:
  store i64 ptrtoint (%vtable_8c38_type* @global_var_8c38 to i64), i64* %result, align 8, !insn.addr !649
  ret void, !insn.addr !650
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4140:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !651
  %2 = add i64 %0, 8, !insn.addr !652
  %3 = inttoptr i64 %2 to i64*, !insn.addr !652
  %4 = load i64, i64* %3, align 8, !insn.addr !652
  %5 = add i64 %1, -24, !insn.addr !653
  %6 = inttoptr i64 %5 to i64*, !insn.addr !653
  %7 = load i64, i64* %6, align 8, !insn.addr !653
  %8 = add i64 %7, %1, !insn.addr !654
  %9 = inttoptr i64 %8 to i64*, !insn.addr !654
  store i64 %4, i64* %9, align 8, !insn.addr !654
  ret i64 %1, !insn.addr !655

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4170:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !656
  %2 = add i64 %0, 8, !insn.addr !657
  %3 = inttoptr i64 %2 to i64*, !insn.addr !657
  %4 = load i64, i64* %3, align 8, !insn.addr !657
  %5 = add i64 %1, -24, !insn.addr !658
  %6 = inttoptr i64 %5 to i64*, !insn.addr !658
  %7 = load i64, i64* %6, align 8, !insn.addr !658
  %8 = add i64 %7, %1, !insn.addr !659
  %9 = inttoptr i64 %8 to i64*, !insn.addr !659
  store i64 %4, i64* %9, align 8, !insn.addr !659
  ret i64 %1, !insn.addr !660

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_41a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !661
  %2 = inttoptr i64 %1 to i64*, !insn.addr !661
  %3 = load i64, i64* %2, align 8, !insn.addr !661
  %4 = add i64 %0, 8, !insn.addr !662
  %5 = add i64 %4, %3, !insn.addr !662
  %6 = inttoptr i64 %5 to i32*, !insn.addr !662
  %7 = load i32, i32* %6, align 4, !insn.addr !662
  %8 = add i32 %7, 150, !insn.addr !663
  %9 = zext i32 %8 to i64, !insn.addr !663
  ret i64 %9, !insn.addr !664

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define void @_ZN7MiddleAD1Ev(i64* %result) {
dec_label_pc_41c0:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* inttoptr (i64 36024 to i64*)), !insn.addr !665
  %2 = add i64 %0, 16, !insn.addr !666
  %3 = inttoptr i64 %2 to i64*, !insn.addr !667
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !667
  ret void, !insn.addr !668
}

define void @_ZN7MiddleAD0Ev(i64* %result) {
dec_label_pc_4200:
  call void @_ZN7MiddleAD1Ev(i64* %result), !insn.addr !669
  call void @_ZdlPv(i64* %result), !insn.addr !670
  ret void, !insn.addr !671
}

define void @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_4230:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !672
  %3 = inttoptr i64 %2 to i64*, !insn.addr !672
  %4 = load i64, i64* %3, align 8, !insn.addr !672
  %5 = add i64 %4, %1, !insn.addr !673
  %6 = inttoptr i64 %5 to i64*, !insn.addr !674
  %7 = call i64 @_ZN7MiddleA4funcEv(i64* %6), !insn.addr !674
  ret void, !insn.addr !674

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i64*)* @_ZN7MiddleA4funcEv, { 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_4250:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !675
  %3 = inttoptr i64 %2 to i64*, !insn.addr !675
  %4 = load i64, i64* %3, align 8, !insn.addr !675
  %5 = add i64 %4, %1, !insn.addr !676
  %6 = inttoptr i64 %5 to i64*, !insn.addr !677
  call void @_ZN7MiddleAD1Ev(i64* %6), !insn.addr !677
  ret void, !insn.addr !677

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleAD1Ev, { 3, 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleAD0Ev() local_unnamed_addr {
dec_label_pc_4270:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !678
  %3 = inttoptr i64 %2 to i64*, !insn.addr !678
  %4 = load i64, i64* %3, align 8, !insn.addr !678
  %5 = add i64 %4, %1, !insn.addr !679
  %6 = inttoptr i64 %5 to i64*, !insn.addr !680
  call void @_ZN7MiddleAD0Ev(i64* %6), !insn.addr !680
  ret void, !insn.addr !680

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleAD0Ev, { 2, 0, 1 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_4290:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !681
  %2 = inttoptr i64 %1 to i64*, !insn.addr !681
  %3 = load i64, i64* %2, align 8, !insn.addr !681
  %4 = add i64 %0, 8, !insn.addr !682
  %5 = add i64 %4, %3, !insn.addr !682
  %6 = inttoptr i64 %5 to i32*, !insn.addr !682
  %7 = load i32, i32* %6, align 4, !insn.addr !682
  %8 = add i32 %7, 200, !insn.addr !683
  %9 = zext i32 %8 to i64, !insn.addr !683
  ret i64 %9, !insn.addr !684

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define void @_ZN7MiddleBD1Ev(i64* %result) {
dec_label_pc_42b0:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleBD2Ev(i64* %result, i64* inttoptr (i64 36144 to i64*)), !insn.addr !685
  %2 = add i64 %0, 16, !insn.addr !686
  %3 = inttoptr i64 %2 to i64*, !insn.addr !687
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !687
  ret void, !insn.addr !688
}

define void @_ZN7MiddleBD0Ev(i64* %result) {
dec_label_pc_42f0:
  call void @_ZN7MiddleBD1Ev(i64* %result), !insn.addr !689
  call void @_ZdlPv(i64* %result), !insn.addr !690
  ret void, !insn.addr !691
}

define void @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_4320:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !692
  %3 = inttoptr i64 %2 to i64*, !insn.addr !692
  %4 = load i64, i64* %3, align 8, !insn.addr !692
  %5 = add i64 %4, %1, !insn.addr !693
  %6 = inttoptr i64 %5 to i64*, !insn.addr !694
  %7 = call i64 @_ZN7MiddleB4funcEv(i64* %6), !insn.addr !694
  ret void, !insn.addr !694

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i64*)* @_ZN7MiddleB4funcEv, { 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_4340:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !695
  %3 = inttoptr i64 %2 to i64*, !insn.addr !695
  %4 = load i64, i64* %3, align 8, !insn.addr !695
  %5 = add i64 %4, %1, !insn.addr !696
  %6 = inttoptr i64 %5 to i64*, !insn.addr !697
  call void @_ZN7MiddleBD1Ev(i64* %6), !insn.addr !697
  ret void, !insn.addr !697

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleBD1Ev, { 3, 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleBD0Ev() local_unnamed_addr {
dec_label_pc_4360:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !698
  %3 = inttoptr i64 %2 to i64*, !insn.addr !698
  %4 = load i64, i64* %3, align 8, !insn.addr !698
  %5 = add i64 %4, %1, !insn.addr !699
  %6 = inttoptr i64 %5 to i64*, !insn.addr !700
  call void @_ZN7MiddleBD0Ev(i64* %6), !insn.addr !700
  ret void, !insn.addr !700

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleBD0Ev, { 2, 0, 1 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_4380:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !701
  %2 = inttoptr i64 %1 to i64*, !insn.addr !701
  %3 = load i64, i64* %2, align 8, !insn.addr !701
  %4 = add i64 %0, 8, !insn.addr !702
  %5 = add i64 %4, %3, !insn.addr !702
  %6 = inttoptr i64 %5 to i32*, !insn.addr !702
  %7 = load i32, i32* %6, align 4, !insn.addr !702
  %8 = add i32 %7, 250, !insn.addr !703
  %9 = zext i32 %8 to i64, !insn.addr !703
  ret i64 %9, !insn.addr !704

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_43a0:
  call void @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !705
  call void @_ZdlPv(i64* %result), !insn.addr !706
  ret void, !insn.addr !707
}

define void @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_43d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !708
  %3 = inttoptr i64 %2 to i64*, !insn.addr !709
  %4 = call i64 @_ZN14DiamondDerived4funcEv(i64* %3), !insn.addr !709
  ret void, !insn.addr !709
}

define void @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_43f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !710
  %3 = inttoptr i64 %2 to i64*, !insn.addr !711
  call void @_ZN14DiamondDerivedD1Ev(i64* %3), !insn.addr !711
  ret void, !insn.addr !711
}

define void @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4410:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !712
  %3 = inttoptr i64 %2 to i64*, !insn.addr !713
  call void @_ZN14DiamondDerivedD0Ev(i64* %3), !insn.addr !713
  ret void, !insn.addr !713

; uselistorder directives
  uselistorder i64 -16, { 5, 6, 7, 8, 9, 10, 3, 0, 1, 2, 4 }
}

define void @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_4430:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !714
  %3 = inttoptr i64 %2 to i64*, !insn.addr !714
  %4 = load i64, i64* %3, align 8, !insn.addr !714
  %5 = add i64 %4, %1, !insn.addr !715
  %6 = inttoptr i64 %5 to i64*, !insn.addr !716
  %7 = call i64 @_ZN14DiamondDerived4funcEv(i64* %6), !insn.addr !716
  ret void, !insn.addr !716

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i64*)* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 -24, { 1, 2, 4, 3, 6, 5, 7, 8, 9, 10, 0 }
}

define void @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4450:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !717
  %3 = inttoptr i64 %2 to i64*, !insn.addr !717
  %4 = load i64, i64* %3, align 8, !insn.addr !717
  %5 = add i64 %4, %1, !insn.addr !718
  %6 = inttoptr i64 %5 to i64*, !insn.addr !719
  call void @_ZN14DiamondDerivedD1Ev(i64* %6), !insn.addr !719
  ret void, !insn.addr !719

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN14DiamondDerivedD1Ev, { 4, 3, 2, 1, 0 }
}

define void @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4470:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !720
  %3 = inttoptr i64 %2 to i64*, !insn.addr !720
  %4 = load i64, i64* %3, align 8, !insn.addr !720
  %5 = add i64 %4, %1, !insn.addr !721
  %6 = inttoptr i64 %5 to i64*, !insn.addr !722
  call void @_ZN14DiamondDerivedD0Ev(i64* %6), !insn.addr !722
  ret void, !insn.addr !722

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
  uselistorder i64 -32, { 4, 5, 6, 7, 8, 9, 0, 2, 1, 3 }
}

define i64 @_ZN11VirtualBase4funcEv(i64* %result) {
dec_label_pc_4490:
  ret i64 100, !insn.addr !723
}

define void @_ZN11VirtualBaseD2Ev(i64* %result) {
dec_label_pc_44a0:
  ret void, !insn.addr !724
}

define void @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_44b0:
  call void @_ZN11VirtualBaseD2Ev(i64* %result), !insn.addr !725
  call void @_ZdlPv(i64* %result), !insn.addr !726
  ret void, !insn.addr !727

; uselistorder directives
  uselistorder void (i64*)* @_ZN11VirtualBaseD2Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_44e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !728
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_44f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !729
}

define i64 @_ZN14DiamondDerivedD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4500:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  %2 = add i64 %1, 16, !insn.addr !730
  %3 = add i64 %0, 24, !insn.addr !731
  %4 = inttoptr i64 %2 to i64*, !insn.addr !732
  %5 = inttoptr i64 %3 to i64*, !insn.addr !732
  %6 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* %5), !insn.addr !732
  %7 = add i64 %0, 8, !insn.addr !733
  %8 = inttoptr i64 %7 to i64*, !insn.addr !734
  %9 = call i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %8), !insn.addr !734
  ret i64 %9, !insn.addr !735

; uselistorder directives
  uselistorder i64 8, { 12, 4, 5, 6, 13, 14, 7, 8, 9, 0, 1, 15, 16, 17, 18, 2, 3, 10, 11 }
  uselistorder i64 16, { 3, 0, 1, 4, 5, 6, 2 }
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4550:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !736
  ret void, !insn.addr !737
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4580:
  %0 = bitcast i64* %arg2 to i64**, !insn.addr !738
  %1 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %0), !insn.addr !738
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %1), !insn.addr !739
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !740
  %3 = inttoptr i64 %2 to i64*, !insn.addr !741
  store i64 0, i64* %3, align 8, !insn.addr !741
  ret void, !insn.addr !742
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_45e0:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !743
  ret i64* %0, !insn.addr !743
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_45f0:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2), !insn.addr !744
  ret void, !insn.addr !745
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4620:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !746
  %1 = ptrtoint i64* %0 to i64, !insn.addr !746
  ret i64 %1, !insn.addr !747
}

define i64 @__clang_call_terminate() local_unnamed_addr {
dec_label_pc_4640:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @__cxa_begin_catch(i64 %1), !insn.addr !748
  %3 = call i64 @_ZSt9terminatev(), !insn.addr !749
  ret i64 %3, !insn.addr !749
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4650:
  %0 = ptrtoint i64* %arg2 to i64
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !750
  store i64 %0, i64* %result, align 8, !insn.addr !751
  ret void, !insn.addr !752
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4690:
  ret void, !insn.addr !753
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46a0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !754
  %1 = bitcast i32** %0 to i64*, !insn.addr !755
  ret i64* %1, !insn.addr !755
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_46c0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !756
  %1 = inttoptr i64 %0 to i32**, !insn.addr !757
  ret i32** %1, !insn.addr !757
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46e0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !758
  ret i64 %0, !insn.addr !759
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4700:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !760
}

define void @_ZN8RTTIBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4710:
  store i64 ptrtoint (%vtable_8d78_type* @global_var_8d78 to i64), i64* %result, align 8, !insn.addr !761
  ret void, !insn.addr !762
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_4730:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !763
  ret void, !insn.addr !764
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_4750:
  call void @_ZN12RTTIDerivedAD2Ev(i64* %result), !insn.addr !765
  call void @_ZdlPv(i64* %result), !insn.addr !766
  ret void, !insn.addr !767

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedAD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv(i64* %result) {
dec_label_pc_4780:
  ret i64 1, !insn.addr !768

; uselistorder directives
  uselistorder i64 1, { 1, 0, 2 }
}

define void @_ZN8RTTIBaseD2Ev(i64* %result) {
dec_label_pc_4790:
  ret void, !insn.addr !769
}

define void @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_47a0:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !770
  call void @_ZdlPv(i64* %result), !insn.addr !771
  ret void, !insn.addr !772
}

define i64 @_ZNK8RTTIBase7getTypeEv(i64* %result) {
dec_label_pc_47d0:
  ret i64 0, !insn.addr !773
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_47e0:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !774
  ret void, !insn.addr !775

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseD2Ev, { 3, 2, 1, 0 }
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_4800:
  call void @_ZN12RTTIDerivedBD2Ev(i64* %result), !insn.addr !776
  call void @_ZdlPv(i64* %result), !insn.addr !777
  ret void, !insn.addr !778

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedBD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv(i64* %result) {
dec_label_pc_4830:
  ret i64 2, !insn.addr !779

; uselistorder directives
  uselistorder i64 2, { 0, 1, 2, 4, 3, 5 }
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4840:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2), !insn.addr !780
  ret void, !insn.addr !781
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4870:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !782
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !783
  %2 = inttoptr i64 %1 to i64*, !insn.addr !784
  store i64 %0, i64* %2, align 8, !insn.addr !784
  ret void, !insn.addr !785

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_48b0:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !786
  ret void, !insn.addr !787
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48e0:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !788
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !789
  ret void, !insn.addr !790
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4910:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result), !insn.addr !791
  ret void, !insn.addr !792
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4930:
  store i64 0, i64* %result, align 8, !insn.addr !793
  ret void, !insn.addr !794

; uselistorder directives
  uselistorder i64 0, { 64, 6, 65, 0, 66, 67, 68, 69, 2, 1, 3, 4, 8, 61, 36, 62, 37, 38, 39, 9, 63, 70, 71, 40, 41, 42, 43, 59, 7, 5, 60, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58 }
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4950:
  ret void, !insn.addr !795
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4960:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !796
  ret i64 %0, !insn.addr !797
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4990:
  %rax.0.reg2mem = alloca i64, !insn.addr !798
  %0 = ptrtoint i32* %arg2 to i64
  %1 = icmp eq i32* %arg2, null, !insn.addr !799
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !800
  br i1 %1, label %dec_label_pc_49bb, label %dec_label_pc_49b2, !insn.addr !800

dec_label_pc_49b2:                                ; preds = %dec_label_pc_4990
  %2 = bitcast i32* %arg2 to i64*
  call void @_ZdlPv(i64* %2), !insn.addr !801
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !801
  br label %dec_label_pc_49bb, !insn.addr !801

dec_label_pc_49bb:                                ; preds = %dec_label_pc_49b2, %dec_label_pc_4990
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !802

; uselistorder directives
  uselistorder void (i64*)* @_ZdlPv, { 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 14 }
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_49d0:
  %0 = bitcast i32*** %arg1 to i64*, !insn.addr !803
  ret i64* %0, !insn.addr !803
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_49e0:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !804
  %1 = ptrtoint i64* %0 to i64, !insn.addr !804
  ret i64 %1, !insn.addr !805
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a00:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !806
  ret i64* %0, !insn.addr !807
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a20:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !808
  %1 = inttoptr i64 %0 to i64*, !insn.addr !809
  ret i64* %1, !insn.addr !809
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a40:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1), !insn.addr !810
  ret i64 %0, !insn.addr !811
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a60:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !812
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4a70:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !813
  ret i64 %0, !insn.addr !814
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4aa0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !815
  %1 = load i64, i64* %0, align 8, !insn.addr !816
  ret i64 %1, !insn.addr !817
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4ac0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !818
  %1 = bitcast i32** %0 to i64*, !insn.addr !819
  ret i64* %1, !insn.addr !819
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4ae0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !820
  %1 = inttoptr i64 %0 to i32**, !insn.addr !821
  ret i32** %1, !insn.addr !821
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b00:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !822
  ret i64 %0, !insn.addr !823
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b20:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !824
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4b30:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2), !insn.addr !825
  ret void, !insn.addr !826
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4b60:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !827
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !828
  %2 = inttoptr i64 %1 to i64*, !insn.addr !829
  store i64 %0, i64* %2, align 8, !insn.addr !829
  ret void, !insn.addr !830

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_4ba0:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !831
  ret void, !insn.addr !832
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4bd0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !833
  %1 = ptrtoint i64* %0 to i64, !insn.addr !833
  ret i64 %1, !insn.addr !834
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4bf0:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !835
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !836
  ret void, !insn.addr !837

; uselistorder directives
  uselistorder void (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev, { 1, 0 }
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4c20:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result), !insn.addr !838
  ret void, !insn.addr !839
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4c40:
  ret void, !insn.addr !840
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c50:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !841
  %1 = bitcast i32** %0 to i64*, !insn.addr !842
  ret i64* %1, !insn.addr !842
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c70:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !843
  %1 = inttoptr i64 %0 to i32**, !insn.addr !844
  ret i32** %1, !insn.addr !844
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c90:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !845
  ret i64 %0, !insn.addr !846

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4cb0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !847
  ret i64 %0, !insn.addr !848
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4ce0:
  %rax.0.reg2mem = alloca i64, !insn.addr !849
  %0 = ptrtoint i32* %arg2 to i64
  %1 = icmp eq i32* %arg2, null, !insn.addr !850
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !851
  br i1 %1, label %dec_label_pc_4d0b, label %dec_label_pc_4d02, !insn.addr !851

dec_label_pc_4d02:                                ; preds = %dec_label_pc_4ce0
  %2 = bitcast i32* %arg2 to i64*
  %3 = and i64 %0, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !852
  call void @_ZdaPv(i64* %2, i64* %4), !insn.addr !852
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !852
  br label %dec_label_pc_4d0b, !insn.addr !852

dec_label_pc_4d0b:                                ; preds = %dec_label_pc_4d02, %dec_label_pc_4ce0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !853

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 0, 1, 3, 4, 5, 6, 7, 8, 2 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 3, 0, 1 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4d20:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !854
  %1 = ptrtoint i64* %0 to i64, !insn.addr !854
  ret i64 %1, !insn.addr !855
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d40:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !856
  ret i64* %0, !insn.addr !857
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d60:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !858
  %1 = inttoptr i64 %0 to i64*, !insn.addr !859
  ret i64* %1, !insn.addr !859
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d80:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1), !insn.addr !860
  ret i64 %0, !insn.addr !861
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4da0:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !862
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4db0:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !863
  ret i64 %0, !insn.addr !864
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4de0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !865
  %1 = load i64, i64* %0, align 8, !insn.addr !866
  ret i64 %1, !insn.addr !867
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e00:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !868
  %1 = bitcast i32** %0 to i64*, !insn.addr !869
  ret i64* %1, !insn.addr !869
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e20:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !870
  %1 = inttoptr i64 %0 to i32**, !insn.addr !871
  ret i32** %1, !insn.addr !871
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e40:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !872
  ret i64 %0, !insn.addr !873

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e60:
  %0 = bitcast i64* %arg1 to i32***, !insn.addr !874
  ret i32*** %0, !insn.addr !874
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_4e70:
  %0 = bitcast i32*** %arg2 to i64*, !insn.addr !875
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %0), !insn.addr !875
  %2 = load i32**, i32*** %1, align 8, !insn.addr !876
  %3 = ptrtoint i32** %2 to i64, !insn.addr !876
  store i64 %3, i64* %result, align 8, !insn.addr !877
  ret void, !insn.addr !878

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4ea4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !879

; uselistorder directives
  uselistorder i32 1, { 42, 45, 46, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 47, 48, 1, 85, 0, 49, 86, 23, 50, 44, 87, 88, 22, 51, 21, 61, 20, 89, 19, 52, 54, 53, 18, 17, 16, 60, 56, 55, 15, 14, 13, 12, 11, 10, 9, 84, 66, 65, 64, 63, 62, 68, 67, 70, 69, 72, 71, 59, 75, 74, 73, 43, 8, 77, 76, 7, 58, 78, 6, 5, 4, 3, 80, 79, 81, 82, 2, 83, 57 }
}

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i64 @_Znam(i64) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @_ZSt9terminatev() local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdlPv(i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @__cxa_bad_typeid() local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64*, i64*, i64) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i64 @__asm_movsd.13(i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i64) local_unnamed_addr

declare void @__asm_ucomisd(i128, i64) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 8240}
!7 = !{i64 8256}
!8 = !{i64 8272}
!9 = !{i64 8288}
!10 = !{i64 8304}
!11 = !{i64 8320}
!12 = !{i64 8336}
!13 = !{i64 8352}
!14 = !{i64 8368}
!15 = !{i64 8384}
!16 = !{i64 8400}
!17 = !{i64 8416}
!18 = !{i64 8432}
!19 = !{i64 8448}
!20 = !{i64 8464}
!21 = !{i64 8480}
!22 = !{i64 8496}
!23 = !{i64 8512}
!24 = !{i64 8528}
!25 = !{i64 8544}
!26 = !{i64 8560}
!27 = !{i64 8587}
!28 = !{i64 8592}
!29 = !{i64 8613}
!30 = !{i64 8619}
!31 = !{i64 8628}
!32 = !{i64 8634}
!33 = !{i64 8671}
!34 = !{i64 8677}
!35 = !{i64 8728}
!36 = !{i64 8792}
!37 = !{i64 8804}
!38 = !{i64 8811}
!39 = !{i64 8814}
!40 = !{i64 8825}
!41 = !{i64 8827}
!42 = !{i64 8834}
!43 = !{i64 8839}
!44 = !{i64 8844}
!45 = !{i64 8852}
!46 = !{i64 8856}
!47 = !{i64 8868}
!48 = !{i64 8904}
!49 = !{i64 8918}
!50 = !{i64 8927}
!51 = !{i64 8932}
!52 = !{i64 8944}
!53 = !{i64 8949}
!54 = !{i64 8952}
!55 = !{i64 8957}
!56 = !{i64 8963}
!57 = !{i64 8966}
!58 = !{i64 8974}
!59 = !{i64 9004}
!60 = !{i64 9018}
!61 = !{i64 9023}
!62 = !{i64 9042}
!63 = !{i64 9047}
!64 = !{i64 9058}
!65 = !{i64 9068}
!66 = !{i64 9073}
!67 = !{i64 9078}
!68 = !{i64 9084}
!69 = !{i64 9098}
!70 = !{i64 9168}
!71 = !{i64 9196}
!72 = !{i64 9210}
!73 = !{i64 9229}
!74 = !{i64 9234}
!75 = !{i64 9257}
!76 = !{i64 9262}
!77 = !{i64 9301}
!78 = !{i64 9329}
!79 = !{i64 9351}
!80 = !{i64 9354}
!81 = !{i64 9357}
!82 = !{i64 9367}
!83 = !{i64 9376}
!84 = !{i64 9389}
!85 = !{i64 9393}
!86 = !{i64 9395}
!87 = !{i64 9399}
!88 = !{i64 9402}
!89 = !{i64 9410}
!90 = !{i64 9412}
!91 = !{i64 9416}
!92 = !{i64 9419}
!93 = !{i64 9423}
!94 = !{i64 9428}
!95 = !{i64 9432}
!96 = !{i64 9437}
!97 = !{i64 9441}
!98 = !{i64 9446}
!99 = !{i64 9468}
!100 = !{i64 9539}
!101 = !{i64 9542}
!102 = !{i64 9547}
!103 = !{i64 9568}
!104 = !{i64 9573}
!105 = !{i64 9614}
!106 = !{i64 9617}
!107 = !{i64 9627}
!108 = !{i64 9640}
!109 = !{i64 9670}
!110 = !{i64 9681}
!111 = !{i64 9692}
!112 = !{i64 9697}
!113 = !{i64 9701}
!114 = !{i64 9705}
!115 = !{i64 9733}
!116 = !{i64 9737}
!117 = !{i64 9741}
!118 = !{i64 9745}
!119 = !{i64 9764}
!120 = !{i64 9767}
!121 = !{i64 9772}
!122 = !{i64 9794}
!123 = !{i64 9806}
!124 = !{i64 9809}
!125 = !{i64 9814}
!126 = !{i64 9831}
!127 = !{i64 9841}
!128 = !{i64 9854}
!129 = !{i64 9881}
!130 = !{i64 9910}
!131 = !{i64 9929}
!132 = !{i64 9942}
!133 = !{i64 9947}
!134 = !{i64 9959}
!135 = !{i64 9973}
!136 = !{i64 9978}
!137 = !{i64 9981}
!138 = !{i64 9995}
!139 = !{i64 9999}
!140 = !{i64 10002}
!141 = !{i64 10009}
!142 = !{i64 10034}
!143 = !{i64 10042}
!144 = !{i64 10050}
!145 = !{i64 10058}
!146 = !{i64 10063}
!147 = !{i64 10068}
!148 = !{i64 10075}
!149 = !{i64 10090}
!150 = !{i64 10098}
!151 = !{i64 10103}
!152 = !{i64 10105}
!153 = !{i64 10108}
!154 = !{i64 10116}
!155 = !{i64 10143}
!156 = !{i64 10157}
!157 = !{i64 10171}
!158 = !{i64 10185}
!159 = !{i64 10196}
!160 = !{i64 10201}
!161 = !{i64 10208}
!162 = !{i64 10213}
!163 = !{i64 10223}
!164 = !{i64 10228}
!165 = !{i64 10235}
!166 = !{i64 10243}
!167 = !{i64 10257}
!168 = !{i64 10262}
!169 = !{i64 10273}
!170 = !{i64 10276}
!171 = !{i64 10284}
!172 = !{i64 10294}
!173 = !{i64 10329}
!174 = !{i64 10349}
!175 = !{i64 10371}
!176 = !{i64 10382}
!177 = !{i64 10390}
!178 = !{i64 10415}
!179 = !{i64 10419}
!180 = !{i64 10421}
!181 = !{i64 10424}
!182 = !{i64 10439}
!183 = !{i64 10465}
!184 = !{i64 10469}
!185 = !{i64 10500}
!186 = !{i64 10508}
!187 = !{i64 10514}
!188 = !{i64 10525}
!189 = !{i64 10822}
!190 = !{i64 10848}
!191 = !{i64 10856}
!192 = !{i64 10870}
!193 = !{i64 10879}
!194 = !{i64 10884}
!195 = !{i64 10897}
!196 = !{i64 10907}
!197 = !{i64 10923}
!198 = !{i64 10932}
!199 = !{i64 10937}
!200 = !{i64 10950}
!201 = !{i64 10960}
!202 = !{i64 10965}
!203 = !{i64 10978}
!204 = !{i64 10984}
!205 = !{i64 10991}
!206 = !{i64 10998}
!207 = !{i64 11005}
!208 = !{i64 11020}
!209 = !{i64 11034}
!210 = !{i64 11039}
!211 = !{i64 11052}
!212 = !{i64 11062}
!213 = !{i64 11067}
!214 = !{i64 11086}
!215 = !{i64 11107}
!216 = !{i64 11119}
!217 = !{i64 11124}
!218 = !{i64 11143}
!219 = !{i64 11151}
!220 = !{i64 11154}
!221 = !{i64 11167}
!222 = !{i64 11176}
!223 = !{i64 11185}
!224 = !{i64 11194}
!225 = !{i64 11213}
!226 = !{i64 11217}
!227 = !{i64 11219}
!228 = !{i64 11223}
!229 = !{i64 11226}
!230 = !{i64 11234}
!231 = !{i64 11236}
!232 = !{i64 11240}
!233 = !{i64 11243}
!234 = !{i64 11251}
!235 = !{i64 11253}
!236 = !{i64 11257}
!237 = !{i64 11260}
!238 = !{i64 11268}
!239 = !{i64 11270}
!240 = !{i64 11274}
!241 = !{i64 11277}
!242 = !{i64 11281}
!243 = !{i64 11286}
!244 = !{i64 11290}
!245 = !{i64 11295}
!246 = !{i64 11299}
!247 = !{i64 11304}
!248 = !{i64 11308}
!249 = !{i64 11313}
!250 = !{i64 11317}
!251 = !{i64 11322}
!252 = !{i64 11360}
!253 = !{i64 11375}
!254 = !{i64 11421}
!255 = !{i64 11431}
!256 = !{i64 11460}
!257 = !{i64 11486}
!258 = !{i64 11490}
!259 = !{i64 11478}
!260 = !{i64 11500}
!261 = !{i64 11513}
!262 = !{i64 11522}
!263 = !{i64 11525}
!264 = !{i64 11535}
!265 = !{i64 11544}
!266 = !{i64 11556}
!267 = !{i64 11568}
!268 = !{i64 11584}
!269 = !{i64 11603}
!270 = !{i64 11612}
!271 = !{i64 11630}
!272 = !{i64 11649}
!273 = !{i64 11658}
!274 = !{i64 11686}
!275 = !{i64 11690}
!276 = !{i64 11696}
!277 = !{i64 11705}
!278 = !{i64 11708}
!279 = !{i64 11719}
!280 = !{i64 11754}
!281 = !{i64 11758}
!282 = !{i64 11764}
!283 = !{i64 11724}
!284 = !{i64 11726}
!285 = !{i64 11773}
!286 = !{i64 11776}
!287 = !{i64 11787}
!288 = !{i64 11792}
!289 = !{i64 11794}
!290 = !{i64 11826}
!291 = !{i64 11854}
!292 = !{i64 11887}
!293 = !{i64 11892}
!294 = !{i64 11902}
!295 = !{i64 11907}
!296 = !{i64 11910}
!297 = !{i64 11925}
!298 = !{i64 11953}
!299 = !{i64 11986}
!300 = !{i64 11991}
!301 = !{i64 12001}
!302 = !{i64 12006}
!303 = !{i64 12009}
!304 = !{i64 12024}
!305 = !{i64 12030}
!306 = !{i64 12039}
!307 = !{i64 12042}
!308 = !{i64 12046}
!309 = !{i64 12054}
!310 = !{i64 12066}
!311 = !{i64 12139}
!312 = !{i64 12157}
!313 = !{i64 12162}
!314 = !{i64 12178}
!315 = !{i64 12183}
!316 = !{i64 12199}
!317 = !{i64 12204}
!318 = !{i64 12220}
!319 = !{i64 12225}
!320 = !{i64 12241}
!321 = !{i64 12246}
!322 = !{i64 12262}
!323 = !{i64 12267}
!324 = !{i64 12283}
!325 = !{i64 12288}
!326 = !{i64 12304}
!327 = !{i64 12309}
!328 = !{i64 12325}
!329 = !{i64 12330}
!330 = !{i64 12346}
!331 = !{i64 12351}
!332 = !{i64 12367}
!333 = !{i64 12372}
!334 = !{i64 12388}
!335 = !{i64 12393}
!336 = !{i64 12409}
!337 = !{i64 12415}
!338 = !{i64 12431}
!339 = !{i64 12443}
!340 = !{i64 12480}
!341 = !{i64 12490}
!342 = !{i64 12508}
!343 = !{i64 12528}
!344 = !{i64 12544}
!345 = !{i64 12554}
!346 = !{i64 12573}
!347 = !{i64 12608}
!348 = !{i64 12621}
!349 = !{i64 12637}
!350 = !{i64 12652}
!351 = !{i64 12657}
!352 = !{i64 12708}
!353 = !{i64 12720}
!354 = !{i64 12737}
!355 = !{i64 12749}
!356 = !{i64 12759}
!357 = !{i64 12792}
!358 = !{i64 12802}
!359 = !{i64 12829}
!360 = !{i64 12848}
!361 = !{i64 12858}
!362 = !{i64 12880}
!363 = !{i64 12903}
!364 = !{i64 12932}
!365 = !{i64 12946}
!366 = !{i64 12950}
!367 = !{i64 12960}
!368 = !{i64 12970}
!369 = !{i64 12992}
!370 = !{i64 13002}
!371 = !{i64 13024}
!372 = !{i64 13034}
!373 = !{i64 13056}
!374 = !{i64 13066}
!375 = !{i64 13088}
!376 = !{i64 13098}
!377 = !{i64 13120}
!378 = !{i64 13130}
!379 = !{i64 13152}
!380 = !{i64 13162}
!381 = !{i64 13184}
!382 = !{i64 13194}
!383 = !{i64 13213}
!384 = !{i64 13232}
!385 = !{i64 13255}
!386 = !{i64 13280}
!387 = !{i64 13285}
!388 = !{i64 13293}
!389 = !{i64 13312}
!390 = !{i64 13322}
!391 = !{i64 13344}
!392 = !{i64 13354}
!393 = !{i64 13376}
!394 = !{i64 13386}
!395 = !{i64 13422}
!396 = !{i64 13424}
!397 = !{i64 13437}
!398 = !{i64 13446}
!399 = !{i64 13455}
!400 = !{i64 13474}
!401 = !{i64 13477}
!402 = !{i64 13500}
!403 = !{i64 13503}
!404 = !{i64 13525}
!405 = !{i64 13529}
!406 = !{i64 13535}
!407 = !{i64 13539}
!408 = !{i64 13551}
!409 = !{i64 13559}
!410 = !{i64 13578}
!411 = !{i64 13584}
!412 = !{i64 13612}
!413 = !{i64 13625}
!414 = !{i64 13641}
!415 = !{i64 13645}
!416 = !{i64 13657}
!417 = !{i64 13672}
!418 = !{i64 13676}
!419 = !{i64 13686}
!420 = !{i64 13700}
!421 = !{i64 13707}
!422 = !{i64 13729}
!423 = !{i64 13740}
!424 = !{i64 13744}
!425 = !{i64 13768}
!426 = !{i64 13772}
!427 = !{i64 13789}
!428 = !{i64 13795}
!429 = !{i64 13817}
!430 = !{i64 13828}
!431 = !{i64 13835}
!432 = !{i64 13863}
!433 = !{i64 13867}
!434 = !{i64 13877}
!435 = !{i64 13891}
!436 = !{i64 13902}
!437 = !{i64 13927}
!438 = !{i64 13931}
!439 = !{i64 13959}
!440 = !{i64 13979}
!441 = !{i64 13985}
!442 = !{i64 13993}
!443 = !{i64 14014}
!444 = !{i64 14018}
!445 = !{i64 14050}
!446 = !{i64 14055}
!447 = !{i64 14080}
!448 = !{i64 14090}
!449 = !{i64 14105}
!450 = !{i64 14132}
!451 = !{i64 14141}
!452 = !{i64 14145}
!453 = !{i64 14165}
!454 = !{i64 14179}
!455 = !{i64 14188}
!456 = !{i64 14212}
!457 = !{i64 14216}
!458 = !{i64 14225}
!459 = !{i64 14235}
!460 = !{i64 14260}
!461 = !{i64 14264}
!462 = !{i64 14284}
!463 = !{i64 14293}
!464 = !{i64 14308}
!465 = !{i64 14328}
!466 = !{i64 14345}
!467 = !{i64 14360}
!468 = !{i64 14369}
!469 = !{i64 14411}
!470 = !{i64 14420}
!471 = !{i64 14424}
!472 = !{i64 14434}
!473 = !{i64 14469}
!474 = !{i64 14474}
!475 = !{i64 14478}
!476 = !{i64 14506}
!477 = !{i64 14508}
!478 = !{i64 14515}
!479 = !{i64 14522}
!480 = !{i64 14527}
!481 = !{i64 14536}
!482 = !{i64 14544}
!483 = !{i64 14572}
!484 = !{i64 14577}
!485 = !{i64 14587}
!486 = !{i64 14594}
!487 = !{i64 14600}
!488 = !{i64 14612}
!489 = !{i64 14638}
!490 = !{i64 14641}
!491 = !{i64 14643}
!492 = !{i64 14646}
!493 = !{i64 14649}
!494 = !{i64 14653}
!495 = !{i64 14672}
!496 = !{i64 14699}
!497 = !{i64 14704}
!498 = !{i64 14708}
!499 = !{i64 14713}
!500 = !{i64 14718}
!501 = !{i64 14723}
!502 = !{i64 14728}
!503 = !{i64 14734}
!504 = !{i64 14739}
!505 = !{i64 14744}
!506 = !{i64 14749}
!507 = !{i64 14754}
!508 = !{i64 14759}
!509 = !{i64 14765}
!510 = !{i64 14799}
!511 = !{i64 14808}
!512 = !{i64 14811}
!513 = !{i64 14828}
!514 = !{i64 14836}
!515 = !{i64 14867}
!516 = !{i64 14871}
!517 = !{i64 14889}
!518 = !{i64 14892}
!519 = !{i64 14895}
!520 = !{i64 14898}
!521 = !{i64 14902}
!522 = !{i64 14912}
!523 = !{i64 14931}
!524 = !{i64 14935}
!525 = !{i64 14948}
!526 = !{i64 14951}
!527 = !{i64 14961}
!528 = !{i64 14965}
!529 = !{i64 14971}
!530 = !{i64 14987}
!531 = !{i64 15004}
!532 = !{i64 15008}
!533 = !{i64 15036}
!534 = !{i64 15044}
!535 = !{i64 15064}
!536 = !{i64 15077}
!537 = !{i64 15081}
!538 = !{i64 15091}
!539 = !{i64 15096}
!540 = !{i64 15101}
!541 = !{i64 15104}
!542 = !{i64 15107}
!543 = !{i64 15110}
!544 = !{i64 15116}
!545 = !{i64 15120}
!546 = !{i64 15139}
!547 = !{i64 15143}
!548 = !{i64 15156}
!549 = !{i64 15159}
!550 = !{i64 15169}
!551 = !{i64 15173}
!552 = !{i64 15178}
!553 = !{i64 15183}
!554 = !{i64 15188}
!555 = !{i64 15191}
!556 = !{i64 15196}
!557 = !{i64 15202}
!558 = !{i64 15228}
!559 = !{i64 15232}
!560 = !{i64 15272}
!561 = !{i64 15287}
!562 = !{i64 15325}
!563 = !{i64 15335}
!564 = !{i64 15357}
!565 = !{i64 15384}
!566 = !{i64 15394}
!567 = !{i64 15432}
!568 = !{i64 15447}
!569 = !{i64 15489}
!570 = !{i64 15498}
!571 = !{i64 15502}
!572 = !{i64 15510}
!573 = !{i64 15540}
!574 = !{i64 15553}
!575 = !{i64 15557}
!576 = !{i64 15567}
!577 = !{i64 15579}
!578 = !{i64 15582}
!579 = !{i64 15592}
!580 = !{i64 15601}
!581 = !{i64 15613}
!582 = !{i64 15652}
!583 = !{i64 15665}
!584 = !{i64 15669}
!585 = !{i64 15657}
!586 = !{i64 15679}
!587 = !{i64 15692}
!588 = !{i64 15701}
!589 = !{i64 15704}
!590 = !{i64 15714}
!591 = !{i64 15723}
!592 = !{i64 15735}
!593 = !{i64 15764}
!594 = !{i64 15784}
!595 = !{i64 15792}
!596 = !{i64 15828}
!597 = !{i64 15848}
!598 = !{i64 15856}
!599 = !{i64 15872}
!600 = !{i64 15896}
!601 = !{i64 15906}
!602 = !{i64 15913}
!603 = !{i64 15927}
!604 = !{i64 15932}
!605 = !{i64 15938}
!606 = !{i64 15960}
!607 = !{i64 15965}
!608 = !{i64 15971}
!609 = !{i64 15993}
!610 = !{i64 16014}
!611 = !{i64 16030}
!612 = !{i64 16048}
!613 = !{i64 16052}
!614 = !{i64 16055}
!615 = !{i64 16102}
!616 = !{i64 16128}
!617 = !{i64 16164}
!618 = !{i64 16173}
!619 = !{i64 16183}
!620 = !{i64 16208}
!621 = !{i64 16244}
!622 = !{i64 16253}
!623 = !{i64 16263}
!624 = !{i64 16295}
!625 = !{i64 16299}
!626 = !{i64 16327}
!627 = !{i64 16331}
!628 = !{i64 16350}
!629 = !{i64 16372}
!630 = !{i64 16381}
!631 = !{i64 16391}
!632 = !{i64 16414}
!633 = !{i64 16428}
!634 = !{i64 16433}
!635 = !{i64 16460}
!636 = !{i64 16465}
!637 = !{i64 16492}
!638 = !{i64 16497}
!639 = !{i64 16526}
!640 = !{i64 16537}
!641 = !{i64 16564}
!642 = !{i64 16573}
!643 = !{i64 16583}
!644 = !{i64 16606}
!645 = !{i64 16617}
!646 = !{i64 16644}
!647 = !{i64 16653}
!648 = !{i64 16663}
!649 = !{i64 16695}
!650 = !{i64 16699}
!651 = !{i64 16727}
!652 = !{i64 16730}
!653 = !{i64 16737}
!654 = !{i64 16741}
!655 = !{i64 16746}
!656 = !{i64 16775}
!657 = !{i64 16778}
!658 = !{i64 16785}
!659 = !{i64 16789}
!660 = !{i64 16794}
!661 = !{i64 16815}
!662 = !{i64 16819}
!663 = !{i64 16823}
!664 = !{i64 16829}
!665 = !{i64 16859}
!666 = !{i64 16868}
!667 = !{i64 16872}
!668 = !{i64 16882}
!669 = !{i64 16916}
!670 = !{i64 16925}
!671 = !{i64 16935}
!672 = !{i64 16959}
!673 = !{i64 16963}
!674 = !{i64 16967}
!675 = !{i64 16991}
!676 = !{i64 16995}
!677 = !{i64 16999}
!678 = !{i64 17023}
!679 = !{i64 17027}
!680 = !{i64 17031}
!681 = !{i64 17055}
!682 = !{i64 17059}
!683 = !{i64 17063}
!684 = !{i64 17069}
!685 = !{i64 17099}
!686 = !{i64 17108}
!687 = !{i64 17112}
!688 = !{i64 17122}
!689 = !{i64 17156}
!690 = !{i64 17165}
!691 = !{i64 17175}
!692 = !{i64 17199}
!693 = !{i64 17203}
!694 = !{i64 17207}
!695 = !{i64 17231}
!696 = !{i64 17235}
!697 = !{i64 17239}
!698 = !{i64 17263}
!699 = !{i64 17267}
!700 = !{i64 17271}
!701 = !{i64 17295}
!702 = !{i64 17299}
!703 = !{i64 17303}
!704 = !{i64 17309}
!705 = !{i64 17332}
!706 = !{i64 17341}
!707 = !{i64 17351}
!708 = !{i64 17372}
!709 = !{i64 17377}
!710 = !{i64 17404}
!711 = !{i64 17409}
!712 = !{i64 17436}
!713 = !{i64 17441}
!714 = !{i64 17471}
!715 = !{i64 17475}
!716 = !{i64 17479}
!717 = !{i64 17503}
!718 = !{i64 17507}
!719 = !{i64 17511}
!720 = !{i64 17535}
!721 = !{i64 17539}
!722 = !{i64 17543}
!723 = !{i64 17566}
!724 = !{i64 17577}
!725 = !{i64 17604}
!726 = !{i64 17613}
!727 = !{i64 17623}
!728 = !{i64 17645}
!729 = !{i64 17661}
!730 = !{i64 17696}
!731 = !{i64 17700}
!732 = !{i64 17704}
!733 = !{i64 17717}
!734 = !{i64 17721}
!735 = !{i64 17731}
!736 = !{i64 17768}
!737 = !{i64 17778}
!738 = !{i64 17820}
!739 = !{i64 17832}
!740 = !{i64 17841}
!741 = !{i64 17859}
!742 = !{i64 17871}
!743 = !{i64 17901}
!744 = !{i64 17928}
!745 = !{i64 17938}
!746 = !{i64 17968}
!747 = !{i64 17978}
!748 = !{i64 17985}
!749 = !{i64 17990}
!750 = !{i64 18028}
!751 = !{i64 18044}
!752 = !{i64 18052}
!753 = !{i64 18077}
!754 = !{i64 18096}
!755 = !{i64 18106}
!756 = !{i64 18128}
!757 = !{i64 18138}
!758 = !{i64 18160}
!759 = !{i64 18170}
!760 = !{i64 18189}
!761 = !{i64 18215}
!762 = !{i64 18219}
!763 = !{i64 18240}
!764 = !{i64 18250}
!765 = !{i64 18276}
!766 = !{i64 18285}
!767 = !{i64 18295}
!768 = !{i64 18318}
!769 = !{i64 18329}
!770 = !{i64 18356}
!771 = !{i64 18365}
!772 = !{i64 18375}
!773 = !{i64 18395}
!774 = !{i64 18416}
!775 = !{i64 18426}
!776 = !{i64 18452}
!777 = !{i64 18461}
!778 = !{i64 18471}
!779 = !{i64 18494}
!780 = !{i64 18520}
!781 = !{i64 18530}
!782 = !{i64 18568}
!783 = !{i64 18585}
!784 = !{i64 18594}
!785 = !{i64 18602}
!786 = !{i64 18624}
!787 = !{i64 18639}
!788 = !{i64 18676}
!789 = !{i64 18685}
!790 = !{i64 18695}
!791 = !{i64 18720}
!792 = !{i64 18730}
!793 = !{i64 18748}
!794 = !{i64 18756}
!795 = !{i64 18777}
!796 = !{i64 18800}
!797 = !{i64 18823}
!798 = !{i64 18832}
!799 = !{i64 18856}
!800 = !{i64 18860}
!801 = !{i64 18870}
!802 = !{i64 18880}
!803 = !{i64 18909}
!804 = !{i64 18928}
!805 = !{i64 18938}
!806 = !{i64 18960}
!807 = !{i64 18970}
!808 = !{i64 18992}
!809 = !{i64 19002}
!810 = !{i64 19024}
!811 = !{i64 19034}
!812 = !{i64 19053}
!813 = !{i64 19072}
!814 = !{i64 19095}
!815 = !{i64 19120}
!816 = !{i64 19125}
!817 = !{i64 19133}
!818 = !{i64 19152}
!819 = !{i64 19162}
!820 = !{i64 19184}
!821 = !{i64 19194}
!822 = !{i64 19216}
!823 = !{i64 19226}
!824 = !{i64 19245}
!825 = !{i64 19272}
!826 = !{i64 19282}
!827 = !{i64 19320}
!828 = !{i64 19337}
!829 = !{i64 19346}
!830 = !{i64 19354}
!831 = !{i64 19376}
!832 = !{i64 19391}
!833 = !{i64 19424}
!834 = !{i64 19434}
!835 = !{i64 19460}
!836 = !{i64 19469}
!837 = !{i64 19479}
!838 = !{i64 19504}
!839 = !{i64 19514}
!840 = !{i64 19529}
!841 = !{i64 19552}
!842 = !{i64 19562}
!843 = !{i64 19584}
!844 = !{i64 19594}
!845 = !{i64 19616}
!846 = !{i64 19626}
!847 = !{i64 19648}
!848 = !{i64 19671}
!849 = !{i64 19680}
!850 = !{i64 19704}
!851 = !{i64 19708}
!852 = !{i64 19718}
!853 = !{i64 19728}
!854 = !{i64 19760}
!855 = !{i64 19770}
!856 = !{i64 19792}
!857 = !{i64 19802}
!858 = !{i64 19824}
!859 = !{i64 19834}
!860 = !{i64 19856}
!861 = !{i64 19866}
!862 = !{i64 19885}
!863 = !{i64 19904}
!864 = !{i64 19927}
!865 = !{i64 19952}
!866 = !{i64 19957}
!867 = !{i64 19965}
!868 = !{i64 19984}
!869 = !{i64 19994}
!870 = !{i64 20016}
!871 = !{i64 20026}
!872 = !{i64 20048}
!873 = !{i64 20058}
!874 = !{i64 20077}
!875 = !{i64 20108}
!876 = !{i64 20120}
!877 = !{i64 20123}
!878 = !{i64 20131}
!879 = !{i64 20144}
