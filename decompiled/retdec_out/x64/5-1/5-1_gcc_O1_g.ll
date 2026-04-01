source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_59a0_type = type { void (i64*, i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%vtable_59d0_type = type { void (i64*, i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%vtable_5a08_type = type { void (i64*)* }
%vtable_5a70_type = type { void (i64*)* }
%vtable_5b10_type = type { void (i64*)*, void (i64*)*, void (i64*)* }
%vtable_5ba0_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_5bc8_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_6030 = global i64 0
@global_var_5fd0 = local_unnamed_addr global i64 0
@global_var_6008 = external global i64
@global_var_5b78 = global i64 10877
@global_var_5b40 = local_unnamed_addr global i64 10905
@global_var_3298 = local_unnamed_addr constant i64 4609434218613702656
@global_var_32a0 = local_unnamed_addr constant i64 4612811918334230528
@global_var_5be0 = global i64 0
@global_var_5cb0 = global i64 0
@global_var_3278 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_5bc0 = local_unnamed_addr global i64 23808
@global_var_5d00 = global i64 0
@global_var_3288 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_5d08 = local_unnamed_addr global [15 x i8]* @global_var_3288
@global_var_5ce8 = global i64 0
@global_var_5cd8 = global i64 0
@global_var_6038 = global i64 0
@global_var_3004 = constant [5 x i8] c"Base\00"
@global_var_3009 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_125c = global i32 20
@global_var_6034 = local_unnamed_addr global i32 0
@global_var_6035 = global i32 0
@global_var_3e8 = global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_3018 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_303c = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_305a = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_3076 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_3092 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_30ae = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_30cb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_30e7 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_3103 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_311f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_313b = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_3158 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_3175 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_59a0 = global %vtable_59a0_type { void (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, void (i64*)* @_ZN4BaseD2Ev, void (i64*)* @_ZN4BaseD0Ev }
@global_var_59d0 = global %vtable_59d0_type { void (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, void (i64*)* @_ZN7DerivedD2Ev, void (i64*)* @_ZN7DerivedD0Ev }
@vtable_5a08 = local_unnamed_addr global %vtable_5a08_type { void (i64*)* @_ZN7MiddleB4funcEv }
@vtable_5a70 = local_unnamed_addr global %vtable_5a70_type { void (i64*)* @_ZN7MiddleA4funcEv }
@global_var_5b10 = local_unnamed_addr global %vtable_5b10_type { void (i64*)* @_ZN14DiamondDerived4funcEv, void (i64*)* @_ZN14DiamondDerivedD1Ev, void (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_5ba0 = global %vtable_5ba0_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_5bc8 = global %vtable_5bc8_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

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

define void @function_2150(i64* %d) local_unnamed_addr {
dec_label_pc_2150:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_2160(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_2160:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i64 @function_2170(i64 %arg1) local_unnamed_addr {
dec_label_pc_2170:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !8
  ret i64 %0, !insn.addr !8
}

define i64 @function_2180(i64 %arg1) local_unnamed_addr {
dec_label_pc_2180:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !9
  ret i64 %0, !insn.addr !9
}

define i32 @function_2190(i8* %s) local_unnamed_addr {
dec_label_pc_2190:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @function_21a0(i64 %arg1) local_unnamed_addr {
dec_label_pc_21a0:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i32 @function_21b0(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i64 @function_21c0(i64 %arg1) local_unnamed_addr {
dec_label_pc_21c0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_21d0(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_21d0:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define void @function_21e0() local_unnamed_addr {
dec_label_pc_21e0:
  call void @__stack_chk_fail(), !insn.addr !15
  ret void, !insn.addr !15
}

define i64 @function_21f0(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_21f0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define void @function_2200(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_2200:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !17
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !17
  ret void, !insn.addr !17
}

define i32 @function_2210(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2210:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i64 @function_2220() local_unnamed_addr {
dec_label_pc_2220:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !19
  ret i64 %0, !insn.addr !19
}

define i64 @function_2230() local_unnamed_addr {
dec_label_pc_2230:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i32 @function_2240(i8* %s) local_unnamed_addr {
dec_label_pc_2240:
  %0 = call i32 @puts(i8* %s), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i64 @function_2250() local_unnamed_addr {
dec_label_pc_2250:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !22
  ret i64 %0, !insn.addr !22
}

define i64 @function_2260(i64 %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2260:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64* %arg2, i64 %arg3), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define void @function_2270(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_2270:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !24
  ret void, !insn.addr !24
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_2280:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !25
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !25
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !25
  %3 = call i32 @__libc_start_main(i64 10608, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !25
  %4 = call i64 @__asm_hlt(), !insn.addr !26
  unreachable, !insn.addr !26
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_22b0:
  ret i64 ptrtoint (i64* @global_var_6030 to i64), !insn.addr !27
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_22e0:
  ret i64 0, !insn.addr !28
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2320:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_6030 to i8*), align 8, !insn.addr !29
  %3 = icmp eq i8 %2, 0, !insn.addr !29
  %4 = icmp eq i1 %3, false, !insn.addr !30
  br i1 %4, label %dec_label_pc_2358, label %dec_label_pc_232d, !insn.addr !30

dec_label_pc_232d:                                ; preds = %dec_label_pc_2320
  %5 = load i64, i64* @global_var_5fd0, align 8, !insn.addr !31
  %6 = icmp eq i64 %5, 0, !insn.addr !31
  br i1 %6, label %dec_label_pc_2347, label %dec_label_pc_233b, !insn.addr !32

dec_label_pc_233b:                                ; preds = %dec_label_pc_232d
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !33
  %8 = inttoptr i64 %7 to i64*, !insn.addr !34
  call void @__cxa_finalize(i64* %8), !insn.addr !34
  br label %dec_label_pc_2347, !insn.addr !34

dec_label_pc_2347:                                ; preds = %dec_label_pc_233b, %dec_label_pc_232d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !35
  store i8 1, i8* bitcast (i64* @global_var_6030 to i8*), align 8, !insn.addr !36
  ret i64 %9, !insn.addr !37

dec_label_pc_2358:                                ; preds = %dec_label_pc_2320
  ret i64 %1, !insn.addr !38
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_2360:
  %0 = call i64 @register_tm_clones(), !insn.addr !39
  ret i64 %0, !insn.addr !39
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_2369:
  %stack_var_-52 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !40
  store i64 1953719636, i64* %stack_var_-52, align 8, !insn.addr !41
  %1 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !42
  %2 = call i32 @strlen(i8* nonnull %1), !insn.addr !42
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !43
  %4 = icmp eq i64 %0, %3, !insn.addr !43
  %5 = icmp eq i1 %4, false, !insn.addr !44
  br i1 %5, label %dec_label_pc_23d9, label %dec_label_pc_23d4, !insn.addr !44

dec_label_pc_23d4:                                ; preds = %dec_label_pc_2369
  %6 = add i32 %2, ptrtoint (i32* @global_var_125c to i32), !insn.addr !45
  ret i32 %6, !insn.addr !46

dec_label_pc_23d9:                                ; preds = %dec_label_pc_2369
  call void @__stack_chk_fail(), !insn.addr !47
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !47
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_23de:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_Znam(i64 20), !insn.addr !48
  %3 = add i64 %2, 4, !insn.addr !49
  %4 = inttoptr i64 %3 to i32*, !insn.addr !49
  store i32 10, i32* %4, align 4, !insn.addr !49
  %5 = add i64 %2, 8, !insn.addr !50
  %6 = inttoptr i64 %5 to i32*, !insn.addr !50
  store i32 20, i32* %6, align 4, !insn.addr !50
  %7 = add i64 %2, 12, !insn.addr !51
  %8 = inttoptr i64 %7 to i32*, !insn.addr !51
  store i32 30, i32* %8, align 4, !insn.addr !51
  %9 = add i64 %2, 16, !insn.addr !52
  %10 = inttoptr i64 %9 to i32*, !insn.addr !52
  store i32 40, i32* %10, align 4, !insn.addr !52
  %11 = load i32, i32* @global_var_6034, align 4, !insn.addr !53
  store i32 ptrtoint (i32* @global_var_6035 to i32), i32* @global_var_6034, align 4, !insn.addr !54
  %12 = add i32 %11, 21, !insn.addr !55
  %13 = inttoptr i64 %2 to i64*, !insn.addr !56
  %14 = and i64 %1, 4294967295
  %15 = inttoptr i64 %14 to i64*, !insn.addr !56
  call void @_ZdaPv(i64* %13, i64* %15), !insn.addr !56
  %16 = load i32, i32* @global_var_6034, align 4, !insn.addr !57
  %17 = add i32 %16, -1, !insn.addr !58
  store i32 %17, i32* @global_var_6034, align 4, !insn.addr !59
  %18 = mul i32 %17, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !60
  %19 = add i32 %12, %18, !insn.addr !61
  ret i32 %19, !insn.addr !62

; uselistorder directives
  uselistorder i64 %2, { 0, 3, 1, 4, 2 }
  uselistorder i32* @global_var_6034, { 3, 2, 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_243c:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !63
  ret i32 %1, !insn.addr !63
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_244e:
  %stack_var_-40 = alloca i64, align 8
  %derived_-48 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !64
  store i64 ptrtoint (%vtable_59a0_type* @global_var_59a0 to i64), i64* %derived_-48, align 8, !insn.addr !65
  store i64 ptrtoint (%vtable_59d0_type* @global_var_59d0 to i64), i64* %stack_var_-40, align 8, !insn.addr !66
  %1 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %derived_-48, i32 5), !insn.addr !67
  %2 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-40, i32 5), !insn.addr !68
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !69
  %4 = icmp eq i64 %0, %3, !insn.addr !69
  %5 = icmp eq i1 %4, false, !insn.addr !70
  br i1 %5, label %dec_label_pc_24c1, label %dec_label_pc_24bb, !insn.addr !70

dec_label_pc_24bb:                                ; preds = %dec_label_pc_244e
  %6 = add i32 %1, 21, !insn.addr !71
  %7 = add i32 %6, %2, !insn.addr !71
  ret i32 %7, !insn.addr !72

dec_label_pc_24c1:                                ; preds = %dec_label_pc_244e
  call void @__stack_chk_fail(), !insn.addr !73
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !73

; uselistorder directives
  uselistorder i32 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_24c6:
  ret i32 71, !insn.addr !74
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_24d0:
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !75
  store i64 ptrtoint (i64* @global_var_5b78 to i64), i64* %stack_var_-56, align 8, !insn.addr !76
  %1 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %stack_var_-56), !insn.addr !77
  %2 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %stack_var_-56), !insn.addr !78
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !79
  %4 = icmp eq i64 %0, %3, !insn.addr !79
  %5 = icmp eq i1 %4, false, !insn.addr !80
  br i1 %5, label %dec_label_pc_2547, label %dec_label_pc_2540, !insn.addr !80

dec_label_pc_2540:                                ; preds = %dec_label_pc_24d0
  %6 = add i64 %2, %1, !insn.addr !81
  %7 = trunc i64 %6 to i32, !insn.addr !82
  ret i32 %7, !insn.addr !82

dec_label_pc_2547:                                ; preds = %dec_label_pc_24d0
  call void @__stack_chk_fail(), !insn.addr !83
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !83

; uselistorder directives
  uselistorder i64 (i64*)* @_ZTv0_n24_N14DiamondDerived4funcEv, { 1, 0 }
}

define void @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_254c:
  ret void, !insn.addr !84
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2556:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !85
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !86
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !87
  %3 = call i128 @__asm_movsd(i64 4612811918334230528), !insn.addr !88
  %4 = trunc i128 %3 to i64, !insn.addr !89
  %5 = bitcast i64 %4 to double, !insn.addr !89
  %6 = trunc i128 %2 to i64, !insn.addr !89
  %7 = bitcast i64 %6 to double, !insn.addr !89
  %8 = call double @_Z12template_maxIdET_S0_S0_(double %5, double %7), !insn.addr !89
  %9 = fptrunc double %8 to float, !insn.addr !89
  %10 = bitcast float %9 to i32, !insn.addr !89
  %11 = sext i32 %10 to i128, !insn.addr !89
  %12 = call i64 @__asm_movsd.9(i128 %11), !insn.addr !90
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !91
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !92
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-20), !insn.addr !93
  %sext = mul i64 %12, 4294967296
  %13 = ashr exact i64 %sext, 32, !insn.addr !94
  %14 = call i32 @__asm_cvttsd2si(i64 %13), !insn.addr !94
  %15 = load i32, i32* %stack_var_-24, align 4, !insn.addr !95
  %16 = load i32, i32* %stack_var_-20, align 4, !insn.addr !96
  %17 = call i64 @__readfsqword(i64 40), !insn.addr !97
  %18 = icmp eq i64 %0, %17, !insn.addr !97
  %19 = icmp eq i1 %18, false, !insn.addr !98
  br i1 %19, label %dec_label_pc_25e0, label %dec_label_pc_25da, !insn.addr !98

dec_label_pc_25da:                                ; preds = %dec_label_pc_2556
  %20 = add i32 %14, %1, !insn.addr !99
  %21 = add i32 %20, %15, !insn.addr !95
  %22 = add i32 %21, %16, !insn.addr !96
  ret i32 %22, !insn.addr !100

dec_label_pc_25e0:                                ; preds = %dec_label_pc_2556
  call void @__stack_chk_fail(), !insn.addr !101
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !101

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0, 4 }
  uselistorder i32 20, { 1, 2, 0 }
}

define void @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_25e5:
  ret void, !insn.addr !102
}

define void @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_25ef:
  ret void, !insn.addr !103
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_25f9:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !104
  %1 = inttoptr i64 %0 to i32*, !insn.addr !105
  store i32 42, i32* %1, align 4, !insn.addr !105
  %2 = call i64 @__cxa_throw(i64 %0, i64* nonnull @global_var_5be0, i64 0), !insn.addr !106
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !107
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !107
  %4 = call i64 @__cxa_begin_catch(i64 %2), !insn.addr !108
  %5 = inttoptr i64 %4 to i32*, !insn.addr !109
  %6 = load i32, i32* %5, align 4, !insn.addr !109
  %7 = call i64 @__cxa_end_catch(), !insn.addr !110
  %8 = call i64 @__cxa_allocate_exception(i64 1), !insn.addr !111
  %9 = call i64 @__cxa_throw(i64 %8, i64* nonnull @global_var_5cb0, i64 0), !insn.addr !112
  %10 = mul i32 %6, 2, !insn.addr !113
  %11 = inttoptr i64 %9 to %_Unwind_Exception*, !insn.addr !114
  call void @_Unwind_Resume(%_Unwind_Exception* %11), !insn.addr !114
  %12 = call i64 @__cxa_begin_catch(i64 %9), !insn.addr !115
  %13 = add i32 %10, 100, !insn.addr !116
  %14 = call i64 @__cxa_end_catch(), !insn.addr !117
  ret i32 %13, !insn.addr !118

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 ()* @__cxa_end_catch, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_begin_catch, { 1, 0, 2 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder i64 (i64, i64*, i64)* @__cxa_throw, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_allocate_exception, { 1, 0, 2 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_26d1:
  ret i32 703, !insn.addr !119
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_26db:
  %rbx.1.reg2mem = alloca i64, !insn.addr !120
  %rbx.0.reg2mem = alloca i64, !insn.addr !120
  %0 = call i64 @_Znwm(i64 8), !insn.addr !121
  %1 = inttoptr i64 %0 to i64*, !insn.addr !122
  store i64 ptrtoint (%vtable_5ba0_type* @global_var_5ba0 to i64), i64* %1, align 8, !insn.addr !122
  %2 = call i64 @_Znwm(i64 8), !insn.addr !123
  %3 = inttoptr i64 %2 to i64*, !insn.addr !124
  store i64 ptrtoint (%vtable_5bc8_type* @global_var_5bc8 to i64), i64* %3, align 8, !insn.addr !124
  %4 = load i64, i64* %1, align 8, !insn.addr !125
  %5 = add i64 %4, -8, !insn.addr !126
  %6 = inttoptr i64 %5 to i64*, !insn.addr !126
  %7 = load i64, i64* %6, align 8, !insn.addr !126
  %8 = add i64 %7, 8, !insn.addr !127
  %9 = inttoptr i64 %8 to i64*, !insn.addr !127
  %10 = load i64, i64* %9, align 8, !insn.addr !127
  %11 = icmp eq i64 %10, ptrtoint ([15 x i8]* @global_var_3278 to i64), !insn.addr !128
  store i64 10, i64* %rbx.0.reg2mem, !insn.addr !129
  br i1 %11, label %dec_label_pc_2752, label %dec_label_pc_2734, !insn.addr !129

dec_label_pc_2734:                                ; preds = %dec_label_pc_26db
  %12 = inttoptr i64 %10 to i8*, !insn.addr !130
  %13 = load i8, i8* %12, align 1, !insn.addr !130
  %14 = icmp eq i8 %13, 42, !insn.addr !130
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !131
  br i1 %14, label %dec_label_pc_2752, label %dec_label_pc_273f, !insn.addr !131

dec_label_pc_273f:                                ; preds = %dec_label_pc_2734
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_3278, i64 0, i64 0)), !insn.addr !132
  %16 = icmp eq i32 %15, 0, !insn.addr !133
  %17 = select i1 %16, i64 10, i64 0, !insn.addr !134
  store i64 %17, i64* %rbx.0.reg2mem, !insn.addr !134
  br label %dec_label_pc_2752, !insn.addr !134

dec_label_pc_2752:                                ; preds = %dec_label_pc_273f, %dec_label_pc_2734, %dec_label_pc_26db
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %18 = load [15 x i8]*, [15 x i8]** @global_var_5d08, align 8, !insn.addr !135
  %19 = icmp eq [15 x i8]* %18, @global_var_3288, !insn.addr !136
  br i1 %19, label %dec_label_pc_277a, label %dec_label_pc_2769, !insn.addr !137

dec_label_pc_2769:                                ; preds = %dec_label_pc_2752
  %20 = ptrtoint [15 x i8]* %18 to i64
  %21 = trunc i64 %20 to i8
  %22 = icmp eq i8 %21, 42, !insn.addr !138
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !139
  br i1 %22, label %dec_label_pc_277d, label %dec_label_pc_276e, !insn.addr !139

dec_label_pc_276e:                                ; preds = %dec_label_pc_2769
  %23 = getelementptr inbounds [15 x i8], [15 x i8]* %18, i64 0, i64 0, !insn.addr !140
  %24 = call i32 @strcmp(i8* %23, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_3288, i64 0, i64 0)), !insn.addr !140
  %25 = icmp eq i32 %24, 0, !insn.addr !141
  %26 = icmp eq i1 %25, false, !insn.addr !142
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !142
  br i1 %26, label %dec_label_pc_277d, label %dec_label_pc_277a, !insn.addr !142

dec_label_pc_277a:                                ; preds = %dec_label_pc_276e, %dec_label_pc_2752
  %27 = or i64 %rbx.0.reload, 20, !insn.addr !143
  store i64 %27, i64* %rbx.1.reg2mem, !insn.addr !143
  br label %dec_label_pc_277d, !insn.addr !143

dec_label_pc_277d:                                ; preds = %dec_label_pc_277a, %dec_label_pc_276e, %dec_label_pc_2769
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %28 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_5cd8, i64* nonnull @global_var_5ce8, i64 0), !insn.addr !144
  %29 = add nsw i64 %rbx.1.reload, 100, !insn.addr !145
  %30 = icmp eq i64 %28, 0, !insn.addr !146
  %31 = icmp eq i1 %30, false, !insn.addr !147
  %32 = select i1 %31, i64 %29, i64 %rbx.1.reload, !insn.addr !147
  %33 = call i64 @__dynamic_cast(i64 %2, i64* nonnull @global_var_5cd8, i64* nonnull @global_var_5d00, i64 0), !insn.addr !148
  %34 = add nsw i64 %32, 200, !insn.addr !149
  %35 = icmp eq i64 %33, 0, !insn.addr !150
  %36 = icmp eq i1 %35, false, !insn.addr !151
  %.v = select i1 %36, i64 %34, i64 %32
  %37 = trunc i64 %.v to i32, !insn.addr !151
  %38 = inttoptr i64 %10 to i8*, !insn.addr !152
  %39 = load i8, i8* %38, align 1, !insn.addr !152
  %40 = icmp eq i8 %39, 42, !insn.addr !152
  %41 = zext i1 %40 to i64, !insn.addr !153
  %42 = add i64 %10, %41, !insn.addr !154
  %43 = inttoptr i64 %42 to i8*, !insn.addr !155
  %44 = call i32 @strlen(i8* %43), !insn.addr !155
  %45 = add i32 %44, %37, !insn.addr !156
  ret i32 %45, !insn.addr !157

; uselistorder directives
  uselistorder [15 x i8]* %18, { 1, 0, 2 }
  uselistorder i64 %rbx.0.reload, { 2, 0, 1 }
  uselistorder i64 %10, { 0, 2, 1, 3 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i1 false, { 1, 2, 3, 4, 5, 6, 7, 0 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 10, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2801:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3018 to i8*)), !insn.addr !158
  %1 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !159
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_303c to i8*)), !insn.addr !160
  %3 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !161
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_305a to i8*)), !insn.addr !162
  %5 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !163
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3076 to i8*)), !insn.addr !164
  %7 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !165
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3092 to i8*)), !insn.addr !166
  %9 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !167
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_30ae to i8*)), !insn.addr !168
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_30cb to i8*)), !insn.addr !169
  %12 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !170
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_30e7 to i8*)), !insn.addr !171
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3103 to i8*)), !insn.addr !172
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_311f to i8*)), !insn.addr !173
  %16 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !174
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_313b to i8*)), !insn.addr !175
  %18 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !176
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3158 to i8*)), !insn.addr !177
  %20 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !178
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_3175 to i8*)), !insn.addr !179
  ret void, !insn.addr !180

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2970:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !181
  ret i32 0, !insn.addr !182
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_2987:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !183
  %1 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !184
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !185
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_6038, i64* nonnull @global_var_6008), !insn.addr !185
  ret void, !insn.addr !186

; uselistorder directives
  uselistorder i64 0, { 50, 36, 51, 37, 5, 6, 3, 4, 35, 7, 8, 0, 38, 39, 48, 2, 1, 49, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 40, 41, 42, 43, 44, 45, 46, 47 }
}

define void @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_29b4:
  ret void, !insn.addr !187
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_29bc:
  ret i64 ptrtoint ([5 x i8]* @global_var_3004 to i64), !insn.addr !188
}

define void @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_29c8:
  ret void, !insn.addr !189
}

define void @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_29ce:
  ret void, !insn.addr !190
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_29da:
  ret i64 ptrtoint ([8 x i8]* @global_var_3009 to i64), !insn.addr !191
}

define void @_ZN12MultiDerived5funcAEv(i64* %result) local_unnamed_addr {
dec_label_pc_29e6:
  ret void, !insn.addr !192
}

define void @_ZN12MultiDerived5funcBEv(i64* %result) local_unnamed_addr {
dec_label_pc_29f0:
  ret void, !insn.addr !193
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_29fa:
  ret i64 40, !insn.addr !194
}

define void @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_2a04:
  ret void, !insn.addr !195
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a19:
  %0 = add i64 %arg1, -24, !insn.addr !196
  %1 = inttoptr i64 %0 to i64*, !insn.addr !196
  %2 = load i64, i64* %1, align 8, !insn.addr !196
  %3 = add i64 %2, %arg1, !insn.addr !196
  %4 = inttoptr i64 %3 to i64*, !insn.addr !197
  %5 = load i64, i64* %4, align 8, !insn.addr !197
  %6 = add i64 %5, -24, !insn.addr !198
  %7 = inttoptr i64 %6 to i64*, !insn.addr !198
  %8 = load i64, i64* %7, align 8, !insn.addr !198
  %9 = add i64 %3, 8, !insn.addr !199
  %10 = add i64 %9, %8, !insn.addr !199
  %11 = inttoptr i64 %10 to i32*, !insn.addr !199
  %12 = load i32, i32* %11, align 4, !insn.addr !199
  %13 = add i32 %12, 150, !insn.addr !200
  %14 = zext i32 %13 to i64, !insn.addr !200
  ret i64 %14, !insn.addr !201

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define void @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_2a36:
  ret void, !insn.addr !202
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a4b:
  %0 = add i64 %arg1, -24, !insn.addr !203
  %1 = inttoptr i64 %0 to i64*, !insn.addr !203
  %2 = load i64, i64* %1, align 8, !insn.addr !203
  %3 = add i64 %2, %arg1, !insn.addr !203
  %4 = inttoptr i64 %3 to i64*, !insn.addr !204
  %5 = load i64, i64* %4, align 8, !insn.addr !204
  %6 = add i64 %5, -24, !insn.addr !205
  %7 = inttoptr i64 %6 to i64*, !insn.addr !205
  %8 = load i64, i64* %7, align 8, !insn.addr !205
  %9 = add i64 %3, 8, !insn.addr !206
  %10 = add i64 %9, %8, !insn.addr !206
  %11 = inttoptr i64 %10 to i32*, !insn.addr !206
  %12 = load i32, i32* %11, align 4, !insn.addr !206
  %13 = add i32 %12, 200, !insn.addr !207
  %14 = zext i32 %13 to i64, !insn.addr !207
  ret i64 %14, !insn.addr !208

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define void @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_2a68:
  ret void, !insn.addr !209
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* %arg1) local_unnamed_addr {
dec_label_pc_2a7d:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, -24, !insn.addr !210
  %2 = inttoptr i64 %1 to i64*, !insn.addr !210
  %3 = load i64, i64* %2, align 8, !insn.addr !210
  %4 = add i64 %3, %0, !insn.addr !210
  %5 = inttoptr i64 %4 to i64*, !insn.addr !211
  %6 = load i64, i64* %5, align 8, !insn.addr !211
  %7 = add i64 %6, -24, !insn.addr !212
  %8 = inttoptr i64 %7 to i64*, !insn.addr !212
  %9 = load i64, i64* %8, align 8, !insn.addr !212
  %10 = add i64 %4, 8, !insn.addr !213
  %11 = add i64 %10, %9, !insn.addr !213
  %12 = inttoptr i64 %11 to i32*, !insn.addr !213
  %13 = load i32, i32* %12, align 4, !insn.addr !213
  %14 = add i32 %13, 250, !insn.addr !214
  %15 = zext i32 %14 to i64, !insn.addr !214
  ret i64 %15, !insn.addr !215

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2a99:
  %0 = add i64 %arg1, -16, !insn.addr !216
  %1 = inttoptr i64 %0 to i64*, !insn.addr !216
  %2 = load i64, i64* %1, align 8, !insn.addr !216
  %3 = add i64 %2, -24, !insn.addr !217
  %4 = inttoptr i64 %3 to i64*, !insn.addr !217
  %5 = load i64, i64* %4, align 8, !insn.addr !217
  %6 = add i64 %arg1, -8, !insn.addr !218
  %7 = add i64 %6, %5, !insn.addr !218
  %8 = inttoptr i64 %7 to i32*, !insn.addr !218
  %9 = load i32, i32* %8, align 4, !insn.addr !218
  %10 = add i32 %9, 250, !insn.addr !219
  %11 = zext i32 %10 to i64, !insn.addr !219
  ret i64 %11, !insn.addr !220

; uselistorder directives
  uselistorder i64 -24, { 0, 5, 6, 1, 2, 3, 4 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_2ab0:
  ret i64 1, !insn.addr !221
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_2aba:
  ret i64 2, !insn.addr !222
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_2ac4:
  ret void, !insn.addr !223
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_2aca:
  ret void, !insn.addr !224
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_2ad0:
  ret void, !insn.addr !225
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2ad5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !226
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2ada:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !227
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2ae0:
  ret void, !insn.addr !228
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2ae5:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !229
}

define void @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_2aea:
  ret void, !insn.addr !230
}

define void @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_2af0:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !231
  ret void, !insn.addr !232
}

define void @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_2b08:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !233
  ret void, !insn.addr !234
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2b20:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !235
  ret void, !insn.addr !236
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b37:
  %0 = add i64 %arg1, -16, !insn.addr !237
  %1 = inttoptr i64 %0 to i64*, !insn.addr !238
  %2 = call i64 @_ZdlPvm(i64* %1, i64 32), !insn.addr !238
  ret i64 %2, !insn.addr !239

; uselistorder directives
  uselistorder i64 32, { 1, 2, 0 }
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_2b52:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !240
  ret void, !insn.addr !241
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_2b6a:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !242
  ret void, !insn.addr !243

; uselistorder directives
  uselistorder i64 8, { 0, 1, 2, 8, 5, 6, 7, 3, 4, 9 }
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_2b82:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !244
  ret void, !insn.addr !245
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b99:
  %0 = add i64 %arg1, -32, !insn.addr !246
  %1 = inttoptr i64 %0 to i64*, !insn.addr !246
  %2 = load i64, i64* %1, align 8, !insn.addr !246
  %3 = add i64 %2, %arg1, !insn.addr !246
  %4 = inttoptr i64 %3 to i64*, !insn.addr !247
  %5 = call i64 @_ZdlPvm(i64* %4, i64 48), !insn.addr !247
  ret i64 %5, !insn.addr !248
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2bb7:
  %0 = add i64 %arg1, -16, !insn.addr !249
  %1 = inttoptr i64 %0 to i64*, !insn.addr !250
  %2 = call i64 @_ZdlPvm(i64* %1, i64 48), !insn.addr !250
  ret i64 %2, !insn.addr !251

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 5, 4, 3, 6, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2bd2:
  %0 = sub i32 %arg1, %arg2, !insn.addr !252
  %1 = xor i32 %arg2, %arg1, !insn.addr !252
  %2 = xor i32 %0, %arg1, !insn.addr !252
  %3 = and i32 %2, %1, !insn.addr !252
  %4 = icmp slt i32 %3, 0, !insn.addr !252
  %5 = icmp slt i32 %0, 0, !insn.addr !252
  %6 = icmp eq i1 %5, %4, !insn.addr !253
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !253
  ret i32 %7, !insn.addr !254

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_2bde:
  %0 = fptrunc double %arg2 to float
  %1 = bitcast float %0 to i32
  %2 = sext i32 %1 to i128
  %3 = fptrunc double %arg1 to float
  %4 = bitcast float %3 to i32
  %5 = sext i32 %4 to i128
  %6 = call i128 @__asm_maxsd(i128 %5, i128 %2), !insn.addr !255
  %7 = trunc i128 %6 to i64, !insn.addr !256
  %8 = bitcast i64 %7 to double, !insn.addr !256
  ret double %8, !insn.addr !256
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2be7:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !257
  store i32 %3, i32* %arg2, align 4, !insn.addr !258
  ret void, !insn.addr !259

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2bf4:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !260
  %2 = inttoptr i64 %1 to i32*, !insn.addr !260
  store i32 0, i32* %2, align 4, !insn.addr !260
  ret void, !insn.addr !261
}

define void @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2c00:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !262
  %2 = inttoptr i64 %1 to i32*, !insn.addr !262
  %3 = load i32, i32* %2, align 4, !insn.addr !262
  %4 = icmp sgt i32 %3, 9, !insn.addr !263
  br i1 %4, label %dec_label_pc_2c17, label %dec_label_pc_2c0c, !insn.addr !263

dec_label_pc_2c0c:                                ; preds = %dec_label_pc_2c00
  %5 = zext i32 %3 to i64, !insn.addr !262
  %6 = add i32 %3, 1, !insn.addr !264
  store i32 %6, i32* %2, align 4, !insn.addr !265
  %sext = mul i64 %5, 4294967296
  %7 = ashr exact i64 %sext, 30, !insn.addr !266
  %8 = add i64 %7, %0, !insn.addr !266
  %9 = inttoptr i64 %8 to i32*, !insn.addr !266
  store i32 %arg2, i32* %9, align 4, !insn.addr !266
  br label %dec_label_pc_2c17, !insn.addr !266

dec_label_pc_2c17:                                ; preds = %dec_label_pc_2c0c, %dec_label_pc_2c00
  ret void, !insn.addr !267

; uselistorder directives
  uselistorder i32 %3, { 0, 2, 1 }
  uselistorder i64 40, { 9, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8 }
}

define void @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2c18:
  ret void, !insn.addr !268
}

define void @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_2c34:
  ret void, !insn.addr !269
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2c3c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !270
  %2 = inttoptr i64 %1 to i32*, !insn.addr !270
  store i32 0, i32* %2, align 4, !insn.addr !270
  ret void, !insn.addr !271
}

define void @_ZN9ContainerIdE4pushEd(i64* %result, double %arg2) local_unnamed_addr {
dec_label_pc_2c48:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = ptrtoint i64* %result to i64
  %3 = add i64 %2, 80, !insn.addr !272
  %4 = inttoptr i64 %3 to i32*, !insn.addr !272
  %5 = load i32, i32* %4, align 4, !insn.addr !272
  %6 = icmp sgt i32 %5, 9, !insn.addr !273
  br i1 %6, label %dec_label_pc_2c61, label %dec_label_pc_2c54, !insn.addr !273

dec_label_pc_2c54:                                ; preds = %dec_label_pc_2c48
  %7 = zext i32 %5 to i64, !insn.addr !272
  %8 = add i32 %5, 1, !insn.addr !274
  store i32 %8, i32* %4, align 4, !insn.addr !275
  %sext = mul i64 %7, 4294967296
  %9 = call i64 @__asm_movsd.9(i128 %1), !insn.addr !276
  %10 = ashr exact i64 %sext, 29, !insn.addr !276
  %11 = add i64 %10, %2, !insn.addr !276
  %12 = inttoptr i64 %11 to i64*, !insn.addr !276
  store i64 %9, i64* %12, align 8, !insn.addr !276
  br label %dec_label_pc_2c61, !insn.addr !276

dec_label_pc_2c61:                                ; preds = %dec_label_pc_2c54, %dec_label_pc_2c48
  ret void, !insn.addr !277

; uselistorder directives
  uselistorder i32 %5, { 0, 2, 1 }
}

define void @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2c62:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !278
  %3 = icmp slt i32 %arg2, 0, !insn.addr !279
  br i1 %3, label %dec_label_pc_2c73, label %dec_label_pc_2c6e, !insn.addr !280

dec_label_pc_2c6e:                                ; preds = %dec_label_pc_2c62
  %4 = ptrtoint i64* %result to i64
  %5 = add i64 %4, 80, !insn.addr !281
  %6 = inttoptr i64 %5 to i32*, !insn.addr !281
  %7 = load i32, i32* %6, align 4, !insn.addr !281
  %8 = icmp sgt i32 %7, %arg2, !insn.addr !282
  br i1 %8, label %dec_label_pc_2c74, label %dec_label_pc_2c73, !insn.addr !282

dec_label_pc_2c73:                                ; preds = %dec_label_pc_2c74, %dec_label_pc_2c6e, %dec_label_pc_2c62
  ret void, !insn.addr !283

dec_label_pc_2c74:                                ; preds = %dec_label_pc_2c6e
  %9 = zext i32 %arg2 to i64
  %sext = mul i64 %9, 4294967296
  %10 = ashr exact i64 %sext, 29, !insn.addr !284
  %11 = add i64 %10, %4, !insn.addr !284
  %12 = inttoptr i64 %11 to i64*, !insn.addr !284
  %13 = load i64, i64* %12, align 8, !insn.addr !284
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !284
  br label %dec_label_pc_2c73, !insn.addr !285

; uselistorder directives
  uselistorder i128 %1, { 1, 0 }
  uselistorder i32 0, { 5, 6, 7, 9, 10, 0, 8, 1, 2, 3, 4 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_2c7e:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !286
  %2 = inttoptr i64 %1 to i32*, !insn.addr !286
  %3 = load i32, i32* %2, align 4, !insn.addr !286
  %4 = zext i32 %3 to i64, !insn.addr !286
  ret i64 %4, !insn.addr !287
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2c88:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !288

; uselistorder directives
  uselistorder i32 1, { 8, 1, 12, 0, 13, 7, 6, 5, 4, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 10, 9, 27, 26, 28, 30, 29, 3, 31, 2, 32, 11 }
}

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i64 @_Znam(i64) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @_ZdlPvm(i64*, i64) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64*, i64*, i64) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64*, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i64 @__asm_movsd.9(i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i64) local_unnamed_addr

declare i128 @__asm_maxsd(i128, i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 8532}
!7 = !{i64 8548}
!8 = !{i64 8564}
!9 = !{i64 8580}
!10 = !{i64 8596}
!11 = !{i64 8612}
!12 = !{i64 8628}
!13 = !{i64 8644}
!14 = !{i64 8660}
!15 = !{i64 8676}
!16 = !{i64 8692}
!17 = !{i64 8708}
!18 = !{i64 8724}
!19 = !{i64 8740}
!20 = !{i64 8756}
!21 = !{i64 8772}
!22 = !{i64 8788}
!23 = !{i64 8804}
!24 = !{i64 8820}
!25 = !{i64 8863}
!26 = !{i64 8869}
!27 = !{i64 8920}
!28 = !{i64 8984}
!29 = !{i64 8996}
!30 = !{i64 9003}
!31 = !{i64 9006}
!32 = !{i64 9017}
!33 = !{i64 9019}
!34 = !{i64 9026}
!35 = !{i64 9031}
!36 = !{i64 9036}
!37 = !{i64 9044}
!38 = !{i64 9048}
!39 = !{i64 9060}
!40 = !{i64 9073}
!41 = !{i64 9094}
!42 = !{i64 9146}
!43 = !{i64 9161}
!44 = !{i64 9170}
!45 = !{i64 9151}
!46 = !{i64 9176}
!47 = !{i64 9177}
!48 = !{i64 9192}
!49 = !{i64 9200}
!50 = !{i64 9207}
!51 = !{i64 9214}
!52 = !{i64 9221}
!53 = !{i64 9228}
!54 = !{i64 9237}
!55 = !{i64 9243}
!56 = !{i64 9246}
!57 = !{i64 9251}
!58 = !{i64 9257}
!59 = !{i64 9260}
!60 = !{i64 9266}
!61 = !{i64 9272}
!62 = !{i64 9275}
!63 = !{i64 9293}
!64 = !{i64 9303}
!65 = !{i64 9326}
!66 = !{i64 9338}
!67 = !{i64 9361}
!68 = !{i64 9378}
!69 = !{i64 9392}
!70 = !{i64 9401}
!71 = !{i64 9383}
!72 = !{i64 9408}
!73 = !{i64 9409}
!74 = !{i64 9423}
!75 = !{i64 9434}
!76 = !{i64 9465}
!77 = !{i64 9495}
!78 = !{i64 9513}
!79 = !{i64 9525}
!80 = !{i64 9534}
!81 = !{i64 9518}
!82 = !{i64 9542}
!83 = !{i64 9543}
!84 = !{i64 9557}
!85 = !{i64 9567}
!86 = !{i64 9593}
!87 = !{i64 9600}
!88 = !{i64 9608}
!89 = !{i64 9616}
!90 = !{i64 9621}
!91 = !{i64 9627}
!92 = !{i64 9635}
!93 = !{i64 9653}
!94 = !{i64 9658}
!95 = !{i64 9666}
!96 = !{i64 9670}
!97 = !{i64 9679}
!98 = !{i64 9688}
!99 = !{i64 9664}
!100 = !{i64 9695}
!101 = !{i64 9696}
!102 = !{i64 9710}
!103 = !{i64 9720}
!104 = !{i64 9734}
!105 = !{i64 9742}
!106 = !{i64 9760}
!107 = !{i64 9824}
!108 = !{i64 9829}
!109 = !{i64 9834}
!110 = !{i64 9840}
!111 = !{i64 9850}
!112 = !{i64 9870}
!113 = !{i64 9836}
!114 = !{i64 9894}
!115 = !{i64 9899}
!116 = !{i64 9904}
!117 = !{i64 9907}
!118 = !{i64 9918}
!119 = !{i64 9946}
!120 = !{i64 9947}
!121 = !{i64 9964}
!122 = !{i64 9979}
!123 = !{i64 9988}
!124 = !{i64 10003}
!125 = !{i64 10007}
!126 = !{i64 10011}
!127 = !{i64 10015}
!128 = !{i64 10031}
!129 = !{i64 10034}
!130 = !{i64 10041}
!131 = !{i64 10045}
!132 = !{i64 10053}
!133 = !{i64 10058}
!134 = !{i64 10063}
!135 = !{i64 10073}
!136 = !{i64 10084}
!137 = !{i64 10087}
!138 = !{i64 10089}
!139 = !{i64 10092}
!140 = !{i64 10097}
!141 = !{i64 10102}
!142 = !{i64 10104}
!143 = !{i64 10106}
!144 = !{i64 10131}
!145 = !{i64 10139}
!146 = !{i64 10142}
!147 = !{i64 10145}
!148 = !{i64 10170}
!149 = !{i64 10178}
!150 = !{i64 10184}
!151 = !{i64 10187}
!152 = !{i64 10190}
!153 = !{i64 10197}
!154 = !{i64 10200}
!155 = !{i64 10206}
!156 = !{i64 10211}
!157 = !{i64 10240}
!158 = !{i64 10256}
!159 = !{i64 10261}
!160 = !{i64 10285}
!161 = !{i64 10290}
!162 = !{i64 10314}
!163 = !{i64 10319}
!164 = !{i64 10343}
!165 = !{i64 10348}
!166 = !{i64 10372}
!167 = !{i64 10377}
!168 = !{i64 10401}
!169 = !{i64 10428}
!170 = !{i64 10433}
!171 = !{i64 10457}
!172 = !{i64 10484}
!173 = !{i64 10511}
!174 = !{i64 10516}
!175 = !{i64 10540}
!176 = !{i64 10545}
!177 = !{i64 10569}
!178 = !{i64 10574}
!179 = !{i64 10598}
!180 = !{i64 10607}
!181 = !{i64 10616}
!182 = !{i64 10630}
!183 = !{i64 10646}
!184 = !{i64 10661}
!185 = !{i64 10668}
!186 = !{i64 10674}
!187 = !{i64 10683}
!188 = !{i64 10695}
!189 = !{i64 10700}
!190 = !{i64 10712}
!191 = !{i64 10725}
!192 = !{i64 10735}
!193 = !{i64 10745}
!194 = !{i64 10755}
!195 = !{i64 10776}
!196 = !{i64 10784}
!197 = !{i64 10788}
!198 = !{i64 10791}
!199 = !{i64 10795}
!200 = !{i64 10799}
!201 = !{i64 10804}
!202 = !{i64 10826}
!203 = !{i64 10834}
!204 = !{i64 10838}
!205 = !{i64 10841}
!206 = !{i64 10845}
!207 = !{i64 10849}
!208 = !{i64 10854}
!209 = !{i64 10876}
!210 = !{i64 10884}
!211 = !{i64 10888}
!212 = !{i64 10891}
!213 = !{i64 10895}
!214 = !{i64 10899}
!215 = !{i64 10904}
!216 = !{i64 10909}
!217 = !{i64 10913}
!218 = !{i64 10917}
!219 = !{i64 10921}
!220 = !{i64 10926}
!221 = !{i64 10937}
!222 = !{i64 10947}
!223 = !{i64 10952}
!224 = !{i64 10958}
!225 = !{i64 10964}
!226 = !{i64 10969}
!227 = !{i64 10974}
!228 = !{i64 10980}
!229 = !{i64 10985}
!230 = !{i64 10990}
!231 = !{i64 11005}
!232 = !{i64 11014}
!233 = !{i64 11029}
!234 = !{i64 11038}
!235 = !{i64 11053}
!236 = !{i64 11062}
!237 = !{i64 11071}
!238 = !{i64 11080}
!239 = !{i64 11089}
!240 = !{i64 11103}
!241 = !{i64 11112}
!242 = !{i64 11127}
!243 = !{i64 11136}
!244 = !{i64 11151}
!245 = !{i64 11160}
!246 = !{i64 11172}
!247 = !{i64 11181}
!248 = !{i64 11190}
!249 = !{i64 11199}
!250 = !{i64 11208}
!251 = !{i64 11217}
!252 = !{i64 11222}
!253 = !{i64 11226}
!254 = !{i64 11229}
!255 = !{i64 11234}
!256 = !{i64 11238}
!257 = !{i64 11247}
!258 = !{i64 11249}
!259 = !{i64 11251}
!260 = !{i64 11256}
!261 = !{i64 11263}
!262 = !{i64 11268}
!263 = !{i64 11274}
!264 = !{i64 11276}
!265 = !{i64 11279}
!266 = !{i64 11284}
!267 = !{i64 11287}
!268 = !{i64 11306}
!269 = !{i64 11323}
!270 = !{i64 11328}
!271 = !{i64 11335}
!272 = !{i64 11340}
!273 = !{i64 11346}
!274 = !{i64 11348}
!275 = !{i64 11351}
!276 = !{i64 11356}
!277 = !{i64 11361}
!278 = !{i64 11366}
!279 = !{i64 11370}
!280 = !{i64 11372}
!281 = !{i64 11374}
!282 = !{i64 11377}
!283 = !{i64 11379}
!284 = !{i64 11383}
!285 = !{i64 11388}
!286 = !{i64 11394}
!287 = !{i64 11397}
!288 = !{i64 11412}
