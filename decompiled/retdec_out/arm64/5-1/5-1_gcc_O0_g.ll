source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%vtable_167f8_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_16820_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_16848_type = type { void (i64*)*, void (i64*)*, i64 ()* }
%vtable_16878_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_16948_type = type { i64 ()* }
%vtable_169b0_type = type { i64 ()* }
%vtable_16a10_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_16a38_type = type { i64 ()*, void (i64*)*, void (i64*)*, i64 ()* }
%vtable_16a90_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_16ab8_type = type { i64 ()*, void (i64*)*, void (i64*)* }
%vtable_16ae0_type = type { i64 (i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%vtable_16b10_type = type { i64 (i32)*, i64 ()*, void (i64*)*, void (i64*)* }
%_Unwind_Exception = type { i32 }

@global_var_16ee8 = local_unnamed_addr global i64 6208
@global_var_16ef0 = local_unnamed_addr global i64 6208
@global_var_16ef8 = local_unnamed_addr global i64 6208
@global_var_16f00 = local_unnamed_addr global i64 6208
@global_var_16f08 = local_unnamed_addr global i64 6208
@global_var_16f10 = local_unnamed_addr global i64 6208
@global_var_16f18 = local_unnamed_addr global i64 6208
@global_var_16f20 = local_unnamed_addr global i64 6208
@global_var_16f28 = local_unnamed_addr global i64 6208
@global_var_16f30 = local_unnamed_addr global i64 6208
@global_var_16f38 = local_unnamed_addr global i64 6208
@global_var_16f40 = local_unnamed_addr global i64 6208
@global_var_16f48 = local_unnamed_addr global i64 6208
@global_var_16f50 = local_unnamed_addr global i64 6208
@global_var_16f58 = local_unnamed_addr global i64 6208
@global_var_16f60 = local_unnamed_addr global i64 6208
@global_var_16f68 = local_unnamed_addr global i64 6208
@global_var_16f70 = local_unnamed_addr global i64 6208
@global_var_16f78 = local_unnamed_addr global i64 6208
@global_var_16f80 = local_unnamed_addr global i64 6208
@global_var_16f88 = local_unnamed_addr global i64 6208
@global_var_16f98 = local_unnamed_addr global i64 6208
@global_var_16fa0 = local_unnamed_addr global i64 6208
@global_var_16fa8 = local_unnamed_addr global i64 6208
@global_var_16fb0 = local_unnamed_addr global i64 6208
@global_var_16fd0 = local_unnamed_addr global i64 10404
@global_var_17000 = global i64 0
@global_var_17030 = global i64 0
@global_var_16fd8 = local_unnamed_addr global i64 0
@global_var_17008 = external global i64
@global_var_1af4 = local_unnamed_addr constant i64 4107496579118661664
@global_var_16fc8 = local_unnamed_addr global i64 0
@global_var_45d0 = constant [5 x i8] c"Test\00"
@global_var_16fc0 = local_unnamed_addr global i64 0
@global_var_233c = local_unnamed_addr constant i64 -7493992679810793440
@global_var_16b80 = local_unnamed_addr global i64 0
@global_var_235c = local_unnamed_addr constant [3 x i8] c"?\08\00"
@global_var_16b48 = global i64 0
@global_var_16b30 = global i64 0
@global_var_16b60 = global i64 0
@global_var_17040 = global i64 0
@global_var_1234 = global i64 400290951987200
@global_var_45d8 = constant [5 x i8] c"Base\00"
@global_var_45e0 = constant [8 x i8] c"Derived\00"
@global_var_16a68 = global i64 12800
@global_var_16900 = external global i64
@global_var_16980 = local_unnamed_addr global i64 13104
@global_var_169e8 = local_unnamed_addr global i64 13172
@global_var_168e0 = global i64 13240
@global_var_168a8 = global i64 13256
@global_var_16910 = external global i64
@0 = external global i32
@global_var_3e8 = global i32 0
@global_var_47e8 = local_unnamed_addr constant double 0x51EB851F40091EB8
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_45e8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_4610 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_4630 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_4650 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_4670 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_4690 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_46b0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_46d0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_46f0 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_4710 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_4730 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_4750 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_4770 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_17038 = local_unnamed_addr global i32* null
@global_var_17039 = global i32 0
@global_var_167f8 = global %vtable_167f8_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }
@global_var_16820 = global %vtable_16820_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_16848 = global %vtable_16848_type { void (i64*)* @_ZN8RTTIBaseD2Ev, void (i64*)* @_ZN8RTTIBaseD0Ev, i64 ()* @_ZNK8RTTIBase7getTypeEv }
@global_var_16878 = global %vtable_16878_type { i64 ()* @_ZN14DiamondDerived4funcEv, void (i64*)* @_ZN14DiamondDerivedD1Ev, void (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_16948 = local_unnamed_addr global %vtable_16948_type { i64 ()* @_ZN7MiddleA4funcEv }
@global_var_169b0 = local_unnamed_addr global %vtable_169b0_type { i64 ()* @_ZN7MiddleB4funcEv }
@global_var_16a10 = global %vtable_16a10_type { i64 ()* @_ZN11VirtualBase4funcEv, void (i64*)* @_ZN11VirtualBaseD2Ev, void (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_16a38 = global %vtable_16a38_type { i64 ()* @_ZN12MultiDerived5funcAEv, void (i64*)* @_ZN12MultiDerivedD2Ev, void (i64*)* @_ZN12MultiDerivedD0Ev, i64 ()* @_ZN12MultiDerived5funcBEv }
@global_var_16a90 = global %vtable_16a90_type { i64 ()* @_ZN5BaseB5funcBEv, void (i64*)* @_ZN5BaseBD2Ev, void (i64*)* @_ZN5BaseBD0Ev }
@global_var_16ab8 = global %vtable_16ab8_type { i64 ()* @_ZN5BaseA5funcAEv, void (i64*)* @_ZN5BaseAD2Ev, void (i64*)* @_ZN5BaseAD0Ev }
@global_var_16ae0 = global %vtable_16ae0_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, void (i64*)* @_ZN7DerivedD2Ev, void (i64*)* @_ZN7DerivedD0Ev }
@global_var_16b10 = global %vtable_16b10_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, void (i64*)* @_ZN4BaseD2Ev, void (i64*)* @_ZN4BaseD0Ev }

define i64 @_init(i64 %arg1) local_unnamed_addr {
dec_label_pc_1820:
  %0 = call i64 @call_weak_fn(), !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @function_1860(i64 %arg1) local_unnamed_addr {
dec_label_pc_1860:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !2
  ret i64 %0, !insn.addr !2
}

define i32 @function_1870(i8* %s) local_unnamed_addr {
dec_label_pc_1870:
  %0 = call i32 @puts(i8* %s), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_1880(i8* %s) local_unnamed_addr {
dec_label_pc_1880:
  %0 = call i32 @strlen(i8* %s), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_1890() local_unnamed_addr {
dec_label_pc_1890:
  call void @__stack_chk_fail(), !insn.addr !5
  ret void, !insn.addr !5
}

define i64 @function_18a0(i64 %arg1) local_unnamed_addr {
dec_label_pc_18a0:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !6
  ret i64 %0, !insn.addr !6
}

define i64 @function_18b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b0:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define void @function_18c0(i64* %d) local_unnamed_addr {
dec_label_pc_18c0:
  call void @__cxa_finalize(i64* %d), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_18d0(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_18d0:
  %0 = call i32 @__libc_start_main(i64 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64 @function_18e0(i64 %arg1) local_unnamed_addr {
dec_label_pc_18e0:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !10
  ret i64 %0, !insn.addr !10
}

define i64 @function_18f0(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_18f0:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i8* @function_1900(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1900:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i64 @function_1910(i32* %arg1) local_unnamed_addr {
dec_label_pc_1910:
  %0 = call i64 @__cxa_bad_typeid(i32* %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_1920(i32* %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1920:
  %0 = call i64 @__dynamic_cast(i32* %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define i32 @function_1930(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_1930:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define void @function_1940(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1940:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !16
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !16
  ret void, !insn.addr !16
}

define i64 @function_1950(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1950:
  %0 = call i64 @__cxa_throw_bad_array_new_length(i64 %arg1, i64 %arg2), !insn.addr !17
  ret i64 %0, !insn.addr !17
}

define i32 @function_1960(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1960:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i64 @function_1970(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1970:
  %0 = call i64 @__cxa_rethrow(i32 %arg1, i32 %arg2), !insn.addr !19
  ret i64 %0, !insn.addr !19
}

define i64 @function_1980() local_unnamed_addr {
dec_label_pc_1980:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !20
  ret i64 %0, !insn.addr !20
}

define void @function_1990() local_unnamed_addr {
dec_label_pc_1990:
  call void @abort(), !insn.addr !21
  ret void, !insn.addr !21
}

define i64 @function_19a0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_19a0:
  %0 = call i64 @__cxa_end_catch(i64 %arg1, i64 %arg2), !insn.addr !22
  ret i64 %0, !insn.addr !22
}

define i64 @function_19c0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_19c0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define void @function_19d0(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_19d0:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !24
  ret void, !insn.addr !24
}

define void @function_19e0() local_unnamed_addr {
dec_label_pc_19e0:
  call void @__gmon_start__(), !insn.addr !25
  ret void, !insn.addr !25
}

define i32 @function_19f0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_19f0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i64 @_start(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %stack_var_8 = alloca i64, align 8
  %2 = load i64, i64* @global_var_16fd0, align 8, !insn.addr !27
  %3 = trunc i64 %arg1 to i32, !insn.addr !28
  %4 = bitcast i64* %stack_var_8 to i8**, !insn.addr !28
  %5 = inttoptr i64 %1 to void ()*, !insn.addr !28
  %6 = call i32 @__libc_start_main(i64 %2, i32 %3, i8** nonnull %4, void ()* null, void ()* null, void ()* %5), !insn.addr !28
  call void @abort(), !insn.addr !29
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !29
}

define i64 @call_weak_fn() local_unnamed_addr {
dec_label_pc_1a34:
  %0 = load i64, i64* inttoptr (i64 94184 to i64*), align 8, !insn.addr !30
  %1 = icmp eq i64 %0, 0, !insn.addr !31
  br i1 %1, label %dec_label_pc_1a44, label %dec_label_pc_1a40, !insn.addr !31

dec_label_pc_1a40:                                ; preds = %dec_label_pc_1a34
  call void @__gmon_start__(), !insn.addr !32
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !32

dec_label_pc_1a44:                                ; preds = %dec_label_pc_1a34
  ret i64 0, !insn.addr !33
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1a50:
  ret i64 ptrtoint (i64* @global_var_17030 to i64), !insn.addr !34
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1a80:
  ret i64 ptrtoint (i64* @global_var_17030 to i64), !insn.addr !35
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1ac0:
  %x0.0.reg2mem = alloca i64, !insn.addr !36
  %0 = load i8, i8* bitcast (i64* @global_var_17030 to i8*), align 8, !insn.addr !37
  %1 = zext i8 %0 to i64, !insn.addr !37
  %2 = icmp eq i8 %0, 0, !insn.addr !38
  store i64 %1, i64* %x0.0.reg2mem, !insn.addr !38
  br i1 %2, label %dec_label_pc_1ad8, label %dec_label_pc_1afc, !insn.addr !38

dec_label_pc_1ad8:                                ; preds = %dec_label_pc_1ac0
  %3 = load i64, i64* @global_var_16fd8, align 8, !insn.addr !39
  %4 = icmp eq i64 %3, 0, !insn.addr !40
  br i1 %4, label %dec_label_pc_1af0, label %dec_label_pc_1ae4, !insn.addr !40

dec_label_pc_1ae4:                                ; preds = %dec_label_pc_1ad8
  %5 = load i64, i64* inttoptr (i64 add (i64 ptrtoint (i64* @global_var_17000 to i64), i64 8) to i64*), align 8, !insn.addr !41
  %6 = inttoptr i64 %5 to i64*, !insn.addr !42
  call void @__cxa_finalize(i64* %6), !insn.addr !42
  br label %dec_label_pc_1af0, !insn.addr !42

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1ae4, %dec_label_pc_1ad8
  %7 = call i64 @deregister_tm_clones(), !insn.addr !43
  store i8 1, i8* bitcast (i64* @global_var_17030 to i8*), align 8, !insn.addr !44
  store i64 1, i64* %x0.0.reg2mem, !insn.addr !44
  br label %dec_label_pc_1afc, !insn.addr !44

dec_label_pc_1afc:                                ; preds = %dec_label_pc_1ac0, %dec_label_pc_1af0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !45

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1afc, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = call i64 @register_tm_clones(), !insn.addr !46
  ret i64 %0, !insn.addr !46
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1b14:
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !47
  %1 = inttoptr i64 %0 to i64*, !insn.addr !48
  %2 = load i64, i64* %1, align 8, !insn.addr !48
  call void @_ZN11SimpleClassC2EiPKc(i64* nonnull %stack_var_-40, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_45d0, i64 0, i64 0)), !insn.addr !49
  %3 = call i64 @_ZN11SimpleClass8setValueEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !50
  %4 = call i64 @_ZNK11SimpleClass8getValueEv(), !insn.addr !51
  %5 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %stack_var_-40, i32 3), !insn.addr !52
  %6 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !53
  %7 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !54
  %8 = inttoptr i64 %7 to i64*, !insn.addr !55
  %9 = load i64, i64* %8, align 8, !insn.addr !55
  %10 = icmp eq i64 %2, %9, !insn.addr !56
  br i1 %10, label %dec_label_pc_1bb0, label %dec_label_pc_1bac, !insn.addr !57

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b14
  call void @__stack_chk_fail(), !insn.addr !58
  br label %dec_label_pc_1bb0, !insn.addr !58

dec_label_pc_1bb0:                                ; preds = %dec_label_pc_1bac, %dec_label_pc_1b14
  %11 = add i64 %5, %4, !insn.addr !59
  %12 = add i64 %11, %6, !insn.addr !60
  %13 = trunc i64 %12 to i32, !insn.addr !61
  ret i32 %13, !insn.addr !62
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1bbc:
  %stack_var_-16 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !63
  %1 = inttoptr i64 %0 to i64*, !insn.addr !64
  %2 = load i64, i64* %1, align 8, !insn.addr !64
  call void @_ZN14LifecycleClassC2Em(i64* nonnull %stack_var_-16, i64 5), !insn.addr !65
  %3 = call i64 @_ZNK14LifecycleClass7getDataEm(i64 ptrtoint (i32* @0 to i64)), !insn.addr !66
  %4 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !67
  call void @_ZN14LifecycleClassD2Ev(i64* nonnull %stack_var_-16), !insn.addr !68
  %5 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !69
  %6 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !70
  %7 = inttoptr i64 %6 to i64*, !insn.addr !71
  %8 = load i64, i64* %7, align 8, !insn.addr !71
  %9 = icmp eq i64 %2, %8, !insn.addr !72
  br i1 %9, label %dec_label_pc_1c64, label %dec_label_pc_1c60, !insn.addr !73

dec_label_pc_1c60:                                ; preds = %dec_label_pc_1bbc
  call void @__stack_chk_fail(), !insn.addr !74
  br label %dec_label_pc_1c64, !insn.addr !74

dec_label_pc_1c64:                                ; preds = %dec_label_pc_1c60, %dec_label_pc_1bbc
  %10 = add i64 %4, %3, !insn.addr !75
  %11 = mul i64 %5, zext (i32 ptrtoint (i32* @global_var_3e8 to i32) to i64), !insn.addr !76
  %12 = add i64 %10, %11, !insn.addr !77
  %13 = trunc i64 %12 to i32, !insn.addr !78
  ret i32 %13, !insn.addr !79

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !80
  ret i32 %1, !insn.addr !80
}

define i64 @function_1c98(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1c98:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !81
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1ca0:
  %stack_var_-16 = alloca i64, align 8
  %pb_-40 = alloca i32*, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !82
  %1 = inttoptr i64 %0 to i64*, !insn.addr !83
  %2 = load i64, i64* %1, align 8, !insn.addr !83
  store i32* bitcast (%vtable_16b10_type* @global_var_16b10 to i32*), i32** %pb_-40, align 8, !insn.addr !84
  call void @_ZN7DerivedC2Ei(i64* nonnull %stack_var_-16, i32 3), !insn.addr !85
  %3 = call i64 @_ZN4Base12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !86
  %4 = call i64 @_ZN7Derived12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !87
  %5 = bitcast i32** %pb_-40 to i64*, !insn.addr !88
  %6 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %5, i32 5), !insn.addr !88
  %7 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-16, i32 5), !insn.addr !89
  call void @_ZN7DerivedD2Ev(i64* nonnull %stack_var_-16), !insn.addr !90
  call void @_ZN4BaseD2Ev(i64* nonnull %5), !insn.addr !91
  %8 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !92
  %9 = inttoptr i64 %8 to i64*, !insn.addr !93
  %10 = load i64, i64* %9, align 8, !insn.addr !93
  %11 = icmp eq i64 %2, %10, !insn.addr !94
  br i1 %11, label %dec_label_pc_1d98, label %dec_label_pc_1d94, !insn.addr !95

dec_label_pc_1d94:                                ; preds = %dec_label_pc_1ca0
  call void @__stack_chk_fail(), !insn.addr !96
  br label %dec_label_pc_1d98, !insn.addr !96

dec_label_pc_1d98:                                ; preds = %dec_label_pc_1d94, %dec_label_pc_1ca0
  %12 = trunc i64 %3 to i32, !insn.addr !97
  %13 = trunc i64 %4 to i32, !insn.addr !98
  %14 = add i32 %13, %12, !insn.addr !99
  %15 = add i32 %14, %6, !insn.addr !100
  %16 = add i32 %15, %7, !insn.addr !101
  ret i32 %16, !insn.addr !102

; uselistorder directives
  uselistorder i32 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1da8:
  %stack_var_-32 = alloca i64, align 8
  call void @_ZN12MultiDerivedC2Ev(i64* nonnull %stack_var_-32), !insn.addr !103
  %0 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !104
  %1 = trunc i64 %0 to i32, !insn.addr !105
  ret i32 %1, !insn.addr !105
}

define i64 @function_1e08(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e08:
  ret i64 %arg1, !insn.addr !106
}

define i64 @function_1e20(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e20:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %stack_var_72 = alloca i64, align 8
  %4 = load i32, i32* %1
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  call void @_ZN12MultiDerivedD2Ev(i64* nonnull %stack_var_72), !insn.addr !107
  %7 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !108
  %8 = inttoptr i64 %7 to i64*, !insn.addr !109
  %9 = load i64, i64* %8, align 8, !insn.addr !109
  %10 = icmp eq i64 %3, %9, !insn.addr !110
  br i1 %10, label %dec_label_pc_1e94, label %dec_label_pc_1e90, !insn.addr !111

dec_label_pc_1e90:                                ; preds = %dec_label_pc_1e20
  call void @__stack_chk_fail(), !insn.addr !112
  br label %dec_label_pc_1e94, !insn.addr !112

dec_label_pc_1e94:                                ; preds = %dec_label_pc_1e90, %dec_label_pc_1e20
  %11 = trunc i64 %2 to i32, !insn.addr !113
  %12 = icmp eq i64 %6, %5, !insn.addr !114
  %13 = icmp ne i1 %12, true, !insn.addr !115
  %14 = zext i1 %13 to i32, !insn.addr !115
  %15 = add i32 %4, %11, !insn.addr !116
  %16 = add i32 %15, %14, !insn.addr !117
  %17 = zext i32 %16 to i64, !insn.addr !118
  ret i64 %17, !insn.addr !119

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1ea4:
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  call void @_ZN14DiamondDerivedC1Ev(i64* nonnull %stack_var_-48), !insn.addr !120
  %0 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !121
  %1 = trunc i64 %0 to i32, !insn.addr !122
  ret i32 %1, !insn.addr !122
}

define i64 @function_1ef4(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ef4:
  ret i64 %arg1, !insn.addr !123
}

define i64 @function_1f14(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1f14:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %stack_var_56 = alloca i64, align 8
  %4 = load i32, i32* %1
  call void @_ZN14DiamondDerivedD1Ev(i64* nonnull %stack_var_56), !insn.addr !124
  %5 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !125
  %6 = inttoptr i64 %5 to i64*, !insn.addr !126
  %7 = load i64, i64* %6, align 8, !insn.addr !126
  %8 = icmp eq i64 %3, %7, !insn.addr !127
  br i1 %8, label %dec_label_pc_1f68, label %dec_label_pc_1f64, !insn.addr !128

dec_label_pc_1f64:                                ; preds = %dec_label_pc_1f14
  call void @__stack_chk_fail(), !insn.addr !129
  br label %dec_label_pc_1f68, !insn.addr !129

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f64, %dec_label_pc_1f14
  %9 = trunc i64 %2 to i32, !insn.addr !130
  %10 = add i32 %4, %9, !insn.addr !131
  %11 = zext i32 %10 to i64, !insn.addr !132
  ret i64 %11, !insn.addr !133

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1f78:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %p3_-16 = alloca i64, align 8
  %p2_-24 = alloca i64, align 8
  %2 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !134
  %3 = inttoptr i64 %2 to i64*, !insn.addr !135
  %4 = load i64, i64* %3, align 8, !insn.addr !135
  call void @_ZN5PointC2Eii(i64* nonnull %p2_-24, i32 1, i32 2), !insn.addr !136
  call void @_ZN5PointC2Eii(i64* nonnull %p3_-16, i32 3, i32 4), !insn.addr !137
  %5 = call i64 @_ZNK5PointplERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !138
  %6 = call i64 @_ZNK5PointeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !139
  %7 = call i64 @_ZN5PointppEv(), !insn.addr !140
  %8 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !141
  %9 = inttoptr i64 %8 to i64*, !insn.addr !142
  %10 = load i64, i64* %9, align 8, !insn.addr !142
  %11 = icmp eq i64 %4, %10, !insn.addr !143
  br i1 %11, label %dec_label_pc_2028, label %dec_label_pc_2024, !insn.addr !144

dec_label_pc_2024:                                ; preds = %dec_label_pc_1f78
  call void @__stack_chk_fail(), !insn.addr !145
  br label %dec_label_pc_2028, !insn.addr !145

dec_label_pc_2028:                                ; preds = %dec_label_pc_2024, %dec_label_pc_1f78
  %12 = trunc i64 %5 to i32, !insn.addr !146
  %13 = add i32 %1, %12, !insn.addr !147
  %14 = urem i64 %6, 256
  %15 = icmp eq i64 %14, 0, !insn.addr !148
  %. = select i1 %15, i32 10, i32 0
  %16 = add i32 %13, %., !insn.addr !149
  ret i32 %16, !insn.addr !150
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2034:
  %0 = alloca i128
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %r2_-16 = alloca double, align 8
  %r1_-20 = alloca i32, align 4
  %3 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !151
  %4 = inttoptr i64 %3 to i64*, !insn.addr !152
  %5 = load i64, i64* %4, align 8, !insn.addr !152
  %6 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !153
  %7 = trunc i128 %2 to i64, !insn.addr !154
  %8 = bitcast i64 %7 to double, !insn.addr !154
  %9 = trunc i128 %1 to i64, !insn.addr !154
  %10 = bitcast i64 %9 to double, !insn.addr !154
  %11 = call double @_Z12template_maxIdET_S0_S0_(double %8, double %10), !insn.addr !154
  store i32 10, i32* %r1_-20, align 4, !insn.addr !155
  store double 9.881310e-323, double* %r2_-16, align 8, !insn.addr !156
  %12 = bitcast double* %r2_-16 to i32*, !insn.addr !157
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %r1_-20, i32* nonnull %12), !insn.addr !157
  %13 = load i32, i32* %r1_-20, align 4, !insn.addr !158
  %14 = load double, double* %r2_-16, align 8, !insn.addr !159
  %15 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !160
  %16 = inttoptr i64 %15 to i64*, !insn.addr !161
  %17 = load i64, i64* %16, align 8, !insn.addr !161
  %18 = icmp eq i64 %5, %17, !insn.addr !162
  br i1 %18, label %dec_label_pc_20d0, label %dec_label_pc_20cc, !insn.addr !163

dec_label_pc_20cc:                                ; preds = %dec_label_pc_2034
  call void @__stack_chk_fail(), !insn.addr !164
  br label %dec_label_pc_20d0, !insn.addr !164

dec_label_pc_20d0:                                ; preds = %dec_label_pc_20cc, %dec_label_pc_2034
  %19 = add i32 %6, 2, !insn.addr !165
  %20 = add i32 %19, %13, !insn.addr !166
  %21 = fptrunc double %14 to float, !insn.addr !159
  %22 = bitcast float %21 to i32, !insn.addr !159
  %23 = add i32 %20, %22, !insn.addr !167
  ret i32 %23, !insn.addr !168

; uselistorder directives
  uselistorder i32* %r1_-20, { 1, 0, 2 }
  uselistorder double* %r2_-16, { 1, 0, 2 }
  uselistorder i128* %0, { 1, 0 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_20dc:
  %stack_var_-88 = alloca i64, align 8
  %stack_var_-136 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !169
  %1 = inttoptr i64 %0 to i64*, !insn.addr !170
  %2 = load i64, i64* %1, align 8, !insn.addr !170
  call void @_ZN9ContainerIiEC2Ev(i64* nonnull %stack_var_-136), !insn.addr !171
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !172
  %4 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !173
  %5 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !174
  %6 = call i64 @_ZNK9ContainerIiE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !175
  %7 = call i64 @_ZNK9ContainerIiE7getSizeEv(), !insn.addr !176
  call void @_ZN9ContainerIdEC2Ev(i64* nonnull %stack_var_-88), !insn.addr !177
  %8 = call i64 @_ZN9ContainerIdE4pushEd(double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !178
  %9 = call i64 @_ZNK9ContainerIdE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !179
  %10 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !180
  %11 = inttoptr i64 %10 to i64*, !insn.addr !181
  %12 = load i64, i64* %11, align 8, !insn.addr !181
  %13 = icmp eq i64 %2, %12, !insn.addr !182
  br i1 %13, label %dec_label_pc_21a4, label %dec_label_pc_21a0, !insn.addr !183

dec_label_pc_21a0:                                ; preds = %dec_label_pc_20dc
  call void @__stack_chk_fail(), !insn.addr !184
  br label %dec_label_pc_21a4, !insn.addr !184

dec_label_pc_21a4:                                ; preds = %dec_label_pc_21a0, %dec_label_pc_20dc
  %sext = mul i64 %6, 4294967296
  %14 = ashr exact i64 %sext, 32, !insn.addr !185
  %15 = bitcast i64 %14 to double, !insn.addr !185
  %16 = trunc i64 %7 to i32, !insn.addr !186
  %17 = fptrunc double %15 to float, !insn.addr !187
  %18 = bitcast float %17 to i32, !insn.addr !187
  %19 = add i32 %18, %16, !insn.addr !188
  ret i32 %19, !insn.addr !189

; uselistorder directives
  uselistorder i64 (i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %x0 = alloca i64, align 8
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !190
  %4 = add i64 %2, 8, !insn.addr !191
  %5 = inttoptr i64 %4 to i64*, !insn.addr !191
  %6 = load i64, i64* %5, align 8, !insn.addr !191
  %7 = inttoptr i64 %6 to i32*, !insn.addr !192
  %8 = load i32, i32* %7, align 4, !insn.addr !192
  %9 = add i32 %8, 5, !insn.addr !193
  store i32 %9, i32* %7, align 4, !insn.addr !194
  %10 = bitcast i64* %x0 to i32*
  %11 = load i32, i32* %10, align 8, !insn.addr !195
  %12 = mul i32 %11, %3, !insn.addr !196
  %13 = load i64, i64* %5, align 8, !insn.addr !197
  %14 = inttoptr i64 %13 to i32*, !insn.addr !198
  %15 = load i32, i32* %14, align 4, !insn.addr !198
  %16 = add i32 %15, %12, !insn.addr !199
  %17 = zext i32 %16 to i64, !insn.addr !199
  ret i64 %17, !insn.addr !200

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2200:
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !201
  %1 = inttoptr i64 %0 to i64*, !insn.addr !202
  %2 = load i64, i64* %1, align 8, !insn.addr !202
  %3 = call i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !203
  %4 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !204
  %5 = inttoptr i64 %4 to i64*, !insn.addr !205
  %6 = load i64, i64* %5, align 8, !insn.addr !205
  %7 = icmp eq i64 %2, %6, !insn.addr !206
  br i1 %7, label %dec_label_pc_2284, label %dec_label_pc_2280, !insn.addr !207

dec_label_pc_2280:                                ; preds = %dec_label_pc_2200
  call void @__stack_chk_fail(), !insn.addr !208
  br label %dec_label_pc_2284, !insn.addr !208

dec_label_pc_2284:                                ; preds = %dec_label_pc_2280, %dec_label_pc_2200
  %8 = trunc i64 %3 to i32
  %9 = add i32 %8, 30, !insn.addr !209
  ret i32 %9, !insn.addr !210
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_2290:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !211
  %1 = inttoptr i64 %0 to i32*, !insn.addr !212
  store i32 42, i32* %1, align 4, !insn.addr !212
  %2 = load i64, i64* @global_var_16fc0, align 8, !insn.addr !213
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !214
  ret i32 0, !insn.addr !215

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i32* %arg1) local_unnamed_addr {
dec_label_pc_23b4:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !216
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !217
  store i32 -1, i32* %2, align 4, !insn.addr !217
  %3 = icmp eq i64 %1, 0, !insn.addr !218
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !219
  br i1 %3, label %dec_label_pc_23e4, label %dec_label_pc_23dc, !insn.addr !219

dec_label_pc_23dc:                                ; preds = %dec_label_pc_23b4
  %4 = inttoptr i64 %1 to i64*, !insn.addr !220
  %5 = call i64 @_ZdlPvm(i64* %4, i64 4), !insn.addr !220
  store i64 %5, i64* %x0.0.reg2mem, !insn.addr !220
  br label %dec_label_pc_23e4, !insn.addr !220

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23dc, %dec_label_pc_23b4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !221

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_23f0:
  %stack_var_-8 = alloca i64, align 8
  %r2_-48 = alloca i32, align 4
  %ptr3_-16 = alloca i64, align 8
  %arr_-24 = alloca i64, align 8
  %ptr2_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !222
  %1 = inttoptr i64 %0 to i64*, !insn.addr !223
  %2 = load i64, i64* %1, align 8, !insn.addr !223
  %3 = call i64 @_Znwm(i64 4), !insn.addr !224
  %4 = inttoptr i64 %3 to i32*, !insn.addr !225
  store i32 100, i32* %4, align 4, !insn.addr !225
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* nonnull %ptr2_-32, i32* %4), !insn.addr !226
  %5 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %ptr2_-32), !insn.addr !227
  %6 = inttoptr i64 %5 to i32*, !insn.addr !228
  store i32 200, i32* %6, align 4, !insn.addr !228
  %7 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** bitcast (i32* @0 to i64**)), !insn.addr !229
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* nonnull %arr_-24, i64* %7), !insn.addr !230
  %8 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %arr_-24), !insn.addr !231
  %9 = inttoptr i64 %8 to i32*, !insn.addr !232
  %10 = load i32, i32* %9, align 4, !insn.addr !232
  %11 = call i64 @_Znam(i64 20), !insn.addr !233
  %12 = inttoptr i64 %11 to i32*, !insn.addr !234
  store i32 1, i32* %12, align 4, !insn.addr !234
  %13 = add i64 %11, 4, !insn.addr !235
  %14 = inttoptr i64 %13 to i32*, !insn.addr !236
  store i32 2, i32* %14, align 4, !insn.addr !236
  %15 = add i64 %11, 8, !insn.addr !237
  %16 = inttoptr i64 %15 to i32*, !insn.addr !238
  store i32 3, i32* %16, align 4, !insn.addr !238
  %17 = add i64 %11, 12, !insn.addr !239
  %18 = inttoptr i64 %17 to i32*, !insn.addr !240
  store i32 4, i32* %18, align 4, !insn.addr !240
  %19 = add i64 %11, 16, !insn.addr !241
  %20 = inttoptr i64 %19 to i32*, !insn.addr !242
  store i32 5, i32* %20, align 4, !insn.addr !242
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* nonnull %ptr3_-16, i32* %12), !insn.addr !243
  %21 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %ptr3_-16, i64 2), !insn.addr !244
  %22 = inttoptr i64 %21 to i32*, !insn.addr !245
  %23 = load i32, i32* %22, align 4, !insn.addr !245
  %24 = call i64 @_Znwm(i64 4), !insn.addr !246
  %25 = inttoptr i64 %24 to i32*, !insn.addr !247
  store i32 500, i32* %25, align 4, !insn.addr !247
  %26 = inttoptr i64 %24 to i64*, !insn.addr !248
  %27 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* nonnull %stack_var_-8, i64* %26, i32* nonnull %r2_-48, i64* nonnull %stack_var_-8), !insn.addr !248
  %28 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* nonnull %stack_var_-8), !insn.addr !249
  %29 = inttoptr i64 %28 to i32*, !insn.addr !250
  %30 = load i32, i32* %29, align 4, !insn.addr !250
  %31 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(), !insn.addr !251
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* nonnull %ptr3_-16), !insn.addr !252
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %arr_-24), !insn.addr !253
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %ptr2_-32), !insn.addr !254
  %32 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !255
  %33 = inttoptr i64 %32 to i64*, !insn.addr !256
  %34 = load i64, i64* %33, align 8, !insn.addr !256
  %35 = icmp eq i64 %2, %34, !insn.addr !257
  br i1 %35, label %dec_label_pc_2590, label %dec_label_pc_258c, !insn.addr !258

dec_label_pc_258c:                                ; preds = %dec_label_pc_23f0
  call void @__stack_chk_fail(), !insn.addr !259
  br label %dec_label_pc_2590, !insn.addr !259

dec_label_pc_2590:                                ; preds = %dec_label_pc_258c, %dec_label_pc_23f0
  %36 = add i32 %23, %10, !insn.addr !260
  %37 = add i32 %36, %30, !insn.addr !261
  ret i32 %37, !insn.addr !262

; uselistorder directives
  uselistorder i64 %11, { 0, 1, 2, 4, 3 }
  uselistorder void (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 1, 0 }
  uselistorder i32 5, { 0, 4, 1, 2, 3 }
  uselistorder i64 (i64*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_25a0:
  %x0.0.reg2mem = alloca i64, !insn.addr !263
  %0 = call i64 @_Znwm(i64 8), !insn.addr !264
  %1 = inttoptr i64 %0 to i64*, !insn.addr !265
  store i64 0, i64* %1, align 8, !insn.addr !265
  call void @_ZN12RTTIDerivedAC2Ev(i64* %1), !insn.addr !266
  %2 = inttoptr i64 %0 to i32*, !insn.addr !267
  %3 = call i64 @_Znwm(i64 8), !insn.addr !268
  %4 = inttoptr i64 %3 to i64*, !insn.addr !269
  store i64 0, i64* %4, align 8, !insn.addr !269
  call void @_ZN12RTTIDerivedBC2Ev(i64* %4), !insn.addr !270
  %5 = icmp eq i64 %0, 0, !insn.addr !271
  br i1 %5, label %dec_label_pc_261c, label %dec_label_pc_25f4, !insn.addr !272

dec_label_pc_25f4:                                ; preds = %dec_label_pc_25a0
  %6 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !273
  br label %dec_label_pc_262c

dec_label_pc_261c:                                ; preds = %dec_label_pc_25a0
  %7 = call i64 @__cxa_bad_typeid(i32* %2), !insn.addr !274
  br label %dec_label_pc_262c, !insn.addr !274

dec_label_pc_262c:                                ; preds = %dec_label_pc_25f4, %dec_label_pc_261c
  %8 = trunc i64 %3 to i32, !insn.addr !275
  %9 = icmp eq i32 %8, 0, !insn.addr !276
  br i1 %9, label %dec_label_pc_2660, label %dec_label_pc_2638, !insn.addr !277

dec_label_pc_2638:                                ; preds = %dec_label_pc_262c
  %10 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !278
  br label %dec_label_pc_2670

dec_label_pc_2660:                                ; preds = %dec_label_pc_262c
  %sext = mul i64 %3, 4294967296
  %11 = ashr exact i64 %sext, 32, !insn.addr !279
  %12 = inttoptr i64 %11 to i32*, !insn.addr !280
  %13 = call i64 @__cxa_bad_typeid(i32* %12), !insn.addr !280
  br label %dec_label_pc_2670, !insn.addr !280

dec_label_pc_2670:                                ; preds = %dec_label_pc_2638, %dec_label_pc_2660
  br i1 %5, label %dec_label_pc_26c4, label %dec_label_pc_267c, !insn.addr !281

dec_label_pc_267c:                                ; preds = %dec_label_pc_2670
  %14 = call i64 @__dynamic_cast(i32* %2, i64* nonnull @global_var_16b60, i64* nonnull @global_var_16b48, i64 0), !insn.addr !282
  %phitmp = icmp eq i64 %14, 0
  br i1 %phitmp, label %dec_label_pc_26c4, label %dec_label_pc_26ac, !insn.addr !283

dec_label_pc_26ac:                                ; preds = %dec_label_pc_267c
  %15 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(), !insn.addr !284
  br label %dec_label_pc_26c4, !insn.addr !285

dec_label_pc_26c4:                                ; preds = %dec_label_pc_2670, %dec_label_pc_26ac, %dec_label_pc_267c
  br i1 %9, label %dec_label_pc_2718, label %dec_label_pc_26d0, !insn.addr !286

dec_label_pc_26d0:                                ; preds = %dec_label_pc_26c4
  %sext3 = mul i64 %3, 4294967296
  %16 = ashr exact i64 %sext3, 32, !insn.addr !287
  %17 = inttoptr i64 %16 to i32*, !insn.addr !288
  %18 = call i64 @__dynamic_cast(i32* %17, i64* nonnull @global_var_16b60, i64* nonnull @global_var_16b30, i64 0), !insn.addr !288
  %phitmp4 = icmp eq i64 %18, 0
  br i1 %phitmp4, label %dec_label_pc_2718, label %dec_label_pc_2700, !insn.addr !289

dec_label_pc_2700:                                ; preds = %dec_label_pc_26d0
  %19 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(), !insn.addr !290
  br label %dec_label_pc_2718, !insn.addr !291

dec_label_pc_2718:                                ; preds = %dec_label_pc_26c4, %dec_label_pc_2700, %dec_label_pc_26d0
  br i1 %5, label %dec_label_pc_2754, label %dec_label_pc_2724, !insn.addr !292

dec_label_pc_2724:                                ; preds = %dec_label_pc_2718
  %20 = call i64 @_ZNKSt9type_info4nameEv(), !insn.addr !293
  %21 = inttoptr i64 %20 to i8*, !insn.addr !294
  %22 = call i32 @strlen(i8* %21), !insn.addr !294
  store i64 %0, i64* %x0.0.reg2mem
  br label %dec_label_pc_2758

dec_label_pc_2754:                                ; preds = %dec_label_pc_2718
  %23 = call i64 @__cxa_bad_typeid(i32* %2), !insn.addr !295
  store i64 %23, i64* %x0.0.reg2mem, !insn.addr !295
  br label %dec_label_pc_2758, !insn.addr !295

dec_label_pc_2758:                                ; preds = %dec_label_pc_2724, %dec_label_pc_2754
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  %24 = trunc i64 %x0.0.reload to i32, !insn.addr !296
  ret i32 %24, !insn.addr !296

; uselistorder directives
  uselistorder i64 %0, { 0, 1, 3, 2 }
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i32*, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i32*)* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64 (i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2758, { 1, 0 }
  uselistorder label %dec_label_pc_2718, { 1, 2, 0 }
  uselistorder label %dec_label_pc_26c4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2670, { 1, 0 }
  uselistorder label %dec_label_pc_262c, { 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2794:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_45e8 to i8*)), !insn.addr !297
  %1 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !298
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4610 to i8*)), !insn.addr !299
  %3 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !300
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4630 to i8*)), !insn.addr !301
  %5 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !302
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4650 to i8*)), !insn.addr !303
  %7 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !304
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4670 to i8*)), !insn.addr !305
  %9 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !306
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4690 to i8*)), !insn.addr !307
  %11 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !308
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46b0 to i8*)), !insn.addr !309
  %13 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !310
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46d0 to i8*)), !insn.addr !311
  %15 = call i32 @_Z23test_cpp_template_classv(), !insn.addr !312
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46f0 to i8*)), !insn.addr !313
  %17 = call i32 @_Z15test_cpp_lambdav(), !insn.addr !314
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4710 to i8*)), !insn.addr !315
  %19 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !316
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4730 to i8*)), !insn.addr !317
  %21 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !318
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4750 to i8*)), !insn.addr !319
  %23 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !320
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4770 to i8*)), !insn.addr !321
  ret void, !insn.addr !322

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_28a4:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !323
  ret i32 0, !insn.addr !324
}

define i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_28bc:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i32* nonnull @0, i64** bitcast (i32* @0 to i64**)), !insn.addr !325
  ret i64 %0, !insn.addr !326
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* %this, i64* %result, i32* %arg3, i64* %arg4) local_unnamed_addr {
dec_label_pc_28ec:
  %0 = bitcast i64* %result to i32*, !insn.addr !327
  %1 = bitcast i32* %arg3 to i64**, !insn.addr !327
  %2 = call i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %this, i32* %0, i64** %1), !insn.addr !327
  ret i64 %2, !insn.addr !328
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev() local_unnamed_addr {
dec_label_pc_291c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !329
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %2), !insn.addr !329
  %4 = inttoptr i64 %3 to i64*, !insn.addr !330
  %5 = load i64, i64* %4, align 8, !insn.addr !330
  %6 = icmp eq i64 %5, 0, !insn.addr !331
  br i1 %6, label %dec_label_pc_296c, label %dec_label_pc_2948, !insn.addr !332

dec_label_pc_2948:                                ; preds = %dec_label_pc_291c
  %7 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %2), !insn.addr !333
  %8 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !334
  %9 = call i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i32* nonnull @0), !insn.addr !335
  br label %dec_label_pc_296c, !insn.addr !335

dec_label_pc_296c:                                ; preds = %dec_label_pc_2948, %dec_label_pc_291c
  store i64 0, i64* %4, align 8, !insn.addr !336
  ret i64 %3, !insn.addr !337
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_2984:
  %0 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result), !insn.addr !338
  ret i64 %0, !insn.addr !339
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i32* %arg1, i64** %arg2) local_unnamed_addr {
dec_label_pc_29a8:
  %0 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !340
  %1 = call i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i32*** bitcast (i32* @0 to i32***), i64** bitcast (i32* @0 to i64**)), !insn.addr !341
  ret i64 %1, !insn.addr !342
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_29f4:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !343
  %1 = ptrtoint i64* %0 to i64, !insn.addr !343
  ret i64 %1, !insn.addr !344
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_2a10:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result), !insn.addr !345
  ret i64 %0, !insn.addr !346
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_2a2c:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !347
  ret i64 %0, !insn.addr !348
}

define i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2a48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64**, !insn.addr !349
  ret i64** %2, !insn.addr !349
}

define i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i32*** %arg1, i64** %arg2) local_unnamed_addr {
dec_label_pc_2a5c:
  %0 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !350
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !351
  %2 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i32*** bitcast (i32* @0 to i32***), i64 ptrtoint (i32* @0 to i64)), !insn.addr !352
  ret i64 %2, !insn.addr !353
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2aac:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !354
  %1 = bitcast i32** %0 to i64*, !insn.addr !355
  ret i64* %1, !insn.addr !355
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_2ac8:
  %0 = call i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !356
  %1 = ptrtoint i64* %0 to i64, !insn.addr !356
  ret i64 %1, !insn.addr !357
}

define i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_2ae4:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %result), !insn.addr !358
  %1 = load i64, i64* %0, align 8, !insn.addr !359
  ret i64 %1, !insn.addr !360
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i32*** %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2b04:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !361
  %3 = inttoptr i64 %1 to i64*, !insn.addr !362
  %4 = bitcast i64** %2 to i64*, !insn.addr !362
  %5 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %3, i64* %4), !insn.addr !362
  %6 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !363
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %3, i32*** %6), !insn.addr !364
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !365

; uselistorder directives
  uselistorder i64** (i64*)* @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE, { 2, 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b58:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1), !insn.addr !366
  %1 = inttoptr i64 %0 to i32**, !insn.addr !367
  ret i32** %1, !insn.addr !367
}

define i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b74:
  %0 = call i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !368
  ret i64* %0, !insn.addr !369
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b90:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !370
  %1 = bitcast i32** %0 to i64*, !insn.addr !371
  ret i64* %1, !insn.addr !371
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_2bac:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !372
  ret i64 %0, !insn.addr !373
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2bd4:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !374
  ret i64 %0, !insn.addr !375
}

define i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2bf0:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1), !insn.addr !376
  %1 = inttoptr i64 %0 to i64*, !insn.addr !377
  ret i64* %1, !insn.addr !377
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c0c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1), !insn.addr !378
  %1 = inttoptr i64 %0 to i32**, !insn.addr !379
  ret i32** %1, !insn.addr !379
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !380
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c40:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !381
  ret i64 %0, !insn.addr !382
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c5c:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !383
  ret i64 %0, !insn.addr !384
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c78:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !385
}

define void @__static_initialization_and_destruction_0(i32 %__initialize_p, i32 %__priority) local_unnamed_addr {
dec_label_pc_2c8c:
  %0 = icmp eq i32 %__initialize_p, 1, !insn.addr !386
  %1 = icmp eq i32 %__priority, 65535, !insn.addr !387
  %or.cond = icmp eq i1 %0, %1
  br i1 %or.cond, label %dec_label_pc_2cb8, label %dec_label_pc_2ce0, !insn.addr !386

dec_label_pc_2cb8:                                ; preds = %dec_label_pc_2c8c
  %2 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !388
  %3 = load i64, i64* inttoptr (i64 94200 to i64*), align 8, !insn.addr !389
  %4 = inttoptr i64 %3 to void (i64*)*, !insn.addr !390
  %5 = call i32 @__cxa_atexit(void (i64*)* %4, i64* nonnull @global_var_17040, i64* nonnull @global_var_17008), !insn.addr !390
  br label %dec_label_pc_2ce0, !insn.addr !390

dec_label_pc_2ce0:                                ; preds = %dec_label_pc_2c8c, %dec_label_pc_2cb8
  ret void, !insn.addr !391

; uselistorder directives
  uselistorder label %dec_label_pc_2ce0, { 1, 0 }
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_2cec:
  call void @__static_initialization_and_destruction_0(i32 1, i32 65535), !insn.addr !392
  ret void, !insn.addr !393

; uselistorder directives
  uselistorder i32 65535, { 1, 0 }
}

define i64 @_ZNKSt9type_info4nameEv() local_unnamed_addr {
dec_label_pc_2d08:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 8, !insn.addr !394
  %3 = inttoptr i64 %2 to i64*, !insn.addr !394
  %4 = load i64, i64* %3, align 8, !insn.addr !394
  %5 = inttoptr i64 %4 to i8*, !insn.addr !395
  %6 = load i8, i8* %5, align 1, !insn.addr !395
  %7 = icmp eq i8 %6, 42, !insn.addr !396
  %8 = zext i1 %7 to i64
  %storemerge = add i64 %4, %8
  ret i64 %storemerge, !insn.addr !397
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2d44:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !398
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !399
  %4 = inttoptr i64 %3 to i64*, !insn.addr !399
  %5 = load i64, i64* %4, align 8, !insn.addr !399
  %6 = add i64 %1, 8, !insn.addr !400
  %7 = inttoptr i64 %6 to i64*, !insn.addr !400
  %8 = load i64, i64* %7, align 8, !insn.addr !400
  %9 = icmp eq i64 %5, %8, !insn.addr !401
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !402
  br i1 %9, label %dec_label_pc_2db0, label %dec_label_pc_2d6c, !insn.addr !402

dec_label_pc_2d6c:                                ; preds = %dec_label_pc_2d44
  %10 = inttoptr i64 %5 to i8*, !insn.addr !403
  %11 = load i8, i8* %10, align 1, !insn.addr !403
  %12 = icmp eq i8 %11, 42, !insn.addr !404
  br i1 %12, label %dec_label_pc_2dac, label %dec_label_pc_2d80, !insn.addr !405

dec_label_pc_2d80:                                ; preds = %dec_label_pc_2d6c
  %13 = inttoptr i64 %8 to i8*, !insn.addr !406
  %14 = call i32 @strcmp(i8* %10, i8* %13), !insn.addr !406
  %15 = icmp eq i32 %14, 0, !insn.addr !407
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !408
  br i1 %15, label %dec_label_pc_2db0, label %dec_label_pc_2dac, !insn.addr !408

dec_label_pc_2dac:                                ; preds = %dec_label_pc_2d80, %dec_label_pc_2d6c
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !409
  br label %dec_label_pc_2db0, !insn.addr !409

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d44, %dec_label_pc_2d80, %dec_label_pc_2dac
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !410

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2db0, { 2, 1, 0 }
}

define void @_ZN11SimpleClassC2EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_2db8:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !411
  store i32 %arg2, i32* %1, align 4, !insn.addr !411
  %2 = add i64 %0, 4, !insn.addr !412
  %3 = inttoptr i64 %2 to i8*, !insn.addr !413
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !413
  %5 = add i64 %0, 35, !insn.addr !414
  %6 = inttoptr i64 %5 to i8*, !insn.addr !414
  store i8 0, i8* %6, align 1, !insn.addr !414
  ret void, !insn.addr !415

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
}

define i64 @_ZNK11SimpleClass8getValueEv() local_unnamed_addr {
dec_label_pc_2e00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !416
  ret i64 %2, !insn.addr !417
}

define i64 @_ZN11SimpleClass8setValueEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_2e18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !418
  %4 = inttoptr i64 %2 to i32*, !insn.addr !419
  store i32 %3, i32* %4, align 4, !insn.addr !419
  ret i64 %2, !insn.addr !420

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2e3c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !421
  %5 = add i64 %2, 4, !insn.addr !422
  %6 = inttoptr i64 %5 to i8*, !insn.addr !423
  %7 = call i32 @strlen(i8* %6), !insn.addr !423
  %8 = add i32 %4, %7, !insn.addr !424
  %9 = zext i32 %8 to i64, !insn.addr !424
  ret i64 %9, !insn.addr !425
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_2e80:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !426
}

define void @_ZN14LifecycleClassC2Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_2e88:
  %storemerge.reg2mem = alloca i32, !insn.addr !427
  %stack_var_0.0.reg2mem = alloca i32, !insn.addr !427
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !428
  %2 = inttoptr i64 %1 to i64*, !insn.addr !428
  store i64 %arg2, i64* %2, align 8, !insn.addr !428
  %3 = icmp ult i64 %arg2, 2305843009213693950, !insn.addr !429
  %4 = icmp ne i1 %3, true, !insn.addr !429
  %5 = icmp eq i64 %arg2, 2305843009213693950, !insn.addr !429
  %6 = icmp ne i1 %5, true, !insn.addr !430
  %7 = icmp eq i1 %4, %6, !insn.addr !430
  br i1 %7, label %dec_label_pc_2ed0, label %dec_label_pc_2eb4, !insn.addr !430

dec_label_pc_2eb4:                                ; preds = %dec_label_pc_2e88
  %8 = mul i64 %arg2, 4, !insn.addr !431
  %9 = call i64 @_Znam(i64 %8), !insn.addr !432
  store i64 %9, i64* %result, align 8, !insn.addr !433
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !434
  br label %dec_label_pc_2f18, !insn.addr !434

dec_label_pc_2ed0:                                ; preds = %dec_label_pc_2e88
  %10 = call i64 @__cxa_throw_bad_array_new_length(i64 %arg2, i64 2305843009213693950), !insn.addr !435
  br label %dec_label_pc_2ed4, !insn.addr !435

dec_label_pc_2ed4:                                ; preds = %dec_label_pc_2f18, %dec_label_pc_2ed0
  %stack_var_0.0.reload = load i32, i32* %stack_var_0.0.reg2mem
  %11 = mul i32 %stack_var_0.0.reload, 10, !insn.addr !436
  %12 = sext i32 %stack_var_0.0.reload to i64, !insn.addr !437
  %13 = mul i64 %12, 4, !insn.addr !438
  %14 = add i64 %13, %0, !insn.addr !439
  %15 = inttoptr i64 %14 to i32*, !insn.addr !440
  store i32 %11, i32* %15, align 4, !insn.addr !440
  %16 = add i32 %stack_var_0.0.reload, 1, !insn.addr !441
  store i32 %16, i32* %storemerge.reg2mem, !insn.addr !442
  br label %dec_label_pc_2f18, !insn.addr !442

dec_label_pc_2f18:                                ; preds = %dec_label_pc_2ed4, %dec_label_pc_2eb4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %17 = sext i32 %storemerge.reload to i64, !insn.addr !443
  %18 = icmp ult i64 %17, %arg2, !insn.addr !444
  store i32 %storemerge.reload, i32* %stack_var_0.0.reg2mem, !insn.addr !445
  br i1 %18, label %dec_label_pc_2ed4, label %dec_label_pc_2f28, !insn.addr !445

dec_label_pc_2f28:                                ; preds = %dec_label_pc_2f18
  store i32 ptrtoint (i32* @global_var_17039 to i32), i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !446
  ret void, !insn.addr !447

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 1, 0 }
  uselistorder i32 %stack_var_0.0.reload, { 2, 0, 1 }
  uselistorder i32* %stack_var_0.0.reg2mem, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 10, { 1, 2, 0 }
  uselistorder i64 %arg2, { 1, 2, 0, 3, 4, 5 }
}

define void @_ZN14LifecycleClassD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_2f50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !448
  br i1 %2, label %dec_label_pc_2f78, label %dec_label_pc_2f6c, !insn.addr !449

dec_label_pc_2f6c:                                ; preds = %dec_label_pc_2f50
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !450
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !450
  br label %dec_label_pc_2f78, !insn.addr !450

dec_label_pc_2f78:                                ; preds = %dec_label_pc_2f6c, %dec_label_pc_2f50
  %5 = load i32, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !451
  %6 = add i32 %5, -1, !insn.addr !452
  store i32 %6, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !453
  ret void, !insn.addr !454
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64 %arg1) local_unnamed_addr {
dec_label_pc_2fa0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !455
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !456
  %4 = inttoptr i64 %3 to i64*, !insn.addr !456
  %5 = load i64, i64* %4, align 8, !insn.addr !456
  %6 = icmp ult i64 %1, %5, !insn.addr !457
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !458
  br i1 %6, label %dec_label_pc_2fc0, label %dec_label_pc_2fe0, !insn.addr !458

dec_label_pc_2fc0:                                ; preds = %dec_label_pc_2fa0
  %7 = mul i64 %1, 4, !insn.addr !459
  %8 = add i64 %2, %7, !insn.addr !460
  %9 = inttoptr i64 %8 to i32*, !insn.addr !461
  %10 = load i32, i32* %9, align 4, !insn.addr !461
  %11 = zext i32 %10 to i64, !insn.addr !461
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !462
  br label %dec_label_pc_2fe0, !insn.addr !462

dec_label_pc_2fe0:                                ; preds = %dec_label_pc_2fa0, %dec_label_pc_2fc0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !463

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2fe0, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_2fe8:
  %0 = load i32, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !464
  %1 = zext i32 %0 to i64, !insn.addr !464
  ret i64 %1, !insn.addr !465

; uselistorder directives
  uselistorder i32* bitcast (i32** @global_var_17038 to i32*), { 3, 0, 2, 1 }
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_2ff8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !466
  %3 = and i64 %2, 4294967295, !insn.addr !466
  ret i64 %3, !insn.addr !467
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_3014:
  ret i64 ptrtoint ([5 x i8]* @global_var_45d8 to i64), !insn.addr !468
}

define void @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_302c:
  store i64 ptrtoint (%vtable_16b10_type* @global_var_16b10 to i64), i64* %result, align 8, !insn.addr !469
  ret void, !insn.addr !470
}

define void @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_3050:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !471
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !472
  ret void, !insn.addr !473
}

define void @_ZN4BaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3078:
  store i64 ptrtoint (%vtable_16b10_type* @global_var_16b10 to i64), i64* %result, align 8, !insn.addr !474
  ret void, !insn.addr !475

; uselistorder directives
  uselistorder i64 (i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
  uselistorder %vtable_16b10_type* @global_var_16b10, { 1, 0 }
}

define void @_ZN7DerivedC2Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_309c:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN4BaseC2Ev(i64* %result), !insn.addr !476
  store i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), i64* %result, align 8, !insn.addr !477
  %1 = add i64 %0, 8, !insn.addr !478
  %2 = inttoptr i64 %1 to i32*, !insn.addr !478
  store i32 %arg2, i32* %2, align 4, !insn.addr !478
  ret void, !insn.addr !479
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_30dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !480
  %4 = add i64 %2, 8, !insn.addr !481
  %5 = inttoptr i64 %4 to i32*, !insn.addr !481
  %6 = load i32, i32* %5, align 4, !insn.addr !481
  %7 = mul i32 %6, %3, !insn.addr !482
  %8 = zext i32 %7 to i64, !insn.addr !482
  ret i64 %8, !insn.addr !483

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_3100:
  ret i64 ptrtoint ([8 x i8]* @global_var_45e0 to i64), !insn.addr !484
}

define i64 @_ZN5BaseA5funcAEv() {
dec_label_pc_3118:
  ret i64 10, !insn.addr !485
}

define void @_ZN5BaseAD2Ev(i64* %result) {
dec_label_pc_312c:
  store i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), i64* %result, align 8, !insn.addr !486
  ret void, !insn.addr !487
}

define void @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_3150:
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !488
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !489
  ret void, !insn.addr !490
}

define i64 @_ZN5BaseB5funcBEv() {
dec_label_pc_3178:
  ret i64 20, !insn.addr !491
}

define void @_ZN5BaseBD2Ev(i64* %result) {
dec_label_pc_318c:
  store i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), i64* %result, align 8, !insn.addr !492
  ret void, !insn.addr !493
}

define void @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_31b0:
  call void @_ZN5BaseBD2Ev(i64* %result), !insn.addr !494
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !495
  ret void, !insn.addr !496
}

define i64 @_ZN12MultiDerived5funcAEv() {
dec_label_pc_31d8:
  ret i64 30, !insn.addr !497
}

define i64 @_ZN12MultiDerived5funcBEv() {
dec_label_pc_31ec:
  ret i64 40, !insn.addr !498
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_3200:
  %0 = call i64 @_ZN12MultiDerived5funcBEv(), !insn.addr !499
  ret i64 %0, !insn.addr !499
}

define void @_ZN5BaseAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3208:
  store i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), i64* %result, align 8, !insn.addr !500
  ret void, !insn.addr !501

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), { 1, 0 }
}

define void @_ZN5BaseBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_322c:
  store i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), i64* %result, align 8, !insn.addr !502
  ret void, !insn.addr !503

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), { 1, 0 }
}

define void @_ZN12MultiDerivedC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3250:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN5BaseAC2Ev(i64* %result), !insn.addr !504
  %1 = add i64 %0, 16, !insn.addr !505
  %2 = inttoptr i64 %1 to i64*, !insn.addr !506
  call void @_ZN5BaseBC2Ev(i64* %2), !insn.addr !506
  store i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), i64* %result, align 8, !insn.addr !507
  store i64 ptrtoint (i64* @global_var_16a68 to i64), i64* %2, align 8, !insn.addr !508
  ret void, !insn.addr !509
}

define i64 @_ZN11VirtualBase4funcEv() {
dec_label_pc_329c:
  ret i64 100, !insn.addr !510
}

define void @_ZN11VirtualBaseD2Ev(i64* %result) {
dec_label_pc_32b0:
  store i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), i64* %result, align 8, !insn.addr !511
  ret void, !insn.addr !512
}

define void @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_32d4:
  call void @_ZN11VirtualBaseD2Ev(i64* %result), !insn.addr !513
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !514
  ret void, !insn.addr !515
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_32fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !516
  %3 = inttoptr i64 %2 to i64*, !insn.addr !517
  %4 = load i64, i64* %3, align 8, !insn.addr !517
  %5 = add i64 %1, 8, !insn.addr !518
  %6 = add i64 %5, %4, !insn.addr !519
  %7 = inttoptr i64 %6 to i32*, !insn.addr !519
  %8 = load i32, i32* %7, align 4, !insn.addr !519
  %9 = add i32 %8, 150, !insn.addr !520
  %10 = zext i32 %9 to i64, !insn.addr !520
  ret i64 %10, !insn.addr !521
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_3330:
  %0 = call i64 @_ZN7MiddleA4funcEv(), !insn.addr !522
  ret i64 %0, !insn.addr !522

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleA4funcEv, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_3340:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !523
  %3 = inttoptr i64 %2 to i64*, !insn.addr !524
  %4 = load i64, i64* %3, align 8, !insn.addr !524
  %5 = add i64 %1, 8, !insn.addr !525
  %6 = add i64 %5, %4, !insn.addr !526
  %7 = inttoptr i64 %6 to i32*, !insn.addr !526
  %8 = load i32, i32* %7, align 4, !insn.addr !526
  %9 = add i32 %8, 200, !insn.addr !527
  %10 = zext i32 %9 to i64, !insn.addr !527
  ret i64 %10, !insn.addr !528

; uselistorder directives
  uselistorder i32 200, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_3374:
  %0 = call i64 @_ZN7MiddleB4funcEv(), !insn.addr !529
  ret i64 %0, !insn.addr !529

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleB4funcEv, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_3384:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !530
  %3 = inttoptr i64 %2 to i64*, !insn.addr !531
  %4 = load i64, i64* %3, align 8, !insn.addr !531
  %5 = add i64 %1, 8, !insn.addr !532
  %6 = add i64 %5, %4, !insn.addr !533
  %7 = inttoptr i64 %6 to i32*, !insn.addr !533
  %8 = load i32, i32* %7, align 4, !insn.addr !533
  %9 = add i32 %8, 250, !insn.addr !534
  %10 = zext i32 %9 to i64, !insn.addr !534
  ret i64 %10, !insn.addr !535
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_33b8:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !536
  ret i64 %0, !insn.addr !536
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_33c8:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !537
  ret i64 %0, !insn.addr !537
}

define void @_ZN11VirtualBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_33d0:
  store i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), i64* %result, align 8, !insn.addr !538
  ret void, !insn.addr !539

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), { 1, 0 }
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_33f4:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !540
  %2 = add i64 %1, -24, !insn.addr !541
  %3 = inttoptr i64 %2 to i64*, !insn.addr !542
  %4 = load i64, i64* %3, align 8, !insn.addr !542
  %5 = add i64 %4, %1, !insn.addr !543
  %6 = add i64 %0, 8, !insn.addr !544
  %7 = inttoptr i64 %6 to i64*, !insn.addr !544
  %8 = load i64, i64* %7, align 8, !insn.addr !544
  %9 = inttoptr i64 %5 to i64*, !insn.addr !545
  store i64 %8, i64* %9, align 8, !insn.addr !545
  ret i64 %5, !insn.addr !546

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3444:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !547
  %2 = add i64 %1, -24, !insn.addr !548
  %3 = inttoptr i64 %2 to i64*, !insn.addr !549
  %4 = load i64, i64* %3, align 8, !insn.addr !549
  %5 = add i64 %4, %1, !insn.addr !550
  %6 = add i64 %0, 8, !insn.addr !551
  %7 = inttoptr i64 %6 to i64*, !insn.addr !551
  %8 = load i64, i64* %7, align 8, !insn.addr !551
  %9 = inttoptr i64 %5 to i64*, !insn.addr !552
  store i64 %8, i64* %9, align 8, !insn.addr !552
  ret i64 %5, !insn.addr !553

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3494:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !554
  %2 = add i64 %1, -24, !insn.addr !555
  %3 = inttoptr i64 %2 to i64*, !insn.addr !556
  %4 = load i64, i64* %3, align 8, !insn.addr !556
  %5 = add i64 %4, %1, !insn.addr !557
  %6 = add i64 %0, 8, !insn.addr !558
  %7 = inttoptr i64 %6 to i64*, !insn.addr !558
  %8 = load i64, i64* %7, align 8, !insn.addr !558
  %9 = inttoptr i64 %5 to i64*, !insn.addr !559
  store i64 %8, i64* %9, align 8, !insn.addr !559
  ret i64 %5, !insn.addr !560

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_34e4:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !561
  %2 = add i64 %1, -24, !insn.addr !562
  %3 = inttoptr i64 %2 to i64*, !insn.addr !563
  %4 = load i64, i64* %3, align 8, !insn.addr !563
  %5 = add i64 %4, %1, !insn.addr !564
  %6 = add i64 %0, 8, !insn.addr !565
  %7 = inttoptr i64 %6 to i64*, !insn.addr !565
  %8 = load i64, i64* %7, align 8, !insn.addr !565
  %9 = inttoptr i64 %5 to i64*, !insn.addr !566
  store i64 %8, i64* %9, align 8, !insn.addr !566
  ret i64 %5, !insn.addr !567

; uselistorder directives
  uselistorder i64 %5, { 1, 0 }
}

define void @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3534:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !568
  %2 = inttoptr i64 %1 to i64*, !insn.addr !569
  call void @_ZN11VirtualBaseC2Ev(i64* %2), !insn.addr !569
  %3 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_16900), !insn.addr !570
  %4 = add i64 %0, 16, !insn.addr !571
  %5 = inttoptr i64 %4 to i64*, !insn.addr !572
  %6 = call i64 @_ZN7MiddleBC2Ev(i64* %5, i64* nonnull @global_var_16910), !insn.addr !572
  store i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), i64* %result, align 8, !insn.addr !573
  store i64 ptrtoint (i64* @global_var_168e0 to i64), i64* %2, align 8, !insn.addr !574
  store i64 ptrtoint (i64* @global_var_168a8 to i64), i64* %5, align 8, !insn.addr !575
  ret void, !insn.addr !576
}

define void @_ZN5PointC2Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_35c0:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !577
  store i32 %arg2, i32* %1, align 4, !insn.addr !577
  %2 = add i64 %0, 4, !insn.addr !578
  %3 = inttoptr i64 %2 to i32*, !insn.addr !578
  store i32 %arg3, i32* %3, align 4, !insn.addr !578
  ret void, !insn.addr !579
}

define i64 @_ZNK5PointplERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_35f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-8 = alloca i64, align 8
  %3 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !580
  %4 = inttoptr i64 %3 to i64*, !insn.addr !581
  %5 = load i64, i64* %4, align 8, !insn.addr !581
  %6 = trunc i64 %2 to i32
  %7 = trunc i64 %1 to i32
  %8 = add i32 %6, %7, !insn.addr !582
  %9 = add i64 %2, 4, !insn.addr !583
  %10 = inttoptr i64 %9 to i32*, !insn.addr !583
  %11 = load i32, i32* %10, align 4, !insn.addr !583
  %12 = add i64 %1, 4, !insn.addr !584
  %13 = inttoptr i64 %12 to i32*, !insn.addr !584
  %14 = load i32, i32* %13, align 4, !insn.addr !584
  %15 = add i32 %14, %11, !insn.addr !585
  call void @_ZN5PointC2Eii(i64* nonnull %stack_var_-8, i32 %8, i32 %15), !insn.addr !586
  %16 = load i64, i64* %stack_var_-8, align 8, !insn.addr !587
  %17 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !588
  %18 = inttoptr i64 %17 to i64*, !insn.addr !589
  %19 = load i64, i64* %18, align 8, !insn.addr !589
  %20 = icmp eq i64 %5, %19, !insn.addr !590
  br i1 %20, label %dec_label_pc_3678, label %dec_label_pc_3674, !insn.addr !591

dec_label_pc_3674:                                ; preds = %dec_label_pc_35f4
  call void @__stack_chk_fail(), !insn.addr !592
  br label %dec_label_pc_3678, !insn.addr !592

dec_label_pc_3678:                                ; preds = %dec_label_pc_3674, %dec_label_pc_35f4
  ret i64 %16, !insn.addr !593

; uselistorder directives
  uselistorder i64* %stack_var_-8, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 4, 8, 7, 6, 5, 3, 10, 9, 2, 1, 0, 11 }
  uselistorder void (i64*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3684:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !594
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !595
  br i1 %5, label %dec_label_pc_36a8, label %dec_label_pc_36c8, !insn.addr !595

dec_label_pc_36a8:                                ; preds = %dec_label_pc_3684
  %6 = add i64 %2, 4, !insn.addr !596
  %7 = inttoptr i64 %6 to i32*, !insn.addr !596
  %8 = load i32, i32* %7, align 4, !insn.addr !596
  %9 = add i64 %1, 4, !insn.addr !597
  %10 = inttoptr i64 %9 to i32*, !insn.addr !597
  %11 = load i32, i32* %10, align 4, !insn.addr !597
  %12 = icmp eq i32 %8, %11, !insn.addr !598
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !598
  br i1 %12, label %dec_label_pc_36cc, label %dec_label_pc_36c8, !insn.addr !598

dec_label_pc_36c8:                                ; preds = %dec_label_pc_36a8, %dec_label_pc_3684
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !599
  br label %dec_label_pc_36cc, !insn.addr !599

dec_label_pc_36cc:                                ; preds = %dec_label_pc_36a8, %dec_label_pc_36c8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !600

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_36cc, { 1, 0 }
}

define i64 @_ZN5PointppEv() local_unnamed_addr {
dec_label_pc_36d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = add i32 %2, 1, !insn.addr !601
  %4 = inttoptr i64 %1 to i32*, !insn.addr !602
  store i32 %3, i32* %4, align 4, !insn.addr !602
  %5 = add i64 %1, 4, !insn.addr !603
  %6 = inttoptr i64 %5 to i32*, !insn.addr !603
  %7 = load i32, i32* %6, align 4, !insn.addr !603
  %8 = add i32 %7, 1, !insn.addr !604
  store i32 %8, i32* %6, align 4, !insn.addr !605
  ret i64 %1, !insn.addr !606
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3710:
  %0 = icmp ugt i32 %arg1, %arg2, !insn.addr !607
  %storemerge.in = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge.in, !insn.addr !608
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3740:
  %0 = alloca double
  %1 = load double, double* %0
  %2 = load double, double* %0
  call void @__asm_fcmpe(double %2, double %1), !insn.addr !609
  ret double %arg1, !insn.addr !610

; uselistorder directives
  uselistorder double* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_3774:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !611
  store i32 %3, i32* %arg2, align 4, !insn.addr !612
  ret void, !insn.addr !613

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_37b4:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !614
  %2 = inttoptr i64 %1 to i32*, !insn.addr !614
  store i32 0, i32* %2, align 4, !insn.addr !614
  ret void, !insn.addr !615
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_37d0:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !616
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !617
  %4 = inttoptr i64 %3 to i32*, !insn.addr !617
  %5 = load i32, i32* %4, align 4, !insn.addr !617
  %6 = zext i32 %5 to i64, !insn.addr !617
  %7 = icmp sgt i32 %5, 9, !insn.addr !618
  store i64 %6, i64* %x0.0.reg2mem, !insn.addr !618
  br i1 %7, label %dec_label_pc_3810, label %dec_label_pc_37ec, !insn.addr !618

dec_label_pc_37ec:                                ; preds = %dec_label_pc_37d0
  %8 = trunc i64 %1 to i32, !insn.addr !619
  %9 = add i32 %5, 1, !insn.addr !620
  store i32 %9, i32* %4, align 4, !insn.addr !621
  %10 = sext i32 %5 to i64, !insn.addr !622
  %11 = mul i64 %10, 4, !insn.addr !623
  %12 = add i64 %11, %2, !insn.addr !623
  %13 = inttoptr i64 %12 to i32*, !insn.addr !623
  store i32 %8, i32* %13, align 4, !insn.addr !623
  store i64 %10, i64* %x0.0.reg2mem, !insn.addr !623
  br label %dec_label_pc_3810, !insn.addr !623

dec_label_pc_3810:                                ; preds = %dec_label_pc_37ec, %dec_label_pc_37d0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !624

; uselistorder directives
  uselistorder i32 %5, { 1, 0, 2, 3 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_381c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !625
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !626
  %4 = icmp slt i32 %3, 0, !insn.addr !627
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !628
  br i1 %4, label %dec_label_pc_385c, label %dec_label_pc_3834, !insn.addr !628

dec_label_pc_3834:                                ; preds = %dec_label_pc_381c
  %5 = add i64 %2, 40, !insn.addr !629
  %6 = inttoptr i64 %5 to i32*, !insn.addr !629
  %7 = load i32, i32* %6, align 4, !insn.addr !629
  %8 = icmp ugt i32 %7, %3, !insn.addr !630
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !630
  br i1 %8, label %dec_label_pc_3848, label %dec_label_pc_385c, !insn.addr !630

dec_label_pc_3848:                                ; preds = %dec_label_pc_3834
  %sext = mul i64 %1, 4294967296
  %9 = ashr exact i64 %sext, 30, !insn.addr !631
  %10 = add i64 %9, %2, !insn.addr !631
  %11 = inttoptr i64 %10 to i32*, !insn.addr !631
  %12 = load i32, i32* %11, align 4, !insn.addr !631
  %13 = zext i32 %12 to i64, !insn.addr !631
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !632
  br label %dec_label_pc_385c, !insn.addr !632

dec_label_pc_385c:                                ; preds = %dec_label_pc_381c, %dec_label_pc_3834, %dec_label_pc_3848
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !633

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 30, { 1, 0 }
  uselistorder label %dec_label_pc_385c, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_3864:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !634
  %3 = inttoptr i64 %2 to i32*, !insn.addr !634
  %4 = load i32, i32* %3, align 4, !insn.addr !634
  %5 = zext i32 %4 to i64, !insn.addr !634
  ret i64 %5, !insn.addr !635

; uselistorder directives
  uselistorder i64 40, { 1, 2, 3, 4, 0 }
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_387c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !636
  %2 = inttoptr i64 %1 to i32*, !insn.addr !636
  store i32 0, i32* %2, align 4, !insn.addr !636
  ret void, !insn.addr !637
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3898:
  %0 = alloca i64
  %1 = alloca double
  %x0.0.reg2mem = alloca i64, !insn.addr !638
  %2 = load i64, i64* %0
  %3 = load double, double* %1
  %4 = add i64 %2, 80, !insn.addr !639
  %5 = inttoptr i64 %4 to i32*, !insn.addr !639
  %6 = load i32, i32* %5, align 4, !insn.addr !639
  %7 = zext i32 %6 to i64, !insn.addr !639
  %8 = icmp sgt i32 %6, 9, !insn.addr !640
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !640
  br i1 %8, label %dec_label_pc_38d8, label %dec_label_pc_38b4, !insn.addr !640

dec_label_pc_38b4:                                ; preds = %dec_label_pc_3898
  %9 = bitcast double %3 to i64
  %10 = add i32 %6, 1, !insn.addr !641
  store i32 %10, i32* %5, align 4, !insn.addr !642
  %11 = sext i32 %6 to i64, !insn.addr !643
  %12 = mul i64 %11, 8, !insn.addr !644
  %13 = add i64 %12, %2, !insn.addr !644
  %14 = inttoptr i64 %13 to i64*
  store i64 %9, i64* %14, align 8
  store i64 %11, i64* %x0.0.reg2mem, !insn.addr !644
  br label %dec_label_pc_38d8, !insn.addr !644

dec_label_pc_38d8:                                ; preds = %dec_label_pc_38b4, %dec_label_pc_3898
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !645

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2, 3 }
  uselistorder i64 %2, { 1, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_38e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !646
  %4 = icmp slt i32 %3, 0, !insn.addr !647
  br i1 %4, label %dec_label_pc_3924, label %dec_label_pc_38fc, !insn.addr !648

dec_label_pc_38fc:                                ; preds = %dec_label_pc_38e4
  %5 = add i64 %2, 80, !insn.addr !649
  %6 = inttoptr i64 %5 to i32*, !insn.addr !649
  %7 = load i32, i32* %6, align 4, !insn.addr !649
  %8 = zext i32 %7 to i64, !insn.addr !649
  %9 = icmp ugt i32 %7, %3, !insn.addr !650
  %spec.select = select i1 %9, i64 %2, i64 %8
  ret i64 %spec.select

dec_label_pc_3924:                                ; preds = %dec_label_pc_38e4
  %10 = and i64 %1, 4294967295, !insn.addr !651
  ret i64 %10, !insn.addr !652

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 8, 9, 10, 11, 0, 7, 1, 4, 2, 3, 5, 6 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_392c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !653
  %3 = inttoptr i64 %2 to i32*, !insn.addr !653
  %4 = load i32, i32* %3, align 4, !insn.addr !653
  %5 = zext i32 %4 to i64, !insn.addr !653
  ret i64 %5, !insn.addr !654
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3944:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !655
  ret void, !insn.addr !656
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_396c:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !657
  ret void, !insn.addr !658
}

define i64 @_ZNK8RTTIBase7getTypeEv() {
dec_label_pc_3994:
  ret i64 0, !insn.addr !659
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_39a8:
  ret i64 1, !insn.addr !660

; uselistorder directives
  uselistorder i64 1, { 4, 0, 5, 2, 1, 3 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv() local_unnamed_addr {
dec_label_pc_39bc:
  ret i64 100, !insn.addr !661
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_39d0:
  ret i64 2, !insn.addr !662
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv() local_unnamed_addr {
dec_label_pc_39e4:
  ret i64 200, !insn.addr !663
}

define void @_ZN8RTTIBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_39f8:
  store i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), i64* %result, align 8, !insn.addr !664
  ret void, !insn.addr !665
}

define void @_ZN8RTTIBaseD2Ev(i64* %result) {
dec_label_pc_3a1c:
  store i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), i64* %result, align 8, !insn.addr !666
  ret void, !insn.addr !667

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), { 1, 0 }
}

define void @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_3a40:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !668
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !669
  ret void, !insn.addr !670
}

define void @_ZN12RTTIDerivedAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3a68:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !671
  store i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), i64* %result, align 8, !insn.addr !672
  ret void, !insn.addr !673
}

define void @_ZN12RTTIDerivedBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3a98:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !674
  store i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), i64* %result, align 8, !insn.addr !675
  ret void, !insn.addr !676

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3ac8:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2), !insn.addr !677
  ret void, !insn.addr !678
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3af0:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !679
  ret void, !insn.addr !680
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3b18:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !681
  %1 = inttoptr i64 %0 to i64*, !insn.addr !682
  %2 = load i64, i64* %1, align 8, !insn.addr !682
  %3 = icmp eq i64 %2, 0, !insn.addr !683
  br i1 %3, label %dec_label_pc_3b68, label %dec_label_pc_3b44, !insn.addr !684

dec_label_pc_3b44:                                ; preds = %dec_label_pc_3b18
  %4 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result), !insn.addr !685
  %5 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !686
  %6 = call i64 @_ZNKSt14default_deleteIiEclEPi(i32* nonnull @0), !insn.addr !687
  br label %dec_label_pc_3b68, !insn.addr !687

dec_label_pc_3b68:                                ; preds = %dec_label_pc_3b44, %dec_label_pc_3b18
  store i64 0, i64* %1, align 8, !insn.addr !688
  ret void, !insn.addr !689

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3b80:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !690
  ret i64 %0, !insn.addr !691
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3ba4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !692
  ret i64* %2, !insn.addr !692
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3bb8:
  %0 = ptrtoint i64* %arg2 to i64
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !693
  store i64 %0, i64* %result, align 8, !insn.addr !694
  ret void, !insn.addr !695
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3bf0:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2), !insn.addr !696
  ret void, !insn.addr !697
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3c18:
  %0 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** bitcast (i32* @0 to i64**)), !insn.addr !698
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %0), !insn.addr !699
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !700
  %2 = inttoptr i64 %1 to i64*, !insn.addr !701
  store i64 0, i64* %2, align 8, !insn.addr !701
  ret void, !insn.addr !702
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c60:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2), !insn.addr !703
  ret void, !insn.addr !704
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c88:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !705
  ret void, !insn.addr !706
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3cb0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !707
  %1 = inttoptr i64 %0 to i64*, !insn.addr !708
  %2 = load i64, i64* %1, align 8, !insn.addr !708
  %3 = icmp eq i64 %2, 0, !insn.addr !709
  br i1 %3, label %dec_label_pc_3cf8, label %dec_label_pc_3cd8, !insn.addr !710

dec_label_pc_3cd8:                                ; preds = %dec_label_pc_3cb0
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result), !insn.addr !711
  %5 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(), !insn.addr !712
  br label %dec_label_pc_3cf8, !insn.addr !712

dec_label_pc_3cf8:                                ; preds = %dec_label_pc_3cd8, %dec_label_pc_3cb0
  store i64 0, i64* %1, align 8, !insn.addr !713
  ret void, !insn.addr !714
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3d0c:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !715
  %1 = mul i64 %arg2, 4, !insn.addr !716
  %2 = add i64 %0, %1, !insn.addr !717
  ret i64 %2, !insn.addr !718
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3d44:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !719
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !720
  %2 = inttoptr i64 %1 to i64*, !insn.addr !721
  store i64 %0, i64* %2, align 8, !insn.addr !721
  ret void, !insn.addr !722

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !723
  %1 = ptrtoint i64* %0 to i64, !insn.addr !723
  ret i64 %1, !insn.addr !724
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d9c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !725
  ret i64 %0, !insn.addr !726
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_3db8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !727
  ret i64* %2, !insn.addr !727
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i32* %arg1) local_unnamed_addr {
dec_label_pc_3dcc:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !728
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !729
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !730
  br i1 %2, label %dec_label_pc_3df0, label %dec_label_pc_3de8, !insn.addr !730

dec_label_pc_3de8:                                ; preds = %dec_label_pc_3dcc
  %3 = inttoptr i64 %1 to i64*, !insn.addr !731
  %4 = call i64 @_ZdlPvm(i64* %3, i64 4), !insn.addr !731
  store i64 %4, i64* %x0.0.reg2mem, !insn.addr !731
  br label %dec_label_pc_3df0, !insn.addr !731

dec_label_pc_3df0:                                ; preds = %dec_label_pc_3de8, %dec_label_pc_3dcc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !732

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4, { 5, 0, 1, 11, 12, 13, 14, 15, 16, 2, 3, 4, 17, 18, 6, 10, 7, 8, 9 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3dfc:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !733
  ret i64 %0, !insn.addr !734
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3e18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !735
  ret i64* %2, !insn.addr !735
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3e2c:
  ret void, !insn.addr !736
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3e44:
  %0 = ptrtoint i32* %arg2 to i64
  call void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !737
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !738
  %2 = inttoptr i64 %1 to i64*, !insn.addr !739
  store i64 %0, i64* %2, align 8, !insn.addr !739
  ret void, !insn.addr !740

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e80:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !741
  %1 = ptrtoint i64* %0 to i64, !insn.addr !741
  ret i64 %1, !insn.addr !742
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e9c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !743
  ret i64 %0, !insn.addr !744
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_() local_unnamed_addr {
dec_label_pc_3eb8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !745
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !746
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !747
  br i1 %2, label %dec_label_pc_3edc, label %dec_label_pc_3ed4, !insn.addr !747

dec_label_pc_3ed4:                                ; preds = %dec_label_pc_3eb8
  %3 = inttoptr i64 %1 to i64*, !insn.addr !748
  %4 = and i64 %1, 4294967295
  %5 = inttoptr i64 %4 to i64*, !insn.addr !748
  call void @_ZdaPv(i64* %3, i64* %5), !insn.addr !748
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !748
  br label %dec_label_pc_3edc, !insn.addr !748

dec_label_pc_3edc:                                ; preds = %dec_label_pc_3ed4, %dec_label_pc_3eb8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !749

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 3, 4, 0, 5, 1 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ee8:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !750
  ret i64 %0, !insn.addr !751
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f04:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !752
  ret void, !insn.addr !753
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3f24:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !754
  %1 = bitcast i32** %0 to i64*, !insn.addr !755
  ret i64* %1, !insn.addr !755
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f40:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !756
  %1 = ptrtoint i64* %0 to i64, !insn.addr !756
  ret i64 %1, !insn.addr !757
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f5c:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !758
  %1 = load i64, i64* %0, align 8, !insn.addr !759
  ret i64 %1, !insn.addr !760
}

define void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f7c:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !761
  ret void, !insn.addr !762
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3f9c:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !763
  %1 = bitcast i32** %0 to i64*, !insn.addr !764
  ret i64* %1, !insn.addr !764
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3fb8:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !765
  %1 = ptrtoint i64* %0 to i64, !insn.addr !765
  ret i64 %1, !insn.addr !766
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3fd4:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !767
  %1 = load i64, i64* %0, align 8, !insn.addr !768
  ret i64 %1, !insn.addr !769
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ff4:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !770
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !771
  ret void, !insn.addr !772
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_401c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !773
  %1 = inttoptr i64 %0 to i32**, !insn.addr !774
  ret i32** %1, !insn.addr !774
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4038:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !775
  ret i64* %0, !insn.addr !776
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4054:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !777
  %1 = bitcast i32** %0 to i64*, !insn.addr !778
  ret i64* %1, !insn.addr !778
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4070:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !779
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !780
  ret void, !insn.addr !781

; uselistorder directives
  uselistorder void (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev, { 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4098:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !782
  %1 = inttoptr i64 %0 to i32**, !insn.addr !783
  ret i32** %1, !insn.addr !783
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_40b4:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !784
  ret i64* %0, !insn.addr !785
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_40d0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !786
  %1 = bitcast i32** %0 to i64*, !insn.addr !787
  ret i64* %1, !insn.addr !787
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_40ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32***, !insn.addr !788
  ret i32*** %2, !insn.addr !788
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4100:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result), !insn.addr !789
  ret void, !insn.addr !790
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4120:
  store i64 0, i64* %result, align 8, !insn.addr !791
  ret void, !insn.addr !792

; uselistorder directives
  uselistorder i64 0, { 58, 0, 59, 1, 60, 61, 62, 63, 64, 65, 7, 3, 2, 4, 5, 67, 68, 9, 40, 10, 41, 55, 56, 57, 6, 66, 42, 37, 38, 39, 53, 8, 54, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52 }
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_413c:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !793
  ret i64 %0, !insn.addr !794
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4158:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !795
  %1 = inttoptr i64 %0 to i64*, !insn.addr !796
  ret i64* %1, !insn.addr !796
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4174:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !797
  %1 = inttoptr i64 %0 to i32**, !insn.addr !798
  ret i32** %1, !insn.addr !798
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4190:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result), !insn.addr !799
  ret void, !insn.addr !800
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_41b0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !801
  ret i64 %0, !insn.addr !802

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_41cc:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !803
  %1 = inttoptr i64 %0 to i64*, !insn.addr !804
  ret i64* %1, !insn.addr !804
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_41e8:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !805
  %1 = inttoptr i64 %0 to i32**, !insn.addr !806
  ret i32** %1, !insn.addr !806
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_4204:
  %0 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !807
  %1 = load i32**, i32*** %0, align 8, !insn.addr !808
  %2 = ptrtoint i32** %1 to i64, !insn.addr !808
  store i64 %2, i64* %result, align 8, !insn.addr !809
  ret void, !insn.addr !810

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4234:
  ret void, !insn.addr !811
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4248:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !812
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_425c:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !813
  ret i64 %0, !insn.addr !814
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4278:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !815
  ret i64 %0, !insn.addr !816
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4294:
  ret void, !insn.addr !817
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42a8:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* bitcast (i32* @0 to i64*)), !insn.addr !818
  ret i64 %0, !insn.addr !819
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42c4:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !820
  ret i64 %0, !insn.addr !821

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !822
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !823
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4308:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !824
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_431c:
  store i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), i64* %result, align 8, !insn.addr !825
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !826
  ret void, !insn.addr !827

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), { 1, 0 }
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_434c:
  call void @_ZN12RTTIDerivedBD2Ev(i64* %result), !insn.addr !828
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !829
  ret void, !insn.addr !830

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedBD2Ev, { 1, 0 }
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_4374:
  store i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), i64* %result, align 8, !insn.addr !831
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !832
  ret void, !insn.addr !833

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseD2Ev, { 3, 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), { 1, 0 }
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_43a4:
  call void @_ZN12RTTIDerivedAD2Ev(i64* %result), !insn.addr !834
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !835
  ret void, !insn.addr !836

; uselistorder directives
  uselistorder i64 8, { 6, 7, 8, 0, 12, 18, 13, 19, 1, 2, 3, 20, 21, 9, 22, 23, 14, 15, 16, 10, 11, 5, 17, 4 }
  uselistorder void (i64*)* @_ZN12RTTIDerivedAD2Ev, { 1, 0 }
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_43cc:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), i64* %result, align 8, !insn.addr !837
  %1 = add i64 %0, 32, !insn.addr !838
  %2 = inttoptr i64 %1 to i64*, !insn.addr !839
  store i64 ptrtoint (i64* @global_var_168e0 to i64), i64* %2, align 8, !insn.addr !839
  %3 = add i64 %0, 16, !insn.addr !840
  %4 = inttoptr i64 %3 to i64*, !insn.addr !840
  store i64 ptrtoint (i64* @global_var_168a8 to i64), i64* %4, align 8, !insn.addr !840
  %5 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* nonnull @global_var_16910), !insn.addr !841
  %6 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* nonnull @global_var_16900), !insn.addr !842
  call void @_ZN11VirtualBaseD2Ev(i64* %2), !insn.addr !843
  ret void, !insn.addr !844

; uselistorder directives
  uselistorder void (i64*)* @_ZN11VirtualBaseD2Ev, { 2, 1, 0 }
  uselistorder i64 ()* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4458:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !845
  %3 = inttoptr i64 %2 to i64*, !insn.addr !846
  call void @_ZN14DiamondDerivedD1Ev(i64* %3), !insn.addr !846
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !846
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4460:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !847
  %3 = inttoptr i64 %2 to i64*, !insn.addr !847
  %4 = load i64, i64* %3, align 8, !insn.addr !847
  %5 = add i64 %4, %1, !insn.addr !848
  %6 = inttoptr i64 %5 to i64*, !insn.addr !849
  call void @_ZN14DiamondDerivedD1Ev(i64* %6), !insn.addr !849
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !849

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_4470:
  call void @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !850
  %0 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !851
  ret void, !insn.addr !852

; uselistorder directives
  uselistorder void (i64*)* @_ZN14DiamondDerivedD1Ev, { 1, 3, 2, 4, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4498:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !853
  %3 = inttoptr i64 %2 to i64*, !insn.addr !854
  call void @_ZN14DiamondDerivedD0Ev(i64* %3), !insn.addr !854
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !854
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_44a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -32, !insn.addr !855
  %3 = inttoptr i64 %2 to i64*, !insn.addr !855
  %4 = load i64, i64* %3, align 8, !insn.addr !855
  %5 = add i64 %4, %1, !insn.addr !856
  %6 = inttoptr i64 %5 to i64*, !insn.addr !857
  call void @_ZN14DiamondDerivedD0Ev(i64* %6), !insn.addr !857
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !857

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder void (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) {
dec_label_pc_44b0:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), i64* %result, align 8, !insn.addr !858
  %1 = add i64 %0, 16, !insn.addr !859
  %2 = inttoptr i64 %1 to i64*, !insn.addr !859
  store i64 ptrtoint (i64* @global_var_16a68 to i64), i64* %2, align 8, !insn.addr !859
  call void @_ZN5BaseBD2Ev(i64* %2), !insn.addr !860
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !861
  ret void, !insn.addr !862

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseAD2Ev, { 2, 1, 0 }
  uselistorder void (i64*)* @_ZN5BaseBD2Ev, { 2, 1, 0 }
  uselistorder i64 ()* @_ZN12MultiDerived5funcBEv, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), { 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_44fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !863
  %3 = inttoptr i64 %2 to i64*, !insn.addr !864
  call void @_ZN12MultiDerivedD2Ev(i64* %3), !insn.addr !864
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !864
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_4504:
  call void @_ZN12MultiDerivedD2Ev(i64* %result), !insn.addr !865
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !866
  ret void, !insn.addr !867

; uselistorder directives
  uselistorder i64 32, { 3, 4, 5, 0, 1, 2 }
  uselistorder void (i64*)* @_ZN12MultiDerivedD2Ev, { 1, 2, 3, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_452c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -16, !insn.addr !868
  %3 = inttoptr i64 %2 to i64*, !insn.addr !869
  call void @_ZN12MultiDerivedD0Ev(i64* %3), !insn.addr !869
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !869

; uselistorder directives
  uselistorder i32* @0, { 5, 7, 0, 6, 1, 2, 3, 4 }
  uselistorder i64 ptrtoint (i32* @0 to i64), { 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 11, 12 }
  uselistorder void (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define void @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_4534:
  store i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), i64* %result, align 8, !insn.addr !870
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !871
  ret void, !insn.addr !872

; uselistorder directives
  uselistorder void (i64*)* @_ZN4BaseD2Ev, { 2, 3, 1, 0 }
  uselistorder i64 (i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), { 1, 0 }
}

define void @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_4564:
  call void @_ZN7DerivedD2Ev(i64* %result), !insn.addr !873
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !874
  ret void, !insn.addr !875

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 11, 10, 9, 8, 7, 1, 6, 5, 4, 3, 2, 0, 12 }
  uselistorder i64 16, { 1, 5, 6, 7, 2, 8, 3, 4, 0 }
  uselistorder void (i64*)* @_ZN7DerivedD2Ev, { 2, 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_458c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !876

; uselistorder directives
  uselistorder i32 1, { 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 56, 38, 37, 57, 36, 35, 34, 33, 32, 97, 58, 55, 31, 30, 59, 29, 98, 60, 28, 27, 54, 99, 100, 26, 61, 25, 75, 24, 23, 22, 21, 20, 19, 62, 18, 17, 69, 64, 63, 16, 15, 14, 65, 13, 12, 70, 74, 11, 10, 9, 8, 7, 66, 71, 80, 79, 78, 77, 76, 67, 6, 73, 5, 82, 81, 84, 83, 0, 72, 86, 85, 53, 87, 52, 4, 89, 88, 90, 51, 3, 91, 93, 92, 2, 94, 95, 68, 96, 1 }
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

declare i64 @__cxa_bad_typeid(i32*) local_unnamed_addr

declare i64 @__dynamic_cast(i32*, i64*, i64*, i64) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i64 @__cxa_throw_bad_array_new_length(i64, i64) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_rethrow(i32, i32) local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i64 @__cxa_end_catch(i64, i64) local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @__asm_fcmpe(double, double) local_unnamed_addr

!0 = !{i64 6188}
!1 = !{i64 6196}
!2 = !{i64 6252}
!3 = !{i64 6268}
!4 = !{i64 6284}
!5 = !{i64 6300}
!6 = !{i64 6316}
!7 = !{i64 6332}
!8 = !{i64 6348}
!9 = !{i64 6364}
!10 = !{i64 6380}
!11 = !{i64 6396}
!12 = !{i64 6412}
!13 = !{i64 6428}
!14 = !{i64 6444}
!15 = !{i64 6460}
!16 = !{i64 6476}
!17 = !{i64 6492}
!18 = !{i64 6508}
!19 = !{i64 6524}
!20 = !{i64 6540}
!21 = !{i64 6556}
!22 = !{i64 6572}
!23 = !{i64 6604}
!24 = !{i64 6620}
!25 = !{i64 6636}
!26 = !{i64 6652}
!27 = !{i64 6688}
!28 = !{i64 6700}
!29 = !{i64 6704}
!30 = !{i64 6712}
!31 = !{i64 6716}
!32 = !{i64 6720}
!33 = !{i64 6724}
!34 = !{i64 6780}
!35 = !{i64 6840}
!36 = !{i64 6848}
!37 = !{i64 6864}
!38 = !{i64 6868}
!39 = !{i64 6876}
!40 = !{i64 6880}
!41 = !{i64 6888}
!42 = !{i64 6892}
!43 = !{i64 6896}
!44 = !{i64 6904}
!45 = !{i64 6916}
!46 = !{i64 6928}
!47 = !{i64 6944}
!48 = !{i64 6948}
!49 = !{i64 6980}
!50 = !{i64 6992}
!51 = !{i64 7000}
!52 = !{i64 7016}
!53 = !{i64 7024}
!54 = !{i64 7060}
!55 = !{i64 7068}
!56 = !{i64 7072}
!57 = !{i64 7080}
!58 = !{i64 7084}
!59 = !{i64 7040}
!60 = !{i64 7048}
!61 = !{i64 7088}
!62 = !{i64 7096}
!63 = !{i64 7112}
!64 = !{i64 7116}
!65 = !{i64 7140}
!66 = !{i64 7152}
!67 = !{i64 7172}
!68 = !{i64 7196}
!69 = !{i64 7200}
!70 = !{i64 7240}
!71 = !{i64 7248}
!72 = !{i64 7252}
!73 = !{i64 7260}
!74 = !{i64 7264}
!75 = !{i64 7184}
!76 = !{i64 7212}
!77 = !{i64 7220}
!78 = !{i64 7268}
!79 = !{i64 7276}
!80 = !{i64 7316}
!81 = !{i64 7324}
!82 = !{i64 7344}
!83 = !{i64 7348}
!84 = !{i64 7368}
!85 = !{i64 7380}
!86 = !{i64 7392}
!87 = !{i64 7408}
!88 = !{i64 7440}
!89 = !{i64 7456}
!90 = !{i64 7496}
!91 = !{i64 7504}
!92 = !{i64 7516}
!93 = !{i64 7524}
!94 = !{i64 7528}
!95 = !{i64 7536}
!96 = !{i64 7572}
!97 = !{i64 7396}
!98 = !{i64 7412}
!99 = !{i64 7472}
!100 = !{i64 7480}
!101 = !{i64 7488}
!102 = !{i64 7588}
!103 = !{i64 7628}
!104 = !{i64 7680}
!105 = !{i64 7684}
!106 = !{i64 7708}
!107 = !{i64 7764}
!108 = !{i64 7776}
!109 = !{i64 7784}
!110 = !{i64 7788}
!111 = !{i64 7796}
!112 = !{i64 7824}
!113 = !{i64 7712}
!114 = !{i64 7724}
!115 = !{i64 7728}
!116 = !{i64 7748}
!117 = !{i64 7756}
!118 = !{i64 7768}
!119 = !{i64 7840}
!120 = !{i64 7880}
!121 = !{i64 7900}
!122 = !{i64 7920}
!123 = !{i64 7952}
!124 = !{i64 7976}
!125 = !{i64 7988}
!126 = !{i64 7996}
!127 = !{i64 8000}
!128 = !{i64 8008}
!129 = !{i64 8036}
!130 = !{i64 7956}
!131 = !{i64 7968}
!132 = !{i64 7980}
!133 = !{i64 8052}
!134 = !{i64 8068}
!135 = !{i64 8072}
!136 = !{i64 8096}
!137 = !{i64 8112}
!138 = !{i64 8124}
!139 = !{i64 8140}
!140 = !{i64 8152}
!141 = !{i64 8204}
!142 = !{i64 8212}
!143 = !{i64 8216}
!144 = !{i64 8224}
!145 = !{i64 8228}
!146 = !{i64 8128}
!147 = !{i64 8164}
!148 = !{i64 8172}
!149 = !{i64 8192}
!150 = !{i64 8240}
!151 = !{i64 8256}
!152 = !{i64 8260}
!153 = !{i64 8280}
!154 = !{i64 8296}
!155 = !{i64 8308}
!156 = !{i64 8316}
!157 = !{i64 8328}
!158 = !{i64 8348}
!159 = !{i64 8356}
!160 = !{i64 8372}
!161 = !{i64 8380}
!162 = !{i64 8384}
!163 = !{i64 8392}
!164 = !{i64 8396}
!165 = !{i64 8344}
!166 = !{i64 8352}
!167 = !{i64 8360}
!168 = !{i64 8408}
!169 = !{i64 8424}
!170 = !{i64 8428}
!171 = !{i64 8444}
!172 = !{i64 8456}
!173 = !{i64 8468}
!174 = !{i64 8480}
!175 = !{i64 8492}
!176 = !{i64 8504}
!177 = !{i64 8516}
!178 = !{i64 8532}
!179 = !{i64 8544}
!180 = !{i64 8584}
!181 = !{i64 8592}
!182 = !{i64 8596}
!183 = !{i64 8604}
!184 = !{i64 8608}
!185 = !{i64 8496}
!186 = !{i64 8508}
!187 = !{i64 8552}
!188 = !{i64 8560}
!189 = !{i64 8620}
!190 = !{i64 8632}
!191 = !{i64 8640}
!192 = !{i64 8644}
!193 = !{i64 8656}
!194 = !{i64 8660}
!195 = !{i64 8668}
!196 = !{i64 8676}
!197 = !{i64 8684}
!198 = !{i64 8688}
!199 = !{i64 8692}
!200 = !{i64 8700}
!201 = !{i64 8716}
!202 = !{i64 8720}
!203 = !{i64 8772}
!204 = !{i64 8808}
!205 = !{i64 8816}
!206 = !{i64 8820}
!207 = !{i64 8828}
!208 = !{i64 8832}
!209 = !{i64 8836}
!210 = !{i64 8844}
!211 = !{i64 8868}
!212 = !{i64 8876}
!213 = !{i64 8888}
!214 = !{i64 8892}
!215 = !{i64 9136}
!216 = !{i64 9140}
!217 = !{i64 9164}
!218 = !{i64 9172}
!219 = !{i64 9176}
!220 = !{i64 9184}
!221 = !{i64 9196}
!222 = !{i64 9216}
!223 = !{i64 9220}
!224 = !{i64 9236}
!225 = !{i64 9244}
!226 = !{i64 9260}
!227 = !{i64 9268}
!228 = !{i64 9280}
!229 = !{i64 9288}
!230 = !{i64 9300}
!231 = !{i64 9308}
!232 = !{i64 9312}
!233 = !{i64 9324}
!234 = !{i64 9340}
!235 = !{i64 9344}
!236 = !{i64 9352}
!237 = !{i64 9356}
!238 = !{i64 9364}
!239 = !{i64 9368}
!240 = !{i64 9376}
!241 = !{i64 9380}
!242 = !{i64 9388}
!243 = !{i64 9400}
!244 = !{i64 9412}
!245 = !{i64 9416}
!246 = !{i64 9428}
!247 = !{i64 9436}
!248 = !{i64 9460}
!249 = !{i64 9468}
!250 = !{i64 9472}
!251 = !{i64 9504}
!252 = !{i64 9512}
!253 = !{i64 9520}
!254 = !{i64 9528}
!255 = !{i64 9540}
!256 = !{i64 9548}
!257 = !{i64 9552}
!258 = !{i64 9560}
!259 = !{i64 9612}
!260 = !{i64 9488}
!261 = !{i64 9496}
!262 = !{i64 9628}
!263 = !{i64 9632}
!264 = !{i64 9648}
!265 = !{i64 9656}
!266 = !{i64 9664}
!267 = !{i64 9668}
!268 = !{i64 9676}
!269 = !{i64 9684}
!270 = !{i64 9692}
!271 = !{i64 9708}
!272 = !{i64 9712}
!273 = !{i64 9736}
!274 = !{i64 9756}
!275 = !{i64 9696}
!276 = !{i64 9776}
!277 = !{i64 9780}
!278 = !{i64 9804}
!279 = !{i64 9772}
!280 = !{i64 9824}
!281 = !{i64 9848}
!282 = !{i64 9872}
!283 = !{i64 9896}
!284 = !{i64 9904}
!285 = !{i64 9920}
!286 = !{i64 9932}
!287 = !{i64 9924}
!288 = !{i64 9956}
!289 = !{i64 9980}
!290 = !{i64 9988}
!291 = !{i64 10004}
!292 = !{i64 10016}
!293 = !{i64 10028}
!294 = !{i64 10032}
!295 = !{i64 10068}
!296 = !{i64 10084}
!297 = !{i64 10148}
!298 = !{i64 10152}
!299 = !{i64 10168}
!300 = !{i64 10172}
!301 = !{i64 10188}
!302 = !{i64 10192}
!303 = !{i64 10208}
!304 = !{i64 10212}
!305 = !{i64 10228}
!306 = !{i64 10232}
!307 = !{i64 10248}
!308 = !{i64 10252}
!309 = !{i64 10268}
!310 = !{i64 10272}
!311 = !{i64 10288}
!312 = !{i64 10292}
!313 = !{i64 10308}
!314 = !{i64 10312}
!315 = !{i64 10328}
!316 = !{i64 10332}
!317 = !{i64 10348}
!318 = !{i64 10352}
!319 = !{i64 10368}
!320 = !{i64 10372}
!321 = !{i64 10388}
!322 = !{i64 10400}
!323 = !{i64 10412}
!324 = !{i64 10424}
!325 = !{i64 10460}
!326 = !{i64 10472}
!327 = !{i64 10508}
!328 = !{i64 10520}
!329 = !{i64 10544}
!330 = !{i64 10556}
!331 = !{i64 10560}
!332 = !{i64 10564}
!333 = !{i64 10572}
!334 = !{i64 10584}
!335 = !{i64 10600}
!336 = !{i64 10608}
!337 = !{i64 10624}
!338 = !{i64 10652}
!339 = !{i64 10660}
!340 = !{i64 10696}
!341 = !{i64 10720}
!342 = !{i64 10736}
!343 = !{i64 10756}
!344 = !{i64 10764}
!345 = !{i64 10784}
!346 = !{i64 10792}
!347 = !{i64 10812}
!348 = !{i64 10820}
!349 = !{i64 10840}
!350 = !{i64 10876}
!351 = !{i64 10888}
!352 = !{i64 10904}
!353 = !{i64 10920}
!354 = !{i64 10940}
!355 = !{i64 10948}
!356 = !{i64 10968}
!357 = !{i64 10976}
!358 = !{i64 10996}
!359 = !{i64 11000}
!360 = !{i64 11008}
!361 = !{i64 11040}
!362 = !{i64 11052}
!363 = !{i64 11064}
!364 = !{i64 11076}
!365 = !{i64 11092}
!366 = !{i64 11112}
!367 = !{i64 11120}
!368 = !{i64 11140}
!369 = !{i64 11148}
!370 = !{i64 11168}
!371 = !{i64 11176}
!372 = !{i64 11204}
!373 = !{i64 11216}
!374 = !{i64 11236}
!375 = !{i64 11244}
!376 = !{i64 11264}
!377 = !{i64 11272}
!378 = !{i64 11292}
!379 = !{i64 11300}
!380 = !{i64 11324}
!381 = !{i64 11344}
!382 = !{i64 11352}
!383 = !{i64 11372}
!384 = !{i64 11380}
!385 = !{i64 11400}
!386 = !{i64 11428}
!387 = !{i64 11444}
!388 = !{i64 11456}
!389 = !{i64 11480}
!390 = !{i64 11484}
!391 = !{i64 11496}
!392 = !{i64 11516}
!393 = !{i64 11524}
!394 = !{i64 11540}
!395 = !{i64 11544}
!396 = !{i64 11552}
!397 = !{i64 11584}
!398 = !{i64 11588}
!399 = !{i64 11608}
!400 = !{i64 11616}
!401 = !{i64 11620}
!402 = !{i64 11624}
!403 = !{i64 11636}
!404 = !{i64 11640}
!405 = !{i64 11644}
!406 = !{i64 11672}
!407 = !{i64 11676}
!408 = !{i64 11680}
!409 = !{i64 11692}
!410 = !{i64 11700}
!411 = !{i64 11732}
!412 = !{i64 11740}
!413 = !{i64 11752}
!414 = !{i64 11760}
!415 = !{i64 11772}
!416 = !{i64 11788}
!417 = !{i64 11796}
!418 = !{i64 11808}
!419 = !{i64 11820}
!420 = !{i64 11832}
!421 = !{i64 11868}
!422 = !{i64 11880}
!423 = !{i64 11884}
!424 = !{i64 11888}
!425 = !{i64 11900}
!426 = !{i64 11908}
!427 = !{i64 11912}
!428 = !{i64 11936}
!429 = !{i64 11948}
!430 = !{i64 11952}
!431 = !{i64 11956}
!432 = !{i64 11960}
!433 = !{i64 11972}
!434 = !{i64 11980}
!435 = !{i64 11984}
!436 = !{i64 12008}
!437 = !{i64 12024}
!438 = !{i64 12028}
!439 = !{i64 12032}
!440 = !{i64 12040}
!441 = !{i64 12048}
!442 = !{i64 12052}
!443 = !{i64 12056}
!444 = !{i64 12064}
!445 = !{i64 12068}
!446 = !{i64 12096}
!447 = !{i64 12108}
!448 = !{i64 12132}
!449 = !{i64 12136}
!450 = !{i64 12148}
!451 = !{i64 12160}
!452 = !{i64 12164}
!453 = !{i64 12176}
!454 = !{i64 12188}
!455 = !{i64 12192}
!456 = !{i64 12208}
!457 = !{i64 12216}
!458 = !{i64 12220}
!459 = !{i64 12236}
!460 = !{i64 12240}
!461 = !{i64 12244}
!462 = !{i64 12248}
!463 = !{i64 12260}
!464 = !{i64 12272}
!465 = !{i64 12276}
!466 = !{i64 12296}
!467 = !{i64 12304}
!468 = !{i64 12328}
!469 = !{i64 12352}
!470 = !{i64 12364}
!471 = !{i64 12384}
!472 = !{i64 12396}
!473 = !{i64 12404}
!474 = !{i64 12428}
!475 = !{i64 12440}
!476 = !{i64 12464}
!477 = !{i64 12480}
!478 = !{i64 12492}
!479 = !{i64 12504}
!480 = !{i64 12516}
!481 = !{i64 12524}
!482 = !{i64 12532}
!483 = !{i64 12540}
!484 = !{i64 12564}
!485 = !{i64 12584}
!486 = !{i64 12608}
!487 = !{i64 12620}
!488 = !{i64 12640}
!489 = !{i64 12652}
!490 = !{i64 12660}
!491 = !{i64 12680}
!492 = !{i64 12704}
!493 = !{i64 12716}
!494 = !{i64 12736}
!495 = !{i64 12748}
!496 = !{i64 12756}
!497 = !{i64 12776}
!498 = !{i64 12796}
!499 = !{i64 12804}
!500 = !{i64 12828}
!501 = !{i64 12840}
!502 = !{i64 12864}
!503 = !{i64 12876}
!504 = !{i64 12896}
!505 = !{i64 12904}
!506 = !{i64 12908}
!507 = !{i64 12924}
!508 = !{i64 12940}
!509 = !{i64 12952}
!510 = !{i64 12972}
!511 = !{i64 12996}
!512 = !{i64 13008}
!513 = !{i64 13028}
!514 = !{i64 13040}
!515 = !{i64 13048}
!516 = !{i64 13068}
!517 = !{i64 13072}
!518 = !{i64 13084}
!519 = !{i64 13088}
!520 = !{i64 13092}
!521 = !{i64 13100}
!522 = !{i64 13116}
!523 = !{i64 13136}
!524 = !{i64 13140}
!525 = !{i64 13152}
!526 = !{i64 13156}
!527 = !{i64 13160}
!528 = !{i64 13168}
!529 = !{i64 13184}
!530 = !{i64 13204}
!531 = !{i64 13208}
!532 = !{i64 13220}
!533 = !{i64 13224}
!534 = !{i64 13228}
!535 = !{i64 13236}
!536 = !{i64 13252}
!537 = !{i64 13260}
!538 = !{i64 13284}
!539 = !{i64 13296}
!540 = !{i64 13324}
!541 = !{i64 13336}
!542 = !{i64 13340}
!543 = !{i64 13352}
!544 = !{i64 13360}
!545 = !{i64 13364}
!546 = !{i64 13376}
!547 = !{i64 13404}
!548 = !{i64 13416}
!549 = !{i64 13420}
!550 = !{i64 13432}
!551 = !{i64 13440}
!552 = !{i64 13444}
!553 = !{i64 13456}
!554 = !{i64 13484}
!555 = !{i64 13496}
!556 = !{i64 13500}
!557 = !{i64 13512}
!558 = !{i64 13520}
!559 = !{i64 13524}
!560 = !{i64 13536}
!561 = !{i64 13564}
!562 = !{i64 13576}
!563 = !{i64 13580}
!564 = !{i64 13592}
!565 = !{i64 13600}
!566 = !{i64 13604}
!567 = !{i64 13616}
!568 = !{i64 13636}
!569 = !{i64 13640}
!570 = !{i64 13664}
!571 = !{i64 13672}
!572 = !{i64 13692}
!573 = !{i64 13708}
!574 = !{i64 13728}
!575 = !{i64 13744}
!576 = !{i64 13756}
!577 = !{i64 13784}
!578 = !{i64 13796}
!579 = !{i64 13808}
!580 = !{i64 13832}
!581 = !{i64 13836}
!582 = !{i64 13864}
!583 = !{i64 13872}
!584 = !{i64 13880}
!585 = !{i64 13884}
!586 = !{i64 13900}
!587 = !{i64 13904}
!588 = !{i64 13916}
!589 = !{i64 13924}
!590 = !{i64 13928}
!591 = !{i64 13936}
!592 = !{i64 13940}
!593 = !{i64 13952}
!594 = !{i64 13956}
!595 = !{i64 13988}
!596 = !{i64 13996}
!597 = !{i64 14004}
!598 = !{i64 14012}
!599 = !{i64 14024}
!600 = !{i64 14032}
!601 = !{i64 14052}
!602 = !{i64 14060}
!603 = !{i64 14068}
!604 = !{i64 14072}
!605 = !{i64 14080}
!606 = !{i64 14092}
!607 = !{i64 14120}
!608 = !{i64 14140}
!609 = !{i64 14164}
!610 = !{i64 14192}
!611 = !{i64 14232}
!612 = !{i64 14244}
!613 = !{i64 14256}
!614 = !{i64 14272}
!615 = !{i64 14284}
!616 = !{i64 14288}
!617 = !{i64 14304}
!618 = !{i64 14312}
!619 = !{i64 14296}
!620 = !{i64 14328}
!621 = !{i64 14336}
!622 = !{i64 14344}
!623 = !{i64 14348}
!624 = !{i64 14360}
!625 = !{i64 14364}
!626 = !{i64 14372}
!627 = !{i64 14380}
!628 = !{i64 14384}
!629 = !{i64 14392}
!630 = !{i64 14404}
!631 = !{i64 14416}
!632 = !{i64 14420}
!633 = !{i64 14432}
!634 = !{i64 14448}
!635 = !{i64 14456}
!636 = !{i64 14472}
!637 = !{i64 14484}
!638 = !{i64 14488}
!639 = !{i64 14504}
!640 = !{i64 14512}
!641 = !{i64 14528}
!642 = !{i64 14536}
!643 = !{i64 14544}
!644 = !{i64 14548}
!645 = !{i64 14560}
!646 = !{i64 14572}
!647 = !{i64 14580}
!648 = !{i64 14584}
!649 = !{i64 14592}
!650 = !{i64 14604}
!651 = !{i64 14576}
!652 = !{i64 14632}
!653 = !{i64 14648}
!654 = !{i64 14656}
!655 = !{i64 14684}
!656 = !{i64 14696}
!657 = !{i64 14724}
!658 = !{i64 14736}
!659 = !{i64 14756}
!660 = !{i64 14776}
!661 = !{i64 14796}
!662 = !{i64 14816}
!663 = !{i64 14836}
!664 = !{i64 14860}
!665 = !{i64 14872}
!666 = !{i64 14896}
!667 = !{i64 14908}
!668 = !{i64 14928}
!669 = !{i64 14940}
!670 = !{i64 14948}
!671 = !{i64 14968}
!672 = !{i64 14984}
!673 = !{i64 14996}
!674 = !{i64 15016}
!675 = !{i64 15032}
!676 = !{i64 15044}
!677 = !{i64 15072}
!678 = !{i64 15084}
!679 = !{i64 15112}
!680 = !{i64 15124}
!681 = !{i64 15148}
!682 = !{i64 15160}
!683 = !{i64 15164}
!684 = !{i64 15168}
!685 = !{i64 15176}
!686 = !{i64 15188}
!687 = !{i64 15204}
!688 = !{i64 15212}
!689 = !{i64 15228}
!690 = !{i64 15256}
!691 = !{i64 15264}
!692 = !{i64 15284}
!693 = !{i64 15312}
!694 = !{i64 15328}
!695 = !{i64 15340}
!696 = !{i64 15368}
!697 = !{i64 15380}
!698 = !{i64 15412}
!699 = !{i64 15424}
!700 = !{i64 15432}
!701 = !{i64 15436}
!702 = !{i64 15452}
!703 = !{i64 15480}
!704 = !{i64 15492}
!705 = !{i64 15520}
!706 = !{i64 15532}
!707 = !{i64 15552}
!708 = !{i64 15564}
!709 = !{i64 15568}
!710 = !{i64 15572}
!711 = !{i64 15580}
!712 = !{i64 15604}
!713 = !{i64 15612}
!714 = !{i64 15624}
!715 = !{i64 15656}
!716 = !{i64 15668}
!717 = !{i64 15672}
!718 = !{i64 15680}
!719 = !{i64 15708}
!720 = !{i64 15720}
!721 = !{i64 15724}
!722 = !{i64 15740}
!723 = !{i64 15760}
!724 = !{i64 15768}
!725 = !{i64 15788}
!726 = !{i64 15796}
!727 = !{i64 15816}
!728 = !{i64 15820}
!729 = !{i64 15840}
!730 = !{i64 15844}
!731 = !{i64 15852}
!732 = !{i64 15864}
!733 = !{i64 15884}
!734 = !{i64 15892}
!735 = !{i64 15912}
!736 = !{i64 15936}
!737 = !{i64 15964}
!738 = !{i64 15976}
!739 = !{i64 15980}
!740 = !{i64 15996}
!741 = !{i64 16016}
!742 = !{i64 16024}
!743 = !{i64 16044}
!744 = !{i64 16052}
!745 = !{i64 16056}
!746 = !{i64 16076}
!747 = !{i64 16080}
!748 = !{i64 16088}
!749 = !{i64 16100}
!750 = !{i64 16120}
!751 = !{i64 16128}
!752 = !{i64 16148}
!753 = !{i64 16160}
!754 = !{i64 16180}
!755 = !{i64 16188}
!756 = !{i64 16208}
!757 = !{i64 16216}
!758 = !{i64 16236}
!759 = !{i64 16240}
!760 = !{i64 16248}
!761 = !{i64 16268}
!762 = !{i64 16280}
!763 = !{i64 16300}
!764 = !{i64 16308}
!765 = !{i64 16328}
!766 = !{i64 16336}
!767 = !{i64 16356}
!768 = !{i64 16360}
!769 = !{i64 16368}
!770 = !{i64 16388}
!771 = !{i64 16396}
!772 = !{i64 16408}
!773 = !{i64 16428}
!774 = !{i64 16436}
!775 = !{i64 16456}
!776 = !{i64 16464}
!777 = !{i64 16484}
!778 = !{i64 16492}
!779 = !{i64 16512}
!780 = !{i64 16520}
!781 = !{i64 16532}
!782 = !{i64 16552}
!783 = !{i64 16560}
!784 = !{i64 16580}
!785 = !{i64 16588}
!786 = !{i64 16608}
!787 = !{i64 16616}
!788 = !{i64 16636}
!789 = !{i64 16656}
!790 = !{i64 16668}
!791 = !{i64 16684}
!792 = !{i64 16696}
!793 = !{i64 16716}
!794 = !{i64 16724}
!795 = !{i64 16744}
!796 = !{i64 16752}
!797 = !{i64 16772}
!798 = !{i64 16780}
!799 = !{i64 16800}
!800 = !{i64 16812}
!801 = !{i64 16832}
!802 = !{i64 16840}
!803 = !{i64 16860}
!804 = !{i64 16868}
!805 = !{i64 16888}
!806 = !{i64 16896}
!807 = !{i64 16920}
!808 = !{i64 16924}
!809 = !{i64 16932}
!810 = !{i64 16944}
!811 = !{i64 16964}
!812 = !{i64 16984}
!813 = !{i64 17004}
!814 = !{i64 17012}
!815 = !{i64 17032}
!816 = !{i64 17040}
!817 = !{i64 17060}
!818 = !{i64 17080}
!819 = !{i64 17088}
!820 = !{i64 17108}
!821 = !{i64 17116}
!822 = !{i64 17136}
!823 = !{i64 17156}
!824 = !{i64 17176}
!825 = !{i64 17204}
!826 = !{i64 17212}
!827 = !{i64 17224}
!828 = !{i64 17244}
!829 = !{i64 17256}
!830 = !{i64 17264}
!831 = !{i64 17292}
!832 = !{i64 17300}
!833 = !{i64 17312}
!834 = !{i64 17332}
!835 = !{i64 17344}
!836 = !{i64 17352}
!837 = !{i64 17380}
!838 = !{i64 17388}
!839 = !{i64 17400}
!840 = !{i64 17416}
!841 = !{i64 17444}
!842 = !{i64 17468}
!843 = !{i64 17480}
!844 = !{i64 17492}
!845 = !{i64 17496}
!846 = !{i64 17500}
!847 = !{i64 17508}
!848 = !{i64 17512}
!849 = !{i64 17516}
!850 = !{i64 17536}
!851 = !{i64 17548}
!852 = !{i64 17556}
!853 = !{i64 17560}
!854 = !{i64 17564}
!855 = !{i64 17572}
!856 = !{i64 17576}
!857 = !{i64 17580}
!858 = !{i64 17608}
!859 = !{i64 17624}
!860 = !{i64 17636}
!861 = !{i64 17644}
!862 = !{i64 17656}
!863 = !{i64 17660}
!864 = !{i64 17664}
!865 = !{i64 17684}
!866 = !{i64 17696}
!867 = !{i64 17704}
!868 = !{i64 17708}
!869 = !{i64 17712}
!870 = !{i64 17740}
!871 = !{i64 17748}
!872 = !{i64 17760}
!873 = !{i64 17780}
!874 = !{i64 17792}
!875 = !{i64 17800}
!876 = !{i64 17820}
