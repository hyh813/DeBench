source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_8878_type = type { i64 (i64*, i32)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_88b8_type = type { i64 (i64*, i32)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8900_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_89b0_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_89d8_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8a08_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8ad8_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8b78_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8c38_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8c68_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8ce0_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8d50_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8d78_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8da0_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
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
@global_var_8878 = global %vtable_8878_type { i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 (i64*)* @_ZNK4Base7getNameEv, i64 (i64*)* @_ZN4BaseD2Ev, i64 (i64*)* @_ZN4BaseD0Ev }
@global_var_88b8 = global %vtable_88b8_type { i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 (i64*)* @_ZNK7Derived7getNameEv, i64 (i64*)* @_ZN7DerivedD2Ev, i64 (i64*)* @_ZN7DerivedD0Ev }
@global_var_8900 = global %vtable_8900_type { i64 (i64*)* @_ZN12MultiDerived5funcAEv, i64 (i64*)* @_ZN12MultiDerivedD2Ev, i64 (i64*)* @_ZN12MultiDerivedD0Ev, i64 (i64*)* @_ZN12MultiDerived5funcBEv }
@global_var_89b0 = global %vtable_89b0_type { i64 (i64*)* @_ZN5BaseA5funcAEv, i64 (i64*)* @_ZN5BaseAD2Ev, i64 (i64*)* @_ZN5BaseAD0Ev }
@global_var_89d8 = global %vtable_89d8_type { i64 (i64*)* @_ZN5BaseB5funcBEv, i64 (i64*)* @_ZN5BaseBD2Ev, i64 (i64*)* @_ZN5BaseBD0Ev }
@global_var_8a08 = global %vtable_8a08_type { i64 (i64*)* @_ZN14DiamondDerived4funcEv, i64 (i64*)* @_ZN14DiamondDerivedD1Ev, i64 (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_8ad8 = local_unnamed_addr global %vtable_8ad8_type { i64 (i64*)* @_ZN7MiddleA4funcEv, i64 (i64*)* @_ZN7MiddleAD1Ev, i64 (i64*)* @_ZN7MiddleAD0Ev }
@global_var_8b78 = local_unnamed_addr global %vtable_8b78_type { i64 (i64*)* @_ZN7MiddleB4funcEv, i64 (i64*)* @_ZN7MiddleBD1Ev, i64 (i64*)* @_ZN7MiddleBD0Ev }
@global_var_8c38 = global %vtable_8c38_type { i64 (i64*)* @_ZN11VirtualBase4funcEv, i64 (i64*)* @_ZN11VirtualBaseD2Ev, i64 (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_8c68 = local_unnamed_addr global %vtable_8c68_type { i64 (i64*)* @_ZN7MiddleA4funcEv, i64 (i64*)* @_ZN7MiddleAD1Ev, i64 (i64*)* @_ZN7MiddleAD0Ev }
@global_var_8ce0 = local_unnamed_addr global %vtable_8ce0_type { i64 (i64*)* @_ZN7MiddleB4funcEv, i64 (i64*)* @_ZN7MiddleBD1Ev, i64 (i64*)* @_ZN7MiddleBD0Ev }
@global_var_8d50 = global %vtable_8d50_type { i64 (i64*)* @_ZN12RTTIDerivedAD2Ev, i64 (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_8d78 = global %vtable_8d78_type { i64 (i64*)* @_ZN8RTTIBaseD2Ev, i64 (i64*)* @_ZN8RTTIBaseD0Ev, i64 (i64*)* @_ZNK8RTTIBase7getTypeEv }
@global_var_8da0 = global %vtable_8da0_type { i64 (i64*)* @_ZN12RTTIDerivedBD2Ev, i64 (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedB7getTypeEv }

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

define i64 @__cxx_global_var_init() local_unnamed_addr {
dec_label_pc_2180:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !27
  %1 = load void (i64*)*, void (i64*)** @global_var_8ff8, align 8, !insn.addr !28
  %2 = call i32 @__cxa_atexit(void (i64*)* %1, i64* nonnull @global_var_90ec, i64* inttoptr (i64 37056 to i64*)), !insn.addr !29
  %3 = sext i32 %2 to i64, !insn.addr !29
  ret i64 %3, !insn.addr !30
}

define i64 @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_21b0:
  %0 = call i64 @__cxx_global_var_init(), !insn.addr !31
  ret i64 %0, !insn.addr !32
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

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_22b0:
  %stack_var_-48 = alloca i64, align 8
  %0 = call i64 @_ZN11SimpleClassC2EiPKc(i64* nonnull %stack_var_-48, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5020, i64 0, i64 0)), !insn.addr !48
  %1 = call i64 @_ZN11SimpleClass8setValueEi(i64* nonnull %stack_var_-48, i32 10), !insn.addr !49
  %2 = call i64 @_ZNK11SimpleClass8getValueEv(i64* nonnull %stack_var_-48), !insn.addr !50
  %3 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %stack_var_-48, i32 3), !insn.addr !51
  %4 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !52
  %5 = add i64 %3, %2, !insn.addr !53
  %6 = add i64 %5, %4, !insn.addr !54
  %7 = and i64 %6, 4294967295, !insn.addr !54
  ret i64 %7, !insn.addr !55
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_2310:
  %stack_var_-32 = alloca i64, align 8
  %0 = call i64 @_ZN14LifecycleClassC2Em(i64* nonnull %stack_var_-32, i64 5), !insn.addr !56
  %1 = call i64 @_ZNK14LifecycleClass7getDataEm(i64* nonnull %stack_var_-32, i64 2), !insn.addr !57
  %2 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !58
  %3 = add i64 %2, %1, !insn.addr !59
  %4 = call i64 @_ZN14LifecycleClassD2Ev(i64* nonnull %stack_var_-32), !insn.addr !60
  %5 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !61
  %6 = mul i64 %5, zext (i32 ptrtoint (i32* @global_var_3e8 to i32) to i64), !insn.addr !62
  %7 = add i64 %3, %6, !insn.addr !63
  %8 = and i64 %7, 4294967295, !insn.addr !64
  ret i64 %8, !insn.addr !65

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_23b0:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !66
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_23e0:
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %0 = call i64 @_ZN4BaseC2Ev(i64* nonnull %stack_var_-16), !insn.addr !67
  %1 = call i64 @_ZN7DerivedC2Ei(i64* nonnull %stack_var_-32, i32 3), !insn.addr !68
  %2 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %stack_var_-16, i32 5), !insn.addr !69
  %3 = call i64 @_ZN7Derived12virtual_funcEi(i64* nonnull %stack_var_-32, i32 5), !insn.addr !70
  %4 = call i64 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-16, i32 5), !insn.addr !71
  %5 = call i64 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-32, i32 5), !insn.addr !72
  %6 = add i64 %3, %2, !insn.addr !73
  %7 = add i64 %6, %4, !insn.addr !74
  %8 = add i64 %7, %5, !insn.addr !75
  %9 = call i64 @_ZN7DerivedD2Ev(i64* nonnull %stack_var_-32), !insn.addr !76
  %10 = call i64 @_ZN4BaseD2Ev(i64* nonnull %stack_var_-16), !insn.addr !77
  %11 = and i64 %8, 4294967295, !insn.addr !78
  ret i64 %11, !insn.addr !79

; uselistorder directives
  uselistorder i64* %stack_var_-32, { 1, 0, 2, 3 }
  uselistorder i64 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @function_24ae(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_24ae:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !80
  %3 = add i64 %1, -32, !insn.addr !81
  %4 = inttoptr i64 %3 to i64*, !insn.addr !81
  %5 = add i64 %1, -36, !insn.addr !82
  %6 = inttoptr i64 %5 to i32*, !insn.addr !82
  store i32 %2, i32* %6, align 4, !insn.addr !82
  %7 = call i64 @function_24d4(), !insn.addr !83
  ret i64 %7, !insn.addr !83

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_24bf(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_24bf:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !84
  %3 = add i64 %1, -32, !insn.addr !85
  %4 = inttoptr i64 %3 to i64*, !insn.addr !85
  %5 = add i64 %1, -36, !insn.addr !86
  %6 = inttoptr i64 %5 to i32*, !insn.addr !86
  store i32 %2, i32* %6, align 4, !insn.addr !86
  %7 = add i64 %1, -24, !insn.addr !87
  %8 = inttoptr i64 %7 to i64*, !insn.addr !88
  %9 = call i64 @_ZN7DerivedD2Ev(i64* %8), !insn.addr !88
  ret i64 %9, !insn.addr !88

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @function_24d4() local_unnamed_addr {
dec_label_pc_24d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !89
  %3 = inttoptr i64 %2 to i64*, !insn.addr !90
  %4 = call i64 @_ZN4BaseD2Ev(i64* %3), !insn.addr !90
  %5 = add i64 %1, -32, !insn.addr !91
  %6 = inttoptr i64 %5 to i64*, !insn.addr !91
  %7 = load i64, i64* %6, align 8, !insn.addr !91
  %8 = inttoptr i64 %7 to %_Unwind_Exception*, !insn.addr !92
  call void @_Unwind_Resume(%_Unwind_Exception* %8), !insn.addr !92
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !93

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_24f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_-40 = alloca i64, align 8
  %2 = call i64 @_ZN12MultiDerivedC2Ev(i64* nonnull %stack_var_-40), !insn.addr !94
  %3 = load i64, i64* %stack_var_-40, align 8, !insn.addr !95
  %4 = inttoptr i64 %3 to i64*, !insn.addr !96
  %5 = load i64, i64* %4, align 8, !insn.addr !96
  %6 = inttoptr i64 %1 to i64*, !insn.addr !97
  %7 = load i64, i64* %6, align 8, !insn.addr !97
  %8 = add i64 %5, 1, !insn.addr !98
  %9 = add i64 %8, %7, !insn.addr !99
  %10 = call i64 @_ZN12MultiDerivedD2Ev(i64* nonnull %stack_var_-40), !insn.addr !100
  %11 = and i64 %9, 4294967295, !insn.addr !101
  ret i64 %11, !insn.addr !102

; uselistorder directives
  uselistorder i64* %stack_var_-40, { 1, 0, 2 }
}

define i64 @function_25c6() local_unnamed_addr {
dec_label_pc_25c6:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !103
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_25d0:
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !104
  %1 = call i64 @_ZN14DiamondDerivedC1Ev(i64* nonnull %stack_var_-56), !insn.addr !105
  %2 = load i64, i64* %stack_var_-56, align 8, !insn.addr !106
  %3 = add i64 %2, -24, !insn.addr !107
  %4 = inttoptr i64 %3 to i64*, !insn.addr !107
  %5 = load i64, i64* %4, align 8, !insn.addr !107
  %6 = add i64 %0, -40, !insn.addr !108
  %7 = add i64 %5, %6, !insn.addr !108
  %8 = inttoptr i64 %7 to i32*, !insn.addr !108
  store i32 50, i32* %8, align 4, !insn.addr !108
  %9 = load i64, i64* %stack_var_-56, align 8, !insn.addr !109
  %10 = add i64 %9, -24, !insn.addr !110
  %11 = inttoptr i64 %10 to i64*, !insn.addr !110
  %12 = load i64, i64* %11, align 8, !insn.addr !110
  %13 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !111
  %14 = add i64 %12, %13, !insn.addr !112
  %15 = inttoptr i64 %14 to i64*, !insn.addr !113
  %16 = load i64, i64* %15, align 8, !insn.addr !113
  %17 = inttoptr i64 %16 to i64*, !insn.addr !114
  %18 = load i64, i64* %17, align 8, !insn.addr !114
  %19 = add i64 %12, %6, !insn.addr !115
  %20 = inttoptr i64 %19 to i32*, !insn.addr !115
  store i32 100, i32* %20, align 4, !insn.addr !115
  %21 = load i64, i64* %15, align 8, !insn.addr !116
  %22 = inttoptr i64 %21 to i64*, !insn.addr !117
  %23 = load i64, i64* %22, align 8, !insn.addr !117
  %24 = add i64 %23, %18, !insn.addr !118
  %25 = call i64 @_ZN14DiamondDerivedD1Ev(i64* nonnull %stack_var_-56), !insn.addr !119
  %26 = and i64 %24, 4294967295, !insn.addr !120
  ret i64 %26, !insn.addr !121

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 0, 2, 3, 4, 1 }
}

define i64 @function_2699() local_unnamed_addr {
dec_label_pc_2699:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !122
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_26a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %2 = call i64 @_ZN5PointC2Eii(i64* nonnull %stack_var_-16, i32 1, i32 2), !insn.addr !123
  %3 = call i64 @_ZN5PointC2Eii(i64* nonnull %stack_var_-24, i32 3, i32 4), !insn.addr !124
  %4 = call i64 @_ZNK5PointplERKS_(i64* nonnull %stack_var_-16, i64* nonnull %stack_var_-24), !insn.addr !125
  %5 = trunc i64 %4 to i32, !insn.addr !126
  store i32 %5, i32* %stack_var_-32, align 4, !insn.addr !126
  %6 = call i64 @_ZNK5PointeqERKS_(i64* nonnull %stack_var_-16, i64* nonnull %stack_var_-24), !insn.addr !127
  %7 = bitcast i32* %stack_var_-32 to i64*, !insn.addr !128
  %8 = call i64 @_ZN5PointppEv(i64* nonnull %7), !insn.addr !128
  %9 = load i32, i32* %stack_var_-32, align 4, !insn.addr !129
  %10 = add i32 %9, %1, !insn.addr !130
  %11 = urem i64 %6, 2
  %12 = icmp eq i64 %11, 0, !insn.addr !131
  %13 = icmp eq i1 %12, false, !insn.addr !132
  %14 = select i1 %13, i32 0, i32 10, !insn.addr !132
  %15 = add i32 %10, %14, !insn.addr !133
  %16 = zext i32 %15 to i64, !insn.addr !133
  ret i64 %16, !insn.addr !134

; uselistorder directives
  uselistorder i32* %stack_var_-32, { 1, 2, 0 }
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2720:
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !135
  %1 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !136
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !137
  %3 = call double @_Z12template_maxIdET_S0_S0_(double bitcast (i64 ptrtoint (i32* @0 to i64) to double), double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !138
  %4 = fptrunc double %3 to float, !insn.addr !138
  %5 = bitcast float %4 to i32, !insn.addr !138
  %6 = sext i32 %5 to i128, !insn.addr !138
  %7 = call i64 @__asm_movsd.13(i128 %6), !insn.addr !139
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !140
  store i32 20, i32* %stack_var_-32, align 4, !insn.addr !141
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-28, i32* nonnull %stack_var_-32), !insn.addr !142
  %8 = call i32 @__asm_cvttsd2si(i64 %7), !insn.addr !143
  %9 = add i32 %8, %0, !insn.addr !144
  %10 = load i32, i32* %stack_var_-28, align 4, !insn.addr !145
  %11 = add i32 %9, %10, !insn.addr !145
  %12 = load i32, i32* %stack_var_-32, align 4, !insn.addr !146
  %13 = add i32 %11, %12, !insn.addr !146
  %14 = zext i32 %13 to i64, !insn.addr !146
  ret i64 %14, !insn.addr !147

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0, 2 }
  uselistorder i32* %stack_var_-32, { 1, 0, 2 }
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2790:
  %stack_var_-152 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @_ZN9ContainerIiEC1Ev(i64* nonnull %stack_var_-56), !insn.addr !148
  %1 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-56, i32 10), !insn.addr !149
  %2 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-56, i32 20), !insn.addr !150
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-56, i32 30), !insn.addr !151
  %4 = call i64 @_ZNK9ContainerIiE3getEi(i64* nonnull %stack_var_-56, i32 0), !insn.addr !152
  %5 = trunc i64 %4 to i32, !insn.addr !153
  %6 = call i64 @_ZNK9ContainerIiE7getSizeEv(i64* nonnull %stack_var_-56), !insn.addr !154
  %7 = trunc i64 %6 to i32, !insn.addr !155
  %8 = call i64 @_ZN9ContainerIdEC1Ev(i64* nonnull %stack_var_-152), !insn.addr !156
  %9 = ptrtoint i64* %stack_var_-152 to i64, !insn.addr !157
  %10 = call i128 @__asm_movsd(i64 4614253070214989087), !insn.addr !158
  %11 = bitcast i64 %9 to double, !insn.addr !159
  %12 = call i64 @_ZN9ContainerIdE4pushEd(double %11), !insn.addr !159
  %13 = call i128 @_ZNK9ContainerIdE3getEi(i64* nonnull %stack_var_-152, i32 0), !insn.addr !160
  %14 = call i64 @__asm_movsd.13(i128 %13), !insn.addr !161
  %15 = add i32 %7, %5, !insn.addr !162
  %16 = call i32 @__asm_cvttsd2si(i64 %14), !insn.addr !163
  %17 = add i32 %15, %16, !insn.addr !164
  %18 = zext i32 %17 to i64, !insn.addr !164
  ret i64 %18, !insn.addr !165

; uselistorder directives
  uselistorder i64* %stack_var_-152, { 0, 2, 1 }
  uselistorder i64 (i64*, i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2840:
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-32 = alloca i32, align 4
  store i32 10, i32* %stack_var_-32, align 4, !insn.addr !166
  %0 = bitcast i32* %stack_var_-32 to i64*, !insn.addr !167
  %1 = call i64 @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* nonnull %0, i32 3), !insn.addr !167
  %2 = call i64 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* nonnull %stack_var_-40, i32 10, i32 20), !insn.addr !168
  %3 = add i64 %2, %1, !insn.addr !169
  %4 = and i64 %3, 4294967295, !insn.addr !169
  ret i64 %4, !insn.addr !170
}

define i64 @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_28a0:
  %rdi = alloca i64, align 8
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !171
  %2 = inttoptr i64 %1 to i64*, !insn.addr !171
  %3 = load i64, i64* %2, align 8, !insn.addr !171
  %4 = inttoptr i64 %3 to i32*, !insn.addr !172
  %5 = load i32, i32* %4, align 4, !insn.addr !172
  %6 = add i32 %5, 5, !insn.addr !173
  store i32 %6, i32* %4, align 4, !insn.addr !174
  %7 = bitcast i64* %rdi to i32*
  %8 = load i32, i32* %7, align 8, !insn.addr !175
  %9 = mul i32 %8, %arg2, !insn.addr !175
  %10 = load i64, i64* %2, align 8, !insn.addr !176
  %11 = inttoptr i64 %10 to i32*, !insn.addr !177
  %12 = load i32, i32* %11, align 4, !insn.addr !177
  %13 = add i32 %12, %9, !insn.addr !177
  %14 = zext i32 %13 to i64, !insn.addr !177
  ret i64 %14, !insn.addr !178
}

define i64 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_28d0:
  %0 = add i32 %arg3, %arg2, !insn.addr !179
  %1 = zext i32 %0 to i64, !insn.addr !179
  ret i64 %1, !insn.addr !180
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !181
  %1 = inttoptr i64 %0 to i32*, !insn.addr !182
  store i32 42, i32* %1, align 4, !insn.addr !182
  %2 = load i64, i64* inttoptr (i64 36808 to i64*), align 8, !insn.addr !183
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !184
  ret i64 %3, !insn.addr !185

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2a50:
  %stack_var_-64 = alloca i64, align 8
  %stack_var_-72 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %0 = call i64 @_Znwm(i64 4), !insn.addr !186
  %1 = inttoptr i64 %0 to i32*, !insn.addr !187
  store i32 100, i32* %1, align 4, !insn.addr !187
  %2 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* nonnull %stack_var_-16, i32* %1), !insn.addr !188
  %3 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-16), !insn.addr !189
  %4 = inttoptr i64 %3 to i32*, !insn.addr !190
  store i32 200, i32* %4, align 4, !insn.addr !191
  %5 = bitcast i64* %stack_var_-16 to i64**, !insn.addr !192
  %6 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** nonnull %5), !insn.addr !192
  %7 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* nonnull %stack_var_-40, i64* %6), !insn.addr !193
  %8 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-40), !insn.addr !194
  %9 = inttoptr i64 %8 to i32*, !insn.addr !195
  %10 = load i32, i32* %9, align 4, !insn.addr !196
  %11 = call i64 @_Znam(i64 20), !insn.addr !197
  %12 = inttoptr i64 %11 to i32*, !insn.addr !198
  store i32 1, i32* %12, align 4, !insn.addr !199
  %13 = add i64 %11, 4, !insn.addr !200
  %14 = inttoptr i64 %13 to i32*, !insn.addr !200
  store i32 2, i32* %14, align 4, !insn.addr !200
  %15 = add i64 %11, 8, !insn.addr !201
  %16 = inttoptr i64 %15 to i32*, !insn.addr !201
  store i32 3, i32* %16, align 4, !insn.addr !201
  %17 = add i64 %11, 12, !insn.addr !202
  %18 = inttoptr i64 %17 to i32*, !insn.addr !202
  store i32 4, i32* %18, align 4, !insn.addr !202
  %19 = add i64 %11, 16, !insn.addr !203
  %20 = inttoptr i64 %19 to i32*, !insn.addr !203
  store i32 5, i32* %20, align 4, !insn.addr !203
  %21 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* nonnull %stack_var_-56, i32* %12), !insn.addr !204
  %22 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %stack_var_-56, i64 2), !insn.addr !205
  %23 = inttoptr i64 %22 to i32*, !insn.addr !206
  %24 = load i32, i32* %23, align 4, !insn.addr !207
  %25 = call i64 @_Znwm(i64 4), !insn.addr !208
  %26 = inttoptr i64 %25 to i32*, !insn.addr !209
  store i32 500, i32* %26, align 4, !insn.addr !210
  %27 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* nonnull %stack_var_-72, i32* %26, i64* nonnull %stack_var_-64), !insn.addr !211
  %28 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i64* nonnull %stack_var_-72), !insn.addr !212
  %29 = inttoptr i64 %28 to i32*, !insn.addr !213
  %30 = load i32, i32* %29, align 4, !insn.addr !214
  %31 = add i32 %24, %10, !insn.addr !215
  %32 = add i32 %31, %30, !insn.addr !216
  %33 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* nonnull %stack_var_-72), !insn.addr !217
  %34 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* nonnull %stack_var_-56), !insn.addr !218
  %35 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %stack_var_-40), !insn.addr !219
  %36 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %stack_var_-16), !insn.addr !220
  %37 = zext i32 %32 to i64, !insn.addr !221
  ret i64 %37, !insn.addr !222

; uselistorder directives
  uselistorder i32* %26, { 1, 0 }
  uselistorder i32* %12, { 1, 0 }
  uselistorder i64 %11, { 3, 2, 1, 0, 4 }
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
  %2 = trunc i64 %arg3 to i32, !insn.addr !223
  %3 = add i64 %1, -16, !insn.addr !224
  %4 = inttoptr i64 %3 to i64*, !insn.addr !224
  %5 = add i64 %1, -20, !insn.addr !225
  %6 = inttoptr i64 %5 to i32*, !insn.addr !225
  store i32 %2, i32* %6, align 4, !insn.addr !225
  %7 = call i64 @function_2c28(), !insn.addr !226
  ret i64 %7, !insn.addr !226

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2bdf(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2bdf:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !227
  %3 = add i64 %1, -16, !insn.addr !228
  %4 = inttoptr i64 %3 to i64*, !insn.addr !228
  %5 = add i64 %1, -20, !insn.addr !229
  %6 = inttoptr i64 %5 to i32*, !insn.addr !229
  store i32 %2, i32* %6, align 4, !insn.addr !229
  %7 = call i64 @function_2c1f(), !insn.addr !230
  ret i64 %7, !insn.addr !230

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2bf0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2bf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !231
  %3 = add i64 %1, -16, !insn.addr !232
  %4 = inttoptr i64 %3 to i64*, !insn.addr !232
  %5 = add i64 %1, -20, !insn.addr !233
  %6 = inttoptr i64 %5 to i32*, !insn.addr !233
  store i32 %2, i32* %6, align 4, !insn.addr !233
  %7 = call i64 @function_2c16(), !insn.addr !234
  ret i64 %7, !insn.addr !234

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_2c01(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2c01:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg3 to i32, !insn.addr !235
  %3 = add i64 %1, -16, !insn.addr !236
  %4 = inttoptr i64 %3 to i64*, !insn.addr !236
  %5 = add i64 %1, -20, !insn.addr !237
  %6 = inttoptr i64 %5 to i32*, !insn.addr !237
  store i32 %2, i32* %6, align 4, !insn.addr !237
  %7 = add i64 %1, -64, !insn.addr !238
  %8 = inttoptr i64 %7 to i64*, !insn.addr !239
  %9 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %8), !insn.addr !239
  ret i64 %9, !insn.addr !239

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64 (i64*)* @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev", { 1, 0 }
}

define i64 @function_2c16() local_unnamed_addr {
dec_label_pc_2c16:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -48, !insn.addr !240
  %3 = inttoptr i64 %2 to i64*, !insn.addr !241
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %3), !insn.addr !241
  ret i64 %4, !insn.addr !241

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev, { 1, 0 }
}

define i64 @function_2c1f() local_unnamed_addr {
dec_label_pc_2c1f:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !242
  %3 = inttoptr i64 %2 to i64*, !insn.addr !243
  %4 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !243
  ret i64 %4, !insn.addr !243
}

define i64 @function_2c28() local_unnamed_addr {
dec_label_pc_2c28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !244
  %3 = inttoptr i64 %2 to i64*, !insn.addr !245
  %4 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !245
  %5 = add i64 %1, -16, !insn.addr !246
  %6 = inttoptr i64 %5 to i64*, !insn.addr !246
  %7 = load i64, i64* %6, align 8, !insn.addr !246
  %8 = inttoptr i64 %7 to %_Unwind_Exception*, !insn.addr !247
  call void @_Unwind_Resume(%_Unwind_Exception* %8), !insn.addr !247
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !248

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder i64 (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 2, 3, 1, 0 }
}

define i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* %result, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_2c40:
  %0 = bitcast i64* %arg3 to i64**, !insn.addr !249
  %1 = call i64 @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %0), !insn.addr !249
  ret i64 %1, !insn.addr !250
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i64* %result) local_unnamed_addr {
dec_label_pc_2c80:
  %0 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i64* %result), !insn.addr !251
  ret i64 %0, !insn.addr !252
}

define i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %result) local_unnamed_addr {
dec_label_pc_2cb0:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result), !insn.addr !253
  %1 = inttoptr i64 %0 to i64*, !insn.addr !254
  %2 = load i64, i64* %1, align 8, !insn.addr !254
  %3 = icmp eq i64 %2, 0, !insn.addr !254
  br i1 %3, label %dec_label_pc_2d14, label %dec_label_pc_2ce8, !insn.addr !255

dec_label_pc_2ce8:                                ; preds = %dec_label_pc_2cb0
  %4 = inttoptr i64 %0 to i32***, !insn.addr !256
  %5 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i64* %result), !insn.addr !257
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !258
  %7 = load i64, i64* %6, align 8, !insn.addr !259
  %8 = inttoptr i64 %5 to i64*, !insn.addr !260
  %9 = inttoptr i64 %7 to i32*, !insn.addr !260
  %10 = call i64 @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %8, i32* %9), !insn.addr !260
  br label %dec_label_pc_2d14, !insn.addr !261

dec_label_pc_2d14:                                ; preds = %dec_label_pc_2ce8, %dec_label_pc_2cb0
  store i64 0, i64* %1, align 8, !insn.addr !262
  ret i64 %0, !insn.addr !263

; uselistorder directives
  uselistorder i64 %0, { 0, 2, 1 }
}

define i64 @_Z13test_cpp_rttiv(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_2d30:
  %stack_var_-28.3.reg2mem = alloca i32, !insn.addr !264
  %stack_var_-28.2.reg2mem = alloca i32, !insn.addr !264
  %0 = call i64 @_Znwm(i64 8), !insn.addr !265
  %1 = inttoptr i64 %0 to i64*, !insn.addr !266
  %2 = call i64* @memset(i64* %1, i32 0, i32 8), !insn.addr !266
  %3 = call i64 @_ZN12RTTIDerivedAC2Ev(i64* %1), !insn.addr !267
  %4 = call i64 @_Znwm(i64 8), !insn.addr !268
  %5 = inttoptr i64 %4 to i64*, !insn.addr !269
  %6 = call i64* @memset(i64* %5, i32 0, i32 8), !insn.addr !269
  %7 = call i64 @_ZN12RTTIDerivedBC2Ev(i64* %5), !insn.addr !270
  %8 = icmp eq i64 %0, 0, !insn.addr !271
  %9 = icmp eq i1 %8, false, !insn.addr !272
  br i1 %9, label %dec_label_pc_2db5, label %dec_label_pc_2db0, !insn.addr !272

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d30
  %10 = call i64 @__cxa_bad_typeid(), !insn.addr !273
  br label %dec_label_pc_2db5, !insn.addr !273

dec_label_pc_2db5:                                ; preds = %dec_label_pc_2db0, %dec_label_pc_2d30
  %11 = trunc i64 %4 to i32, !insn.addr !274
  %12 = load i64, i64* %1, align 8, !insn.addr !275
  %13 = add i64 %12, -8, !insn.addr !276
  %14 = inttoptr i64 %13 to i64*, !insn.addr !276
  %15 = load i64, i64* %14, align 8, !insn.addr !276
  %16 = inttoptr i64 %15 to i64*, !insn.addr !277
  %17 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %16, i64* nonnull @global_var_8838), !insn.addr !277
  %18 = icmp eq i32 %11, 0, !insn.addr !278
  %19 = icmp eq i1 %18, false, !insn.addr !279
  br i1 %19, label %dec_label_pc_2df9, label %dec_label_pc_2df4, !insn.addr !279

dec_label_pc_2df4:                                ; preds = %dec_label_pc_2db5
  %20 = call i64 @__cxa_bad_typeid(), !insn.addr !280
  br label %dec_label_pc_2df9, !insn.addr !280

dec_label_pc_2df9:                                ; preds = %dec_label_pc_2df4, %dec_label_pc_2db5
  %21 = trunc i64 %0 to i32, !insn.addr !281
  %22 = urem i64 %17, 2
  %23 = icmp eq i64 %22, 0, !insn.addr !282
  %24 = icmp eq i1 %23, false, !insn.addr !283
  %spec.select = select i1 %24, i32 10, i32 0
  %sext = mul i64 %4, 4294967296
  %25 = ashr exact i64 %sext, 32, !insn.addr !284
  %26 = inttoptr i64 %25 to i64*, !insn.addr !285
  %27 = load i64, i64* %26, align 8, !insn.addr !285
  %28 = add i64 %27, -8, !insn.addr !286
  %29 = inttoptr i64 %28 to i64*, !insn.addr !286
  %30 = load i64, i64* %29, align 8, !insn.addr !286
  %31 = inttoptr i64 %30 to i64*, !insn.addr !287
  %32 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %31, i64* nonnull @global_var_8850), !insn.addr !287
  %33 = urem i64 %32, 2
  %34 = icmp eq i64 %33, 0, !insn.addr !288
  %35 = icmp eq i1 %34, false, !insn.addr !289
  %36 = or i32 %spec.select, 20
  %spec.select8 = select i1 %35, i32 %36, i32 %spec.select
  %37 = icmp eq i32 %21, 0, !insn.addr !290
  store i32 %spec.select8, i32* %stack_var_-28.2.reg2mem, !insn.addr !291
  br i1 %37, label %dec_label_pc_2e89, label %dec_label_pc_2e67, !insn.addr !291

dec_label_pc_2e67:                                ; preds = %dec_label_pc_2df9
  %sext5 = mul i64 %0, 4294967296
  %38 = ashr exact i64 %sext5, 32, !insn.addr !292
  %39 = call i64 @__dynamic_cast(i64 %38, i64* nonnull @global_var_8828, i64* nonnull @global_var_8838, i64 0), !insn.addr !293
  %40 = icmp eq i64 %39, 0, !insn.addr !294
  store i32 %spec.select8, i32* %stack_var_-28.2.reg2mem, !insn.addr !295
  br i1 %40, label %dec_label_pc_2e89, label %dec_label_pc_2e7a, !insn.addr !295

dec_label_pc_2e7a:                                ; preds = %dec_label_pc_2e67
  %41 = inttoptr i64 %39 to i64*, !insn.addr !296
  %42 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %41), !insn.addr !296
  %43 = trunc i64 %42 to i32, !insn.addr !297
  %44 = add i32 %spec.select8, %43, !insn.addr !297
  store i32 %44, i32* %stack_var_-28.2.reg2mem, !insn.addr !298
  br label %dec_label_pc_2e89, !insn.addr !298

dec_label_pc_2e89:                                ; preds = %dec_label_pc_2df9, %dec_label_pc_2e7a, %dec_label_pc_2e67
  %stack_var_-28.2.reload = load i32, i32* %stack_var_-28.2.reg2mem
  store i32 %stack_var_-28.2.reload, i32* %stack_var_-28.3.reg2mem, !insn.addr !299
  br i1 %18, label %dec_label_pc_2eec, label %dec_label_pc_2eca, !insn.addr !299

dec_label_pc_2eca:                                ; preds = %dec_label_pc_2e89
  %45 = call i64 @__dynamic_cast(i64 %25, i64* nonnull @global_var_8828, i64* nonnull @global_var_8850, i64 0), !insn.addr !300
  %46 = icmp eq i64 %45, 0, !insn.addr !301
  store i32 %stack_var_-28.2.reload, i32* %stack_var_-28.3.reg2mem, !insn.addr !302
  br i1 %46, label %dec_label_pc_2eec, label %dec_label_pc_2edd, !insn.addr !302

dec_label_pc_2edd:                                ; preds = %dec_label_pc_2eca
  %47 = inttoptr i64 %45 to i64*, !insn.addr !303
  %48 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %47), !insn.addr !303
  %49 = trunc i64 %48 to i32, !insn.addr !304
  %50 = add i32 %stack_var_-28.2.reload, %49, !insn.addr !304
  store i32 %50, i32* %stack_var_-28.3.reg2mem, !insn.addr !305
  br label %dec_label_pc_2eec, !insn.addr !305

dec_label_pc_2eec:                                ; preds = %dec_label_pc_2e89, %dec_label_pc_2edd, %dec_label_pc_2eca
  %stack_var_-28.3.reload = load i32, i32* %stack_var_-28.3.reg2mem
  %51 = icmp eq i1 %37, false, !insn.addr !306
  br i1 %51, label %dec_label_pc_2f03, label %dec_label_pc_2efe, !insn.addr !306

dec_label_pc_2efe:                                ; preds = %dec_label_pc_2eec
  %52 = call i64 @__cxa_bad_typeid(), !insn.addr !307
  br label %dec_label_pc_2f03, !insn.addr !307

dec_label_pc_2f03:                                ; preds = %dec_label_pc_2efe, %dec_label_pc_2eec
  %sext7 = mul i64 %0, 4294967296
  %53 = ashr exact i64 %sext7, 32, !insn.addr !308
  %54 = inttoptr i64 %53 to i64*, !insn.addr !309
  %55 = load i64, i64* %54, align 8, !insn.addr !309
  %56 = add i64 %55, -8, !insn.addr !310
  %57 = inttoptr i64 %56 to i64*, !insn.addr !310
  %58 = load i64, i64* %57, align 8, !insn.addr !310
  %59 = inttoptr i64 %58 to i64*, !insn.addr !311
  %60 = call i64 @_ZNKSt9type_info4nameEv(i64* %59), !insn.addr !311
  %61 = inttoptr i64 %60 to i8*, !insn.addr !312
  %62 = call i32 @strlen(i8* %61), !insn.addr !312
  %63 = add i32 %62, %stack_var_-28.3.reload, !insn.addr !313
  %64 = zext i32 %63 to i64, !insn.addr !314
  ret i64 %64, !insn.addr !315

; uselistorder directives
  uselistorder i64 %45, { 1, 0 }
  uselistorder i32 %stack_var_-28.2.reload, { 2, 1, 0 }
  uselistorder i64 %39, { 1, 0 }
  uselistorder i32 %spec.select8, { 2, 1, 0 }
  uselistorder i32* %stack_var_-28.2.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-28.3.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i64*, i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 -8, { 2, 3, 4, 0, 1 }
  uselistorder i64 ()* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2eec, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2e89, { 1, 2, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2f70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5025 to i8*)), !insn.addr !316
  %3 = call i64 @_Z20test_cpp_member_funcv(), !insn.addr !317
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_504a to i8*)), !insn.addr !318
  %5 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !319
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5068 to i8*)), !insn.addr !320
  %7 = call i64 @_Z21test_cpp_virtual_funcv(), !insn.addr !321
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5084 to i8*)), !insn.addr !322
  %9 = call i64 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !323
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50a0 to i8*)), !insn.addr !324
  %11 = call i64 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !325
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50bc to i8*)), !insn.addr !326
  %13 = call i64 @_Z26test_cpp_operator_overloadv(), !insn.addr !327
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d9 to i8*)), !insn.addr !328
  %15 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !329
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50f5 to i8*)), !insn.addr !330
  %17 = call i64 @_Z23test_cpp_template_classv(), !insn.addr !331
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5111 to i8*)), !insn.addr !332
  %19 = call i64 @_Z15test_cpp_lambdav(), !insn.addr !333
  %20 = and i64 %19, 4294967295, !insn.addr !334
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_512d to i8*)), !insn.addr !335
  %22 = call i64 @_Z18test_cpp_exceptionv(i64 ptrtoint (i8** @global_var_512d to i64), i64 %20, i64 %1, i64 ptrtoint (i32* @0 to i64)), !insn.addr !336
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5149 to i8*)), !insn.addr !337
  %24 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !338
  %25 = and i64 %24, 4294967295, !insn.addr !339
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5166 to i8*)), !insn.addr !340
  %27 = inttoptr i64 %25 to i64*, !insn.addr !341
  %28 = call i64 @_Z13test_cpp_rttiv(i64* bitcast (i8** @global_var_5166 to i64*), i64* %27), !insn.addr !341
  %29 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5183 to i8*)), !insn.addr !342
  %30 = sext i32 %29 to i64, !insn.addr !342
  ret i64 %30, !insn.addr !343

; uselistorder directives
  uselistorder i8** @global_var_512d, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_3080:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !344
  ret i64 0, !insn.addr !345
}

define i64 @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30a0:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3), !insn.addr !346
  ret i64 %0, !insn.addr !347
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30d0:
  %stack_var_-24 = alloca i32*, align 8
  store i32* %arg2, i32** %stack_var_-24, align 8, !insn.addr !348
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !349
  %1 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %0), !insn.addr !349
  %2 = bitcast i32** %stack_var_-24 to i32***, !insn.addr !350
  %3 = call i64 @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** nonnull %2, i64** %1), !insn.addr !350
  ret i64 %3, !insn.addr !351

; uselistorder directives
  uselistorder i32** %stack_var_-24, { 1, 0 }
}

define i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3110:
  %0 = bitcast i64* %arg1 to i64**, !insn.addr !352
  ret i64** %0, !insn.addr !352
}

define i64 @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_3120:
  %0 = bitcast i32*** %arg2 to i64*, !insn.addr !353
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %0), !insn.addr !353
  %2 = bitcast i64** %arg3 to i64*, !insn.addr !354
  %3 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %2), !insn.addr !354
  %4 = ptrtoint i64** %3 to i64, !insn.addr !354
  %5 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %1, i64 %4), !insn.addr !355
  ret i64 %5, !insn.addr !356
}

define i64 @function_3171(i64 %arg1) local_unnamed_addr {
dec_label_pc_3171:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !357
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_3180:
  %0 = inttoptr i64 %arg3 to i64*, !insn.addr !358
  %1 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %0), !insn.addr !358
  %2 = bitcast i64** %1 to i64*, !insn.addr !359
  %3 = call i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %2), !insn.addr !359
  %4 = bitcast i32*** %arg2 to i64*, !insn.addr !360
  %5 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %4), !insn.addr !360
  %6 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %5), !insn.addr !361
  ret i64 %6, !insn.addr !362

; uselistorder directives
  uselistorder i64** (i64*)* @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE", { 2, 1, 0 }
  uselistorder i64* %result, { 1, 0 }
}

define i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_31e0:
  %0 = call i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2), !insn.addr !363
  ret i64 %0, !insn.addr !364
}

define i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3210:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !365
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3220:
  %0 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %result), !insn.addr !366
  %1 = ptrtoint i64* %0 to i64, !insn.addr !366
  ret i64 %1, !insn.addr !367
}

define i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3240:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %result), !insn.addr !368
  ret i64 %0, !insn.addr !369
}

define i64 @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3270:
  %rax.0.reg2mem = alloca i64, !insn.addr !370
  %0 = ptrtoint i32* %arg2 to i64
  store i32 -1, i32* %arg2, align 4, !insn.addr !371
  %1 = icmp eq i32* %arg2, null, !insn.addr !372
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !373
  br i1 %1, label %dec_label_pc_32a5, label %dec_label_pc_329c, !insn.addr !373

dec_label_pc_329c:                                ; preds = %dec_label_pc_3270
  %2 = bitcast i32* %arg2 to i64*
  call void @_ZdlPv(i64* %2), !insn.addr !374
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_32a5, !insn.addr !374

dec_label_pc_32a5:                                ; preds = %dec_label_pc_329c, %dec_label_pc_3270
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !375
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32b0:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !376
  %1 = bitcast i32** %0 to i64*, !insn.addr !377
  ret i64* %1, !insn.addr !377
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32d0:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1), !insn.addr !378
  %1 = inttoptr i64 %0 to i32**, !insn.addr !379
  ret i32** %1, !insn.addr !379
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_32f0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !380
  ret i64 %0, !insn.addr !381
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %result) local_unnamed_addr {
dec_label_pc_3310:
  %0 = call i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %result), !insn.addr !382
  %1 = ptrtoint i64* %0 to i64, !insn.addr !382
  ret i64 %1, !insn.addr !383
}

define i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3330:
  %0 = call i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1), !insn.addr !384
  ret i64* %0, !insn.addr !385
}

define i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3350:
  %0 = call i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1), !insn.addr !386
  %1 = inttoptr i64 %0 to i64*, !insn.addr !387
  ret i64* %1, !insn.addr !387
}

define i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3370:
  %0 = call i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* %arg1), !insn.addr !388
  ret i64 %0, !insn.addr !389
}

define i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3390:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !390
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i64* %result) local_unnamed_addr {
dec_label_pc_33a0:
  %0 = call i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result), !insn.addr !391
  ret i64 %0, !insn.addr !392
}

define i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result) local_unnamed_addr {
dec_label_pc_33d0:
  %0 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %result), !insn.addr !393
  %1 = load i64, i64* %0, align 8, !insn.addr !394
  ret i64 %1, !insn.addr !395
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_33f0:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !396
  %1 = bitcast i32** %0 to i64*, !insn.addr !397
  ret i64* %1, !insn.addr !397
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3410:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1), !insn.addr !398
  %1 = inttoptr i64 %0 to i32**, !insn.addr !399
  ret i32** %1, !insn.addr !399
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_3430:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !400
  ret i64 %0, !insn.addr !401
}

define i64 @_ZN11SimpleClassC2EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_3450:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !402
  store i32 %arg2, i32* %1, align 4, !insn.addr !402
  %2 = add i64 %0, 4, !insn.addr !403
  %3 = inttoptr i64 %2 to i8*, !insn.addr !404
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !404
  %5 = add i64 %0, 35, !insn.addr !405
  %6 = inttoptr i64 %5 to i8*, !insn.addr !405
  store i8 0, i8* %6, align 1, !insn.addr !405
  ret i64 %0, !insn.addr !406
}

define i64 @_ZN11SimpleClass8setValueEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3490:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !407
  store i32 %arg2, i32* %1, align 4, !insn.addr !407
  ret i64 %0, !insn.addr !408
}

define i64 @_ZNK11SimpleClass8getValueEv(i64* %result) local_unnamed_addr {
dec_label_pc_34b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !409
  ret i64 %2, !insn.addr !410
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_34c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !411
  %5 = sext i32 %4 to i64, !insn.addr !412
  %6 = add i64 %2, 4, !insn.addr !413
  %7 = inttoptr i64 %6 to i8*, !insn.addr !414
  %8 = call i32 @strlen(i8* %7), !insn.addr !414
  %9 = sext i32 %8 to i64, !insn.addr !414
  %10 = add nsw i64 %9, %5, !insn.addr !415
  ret i64 %10, !insn.addr !416
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_3500:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !417
}

define i64 @_ZN14LifecycleClassC2Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3510:
  %storemerge.off04.reg2mem = alloca i32, !insn.addr !418
  %storemerge.off025.reg2mem = alloca i64, !insn.addr !418
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !419
  %2 = inttoptr i64 %1 to i64*, !insn.addr !419
  store i64 %arg2, i64* %2, align 8, !insn.addr !419
  %3 = mul i64 %arg2, 4, !insn.addr !420
  %4 = icmp ugt i64 %arg2, 4611686018427387903, !insn.addr !420
  %5 = select i1 %4, i64 -1, i64 %3, !insn.addr !421
  %6 = call i64 @_Znam(i64 %5), !insn.addr !422
  store i64 %6, i64* %result, align 8, !insn.addr !423
  %7 = icmp ne i64 %arg2, 0, !insn.addr !424
  %8 = icmp eq i1 %7, false, !insn.addr !425
  store i64 0, i64* %storemerge.off025.reg2mem, !insn.addr !425
  store i32 0, i32* %storemerge.off04.reg2mem, !insn.addr !425
  br i1 %8, label %dec_label_pc_3598, label %dec_label_pc_3572, !insn.addr !425

dec_label_pc_3572:                                ; preds = %dec_label_pc_3510, %dec_label_pc_3572
  %storemerge.off04.reload = load i32, i32* %storemerge.off04.reg2mem
  %storemerge.off025.reload = load i64, i64* %storemerge.off025.reg2mem
  %9 = mul i32 %storemerge.off04.reload, 10, !insn.addr !426
  %10 = mul i64 %storemerge.off025.reload, 4, !insn.addr !427
  %11 = add i64 %10, %5, !insn.addr !427
  %12 = inttoptr i64 %11 to i32*, !insn.addr !427
  store i32 %9, i32* %12, align 4, !insn.addr !427
  %13 = add i64 %storemerge.off025.reload, 1, !insn.addr !428
  %extract.t = trunc i64 %13 to i32
  %14 = icmp ult i64 %13, %arg2, !insn.addr !424
  %15 = icmp eq i1 %14, false, !insn.addr !425
  store i64 %13, i64* %storemerge.off025.reg2mem, !insn.addr !425
  store i32 %extract.t, i32* %storemerge.off04.reg2mem, !insn.addr !425
  br i1 %15, label %dec_label_pc_3598, label %dec_label_pc_3572, !insn.addr !425

dec_label_pc_3598:                                ; preds = %dec_label_pc_3572, %dec_label_pc_3510
  store i32 ptrtoint (i32* @global_var_90f1 to i32), i32* @global_var_90f0, align 4, !insn.addr !429
  ret i64 ptrtoint (i32* @global_var_90f1 to i64), !insn.addr !430

; uselistorder directives
  uselistorder i64* %storemerge.off025.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge.off04.reg2mem, { 2, 0, 1 }
  uselistorder i32* @global_var_90f1, { 1, 0 }
  uselistorder i32 10, { 1, 0, 2, 3, 4, 7, 5, 6 }
  uselistorder i64 %arg2, { 2, 1, 3, 0, 4 }
  uselistorder label %dec_label_pc_3572, { 1, 0 }
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_35b0:
  %storemerge.reg2mem = alloca i64, !insn.addr !431
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !432
  %2 = inttoptr i64 %1 to i64*, !insn.addr !432
  %3 = load i64, i64* %2, align 8, !insn.addr !432
  %4 = icmp ugt i64 %3, %arg2, !insn.addr !432
  %5 = icmp eq i1 %4, false, !insn.addr !433
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !433
  br i1 %5, label %dec_label_pc_35f5, label %dec_label_pc_35d2, !insn.addr !433

dec_label_pc_35d2:                                ; preds = %dec_label_pc_35b0
  %6 = mul i64 %arg2, 4, !insn.addr !434
  %7 = add i64 %6, %0, !insn.addr !434
  %8 = inttoptr i64 %7 to i32*, !insn.addr !434
  %9 = load i32, i32* %8, align 4, !insn.addr !434
  %phitmp = zext i32 %9 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !435
  br label %dec_label_pc_35f5, !insn.addr !435

dec_label_pc_35f5:                                ; preds = %dec_label_pc_35b0, %dec_label_pc_35d2
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !436

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_35f5, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_3600:
  %0 = load i32, i32* @global_var_90f0, align 4, !insn.addr !437
  %1 = zext i32 %0 to i64, !insn.addr !437
  ret i64 %1, !insn.addr !438
}

define i64 @_ZN14LifecycleClassD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3610:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !439
  br i1 %2, label %dec_label_pc_363a, label %dec_label_pc_3631, !insn.addr !440

dec_label_pc_3631:                                ; preds = %dec_label_pc_3610
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !441
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !441
  br label %dec_label_pc_363a, !insn.addr !441

dec_label_pc_363a:                                ; preds = %dec_label_pc_3631, %dec_label_pc_3610
  store i32 ptrtoint (i32* @global_var_90ef to i32), i32* @global_var_90f0, align 4, !insn.addr !442
  ret i64 ptrtoint (i32* @global_var_90ef to i64), !insn.addr !443

; uselistorder directives
  uselistorder i32* @global_var_90f0, { 2, 1, 0 }
  uselistorder i32* @global_var_90ef, { 1, 0 }
}

define i64 @_ZN4BaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3650:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8878_type* @global_var_8878 to i64), i64* %result, align 8, !insn.addr !444
  ret i64 %0, !insn.addr !445

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
}

define i64 @_ZN7DerivedC2Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3670:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN4BaseC2Ev(i64* %result), !insn.addr !446
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !447
  %2 = add i64 %0, 8, !insn.addr !448
  %3 = inttoptr i64 %2 to i32*, !insn.addr !448
  store i32 %arg2, i32* %3, align 4, !insn.addr !448
  ret i64 %0, !insn.addr !449

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder i64 (i64*)* @_ZN4BaseC2Ev, { 1, 0 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_36b0:
  %0 = add i32 %arg2, 1, !insn.addr !450
  %1 = zext i32 %0 to i64, !insn.addr !450
  ret i64 %1, !insn.addr !451
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_36d0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !452
  %2 = inttoptr i64 %1 to i32*, !insn.addr !452
  %3 = load i32, i32* %2, align 4, !insn.addr !452
  %4 = mul i32 %3, %arg2, !insn.addr !452
  %5 = zext i32 %4 to i64, !insn.addr !452
  ret i64 %5, !insn.addr !453
}

define i64 @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_36f0:
  %0 = call i64 @_ZN4BaseD2Ev(i64* %result), !insn.addr !454
  ret i64 %0, !insn.addr !455
}

define i64 @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_3710:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !456
}

define i64 @_ZN12MultiDerivedC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3720:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN5BaseAC2Ev(i64* %result), !insn.addr !457
  %2 = add i64 %0, 16, !insn.addr !458
  %3 = inttoptr i64 %2 to i64*, !insn.addr !459
  %4 = call i64 @_ZN5BaseBC2Ev(i64* %3), !insn.addr !459
  store i64 ptrtoint (%vtable_8900_type* @global_var_8900 to i64), i64* %result, align 8, !insn.addr !460
  store i64 ptrtoint (i64* @global_var_8930 to i64), i64* %3, align 8, !insn.addr !461
  ret i64 %0, !insn.addr !462
}

define i64 @_ZN12MultiDerivedD2Ev(i64* %result) {
dec_label_pc_3770:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 16, !insn.addr !463
  %2 = inttoptr i64 %1 to i64*, !insn.addr !464
  %3 = call i64 @_ZN5BaseBD2Ev(i64* %2), !insn.addr !464
  %4 = call i64 @_ZN5BaseAD2Ev(i64* %result), !insn.addr !465
  ret i64 %4, !insn.addr !466
}

define i64 @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_37a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !467
  %2 = inttoptr i64 %1 to i64*, !insn.addr !468
  %3 = call i64 @_ZN11VirtualBaseC2Ev(i64* %2), !insn.addr !468
  %4 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_8a90), !insn.addr !469
  %5 = add i64 %0, 16, !insn.addr !470
  %6 = inttoptr i64 %5 to i64*, !insn.addr !471
  %7 = call i64 @_ZN7MiddleBC2Ev(i64* %6, i64* nonnull @global_var_8aa0), !insn.addr !471
  store i64 ptrtoint (%vtable_8a08_type* @global_var_8a08 to i64), i64* %result, align 8, !insn.addr !472
  store i64 ptrtoint (i64* @global_var_8a70 to i64), i64* %2, align 8, !insn.addr !473
  store i64 ptrtoint (i64* @global_var_8a38 to i64), i64* %6, align 8, !insn.addr !474
  ret i64 %0, !insn.addr !475
}

define i64 @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_3830:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN14DiamondDerivedD2Ev(i64* %result, i64* nonnull @global_var_8a88), !insn.addr !476
  %2 = add i64 %0, 32, !insn.addr !477
  %3 = inttoptr i64 %2 to i64*, !insn.addr !478
  %4 = call i64 @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !478
  ret i64 %4, !insn.addr !479

; uselistorder directives
  uselistorder i64 32, { 4, 5, 0, 1, 2, 3 }
}

define i64 @_ZN5PointC2Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_3870:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !480
  store i32 %arg2, i32* %1, align 4, !insn.addr !480
  %2 = add i64 %0, 4, !insn.addr !481
  %3 = inttoptr i64 %2 to i32*, !insn.addr !481
  store i32 %arg3, i32* %3, align 4, !insn.addr !481
  ret i64 %0, !insn.addr !482

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
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
  %7 = add i32 %6, %5, !insn.addr !483
  %8 = add i64 %4, 4, !insn.addr !484
  %9 = inttoptr i64 %8 to i32*, !insn.addr !484
  %10 = load i32, i32* %9, align 4, !insn.addr !484
  %11 = add i64 %3, 4, !insn.addr !485
  %12 = inttoptr i64 %11 to i32*, !insn.addr !485
  %13 = load i32, i32* %12, align 4, !insn.addr !485
  %14 = add i32 %13, %10, !insn.addr !485
  %15 = call i64 @_ZN5PointC2Eii(i64* nonnull %stack_var_-16, i32 %7, i32 %14), !insn.addr !486
  %16 = load i64, i64* %stack_var_-16, align 8, !insn.addr !487
  ret i64 %16, !insn.addr !488

; uselistorder directives
  uselistorder i64* %stack_var_-16, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 (i64*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_38d0:
  %0 = alloca i64
  %stack_var_-25.0.reg2mem = alloca i64, !insn.addr !489
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !490
  %6 = icmp eq i1 %5, false, !insn.addr !491
  store i64 0, i64* %stack_var_-25.0.reg2mem, !insn.addr !491
  br i1 %6, label %dec_label_pc_390b, label %dec_label_pc_38f7, !insn.addr !491

dec_label_pc_38f7:                                ; preds = %dec_label_pc_38d0
  %7 = ptrtoint i64* %result to i64
  %8 = ptrtoint i64* %arg2 to i64
  %9 = add i64 %7, 4, !insn.addr !492
  %10 = inttoptr i64 %9 to i32*, !insn.addr !492
  %11 = load i32, i32* %10, align 4, !insn.addr !492
  %12 = add i64 %8, 4, !insn.addr !493
  %13 = inttoptr i64 %12 to i32*, !insn.addr !493
  %14 = load i32, i32* %13, align 4, !insn.addr !493
  %15 = icmp eq i32 %11, %14, !insn.addr !493
  %phitmp = zext i1 %15 to i64
  store i64 %phitmp, i64* %stack_var_-25.0.reg2mem, !insn.addr !494
  br label %dec_label_pc_390b, !insn.addr !494

dec_label_pc_390b:                                ; preds = %dec_label_pc_38f7, %dec_label_pc_38d0
  %stack_var_-25.0.reload = load i64, i64* %stack_var_-25.0.reg2mem
  ret i64 %stack_var_-25.0.reload, !insn.addr !495

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i1 false, { 6, 8, 9, 0, 1, 2, 4, 3, 5, 7, 10 }
}

define i64 @_ZN5PointppEv(i64* %result) local_unnamed_addr {
dec_label_pc_3920:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, 1, !insn.addr !496
  %5 = bitcast i64* %result to i32*, !insn.addr !497
  store i32 %4, i32* %5, align 4, !insn.addr !497
  %6 = add i64 %2, 4, !insn.addr !498
  %7 = inttoptr i64 %6 to i32*, !insn.addr !498
  %8 = load i32, i32* %7, align 4, !insn.addr !498
  %9 = add i32 %8, 1, !insn.addr !499
  store i32 %9, i32* %7, align 4, !insn.addr !500
  ret i64 %2, !insn.addr !501

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3940:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !502
  %storemerge = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge, !insn.addr !503
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3970:
  %0 = alloca i128
  %1 = alloca i1
  %storemerge.reg2mem = alloca i64, !insn.addr !504
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = call i64 @__asm_movsd.13(i128 %3), !insn.addr !505
  %7 = call i64 @__asm_movsd.13(i128 %2), !insn.addr !506
  %8 = call i128 @__asm_movsd(i64 %6), !insn.addr !507
  call void @__asm_ucomisd(i128 %8, i64 %7), !insn.addr !508
  %9 = or i1 %4, %5, !insn.addr !509
  br i1 %9, label %dec_label_pc_399d, label %dec_label_pc_398e, !insn.addr !509

dec_label_pc_398e:                                ; preds = %dec_label_pc_3970
  %10 = call i128 @__asm_movsd(i64 %6), !insn.addr !510
  %11 = call i64 @__asm_movsd.13(i128 %10), !insn.addr !511
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !512
  br label %dec_label_pc_39a7, !insn.addr !512

dec_label_pc_399d:                                ; preds = %dec_label_pc_3970
  %12 = call i128 @__asm_movsd(i64 %7), !insn.addr !513
  %13 = call i64 @__asm_movsd.13(i128 %12), !insn.addr !514
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !514
  br label %dec_label_pc_39a7, !insn.addr !514

dec_label_pc_39a7:                                ; preds = %dec_label_pc_399d, %dec_label_pc_398e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %14 = call i128 @__asm_movsd(i64 %storemerge.reload), !insn.addr !515
  %15 = trunc i128 %14 to i64, !insn.addr !516
  %16 = bitcast i64 %15 to double, !insn.addr !516
  ret double %16, !insn.addr !516

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1* %1, { 1, 0 }
  uselistorder i128* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_39b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !517
  store i32 %3, i32* %arg2, align 4, !insn.addr !518
  ret void, !insn.addr !519

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_39e0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !520
  %2 = inttoptr i64 %1 to i32*, !insn.addr !520
  store i32 0, i32* %2, align 4, !insn.addr !520
  ret i64 %0, !insn.addr !521

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a00:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !522
  %2 = inttoptr i64 %1 to i32*, !insn.addr !522
  %3 = load i32, i32* %2, align 4, !insn.addr !522
  %4 = icmp sgt i32 %3, 9, !insn.addr !523
  br i1 %4, label %dec_label_pc_3a35, label %dec_label_pc_3a1d, !insn.addr !523

dec_label_pc_3a1d:                                ; preds = %dec_label_pc_3a00
  %5 = add i32 %3, 1, !insn.addr !524
  store i32 %5, i32* %2, align 4, !insn.addr !525
  %6 = sext i32 %3 to i64, !insn.addr !526
  %7 = mul i64 %6, 4, !insn.addr !527
  %8 = add i64 %7, %0, !insn.addr !527
  %9 = inttoptr i64 %8 to i32*, !insn.addr !527
  store i32 %arg2, i32* %9, align 4, !insn.addr !527
  br label %dec_label_pc_3a35, !insn.addr !527

dec_label_pc_3a35:                                ; preds = %dec_label_pc_3a1d, %dec_label_pc_3a00
  ret i64 %0, !insn.addr !528

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i64 %0, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a40:
  %storemerge.reg2mem = alloca i64, !insn.addr !529
  %0 = icmp slt i32 %arg2, 0, !insn.addr !530
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !531
  br i1 %0, label %dec_label_pc_3a87, label %dec_label_pc_3a5d, !insn.addr !531

dec_label_pc_3a5d:                                ; preds = %dec_label_pc_3a40
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !532
  %3 = inttoptr i64 %2 to i32*, !insn.addr !532
  %4 = load i32, i32* %3, align 4, !insn.addr !532
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !533
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !533
  br i1 %5, label %dec_label_pc_3a6d, label %dec_label_pc_3a87, !insn.addr !533

dec_label_pc_3a6d:                                ; preds = %dec_label_pc_3a5d
  %6 = sext i32 %arg2 to i64, !insn.addr !534
  %7 = mul i64 %6, 4, !insn.addr !535
  %8 = add i64 %7, %1, !insn.addr !535
  %9 = inttoptr i64 %8 to i32*, !insn.addr !535
  %10 = load i32, i32* %9, align 4, !insn.addr !535
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !536
  br label %dec_label_pc_3a87, !insn.addr !536

dec_label_pc_3a87:                                ; preds = %dec_label_pc_3a40, %dec_label_pc_3a5d, %dec_label_pc_3a6d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !537

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder label %dec_label_pc_3a87, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3a90:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !538
  %2 = inttoptr i64 %1 to i32*, !insn.addr !538
  %3 = load i32, i32* %2, align 4, !insn.addr !538
  %4 = zext i32 %3 to i64, !insn.addr !538
  ret i64 %4, !insn.addr !539
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ab0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !540
  %2 = inttoptr i64 %1 to i32*, !insn.addr !540
  store i32 0, i32* %2, align 4, !insn.addr !540
  ret i64 %0, !insn.addr !541

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3ad0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = call i64 @__asm_movsd.13(i128 %1), !insn.addr !542
  %4 = add i64 %2, 80, !insn.addr !543
  %5 = inttoptr i64 %4 to i32*, !insn.addr !543
  %6 = load i32, i32* %5, align 4, !insn.addr !543
  %7 = icmp sgt i32 %6, 9, !insn.addr !544
  br i1 %7, label %dec_label_pc_3b0b, label %dec_label_pc_3aef, !insn.addr !544

dec_label_pc_3aef:                                ; preds = %dec_label_pc_3ad0
  %8 = call i128 @__asm_movsd(i64 %3), !insn.addr !545
  %9 = load i32, i32* %5, align 4, !insn.addr !546
  %10 = add i32 %9, 1, !insn.addr !547
  store i32 %10, i32* %5, align 4, !insn.addr !548
  %11 = sext i32 %9 to i64, !insn.addr !549
  %12 = call i64 @__asm_movsd.13(i128 %8), !insn.addr !550
  %13 = mul i64 %11, 8, !insn.addr !550
  %14 = add i64 %13, %2, !insn.addr !550
  %15 = inttoptr i64 %14 to i64*, !insn.addr !550
  store i64 %12, i64* %15, align 8, !insn.addr !550
  br label %dec_label_pc_3b0b, !insn.addr !550

dec_label_pc_3b0b:                                ; preds = %dec_label_pc_3aef, %dec_label_pc_3ad0
  ret i64 %2, !insn.addr !551

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3b10:
  %0 = alloca i128
  %storemerge.reg2mem = alloca i64, !insn.addr !552
  %1 = load i128, i128* %0
  %2 = icmp slt i32 %arg2, 0, !insn.addr !553
  br i1 %2, label %dec_label_pc_3b54, label %dec_label_pc_3b2d, !insn.addr !554

dec_label_pc_3b2d:                                ; preds = %dec_label_pc_3b10
  %3 = ptrtoint i64* %result to i64
  %4 = add i64 %3, 80, !insn.addr !555
  %5 = inttoptr i64 %4 to i32*, !insn.addr !555
  %6 = load i32, i32* %5, align 4, !insn.addr !555
  %7 = icmp sgt i32 %6, %arg2, !insn.addr !556
  br i1 %7, label %dec_label_pc_3b3d, label %dec_label_pc_3b54, !insn.addr !556

dec_label_pc_3b3d:                                ; preds = %dec_label_pc_3b2d
  %8 = sext i32 %arg2 to i64, !insn.addr !557
  %9 = mul i64 %8, 8, !insn.addr !558
  %10 = add i64 %9, %3, !insn.addr !558
  %11 = inttoptr i64 %10 to i64*, !insn.addr !558
  %12 = load i64, i64* %11, align 8, !insn.addr !558
  %13 = call i128 @__asm_movsd(i64 %12), !insn.addr !558
  %14 = call i64 @__asm_movsd.13(i128 %13), !insn.addr !559
  store i64 %14, i64* %storemerge.reg2mem, !insn.addr !560
  br label %dec_label_pc_3b5c, !insn.addr !560

dec_label_pc_3b54:                                ; preds = %dec_label_pc_3b2d, %dec_label_pc_3b10
  %15 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !561
  %16 = call i64 @__asm_movsd.13(i128 %15), !insn.addr !562
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !562
  br label %dec_label_pc_3b5c, !insn.addr !562

dec_label_pc_3b5c:                                ; preds = %dec_label_pc_3b54, %dec_label_pc_3b3d
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %17 = call i128 @__asm_movsd(i64 %storemerge.reload), !insn.addr !563
  ret i128 %17, !insn.addr !564

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i128)* @__asm_movsd.13, { 0, 1, 2, 3, 5, 6, 7, 8, 4, 9 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 1, 2, 4, 5, 6, 7, 3, 8, 9 }
  uselistorder i32 %arg2, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3b70:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !565
  %2 = inttoptr i64 %1 to i32*, !insn.addr !565
  %3 = load i32, i32* %2, align 4, !insn.addr !565
  %4 = zext i32 %3 to i64, !insn.addr !565
  ret i64 %4, !insn.addr !566
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3b90:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !567
  ret i64 %0, !insn.addr !568
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3bc0:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !569
  ret i64 %0, !insn.addr !570
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3bf0:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !571
  ret i64* %0, !insn.addr !571
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3c00:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !572
  ret i64 %0, !insn.addr !573
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c30:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !574
  ret i64 %0, !insn.addr !575
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3c60:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !576
  %1 = mul i64 %arg2, 4, !insn.addr !577
  %2 = add i64 %0, %1, !insn.addr !578
  ret i64 %2, !insn.addr !579

; uselistorder directives
  uselistorder i64 4, { 0, 1, 2, 10, 11, 12, 13, 14, 15, 3, 4, 5, 16, 17, 6, 9, 7, 8 }
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ca0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !580
  %1 = inttoptr i64 %0 to i64*, !insn.addr !581
  %2 = load i64, i64* %1, align 8, !insn.addr !581
  %3 = icmp eq i64 %2, 0, !insn.addr !581
  br i1 %3, label %dec_label_pc_3ced, label %dec_label_pc_3ccb, !insn.addr !582

dec_label_pc_3ccb:                                ; preds = %dec_label_pc_3ca0
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result), !insn.addr !583
  %5 = load i64, i64* %1, align 8, !insn.addr !584
  %6 = inttoptr i64 %4 to i64*, !insn.addr !585
  %7 = inttoptr i64 %5 to i32*, !insn.addr !585
  %8 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i64* %6, i32* %7), !insn.addr !585
  br label %dec_label_pc_3ced, !insn.addr !586

dec_label_pc_3ced:                                ; preds = %dec_label_pc_3ccb, %dec_label_pc_3ca0
  store i64 0, i64* %1, align 8, !insn.addr !587
  ret i64 %0, !insn.addr !588

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2 }
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3d10:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !589
  %1 = inttoptr i64 %0 to i64*, !insn.addr !590
  %2 = load i64, i64* %1, align 8, !insn.addr !590
  %3 = icmp eq i64 %2, 0, !insn.addr !590
  br i1 %3, label %dec_label_pc_3d67, label %dec_label_pc_3d3b, !insn.addr !591

dec_label_pc_3d3b:                                ; preds = %dec_label_pc_3d10
  %4 = inttoptr i64 %0 to i32***, !insn.addr !592
  %5 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result), !insn.addr !593
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !594
  %7 = load i64, i64* %6, align 8, !insn.addr !595
  %8 = inttoptr i64 %5 to i64*, !insn.addr !596
  %9 = inttoptr i64 %7 to i32*, !insn.addr !596
  %10 = call i64 @_ZNKSt14default_deleteIiEclEPi(i64* %8, i32* %9), !insn.addr !596
  br label %dec_label_pc_3d67, !insn.addr !597

dec_label_pc_3d67:                                ; preds = %dec_label_pc_3d3b, %dec_label_pc_3d10
  store i64 0, i64* %1, align 8, !insn.addr !598
  ret i64 %0, !insn.addr !599

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !600
  store i64 ptrtoint (%vtable_8d50_type* @global_var_8d50 to i64), i64* %result, align 8, !insn.addr !601
  ret i64 %0, !insn.addr !602
}

define i64 @_ZN12RTTIDerivedBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3dc0:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !603
  store i64 ptrtoint (%vtable_8da0_type* @global_var_8da0 to i64), i64* %result, align 8, !insn.addr !604
  ret i64 %0, !insn.addr !605

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3e00:
  %stack_var_-25.0.reg2mem = alloca i64, !insn.addr !606
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 8, !insn.addr !607
  %3 = inttoptr i64 %2 to i64*, !insn.addr !607
  %4 = load i64, i64* %3, align 8, !insn.addr !607
  %5 = add i64 %0, 8, !insn.addr !608
  %6 = inttoptr i64 %5 to i64*, !insn.addr !608
  %7 = load i64, i64* %6, align 8, !insn.addr !608
  %8 = icmp eq i64 %4, %7, !insn.addr !608
  store i64 1, i64* %stack_var_-25.0.reg2mem, !insn.addr !609
  br i1 %8, label %dec_label_pc_3e6c, label %dec_label_pc_3e2f, !insn.addr !609

dec_label_pc_3e2f:                                ; preds = %dec_label_pc_3e00
  %9 = inttoptr i64 %4 to i8*, !insn.addr !610
  %10 = load i8, i8* %9, align 1, !insn.addr !610
  %11 = icmp eq i8 %10, 42, !insn.addr !611
  store i64 0, i64* %stack_var_-25.0.reg2mem, !insn.addr !612
  br i1 %11, label %dec_label_pc_3e6c, label %dec_label_pc_3e48, !insn.addr !612

dec_label_pc_3e48:                                ; preds = %dec_label_pc_3e2f
  %12 = inttoptr i64 %7 to i8*, !insn.addr !613
  %13 = call i32 @strcmp(i8* %9, i8* %12), !insn.addr !613
  %14 = icmp eq i32 %13, 0, !insn.addr !614
  %15 = zext i1 %14 to i64, !insn.addr !615
  store i64 %15, i64* %stack_var_-25.0.reg2mem, !insn.addr !615
  br label %dec_label_pc_3e6c, !insn.addr !615

dec_label_pc_3e6c:                                ; preds = %dec_label_pc_3e2f, %dec_label_pc_3e48, %dec_label_pc_3e00
  %stack_var_-25.0.reload = load i64, i64* %stack_var_-25.0.reg2mem
  ret i64 %stack_var_-25.0.reload, !insn.addr !616

; uselistorder directives
  uselistorder i32 0, { 13, 14, 15, 16, 17, 0, 2, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder label %dec_label_pc_3e6c, { 1, 0, 2 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e80:
  ret i64 100, !insn.addr !617
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e90:
  ret i64 200, !insn.addr !618
}

define i64 @_ZNKSt9type_info4nameEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ea0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !619
  %2 = inttoptr i64 %1 to i64*, !insn.addr !619
  %3 = load i64, i64* %2, align 8, !insn.addr !619
  %4 = inttoptr i64 %3 to i8*, !insn.addr !620
  %5 = load i8, i8* %4, align 1, !insn.addr !620
  %6 = icmp eq i8 %5, 42, !insn.addr !621
  %7 = zext i1 %6 to i64
  %storemerge = add i64 %3, %7
  ret i64 %storemerge, !insn.addr !622
}

define i64 @_ZNK4Base7getNameEv(i64* %result) {
dec_label_pc_3ef0:
  ret i64 ptrtoint ([5 x i8]* @global_var_51a1 to i64), !insn.addr !623
}

define i64 @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_3f10:
  %0 = call i64 @_ZN4BaseD2Ev(i64* %result), !insn.addr !624
  call void @_ZdlPv(i64* %result), !insn.addr !625
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !626

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN4BaseD2Ev, { 3, 2, 4, 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv(i64* %result) {
dec_label_pc_3f40:
  ret i64 ptrtoint ([8 x i8]* @global_var_51a6 to i64), !insn.addr !627
}

define i64 @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_3f60:
  %0 = call i64 @_ZN7DerivedD2Ev(i64* %result), !insn.addr !628
  call void @_ZdlPv(i64* %result), !insn.addr !629
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !630

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7DerivedD2Ev, { 2, 3, 1, 0 }
}

define i64 @_ZN5BaseAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3f90:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_89b0_type* @global_var_89b0 to i64), i64* %result, align 8, !insn.addr !631
  ret i64 %0, !insn.addr !632
}

define i64 @_ZN5BaseBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3fb0:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_89d8_type* @global_var_89d8 to i64), i64* %result, align 8, !insn.addr !633
  ret i64 %0, !insn.addr !634
}

define i64 @_ZN12MultiDerived5funcAEv(i64* %result) {
dec_label_pc_3fd0:
  ret i64 30, !insn.addr !635
}

define i64 @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_3fe0:
  %0 = call i64 @_ZN12MultiDerivedD2Ev(i64* %result), !insn.addr !636
  call void @_ZdlPv(i64* %result), !insn.addr !637
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !638
}

define i64 @_ZN12MultiDerived5funcBEv(i64* %result) {
dec_label_pc_4010:
  ret i64 40, !insn.addr !639
}

define i64 @_ZThn16_N12MultiDerived5funcBEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_4020:
  %0 = add i64 %arg1, -16, !insn.addr !640
  %1 = inttoptr i64 %0 to i64*, !insn.addr !641
  %2 = call i64 @_ZN12MultiDerived5funcBEv(i64* %1), !insn.addr !641
  ret i64 %2, !insn.addr !641

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerived5funcBEv, { 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4040:
  %0 = add i64 %arg1, -16, !insn.addr !642
  %1 = inttoptr i64 %0 to i64*, !insn.addr !643
  %2 = call i64 @_ZN12MultiDerivedD2Ev(i64* %1), !insn.addr !643
  ret i64 %2, !insn.addr !643

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerivedD2Ev, { 3, 2, 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4060:
  %0 = add i64 %arg1, -16, !insn.addr !644
  %1 = inttoptr i64 %0 to i64*, !insn.addr !645
  %2 = call i64 @_ZN12MultiDerivedD0Ev(i64* %1), !insn.addr !645
  ret i64 %2, !insn.addr !645

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define i64 @_ZN5BaseA5funcAEv(i64* %result) {
dec_label_pc_4080:
  ret i64 10, !insn.addr !646
}

define i64 @_ZN5BaseAD2Ev(i64* %result) {
dec_label_pc_4090:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !647
}

define i64 @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_40a0:
  %0 = call i64 @_ZN5BaseAD2Ev(i64* %result), !insn.addr !648
  call void @_ZdlPv(i64* %result), !insn.addr !649
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !650

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN5BaseAD2Ev, { 2, 1, 0 }
}

define i64 @_ZN5BaseB5funcBEv(i64* %result) {
dec_label_pc_40d0:
  ret i64 20, !insn.addr !651
}

define i64 @_ZN5BaseBD2Ev(i64* %result) {
dec_label_pc_40e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !652
}

define i64 @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_40f0:
  %0 = call i64 @_ZN5BaseBD2Ev(i64* %result), !insn.addr !653
  call void @_ZdlPv(i64* %result), !insn.addr !654
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !655

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN5BaseBD2Ev, { 2, 1, 0 }
}

define i64 @_ZN11VirtualBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4120:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8c38_type* @global_var_8c38 to i64), i64* %result, align 8, !insn.addr !656
  ret i64 %0, !insn.addr !657
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4140:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !658
  %2 = add i64 %0, 8, !insn.addr !659
  %3 = inttoptr i64 %2 to i64*, !insn.addr !659
  %4 = load i64, i64* %3, align 8, !insn.addr !659
  %5 = add i64 %1, -24, !insn.addr !660
  %6 = inttoptr i64 %5 to i64*, !insn.addr !660
  %7 = load i64, i64* %6, align 8, !insn.addr !660
  %8 = add i64 %7, %1, !insn.addr !661
  %9 = inttoptr i64 %8 to i64*, !insn.addr !661
  store i64 %4, i64* %9, align 8, !insn.addr !661
  ret i64 %1, !insn.addr !662

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4170:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !663
  %2 = add i64 %0, 8, !insn.addr !664
  %3 = inttoptr i64 %2 to i64*, !insn.addr !664
  %4 = load i64, i64* %3, align 8, !insn.addr !664
  %5 = add i64 %1, -24, !insn.addr !665
  %6 = inttoptr i64 %5 to i64*, !insn.addr !665
  %7 = load i64, i64* %6, align 8, !insn.addr !665
  %8 = add i64 %7, %1, !insn.addr !666
  %9 = inttoptr i64 %8 to i64*, !insn.addr !666
  store i64 %4, i64* %9, align 8, !insn.addr !666
  ret i64 %1, !insn.addr !667

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_41a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !668
  %2 = inttoptr i64 %1 to i64*, !insn.addr !668
  %3 = load i64, i64* %2, align 8, !insn.addr !668
  %4 = add i64 %0, 8, !insn.addr !669
  %5 = add i64 %4, %3, !insn.addr !669
  %6 = inttoptr i64 %5 to i32*, !insn.addr !669
  %7 = load i32, i32* %6, align 4, !insn.addr !669
  %8 = add i32 %7, 150, !insn.addr !670
  %9 = zext i32 %8 to i64, !insn.addr !670
  ret i64 %9, !insn.addr !671

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleAD1Ev(i64* %result) {
dec_label_pc_41c0:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* inttoptr (i64 36024 to i64*)), !insn.addr !672
  %2 = add i64 %0, 16, !insn.addr !673
  %3 = inttoptr i64 %2 to i64*, !insn.addr !674
  %4 = call i64 @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !674
  ret i64 %4, !insn.addr !675
}

define i64 @_ZN7MiddleAD0Ev(i64* %result) {
dec_label_pc_4200:
  %0 = call i64 @_ZN7MiddleAD1Ev(i64* %result), !insn.addr !676
  call void @_ZdlPv(i64* %result), !insn.addr !677
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !678
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_4230:
  %0 = add i64 %arg1, -24, !insn.addr !679
  %1 = inttoptr i64 %0 to i64*, !insn.addr !679
  %2 = load i64, i64* %1, align 8, !insn.addr !679
  %3 = add i64 %2, %arg1, !insn.addr !680
  %4 = inttoptr i64 %3 to i64*, !insn.addr !681
  %5 = call i64 @_ZN7MiddleA4funcEv(i64* %4), !insn.addr !681
  ret i64 %5, !insn.addr !681

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleA4funcEv, { 2, 0, 1 }
}

define i64 @_ZTv0_n32_N7MiddleAD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4250:
  %0 = add i64 %arg1, -32, !insn.addr !682
  %1 = inttoptr i64 %0 to i64*, !insn.addr !682
  %2 = load i64, i64* %1, align 8, !insn.addr !682
  %3 = add i64 %2, %arg1, !insn.addr !683
  %4 = inttoptr i64 %3 to i64*, !insn.addr !684
  %5 = call i64 @_ZN7MiddleAD1Ev(i64* %4), !insn.addr !684
  ret i64 %5, !insn.addr !684

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleAD1Ev, { 3, 2, 0, 1 }
}

define i64 @_ZTv0_n32_N7MiddleAD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4270:
  %0 = add i64 %arg1, -32, !insn.addr !685
  %1 = inttoptr i64 %0 to i64*, !insn.addr !685
  %2 = load i64, i64* %1, align 8, !insn.addr !685
  %3 = add i64 %2, %arg1, !insn.addr !686
  %4 = inttoptr i64 %3 to i64*, !insn.addr !687
  %5 = call i64 @_ZN7MiddleAD0Ev(i64* %4), !insn.addr !687
  ret i64 %5, !insn.addr !687

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleAD0Ev, { 2, 0, 1 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_4290:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !688
  %2 = inttoptr i64 %1 to i64*, !insn.addr !688
  %3 = load i64, i64* %2, align 8, !insn.addr !688
  %4 = add i64 %0, 8, !insn.addr !689
  %5 = add i64 %4, %3, !insn.addr !689
  %6 = inttoptr i64 %5 to i32*, !insn.addr !689
  %7 = load i32, i32* %6, align 4, !insn.addr !689
  %8 = add i32 %7, 200, !insn.addr !690
  %9 = zext i32 %8 to i64, !insn.addr !690
  ret i64 %9, !insn.addr !691

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleBD1Ev(i64* %result) {
dec_label_pc_42b0:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleBD2Ev(i64* %result, i64* inttoptr (i64 36144 to i64*)), !insn.addr !692
  %2 = add i64 %0, 16, !insn.addr !693
  %3 = inttoptr i64 %2 to i64*, !insn.addr !694
  %4 = call i64 @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !694
  ret i64 %4, !insn.addr !695
}

define i64 @_ZN7MiddleBD0Ev(i64* %result) {
dec_label_pc_42f0:
  %0 = call i64 @_ZN7MiddleBD1Ev(i64* %result), !insn.addr !696
  call void @_ZdlPv(i64* %result), !insn.addr !697
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !698
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_4320:
  %0 = add i64 %arg1, -24, !insn.addr !699
  %1 = inttoptr i64 %0 to i64*, !insn.addr !699
  %2 = load i64, i64* %1, align 8, !insn.addr !699
  %3 = add i64 %2, %arg1, !insn.addr !700
  %4 = inttoptr i64 %3 to i64*, !insn.addr !701
  %5 = call i64 @_ZN7MiddleB4funcEv(i64* %4), !insn.addr !701
  ret i64 %5, !insn.addr !701

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleB4funcEv, { 2, 0, 1 }
}

define i64 @_ZTv0_n32_N7MiddleBD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4340:
  %0 = add i64 %arg1, -32, !insn.addr !702
  %1 = inttoptr i64 %0 to i64*, !insn.addr !702
  %2 = load i64, i64* %1, align 8, !insn.addr !702
  %3 = add i64 %2, %arg1, !insn.addr !703
  %4 = inttoptr i64 %3 to i64*, !insn.addr !704
  %5 = call i64 @_ZN7MiddleBD1Ev(i64* %4), !insn.addr !704
  ret i64 %5, !insn.addr !704

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleBD1Ev, { 3, 2, 0, 1 }
}

define i64 @_ZTv0_n32_N7MiddleBD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4360:
  %0 = add i64 %arg1, -32, !insn.addr !705
  %1 = inttoptr i64 %0 to i64*, !insn.addr !705
  %2 = load i64, i64* %1, align 8, !insn.addr !705
  %3 = add i64 %2, %arg1, !insn.addr !706
  %4 = inttoptr i64 %3 to i64*, !insn.addr !707
  %5 = call i64 @_ZN7MiddleBD0Ev(i64* %4), !insn.addr !707
  ret i64 %5, !insn.addr !707

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleBD0Ev, { 2, 0, 1 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_4380:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !708
  %2 = inttoptr i64 %1 to i64*, !insn.addr !708
  %3 = load i64, i64* %2, align 8, !insn.addr !708
  %4 = add i64 %0, 8, !insn.addr !709
  %5 = add i64 %4, %3, !insn.addr !709
  %6 = inttoptr i64 %5 to i32*, !insn.addr !709
  %7 = load i32, i32* %6, align 4, !insn.addr !709
  %8 = add i32 %7, 250, !insn.addr !710
  %9 = zext i32 %8 to i64, !insn.addr !710
  ret i64 %9, !insn.addr !711

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_43a0:
  %0 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !712
  call void @_ZdlPv(i64* %result), !insn.addr !713
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !714
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_43d0:
  %0 = add i64 %arg1, -16, !insn.addr !715
  %1 = inttoptr i64 %0 to i64*, !insn.addr !716
  %2 = call i64 @_ZN14DiamondDerived4funcEv(i64* %1), !insn.addr !716
  ret i64 %2, !insn.addr !716
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_43f0:
  %0 = add i64 %arg1, -16, !insn.addr !717
  %1 = inttoptr i64 %0 to i64*, !insn.addr !718
  %2 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %1), !insn.addr !718
  ret i64 %2, !insn.addr !718
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4410:
  %0 = add i64 %arg1, -16, !insn.addr !719
  %1 = inttoptr i64 %0 to i64*, !insn.addr !720
  %2 = call i64 @_ZN14DiamondDerivedD0Ev(i64* %1), !insn.addr !720
  ret i64 %2, !insn.addr !720

; uselistorder directives
  uselistorder i64 -16, { 5, 6, 7, 8, 9, 10, 3, 0, 1, 2, 4 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_4430:
  %0 = add i64 %arg1, -24, !insn.addr !721
  %1 = inttoptr i64 %0 to i64*, !insn.addr !721
  %2 = load i64, i64* %1, align 8, !insn.addr !721
  %3 = add i64 %2, %arg1, !insn.addr !722
  %4 = inttoptr i64 %3 to i64*, !insn.addr !723
  %5 = call i64 @_ZN14DiamondDerived4funcEv(i64* %4), !insn.addr !723
  ret i64 %5, !insn.addr !723

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 -24, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0 }
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4450:
  %0 = add i64 %arg1, -32, !insn.addr !724
  %1 = inttoptr i64 %0 to i64*, !insn.addr !724
  %2 = load i64, i64* %1, align 8, !insn.addr !724
  %3 = add i64 %2, %arg1, !insn.addr !725
  %4 = inttoptr i64 %3 to i64*, !insn.addr !726
  %5 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %4), !insn.addr !726
  ret i64 %5, !insn.addr !726

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN14DiamondDerivedD1Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4470:
  %0 = add i64 %arg1, -32, !insn.addr !727
  %1 = inttoptr i64 %0 to i64*, !insn.addr !727
  %2 = load i64, i64* %1, align 8, !insn.addr !727
  %3 = add i64 %2, %arg1, !insn.addr !728
  %4 = inttoptr i64 %3 to i64*, !insn.addr !729
  %5 = call i64 @_ZN14DiamondDerivedD0Ev(i64* %4), !insn.addr !729
  ret i64 %5, !insn.addr !729

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
  uselistorder i64 -32, { 4, 5, 6, 7, 8, 9, 0, 2, 1, 3 }
}

define i64 @_ZN11VirtualBase4funcEv(i64* %result) {
dec_label_pc_4490:
  ret i64 100, !insn.addr !730
}

define i64 @_ZN11VirtualBaseD2Ev(i64* %result) {
dec_label_pc_44a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !731
}

define i64 @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_44b0:
  %0 = call i64 @_ZN11VirtualBaseD2Ev(i64* %result), !insn.addr !732
  call void @_ZdlPv(i64* %result), !insn.addr !733
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !734

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN11VirtualBaseD2Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_44e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !735
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_44f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !736
}

define i64 @_ZN14DiamondDerivedD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4500:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  %2 = add i64 %1, 16, !insn.addr !737
  %3 = add i64 %0, 24, !insn.addr !738
  %4 = inttoptr i64 %2 to i64*, !insn.addr !739
  %5 = inttoptr i64 %3 to i64*, !insn.addr !739
  %6 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* %5), !insn.addr !739
  %7 = add i64 %0, 8, !insn.addr !740
  %8 = inttoptr i64 %7 to i64*, !insn.addr !741
  %9 = call i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %8), !insn.addr !741
  ret i64 %9, !insn.addr !742

; uselistorder directives
  uselistorder i64 8, { 12, 4, 5, 6, 13, 14, 7, 8, 9, 0, 1, 15, 16, 17, 18, 2, 3, 10, 11 }
  uselistorder i64 16, { 3, 0, 1, 4, 5, 6, 2 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4550:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !743
  ret i64 %0, !insn.addr !744
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4580:
  %0 = bitcast i64* %arg2 to i64**, !insn.addr !745
  %1 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %0), !insn.addr !745
  %2 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %1), !insn.addr !746
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !747
  %4 = inttoptr i64 %3 to i64*, !insn.addr !748
  store i64 0, i64* %4, align 8, !insn.addr !748
  ret i64 %3, !insn.addr !749
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_45e0:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !750
  ret i64* %0, !insn.addr !750
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_45f0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2), !insn.addr !751
  ret i64 %0, !insn.addr !752
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4620:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !753
  %1 = ptrtoint i64* %0 to i64, !insn.addr !753
  ret i64 %1, !insn.addr !754
}

define i64 @__clang_call_terminate() local_unnamed_addr {
dec_label_pc_4640:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @__cxa_begin_catch(i64 %1), !insn.addr !755
  %3 = call i64 @_ZSt9terminatev(), !insn.addr !756
  ret i64 %3, !insn.addr !756
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4650:
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !757
  store i64 %0, i64* %result, align 8, !insn.addr !758
  ret i64 %1, !insn.addr !759
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4690:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !760
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46a0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !761
  %1 = bitcast i32** %0 to i64*, !insn.addr !762
  ret i64* %1, !insn.addr !762
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_46c0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !763
  %1 = inttoptr i64 %0 to i32**, !insn.addr !764
  ret i32** %1, !insn.addr !764
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46e0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !765
  ret i64 %0, !insn.addr !766
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4700:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !767
}

define i64 @_ZN8RTTIBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4710:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8d78_type* @global_var_8d78 to i64), i64* %result, align 8, !insn.addr !768
  ret i64 %0, !insn.addr !769
}

define i64 @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_4730:
  %0 = call i64 @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !770
  ret i64 %0, !insn.addr !771
}

define i64 @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_4750:
  %0 = call i64 @_ZN12RTTIDerivedAD2Ev(i64* %result), !insn.addr !772
  call void @_ZdlPv(i64* %result), !insn.addr !773
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !774

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedAD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv(i64* %result) {
dec_label_pc_4780:
  ret i64 1, !insn.addr !775

; uselistorder directives
  uselistorder i64 1, { 1, 0, 3, 2 }
}

define i64 @_ZN8RTTIBaseD2Ev(i64* %result) {
dec_label_pc_4790:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !776
}

define i64 @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_47a0:
  %0 = call i64 @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !777
  call void @_ZdlPv(i64* %result), !insn.addr !778
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !779
}

define i64 @_ZNK8RTTIBase7getTypeEv(i64* %result) {
dec_label_pc_47d0:
  ret i64 0, !insn.addr !780
}

define i64 @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_47e0:
  %0 = call i64 @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !781
  ret i64 %0, !insn.addr !782

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN8RTTIBaseD2Ev, { 3, 2, 1, 0 }
}

define i64 @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_4800:
  %0 = call i64 @_ZN12RTTIDerivedBD2Ev(i64* %result), !insn.addr !783
  call void @_ZdlPv(i64* %result), !insn.addr !784
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !785

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedBD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv(i64* %result) {
dec_label_pc_4830:
  ret i64 2, !insn.addr !786

; uselistorder directives
  uselistorder i64 2, { 0, 1, 2, 4, 3, 5 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4840:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2), !insn.addr !787
  ret i64 %0, !insn.addr !788
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4870:
  %0 = ptrtoint i32* %arg2 to i64
  %1 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !789
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !790
  %3 = inttoptr i64 %2 to i64*, !insn.addr !791
  store i64 %0, i64* %3, align 8, !insn.addr !791
  ret i64 %2, !insn.addr !792

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_48b0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !793
  ret i64 %0, !insn.addr !794
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48e0:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !795
  %1 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !796
  ret i64 %1, !insn.addr !797
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4910:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result), !insn.addr !798
  ret i64 %0, !insn.addr !799
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4930:
  %0 = ptrtoint i64* %result to i64
  store i64 0, i64* %result, align 8, !insn.addr !800
  ret i64 %0, !insn.addr !801

; uselistorder directives
  uselistorder i64 0, { 62, 6, 63, 0, 64, 65, 66, 67, 2, 1, 3, 4, 9, 7, 59, 36, 60, 37, 38, 39, 61, 68, 69, 40, 41, 42, 43, 70, 8, 5, 71, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4950:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !802
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4960:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !803
  ret i64 %0, !insn.addr !804
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4990:
  %rax.0.reg2mem = alloca i64, !insn.addr !805
  %0 = ptrtoint i32* %arg2 to i64
  %1 = icmp eq i32* %arg2, null, !insn.addr !806
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !807
  br i1 %1, label %dec_label_pc_49bb, label %dec_label_pc_49b2, !insn.addr !807

dec_label_pc_49b2:                                ; preds = %dec_label_pc_4990
  %2 = bitcast i32* %arg2 to i64*
  call void @_ZdlPv(i64* %2), !insn.addr !808
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !808
  br label %dec_label_pc_49bb, !insn.addr !808

dec_label_pc_49bb:                                ; preds = %dec_label_pc_49b2, %dec_label_pc_4990
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !809

; uselistorder directives
  uselistorder void (i64*)* @_ZdlPv, { 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 14 }
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_49d0:
  %0 = bitcast i32*** %arg1 to i64*, !insn.addr !810
  ret i64* %0, !insn.addr !810
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_49e0:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !811
  %1 = ptrtoint i64* %0 to i64, !insn.addr !811
  ret i64 %1, !insn.addr !812
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a00:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !813
  ret i64* %0, !insn.addr !814
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a20:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !815
  %1 = inttoptr i64 %0 to i64*, !insn.addr !816
  ret i64* %1, !insn.addr !816
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a40:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1), !insn.addr !817
  ret i64 %0, !insn.addr !818
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a60:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !819
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4a70:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !820
  ret i64 %0, !insn.addr !821
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4aa0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !822
  %1 = load i64, i64* %0, align 8, !insn.addr !823
  ret i64 %1, !insn.addr !824
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4ac0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !825
  %1 = bitcast i32** %0 to i64*, !insn.addr !826
  ret i64* %1, !insn.addr !826
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4ae0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !827
  %1 = inttoptr i64 %0 to i32**, !insn.addr !828
  ret i32** %1, !insn.addr !828
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b00:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !829
  ret i64 %0, !insn.addr !830
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b20:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !831
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4b30:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2), !insn.addr !832
  ret i64 %0, !insn.addr !833
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4b60:
  %0 = ptrtoint i32* %arg2 to i64
  %1 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !834
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !835
  %3 = inttoptr i64 %2 to i64*, !insn.addr !836
  store i64 %0, i64* %3, align 8, !insn.addr !836
  ret i64 %2, !insn.addr !837

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_4ba0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !838
  ret i64 %0, !insn.addr !839
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4bd0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !840
  %1 = ptrtoint i64* %0 to i64, !insn.addr !840
  ret i64 %1, !insn.addr !841
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4bf0:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !842
  %1 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !843
  ret i64 %1, !insn.addr !844

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev, { 1, 0 }
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4c20:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result), !insn.addr !845
  ret i64 %0, !insn.addr !846
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4c40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !847
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c50:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !848
  %1 = bitcast i32** %0 to i64*, !insn.addr !849
  ret i64* %1, !insn.addr !849
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c70:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !850
  %1 = inttoptr i64 %0 to i32**, !insn.addr !851
  ret i32** %1, !insn.addr !851
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4c90:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !852
  ret i64 %0, !insn.addr !853

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4cb0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !854
  ret i64 %0, !insn.addr !855
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4ce0:
  %rax.0.reg2mem = alloca i64, !insn.addr !856
  %0 = ptrtoint i32* %arg2 to i64
  %1 = icmp eq i32* %arg2, null, !insn.addr !857
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !858
  br i1 %1, label %dec_label_pc_4d0b, label %dec_label_pc_4d02, !insn.addr !858

dec_label_pc_4d02:                                ; preds = %dec_label_pc_4ce0
  %2 = bitcast i32* %arg2 to i64*
  %3 = and i64 %0, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !859
  call void @_ZdaPv(i64* %2, i64* %4), !insn.addr !859
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !859
  br label %dec_label_pc_4d0b, !insn.addr !859

dec_label_pc_4d0b:                                ; preds = %dec_label_pc_4d02, %dec_label_pc_4ce0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !860

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 2, 16, 17, 18, 19, 3 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 6, 7, 0, 1, 8, 9, 10, 2, 3, 4, 5, 11 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4d20:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !861
  %1 = ptrtoint i64* %0 to i64, !insn.addr !861
  ret i64 %1, !insn.addr !862
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d40:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !863
  ret i64* %0, !insn.addr !864
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d60:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !865
  %1 = inttoptr i64 %0 to i64*, !insn.addr !866
  ret i64* %1, !insn.addr !866
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4d80:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1), !insn.addr !867
  ret i64 %0, !insn.addr !868
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4da0:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !869
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4db0:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !870
  ret i64 %0, !insn.addr !871
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4de0:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !872
  %1 = load i64, i64* %0, align 8, !insn.addr !873
  ret i64 %1, !insn.addr !874
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e00:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !875
  %1 = bitcast i32** %0 to i64*, !insn.addr !876
  ret i64* %1, !insn.addr !876
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e20:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !877
  %1 = inttoptr i64 %0 to i32**, !insn.addr !878
  ret i32** %1, !insn.addr !878
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e40:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !879
  ret i64 %0, !insn.addr !880

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4e60:
  %0 = bitcast i64* %arg1 to i32***, !insn.addr !881
  ret i32*** %0, !insn.addr !881
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_4e70:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i32*** %arg2 to i64*, !insn.addr !882
  %2 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %1), !insn.addr !882
  %3 = load i32**, i32*** %2, align 8, !insn.addr !883
  %4 = ptrtoint i32** %3 to i64, !insn.addr !883
  store i64 %4, i64* %result, align 8, !insn.addr !884
  ret i64 %0, !insn.addr !885

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4ea4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !886

; uselistorder directives
  uselistorder i32 1, { 38, 41, 37, 42, 36, 35, 34, 33, 32, 31, 30, 29, 28, 43, 44, 2, 82, 1, 45, 83, 27, 46, 40, 0, 84, 85, 26, 47, 25, 59, 24, 23, 86, 22, 48, 50, 49, 21, 20, 51, 19, 18, 57, 17, 53, 52, 16, 15, 14, 13, 12, 11, 10, 81, 64, 63, 62, 61, 60, 56, 66, 65, 68, 67, 70, 69, 55, 72, 71, 58, 39, 9, 74, 73, 8, 75, 7, 6, 5, 4, 77, 76, 78, 79, 3, 80, 54 }
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
!51 = !{i64 8944}
!52 = !{i64 8952}
!53 = !{i64 8963}
!54 = !{i64 8966}
!55 = !{i64 8974}
!56 = !{i64 9004}
!57 = !{i64 9018}
!58 = !{i64 9042}
!59 = !{i64 9058}
!60 = !{i64 9068}
!61 = !{i64 9073}
!62 = !{i64 9078}
!63 = !{i64 9084}
!64 = !{i64 9090}
!65 = !{i64 9098}
!66 = !{i64 9168}
!67 = !{i64 9196}
!68 = !{i64 9210}
!69 = !{i64 9229}
!70 = !{i64 9257}
!71 = !{i64 9301}
!72 = !{i64 9329}
!73 = !{i64 9351}
!74 = !{i64 9354}
!75 = !{i64 9357}
!76 = !{i64 9367}
!77 = !{i64 9376}
!78 = !{i64 9381}
!79 = !{i64 9389}
!80 = !{i64 9393}
!81 = !{i64 9395}
!82 = !{i64 9399}
!83 = !{i64 9402}
!84 = !{i64 9410}
!85 = !{i64 9412}
!86 = !{i64 9416}
!87 = !{i64 9419}
!88 = !{i64 9423}
!89 = !{i64 9428}
!90 = !{i64 9432}
!91 = !{i64 9437}
!92 = !{i64 9441}
!93 = !{i64 9446}
!94 = !{i64 9468}
!95 = !{i64 9539}
!96 = !{i64 9542}
!97 = !{i64 9568}
!98 = !{i64 9614}
!99 = !{i64 9617}
!100 = !{i64 9627}
!101 = !{i64 9632}
!102 = !{i64 9640}
!103 = !{i64 9670}
!104 = !{i64 9681}
!105 = !{i64 9692}
!106 = !{i64 9697}
!107 = !{i64 9701}
!108 = !{i64 9705}
!109 = !{i64 9733}
!110 = !{i64 9737}
!111 = !{i64 9741}
!112 = !{i64 9745}
!113 = !{i64 9764}
!114 = !{i64 9767}
!115 = !{i64 9794}
!116 = !{i64 9806}
!117 = !{i64 9809}
!118 = !{i64 9831}
!119 = !{i64 9841}
!120 = !{i64 9846}
!121 = !{i64 9854}
!122 = !{i64 9881}
!123 = !{i64 9910}
!124 = !{i64 9929}
!125 = !{i64 9942}
!126 = !{i64 9947}
!127 = !{i64 9959}
!128 = !{i64 9973}
!129 = !{i64 9978}
!130 = !{i64 9981}
!131 = !{i64 9995}
!132 = !{i64 9999}
!133 = !{i64 10002}
!134 = !{i64 10009}
!135 = !{i64 10034}
!136 = !{i64 10042}
!137 = !{i64 10050}
!138 = !{i64 10058}
!139 = !{i64 10063}
!140 = !{i64 10068}
!141 = !{i64 10075}
!142 = !{i64 10090}
!143 = !{i64 10098}
!144 = !{i64 10103}
!145 = !{i64 10105}
!146 = !{i64 10108}
!147 = !{i64 10116}
!148 = !{i64 10143}
!149 = !{i64 10157}
!150 = !{i64 10171}
!151 = !{i64 10185}
!152 = !{i64 10196}
!153 = !{i64 10201}
!154 = !{i64 10208}
!155 = !{i64 10213}
!156 = !{i64 10223}
!157 = !{i64 10228}
!158 = !{i64 10235}
!159 = !{i64 10243}
!160 = !{i64 10257}
!161 = !{i64 10262}
!162 = !{i64 10273}
!163 = !{i64 10276}
!164 = !{i64 10284}
!165 = !{i64 10294}
!166 = !{i64 10329}
!167 = !{i64 10349}
!168 = !{i64 10371}
!169 = !{i64 10382}
!170 = !{i64 10390}
!171 = !{i64 10415}
!172 = !{i64 10419}
!173 = !{i64 10421}
!174 = !{i64 10424}
!175 = !{i64 10429}
!176 = !{i64 10432}
!177 = !{i64 10436}
!178 = !{i64 10439}
!179 = !{i64 10465}
!180 = !{i64 10469}
!181 = !{i64 10500}
!182 = !{i64 10508}
!183 = !{i64 10514}
!184 = !{i64 10525}
!185 = !{i64 10822}
!186 = !{i64 10848}
!187 = !{i64 10856}
!188 = !{i64 10870}
!189 = !{i64 10879}
!190 = !{i64 10884}
!191 = !{i64 10897}
!192 = !{i64 10907}
!193 = !{i64 10923}
!194 = !{i64 10932}
!195 = !{i64 10937}
!196 = !{i64 10950}
!197 = !{i64 10960}
!198 = !{i64 10965}
!199 = !{i64 10978}
!200 = !{i64 10984}
!201 = !{i64 10991}
!202 = !{i64 10998}
!203 = !{i64 11005}
!204 = !{i64 11020}
!205 = !{i64 11034}
!206 = !{i64 11039}
!207 = !{i64 11052}
!208 = !{i64 11062}
!209 = !{i64 11067}
!210 = !{i64 11086}
!211 = !{i64 11107}
!212 = !{i64 11119}
!213 = !{i64 11124}
!214 = !{i64 11143}
!215 = !{i64 11151}
!216 = !{i64 11154}
!217 = !{i64 11167}
!218 = !{i64 11176}
!219 = !{i64 11185}
!220 = !{i64 11194}
!221 = !{i64 11199}
!222 = !{i64 11213}
!223 = !{i64 11217}
!224 = !{i64 11219}
!225 = !{i64 11223}
!226 = !{i64 11226}
!227 = !{i64 11234}
!228 = !{i64 11236}
!229 = !{i64 11240}
!230 = !{i64 11243}
!231 = !{i64 11251}
!232 = !{i64 11253}
!233 = !{i64 11257}
!234 = !{i64 11260}
!235 = !{i64 11268}
!236 = !{i64 11270}
!237 = !{i64 11274}
!238 = !{i64 11277}
!239 = !{i64 11281}
!240 = !{i64 11286}
!241 = !{i64 11290}
!242 = !{i64 11295}
!243 = !{i64 11299}
!244 = !{i64 11304}
!245 = !{i64 11308}
!246 = !{i64 11313}
!247 = !{i64 11317}
!248 = !{i64 11322}
!249 = !{i64 11360}
!250 = !{i64 11375}
!251 = !{i64 11421}
!252 = !{i64 11431}
!253 = !{i64 11460}
!254 = !{i64 11486}
!255 = !{i64 11490}
!256 = !{i64 11478}
!257 = !{i64 11500}
!258 = !{i64 11513}
!259 = !{i64 11522}
!260 = !{i64 11525}
!261 = !{i64 11535}
!262 = !{i64 11544}
!263 = !{i64 11556}
!264 = !{i64 11568}
!265 = !{i64 11584}
!266 = !{i64 11603}
!267 = !{i64 11612}
!268 = !{i64 11630}
!269 = !{i64 11649}
!270 = !{i64 11658}
!271 = !{i64 11686}
!272 = !{i64 11690}
!273 = !{i64 11696}
!274 = !{i64 11667}
!275 = !{i64 11705}
!276 = !{i64 11708}
!277 = !{i64 11719}
!278 = !{i64 11754}
!279 = !{i64 11758}
!280 = !{i64 11764}
!281 = !{i64 11621}
!282 = !{i64 11724}
!283 = !{i64 11726}
!284 = !{i64 11746}
!285 = !{i64 11773}
!286 = !{i64 11776}
!287 = !{i64 11787}
!288 = !{i64 11792}
!289 = !{i64 11794}
!290 = !{i64 11822}
!291 = !{i64 11826}
!292 = !{i64 11814}
!293 = !{i64 11854}
!294 = !{i64 11887}
!295 = !{i64 11892}
!296 = !{i64 11902}
!297 = !{i64 11907}
!298 = !{i64 11910}
!299 = !{i64 11925}
!300 = !{i64 11953}
!301 = !{i64 11986}
!302 = !{i64 11991}
!303 = !{i64 12001}
!304 = !{i64 12006}
!305 = !{i64 12009}
!306 = !{i64 12024}
!307 = !{i64 12030}
!308 = !{i64 12012}
!309 = !{i64 12039}
!310 = !{i64 12042}
!311 = !{i64 12046}
!312 = !{i64 12054}
!313 = !{i64 12066}
!314 = !{i64 12128}
!315 = !{i64 12139}
!316 = !{i64 12157}
!317 = !{i64 12162}
!318 = !{i64 12178}
!319 = !{i64 12183}
!320 = !{i64 12199}
!321 = !{i64 12204}
!322 = !{i64 12220}
!323 = !{i64 12225}
!324 = !{i64 12241}
!325 = !{i64 12246}
!326 = !{i64 12262}
!327 = !{i64 12267}
!328 = !{i64 12283}
!329 = !{i64 12288}
!330 = !{i64 12304}
!331 = !{i64 12309}
!332 = !{i64 12325}
!333 = !{i64 12330}
!334 = !{i64 12335}
!335 = !{i64 12346}
!336 = !{i64 12351}
!337 = !{i64 12367}
!338 = !{i64 12372}
!339 = !{i64 12377}
!340 = !{i64 12388}
!341 = !{i64 12393}
!342 = !{i64 12409}
!343 = !{i64 12415}
!344 = !{i64 12431}
!345 = !{i64 12443}
!346 = !{i64 12480}
!347 = !{i64 12490}
!348 = !{i64 12508}
!349 = !{i64 12528}
!350 = !{i64 12544}
!351 = !{i64 12554}
!352 = !{i64 12573}
!353 = !{i64 12608}
!354 = !{i64 12621}
!355 = !{i64 12637}
!356 = !{i64 12652}
!357 = !{i64 12657}
!358 = !{i64 12708}
!359 = !{i64 12720}
!360 = !{i64 12737}
!361 = !{i64 12749}
!362 = !{i64 12759}
!363 = !{i64 12792}
!364 = !{i64 12802}
!365 = !{i64 12829}
!366 = !{i64 12848}
!367 = !{i64 12858}
!368 = !{i64 12880}
!369 = !{i64 12903}
!370 = !{i64 12912}
!371 = !{i64 12932}
!372 = !{i64 12946}
!373 = !{i64 12950}
!374 = !{i64 12960}
!375 = !{i64 12970}
!376 = !{i64 12992}
!377 = !{i64 13002}
!378 = !{i64 13024}
!379 = !{i64 13034}
!380 = !{i64 13056}
!381 = !{i64 13066}
!382 = !{i64 13088}
!383 = !{i64 13098}
!384 = !{i64 13120}
!385 = !{i64 13130}
!386 = !{i64 13152}
!387 = !{i64 13162}
!388 = !{i64 13184}
!389 = !{i64 13194}
!390 = !{i64 13213}
!391 = !{i64 13232}
!392 = !{i64 13255}
!393 = !{i64 13280}
!394 = !{i64 13285}
!395 = !{i64 13293}
!396 = !{i64 13312}
!397 = !{i64 13322}
!398 = !{i64 13344}
!399 = !{i64 13354}
!400 = !{i64 13376}
!401 = !{i64 13386}
!402 = !{i64 13422}
!403 = !{i64 13424}
!404 = !{i64 13437}
!405 = !{i64 13446}
!406 = !{i64 13455}
!407 = !{i64 13474}
!408 = !{i64 13477}
!409 = !{i64 13500}
!410 = !{i64 13503}
!411 = !{i64 13525}
!412 = !{i64 13529}
!413 = !{i64 13535}
!414 = !{i64 13539}
!415 = !{i64 13551}
!416 = !{i64 13559}
!417 = !{i64 13578}
!418 = !{i64 13584}
!419 = !{i64 13612}
!420 = !{i64 13625}
!421 = !{i64 13641}
!422 = !{i64 13645}
!423 = !{i64 13657}
!424 = !{i64 13672}
!425 = !{i64 13676}
!426 = !{i64 13686}
!427 = !{i64 13700}
!428 = !{i64 13707}
!429 = !{i64 13729}
!430 = !{i64 13740}
!431 = !{i64 13744}
!432 = !{i64 13768}
!433 = !{i64 13772}
!434 = !{i64 13789}
!435 = !{i64 13795}
!436 = !{i64 13817}
!437 = !{i64 13828}
!438 = !{i64 13835}
!439 = !{i64 13863}
!440 = !{i64 13867}
!441 = !{i64 13877}
!442 = !{i64 13891}
!443 = !{i64 13902}
!444 = !{i64 13927}
!445 = !{i64 13931}
!446 = !{i64 13959}
!447 = !{i64 13979}
!448 = !{i64 13985}
!449 = !{i64 13993}
!450 = !{i64 14014}
!451 = !{i64 14018}
!452 = !{i64 14050}
!453 = !{i64 14055}
!454 = !{i64 14080}
!455 = !{i64 14090}
!456 = !{i64 14105}
!457 = !{i64 14132}
!458 = !{i64 14141}
!459 = !{i64 14145}
!460 = !{i64 14165}
!461 = !{i64 14179}
!462 = !{i64 14188}
!463 = !{i64 14212}
!464 = !{i64 14216}
!465 = !{i64 14225}
!466 = !{i64 14235}
!467 = !{i64 14260}
!468 = !{i64 14264}
!469 = !{i64 14284}
!470 = !{i64 14293}
!471 = !{i64 14308}
!472 = !{i64 14328}
!473 = !{i64 14345}
!474 = !{i64 14360}
!475 = !{i64 14369}
!476 = !{i64 14411}
!477 = !{i64 14420}
!478 = !{i64 14424}
!479 = !{i64 14434}
!480 = !{i64 14469}
!481 = !{i64 14474}
!482 = !{i64 14478}
!483 = !{i64 14506}
!484 = !{i64 14508}
!485 = !{i64 14515}
!486 = !{i64 14522}
!487 = !{i64 14527}
!488 = !{i64 14536}
!489 = !{i64 14544}
!490 = !{i64 14572}
!491 = !{i64 14577}
!492 = !{i64 14587}
!493 = !{i64 14594}
!494 = !{i64 14600}
!495 = !{i64 14612}
!496 = !{i64 14638}
!497 = !{i64 14641}
!498 = !{i64 14643}
!499 = !{i64 14646}
!500 = !{i64 14649}
!501 = !{i64 14653}
!502 = !{i64 14672}
!503 = !{i64 14699}
!504 = !{i64 14704}
!505 = !{i64 14708}
!506 = !{i64 14713}
!507 = !{i64 14718}
!508 = !{i64 14723}
!509 = !{i64 14728}
!510 = !{i64 14734}
!511 = !{i64 14739}
!512 = !{i64 14744}
!513 = !{i64 14749}
!514 = !{i64 14754}
!515 = !{i64 14759}
!516 = !{i64 14765}
!517 = !{i64 14799}
!518 = !{i64 14808}
!519 = !{i64 14811}
!520 = !{i64 14828}
!521 = !{i64 14836}
!522 = !{i64 14867}
!523 = !{i64 14871}
!524 = !{i64 14889}
!525 = !{i64 14892}
!526 = !{i64 14895}
!527 = !{i64 14898}
!528 = !{i64 14902}
!529 = !{i64 14912}
!530 = !{i64 14931}
!531 = !{i64 14935}
!532 = !{i64 14948}
!533 = !{i64 14951}
!534 = !{i64 14961}
!535 = !{i64 14965}
!536 = !{i64 14971}
!537 = !{i64 14987}
!538 = !{i64 15004}
!539 = !{i64 15008}
!540 = !{i64 15036}
!541 = !{i64 15044}
!542 = !{i64 15064}
!543 = !{i64 15077}
!544 = !{i64 15081}
!545 = !{i64 15091}
!546 = !{i64 15096}
!547 = !{i64 15101}
!548 = !{i64 15104}
!549 = !{i64 15107}
!550 = !{i64 15110}
!551 = !{i64 15116}
!552 = !{i64 15120}
!553 = !{i64 15139}
!554 = !{i64 15143}
!555 = !{i64 15156}
!556 = !{i64 15159}
!557 = !{i64 15169}
!558 = !{i64 15173}
!559 = !{i64 15178}
!560 = !{i64 15183}
!561 = !{i64 15188}
!562 = !{i64 15191}
!563 = !{i64 15196}
!564 = !{i64 15202}
!565 = !{i64 15228}
!566 = !{i64 15232}
!567 = !{i64 15272}
!568 = !{i64 15287}
!569 = !{i64 15325}
!570 = !{i64 15335}
!571 = !{i64 15357}
!572 = !{i64 15384}
!573 = !{i64 15394}
!574 = !{i64 15432}
!575 = !{i64 15447}
!576 = !{i64 15489}
!577 = !{i64 15498}
!578 = !{i64 15502}
!579 = !{i64 15510}
!580 = !{i64 15540}
!581 = !{i64 15553}
!582 = !{i64 15557}
!583 = !{i64 15567}
!584 = !{i64 15579}
!585 = !{i64 15582}
!586 = !{i64 15592}
!587 = !{i64 15601}
!588 = !{i64 15613}
!589 = !{i64 15652}
!590 = !{i64 15665}
!591 = !{i64 15669}
!592 = !{i64 15657}
!593 = !{i64 15679}
!594 = !{i64 15692}
!595 = !{i64 15701}
!596 = !{i64 15704}
!597 = !{i64 15714}
!598 = !{i64 15723}
!599 = !{i64 15735}
!600 = !{i64 15764}
!601 = !{i64 15784}
!602 = !{i64 15792}
!603 = !{i64 15828}
!604 = !{i64 15848}
!605 = !{i64 15856}
!606 = !{i64 15872}
!607 = !{i64 15896}
!608 = !{i64 15906}
!609 = !{i64 15913}
!610 = !{i64 15927}
!611 = !{i64 15932}
!612 = !{i64 15938}
!613 = !{i64 15960}
!614 = !{i64 15965}
!615 = !{i64 15971}
!616 = !{i64 15993}
!617 = !{i64 16014}
!618 = !{i64 16030}
!619 = !{i64 16048}
!620 = !{i64 16052}
!621 = !{i64 16055}
!622 = !{i64 16102}
!623 = !{i64 16128}
!624 = !{i64 16164}
!625 = !{i64 16173}
!626 = !{i64 16183}
!627 = !{i64 16208}
!628 = !{i64 16244}
!629 = !{i64 16253}
!630 = !{i64 16263}
!631 = !{i64 16295}
!632 = !{i64 16299}
!633 = !{i64 16327}
!634 = !{i64 16331}
!635 = !{i64 16350}
!636 = !{i64 16372}
!637 = !{i64 16381}
!638 = !{i64 16391}
!639 = !{i64 16414}
!640 = !{i64 16428}
!641 = !{i64 16433}
!642 = !{i64 16460}
!643 = !{i64 16465}
!644 = !{i64 16492}
!645 = !{i64 16497}
!646 = !{i64 16526}
!647 = !{i64 16537}
!648 = !{i64 16564}
!649 = !{i64 16573}
!650 = !{i64 16583}
!651 = !{i64 16606}
!652 = !{i64 16617}
!653 = !{i64 16644}
!654 = !{i64 16653}
!655 = !{i64 16663}
!656 = !{i64 16695}
!657 = !{i64 16699}
!658 = !{i64 16727}
!659 = !{i64 16730}
!660 = !{i64 16737}
!661 = !{i64 16741}
!662 = !{i64 16746}
!663 = !{i64 16775}
!664 = !{i64 16778}
!665 = !{i64 16785}
!666 = !{i64 16789}
!667 = !{i64 16794}
!668 = !{i64 16815}
!669 = !{i64 16819}
!670 = !{i64 16823}
!671 = !{i64 16829}
!672 = !{i64 16859}
!673 = !{i64 16868}
!674 = !{i64 16872}
!675 = !{i64 16882}
!676 = !{i64 16916}
!677 = !{i64 16925}
!678 = !{i64 16935}
!679 = !{i64 16959}
!680 = !{i64 16963}
!681 = !{i64 16967}
!682 = !{i64 16991}
!683 = !{i64 16995}
!684 = !{i64 16999}
!685 = !{i64 17023}
!686 = !{i64 17027}
!687 = !{i64 17031}
!688 = !{i64 17055}
!689 = !{i64 17059}
!690 = !{i64 17063}
!691 = !{i64 17069}
!692 = !{i64 17099}
!693 = !{i64 17108}
!694 = !{i64 17112}
!695 = !{i64 17122}
!696 = !{i64 17156}
!697 = !{i64 17165}
!698 = !{i64 17175}
!699 = !{i64 17199}
!700 = !{i64 17203}
!701 = !{i64 17207}
!702 = !{i64 17231}
!703 = !{i64 17235}
!704 = !{i64 17239}
!705 = !{i64 17263}
!706 = !{i64 17267}
!707 = !{i64 17271}
!708 = !{i64 17295}
!709 = !{i64 17299}
!710 = !{i64 17303}
!711 = !{i64 17309}
!712 = !{i64 17332}
!713 = !{i64 17341}
!714 = !{i64 17351}
!715 = !{i64 17372}
!716 = !{i64 17377}
!717 = !{i64 17404}
!718 = !{i64 17409}
!719 = !{i64 17436}
!720 = !{i64 17441}
!721 = !{i64 17471}
!722 = !{i64 17475}
!723 = !{i64 17479}
!724 = !{i64 17503}
!725 = !{i64 17507}
!726 = !{i64 17511}
!727 = !{i64 17535}
!728 = !{i64 17539}
!729 = !{i64 17543}
!730 = !{i64 17566}
!731 = !{i64 17577}
!732 = !{i64 17604}
!733 = !{i64 17613}
!734 = !{i64 17623}
!735 = !{i64 17645}
!736 = !{i64 17661}
!737 = !{i64 17696}
!738 = !{i64 17700}
!739 = !{i64 17704}
!740 = !{i64 17717}
!741 = !{i64 17721}
!742 = !{i64 17731}
!743 = !{i64 17768}
!744 = !{i64 17778}
!745 = !{i64 17820}
!746 = !{i64 17832}
!747 = !{i64 17841}
!748 = !{i64 17859}
!749 = !{i64 17871}
!750 = !{i64 17901}
!751 = !{i64 17928}
!752 = !{i64 17938}
!753 = !{i64 17968}
!754 = !{i64 17978}
!755 = !{i64 17985}
!756 = !{i64 17990}
!757 = !{i64 18028}
!758 = !{i64 18044}
!759 = !{i64 18052}
!760 = !{i64 18077}
!761 = !{i64 18096}
!762 = !{i64 18106}
!763 = !{i64 18128}
!764 = !{i64 18138}
!765 = !{i64 18160}
!766 = !{i64 18170}
!767 = !{i64 18189}
!768 = !{i64 18215}
!769 = !{i64 18219}
!770 = !{i64 18240}
!771 = !{i64 18250}
!772 = !{i64 18276}
!773 = !{i64 18285}
!774 = !{i64 18295}
!775 = !{i64 18318}
!776 = !{i64 18329}
!777 = !{i64 18356}
!778 = !{i64 18365}
!779 = !{i64 18375}
!780 = !{i64 18395}
!781 = !{i64 18416}
!782 = !{i64 18426}
!783 = !{i64 18452}
!784 = !{i64 18461}
!785 = !{i64 18471}
!786 = !{i64 18494}
!787 = !{i64 18520}
!788 = !{i64 18530}
!789 = !{i64 18568}
!790 = !{i64 18585}
!791 = !{i64 18594}
!792 = !{i64 18602}
!793 = !{i64 18624}
!794 = !{i64 18639}
!795 = !{i64 18676}
!796 = !{i64 18685}
!797 = !{i64 18695}
!798 = !{i64 18720}
!799 = !{i64 18730}
!800 = !{i64 18748}
!801 = !{i64 18756}
!802 = !{i64 18777}
!803 = !{i64 18800}
!804 = !{i64 18823}
!805 = !{i64 18832}
!806 = !{i64 18856}
!807 = !{i64 18860}
!808 = !{i64 18870}
!809 = !{i64 18880}
!810 = !{i64 18909}
!811 = !{i64 18928}
!812 = !{i64 18938}
!813 = !{i64 18960}
!814 = !{i64 18970}
!815 = !{i64 18992}
!816 = !{i64 19002}
!817 = !{i64 19024}
!818 = !{i64 19034}
!819 = !{i64 19053}
!820 = !{i64 19072}
!821 = !{i64 19095}
!822 = !{i64 19120}
!823 = !{i64 19125}
!824 = !{i64 19133}
!825 = !{i64 19152}
!826 = !{i64 19162}
!827 = !{i64 19184}
!828 = !{i64 19194}
!829 = !{i64 19216}
!830 = !{i64 19226}
!831 = !{i64 19245}
!832 = !{i64 19272}
!833 = !{i64 19282}
!834 = !{i64 19320}
!835 = !{i64 19337}
!836 = !{i64 19346}
!837 = !{i64 19354}
!838 = !{i64 19376}
!839 = !{i64 19391}
!840 = !{i64 19424}
!841 = !{i64 19434}
!842 = !{i64 19460}
!843 = !{i64 19469}
!844 = !{i64 19479}
!845 = !{i64 19504}
!846 = !{i64 19514}
!847 = !{i64 19529}
!848 = !{i64 19552}
!849 = !{i64 19562}
!850 = !{i64 19584}
!851 = !{i64 19594}
!852 = !{i64 19616}
!853 = !{i64 19626}
!854 = !{i64 19648}
!855 = !{i64 19671}
!856 = !{i64 19680}
!857 = !{i64 19704}
!858 = !{i64 19708}
!859 = !{i64 19718}
!860 = !{i64 19728}
!861 = !{i64 19760}
!862 = !{i64 19770}
!863 = !{i64 19792}
!864 = !{i64 19802}
!865 = !{i64 19824}
!866 = !{i64 19834}
!867 = !{i64 19856}
!868 = !{i64 19866}
!869 = !{i64 19885}
!870 = !{i64 19904}
!871 = !{i64 19927}
!872 = !{i64 19952}
!873 = !{i64 19957}
!874 = !{i64 19965}
!875 = !{i64 19984}
!876 = !{i64 19994}
!877 = !{i64 20016}
!878 = !{i64 20026}
!879 = !{i64 20048}
!880 = !{i64 20058}
!881 = !{i64 20077}
!882 = !{i64 20108}
!883 = !{i64 20120}
!884 = !{i64 20123}
!885 = !{i64 20131}
!886 = !{i64 20144}
