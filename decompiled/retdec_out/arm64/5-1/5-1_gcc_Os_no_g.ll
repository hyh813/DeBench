source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%_Unwind_Exception = type { i32 }
%vtable_13868_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 ()* }
%vtable_13898_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 ()* }
%vtable_138e0_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_13958_type = type { i64 ()*, i64 ()*, i64 (i64*)* }
%vtable_139c0_type = type { i64 ()* }
%vtable_13a28_type = type { i64 ()* }
%vtable_13ac8_type = type { i64 ()*, i64 (i64*)*, i64 ()* }
%vtable_13b58_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_13b80_type = type { i64 ()*, i64 ()*, i64 ()* }

@global_var_13ef8 = local_unnamed_addr global i64 5712
@global_var_13f00 = local_unnamed_addr global i64 5712
@global_var_13f08 = local_unnamed_addr global i64 5712
@global_var_13f10 = local_unnamed_addr global i64 5712
@global_var_13f18 = local_unnamed_addr global i64 5712
@global_var_13f20 = local_unnamed_addr global i64 5712
@global_var_13f28 = local_unnamed_addr global i64 5712
@global_var_13f30 = local_unnamed_addr global i64 5712
@global_var_13f38 = local_unnamed_addr global i64 5712
@global_var_13f40 = local_unnamed_addr global i64 5712
@global_var_13f48 = local_unnamed_addr global i64 5712
@global_var_13f50 = local_unnamed_addr global i64 5712
@global_var_13f58 = local_unnamed_addr global i64 5712
@global_var_13f60 = local_unnamed_addr global i64 5712
@global_var_13f68 = local_unnamed_addr global i64 5712
@global_var_13f70 = local_unnamed_addr global i64 5712
@global_var_13f78 = local_unnamed_addr global i64 5712
@global_var_13f80 = local_unnamed_addr global i64 5712
@global_var_13f88 = local_unnamed_addr global i64 5712
@global_var_13f98 = local_unnamed_addr global i64 5712
@global_var_13fa0 = local_unnamed_addr global i64 5712
@global_var_13fa8 = local_unnamed_addr global i64 5712
@global_var_13fb0 = local_unnamed_addr global i64 5712
@global_var_13fc0 = local_unnamed_addr global i64 0
@global_var_1894 = local_unnamed_addr constant [3 x i8] c"?\08\00"
@global_var_14000 = global i64 0
@global_var_14038 = global i64 0
@global_var_14008 = external local_unnamed_addr global i64
@global_var_13fd0 = local_unnamed_addr global i64 6352
@global_var_14030 = global i64 0
@global_var_13fd8 = local_unnamed_addr global i64 0
@global_var_1a34 = local_unnamed_addr constant i64 4107496579118661664
@global_var_13fc8 = local_unnamed_addr global i64 0
@global_var_25ad = constant [5 x i8] c"Test\00"
@global_var_3e8 = global i64 0
@global_var_2777 = constant [15 x i8] c"12RTTIDerivedA\00"
@global_var_2786 = constant [15 x i8] c"12RTTIDerivedB\00"
@global_var_13b78 = local_unnamed_addr global i64 81024
@global_var_13c80 = global i64 0
@global_var_13c88 = local_unnamed_addr global [15 x i8]* @global_var_2786
@global_var_1d78 = local_unnamed_addr constant i64 1225069753408684096
@global_var_13c58 = global i64 0
@global_var_13c68 = global i64 0
@global_var_1d9c = local_unnamed_addr constant i64 1225421599260278848
@global_var_1dbc = local_unnamed_addr constant i64 1225861403911389248
@global_var_1e6c = local_unnamed_addr constant i64 -504363709754245087
@global_var_2bf = global i64 0
@global_var_13b30 = global i64 8596
@global_var_13af8 = global i64 8612
@global_var_25a0 = constant [5 x i8] c"Base\00"
@global_var_25a5 = constant [8 x i8] c"Derived\00"
@global_var_13918 = global i64 8516
@global_var_13990 = global i64 8556
@global_var_139f8 = local_unnamed_addr global i64 8556
@global_var_13a60 = local_unnamed_addr global i64 8516
@0 = external global i32
@global_var_13c98 = global %_Unwind_Exception* null
@global_var_14034 = local_unnamed_addr global i32 0
@global_var_125c = global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_25b2 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_25d6 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_25f4 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_2610 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_262c = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_2648 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_2665 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_2681 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_269d = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_26b9 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_26d5 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_26f2 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_270f = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_13868 = local_unnamed_addr global %vtable_13868_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, i64 ()* @_ZN4BaseD1Ev, i64 ()* @_ZN4BaseD0Ev }
@global_var_13898 = local_unnamed_addr global %vtable_13898_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, i64 ()* @_ZN7DerivedD1Ev, i64 ()* @_ZN7DerivedD0Ev }
@global_var_138e0 = global %vtable_138e0_type { i64 ()* @_ZN7MiddleA4funcEv, i64 ()* @_ZN7MiddleAD1Ev, i64 (i64*)* @_ZN7MiddleAD0Ev }
@global_var_13958 = global %vtable_13958_type { i64 ()* @_ZN7MiddleB4funcEv, i64 ()* @_ZN7MiddleBD1Ev, i64 (i64*)* @_ZN7MiddleBD0Ev }
@global_var_139c0 = local_unnamed_addr global %vtable_139c0_type { i64 ()* @_ZN7MiddleB4funcEv }
@global_var_13a28 = local_unnamed_addr global %vtable_13a28_type { i64 ()* @_ZN7MiddleA4funcEv }
@global_var_13ac8 = global %vtable_13ac8_type { i64 ()* @_ZN14DiamondDerived4funcEv, i64 (i64*)* @_ZN14DiamondDerivedD1Ev, i64 ()* @_ZN14DiamondDerivedD0Ev }
@global_var_13b58 = global %vtable_13b58_type { i64 ()* @_ZN12RTTIDerivedAD1Ev, i64 ()* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_13b80 = global %vtable_13b80_type { i64 ()* @_ZN12RTTIDerivedBD1Ev, i64 ()* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1638:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @function_1670(i64 %arg1) local_unnamed_addr {
dec_label_pc_1670:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !2
  ret i64 %0, !insn.addr !2
}

define i32 @function_1680(i8* %s) local_unnamed_addr {
dec_label_pc_1680:
  %0 = call i32 @puts(i8* %s), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_1690(i8* %s) local_unnamed_addr {
dec_label_pc_1690:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_16a0() local_unnamed_addr {
dec_label_pc_16a0:
  call void @__stack_chk_fail(), !insn.addr !5
  ret void, !insn.addr !5
}

define i64 @function_16b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_16b0:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_16c0(i64 %arg1) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define void @function_16d0(i64* %d) local_unnamed_addr {
dec_label_pc_16d0:
  call void @__cxa_finalize(i64* %d), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_16e0(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_16e0:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_16f0(i64 %arg1) local_unnamed_addr {
dec_label_pc_16f0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i64 @function_1700(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1700:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i8* @function_1710(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1710:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i64 @function_1720(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1720:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i32 @function_1730(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1730:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void @function_1740(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1740:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !15
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_1750(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1750:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_1760(i64 %arg1) local_unnamed_addr {
dec_label_pc_1760:
  %0 = call i64 @__cxa_rethrow(i64 %arg1), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_1770() local_unnamed_addr {
dec_label_pc_1770:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_1780() local_unnamed_addr {
dec_label_pc_1780:
  call void @abort(), !insn.addr !19
  ret void, !insn.addr !19
}

define i64 @function_1790(i64 %arg1) local_unnamed_addr {
dec_label_pc_1790:
  %0 = call i64 @__cxa_end_catch(i64 %arg1), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i64 @function_17b0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_17b0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define void @function_17c0(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_17c0:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @function_17d0(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_17d0:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define void @function_17e0() local_unnamed_addr {
dec_label_pc_17e0:
  call void @__gmon_start__(), !insn.addr !24
  ret void, !insn.addr !24
}

define i64 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1800:
  %storemerge.reg2mem = alloca i64, !insn.addr !25
  %x20.0.in.reg2mem = alloca i32, !insn.addr !25
  %x1.1.reg2mem = alloca i64, !insn.addr !25
  %x0.1.reg2mem = alloca i64, !insn.addr !25
  %x1.2.reg2mem = alloca i64, !insn.addr !25
  %x0.2.reg2mem = alloca i64, !insn.addr !25
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !26
  %1 = inttoptr i64 %0 to i32*, !insn.addr !27
  store i32 42, i32* %1, align 4, !insn.addr !27
  %2 = load i64, i64* @global_var_13fc0, align 8, !insn.addr !28
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !29
  %4 = icmp eq i64 %2, 1, !insn.addr !30
  store i64 %3, i64* %x0.2.reg2mem, !insn.addr !31
  store i64 1, i64* %x1.2.reg2mem, !insn.addr !31
  store i64 %3, i64* %x0.1.reg2mem, !insn.addr !31
  store i64 %2, i64* %x1.1.reg2mem, !insn.addr !31
  br i1 %4, label %dec_label_pc_1840, label %dec_label_pc_1848, !insn.addr !31

dec_label_pc_1840:                                ; preds = %dec_label_pc_1800, %dec_label_pc_1848
  %x1.2.reload = load i64, i64* %x1.2.reg2mem
  %x0.2.reload = load i64, i64* %x0.2.reg2mem
  %5 = call i64 @__cxa_begin_catch(i64 %x0.2.reload), !insn.addr !32
  %6 = inttoptr i64 %5 to i32*, !insn.addr !33
  %7 = load i32, i32* %6, align 4, !insn.addr !33
  %8 = call i64 @__cxa_rethrow(i64 %5), !insn.addr !34
  %9 = call i64 @__cxa_end_catch(i64 %8), !insn.addr !35
  %10 = icmp eq i64 %x1.2.reload, 1, !insn.addr !36
  store i64 %8, i64* %x0.1.reg2mem, !insn.addr !37
  store i64 %x1.2.reload, i64* %x1.1.reg2mem, !insn.addr !37
  br i1 %10, label %dec_label_pc_186c, label %dec_label_pc_1848, !insn.addr !37

dec_label_pc_1848:                                ; preds = %dec_label_pc_1800, %dec_label_pc_189c, %dec_label_pc_1840
  %x1.1.reload = load i64, i64* %x1.1.reg2mem
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %11 = inttoptr i64 %x0.1.reload to %_Unwind_Exception*, !insn.addr !38
  call void @_Unwind_Resume(%_Unwind_Exception* %11), !insn.addr !38
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.2.reg2mem, !insn.addr !38
  store i64 %x1.1.reload, i64* %x1.2.reg2mem, !insn.addr !38
  br label %dec_label_pc_1840, !insn.addr !38

dec_label_pc_186c:                                ; preds = %dec_label_pc_1840
  %12 = call i64 @__cxa_begin_catch(i64 %8), !insn.addr !39
  %13 = inttoptr i64 %12 to i32*, !insn.addr !40
  %14 = load i32, i32* %13, align 4, !insn.addr !40
  %15 = call i64 @__cxa_end_catch(i64 %12), !insn.addr !41
  %16 = call i64 @__cxa_allocate_exception(i64 1), !insn.addr !42
  %17 = mul i32 %14, 2, !insn.addr !43
  %18 = add i32 %17, %7, !insn.addr !43
  %19 = call i64 @__cxa_throw(i64 %16, i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 0), !insn.addr !44
  br i1 icmp eq (i64 sub (i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 2), i64 0), label %dec_label_pc_18b0, label %dec_label_pc_189c, !insn.addr !45

dec_label_pc_189c:                                ; preds = %dec_label_pc_186c
  store i64 %19, i64* %x0.1.reg2mem, !insn.addr !46
  store i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64* %x1.1.reg2mem, !insn.addr !46
  br i1 icmp eq (i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), i64 3), label %dec_label_pc_18a4, label %dec_label_pc_1848, !insn.addr !46

dec_label_pc_18a4:                                ; preds = %dec_label_pc_189c
  %20 = add i32 %18, 200
  %21 = call i64 @__cxa_begin_catch(i64 %19), !insn.addr !47
  store i32 %20, i32* %x20.0.in.reg2mem, !insn.addr !48
  store i64 %21, i64* %storemerge.reg2mem, !insn.addr !48
  br label %dec_label_pc_18b8, !insn.addr !48

dec_label_pc_18b0:                                ; preds = %dec_label_pc_186c
  %22 = add i32 %18, 100
  %23 = call i64 @__cxa_begin_catch(i64 %19), !insn.addr !49
  store i32 %22, i32* %x20.0.in.reg2mem, !insn.addr !49
  store i64 %23, i64* %storemerge.reg2mem, !insn.addr !49
  br label %dec_label_pc_18b8, !insn.addr !49

dec_label_pc_18b8:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_18a4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %x20.0.in.reload = load i32, i32* %x20.0.in.reg2mem
  %x20.0 = zext i32 %x20.0.in.reload to i64
  %24 = call i64 @__cxa_end_catch(i64 %storemerge.reload), !insn.addr !50
  ret i64 %x20.0, !insn.addr !51

; uselistorder directives
  uselistorder i64 %19, { 2, 1, 0 }
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64 %8, { 1, 0, 2 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %x0.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x1.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %x0.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %x1.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder i32* %x20.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (%_Unwind_Exception** @global_var_13c98 to i64), { 1, 0, 2, 3 }
  uselistorder i64 (i64)* @__cxa_end_catch, { 2, 1, 0, 3 }
  uselistorder i64 (i64)* @__cxa_begin_catch, { 3, 2, 1, 0, 4 }
  uselistorder i64 (i64, i64, i64)* @__cxa_throw, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_allocate_exception, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1848, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1840, { 1, 0 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_18d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !52
  %3 = call i64 @_Z20test_cpp_oo_featuresv(i64* %2), !insn.addr !52
  ret i64 0, !insn.addr !53
}

define i64 @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_18e8:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !54
  %1 = load i64, i64* inttoptr (i64 81912 to i64*), align 8, !insn.addr !55
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !56
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_14038, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_14000 to i64), i64 8) to i64*)), !insn.addr !56
  %4 = sext i32 %3 to i64, !insn.addr !56
  ret i64 %4, !insn.addr !56
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1940:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_13fd0, align 8, !insn.addr !57
  %3 = trunc i64 %arg1 to i32, !insn.addr !58
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !58
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !58
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !58
  call void @abort(), !insn.addr !59
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !59
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1974:
  %0 = load i64, i64* inttoptr (i64 81896 to i64*), align 8, !insn.addr !60
  %1 = icmp eq i64 %0, 0, !insn.addr !61
  br i1 %1, label %dec_label_pc_1984, label %dec_label_pc_1980, !insn.addr !61

dec_label_pc_1980:                                ; preds = %dec_label_pc_1974
  call void @__gmon_start__(), !insn.addr !62
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !62

dec_label_pc_1984:                                ; preds = %dec_label_pc_1974
  ret i64 0, !insn.addr !63
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1990:
  ret i64 ptrtoint (i64* @global_var_14030 to i64), !insn.addr !64
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_19c0:
  ret i64 ptrtoint (i64* @global_var_14030 to i64), !insn.addr !65
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1a00:
  %x0.0.reg2mem = alloca i64, !insn.addr !66
  %0 = load i8, i8* bitcast (i64* @global_var_14030 to i8*), align 8, !insn.addr !67
  %1 = zext i8 %0 to i64, !insn.addr !67
  %2 = icmp eq i8 %0, 0, !insn.addr !68
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !68
  br i1 %2, label %dec_label_pc_1a18, label %dec_label_pc_1a3c, !insn.addr !68

dec_label_pc_1a18:                                ; preds = %dec_label_pc_1a00
  %3 = load i64, i64* @global_var_13fd8, align 8, !insn.addr !69
  %4 = icmp eq i64 %3, 0, !insn.addr !70
  br i1 %4, label %dec_label_pc_1a30, label %dec_label_pc_1a24, !insn.addr !70

dec_label_pc_1a24:                                ; preds = %dec_label_pc_1a18
  %5 = load i64, i64* @global_var_14008, align 8, !insn.addr !71
  %6 = inttoptr i64 %5 to i64*, !insn.addr !72
  call void @__cxa_finalize(i64* %6), !insn.addr !72
  br label %dec_label_pc_1a30, !insn.addr !72

dec_label_pc_1a30:                                ; preds = %dec_label_pc_1a24, %dec_label_pc_1a18
  %7 = call i64 @deregister_tm_clones(), !insn.addr !73
  store i8 1, i8* bitcast (i64* @global_var_14030 to i8*), align 8, !insn.addr !74
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !74
  br label %dec_label_pc_1a3c, !insn.addr !74

dec_label_pc_1a3c:                                ; preds = %dec_label_pc_1a00, %dec_label_pc_1a30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !75

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1a3c, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1a50:
  %0 = call i64 @register_tm_clones(), !insn.addr !76
  ret i64 %0, !insn.addr !76
}

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1a54:
  %x0.0.reg2mem = alloca i64, !insn.addr !77
  %stack_var_-36 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !78
  %1 = inttoptr i64 %0 to i64*, !insn.addr !79
  %2 = load i64, i64* %1, align 8, !insn.addr !79
  %3 = bitcast i64* %stack_var_-36 to i8*, !insn.addr !80
  %4 = call i8* @strncpy(i8* nonnull %3, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_25ad, i64 0, i64 0), i32 31), !insn.addr !80
  %5 = call i32 @strlen(i8* %4), !insn.addr !81
  %6 = sext i32 %5 to i64, !insn.addr !81
  %7 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !82
  %8 = inttoptr i64 %7 to i64*, !insn.addr !83
  %9 = load i64, i64* %8, align 8, !insn.addr !83
  %10 = icmp eq i64 %2, %9, !insn.addr !84
  store i64 %6, i64* %x0.0.reg2mem, !insn.addr !85
  br i1 %10, label %dec_label_pc_1ab0, label %dec_label_pc_1aac, !insn.addr !85

dec_label_pc_1aac:                                ; preds = %dec_label_pc_1a54
  call void @__stack_chk_fail(), !insn.addr !86
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !86
  br label %dec_label_pc_1ab0, !insn.addr !86

dec_label_pc_1ab0:                                ; preds = %dec_label_pc_1aac, %dec_label_pc_1a54
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %11 = add i64 %x0.0.reload, zext (i32 ptrtoint (i32* @global_var_125c to i32) to i64), !insn.addr !87
  %12 = and i64 %11, 4294967295, !insn.addr !87
  ret i64 %12, !insn.addr !88
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1ac0:
  %0 = load i32, i32* @global_var_14034, align 4, !insn.addr !89
  %1 = add i32 %0, 21, !insn.addr !90
  %2 = mul i32 %0, ptrtoint (i64* @global_var_3e8 to i32), !insn.addr !91
  %3 = add i32 %1, %2, !insn.addr !91
  %4 = zext i32 %3 to i64, !insn.addr !91
  ret i64 %4, !insn.addr !92
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ad8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !93
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1ae8:
  %x0.0.reg2mem = alloca i64, !insn.addr !94
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !95
  %1 = inttoptr i64 %0 to i64*, !insn.addr !96
  %2 = load i64, i64* %1, align 8, !insn.addr !96
  %3 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !97
  %4 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !98
  %5 = add i64 %3, 21, !insn.addr !99
  %6 = add i64 %5, %4, !insn.addr !100
  %7 = and i64 %6, 4294967295, !insn.addr !100
  %8 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !101
  %9 = inttoptr i64 %8 to i64*, !insn.addr !102
  %10 = load i64, i64* %9, align 8, !insn.addr !102
  %11 = icmp eq i64 %2, %10, !insn.addr !103
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !104
  br i1 %11, label %dec_label_pc_1b6c, label %dec_label_pc_1b68, !insn.addr !104

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1ae8
  call void @__stack_chk_fail(), !insn.addr !105
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_1b6c, !insn.addr !105

dec_label_pc_1b6c:                                ; preds = %dec_label_pc_1b68, %dec_label_pc_1ae8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !106

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1b78:
  ret i64 71, !insn.addr !107
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1b80:
  ret i64 22, !insn.addr !108
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1b88:
  %x0.0.reg2mem = alloca i64, !insn.addr !109
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !110
  %1 = inttoptr i64 %0 to i64*, !insn.addr !111
  %2 = load i64, i64* %1, align 8, !insn.addr !111
  %3 = call i32 @_Z12template_maxIiET_S0_S0_(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !112
  %4 = sext i32 %3 to i64, !insn.addr !112
  %5 = bitcast i64 %4 to double, !insn.addr !113
  call void @__asm_fcmpe(double %5, double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !113
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull @0, i32* nonnull @0), !insn.addr !114
  %6 = add i32 %3, 32, !insn.addr !115
  %7 = zext i32 %6 to i64, !insn.addr !115
  %8 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !116
  %9 = inttoptr i64 %8 to i64*, !insn.addr !117
  %10 = load i64, i64* %9, align 8, !insn.addr !117
  %11 = icmp eq i64 %2, %10, !insn.addr !118
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !119
  br i1 %11, label %dec_label_pc_1c20, label %dec_label_pc_1c1c, !insn.addr !119

dec_label_pc_1c1c:                                ; preds = %dec_label_pc_1b88
  call void @__stack_chk_fail(), !insn.addr !120
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !120
  br label %dec_label_pc_1c20, !insn.addr !120

dec_label_pc_1c20:                                ; preds = %dec_label_pc_1c1c, %dec_label_pc_1b88
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !121
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1c30:
  %x0.0.reg2mem = alloca i64, !insn.addr !122
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !123
  %1 = inttoptr i64 %0 to i64*, !insn.addr !124
  %2 = load i64, i64* %1, align 8, !insn.addr !124
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !125
  %4 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !126
  %5 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !127
  %6 = inttoptr i64 %5 to i64*, !insn.addr !128
  %7 = load i64, i64* %6, align 8, !insn.addr !128
  %8 = icmp eq i64 %2, %7, !insn.addr !129
  store i64 14, i64* %x0.0.reg2mem, !insn.addr !130
  br i1 %8, label %dec_label_pc_1cb0, label %dec_label_pc_1cac, !insn.addr !130

dec_label_pc_1cac:                                ; preds = %dec_label_pc_1c30
  call void @__stack_chk_fail(), !insn.addr !131
  store i64 and (i64 add (i64 ptrtoint (i32* @0 to i64), i64 3), i64 4294967295), i64* %x0.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_1cb0, !insn.addr !131

dec_label_pc_1cb0:                                ; preds = %dec_label_pc_1cac, %dec_label_pc_1c30
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !132

; uselistorder directives
  uselistorder i64 (i32)* @_ZN9ContainerIiE4pushEi, { 1, 0 }
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1cc0:
  ret i64 85, !insn.addr !133
}

define i64 @_Z13test_cpp_rttiv(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6, i64 %arg7, i64 %arg8, i64 %arg9) local_unnamed_addr {
dec_label_pc_1cc8:
  %0 = call i64 @_Znwm(i64 8), !insn.addr !134
  %1 = inttoptr i64 %0 to i64*, !insn.addr !135
  store i64 ptrtoint (%vtable_13b58_type* @global_var_13b58 to i64), i64* %1, align 8, !insn.addr !135
  %2 = call i64 @_Znwm(i64 8), !insn.addr !136
  %3 = load i64, i64* %1, align 8, !insn.addr !137
  %4 = inttoptr i64 %2 to i64*, !insn.addr !138
  store i64 ptrtoint (%vtable_13b80_type* @global_var_13b80 to i64), i64* %4, align 8, !insn.addr !138
  %5 = add i64 %3, -8, !insn.addr !139
  %6 = inttoptr i64 %5 to i64*, !insn.addr !139
  %7 = load i64, i64* %6, align 8, !insn.addr !139
  %8 = add i64 %7, 8, !insn.addr !140
  %9 = inttoptr i64 %8 to i64*, !insn.addr !140
  %10 = load i64, i64* %9, align 8, !insn.addr !140
  %11 = icmp eq i64 %10, ptrtoint ([15 x i8]* @global_var_2777 to i64), !insn.addr !141
  %12 = inttoptr i64 %10 to i8*, !insn.addr !142
  %13 = load i8, i8* %12, align 1, !insn.addr !142
  %14 = icmp eq i8 %13, 42, !insn.addr !143
  %or.cond = or i1 %11, %14
  br i1 %or.cond, label %dec_label_pc_1d4c, label %dec_label_pc_1d38, !insn.addr !144

dec_label_pc_1d38:                                ; preds = %dec_label_pc_1cc8
  %15 = call i32 @strcmp(i8* %12, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2777, i64 0, i64 0)), !insn.addr !145
  br label %dec_label_pc_1d4c, !insn.addr !146

dec_label_pc_1d4c:                                ; preds = %dec_label_pc_1cc8, %dec_label_pc_1d38
  %16 = load [15 x i8]*, [15 x i8]** @global_var_13c88, align 8, !insn.addr !147
  %17 = icmp eq [15 x i8]* %16, @global_var_2786, !insn.addr !148
  %18 = ptrtoint [15 x i8]* %16 to i64
  %19 = trunc i64 %18 to i8
  %20 = icmp eq i8 %19, 42, !insn.addr !149
  %or.cond2 = or i1 %17, %20
  br i1 %or.cond2, label %dec_label_pc_1d80, label %dec_label_pc_1d74, !insn.addr !150

dec_label_pc_1d74:                                ; preds = %dec_label_pc_1d4c
  %21 = getelementptr inbounds [15 x i8], [15 x i8]* %16, i64 0, i64 0, !insn.addr !151
  %22 = call i32 @strcmp(i8* %21, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_2786, i64 0, i64 0)), !insn.addr !151
  br label %dec_label_pc_1d80

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d74, %dec_label_pc_1d4c
  %23 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_13c58, i64* nonnull @global_var_13c68, i64 0), !insn.addr !152
  %24 = call i64 @__dynamic_cast(i64 %2, i64* nonnull @global_var_13c58, i64* nonnull @global_var_13c80, i64 0), !insn.addr !153
  %25 = zext i1 %14 to i64
  %x22.0 = add i64 %10, %25
  %26 = inttoptr i64 %x22.0 to i8*, !insn.addr !154
  %27 = call i32 @strlen(i8* %26), !insn.addr !154
  ret i64 %0, !insn.addr !155

; uselistorder directives
  uselistorder [15 x i8]* %16, { 1, 0, 2 }
  uselistorder i64 %10, { 0, 2, 1 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1d4c, { 1, 0 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1e24:
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !156
  %1 = inttoptr i64 %0 to i64*, !insn.addr !157
  %2 = load i64, i64* %1, align 8, !insn.addr !157
  %3 = call i64 @_Znwm(i64 4), !insn.addr !158
  %4 = inttoptr i64 %3 to i32*, !insn.addr !159
  store i32 200, i32* %4, align 4, !insn.addr !159
  %5 = call i64 @_Znam(i64 20), !insn.addr !160
  %6 = inttoptr i64 %5 to i64*, !insn.addr !161
  store i64 8589934593, i64* %6, align 8, !insn.addr !161
  %7 = add i64 %5, 8, !insn.addr !162
  %8 = inttoptr i64 %7 to i64*, !insn.addr !162
  store i64 17179869187, i64* %8, align 8, !insn.addr !162
  %9 = add i64 %5, 16, !insn.addr !163
  %10 = inttoptr i64 %9 to i32*, !insn.addr !163
  store i32 5, i32* %10, align 4, !insn.addr !163
  %11 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev(), !insn.addr !164
  %12 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !165
  %13 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !166
  %14 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !167
  %15 = inttoptr i64 %14 to i64*, !insn.addr !168
  %16 = load i64, i64* %15, align 8, !insn.addr !168
  %17 = icmp eq i64 %2, %16, !insn.addr !169
  br i1 %17, label %dec_label_pc_1ee4, label %dec_label_pc_1ec4, !insn.addr !170

dec_label_pc_1ec4:                                ; preds = %dec_label_pc_1e24
  call void @__stack_chk_fail(), !insn.addr !171
  %18 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !172
  %19 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !173
  call void @_Unwind_Resume(%_Unwind_Exception* bitcast (i32* @0 to %_Unwind_Exception*)), !insn.addr !174
  br label %dec_label_pc_1ee4, !insn.addr !174

dec_label_pc_1ee4:                                ; preds = %dec_label_pc_1ec4, %dec_label_pc_1e24
  ret i64 ptrtoint (i64* @global_var_2bf to i64), !insn.addr !175

; uselistorder directives
  uselistorder i64 %5, { 1, 0, 2 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder i64 ()* @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev, { 3, 2, 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 2, 1, 0, 3 }
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1ef8:
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %0 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !176
  %1 = inttoptr i64 %0 to i64*, !insn.addr !177
  %2 = load i64, i64* %1, align 8, !insn.addr !177
  store i64 ptrtoint (%vtable_13ac8_type* @global_var_13ac8 to i64), i64* %stack_var_-48, align 8, !insn.addr !178
  store i64 ptrtoint (i64* @global_var_13b30 to i64), i64* %stack_var_-16, align 8, !insn.addr !179
  %3 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %stack_var_-16, i64 0), !insn.addr !180
  %4 = call i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* nonnull %stack_var_-16, i64 0), !insn.addr !181
  %5 = call i64 @_ZN14DiamondDerivedD1Ev(i64* nonnull %stack_var_-48), !insn.addr !182
  %6 = load i64, i64* @global_var_13fc8, align 8, !insn.addr !183
  %7 = inttoptr i64 %6 to i64*, !insn.addr !184
  %8 = load i64, i64* %7, align 8, !insn.addr !184
  %9 = icmp eq i64 %2, %8, !insn.addr !185
  br i1 %9, label %dec_label_pc_1f90, label %dec_label_pc_1f8c, !insn.addr !186

dec_label_pc_1f8c:                                ; preds = %dec_label_pc_1ef8
  call void @__stack_chk_fail(), !insn.addr !187
  br label %dec_label_pc_1f90, !insn.addr !187

dec_label_pc_1f90:                                ; preds = %dec_label_pc_1f8c, %dec_label_pc_1ef8
  %10 = add i64 %4, %3, !insn.addr !188
  %11 = and i64 %10, 4294967295, !insn.addr !188
  ret i64 %11, !insn.addr !189

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZTv0_n24_N14DiamondDerived4funcEv, { 1, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv(i64* %result) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_25b2 to i8*)), !insn.addr !190
  %1 = call i64 @_Z20test_cpp_member_funcv(), !insn.addr !191
  %2 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_25d6 to i8*)), !insn.addr !192
  %3 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !193
  %4 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_25f4 to i8*)), !insn.addr !194
  %5 = call i64 @_Z21test_cpp_virtual_funcv(), !insn.addr !195
  %6 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2610 to i8*)), !insn.addr !196
  %7 = call i64 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !197
  %8 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_262c to i8*)), !insn.addr !198
  %9 = call i64 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !199
  %10 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2648 to i8*)), !insn.addr !200
  %11 = call i64 @_Z26test_cpp_operator_overloadv(), !insn.addr !201
  %12 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2665 to i8*)), !insn.addr !202
  %13 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !203
  %14 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_2681 to i8*)), !insn.addr !204
  %15 = call i64 @_Z23test_cpp_template_classv(), !insn.addr !205
  %16 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_269d to i8*)), !insn.addr !206
  %17 = call i64 @_Z15test_cpp_lambdav(), !insn.addr !207
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_26b9 to i8*)), !insn.addr !208
  %19 = call i64 @_Z18test_cpp_exceptionv(), !insn.addr !209
  %20 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_26d5 to i8*)), !insn.addr !210
  %21 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !211
  %22 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_26f2 to i8*)), !insn.addr !212
  %23 = call i64 @_Z13test_cpp_rttiv(i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64), i64 ptrtoint (i32* @0 to i64)), !insn.addr !213
  %24 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* bitcast (i8** @global_var_270f to i8*)), !insn.addr !214
  %25 = sext i32 %24 to i64, !insn.addr !214
  ret i64 %25, !insn.addr !214

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_20d8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !215
  %3 = and i64 %2, 4294967295, !insn.addr !215
  ret i64 %3, !insn.addr !216
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_20e0:
  ret i64 ptrtoint ([5 x i8]* @global_var_25a0 to i64), !insn.addr !217
}

define i64 @_ZN4BaseD1Ev() {
dec_label_pc_20ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !218
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_20f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !219
  %4 = inttoptr i64 %3 to i32*, !insn.addr !219
  %5 = load i32, i32* %4, align 4, !insn.addr !219
  %6 = trunc i64 %1 to i32, !insn.addr !220
  %7 = mul i32 %5, %6, !insn.addr !220
  %8 = zext i32 %7 to i64, !insn.addr !220
  ret i64 %8, !insn.addr !221

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_20fc:
  ret i64 ptrtoint ([8 x i8]* @global_var_25a5 to i64), !insn.addr !222
}

define i64 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_2108:
  ret i64 30, !insn.addr !223
}

define i64 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_2110:
  ret i64 40, !insn.addr !224
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_2118:
  ret i64 40, !insn.addr !225
}

define i64 @_ZN11VirtualBase4funcEv() local_unnamed_addr {
dec_label_pc_2120:
  ret i64 100, !insn.addr !226
}

define i64 @_ZN11VirtualBaseD1Ev() local_unnamed_addr {
dec_label_pc_2128:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !227
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_212c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !228
  %3 = inttoptr i64 %2 to i64*, !insn.addr !228
  %4 = load i64, i64* %3, align 8, !insn.addr !228
  %5 = add i64 %1, 8, !insn.addr !229
  %6 = add i64 %5, %4, !insn.addr !230
  %7 = inttoptr i64 %6 to i32*, !insn.addr !230
  %8 = load i32, i32* %7, align 4, !insn.addr !230
  %9 = add i32 %8, 150, !insn.addr !231
  %10 = zext i32 %9 to i64, !insn.addr !231
  ret i64 %10, !insn.addr !232

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_2144:
  %0 = call i64 @_ZN7MiddleA4funcEv(), !insn.addr !233
  ret i64 %0, !insn.addr !233
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_2154:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !234
  %3 = inttoptr i64 %2 to i64*, !insn.addr !234
  %4 = load i64, i64* %3, align 8, !insn.addr !234
  %5 = add i64 %1, 8, !insn.addr !235
  %6 = add i64 %5, %4, !insn.addr !236
  %7 = inttoptr i64 %6 to i32*, !insn.addr !236
  %8 = load i32, i32* %7, align 4, !insn.addr !236
  %9 = add i32 %8, 200, !insn.addr !237
  %10 = zext i32 %9 to i64, !insn.addr !237
  ret i64 %10, !insn.addr !238

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 200, { 2, 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_216c:
  %0 = call i64 @_ZN7MiddleB4funcEv(), !insn.addr !239
  ret i64 %0, !insn.addr !239
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_217c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !240
  %3 = inttoptr i64 %2 to i64*, !insn.addr !240
  %4 = load i64, i64* %3, align 8, !insn.addr !240
  %5 = add i64 %1, 8, !insn.addr !241
  %6 = add i64 %5, %4, !insn.addr !242
  %7 = inttoptr i64 %6 to i32*, !insn.addr !242
  %8 = load i32, i32* %7, align 4, !insn.addr !242
  %9 = add i32 %8, 250, !insn.addr !243
  %10 = zext i32 %9 to i64, !insn.addr !243
  ret i64 %10, !insn.addr !244

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2194:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !245
  ret i64 %0, !insn.addr !245
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_21a4:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !246
  ret i64 %0, !insn.addr !246
}

define i64 @_ZN7MiddleAD1Ev() {
dec_label_pc_21ac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !247
  store i64 ptrtoint (%vtable_138e0_type* @global_var_138e0 to i64), i64* %2, align 8, !insn.addr !247
  %3 = add i64 %1, 16, !insn.addr !248
  %4 = inttoptr i64 %3 to i64*, !insn.addr !248
  store i64 ptrtoint (i64* @global_var_13918 to i64), i64* %4, align 8, !insn.addr !248
  ret i64 %1, !insn.addr !249

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @_ZTv0_n32_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_21c8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !250
  %3 = inttoptr i64 %2 to i64*, !insn.addr !250
  %4 = load i64, i64* %3, align 8, !insn.addr !250
  %5 = add i64 %4, %1, !insn.addr !251
  %6 = inttoptr i64 %5 to i64*, !insn.addr !252
  store i64 ptrtoint (%vtable_138e0_type* @global_var_138e0 to i64), i64* %6, align 8, !insn.addr !252
  %7 = add i64 %5, 16, !insn.addr !253
  %8 = inttoptr i64 %7 to i64*, !insn.addr !253
  store i64 ptrtoint (i64* @global_var_13918 to i64), i64* %8, align 8, !insn.addr !253
  ret i64 ptrtoint (i64* @global_var_13918 to i64), !insn.addr !254

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleBD1Ev() {
dec_label_pc_21f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !255
  store i64 ptrtoint (%vtable_13958_type* @global_var_13958 to i64), i64* %2, align 8, !insn.addr !255
  %3 = add i64 %1, 16, !insn.addr !256
  %4 = inttoptr i64 %3 to i64*, !insn.addr !256
  store i64 ptrtoint (i64* @global_var_13990 to i64), i64* %4, align 8, !insn.addr !256
  ret i64 %1, !insn.addr !257

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
}

define i64 @_ZTv0_n32_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_220c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !258
  %3 = inttoptr i64 %2 to i64*, !insn.addr !258
  %4 = load i64, i64* %3, align 8, !insn.addr !258
  %5 = add i64 %4, %1, !insn.addr !259
  %6 = inttoptr i64 %5 to i64*, !insn.addr !260
  store i64 ptrtoint (%vtable_13958_type* @global_var_13958 to i64), i64* %6, align 8, !insn.addr !260
  %7 = add i64 %5, 16, !insn.addr !261
  %8 = inttoptr i64 %7 to i64*, !insn.addr !261
  store i64 ptrtoint (i64* @global_var_13990 to i64), i64* %8, align 8, !insn.addr !261
  ret i64 ptrtoint (i64* @global_var_13990 to i64), !insn.addr !262

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_2234:
  ret i64 1, !insn.addr !263

; uselistorder directives
  uselistorder i64 1, { 2, 4, 0, 3, 5, 1, 6 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_223c:
  ret i64 2, !insn.addr !264
}

define i64 @_ZN12RTTIDerivedBD1Ev() {
dec_label_pc_2244:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !265
}

define i64 @_ZN12RTTIDerivedAD1Ev() {
dec_label_pc_2248:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !266
}

define i64 @_ZN12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_224c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !267
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2250:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !268
}

define i64 @_ZN7DerivedD1Ev() {
dec_label_pc_2254:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !269
}

define i64 @_ZN4BaseD0Ev() {
dec_label_pc_2258:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !270
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !270
  ret i64 %3, !insn.addr !270
}

define i64 @_ZN7DerivedD0Ev() {
dec_label_pc_2260:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !271
  %3 = call i64 @_ZdlPvm(i64* %2, i64 16), !insn.addr !271
  ret i64 %3, !insn.addr !271
}

define i64 @_ZN12MultiDerivedD0Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2268:
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !272
  ret i64 %0, !insn.addr !272
}

define i64 @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_2270:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !273
  %3 = inttoptr i64 %2 to i64*, !insn.addr !274
  %4 = call i64 @_ZN12MultiDerivedD0Ev(i64* %3), !insn.addr !274
  ret i64 %4, !insn.addr !274
}

define i64 @_ZN11VirtualBaseD0Ev() local_unnamed_addr {
dec_label_pc_2278:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !275
  %3 = call i64 @_ZdlPvm(i64* %2, i64 16), !insn.addr !275
  ret i64 %3, !insn.addr !275
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_2280:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !276
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !276
  ret i64 %3, !insn.addr !276
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_2288:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !277
  %3 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !277
  ret i64 %3, !insn.addr !277
}

define i64 @_ZN7MiddleAD0Ev(i64* %result) {
dec_label_pc_2290:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_138e0_type* @global_var_138e0 to i64), i64* %result, align 8, !insn.addr !278
  %1 = add i64 %0, 16, !insn.addr !279
  %2 = inttoptr i64 %1 to i64*, !insn.addr !279
  store i64 ptrtoint (i64* @global_var_13918 to i64), i64* %2, align 8, !insn.addr !279
  %3 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !280
  ret i64 %3, !insn.addr !280
}

define i64 @_ZTv0_n32_N7MiddleAD0Ev() local_unnamed_addr {
dec_label_pc_22b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !281
  %3 = inttoptr i64 %2 to i64*, !insn.addr !281
  %4 = load i64, i64* %3, align 8, !insn.addr !281
  %5 = add i64 %4, %1, !insn.addr !282
  %6 = inttoptr i64 %5 to i64*, !insn.addr !283
  %7 = call i64 @_ZN7MiddleAD0Ev(i64* %6), !insn.addr !283
  ret i64 %7, !insn.addr !283

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleBD0Ev(i64* %result) {
dec_label_pc_22c0:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_13958_type* @global_var_13958 to i64), i64* %result, align 8, !insn.addr !284
  %1 = add i64 %0, 16, !insn.addr !285
  %2 = inttoptr i64 %1 to i64*, !insn.addr !285
  store i64 ptrtoint (i64* @global_var_13990 to i64), i64* %2, align 8, !insn.addr !285
  %3 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !286
  ret i64 %3, !insn.addr !286
}

define i64 @_ZTv0_n32_N7MiddleBD0Ev() local_unnamed_addr {
dec_label_pc_22e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !287
  %3 = inttoptr i64 %2 to i64*, !insn.addr !287
  %4 = load i64, i64* %3, align 8, !insn.addr !287
  %5 = add i64 %4, %1, !insn.addr !288
  %6 = inttoptr i64 %5 to i64*, !insn.addr !289
  %7 = call i64 @_ZN7MiddleBD0Ev(i64* %6), !insn.addr !289
  ret i64 %7, !insn.addr !289

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN7MiddleAD4Ev() local_unnamed_addr {
dec_label_pc_22f0:
  %0 = alloca i64
  %x2.0.reg2mem = alloca i64, !insn.addr !290
  %x1.0.reg2mem = alloca i64, !insn.addr !290
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !290
  %5 = icmp eq i32 %4, 0, !insn.addr !290
  %storemerge = select i1 %5, i64 %1, i64 ptrtoint (%vtable_138e0_type* @global_var_138e0 to i64)
  %6 = inttoptr i64 %3 to i64*, !insn.addr !291
  store i64 %storemerge, i64* %6, align 8, !insn.addr !291
  store i64 ptrtoint (i64* @global_var_13918 to i64), i64* %x1.0.reg2mem, !insn.addr !292
  store i64 16, i64* %x2.0.reg2mem, !insn.addr !292
  br i1 %5, label %dec_label_pc_2300, label %dec_label_pc_2308, !insn.addr !292

dec_label_pc_2300:                                ; preds = %dec_label_pc_22f0
  %7 = add i64 %1, 8, !insn.addr !293
  %8 = inttoptr i64 %7 to i64*, !insn.addr !293
  %9 = load i64, i64* %8, align 8, !insn.addr !293
  %10 = add i64 %storemerge, -24, !insn.addr !294
  %11 = inttoptr i64 %10 to i64*, !insn.addr !294
  %12 = load i64, i64* %11, align 8, !insn.addr !294
  store i64 %9, i64* %x1.0.reg2mem, !insn.addr !294
  store i64 %12, i64* %x2.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_2308, !insn.addr !294

dec_label_pc_2308:                                ; preds = %dec_label_pc_22f0, %dec_label_pc_2300
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %13 = add i64 %x2.0.reload, %3, !insn.addr !295
  %14 = inttoptr i64 %13 to i64*, !insn.addr !295
  store i64 %x1.0.reload, i64* %14, align 8, !insn.addr !295
  ret i64 %3, !insn.addr !296

; uselistorder directives
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x2.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 ptrtoint (i64* @global_var_13918 to i64), { 0, 1, 3, 2, 4 }
  uselistorder i64 (i64*)* @_ZN7MiddleAD0Ev, { 1, 0 }
  uselistorder i64 ()* @_ZN7MiddleA4funcEv, { 2, 0, 1 }
  uselistorder i64 ptrtoint (%vtable_138e0_type* @global_var_138e0 to i64), { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2308, { 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_232c:
  %0 = call i64 @_ZN7MiddleAD4Ev(), !insn.addr !297
  ret i64 %0, !insn.addr !297
}

define i64 @_ZN7MiddleBD4Ev() local_unnamed_addr {
dec_label_pc_2338:
  %0 = alloca i64
  %x2.0.reg2mem = alloca i64, !insn.addr !298
  %x1.0.reg2mem = alloca i64, !insn.addr !298
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !298
  %5 = icmp eq i32 %4, 0, !insn.addr !298
  %storemerge = select i1 %5, i64 %1, i64 ptrtoint (%vtable_13958_type* @global_var_13958 to i64)
  %6 = inttoptr i64 %3 to i64*, !insn.addr !299
  store i64 %storemerge, i64* %6, align 8, !insn.addr !299
  store i64 ptrtoint (i64* @global_var_13990 to i64), i64* %x1.0.reg2mem, !insn.addr !300
  store i64 16, i64* %x2.0.reg2mem, !insn.addr !300
  br i1 %5, label %dec_label_pc_2348, label %dec_label_pc_2350, !insn.addr !300

dec_label_pc_2348:                                ; preds = %dec_label_pc_2338
  %7 = add i64 %1, 8, !insn.addr !301
  %8 = inttoptr i64 %7 to i64*, !insn.addr !301
  %9 = load i64, i64* %8, align 8, !insn.addr !301
  %10 = add i64 %storemerge, -24, !insn.addr !302
  %11 = inttoptr i64 %10 to i64*, !insn.addr !302
  %12 = load i64, i64* %11, align 8, !insn.addr !302
  store i64 %9, i64* %x1.0.reg2mem, !insn.addr !302
  store i64 %12, i64* %x2.0.reg2mem, !insn.addr !302
  br label %dec_label_pc_2350, !insn.addr !302

dec_label_pc_2350:                                ; preds = %dec_label_pc_2338, %dec_label_pc_2348
  %x2.0.reload = load i64, i64* %x2.0.reg2mem
  %x1.0.reload = load i64, i64* %x1.0.reg2mem
  %13 = add i64 %x2.0.reload, %3, !insn.addr !303
  %14 = inttoptr i64 %13 to i64*, !insn.addr !303
  store i64 %x1.0.reload, i64* %14, align 8, !insn.addr !303
  ret i64 %3, !insn.addr !304

; uselistorder directives
  uselistorder i64 %3, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %x1.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %x2.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 ptrtoint (i64* @global_var_13990 to i64), { 0, 1, 3, 2, 4 }
  uselistorder i64 (i64*)* @_ZN7MiddleBD0Ev, { 1, 0 }
  uselistorder i64 ()* @_ZN7MiddleB4funcEv, { 2, 0, 1 }
  uselistorder i64 ptrtoint (%vtable_13958_type* @global_var_13958 to i64), { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_2350, { 1, 0 }
}

define i64 @_ZN7MiddleBD2Ev(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2374:
  %0 = call i64 @_ZN7MiddleBD4Ev(), !insn.addr !305
  ret i64 %0, !insn.addr !305
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2380:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !306
  %4 = trunc i64 %1 to i32, !insn.addr !306
  %5 = sub i32 %3, %4, !insn.addr !306
  %6 = xor i64 %2, %1
  %7 = trunc i64 %6 to i32, !insn.addr !306
  %8 = xor i32 %5, %3, !insn.addr !306
  %9 = and i32 %8, %7, !insn.addr !306
  %10 = icmp slt i32 %9, 0, !insn.addr !306
  %11 = icmp slt i32 %5, 0, !insn.addr !306
  %12 = icmp eq i1 %11, %10, !insn.addr !307
  %.v = select i1 %12, i64 %2, i64 %1
  %13 = trunc i64 %.v to i32, !insn.addr !307
  ret i32 %13, !insn.addr !308

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_238c:
  %0 = alloca i128
  %1 = alloca double
  %2 = load double, double* %1
  %3 = load i128, i128* %0
  call void @__asm_fcmpe(double %2, double %arg2), !insn.addr !309
  %4 = trunc i128 %3 to i64, !insn.addr !310
  %5 = bitcast i64 %4 to double, !insn.addr !310
  ret double %5, !insn.addr !310

; uselistorder directives
  uselistorder void (double, double)* @__asm_fcmpe, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_2398:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = inttoptr i64 %2 to i32*, !insn.addr !311
  store i32 %3, i32* %5, align 4, !insn.addr !311
  %6 = inttoptr i64 %1 to i32*, !insn.addr !312
  store i32 %4, i32* %6, align 4, !insn.addr !312
  ret void, !insn.addr !313

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev() local_unnamed_addr {
dec_label_pc_23ac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !314
  %3 = inttoptr i64 %2 to i32*, !insn.addr !314
  store i32 0, i32* %3, align 4, !insn.addr !314
  ret i64 %1, !insn.addr !315

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_23b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !316
  %4 = inttoptr i64 %3 to i32*, !insn.addr !316
  %5 = load i32, i32* %4, align 4, !insn.addr !316
  %6 = icmp sgt i32 %5, 9, !insn.addr !317
  br i1 %6, label %dec_label_pc_23cc, label %dec_label_pc_23c0, !insn.addr !317

dec_label_pc_23c0:                                ; preds = %dec_label_pc_23b4
  %7 = zext i32 %5 to i64, !insn.addr !316
  %8 = add i32 %5, 1, !insn.addr !318
  store i32 %8, i32* %4, align 4, !insn.addr !319
  %9 = trunc i64 %1 to i32, !insn.addr !320
  %10 = mul i64 %7, 4, !insn.addr !320
  %11 = and i64 %10, 4294967292, !insn.addr !320
  %12 = add i64 %11, %2, !insn.addr !320
  %13 = inttoptr i64 %12 to i32*, !insn.addr !320
  store i32 %9, i32* %13, align 4, !insn.addr !320
  br label %dec_label_pc_23cc, !insn.addr !320

dec_label_pc_23cc:                                ; preds = %dec_label_pc_23c0, %dec_label_pc_23b4
  ret i64 %2, !insn.addr !321

; uselistorder directives
  uselistorder i32 %5, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !322
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = icmp slt i32 %3, 0, !insn.addr !322
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !322
  br i1 %4, label %dec_label_pc_23e4, label %dec_label_pc_23d4, !insn.addr !322

dec_label_pc_23d4:                                ; preds = %dec_label_pc_23d0
  %5 = add i64 %2, 40, !insn.addr !323
  %6 = inttoptr i64 %5 to i32*, !insn.addr !323
  %7 = load i32, i32* %6, align 4, !insn.addr !323
  %8 = zext i32 %7 to i64, !insn.addr !323
  %9 = icmp slt i64 %1, %8, !insn.addr !324
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !324
  br i1 %9, label %dec_label_pc_23e0, label %dec_label_pc_23e4, !insn.addr !324

dec_label_pc_23e0:                                ; preds = %dec_label_pc_23d4
  %10 = mul i64 %1, 4, !insn.addr !325
  %11 = and i64 %10, 4294967292, !insn.addr !325
  %12 = add i64 %11, %2, !insn.addr !325
  %13 = inttoptr i64 %12 to i32*, !insn.addr !325
  %14 = load i32, i32* %13, align 4, !insn.addr !325
  %15 = zext i32 %14 to i64, !insn.addr !325
  store i64 %15, i64* %storemerge.reg2mem, !insn.addr !325
  br label %dec_label_pc_23e4, !insn.addr !325

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23d0, %dec_label_pc_23d4, %dec_label_pc_23e0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !326

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_23e4, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_23f0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !327
  %3 = inttoptr i64 %2 to i32*, !insn.addr !327
  %4 = load i32, i32* %3, align 4, !insn.addr !327
  %5 = zext i32 %4 to i64, !insn.addr !327
  ret i64 %5, !insn.addr !328
}

define i64 @_ZN9ContainerIdEC1Ev() local_unnamed_addr {
dec_label_pc_23f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !329
  %3 = inttoptr i64 %2 to i32*, !insn.addr !329
  store i32 0, i32* %3, align 4, !insn.addr !329
  ret i64 %1, !insn.addr !330

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_2400:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %d0 = alloca double, align 8
  %2 = add i64 %1, 80, !insn.addr !331
  %3 = inttoptr i64 %2 to i32*, !insn.addr !331
  %4 = load i32, i32* %3, align 4, !insn.addr !331
  %5 = icmp sgt i32 %4, 9, !insn.addr !332
  br i1 %5, label %dec_label_pc_2418, label %dec_label_pc_240c, !insn.addr !332

dec_label_pc_240c:                                ; preds = %dec_label_pc_2400
  %6 = zext i32 %4 to i64, !insn.addr !331
  %7 = add i32 %4, 1, !insn.addr !333
  store i32 %7, i32* %3, align 4, !insn.addr !334
  %8 = load double, double* %d0, align 8
  %9 = bitcast double %8 to i64
  %10 = mul i64 %6, 8, !insn.addr !335
  %11 = and i64 %10, 4294967288, !insn.addr !335
  %12 = add i64 %11, %1, !insn.addr !335
  %13 = inttoptr i64 %12 to i64*
  store i64 %9, i64* %13, align 8
  br label %dec_label_pc_2418, !insn.addr !335

dec_label_pc_2418:                                ; preds = %dec_label_pc_240c, %dec_label_pc_2400
  ret i64 %1, !insn.addr !336

; uselistorder directives
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i64 %1, { 1, 2, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_241c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !337
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_243c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !338
  %3 = inttoptr i64 %2 to i32*, !insn.addr !338
  %4 = load i32, i32* %3, align 4, !insn.addr !338
  %5 = zext i32 %4 to i64, !insn.addr !338
  ret i64 %5, !insn.addr !339
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev() local_unnamed_addr {
dec_label_pc_2444:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !340
  br i1 %2, label %dec_label_pc_2454, label %dec_label_pc_244c, !insn.addr !340

dec_label_pc_244c:                                ; preds = %dec_label_pc_2444
  %3 = inttoptr i64 %1 to i64*, !insn.addr !341
  %4 = call i64 @_ZdlPvm(i64* %3, i64 4), !insn.addr !341
  ret i64 %4, !insn.addr !341

dec_label_pc_2454:                                ; preds = %dec_label_pc_2444
  ret i64 0, !insn.addr !342

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4, { 2, 0, 1, 3, 4 }
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev() local_unnamed_addr {
dec_label_pc_2458:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !343
  br i1 %3, label %dec_label_pc_2464, label %dec_label_pc_2460, !insn.addr !343

dec_label_pc_2460:                                ; preds = %dec_label_pc_2458
  %4 = inttoptr i64 %2 to i64*, !insn.addr !344
  %5 = and i64 %1, 4294967295
  %6 = inttoptr i64 %5 to i64*, !insn.addr !344
  call void @_ZdaPv(i64* %4, i64* %6), !insn.addr !344
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !344

dec_label_pc_2464:                                ; preds = %dec_label_pc_2458
  ret i64 0, !insn.addr !345

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32* @0, { 0, 4, 5, 1, 2, 3 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 4, 0, 15, 1, 2, 16, 17, 3 }
  uselistorder i64 4294967295, { 1, 2, 3, 0, 4, 5 }
  uselistorder i64 0, { 2, 59, 3, 60, 1, 0, 42, 41, 43, 44, 8, 9, 6, 7, 10, 11, 38, 39, 58, 4, 61, 5, 40, 45, 46, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 }
}

define i64 @_ZN14DiamondDerivedD4Ev() local_unnamed_addr {
dec_label_pc_2468:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !346
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !347
  %5 = icmp eq i32 %4, 0, !insn.addr !347
  %storemerge2 = select i1 %5, i64 %1, i64 ptrtoint (%vtable_13ac8_type* @global_var_13ac8 to i64)
  %6 = inttoptr i64 %3 to i64*, !insn.addr !348
  store i64 %storemerge2, i64* %6, align 8, !insn.addr !348
  br i1 %5, label %dec_label_pc_24a4, label %dec_label_pc_249c, !insn.addr !349

dec_label_pc_249c:                                ; preds = %dec_label_pc_2468
  %7 = add i64 %3, 32, !insn.addr !350
  %8 = inttoptr i64 %7 to i64*, !insn.addr !350
  store i64 ptrtoint (i64* @global_var_13b30 to i64), i64* %8, align 8, !insn.addr !350
  store i64 ptrtoint (i64* @global_var_13af8 to i64), i64* %storemerge.reg2mem
  br label %dec_label_pc_24a8

dec_label_pc_24a4:                                ; preds = %dec_label_pc_2468
  %9 = add i64 %storemerge2, -24, !insn.addr !351
  %10 = inttoptr i64 %9 to i64*, !insn.addr !351
  %11 = load i64, i64* %10, align 8, !insn.addr !351
  %12 = add i64 %1, 40, !insn.addr !352
  %13 = inttoptr i64 %12 to i64*, !insn.addr !352
  %14 = load i64, i64* %13, align 8, !insn.addr !352
  %15 = add i64 %11, %3, !insn.addr !350
  %16 = inttoptr i64 %15 to i64*, !insn.addr !350
  store i64 %14, i64* %16, align 8, !insn.addr !350
  %17 = add i64 %1, 48, !insn.addr !353
  %18 = inttoptr i64 %17 to i64*, !insn.addr !353
  %19 = load i64, i64* %18, align 8, !insn.addr !353
  store i64 %19, i64* %storemerge.reg2mem, !insn.addr !353
  br label %dec_label_pc_24a8, !insn.addr !353

dec_label_pc_24a8:                                ; preds = %dec_label_pc_249c, %dec_label_pc_24a4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %20 = add i64 %1, 24, !insn.addr !354
  %21 = add i64 %1, 8, !insn.addr !355
  %22 = add i64 %3, 16, !insn.addr !356
  %23 = inttoptr i64 %22 to i64*, !insn.addr !356
  store i64 %storemerge.reload, i64* %23, align 8, !insn.addr !356
  %24 = select i1 %5, i64 %20, i64 80528, !insn.addr !357
  %25 = call i64 @_ZN7MiddleBD2Ev(i64 %22, i64 %24, i64 %20), !insn.addr !358
  %26 = inttoptr i64 %21 to i64*
  %27 = select i1 %5, i64* %26, i64* inttoptr (i64 80512 to i64*), !insn.addr !359
  %28 = call i64 @_ZN7MiddleAD2Ev(i64* %6, i64* %27), !insn.addr !359
  ret i64 %28, !insn.addr !359

; uselistorder directives
  uselistorder i64 %20, { 1, 0 }
  uselistorder i64 %3, { 2, 3, 1, 0 }
  uselistorder i64 %1, { 3, 4, 2, 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 16, { 10, 0, 1, 4, 5, 2, 3, 6, 7, 8, 9, 11 }
  uselistorder i64 8, { 13, 0, 11, 12, 5, 6, 7, 1, 2, 3, 10, 14, 15, 8, 9, 4 }
  uselistorder i64 40, { 5, 2, 3, 6, 4, 0, 1 }
  uselistorder i64 -24, { 4, 2, 3, 5, 0, 1 }
  uselistorder i64 ()* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i32 0, { 7, 3, 0, 4, 8, 9, 5, 6, 1, 2 }
  uselistorder label %dec_label_pc_24a8, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_2518:
  %0 = call i64 @_ZN14DiamondDerivedD4Ev(), !insn.addr !360
  ret i64 %0, !insn.addr !360
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2524:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !361
  %3 = inttoptr i64 %2 to i64*, !insn.addr !362
  %4 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %3), !insn.addr !362
  ret i64 %4, !insn.addr !362
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_252c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !363
  %3 = inttoptr i64 %2 to i64*, !insn.addr !363
  %4 = load i64, i64* %3, align 8, !insn.addr !363
  %5 = add i64 %4, %1, !insn.addr !364
  %6 = inttoptr i64 %5 to i64*, !insn.addr !365
  %7 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %6), !insn.addr !365
  ret i64 %7, !insn.addr !365

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD0Ev() {
dec_label_pc_253c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !366
  %3 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %2), !insn.addr !366
  %4 = call i64 @_ZdlPvm(i64* %2, i64 48), !insn.addr !367
  ret i64 %4, !insn.addr !367

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 9, 0, 8, 7, 6, 5, 4, 3, 2, 1, 10 }
  uselistorder i64 (i64*)* @_ZN14DiamondDerivedD1Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_2564:
  %0 = call i64 @_ZN14DiamondDerivedD0Ev(), !insn.addr !368
  ret i64 %0, !insn.addr !368
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_256c:
  %0 = call i64 @_ZN14DiamondDerivedD0Ev(), !insn.addr !369
  ret i64 %0, !insn.addr !369

; uselistorder directives
  uselistorder i64 ()* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
}

define i64 @_ZN14DiamondDerivedD2Ev() local_unnamed_addr {
dec_label_pc_257c:
  %0 = call i64 @_ZN14DiamondDerivedD4Ev(), !insn.addr !370
  ret i64 %0, !insn.addr !370

; uselistorder directives
  uselistorder i64 ()* @_ZN14DiamondDerivedD4Ev, { 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_2588:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !371

; uselistorder directives
  uselistorder i32 1, { 46, 45, 44, 43, 48, 42, 41, 40, 39, 38, 82, 77, 37, 36, 35, 49, 34, 83, 33, 32, 31, 47, 0, 30, 51, 50, 29, 53, 52, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 79, 78, 54, 55, 56, 3, 80, 57, 58, 81, 2, 1, 64, 63, 62, 61, 60, 59 }
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

!0 = !{i64 5700}
!1 = !{i64 5708}
!2 = !{i64 5756}
!3 = !{i64 5772}
!4 = !{i64 5788}
!5 = !{i64 5804}
!6 = !{i64 5820}
!7 = !{i64 5836}
!8 = !{i64 5852}
!9 = !{i64 5868}
!10 = !{i64 5884}
!11 = !{i64 5900}
!12 = !{i64 5916}
!13 = !{i64 5932}
!14 = !{i64 5948}
!15 = !{i64 5964}
!16 = !{i64 5980}
!17 = !{i64 5996}
!18 = !{i64 6012}
!19 = !{i64 6028}
!20 = !{i64 6044}
!21 = !{i64 6076}
!22 = !{i64 6092}
!23 = !{i64 6108}
!24 = !{i64 6124}
!25 = !{i64 6144}
!26 = !{i64 6164}
!27 = !{i64 6172}
!28 = !{i64 6184}
!29 = !{i64 6188}
!30 = !{i64 6196}
!31 = !{i64 6200}
!32 = !{i64 6220}
!33 = !{i64 6224}
!34 = !{i64 6228}
!35 = !{i64 6240}
!36 = !{i64 6208}
!37 = !{i64 6212}
!38 = !{i64 6216}
!39 = !{i64 6252}
!40 = !{i64 6256}
!41 = !{i64 6260}
!42 = !{i64 6268}
!43 = !{i64 6276}
!44 = !{i64 6288}
!45 = !{i64 6296}
!46 = !{i64 6304}
!47 = !{i64 6312}
!48 = !{i64 6316}
!49 = !{i64 6324}
!50 = !{i64 6328}
!51 = !{i64 6348}
!52 = !{i64 6360}
!53 = !{i64 6372}
!54 = !{i64 6404}
!55 = !{i64 6432}
!56 = !{i64 6436}
!57 = !{i64 6496}
!58 = !{i64 6508}
!59 = !{i64 6512}
!60 = !{i64 6520}
!61 = !{i64 6524}
!62 = !{i64 6528}
!63 = !{i64 6532}
!64 = !{i64 6588}
!65 = !{i64 6648}
!66 = !{i64 6656}
!67 = !{i64 6672}
!68 = !{i64 6676}
!69 = !{i64 6684}
!70 = !{i64 6688}
!71 = !{i64 6696}
!72 = !{i64 6700}
!73 = !{i64 6704}
!74 = !{i64 6712}
!75 = !{i64 6724}
!76 = !{i64 6736}
!77 = !{i64 6740}
!78 = !{i64 6756}
!79 = !{i64 6764}
!80 = !{i64 6788}
!81 = !{i64 6796}
!82 = !{i64 6804}
!83 = !{i64 6812}
!84 = !{i64 6816}
!85 = !{i64 6824}
!86 = !{i64 6828}
!87 = !{i64 6836}
!88 = !{i64 6844}
!89 = !{i64 6856}
!90 = !{i64 6860}
!91 = !{i64 6864}
!92 = !{i64 6868}
!93 = !{i64 6884}
!94 = !{i64 6888}
!95 = !{i64 6900}
!96 = !{i64 6908}
!97 = !{i64 6960}
!98 = !{i64 6976}
!99 = !{i64 6984}
!100 = !{i64 6988}
!101 = !{i64 6992}
!102 = !{i64 7000}
!103 = !{i64 7004}
!104 = !{i64 7012}
!105 = !{i64 7016}
!106 = !{i64 7028}
!107 = !{i64 7036}
!108 = !{i64 7044}
!109 = !{i64 7048}
!110 = !{i64 7060}
!111 = !{i64 7072}
!112 = !{i64 7092}
!113 = !{i64 7108}
!114 = !{i64 7140}
!115 = !{i64 7164}
!116 = !{i64 7172}
!117 = !{i64 7180}
!118 = !{i64 7184}
!119 = !{i64 7192}
!120 = !{i64 7196}
!121 = !{i64 7212}
!122 = !{i64 7216}
!123 = !{i64 7228}
!124 = !{i64 7240}
!125 = !{i64 7276}
!126 = !{i64 7288}
!127 = !{i64 7316}
!128 = !{i64 7324}
!129 = !{i64 7328}
!130 = !{i64 7336}
!131 = !{i64 7340}
!132 = !{i64 7356}
!133 = !{i64 7364}
!134 = !{i64 7396}
!135 = !{i64 7412}
!136 = !{i64 7420}
!137 = !{i64 7428}
!138 = !{i64 7440}
!139 = !{i64 7452}
!140 = !{i64 7456}
!141 = !{i64 7460}
!142 = !{i64 7464}
!143 = !{i64 7472}
!144 = !{i64 7468}
!145 = !{i64 7484}
!146 = !{i64 7496}
!147 = !{i64 7516}
!148 = !{i64 7520}
!149 = !{i64 7532}
!150 = !{i64 7524}
!151 = !{i64 7540}
!152 = !{i64 7576}
!153 = !{i64 7608}
!154 = !{i64 7636}
!155 = !{i64 7652}
!156 = !{i64 7728}
!157 = !{i64 7748}
!158 = !{i64 7764}
!159 = !{i64 7776}
!160 = !{i64 7784}
!161 = !{i64 7800}
!162 = !{i64 7812}
!163 = !{i64 7820}
!164 = !{i64 7828}
!165 = !{i64 7836}
!166 = !{i64 7844}
!167 = !{i64 7852}
!168 = !{i64 7860}
!169 = !{i64 7864}
!170 = !{i64 7872}
!171 = !{i64 7876}
!172 = !{i64 7888}
!173 = !{i64 7896}
!174 = !{i64 7904}
!175 = !{i64 7924}
!176 = !{i64 7940}
!177 = !{i64 7952}
!178 = !{i64 7972}
!179 = !{i64 7984}
!180 = !{i64 8012}
!181 = !{i64 8032}
!182 = !{i64 8044}
!183 = !{i64 8052}
!184 = !{i64 8060}
!185 = !{i64 8064}
!186 = !{i64 8072}
!187 = !{i64 8076}
!188 = !{i64 8036}
!189 = !{i64 8092}
!190 = !{i64 8112}
!191 = !{i64 8116}
!192 = !{i64 8136}
!193 = !{i64 8140}
!194 = !{i64 8160}
!195 = !{i64 8164}
!196 = !{i64 8184}
!197 = !{i64 8188}
!198 = !{i64 8208}
!199 = !{i64 8212}
!200 = !{i64 8232}
!201 = !{i64 8236}
!202 = !{i64 8256}
!203 = !{i64 8260}
!204 = !{i64 8280}
!205 = !{i64 8284}
!206 = !{i64 8304}
!207 = !{i64 8308}
!208 = !{i64 8328}
!209 = !{i64 8332}
!210 = !{i64 8352}
!211 = !{i64 8356}
!212 = !{i64 8376}
!213 = !{i64 8380}
!214 = !{i64 8404}
!215 = !{i64 8408}
!216 = !{i64 8412}
!217 = !{i64 8424}
!218 = !{i64 8428}
!219 = !{i64 8432}
!220 = !{i64 8436}
!221 = !{i64 8440}
!222 = !{i64 8452}
!223 = !{i64 8460}
!224 = !{i64 8468}
!225 = !{i64 8476}
!226 = !{i64 8484}
!227 = !{i64 8488}
!228 = !{i64 8496}
!229 = !{i64 8500}
!230 = !{i64 8504}
!231 = !{i64 8508}
!232 = !{i64 8512}
!233 = !{i64 8528}
!234 = !{i64 8536}
!235 = !{i64 8540}
!236 = !{i64 8544}
!237 = !{i64 8548}
!238 = !{i64 8552}
!239 = !{i64 8568}
!240 = !{i64 8576}
!241 = !{i64 8580}
!242 = !{i64 8584}
!243 = !{i64 8588}
!244 = !{i64 8592}
!245 = !{i64 8608}
!246 = !{i64 8616}
!247 = !{i64 8628}
!248 = !{i64 8640}
!249 = !{i64 8644}
!250 = !{i64 8652}
!251 = !{i64 8664}
!252 = !{i64 8668}
!253 = !{i64 8680}
!254 = !{i64 8684}
!255 = !{i64 8696}
!256 = !{i64 8708}
!257 = !{i64 8712}
!258 = !{i64 8720}
!259 = !{i64 8732}
!260 = !{i64 8736}
!261 = !{i64 8748}
!262 = !{i64 8752}
!263 = !{i64 8760}
!264 = !{i64 8768}
!265 = !{i64 8772}
!266 = !{i64 8776}
!267 = !{i64 8780}
!268 = !{i64 8784}
!269 = !{i64 8788}
!270 = !{i64 8796}
!271 = !{i64 8804}
!272 = !{i64 8812}
!273 = !{i64 8816}
!274 = !{i64 8820}
!275 = !{i64 8828}
!276 = !{i64 8836}
!277 = !{i64 8844}
!278 = !{i64 8856}
!279 = !{i64 8868}
!280 = !{i64 8876}
!281 = !{i64 8884}
!282 = !{i64 8888}
!283 = !{i64 8892}
!284 = !{i64 8904}
!285 = !{i64 8916}
!286 = !{i64 8924}
!287 = !{i64 8932}
!288 = !{i64 8936}
!289 = !{i64 8940}
!290 = !{i64 8944}
!291 = !{i64 8952}
!292 = !{i64 8956}
!293 = !{i64 8960}
!294 = !{i64 8964}
!295 = !{i64 8968}
!296 = !{i64 8972}
!297 = !{i64 9012}
!298 = !{i64 9016}
!299 = !{i64 9024}
!300 = !{i64 9028}
!301 = !{i64 9032}
!302 = !{i64 9036}
!303 = !{i64 9040}
!304 = !{i64 9044}
!305 = !{i64 9084}
!306 = !{i64 9088}
!307 = !{i64 9092}
!308 = !{i64 9096}
!309 = !{i64 9100}
!310 = !{i64 9108}
!311 = !{i64 9120}
!312 = !{i64 9124}
!313 = !{i64 9128}
!314 = !{i64 9132}
!315 = !{i64 9136}
!316 = !{i64 9140}
!317 = !{i64 9148}
!318 = !{i64 9152}
!319 = !{i64 9156}
!320 = !{i64 9160}
!321 = !{i64 9164}
!322 = !{i64 9168}
!323 = !{i64 9172}
!324 = !{i64 9180}
!325 = !{i64 9184}
!326 = !{i64 9188}
!327 = !{i64 9200}
!328 = !{i64 9204}
!329 = !{i64 9208}
!330 = !{i64 9212}
!331 = !{i64 9216}
!332 = !{i64 9224}
!333 = !{i64 9228}
!334 = !{i64 9232}
!335 = !{i64 9236}
!336 = !{i64 9240}
!337 = !{i64 9264}
!338 = !{i64 9276}
!339 = !{i64 9280}
!340 = !{i64 9288}
!341 = !{i64 9296}
!342 = !{i64 9300}
!343 = !{i64 9308}
!344 = !{i64 9312}
!345 = !{i64 9316}
!346 = !{i64 9320}
!347 = !{i64 9348}
!348 = !{i64 9356}
!349 = !{i64 9360}
!350 = !{i64 9372}
!351 = !{i64 9364}
!352 = !{i64 9368}
!353 = !{i64 9380}
!354 = !{i64 9388}
!355 = !{i64 9396}
!356 = !{i64 9400}
!357 = !{i64 9412}
!358 = !{i64 9416}
!359 = !{i64 9452}
!360 = !{i64 9504}
!361 = !{i64 9508}
!362 = !{i64 9512}
!363 = !{i64 9520}
!364 = !{i64 9524}
!365 = !{i64 9528}
!366 = !{i64 9548}
!367 = !{i64 9568}
!368 = !{i64 9576}
!369 = !{i64 9592}
!370 = !{i64 9604}
!371 = !{i64 9624}
