source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_59c8_type = type { i64 (i64*, i32)*, i64 ()*, i64 ()*, i64 ()* }
%vtable_5a08_type = type { i64 (i64*, i32)*, i64 ()*, i64 ()*, i64 ()* }
%vtable_5a50_type = type { i64 ()*, i64 ()*, i64 ()*, i64 ()* }
%vtable_5b00_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_5b28_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_5b58_type = type { i64 (i64*)*, i64 ()*, i64 ()* }
%vtable_5bf0_type = type { i64 (i64*)*, i64 ()*, i64 ()* }
%vtable_5c90_type = type { i64 (i64*)*, i64 ()*, i64 ()* }
%vtable_5d50_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_5d78_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_5da0_type = type { i64 ()*, i64 ()*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_60d4 = global i64 0
@global_var_60a8 = external local_unnamed_addr global i64
@global_var_60d0 = global i64 0
@global_var_3262 = local_unnamed_addr constant [5 x i8] c"Test\00"
@global_var_125c = global i64 106274670772224
@global_var_60d8 = local_unnamed_addr global i64 0
@global_var_5b88 = local_unnamed_addr global i64 11376
@global_var_5b40 = local_unnamed_addr global i64 32
@global_var_5960 = local_unnamed_addr global i64 0
@global_var_3055 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_306e = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_5978 = global i64 0
@global_var_5988 = global i64 0
@global_var_59a0 = global i64 0
@global_var_31d4 = constant [5 x i8] c"Base\00"
@global_var_31d9 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_5ff8 = local_unnamed_addr global void (i64*)* null
@global_var_3271 = external local_unnamed_addr constant i128
@global_var_60d9 = global i32 0
@global_var_60d7 = global i32 0
@global_var_3e8 = global i32 0
@global_var_5a80 = global i32 10928
@global_var_5bc0 = global i32 11440
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_31e1 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_307d = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_309b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_30b7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_30d3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_30ef = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_310c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_3128 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_3144 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_3160 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_317c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_3199 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_31b6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_59c8 = global %vtable_59c8_type { i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, i64 ()* @_ZN4BaseD2Ev, i64 ()* @_ZN4BaseD0Ev }
@global_var_5a08 = global %vtable_5a08_type { i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, i64 ()* @_ZN4BaseD2Ev, i64 ()* @_ZN7DerivedD0Ev }
@global_var_5a50 = global %vtable_5a50_type { i64 ()* @_ZN12MultiDerived5funcAEv, i64 ()* @_ZN12MultiDerivedD2Ev, i64 ()* @_ZN12MultiDerivedD0Ev, i64 ()* @_ZN12MultiDerived5funcBEv }
@vtable_5b00 = local_unnamed_addr global %vtable_5b00_type { i64 ()* @_ZN5BaseA5funcAEv, i64 ()* @_ZN5BaseAD2Ev, i64 ()* @_ZN5BaseAD0Ev }
@vtable_5b28 = local_unnamed_addr global %vtable_5b28_type { i64 ()* @_ZN5BaseB5funcBEv, i64 ()* @_ZN5BaseBD2Ev, i64 ()* @_ZN5BaseBD0Ev }
@global_var_5b58 = global %vtable_5b58_type { i64 (i64*)* @_ZN14DiamondDerived4funcEv, i64 ()* @_ZN14DiamondDerivedD1Ev, i64 ()* @_ZN14DiamondDerivedD0Ev }
@vtable_5bf0 = local_unnamed_addr global %vtable_5bf0_type { i64 (i64*)* @_ZN7MiddleA4funcEv, i64 ()* @_ZN7MiddleAD1Ev, i64 ()* @_ZN7MiddleAD0Ev }
@vtable_5c90 = local_unnamed_addr global %vtable_5c90_type { i64 (i64*)* @_ZN7MiddleB4funcEv, i64 ()* @_ZN7MiddleBD1Ev, i64 ()* @_ZN7MiddleBD0Ev }
@vtable_5d50 = local_unnamed_addr global %vtable_5d50_type { i64 ()* @_ZN11VirtualBase4funcEv, i64 ()* @_ZN11VirtualBaseD2Ev, i64 ()* @_ZN11VirtualBaseD0Ev }
@global_var_5d78 = global %vtable_5d78_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 ()* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_5da0 = global %vtable_5da0_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 ()* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init() local_unnamed_addr {
dec_label_pc_2000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
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

define i64 @function_2050(i64 %arg1) local_unnamed_addr {
dec_label_pc_2050:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !8
  ret i64 %0, !insn.addr !8
}

define i32 @function_2060(i8* %s) local_unnamed_addr {
dec_label_pc_2060:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_2070(i64 %arg1) local_unnamed_addr {
dec_label_pc_2070:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i32 @function_2080(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_2080:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define void @function_2090(i64* %ptr) local_unnamed_addr {
dec_label_pc_2090:
  call void @_ZdlPv(i64* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define i64 @function_20a0(i64 %arg1) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_20b0(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_20b0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i32 %arg4), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define void @function_20c0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_20c0:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !15
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_20d0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_20e0() local_unnamed_addr {
dec_label_pc_20e0:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_20f0() local_unnamed_addr {
dec_label_pc_20f0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define i32 @function_2100(i8* %s) local_unnamed_addr {
dec_label_pc_2100:
  %0 = call i32 @puts(i8* %s), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i64 @function_2110() local_unnamed_addr {
dec_label_pc_2110:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i64 @function_2120(i64 %arg1, i64 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2120:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i32 %arg3), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define void @function_2130(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_2130:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !22
  ret void, !insn.addr !22
}

define void @function_2140(i64* %d) local_unnamed_addr {
dec_label_pc_2140:
  call void @__cxa_finalize(i64* %d), !insn.addr !23
  ret void, !insn.addr !23
}

define i64 @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_2150:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !24
  %1 = load void (i64*)*, void (i64*)** @global_var_5ff8, align 8, !insn.addr !25
  %2 = call i32 @__cxa_atexit(void (i64*)* %1, i64* nonnull @global_var_60d4, i64* inttoptr (i64 24744 to i64*)), !insn.addr !26
  %3 = sext i32 %2 to i64, !insn.addr !26
  ret i64 %3, !insn.addr !27
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2180:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !28
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !28
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !28
  %3 = call i32 @__libc_start_main(i64 10480, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !28
  %4 = call i64 @__asm_hlt(), !insn.addr !29
  unreachable, !insn.addr !29
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_21b0:
  ret i64 ptrtoint (i64* @global_var_60d0 to i64), !insn.addr !30
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_21e0:
  ret i64 0, !insn.addr !31
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2220:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_60d0 to i8*), align 8, !insn.addr !32
  %3 = icmp eq i8 %2, 0, !insn.addr !32
  %4 = icmp eq i1 %3, false, !insn.addr !33
  br i1 %4, label %dec_label_pc_2258, label %dec_label_pc_222d, !insn.addr !33

dec_label_pc_222d:                                ; preds = %dec_label_pc_2220
  %5 = load i64, i64* inttoptr (i64 24528 to i64*), align 16, !insn.addr !34
  %6 = icmp eq i64 %5, 0, !insn.addr !34
  br i1 %6, label %dec_label_pc_2247, label %dec_label_pc_223b, !insn.addr !35

dec_label_pc_223b:                                ; preds = %dec_label_pc_222d
  %7 = load i64, i64* @global_var_60a8, align 8, !insn.addr !36
  %8 = inttoptr i64 %7 to i64*, !insn.addr !37
  call void @__cxa_finalize(i64* %8), !insn.addr !37
  br label %dec_label_pc_2247, !insn.addr !37

dec_label_pc_2247:                                ; preds = %dec_label_pc_223b, %dec_label_pc_222d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !38
  store i8 1, i8* bitcast (i64* @global_var_60d0 to i8*), align 8, !insn.addr !39
  ret i64 %9, !insn.addr !40

dec_label_pc_2258:                                ; preds = %dec_label_pc_2220
  ret i64 %1, !insn.addr !41
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2260:
  %0 = call i64 @register_tm_clones(), !insn.addr !42
  ret i64 %0, !insn.addr !42
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_2270:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %stack_var_-36 = alloca i128, align 8
  %2 = load i128, i128* %0
  %3 = call i128 @__asm_movups(i128 1953719636), !insn.addr !43
  %4 = mul i128 %2, 18446744073709551615
  %5 = ashr exact i128 %4, 64, !insn.addr !44
  call void @__asm_movups.13(i128 %5, i128 %3), !insn.addr !44
  %6 = load i128, i128* @global_var_3271, align 8, !insn.addr !45
  %7 = call i128 @__asm_movups(i128 %6), !insn.addr !45
  call void @__asm_movups.13(i128 %1, i128 %7), !insn.addr !46
  %8 = bitcast i128* %stack_var_-36 to i8*, !insn.addr !47
  %9 = call i32 @strlen(i8* nonnull %8), !insn.addr !47
  %10 = add i32 %9, ptrtoint (i64* @global_var_125c to i32), !insn.addr !48
  %11 = zext i32 %10 to i64, !insn.addr !48
  ret i64 %11, !insn.addr !49

; uselistorder directives
  uselistorder i128* %0, { 1, 0 }
}

define i64 @_Z20test_cpp_constructorv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_22b0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !50
  %rcx.0.reg2mem = alloca i64, !insn.addr !50
  %0 = call i64 @_Znam(i64 20), !insn.addr !51
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !52
  store i64 %0, i64* %rdx.0.reg2mem, !insn.addr !52
  br label %dec_label_pc_22c0, !insn.addr !52

dec_label_pc_22c0:                                ; preds = %dec_label_pc_22c0, %dec_label_pc_22b0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %1 = trunc i64 %rcx.0.reload to i32, !insn.addr !53
  %2 = inttoptr i64 %rdx.0.reload to i32*, !insn.addr !53
  store i32 %1, i32* %2, align 4, !insn.addr !53
  %3 = add nuw nsw i64 %rcx.0.reload, 10, !insn.addr !54
  %4 = add i64 %rdx.0.reload, 4, !insn.addr !55
  %5 = icmp eq i64 %rcx.0.reload, 40, !insn.addr !56
  %6 = icmp eq i1 %5, false, !insn.addr !57
  store i64 %3, i64* %rcx.0.reg2mem, !insn.addr !57
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !57
  br i1 %6, label %dec_label_pc_22c0, label %dec_label_pc_22d0, !insn.addr !57

dec_label_pc_22d0:                                ; preds = %dec_label_pc_22c0
  store i32 ptrtoint (i32* @global_var_60d9 to i32), i32* bitcast (i64* @global_var_60d8 to i32*), align 8, !insn.addr !58
  %7 = add i64 %0, 8, !insn.addr !59
  %8 = inttoptr i64 %7 to i32*, !insn.addr !59
  %9 = load i32, i32* %8, align 4, !insn.addr !59
  %10 = inttoptr i64 %0 to i64*, !insn.addr !60
  %11 = and i64 %arg2, 4294967295
  %12 = inttoptr i64 %11 to i64*, !insn.addr !60
  call void @_ZdaPv(i64* %10, i64* %12), !insn.addr !60
  store i32 ptrtoint (i32* @global_var_60d7 to i32), i32* bitcast (i64* @global_var_60d8 to i32*), align 8, !insn.addr !61
  %13 = add i32 %9, add (i32 ptrtoint (i32* @global_var_60d9 to i32), i32 trunc (i64 mul (i64 sext (i32 ptrtoint (i32* @global_var_60d7 to i32) to i64), i64 ptrtoint (i32* @global_var_3e8 to i64)) to i32)), !insn.addr !62
  %14 = zext i32 %13 to i64, !insn.addr !62
  ret i64 %14, !insn.addr !63

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 1, 2, 0 }
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64 %0, { 2, 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2310:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !64
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_2320:
  %stack_var_-16 = alloca i64, align 8
  store i64 ptrtoint (%vtable_59c8_type* @global_var_59c8 to i64), i64* %stack_var_-16, align 8, !insn.addr !65
  %0 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %stack_var_-16, i32 5), !insn.addr !66
  %1 = add i64 %0, zext (i32 add (i32 ptrtoint (%vtable_5a08_type* @global_var_5a08 to i32), i32 21) to i64), !insn.addr !67
  %2 = and i64 %1, 4294967295, !insn.addr !67
  ret i64 %2, !insn.addr !68
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_2380:
  %0 = call i64 @_ZN12MultiDerived5funcAEv(), !insn.addr !69
  %1 = add i64 %0, zext (i32 add (i32 ptrtoint (i32* @global_var_5a80 to i32), i32 1) to i64), !insn.addr !70
  %2 = and i64 %1, 4294967295, !insn.addr !70
  ret i64 %2, !insn.addr !71
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_23e0:
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-72 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !72
  store i32 ptrtoint (i32* @global_var_5bc0 to i32), i32* %stack_var_-32, align 4, !insn.addr !73
  %1 = bitcast i32* %stack_var_-32 to i64*, !insn.addr !74
  %2 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %1), !insn.addr !74
  %3 = trunc i64 %2 to i32, !insn.addr !75
  %4 = load i64, i64* @global_var_5b40, align 8, !insn.addr !76
  %5 = add i64 %0, 16, !insn.addr !77
  %6 = add i64 %5, %4, !insn.addr !77
  %7 = inttoptr i64 %6 to i32*, !insn.addr !77
  store i32 100, i32* %7, align 4, !insn.addr !77
  %8 = load i32, i32* %stack_var_-32, align 4, !insn.addr !78
  %9 = add i32 %8, %3, !insn.addr !79
  %10 = zext i32 %9 to i64, !insn.addr !79
  ret i64 %10, !insn.addr !80

; uselistorder directives
  uselistorder i32* %stack_var_-32, { 1, 2, 0 }
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_2450:
  ret i64 22, !insn.addr !81
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2460:
  ret i64 39, !insn.addr !82
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2470:
  ret i64 16, !insn.addr !83
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2480:
  ret i64 85, !insn.addr !84
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2490:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !85
  %1 = inttoptr i64 %0 to i32*, !insn.addr !86
  store i32 42, i32* %1, align 4, !insn.addr !86
  %2 = load i64, i64* inttoptr (i64 24520 to i64*), align 8, !insn.addr !87
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i32 0), !insn.addr !88
  %4 = inttoptr i64 %3 to %_Unwind_Exception*, !insn.addr !89
  call void @_Unwind_Resume(%_Unwind_Exception* %4), !insn.addr !89
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !89

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 0 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2550:
  ret i64 703, !insn.addr !90
}

define i64 @_Z13test_cpp_rttiv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2560:
  %.reg2mem2 = alloca i64, !insn.addr !91
  %rbx.0.reg2mem = alloca i64, !insn.addr !91
  %.reg2mem = alloca i64, !insn.addr !91
  %0 = call i64 @_Znwm(i64 8), !insn.addr !92
  %1 = inttoptr i64 %0 to i64*, !insn.addr !93
  store i64 ptrtoint (%vtable_5d78_type* @global_var_5d78 to i64), i64* %1, align 8, !insn.addr !93
  %2 = call i64 @_Znwm(i64 8), !insn.addr !94
  %3 = inttoptr i64 %2 to i64*, !insn.addr !95
  store i64 ptrtoint (%vtable_5da0_type* @global_var_5da0 to i64), i64* %3, align 8, !insn.addr !95
  %4 = load i64, i64* %1, align 8, !insn.addr !96
  %5 = add i64 %4, -8, !insn.addr !97
  %6 = inttoptr i64 %5 to i64*, !insn.addr !97
  %7 = load i64, i64* %6, align 8, !insn.addr !97
  %8 = add i64 %7, 8, !insn.addr !98
  %9 = inttoptr i64 %8 to i64*, !insn.addr !98
  %10 = load i64, i64* %9, align 8, !insn.addr !98
  %11 = icmp eq i64 %10, ptrtoint ([15 x i8]* @global_var_3055 to i64), !insn.addr !99
  store i64 ptrtoint (%vtable_5da0_type* @global_var_5da0 to i64), i64* %.reg2mem, !insn.addr !100
  store i64 10, i64* %rbx.0.reg2mem, !insn.addr !100
  br i1 %11, label %dec_label_pc_25db, label %dec_label_pc_25b1, !insn.addr !100

dec_label_pc_25b1:                                ; preds = %dec_label_pc_2560
  %12 = inttoptr i64 %10 to i8*, !insn.addr !101
  %13 = load i8, i8* %12, align 1, !insn.addr !101
  %14 = icmp eq i8 %13, 42, !insn.addr !101
  store i64 ptrtoint (%vtable_5da0_type* @global_var_5da0 to i64), i64* %.reg2mem, !insn.addr !102
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !102
  br i1 %14, label %dec_label_pc_25db, label %dec_label_pc_25b9, !insn.addr !102

dec_label_pc_25b9:                                ; preds = %dec_label_pc_25b1
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_3055, i64 0, i64 0)), !insn.addr !103
  %16 = icmp eq i32 %15, 0, !insn.addr !104
  %17 = icmp eq i1 %16, false, !insn.addr !105
  %18 = select i1 %17, i64 0, i64 10, !insn.addr !105
  %.pre = load i64, i64* %3, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !106
  store i64 %18, i64* %rbx.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_25db, !insn.addr !106

dec_label_pc_25db:                                ; preds = %dec_label_pc_2560, %dec_label_pc_25b9, %dec_label_pc_25b1
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %.reload = load i64, i64* %.reg2mem, !insn.addr !107
  %19 = add i64 %.reload, -8, !insn.addr !108
  %20 = inttoptr i64 %19 to i64*, !insn.addr !108
  %21 = load i64, i64* %20, align 8, !insn.addr !108
  %22 = add i64 %21, 8, !insn.addr !109
  %23 = inttoptr i64 %22 to i64*, !insn.addr !109
  %24 = load i64, i64* %23, align 8, !insn.addr !109
  %25 = icmp eq i64 %24, ptrtoint ([15 x i8]* @global_var_306e to i64), !insn.addr !110
  br i1 %25, label %dec_label_pc_2611.thread1, label %dec_label_pc_25f3, !insn.addr !111

dec_label_pc_2611.thread1:                        ; preds = %dec_label_pc_25db
  %26 = or i64 %rbx.0.reload, 20, !insn.addr !112
  store i64 %26, i64* %.reg2mem2
  br label %34

dec_label_pc_25f3:                                ; preds = %dec_label_pc_25db
  %27 = inttoptr i64 %24 to i8*, !insn.addr !113
  %28 = load i8, i8* %27, align 1, !insn.addr !113
  %29 = icmp eq i8 %28, 42, !insn.addr !113
  %30 = icmp eq i1 %29, false, !insn.addr !114
  br i1 %30, label %dec_label_pc_2611, label %dec_label_pc_2611.thread, !insn.addr !114

dec_label_pc_2611:                                ; preds = %dec_label_pc_25f3
  %31 = call i32 @strcmp(i8* %27, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_306e, i64 0, i64 0)), !insn.addr !115
  %32 = icmp eq i32 %31, 0, !insn.addr !116
  %phitmp = icmp eq i1 %32, false
  %33 = or i64 %rbx.0.reload, 20, !insn.addr !112
  store i64 %33, i64* %.reg2mem2
  br i1 %phitmp, label %dec_label_pc_2611.thread, label %34

dec_label_pc_2611.thread:                         ; preds = %dec_label_pc_25f3, %dec_label_pc_2611
  store i64 %rbx.0.reload, i64* %.reg2mem2
  br label %34

; <label>:34:                                     ; preds = %dec_label_pc_2611.thread1, %dec_label_pc_2611, %dec_label_pc_2611.thread
  %.reload3 = load i64, i64* %.reg2mem2
  %35 = call i64 @__dynamic_cast(i64 %0, i64 ptrtoint (i64* @global_var_5978 to i64), i64* nonnull @global_var_5988, i32 0), !insn.addr !117
  %36 = add nuw nsw i64 %.reload3, 100, !insn.addr !118
  %37 = icmp eq i64 %35, 0, !insn.addr !119
  %38 = select i1 %37, i64 %.reload3, i64 %36, !insn.addr !120
  %39 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_5978 to i64), i64* nonnull @global_var_59a0, i32 0), !insn.addr !121
  %40 = trunc i64 %38 to i32
  %41 = add i32 %40, 200, !insn.addr !122
  %42 = icmp eq i64 %39, 0, !insn.addr !123
  %43 = select i1 %42, i32 %40, i32 %41, !insn.addr !124
  %44 = inttoptr i64 %10 to i8*, !insn.addr !125
  %45 = load i8, i8* %44, align 1, !insn.addr !125
  %46 = icmp eq i8 %45, 42, !insn.addr !125
  %47 = zext i1 %46 to i64, !insn.addr !126
  %48 = add i64 %10, %47, !insn.addr !127
  %49 = inttoptr i64 %48 to i8*, !insn.addr !128
  %50 = call i32 @strlen(i8* %49), !insn.addr !128
  %51 = add i32 %43, %50, !insn.addr !129
  %52 = zext i32 %51 to i64, !insn.addr !130
  ret i64 %52, !insn.addr !131

; uselistorder directives
  uselistorder i64 %10, { 0, 2, 1, 3 }
  uselistorder i64* %.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %.reg2mem2, { 0, 3, 2, 1 }
  uselistorder i64 (i64, i64, i64*, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 ptrtoint (%vtable_5da0_type* @global_var_5da0 to i64), { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
  uselistorder label %34, { 2, 1, 0 }
  uselistorder label %dec_label_pc_2611.thread, { 1, 0 }
  uselistorder label %dec_label_pc_25db, { 1, 2, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_26a0:
  %0 = alloca i128
  %1 = alloca i64
  %rbx.0.reg2mem = alloca i64, !insn.addr !132
  %rcx.0.reg2mem = alloca i64, !insn.addr !132
  %2 = load i64, i64* %1
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-24 = alloca i64, align 8
  %3 = load i128, i128* %0
  %stack_var_-68 = alloca i128, align 8
  %4 = load i128, i128* %0
  %stack_var_-72 = alloca i32, align 4
  %5 = call i32 @puts(i8* bitcast (i8** @global_var_31e1 to i8*)), !insn.addr !133
  %6 = call i128 @__asm_movups(i128 1953719636), !insn.addr !134
  %7 = mul i128 %4, 18446744073709551615
  %8 = ashr exact i128 %7, 64, !insn.addr !135
  call void @__asm_movups.13(i128 %8, i128 %6), !insn.addr !135
  %9 = load i128, i128* @global_var_3271, align 8, !insn.addr !136
  %10 = call i128 @__asm_movups(i128 %9), !insn.addr !136
  call void @__asm_movups.13(i128 %3, i128 %10), !insn.addr !137
  store i32 10, i32* %stack_var_-72, align 4, !insn.addr !138
  %11 = bitcast i128* %stack_var_-68 to i8*, !insn.addr !139
  %12 = call i32 @strlen(i8* nonnull %11), !insn.addr !139
  %13 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_307d to i8*)), !insn.addr !140
  %14 = call i64 @_Znam(i64 20), !insn.addr !141
  store i64 %14, i64* %rcx.0.reg2mem, !insn.addr !142
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !142
  br label %dec_label_pc_2710, !insn.addr !142

dec_label_pc_2710:                                ; preds = %dec_label_pc_2710, %dec_label_pc_26a0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %15 = trunc i64 %rbx.0.reload to i32, !insn.addr !143
  %16 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !143
  store i32 %15, i32* %16, align 4, !insn.addr !143
  %17 = add nuw nsw i64 %rbx.0.reload, 10, !insn.addr !144
  %18 = add i64 %rcx.0.reload, 4, !insn.addr !145
  %19 = icmp eq i64 %rbx.0.reload, 40, !insn.addr !146
  %20 = icmp eq i1 %19, false, !insn.addr !147
  store i64 %18, i64* %rcx.0.reg2mem, !insn.addr !147
  store i64 %17, i64* %rbx.0.reg2mem, !insn.addr !147
  br i1 %20, label %dec_label_pc_2710, label %dec_label_pc_2720, !insn.addr !147

dec_label_pc_2720:                                ; preds = %dec_label_pc_2710
  %21 = add i32 %12, ptrtoint (i64* @global_var_125c to i32), !insn.addr !148
  %22 = ptrtoint i32* %stack_var_-72 to i64, !insn.addr !149
  %23 = zext i32 %21 to i64, !insn.addr !148
  store i32 ptrtoint (i32* @global_var_60d9 to i32), i32* bitcast (i64* @global_var_60d8 to i32*), align 8, !insn.addr !150
  %24 = inttoptr i64 %14 to i64*, !insn.addr !151
  %25 = inttoptr i64 %23 to i64*, !insn.addr !151
  call void @_ZdaPv(i64* %24, i64* %25), !insn.addr !151
  store i32 ptrtoint (i32* @global_var_60d7 to i32), i32* bitcast (i64* @global_var_60d8 to i32*), align 8, !insn.addr !152
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_309b to i8*)), !insn.addr !153
  store i64 ptrtoint (%vtable_59c8_type* @global_var_59c8 to i64), i64* %stack_var_-24, align 8, !insn.addr !154
  store i32 ptrtoint (%vtable_5a08_type* @global_var_5a08 to i32), i32* %stack_var_-72, align 4, !insn.addr !155
  %27 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %stack_var_-24, i32 5), !insn.addr !156
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30b7 to i8*)), !insn.addr !157
  store i32 ptrtoint (%vtable_5a50_type* @global_var_5a50 to i32), i32* %stack_var_-72, align 4, !insn.addr !158
  %29 = call i64 @_ZThn16_N12MultiDerived5funcBEv(), !insn.addr !159
  %30 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30d3 to i8*)), !insn.addr !160
  store i32 ptrtoint (%vtable_5b58_type* @global_var_5b58 to i32), i32* %stack_var_-72, align 4, !insn.addr !161
  store i32 ptrtoint (i32* @global_var_5bc0 to i32), i32* %stack_var_-40, align 4, !insn.addr !162
  %31 = bitcast i32* %stack_var_-40 to i64*, !insn.addr !163
  %32 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %31), !insn.addr !163
  %33 = load i64, i64* @global_var_5b40, align 8, !insn.addr !164
  %34 = add i64 %22, 8, !insn.addr !165
  %35 = add i64 %34, %33, !insn.addr !165
  %36 = inttoptr i64 %35 to i32*, !insn.addr !165
  store i32 100, i32* %36, align 4, !insn.addr !165
  %37 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_30ef to i8*)), !insn.addr !166
  %38 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_310c to i8*)), !insn.addr !167
  %39 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3128 to i8*)), !insn.addr !168
  %40 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3144 to i8*)), !insn.addr !169
  %41 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3160 to i8*)), !insn.addr !170
  %42 = call i64 @_Z18test_cpp_exceptionv(i64 ptrtoint (i8** @global_var_3160 to i64), i64 85, i64 %2), !insn.addr !171
  %43 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_317c to i8*)), !insn.addr !172
  %44 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3199 to i8*)), !insn.addr !173
  %45 = call i64 @_Z13test_cpp_rttiv(i64 ptrtoint (i8** @global_var_3199 to i64), i64 703, i64 %2, i64 %18), !insn.addr !174
  %46 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_31b6 to i8*)), !insn.addr !175
  %47 = sext i32 %46 to i64, !insn.addr !175
  ret i64 %47, !insn.addr !176

; uselistorder directives
  uselistorder i64 %18, { 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 2, 0 }
  uselistorder i64 %14, { 1, 0 }
  uselistorder i32* %stack_var_-72, { 4, 3, 2, 0, 1 }
  uselistorder i32* %stack_var_-40, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 1, 0 }
  uselistorder i64 703, { 1, 0 }
  uselistorder i8** @global_var_3199, { 1, 0 }
  uselistorder i64 85, { 1, 0 }
  uselistorder i8** @global_var_3160, { 1, 0 }
  uselistorder i64 (i64*)* @_ZTv0_n24_N14DiamondDerived4funcEv, { 1, 0 }
  uselistorder i64 ()* @_ZN12MultiDerived5funcAEv, { 1, 0 }
  uselistorder i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, { 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_59c8_type* @global_var_59c8 to i64), { 1, 0 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znam, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i128* @global_var_3271, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_28f0:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !177
  ret i64 0, !insn.addr !178
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_2900:
  %0 = add i32 %arg2, 1, !insn.addr !179
  %1 = zext i32 %0 to i64, !insn.addr !179
  ret i64 %1, !insn.addr !180
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_2910:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !181
  %2 = inttoptr i64 %1 to i32*, !insn.addr !181
  %3 = load i32, i32* %2, align 4, !insn.addr !181
  %4 = mul i32 %3, %arg2, !insn.addr !181
  %5 = zext i32 %4 to i64, !insn.addr !181
  ret i64 %5, !insn.addr !182
}

define i64 @_ZN4BaseD2Ev() {
dec_label_pc_2920:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !183
}

define i64 @_ZN12MultiDerivedD2Ev() {
dec_label_pc_2930:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !184
}

define i64 @_ZN14DiamondDerivedD1Ev() {
dec_label_pc_2940:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !185
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2950:
  %0 = sub i32 %arg1, %arg2, !insn.addr !186
  %1 = xor i32 %arg2, %arg1, !insn.addr !186
  %2 = xor i32 %0, %arg1, !insn.addr !186
  %3 = and i32 %2, %1, !insn.addr !186
  %4 = icmp slt i32 %3, 0, !insn.addr !186
  %5 = icmp eq i32 %0, 0, !insn.addr !186
  %6 = icmp slt i32 %0, 0, !insn.addr !186
  %7 = icmp eq i1 %6, %4, !insn.addr !187
  %8 = icmp eq i1 %5, false, !insn.addr !187
  %9 = icmp eq i1 %7, %8, !insn.addr !187
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !187
  ret i32 %10, !insn.addr !188

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i1 false, { 1, 2, 0, 3, 4, 5, 6 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_2960:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = fptrunc double %arg2 to float, !insn.addr !189
  %3 = bitcast float %2 to i32, !insn.addr !189
  %4 = sext i32 %3 to i128, !insn.addr !189
  %5 = call i128 @__asm_maxsd(i128 %1, i128 %4), !insn.addr !189
  %6 = trunc i128 %5 to i64, !insn.addr !190
  %7 = bitcast i64 %6 to double, !insn.addr !190
  ret double %7, !insn.addr !190
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2970:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !191
  store i32 %3, i32* %arg2, align 4, !insn.addr !192
  ret void, !insn.addr !193

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2980:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 40, !insn.addr !194
  %4 = inttoptr i64 %3 to i32*, !insn.addr !194
  store i32 0, i32* %4, align 4, !insn.addr !194
  ret i64 %1, !insn.addr !195
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2990:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !196
  %2 = inttoptr i64 %1 to i32*, !insn.addr !196
  %3 = load i32, i32* %2, align 4, !insn.addr !196
  %4 = sext i32 %3 to i64, !insn.addr !196
  %5 = icmp sgt i32 %3, 9, !insn.addr !197
  br i1 %5, label %dec_label_pc_29a3, label %dec_label_pc_299a, !insn.addr !197

dec_label_pc_299a:                                ; preds = %dec_label_pc_2990
  %6 = add i32 %3, 1, !insn.addr !198
  store i32 %6, i32* %2, align 4, !insn.addr !199
  %7 = mul i64 %4, 4, !insn.addr !200
  %8 = add i64 %7, %0, !insn.addr !200
  %9 = inttoptr i64 %8 to i32*, !insn.addr !200
  store i32 %arg2, i32* %9, align 4, !insn.addr !200
  br label %dec_label_pc_29a3, !insn.addr !200

dec_label_pc_29a3:                                ; preds = %dec_label_pc_299a, %dec_label_pc_2990
  ret i64 %4, !insn.addr !201

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 4, { 0, 2, 1, 3 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_29b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !202
  %0 = icmp slt i32 %arg2, 0, !insn.addr !203
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !204
  br i1 %0, label %dec_label_pc_29c1, label %dec_label_pc_29b6, !insn.addr !204

dec_label_pc_29b6:                                ; preds = %dec_label_pc_29b0
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !205
  %3 = inttoptr i64 %2 to i32*, !insn.addr !205
  %4 = load i32, i32* %3, align 4, !insn.addr !205
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !206
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !206
  br i1 %5, label %dec_label_pc_29bb, label %dec_label_pc_29c1, !insn.addr !206

dec_label_pc_29bb:                                ; preds = %dec_label_pc_29b6
  %6 = zext i32 %arg2 to i64
  %sext = mul i64 %6, 4294967296
  %7 = ashr exact i64 %sext, 30, !insn.addr !207
  %8 = add i64 %7, %1, !insn.addr !207
  %9 = inttoptr i64 %8 to i32*, !insn.addr !207
  %10 = load i32, i32* %9, align 4, !insn.addr !207
  %11 = zext i32 %10 to i64, !insn.addr !207
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !207
  br label %dec_label_pc_29c1, !insn.addr !207

dec_label_pc_29c1:                                ; preds = %dec_label_pc_29b6, %dec_label_pc_29bb, %dec_label_pc_29b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !208

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 0, { 0, 1, 6, 2, 46, 47, 35, 36, 34, 37, 38, 3, 4, 48, 7, 5, 49, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 39, 40, 41, 42, 43, 44, 45 }
  uselistorder label %dec_label_pc_29c1, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_29d0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !209
  %2 = inttoptr i64 %1 to i32*, !insn.addr !209
  %3 = load i32, i32* %2, align 4, !insn.addr !209
  %4 = zext i32 %3 to i64, !insn.addr !209
  ret i64 %4, !insn.addr !210
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_29e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !211
  %4 = inttoptr i64 %3 to i32*, !insn.addr !211
  store i32 0, i32* %4, align 4, !insn.addr !211
  ret i64 %1, !insn.addr !212
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_29f0:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = add i64 %2, 80, !insn.addr !213
  %4 = inttoptr i64 %3 to i32*, !insn.addr !213
  %5 = load i32, i32* %4, align 4, !insn.addr !213
  %6 = sext i32 %5 to i64, !insn.addr !213
  %7 = icmp sgt i32 %5, 9, !insn.addr !214
  br i1 %7, label %dec_label_pc_2a05, label %dec_label_pc_29fa, !insn.addr !214

dec_label_pc_29fa:                                ; preds = %dec_label_pc_29f0
  %8 = add i32 %5, 1, !insn.addr !215
  store i32 %8, i32* %4, align 4, !insn.addr !216
  %9 = call i64 @__asm_movsd(i128 %1), !insn.addr !217
  %10 = mul i64 %6, 8, !insn.addr !217
  %11 = add i64 %10, %2, !insn.addr !217
  %12 = inttoptr i64 %11 to i64*, !insn.addr !217
  store i64 %9, i64* %12, align 8, !insn.addr !217
  br label %dec_label_pc_2a05, !insn.addr !217

dec_label_pc_2a05:                                ; preds = %dec_label_pc_29fa, %dec_label_pc_29f0
  ret i64 %6, !insn.addr !218

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2a10:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !219
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_xorps(i128 %1, i128 %1), !insn.addr !219
  %3 = icmp slt i32 %arg2, 0, !insn.addr !220
  br i1 %3, label %dec_label_pc_2a24, label %dec_label_pc_2a17, !insn.addr !221

dec_label_pc_2a17:                                ; preds = %dec_label_pc_2a10
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !222
  %6 = inttoptr i64 %5 to i32*, !insn.addr !222
  %7 = load i32, i32* %6, align 4, !insn.addr !222
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !223
  br i1 %8, label %dec_label_pc_2a1c, label %dec_label_pc_2a24, !insn.addr !223

dec_label_pc_2a1c:                                ; preds = %dec_label_pc_2a17
  %9 = zext i32 %arg2 to i64
  %sext = mul i64 %9, 4294967296
  %10 = sext i32 %arg2 to i64, !insn.addr !224
  %11 = ashr exact i64 %sext, 29, !insn.addr !225
  %12 = add i64 %11, %4, !insn.addr !225
  %13 = inttoptr i64 %12 to i64*, !insn.addr !225
  %14 = load i64, i64* %13, align 8, !insn.addr !225
  %15 = call i128 @__asm_movsd.14(i64 %14), !insn.addr !225
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !225
  br label %dec_label_pc_2a24, !insn.addr !225

dec_label_pc_2a24:                                ; preds = %dec_label_pc_2a17, %dec_label_pc_2a1c, %dec_label_pc_2a10
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !226

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i32 0, { 6, 7, 8, 9, 10, 11, 12, 0, 1, 13, 14, 2, 3, 4, 5 }
  uselistorder label %dec_label_pc_2a24, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_2a30:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !227
  %2 = inttoptr i64 %1 to i32*, !insn.addr !227
  %3 = load i32, i32* %2, align 4, !insn.addr !227
  %4 = zext i32 %3 to i64, !insn.addr !227
  ret i64 %4, !insn.addr !228
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_2a40:
  ret i64 ptrtoint ([5 x i8]* @global_var_31d4 to i64), !insn.addr !229
}

define i64 @_ZN4BaseD0Ev() {
dec_label_pc_2a50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !230
  call void @_ZdlPv(i64* %3), !insn.addr !230
  ret i64 %2, !insn.addr !231

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_2a60:
  ret i64 ptrtoint ([8 x i8]* @global_var_31d9 to i64), !insn.addr !232
}

define i64 @_ZN7DerivedD0Ev() {
dec_label_pc_2a70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !233
  call void @_ZdlPv(i64* %3), !insn.addr !233
  ret i64 %2, !insn.addr !234

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN12MultiDerived5funcAEv() {
dec_label_pc_2a80:
  ret i64 30, !insn.addr !235
}

define i64 @_ZN12MultiDerivedD0Ev() {
dec_label_pc_2a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !236
  call void @_ZdlPv(i64* %3), !insn.addr !236
  ret i64 %2, !insn.addr !237

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN12MultiDerived5funcBEv() {
dec_label_pc_2aa0:
  ret i64 40, !insn.addr !238
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_2ab0:
  ret i64 40, !insn.addr !239

; uselistorder directives
  uselistorder i64 40, { 0, 1, 4, 5, 6, 7, 2, 3 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2ac0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !240
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ad0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, -16, !insn.addr !241
  %3 = inttoptr i64 %2 to i64*, !insn.addr !242
  call void @_ZdlPv(i64* %3), !insn.addr !242
  ret i64 %1, !insn.addr !243
}

define i64 @_ZN5BaseA5funcAEv() {
dec_label_pc_2ae0:
  ret i64 10, !insn.addr !244

; uselistorder directives
  uselistorder i64 10, { 1, 3, 2, 0, 4 }
}

define i64 @_ZN5BaseAD2Ev() {
dec_label_pc_2af0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !245
}

define i64 @_ZN5BaseAD0Ev() {
dec_label_pc_2b00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !246
  call void @_ZdlPv(i64* %3), !insn.addr !246
  ret i64 %2, !insn.addr !247

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN5BaseB5funcBEv() {
dec_label_pc_2b10:
  ret i64 20, !insn.addr !248

; uselistorder directives
  uselistorder i64 20, { 0, 3, 2, 1, 4 }
}

define i64 @_ZN5BaseBD2Ev() {
dec_label_pc_2b20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !249
}

define i64 @_ZN5BaseBD0Ev() {
dec_label_pc_2b30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !250
  call void @_ZdlPv(i64* %3), !insn.addr !250
  ret i64 %2, !insn.addr !251

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_2b40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !252
  %2 = inttoptr i64 %1 to i64*, !insn.addr !252
  %3 = load i64, i64* %2, align 8, !insn.addr !252
  %4 = add i64 %0, 8, !insn.addr !253
  %5 = add i64 %4, %3, !insn.addr !253
  %6 = inttoptr i64 %5 to i32*, !insn.addr !253
  %7 = load i32, i32* %6, align 4, !insn.addr !253
  %8 = add i32 %7, 150, !insn.addr !253
  %9 = zext i32 %8 to i64, !insn.addr !253
  ret i64 %9, !insn.addr !254

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleAD1Ev() {
dec_label_pc_2b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !255
}

define i64 @_ZN7MiddleAD0Ev() {
dec_label_pc_2b70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !256
  call void @_ZdlPv(i64* %3), !insn.addr !256
  ret i64 %2, !insn.addr !257

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b80:
  %0 = add i64 %arg1, -24, !insn.addr !258
  %1 = inttoptr i64 %0 to i64*, !insn.addr !258
  %2 = load i64, i64* %1, align 8, !insn.addr !258
  %3 = add i64 %2, %arg1, !insn.addr !259
  %4 = inttoptr i64 %3 to i64*, !insn.addr !260
  %5 = load i64, i64* %4, align 8, !insn.addr !260
  %6 = add i64 %5, -24, !insn.addr !261
  %7 = inttoptr i64 %6 to i64*, !insn.addr !261
  %8 = load i64, i64* %7, align 8, !insn.addr !261
  %9 = add i64 %3, 8, !insn.addr !262
  %10 = add i64 %9, %8, !insn.addr !262
  %11 = inttoptr i64 %10 to i32*, !insn.addr !262
  %12 = load i32, i32* %11, align 4, !insn.addr !262
  %13 = add i32 %12, 150, !insn.addr !262
  %14 = zext i32 %13 to i64, !insn.addr !262
  ret i64 %14, !insn.addr !263
}

define i64 @_ZTv0_n32_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_2ba0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !264
}

define i64 @_ZTv0_n32_N7MiddleAD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2bb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, -32, !insn.addr !265
  %3 = inttoptr i64 %2 to i64*, !insn.addr !265
  %4 = load i64, i64* %3, align 8, !insn.addr !265
  %5 = add i64 %4, %arg1, !insn.addr !265
  %6 = inttoptr i64 %5 to i64*, !insn.addr !266
  call void @_ZdlPv(i64* %6), !insn.addr !266
  ret i64 %1, !insn.addr !267
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_2bc0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !268
  %2 = inttoptr i64 %1 to i64*, !insn.addr !268
  %3 = load i64, i64* %2, align 8, !insn.addr !268
  %4 = add i64 %0, 8, !insn.addr !269
  %5 = add i64 %4, %3, !insn.addr !269
  %6 = inttoptr i64 %5 to i32*, !insn.addr !269
  %7 = load i32, i32* %6, align 4, !insn.addr !269
  %8 = add i32 %7, 200, !insn.addr !269
  %9 = zext i32 %8 to i64, !insn.addr !269
  ret i64 %9, !insn.addr !270

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7MiddleBD1Ev() {
dec_label_pc_2be0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !271
}

define i64 @_ZN7MiddleBD0Ev() {
dec_label_pc_2bf0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !272
  call void @_ZdlPv(i64* %3), !insn.addr !272
  ret i64 %2, !insn.addr !273

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c00:
  %0 = add i64 %arg1, -24, !insn.addr !274
  %1 = inttoptr i64 %0 to i64*, !insn.addr !274
  %2 = load i64, i64* %1, align 8, !insn.addr !274
  %3 = add i64 %2, %arg1, !insn.addr !275
  %4 = inttoptr i64 %3 to i64*, !insn.addr !276
  %5 = load i64, i64* %4, align 8, !insn.addr !276
  %6 = add i64 %5, -24, !insn.addr !277
  %7 = inttoptr i64 %6 to i64*, !insn.addr !277
  %8 = load i64, i64* %7, align 8, !insn.addr !277
  %9 = add i64 %3, 8, !insn.addr !278
  %10 = add i64 %9, %8, !insn.addr !278
  %11 = inttoptr i64 %10 to i32*, !insn.addr !278
  %12 = load i32, i32* %11, align 4, !insn.addr !278
  %13 = add i32 %12, 200, !insn.addr !278
  %14 = zext i32 %13 to i64, !insn.addr !278
  ret i64 %14, !insn.addr !279
}

define i64 @_ZTv0_n32_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_2c20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !280
}

define i64 @_ZTv0_n32_N7MiddleBD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, -32, !insn.addr !281
  %3 = inttoptr i64 %2 to i64*, !insn.addr !281
  %4 = load i64, i64* %3, align 8, !insn.addr !281
  %5 = add i64 %4, %arg1, !insn.addr !281
  %6 = inttoptr i64 %5 to i64*, !insn.addr !282
  call void @_ZdlPv(i64* %6), !insn.addr !282
  ret i64 %1, !insn.addr !283
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_2c40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !284
  %2 = inttoptr i64 %1 to i64*, !insn.addr !284
  %3 = load i64, i64* %2, align 8, !insn.addr !284
  %4 = add i64 %0, 8, !insn.addr !285
  %5 = add i64 %4, %3, !insn.addr !285
  %6 = inttoptr i64 %5 to i32*, !insn.addr !285
  %7 = load i32, i32* %6, align 4, !insn.addr !285
  %8 = add i32 %7, 250, !insn.addr !285
  %9 = zext i32 %8 to i64, !insn.addr !285
  ret i64 %9, !insn.addr !286

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD0Ev() {
dec_label_pc_2c60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !287
  call void @_ZdlPv(i64* %3), !insn.addr !287
  ret i64 %2, !insn.addr !288

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2c70:
  %0 = add i64 %arg1, -16, !insn.addr !289
  %1 = inttoptr i64 %0 to i64*, !insn.addr !289
  %2 = load i64, i64* %1, align 8, !insn.addr !289
  %3 = add i64 %2, -24, !insn.addr !290
  %4 = inttoptr i64 %3 to i64*, !insn.addr !290
  %5 = load i64, i64* %4, align 8, !insn.addr !290
  %6 = add i64 %arg1, -8, !insn.addr !291
  %7 = add i64 %6, %5, !insn.addr !291
  %8 = inttoptr i64 %7 to i32*, !insn.addr !291
  %9 = load i32, i32* %8, align 4, !insn.addr !291
  %10 = add i32 %9, 250, !insn.addr !291
  %11 = zext i32 %10 to i64, !insn.addr !291
  ret i64 %11, !insn.addr !292

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2c90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !293
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ca0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, -16, !insn.addr !294
  %3 = inttoptr i64 %2 to i64*, !insn.addr !295
  call void @_ZdlPv(i64* %3), !insn.addr !295
  ret i64 %1, !insn.addr !296
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* %arg1) local_unnamed_addr {
dec_label_pc_2cb0:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, -24, !insn.addr !297
  %2 = inttoptr i64 %1 to i64*, !insn.addr !297
  %3 = load i64, i64* %2, align 8, !insn.addr !297
  %4 = add i64 %3, %0, !insn.addr !298
  %5 = inttoptr i64 %4 to i64*, !insn.addr !299
  %6 = load i64, i64* %5, align 8, !insn.addr !299
  %7 = add i64 %6, -24, !insn.addr !300
  %8 = inttoptr i64 %7 to i64*, !insn.addr !300
  %9 = load i64, i64* %8, align 8, !insn.addr !300
  %10 = add i64 %4, 8, !insn.addr !301
  %11 = add i64 %10, %9, !insn.addr !301
  %12 = inttoptr i64 %11 to i32*, !insn.addr !301
  %13 = load i32, i32* %12, align 4, !insn.addr !301
  %14 = add i32 %13, 250, !insn.addr !301
  %15 = zext i32 %14 to i64, !insn.addr !301
  ret i64 %15, !insn.addr !302

; uselistorder directives
  uselistorder i64 8, { 12, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 2, 13 }
  uselistorder i64 -24, { 8, 9, 0, 1, 2, 3, 4, 5, 6, 7 }
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2cd0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !303
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2ce0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %arg1, -32, !insn.addr !304
  %3 = inttoptr i64 %2 to i64*, !insn.addr !304
  %4 = load i64, i64* %3, align 8, !insn.addr !304
  %5 = add i64 %4, %arg1, !insn.addr !304
  %6 = inttoptr i64 %5 to i64*, !insn.addr !305
  call void @_ZdlPv(i64* %6), !insn.addr !305
  ret i64 %1, !insn.addr !306
}

define i64 @_ZN11VirtualBase4funcEv() {
dec_label_pc_2cf0:
  ret i64 100, !insn.addr !307
}

define i64 @_ZN11VirtualBaseD2Ev() {
dec_label_pc_2d00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !308
}

define i64 @_ZN11VirtualBaseD0Ev() {
dec_label_pc_2d10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !309
  call void @_ZdlPv(i64* %3), !insn.addr !309
  ret i64 %2, !insn.addr !310

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_2d20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !311
  call void @_ZdlPv(i64* %3), !insn.addr !311
  ret i64 %2, !insn.addr !312

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_2d30:
  ret i64 1, !insn.addr !313
}

define i64 @_ZN8RTTIBaseD2Ev() {
dec_label_pc_2d40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !314
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_2d50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !315
  call void @_ZdlPv(i64* %3), !insn.addr !315
  ret i64 %2, !insn.addr !316

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder void (i64*)* @_ZdlPv, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_2d60:
  ret i64 2, !insn.addr !317
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2d68:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !318

; uselistorder directives
  uselistorder i32 1, { 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 41, 4, 51, 3, 12, 42, 52, 11, 10, 2, 9, 8, 7, 53, 59, 55, 60, 58, 44, 43, 6, 1, 47, 46, 45, 61, 57, 54, 62, 49, 48, 56, 0, 5, 63, 50 }
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

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movups(i128) local_unnamed_addr

declare void @__asm_movups.13(i128, i128) local_unnamed_addr

declare i128 @__asm_maxsd(i128, i128) local_unnamed_addr

declare i64 @__asm_movsd(i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare i128 @__asm_movsd.14(i64) local_unnamed_addr

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
!24 = !{i64 8539}
!25 = !{i64 8544}
!26 = !{i64 8561}
!27 = !{i64 8567}
!28 = !{i64 8607}
!29 = !{i64 8613}
!30 = !{i64 8664}
!31 = !{i64 8728}
!32 = !{i64 8740}
!33 = !{i64 8747}
!34 = !{i64 8750}
!35 = !{i64 8761}
!36 = !{i64 8763}
!37 = !{i64 8770}
!38 = !{i64 8775}
!39 = !{i64 8780}
!40 = !{i64 8788}
!41 = !{i64 8792}
!42 = !{i64 8804}
!43 = !{i64 8825}
!44 = !{i64 8832}
!45 = !{i64 8837}
!46 = !{i64 8844}
!47 = !{i64 8861}
!48 = !{i64 8866}
!49 = !{i64 8875}
!50 = !{i64 8880}
!51 = !{i64 8886}
!52 = !{i64 8893}
!53 = !{i64 8896}
!54 = !{i64 8898}
!55 = !{i64 8902}
!56 = !{i64 8906}
!57 = !{i64 8910}
!58 = !{i64 8921}
!59 = !{i64 8927}
!60 = !{i64 8933}
!61 = !{i64 8947}
!62 = !{i64 8959}
!63 = !{i64 8962}
!64 = !{i64 8983}
!65 = !{i64 9004}
!66 = !{i64 9039}
!67 = !{i64 9066}
!68 = !{i64 9074}
!69 = !{i64 9145}
!70 = !{i64 9165}
!71 = !{i64 9175}
!72 = !{i64 9186}
!73 = !{i64 9214}
!74 = !{i64 9242}
!75 = !{i64 9248}
!76 = !{i64 9255}
!77 = !{i64 9259}
!78 = !{i64 9267}
!79 = !{i64 9277}
!80 = !{i64 9285}
!81 = !{i64 9301}
!82 = !{i64 9317}
!83 = !{i64 9333}
!84 = !{i64 9349}
!85 = !{i64 9370}
!86 = !{i64 9375}
!87 = !{i64 9381}
!88 = !{i64 9396}
!89 = !{i64 9547}
!90 = !{i64 9557}
!91 = !{i64 9568}
!92 = !{i64 9584}
!93 = !{i64 9599}
!94 = !{i64 9607}
!95 = !{i64 9622}
!96 = !{i64 9626}
!97 = !{i64 9629}
!98 = !{i64 9633}
!99 = !{i64 9644}
!100 = !{i64 9647}
!101 = !{i64 9651}
!102 = !{i64 9655}
!103 = !{i64 9667}
!104 = !{i64 9674}
!105 = !{i64 9681}
!106 = !{i64 9684}
!107 = !{i64 9691}
!108 = !{i64 9695}
!109 = !{i64 9699}
!110 = !{i64 9710}
!111 = !{i64 9713}
!112 = !{i64 9747}
!113 = !{i64 9715}
!114 = !{i64 9718}
!115 = !{i64 9735}
!116 = !{i64 9740}
!117 = !{i64 9777}
!118 = !{i64 9782}
!119 = !{i64 9785}
!120 = !{i64 9788}
!121 = !{i64 9806}
!122 = !{i64 9811}
!123 = !{i64 9817}
!124 = !{i64 9820}
!125 = !{i64 9825}
!126 = !{i64 9829}
!127 = !{i64 9833}
!128 = !{i64 9836}
!129 = !{i64 9863}
!130 = !{i64 9865}
!131 = !{i64 9881}
!132 = !{i64 9888}
!133 = !{i64 9901}
!134 = !{i64 9911}
!135 = !{i64 9918}
!136 = !{i64 9923}
!137 = !{i64 9930}
!138 = !{i64 9940}
!139 = !{i64 9947}
!140 = !{i64 9969}
!141 = !{i64 9979}
!142 = !{i64 9997}
!143 = !{i64 10000}
!144 = !{i64 10002}
!145 = !{i64 10006}
!146 = !{i64 10010}
!147 = !{i64 10014}
!148 = !{i64 9952}
!149 = !{i64 9890}
!150 = !{i64 10025}
!151 = !{i64 10037}
!152 = !{i64 10051}
!153 = !{i64 10074}
!154 = !{i64 10086}
!155 = !{i64 10098}
!156 = !{i64 10120}
!157 = !{i64 10157}
!158 = !{i64 10174}
!159 = !{i64 10206}
!160 = !{i64 10224}
!161 = !{i64 10241}
!162 = !{i64 10252}
!163 = !{i64 10280}
!164 = !{i64 10292}
!165 = !{i64 10296}
!166 = !{i64 10327}
!167 = !{i64 10346}
!168 = !{i64 10365}
!169 = !{i64 10384}
!170 = !{i64 10403}
!171 = !{i64 10408}
!172 = !{i64 10424}
!173 = !{i64 10443}
!174 = !{i64 10448}
!175 = !{i64 10464}
!176 = !{i64 10475}
!177 = !{i64 10481}
!178 = !{i64 10489}
!179 = !{i64 10496}
!180 = !{i64 10499}
!181 = !{i64 10514}
!182 = !{i64 10518}
!183 = !{i64 10528}
!184 = !{i64 10544}
!185 = !{i64 10560}
!186 = !{i64 10578}
!187 = !{i64 10580}
!188 = !{i64 10583}
!189 = !{i64 10592}
!190 = !{i64 10596}
!191 = !{i64 10612}
!192 = !{i64 10614}
!193 = !{i64 10616}
!194 = !{i64 10624}
!195 = !{i64 10631}
!196 = !{i64 10640}
!197 = !{i64 10648}
!198 = !{i64 10650}
!199 = !{i64 10653}
!200 = !{i64 10656}
!201 = !{i64 10659}
!202 = !{i64 10672}
!203 = !{i64 10674}
!204 = !{i64 10676}
!205 = !{i64 10678}
!206 = !{i64 10681}
!207 = !{i64 10686}
!208 = !{i64 10689}
!209 = !{i64 10704}
!210 = !{i64 10707}
!211 = !{i64 10720}
!212 = !{i64 10727}
!213 = !{i64 10736}
!214 = !{i64 10744}
!215 = !{i64 10746}
!216 = !{i64 10749}
!217 = !{i64 10752}
!218 = !{i64 10757}
!219 = !{i64 10768}
!220 = !{i64 10771}
!221 = !{i64 10773}
!222 = !{i64 10775}
!223 = !{i64 10778}
!224 = !{i64 10780}
!225 = !{i64 10783}
!226 = !{i64 10788}
!227 = !{i64 10800}
!228 = !{i64 10803}
!229 = !{i64 10823}
!230 = !{i64 10833}
!231 = !{i64 10839}
!232 = !{i64 10855}
!233 = !{i64 10865}
!234 = !{i64 10871}
!235 = !{i64 10885}
!236 = !{i64 10897}
!237 = !{i64 10903}
!238 = !{i64 10917}
!239 = !{i64 10933}
!240 = !{i64 10944}
!241 = !{i64 10961}
!242 = !{i64 10965}
!243 = !{i64 10971}
!244 = !{i64 10981}
!245 = !{i64 10992}
!246 = !{i64 11009}
!247 = !{i64 11015}
!248 = !{i64 11029}
!249 = !{i64 11040}
!250 = !{i64 11057}
!251 = !{i64 11063}
!252 = !{i64 11075}
!253 = !{i64 11084}
!254 = !{i64 11088}
!255 = !{i64 11104}
!256 = !{i64 11121}
!257 = !{i64 11127}
!258 = !{i64 11139}
!259 = !{i64 11143}
!260 = !{i64 11147}
!261 = !{i64 11151}
!262 = !{i64 11160}
!263 = !{i64 11164}
!264 = !{i64 11168}
!265 = !{i64 11188}
!266 = !{i64 11192}
!267 = !{i64 11198}
!268 = !{i64 11203}
!269 = !{i64 11212}
!270 = !{i64 11216}
!271 = !{i64 11232}
!272 = !{i64 11249}
!273 = !{i64 11255}
!274 = !{i64 11267}
!275 = !{i64 11271}
!276 = !{i64 11275}
!277 = !{i64 11279}
!278 = !{i64 11288}
!279 = !{i64 11292}
!280 = !{i64 11296}
!281 = !{i64 11316}
!282 = !{i64 11320}
!283 = !{i64 11326}
!284 = !{i64 11331}
!285 = !{i64 11340}
!286 = !{i64 11344}
!287 = !{i64 11361}
!288 = !{i64 11367}
!289 = !{i64 11376}
!290 = !{i64 11380}
!291 = !{i64 11389}
!292 = !{i64 11393}
!293 = !{i64 11408}
!294 = !{i64 11425}
!295 = !{i64 11429}
!296 = !{i64 11435}
!297 = !{i64 11443}
!298 = !{i64 11447}
!299 = !{i64 11451}
!300 = !{i64 11455}
!301 = !{i64 11464}
!302 = !{i64 11468}
!303 = !{i64 11472}
!304 = !{i64 11492}
!305 = !{i64 11496}
!306 = !{i64 11502}
!307 = !{i64 11509}
!308 = !{i64 11520}
!309 = !{i64 11537}
!310 = !{i64 11543}
!311 = !{i64 11553}
!312 = !{i64 11559}
!313 = !{i64 11573}
!314 = !{i64 11584}
!315 = !{i64 11601}
!316 = !{i64 11607}
!317 = !{i64 11621}
!318 = !{i64 11636}
