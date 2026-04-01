source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%vtable_17858_type = type { i64 (i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17898_type = type { i64 (i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%vtable_178e0_type = type { i64 ()*, void (i64*)*, void (i64*)*, i64 ()* }
%vtable_17990_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_179b8_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_179e8_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17ab8_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17b58_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17c18_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17c48_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17cc0_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_17d30_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_17d58_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_17d80_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%_Unwind_Exception = type { i32 }

@global_var_18000 = global i64 6560
@global_var_18008 = local_unnamed_addr global i64 6560
@global_var_18010 = local_unnamed_addr global i64 6560
@global_var_18018 = local_unnamed_addr global i64 6560
@global_var_18020 = local_unnamed_addr global i64 6560
@global_var_18028 = local_unnamed_addr global i64 6560
@global_var_18030 = local_unnamed_addr global i64 6560
@global_var_18038 = local_unnamed_addr global i64 6560
@global_var_18040 = local_unnamed_addr global i64 6560
@global_var_18048 = local_unnamed_addr global i64 6560
@global_var_18050 = local_unnamed_addr global i64 6560
@global_var_18058 = local_unnamed_addr global i64 6560
@global_var_18060 = local_unnamed_addr global i64 6560
@global_var_18068 = local_unnamed_addr global i64 6560
@global_var_18070 = local_unnamed_addr global i64 6560
@global_var_18078 = local_unnamed_addr global i64 6560
@global_var_18080 = local_unnamed_addr global i64 6560
@global_var_18088 = local_unnamed_addr global i64 6560
@global_var_18090 = local_unnamed_addr global i64 6560
@global_var_180a0 = local_unnamed_addr global i64 6560
@global_var_180a8 = local_unnamed_addr global i64 6560
@global_var_180b0 = local_unnamed_addr global i64 6560
@global_var_180b8 = local_unnamed_addr global i64 6560
@global_var_180f4 = global i64 0
@global_var_180c8 = external local_unnamed_addr global i64
@global_var_17fb8 = local_unnamed_addr global i64 11152
@global_var_180f0 = global i64 0
@global_var_17fc0 = local_unnamed_addr global i64 0
@global_var_1cb4 = local_unnamed_addr constant i64 4108341004048793632
@global_var_4bd0 = constant [5 x i8] c"Test\00"
@global_var_17fb0 = local_unnamed_addr global i64 0
@global_var_2434 = local_unnamed_addr constant i64 3026704719872524368
@global_var_2460 = local_unnamed_addr constant i64 -5179557760743768056
@global_var_247c = local_unnamed_addr constant i64 3026704719872524350
@global_var_24ac = local_unnamed_addr constant i64 -5179628129487945720
@global_var_177f0 = local_unnamed_addr global i64 0
@global_var_24e4 = local_unnamed_addr constant i64 3026704719872524324
@global_var_17818 = global i64 0
@global_var_17830 = global i64 0
@global_var_17808 = global i64 0
@global_var_1234 = global i64 418329814630400
@global_var_180f9 = external global i64
@global_var_17848 = local_unnamed_addr global i64 0
@global_var_17888 = local_unnamed_addr global i64 0
@global_var_178d0 = local_unnamed_addr global i64 0
@global_var_17910 = global i64 15508
@global_var_17a68 = external global i64
@global_var_17af0 = local_unnamed_addr global i64 16036
@global_var_17b90 = local_unnamed_addr global i64 16280
@global_var_17a50 = global i64 16536
@global_var_17a18 = global i64 16464
@global_var_17a70 = external global i64
@global_var_17a80 = external global i64
@global_var_179d0 = local_unnamed_addr global i64 32
@global_var_17d20 = local_unnamed_addr global i64 0
@global_var_17d70 = local_unnamed_addr global i64 0
@global_var_3ab8 = local_unnamed_addr constant i64 1918278253378797576
@global_var_4d51 = constant [5 x i8] c"Base\00"
@global_var_4d56 = constant [8 x i8] c"Derived\00"
@global_var_17980 = local_unnamed_addr global i64 0
@global_var_179a8 = local_unnamed_addr global i64 0
@global_var_17c08 = local_unnamed_addr global i64 0
@global_var_17c80 = local_unnamed_addr global i64 16036
@global_var_17cf8 = local_unnamed_addr global i64 16280
@global_var_17d48 = local_unnamed_addr global i64 0
@0 = external global i32
@global_var_3e8 = global i32 0
@global_var_4bc8 = local_unnamed_addr constant double 0x51EB851F40091EB8
@1 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\0A\00"
@global_var_4bd5 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_4bfa = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_4c18 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4c34 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_4c50 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_4c6c = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_4c89 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_4ca5 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_4cc1 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_4cdd = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_4cf9 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_4d16 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_4d33 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_180f8 = local_unnamed_addr global i32 0
@global_var_17858 = global %vtable_17858_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, void (i64*)* @_ZN4BaseD2Ev, void (i64*)* @_ZN4BaseD0Ev }
@global_var_17898 = global %vtable_17898_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, void (i64*)* @_ZN7DerivedD2Ev, void (i64*)* @_ZN7DerivedD0Ev }
@global_var_178e0 = global %vtable_178e0_type { i64 ()* @_ZN12MultiDerived5funcAEv, void (i64*)* @_ZN12MultiDerivedD2Ev, void (i64*)* @_ZN12MultiDerivedD0Ev, i64 ()* @_ZN12MultiDerived5funcBEv }
@global_var_17990 = global %vtable_17990_type { i64 ()* @_ZN5BaseA5funcAEv, void (i64*)* @_ZN5BaseAD2Ev, void (i64*)* @_ZN5BaseAD0Ev }
@global_var_179b8 = global %vtable_179b8_type { i64 ()* @_ZN5BaseB5funcBEv, void (i64*)* @_ZN5BaseBD2Ev, void (i64*)* @_ZN5BaseBD0Ev }
@global_var_179e8 = global %vtable_179e8_type { i64 ()* @_ZN14DiamondDerived4funcEv, void (i64*)* @_ZN14DiamondDerivedD1Ev, void (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_17ab8 = local_unnamed_addr global %vtable_17ab8_type { i64 ()* @_ZN7MiddleA4funcEv, void (i64*)* @_ZN7MiddleAD1Ev, void (i64*)* @_ZN7MiddleAD0Ev }
@global_var_17b58 = local_unnamed_addr global %vtable_17b58_type { i64 ()* @_ZN7MiddleB4funcEv, void (i64*)* @_ZN7MiddleBD1Ev, void (i64*)* @_ZN7MiddleBD0Ev }
@global_var_17c18 = global %vtable_17c18_type { i64 ()* @_ZN11VirtualBase4funcEv, void (i64*)* @_ZN11VirtualBaseD2Ev, void (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_17c48 = local_unnamed_addr global %vtable_17c48_type { i64 ()* @_ZN7MiddleA4funcEv, void (i64*)* @_ZN7MiddleAD1Ev, void (i64*)* @_ZN7MiddleAD0Ev }
@global_var_17cc0 = local_unnamed_addr global %vtable_17cc0_type { i64 ()* @_ZN7MiddleB4funcEv, void (i64*)* @_ZN7MiddleBD1Ev, void (i64*)* @_ZN7MiddleBD0Ev }
@global_var_17d30 = global %vtable_17d30_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_17d58 = global %vtable_17d58_type { void (i64*)* @_ZN8RTTIBaseD2Ev, void (i64*)* @_ZN8RTTIBaseD0Ev, i64 ()* @_ZNK8RTTIBase7getTypeEv }
@global_var_17d80 = global %vtable_17d80_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1988:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @function_19c0(i64 %arg1) local_unnamed_addr {
dec_label_pc_19c0:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !2
  ret i64 %0, !insn.addr !2
}

define i64 @function_19d0() local_unnamed_addr {
dec_label_pc_19d0:
  %0 = call i64 @_ZSt9terminatev(), !insn.addr !3
  ret i64 %0, !insn.addr !3
}

define i32 @function_19e0(i8* %s) local_unnamed_addr {
dec_label_pc_19e0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i64 @function_19f0(i64 %arg1) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !5
  ret i64 %0, !insn.addr !5
}

define i64 @function_1a00(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_1a10(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = call i64 @__cxa_finalize.6(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_1a20(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1a20:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_1a30(i64* %ptr) local_unnamed_addr {
dec_label_pc_1a30:
  call void @_ZdlPv(i64* %ptr), !insn.addr !9
  ret void, !insn.addr !9
}

define i64 @function_1a40(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a40:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i8* @function_1a50(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define i64 @function_1a60(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a60:
  %0 = call i64 @__cxa_bad_typeid(i64 %arg1), !insn.addr !12
  ret i64 %0, !insn.addr !12
}

define i64 @function_1a70(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i32 @function_1a80(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1a80:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define void @function_1a90(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1a90:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !15
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !15
  ret void, !insn.addr !15
}

define i32 @function_1aa0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1aa0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i64 @function_1ab0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = call i64 @__cxa_rethrow(i64 %arg1), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i64 @function_1ac0() local_unnamed_addr {
dec_label_pc_1ac0:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_1ad0() local_unnamed_addr {
dec_label_pc_1ad0:
  call void @abort(), !insn.addr !19
  ret void, !insn.addr !19
}

define i64 @function_1ae0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ae0:
  %0 = call i64 @__cxa_end_catch(i64 %arg1), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define i64 @function_1b00(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1b00:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define void @function_1b10(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1b10:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !22
  ret void, !insn.addr !22
}

define i64 @function_1b20(i64 %arg1) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = call i64 @__gmon_start__.19(i64 %arg1), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define i32 @function_1b30(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1b30:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define void @__cxx_global_var_init() local_unnamed_addr {
dec_label_pc_1b40:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !25
  %1 = load i64, i64* inttoptr (i64 98272 to i64*), align 32, !insn.addr !26
  %2 = inttoptr i64 %1 to void (i64*)*, !insn.addr !27
  %3 = call i32 @__cxa_atexit(void (i64*)* %2, i64* nonnull @global_var_180f4, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_18000 to i64), i64 200) to i64*)), !insn.addr !27
  ret void, !insn.addr !28
}

define void @_GLOBAL__sub_I_5_1.cpp() local_unnamed_addr {
dec_label_pc_1b80:
  call void @__cxx_global_var_init(), !insn.addr !29
  ret void, !insn.addr !30
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_17fb8, align 8, !insn.addr !31
  %3 = trunc i64 %arg1 to i32, !insn.addr !32
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !32
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !32
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !32
  call void @abort(), !insn.addr !33
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !33
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1bf4:
  %0 = load i64, i64* inttoptr (i64 98256 to i64*), align 16, !insn.addr !34
  %1 = icmp eq i64 %0, 0, !insn.addr !35
  br i1 %1, label %dec_label_pc_1c04, label %dec_label_pc_1c00, !insn.addr !35

dec_label_pc_1c00:                                ; preds = %dec_label_pc_1bf4
  %2 = call i64 @__gmon_start__.19(i64 %0), !insn.addr !36
  ret i64 %2, !insn.addr !36

dec_label_pc_1c04:                                ; preds = %dec_label_pc_1bf4
  ret i64 0, !insn.addr !37
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1c10:
  ret i64 ptrtoint (i64* @global_var_180f0 to i64), !insn.addr !38
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1c40:
  ret i64 ptrtoint (i64* @global_var_180f0 to i64), !insn.addr !39
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1c80:
  %x0.0.reg2mem = alloca i64, !insn.addr !40
  %0 = load i8, i8* bitcast (i64* @global_var_180f0 to i8*), align 8, !insn.addr !41
  %1 = zext i8 %0 to i64, !insn.addr !41
  %2 = icmp eq i8 %0, 0, !insn.addr !42
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !42
  br i1 %2, label %dec_label_pc_1c98, label %dec_label_pc_1cbc, !insn.addr !42

dec_label_pc_1c98:                                ; preds = %dec_label_pc_1c80
  %3 = load i64, i64* @global_var_17fc0, align 8, !insn.addr !43
  %4 = icmp eq i64 %3, 0, !insn.addr !44
  br i1 %4, label %dec_label_pc_1cb0, label %dec_label_pc_1ca4, !insn.addr !44

dec_label_pc_1ca4:                                ; preds = %dec_label_pc_1c98
  %5 = load i64, i64* @global_var_180c8, align 8, !insn.addr !45
  %6 = call i64 @__cxa_finalize.6(i64 %5), !insn.addr !46
  br label %dec_label_pc_1cb0, !insn.addr !46

dec_label_pc_1cb0:                                ; preds = %dec_label_pc_1ca4, %dec_label_pc_1c98
  %7 = call i64 @deregister_tm_clones(), !insn.addr !47
  store i8 1, i8* bitcast (i64* @global_var_180f0 to i8*), align 8, !insn.addr !48
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_1cbc, !insn.addr !48

dec_label_pc_1cbc:                                ; preds = %dec_label_pc_1c80, %dec_label_pc_1cb0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !49

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1cbc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1cd0:
  %0 = call i64 @register_tm_clones(), !insn.addr !50
  ret i64 %0, !insn.addr !50
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1cd4:
  %obj_-52 = alloca i64, align 8
  call void @_ZN11SimpleClassC2EiPKc(i64* nonnull %obj_-52, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_4bd0, i64 0, i64 0)), !insn.addr !51
  %0 = call i64 @_ZN11SimpleClass8setValueEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !52
  %1 = call i64 @_ZNK11SimpleClass8getValueEv(), !insn.addr !53
  %2 = trunc i64 %1 to i32, !insn.addr !54
  %3 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %obj_-52, i32 3), !insn.addr !55
  %4 = trunc i64 %3 to i32, !insn.addr !56
  %5 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !57
  %6 = trunc i64 %5 to i32, !insn.addr !58
  %7 = add i32 %4, %2, !insn.addr !59
  %8 = add i32 %7, %6, !insn.addr !60
  ret i32 %8, !insn.addr !61
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1d4c:
  %stack_var_-40 = alloca i64, align 8
  call void @_ZN14LifecycleClassC2Em(i64* nonnull %stack_var_-40, i64 5), !insn.addr !62
  %0 = call i64 @_ZNK14LifecycleClass7getDataEm(i64 ptrtoint (i32* @0 to i64)), !insn.addr !63
  %1 = trunc i64 %0 to i32, !insn.addr !64
  %2 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !65
  %3 = trunc i64 %2 to i32, !insn.addr !66
  %4 = add i32 %3, %1, !insn.addr !67
  call void @_ZN14LifecycleClassD2Ev(i64* nonnull %stack_var_-40), !insn.addr !68
  %5 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !69
  %6 = trunc i64 %5 to i32, !insn.addr !70
  %7 = mul i32 %6, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !70
  %8 = add i32 %4, %7, !insn.addr !71
  ret i32 %8, !insn.addr !72

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i64 @function_1ddc() local_unnamed_addr {
dec_label_pc_1ddc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !73
  %4 = add i64 %1, -24, !insn.addr !74
  %5 = inttoptr i64 %4 to i64*, !insn.addr !75
  call void @_ZN14LifecycleClassD2Ev(i64* %5), !insn.addr !75
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !76
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !76

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder void (i64*)* @_ZN14LifecycleClassD2Ev, { 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1dfc:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !77
  ret i32 %1, !insn.addr !77
}

define i64 @function_1e24(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e24:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !78
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1e30:
  %r1_-40 = alloca i32, align 4
  %derived_-24 = alloca i64, align 8
  call void @_ZN4BaseC2Ev(i64* nonnull %derived_-24), !insn.addr !79
  %0 = bitcast i32* %r1_-40 to i64*, !insn.addr !80
  call void @_ZN7DerivedC2Ei(i64* nonnull %0, i32 3), !insn.addr !80
  %1 = call i64 @_ZN4Base12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !81
  %2 = trunc i64 %1 to i32, !insn.addr !82
  %3 = call i64 @_ZN7Derived12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !83
  %4 = trunc i64 %3 to i32, !insn.addr !84
  %5 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %derived_-24, i32 5), !insn.addr !85
  %6 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %0, i32 5), !insn.addr !86
  %7 = add i32 %4, %2, !insn.addr !87
  %8 = add i32 %7, %5, !insn.addr !88
  %9 = add i32 %8, %6, !insn.addr !89
  call void @_ZN7DerivedD2Ev(i64* nonnull %0), !insn.addr !90
  call void @_ZN4BaseD2Ev(i64* nonnull %derived_-24), !insn.addr !91
  ret i32 %9, !insn.addr !92

; uselistorder directives
  uselistorder i64* %0, { 1, 0, 2 }
  uselistorder i32 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @function_1f14() local_unnamed_addr {
dec_label_pc_1f14:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !93
  %4 = add i64 %1, -32, !insn.addr !94
  %5 = inttoptr i64 %4 to i64*, !insn.addr !94
  %6 = add i64 %1, -36, !insn.addr !95
  %7 = inttoptr i64 %6 to i32*, !insn.addr !95
  store i32 %3, i32* %7, align 4, !insn.addr !95
  %8 = call i64 @function_1f3c(), !insn.addr !96
  ret i64 %8, !insn.addr !96

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_1f24() local_unnamed_addr {
dec_label_pc_1f24:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !97
  %4 = add i64 %1, -32, !insn.addr !98
  %5 = inttoptr i64 %4 to i64*, !insn.addr !98
  %6 = add i64 %1, -36, !insn.addr !99
  %7 = inttoptr i64 %6 to i32*, !insn.addr !99
  store i32 %3, i32* %7, align 4, !insn.addr !99
  %8 = add i64 %1, -24, !insn.addr !100
  %9 = inttoptr i64 %8 to i64*, !insn.addr !101
  call void @_ZN7DerivedD2Ev(i64* %9), !insn.addr !101
  %10 = call i64 @function_1f3c(), !insn.addr !102
  ret i64 %10, !insn.addr !102

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 ()* @function_1f3c, { 1, 0 }
}

define i64 @function_1f3c() local_unnamed_addr {
dec_label_pc_1f3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !103
  %3 = inttoptr i64 %2 to i64*, !insn.addr !104
  call void @_ZN4BaseD2Ev(i64* %3), !insn.addr !104
  %4 = add i64 %1, -32, !insn.addr !105
  %5 = inttoptr i64 %4 to i64*, !insn.addr !105
  %6 = load i64, i64* %5, align 8, !insn.addr !105
  %7 = inttoptr i64 %6 to %_Unwind_Exception*, !insn.addr !106
  call void @_Unwind_Resume(%_Unwind_Exception* %7), !insn.addr !106
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !106

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1f50:
  %pb_-48 = alloca i32*, align 8
  %0 = bitcast i32** %pb_-48 to i64*, !insn.addr !107
  call void @_ZN12MultiDerivedC2Ev(i64* nonnull %0), !insn.addr !107
  %1 = ptrtoint i32** %pb_-48 to i64, !insn.addr !108
  %2 = trunc i64 %1 to i32, !insn.addr !109
  ret i32 %2, !insn.addr !109
}

define i64 @function_1fbc() local_unnamed_addr {
dec_label_pc_1fbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !110
  %4 = add i64 %1, -52, !insn.addr !111
  %5 = inttoptr i64 %4 to i32*, !insn.addr !111
  store i32 %3, i32* %5, align 4, !insn.addr !111
  %6 = add i64 %1, -48, !insn.addr !112
  %7 = inttoptr i64 %6 to i64*, !insn.addr !112
  %8 = load i64, i64* %7, align 8, !insn.addr !112
  ret i64 %8, !insn.addr !113

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_1fdc(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1fdc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !114
  %4 = add i64 %1, -40, !insn.addr !115
  %5 = inttoptr i64 %4 to i64*, !insn.addr !115
  %6 = load i64, i64* %5, align 8, !insn.addr !115
  %7 = add i64 %1, -48, !insn.addr !116
  %8 = inttoptr i64 %7 to i64*, !insn.addr !116
  %9 = load i64, i64* %8, align 8, !insn.addr !116
  %10 = icmp eq i64 %6, %9, !insn.addr !117
  %11 = icmp ne i1 %10, true, !insn.addr !118
  %12 = zext i1 %11 to i32, !insn.addr !118
  %13 = add i64 %1, -52, !insn.addr !119
  %14 = inttoptr i64 %13 to i32*, !insn.addr !119
  %15 = load i32, i32* %14, align 4, !insn.addr !119
  %16 = add i32 %15, %3, !insn.addr !120
  %17 = add i32 %16, %12, !insn.addr !121
  %18 = add i64 %1, -32, !insn.addr !122
  %19 = inttoptr i64 %18 to i64*, !insn.addr !123
  call void @_ZN12MultiDerivedD2Ev(i64* %19), !insn.addr !123
  %20 = zext i32 %17 to i64, !insn.addr !124
  ret i64 %20, !insn.addr !125

; uselistorder directives
  uselistorder i64 %1, { 1, 0, 2, 3 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_2030() local_unnamed_addr {
dec_label_pc_2030:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !126
  %4 = add i64 %1, -32, !insn.addr !127
  %5 = inttoptr i64 %4 to i64*, !insn.addr !128
  call void @_ZN12MultiDerivedD2Ev(i64* %5), !insn.addr !128
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !129
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !129

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_2050:
  %stack_var_-64 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-64 to i64, !insn.addr !130
  call void @_ZN14DiamondDerivedC1Ev(i64* nonnull %stack_var_-64), !insn.addr !131
  %1 = load i64, i64* %stack_var_-64, align 8, !insn.addr !132
  %2 = add i64 %1, -24, !insn.addr !133
  %3 = inttoptr i64 %2 to i64*, !insn.addr !133
  %4 = load i64, i64* %3, align 8, !insn.addr !133
  %5 = add i64 %0, 8, !insn.addr !134
  %6 = add i64 %5, %4, !insn.addr !135
  %7 = inttoptr i64 %6 to i32*, !insn.addr !135
  store i32 50, i32* %7, align 4, !insn.addr !135
  %8 = load i64, i64* %stack_var_-64, align 8, !insn.addr !136
  %9 = add i64 %8, -24, !insn.addr !137
  %10 = inttoptr i64 %9 to i64*, !insn.addr !137
  %11 = load i64, i64* %10, align 8, !insn.addr !137
  %12 = add i64 %11, %0, !insn.addr !138
  %13 = trunc i64 %12 to i32, !insn.addr !139
  ret i32 %13, !insn.addr !140

; uselistorder directives
  uselistorder i64* %stack_var_-64, { 1, 2, 0, 3 }
}

define i64 @function_20c4(i64 %arg1) local_unnamed_addr {
dec_label_pc_20c4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -48, !insn.addr !141
  %3 = inttoptr i64 %2 to i64*, !insn.addr !142
  %4 = load i64, i64* %3, align 8, !insn.addr !142
  %5 = add i64 %4, -24, !insn.addr !143
  %6 = inttoptr i64 %5 to i64*, !insn.addr !143
  %7 = load i64, i64* %6, align 8, !insn.addr !143
  %8 = add i64 %1, -40, !insn.addr !144
  %9 = add i64 %8, %7, !insn.addr !145
  %10 = inttoptr i64 %9 to i32*, !insn.addr !145
  store i32 100, i32* %10, align 4, !insn.addr !145
  ret i64 %arg1, !insn.addr !146

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @function_20fc(i32 %arg1) local_unnamed_addr {
dec_label_pc_20fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !147
  %4 = add i32 %3, %arg1, !insn.addr !148
  %5 = add i64 %1, -48, !insn.addr !149
  %6 = inttoptr i64 %5 to i64*, !insn.addr !150
  call void @_ZN14DiamondDerivedD1Ev(i64* %6), !insn.addr !150
  %7 = zext i32 %4 to i64, !insn.addr !151
  ret i64 %7, !insn.addr !152

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_2134() local_unnamed_addr {
dec_label_pc_2134:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to %_Unwind_Exception*, !insn.addr !153
  %4 = add i64 %1, -48, !insn.addr !154
  %5 = inttoptr i64 %4 to i64*, !insn.addr !155
  call void @_ZN14DiamondDerivedD1Ev(i64* %5), !insn.addr !155
  call void @_Unwind_Resume(%_Unwind_Exception* %3), !insn.addr !156
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !156

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_2154:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i64, align 8
  %p3_-24 = alloca i64, align 8
  call void @_ZN5PointC2Eii(i64* nonnull %p3_-24, i32 1, i32 2), !insn.addr !157
  call void @_ZN5PointC2Eii(i64* nonnull %stack_var_-32, i32 3, i32 4), !insn.addr !158
  %2 = call i64 @_ZNK5PointplERKS_(i64* nonnull %p3_-24, i64* nonnull %stack_var_-32), !insn.addr !159
  %3 = trunc i64 %2 to i32, !insn.addr !160
  %4 = call i64 @_ZNK5PointeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !161
  %5 = urem i64 %4, 2
  %6 = icmp ne i64 %5, 0, !insn.addr !162
  %7 = call i64 @_ZN5PointppEv(), !insn.addr !163
  %8 = add i32 %1, %3, !insn.addr !164
  %9 = icmp eq i1 %6, false, !insn.addr !165
  %10 = select i1 %9, i32 10, i32 0, !insn.addr !166
  %11 = add i32 %8, %10, !insn.addr !167
  ret i32 %11, !insn.addr !168
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_21fc:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %b_-40 = alloca i32, align 4
  %a_-36 = alloca i32, align 4
  %3 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !169
  %4 = trunc i128 %2 to i64, !insn.addr !170
  %5 = bitcast i64 %4 to double, !insn.addr !170
  %6 = trunc i128 %1 to i64, !insn.addr !170
  %7 = bitcast i64 %6 to double, !insn.addr !170
  %8 = call double @_Z12template_maxIdET_S0_S0_(double %5, double %7), !insn.addr !170
  store i32 10, i32* %a_-36, align 4, !insn.addr !171
  store i32 20, i32* %b_-40, align 4, !insn.addr !172
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %a_-36, i32* nonnull %b_-40), !insn.addr !173
  %9 = add i32 %3, 2, !insn.addr !174
  %10 = load i32, i32* %a_-36, align 4, !insn.addr !175
  %11 = add i32 %9, %10, !insn.addr !176
  %12 = load i32, i32* %b_-40, align 4, !insn.addr !177
  %13 = add i32 %11, %12, !insn.addr !178
  ret i32 %13, !insn.addr !179

; uselistorder directives
  uselistorder i32* %a_-36, { 1, 0, 2 }
  uselistorder i32* %b_-40, { 1, 0, 2 }
  uselistorder i128* %0, { 1, 0 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2270:
  %stack_var_-60 = alloca i64, align 8
  call void @_ZN9ContainerIiEC2Ev(i64* nonnull %stack_var_-60), !insn.addr !180
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !180
}

define i64 @function_2290(i64 %arg1) local_unnamed_addr {
dec_label_pc_2290:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_32 = alloca i64, align 8
  %2 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !181
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !182
  %4 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !183
  %5 = call i64 @_ZNK9ContainerIiE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !184
  %6 = trunc i64 %5 to i32, !insn.addr !185
  %7 = add i64 %1, -48, !insn.addr !186
  %8 = inttoptr i64 %7 to i32*, !insn.addr !186
  store i32 %6, i32* %8, align 4, !insn.addr !186
  %9 = call i64 @_ZNK9ContainerIiE7getSizeEv(), !insn.addr !187
  %10 = trunc i64 %9 to i32, !insn.addr !188
  %11 = add i64 %1, -52, !insn.addr !188
  %12 = inttoptr i64 %11 to i32*, !insn.addr !188
  store i32 %10, i32* %12, align 4, !insn.addr !188
  call void @_ZN9ContainerIdEC2Ev(i64* nonnull %stack_var_32), !insn.addr !189
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !189

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @function_22ec(i64 %arg1) local_unnamed_addr {
dec_label_pc_22ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN9ContainerIdE4pushEd(double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !190
  %3 = call i64 @_ZNK9ContainerIdE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !191
  %4 = add i64 %1, -48, !insn.addr !192
  %5 = inttoptr i64 %4 to i32*, !insn.addr !192
  %6 = load i32, i32* %5, align 4, !insn.addr !192
  %7 = add i64 %1, -52, !insn.addr !193
  %8 = inttoptr i64 %7 to i32*, !insn.addr !193
  %9 = load i32, i32* %8, align 4, !insn.addr !193
  %10 = add i32 %9, %6, !insn.addr !194
  %11 = zext i32 %10 to i64, !insn.addr !195
  ret i64 %11, !insn.addr !196

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2330:
  %lambda2_-41 = alloca i64, align 8
  %lambda1_-40 = alloca i64, align 8
  store i64 10, i64* %lambda1_-40, align 8, !insn.addr !197
  call void @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* nonnull %lambda1_-40, i32 3), !insn.addr !198
  %0 = call i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* nonnull %lambda2_-41, i32 10, i32 20), !insn.addr !199
  %1 = add i32 %0, ptrtoint (i32* @0 to i32), !insn.addr !200
  ret i32 %1, !insn.addr !201
}

define void @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_23a0:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !202
  %2 = inttoptr i64 %1 to i64*, !insn.addr !202
  %3 = load i64, i64* %2, align 8, !insn.addr !202
  %4 = inttoptr i64 %3 to i32*, !insn.addr !203
  %5 = load i32, i32* %4, align 4, !insn.addr !203
  %6 = add i32 %5, 5, !insn.addr !204
  store i32 %6, i32* %4, align 4, !insn.addr !205
  ret void, !insn.addr !206
}

define i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_23e0:
  %0 = add i32 %arg3, %arg2, !insn.addr !207
  ret i32 %0, !insn.addr !208
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_2404:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !209
  %1 = inttoptr i64 %0 to i32*, !insn.addr !210
  store i32 42, i32* %1, align 4, !insn.addr !210
  %2 = load i64, i64* @global_var_17fb0, align 8, !insn.addr !211
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !212
  %4 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !213
  ret i32 %4, !insn.addr !213

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @function_2438(i32 %arg1) local_unnamed_addr {
dec_label_pc_2438:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !214
  %4 = add i64 %1, -16, !insn.addr !215
  %5 = inttoptr i64 %4 to i64*, !insn.addr !215
  %6 = add i64 %1, -20, !insn.addr !216
  %7 = inttoptr i64 %6 to i32*, !insn.addr !216
  store i32 %3, i32* %7, align 4, !insn.addr !216
  %8 = icmp eq i32 %3, 1, !insn.addr !217
  %9 = load i64, i64* %5, align 8
  br i1 %8, label %dec_label_pc_2458, label %dec_label_pc_256c, !insn.addr !217

dec_label_pc_2458:                                ; preds = %dec_label_pc_2438
  %10 = call i64 @__cxa_begin_catch(i64 %9), !insn.addr !218
  %11 = inttoptr i64 %10 to i32*, !insn.addr !219
  %12 = load i32, i32* %11, align 4, !insn.addr !219
  %13 = add i64 %1, -24, !insn.addr !220
  %14 = inttoptr i64 %13 to i32*, !insn.addr !220
  store i32 %12, i32* %14, align 4, !insn.addr !220
  %15 = add i64 %1, -4, !insn.addr !221
  %16 = inttoptr i64 %15 to i32*, !insn.addr !221
  %17 = load i32, i32* %16, align 4, !insn.addr !221
  %18 = add i32 %17, %12, !insn.addr !222
  store i32 %18, i32* %16, align 4, !insn.addr !223
  %19 = call i64 @__cxa_rethrow(i64 %10), !insn.addr !224
  %20 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !225
  %21 = sext i32 %20 to i64, !insn.addr !225
  ret i64 %21, !insn.addr !225

dec_label_pc_256c:                                ; preds = %dec_label_pc_2438
  %22 = inttoptr i64 %9 to %_Unwind_Exception*, !insn.addr !226
  call void @_Unwind_Resume(%_Unwind_Exception* %22), !insn.addr !226
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !226

; uselistorder directives
  uselistorder i64 %10, { 1, 0 }
  uselistorder i64 %1, { 3, 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2574:
  %stack_var_-69 = alloca i64, align 8
  %stack_var_-80 = alloca i64, align 8
  %ptr3_-64 = alloca i64, align 8
  %arr_-48 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %0 = call i64 @_Znwm(i64 4), !insn.addr !227
  %1 = inttoptr i64 %0 to i32*, !insn.addr !228
  store i32 100, i32* %1, align 4, !insn.addr !228
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* nonnull %stack_var_-24, i32* %1), !insn.addr !229
  %2 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(), !insn.addr !230
  %3 = inttoptr i64 %2 to i32*, !insn.addr !231
  store i32 200, i32* %3, align 4, !insn.addr !232
  %4 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** bitcast (i32* @0 to i64**)), !insn.addr !233
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* nonnull %arr_-48, i64* %4), !insn.addr !234
  %5 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(), !insn.addr !235
  %6 = inttoptr i64 %5 to i32*, !insn.addr !236
  %7 = load i32, i32* %6, align 4, !insn.addr !237
  %8 = call i64 @_Znam(i64 20), !insn.addr !238
  %9 = inttoptr i64 %8 to i32*, !insn.addr !239
  store i32 1, i32* %9, align 4, !insn.addr !240
  %10 = add i64 %8, 4, !insn.addr !241
  %11 = inttoptr i64 %10 to i32*, !insn.addr !241
  store i32 2, i32* %11, align 4, !insn.addr !241
  %12 = add i64 %8, 8, !insn.addr !242
  %13 = inttoptr i64 %12 to i32*, !insn.addr !242
  store i32 3, i32* %13, align 4, !insn.addr !242
  %14 = add i64 %8, 12, !insn.addr !243
  %15 = inttoptr i64 %14 to i32*, !insn.addr !243
  store i32 4, i32* %15, align 4, !insn.addr !243
  %16 = add i64 %8, 16, !insn.addr !244
  %17 = inttoptr i64 %16 to i32*, !insn.addr !244
  store i32 5, i32* %17, align 4, !insn.addr !244
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* nonnull %ptr3_-64, i32* %9), !insn.addr !245
  %18 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64 ptrtoint (i32* @0 to i64)), !insn.addr !246
  %19 = inttoptr i64 %18 to i32*, !insn.addr !247
  %20 = load i32, i32* %19, align 4, !insn.addr !248
  %21 = call i64 @_Znwm(i64 4), !insn.addr !249
  %22 = inttoptr i64 %21 to i32*, !insn.addr !250
  store i32 500, i32* %22, align 4, !insn.addr !251
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* nonnull %stack_var_-80, i32* %22, i64* nonnull %stack_var_-69), !insn.addr !252
  %23 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(), !insn.addr !253
  %24 = inttoptr i64 %23 to i32*, !insn.addr !254
  %25 = load i32, i32* %24, align 4, !insn.addr !255
  %26 = add i32 %20, %7, !insn.addr !256
  %27 = add i32 %26, %25, !insn.addr !257
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* nonnull %stack_var_-80), !insn.addr !258
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* nonnull %ptr3_-64), !insn.addr !259
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %arr_-48), !insn.addr !260
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %stack_var_-24), !insn.addr !261
  ret i32 %27, !insn.addr !262

; uselistorder directives
  uselistorder i32* %22, { 1, 0 }
  uselistorder i32* %9, { 1, 0 }
  uselistorder i64 %8, { 3, 0, 2, 1, 4 }
  uselistorder i32 5, { 0, 4, 1, 2, 3 }
  uselistorder i64 ()* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i64 @function_26e8() local_unnamed_addr {
dec_label_pc_26e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !263
  %4 = add i64 %1, -16, !insn.addr !264
  %5 = inttoptr i64 %4 to i64*, !insn.addr !264
  %6 = add i64 %1, -20, !insn.addr !265
  %7 = inttoptr i64 %6 to i32*, !insn.addr !265
  store i32 %3, i32* %7, align 4, !insn.addr !265
  %8 = call i64 @function_2748(), !insn.addr !266
  ret i64 %8, !insn.addr !266

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_26f8() local_unnamed_addr {
dec_label_pc_26f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !267
  %4 = add i64 %1, -16, !insn.addr !268
  %5 = inttoptr i64 %4 to i64*, !insn.addr !268
  %6 = add i64 %1, -20, !insn.addr !269
  %7 = inttoptr i64 %6 to i32*, !insn.addr !269
  store i32 %3, i32* %7, align 4, !insn.addr !269
  %8 = call i64 @function_273c(), !insn.addr !270
  ret i64 %8, !insn.addr !270

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_2708() local_unnamed_addr {
dec_label_pc_2708:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !271
  %4 = add i64 %1, -16, !insn.addr !272
  %5 = inttoptr i64 %4 to i64*, !insn.addr !272
  %6 = add i64 %1, -20, !insn.addr !273
  %7 = inttoptr i64 %6 to i32*, !insn.addr !273
  store i32 %3, i32* %7, align 4, !insn.addr !273
  %8 = call i64 @function_2730(), !insn.addr !274
  ret i64 %8, !insn.addr !274

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_2718() local_unnamed_addr {
dec_label_pc_2718:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32, !insn.addr !275
  %4 = add i64 %1, -16, !insn.addr !276
  %5 = inttoptr i64 %4 to i64*, !insn.addr !276
  %6 = add i64 %1, -20, !insn.addr !277
  %7 = inttoptr i64 %6 to i32*, !insn.addr !277
  store i32 %3, i32* %7, align 4, !insn.addr !277
  %8 = add i64 %1, -64, !insn.addr !278
  %9 = inttoptr i64 %8 to i64*, !insn.addr !279
  call void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %9), !insn.addr !279
  %10 = call i64 @function_2730(), !insn.addr !280
  ret i64 %10, !insn.addr !280

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 ()* @function_2730, { 1, 0 }
  uselistorder void (i64*)* @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev", { 1, 0 }
}

define i64 @function_2730() local_unnamed_addr {
dec_label_pc_2730:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -48, !insn.addr !281
  %3 = inttoptr i64 %2 to i64*, !insn.addr !282
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %3), !insn.addr !282
  %4 = call i64 @function_273c(), !insn.addr !283
  ret i64 %4, !insn.addr !283

; uselistorder directives
  uselistorder i64 ()* @function_273c, { 1, 0 }
  uselistorder void (i64*)* @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev, { 1, 0 }
  uselistorder i64 -48, { 0, 4, 5, 1, 2, 3, 6, 7 }
}

define i64 @function_273c() local_unnamed_addr {
dec_label_pc_273c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !284
  %3 = inttoptr i64 %2 to i64*, !insn.addr !285
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !285
  %4 = call i64 @function_2748(), !insn.addr !286
  ret i64 %4, !insn.addr !286

; uselistorder directives
  uselistorder i64 ()* @function_2748, { 1, 0 }
}

define i64 @function_2748() local_unnamed_addr {
dec_label_pc_2748:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -8, !insn.addr !287
  %3 = inttoptr i64 %2 to i64*, !insn.addr !288
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %3), !insn.addr !288
  %4 = add i64 %1, -16, !insn.addr !289
  %5 = inttoptr i64 %4 to i64*, !insn.addr !289
  %6 = load i64, i64* %5, align 8, !insn.addr !289
  %7 = inttoptr i64 %6 to %_Unwind_Exception*, !insn.addr !290
  call void @_Unwind_Resume(%_Unwind_Exception* %7), !insn.addr !290
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !290

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder void (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 2, 3, 1, 0 }
}

define void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i64* %result, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_275c:
  %0 = bitcast i64* %arg3 to i64**, !insn.addr !291
  call void @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %0), !insn.addr !291
  ret void, !insn.addr !292
}

define i64 @function_2794() local_unnamed_addr {
dec_label_pc_2794:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !293
  ret i64 %0, !insn.addr !293
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"() local_unnamed_addr {
dec_label_pc_2798:
  %0 = call i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(), !insn.addr !294
  ret i64 %0, !insn.addr !295
}

define void @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i64* %result) local_unnamed_addr {
dec_label_pc_27cc:
  %0 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(), !insn.addr !296
  %1 = inttoptr i64 %0 to i64*, !insn.addr !297
  %2 = load i64, i64* %1, align 8, !insn.addr !297
  %3 = icmp eq i64 %2, 0, !insn.addr !298
  br i1 %3, label %dec_label_pc_2834, label %dec_label_pc_2808, !insn.addr !298

dec_label_pc_2808:                                ; preds = %dec_label_pc_27cc
  %4 = call i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(), !insn.addr !299
  %5 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !300
  %6 = load i64, i64* %5, align 8, !insn.addr !301
  %7 = inttoptr i64 %4 to i64*, !insn.addr !302
  %8 = inttoptr i64 %6 to i32*, !insn.addr !302
  call void @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %7, i32* %8), !insn.addr !302
  br label %dec_label_pc_2834, !insn.addr !303

dec_label_pc_2834:                                ; preds = %dec_label_pc_2808, %dec_label_pc_27cc
  store i64 0, i64* %1, align 8, !insn.addr !304
  ret void, !insn.addr !305
}

define i64 @function_2848() local_unnamed_addr {
dec_label_pc_2848:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !306
  ret i64 %0, !insn.addr !306
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_284c:
  %x0.1.reg2mem = alloca i64, !insn.addr !307
  %result_-36.3.reg2mem = alloca i32, !insn.addr !307
  %x0.0.reg2mem = alloca i64, !insn.addr !307
  %result_-36.2.reg2mem = alloca i32, !insn.addr !307
  %0 = call i64 @_Znwm(i64 8), !insn.addr !308
  %1 = inttoptr i64 %0 to i64*, !insn.addr !309
  store i64 0, i64* %1, align 8, !insn.addr !309
  call void @_ZN12RTTIDerivedAC2Ev(i64* %1), !insn.addr !310
  %2 = call i64 @_Znwm(i64 8), !insn.addr !311
  %3 = inttoptr i64 %2 to i64*, !insn.addr !312
  store i64 0, i64* %3, align 8, !insn.addr !312
  call void @_ZN12RTTIDerivedBC2Ev(i64* %3), !insn.addr !313
  %4 = icmp eq i64 %0, 0, !insn.addr !314
  br i1 %4, label %dec_label_pc_28a8, label %dec_label_pc_28ac, !insn.addr !314

dec_label_pc_28a8:                                ; preds = %dec_label_pc_284c
  %5 = call i64 @__cxa_bad_typeid(i64 %2), !insn.addr !315
  br label %dec_label_pc_28ac, !insn.addr !315

dec_label_pc_28ac:                                ; preds = %dec_label_pc_284c, %dec_label_pc_28a8
  %6 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !316
  %7 = icmp eq i64 %2, 0, !insn.addr !317
  br i1 %7, label %dec_label_pc_28ec, label %dec_label_pc_28f0, !insn.addr !317

dec_label_pc_28ec:                                ; preds = %dec_label_pc_28ac
  %8 = call i64 @__cxa_bad_typeid(i64 %6), !insn.addr !318
  br label %dec_label_pc_28f0, !insn.addr !318

dec_label_pc_28f0:                                ; preds = %dec_label_pc_28ac, %dec_label_pc_28ec
  %9 = urem i64 %6, 2
  %10 = icmp eq i64 %9, 0, !insn.addr !319
  %spec.select = select i1 %10, i32 0, i32 10
  %11 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !320
  %12 = urem i64 %11, 2
  %13 = icmp eq i64 %12, 0, !insn.addr !321
  %14 = or i32 %spec.select, 20
  %spec.select5 = select i1 %13, i32 %spec.select, i32 %14
  store i32 %spec.select5, i32* %result_-36.2.reg2mem, !insn.addr !322
  store i64 %11, i64* %x0.0.reg2mem, !insn.addr !322
  br i1 %4, label %dec_label_pc_298c, label %dec_label_pc_2930, !insn.addr !322

dec_label_pc_2930:                                ; preds = %dec_label_pc_28f0
  %15 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_17808, i64* nonnull @global_var_17818, i64 0), !insn.addr !323
  %phitmp = icmp eq i64 %15, 0
  store i32 %spec.select5, i32* %result_-36.2.reg2mem, !insn.addr !324
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !324
  br i1 %phitmp, label %dec_label_pc_298c, label %dec_label_pc_2974, !insn.addr !324

dec_label_pc_2974:                                ; preds = %dec_label_pc_2930
  %16 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(), !insn.addr !325
  %17 = trunc i64 %16 to i32, !insn.addr !326
  %18 = add i32 %spec.select5, %17, !insn.addr !326
  store i32 %18, i32* %result_-36.2.reg2mem, !insn.addr !327
  store i64 %16, i64* %x0.0.reg2mem, !insn.addr !327
  br label %dec_label_pc_298c, !insn.addr !327

dec_label_pc_298c:                                ; preds = %dec_label_pc_28f0, %dec_label_pc_2974, %dec_label_pc_2930
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %result_-36.2.reload = load i32, i32* %result_-36.2.reg2mem
  store i32 %result_-36.2.reload, i32* %result_-36.3.reg2mem, !insn.addr !328
  store i64 %x0.0.reload, i64* %x0.1.reg2mem, !insn.addr !328
  br i1 %7, label %dec_label_pc_29f8, label %dec_label_pc_299c, !insn.addr !328

dec_label_pc_299c:                                ; preds = %dec_label_pc_298c
  %19 = call i64 @__dynamic_cast(i64 %2, i64* nonnull @global_var_17808, i64* nonnull @global_var_17830, i64 0), !insn.addr !329
  %phitmp4 = icmp eq i64 %19, 0
  store i32 %result_-36.2.reload, i32* %result_-36.3.reg2mem, !insn.addr !330
  store i64 0, i64* %x0.1.reg2mem, !insn.addr !330
  br i1 %phitmp4, label %dec_label_pc_29f8, label %dec_label_pc_29e0, !insn.addr !330

dec_label_pc_29e0:                                ; preds = %dec_label_pc_299c
  %20 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(), !insn.addr !331
  %21 = trunc i64 %20 to i32, !insn.addr !332
  %22 = add i32 %result_-36.2.reload, %21, !insn.addr !332
  store i32 %22, i32* %result_-36.3.reg2mem, !insn.addr !333
  store i64 %20, i64* %x0.1.reg2mem, !insn.addr !333
  br label %dec_label_pc_29f8, !insn.addr !333

dec_label_pc_29f8:                                ; preds = %dec_label_pc_298c, %dec_label_pc_29e0, %dec_label_pc_299c
  %result_-36.3.reload = load i32, i32* %result_-36.3.reg2mem
  br i1 %4, label %dec_label_pc_2a08, label %dec_label_pc_2a0c, !insn.addr !334

dec_label_pc_2a08:                                ; preds = %dec_label_pc_29f8
  %x0.1.reload = load i64, i64* %x0.1.reg2mem
  %23 = call i64 @__cxa_bad_typeid(i64 %x0.1.reload), !insn.addr !335
  br label %dec_label_pc_2a0c, !insn.addr !335

dec_label_pc_2a0c:                                ; preds = %dec_label_pc_29f8, %dec_label_pc_2a08
  %24 = call i64 @_ZNKSt9type_info4nameEv(), !insn.addr !336
  %25 = inttoptr i64 %24 to i8*, !insn.addr !337
  %26 = call i32 @strlen(i8* %25), !insn.addr !337
  br i1 %4, label %dec_label_pc_2a50, label %dec_label_pc_2a3c, !insn.addr !338

dec_label_pc_2a3c:                                ; preds = %dec_label_pc_2a0c
  %27 = trunc i64 %0 to i32, !insn.addr !339
  ret i32 %27, !insn.addr !340

dec_label_pc_2a50:                                ; preds = %dec_label_pc_2a0c
  br i1 %7, label %dec_label_pc_2a74, label %dec_label_pc_2a60, !insn.addr !341

dec_label_pc_2a60:                                ; preds = %dec_label_pc_2a50
  %28 = trunc i64 %2 to i32, !insn.addr !342
  ret i32 %28, !insn.addr !343

dec_label_pc_2a74:                                ; preds = %dec_label_pc_2a50
  %29 = add i32 %26, %result_-36.3.reload, !insn.addr !344
  ret i32 %29, !insn.addr !345

; uselistorder directives
  uselistorder i32 %result_-36.2.reload, { 2, 0, 1 }
  uselistorder i32 %spec.select5, { 2, 0, 1 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 (i64)* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2a0c, { 1, 0 }
  uselistorder label %dec_label_pc_29f8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_298c, { 1, 2, 0 }
  uselistorder label %dec_label_pc_28f0, { 1, 0 }
  uselistorder label %dec_label_pc_28ac, { 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2a84:
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4bd5 to i8*)), !insn.addr !346
  %1 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !347
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4bfa to i8*)), !insn.addr !348
  %3 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !349
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4c18 to i8*)), !insn.addr !350
  %5 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !351
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4c34 to i8*)), !insn.addr !352
  %7 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !353
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4c50 to i8*)), !insn.addr !354
  %9 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !355
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4c6c to i8*)), !insn.addr !356
  %11 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !357
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4c89 to i8*)), !insn.addr !358
  %13 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !359
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4ca5 to i8*)), !insn.addr !360
  %15 = call i32 @_Z23test_cpp_template_classv(), !insn.addr !361
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4cc1 to i8*)), !insn.addr !362
  %17 = call i32 @_Z15test_cpp_lambdav(), !insn.addr !363
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4cdd to i8*)), !insn.addr !364
  %19 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !365
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4cf9 to i8*)), !insn.addr !366
  %21 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !367
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4d16 to i8*)), !insn.addr !368
  %23 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !369
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4d33 to i8*)), !insn.addr !370
  ret void, !insn.addr !371

; uselistorder directives
  uselistorder i32 ()* @_Z18test_cpp_smart_ptrv, { 1, 2, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_2b90:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !372
  ret i32 0, !insn.addr !373
}

define void @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_2bbc:
  call void @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3), !insn.addr !374
  ret void, !insn.addr !375
}

define void @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_2bf0:
  %stack_var_-32 = alloca i32*, align 8
  store i32* %arg2, i32** %stack_var_-32, align 8, !insn.addr !376
  %0 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* bitcast (i32* @0 to i64*)), !insn.addr !377
  %1 = bitcast i32** %stack_var_-32 to i32***, !insn.addr !378
  call void @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** nonnull %1, i64** %0), !insn.addr !378
  ret void, !insn.addr !379

; uselistorder directives
  uselistorder i32** %stack_var_-32, { 1, 0 }
}

define i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64**, !insn.addr !380
  ret i64** %2, !insn.addr !380
}

define void @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i64* %result, i32*** %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_2c50:
  %0 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !381
  %1 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* bitcast (i32* @0 to i64*)), !insn.addr !382
  %2 = ptrtoint i64** %1 to i64, !insn.addr !382
  call void @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %0, i64 %2), !insn.addr !383
  ret void, !insn.addr !384
}

define i64 @function_2ca4() local_unnamed_addr {
dec_label_pc_2ca4:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !385
  ret i64 %0, !insn.addr !385
}

define void @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i64* %result, i32*** %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2ca8:
  %0 = call i64** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i64* bitcast (i32* @0 to i64*)), !insn.addr !386
  %1 = bitcast i64** %0 to i64*, !insn.addr !387
  call void @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %1), !insn.addr !387
  %2 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !388
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %2), !insn.addr !389
  ret void, !insn.addr !390

; uselistorder directives
  uselistorder i64** (i64*)* @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE", { 2, 1, 0 }
}

define void @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_2cfc:
  call void @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2), !insn.addr !391
  ret void, !insn.addr !392
}

define void @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_2d28:
  ret void, !insn.addr !393
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"() local_unnamed_addr {
dec_label_pc_2d3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !394
  %3 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %2), !insn.addr !394
  %4 = ptrtoint i64* %3 to i64, !insn.addr !394
  ret i64 %4, !insn.addr !395
}

define i64 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"() local_unnamed_addr {
dec_label_pc_2d60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !396
  %3 = call i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %2), !insn.addr !396
  ret i64 %3, !insn.addr !397
}

define i64 @function_2d90() local_unnamed_addr {
dec_label_pc_2d90:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !398
  ret i64 %0, !insn.addr !398
}

define void @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2d94:
  store i32 -1, i32* %arg2, align 4, !insn.addr !399
  %0 = icmp eq i32* %arg2, null, !insn.addr !400
  br i1 %0, label %dec_label_pc_2dd0, label %dec_label_pc_2dc4, !insn.addr !400

dec_label_pc_2dc4:                                ; preds = %dec_label_pc_2d94
  %1 = bitcast i32* %arg2 to i64*
  call void @_ZdlPv(i64* %1), !insn.addr !401
  br label %dec_label_pc_2dd0, !insn.addr !402

dec_label_pc_2dd0:                                ; preds = %dec_label_pc_2dc4, %dec_label_pc_2d94
  ret void, !insn.addr !403
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2ddc:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !404
  %1 = bitcast i32** %0 to i64*, !insn.addr !405
  ret i64* %1, !insn.addr !405
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2e00:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1), !insn.addr !406
  %1 = inttoptr i64 %0 to i32**, !insn.addr !407
  ret i32** %1, !insn.addr !407
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2e24:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !408
  ret i64 %0, !insn.addr !409
}

define i64 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i64* %result) local_unnamed_addr {
dec_label_pc_2e48:
  %0 = call i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %result), !insn.addr !410
  %1 = ptrtoint i64* %0 to i64, !insn.addr !410
  ret i64 %1, !insn.addr !411
}

define i64* @"_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2e6c:
  %0 = call i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1), !insn.addr !412
  ret i64* %0, !insn.addr !413
}

define i64* @"_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2e90:
  %0 = call i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1), !insn.addr !414
  %1 = inttoptr i64 %0 to i64*, !insn.addr !415
  ret i64* %1, !insn.addr !415
}

define i64 @"_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2eb4:
  %0 = call i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* bitcast (i32* @0 to i64*)), !insn.addr !416
  ret i64 %0, !insn.addr !417
}

define i64 @"_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2ed8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !418
}

define i64 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"() local_unnamed_addr {
dec_label_pc_2eec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !419
  %3 = call i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %2), !insn.addr !419
  ret i64 %3, !insn.addr !420
}

define i64 @function_2f1c() local_unnamed_addr {
dec_label_pc_2f1c:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !421
  ret i64 %0, !insn.addr !421
}

define i64 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i64* %result) local_unnamed_addr {
dec_label_pc_2f20:
  %0 = call i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %result), !insn.addr !422
  %1 = load i64, i64* %0, align 8, !insn.addr !423
  ret i64 %1, !insn.addr !424
}

define i64* @"_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2f48:
  %0 = call i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1), !insn.addr !425
  %1 = bitcast i32** %0 to i64*, !insn.addr !426
  ret i64* %1, !insn.addr !426
}

define i32** @"_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2f6c:
  %0 = call i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1), !insn.addr !427
  %1 = inttoptr i64 %0 to i32**, !insn.addr !428
  ret i32** %1, !insn.addr !428
}

define i64 @"_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i64* %arg1) local_unnamed_addr {
dec_label_pc_2f90:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !429
  ret i64 %0, !insn.addr !430
}

define void @_ZN11SimpleClassC2EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_2fb4:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !431
  store i32 %arg2, i32* %1, align 4, !insn.addr !431
  %2 = add i64 %0, 4, !insn.addr !432
  %3 = inttoptr i64 %2 to i8*, !insn.addr !433
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !433
  %5 = add i64 %0, 35, !insn.addr !434
  %6 = inttoptr i64 %5 to i8*, !insn.addr !434
  store i8 0, i8* %6, align 1, !insn.addr !434
  ret void, !insn.addr !435

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
}

define i64 @_ZN11SimpleClass8setValueEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_3000:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !436
  %4 = inttoptr i64 %2 to i32*, !insn.addr !437
  store i32 %3, i32* %4, align 4, !insn.addr !437
  ret i64 %2, !insn.addr !438

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK11SimpleClass8getValueEv() local_unnamed_addr {
dec_label_pc_3020:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !439
  ret i64 %2, !insn.addr !440
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3038:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !441
  %5 = add i64 %2, 4, !insn.addr !442
  %6 = inttoptr i64 %5 to i8*, !insn.addr !443
  %7 = call i32 @strlen(i8* %6), !insn.addr !443
  %8 = add i32 %7, %4, !insn.addr !444
  %9 = zext i32 %8 to i64, !insn.addr !445
  ret i64 %9, !insn.addr !446
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_3080:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !447
}

define void @_ZN14LifecycleClassC2Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3088:
  %storemerge2.reg2mem = alloca i64, !insn.addr !448
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !449
  %2 = inttoptr i64 %1 to i64*, !insn.addr !449
  store i64 %arg2, i64* %2, align 8, !insn.addr !449
  %3 = icmp ult i64 %arg2, 4611686018427387904, !insn.addr !450
  %4 = mul i64 %arg2, 4
  %storemerge1 = select i1 %3, i64 %4, i64 -1
  %5 = call i64 @_Znam(i64 %storemerge1), !insn.addr !451
  store i64 %5, i64* %result, align 8, !insn.addr !452
  %6 = icmp eq i64 %arg2, 0, !insn.addr !453
  store i64 0, i64* %storemerge2.reg2mem, !insn.addr !454
  br i1 %6, label %dec_label_pc_311c, label %dec_label_pc_30ec, !insn.addr !454

dec_label_pc_30ec:                                ; preds = %dec_label_pc_3088, %dec_label_pc_30ec
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %7 = trunc i64 %storemerge2.reload to i32
  %8 = mul i32 %7, 10, !insn.addr !455
  %9 = mul i64 %storemerge2.reload, 4, !insn.addr !455
  %10 = add i64 %9, %5, !insn.addr !455
  %11 = inttoptr i64 %10 to i32*, !insn.addr !455
  store i32 %8, i32* %11, align 4, !insn.addr !455
  %12 = add nuw i64 %storemerge2.reload, 1, !insn.addr !456
  %exitcond = icmp eq i64 %12, %arg2
  store i64 %12, i64* %storemerge2.reg2mem, !insn.addr !454
  br i1 %exitcond, label %dec_label_pc_311c, label %dec_label_pc_30ec, !insn.addr !454

dec_label_pc_311c:                                ; preds = %dec_label_pc_30ec, %dec_label_pc_3088
  store i32 ptrtoint (i64* @global_var_180f9 to i32), i32* @global_var_180f8, align 4, !insn.addr !457
  ret void, !insn.addr !458

; uselistorder directives
  uselistorder i64 %storemerge2.reload, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32 10, { 1, 0, 2, 3, 4 }
  uselistorder i64 %arg2, { 1, 2, 0, 3, 4 }
  uselistorder label %dec_label_pc_30ec, { 1, 0 }
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64 %arg1) local_unnamed_addr {
dec_label_pc_3138:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !459
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !460
  %4 = inttoptr i64 %3 to i64*, !insn.addr !460
  %5 = load i64, i64* %4, align 8, !insn.addr !460
  %6 = icmp ult i64 %1, %5, !insn.addr !461
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !462
  br i1 %6, label %dec_label_pc_3160, label %dec_label_pc_3184, !insn.addr !462

dec_label_pc_3160:                                ; preds = %dec_label_pc_3138
  %7 = mul i64 %1, 4, !insn.addr !463
  %8 = add i64 %2, %7, !insn.addr !463
  %9 = inttoptr i64 %8 to i32*, !insn.addr !463
  %10 = load i32, i32* %9, align 4, !insn.addr !463
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !464
  br label %dec_label_pc_3184, !insn.addr !464

dec_label_pc_3184:                                ; preds = %dec_label_pc_3138, %dec_label_pc_3160
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !465

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_3184, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_3190:
  %0 = load i32, i32* @global_var_180f8, align 4, !insn.addr !466
  %1 = zext i32 %0 to i64, !insn.addr !466
  ret i64 %1, !insn.addr !467
}

define void @_ZN14LifecycleClassD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_319c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !468
  br i1 %2, label %dec_label_pc_31cc, label %dec_label_pc_31c0, !insn.addr !468

dec_label_pc_31c0:                                ; preds = %dec_label_pc_319c
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !469
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !469
  br label %dec_label_pc_31cc, !insn.addr !470

dec_label_pc_31cc:                                ; preds = %dec_label_pc_31c0, %dec_label_pc_319c
  %5 = load i32, i32* @global_var_180f8, align 4, !insn.addr !471
  %6 = add i32 %5, -1, !insn.addr !472
  store i32 %6, i32* @global_var_180f8, align 4, !insn.addr !473
  ret void, !insn.addr !474

; uselistorder directives
  uselistorder i32* @global_var_180f8, { 3, 2, 1, 0 }
}

define void @_ZN4BaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_31e8:
  store i64 ptrtoint (%vtable_17858_type* @global_var_17858 to i64), i64* %result, align 8, !insn.addr !475
  ret void, !insn.addr !476

; uselistorder directives
  uselistorder i64 (i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
}

define void @_ZN7DerivedC2Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_320c:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN4BaseC2Ev(i64* %result), !insn.addr !477
  store i64 ptrtoint (%vtable_17898_type* @global_var_17898 to i64), i64* %result, align 8, !insn.addr !478
  %1 = add i64 %0, 8, !insn.addr !479
  %2 = inttoptr i64 %1 to i32*, !insn.addr !479
  store i32 %arg2, i32* %2, align 4, !insn.addr !479
  ret void, !insn.addr !480

; uselistorder directives
  uselistorder i64 (i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder void (i64*)* @_ZN4BaseC2Ev, { 1, 0 }
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_325c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !481
  %3 = and i64 %2, 4294967295, !insn.addr !481
  ret i64 %3, !insn.addr !482
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_3278:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !483
  %4 = add i64 %2, 8, !insn.addr !484
  %5 = inttoptr i64 %4 to i32*, !insn.addr !484
  %6 = load i32, i32* %5, align 4, !insn.addr !484
  %7 = mul i32 %6, %3, !insn.addr !485
  %8 = zext i32 %7 to i64, !insn.addr !485
  ret i64 %8, !insn.addr !486

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_329c:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !487
  ret void, !insn.addr !488
}

define void @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_32c0:
  ret void, !insn.addr !489
}

define void @_ZN12MultiDerivedC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_32d0:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN5BaseAC2Ev(i64* %result), !insn.addr !490
  %1 = add i64 %0, 16, !insn.addr !491
  %2 = inttoptr i64 %1 to i64*, !insn.addr !492
  call void @_ZN5BaseBC2Ev(i64* %2), !insn.addr !492
  store i64 ptrtoint (%vtable_178e0_type* @global_var_178e0 to i64), i64* %result, align 8, !insn.addr !493
  store i64 ptrtoint (i64* @global_var_17910 to i64), i64* %2, align 8, !insn.addr !494
  ret void, !insn.addr !495
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) {
dec_label_pc_3330:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 16, !insn.addr !496
  %2 = inttoptr i64 %1 to i64*, !insn.addr !497
  call void @_ZN5BaseBD2Ev(i64* %2), !insn.addr !497
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !498
  ret void, !insn.addr !499
}

define void @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3364:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !500
  %2 = inttoptr i64 %1 to i64*, !insn.addr !501
  call void @_ZN11VirtualBaseC2Ev(i64* %2), !insn.addr !501
  %3 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_17a70), !insn.addr !502
  %4 = add i64 %0, 16, !insn.addr !503
  %5 = inttoptr i64 %4 to i64*, !insn.addr !504
  %6 = call i64 @_ZN7MiddleBC2Ev(i64* %5, i64* nonnull @global_var_17a80), !insn.addr !504
  store i64 ptrtoint (%vtable_179e8_type* @global_var_179e8 to i64), i64* %result, align 8, !insn.addr !505
  store i64 ptrtoint (i64* @global_var_17a50 to i64), i64* %2, align 8, !insn.addr !506
  store i64 ptrtoint (i64* @global_var_17a18 to i64), i64* %5, align 8, !insn.addr !507
  ret void, !insn.addr !508
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_3400:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN14DiamondDerivedD2Ev(i64* %result, i64* nonnull @global_var_17a68), !insn.addr !509
  %2 = add i64 %0, 32, !insn.addr !510
  %3 = inttoptr i64 %2 to i64*, !insn.addr !511
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !511
  ret void, !insn.addr !512

; uselistorder directives
  uselistorder i64 32, { 1, 2, 0 }
}

define void @_ZN5PointC2Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_343c:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !513
  store i32 %arg2, i32* %1, align 4, !insn.addr !513
  %2 = add i64 %0, 4, !insn.addr !514
  %3 = inttoptr i64 %2 to i32*, !insn.addr !514
  store i32 %arg3, i32* %3, align 4, !insn.addr !514
  ret void, !insn.addr !515
}

define i64 @_ZNK5PointplERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3468:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i64* %arg2 to i64
  %4 = ptrtoint i64* %result to i64
  %stack_var_-24 = alloca i64, align 8
  %5 = trunc i64 %2 to i32
  %6 = trunc i64 %1 to i32
  %7 = add i32 %5, %6, !insn.addr !516
  %8 = add i64 %4, 4, !insn.addr !517
  %9 = inttoptr i64 %8 to i32*, !insn.addr !517
  %10 = load i32, i32* %9, align 4, !insn.addr !517
  %11 = add i64 %3, 4, !insn.addr !518
  %12 = inttoptr i64 %11 to i32*, !insn.addr !518
  %13 = load i32, i32* %12, align 4, !insn.addr !518
  %14 = add i32 %13, %10, !insn.addr !519
  call void @_ZN5PointC2Eii(i64* nonnull %stack_var_-24, i32 %7, i32 %14), !insn.addr !520
  %15 = load i64, i64* %stack_var_-24, align 8, !insn.addr !521
  ret i64 %15, !insn.addr !522

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void (i64*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_34b8:
  %0 = alloca i64
  %stack_var_-20.0.reg2mem = alloca i64, !insn.addr !523
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !524
  store i64 0, i64* %stack_var_-20.0.reg2mem, !insn.addr !524
  br i1 %5, label %dec_label_pc_34ec, label %dec_label_pc_350c, !insn.addr !524

dec_label_pc_34ec:                                ; preds = %dec_label_pc_34b8
  %6 = add i64 %2, 4, !insn.addr !525
  %7 = inttoptr i64 %6 to i32*, !insn.addr !525
  %8 = load i32, i32* %7, align 4, !insn.addr !525
  %9 = add i64 %1, 4, !insn.addr !526
  %10 = inttoptr i64 %9 to i32*, !insn.addr !526
  %11 = load i32, i32* %10, align 4, !insn.addr !526
  %12 = icmp eq i32 %8, %11, !insn.addr !527
  %phitmp = zext i1 %12 to i64
  store i64 %phitmp, i64* %stack_var_-20.0.reg2mem, !insn.addr !528
  br label %dec_label_pc_350c, !insn.addr !528

dec_label_pc_350c:                                ; preds = %dec_label_pc_34b8, %dec_label_pc_34ec
  %stack_var_-20.0.reload = load i64, i64* %stack_var_-20.0.reg2mem
  ret i64 %stack_var_-20.0.reload, !insn.addr !529

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %stack_var_-20.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_350c, { 1, 0 }
}

define i64 @_ZN5PointppEv() local_unnamed_addr {
dec_label_pc_351c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 1, !insn.addr !530
  %4 = inttoptr i64 %1 to i32*, !insn.addr !531
  store i32 %3, i32* %4, align 4, !insn.addr !531
  %5 = add i64 %1, 4, !insn.addr !532
  %6 = inttoptr i64 %5 to i32*, !insn.addr !532
  %7 = load i32, i32* %6, align 4, !insn.addr !532
  %8 = add i32 %7, 1, !insn.addr !533
  store i32 %8, i32* %6, align 4, !insn.addr !534
  ret i64 %1, !insn.addr !535

; uselistorder directives
  uselistorder i64 %1, { 2, 1, 0, 3 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3548:
  %0 = icmp ugt i32 %arg1, %arg2, !insn.addr !536
  %storemerge = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge, !insn.addr !537
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_358c:
  ret double %arg1, !insn.addr !538
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_35d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !539
  store i32 %3, i32* %arg2, align 4, !insn.addr !540
  ret void, !insn.addr !541

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3610:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !542
  %2 = inttoptr i64 %1 to i32*, !insn.addr !542
  store i32 0, i32* %2, align 4, !insn.addr !542
  ret void, !insn.addr !543
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_3628:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !544
  %4 = inttoptr i64 %3 to i32*, !insn.addr !544
  %5 = load i32, i32* %4, align 4, !insn.addr !544
  %6 = icmp sgt i32 %5, 9, !insn.addr !545
  br i1 %6, label %dec_label_pc_366c, label %dec_label_pc_364c, !insn.addr !545

dec_label_pc_364c:                                ; preds = %dec_label_pc_3628
  %7 = trunc i64 %1 to i32, !insn.addr !546
  %8 = sext i32 %5 to i64, !insn.addr !547
  %9 = add i32 %5, 1, !insn.addr !548
  store i32 %9, i32* %4, align 4, !insn.addr !549
  %10 = mul i64 %8, 4, !insn.addr !550
  %11 = add i64 %10, %2, !insn.addr !550
  %12 = inttoptr i64 %11 to i32*, !insn.addr !550
  store i32 %7, i32* %12, align 4, !insn.addr !550
  br label %dec_label_pc_366c, !insn.addr !551

dec_label_pc_366c:                                ; preds = %dec_label_pc_364c, %dec_label_pc_3628
  ret i64 %2, !insn.addr !552

; uselistorder directives
  uselistorder i32 %5, { 1, 0, 2 }
  uselistorder i64 %2, { 1, 2, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_3674:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !553
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !554
  %4 = icmp slt i32 %3, 0, !insn.addr !555
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !555
  br i1 %4, label %dec_label_pc_36c8, label %dec_label_pc_3694, !insn.addr !555

dec_label_pc_3694:                                ; preds = %dec_label_pc_3674
  %5 = add i64 %2, 40, !insn.addr !556
  %6 = inttoptr i64 %5 to i32*, !insn.addr !556
  %7 = load i32, i32* %6, align 4, !insn.addr !556
  %8 = icmp ugt i32 %7, %3, !insn.addr !557
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !557
  br i1 %8, label %dec_label_pc_36ac, label %dec_label_pc_36c8, !insn.addr !557

dec_label_pc_36ac:                                ; preds = %dec_label_pc_3694
  %sext = mul i64 %1, 4294967296
  %9 = ashr exact i64 %sext, 30, !insn.addr !558
  %10 = add i64 %9, %2, !insn.addr !558
  %11 = inttoptr i64 %10 to i32*, !insn.addr !558
  %12 = load i32, i32* %11, align 4, !insn.addr !558
  %phitmp = zext i32 %12 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !559
  br label %dec_label_pc_36c8, !insn.addr !559

dec_label_pc_36c8:                                ; preds = %dec_label_pc_3674, %dec_label_pc_3694, %dec_label_pc_36ac
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !560

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_36c8, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_36d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !561
  %3 = inttoptr i64 %2 to i32*, !insn.addr !561
  %4 = load i32, i32* %3, align 4, !insn.addr !561
  %5 = zext i32 %4 to i64, !insn.addr !561
  ret i64 %5, !insn.addr !562
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_36ec:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !563
  %2 = inttoptr i64 %1 to i32*, !insn.addr !563
  store i32 0, i32* %2, align 4, !insn.addr !563
  ret void, !insn.addr !564
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3704:
  %0 = alloca i64
  %1 = alloca double
  %2 = load i64, i64* %0
  %3 = load double, double* %1
  %4 = add i64 %2, 80, !insn.addr !565
  %5 = inttoptr i64 %4 to i32*, !insn.addr !565
  %6 = load i32, i32* %5, align 4, !insn.addr !565
  %7 = icmp sgt i32 %6, 9, !insn.addr !566
  br i1 %7, label %dec_label_pc_3748, label %dec_label_pc_3728, !insn.addr !566

dec_label_pc_3728:                                ; preds = %dec_label_pc_3704
  %.cast = bitcast double %3 to i64
  %8 = sext i32 %6 to i64, !insn.addr !567
  %9 = add i32 %6, 1, !insn.addr !568
  store i32 %9, i32* %5, align 4, !insn.addr !569
  %10 = mul i64 %8, 8, !insn.addr !570
  %11 = add i64 %10, %2, !insn.addr !570
  %12 = inttoptr i64 %11 to i64*, !insn.addr !570
  store i64 %.cast, i64* %12, align 8, !insn.addr !570
  br label %dec_label_pc_3748, !insn.addr !571

dec_label_pc_3748:                                ; preds = %dec_label_pc_3728, %dec_label_pc_3704
  ret i64 %2, !insn.addr !572

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2 }
  uselistorder i64 %2, { 1, 2, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_3750:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !573
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_37b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !574
  %3 = inttoptr i64 %2 to i32*, !insn.addr !574
  %4 = load i32, i32* %3, align 4, !insn.addr !574
  %5 = zext i32 %4 to i64, !insn.addr !574
  ret i64 %5, !insn.addr !575
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_37cc:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !576
  ret void, !insn.addr !577
}

define i64 @function_37fc() local_unnamed_addr {
dec_label_pc_37fc:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !578
  ret i64 %0, !insn.addr !578
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv() local_unnamed_addr {
dec_label_pc_3800:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(), !insn.addr !579
  ret i64 %0, !insn.addr !580
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3834:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !581
  ret i64* %2, !insn.addr !581
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3848:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !582
  ret void, !insn.addr !583
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3874:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !584
  ret void, !insn.addr !585
}

define i64 @function_38a4() local_unnamed_addr {
dec_label_pc_38a4:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !586
  ret i64 %0, !insn.addr !586
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64 %arg1) local_unnamed_addr {
dec_label_pc_38a8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(), !insn.addr !587
  %3 = mul i64 %1, 4, !insn.addr !588
  %4 = add i64 %2, %3, !insn.addr !588
  ret i64 %4, !insn.addr !589

; uselistorder directives
  uselistorder i64 4, { 0, 1, 9, 10, 11, 12, 13, 14, 2, 3, 4, 15, 16, 5, 8, 6, 7 }
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_38e8:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !590
  %1 = inttoptr i64 %0 to i64*, !insn.addr !591
  %2 = load i64, i64* %1, align 8, !insn.addr !591
  %3 = icmp eq i64 %2, 0, !insn.addr !592
  br i1 %3, label %dec_label_pc_3934, label %dec_label_pc_3918, !insn.addr !592

dec_label_pc_3918:                                ; preds = %dec_label_pc_38e8
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(), !insn.addr !593
  %5 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i32* nonnull @0), !insn.addr !594
  br label %dec_label_pc_3934, !insn.addr !595

dec_label_pc_3934:                                ; preds = %dec_label_pc_3918, %dec_label_pc_38e8
  store i64 0, i64* %1, align 8, !insn.addr !596
  ret void, !insn.addr !597
}

define i64 @function_3948() local_unnamed_addr {
dec_label_pc_3948:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !598
  ret i64 %0, !insn.addr !598
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_394c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !599
  %1 = inttoptr i64 %0 to i64*, !insn.addr !600
  %2 = load i64, i64* %1, align 8, !insn.addr !600
  %3 = icmp eq i64 %2, 0, !insn.addr !601
  br i1 %3, label %dec_label_pc_39a8, label %dec_label_pc_397c, !insn.addr !601

dec_label_pc_397c:                                ; preds = %dec_label_pc_394c
  %4 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(), !insn.addr !602
  %5 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !603
  %6 = call i64 @_ZNKSt14default_deleteIiEclEPi(i32* nonnull @0), !insn.addr !604
  br label %dec_label_pc_39a8, !insn.addr !605

dec_label_pc_39a8:                                ; preds = %dec_label_pc_397c, %dec_label_pc_394c
  store i64 0, i64* %1, align 8, !insn.addr !606
  ret void, !insn.addr !607

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @function_39bc() local_unnamed_addr {
dec_label_pc_39bc:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !608
  ret i64 %0, !insn.addr !608
}

define void @_ZN12RTTIDerivedAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_39c0:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !609
  store i64 ptrtoint (%vtable_17d30_type* @global_var_17d30 to i64), i64* %result, align 8, !insn.addr !610
  ret void, !insn.addr !611
}

define void @_ZN12RTTIDerivedBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3a04:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !612
  store i64 ptrtoint (%vtable_17d80_type* @global_var_17d80 to i64), i64* %result, align 8, !insn.addr !613
  ret void, !insn.addr !614

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3a48:
  %0 = alloca i64
  %stack_var_-36.0.reg2mem = alloca i64, !insn.addr !615
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !616
  %4 = inttoptr i64 %3 to i64*, !insn.addr !616
  %5 = load i64, i64* %4, align 8, !insn.addr !616
  %6 = add i64 %1, 8, !insn.addr !617
  %7 = inttoptr i64 %6 to i64*, !insn.addr !617
  %8 = load i64, i64* %7, align 8, !insn.addr !617
  %9 = icmp eq i64 %5, %8, !insn.addr !618
  store i64 1, i64* %stack_var_-36.0.reg2mem, !insn.addr !619
  br i1 %9, label %dec_label_pc_3ad4, label %dec_label_pc_3a84, !insn.addr !619

dec_label_pc_3a84:                                ; preds = %dec_label_pc_3a48
  %10 = inttoptr i64 %5 to i8*, !insn.addr !620
  %11 = load i8, i8* %10, align 1, !insn.addr !620
  %12 = icmp eq i8 %11, 42, !insn.addr !621
  store i64 0, i64* %stack_var_-36.0.reg2mem, !insn.addr !622
  br i1 %12, label %dec_label_pc_3ad4, label %dec_label_pc_3aa4, !insn.addr !622

dec_label_pc_3aa4:                                ; preds = %dec_label_pc_3a84
  %13 = inttoptr i64 %8 to i8*, !insn.addr !623
  %14 = call i32 @strcmp(i8* %10, i8* %13), !insn.addr !623
  %15 = icmp eq i32 %14, 0, !insn.addr !624
  %16 = zext i1 %15 to i64, !insn.addr !625
  store i64 %16, i64* %stack_var_-36.0.reg2mem, !insn.addr !626
  br label %dec_label_pc_3ad4, !insn.addr !626

dec_label_pc_3ad4:                                ; preds = %dec_label_pc_3a84, %dec_label_pc_3aa4, %dec_label_pc_3a48
  %stack_var_-36.0.reload = load i64, i64* %stack_var_-36.0.reg2mem
  ret i64 %stack_var_-36.0.reload, !insn.addr !627

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 7, 6, 2, 8, 0, 1, 3, 4, 5 }
  uselistorder label %dec_label_pc_3ad4, { 1, 0, 2 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv() local_unnamed_addr {
dec_label_pc_3ae8:
  ret i64 100, !insn.addr !628
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv() local_unnamed_addr {
dec_label_pc_3afc:
  ret i64 200, !insn.addr !629
}

define i64 @_ZNKSt9type_info4nameEv() local_unnamed_addr {
dec_label_pc_3b10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 8, !insn.addr !630
  %3 = inttoptr i64 %2 to i64*, !insn.addr !630
  %4 = load i64, i64* %3, align 8, !insn.addr !630
  %5 = inttoptr i64 %4 to i8*, !insn.addr !631
  %6 = load i8, i8* %5, align 1, !insn.addr !631
  %7 = icmp eq i8 %6, 42, !insn.addr !632
  %8 = zext i1 %7 to i64
  %storemerge = add i64 %4, %8
  ret i64 %storemerge, !insn.addr !633
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_3b64:
  ret i64 ptrtoint ([5 x i8]* @global_var_4d51 to i64), !insn.addr !634
}

define void @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_3b7c:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !635
  call void @_ZdlPv(i64* %result), !insn.addr !636
  ret void, !insn.addr !637

; uselistorder directives
  uselistorder void (i64*)* @_ZN4BaseD2Ev, { 3, 2, 4, 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_3bac:
  ret i64 ptrtoint ([8 x i8]* @global_var_4d56 to i64), !insn.addr !638
}

define void @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_3bc4:
  call void @_ZN7DerivedD2Ev(i64* %result), !insn.addr !639
  call void @_ZdlPv(i64* %result), !insn.addr !640
  ret void, !insn.addr !641

; uselistorder directives
  uselistorder void (i64*)* @_ZN7DerivedD2Ev, { 2, 3, 1, 0 }
}

define void @_ZN5BaseAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3bf4:
  store i64 ptrtoint (%vtable_17990_type* @global_var_17990 to i64), i64* %result, align 8, !insn.addr !642
  ret void, !insn.addr !643
}

define void @_ZN5BaseBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3c18:
  store i64 ptrtoint (%vtable_179b8_type* @global_var_179b8 to i64), i64* %result, align 8, !insn.addr !644
  ret void, !insn.addr !645
}

define i64 @_ZN12MultiDerived5funcAEv() {
dec_label_pc_3c3c:
  ret i64 30, !insn.addr !646
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_3c50:
  call void @_ZN12MultiDerivedD2Ev(i64* %result), !insn.addr !647
  call void @_ZdlPv(i64* %result), !insn.addr !648
  ret void, !insn.addr !649
}

define i64 @_ZN12MultiDerived5funcBEv() {
dec_label_pc_3c80:
  ret i64 40, !insn.addr !650
}

define void @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_3c94:
  %0 = call i64 @_ZN12MultiDerived5funcBEv(), !insn.addr !651
  ret void, !insn.addr !651

; uselistorder directives
  uselistorder i64 ()* @_ZN12MultiDerived5funcBEv, { 1, 0 }
}

define void @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_3cac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !652
  %3 = inttoptr i64 %2 to i64*, !insn.addr !653
  call void @_ZN12MultiDerivedD2Ev(i64* %3), !insn.addr !653
  ret void, !insn.addr !653

; uselistorder directives
  uselistorder void (i64*)* @_ZN12MultiDerivedD2Ev, { 2, 1, 4, 3, 0 }
}

define void @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_3cc4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !654
  %3 = inttoptr i64 %2 to i64*, !insn.addr !655
  call void @_ZN12MultiDerivedD0Ev(i64* %3), !insn.addr !655
  ret void, !insn.addr !655

; uselistorder directives
  uselistorder void (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define i64 @_ZN5BaseA5funcAEv() {
dec_label_pc_3cdc:
  ret i64 10, !insn.addr !656
}

define void @_ZN5BaseAD2Ev(i64* %result) {
dec_label_pc_3cf0:
  ret void, !insn.addr !657
}

define void @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_3d00:
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !658
  call void @_ZdlPv(i64* %result), !insn.addr !659
  ret void, !insn.addr !660

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseAD2Ev, { 2, 1, 0 }
}

define i64 @_ZN5BaseB5funcBEv() {
dec_label_pc_3d30:
  ret i64 20, !insn.addr !661
}

define void @_ZN5BaseBD2Ev(i64* %result) {
dec_label_pc_3d44:
  ret void, !insn.addr !662
}

define void @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_3d54:
  call void @_ZN5BaseBD2Ev(i64* %result), !insn.addr !663
  call void @_ZdlPv(i64* %result), !insn.addr !664
  ret void, !insn.addr !665

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseBD2Ev, { 2, 1, 0 }
}

define void @_ZN11VirtualBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3d84:
  store i64 ptrtoint (%vtable_17c18_type* @global_var_17c18 to i64), i64* %result, align 8, !insn.addr !666
  ret void, !insn.addr !667
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3da8:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !668
  %2 = add i64 %0, 8, !insn.addr !669
  %3 = inttoptr i64 %2 to i64*, !insn.addr !669
  %4 = load i64, i64* %3, align 8, !insn.addr !669
  %5 = add i64 %1, -24, !insn.addr !670
  %6 = inttoptr i64 %5 to i64*, !insn.addr !670
  %7 = load i64, i64* %6, align 8, !insn.addr !670
  %8 = add i64 %7, %1, !insn.addr !671
  %9 = inttoptr i64 %8 to i64*, !insn.addr !671
  store i64 %4, i64* %9, align 8, !insn.addr !671
  ret i64 %1, !insn.addr !672

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3ddc:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !673
  %2 = add i64 %0, 8, !insn.addr !674
  %3 = inttoptr i64 %2 to i64*, !insn.addr !674
  %4 = load i64, i64* %3, align 8, !insn.addr !674
  %5 = add i64 %1, -24, !insn.addr !675
  %6 = inttoptr i64 %5 to i64*, !insn.addr !675
  %7 = load i64, i64* %6, align 8, !insn.addr !675
  %8 = add i64 %7, %1, !insn.addr !676
  %9 = inttoptr i64 %8 to i64*, !insn.addr !676
  store i64 %4, i64* %9, align 8, !insn.addr !676
  ret i64 %1, !insn.addr !677

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_3e10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !678
  %3 = inttoptr i64 %2 to i64*, !insn.addr !678
  %4 = load i64, i64* %3, align 8, !insn.addr !678
  %5 = add i64 %1, 8, !insn.addr !679
  %6 = add i64 %5, %4, !insn.addr !680
  %7 = inttoptr i64 %6 to i32*, !insn.addr !680
  %8 = load i32, i32* %7, align 4, !insn.addr !680
  %9 = add i32 %8, 150, !insn.addr !681
  %10 = zext i32 %9 to i64, !insn.addr !681
  ret i64 %10, !insn.addr !682
}

define void @_ZN7MiddleAD1Ev(i64* %result) {
dec_label_pc_3e38:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* inttoptr (i64 97432 to i64*)), !insn.addr !683
  %2 = add i64 %0, 16, !insn.addr !684
  %3 = inttoptr i64 %2 to i64*, !insn.addr !685
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !685
  ret void, !insn.addr !686
}

define void @_ZN7MiddleAD0Ev(i64* %result) {
dec_label_pc_3e74:
  call void @_ZN7MiddleAD1Ev(i64* %result), !insn.addr !687
  call void @_ZdlPv(i64* %result), !insn.addr !688
  ret void, !insn.addr !689
}

define void @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_3ea4:
  %0 = call i64 @_ZN7MiddleA4funcEv(), !insn.addr !690
  ret void, !insn.addr !690

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleA4funcEv, { 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_3ec4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !691
  %3 = inttoptr i64 %2 to i64*, !insn.addr !691
  %4 = load i64, i64* %3, align 8, !insn.addr !691
  %5 = add i64 %4, %1, !insn.addr !692
  %6 = inttoptr i64 %5 to i64*, !insn.addr !693
  call void @_ZN7MiddleAD1Ev(i64* %6), !insn.addr !693
  ret void, !insn.addr !693

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleAD1Ev, { 3, 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleAD0Ev() local_unnamed_addr {
dec_label_pc_3ee4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !694
  %3 = inttoptr i64 %2 to i64*, !insn.addr !694
  %4 = load i64, i64* %3, align 8, !insn.addr !694
  %5 = add i64 %4, %1, !insn.addr !695
  %6 = inttoptr i64 %5 to i64*, !insn.addr !696
  call void @_ZN7MiddleAD0Ev(i64* %6), !insn.addr !696
  ret void, !insn.addr !696

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleAD0Ev, { 2, 0, 1 }
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_3f04:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !697
  %3 = inttoptr i64 %2 to i64*, !insn.addr !697
  %4 = load i64, i64* %3, align 8, !insn.addr !697
  %5 = add i64 %1, 8, !insn.addr !698
  %6 = add i64 %5, %4, !insn.addr !699
  %7 = inttoptr i64 %6 to i32*, !insn.addr !699
  %8 = load i32, i32* %7, align 4, !insn.addr !699
  %9 = add i32 %8, 200, !insn.addr !700
  %10 = zext i32 %9 to i64, !insn.addr !700
  ret i64 %10, !insn.addr !701

; uselistorder directives
  uselistorder i32 200, { 1, 0 }
}

define void @_ZN7MiddleBD1Ev(i64* %result) {
dec_label_pc_3f2c:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN7MiddleBD2Ev(i64* %result, i64* inttoptr (i64 97552 to i64*)), !insn.addr !702
  %2 = add i64 %0, 16, !insn.addr !703
  %3 = inttoptr i64 %2 to i64*, !insn.addr !704
  call void @_ZN11VirtualBaseD2Ev(i64* %3), !insn.addr !704
  ret void, !insn.addr !705
}

define void @_ZN7MiddleBD0Ev(i64* %result) {
dec_label_pc_3f68:
  call void @_ZN7MiddleBD1Ev(i64* %result), !insn.addr !706
  call void @_ZdlPv(i64* %result), !insn.addr !707
  ret void, !insn.addr !708
}

define void @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_3f98:
  %0 = call i64 @_ZN7MiddleB4funcEv(), !insn.addr !709
  ret void, !insn.addr !709

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleB4funcEv, { 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_3fb8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !710
  %3 = inttoptr i64 %2 to i64*, !insn.addr !710
  %4 = load i64, i64* %3, align 8, !insn.addr !710
  %5 = add i64 %4, %1, !insn.addr !711
  %6 = inttoptr i64 %5 to i64*, !insn.addr !712
  call void @_ZN7MiddleBD1Ev(i64* %6), !insn.addr !712
  ret void, !insn.addr !712

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleBD1Ev, { 3, 2, 0, 1 }
}

define void @_ZTv0_n32_N7MiddleBD0Ev() local_unnamed_addr {
dec_label_pc_3fd8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !713
  %3 = inttoptr i64 %2 to i64*, !insn.addr !713
  %4 = load i64, i64* %3, align 8, !insn.addr !713
  %5 = add i64 %4, %1, !insn.addr !714
  %6 = inttoptr i64 %5 to i64*, !insn.addr !715
  call void @_ZN7MiddleBD0Ev(i64* %6), !insn.addr !715
  ret void, !insn.addr !715

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN7MiddleBD0Ev, { 2, 0, 1 }
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_3ff8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !716
  %3 = inttoptr i64 %2 to i64*, !insn.addr !716
  %4 = load i64, i64* %3, align 8, !insn.addr !716
  %5 = add i64 %1, 8, !insn.addr !717
  %6 = add i64 %5, %4, !insn.addr !718
  %7 = inttoptr i64 %6 to i32*, !insn.addr !718
  %8 = load i32, i32* %7, align 4, !insn.addr !718
  %9 = add i32 %8, 250, !insn.addr !719
  %10 = zext i32 %9 to i64, !insn.addr !719
  ret i64 %10, !insn.addr !720

; uselistorder directives
  uselistorder i64 -24, { 4, 5, 6, 7, 8, 2, 3, 9, 10, 0, 1 }
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_4020:
  call void @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !721
  call void @_ZdlPv(i64* %result), !insn.addr !722
  ret void, !insn.addr !723
}

define void @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_4050:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !724
  ret void, !insn.addr !724
}

define void @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4068:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !725
  %3 = inttoptr i64 %2 to i64*, !insn.addr !726
  call void @_ZN14DiamondDerivedD1Ev(i64* %3), !insn.addr !726
  ret void, !insn.addr !726
}

define void @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4080:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !727
  %3 = inttoptr i64 %2 to i64*, !insn.addr !728
  call void @_ZN14DiamondDerivedD0Ev(i64* %3), !insn.addr !728
  ret void, !insn.addr !728

; uselistorder directives
  uselistorder i64 -16, { 0, 1, 2, 3, 7, 4, 5, 6, 8, 9 }
}

define void @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_4098:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !729
  ret void, !insn.addr !729

; uselistorder directives
  uselistorder i64 ()* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
}

define void @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_40b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !730
  %3 = inttoptr i64 %2 to i64*, !insn.addr !730
  %4 = load i64, i64* %3, align 8, !insn.addr !730
  %5 = add i64 %4, %1, !insn.addr !731
  %6 = inttoptr i64 %5 to i64*, !insn.addr !732
  call void @_ZN14DiamondDerivedD1Ev(i64* %6), !insn.addr !732
  ret void, !insn.addr !732

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN14DiamondDerivedD1Ev, { 3, 2, 1, 5, 4, 0 }
}

define void @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_40d8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !733
  %3 = inttoptr i64 %2 to i64*, !insn.addr !733
  %4 = load i64, i64* %3, align 8, !insn.addr !733
  %5 = add i64 %4, %1, !insn.addr !734
  %6 = inttoptr i64 %5 to i64*, !insn.addr !735
  call void @_ZN14DiamondDerivedD0Ev(i64* %6), !insn.addr !735
  ret void, !insn.addr !735

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
  uselistorder i64 -32, { 6, 7, 8, 9, 10, 11, 0, 1, 2, 4, 3, 5 }
}

define i64 @_ZN11VirtualBase4funcEv() {
dec_label_pc_40f8:
  ret i64 100, !insn.addr !736
}

define void @_ZN11VirtualBaseD2Ev(i64* %result) {
dec_label_pc_410c:
  ret void, !insn.addr !737
}

define void @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_411c:
  call void @_ZN11VirtualBaseD2Ev(i64* %result), !insn.addr !738
  call void @_ZdlPv(i64* %result), !insn.addr !739
  ret void, !insn.addr !740

; uselistorder directives
  uselistorder void (i64*)* @_ZN11VirtualBaseD2Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_414c:
  %0 = ptrtoint i64* %this to i64
  ret i64 %0, !insn.addr !741
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4160:
  %0 = ptrtoint i64* %this to i64
  ret i64 %0, !insn.addr !742
}

define i64 @_ZN14DiamondDerivedD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_4174:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  %2 = add i64 %1, 16, !insn.addr !743
  %3 = add i64 %0, 24, !insn.addr !744
  %4 = inttoptr i64 %2 to i64*, !insn.addr !745
  %5 = inttoptr i64 %3 to i64*, !insn.addr !745
  %6 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* %5), !insn.addr !745
  %7 = add i64 %0, 8, !insn.addr !746
  %8 = inttoptr i64 %7 to i64*, !insn.addr !747
  %9 = call i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %8), !insn.addr !747
  ret i64 %9, !insn.addr !748

; uselistorder directives
  uselistorder i64 8, { 7, 1, 2, 3, 13, 14, 8, 9, 10, 0, 15, 16, 17, 18, 5, 6, 11, 12, 4 }
  uselistorder i64 16, { 2, 0, 1, 5, 3, 6, 4 }
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_41c0:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !749
  ret void, !insn.addr !750
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_41ec:
  %0 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** bitcast (i32* @0 to i64**)), !insn.addr !751
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %0), !insn.addr !752
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !753
  %2 = inttoptr i64 %1 to i64*, !insn.addr !754
  store i64 0, i64* %2, align 8, !insn.addr !754
  ret void, !insn.addr !755
}

define i64 @function_4240() local_unnamed_addr {
dec_label_pc_4240:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !756
  ret i64 %0, !insn.addr !756
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_4244:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !757
  ret i64* %2, !insn.addr !757
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4258:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2), !insn.addr !758
  ret void, !insn.addr !759
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4284:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !760
  %1 = ptrtoint i64* %0 to i64, !insn.addr !760
  ret i64 %1, !insn.addr !761
}

define i64 @__clang_call_terminate() local_unnamed_addr {
dec_label_pc_42a8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @__cxa_begin_catch(i64 %1), !insn.addr !762
  %3 = call i64 @_ZSt9terminatev(), !insn.addr !763
  ret i64 %3, !insn.addr !763
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_42b4:
  %0 = ptrtoint i64* %arg2 to i64
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !764
  store i64 %0, i64* %result, align 8, !insn.addr !765
  ret void, !insn.addr !766
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_42f4:
  ret void, !insn.addr !767
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4308:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !768
  %1 = bitcast i32** %0 to i64*, !insn.addr !769
  ret i64* %1, !insn.addr !769
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_432c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !770
  %1 = inttoptr i64 %0 to i32**, !insn.addr !771
  ret i32** %1, !insn.addr !771
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4350:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !772
  ret i64 %0, !insn.addr !773
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4374:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !774
}

define void @_ZN8RTTIBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4388:
  store i64 ptrtoint (%vtable_17d58_type* @global_var_17d58 to i64), i64* %result, align 8, !insn.addr !775
  ret void, !insn.addr !776
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_43ac:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !777
  ret void, !insn.addr !778
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_43d0:
  call void @_ZN12RTTIDerivedAD2Ev(i64* %result), !insn.addr !779
  call void @_ZdlPv(i64* %result), !insn.addr !780
  ret void, !insn.addr !781

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedAD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_4400:
  ret i64 1, !insn.addr !782

; uselistorder directives
  uselistorder i64 1, { 2, 0, 3, 4, 1 }
}

define void @_ZN8RTTIBaseD2Ev(i64* %result) {
dec_label_pc_4414:
  ret void, !insn.addr !783
}

define void @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_4424:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !784
  call void @_ZdlPv(i64* %result), !insn.addr !785
  ret void, !insn.addr !786
}

define i64 @_ZNK8RTTIBase7getTypeEv() {
dec_label_pc_4454:
  ret i64 0, !insn.addr !787
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_4468:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !788
  ret void, !insn.addr !789

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseD2Ev, { 3, 2, 1, 0 }
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_448c:
  call void @_ZN12RTTIDerivedBD2Ev(i64* %result), !insn.addr !790
  call void @_ZdlPv(i64* %result), !insn.addr !791
  ret void, !insn.addr !792

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedBD2Ev, { 1, 0 }
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_44bc:
  ret i64 2, !insn.addr !793
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_44d0:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2), !insn.addr !794
  ret void, !insn.addr !795
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_44fc:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !796
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !797
  %2 = inttoptr i64 %1 to i64*, !insn.addr !798
  store i64 %0, i64* %2, align 8, !insn.addr !798
  ret void, !insn.addr !799

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_4540:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !800
  ret void, !insn.addr !801
}

define i64 @function_4568() local_unnamed_addr {
dec_label_pc_4568:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !802
  ret i64 %0, !insn.addr !802
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_456c:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !803
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !804
  ret void, !insn.addr !805
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_459c:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result), !insn.addr !806
  ret void, !insn.addr !807
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_45c0:
  store i64 0, i64* %result, align 8, !insn.addr !808
  ret void, !insn.addr !809
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_45d8:
  ret void, !insn.addr !810
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv() local_unnamed_addr {
dec_label_pc_45e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !811
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %2), !insn.addr !811
  ret i64 %3, !insn.addr !812
}

define i64 @function_4618() local_unnamed_addr {
dec_label_pc_4618:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !813
  ret i64 %0, !insn.addr !813
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i32* %arg1) local_unnamed_addr {
dec_label_pc_461c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !814
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !815
  br i1 %2, label %dec_label_pc_464c, label %dec_label_pc_4640, !insn.addr !815

dec_label_pc_4640:                                ; preds = %dec_label_pc_461c
  %3 = inttoptr i64 %1 to i64*, !insn.addr !816
  call void @_ZdlPv(i64* %3), !insn.addr !816
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !817
  br label %dec_label_pc_464c, !insn.addr !817

dec_label_pc_464c:                                ; preds = %dec_label_pc_4640, %dec_label_pc_461c
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !818

; uselistorder directives
  uselistorder void (i64*)* @_ZdlPv, { 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 14 }
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_4658:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !819
  ret i64* %2, !insn.addr !819
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_466c:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !820
  %1 = ptrtoint i64* %0 to i64, !insn.addr !820
  ret i64 %1, !insn.addr !821
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4690:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !822
  ret i64* %0, !insn.addr !823
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_46b4:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !824
  %1 = inttoptr i64 %0 to i64*, !insn.addr !825
  ret i64* %1, !insn.addr !825
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46d8:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !826
  ret i64 %0, !insn.addr !827
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !828
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv() local_unnamed_addr {
dec_label_pc_4710:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !829
  %3 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %2), !insn.addr !829
  ret i64 %3, !insn.addr !830
}

define i64 @function_4740() local_unnamed_addr {
dec_label_pc_4740:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !831
  ret i64 %0, !insn.addr !831
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4744:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !832
  %1 = load i64, i64* %0, align 8, !insn.addr !833
  ret i64 %1, !insn.addr !834
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_476c:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !835
  %1 = bitcast i32** %0 to i64*, !insn.addr !836
  ret i64* %1, !insn.addr !836
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4790:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !837
  %1 = inttoptr i64 %0 to i32**, !insn.addr !838
  ret i32** %1, !insn.addr !838
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_47b4:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !839
  ret i64 %0, !insn.addr !840
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_47d8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !841
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_47ec:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2), !insn.addr !842
  ret void, !insn.addr !843
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4818:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !844
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !845
  %2 = inttoptr i64 %1 to i64*, !insn.addr !846
  store i64 %0, i64* %2, align 8, !insn.addr !846
  ret void, !insn.addr !847

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_485c:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !848
  ret void, !insn.addr !849
}

define i64 @function_4884() local_unnamed_addr {
dec_label_pc_4884:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !850
  ret i64 %0, !insn.addr !850
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4888:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !851
  %1 = ptrtoint i64* %0 to i64, !insn.addr !851
  ret i64 %1, !insn.addr !852
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48ac:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !853
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !854
  ret void, !insn.addr !855

; uselistorder directives
  uselistorder void (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev, { 1, 0 }
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48dc:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result), !insn.addr !856
  ret void, !insn.addr !857
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4900:
  ret void, !insn.addr !858
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4910:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !859
  %1 = bitcast i32** %0 to i64*, !insn.addr !860
  ret i64* %1, !insn.addr !860
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4934:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !861
  %1 = inttoptr i64 %0 to i32**, !insn.addr !862
  ret i32** %1, !insn.addr !862
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4958:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !863
  ret i64 %0, !insn.addr !864

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv() local_unnamed_addr {
dec_label_pc_497c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !865
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %2), !insn.addr !865
  ret i64 %3, !insn.addr !866
}

define i64 @function_49ac() local_unnamed_addr {
dec_label_pc_49ac:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !867
  ret i64 %0, !insn.addr !867
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i32* %arg1) local_unnamed_addr {
dec_label_pc_49b0:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !868
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !869
  br i1 %2, label %dec_label_pc_49e0, label %dec_label_pc_49d4, !insn.addr !869

dec_label_pc_49d4:                                ; preds = %dec_label_pc_49b0
  %3 = inttoptr i64 %1 to i64*, !insn.addr !870
  %4 = and i64 %1, 4294967295
  %5 = inttoptr i64 %4 to i64*, !insn.addr !870
  call void @_ZdaPv(i64* %3, i64* %5), !insn.addr !870
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !871
  br label %dec_label_pc_49e0, !insn.addr !871

dec_label_pc_49e0:                                ; preds = %dec_label_pc_49d4, %dec_label_pc_49b0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !872

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 3, 4, 0, 1 }
  uselistorder i64 0, { 69, 70, 71, 7, 72, 0, 73, 74, 75, 76, 2, 1, 3, 4, 9, 5, 37, 44, 6, 38, 45, 39, 40, 10, 66, 67, 68, 77, 78, 46, 41, 42, 43, 64, 8, 65, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_49ec:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !873
  %1 = ptrtoint i64* %0 to i64, !insn.addr !873
  ret i64 %1, !insn.addr !874
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a10:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !875
  ret i64* %0, !insn.addr !876
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a34:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !877
  %1 = inttoptr i64 %0 to i64*, !insn.addr !878
  ret i64* %1, !insn.addr !878
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a58:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* bitcast (i32* @0 to i64*)), !insn.addr !879
  ret i64 %0, !insn.addr !880
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4a7c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !881
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv() local_unnamed_addr {
dec_label_pc_4a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !882
  %3 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %2), !insn.addr !882
  ret i64 %3, !insn.addr !883
}

define i64 @function_4ac0() local_unnamed_addr {
dec_label_pc_4ac0:
  %0 = call i64 @__clang_call_terminate(), !insn.addr !884
  ret i64 %0, !insn.addr !884

; uselistorder directives
  uselistorder i64 ()* @__clang_call_terminate, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4ac4:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !885
  %1 = load i64, i64* %0, align 8, !insn.addr !886
  ret i64 %1, !insn.addr !887
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4aec:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !888
  %1 = bitcast i32** %0 to i64*, !insn.addr !889
  ret i64* %1, !insn.addr !889
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b10:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !890
  %1 = inttoptr i64 %0 to i32**, !insn.addr !891
  ret i32** %1, !insn.addr !891
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b34:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !892
  ret i64 %0, !insn.addr !893

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4b58:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32***, !insn.addr !894
  ret i32*** %2, !insn.addr !894
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_4b6c:
  %0 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !895
  %1 = load i32**, i32*** %0, align 8, !insn.addr !896
  %2 = ptrtoint i32** %1 to i64, !insn.addr !896
  store i64 %2, i64* %result, align 8, !insn.addr !897
  ret void, !insn.addr !898

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
  uselistorder i32* @0, { 5, 6, 0, 1, 2, 3, 4 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_4ba8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !899

; uselistorder directives
  uselistorder i32 1, { 76, 75, 74, 73, 79, 72, 71, 70, 69, 68, 67, 80, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 81, 47, 46, 45, 44, 43, 116, 78, 42, 41, 82, 40, 117, 39, 38, 118, 119, 37, 83, 36, 95, 35, 34, 33, 32, 84, 31, 85, 30, 29, 28, 27, 26, 25, 24, 23, 93, 89, 88, 87, 86, 22, 21, 20, 19, 18, 17, 16, 91, 100, 99, 98, 97, 96, 94, 15, 102, 101, 14, 103, 13, 104, 106, 105, 0, 92, 108, 107, 77, 12, 11, 10, 109, 9, 8, 7, 110, 6, 5, 4, 112, 111, 3, 2, 113, 114, 90, 115, 1 }
}

declare i64 @_Znam(i64) local_unnamed_addr

declare i64 @_ZSt9terminatev() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i64 @__cxa_finalize.6(i64) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @_ZdlPv(i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i64 @__cxa_bad_typeid(i64) local_unnamed_addr

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

declare i64 @__gmon_start__.19(i64) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

!0 = !{i64 6548}
!1 = !{i64 6556}
!2 = !{i64 6604}
!3 = !{i64 6620}
!4 = !{i64 6636}
!5 = !{i64 6652}
!6 = !{i64 6668}
!7 = !{i64 6684}
!8 = !{i64 6700}
!9 = !{i64 6716}
!10 = !{i64 6732}
!11 = !{i64 6748}
!12 = !{i64 6764}
!13 = !{i64 6780}
!14 = !{i64 6796}
!15 = !{i64 6812}
!16 = !{i64 6828}
!17 = !{i64 6844}
!18 = !{i64 6860}
!19 = !{i64 6876}
!20 = !{i64 6892}
!21 = !{i64 6924}
!22 = !{i64 6940}
!23 = !{i64 6956}
!24 = !{i64 6972}
!25 = !{i64 7000}
!26 = !{i64 7012}
!27 = !{i64 7024}
!28 = !{i64 7036}
!29 = !{i64 7048}
!30 = !{i64 7056}
!31 = !{i64 7136}
!32 = !{i64 7148}
!33 = !{i64 7152}
!34 = !{i64 7160}
!35 = !{i64 7164}
!36 = !{i64 7168}
!37 = !{i64 7172}
!38 = !{i64 7228}
!39 = !{i64 7288}
!40 = !{i64 7296}
!41 = !{i64 7312}
!42 = !{i64 7316}
!43 = !{i64 7324}
!44 = !{i64 7328}
!45 = !{i64 7336}
!46 = !{i64 7340}
!47 = !{i64 7344}
!48 = !{i64 7352}
!49 = !{i64 7364}
!50 = !{i64 7376}
!51 = !{i64 7412}
!52 = !{i64 7424}
!53 = !{i64 7432}
!54 = !{i64 7436}
!55 = !{i64 7452}
!56 = !{i64 7456}
!57 = !{i64 7460}
!58 = !{i64 7464}
!59 = !{i64 7476}
!60 = !{i64 7484}
!61 = !{i64 7496}
!62 = !{i64 7528}
!63 = !{i64 7540}
!64 = !{i64 7544}
!65 = !{i64 7568}
!66 = !{i64 7572}
!67 = !{i64 7588}
!68 = !{i64 7600}
!69 = !{i64 7604}
!70 = !{i64 7612}
!71 = !{i64 7620}
!72 = !{i64 7640}
!73 = !{i64 7648}
!74 = !{i64 7656}
!75 = !{i64 7660}
!76 = !{i64 7672}
!77 = !{i64 7712}
!78 = !{i64 7724}
!79 = !{i64 7744}
!80 = !{i64 7756}
!81 = !{i64 7772}
!82 = !{i64 7776}
!83 = !{i64 7800}
!84 = !{i64 7804}
!85 = !{i64 7844}
!86 = !{i64 7872}
!87 = !{i64 7900}
!88 = !{i64 7908}
!89 = !{i64 7916}
!90 = !{i64 7928}
!91 = !{i64 7936}
!92 = !{i64 7952}
!93 = !{i64 7956}
!94 = !{i64 7960}
!95 = !{i64 7964}
!96 = !{i64 7968}
!97 = !{i64 7972}
!98 = !{i64 7976}
!99 = !{i64 7980}
!100 = !{i64 7984}
!101 = !{i64 7988}
!102 = !{i64 7992}
!103 = !{i64 7996}
!104 = !{i64 8000}
!105 = !{i64 8008}
!106 = !{i64 8012}
!107 = !{i64 8036}
!108 = !{i64 8108}
!109 = !{i64 8120}
!110 = !{i64 8124}
!111 = !{i64 8136}
!112 = !{i64 8140}
!113 = !{i64 8152}
!114 = !{i64 8156}
!115 = !{i64 8172}
!116 = !{i64 8176}
!117 = !{i64 8180}
!118 = !{i64 8184}
!119 = !{i64 8192}
!120 = !{i64 8200}
!121 = !{i64 8208}
!122 = !{i64 8216}
!123 = !{i64 8220}
!124 = !{i64 8224}
!125 = !{i64 8236}
!126 = !{i64 8244}
!127 = !{i64 8252}
!128 = !{i64 8256}
!129 = !{i64 8268}
!130 = !{i64 8288}
!131 = !{i64 8292}
!132 = !{i64 8300}
!133 = !{i64 8304}
!134 = !{i64 8312}
!135 = !{i64 8320}
!136 = !{i64 8344}
!137 = !{i64 8348}
!138 = !{i64 8352}
!139 = !{i64 8356}
!140 = !{i64 8384}
!141 = !{i64 8404}
!142 = !{i64 8408}
!143 = !{i64 8412}
!144 = !{i64 8416}
!145 = !{i64 8424}
!146 = !{i64 8440}
!147 = !{i64 8444}
!148 = !{i64 8468}
!149 = !{i64 8476}
!150 = !{i64 8480}
!151 = !{i64 8484}
!152 = !{i64 8496}
!153 = !{i64 8504}
!154 = !{i64 8512}
!155 = !{i64 8516}
!156 = !{i64 8528}
!157 = !{i64 8564}
!158 = !{i64 8584}
!159 = !{i64 8596}
!160 = !{i64 8620}
!161 = !{i64 8624}
!162 = !{i64 8632}
!163 = !{i64 8648}
!164 = !{i64 8660}
!165 = !{i64 8676}
!166 = !{i64 8680}
!167 = !{i64 8684}
!168 = !{i64 8696}
!169 = !{i64 8720}
!170 = !{i64 8736}
!171 = !{i64 8752}
!172 = !{i64 8764}
!173 = !{i64 8768}
!174 = !{i64 8784}
!175 = !{i64 8788}
!176 = !{i64 8792}
!177 = !{i64 8796}
!178 = !{i64 8800}
!179 = !{i64 8812}
!180 = !{i64 8844}
!181 = !{i64 8856}
!182 = !{i64 8868}
!183 = !{i64 8880}
!184 = !{i64 8896}
!185 = !{i64 8900}
!186 = !{i64 8908}
!187 = !{i64 8912}
!188 = !{i64 8916}
!189 = !{i64 8936}
!190 = !{i64 8952}
!191 = !{i64 8964}
!192 = !{i64 8972}
!193 = !{i64 8976}
!194 = !{i64 8980}
!195 = !{i64 8992}
!196 = !{i64 9004}
!197 = !{i64 9056}
!198 = !{i64 9068}
!199 = !{i64 9088}
!200 = !{i64 9104}
!201 = !{i64 9116}
!202 = !{i64 9136}
!203 = !{i64 9140}
!204 = !{i64 9144}
!205 = !{i64 9148}
!206 = !{i64 9180}
!207 = !{i64 9208}
!208 = !{i64 9216}
!209 = !{i64 9240}
!210 = !{i64 9248}
!211 = !{i64 9256}
!212 = !{i64 9264}
!213 = !{i64 9268}
!214 = !{i64 9272}
!215 = !{i64 9276}
!216 = !{i64 9280}
!217 = !{i64 9296}
!218 = !{i64 9308}
!219 = !{i64 9312}
!220 = !{i64 9316}
!221 = !{i64 9324}
!222 = !{i64 9328}
!223 = !{i64 9332}
!224 = !{i64 9336}
!225 = !{i64 9340}
!226 = !{i64 9584}
!227 = !{i64 9604}
!228 = !{i64 9616}
!229 = !{i64 9628}
!230 = !{i64 9636}
!231 = !{i64 9640}
!232 = !{i64 9656}
!233 = !{i64 9664}
!234 = !{i64 9680}
!235 = !{i64 9688}
!236 = !{i64 9692}
!237 = !{i64 9704}
!238 = !{i64 9716}
!239 = !{i64 9720}
!240 = !{i64 9736}
!241 = !{i64 9744}
!242 = !{i64 9752}
!243 = !{i64 9760}
!244 = !{i64 9768}
!245 = !{i64 9780}
!246 = !{i64 9792}
!247 = !{i64 9796}
!248 = !{i64 9808}
!249 = !{i64 9820}
!250 = !{i64 9824}
!251 = !{i64 9840}
!252 = !{i64 9856}
!253 = !{i64 9864}
!254 = !{i64 9868}
!255 = !{i64 9880}
!256 = !{i64 9896}
!257 = !{i64 9904}
!258 = !{i64 9916}
!259 = !{i64 9924}
!260 = !{i64 9932}
!261 = !{i64 9940}
!262 = !{i64 9956}
!263 = !{i64 9960}
!264 = !{i64 9964}
!265 = !{i64 9968}
!266 = !{i64 9972}
!267 = !{i64 9976}
!268 = !{i64 9980}
!269 = !{i64 9984}
!270 = !{i64 9988}
!271 = !{i64 9992}
!272 = !{i64 9996}
!273 = !{i64 10000}
!274 = !{i64 10004}
!275 = !{i64 10008}
!276 = !{i64 10012}
!277 = !{i64 10016}
!278 = !{i64 10020}
!279 = !{i64 10024}
!280 = !{i64 10028}
!281 = !{i64 10032}
!282 = !{i64 10036}
!283 = !{i64 10040}
!284 = !{i64 10044}
!285 = !{i64 10048}
!286 = !{i64 10052}
!287 = !{i64 10056}
!288 = !{i64 10060}
!289 = !{i64 10068}
!290 = !{i64 10072}
!291 = !{i64 10112}
!292 = !{i64 10128}
!293 = !{i64 10132}
!294 = !{i64 10172}
!295 = !{i64 10184}
!296 = !{i64 10212}
!297 = !{i64 10236}
!298 = !{i64 10240}
!299 = !{i64 10252}
!300 = !{i64 10264}
!301 = !{i64 10276}
!302 = !{i64 10280}
!303 = !{i64 10288}
!304 = !{i64 10296}
!305 = !{i64 10308}
!306 = !{i64 10312}
!307 = !{i64 10316}
!308 = !{i64 10336}
!309 = !{i64 10344}
!310 = !{i64 10348}
!311 = !{i64 10364}
!312 = !{i64 10372}
!313 = !{i64 10376}
!314 = !{i64 10400}
!315 = !{i64 10408}
!316 = !{i64 10432}
!317 = !{i64 10468}
!318 = !{i64 10476}
!319 = !{i64 10436}
!320 = !{i64 10500}
!321 = !{i64 10504}
!322 = !{i64 10536}
!323 = !{i64 10568}
!324 = !{i64 10604}
!325 = !{i64 10616}
!326 = !{i64 10624}
!327 = !{i64 10632}
!328 = !{i64 10644}
!329 = !{i64 10676}
!330 = !{i64 10712}
!331 = !{i64 10724}
!332 = !{i64 10732}
!333 = !{i64 10740}
!334 = !{i64 10752}
!335 = !{i64 10760}
!336 = !{i64 10776}
!337 = !{i64 10780}
!338 = !{i64 10804}
!339 = !{i64 10800}
!340 = !{i64 10824}
!341 = !{i64 10840}
!342 = !{i64 10836}
!343 = !{i64 10860}
!344 = !{i64 10788}
!345 = !{i64 10880}
!346 = !{i64 10900}
!347 = !{i64 10904}
!348 = !{i64 10920}
!349 = !{i64 10924}
!350 = !{i64 10940}
!351 = !{i64 10944}
!352 = !{i64 10960}
!353 = !{i64 10964}
!354 = !{i64 10980}
!355 = !{i64 10984}
!356 = !{i64 11000}
!357 = !{i64 11004}
!358 = !{i64 11020}
!359 = !{i64 11024}
!360 = !{i64 11040}
!361 = !{i64 11044}
!362 = !{i64 11060}
!363 = !{i64 11064}
!364 = !{i64 11080}
!365 = !{i64 11084}
!366 = !{i64 11100}
!367 = !{i64 11104}
!368 = !{i64 11120}
!369 = !{i64 11124}
!370 = !{i64 11140}
!371 = !{i64 11148}
!372 = !{i64 11176}
!373 = !{i64 11192}
!374 = !{i64 11232}
!375 = !{i64 11244}
!376 = !{i64 11272}
!377 = !{i64 11292}
!378 = !{i64 11308}
!379 = !{i64 11320}
!380 = !{i64 11340}
!381 = !{i64 11380}
!382 = !{i64 11392}
!383 = !{i64 11408}
!384 = !{i64 11424}
!385 = !{i64 11428}
!386 = !{i64 11468}
!387 = !{i64 11480}
!388 = !{i64 11488}
!389 = !{i64 11500}
!390 = !{i64 11512}
!391 = !{i64 11544}
!392 = !{i64 11556}
!393 = !{i64 11576}
!394 = !{i64 11600}
!395 = !{i64 11612}
!396 = !{i64 11636}
!397 = !{i64 11660}
!398 = !{i64 11664}
!399 = !{i64 11696}
!400 = !{i64 11708}
!401 = !{i64 11720}
!402 = !{i64 11724}
!403 = !{i64 11736}
!404 = !{i64 11760}
!405 = !{i64 11772}
!406 = !{i64 11796}
!407 = !{i64 11808}
!408 = !{i64 11832}
!409 = !{i64 11844}
!410 = !{i64 11868}
!411 = !{i64 11880}
!412 = !{i64 11904}
!413 = !{i64 11916}
!414 = !{i64 11940}
!415 = !{i64 11952}
!416 = !{i64 11976}
!417 = !{i64 11988}
!418 = !{i64 12008}
!419 = !{i64 12032}
!420 = !{i64 12056}
!421 = !{i64 12060}
!422 = !{i64 12084}
!423 = !{i64 12088}
!424 = !{i64 12100}
!425 = !{i64 12124}
!426 = !{i64 12136}
!427 = !{i64 12160}
!428 = !{i64 12172}
!429 = !{i64 12196}
!430 = !{i64 12208}
!431 = !{i64 12248}
!432 = !{i64 12252}
!433 = !{i64 12264}
!434 = !{i64 12272}
!435 = !{i64 12284}
!436 = !{i64 12296}
!437 = !{i64 12308}
!438 = !{i64 12316}
!439 = !{i64 12332}
!440 = !{i64 12340}
!441 = !{i64 12376}
!442 = !{i64 12384}
!443 = !{i64 12388}
!444 = !{i64 12396}
!445 = !{i64 12400}
!446 = !{i64 12412}
!447 = !{i64 12420}
!448 = !{i64 12424}
!449 = !{i64 12456}
!450 = !{i64 12476}
!451 = !{i64 12484}
!452 = !{i64 12492}
!453 = !{i64 12512}
!454 = !{i64 12516}
!455 = !{i64 12548}
!456 = !{i64 12560}
!457 = !{i64 12584}
!458 = !{i64 12596}
!459 = !{i64 12600}
!460 = !{i64 12624}
!461 = !{i64 12628}
!462 = !{i64 12632}
!463 = !{i64 12652}
!464 = !{i64 12660}
!465 = !{i64 12684}
!466 = !{i64 12692}
!467 = !{i64 12696}
!468 = !{i64 12728}
!469 = !{i64 12740}
!470 = !{i64 12744}
!471 = !{i64 12752}
!472 = !{i64 12756}
!473 = !{i64 12760}
!474 = !{i64 12772}
!475 = !{i64 12800}
!476 = !{i64 12808}
!477 = !{i64 12856}
!478 = !{i64 12868}
!479 = !{i64 12876}
!480 = !{i64 12888}
!481 = !{i64 12908}
!482 = !{i64 12916}
!483 = !{i64 12928}
!484 = !{i64 12940}
!485 = !{i64 12944}
!486 = !{i64 12952}
!487 = !{i64 12976}
!488 = !{i64 12988}
!489 = !{i64 13004}
!490 = !{i64 13056}
!491 = !{i64 13064}
!492 = !{i64 13068}
!493 = !{i64 13084}
!494 = !{i64 13088}
!495 = !{i64 13100}
!496 = !{i64 13128}
!497 = !{i64 13132}
!498 = !{i64 13140}
!499 = !{i64 13152}
!500 = !{i64 13236}
!501 = !{i64 13240}
!502 = !{i64 13252}
!503 = !{i64 13264}
!504 = !{i64 13268}
!505 = !{i64 13288}
!506 = !{i64 13292}
!507 = !{i64 13296}
!508 = !{i64 13308}
!509 = !{i64 13344}
!510 = !{i64 13352}
!511 = !{i64 13356}
!512 = !{i64 13368}
!513 = !{i64 13396}
!514 = !{i64 13404}
!515 = !{i64 13412}
!516 = !{i64 13452}
!517 = !{i64 13456}
!518 = !{i64 13464}
!519 = !{i64 13468}
!520 = !{i64 13476}
!521 = !{i64 13480}
!522 = !{i64 13492}
!523 = !{i64 13496}
!524 = !{i64 13540}
!525 = !{i64 13552}
!526 = !{i64 13560}
!527 = !{i64 13564}
!528 = !{i64 13576}
!529 = !{i64 13592}
!530 = !{i64 13612}
!531 = !{i64 13616}
!532 = !{i64 13620}
!533 = !{i64 13624}
!534 = !{i64 13628}
!535 = !{i64 13636}
!536 = !{i64 13664}
!537 = !{i64 13704}
!538 = !{i64 13776}
!539 = !{i64 13816}
!540 = !{i64 13828}
!541 = !{i64 13836}
!542 = !{i64 13852}
!543 = !{i64 13860}
!544 = !{i64 13884}
!545 = !{i64 13892}
!546 = !{i64 13872}
!547 = !{i64 13908}
!548 = !{i64 13916}
!549 = !{i64 13920}
!550 = !{i64 13924}
!551 = !{i64 13928}
!552 = !{i64 13936}
!553 = !{i64 13940}
!554 = !{i64 13948}
!555 = !{i64 13964}
!556 = !{i64 13980}
!557 = !{i64 13988}
!558 = !{i64 14004}
!559 = !{i64 14012}
!560 = !{i64 14032}
!561 = !{i64 14048}
!562 = !{i64 14056}
!563 = !{i64 14072}
!564 = !{i64 14080}
!565 = !{i64 14104}
!566 = !{i64 14112}
!567 = !{i64 14128}
!568 = !{i64 14136}
!569 = !{i64 14140}
!570 = !{i64 14144}
!571 = !{i64 14148}
!572 = !{i64 14156}
!573 = !{i64 14256}
!574 = !{i64 14272}
!575 = !{i64 14280}
!576 = !{i64 14312}
!577 = !{i64 14328}
!578 = !{i64 14332}
!579 = !{i64 14372}
!580 = !{i64 14384}
!581 = !{i64 14404}
!582 = !{i64 14436}
!583 = !{i64 14448}
!584 = !{i64 14480}
!585 = !{i64 14496}
!586 = !{i64 14500}
!587 = !{i64 14544}
!588 = !{i64 14552}
!589 = !{i64 14564}
!590 = !{i64 14592}
!591 = !{i64 14604}
!592 = !{i64 14608}
!593 = !{i64 14620}
!594 = !{i64 14632}
!595 = !{i64 14640}
!596 = !{i64 14648}
!597 = !{i64 14660}
!598 = !{i64 14664}
!599 = !{i64 14692}
!600 = !{i64 14704}
!601 = !{i64 14708}
!602 = !{i64 14720}
!603 = !{i64 14732}
!604 = !{i64 14748}
!605 = !{i64 14756}
!606 = !{i64 14764}
!607 = !{i64 14776}
!608 = !{i64 14780}
!609 = !{i64 14824}
!610 = !{i64 14836}
!611 = !{i64 14848}
!612 = !{i64 14892}
!613 = !{i64 14904}
!614 = !{i64 14916}
!615 = !{i64 14920}
!616 = !{i64 14948}
!617 = !{i64 14956}
!618 = !{i64 14964}
!619 = !{i64 14972}
!620 = !{i64 14988}
!621 = !{i64 14996}
!622 = !{i64 15004}
!623 = !{i64 15028}
!624 = !{i64 15032}
!625 = !{i64 15036}
!626 = !{i64 15044}
!627 = !{i64 15076}
!628 = !{i64 15096}
!629 = !{i64 15116}
!630 = !{i64 15136}
!631 = !{i64 15140}
!632 = !{i64 15148}
!633 = !{i64 15200}
!634 = !{i64 15224}
!635 = !{i64 15252}
!636 = !{i64 15260}
!637 = !{i64 15272}
!638 = !{i64 15296}
!639 = !{i64 15324}
!640 = !{i64 15332}
!641 = !{i64 15344}
!642 = !{i64 15372}
!643 = !{i64 15380}
!644 = !{i64 15408}
!645 = !{i64 15416}
!646 = !{i64 15436}
!647 = !{i64 15464}
!648 = !{i64 15472}
!649 = !{i64 15484}
!650 = !{i64 15504}
!651 = !{i64 15528}
!652 = !{i64 15544}
!653 = !{i64 15552}
!654 = !{i64 15568}
!655 = !{i64 15576}
!656 = !{i64 15596}
!657 = !{i64 15612}
!658 = !{i64 15640}
!659 = !{i64 15648}
!660 = !{i64 15660}
!661 = !{i64 15680}
!662 = !{i64 15696}
!663 = !{i64 15724}
!664 = !{i64 15732}
!665 = !{i64 15744}
!666 = !{i64 15772}
!667 = !{i64 15780}
!668 = !{i64 15808}
!669 = !{i64 15812}
!670 = !{i64 15820}
!671 = !{i64 15824}
!672 = !{i64 15832}
!673 = !{i64 15860}
!674 = !{i64 15864}
!675 = !{i64 15872}
!676 = !{i64 15876}
!677 = !{i64 15884}
!678 = !{i64 15904}
!679 = !{i64 15908}
!680 = !{i64 15912}
!681 = !{i64 15916}
!682 = !{i64 15924}
!683 = !{i64 15960}
!684 = !{i64 15968}
!685 = !{i64 15972}
!686 = !{i64 15984}
!687 = !{i64 16012}
!688 = !{i64 16020}
!689 = !{i64 16032}
!690 = !{i64 16064}
!691 = !{i64 16084}
!692 = !{i64 16088}
!693 = !{i64 16096}
!694 = !{i64 16116}
!695 = !{i64 16120}
!696 = !{i64 16128}
!697 = !{i64 16148}
!698 = !{i64 16152}
!699 = !{i64 16156}
!700 = !{i64 16160}
!701 = !{i64 16168}
!702 = !{i64 16204}
!703 = !{i64 16212}
!704 = !{i64 16216}
!705 = !{i64 16228}
!706 = !{i64 16256}
!707 = !{i64 16264}
!708 = !{i64 16276}
!709 = !{i64 16308}
!710 = !{i64 16328}
!711 = !{i64 16332}
!712 = !{i64 16340}
!713 = !{i64 16360}
!714 = !{i64 16364}
!715 = !{i64 16372}
!716 = !{i64 16392}
!717 = !{i64 16396}
!718 = !{i64 16400}
!719 = !{i64 16404}
!720 = !{i64 16412}
!721 = !{i64 16440}
!722 = !{i64 16448}
!723 = !{i64 16460}
!724 = !{i64 16484}
!725 = !{i64 16500}
!726 = !{i64 16508}
!727 = !{i64 16524}
!728 = !{i64 16532}
!729 = !{i64 16564}
!730 = !{i64 16584}
!731 = !{i64 16588}
!732 = !{i64 16596}
!733 = !{i64 16616}
!734 = !{i64 16620}
!735 = !{i64 16628}
!736 = !{i64 16648}
!737 = !{i64 16664}
!738 = !{i64 16692}
!739 = !{i64 16700}
!740 = !{i64 16712}
!741 = !{i64 16732}
!742 = !{i64 16752}
!743 = !{i64 16792}
!744 = !{i64 16796}
!745 = !{i64 16800}
!746 = !{i64 16812}
!747 = !{i64 16816}
!748 = !{i64 16828}
!749 = !{i64 16860}
!750 = !{i64 16872}
!751 = !{i64 16908}
!752 = !{i64 16920}
!753 = !{i64 16928}
!754 = !{i64 16944}
!755 = !{i64 16956}
!756 = !{i64 16960}
!757 = !{i64 16980}
!758 = !{i64 17012}
!759 = !{i64 17024}
!760 = !{i64 17048}
!761 = !{i64 17060}
!762 = !{i64 17068}
!763 = !{i64 17072}
!764 = !{i64 17108}
!765 = !{i64 17124}
!766 = !{i64 17136}
!767 = !{i64 17156}
!768 = !{i64 17180}
!769 = !{i64 17192}
!770 = !{i64 17216}
!771 = !{i64 17228}
!772 = !{i64 17252}
!773 = !{i64 17264}
!774 = !{i64 17284}
!775 = !{i64 17312}
!776 = !{i64 17320}
!777 = !{i64 17344}
!778 = !{i64 17356}
!779 = !{i64 17384}
!780 = !{i64 17392}
!781 = !{i64 17404}
!782 = !{i64 17424}
!783 = !{i64 17440}
!784 = !{i64 17468}
!785 = !{i64 17476}
!786 = !{i64 17488}
!787 = !{i64 17508}
!788 = !{i64 17532}
!789 = !{i64 17544}
!790 = !{i64 17572}
!791 = !{i64 17580}
!792 = !{i64 17592}
!793 = !{i64 17612}
!794 = !{i64 17644}
!795 = !{i64 17656}
!796 = !{i64 17688}
!797 = !{i64 17704}
!798 = !{i64 17712}
!799 = !{i64 17724}
!800 = !{i64 17748}
!801 = !{i64 17764}
!802 = !{i64 17768}
!803 = !{i64 17796}
!804 = !{i64 17804}
!805 = !{i64 17816}
!806 = !{i64 17840}
!807 = !{i64 17852}
!808 = !{i64 17868}
!809 = !{i64 17876}
!810 = !{i64 17892}
!811 = !{i64 17916}
!812 = !{i64 17940}
!813 = !{i64 17944}
!814 = !{i64 17948}
!815 = !{i64 17976}
!816 = !{i64 17988}
!817 = !{i64 17992}
!818 = !{i64 18004}
!819 = !{i64 18024}
!820 = !{i64 18048}
!821 = !{i64 18060}
!822 = !{i64 18084}
!823 = !{i64 18096}
!824 = !{i64 18120}
!825 = !{i64 18132}
!826 = !{i64 18156}
!827 = !{i64 18168}
!828 = !{i64 18188}
!829 = !{i64 18212}
!830 = !{i64 18236}
!831 = !{i64 18240}
!832 = !{i64 18264}
!833 = !{i64 18268}
!834 = !{i64 18280}
!835 = !{i64 18304}
!836 = !{i64 18316}
!837 = !{i64 18340}
!838 = !{i64 18352}
!839 = !{i64 18376}
!840 = !{i64 18388}
!841 = !{i64 18408}
!842 = !{i64 18440}
!843 = !{i64 18452}
!844 = !{i64 18484}
!845 = !{i64 18500}
!846 = !{i64 18508}
!847 = !{i64 18520}
!848 = !{i64 18544}
!849 = !{i64 18560}
!850 = !{i64 18564}
!851 = !{i64 18588}
!852 = !{i64 18600}
!853 = !{i64 18628}
!854 = !{i64 18636}
!855 = !{i64 18648}
!856 = !{i64 18672}
!857 = !{i64 18684}
!858 = !{i64 18700}
!859 = !{i64 18724}
!860 = !{i64 18736}
!861 = !{i64 18760}
!862 = !{i64 18772}
!863 = !{i64 18796}
!864 = !{i64 18808}
!865 = !{i64 18832}
!866 = !{i64 18856}
!867 = !{i64 18860}
!868 = !{i64 18864}
!869 = !{i64 18892}
!870 = !{i64 18904}
!871 = !{i64 18908}
!872 = !{i64 18920}
!873 = !{i64 18944}
!874 = !{i64 18956}
!875 = !{i64 18980}
!876 = !{i64 18992}
!877 = !{i64 19016}
!878 = !{i64 19028}
!879 = !{i64 19052}
!880 = !{i64 19064}
!881 = !{i64 19084}
!882 = !{i64 19108}
!883 = !{i64 19132}
!884 = !{i64 19136}
!885 = !{i64 19160}
!886 = !{i64 19164}
!887 = !{i64 19176}
!888 = !{i64 19200}
!889 = !{i64 19212}
!890 = !{i64 19236}
!891 = !{i64 19248}
!892 = !{i64 19272}
!893 = !{i64 19284}
!894 = !{i64 19304}
!895 = !{i64 19340}
!896 = !{i64 19348}
!897 = !{i64 19352}
!898 = !{i64 19364}
!899 = !{i64 19384}
