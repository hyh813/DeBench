source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%_Unwind_Exception = type { i32 }
%vtable_13958_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13988_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_139c0_type = type { i64 ()* }
%vtable_13a28_type = type { i64 ()* }
%vtable_13ac8_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13b58_type = type { i64 ()*, i64 (i64*)*, i64 ()* }
%vtable_13b80_type = type { i64 ()*, i64 (i64*)*, i64 ()* }

@global_var_13ef8 = local_unnamed_addr global i64 5232
@global_var_13f00 = local_unnamed_addr global i64 5232
@global_var_13f08 = local_unnamed_addr global i64 5232
@global_var_13f10 = local_unnamed_addr global i64 5232
@global_var_13f18 = local_unnamed_addr global i64 5232
@global_var_13f20 = local_unnamed_addr global i64 5232
@global_var_13f28 = local_unnamed_addr global i64 5232
@global_var_13f30 = local_unnamed_addr global i64 5232
@global_var_13f38 = local_unnamed_addr global i64 5232
@global_var_13f40 = local_unnamed_addr global i64 5232
@global_var_13f48 = local_unnamed_addr global i64 5232
@global_var_13f50 = local_unnamed_addr global i64 5232
@global_var_13f58 = local_unnamed_addr global i64 5232
@global_var_13f60 = local_unnamed_addr global i64 5232
@global_var_13f68 = local_unnamed_addr global i64 5232
@global_var_13f70 = local_unnamed_addr global i64 5232
@global_var_13f78 = local_unnamed_addr global i64 5232
@global_var_13f80 = local_unnamed_addr global i64 5232
@global_var_13f88 = local_unnamed_addr global i64 5232
@global_var_13f98 = local_unnamed_addr global i64 5232
@global_var_13fa0 = local_unnamed_addr global i64 5232
@global_var_13fa8 = local_unnamed_addr global i64 5232
@global_var_13fb0 = local_unnamed_addr global i64 5232
@global_var_13fd0 = local_unnamed_addr global i64 7612
@global_var_14000 = global i64 0
@global_var_14030 = global i64 0
@global_var_13fd8 = local_unnamed_addr global i64 0
@global_var_14008 = external global i64
@global_var_1734 = local_unnamed_addr constant i64 4107496579118661664
@global_var_13fc8 = local_unnamed_addr global i64 0
@global_var_2140 = constant [5 x i8] c"Test\00"
@global_var_14010 = local_unnamed_addr global i64 81072
@global_var_403 = local_unnamed_addr global i64 349644697632768
@global_var_125c = local_unnamed_addr global i64 350812928737280
@global_var_14038 = local_unnamed_addr global i64 0
@global_var_18b0 = local_unnamed_addr constant [3 x i8] c"sV\00"
@global_var_13b30 = local_unnamed_addr global i64 7920
@global_var_13af8 = local_unnamed_addr global i64 7956
@global_var_13fc0 = local_unnamed_addr global i64 0
@global_var_1ac4 = local_unnamed_addr constant i64 -7493991399910539232
@global_var_1adc = local_unnamed_addr constant [3 x i8] c"?\08\00"
@global_var_2bf = global i64 0
@global_var_2360 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_13b78 = local_unnamed_addr global i64 81024
@global_var_13c80 = global i64 0
@global_var_2370 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_13c88 = local_unnamed_addr global [15 x i8]* @global_var_2370
@global_var_1bec = local_unnamed_addr constant i64 1225069753408684096
@global_var_13c68 = global i64 0
@global_var_13c58 = global i64 0
@global_var_14040 = global i64 0
@global_var_2130 = constant [5 x i8] c"Base\00"
@global_var_2138 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_14039 = global i32 0
@global_var_3e8 = global i32 0
@global_var_13c98 = global %_Unwind_Exception* null
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_2148 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_2170 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_2190 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_21b0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_21d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_21f0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2210 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_2230 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_2250 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_2270 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_2290 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_22b0 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_22d0 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_13958 = local_unnamed_addr global %vtable_13958_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, i64 ()* @_ZN4BaseD1Ev, i64 (i64*)* @_ZN4BaseD0Ev }
@global_var_13988 = local_unnamed_addr global %vtable_13988_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, i64 ()* @_ZN7DerivedD1Ev, i64 (i64*)* @_ZN7DerivedD0Ev }
@vtable_139c0 = local_unnamed_addr global %vtable_139c0_type { i64 ()* @_ZN7MiddleB4funcEv }
@vtable_13a28 = local_unnamed_addr global %vtable_13a28_type { i64 ()* @_ZN7MiddleA4funcEv }
@global_var_13ac8 = local_unnamed_addr global %vtable_13ac8_type { i64 ()* @_ZN14DiamondDerived4funcEv, i64 ()* @_ZN14DiamondDerivedD1Ev, i64 (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_13b58 = global %vtable_13b58_type { i64 ()* @_ZN12RTTIDerivedAD1Ev, i64 (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_13b80 = global %vtable_13b80_type { i64 ()* @_ZN12RTTIDerivedBD1Ev, i64 (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1458:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @function_1490(i64 %arg1) local_unnamed_addr {
dec_label_pc_1490:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !2
  ret i64 %0, !insn.addr !2
}

define i32 @function_14a0(i8* %s) local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @puts(i8* %s), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_14b0(i8* %s) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_14c0() local_unnamed_addr {
dec_label_pc_14c0:
  call void @__stack_chk_fail(), !insn.addr !5
  ret void, !insn.addr !5
}

define i64 @function_14d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_14d0:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_14e0(i64 %arg1) local_unnamed_addr {
dec_label_pc_14e0:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define void @function_14f0(i64* %d) local_unnamed_addr {
dec_label_pc_14f0:
  call void @__cxa_finalize(i64* %d), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_1500(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1500:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_1510(i64 %arg1) local_unnamed_addr {
dec_label_pc_1510:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i64 @function_1520(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1520:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i8* @function_1530(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1530:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i64 @function_1540(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i32 @function_1550(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1550:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void @function_1560(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1560:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !15
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_1570(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1570:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_1580(i64 %arg1) local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i64 @__cxa_rethrow(i64 %arg1), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_1590() local_unnamed_addr {
dec_label_pc_1590:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_15a0() local_unnamed_addr {
dec_label_pc_15a0:
  call void @abort(), !insn.addr !19
  ret void, !insn.addr !19
}

define i64 @function_15b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_15b0:
  %0 = call i64 @__cxa_end_catch(i64 %arg1), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i64 @function_15d0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define void @function_15e0(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_15e0:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @function_15f0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define void @function_1600() local_unnamed_addr {
dec_label_pc_1600:
  call void @__gmon_start__(), !insn.addr !24
  ret void, !insn.addr !24
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1640:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fd0, align 8, !insn.addr !25
  %3 = trunc i64 %arg1 to i32, !insn.addr !26
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !26
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !26
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !26
  call void @abort(), !insn.addr !27
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !27
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1674:
  %0 = load i64, i64* inttoptr (i64 81896 to i64*), align 8, !insn.addr !28
  %1 = icmp eq i64 %0, 0, !insn.addr !29
  br i1 %1, label %dec_label_pc_1684, label %dec_label_pc_1680, !insn.addr !29

dec_label_pc_1680:                                ; preds = %dec_label_pc_1674
  call void @__gmon_start__(), !insn.addr !30
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !30

dec_label_pc_1684:                                ; preds = %dec_label_pc_1674
  ret i64 0, !insn.addr !31
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1690:
  ret i64 ptrtoint (i64* @global_var_14030 to i64), !insn.addr !32
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_16c0:
  ret i64 ptrtoint (i64* @global_var_14030 to i64), !insn.addr !33
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1700:
  %x0.0.reg2mem = alloca i64, !insn.addr !34
  %0 = load i8, i8* bitcast (i64* @global_var_14030 to i8*), align 8, !insn.addr !35
  %1 = zext i8 %0 to i64, !insn.addr !35
  %2 = icmp eq i8 %0, 0, !insn.addr !36
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !36
  br i1 %2, label %dec_label_pc_1718, label %dec_label_pc_173c, !insn.addr !36

dec_label_pc_1718:                                ; preds = %dec_label_pc_1700
  %3 = load i64, i64* @global_var_13fd8, align 8, !insn.addr !37
  %4 = icmp eq i64 %3, 0, !insn.addr !38
  br i1 %4, label %dec_label_pc_1730, label %dec_label_pc_1724, !insn.addr !38

dec_label_pc_1724:                                ; preds = %dec_label_pc_1718
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*), align 8, !insn.addr !39
  %6 = inttoptr i64 %5 to i64*, !insn.addr !40
  call void @__cxa_finalize(i64* %6), !insn.addr !40
  br label %dec_label_pc_1730, !insn.addr !40

dec_label_pc_1730:                                ; preds = %dec_label_pc_1724, %dec_label_pc_1718
  %7 = call i64 @deregister_tm_clones(), !insn.addr !41
  store i8 1, i8* bitcast (i64* @global_var_14030 to i8*), align 8, !insn.addr !42
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !42
  br label %dec_label_pc_173c, !insn.addr !42

dec_label_pc_173c:                                ; preds = %dec_label_pc_1700, %dec_label_pc_1730
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !43

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_173c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i64 @register_tm_clones(), !insn.addr !44
  ret i64 %0, !insn.addr !44
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1754:
  %stack_var_-36 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !45
  %1 = inttoptr i64 %0 to i64*, !insn.addr !46
  %2 = load i64, i64* %1, align 8, !insn.addr !46
  %3 = bitcast i64* %stack_var_-36 to i8*, !insn.addr !47
  %4 = call i8* @strncpy(i8* nonnull %3, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_2140, i64 0, i64 0), i32 31), !insn.addr !47
  %5 = call i32 @strlen(i8* nonnull %3), !insn.addr !48
  %6 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !49
  %7 = inttoptr i64 %6 to i64*, !insn.addr !50
  %8 = load i64, i64* %7, align 8, !insn.addr !50
  %9 = icmp eq i64 %2, %8, !insn.addr !51
  br i1 %9, label %dec_label_pc_17b4, label %dec_label_pc_17c8, !insn.addr !51

dec_label_pc_17b4:                                ; preds = %dec_label_pc_1754
  %10 = add i32 %5, 4700
  %11 = zext i32 %10 to i64, !insn.addr !52
  ret i64 %11, !insn.addr !53

dec_label_pc_17c8:                                ; preds = %dec_label_pc_1754
  call void @__stack_chk_fail(), !insn.addr !54
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !54
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_17cc:
  %0 = call i64 @_Znam(i64 20), !insn.addr !55
  %1 = add i64 %0, 4, !insn.addr !56
  %2 = inttoptr i64 %1 to i32*, !insn.addr !56
  store i32 10, i32* %2, align 4, !insn.addr !56
  %3 = add i64 %0, 8, !insn.addr !57
  %4 = inttoptr i64 %3 to i32*, !insn.addr !57
  store i32 20, i32* %4, align 4, !insn.addr !57
  %5 = add i64 %0, 12, !insn.addr !58
  %6 = inttoptr i64 %5 to i32*, !insn.addr !58
  store i32 30, i32* %6, align 4, !insn.addr !58
  %7 = add i64 %0, 16, !insn.addr !59
  %8 = inttoptr i64 %7 to i32*, !insn.addr !59
  store i32 40, i32* %8, align 4, !insn.addr !59
  %9 = load i32, i32* bitcast (i64* @global_var_14038 to i32*), align 8, !insn.addr !60
  store i32 ptrtoint (i32* @global_var_14039 to i32), i32* bitcast (i64* @global_var_14038 to i32*), align 8, !insn.addr !61
  %10 = add i32 %9, 21, !insn.addr !62
  %11 = inttoptr i64 %0 to i64*, !insn.addr !63
  %12 = zext i32 %9 to i64
  %13 = inttoptr i64 %12 to i64*, !insn.addr !63
  call void @_ZdaPv(i64* %11, i64* %13), !insn.addr !63
  %14 = load i32, i32* bitcast (i64* @global_var_14038 to i32*), align 8, !insn.addr !64
  %15 = add i32 %14, -1, !insn.addr !65
  store i32 %15, i32* bitcast (i64* @global_var_14038 to i32*), align 8, !insn.addr !66
  %16 = mul i32 %15, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !67
  %17 = add i32 %10, %16, !insn.addr !67
  %18 = zext i32 %17 to i64, !insn.addr !67
  ret i64 %18, !insn.addr !68

; uselistorder directives
  uselistorder i64 %0, { 4, 3, 2, 1, 0 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1838:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !69
}

define i64 @function_184c(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_184c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !70
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1854:
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !71
  %1 = inttoptr i64 %0 to i64*, !insn.addr !72
  %2 = load i64, i64* %1, align 8, !insn.addr !72
  %3 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !73
  %4 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !74
  %5 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !75
  %6 = inttoptr i64 %5 to i64*, !insn.addr !76
  %7 = load i64, i64* %6, align 8, !insn.addr !76
  %8 = icmp eq i64 %2, %7, !insn.addr !77
  br i1 %8, label %dec_label_pc_18d4, label %dec_label_pc_18e0, !insn.addr !77

dec_label_pc_18d4:                                ; preds = %dec_label_pc_1854
  %9 = add i64 %3, 21, !insn.addr !78
  %10 = add i64 %9, %4, !insn.addr !79
  %11 = and i64 %10, 4294967295, !insn.addr !79
  ret i64 %11, !insn.addr !80

dec_label_pc_18e0:                                ; preds = %dec_label_pc_1854
  call void @__stack_chk_fail(), !insn.addr !81
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !81

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_18e4:
  ret i64 71, !insn.addr !82
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_18ec:
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !83
  %1 = inttoptr i64 %0 to i64*, !insn.addr !84
  %2 = load i64, i64* %1, align 8, !insn.addr !84
  %3 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(), !insn.addr !85
  %4 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(), !insn.addr !86
  %5 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !87
  %6 = inttoptr i64 %5 to i64*, !insn.addr !88
  %7 = load i64, i64* %6, align 8, !insn.addr !88
  %8 = icmp eq i64 %2, %7, !insn.addr !89
  br i1 %8, label %dec_label_pc_1978, label %dec_label_pc_1984, !insn.addr !89

dec_label_pc_1978:                                ; preds = %dec_label_pc_18ec
  %9 = add i64 %4, %3, !insn.addr !90
  %10 = and i64 %9, 4294967295, !insn.addr !90
  ret i64 %10, !insn.addr !91

dec_label_pc_1984:                                ; preds = %dec_label_pc_18ec
  call void @__stack_chk_fail(), !insn.addr !92
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !92

; uselistorder directives
  uselistorder i64 ()* @_ZTv0_n24_N14DiamondDerived4funcEv, { 1, 0 }
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1988:
  ret i64 22, !insn.addr !93
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1990:
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !94
  %1 = inttoptr i64 %0 to i64*, !insn.addr !95
  %2 = load i64, i64* %1, align 8, !insn.addr !95
  %3 = call i32 @_Z12template_maxIiET_S0_S0_(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !96
  %4 = sext i32 %3 to i64, !insn.addr !96
  %5 = bitcast i64 %4 to double, !insn.addr !97
  call void @__asm_fcmpe(double %5, double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !97
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull @0, i32* nonnull @0), !insn.addr !98
  %6 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !99
  %7 = inttoptr i64 %6 to i64*, !insn.addr !100
  %8 = load i64, i64* %7, align 8, !insn.addr !100
  %9 = icmp eq i64 %2, %8, !insn.addr !101
  br i1 %9, label %dec_label_pc_1a24, label %dec_label_pc_1a34, !insn.addr !101

dec_label_pc_1a24:                                ; preds = %dec_label_pc_1990
  %10 = add i32 %3, 32, !insn.addr !102
  %11 = zext i32 %10 to i64, !insn.addr !102
  ret i64 %11, !insn.addr !103

dec_label_pc_1a34:                                ; preds = %dec_label_pc_1990
  call void @__stack_chk_fail(), !insn.addr !104
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !104

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 3, 2, 1, 0, 4 }
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1a38:
  ret i64 16, !insn.addr !105
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1a40:
  ret i64 85, !insn.addr !106
}

define i64 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1a48:
  %x19.0.in.reg2mem = alloca i32, !insn.addr !107
  %x0.2.reg2mem = alloca i64, !insn.addr !107
  %x0.01.reg2mem = alloca i64, !insn.addr !107
  %x0.1.reg2mem = alloca i64, !insn.addr !107
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !108
  %1 = inttoptr i64 %0 to i32*, !insn.addr !109
  store i32 42, i32* %1, align 4, !insn.addr !109
  %2 = load i64, i64* @global_var_13fc0, align 8, !insn.addr !110
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !111
  %4 = icmp eq i64 %2, 1, !insn.addr !112
  store i64 %3, i64* %x0.1.reg2mem, !insn.addr !113
  store i64 %3, i64* %x0.01.reg2mem, !insn.addr !113
  br i1 %4, label %dec_label_pc_1a84, label %dec_label_pc_1a8c, !insn.addr !113

dec_label_pc_1a84:                                ; preds = %dec_label_pc_1a48, %dec_label_pc_1a8c
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %5 = call i64 @__cxa_begin_catch(i64 %x0.1.reload), !insn.addr !114
  %6 = inttoptr i64 %5 to i32*, !insn.addr !115
  %7 = load i32, i32* %6, align 4, !insn.addr !115
  %8 = call i64 @__cxa_rethrow(i64 %5), !insn.addr !116
  %9 = call i64 @__cxa_end_catch(i64 %8), !insn.addr !117
  store i64 %8, i64* %x0.01.reg2mem, !insn.addr !118
  br i1 %4, label %dec_label_pc_1ab4, label %dec_label_pc_1a8c, !insn.addr !118

dec_label_pc_1a8c:                                ; preds = %dec_label_pc_1a48, %dec_label_pc_1a84
  %x0.01.reload = load i64, i64* %x0.01.reg2mem
  %10 = inttoptr i64 %x0.01.reload to %_Unwind_Exception*, !insn.addr !119
  call void @_Unwind_Resume(%_Unwind_Exception* %10), !insn.addr !119
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.1.reg2mem, !insn.addr !119
  br label %dec_label_pc_1a84, !insn.addr !119

dec_label_pc_1ab4:                                ; preds = %dec_label_pc_1a84
  %11 = call i64 @__cxa_begin_catch(i64 %8), !insn.addr !120
  %12 = inttoptr i64 %11 to i32*, !insn.addr !121
  %13 = load i32, i32* %12, align 4, !insn.addr !121
  %14 = mul i32 %13, 2, !insn.addr !122
  %15 = add i32 %14, %7, !insn.addr !122
  %16 = call i64 @__cxa_end_catch(i64 %11), !insn.addr !123
  %17 = call i64 @__cxa_allocate_exception(i64 1), !insn.addr !124
  %18 = call i64 @__cxa_throw(i64 %17, i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 0), !insn.addr !125
  store i64 %18, i64* %x0.2.reg2mem, !insn.addr !126
  br i1 icmp eq (i64 sub (i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 2), i64 0), label %dec_label_pc_1af0, label %dec_label_pc_1ae4, !insn.addr !126

dec_label_pc_1ae4:                                ; preds = %dec_label_pc_1ab4
  br i1 icmp eq (i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 3), label %dec_label_pc_1b10, label %dec_label_pc_1aec, !insn.addr !127

dec_label_pc_1aec:                                ; preds = %dec_label_pc_1ae4
  %19 = inttoptr i64 %18 to %_Unwind_Exception*, !insn.addr !128
  call void @_Unwind_Resume(%_Unwind_Exception* %19), !insn.addr !128
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.2.reg2mem, !insn.addr !128
  br label %dec_label_pc_1af0, !insn.addr !128

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1aec, %dec_label_pc_1ab4
  %x0.2.reload = load i64, i64* %x0.2.reg2mem
  %20 = call i64 @__cxa_begin_catch(i64 %x0.2.reload), !insn.addr !129
  %21 = add i32 %15, 100
  %22 = call i64 @__cxa_end_catch(i64 %20), !insn.addr !130
  store i32 %21, i32* %x19.0.in.reg2mem, !insn.addr !130
  br label %dec_label_pc_1afc, !insn.addr !130

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1af0
  %x19.0.in.reload = load i32, i32* %x19.0.in.reg2mem
  %x19.0 = zext i32 %x19.0.in.reload to i64
  ret i64 %x19.0, !insn.addr !131

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1ae4
  %23 = call i64 @__cxa_begin_catch(i64 %18), !insn.addr !132
  %24 = add i32 %15, 200
  %25 = call i64 @__cxa_end_catch(i64 %23), !insn.addr !133
  store i32 %24, i32* %x19.0.in.reg2mem, !insn.addr !134
  br label %dec_label_pc_1afc, !insn.addr !134

; uselistorder directives
  uselistorder i64 %18, { 1, 2, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64 %8, { 1, 0, 2 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x0.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.01.reg2mem, { 0, 2, 1 }
  uselistorder i32* %x19.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i32* @0, { 3, 4, 0, 1, 2 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_end_catch, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64)* @__cxa_begin_catch, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64, i64, i64)* @__cxa_throw, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_allocate_exception, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1a8c, { 1, 0 }
  uselistorder label %dec_label_pc_1a84, { 1, 0 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1b20:
  ret i64 ptrtoint (i64* @global_var_2bf to i64), !insn.addr !135
}

define i64 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_1b28:
  %0 = call i64 @_Znwm(i64 8), !insn.addr !136
  %1 = inttoptr i64 %0 to i64*, !insn.addr !137
  store i64 ptrtoint (%vtable_13b58_type* @global_var_13b58 to i64), i64* %1, align 8, !insn.addr !137
  %2 = call i64 @_Znwm(i64 8), !insn.addr !138
  %3 = inttoptr i64 %2 to i64*, !insn.addr !139
  store i64 ptrtoint (%vtable_13b80_type* @global_var_13b80 to i64), i64* %3, align 8, !insn.addr !139
  %4 = load i64, i64* %1, align 8, !insn.addr !140
  %5 = add i64 %4, -8, !insn.addr !141
  %6 = inttoptr i64 %5 to i64*, !insn.addr !141
  %7 = load i64, i64* %6, align 8, !insn.addr !141
  %8 = add i64 %7, 8, !insn.addr !142
  %9 = inttoptr i64 %8 to i64*, !insn.addr !142
  %10 = load i64, i64* %9, align 8, !insn.addr !142
  %11 = icmp eq i64 %10, ptrtoint ([15 x i8]* @global_var_2360 to i64), !insn.addr !143
  br i1 %11, label %dec_label_pc_1bb8, label %dec_label_pc_1b8c, !insn.addr !144

dec_label_pc_1b8c:                                ; preds = %dec_label_pc_1b28
  %12 = inttoptr i64 %10 to i8*, !insn.addr !145
  %13 = load i8, i8* %12, align 1, !insn.addr !145
  %14 = icmp eq i8 %13, 42, !insn.addr !146
  br i1 %14, label %dec_label_pc_1bb8, label %dec_label_pc_1b9c, !insn.addr !147

dec_label_pc_1b9c:                                ; preds = %dec_label_pc_1b8c
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2360, i64 0, i64 0)), !insn.addr !148
  br label %dec_label_pc_1bb8, !insn.addr !149

dec_label_pc_1bb8:                                ; preds = %dec_label_pc_1b9c, %dec_label_pc_1b8c, %dec_label_pc_1b28
  %16 = load [15 x i8]*, [15 x i8]** @global_var_13c88, align 8, !insn.addr !150
  %17 = icmp eq [15 x i8]* %16, @global_var_2370, !insn.addr !151
  %18 = ptrtoint [15 x i8]* %16 to i64
  %19 = trunc i64 %18 to i8
  %20 = icmp eq i8 %19, 42, !insn.addr !152
  %or.cond = or i1 %17, %20
  br i1 %or.cond, label %dec_label_pc_1bf4, label %dec_label_pc_1be0, !insn.addr !153

dec_label_pc_1be0:                                ; preds = %dec_label_pc_1bb8
  %21 = getelementptr inbounds [15 x i8], [15 x i8]* %16, i64 0, i64 0, !insn.addr !154
  %22 = call i32 @strcmp(i8* %21, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2370, i64 0, i64 0)), !insn.addr !154
  br label %dec_label_pc_1bf4

dec_label_pc_1bf4:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1bb8
  %23 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_13c58, i64* nonnull @global_var_13c68, i64 0), !insn.addr !155
  %24 = call i64 @__dynamic_cast(i64 %2, i64* nonnull @global_var_13c58, i64* nonnull @global_var_13c80, i64 0), !insn.addr !156
  %25 = inttoptr i64 %10 to i8*, !insn.addr !157
  %26 = load i8, i8* %25, align 1, !insn.addr !157
  %27 = icmp eq i8 %26, 42, !insn.addr !158
  %28 = zext i1 %27 to i64
  %storemerge = add i64 %10, %28
  %29 = inttoptr i64 %storemerge to i8*, !insn.addr !159
  %30 = call i32 @strlen(i8* %29), !insn.addr !159
  ret i64 %0, !insn.addr !160

; uselistorder directives
  uselistorder [15 x i8]* %16, { 1, 0, 2 }
  uselistorder i64 %10, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder [15 x i8]* @global_var_2370, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i8 42, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
}

define i64 @function_1c64() local_unnamed_addr {
dec_label_pc_1c64:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !161
}

define i64 @function_1c74(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i64 %arg7) local_unnamed_addr {
dec_label_pc_1c74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !162
  ret i64 %2, !insn.addr !163
}

define i64 @_Z20test_cpp_oo_featuresv(i64* %result) local_unnamed_addr {
dec_label_pc_1c8c:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_2148 to i8*)), !insn.addr !164
  %1 = call i64 @_Z20test_cpp_member_funcv(), !insn.addr !165
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2170 to i8*)), !insn.addr !166
  %3 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !167
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2190 to i8*)), !insn.addr !168
  %5 = call i64 @_Z21test_cpp_virtual_funcv(), !insn.addr !169
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21b0 to i8*)), !insn.addr !170
  %7 = call i64 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !171
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21d0 to i8*)), !insn.addr !172
  %9 = call i64 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !173
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_21f0 to i8*)), !insn.addr !174
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2210 to i8*)), !insn.addr !175
  %12 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !176
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2230 to i8*)), !insn.addr !177
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2250 to i8*)), !insn.addr !178
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2270 to i8*)), !insn.addr !179
  %16 = call i64 @_Z18test_cpp_exceptionv(), !insn.addr !180
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2290 to i8*)), !insn.addr !181
  %18 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !182
  %19 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22b0 to i8*)), !insn.addr !183
  %20 = call i64 @_Z13test_cpp_rttiv(), !insn.addr !184
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_22d0 to i8*)), !insn.addr !185
  %22 = sext i32 %21 to i64, !insn.addr !185
  ret i64 %22, !insn.addr !186

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1dbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !187
  %3 = call i64 @_Z20test_cpp_oo_featuresv(i64* %2), !insn.addr !187
  ret i64 0, !insn.addr !188
}

define i64 @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1dd4:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !189
  %1 = load i64, i64* inttoptr (i64 81912 to i64*), align 8, !insn.addr !190
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !191
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_14040, i64* nonnull @global_var_14008), !insn.addr !191
  %4 = sext i32 %3 to i64, !insn.addr !191
  ret i64 %4, !insn.addr !192
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_1e18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !193
  %3 = and i64 %2, 4294967295, !insn.addr !193
  ret i64 %3, !insn.addr !194
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_1e20:
  ret i64 ptrtoint ([5 x i8]* @global_var_2130 to i64), !insn.addr !195
}

define i64 @_ZN4BaseD1Ev() {
dec_label_pc_1e2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !196
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_1e30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !197
  %4 = inttoptr i64 %3 to i32*, !insn.addr !197
  %5 = load i32, i32* %4, align 4, !insn.addr !197
  %6 = trunc i64 %1 to i32, !insn.addr !198
  %7 = mul i32 %5, %6, !insn.addr !198
  %8 = zext i32 %7 to i64, !insn.addr !198
  ret i64 %8, !insn.addr !199

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_1e3c:
  ret i64 ptrtoint ([8 x i8]* @global_var_2138 to i64), !insn.addr !200
}

define i64 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_1e48:
  ret i64 30, !insn.addr !201
}

define i64 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1e50:
  ret i64 40, !insn.addr !202
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1e58:
  ret i64 40, !insn.addr !203
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_1e60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !204
  %3 = inttoptr i64 %2 to i64*, !insn.addr !204
  %4 = load i64, i64* %3, align 8, !insn.addr !204
  %5 = add i64 %1, 8, !insn.addr !205
  %6 = add i64 %5, %4, !insn.addr !206
  %7 = inttoptr i64 %6 to i32*, !insn.addr !206
  %8 = load i32, i32* %7, align 4, !insn.addr !206
  %9 = add i32 %8, 150, !insn.addr !207
  %10 = zext i32 %9 to i64, !insn.addr !207
  ret i64 %10, !insn.addr !208

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_1e78:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !209
  %3 = inttoptr i64 %2 to i64*, !insn.addr !209
  %4 = load i64, i64* %3, align 8, !insn.addr !209
  %5 = add i64 %4, %1, !insn.addr !210
  %6 = inttoptr i64 %5 to i64*, !insn.addr !211
  %7 = load i64, i64* %6, align 8, !insn.addr !211
  %8 = add i64 %7, -24, !insn.addr !212
  %9 = inttoptr i64 %8 to i64*, !insn.addr !212
  %10 = load i64, i64* %9, align 8, !insn.addr !212
  %11 = add i64 %5, 8, !insn.addr !213
  %12 = add i64 %11, %10, !insn.addr !214
  %13 = inttoptr i64 %12 to i32*, !insn.addr !214
  %14 = load i32, i32* %13, align 4, !insn.addr !214
  %15 = add i32 %14, 150, !insn.addr !215
  %16 = zext i32 %15 to i64, !insn.addr !215
  ret i64 %16, !insn.addr !216

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_1e9c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !217
  %3 = inttoptr i64 %2 to i64*, !insn.addr !217
  %4 = load i64, i64* %3, align 8, !insn.addr !217
  %5 = add i64 %1, 8, !insn.addr !218
  %6 = add i64 %5, %4, !insn.addr !219
  %7 = inttoptr i64 %6 to i32*, !insn.addr !219
  %8 = load i32, i32* %7, align 4, !insn.addr !219
  %9 = add i32 %8, 200, !insn.addr !220
  %10 = zext i32 %9 to i64, !insn.addr !220
  ret i64 %10, !insn.addr !221

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_1eb4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !222
  %3 = inttoptr i64 %2 to i64*, !insn.addr !222
  %4 = load i64, i64* %3, align 8, !insn.addr !222
  %5 = add i64 %4, %1, !insn.addr !223
  %6 = inttoptr i64 %5 to i64*, !insn.addr !224
  %7 = load i64, i64* %6, align 8, !insn.addr !224
  %8 = add i64 %7, -24, !insn.addr !225
  %9 = inttoptr i64 %8 to i64*, !insn.addr !225
  %10 = load i64, i64* %9, align 8, !insn.addr !225
  %11 = add i64 %5, 8, !insn.addr !226
  %12 = add i64 %11, %10, !insn.addr !227
  %13 = inttoptr i64 %12 to i32*, !insn.addr !227
  %14 = load i32, i32* %13, align 4, !insn.addr !227
  %15 = add i32 %14, 200, !insn.addr !228
  %16 = zext i32 %15 to i64, !insn.addr !228
  ret i64 %16, !insn.addr !229

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 200, { 1, 2, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_1ed8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !230
  %3 = inttoptr i64 %2 to i64*, !insn.addr !230
  %4 = load i64, i64* %3, align 8, !insn.addr !230
  %5 = add i64 %1, 8, !insn.addr !231
  %6 = add i64 %5, %4, !insn.addr !232
  %7 = inttoptr i64 %6 to i32*, !insn.addr !232
  %8 = load i32, i32* %7, align 4, !insn.addr !232
  %9 = add i32 %8, 250, !insn.addr !233
  %10 = zext i32 %9 to i64, !insn.addr !233
  ret i64 %10, !insn.addr !234

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !235
  %3 = inttoptr i64 %2 to i64*, !insn.addr !235
  %4 = load i64, i64* %3, align 8, !insn.addr !235
  %5 = add i64 %4, %1, !insn.addr !236
  %6 = inttoptr i64 %5 to i64*, !insn.addr !237
  %7 = load i64, i64* %6, align 8, !insn.addr !237
  %8 = add i64 %7, -24, !insn.addr !238
  %9 = inttoptr i64 %8 to i64*, !insn.addr !238
  %10 = load i64, i64* %9, align 8, !insn.addr !238
  %11 = add i64 %5, 8, !insn.addr !239
  %12 = add i64 %11, %10, !insn.addr !240
  %13 = inttoptr i64 %12 to i32*, !insn.addr !240
  %14 = load i32, i32* %13, align 4, !insn.addr !240
  %15 = add i32 %14, 250, !insn.addr !241
  %16 = zext i32 %15 to i64, !insn.addr !241
  ret i64 %16, !insn.addr !242

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_1f14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !243
  %3 = inttoptr i64 %2 to i64*, !insn.addr !243
  %4 = load i64, i64* %3, align 8, !insn.addr !243
  %5 = add i64 %4, -24, !insn.addr !244
  %6 = inttoptr i64 %5 to i64*, !insn.addr !244
  %7 = load i64, i64* %6, align 8, !insn.addr !244
  %8 = add i64 %1, -8, !insn.addr !245
  %9 = add i64 %8, %7, !insn.addr !246
  %10 = inttoptr i64 %9 to i32*, !insn.addr !246
  %11 = load i32, i32* %10, align 4, !insn.addr !246
  %12 = add i32 %11, 250, !insn.addr !247
  %13 = zext i32 %12 to i64, !insn.addr !247
  ret i64 %13, !insn.addr !248

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 250, { 0, 2, 1 }
  uselistorder i64 -24, { 0, 8, 9, 1, 2, 3, 4, 5, 6, 7 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_1f2c:
  ret i64 1, !insn.addr !249

; uselistorder directives
  uselistorder i64 1, { 1, 2, 4, 3, 0 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_1f34:
  ret i64 2, !insn.addr !250
}

define i64 @_ZN12RTTIDerivedBD1Ev() {
dec_label_pc_1f3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !251
}

define i64 @_ZN12RTTIDerivedAD1Ev() {
dec_label_pc_1f40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !252
}

define i64 @_ZN14DiamondDerivedD1Ev() {
dec_label_pc_1f44:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !253
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1f48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !254
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1f4c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !255
}

define i64 @_ZN12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1f50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !256
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1f54:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !257
}

define i64 @_ZN7DerivedD1Ev() {
dec_label_pc_1f58:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !258
}

define i64 @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_1f5c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !259
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !259
  ret i64 %3, !insn.addr !260
}

define i64 @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_1f74:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !261
  %3 = call i64 @_ZdlPvm(i64* %2, i64 16), !insn.addr !261
  ret i64 %3, !insn.addr !262

; uselistorder directives
  uselistorder i64 16, { 1, 0, 2 }
}

define i64 @_ZN12MultiDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_1f8c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !263
  %3 = call i64 @_ZdlPvm(i64* %2, i64 32), !insn.addr !263
  ret i64 %3, !insn.addr !264
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_1fa4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !265
  %3 = inttoptr i64 %2 to i64*, !insn.addr !266
  %4 = call i64 @_ZdlPvm(i64* %3, i64 32), !insn.addr !266
  ret i64 %4, !insn.addr !267
}

define i64 @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_1fc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !268
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !268
  ret i64 %3, !insn.addr !269
}

define i64 @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_1fd8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !270
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !270
  ret i64 %3, !insn.addr !271
}

define i64 @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_1ff0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !272
  %3 = call i64 @_ZdlPvm(i64* %2, i64 48), !insn.addr !272
  ret i64 %3, !insn.addr !273
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2008:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !274
  %3 = inttoptr i64 %2 to i64*, !insn.addr !274
  %4 = load i64, i64* %3, align 8, !insn.addr !274
  %5 = add i64 %4, %1, !insn.addr !275
  %6 = inttoptr i64 %5 to i64*, !insn.addr !276
  %7 = call i64 @_ZdlPvm(i64* %6, i64 48), !insn.addr !276
  ret i64 %7, !insn.addr !277

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_202c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !278
  %3 = inttoptr i64 %2 to i64*, !insn.addr !279
  %4 = call i64 @_ZdlPvm(i64* %3, i64 48), !insn.addr !279
  ret i64 %4, !insn.addr !280

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 8, 7, 6, 5, 4, 3, 2, 1, 0, 9 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2048:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !281
  %4 = trunc i64 %1 to i32, !insn.addr !281
  %5 = sub i32 %3, %4, !insn.addr !281
  %6 = xor i64 %2, %1
  %7 = trunc i64 %6 to i32, !insn.addr !281
  %8 = xor i32 %5, %3, !insn.addr !281
  %9 = and i32 %8, %7, !insn.addr !281
  %10 = icmp slt i32 %9, 0, !insn.addr !281
  %11 = icmp slt i32 %5, 0, !insn.addr !281
  %12 = icmp eq i1 %11, %10, !insn.addr !282
  %.v = select i1 %12, i64 %2, i64 %1
  %13 = trunc i64 %.v to i32, !insn.addr !282
  ret i32 %13, !insn.addr !283

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_2054:
  %0 = alloca i128
  %1 = alloca double
  %2 = load double, double* %1
  %3 = load i128, i128* %0
  call void @__asm_fcmpe(double %2, double %arg2), !insn.addr !284
  %4 = trunc i128 %3 to i64, !insn.addr !285
  %5 = bitcast i64 %4 to double, !insn.addr !285
  ret double %5, !insn.addr !285

; uselistorder directives
  uselistorder void (double, double)* @__asm_fcmpe, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2060:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  %5 = inttoptr i64 %2 to i32*, !insn.addr !286
  store i32 %4, i32* %5, align 4, !insn.addr !286
  %6 = inttoptr i64 %1 to i32*, !insn.addr !287
  store i32 %3, i32* %6, align 4, !insn.addr !287
  ret void, !insn.addr !288

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev() local_unnamed_addr {
dec_label_pc_2074:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !289
  %3 = inttoptr i64 %2 to i32*, !insn.addr !289
  store i32 0, i32* %3, align 4, !insn.addr !289
  ret i64 %1, !insn.addr !290

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_207c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !291
  %4 = inttoptr i64 %3 to i32*, !insn.addr !291
  %5 = load i32, i32* %4, align 4, !insn.addr !291
  %6 = icmp sgt i32 %5, 9, !insn.addr !292
  br i1 %6, label %dec_label_pc_2094, label %dec_label_pc_2088, !insn.addr !292

dec_label_pc_2088:                                ; preds = %dec_label_pc_207c
  %7 = zext i32 %5 to i64, !insn.addr !291
  %8 = add i32 %5, 1, !insn.addr !293
  store i32 %8, i32* %4, align 4, !insn.addr !294
  %9 = trunc i64 %1 to i32, !insn.addr !295
  %10 = mul i64 %7, 4, !insn.addr !295
  %11 = and i64 %10, 4294967292, !insn.addr !295
  %12 = add i64 %11, %2, !insn.addr !295
  %13 = inttoptr i64 %12 to i32*, !insn.addr !295
  store i32 %9, i32* %13, align 4, !insn.addr !295
  br label %dec_label_pc_2094, !insn.addr !295

dec_label_pc_2094:                                ; preds = %dec_label_pc_2088, %dec_label_pc_207c
  ret i64 %2, !insn.addr !296

; uselistorder directives
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_2098:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !297
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = icmp slt i32 %3, 0, !insn.addr !298
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !298
  br i1 %4, label %dec_label_pc_20b4, label %dec_label_pc_20a4, !insn.addr !298

dec_label_pc_20a4:                                ; preds = %dec_label_pc_2098
  %5 = add i64 %2, 40, !insn.addr !299
  %6 = inttoptr i64 %5 to i32*, !insn.addr !299
  %7 = load i32, i32* %6, align 4, !insn.addr !299
  %8 = zext i32 %7 to i64, !insn.addr !299
  %9 = icmp slt i64 %1, %8, !insn.addr !300
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !300
  br i1 %9, label %dec_label_pc_20b8, label %dec_label_pc_20b4, !insn.addr !300

dec_label_pc_20b4:                                ; preds = %dec_label_pc_20b8, %dec_label_pc_20a4, %dec_label_pc_2098
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !301

dec_label_pc_20b8:                                ; preds = %dec_label_pc_20a4
  %10 = mul i64 %1, 4, !insn.addr !302
  %11 = and i64 %10, 4294967292, !insn.addr !302
  %12 = add i64 %11, %2, !insn.addr !302
  %13 = inttoptr i64 %12 to i32*, !insn.addr !302
  %14 = load i32, i32* %13, align 4, !insn.addr !302
  %15 = zext i32 %14 to i64, !insn.addr !302
  store i64 %15, i64* %x0.0.reg2mem, !insn.addr !303
  br label %dec_label_pc_20b4, !insn.addr !303

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 2, 0, 1, 3 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 0, 1, 2, 39, 40, 32, 33, 4, 5, 34, 35, 36, 41, 42, 37, 38, 54, 3, 55, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_20c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !304
  %3 = inttoptr i64 %2 to i32*, !insn.addr !304
  %4 = load i32, i32* %3, align 4, !insn.addr !304
  %5 = zext i32 %4 to i64, !insn.addr !304
  ret i64 %5, !insn.addr !305

; uselistorder directives
  uselistorder i64 40, { 2, 3, 4, 5, 0, 1 }
}

define i64 @_ZN9ContainerIdEC1Ev() local_unnamed_addr {
dec_label_pc_20c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !306
  %3 = inttoptr i64 %2 to i32*, !insn.addr !306
  store i32 0, i32* %3, align 4, !insn.addr !306
  ret i64 %1, !insn.addr !307

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 0, { 3, 0, 4, 5, 6, 1, 2 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %d0 = alloca double, align 8
  %2 = add i64 %1, 80, !insn.addr !308
  %3 = inttoptr i64 %2 to i32*, !insn.addr !308
  %4 = load i32, i32* %3, align 4, !insn.addr !308
  %5 = icmp sgt i32 %4, 9, !insn.addr !309
  br i1 %5, label %dec_label_pc_20e8, label %dec_label_pc_20dc, !insn.addr !309

dec_label_pc_20dc:                                ; preds = %dec_label_pc_20d0
  %6 = zext i32 %4 to i64, !insn.addr !308
  %7 = add i32 %4, 1, !insn.addr !310
  store i32 %7, i32* %3, align 4, !insn.addr !311
  %8 = load double, double* %d0, align 8
  %9 = bitcast double %8 to i64
  %10 = mul i64 %6, 8, !insn.addr !312
  %11 = and i64 %10, 4294967288, !insn.addr !312
  %12 = add i64 %11, %1, !insn.addr !312
  %13 = inttoptr i64 %12 to i64*
  store i64 %9, i64* %13, align 8
  br label %dec_label_pc_20e8, !insn.addr !312

dec_label_pc_20e8:                                ; preds = %dec_label_pc_20dc, %dec_label_pc_20d0
  ret i64 %1, !insn.addr !313

; uselistorder directives
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64 8, { 0, 8, 9, 10, 1, 2, 3, 4, 5, 6, 13, 14, 11, 12, 15, 7 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_20ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !314
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_210c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !315
  %3 = inttoptr i64 %2 to i32*, !insn.addr !315
  %4 = load i32, i32* %3, align 4, !insn.addr !315
  %5 = zext i32 %4 to i64, !insn.addr !315
  ret i64 %5, !insn.addr !316
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_2114:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !317

; uselistorder directives
  uselistorder i32 1, { 44, 43, 42, 67, 64, 41, 40, 39, 46, 38, 68, 37, 36, 35, 45, 0, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 5, 4, 50, 49, 48, 47, 3, 2, 65, 51, 66, 1 }
}

declare i64 @_Znam(i64) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @_ZdlPvm(i64*, i64) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64*, i64*, i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow(i64) local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i64 @__cxa_end_catch(i64) local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__asm_fcmpe(double, double) local_unnamed_addr

!0 = !{i64 5220}
!1 = !{i64 5228}
!2 = !{i64 5276}
!3 = !{i64 5292}
!4 = !{i64 5308}
!5 = !{i64 5324}
!6 = !{i64 5340}
!7 = !{i64 5356}
!8 = !{i64 5372}
!9 = !{i64 5388}
!10 = !{i64 5404}
!11 = !{i64 5420}
!12 = !{i64 5436}
!13 = !{i64 5452}
!14 = !{i64 5468}
!15 = !{i64 5484}
!16 = !{i64 5500}
!17 = !{i64 5516}
!18 = !{i64 5532}
!19 = !{i64 5548}
!20 = !{i64 5564}
!21 = !{i64 5596}
!22 = !{i64 5612}
!23 = !{i64 5628}
!24 = !{i64 5644}
!25 = !{i64 5728}
!26 = !{i64 5740}
!27 = !{i64 5744}
!28 = !{i64 5752}
!29 = !{i64 5756}
!30 = !{i64 5760}
!31 = !{i64 5764}
!32 = !{i64 5820}
!33 = !{i64 5880}
!34 = !{i64 5888}
!35 = !{i64 5904}
!36 = !{i64 5908}
!37 = !{i64 5916}
!38 = !{i64 5920}
!39 = !{i64 5928}
!40 = !{i64 5932}
!41 = !{i64 5936}
!42 = !{i64 5944}
!43 = !{i64 5956}
!44 = !{i64 5968}
!45 = !{i64 5988}
!46 = !{i64 5992}
!47 = !{i64 6024}
!48 = !{i64 6036}
!49 = !{i64 6044}
!50 = !{i64 6052}
!51 = !{i64 6064}
!52 = !{i64 6072}
!53 = !{i64 6084}
!54 = !{i64 6088}
!55 = !{i64 6108}
!56 = !{i64 6116}
!57 = !{i64 6124}
!58 = !{i64 6132}
!59 = !{i64 6140}
!60 = !{i64 6148}
!61 = !{i64 6156}
!62 = !{i64 6160}
!63 = !{i64 6164}
!64 = !{i64 6168}
!65 = !{i64 6172}
!66 = !{i64 6176}
!67 = !{i64 6184}
!68 = !{i64 6196}
!69 = !{i64 6216}
!70 = !{i64 6224}
!71 = !{i64 6244}
!72 = !{i64 6248}
!73 = !{i64 6300}
!74 = !{i64 6316}
!75 = !{i64 6332}
!76 = !{i64 6340}
!77 = !{i64 6352}
!78 = !{i64 6320}
!79 = !{i64 6324}
!80 = !{i64 6364}
!81 = !{i64 6368}
!82 = !{i64 6376}
!83 = !{i64 6396}
!84 = !{i64 6400}
!85 = !{i64 6464}
!86 = !{i64 6484}
!87 = !{i64 6496}
!88 = !{i64 6504}
!89 = !{i64 6516}
!90 = !{i64 6488}
!91 = !{i64 6528}
!92 = !{i64 6532}
!93 = !{i64 6540}
!94 = !{i64 6564}
!95 = !{i64 6568}
!96 = !{i64 6588}
!97 = !{i64 6604}
!98 = !{i64 6636}
!99 = !{i64 6668}
!100 = !{i64 6676}
!101 = !{i64 6688}
!102 = !{i64 6660}
!103 = !{i64 6704}
!104 = !{i64 6708}
!105 = !{i64 6716}
!106 = !{i64 6724}
!107 = !{i64 6728}
!108 = !{i64 6748}
!109 = !{i64 6756}
!110 = !{i64 6768}
!111 = !{i64 6772}
!112 = !{i64 6776}
!113 = !{i64 6780}
!114 = !{i64 6800}
!115 = !{i64 6804}
!116 = !{i64 6808}
!117 = !{i64 6820}
!118 = !{i64 6792}
!119 = !{i64 6796}
!120 = !{i64 6836}
!121 = !{i64 6840}
!122 = !{i64 6844}
!123 = !{i64 6848}
!124 = !{i64 6856}
!125 = !{i64 6872}
!126 = !{i64 6880}
!127 = !{i64 6888}
!128 = !{i64 6892}
!129 = !{i64 6896}
!130 = !{i64 6904}
!131 = !{i64 6924}
!132 = !{i64 6928}
!133 = !{i64 6936}
!134 = !{i64 6940}
!135 = !{i64 6948}
!136 = !{i64 6976}
!137 = !{i64 6992}
!138 = !{i64 7000}
!139 = !{i64 7016}
!140 = !{i64 7020}
!141 = !{i64 7024}
!142 = !{i64 7028}
!143 = !{i64 7044}
!144 = !{i64 7048}
!145 = !{i64 7052}
!146 = !{i64 7060}
!147 = !{i64 7064}
!148 = !{i64 7080}
!149 = !{i64 7092}
!150 = !{i64 7104}
!151 = !{i64 7116}
!152 = !{i64 7128}
!153 = !{i64 7120}
!154 = !{i64 7144}
!155 = !{i64 7180}
!156 = !{i64 7220}
!157 = !{i64 7236}
!158 = !{i64 7244}
!159 = !{i64 7248}
!160 = !{i64 7264}
!161 = !{i64 7280}
!162 = !{i64 7284}
!163 = !{i64 7304}
!164 = !{i64 7324}
!165 = !{i64 7328}
!166 = !{i64 7348}
!167 = !{i64 7352}
!168 = !{i64 7372}
!169 = !{i64 7376}
!170 = !{i64 7396}
!171 = !{i64 7400}
!172 = !{i64 7420}
!173 = !{i64 7424}
!174 = !{i64 7444}
!175 = !{i64 7464}
!176 = !{i64 7468}
!177 = !{i64 7488}
!178 = !{i64 7508}
!179 = !{i64 7528}
!180 = !{i64 7532}
!181 = !{i64 7552}
!182 = !{i64 7556}
!183 = !{i64 7576}
!184 = !{i64 7580}
!185 = !{i64 7600}
!186 = !{i64 7608}
!187 = !{i64 7620}
!188 = !{i64 7632}
!189 = !{i64 7664}
!190 = !{i64 7684}
!191 = !{i64 7688}
!192 = !{i64 7700}
!193 = !{i64 7704}
!194 = !{i64 7708}
!195 = !{i64 7720}
!196 = !{i64 7724}
!197 = !{i64 7728}
!198 = !{i64 7732}
!199 = !{i64 7736}
!200 = !{i64 7748}
!201 = !{i64 7756}
!202 = !{i64 7764}
!203 = !{i64 7772}
!204 = !{i64 7780}
!205 = !{i64 7784}
!206 = !{i64 7788}
!207 = !{i64 7792}
!208 = !{i64 7796}
!209 = !{i64 7804}
!210 = !{i64 7808}
!211 = !{i64 7812}
!212 = !{i64 7816}
!213 = !{i64 7820}
!214 = !{i64 7824}
!215 = !{i64 7828}
!216 = !{i64 7832}
!217 = !{i64 7840}
!218 = !{i64 7844}
!219 = !{i64 7848}
!220 = !{i64 7852}
!221 = !{i64 7856}
!222 = !{i64 7864}
!223 = !{i64 7868}
!224 = !{i64 7872}
!225 = !{i64 7876}
!226 = !{i64 7880}
!227 = !{i64 7884}
!228 = !{i64 7888}
!229 = !{i64 7892}
!230 = !{i64 7900}
!231 = !{i64 7904}
!232 = !{i64 7908}
!233 = !{i64 7912}
!234 = !{i64 7916}
!235 = !{i64 7924}
!236 = !{i64 7928}
!237 = !{i64 7932}
!238 = !{i64 7936}
!239 = !{i64 7940}
!240 = !{i64 7944}
!241 = !{i64 7948}
!242 = !{i64 7952}
!243 = !{i64 7956}
!244 = !{i64 7960}
!245 = !{i64 7964}
!246 = !{i64 7968}
!247 = !{i64 7972}
!248 = !{i64 7976}
!249 = !{i64 7984}
!250 = !{i64 7992}
!251 = !{i64 7996}
!252 = !{i64 8000}
!253 = !{i64 8004}
!254 = !{i64 8008}
!255 = !{i64 8012}
!256 = !{i64 8016}
!257 = !{i64 8020}
!258 = !{i64 8024}
!259 = !{i64 8040}
!260 = !{i64 8048}
!261 = !{i64 8064}
!262 = !{i64 8072}
!263 = !{i64 8088}
!264 = !{i64 8096}
!265 = !{i64 8112}
!266 = !{i64 8116}
!267 = !{i64 8124}
!268 = !{i64 8140}
!269 = !{i64 8148}
!270 = !{i64 8164}
!271 = !{i64 8172}
!272 = !{i64 8188}
!273 = !{i64 8196}
!274 = !{i64 8212}
!275 = !{i64 8220}
!276 = !{i64 8224}
!277 = !{i64 8232}
!278 = !{i64 8248}
!279 = !{i64 8252}
!280 = !{i64 8260}
!281 = !{i64 8264}
!282 = !{i64 8268}
!283 = !{i64 8272}
!284 = !{i64 8276}
!285 = !{i64 8284}
!286 = !{i64 8296}
!287 = !{i64 8300}
!288 = !{i64 8304}
!289 = !{i64 8308}
!290 = !{i64 8312}
!291 = !{i64 8316}
!292 = !{i64 8324}
!293 = !{i64 8328}
!294 = !{i64 8332}
!295 = !{i64 8336}
!296 = !{i64 8340}
!297 = !{i64 8344}
!298 = !{i64 8352}
!299 = !{i64 8356}
!300 = !{i64 8368}
!301 = !{i64 8372}
!302 = !{i64 8376}
!303 = !{i64 8380}
!304 = !{i64 8384}
!305 = !{i64 8388}
!306 = !{i64 8392}
!307 = !{i64 8396}
!308 = !{i64 8400}
!309 = !{i64 8408}
!310 = !{i64 8412}
!311 = !{i64 8416}
!312 = !{i64 8420}
!313 = !{i64 8424}
!314 = !{i64 8448}
!315 = !{i64 8460}
!316 = !{i64 8464}
!317 = !{i64 8484}
