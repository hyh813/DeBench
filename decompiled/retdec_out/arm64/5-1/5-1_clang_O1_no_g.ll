source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%vtable_139a8_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_139e8_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13a30_type = type { i64 ()*, i64 ()*, i64 (i64*)*, i64 ()* }
%vtable_13ae0_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13b08_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13b38_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13bd0_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13c70_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13d30_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13d58_type = type { i64 ()*, i64 (i64*)*, i64 ()* }
%vtable_13d80_type = type { i64 ()*, i64 (i64*)*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_14000 = global i64 5680
@global_var_14008 = local_unnamed_addr global i64 5680
@global_var_14010 = local_unnamed_addr global i64 5680
@global_var_14018 = local_unnamed_addr global i64 5680
@global_var_14020 = local_unnamed_addr global i64 5680
@global_var_14028 = local_unnamed_addr global i64 5680
@global_var_14030 = local_unnamed_addr global i64 5680
@global_var_14038 = local_unnamed_addr global i64 5680
@global_var_14040 = local_unnamed_addr global i64 5680
@global_var_14048 = local_unnamed_addr global i64 5680
@global_var_14050 = local_unnamed_addr global i64 5680
@global_var_14058 = local_unnamed_addr global i64 5680
@global_var_14060 = local_unnamed_addr global i64 5680
@global_var_14068 = local_unnamed_addr global i64 5680
@global_var_14070 = local_unnamed_addr global i64 5680
@global_var_14078 = local_unnamed_addr global i64 5680
@global_var_14080 = local_unnamed_addr global i64 5680
@global_var_14090 = local_unnamed_addr global i64 5680
@global_var_14098 = local_unnamed_addr global i64 5680
@global_var_140a0 = local_unnamed_addr global i64 5680
@global_var_140a8 = local_unnamed_addr global i64 5680
@global_var_140e4 = global i64 0
@global_var_140b8 = external local_unnamed_addr global i64
@global_var_13fb8 = local_unnamed_addr global i64 8272
@global_var_140e0 = global i64 0
@global_var_13fc0 = local_unnamed_addr global i64 0
@global_var_18f4 = local_unnamed_addr constant i64 4108270635304615968
@global_var_267a = local_unnamed_addr constant [5 x i8] c"Test\00"
@global_var_2689 = local_unnamed_addr constant i64 0
@global_var_13a60 = local_unnamed_addr global i64 8620
@global_var_13b68 = local_unnamed_addr global i64 9004
@global_var_13ba0 = local_unnamed_addr global i64 9056
@global_var_2360 = local_unnamed_addr constant i64 -549860228951179256
@global_var_1bfc = local_unnamed_addr constant i64 -7493991273209004000
@global_var_13940 = local_unnamed_addr global i64 0
@global_var_2bf = global i64 0
@global_var_246d = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_2486 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_13958 = global i64 0
@global_var_13968 = global i64 0
@global_var_13980 = global i64 0
@global_var_1e24 = local_unnamed_addr constant i64 5944752924126085128
@global_var_25ec = constant [5 x i8] c"Base\00"
@global_var_25f1 = constant [8 x i8] c"Derived\00"
@0 = external global i32
@global_var_125c = global i32 0
@global_var_140e8 = local_unnamed_addr global i32 0
@global_var_140e9 = global i32 0
@global_var_3e8 = global i32 0
@global_var_13fb0 = local_unnamed_addr global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_25f9 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_2495 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_24b3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_24cf = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_24eb = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_2507 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2524 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_2540 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_255c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_2578 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_2594 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_25b1 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_25ce = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_139a8 = local_unnamed_addr global %vtable_139a8_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, i64 ()* @_ZN4BaseD2Ev, i64 (i64*)* @_ZN4BaseD0Ev }
@global_var_139e8 = local_unnamed_addr global %vtable_139e8_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, i64 ()* @_ZN4BaseD2Ev, i64 (i64*)* @_ZN7DerivedD0Ev }
@global_var_13a30 = local_unnamed_addr global %vtable_13a30_type { i64 ()* @_ZN12MultiDerived5funcAEv, i64 ()* @_ZN12MultiDerivedD2Ev, i64 (i64*)* @_ZN12MultiDerivedD0Ev, i64 ()* @_ZN12MultiDerived5funcBEv }
@vtable_13ae0 = local_unnamed_addr global %vtable_13ae0_type { i64 ()* @_ZN5BaseA5funcAEv, i64 ()* @_ZN5BaseAD2Ev, i64 (i64*)* @_ZN5BaseAD0Ev }
@vtable_13b08 = local_unnamed_addr global %vtable_13b08_type { i64 ()* @_ZN5BaseB5funcBEv, i64 ()* @_ZN5BaseBD2Ev, i64 (i64*)* @_ZN5BaseBD0Ev }
@global_var_13b38 = local_unnamed_addr global %vtable_13b38_type { i64 ()* @_ZN14DiamondDerived4funcEv, i64 ()* @_ZN14DiamondDerivedD1Ev, i64 (i64*)* @_ZN14DiamondDerivedD0Ev }
@vtable_13bd0 = local_unnamed_addr global %vtable_13bd0_type { i64 ()* @_ZN7MiddleA4funcEv, i64 ()* @_ZN7MiddleAD1Ev, i64 (i64*)* @_ZN7MiddleAD0Ev }
@vtable_13c70 = local_unnamed_addr global %vtable_13c70_type { i64 ()* @_ZN7MiddleB4funcEv, i64 ()* @_ZN7MiddleBD1Ev, i64 (i64*)* @_ZN7MiddleBD0Ev }
@vtable_13d30 = local_unnamed_addr global %vtable_13d30_type { i64 ()* @_ZN11VirtualBase4funcEv, i64 ()* @_ZN11VirtualBaseD2Ev, i64 (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_13d58 = global %vtable_13d58_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_13d80 = global %vtable_13d80_type { i64 ()* @_ZN8RTTIBaseD2Ev, i64 (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1618:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @function_1650(i64 %arg1) local_unnamed_addr {
dec_label_pc_1650:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !2
  ret i64 %0, !insn.addr !2
}

define i32 @function_1660(i8* %s) local_unnamed_addr {
dec_label_pc_1660:
  %0 = call i32 @puts(i8* %s), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_1670(i8* %s) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i64 @function_1680(i64 %arg1) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
}

define i64 @function_1690(i64 %arg1) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_16a0(i64 %arg1) local_unnamed_addr {
dec_label_pc_16a0:
  %0 = call i64 @__cxa_finalize.6(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_16b0(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_16c0(i64* %ptr) local_unnamed_addr {
dec_label_pc_16c0:
  call void @_ZdlPv(i64* %ptr), !insn.addr !9
  ret void, !insn.addr !9
}

define i64 @function_16d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_16d0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i64 @function_16e0(i64 %arg1, i64 %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64 %arg2, i64* %arg3, i64 %arg4), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i32 @function_16f0(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_1700(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1700:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !13
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !13
  ret void, !insn.addr !13
}

define i32 @function_1710(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i64 @function_1720(i64 %arg1) local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i64 @__cxa_rethrow(i64 %arg1), !insn.addr !15
  ret i64 %0, !insn.addr !15
}

define i64 @function_1730() local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define void @function_1740() local_unnamed_addr {
dec_label_pc_1740:
  call void @abort(), !insn.addr !17
  ret void, !insn.addr !17
}

define i64 @function_1750(i64 %arg1) local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i64 @__cxa_end_catch(i64 %arg1), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define i64 @function_1770(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !19
  ret i64 %0, !insn.addr !19
}

define void @function_1780(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1780:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !20
  ret void, !insn.addr !20
}

define i64 @function_1790(i64 %arg1) local_unnamed_addr {
dec_label_pc_1790:
  %0 = call i64 @__gmon_start__.19(i64 %arg1), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define i32 @function_17a0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i64 @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_17c0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !23
  %1 = load i64, i64* inttoptr (i64 81888 to i64*), align 32, !insn.addr !24
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !25
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_140e4, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 184) to i64*)), !insn.addr !25
  %4 = sext i32 %3 to i64, !insn.addr !25
  ret i64 %4, !insn.addr !26
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1800:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fb8, align 8, !insn.addr !27
  %3 = trunc i64 %arg1 to i32, !insn.addr !28
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !28
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !28
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !28
  call void @abort(), !insn.addr !29
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !29
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1834:
  %0 = load i64, i64* inttoptr (i64 81872 to i64*), align 16, !insn.addr !30
  %1 = icmp eq i64 %0, 0, !insn.addr !31
  br i1 %1, label %dec_label_pc_1844, label %dec_label_pc_1840, !insn.addr !31

dec_label_pc_1840:                                ; preds = %dec_label_pc_1834
  %2 = call i64 @__gmon_start__.19(i64 %0), !insn.addr !32
  ret i64 %2, !insn.addr !32

dec_label_pc_1844:                                ; preds = %dec_label_pc_1834
  ret i64 0, !insn.addr !33
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1850:
  ret i64 ptrtoint (i64* @global_var_140e0 to i64), !insn.addr !34
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1880:
  ret i64 ptrtoint (i64* @global_var_140e0 to i64), !insn.addr !35
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_18c0:
  %x0.0.reg2mem = alloca i64, !insn.addr !36
  %0 = load i8, i8* bitcast (i64* @global_var_140e0 to i8*), align 8, !insn.addr !37
  %1 = zext i8 %0 to i64, !insn.addr !37
  %2 = icmp eq i8 %0, 0, !insn.addr !38
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !38
  br i1 %2, label %dec_label_pc_18d8, label %dec_label_pc_18fc, !insn.addr !38

dec_label_pc_18d8:                                ; preds = %dec_label_pc_18c0
  %3 = load i64, i64* @global_var_13fc0, align 8, !insn.addr !39
  %4 = icmp eq i64 %3, 0, !insn.addr !40
  br i1 %4, label %dec_label_pc_18f0, label %dec_label_pc_18e4, !insn.addr !40

dec_label_pc_18e4:                                ; preds = %dec_label_pc_18d8
  %5 = load i64, i64* @global_var_140b8, align 8, !insn.addr !41
  %6 = call i64 @__cxa_finalize.6(i64 %5), !insn.addr !42
  br label %dec_label_pc_18f0, !insn.addr !42

dec_label_pc_18f0:                                ; preds = %dec_label_pc_18e4, %dec_label_pc_18d8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !43
  store i8 1, i8* bitcast (i64* @global_var_140e0 to i8*), align 8, !insn.addr !44
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_18fc, !insn.addr !44

dec_label_pc_18fc:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_18f0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !45

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_18fc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1910:
  %0 = call i64 @register_tm_clones(), !insn.addr !46
  ret i64 %0, !insn.addr !46
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1914:
  %stack_var_-52 = alloca i64, align 8
  %0 = load fp128, fp128* bitcast ([5 x i8]* @global_var_267a to fp128*), align 16, !insn.addr !47
  %1 = fptrunc fp128 %0 to double, !insn.addr !48
  %2 = bitcast double %1 to i64, !insn.addr !48
  store i64 %2, i64* %stack_var_-52, align 8, !insn.addr !48
  %3 = bitcast i64* %stack_var_-52 to i8*, !insn.addr !49
  %4 = call i32 @strlen(i8* nonnull %3), !insn.addr !49
  %5 = add i32 %4, ptrtoint (i32* @global_var_125c to i32), !insn.addr !50
  %6 = zext i32 %5 to i64, !insn.addr !50
  ret i64 %6, !insn.addr !51
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1964:
  %0 = alloca i64
  %x9.0.reg2mem = alloca i64, !insn.addr !52
  %x8.0.reg2mem = alloca i64, !insn.addr !52
  %1 = load i64, i64* %0
  %2 = call i64 @_Znam(i64 20), !insn.addr !53
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !54
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_1980, !insn.addr !54

dec_label_pc_1980:                                ; preds = %dec_label_pc_1980, %dec_label_pc_1964
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %3 = trunc i64 %x8.0.reload to i32, !insn.addr !55
  %4 = add i64 %x9.0.reload, %2, !insn.addr !55
  %5 = inttoptr i64 %4 to i32*, !insn.addr !55
  store i32 %3, i32* %5, align 4, !insn.addr !55
  %6 = add nuw nsw i64 %x9.0.reload, 4, !insn.addr !56
  %7 = add nuw nsw i64 %x8.0.reload, 10, !insn.addr !57
  %8 = and i64 %7, 4294967295, !insn.addr !57
  %9 = icmp eq i64 %6, 20, !insn.addr !58
  store i64 %8, i64* %x8.0.reg2mem, !insn.addr !58
  store i64 %6, i64* %x9.0.reg2mem, !insn.addr !58
  br i1 %9, label %dec_label_pc_1994, label %dec_label_pc_1980, !insn.addr !58

dec_label_pc_1994:                                ; preds = %dec_label_pc_1980
  %10 = add i64 %2, 8, !insn.addr !59
  %11 = inttoptr i64 %10 to i32*, !insn.addr !59
  %12 = load i32, i32* %11, align 4, !insn.addr !59
  %13 = load i32, i32* @global_var_140e8, align 4, !insn.addr !60
  store i32 ptrtoint (i32* @global_var_140e9 to i32), i32* @global_var_140e8, align 4, !insn.addr !61
  %14 = inttoptr i64 %2 to i64*, !insn.addr !62
  %15 = and i64 %1, 4294967295
  %16 = inttoptr i64 %15 to i64*, !insn.addr !62
  call void @_ZdaPv(i64* %14, i64* %16), !insn.addr !62
  %17 = load i32, i32* @global_var_140e8, align 4, !insn.addr !63
  %18 = add i32 %17, -1, !insn.addr !64
  %19 = mul i32 %18, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !65
  %20 = add i32 %12, 1, !insn.addr !66
  %21 = add i32 %20, %13, !insn.addr !67
  %22 = add i32 %21, %19, !insn.addr !65
  %23 = zext i32 %22 to i64, !insn.addr !65
  store i32 %18, i32* @global_var_140e8, align 4, !insn.addr !68
  ret i64 %23, !insn.addr !69

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_19d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !70
}

define i64 @function_19e4(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !71
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_19ec:
  %0 = call i64 @_ZN4Base12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !72
  ret i64 %0, !insn.addr !72
}

define i64 @function_1a2c(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a2c:
  %stack_var_0 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_0 to i64, !insn.addr !73
  ret i64 %0, !insn.addr !74
}

define i64 @function_1a44(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a44:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %1, 21, !insn.addr !75
  %4 = add i64 %3, %2, !insn.addr !76
  %5 = and i64 %4, 4294967295, !insn.addr !76
  ret i64 %5, !insn.addr !77

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1a5c:
  %0 = call i64 @_ZN12MultiDerived5funcAEv(), !insn.addr !78
  ret i64 %0, !insn.addr !78

; uselistorder directives
  uselistorder i64 ()* @_ZN12MultiDerived5funcAEv, { 1, 0 }
}

define i64 @function_1aa0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !79
}

define i64 @function_1ab4(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1ab4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %1, 1, !insn.addr !80
  %4 = add i64 %3, %2, !insn.addr !81
  %5 = and i64 %4, 4294967295, !insn.addr !81
  ret i64 %5, !insn.addr !82

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1acc:
  %0 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(), !insn.addr !83
  ret i64 %0, !insn.addr !83
}

define i64 @function_1b14(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %arg1, -24, !insn.addr !84
  %4 = inttoptr i64 %3 to i64*, !insn.addr !84
  %5 = load i64, i64* %4, align 8, !insn.addr !84
  %6 = add i64 %1, 8, !insn.addr !85
  %7 = add i64 %6, %5, !insn.addr !86
  %8 = inttoptr i64 %7 to i32*, !insn.addr !86
  store i32 100, i32* %8, align 4, !insn.addr !86
  ret i64 %2, !insn.addr !87

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_1b3c(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1b3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !88
  %4 = and i64 %3, 4294967295, !insn.addr !88
  ret i64 %4, !insn.addr !89

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1b54:
  ret i64 22, !insn.addr !90
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1b5c:
  ret i64 39, !insn.addr !91
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1b64:
  ret i64 16, !insn.addr !92
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1b6c:
  ret i64 85, !insn.addr !93
}

define i64 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1b74:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !94
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !95
  %4 = inttoptr i64 %3 to i32*, !insn.addr !96
  store i32 42, i32* %4, align 4, !insn.addr !96
  %5 = load i32, i32* @global_var_13fb0, align 4, !insn.addr !97
  %6 = sext i32 %5 to i64, !insn.addr !97
  %7 = call i64 @__cxa_throw(i64 %3, i64 %6, i64 0), !insn.addr !98
  store i64 100, i64* %storemerge.reg2mem
  switch i32 %5, label %dec_label_pc_1c5c [
    i32 3, label %dec_label_pc_1c34
    i32 2, label %dec_label_pc_1c34.fold.split
  ]

dec_label_pc_1c34.fold.split:                     ; preds = %dec_label_pc_1b74
  store i64 200, i64* %storemerge.reg2mem
  br label %dec_label_pc_1c34

dec_label_pc_1c34:                                ; preds = %dec_label_pc_1b74, %dec_label_pc_1c34.fold.split
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %8 = mul i64 %2, 2, !insn.addr !99
  %9 = add i64 %8, %1, !insn.addr !99
  %10 = call i64 @__cxa_begin_catch(i64 %7), !insn.addr !100
  %11 = add i64 %9, %storemerge.reload, !insn.addr !101
  %12 = call i64 @__cxa_end_catch(i64 %10), !insn.addr !102
  %13 = and i64 %11, 4294967295, !insn.addr !103
  ret i64 %13, !insn.addr !104

dec_label_pc_1c5c:                                ; preds = %dec_label_pc_1b74
  %14 = inttoptr i64 %7 to %_Unwind_Exception*, !insn.addr !105
  call void @_Unwind_Resume(%_Unwind_Exception* %14), !insn.addr !105
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !105

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_1c34, { 1, 0 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1c64:
  ret i64 ptrtoint (i64* @global_var_2bf to i64), !insn.addr !106
}

define i64 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_1c6c:
  %.reg2mem = alloca i64, !insn.addr !107
  %0 = call i64 @_Znwm(i64 8), !insn.addr !108
  %1 = inttoptr i64 %0 to i64*, !insn.addr !109
  store i64 ptrtoint (%vtable_13d58_type* @global_var_13d58 to i64), i64* %1, align 8, !insn.addr !109
  %2 = call i64 @_Znwm(i64 8), !insn.addr !110
  %3 = load i64, i64* %1, align 8, !insn.addr !111
  %4 = inttoptr i64 %2 to i64*, !insn.addr !112
  store i64 ptrtoint (%vtable_13d80_type* @global_var_13d80 to i64), i64* %4, align 8, !insn.addr !113
  %5 = add i64 %3, -8, !insn.addr !114
  %6 = inttoptr i64 %5 to i64*, !insn.addr !114
  %7 = load i64, i64* %6, align 8, !insn.addr !114
  %8 = add i64 %7, 8, !insn.addr !115
  %9 = inttoptr i64 %8 to i64*, !insn.addr !115
  %10 = load i64, i64* %9, align 8, !insn.addr !115
  %11 = icmp eq i64 %10, ptrtoint ([15 x i8]* @global_var_246d to i64), !insn.addr !116
  store i64 ptrtoint (%vtable_13d80_type* @global_var_13d80 to i64), i64* %.reg2mem, !insn.addr !117
  br i1 %11, label %dec_label_pc_1d08, label %dec_label_pc_1cd0, !insn.addr !117

dec_label_pc_1cd0:                                ; preds = %dec_label_pc_1c6c
  %12 = inttoptr i64 %10 to i8*, !insn.addr !118
  %13 = load i8, i8* %12, align 1, !insn.addr !118
  %14 = icmp eq i8 %13, 42, !insn.addr !119
  store i64 ptrtoint (%vtable_13d80_type* @global_var_13d80 to i64), i64* %.reg2mem, !insn.addr !119
  br i1 %14, label %dec_label_pc_1d08, label %dec_label_pc_1cec, !insn.addr !119

dec_label_pc_1cec:                                ; preds = %dec_label_pc_1cd0
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_246d, i64 0, i64 0)), !insn.addr !120
  %.pre = load i64, i64* %4, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !121
  br label %dec_label_pc_1d08, !insn.addr !121

dec_label_pc_1d08:                                ; preds = %dec_label_pc_1c6c, %dec_label_pc_1cd0, %dec_label_pc_1cec
  %.reload = load i64, i64* %.reg2mem, !insn.addr !122
  %16 = add i64 %.reload, -8, !insn.addr !123
  %17 = inttoptr i64 %16 to i64*, !insn.addr !123
  %18 = load i64, i64* %17, align 8, !insn.addr !123
  %19 = add i64 %18, 8, !insn.addr !124
  %20 = inttoptr i64 %19 to i64*, !insn.addr !124
  %21 = load i64, i64* %20, align 8, !insn.addr !124
  %22 = icmp eq i64 %21, ptrtoint ([15 x i8]* @global_var_2486 to i64), !insn.addr !125
  br i1 %22, label %dec_label_pc_1d54, label %dec_label_pc_1d24, !insn.addr !126

dec_label_pc_1d24:                                ; preds = %dec_label_pc_1d08
  %23 = inttoptr i64 %21 to i8*, !insn.addr !127
  %24 = load i8, i8* %23, align 1, !insn.addr !127
  %25 = icmp eq i8 %24, 42, !insn.addr !128
  br i1 %25, label %dec_label_pc_1d54, label %dec_label_pc_1d40, !insn.addr !128

dec_label_pc_1d40:                                ; preds = %dec_label_pc_1d24
  %26 = call i32 @strcmp(i8* %23, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2486, i64 0, i64 0)), !insn.addr !129
  br label %dec_label_pc_1d54, !insn.addr !130

dec_label_pc_1d54:                                ; preds = %dec_label_pc_1d08, %dec_label_pc_1d24, %dec_label_pc_1d40
  %27 = call i64 @__dynamic_cast(i64 %0, i64 ptrtoint (i64* @global_var_13958 to i64), i64* nonnull @global_var_13968, i64 0), !insn.addr !131
  %28 = call i64 @__dynamic_cast(i64 %2, i64 ptrtoint (i64* @global_var_13958 to i64), i64* nonnull @global_var_13980, i64 0), !insn.addr !132
  %29 = inttoptr i64 %10 to i8*, !insn.addr !133
  %30 = load i8, i8* %29, align 1, !insn.addr !133
  %31 = icmp eq i8 %30, 42, !insn.addr !134
  %32 = zext i1 %31 to i64, !insn.addr !133
  %33 = add i64 %10, %32, !insn.addr !135
  %34 = inttoptr i64 %33 to i8*, !insn.addr !136
  %35 = call i32 @strlen(i8* %34), !insn.addr !136
  ret i64 %0, !insn.addr !137

; uselistorder directives
  uselistorder i64 (i64, i64, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i64 (i64)* @_Znwm, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d54, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1d08, { 2, 1, 0 }
}

define i64 @function_1ddc() local_unnamed_addr {
dec_label_pc_1ddc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !138
}

define i64 @function_1dec(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1dec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, %1, !insn.addr !139
  %4 = and i64 %3, 4294967295, !insn.addr !139
  ret i64 %4, !insn.addr !140

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1e04:
  %x9.0.reg2mem = alloca i64, !insn.addr !141
  %x8.0.reg2mem = alloca i64, !insn.addr !141
  %stack_var_-92 = alloca i64, align 8
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_25f9 to i8*)), !insn.addr !142
  %1 = load fp128, fp128* bitcast ([5 x i8]* @global_var_267a to fp128*), align 16, !insn.addr !143
  %2 = fptrunc fp128 %1 to double, !insn.addr !144
  %3 = bitcast double %2 to i64, !insn.addr !144
  store i64 %3, i64* %stack_var_-92, align 8, !insn.addr !144
  %4 = bitcast i64* %stack_var_-92 to i8*, !insn.addr !145
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !145
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2495 to i8*)), !insn.addr !146
  %7 = call i64 @_Znam(i64 20), !insn.addr !147
  store i64 0, i64* %x8.0.reg2mem, !insn.addr !148
  store i64 0, i64* %x9.0.reg2mem, !insn.addr !148
  br label %dec_label_pc_1e78, !insn.addr !148

dec_label_pc_1e78:                                ; preds = %dec_label_pc_1e78, %dec_label_pc_1e04
  %x9.0.reload = load i64, i64* %x9.0.reg2mem
  %x8.0.reload = load i64, i64* %x8.0.reg2mem
  %8 = trunc i64 %x8.0.reload to i32, !insn.addr !149
  %9 = add i64 %x9.0.reload, %7, !insn.addr !149
  %10 = inttoptr i64 %9 to i32*, !insn.addr !149
  store i32 %8, i32* %10, align 4, !insn.addr !149
  %11 = add nuw nsw i64 %x9.0.reload, 4, !insn.addr !150
  %12 = add nuw nsw i64 %x8.0.reload, 10, !insn.addr !151
  %13 = and i64 %12, 4294967295, !insn.addr !151
  %14 = icmp eq i64 %11, 20, !insn.addr !152
  store i64 %13, i64* %x8.0.reg2mem, !insn.addr !152
  store i64 %11, i64* %x9.0.reg2mem, !insn.addr !152
  br i1 %14, label %dec_label_pc_1e8c, label %dec_label_pc_1e78, !insn.addr !152

dec_label_pc_1e8c:                                ; preds = %dec_label_pc_1e78
  %15 = add i32 %5, ptrtoint (i32* @global_var_125c to i32), !insn.addr !153
  %16 = zext i32 %15 to i64, !insn.addr !153
  store i32 ptrtoint (i32* @global_var_140e9 to i32), i32* @global_var_140e8, align 4, !insn.addr !154
  %17 = inttoptr i64 %7 to i64*, !insn.addr !155
  %18 = inttoptr i64 %16 to i64*, !insn.addr !155
  call void @_ZdaPv(i64* %17, i64* %18), !insn.addr !155
  %19 = load i32, i32* @global_var_140e8, align 4, !insn.addr !156
  %20 = add i32 %19, -1, !insn.addr !157
  store i32 %20, i32* @global_var_140e8, align 4, !insn.addr !158
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_24b3 to i8*)), !insn.addr !159
  %22 = call i64 @_ZN4Base12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !160
  ret i64 %22, !insn.addr !160

; uselistorder directives
  uselistorder i64 %x8.0.reload, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %x8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x9.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i32)* @_ZN4Base12virtual_funcEi, { 2, 1, 0 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i32* @global_var_140e8, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 (i64)* @_Znam, { 1, 0, 2 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i64 @function_1ef4(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ef4:
  %stack_var_16 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_16 to i64, !insn.addr !161
  ret i64 %0, !insn.addr !162
}

define i64 @function_1f10() local_unnamed_addr {
dec_label_pc_1f10:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_24cf to i8*)), !insn.addr !163
  %1 = call i64 @_ZThn16_N12MultiDerived5funcBEv(), !insn.addr !164
  ret i64 %1, !insn.addr !164
}

define i64 @function_1f50() local_unnamed_addr {
dec_label_pc_1f50:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_24eb to i8*)), !insn.addr !165
  %1 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(), !insn.addr !166
  ret i64 %1, !insn.addr !166

; uselistorder directives
  uselistorder i64 ()* @_ZTv0_n24_N14DiamondDerived4funcEv, { 1, 0 }
}

define i64 @function_1f90(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = add i64 %arg1, -24, !insn.addr !167
  %5 = inttoptr i64 %4 to i64*, !insn.addr !167
  %6 = load i64, i64* %5, align 8, !insn.addr !167
  %7 = trunc i64 %1 to i32, !insn.addr !168
  %8 = add i64 %2, 8, !insn.addr !169
  %9 = add i64 %8, %6, !insn.addr !168
  %10 = inttoptr i64 %9 to i32*, !insn.addr !168
  store i32 %7, i32* %10, align 4, !insn.addr !168
  ret i64 %3, !insn.addr !170

; uselistorder directives
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @function_1fb4(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1fb4:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2507 to i8*)), !insn.addr !171
  %1 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2524 to i8*)), !insn.addr !172
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2540 to i8*)), !insn.addr !173
  %3 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_255c to i8*)), !insn.addr !174
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2578 to i8*)), !insn.addr !175
  %5 = call i64 @_Z18test_cpp_exceptionv(), !insn.addr !176
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_2594 to i8*)), !insn.addr !177
  %7 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_25b1 to i8*)), !insn.addr !178
  %8 = call i64 @_Z13test_cpp_rttiv(), !insn.addr !179
  %9 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_25ce to i8*)), !insn.addr !180
  %10 = sext i32 %9 to i64, !insn.addr !180
  ret i64 %10, !insn.addr !181

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2050:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !182
  ret i64 0, !insn.addr !183
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_2068:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !184
  %3 = and i64 %2, 4294967295, !insn.addr !184
  ret i64 %3, !insn.addr !185
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_2070:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !186
  %4 = inttoptr i64 %3 to i32*, !insn.addr !186
  %5 = load i32, i32* %4, align 4, !insn.addr !186
  %6 = trunc i64 %1 to i32, !insn.addr !187
  %7 = mul i32 %5, %6, !insn.addr !187
  %8 = zext i32 %7 to i64, !insn.addr !187
  ret i64 %8, !insn.addr !188

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN4BaseD2Ev() {
dec_label_pc_207c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !189
}

define i64 @_ZN12MultiDerivedD2Ev() {
dec_label_pc_2080:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !190
}

define i64 @_ZN14DiamondDerivedD1Ev() {
dec_label_pc_2084:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !191
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2088:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !192
  %4 = trunc i64 %1 to i32, !insn.addr !192
  %5 = sub i32 %3, %4, !insn.addr !192
  %6 = xor i64 %2, %1
  %7 = trunc i64 %6 to i32, !insn.addr !192
  %8 = xor i32 %5, %3, !insn.addr !192
  %9 = and i32 %8, %7, !insn.addr !192
  %10 = icmp slt i32 %9, 0, !insn.addr !192
  %11 = icmp slt i32 %5, 0, !insn.addr !192
  %12 = icmp eq i32 %5, 0, !insn.addr !192
  %13 = icmp ne i1 %11, %10, !insn.addr !193
  %14 = or i1 %12, %13, !insn.addr !193
  %.v = select i1 %14, i64 %1, i64 %2
  %15 = trunc i64 %.v to i32, !insn.addr !193
  ret i32 %15, !insn.addr !194

; uselistorder directives
  uselistorder i32 %5, { 1, 2, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_2094:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = trunc i128 %1 to i64, !insn.addr !195
  %3 = bitcast i64 %2 to double, !insn.addr !195
  ret double %3, !insn.addr !195
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = inttoptr i64 %2 to i32*, !insn.addr !196
  store i32 %3, i32* %5, align 4, !insn.addr !196
  %6 = inttoptr i64 %1 to i32*, !insn.addr !197
  store i32 %4, i32* %6, align 4, !insn.addr !197
  ret void, !insn.addr !198

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev() local_unnamed_addr {
dec_label_pc_20b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !199
  %3 = inttoptr i64 %2 to i32*, !insn.addr !199
  store i32 0, i32* %3, align 4, !insn.addr !199
  ret i64 %1, !insn.addr !200

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_20bc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !201
  %4 = inttoptr i64 %3 to i32*, !insn.addr !201
  %5 = load i32, i32* %4, align 4, !insn.addr !201
  %6 = icmp sgt i32 %5, 9, !insn.addr !202
  br i1 %6, label %dec_label_pc_20d4, label %dec_label_pc_20c8, !insn.addr !202

dec_label_pc_20c8:                                ; preds = %dec_label_pc_20bc
  %7 = sext i32 %5 to i64, !insn.addr !201
  %8 = add i32 %5, 1, !insn.addr !203
  store i32 %8, i32* %4, align 4, !insn.addr !204
  %9 = trunc i64 %1 to i32, !insn.addr !205
  %10 = mul i64 %7, 4, !insn.addr !205
  %11 = add i64 %10, %2, !insn.addr !205
  %12 = inttoptr i64 %11 to i32*, !insn.addr !205
  store i32 %9, i32* %12, align 4, !insn.addr !205
  br label %dec_label_pc_20d4, !insn.addr !205

dec_label_pc_20d4:                                ; preds = %dec_label_pc_20c8, %dec_label_pc_20bc
  ret i64 %2, !insn.addr !206

; uselistorder directives
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_20d8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !207
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = icmp slt i32 %3, 0, !insn.addr !208
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !208
  br i1 %4, label %dec_label_pc_20f4, label %dec_label_pc_20e4, !insn.addr !208

dec_label_pc_20e4:                                ; preds = %dec_label_pc_20d8
  %5 = add i64 %2, 40, !insn.addr !209
  %6 = inttoptr i64 %5 to i32*, !insn.addr !209
  %7 = load i32, i32* %6, align 4, !insn.addr !209
  %8 = zext i32 %7 to i64, !insn.addr !209
  %9 = icmp slt i64 %1, %8, !insn.addr !210
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !210
  br i1 %9, label %dec_label_pc_20f0, label %dec_label_pc_20f4, !insn.addr !210

dec_label_pc_20f0:                                ; preds = %dec_label_pc_20e4
  %10 = mul i64 %1, 4, !insn.addr !211
  %11 = and i64 %10, 4294967292, !insn.addr !211
  %12 = add i64 %11, %2, !insn.addr !211
  %13 = inttoptr i64 %12 to i32*, !insn.addr !211
  %14 = load i32, i32* %13, align 4, !insn.addr !211
  %15 = zext i32 %14 to i64, !insn.addr !211
  store i64 %15, i64* %x0.0.reg2mem, !insn.addr !211
  br label %dec_label_pc_20f4, !insn.addr !211

dec_label_pc_20f4:                                ; preds = %dec_label_pc_20e4, %dec_label_pc_20f0, %dec_label_pc_20d8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !212

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 4, { 0, 1, 3, 2, 4 }
  uselistorder i64 0, { 0, 1, 6, 2, 3, 38, 39, 36, 37, 34, 35, 40, 4, 5, 50, 7, 51, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 41, 42, 43, 44, 45, 46, 47, 48, 49 }
  uselistorder label %dec_label_pc_20f4, { 1, 0, 2 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_20f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !213
  %3 = inttoptr i64 %2 to i32*, !insn.addr !213
  %4 = load i32, i32* %3, align 4, !insn.addr !213
  %5 = zext i32 %4 to i64, !insn.addr !213
  ret i64 %5, !insn.addr !214
}

define i64 @_ZN9ContainerIdEC1Ev() local_unnamed_addr {
dec_label_pc_2100:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !215
  %3 = inttoptr i64 %2 to i32*, !insn.addr !215
  store i32 0, i32* %3, align 4, !insn.addr !215
  ret i64 %1, !insn.addr !216

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 0, { 6, 0, 7, 8, 9, 10, 1, 2, 3, 4, 5 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_2108:
  %0 = alloca i64
  %1 = alloca double
  %2 = load i64, i64* %0
  %3 = load double, double* %1
  %4 = add i64 %2, 80, !insn.addr !217
  %5 = inttoptr i64 %4 to i32*, !insn.addr !217
  %6 = load i32, i32* %5, align 4, !insn.addr !217
  %7 = icmp sgt i32 %6, 9, !insn.addr !218
  br i1 %7, label %dec_label_pc_2120, label %dec_label_pc_2114, !insn.addr !218

dec_label_pc_2114:                                ; preds = %dec_label_pc_2108
  %8 = bitcast double %3 to i64
  %9 = sext i32 %6 to i64, !insn.addr !217
  %10 = add i32 %6, 1, !insn.addr !219
  %11 = mul i64 %9, 8, !insn.addr !220
  %12 = add i64 %11, %2, !insn.addr !220
  %13 = inttoptr i64 %12 to i64*
  store i64 %8, i64* %13, align 8
  store i32 %10, i32* %5, align 4, !insn.addr !221
  br label %dec_label_pc_2120, !insn.addr !221

dec_label_pc_2120:                                ; preds = %dec_label_pc_2114, %dec_label_pc_2108
  ret i64 %2, !insn.addr !222

; uselistorder directives
  uselistorder i32 %6, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 2, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_2124:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !223
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_2140:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !224
  %3 = inttoptr i64 %2 to i32*, !insn.addr !224
  %4 = load i32, i32* %3, align 4, !insn.addr !224
  %5 = zext i32 %4 to i64, !insn.addr !224
  ret i64 %5, !insn.addr !225
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_2148:
  ret i64 ptrtoint ([5 x i8]* @global_var_25ec to i64), !insn.addr !226
}

define i64 @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_2154:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !227
  call void @_ZdlPv(i64* %2), !insn.addr !227
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !228
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_2168:
  ret i64 ptrtoint ([8 x i8]* @global_var_25f1 to i64), !insn.addr !229
}

define i64 @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_2174:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !230
  call void @_ZdlPv(i64* %2), !insn.addr !230
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !231
}

define i64 @_ZN12MultiDerived5funcAEv() {
dec_label_pc_2188:
  ret i64 30, !insn.addr !232
}

define i64 @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_2190:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !233
  call void @_ZdlPv(i64* %2), !insn.addr !233
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !234
}

define i64 @_ZN12MultiDerived5funcBEv() {
dec_label_pc_21a4:
  ret i64 40, !insn.addr !235
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_21ac:
  ret i64 40, !insn.addr !236
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_21b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !237
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_21b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !238
  %3 = inttoptr i64 %2 to i64*, !insn.addr !239
  call void @_ZdlPv(i64* %3), !insn.addr !239
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !240
}

define i64 @_ZN5BaseA5funcAEv() {
dec_label_pc_21d0:
  ret i64 10, !insn.addr !241
}

define i64 @_ZN5BaseAD2Ev() {
dec_label_pc_21d8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !242
}

define i64 @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_21dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !243
  call void @_ZdlPv(i64* %2), !insn.addr !243
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !244
}

define i64 @_ZN5BaseB5funcBEv() {
dec_label_pc_21f0:
  ret i64 20, !insn.addr !245
}

define i64 @_ZN5BaseBD2Ev() {
dec_label_pc_21f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !246
}

define i64 @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_21fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !247
  call void @_ZdlPv(i64* %2), !insn.addr !247
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !248
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_2210:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !249
  %3 = inttoptr i64 %2 to i64*, !insn.addr !249
  %4 = load i64, i64* %3, align 8, !insn.addr !249
  %5 = add i64 %1, 8, !insn.addr !250
  %6 = add i64 %5, %4, !insn.addr !251
  %7 = inttoptr i64 %6 to i32*, !insn.addr !251
  %8 = load i32, i32* %7, align 4, !insn.addr !251
  %9 = add i32 %8, 150, !insn.addr !252
  %10 = zext i32 %9 to i64, !insn.addr !252
  ret i64 %10, !insn.addr !253

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleAD1Ev() {
dec_label_pc_2228:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !254
}

define i64 @_ZN7MiddleAD0Ev(i64* %result) {
dec_label_pc_222c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !255
  call void @_ZdlPv(i64* %2), !insn.addr !255
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !256
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_2240:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !257
  %3 = inttoptr i64 %2 to i64*, !insn.addr !257
  %4 = load i64, i64* %3, align 8, !insn.addr !257
  %5 = add i64 %4, %1, !insn.addr !258
  %6 = inttoptr i64 %5 to i64*, !insn.addr !259
  %7 = load i64, i64* %6, align 8, !insn.addr !259
  %8 = add i64 %7, -24, !insn.addr !260
  %9 = inttoptr i64 %8 to i64*, !insn.addr !260
  %10 = load i64, i64* %9, align 8, !insn.addr !260
  %11 = add i64 %5, 8, !insn.addr !261
  %12 = add i64 %11, %10, !insn.addr !262
  %13 = inttoptr i64 %12 to i32*, !insn.addr !262
  %14 = load i32, i32* %13, align 4, !insn.addr !262
  %15 = add i32 %14, 150, !insn.addr !263
  %16 = zext i32 %15 to i64, !insn.addr !263
  ret i64 %16, !insn.addr !264

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n32_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_2264:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !265
}

define i64 @_ZTv0_n32_N7MiddleAD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2268:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !266
  %3 = inttoptr i64 %2 to i64*, !insn.addr !266
  %4 = load i64, i64* %3, align 8, !insn.addr !266
  %5 = add i64 %4, %1, !insn.addr !267
  %6 = inttoptr i64 %5 to i64*, !insn.addr !268
  call void @_ZdlPv(i64* %6), !insn.addr !268
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !269

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_2288:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !270
  %3 = inttoptr i64 %2 to i64*, !insn.addr !270
  %4 = load i64, i64* %3, align 8, !insn.addr !270
  %5 = add i64 %1, 8, !insn.addr !271
  %6 = add i64 %5, %4, !insn.addr !272
  %7 = inttoptr i64 %6 to i32*, !insn.addr !272
  %8 = load i32, i32* %7, align 4, !insn.addr !272
  %9 = add i32 %8, 200, !insn.addr !273
  %10 = zext i32 %9 to i64, !insn.addr !273
  ret i64 %10, !insn.addr !274

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleBD1Ev() {
dec_label_pc_22a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !275
}

define i64 @_ZN7MiddleBD0Ev(i64* %result) {
dec_label_pc_22a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !276
  call void @_ZdlPv(i64* %2), !insn.addr !276
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !277
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_22b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !278
  %3 = inttoptr i64 %2 to i64*, !insn.addr !278
  %4 = load i64, i64* %3, align 8, !insn.addr !278
  %5 = add i64 %4, %1, !insn.addr !279
  %6 = inttoptr i64 %5 to i64*, !insn.addr !280
  %7 = load i64, i64* %6, align 8, !insn.addr !280
  %8 = add i64 %7, -24, !insn.addr !281
  %9 = inttoptr i64 %8 to i64*, !insn.addr !281
  %10 = load i64, i64* %9, align 8, !insn.addr !281
  %11 = add i64 %5, 8, !insn.addr !282
  %12 = add i64 %11, %10, !insn.addr !283
  %13 = inttoptr i64 %12 to i32*, !insn.addr !283
  %14 = load i32, i32* %13, align 4, !insn.addr !283
  %15 = add i32 %14, 200, !insn.addr !284
  %16 = zext i32 %15 to i64, !insn.addr !284
  ret i64 %16, !insn.addr !285

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n32_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_22dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !286
}

define i64 @_ZTv0_n32_N7MiddleBD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_22e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !287
  %3 = inttoptr i64 %2 to i64*, !insn.addr !287
  %4 = load i64, i64* %3, align 8, !insn.addr !287
  %5 = add i64 %4, %1, !insn.addr !288
  %6 = inttoptr i64 %5 to i64*, !insn.addr !289
  call void @_ZdlPv(i64* %6), !insn.addr !289
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !290

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_2300:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !291
  %3 = inttoptr i64 %2 to i64*, !insn.addr !291
  %4 = load i64, i64* %3, align 8, !insn.addr !291
  %5 = add i64 %1, 8, !insn.addr !292
  %6 = add i64 %5, %4, !insn.addr !293
  %7 = inttoptr i64 %6 to i32*, !insn.addr !293
  %8 = load i32, i32* %7, align 4, !insn.addr !293
  %9 = add i32 %8, 250, !insn.addr !294
  %10 = zext i32 %9 to i64, !insn.addr !294
  ret i64 %10, !insn.addr !295

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_2318:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !296
  call void @_ZdlPv(i64* %2), !insn.addr !296
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !297
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_232c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !298
  %3 = inttoptr i64 %2 to i64*, !insn.addr !298
  %4 = load i64, i64* %3, align 8, !insn.addr !298
  %5 = add i64 %4, -24, !insn.addr !299
  %6 = inttoptr i64 %5 to i64*, !insn.addr !299
  %7 = load i64, i64* %6, align 8, !insn.addr !299
  %8 = add i64 %1, -8, !insn.addr !300
  %9 = add i64 %8, %7, !insn.addr !301
  %10 = inttoptr i64 %9 to i32*, !insn.addr !301
  %11 = load i32, i32* %10, align 4, !insn.addr !301
  %12 = add i32 %11, 250, !insn.addr !302
  %13 = zext i32 %12 to i64, !insn.addr !302
  ret i64 %13, !insn.addr !303

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2344:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !304
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2348:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !305
  %3 = inttoptr i64 %2 to i64*, !insn.addr !306
  call void @_ZdlPv(i64* %3), !insn.addr !306
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !307

; uselistorder directives
  uselistorder i64 -16, { 0, 2, 1 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_2360:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !308
  %3 = inttoptr i64 %2 to i64*, !insn.addr !308
  %4 = load i64, i64* %3, align 8, !insn.addr !308
  %5 = add i64 %4, %1, !insn.addr !309
  %6 = inttoptr i64 %5 to i64*, !insn.addr !310
  %7 = load i64, i64* %6, align 8, !insn.addr !310
  %8 = add i64 %7, -24, !insn.addr !311
  %9 = inttoptr i64 %8 to i64*, !insn.addr !311
  %10 = load i64, i64* %9, align 8, !insn.addr !311
  %11 = add i64 %5, 8, !insn.addr !312
  %12 = add i64 %11, %10, !insn.addr !313
  %13 = inttoptr i64 %12 to i32*, !insn.addr !313
  %14 = load i32, i32* %13, align 4, !insn.addr !313
  %15 = add i32 %14, 250, !insn.addr !314
  %16 = zext i32 %15 to i64, !insn.addr !314
  ret i64 %16, !insn.addr !315

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 250, { 2, 0, 1 }
  uselistorder i64 8, { 1, 2, 3, 4, 5, 6, 0, 11, 7, 12, 13, 9, 10, 8, 14 }
  uselistorder i64 -24, { 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1 }
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2384:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !316
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_2388:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !317
  %3 = inttoptr i64 %2 to i64*, !insn.addr !317
  %4 = load i64, i64* %3, align 8, !insn.addr !317
  %5 = add i64 %4, %1, !insn.addr !318
  %6 = inttoptr i64 %5 to i64*, !insn.addr !319
  call void @_ZdlPv(i64* %6), !insn.addr !319
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !320

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN11VirtualBase4funcEv() {
dec_label_pc_23a8:
  ret i64 100, !insn.addr !321

; uselistorder directives
  uselistorder i64 100, { 1, 0 }
}

define i64 @_ZN11VirtualBaseD2Ev() {
dec_label_pc_23b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !322
}

define i64 @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_23b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !323
  call void @_ZdlPv(i64* %2), !insn.addr !323
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !324
}

define i64 @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_23c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !325
  call void @_ZdlPv(i64* %2), !insn.addr !325
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !326
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_23dc:
  ret i64 1, !insn.addr !327

; uselistorder directives
  uselistorder i64 1, { 1, 3, 2, 0 }
}

define i64 @_ZN8RTTIBaseD2Ev() {
dec_label_pc_23e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !328
}

define i64 @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_23e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !329
  call void @_ZdlPv(i64* %2), !insn.addr !329
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !330

; uselistorder directives
  uselistorder void (i64*)* @_ZdlPv, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_23fc:
  ret i64 2, !insn.addr !331

; uselistorder directives
  uselistorder i64 2, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_2404:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !332

; uselistorder directives
  uselistorder i32 1, { 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 78, 64, 26, 25, 24, 65, 23, 79, 22, 21, 20, 0, 19, 18, 17, 16, 15, 14, 13, 73, 74, 67, 66, 12, 11, 68, 69, 10, 9, 8, 7, 6, 5, 75, 4, 3, 80, 71, 70, 2, 76, 72, 77, 1 }
}

declare i64 @_Znam(i64) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i64 @__cxa_finalize.6(i64) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @_ZdlPv(i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64, i64*, i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow(i64) local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i64 @__cxa_end_catch(i64) local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i64 @__gmon_start__.19(i64) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

!0 = !{i64 5668}
!1 = !{i64 5676}
!2 = !{i64 5724}
!3 = !{i64 5740}
!4 = !{i64 5756}
!5 = !{i64 5772}
!6 = !{i64 5788}
!7 = !{i64 5804}
!8 = !{i64 5820}
!9 = !{i64 5836}
!10 = !{i64 5852}
!11 = !{i64 5868}
!12 = !{i64 5884}
!13 = !{i64 5900}
!14 = !{i64 5916}
!15 = !{i64 5932}
!16 = !{i64 5948}
!17 = !{i64 5964}
!18 = !{i64 5980}
!19 = !{i64 6012}
!20 = !{i64 6028}
!21 = !{i64 6044}
!22 = !{i64 6060}
!23 = !{i64 6104}
!24 = !{i64 6124}
!25 = !{i64 6128}
!26 = !{i64 6140}
!27 = !{i64 6176}
!28 = !{i64 6188}
!29 = !{i64 6192}
!30 = !{i64 6200}
!31 = !{i64 6204}
!32 = !{i64 6208}
!33 = !{i64 6212}
!34 = !{i64 6268}
!35 = !{i64 6328}
!36 = !{i64 6336}
!37 = !{i64 6352}
!38 = !{i64 6356}
!39 = !{i64 6364}
!40 = !{i64 6368}
!41 = !{i64 6376}
!42 = !{i64 6380}
!43 = !{i64 6384}
!44 = !{i64 6392}
!45 = !{i64 6404}
!46 = !{i64 6416}
!47 = !{i64 6452}
!48 = !{i64 6468}
!49 = !{i64 6476}
!50 = !{i64 6488}
!51 = !{i64 6496}
!52 = !{i64 6500}
!53 = !{i64 6516}
!54 = !{i64 6524}
!55 = !{i64 6528}
!56 = !{i64 6532}
!57 = !{i64 6536}
!58 = !{i64 6544}
!59 = !{i64 6552}
!60 = !{i64 6556}
!61 = !{i64 6568}
!62 = !{i64 6572}
!63 = !{i64 6576}
!64 = !{i64 6584}
!65 = !{i64 6588}
!66 = !{i64 6560}
!67 = !{i64 6564}
!68 = !{i64 6592}
!69 = !{i64 6604}
!70 = !{i64 6624}
!71 = !{i64 6632}
!72 = !{i64 6696}
!73 = !{i64 6708}
!74 = !{i64 6720}
!75 = !{i64 6728}
!76 = !{i64 6736}
!77 = !{i64 6744}
!78 = !{i64 6812}
!79 = !{i64 6832}
!80 = !{i64 6836}
!81 = !{i64 6844}
!82 = !{i64 6856}
!83 = !{i64 6928}
!84 = !{i64 6952}
!85 = !{i64 6956}
!86 = !{i64 6960}
!87 = !{i64 6968}
!88 = !{i64 6972}
!89 = !{i64 6992}
!90 = !{i64 7000}
!91 = !{i64 7008}
!92 = !{i64 7016}
!93 = !{i64 7024}
!94 = !{i64 7028}
!95 = !{i64 7048}
!96 = !{i64 7056}
!97 = !{i64 7068}
!98 = !{i64 7072}
!99 = !{i64 7224}
!100 = !{i64 7228}
!101 = !{i64 7232}
!102 = !{i64 7236}
!103 = !{i64 7240}
!104 = !{i64 7256}
!105 = !{i64 7264}
!106 = !{i64 7272}
!107 = !{i64 7276}
!108 = !{i64 7300}
!109 = !{i64 7316}
!110 = !{i64 7324}
!111 = !{i64 7332}
!112 = !{i64 7340}
!113 = !{i64 7348}
!114 = !{i64 7352}
!115 = !{i64 7356}
!116 = !{i64 7368}
!117 = !{i64 7372}
!118 = !{i64 7376}
!119 = !{i64 7384}
!120 = !{i64 7416}
!121 = !{i64 7428}
!122 = !{i64 7432}
!123 = !{i64 7436}
!124 = !{i64 7440}
!125 = !{i64 7452}
!126 = !{i64 7456}
!127 = !{i64 7460}
!128 = !{i64 7468}
!129 = !{i64 7496}
!130 = !{i64 7504}
!131 = !{i64 7552}
!132 = !{i64 7588}
!133 = !{i64 7608}
!134 = !{i64 7612}
!135 = !{i64 7616}
!136 = !{i64 7620}
!137 = !{i64 7640}
!138 = !{i64 7656}
!139 = !{i64 7660}
!140 = !{i64 7680}
!141 = !{i64 7684}
!142 = !{i64 7712}
!143 = !{i64 7736}
!144 = !{i64 7752}
!145 = !{i64 7760}
!146 = !{i64 7780}
!147 = !{i64 7788}
!148 = !{i64 7796}
!149 = !{i64 7800}
!150 = !{i64 7804}
!151 = !{i64 7808}
!152 = !{i64 7816}
!153 = !{i64 7768}
!154 = !{i64 7840}
!155 = !{i64 7844}
!156 = !{i64 7848}
!157 = !{i64 7864}
!158 = !{i64 7872}
!159 = !{i64 7876}
!160 = !{i64 7920}
!161 = !{i64 7932}
!162 = !{i64 7948}
!163 = !{i64 7968}
!164 = !{i64 8012}
!165 = !{i64 8028}
!166 = !{i64 8076}
!167 = !{i64 8092}
!168 = !{i64 8100}
!169 = !{i64 8096}
!170 = !{i64 8112}
!171 = !{i64 8128}
!172 = !{i64 8144}
!173 = !{i64 8160}
!174 = !{i64 8176}
!175 = !{i64 8192}
!176 = !{i64 8196}
!177 = !{i64 8212}
!178 = !{i64 8228}
!179 = !{i64 8232}
!180 = !{i64 8248}
!181 = !{i64 8268}
!182 = !{i64 8280}
!183 = !{i64 8292}
!184 = !{i64 8296}
!185 = !{i64 8300}
!186 = !{i64 8304}
!187 = !{i64 8308}
!188 = !{i64 8312}
!189 = !{i64 8316}
!190 = !{i64 8320}
!191 = !{i64 8324}
!192 = !{i64 8328}
!193 = !{i64 8332}
!194 = !{i64 8336}
!195 = !{i64 8348}
!196 = !{i64 8360}
!197 = !{i64 8364}
!198 = !{i64 8368}
!199 = !{i64 8372}
!200 = !{i64 8376}
!201 = !{i64 8380}
!202 = !{i64 8388}
!203 = !{i64 8392}
!204 = !{i64 8396}
!205 = !{i64 8400}
!206 = !{i64 8404}
!207 = !{i64 8408}
!208 = !{i64 8416}
!209 = !{i64 8420}
!210 = !{i64 8428}
!211 = !{i64 8432}
!212 = !{i64 8436}
!213 = !{i64 8440}
!214 = !{i64 8444}
!215 = !{i64 8448}
!216 = !{i64 8452}
!217 = !{i64 8456}
!218 = !{i64 8464}
!219 = !{i64 8468}
!220 = !{i64 8472}
!221 = !{i64 8476}
!222 = !{i64 8480}
!223 = !{i64 8508}
!224 = !{i64 8512}
!225 = !{i64 8516}
!226 = !{i64 8528}
!227 = !{i64 8540}
!228 = !{i64 8548}
!229 = !{i64 8560}
!230 = !{i64 8572}
!231 = !{i64 8580}
!232 = !{i64 8588}
!233 = !{i64 8600}
!234 = !{i64 8608}
!235 = !{i64 8616}
!236 = !{i64 8624}
!237 = !{i64 8628}
!238 = !{i64 8640}
!239 = !{i64 8644}
!240 = !{i64 8652}
!241 = !{i64 8660}
!242 = !{i64 8664}
!243 = !{i64 8676}
!244 = !{i64 8684}
!245 = !{i64 8692}
!246 = !{i64 8696}
!247 = !{i64 8708}
!248 = !{i64 8716}
!249 = !{i64 8724}
!250 = !{i64 8728}
!251 = !{i64 8732}
!252 = !{i64 8736}
!253 = !{i64 8740}
!254 = !{i64 8744}
!255 = !{i64 8756}
!256 = !{i64 8764}
!257 = !{i64 8772}
!258 = !{i64 8776}
!259 = !{i64 8780}
!260 = !{i64 8784}
!261 = !{i64 8788}
!262 = !{i64 8792}
!263 = !{i64 8796}
!264 = !{i64 8800}
!265 = !{i64 8804}
!266 = !{i64 8820}
!267 = !{i64 8824}
!268 = !{i64 8828}
!269 = !{i64 8836}
!270 = !{i64 8844}
!271 = !{i64 8848}
!272 = !{i64 8852}
!273 = !{i64 8856}
!274 = !{i64 8860}
!275 = !{i64 8864}
!276 = !{i64 8876}
!277 = !{i64 8884}
!278 = !{i64 8892}
!279 = !{i64 8896}
!280 = !{i64 8900}
!281 = !{i64 8904}
!282 = !{i64 8908}
!283 = !{i64 8912}
!284 = !{i64 8916}
!285 = !{i64 8920}
!286 = !{i64 8924}
!287 = !{i64 8940}
!288 = !{i64 8944}
!289 = !{i64 8948}
!290 = !{i64 8956}
!291 = !{i64 8964}
!292 = !{i64 8968}
!293 = !{i64 8972}
!294 = !{i64 8976}
!295 = !{i64 8980}
!296 = !{i64 8992}
!297 = !{i64 9000}
!298 = !{i64 9004}
!299 = !{i64 9008}
!300 = !{i64 9012}
!301 = !{i64 9016}
!302 = !{i64 9020}
!303 = !{i64 9024}
!304 = !{i64 9028}
!305 = !{i64 9040}
!306 = !{i64 9044}
!307 = !{i64 9052}
!308 = !{i64 9060}
!309 = !{i64 9064}
!310 = !{i64 9068}
!311 = !{i64 9072}
!312 = !{i64 9076}
!313 = !{i64 9080}
!314 = !{i64 9084}
!315 = !{i64 9088}
!316 = !{i64 9092}
!317 = !{i64 9108}
!318 = !{i64 9112}
!319 = !{i64 9116}
!320 = !{i64 9124}
!321 = !{i64 9132}
!322 = !{i64 9136}
!323 = !{i64 9148}
!324 = !{i64 9156}
!325 = !{i64 9168}
!326 = !{i64 9176}
!327 = !{i64 9184}
!328 = !{i64 9188}
!329 = !{i64 9200}
!330 = !{i64 9208}
!331 = !{i64 9216}
!332 = !{i64 9236}
