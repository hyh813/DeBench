source_filename = "test"
target datalayout = "e-m:e-i64:64-i128:128-n32:64-S128"

%vtable_167f8_type = type { i64 (i64*)*, i64 ()*, i64 ()* }
%vtable_16820_type = type { i64 (i64*)*, i64 ()*, i64 ()* }
%vtable_16848_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_16878_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_16948_type = type { i64 ()* }
%vtable_169b0_type = type { i64 ()* }
%vtable_16a10_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_16a38_type = type { i64 ()*, i64 ()*, i64 ()*, i64 ()* }
%vtable_16a90_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_16ab8_type = type { i64 ()*, i64 ()*, i64 ()* }
%vtable_16ae0_type = type { i64 (i32)*, i64 ()*, i64 (i64*, i64*)*, i64 ()* }
%vtable_16b10_type = type { i64 (i32)*, i64 ()*, i64 ()*, i64 ()* }
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
@global_var_16980 = local_unnamed_addr global i64 13104
@global_var_169e8 = local_unnamed_addr global i64 13172
@global_var_168e0 = global i64 13240
@global_var_168a8 = global i64 13256
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
@global_var_17038 = global i32* null
@global_var_17039 = global i32 0
@global_var_167f8 = global %vtable_167f8_type { i64 (i64*)* @_ZN12RTTIDerivedBD1Ev, i64 ()* @_ZN12RTTIDerivedBD0Ev, i64 ()* @_ZNK12RTTIDerivedB7getTypeEv }
@global_var_16820 = global %vtable_16820_type { i64 (i64*)* @_ZN12RTTIDerivedAD1Ev, i64 ()* @_ZN12RTTIDerivedAD0Ev, i64 ()* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_16848 = global %vtable_16848_type { i64 ()* @_ZN8RTTIBaseD1Ev, i64 ()* @_ZN8RTTIBaseD0Ev, i64 ()* @_ZNK8RTTIBase7getTypeEv }
@global_var_16878 = global %vtable_16878_type { i64 ()* @_ZN14DiamondDerived4funcEv, i64 ()* @_ZN14DiamondDerivedD1Ev, i64 ()* @_ZN14DiamondDerivedD0Ev }
@global_var_16948 = local_unnamed_addr global %vtable_16948_type { i64 ()* @_ZN7MiddleA4funcEv }
@global_var_169b0 = local_unnamed_addr global %vtable_169b0_type { i64 ()* @_ZN7MiddleB4funcEv }
@global_var_16a10 = global %vtable_16a10_type { i64 ()* @_ZN11VirtualBase4funcEv, i64 ()* @_ZN11VirtualBaseD1Ev, i64 ()* @_ZN11VirtualBaseD0Ev }
@global_var_16a38 = global %vtable_16a38_type { i64 ()* @_ZN12MultiDerived5funcAEv, i64 ()* @_ZN12MultiDerivedD1Ev, i64 ()* @_ZN12MultiDerivedD0Ev, i64 ()* @_ZN12MultiDerived5funcBEv }
@global_var_16a90 = global %vtable_16a90_type { i64 ()* @_ZN5BaseB5funcBEv, i64 ()* @_ZN5BaseBD1Ev, i64 ()* @_ZN5BaseBD0Ev }
@global_var_16ab8 = global %vtable_16ab8_type { i64 ()* @_ZN5BaseA5funcAEv, i64 ()* @_ZN5BaseAD1Ev, i64 ()* @_ZN5BaseAD0Ev }
@global_var_16ae0 = global %vtable_16ae0_type { i64 (i32)* @_ZN7Derived12virtual_funcEi, i64 ()* @_ZNK7Derived7getNameEv, i64 (i64*, i64*)* @_ZN7DerivedD1Ev, i64 ()* @_ZN7DerivedD0Ev }
@global_var_16b10 = global %vtable_16b10_type { i64 (i32)* @_ZN4Base12virtual_funcEi, i64 ()* @_ZNK4Base7getNameEv, i64 ()* @_ZN4BaseD1Ev, i64 ()* @_ZN4BaseD0Ev }

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

define i64 @function_1910(i64 %arg1) local_unnamed_addr {
dec_label_pc_1910:
  %0 = call i64 @__cxa_bad_typeid(i64 %arg1), !insn.addr !13
  ret i64 %0, !insn.addr !13
}

define i64 @function_1920(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1920:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !14
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

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1b14:
  %stack_var_-40 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !47
  %1 = inttoptr i64 %0 to i64*, !insn.addr !48
  %2 = load i64, i64* %1, align 8, !insn.addr !48
  %3 = bitcast i64* %stack_var_-40 to i8*, !insn.addr !49
  %4 = call i64 @_ZN11SimpleClassC1EiPKc(i64* nonnull %stack_var_-40, i64* inttoptr (i64 5 to i64*), i32 ptrtoint ([5 x i8]* @global_var_45d0 to i32), i8* nonnull %3), !insn.addr !49
  %5 = call i64 @_ZN11SimpleClass8setValueEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !50
  %6 = call i64 @_ZNK11SimpleClass8getValueEv(), !insn.addr !51
  %7 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %stack_var_-40, i32 3), !insn.addr !52
  %8 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !53
  %9 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !54
  %10 = inttoptr i64 %9 to i64*, !insn.addr !55
  %11 = load i64, i64* %10, align 8, !insn.addr !55
  %12 = icmp eq i64 %2, %11, !insn.addr !56
  br i1 %12, label %dec_label_pc_1bb0, label %dec_label_pc_1bac, !insn.addr !57

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b14
  call void @__stack_chk_fail(), !insn.addr !58
  br label %dec_label_pc_1bb0, !insn.addr !58

dec_label_pc_1bb0:                                ; preds = %dec_label_pc_1bac, %dec_label_pc_1b14
  %13 = add i64 %7, %6, !insn.addr !59
  %14 = add i64 %13, %8, !insn.addr !60
  %15 = and i64 %14, 4294967295, !insn.addr !61
  ret i64 %15, !insn.addr !62

; uselistorder directives
  uselistorder i64* %stack_var_-40, { 0, 2, 1 }
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1bbc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !63
  %3 = inttoptr i64 %2 to i64*, !insn.addr !64
  %4 = load i64, i64* %3, align 8, !insn.addr !64
  %5 = call i64 @_ZN14LifecycleClassC1Em(i64 %1), !insn.addr !65
  %6 = call i64 @_ZNK14LifecycleClass7getDataEm(i64 ptrtoint (i32* @0 to i64)), !insn.addr !66
  %7 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !67
  %8 = call i64 @_ZN14LifecycleClassD1Ev(), !insn.addr !68
  %9 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !69
  %10 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !70
  %11 = inttoptr i64 %10 to i64*, !insn.addr !71
  %12 = load i64, i64* %11, align 8, !insn.addr !71
  %13 = icmp eq i64 %4, %12, !insn.addr !72
  br i1 %13, label %dec_label_pc_1c64, label %dec_label_pc_1c60, !insn.addr !73

dec_label_pc_1c60:                                ; preds = %dec_label_pc_1bbc
  call void @__stack_chk_fail(), !insn.addr !74
  br label %dec_label_pc_1c64, !insn.addr !74

dec_label_pc_1c64:                                ; preds = %dec_label_pc_1c60, %dec_label_pc_1bbc
  %14 = add i64 %7, %6, !insn.addr !75
  %15 = mul i64 %9, zext (i32 ptrtoint (i32* @global_var_3e8 to i32) to i64), !insn.addr !76
  %16 = add i64 %14, %15, !insn.addr !77
  %17 = and i64 %16, 4294967295, !insn.addr !78
  ret i64 %17, !insn.addr !79

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !80
}

define i64 @function_1c98(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1c98:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !81
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1ca0:
  %stack_var_-16 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !82
  %1 = inttoptr i64 %0 to i64*, !insn.addr !83
  %2 = load i64, i64* %1, align 8, !insn.addr !83
  %3 = call i64 @_ZN7DerivedC1Ei(i64* nonnull %stack_var_-16, i32 3), !insn.addr !84
  %4 = call i64 @_ZN4Base12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !85
  %5 = call i64 @_ZN7Derived12virtual_funcEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !86
  %6 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !87
  %7 = call i64 @_Z17call_virtual_funcP4Basei(i64* bitcast (i32* @0 to i64*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !88
  %8 = add i64 %5, %4, !insn.addr !89
  %9 = add i64 %8, %6, !insn.addr !90
  %10 = and i64 %9, 4294967295, !insn.addr !90
  %11 = inttoptr i64 %10 to i64*, !insn.addr !91
  %12 = call i64 @_ZN7DerivedD1Ev(i64* nonnull %stack_var_-16, i64* %11), !insn.addr !91
  %13 = call i64 @_ZN4BaseD1Ev(), !insn.addr !92
  %14 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !93
  %15 = inttoptr i64 %14 to i64*, !insn.addr !94
  %16 = load i64, i64* %15, align 8, !insn.addr !94
  %17 = icmp eq i64 %2, %16, !insn.addr !95
  br i1 %17, label %dec_label_pc_1d98, label %dec_label_pc_1d94, !insn.addr !96

dec_label_pc_1d94:                                ; preds = %dec_label_pc_1ca0
  call void @__stack_chk_fail(), !insn.addr !97
  br label %dec_label_pc_1d98, !insn.addr !97

dec_label_pc_1d98:                                ; preds = %dec_label_pc_1d94, %dec_label_pc_1ca0
  %18 = add i64 %9, %7, !insn.addr !98
  %19 = and i64 %18, 4294967295, !insn.addr !99
  ret i64 %19, !insn.addr !100

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev(i64* %result) local_unnamed_addr {
dec_label_pc_1da8:
  %stack_var_-32 = alloca i64, align 8
  %0 = call i64 @_ZN12MultiDerivedC1Ev(), !insn.addr !101
  %1 = ptrtoint i64* %stack_var_-32 to i64, !insn.addr !102
  ret i64 %1, !insn.addr !103
}

define i64 @function_1e08(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e08:
  ret i64 %arg1, !insn.addr !104
}

define i64 @function_1e20(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e20:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i32, i32* %1
  %5 = load i64, i64* %0
  %6 = load i64, i64* %0
  %7 = call i64 @_ZN12MultiDerivedD1Ev(), !insn.addr !105
  %8 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !106
  %9 = inttoptr i64 %8 to i64*, !insn.addr !107
  %10 = load i64, i64* %9, align 8, !insn.addr !107
  %11 = icmp eq i64 %3, %10, !insn.addr !108
  br i1 %11, label %dec_label_pc_1e94, label %dec_label_pc_1e90, !insn.addr !109

dec_label_pc_1e90:                                ; preds = %dec_label_pc_1e20
  call void @__stack_chk_fail(), !insn.addr !110
  br label %dec_label_pc_1e94, !insn.addr !110

dec_label_pc_1e94:                                ; preds = %dec_label_pc_1e90, %dec_label_pc_1e20
  %12 = trunc i64 %2 to i32, !insn.addr !111
  %13 = icmp eq i64 %6, %5, !insn.addr !112
  %14 = icmp ne i1 %13, true, !insn.addr !113
  %15 = zext i1 %14 to i32, !insn.addr !113
  %16 = add i32 %4, %12, !insn.addr !114
  %17 = add i32 %16, %15, !insn.addr !115
  %18 = zext i32 %17 to i64, !insn.addr !116
  ret i64 %18, !insn.addr !117

; uselistorder directives
  uselistorder i64* %0, { 3, 2, 1, 0 }
}

define i64 @_Z28test_cpp_diamond_inheritancev(i64* %result) local_unnamed_addr {
dec_label_pc_1ea4:
  %stack_var_-16 = alloca i64, align 8
  %0 = call i64 @_ZN14DiamondDerivedC1Ev(), !insn.addr !118
  %1 = ptrtoint i64* %stack_var_-16 to i64, !insn.addr !119
  ret i64 %1, !insn.addr !120
}

define i64 @function_1ef4(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ef4:
  ret i64 %arg1, !insn.addr !121
}

define i64 @function_1f14(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1f14:
  %0 = alloca i64
  %1 = alloca i32
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i32, i32* %1
  %5 = call i64 @_ZN14DiamondDerivedD1Ev(), !insn.addr !122
  %6 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !123
  %7 = inttoptr i64 %6 to i64*, !insn.addr !124
  %8 = load i64, i64* %7, align 8, !insn.addr !124
  %9 = icmp eq i64 %3, %8, !insn.addr !125
  br i1 %9, label %dec_label_pc_1f68, label %dec_label_pc_1f64, !insn.addr !126

dec_label_pc_1f64:                                ; preds = %dec_label_pc_1f14
  call void @__stack_chk_fail(), !insn.addr !127
  br label %dec_label_pc_1f68, !insn.addr !127

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f64, %dec_label_pc_1f14
  %10 = trunc i64 %2 to i32, !insn.addr !128
  %11 = add i32 %4, %10, !insn.addr !129
  %12 = zext i32 %11 to i64, !insn.addr !130
  ret i64 %12, !insn.addr !131

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1f78:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !132
  %3 = inttoptr i64 %2 to i64*, !insn.addr !133
  %4 = load i64, i64* %3, align 8, !insn.addr !133
  %5 = call i64 @_ZN5PointC1Eii(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !134
  %6 = call i64 @_ZN5PointC1Eii(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !135
  %7 = call i64 @_ZNK5PointplERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !136
  %8 = call i64 @_ZNK5PointeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !137
  %9 = call i64 @_ZN5PointppEv(), !insn.addr !138
  %10 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !139
  %11 = inttoptr i64 %10 to i64*, !insn.addr !140
  %12 = load i64, i64* %11, align 8, !insn.addr !140
  %13 = icmp eq i64 %4, %12, !insn.addr !141
  br i1 %13, label %dec_label_pc_2028, label %dec_label_pc_2024, !insn.addr !142

dec_label_pc_2024:                                ; preds = %dec_label_pc_1f78
  call void @__stack_chk_fail(), !insn.addr !143
  br label %dec_label_pc_2028, !insn.addr !143

dec_label_pc_2028:                                ; preds = %dec_label_pc_2024, %dec_label_pc_1f78
  %14 = trunc i64 %7 to i32, !insn.addr !144
  %15 = add i32 %1, %14, !insn.addr !145
  %16 = zext i32 %15 to i64, !insn.addr !145
  %17 = urem i64 %8, 256
  %18 = icmp eq i64 %17, 0, !insn.addr !146
  %. = select i1 %18, i64 10, i64 0
  %19 = add nuw nsw i64 %., %16, !insn.addr !147
  %20 = and i64 %19, 4294967295, !insn.addr !148
  ret i64 %20, !insn.addr !149
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2034:
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !150
  %1 = inttoptr i64 %0 to i64*, !insn.addr !151
  %2 = load i64, i64* %1, align 8, !insn.addr !151
  %3 = call i32 @_Z12template_maxIiET_S0_S0_(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !152
  %4 = call double @_Z12template_maxIdET_S0_S0_(double bitcast (i64 ptrtoint (i32* @0 to i64) to double), double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !153
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull @0, i32* nonnull @0), !insn.addr !154
  %5 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !155
  %6 = inttoptr i64 %5 to i64*, !insn.addr !156
  %7 = load i64, i64* %6, align 8, !insn.addr !156
  %8 = icmp eq i64 %2, %7, !insn.addr !157
  br i1 %8, label %dec_label_pc_20d0, label %dec_label_pc_20cc, !insn.addr !158

dec_label_pc_20cc:                                ; preds = %dec_label_pc_2034
  call void @__stack_chk_fail(), !insn.addr !159
  br label %dec_label_pc_20d0, !insn.addr !159

dec_label_pc_20d0:                                ; preds = %dec_label_pc_20cc, %dec_label_pc_2034
  %9 = add i32 %3, 32, !insn.addr !160
  %10 = zext i32 %9 to i64, !insn.addr !161
  ret i64 %10, !insn.addr !162
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_20dc:
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !163
  %1 = inttoptr i64 %0 to i64*, !insn.addr !164
  %2 = load i64, i64* %1, align 8, !insn.addr !164
  %3 = call i64 @_ZN9ContainerIiEC1Ev(), !insn.addr !165
  %4 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !166
  %5 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !167
  %6 = call i64 @_ZN9ContainerIiE4pushEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !168
  %7 = call i64 @_ZNK9ContainerIiE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !169
  %8 = call i64 @_ZNK9ContainerIiE7getSizeEv(), !insn.addr !170
  %9 = call i64 @_ZN9ContainerIdEC1Ev(), !insn.addr !171
  %10 = call i64 @_ZN9ContainerIdE4pushEd(double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !172
  %11 = call i64 @_ZNK9ContainerIdE3getEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !173
  %12 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !174
  %13 = inttoptr i64 %12 to i64*, !insn.addr !175
  %14 = load i64, i64* %13, align 8, !insn.addr !175
  %15 = icmp eq i64 %2, %14, !insn.addr !176
  br i1 %15, label %dec_label_pc_21a4, label %dec_label_pc_21a0, !insn.addr !177

dec_label_pc_21a0:                                ; preds = %dec_label_pc_20dc
  call void @__stack_chk_fail(), !insn.addr !178
  br label %dec_label_pc_21a4, !insn.addr !178

dec_label_pc_21a4:                                ; preds = %dec_label_pc_21a0, %dec_label_pc_20dc
  %16 = add i64 %8, %7, !insn.addr !179
  %17 = and i64 %16, 4294967295, !insn.addr !180
  ret i64 %17, !insn.addr !181

; uselistorder directives
  uselistorder i64 (i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %x0 = alloca i64, align 8
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !182
  %4 = add i64 %2, 8, !insn.addr !183
  %5 = inttoptr i64 %4 to i64*, !insn.addr !183
  %6 = load i64, i64* %5, align 8, !insn.addr !183
  %7 = inttoptr i64 %6 to i32*, !insn.addr !184
  %8 = load i32, i32* %7, align 4, !insn.addr !184
  %9 = add i32 %8, 5, !insn.addr !185
  store i32 %9, i32* %7, align 4, !insn.addr !186
  %10 = bitcast i64* %x0 to i32*
  %11 = load i32, i32* %10, align 8, !insn.addr !187
  %12 = mul i32 %11, %3, !insn.addr !188
  %13 = load i64, i64* %5, align 8, !insn.addr !189
  %14 = inttoptr i64 %13 to i32*, !insn.addr !190
  %15 = load i32, i32* %14, align 4, !insn.addr !190
  %16 = add i32 %15, %12, !insn.addr !191
  %17 = zext i32 %16 to i64, !insn.addr !191
  ret i64 %17, !insn.addr !192

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2200:
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !193
  %1 = inttoptr i64 %0 to i64*, !insn.addr !194
  %2 = load i64, i64* %1, align 8, !insn.addr !194
  %3 = call i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i32 ptrtoint (i32* @0 to i32)), !insn.addr !195
  %4 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !196
  %5 = inttoptr i64 %4 to i64*, !insn.addr !197
  %6 = load i64, i64* %5, align 8, !insn.addr !197
  %7 = icmp eq i64 %2, %6, !insn.addr !198
  br i1 %7, label %dec_label_pc_2284, label %dec_label_pc_2280, !insn.addr !199

dec_label_pc_2280:                                ; preds = %dec_label_pc_2200
  call void @__stack_chk_fail(), !insn.addr !200
  br label %dec_label_pc_2284, !insn.addr !200

dec_label_pc_2284:                                ; preds = %dec_label_pc_2280, %dec_label_pc_2200
  %8 = add i64 %3, 30, !insn.addr !201
  %9 = and i64 %8, 4294967295, !insn.addr !202
  ret i64 %9, !insn.addr !203
}

define i64 @_Z18test_cpp_exceptionv(i64* %result) local_unnamed_addr {
dec_label_pc_2290:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !204
  %1 = inttoptr i64 %0 to i32*, !insn.addr !205
  store i32 42, i32* %1, align 4, !insn.addr !205
  %2 = load i64, i64* @global_var_16fc0, align 8, !insn.addr !206
  %3 = call i64 @__cxa_throw(i64 %0, i64 %2, i64 0), !insn.addr !207
  ret i64 0, !insn.addr !208

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i32* %arg1) local_unnamed_addr {
dec_label_pc_23b4:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !209
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32*, !insn.addr !210
  store i32 -1, i32* %2, align 4, !insn.addr !210
  %3 = icmp eq i64 %1, 0, !insn.addr !211
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !212
  br i1 %3, label %dec_label_pc_23e4, label %dec_label_pc_23dc, !insn.addr !212

dec_label_pc_23dc:                                ; preds = %dec_label_pc_23b4
  %4 = inttoptr i64 %1 to i64*, !insn.addr !213
  %5 = call i64 @_ZdlPvm(i64* %4, i64 4), !insn.addr !213
  store i64 %5, i64* %x0.0.reg2mem, !insn.addr !213
  br label %dec_label_pc_23e4, !insn.addr !213

dec_label_pc_23e4:                                ; preds = %dec_label_pc_23dc, %dec_label_pc_23b4
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !214

; uselistorder directives
  uselistorder i64 %1, { 2, 0, 1 }
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_23f0:
  %stack_var_-8 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-16 = alloca i64, align 8
  %stack_var_-24 = alloca i64, align 8
  %stack_var_-32 = alloca i64, align 8
  %0 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !215
  %1 = inttoptr i64 %0 to i64*, !insn.addr !216
  %2 = load i64, i64* %1, align 8, !insn.addr !216
  %3 = call i64 @_Znwm(i64 4), !insn.addr !217
  %4 = inttoptr i64 %3 to i32*, !insn.addr !218
  store i32 100, i32* %4, align 4, !insn.addr !218
  %5 = inttoptr i64 %3 to i64*, !insn.addr !219
  %6 = bitcast i64* %stack_var_-32 to i32*, !insn.addr !219
  %7 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1IS1_vEEPi(i64* nonnull %stack_var_-32, i64* %5, i32* nonnull %6), !insn.addr !219
  %8 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-32), !insn.addr !220
  %9 = inttoptr i64 %8 to i32*, !insn.addr !221
  store i32 200, i32* %9, align 4, !insn.addr !221
  %10 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** bitcast (i32* @0 to i64**)), !insn.addr !222
  %11 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_(i64* nonnull %stack_var_-24, i64* %10), !insn.addr !223
  %12 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-24), !insn.addr !224
  %13 = inttoptr i64 %12 to i32*, !insn.addr !225
  %14 = load i32, i32* %13, align 4, !insn.addr !225
  %15 = call i64 @_Znam(i64 20), !insn.addr !226
  %16 = inttoptr i64 %15 to i32*, !insn.addr !227
  store i32 1, i32* %16, align 4, !insn.addr !227
  %17 = add i64 %15, 4, !insn.addr !228
  %18 = inttoptr i64 %17 to i32*, !insn.addr !229
  store i32 2, i32* %18, align 4, !insn.addr !229
  %19 = add i64 %15, 8, !insn.addr !230
  %20 = inttoptr i64 %19 to i32*, !insn.addr !231
  store i32 3, i32* %20, align 4, !insn.addr !231
  %21 = add i64 %15, 12, !insn.addr !232
  %22 = inttoptr i64 %21 to i32*, !insn.addr !233
  store i32 4, i32* %22, align 4, !insn.addr !233
  %23 = add i64 %15, 16, !insn.addr !234
  %24 = inttoptr i64 %23 to i32*, !insn.addr !235
  store i32 5, i32* %24, align 4, !insn.addr !235
  %25 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC1IPiS2_vbEET_(i64* nonnull %stack_var_-16, i32* %16), !insn.addr !236
  %26 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %stack_var_-16, i64 2), !insn.addr !237
  %27 = inttoptr i64 %26 to i32*, !insn.addr !238
  %28 = load i32, i32* %27, align 4, !insn.addr !238
  %29 = call i64 @_Znwm(i64 4), !insn.addr !239
  %30 = inttoptr i64 %29 to i32*, !insn.addr !240
  store i32 500, i32* %30, align 4, !insn.addr !240
  %31 = inttoptr i64 %29 to i64*, !insn.addr !241
  %32 = bitcast i64* %stack_var_-48 to i32*, !insn.addr !241
  %33 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* nonnull %stack_var_-8, i64* %31, i32* nonnull %32, i64* nonnull %stack_var_-8), !insn.addr !241
  %34 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* nonnull %stack_var_-8), !insn.addr !242
  %35 = inttoptr i64 %34 to i32*, !insn.addr !243
  %36 = load i32, i32* %35, align 4, !insn.addr !243
  %37 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(), !insn.addr !244
  %38 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev(), !insn.addr !245
  %39 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !246
  %40 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(), !insn.addr !247
  %41 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !248
  %42 = inttoptr i64 %41 to i64*, !insn.addr !249
  %43 = load i64, i64* %42, align 8, !insn.addr !249
  %44 = icmp eq i64 %2, %43, !insn.addr !250
  br i1 %44, label %dec_label_pc_2590, label %dec_label_pc_258c, !insn.addr !251

dec_label_pc_258c:                                ; preds = %dec_label_pc_23f0
  call void @__stack_chk_fail(), !insn.addr !252
  br label %dec_label_pc_2590, !insn.addr !252

dec_label_pc_2590:                                ; preds = %dec_label_pc_258c, %dec_label_pc_23f0
  %45 = add i32 %28, %14, !insn.addr !253
  %46 = add i32 %45, %36, !insn.addr !254
  %47 = zext i32 %46 to i64, !insn.addr !255
  ret i64 %47, !insn.addr !256

; uselistorder directives
  uselistorder i64 %15, { 0, 1, 2, 4, 3 }
  uselistorder i64* %stack_var_-32, { 0, 2, 1 }
  uselistorder i64 ()* @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i64 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_25a0:
  %x0.0.reg2mem = alloca i64, !insn.addr !257
  %0 = call i64 @_Znwm(i64 8), !insn.addr !258
  %1 = inttoptr i64 %0 to i64*, !insn.addr !259
  store i64 0, i64* %1, align 8, !insn.addr !259
  %2 = call i64 @_ZN12RTTIDerivedAC1Ev(i64* %1), !insn.addr !260
  %3 = call i64 @_Znwm(i64 8), !insn.addr !261
  %4 = inttoptr i64 %3 to i64*, !insn.addr !262
  store i64 0, i64* %4, align 8, !insn.addr !262
  %5 = call i64 @_ZN12RTTIDerivedBC1Ev(i64* %4), !insn.addr !263
  %6 = icmp eq i64 %0, 0, !insn.addr !264
  br i1 %6, label %dec_label_pc_261c, label %dec_label_pc_25f4, !insn.addr !265

dec_label_pc_25f4:                                ; preds = %dec_label_pc_25a0
  %7 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !266
  br label %dec_label_pc_262c

dec_label_pc_261c:                                ; preds = %dec_label_pc_25a0
  %8 = call i64 @__cxa_bad_typeid(i64 0), !insn.addr !267
  br label %dec_label_pc_262c, !insn.addr !267

dec_label_pc_262c:                                ; preds = %dec_label_pc_25f4, %dec_label_pc_261c
  %9 = icmp eq i64 %3, 0, !insn.addr !268
  br i1 %9, label %dec_label_pc_2660, label %dec_label_pc_2638, !insn.addr !269

dec_label_pc_2638:                                ; preds = %dec_label_pc_262c
  %10 = call i64 @_ZNKSt9type_infoeqERKS_(i64* bitcast (i32* @0 to i64*)), !insn.addr !270
  br label %dec_label_pc_2670

dec_label_pc_2660:                                ; preds = %dec_label_pc_262c
  %11 = call i64 @__cxa_bad_typeid(i64 0), !insn.addr !271
  br label %dec_label_pc_2670, !insn.addr !271

dec_label_pc_2670:                                ; preds = %dec_label_pc_2638, %dec_label_pc_2660
  br i1 %6, label %dec_label_pc_26c4, label %dec_label_pc_267c, !insn.addr !272

dec_label_pc_267c:                                ; preds = %dec_label_pc_2670
  %12 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_16b60, i64* nonnull @global_var_16b48, i64 0), !insn.addr !273
  %phitmp = icmp eq i64 %12, 0
  br i1 %phitmp, label %dec_label_pc_26c4, label %dec_label_pc_26ac, !insn.addr !274

dec_label_pc_26ac:                                ; preds = %dec_label_pc_267c
  %13 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(), !insn.addr !275
  br label %dec_label_pc_26c4, !insn.addr !276

dec_label_pc_26c4:                                ; preds = %dec_label_pc_2670, %dec_label_pc_26ac, %dec_label_pc_267c
  br i1 %9, label %dec_label_pc_2718, label %dec_label_pc_26d0, !insn.addr !277

dec_label_pc_26d0:                                ; preds = %dec_label_pc_26c4
  %14 = call i64 @__dynamic_cast(i64 %3, i64* nonnull @global_var_16b60, i64* nonnull @global_var_16b30, i64 0), !insn.addr !278
  %phitmp2 = icmp eq i64 %14, 0
  br i1 %phitmp2, label %dec_label_pc_2718, label %dec_label_pc_2700, !insn.addr !279

dec_label_pc_2700:                                ; preds = %dec_label_pc_26d0
  %15 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(), !insn.addr !280
  br label %dec_label_pc_2718, !insn.addr !281

dec_label_pc_2718:                                ; preds = %dec_label_pc_26c4, %dec_label_pc_2700, %dec_label_pc_26d0
  br i1 %6, label %dec_label_pc_2754, label %dec_label_pc_2724, !insn.addr !282

dec_label_pc_2724:                                ; preds = %dec_label_pc_2718
  %16 = call i64 @_ZNKSt9type_info4nameEv(), !insn.addr !283
  %17 = inttoptr i64 %16 to i8*, !insn.addr !284
  %18 = call i32 @strlen(i8* %17), !insn.addr !284
  store i64 %0, i64* %x0.0.reg2mem
  br label %dec_label_pc_2758

dec_label_pc_2754:                                ; preds = %dec_label_pc_2718
  %19 = call i64 @__cxa_bad_typeid(i64 0), !insn.addr !285
  store i64 %19, i64* %x0.0.reg2mem, !insn.addr !285
  br label %dec_label_pc_2758, !insn.addr !285

dec_label_pc_2758:                                ; preds = %dec_label_pc_2724, %dec_label_pc_2754
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !286

; uselistorder directives
  uselistorder i64* %x0.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 (i64)* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64 (i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2758, { 1, 0 }
  uselistorder label %dec_label_pc_2718, { 1, 2, 0 }
  uselistorder label %dec_label_pc_26c4, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2670, { 1, 0 }
  uselistorder label %dec_label_pc_262c, { 1, 0 }
}

define i64 @_Z20test_cpp_oo_featuresv(i64* %result) local_unnamed_addr {
dec_label_pc_2794:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_45e8 to i8*)), !insn.addr !287
  %1 = call i64 @_Z20test_cpp_member_funcv(), !insn.addr !288
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4610 to i8*)), !insn.addr !289
  %3 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !290
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4630 to i8*)), !insn.addr !291
  %5 = call i64 @_Z21test_cpp_virtual_funcv(), !insn.addr !292
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4650 to i8*)), !insn.addr !293
  %7 = sext i32 %6 to i64, !insn.addr !293
  %8 = inttoptr i64 %7 to i64*, !insn.addr !294
  %9 = call i64 @_Z29test_cpp_multiple_inheritancev(i64* %8), !insn.addr !294
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4670 to i8*)), !insn.addr !295
  %11 = sext i32 %10 to i64, !insn.addr !295
  %12 = inttoptr i64 %11 to i64*, !insn.addr !296
  %13 = call i64 @_Z28test_cpp_diamond_inheritancev(i64* %12), !insn.addr !296
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4690 to i8*)), !insn.addr !297
  %15 = call i64 @_Z26test_cpp_operator_overloadv(), !insn.addr !298
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46b0 to i8*)), !insn.addr !299
  %17 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !300
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46d0 to i8*)), !insn.addr !301
  %19 = call i64 @_Z23test_cpp_template_classv(), !insn.addr !302
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_46f0 to i8*)), !insn.addr !303
  %21 = call i64 @_Z15test_cpp_lambdav(), !insn.addr !304
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4710 to i8*)), !insn.addr !305
  %23 = call i64 @_Z18test_cpp_exceptionv(i64* bitcast (i32* @0 to i64*)), !insn.addr !306
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4730 to i8*)), !insn.addr !307
  %25 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !308
  %26 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4750 to i8*)), !insn.addr !309
  %27 = call i64 @_Z13test_cpp_rttiv(), !insn.addr !310
  %28 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_4770 to i8*)), !insn.addr !311
  %29 = sext i32 %28 to i64, !insn.addr !311
  ret i64 %29, !insn.addr !312

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_28a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !313
  %3 = call i64 @_Z20test_cpp_oo_featuresv(i64* %2), !insn.addr !313
  ret i64 0, !insn.addr !314
}

define i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_28bc:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i32* nonnull @0, i64** bitcast (i32* @0 to i64**)), !insn.addr !315
  ret i64 %0, !insn.addr !316
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* %this, i64* %result, i32* %arg3, i64* %arg4) local_unnamed_addr {
dec_label_pc_28ec:
  %0 = bitcast i64* %result to i32*, !insn.addr !317
  %1 = bitcast i32* %arg3 to i64**, !insn.addr !317
  %2 = call i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %this, i32* %0, i64** %1), !insn.addr !317
  ret i64 %2, !insn.addr !318
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev() local_unnamed_addr {
dec_label_pc_291c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !319
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %2), !insn.addr !319
  %4 = inttoptr i64 %3 to i64*, !insn.addr !320
  %5 = load i64, i64* %4, align 8, !insn.addr !320
  %6 = icmp eq i64 %5, 0, !insn.addr !321
  br i1 %6, label %dec_label_pc_296c, label %dec_label_pc_2948, !insn.addr !322

dec_label_pc_2948:                                ; preds = %dec_label_pc_291c
  %7 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %2), !insn.addr !323
  %8 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !324
  %9 = call i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i32* nonnull @0), !insn.addr !325
  br label %dec_label_pc_296c, !insn.addr !325

dec_label_pc_296c:                                ; preds = %dec_label_pc_2948, %dec_label_pc_291c
  store i64 0, i64* %4, align 8, !insn.addr !326
  ret i64 %3, !insn.addr !327
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_2984:
  %0 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result), !insn.addr !328
  ret i64 %0, !insn.addr !329
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i32* %arg1, i64** %arg2) local_unnamed_addr {
dec_label_pc_29a8:
  %0 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !330
  %1 = call i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i32*** bitcast (i32* @0 to i32***), i64** bitcast (i32* @0 to i64**)), !insn.addr !331
  ret i64 %1, !insn.addr !332
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_29f4:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !333
  %1 = ptrtoint i64* %0 to i64, !insn.addr !333
  ret i64 %1, !insn.addr !334
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_2a10:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result), !insn.addr !335
  ret i64 %0, !insn.addr !336
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_2a2c:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !337
  ret i64 %0, !insn.addr !338
}

define i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2a48:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64**, !insn.addr !339
  ret i64** %2, !insn.addr !339
}

define i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i32*** %arg1, i64** %arg2) local_unnamed_addr {
dec_label_pc_2a5c:
  %0 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !340
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !341
  %2 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i32*** bitcast (i32* @0 to i32***), i64 ptrtoint (i32* @0 to i64)), !insn.addr !342
  ret i64 %2, !insn.addr !343
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2aac:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !344
  %1 = bitcast i32** %0 to i64*, !insn.addr !345
  ret i64* %1, !insn.addr !345
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_2ac8:
  %0 = call i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !346
  %1 = ptrtoint i64* %0 to i64, !insn.addr !346
  ret i64 %1, !insn.addr !347
}

define i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_2ae4:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %result), !insn.addr !348
  %1 = load i64, i64* %0, align 8, !insn.addr !349
  ret i64 %1, !insn.addr !350
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i32*** %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2b04:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !351
  %3 = inttoptr i64 %1 to i64*, !insn.addr !352
  %4 = bitcast i64** %2 to i64*, !insn.addr !352
  %5 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %3, i64* %4), !insn.addr !352
  %6 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !353
  %7 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1IRS0_EEOT_(i64* %3, i32*** %6), !insn.addr !354
  ret i64 %7, !insn.addr !355

; uselistorder directives
  uselistorder i64** (i64*)* @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE, { 2, 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b58:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1), !insn.addr !356
  %1 = inttoptr i64 %0 to i32**, !insn.addr !357
  ret i32** %1, !insn.addr !357
}

define i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b74:
  %0 = call i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !358
  ret i64* %0, !insn.addr !359
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2b90:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !360
  %1 = bitcast i32** %0 to i64*, !insn.addr !361
  ret i64* %1, !insn.addr !361
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_2bac:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !362
  ret i64 %0, !insn.addr !363
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2bd4:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !364
  ret i64 %0, !insn.addr !365
}

define i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2bf0:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1), !insn.addr !366
  %1 = inttoptr i64 %0 to i64*, !insn.addr !367
  ret i64* %1, !insn.addr !367
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c0c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1), !insn.addr !368
  %1 = inttoptr i64 %0 to i32**, !insn.addr !369
  ret i32** %1, !insn.addr !369
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c28:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !370
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c40:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !371
  ret i64 %0, !insn.addr !372
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c5c:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !373
  ret i64 %0, !insn.addr !374
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2c78:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !375
}

define i64 @_Z41__static_initialization_and_destruction_0ii(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2c8c:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !376
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %2, 4294967295, !insn.addr !377
  %4 = trunc i64 %2 to i32, !insn.addr !378
  %5 = icmp eq i32 %4, 1, !insn.addr !378
  store i64 %3, i64* %x0.0.reg2mem, !insn.addr !378
  br i1 %5, label %dec_label_pc_2ca8, label %dec_label_pc_2ce0, !insn.addr !378

dec_label_pc_2ca8:                                ; preds = %dec_label_pc_2c8c
  %6 = trunc i64 %1 to i32, !insn.addr !379
  %7 = icmp eq i32 %6, 65535, !insn.addr !380
  store i64 65535, i64* %x0.0.reg2mem, !insn.addr !380
  br i1 %7, label %dec_label_pc_2cb8, label %dec_label_pc_2ce0, !insn.addr !380

dec_label_pc_2cb8:                                ; preds = %dec_label_pc_2ca8
  %8 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !381
  %9 = load i64, i64* inttoptr (i64 94200 to i64*), align 8, !insn.addr !382
  %10 = inttoptr i64 %9 to void (i64*)*, !insn.addr !383
  %11 = call i32 @__cxa_atexit(void (i64*)* %10, i64* nonnull @global_var_17040, i64* nonnull @global_var_17008), !insn.addr !383
  %12 = sext i32 %11 to i64, !insn.addr !383
  store i64 %12, i64* %x0.0.reg2mem, !insn.addr !383
  br label %dec_label_pc_2ce0, !insn.addr !383

dec_label_pc_2ce0:                                ; preds = %dec_label_pc_2ca8, %dec_label_pc_2c8c, %dec_label_pc_2cb8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !384

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %x0.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2ce0, { 2, 0, 1 }
}

define i64 @_GLOBAL__sub_I__Z20test_cpp_member_funcv(i64 %arg1) local_unnamed_addr {
dec_label_pc_2cec:
  %0 = call i64 @_Z41__static_initialization_and_destruction_0ii(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !385
  ret i64 %0, !insn.addr !386
}

define i64 @_ZNKSt9type_info4nameEv() local_unnamed_addr {
dec_label_pc_2d08:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 8, !insn.addr !387
  %3 = inttoptr i64 %2 to i64*, !insn.addr !387
  %4 = load i64, i64* %3, align 8, !insn.addr !387
  %5 = inttoptr i64 %4 to i8*, !insn.addr !388
  %6 = load i8, i8* %5, align 1, !insn.addr !388
  %7 = icmp eq i8 %6, 42, !insn.addr !389
  %8 = zext i1 %7 to i64
  %storemerge = add i64 %4, %8
  ret i64 %storemerge, !insn.addr !390
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_2d44:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !391
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !392
  %4 = inttoptr i64 %3 to i64*, !insn.addr !392
  %5 = load i64, i64* %4, align 8, !insn.addr !392
  %6 = add i64 %1, 8, !insn.addr !393
  %7 = inttoptr i64 %6 to i64*, !insn.addr !393
  %8 = load i64, i64* %7, align 8, !insn.addr !393
  %9 = icmp eq i64 %5, %8, !insn.addr !394
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !395
  br i1 %9, label %dec_label_pc_2db0, label %dec_label_pc_2d6c, !insn.addr !395

dec_label_pc_2d6c:                                ; preds = %dec_label_pc_2d44
  %10 = inttoptr i64 %5 to i8*, !insn.addr !396
  %11 = load i8, i8* %10, align 1, !insn.addr !396
  %12 = icmp eq i8 %11, 42, !insn.addr !397
  br i1 %12, label %dec_label_pc_2dac, label %dec_label_pc_2d80, !insn.addr !398

dec_label_pc_2d80:                                ; preds = %dec_label_pc_2d6c
  %13 = inttoptr i64 %8 to i8*, !insn.addr !399
  %14 = call i32 @strcmp(i8* %10, i8* %13), !insn.addr !399
  %15 = icmp eq i32 %14, 0, !insn.addr !400
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !401
  br i1 %15, label %dec_label_pc_2db0, label %dec_label_pc_2dac, !insn.addr !401

dec_label_pc_2dac:                                ; preds = %dec_label_pc_2d80, %dec_label_pc_2d6c
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !402
  br label %dec_label_pc_2db0, !insn.addr !402

dec_label_pc_2db0:                                ; preds = %dec_label_pc_2d44, %dec_label_pc_2d80, %dec_label_pc_2dac
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !403

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2db0, { 2, 1, 0 }
}

define i64 @_ZN11SimpleClassC1EiPKc(i64* %this, i64* %result, i32 %arg3, i8* %arg4) local_unnamed_addr {
dec_label_pc_2db8:
  %0 = sext i32 %arg3 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = ptrtoint i64* %this to i64
  %3 = trunc i64 %1 to i32, !insn.addr !404
  %4 = bitcast i64* %this to i32*, !insn.addr !405
  store i32 %3, i32* %4, align 4, !insn.addr !405
  %5 = add i64 %2, 4, !insn.addr !406
  %6 = inttoptr i64 %5 to i8*, !insn.addr !407
  %7 = inttoptr i64 %0 to i8*, !insn.addr !407
  %8 = call i8* @strncpy(i8* %6, i8* %7, i32 31), !insn.addr !407
  %9 = add i64 %2, 35, !insn.addr !408
  %10 = inttoptr i64 %9 to i8*, !insn.addr !408
  store i8 0, i8* %10, align 1, !insn.addr !408
  ret i64 %2, !insn.addr !409

; uselistorder directives
  uselistorder i64 %2, { 1, 0, 2 }
  uselistorder i8 0, { 1, 0 }
}

define i64 @_ZNK11SimpleClass8getValueEv() local_unnamed_addr {
dec_label_pc_2e00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !410
  ret i64 %2, !insn.addr !411
}

define i64 @_ZN11SimpleClass8setValueEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_2e18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !412
  %4 = inttoptr i64 %2 to i32*, !insn.addr !413
  store i32 %3, i32* %4, align 4, !insn.addr !413
  ret i64 %2, !insn.addr !414

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
  %4 = mul i32 %3, %arg2, !insn.addr !415
  %5 = add i64 %2, 4, !insn.addr !416
  %6 = inttoptr i64 %5 to i8*, !insn.addr !417
  %7 = call i32 @strlen(i8* %6), !insn.addr !417
  %8 = add i32 %4, %7, !insn.addr !418
  %9 = zext i32 %8 to i64, !insn.addr !418
  ret i64 %9, !insn.addr !419
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_2e80:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !420
}

define i64 @_ZN14LifecycleClassC1Em(i64 %arg1) local_unnamed_addr {
dec_label_pc_2e88:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !421
  %stack_var_0.0.reg2mem = alloca i64, !insn.addr !421
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !422
  %4 = inttoptr i64 %3 to i64*, !insn.addr !422
  %5 = icmp ult i64 %1, 2305843009213693950, !insn.addr !423
  %6 = icmp ne i1 %5, true, !insn.addr !423
  %7 = icmp eq i64 %1, 2305843009213693950, !insn.addr !423
  %8 = icmp ne i1 %7, true, !insn.addr !424
  %9 = icmp eq i1 %6, %8, !insn.addr !424
  br i1 %9, label %dec_label_pc_2ed0, label %dec_label_pc_2eb4, !insn.addr !424

dec_label_pc_2eb4:                                ; preds = %dec_label_pc_2e88
  %10 = mul i64 %1, 4, !insn.addr !425
  %11 = call i64 @_Znam(i64 %10), !insn.addr !426
  %12 = inttoptr i64 %2 to i64*, !insn.addr !427
  store i64 %11, i64* %12, align 8, !insn.addr !427
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !428
  br label %dec_label_pc_2f18, !insn.addr !428

dec_label_pc_2ed0:                                ; preds = %dec_label_pc_2e88
  %13 = call i64 @__cxa_throw_bad_array_new_length(i64 %1, i64 2305843009213693950), !insn.addr !429
  store i64 %arg1, i64* %stack_var_0.0.reg2mem, !insn.addr !429
  br label %dec_label_pc_2ed4, !insn.addr !429

dec_label_pc_2ed4:                                ; preds = %dec_label_pc_2f18, %dec_label_pc_2ed0
  %stack_var_0.0.reload = load i64, i64* %stack_var_0.0.reg2mem
  %14 = trunc i64 %stack_var_0.0.reload to i32, !insn.addr !430
  %15 = mul i32 %14, 10, !insn.addr !431
  %16 = mul i64 %stack_var_0.0.reload, 4, !insn.addr !432
  %17 = add i64 %16, %2, !insn.addr !433
  %18 = inttoptr i64 %17 to i32*, !insn.addr !434
  store i32 %15, i32* %18, align 4, !insn.addr !434
  %19 = add i64 %stack_var_0.0.reload, 1, !insn.addr !435
  store i64 %19, i64* %storemerge.reg2mem, !insn.addr !436
  br label %dec_label_pc_2f18, !insn.addr !436

dec_label_pc_2f18:                                ; preds = %dec_label_pc_2ed4, %dec_label_pc_2eb4
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %20 = icmp ult i64 %storemerge.reload, %1, !insn.addr !437
  store i64 %storemerge.reload, i64* %stack_var_0.0.reg2mem, !insn.addr !438
  br i1 %20, label %dec_label_pc_2ed4, label %dec_label_pc_2f28, !insn.addr !438

dec_label_pc_2f28:                                ; preds = %dec_label_pc_2f18
  store i32 ptrtoint (i32* @global_var_17039 to i32), i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !439
  ret i64 ptrtoint (i32** @global_var_17038 to i64), !insn.addr !440

; uselistorder directives
  uselistorder i64 %storemerge.reload, { 1, 0 }
  uselistorder i64 %stack_var_0.0.reload, { 1, 2, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64 %1, { 3, 2, 4, 0, 1 }
  uselistorder i64* %stack_var_0.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN14LifecycleClassD1Ev() local_unnamed_addr {
dec_label_pc_2f50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = icmp eq i64 %2, 0, !insn.addr !441
  br i1 %3, label %dec_label_pc_2f78, label %dec_label_pc_2f6c, !insn.addr !442

dec_label_pc_2f6c:                                ; preds = %dec_label_pc_2f50
  %4 = inttoptr i64 %2 to i64*, !insn.addr !443
  %5 = and i64 %1, 4294967295
  %6 = inttoptr i64 %5 to i64*, !insn.addr !443
  call void @_ZdaPv(i64* %4, i64* %6), !insn.addr !443
  br label %dec_label_pc_2f78, !insn.addr !443

dec_label_pc_2f78:                                ; preds = %dec_label_pc_2f6c, %dec_label_pc_2f50
  %7 = load i32, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !444
  %8 = add i32 %7, -1, !insn.addr !445
  store i32 %8, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !446
  ret i64 ptrtoint (i32** @global_var_17038 to i64), !insn.addr !447

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 ptrtoint (i32** @global_var_17038 to i64), { 1, 0 }
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64 %arg1) local_unnamed_addr {
dec_label_pc_2fa0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !448
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 8, !insn.addr !449
  %4 = inttoptr i64 %3 to i64*, !insn.addr !449
  %5 = load i64, i64* %4, align 8, !insn.addr !449
  %6 = icmp ult i64 %1, %5, !insn.addr !450
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !451
  br i1 %6, label %dec_label_pc_2fc0, label %dec_label_pc_2fe0, !insn.addr !451

dec_label_pc_2fc0:                                ; preds = %dec_label_pc_2fa0
  %7 = mul i64 %1, 4, !insn.addr !452
  %8 = add i64 %2, %7, !insn.addr !453
  %9 = inttoptr i64 %8 to i32*, !insn.addr !454
  %10 = load i32, i32* %9, align 4, !insn.addr !454
  %11 = zext i32 %10 to i64, !insn.addr !454
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !455
  br label %dec_label_pc_2fe0, !insn.addr !455

dec_label_pc_2fe0:                                ; preds = %dec_label_pc_2fa0, %dec_label_pc_2fc0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !456

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder label %dec_label_pc_2fe0, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_2fe8:
  %0 = load i32, i32* bitcast (i32** @global_var_17038 to i32*), align 8, !insn.addr !457
  %1 = zext i32 %0 to i64, !insn.addr !457
  ret i64 %1, !insn.addr !458

; uselistorder directives
  uselistorder i32* bitcast (i32** @global_var_17038 to i32*), { 3, 0, 2, 1 }
}

define i64 @_ZN4Base12virtual_funcEi(i32 %arg1) {
dec_label_pc_2ff8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 1, !insn.addr !459
  %3 = and i64 %2, 4294967295, !insn.addr !459
  ret i64 %3, !insn.addr !460
}

define i64 @_ZNK4Base7getNameEv() {
dec_label_pc_3014:
  ret i64 ptrtoint ([5 x i8]* @global_var_45d8 to i64), !insn.addr !461
}

define i64 @_ZN4BaseD1Ev() {
dec_label_pc_302c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !462
  store i64 ptrtoint (%vtable_16b10_type* @global_var_16b10 to i64), i64* %2, align 8, !insn.addr !462
  ret i64 %1, !insn.addr !463

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN4BaseD0Ev() {
dec_label_pc_3050:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN4BaseD1Ev(), !insn.addr !464
  %3 = inttoptr i64 %1 to i64*, !insn.addr !465
  %4 = call i64 @_ZdlPvm(i64* %3, i64 8), !insn.addr !465
  ret i64 %4, !insn.addr !466
}

define i64 @_ZN4BaseC1Ev() local_unnamed_addr {
dec_label_pc_3078:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !467
  store i64 ptrtoint (%vtable_16b10_type* @global_var_16b10 to i64), i64* %2, align 8, !insn.addr !467
  ret i64 %1, !insn.addr !468

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16b10_type* @global_var_16b10 to i64), { 1, 0 }
}

define i64 @_ZN7DerivedC1Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_309c:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN4BaseC1Ev(), !insn.addr !469
  store i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), i64* %result, align 8, !insn.addr !470
  %2 = add i64 %0, 8, !insn.addr !471
  %3 = inttoptr i64 %2 to i32*, !insn.addr !471
  store i32 %arg2, i32* %3, align 4, !insn.addr !471
  ret i64 %0, !insn.addr !472

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7Derived12virtual_funcEi(i32 %arg1) {
dec_label_pc_30dc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !473
  %4 = add i64 %2, 8, !insn.addr !474
  %5 = inttoptr i64 %4 to i32*, !insn.addr !474
  %6 = load i32, i32* %5, align 4, !insn.addr !474
  %7 = mul i32 %6, %3, !insn.addr !475
  %8 = zext i32 %7 to i64, !insn.addr !475
  ret i64 %8, !insn.addr !476

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK7Derived7getNameEv() {
dec_label_pc_3100:
  ret i64 ptrtoint ([8 x i8]* @global_var_45e0 to i64), !insn.addr !477
}

define i64 @_ZN5BaseA5funcAEv() {
dec_label_pc_3118:
  ret i64 10, !insn.addr !478
}

define i64 @_ZN5BaseAD1Ev() {
dec_label_pc_312c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !479
  store i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), i64* %2, align 8, !insn.addr !479
  ret i64 %1, !insn.addr !480

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN5BaseAD0Ev() {
dec_label_pc_3150:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN5BaseAD1Ev(), !insn.addr !481
  %3 = inttoptr i64 %1 to i64*, !insn.addr !482
  %4 = call i64 @_ZdlPvm(i64* %3, i64 16), !insn.addr !482
  ret i64 %4, !insn.addr !483
}

define i64 @_ZN5BaseB5funcBEv() {
dec_label_pc_3178:
  ret i64 20, !insn.addr !484
}

define i64 @_ZN5BaseBD1Ev() {
dec_label_pc_318c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !485
  store i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), i64* %2, align 8, !insn.addr !485
  ret i64 %1, !insn.addr !486

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN5BaseBD0Ev() {
dec_label_pc_31b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN5BaseBD1Ev(), !insn.addr !487
  %3 = inttoptr i64 %1 to i64*, !insn.addr !488
  %4 = call i64 @_ZdlPvm(i64* %3, i64 16), !insn.addr !488
  ret i64 %4, !insn.addr !489
}

define i64 @_ZN12MultiDerived5funcAEv() {
dec_label_pc_31d8:
  ret i64 30, !insn.addr !490
}

define i64 @_ZN12MultiDerived5funcBEv() {
dec_label_pc_31ec:
  ret i64 40, !insn.addr !491
}

define i64 @_ZThn16_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_3200:
  %0 = call i64 @_ZN12MultiDerived5funcBEv(), !insn.addr !492
  ret i64 %0, !insn.addr !492
}

define i64 @_ZN5BaseAC1Ev() local_unnamed_addr {
dec_label_pc_3208:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !493
  store i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), i64* %2, align 8, !insn.addr !493
  ret i64 %1, !insn.addr !494

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16ab8_type* @global_var_16ab8 to i64), { 1, 0 }
}

define i64 @_ZN5BaseBC1Ev() local_unnamed_addr {
dec_label_pc_322c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !495
  store i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), i64* %2, align 8, !insn.addr !495
  ret i64 %1, !insn.addr !496

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16a90_type* @global_var_16a90 to i64), { 1, 0 }
}

define i64 @_ZN12MultiDerivedC1Ev() local_unnamed_addr {
dec_label_pc_3250:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN5BaseAC1Ev(), !insn.addr !497
  %3 = call i64 @_ZN5BaseBC1Ev(), !insn.addr !498
  %4 = inttoptr i64 %1 to i64*, !insn.addr !499
  store i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), i64* %4, align 8, !insn.addr !499
  %5 = add i64 %1, 16, !insn.addr !500
  %6 = inttoptr i64 %5 to i64*, !insn.addr !500
  store i64 ptrtoint (i64* @global_var_16a68 to i64), i64* %6, align 8, !insn.addr !500
  ret i64 %1, !insn.addr !501

; uselistorder directives
  uselistorder i64 %1, { 1, 0, 2 }
}

define i64 @_ZN11VirtualBase4funcEv() {
dec_label_pc_329c:
  ret i64 100, !insn.addr !502
}

define i64 @_ZN11VirtualBaseD1Ev() {
dec_label_pc_32b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !503
  store i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), i64* %2, align 8, !insn.addr !503
  ret i64 %1, !insn.addr !504

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN11VirtualBaseD0Ev() {
dec_label_pc_32d4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN11VirtualBaseD1Ev(), !insn.addr !505
  %3 = inttoptr i64 %1 to i64*, !insn.addr !506
  %4 = call i64 @_ZdlPvm(i64* %3, i64 16), !insn.addr !506
  ret i64 %4, !insn.addr !507
}

define i64 @_ZN7MiddleA4funcEv() {
dec_label_pc_32fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !508
  %3 = inttoptr i64 %2 to i64*, !insn.addr !509
  %4 = load i64, i64* %3, align 8, !insn.addr !509
  %5 = add i64 %1, 8, !insn.addr !510
  %6 = add i64 %5, %4, !insn.addr !511
  %7 = inttoptr i64 %6 to i32*, !insn.addr !511
  %8 = load i32, i32* %7, align 4, !insn.addr !511
  %9 = add i32 %8, 150, !insn.addr !512
  %10 = zext i32 %9 to i64, !insn.addr !512
  ret i64 %10, !insn.addr !513
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv() local_unnamed_addr {
dec_label_pc_3330:
  %0 = call i64 @_ZN7MiddleA4funcEv(), !insn.addr !514
  ret i64 %0, !insn.addr !514

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleA4funcEv, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv() {
dec_label_pc_3340:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !515
  %3 = inttoptr i64 %2 to i64*, !insn.addr !516
  %4 = load i64, i64* %3, align 8, !insn.addr !516
  %5 = add i64 %1, 8, !insn.addr !517
  %6 = add i64 %5, %4, !insn.addr !518
  %7 = inttoptr i64 %6 to i32*, !insn.addr !518
  %8 = load i32, i32* %7, align 4, !insn.addr !518
  %9 = add i32 %8, 200, !insn.addr !519
  %10 = zext i32 %9 to i64, !insn.addr !519
  ret i64 %10, !insn.addr !520

; uselistorder directives
  uselistorder i32 200, { 1, 0 }
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv() local_unnamed_addr {
dec_label_pc_3374:
  %0 = call i64 @_ZN7MiddleB4funcEv(), !insn.addr !521
  ret i64 %0, !insn.addr !521

; uselistorder directives
  uselistorder i64 ()* @_ZN7MiddleB4funcEv, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv() {
dec_label_pc_3384:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, -24, !insn.addr !522
  %3 = inttoptr i64 %2 to i64*, !insn.addr !523
  %4 = load i64, i64* %3, align 8, !insn.addr !523
  %5 = add i64 %1, 8, !insn.addr !524
  %6 = add i64 %5, %4, !insn.addr !525
  %7 = inttoptr i64 %6 to i32*, !insn.addr !525
  %8 = load i32, i32* %7, align 4, !insn.addr !525
  %9 = add i32 %8, 250, !insn.addr !526
  %10 = zext i32 %9 to i64, !insn.addr !526
  ret i64 %10, !insn.addr !527
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_33b8:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !528
  ret i64 %0, !insn.addr !528
}

define i64 @_ZThn16_N14DiamondDerived4funcEv() local_unnamed_addr {
dec_label_pc_33c8:
  %0 = call i64 @_ZN14DiamondDerived4funcEv(), !insn.addr !529
  ret i64 %0, !insn.addr !529
}

define i64 @_ZN11VirtualBaseC1Ev() local_unnamed_addr {
dec_label_pc_33d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !530
  store i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), i64* %2, align 8, !insn.addr !530
  ret i64 %1, !insn.addr !531

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16a10_type* @global_var_16a10 to i64), { 1, 0 }
}

define i64 @_ZN7MiddleAC2Ev() local_unnamed_addr {
dec_label_pc_33f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !532
  %4 = add i64 %2, -24, !insn.addr !533
  %5 = inttoptr i64 %4 to i64*, !insn.addr !534
  %6 = load i64, i64* %5, align 8, !insn.addr !534
  %7 = add i64 %6, %2, !insn.addr !535
  %8 = add i64 %1, 8, !insn.addr !536
  %9 = inttoptr i64 %8 to i64*, !insn.addr !536
  %10 = load i64, i64* %9, align 8, !insn.addr !536
  %11 = inttoptr i64 %7 to i64*, !insn.addr !537
  store i64 %10, i64* %11, align 8, !insn.addr !537
  ret i64 %7, !insn.addr !538

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev() local_unnamed_addr {
dec_label_pc_3444:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !539
  %4 = add i64 %2, -24, !insn.addr !540
  %5 = inttoptr i64 %4 to i64*, !insn.addr !541
  %6 = load i64, i64* %5, align 8, !insn.addr !541
  %7 = add i64 %6, %2, !insn.addr !542
  %8 = add i64 %1, 8, !insn.addr !543
  %9 = inttoptr i64 %8 to i64*, !insn.addr !543
  %10 = load i64, i64* %9, align 8, !insn.addr !543
  %11 = inttoptr i64 %7 to i64*, !insn.addr !544
  store i64 %10, i64* %11, align 8, !insn.addr !544
  ret i64 %7, !insn.addr !545

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev() local_unnamed_addr {
dec_label_pc_3494:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !546
  %4 = add i64 %2, -24, !insn.addr !547
  %5 = inttoptr i64 %4 to i64*, !insn.addr !548
  %6 = load i64, i64* %5, align 8, !insn.addr !548
  %7 = add i64 %6, %2, !insn.addr !549
  %8 = add i64 %1, 8, !insn.addr !550
  %9 = inttoptr i64 %8 to i64*, !insn.addr !550
  %10 = load i64, i64* %9, align 8, !insn.addr !550
  %11 = inttoptr i64 %7 to i64*, !insn.addr !551
  store i64 %10, i64* %11, align 8, !insn.addr !551
  ret i64 %7, !insn.addr !552

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN7MiddleBD2Ev() local_unnamed_addr {
dec_label_pc_34e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !553
  %4 = add i64 %2, -24, !insn.addr !554
  %5 = inttoptr i64 %4 to i64*, !insn.addr !555
  %6 = load i64, i64* %5, align 8, !insn.addr !555
  %7 = add i64 %6, %2, !insn.addr !556
  %8 = add i64 %1, 8, !insn.addr !557
  %9 = inttoptr i64 %8 to i64*, !insn.addr !557
  %10 = load i64, i64* %9, align 8, !insn.addr !557
  %11 = inttoptr i64 %7 to i64*, !insn.addr !558
  store i64 %10, i64* %11, align 8, !insn.addr !558
  ret i64 %7, !insn.addr !559

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedC1Ev() local_unnamed_addr {
dec_label_pc_3534:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN11VirtualBaseC1Ev(), !insn.addr !560
  %3 = call i64 @_ZN7MiddleAC2Ev(), !insn.addr !561
  %4 = call i64 @_ZN7MiddleBC2Ev(), !insn.addr !562
  %5 = inttoptr i64 %1 to i64*, !insn.addr !563
  store i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), i64* %5, align 8, !insn.addr !563
  %6 = add i64 %1, 32, !insn.addr !564
  %7 = inttoptr i64 %6 to i64*, !insn.addr !565
  store i64 ptrtoint (i64* @global_var_168e0 to i64), i64* %7, align 8, !insn.addr !565
  %8 = add i64 %1, 16, !insn.addr !566
  %9 = inttoptr i64 %8 to i64*, !insn.addr !566
  store i64 ptrtoint (i64* @global_var_168a8 to i64), i64* %9, align 8, !insn.addr !566
  ret i64 %1, !insn.addr !567

; uselistorder directives
  uselistorder i64 %1, { 1, 0, 2, 3 }
}

define i64 @_ZN5PointC1Eii(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_35c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = trunc i64 %2 to i32, !insn.addr !568
  %5 = trunc i64 %1 to i32, !insn.addr !569
  %6 = inttoptr i64 %3 to i32*, !insn.addr !570
  store i32 %4, i32* %6, align 4, !insn.addr !570
  %7 = add i64 %3, 4, !insn.addr !571
  %8 = inttoptr i64 %7 to i32*, !insn.addr !571
  store i32 %5, i32* %8, align 4, !insn.addr !571
  ret i64 %3, !insn.addr !572

; uselistorder directives
  uselistorder i64 %3, { 1, 0, 2 }
  uselistorder i64* %0, { 2, 1, 0 }
}

define i64 @_ZNK5PointplERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_35f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !573
  %3 = inttoptr i64 %2 to i64*, !insn.addr !574
  %4 = load i64, i64* %3, align 8, !insn.addr !574
  %5 = call i64 @_ZN5PointC1Eii(i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)), !insn.addr !575
  %6 = load i64, i64* @global_var_16fc8, align 8, !insn.addr !576
  %7 = inttoptr i64 %6 to i64*, !insn.addr !577
  %8 = load i64, i64* %7, align 8, !insn.addr !577
  %9 = icmp eq i64 %4, %8, !insn.addr !578
  br i1 %9, label %dec_label_pc_3678, label %dec_label_pc_3674, !insn.addr !579

dec_label_pc_3674:                                ; preds = %dec_label_pc_35f4
  call void @__stack_chk_fail(), !insn.addr !580
  br label %dec_label_pc_3678, !insn.addr !580

dec_label_pc_3678:                                ; preds = %dec_label_pc_3674, %dec_label_pc_35f4
  ret i64 %1, !insn.addr !581

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 4, 8, 7, 6, 5, 3, 10, 9, 2, 1, 0, 11 }
  uselistorder i64 (i32, i32)* @_ZN5PointC1Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3684:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !582
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %2 to i32
  %4 = trunc i64 %1 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !583
  br i1 %5, label %dec_label_pc_36a8, label %dec_label_pc_36c8, !insn.addr !583

dec_label_pc_36a8:                                ; preds = %dec_label_pc_3684
  %6 = add i64 %2, 4, !insn.addr !584
  %7 = inttoptr i64 %6 to i32*, !insn.addr !584
  %8 = load i32, i32* %7, align 4, !insn.addr !584
  %9 = add i64 %1, 4, !insn.addr !585
  %10 = inttoptr i64 %9 to i32*, !insn.addr !585
  %11 = load i32, i32* %10, align 4, !insn.addr !585
  %12 = icmp eq i32 %8, %11, !insn.addr !586
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !586
  br i1 %12, label %dec_label_pc_36cc, label %dec_label_pc_36c8, !insn.addr !586

dec_label_pc_36c8:                                ; preds = %dec_label_pc_36a8, %dec_label_pc_3684
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !587
  br label %dec_label_pc_36cc, !insn.addr !587

dec_label_pc_36cc:                                ; preds = %dec_label_pc_36a8, %dec_label_pc_36c8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !588

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
  %3 = add i32 %2, 1, !insn.addr !589
  %4 = inttoptr i64 %1 to i32*, !insn.addr !590
  store i32 %3, i32* %4, align 4, !insn.addr !590
  %5 = add i64 %1, 4, !insn.addr !591
  %6 = inttoptr i64 %5 to i32*, !insn.addr !591
  %7 = load i32, i32* %6, align 4, !insn.addr !591
  %8 = add i32 %7, 1, !insn.addr !592
  store i32 %8, i32* %6, align 4, !insn.addr !593
  ret i64 %1, !insn.addr !594
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3710:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = and i64 %2, 4294967295, !insn.addr !595
  %4 = and i64 %1, 4294967295, !insn.addr !596
  %5 = icmp ugt i64 %3, %4, !insn.addr !597
  %storemerge.in.v = select i1 %5, i64 %2, i64 %1
  %storemerge.in = trunc i64 %storemerge.in.v to i32
  ret i32 %storemerge.in, !insn.addr !598

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3740:
  %0 = alloca i128
  %1 = alloca double
  %2 = load double, double* %1
  %3 = load double, double* %1
  %4 = load i128, i128* %0
  call void @__asm_fcmpe(double %3, double %2), !insn.addr !599
  %5 = trunc i128 %4 to i64, !insn.addr !600
  %6 = bitcast i64 %5 to double, !insn.addr !600
  ret double %6, !insn.addr !600

; uselistorder directives
  uselistorder double* %1, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_3774:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %1 to i32*, !insn.addr !601
  %4 = trunc i64 %2 to i32
  %5 = trunc i64 %1 to i32
  %6 = inttoptr i64 %2 to i32*, !insn.addr !602
  store i32 %5, i32* %6, align 4, !insn.addr !602
  store i32 %4, i32* %3, align 4, !insn.addr !603
  ret void, !insn.addr !604

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev() local_unnamed_addr {
dec_label_pc_37b4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !605
  %3 = inttoptr i64 %2 to i32*, !insn.addr !605
  store i32 0, i32* %3, align 4, !insn.addr !605
  ret i64 %1, !insn.addr !606

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_37d0:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !607
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %2, 40, !insn.addr !608
  %4 = inttoptr i64 %3 to i32*, !insn.addr !608
  %5 = load i32, i32* %4, align 4, !insn.addr !608
  %6 = zext i32 %5 to i64, !insn.addr !608
  %7 = icmp sgt i32 %5, 9, !insn.addr !609
  store i64 %6, i64* %x0.0.reg2mem, !insn.addr !609
  br i1 %7, label %dec_label_pc_3810, label %dec_label_pc_37ec, !insn.addr !609

dec_label_pc_37ec:                                ; preds = %dec_label_pc_37d0
  %8 = trunc i64 %1 to i32, !insn.addr !610
  %9 = add i32 %5, 1, !insn.addr !611
  store i32 %9, i32* %4, align 4, !insn.addr !612
  %10 = sext i32 %5 to i64, !insn.addr !613
  %11 = mul i64 %10, 4, !insn.addr !614
  %12 = add i64 %11, %2, !insn.addr !614
  %13 = inttoptr i64 %12 to i32*, !insn.addr !614
  store i32 %8, i32* %13, align 4, !insn.addr !614
  store i64 %10, i64* %x0.0.reg2mem, !insn.addr !614
  br label %dec_label_pc_3810, !insn.addr !614

dec_label_pc_3810:                                ; preds = %dec_label_pc_37ec, %dec_label_pc_37d0
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !615

; uselistorder directives
  uselistorder i32 %5, { 1, 0, 2, 3 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNK9ContainerIiE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_381c:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !616
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !617
  %4 = icmp slt i32 %3, 0, !insn.addr !618
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !619
  br i1 %4, label %dec_label_pc_385c, label %dec_label_pc_3834, !insn.addr !619

dec_label_pc_3834:                                ; preds = %dec_label_pc_381c
  %5 = add i64 %2, 40, !insn.addr !620
  %6 = inttoptr i64 %5 to i32*, !insn.addr !620
  %7 = load i32, i32* %6, align 4, !insn.addr !620
  %8 = icmp ugt i32 %7, %3, !insn.addr !621
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !621
  br i1 %8, label %dec_label_pc_3848, label %dec_label_pc_385c, !insn.addr !621

dec_label_pc_3848:                                ; preds = %dec_label_pc_3834
  %sext = mul i64 %1, 4294967296
  %9 = ashr exact i64 %sext, 30, !insn.addr !622
  %10 = add i64 %9, %2, !insn.addr !622
  %11 = inttoptr i64 %10 to i32*, !insn.addr !622
  %12 = load i32, i32* %11, align 4, !insn.addr !622
  %13 = zext i32 %12 to i64, !insn.addr !622
  store i64 %13, i64* %storemerge.reg2mem, !insn.addr !623
  br label %dec_label_pc_385c, !insn.addr !623

dec_label_pc_385c:                                ; preds = %dec_label_pc_381c, %dec_label_pc_3834, %dec_label_pc_3848
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !624

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 30, { 1, 0, 2 }
  uselistorder label %dec_label_pc_385c, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv() local_unnamed_addr {
dec_label_pc_3864:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 40, !insn.addr !625
  %3 = inttoptr i64 %2 to i32*, !insn.addr !625
  %4 = load i32, i32* %3, align 4, !insn.addr !625
  %5 = zext i32 %4 to i64, !insn.addr !625
  ret i64 %5, !insn.addr !626

; uselistorder directives
  uselistorder i64 40, { 1, 2, 3, 4, 0 }
}

define i64 @_ZN9ContainerIdEC1Ev() local_unnamed_addr {
dec_label_pc_387c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !627
  %3 = inttoptr i64 %2 to i32*, !insn.addr !627
  store i32 0, i32* %3, align 4, !insn.addr !627
  ret i64 %1, !insn.addr !628

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3898:
  %0 = alloca i64
  %1 = alloca double
  %x0.0.reg2mem = alloca i64, !insn.addr !629
  %2 = load i64, i64* %0
  %3 = load double, double* %1
  %4 = add i64 %2, 80, !insn.addr !630
  %5 = inttoptr i64 %4 to i32*, !insn.addr !630
  %6 = load i32, i32* %5, align 4, !insn.addr !630
  %7 = zext i32 %6 to i64, !insn.addr !630
  %8 = icmp sgt i32 %6, 9, !insn.addr !631
  store i64 %7, i64* %x0.0.reg2mem, !insn.addr !631
  br i1 %8, label %dec_label_pc_38d8, label %dec_label_pc_38b4, !insn.addr !631

dec_label_pc_38b4:                                ; preds = %dec_label_pc_3898
  %9 = bitcast double %3 to i64
  %10 = add i32 %6, 1, !insn.addr !632
  store i32 %10, i32* %5, align 4, !insn.addr !633
  %11 = sext i32 %6 to i64, !insn.addr !634
  %12 = mul i64 %11, 8, !insn.addr !635
  %13 = add i64 %12, %2, !insn.addr !635
  %14 = inttoptr i64 %13 to i64*
  store i64 %9, i64* %14, align 8
  store i64 %11, i64* %x0.0.reg2mem, !insn.addr !635
  br label %dec_label_pc_38d8, !insn.addr !635

dec_label_pc_38d8:                                ; preds = %dec_label_pc_38b4, %dec_label_pc_3898
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !636

; uselistorder directives
  uselistorder i32 %6, { 1, 0, 2, 3 }
  uselistorder i64 %2, { 1, 0 }
}

define i64 @_ZNK9ContainerIdE3getEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_38e4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32, !insn.addr !637
  %4 = icmp slt i32 %3, 0, !insn.addr !638
  br i1 %4, label %dec_label_pc_3924, label %dec_label_pc_38fc, !insn.addr !639

dec_label_pc_38fc:                                ; preds = %dec_label_pc_38e4
  %5 = add i64 %2, 80, !insn.addr !640
  %6 = inttoptr i64 %5 to i32*, !insn.addr !640
  %7 = load i32, i32* %6, align 4, !insn.addr !640
  %8 = zext i32 %7 to i64, !insn.addr !640
  %9 = icmp ugt i32 %7, %3, !insn.addr !641
  %spec.select = select i1 %9, i64 %2, i64 %8
  ret i64 %spec.select

dec_label_pc_3924:                                ; preds = %dec_label_pc_38e4
  %10 = and i64 %1, 4294967295, !insn.addr !642
  ret i64 %10, !insn.addr !643

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 0, { 3, 4, 5, 6, 2, 0, 1 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv() local_unnamed_addr {
dec_label_pc_392c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 80, !insn.addr !644
  %3 = inttoptr i64 %2 to i32*, !insn.addr !644
  %4 = load i32, i32* %3, align 4, !insn.addr !644
  %5 = zext i32 %4 to i64, !insn.addr !644
  ret i64 %5, !insn.addr !645
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3944:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !646
  ret i64 %0, !insn.addr !647
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_396c:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC1EOS2_(i64* %result, i64* %arg2), !insn.addr !648
  ret i64 %0, !insn.addr !649
}

define i64 @_ZNK8RTTIBase7getTypeEv() {
dec_label_pc_3994:
  ret i64 0, !insn.addr !650
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv() {
dec_label_pc_39a8:
  ret i64 1, !insn.addr !651

; uselistorder directives
  uselistorder i64 1, { 4, 0, 5, 6, 2, 1, 3 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv() local_unnamed_addr {
dec_label_pc_39bc:
  ret i64 100, !insn.addr !652
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv() {
dec_label_pc_39d0:
  ret i64 2, !insn.addr !653
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv() local_unnamed_addr {
dec_label_pc_39e4:
  ret i64 200, !insn.addr !654
}

define i64 @_ZN8RTTIBaseC1Ev() local_unnamed_addr {
dec_label_pc_39f8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !655
  store i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), i64* %2, align 8, !insn.addr !655
  ret i64 %1, !insn.addr !656

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
}

define i64 @_ZN8RTTIBaseD1Ev() {
dec_label_pc_3a1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !657
  store i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), i64* %2, align 8, !insn.addr !657
  ret i64 %1, !insn.addr !658

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16848_type* @global_var_16848 to i64), { 1, 0 }
}

define i64 @_ZN8RTTIBaseD0Ev() {
dec_label_pc_3a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN8RTTIBaseD1Ev(), !insn.addr !659
  %3 = inttoptr i64 %1 to i64*, !insn.addr !660
  %4 = call i64 @_ZdlPvm(i64* %3, i64 8), !insn.addr !660
  ret i64 %4, !insn.addr !661
}

define i64 @_ZN12RTTIDerivedAC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3a68:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC1Ev(), !insn.addr !662
  store i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), i64* %result, align 8, !insn.addr !663
  ret i64 %0, !insn.addr !664
}

define i64 @_ZN12RTTIDerivedBC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3a98:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC1Ev(), !insn.addr !665
  store i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), i64* %result, align 8, !insn.addr !666
  ret i64 %0, !insn.addr !667

; uselistorder directives
  uselistorder i64 ()* @_ZN8RTTIBaseC1Ev, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI1St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3ac8:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EPi(i32* nonnull @0), !insn.addr !668
  ret i64 %0, !insn.addr !669
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1IS1_vEEPi(i64* %this, i64* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3af0:
  %0 = bitcast i64* %result to i32*, !insn.addr !670
  %1 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI1St15__uniq_ptr_implIiS1_EEPi(i64* %this, i32* %0), !insn.addr !670
  ret i64 %1, !insn.addr !671
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev() local_unnamed_addr {
dec_label_pc_3b18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !672
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %2), !insn.addr !672
  %4 = inttoptr i64 %3 to i64*, !insn.addr !673
  %5 = load i64, i64* %4, align 8, !insn.addr !673
  %6 = icmp eq i64 %5, 0, !insn.addr !674
  br i1 %6, label %dec_label_pc_3b68, label %dec_label_pc_3b44, !insn.addr !675

dec_label_pc_3b44:                                ; preds = %dec_label_pc_3b18
  %7 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %2), !insn.addr !676
  %8 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** bitcast (i32* @0 to i32***)), !insn.addr !677
  %9 = call i64 @_ZNKSt14default_deleteIiEclEPi(i32* nonnull @0), !insn.addr !678
  br label %dec_label_pc_3b68, !insn.addr !678

dec_label_pc_3b68:                                ; preds = %dec_label_pc_3b44, %dec_label_pc_3b18
  store i64 0, i64* %4, align 8, !insn.addr !679
  ret i64 %3, !insn.addr !680

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3b80:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !681
  ret i64 %0, !insn.addr !682
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3ba4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !683
  ret i64* %2, !insn.addr !683
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3bb8:
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1EOS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !684
  store i64 %0, i64* %result, align 8, !insn.addr !685
  ret i64 %1, !insn.addr !686
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3bf0:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2), !insn.addr !687
  ret i64 %0, !insn.addr !688
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3c18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** bitcast (i32* @0 to i64**)), !insn.addr !689
  %4 = inttoptr i64 %2 to i64*, !insn.addr !690
  %5 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_(i64* %4, i64* %3), !insn.addr !690
  %6 = inttoptr i64 %1 to i64*, !insn.addr !691
  %7 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %6), !insn.addr !691
  %8 = inttoptr i64 %7 to i64*, !insn.addr !692
  store i64 0, i64* %8, align 8, !insn.addr !692
  ret i64 %7, !insn.addr !693

; uselistorder directives
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c60:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC1EPi(i32* nonnull @0), !insn.addr !694
  ret i64 %0, !insn.addr !695
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC1IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_3c88:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !696
  ret i64 %0, !insn.addr !697
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev() local_unnamed_addr {
dec_label_pc_3cb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !698
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %2), !insn.addr !698
  %4 = inttoptr i64 %3 to i64*, !insn.addr !699
  %5 = load i64, i64* %4, align 8, !insn.addr !699
  %6 = icmp eq i64 %5, 0, !insn.addr !700
  br i1 %6, label %dec_label_pc_3cf8, label %dec_label_pc_3cd8, !insn.addr !701

dec_label_pc_3cd8:                                ; preds = %dec_label_pc_3cb0
  %7 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %2), !insn.addr !702
  %8 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(), !insn.addr !703
  br label %dec_label_pc_3cf8, !insn.addr !703

dec_label_pc_3cf8:                                ; preds = %dec_label_pc_3cd8, %dec_label_pc_3cb0
  store i64 0, i64* %4, align 8, !insn.addr !704
  ret i64 %3, !insn.addr !705
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3d0c:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !706
  %1 = mul i64 %arg2, 4, !insn.addr !707
  %2 = add i64 %0, %1, !insn.addr !708
  ret i64 %2, !insn.addr !709
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EPi(i32* %arg1) local_unnamed_addr {
dec_label_pc_3d44:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !710
  %3 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv(i64* %2), !insn.addr !710
  %4 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %2), !insn.addr !711
  %5 = inttoptr i64 %4 to i64*, !insn.addr !712
  ret i64 %4, !insn.addr !713

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !714
  %1 = ptrtoint i64* %0 to i64, !insn.addr !714
  ret i64 %1, !insn.addr !715
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d9c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !716
  ret i64 %0, !insn.addr !717
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_3db8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !718
  ret i64* %2, !insn.addr !718
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i32* %arg1) local_unnamed_addr {
dec_label_pc_3dcc:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !719
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !720
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !721
  br i1 %2, label %dec_label_pc_3df0, label %dec_label_pc_3de8, !insn.addr !721

dec_label_pc_3de8:                                ; preds = %dec_label_pc_3dcc
  %3 = inttoptr i64 %1 to i64*, !insn.addr !722
  %4 = call i64 @_ZdlPvm(i64* %3, i64 4), !insn.addr !722
  store i64 %4, i64* %x0.0.reg2mem, !insn.addr !722
  br label %dec_label_pc_3df0, !insn.addr !722

dec_label_pc_3df0:                                ; preds = %dec_label_pc_3de8, %dec_label_pc_3dcc
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !723

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 4, { 5, 0, 1, 11, 12, 13, 14, 2, 3, 4, 15, 16, 6, 10, 7, 8, 9 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3dfc:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !724
  ret i64 %0, !insn.addr !725
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_3e18:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !726
  ret i64* %2, !insn.addr !726
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1EOS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3e2c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !727
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC1EPi(i32* %arg1) local_unnamed_addr {
dec_label_pc_3e44:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !728
  %3 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC1ILb1ELb1EEEv(i64* %2), !insn.addr !728
  %4 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %2), !insn.addr !729
  %5 = inttoptr i64 %4 to i64*, !insn.addr !730
  ret i64 %4, !insn.addr !731

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e80:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !732
  %1 = ptrtoint i64* %0 to i64, !insn.addr !732
  ret i64 %1, !insn.addr !733
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3e9c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !734
  ret i64 %0, !insn.addr !735
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_() local_unnamed_addr {
dec_label_pc_3eb8:
  %0 = alloca i64
  %x0.0.reg2mem = alloca i64, !insn.addr !736
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %1, 0, !insn.addr !737
  store i64 0, i64* %x0.0.reg2mem, !insn.addr !738
  br i1 %2, label %dec_label_pc_3edc, label %dec_label_pc_3ed4, !insn.addr !738

dec_label_pc_3ed4:                                ; preds = %dec_label_pc_3eb8
  %3 = inttoptr i64 %1 to i64*, !insn.addr !739
  %4 = and i64 %1, 4294967295
  %5 = inttoptr i64 %4 to i64*, !insn.addr !739
  call void @_ZdaPv(i64* %3, i64* %5), !insn.addr !739
  store i64 ptrtoint (i32* @0 to i64), i64* %x0.0.reg2mem, !insn.addr !739
  br label %dec_label_pc_3edc, !insn.addr !739

dec_label_pc_3edc:                                ; preds = %dec_label_pc_3ed4, %dec_label_pc_3eb8
  %x0.0.reload = load i64, i64* %x0.0.reg2mem
  ret i64 %x0.0.reload, !insn.addr !740

; uselistorder directives
  uselistorder i64 %1, { 1, 2, 0 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 3, 4, 5, 6, 0, 7, 1, 8, 9, 10, 11, 12, 13, 14, 15 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ee8:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !741
  ret i64 %0, !insn.addr !742
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f04:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev(), !insn.addr !743
  ret i64 %0, !insn.addr !744
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3f24:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !745
  %1 = bitcast i32** %0 to i64*, !insn.addr !746
  ret i64* %1, !insn.addr !746
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f40:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !747
  %1 = ptrtoint i64* %0 to i64, !insn.addr !747
  ret i64 %1, !insn.addr !748
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f5c:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !749
  %1 = load i64, i64* %0, align 8, !insn.addr !750
  ret i64 %1, !insn.addr !751
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC1ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f7c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC1Ev(), !insn.addr !752
  ret i64 %0, !insn.addr !753
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3f9c:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !754
  %1 = bitcast i32** %0 to i64*, !insn.addr !755
  ret i64* %1, !insn.addr !755
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_3fb8:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !756
  %1 = ptrtoint i64* %0 to i64, !insn.addr !756
  ret i64 %1, !insn.addr !757
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3fd4:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !758
  %1 = load i64, i64* %0, align 8, !insn.addr !759
  ret i64 %1, !insn.addr !760
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev() local_unnamed_addr {
dec_label_pc_3ff4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !761
  %3 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1Ev(i64* %2), !insn.addr !761
  %4 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev(), !insn.addr !762
  ret i64 %4, !insn.addr !763
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_401c:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !764
  %1 = inttoptr i64 %0 to i32**, !insn.addr !765
  ret i32** %1, !insn.addr !765
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4038:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !766
  ret i64* %0, !insn.addr !767
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4054:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !768
  %1 = bitcast i32** %0 to i64*, !insn.addr !769
  ret i64* %1, !insn.addr !769
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC1Ev() local_unnamed_addr {
dec_label_pc_4070:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !770
  %3 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC1Ev(i64* %2), !insn.addr !770
  %4 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev(), !insn.addr !771
  ret i64 %4, !insn.addr !772

; uselistorder directives
  uselistorder i64 ()* @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev, { 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4098:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !773
  %1 = inttoptr i64 %0 to i32**, !insn.addr !774
  ret i32** %1, !insn.addr !774
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_40b4:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !775
  ret i64* %0, !insn.addr !776
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_40d0:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !777
  %1 = bitcast i32** %0 to i64*, !insn.addr !778
  ret i64* %1, !insn.addr !778
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_40ec:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32***, !insn.addr !779
  ret i32*** %2, !insn.addr !779
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4100:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC1Ev(), !insn.addr !780
  ret i64 %0, !insn.addr !781
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev() local_unnamed_addr {
dec_label_pc_4120:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !782
  store i64 0, i64* %2, align 8, !insn.addr !782
  ret i64 %1, !insn.addr !783

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 0, { 62, 0, 63, 1, 64, 65, 66, 67, 68, 69, 8, 3, 2, 4, 73, 5, 6, 70, 71, 9, 12, 15, 45, 16, 46, 13, 58, 14, 59, 60, 61, 7, 72, 10, 47, 43, 44, 74, 11, 75, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 }
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_413c:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !784
  ret i64 %0, !insn.addr !785
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4158:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !786
  %1 = inttoptr i64 %0 to i64*, !insn.addr !787
  ret i64* %1, !insn.addr !787
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4174:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !788
  %1 = inttoptr i64 %0 to i32**, !insn.addr !789
  ret i32** %1, !insn.addr !789
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4190:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev(), !insn.addr !790
  ret i64 %0, !insn.addr !791
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_41b0:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !792
  ret i64 %0, !insn.addr !793

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_41cc:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !794
  %1 = inttoptr i64 %0 to i64*, !insn.addr !795
  ret i64* %1, !insn.addr !795
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_41e8:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !796
  %1 = inttoptr i64 %0 to i32**, !insn.addr !797
  ret i32** %1, !insn.addr !797
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_4204:
  %0 = ptrtoint i64* %result to i64
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* bitcast (i32* @0 to i64*)), !insn.addr !798
  %2 = load i32**, i32*** %1, align 8, !insn.addr !799
  %3 = ptrtoint i32** %2 to i64, !insn.addr !799
  store i64 %3, i64* %result, align 8, !insn.addr !800
  ret i64 %0, !insn.addr !801

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC1Ev() local_unnamed_addr {
dec_label_pc_4234:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !802
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4248:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !803
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_425c:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* bitcast (i32* @0 to i64*)), !insn.addr !804
  ret i64 %0, !insn.addr !805
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4278:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !806
  ret i64 %0, !insn.addr !807
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev() local_unnamed_addr {
dec_label_pc_4294:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !808
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42a8:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* bitcast (i32* @0 to i64*)), !insn.addr !809
  ret i64 %0, !insn.addr !810
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42c4:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* bitcast (i32* @0 to i64*)), !insn.addr !811
  ret i64 %0, !insn.addr !812

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
  uselistorder i32* @0, { 6, 5, 7, 11, 0, 10, 1, 8, 9, 2, 3, 4 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !813
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_42f4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !814
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4308:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !815
}

define i64 @_ZN12RTTIDerivedBD1Ev(i64* %result) {
dec_label_pc_431c:
  store i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), i64* %result, align 8, !insn.addr !816
  %0 = call i64 @_ZN8RTTIBaseD1Ev(), !insn.addr !817
  ret i64 %0, !insn.addr !818

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_167f8_type* @global_var_167f8 to i64), { 1, 0 }
}

define i64 @_ZN12RTTIDerivedBD0Ev() {
dec_label_pc_434c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !819
  %3 = call i64 @_ZN12RTTIDerivedBD1Ev(i64* %2), !insn.addr !819
  %4 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !820
  ret i64 %4, !insn.addr !821

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedBD1Ev, { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAD1Ev(i64* %result) {
dec_label_pc_4374:
  store i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), i64* %result, align 8, !insn.addr !822
  %0 = call i64 @_ZN8RTTIBaseD1Ev(), !insn.addr !823
  ret i64 %0, !insn.addr !824

; uselistorder directives
  uselistorder i64 ()* @_ZN8RTTIBaseD1Ev, { 3, 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16820_type* @global_var_16820 to i64), { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAD0Ev() {
dec_label_pc_43a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !825
  %3 = call i64 @_ZN12RTTIDerivedAD1Ev(i64* %2), !insn.addr !825
  %4 = call i64 @_ZdlPvm(i64* %2, i64 8), !insn.addr !826
  ret i64 %4, !insn.addr !827

; uselistorder directives
  uselistorder i64 8, { 6, 7, 8, 0, 12, 18, 13, 19, 1, 2, 3, 20, 21, 9, 22, 23, 14, 15, 16, 10, 11, 5, 17, 4 }
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedAD1Ev, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD1Ev() {
dec_label_pc_43cc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !828
  store i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), i64* %2, align 8, !insn.addr !828
  %3 = add i64 %1, 32, !insn.addr !829
  %4 = inttoptr i64 %3 to i64*, !insn.addr !830
  store i64 ptrtoint (i64* @global_var_168e0 to i64), i64* %4, align 8, !insn.addr !830
  %5 = add i64 %1, 16, !insn.addr !831
  %6 = inttoptr i64 %5 to i64*, !insn.addr !831
  store i64 ptrtoint (i64* @global_var_168a8 to i64), i64* %6, align 8, !insn.addr !831
  %7 = call i64 @_ZN7MiddleBD2Ev(), !insn.addr !832
  %8 = call i64 @_ZN7MiddleAD2Ev(), !insn.addr !833
  %9 = call i64 @_ZN11VirtualBaseD1Ev(), !insn.addr !834
  ret i64 %9, !insn.addr !835

; uselistorder directives
  uselistorder i64 ()* @_ZN11VirtualBaseD1Ev, { 2, 1, 0 }
  uselistorder i64 ()* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16878_type* @global_var_16878 to i64), { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4458:
  %0 = call i64 @_ZN14DiamondDerivedD1Ev(), !insn.addr !836
  ret i64 %0, !insn.addr !836
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_4460:
  %0 = call i64 @_ZN14DiamondDerivedD1Ev(), !insn.addr !837
  ret i64 %0, !insn.addr !837
}

define i64 @_ZN14DiamondDerivedD0Ev() {
dec_label_pc_4470:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN14DiamondDerivedD1Ev(), !insn.addr !838
  %3 = inttoptr i64 %1 to i64*, !insn.addr !839
  %4 = call i64 @_ZdlPvm(i64* %3, i64 48), !insn.addr !839
  ret i64 %4, !insn.addr !840

; uselistorder directives
  uselistorder i64 ()* @_ZN14DiamondDerivedD1Ev, { 3, 2, 1, 4, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_4498:
  %0 = call i64 @_ZN14DiamondDerivedD0Ev(), !insn.addr !841
  ret i64 %0, !insn.addr !841
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev() local_unnamed_addr {
dec_label_pc_44a0:
  %0 = call i64 @_ZN14DiamondDerivedD0Ev(), !insn.addr !842
  ret i64 %0, !insn.addr !842

; uselistorder directives
  uselistorder i64 ()* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
}

define i64 @_ZN12MultiDerivedD1Ev() {
dec_label_pc_44b0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !843
  store i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), i64* %2, align 8, !insn.addr !843
  %3 = add i64 %1, 16, !insn.addr !844
  %4 = inttoptr i64 %3 to i64*, !insn.addr !844
  store i64 ptrtoint (i64* @global_var_16a68 to i64), i64* %4, align 8, !insn.addr !844
  %5 = call i64 @_ZN5BaseBD1Ev(), !insn.addr !845
  %6 = call i64 @_ZN5BaseAD1Ev(), !insn.addr !846
  ret i64 %6, !insn.addr !847

; uselistorder directives
  uselistorder i64 ()* @_ZN5BaseAD1Ev, { 2, 1, 0 }
  uselistorder i64 ()* @_ZN5BaseBD1Ev, { 2, 1, 0 }
  uselistorder i64 ()* @_ZN12MultiDerived5funcBEv, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16a38_type* @global_var_16a38 to i64), { 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_44fc:
  %0 = call i64 @_ZN12MultiDerivedD1Ev(), !insn.addr !848
  ret i64 %0, !insn.addr !848
}

define i64 @_ZN12MultiDerivedD0Ev() {
dec_label_pc_4504:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @_ZN12MultiDerivedD1Ev(), !insn.addr !849
  %3 = inttoptr i64 %1 to i64*, !insn.addr !850
  %4 = call i64 @_ZdlPvm(i64* %3, i64 32), !insn.addr !850
  ret i64 %4, !insn.addr !851

; uselistorder directives
  uselistorder i64 ()* @_ZN12MultiDerivedD1Ev, { 2, 1, 3, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD0Ev() local_unnamed_addr {
dec_label_pc_452c:
  %0 = call i64 @_ZN12MultiDerivedD0Ev(), !insn.addr !852
  ret i64 %0, !insn.addr !852

; uselistorder directives
  uselistorder i64 ()* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define i64 @_ZN7DerivedD1Ev(i64* %this, i64* %result) {
dec_label_pc_4534:
  store i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), i64* %this, align 8, !insn.addr !853
  %0 = call i64 @_ZN4BaseD1Ev(), !insn.addr !854
  ret i64 %0, !insn.addr !855

; uselistorder directives
  uselistorder i64 ()* @_ZN4BaseD1Ev, { 2, 3, 1, 0 }
  uselistorder i64 (i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_16ae0_type* @global_var_16ae0 to i64), { 1, 0 }
}

define i64 @_ZN7DerivedD0Ev() {
dec_label_pc_4564:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = inttoptr i64 %2 to i64*, !insn.addr !856
  %4 = inttoptr i64 %1 to i64*, !insn.addr !856
  %5 = call i64 @_ZN7DerivedD1Ev(i64* %3, i64* %4), !insn.addr !856
  %6 = call i64 @_ZdlPvm(i64* %3, i64 16), !insn.addr !857
  ret i64 %6, !insn.addr !858

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 11, 10, 9, 8, 7, 1, 6, 5, 4, 3, 2, 0, 12 }
  uselistorder i64 16, { 1, 5, 6, 7, 2, 8, 3, 4, 0 }
  uselistorder i64 (i64*, i64*)* @_ZN7DerivedD1Ev, { 2, 1, 0 }
}

define i64 @_fini(i64 %arg1) local_unnamed_addr {
dec_label_pc_458c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !859

; uselistorder directives
  uselistorder i32 1, { 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 98, 74, 73, 72, 71, 99, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 125, 100, 97, 58, 57, 56, 101, 55, 126, 102, 54, 53, 52, 96, 0, 51, 127, 128, 50, 103, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 104, 23, 22, 106, 105, 21, 20, 19, 18, 107, 17, 16, 114, 108, 15, 14, 13, 12, 11, 10, 9, 109, 112, 119, 118, 117, 116, 115, 110, 8, 113, 7, 95, 94, 6, 120, 93, 5, 121, 122, 4, 3, 2, 123, 111, 124, 1 }
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

declare i64 @__cxa_bad_typeid(i64) local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64*, i64*, i64) local_unnamed_addr

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
!61 = !{i64 7052}
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
!78 = !{i64 7232}
!79 = !{i64 7276}
!80 = !{i64 7316}
!81 = !{i64 7324}
!82 = !{i64 7344}
!83 = !{i64 7348}
!84 = !{i64 7380}
!85 = !{i64 7392}
!86 = !{i64 7408}
!87 = !{i64 7440}
!88 = !{i64 7456}
!89 = !{i64 7472}
!90 = !{i64 7480}
!91 = !{i64 7496}
!92 = !{i64 7504}
!93 = !{i64 7516}
!94 = !{i64 7524}
!95 = !{i64 7528}
!96 = !{i64 7536}
!97 = !{i64 7572}
!98 = !{i64 7488}
!99 = !{i64 7508}
!100 = !{i64 7588}
!101 = !{i64 7628}
!102 = !{i64 7652}
!103 = !{i64 7684}
!104 = !{i64 7708}
!105 = !{i64 7764}
!106 = !{i64 7776}
!107 = !{i64 7784}
!108 = !{i64 7788}
!109 = !{i64 7796}
!110 = !{i64 7824}
!111 = !{i64 7712}
!112 = !{i64 7724}
!113 = !{i64 7728}
!114 = !{i64 7748}
!115 = !{i64 7756}
!116 = !{i64 7768}
!117 = !{i64 7840}
!118 = !{i64 7880}
!119 = !{i64 7900}
!120 = !{i64 7920}
!121 = !{i64 7952}
!122 = !{i64 7976}
!123 = !{i64 7988}
!124 = !{i64 7996}
!125 = !{i64 8000}
!126 = !{i64 8008}
!127 = !{i64 8036}
!128 = !{i64 7956}
!129 = !{i64 7968}
!130 = !{i64 7980}
!131 = !{i64 8052}
!132 = !{i64 8068}
!133 = !{i64 8072}
!134 = !{i64 8096}
!135 = !{i64 8112}
!136 = !{i64 8124}
!137 = !{i64 8140}
!138 = !{i64 8152}
!139 = !{i64 8204}
!140 = !{i64 8212}
!141 = !{i64 8216}
!142 = !{i64 8224}
!143 = !{i64 8228}
!144 = !{i64 8128}
!145 = !{i64 8164}
!146 = !{i64 8172}
!147 = !{i64 8192}
!148 = !{i64 8196}
!149 = !{i64 8240}
!150 = !{i64 8256}
!151 = !{i64 8260}
!152 = !{i64 8280}
!153 = !{i64 8296}
!154 = !{i64 8328}
!155 = !{i64 8372}
!156 = !{i64 8380}
!157 = !{i64 8384}
!158 = !{i64 8392}
!159 = !{i64 8396}
!160 = !{i64 8360}
!161 = !{i64 8364}
!162 = !{i64 8408}
!163 = !{i64 8424}
!164 = !{i64 8428}
!165 = !{i64 8444}
!166 = !{i64 8456}
!167 = !{i64 8468}
!168 = !{i64 8480}
!169 = !{i64 8492}
!170 = !{i64 8504}
!171 = !{i64 8516}
!172 = !{i64 8532}
!173 = !{i64 8544}
!174 = !{i64 8584}
!175 = !{i64 8592}
!176 = !{i64 8596}
!177 = !{i64 8604}
!178 = !{i64 8608}
!179 = !{i64 8560}
!180 = !{i64 8576}
!181 = !{i64 8620}
!182 = !{i64 8632}
!183 = !{i64 8640}
!184 = !{i64 8644}
!185 = !{i64 8656}
!186 = !{i64 8660}
!187 = !{i64 8668}
!188 = !{i64 8676}
!189 = !{i64 8684}
!190 = !{i64 8688}
!191 = !{i64 8692}
!192 = !{i64 8700}
!193 = !{i64 8716}
!194 = !{i64 8720}
!195 = !{i64 8772}
!196 = !{i64 8808}
!197 = !{i64 8816}
!198 = !{i64 8820}
!199 = !{i64 8828}
!200 = !{i64 8832}
!201 = !{i64 8796}
!202 = !{i64 8800}
!203 = !{i64 8844}
!204 = !{i64 8868}
!205 = !{i64 8876}
!206 = !{i64 8888}
!207 = !{i64 8892}
!208 = !{i64 9136}
!209 = !{i64 9140}
!210 = !{i64 9164}
!211 = !{i64 9172}
!212 = !{i64 9176}
!213 = !{i64 9184}
!214 = !{i64 9196}
!215 = !{i64 9216}
!216 = !{i64 9220}
!217 = !{i64 9236}
!218 = !{i64 9244}
!219 = !{i64 9260}
!220 = !{i64 9268}
!221 = !{i64 9280}
!222 = !{i64 9288}
!223 = !{i64 9300}
!224 = !{i64 9308}
!225 = !{i64 9312}
!226 = !{i64 9324}
!227 = !{i64 9340}
!228 = !{i64 9344}
!229 = !{i64 9352}
!230 = !{i64 9356}
!231 = !{i64 9364}
!232 = !{i64 9368}
!233 = !{i64 9376}
!234 = !{i64 9380}
!235 = !{i64 9388}
!236 = !{i64 9400}
!237 = !{i64 9412}
!238 = !{i64 9416}
!239 = !{i64 9428}
!240 = !{i64 9436}
!241 = !{i64 9460}
!242 = !{i64 9468}
!243 = !{i64 9472}
!244 = !{i64 9504}
!245 = !{i64 9512}
!246 = !{i64 9520}
!247 = !{i64 9528}
!248 = !{i64 9540}
!249 = !{i64 9548}
!250 = !{i64 9552}
!251 = !{i64 9560}
!252 = !{i64 9612}
!253 = !{i64 9488}
!254 = !{i64 9496}
!255 = !{i64 9532}
!256 = !{i64 9628}
!257 = !{i64 9632}
!258 = !{i64 9648}
!259 = !{i64 9656}
!260 = !{i64 9664}
!261 = !{i64 9676}
!262 = !{i64 9684}
!263 = !{i64 9692}
!264 = !{i64 9708}
!265 = !{i64 9712}
!266 = !{i64 9736}
!267 = !{i64 9756}
!268 = !{i64 9776}
!269 = !{i64 9780}
!270 = !{i64 9804}
!271 = !{i64 9824}
!272 = !{i64 9848}
!273 = !{i64 9872}
!274 = !{i64 9896}
!275 = !{i64 9904}
!276 = !{i64 9920}
!277 = !{i64 9932}
!278 = !{i64 9956}
!279 = !{i64 9980}
!280 = !{i64 9988}
!281 = !{i64 10004}
!282 = !{i64 10016}
!283 = !{i64 10028}
!284 = !{i64 10032}
!285 = !{i64 10068}
!286 = !{i64 10084}
!287 = !{i64 10148}
!288 = !{i64 10152}
!289 = !{i64 10168}
!290 = !{i64 10172}
!291 = !{i64 10188}
!292 = !{i64 10192}
!293 = !{i64 10208}
!294 = !{i64 10212}
!295 = !{i64 10228}
!296 = !{i64 10232}
!297 = !{i64 10248}
!298 = !{i64 10252}
!299 = !{i64 10268}
!300 = !{i64 10272}
!301 = !{i64 10288}
!302 = !{i64 10292}
!303 = !{i64 10308}
!304 = !{i64 10312}
!305 = !{i64 10328}
!306 = !{i64 10332}
!307 = !{i64 10348}
!308 = !{i64 10352}
!309 = !{i64 10368}
!310 = !{i64 10372}
!311 = !{i64 10388}
!312 = !{i64 10400}
!313 = !{i64 10412}
!314 = !{i64 10424}
!315 = !{i64 10460}
!316 = !{i64 10472}
!317 = !{i64 10508}
!318 = !{i64 10520}
!319 = !{i64 10544}
!320 = !{i64 10556}
!321 = !{i64 10560}
!322 = !{i64 10564}
!323 = !{i64 10572}
!324 = !{i64 10584}
!325 = !{i64 10600}
!326 = !{i64 10608}
!327 = !{i64 10624}
!328 = !{i64 10652}
!329 = !{i64 10660}
!330 = !{i64 10696}
!331 = !{i64 10720}
!332 = !{i64 10736}
!333 = !{i64 10756}
!334 = !{i64 10764}
!335 = !{i64 10784}
!336 = !{i64 10792}
!337 = !{i64 10812}
!338 = !{i64 10820}
!339 = !{i64 10840}
!340 = !{i64 10876}
!341 = !{i64 10888}
!342 = !{i64 10904}
!343 = !{i64 10920}
!344 = !{i64 10940}
!345 = !{i64 10948}
!346 = !{i64 10968}
!347 = !{i64 10976}
!348 = !{i64 10996}
!349 = !{i64 11000}
!350 = !{i64 11008}
!351 = !{i64 11040}
!352 = !{i64 11052}
!353 = !{i64 11064}
!354 = !{i64 11076}
!355 = !{i64 11092}
!356 = !{i64 11112}
!357 = !{i64 11120}
!358 = !{i64 11140}
!359 = !{i64 11148}
!360 = !{i64 11168}
!361 = !{i64 11176}
!362 = !{i64 11204}
!363 = !{i64 11216}
!364 = !{i64 11236}
!365 = !{i64 11244}
!366 = !{i64 11264}
!367 = !{i64 11272}
!368 = !{i64 11292}
!369 = !{i64 11300}
!370 = !{i64 11324}
!371 = !{i64 11344}
!372 = !{i64 11352}
!373 = !{i64 11372}
!374 = !{i64 11380}
!375 = !{i64 11400}
!376 = !{i64 11404}
!377 = !{i64 11420}
!378 = !{i64 11428}
!379 = !{i64 11416}
!380 = !{i64 11444}
!381 = !{i64 11456}
!382 = !{i64 11480}
!383 = !{i64 11484}
!384 = !{i64 11496}
!385 = !{i64 11516}
!386 = !{i64 11524}
!387 = !{i64 11540}
!388 = !{i64 11544}
!389 = !{i64 11552}
!390 = !{i64 11584}
!391 = !{i64 11588}
!392 = !{i64 11608}
!393 = !{i64 11616}
!394 = !{i64 11620}
!395 = !{i64 11624}
!396 = !{i64 11636}
!397 = !{i64 11640}
!398 = !{i64 11644}
!399 = !{i64 11672}
!400 = !{i64 11676}
!401 = !{i64 11680}
!402 = !{i64 11692}
!403 = !{i64 11700}
!404 = !{i64 11716}
!405 = !{i64 11732}
!406 = !{i64 11740}
!407 = !{i64 11752}
!408 = !{i64 11760}
!409 = !{i64 11772}
!410 = !{i64 11788}
!411 = !{i64 11796}
!412 = !{i64 11808}
!413 = !{i64 11820}
!414 = !{i64 11832}
!415 = !{i64 11868}
!416 = !{i64 11880}
!417 = !{i64 11884}
!418 = !{i64 11888}
!419 = !{i64 11900}
!420 = !{i64 11908}
!421 = !{i64 11912}
!422 = !{i64 11936}
!423 = !{i64 11948}
!424 = !{i64 11952}
!425 = !{i64 11956}
!426 = !{i64 11960}
!427 = !{i64 11972}
!428 = !{i64 11980}
!429 = !{i64 11984}
!430 = !{i64 11996}
!431 = !{i64 12008}
!432 = !{i64 12028}
!433 = !{i64 12032}
!434 = !{i64 12040}
!435 = !{i64 12048}
!436 = !{i64 12052}
!437 = !{i64 12064}
!438 = !{i64 12068}
!439 = !{i64 12096}
!440 = !{i64 12108}
!441 = !{i64 12132}
!442 = !{i64 12136}
!443 = !{i64 12148}
!444 = !{i64 12160}
!445 = !{i64 12164}
!446 = !{i64 12176}
!447 = !{i64 12188}
!448 = !{i64 12192}
!449 = !{i64 12208}
!450 = !{i64 12216}
!451 = !{i64 12220}
!452 = !{i64 12236}
!453 = !{i64 12240}
!454 = !{i64 12244}
!455 = !{i64 12248}
!456 = !{i64 12260}
!457 = !{i64 12272}
!458 = !{i64 12276}
!459 = !{i64 12296}
!460 = !{i64 12304}
!461 = !{i64 12328}
!462 = !{i64 12352}
!463 = !{i64 12364}
!464 = !{i64 12384}
!465 = !{i64 12396}
!466 = !{i64 12404}
!467 = !{i64 12428}
!468 = !{i64 12440}
!469 = !{i64 12464}
!470 = !{i64 12480}
!471 = !{i64 12492}
!472 = !{i64 12504}
!473 = !{i64 12516}
!474 = !{i64 12524}
!475 = !{i64 12532}
!476 = !{i64 12540}
!477 = !{i64 12564}
!478 = !{i64 12584}
!479 = !{i64 12608}
!480 = !{i64 12620}
!481 = !{i64 12640}
!482 = !{i64 12652}
!483 = !{i64 12660}
!484 = !{i64 12680}
!485 = !{i64 12704}
!486 = !{i64 12716}
!487 = !{i64 12736}
!488 = !{i64 12748}
!489 = !{i64 12756}
!490 = !{i64 12776}
!491 = !{i64 12796}
!492 = !{i64 12804}
!493 = !{i64 12828}
!494 = !{i64 12840}
!495 = !{i64 12864}
!496 = !{i64 12876}
!497 = !{i64 12896}
!498 = !{i64 12908}
!499 = !{i64 12924}
!500 = !{i64 12940}
!501 = !{i64 12952}
!502 = !{i64 12972}
!503 = !{i64 12996}
!504 = !{i64 13008}
!505 = !{i64 13028}
!506 = !{i64 13040}
!507 = !{i64 13048}
!508 = !{i64 13068}
!509 = !{i64 13072}
!510 = !{i64 13084}
!511 = !{i64 13088}
!512 = !{i64 13092}
!513 = !{i64 13100}
!514 = !{i64 13116}
!515 = !{i64 13136}
!516 = !{i64 13140}
!517 = !{i64 13152}
!518 = !{i64 13156}
!519 = !{i64 13160}
!520 = !{i64 13168}
!521 = !{i64 13184}
!522 = !{i64 13204}
!523 = !{i64 13208}
!524 = !{i64 13220}
!525 = !{i64 13224}
!526 = !{i64 13228}
!527 = !{i64 13236}
!528 = !{i64 13252}
!529 = !{i64 13260}
!530 = !{i64 13284}
!531 = !{i64 13296}
!532 = !{i64 13324}
!533 = !{i64 13336}
!534 = !{i64 13340}
!535 = !{i64 13352}
!536 = !{i64 13360}
!537 = !{i64 13364}
!538 = !{i64 13376}
!539 = !{i64 13404}
!540 = !{i64 13416}
!541 = !{i64 13420}
!542 = !{i64 13432}
!543 = !{i64 13440}
!544 = !{i64 13444}
!545 = !{i64 13456}
!546 = !{i64 13484}
!547 = !{i64 13496}
!548 = !{i64 13500}
!549 = !{i64 13512}
!550 = !{i64 13520}
!551 = !{i64 13524}
!552 = !{i64 13536}
!553 = !{i64 13564}
!554 = !{i64 13576}
!555 = !{i64 13580}
!556 = !{i64 13592}
!557 = !{i64 13600}
!558 = !{i64 13604}
!559 = !{i64 13616}
!560 = !{i64 13640}
!561 = !{i64 13664}
!562 = !{i64 13692}
!563 = !{i64 13708}
!564 = !{i64 13716}
!565 = !{i64 13728}
!566 = !{i64 13744}
!567 = !{i64 13756}
!568 = !{i64 13768}
!569 = !{i64 13772}
!570 = !{i64 13784}
!571 = !{i64 13796}
!572 = !{i64 13808}
!573 = !{i64 13832}
!574 = !{i64 13836}
!575 = !{i64 13900}
!576 = !{i64 13916}
!577 = !{i64 13924}
!578 = !{i64 13928}
!579 = !{i64 13936}
!580 = !{i64 13940}
!581 = !{i64 13952}
!582 = !{i64 13956}
!583 = !{i64 13988}
!584 = !{i64 13996}
!585 = !{i64 14004}
!586 = !{i64 14012}
!587 = !{i64 14024}
!588 = !{i64 14032}
!589 = !{i64 14052}
!590 = !{i64 14060}
!591 = !{i64 14068}
!592 = !{i64 14072}
!593 = !{i64 14080}
!594 = !{i64 14092}
!595 = !{i64 14108}
!596 = !{i64 14112}
!597 = !{i64 14120}
!598 = !{i64 14140}
!599 = !{i64 14164}
!600 = !{i64 14192}
!601 = !{i64 14204}
!602 = !{i64 14232}
!603 = !{i64 14244}
!604 = !{i64 14256}
!605 = !{i64 14272}
!606 = !{i64 14284}
!607 = !{i64 14288}
!608 = !{i64 14304}
!609 = !{i64 14312}
!610 = !{i64 14296}
!611 = !{i64 14328}
!612 = !{i64 14336}
!613 = !{i64 14344}
!614 = !{i64 14348}
!615 = !{i64 14360}
!616 = !{i64 14364}
!617 = !{i64 14372}
!618 = !{i64 14380}
!619 = !{i64 14384}
!620 = !{i64 14392}
!621 = !{i64 14404}
!622 = !{i64 14416}
!623 = !{i64 14420}
!624 = !{i64 14432}
!625 = !{i64 14448}
!626 = !{i64 14456}
!627 = !{i64 14472}
!628 = !{i64 14484}
!629 = !{i64 14488}
!630 = !{i64 14504}
!631 = !{i64 14512}
!632 = !{i64 14528}
!633 = !{i64 14536}
!634 = !{i64 14544}
!635 = !{i64 14548}
!636 = !{i64 14560}
!637 = !{i64 14572}
!638 = !{i64 14580}
!639 = !{i64 14584}
!640 = !{i64 14592}
!641 = !{i64 14604}
!642 = !{i64 14576}
!643 = !{i64 14632}
!644 = !{i64 14648}
!645 = !{i64 14656}
!646 = !{i64 14684}
!647 = !{i64 14696}
!648 = !{i64 14724}
!649 = !{i64 14736}
!650 = !{i64 14756}
!651 = !{i64 14776}
!652 = !{i64 14796}
!653 = !{i64 14816}
!654 = !{i64 14836}
!655 = !{i64 14860}
!656 = !{i64 14872}
!657 = !{i64 14896}
!658 = !{i64 14908}
!659 = !{i64 14928}
!660 = !{i64 14940}
!661 = !{i64 14948}
!662 = !{i64 14968}
!663 = !{i64 14984}
!664 = !{i64 14996}
!665 = !{i64 15016}
!666 = !{i64 15032}
!667 = !{i64 15044}
!668 = !{i64 15072}
!669 = !{i64 15084}
!670 = !{i64 15112}
!671 = !{i64 15124}
!672 = !{i64 15148}
!673 = !{i64 15160}
!674 = !{i64 15164}
!675 = !{i64 15168}
!676 = !{i64 15176}
!677 = !{i64 15188}
!678 = !{i64 15204}
!679 = !{i64 15212}
!680 = !{i64 15228}
!681 = !{i64 15256}
!682 = !{i64 15264}
!683 = !{i64 15284}
!684 = !{i64 15312}
!685 = !{i64 15328}
!686 = !{i64 15340}
!687 = !{i64 15368}
!688 = !{i64 15380}
!689 = !{i64 15412}
!690 = !{i64 15424}
!691 = !{i64 15432}
!692 = !{i64 15436}
!693 = !{i64 15452}
!694 = !{i64 15480}
!695 = !{i64 15492}
!696 = !{i64 15520}
!697 = !{i64 15532}
!698 = !{i64 15552}
!699 = !{i64 15564}
!700 = !{i64 15568}
!701 = !{i64 15572}
!702 = !{i64 15580}
!703 = !{i64 15604}
!704 = !{i64 15612}
!705 = !{i64 15624}
!706 = !{i64 15656}
!707 = !{i64 15668}
!708 = !{i64 15672}
!709 = !{i64 15680}
!710 = !{i64 15708}
!711 = !{i64 15720}
!712 = !{i64 15724}
!713 = !{i64 15740}
!714 = !{i64 15760}
!715 = !{i64 15768}
!716 = !{i64 15788}
!717 = !{i64 15796}
!718 = !{i64 15816}
!719 = !{i64 15820}
!720 = !{i64 15840}
!721 = !{i64 15844}
!722 = !{i64 15852}
!723 = !{i64 15864}
!724 = !{i64 15884}
!725 = !{i64 15892}
!726 = !{i64 15912}
!727 = !{i64 15936}
!728 = !{i64 15964}
!729 = !{i64 15976}
!730 = !{i64 15980}
!731 = !{i64 15996}
!732 = !{i64 16016}
!733 = !{i64 16024}
!734 = !{i64 16044}
!735 = !{i64 16052}
!736 = !{i64 16056}
!737 = !{i64 16076}
!738 = !{i64 16080}
!739 = !{i64 16088}
!740 = !{i64 16100}
!741 = !{i64 16120}
!742 = !{i64 16128}
!743 = !{i64 16148}
!744 = !{i64 16160}
!745 = !{i64 16180}
!746 = !{i64 16188}
!747 = !{i64 16208}
!748 = !{i64 16216}
!749 = !{i64 16236}
!750 = !{i64 16240}
!751 = !{i64 16248}
!752 = !{i64 16268}
!753 = !{i64 16280}
!754 = !{i64 16300}
!755 = !{i64 16308}
!756 = !{i64 16328}
!757 = !{i64 16336}
!758 = !{i64 16356}
!759 = !{i64 16360}
!760 = !{i64 16368}
!761 = !{i64 16388}
!762 = !{i64 16396}
!763 = !{i64 16408}
!764 = !{i64 16428}
!765 = !{i64 16436}
!766 = !{i64 16456}
!767 = !{i64 16464}
!768 = !{i64 16484}
!769 = !{i64 16492}
!770 = !{i64 16512}
!771 = !{i64 16520}
!772 = !{i64 16532}
!773 = !{i64 16552}
!774 = !{i64 16560}
!775 = !{i64 16580}
!776 = !{i64 16588}
!777 = !{i64 16608}
!778 = !{i64 16616}
!779 = !{i64 16636}
!780 = !{i64 16656}
!781 = !{i64 16668}
!782 = !{i64 16684}
!783 = !{i64 16696}
!784 = !{i64 16716}
!785 = !{i64 16724}
!786 = !{i64 16744}
!787 = !{i64 16752}
!788 = !{i64 16772}
!789 = !{i64 16780}
!790 = !{i64 16800}
!791 = !{i64 16812}
!792 = !{i64 16832}
!793 = !{i64 16840}
!794 = !{i64 16860}
!795 = !{i64 16868}
!796 = !{i64 16888}
!797 = !{i64 16896}
!798 = !{i64 16920}
!799 = !{i64 16924}
!800 = !{i64 16932}
!801 = !{i64 16944}
!802 = !{i64 16964}
!803 = !{i64 16984}
!804 = !{i64 17004}
!805 = !{i64 17012}
!806 = !{i64 17032}
!807 = !{i64 17040}
!808 = !{i64 17060}
!809 = !{i64 17080}
!810 = !{i64 17088}
!811 = !{i64 17108}
!812 = !{i64 17116}
!813 = !{i64 17136}
!814 = !{i64 17156}
!815 = !{i64 17176}
!816 = !{i64 17204}
!817 = !{i64 17212}
!818 = !{i64 17224}
!819 = !{i64 17244}
!820 = !{i64 17256}
!821 = !{i64 17264}
!822 = !{i64 17292}
!823 = !{i64 17300}
!824 = !{i64 17312}
!825 = !{i64 17332}
!826 = !{i64 17344}
!827 = !{i64 17352}
!828 = !{i64 17380}
!829 = !{i64 17388}
!830 = !{i64 17400}
!831 = !{i64 17416}
!832 = !{i64 17444}
!833 = !{i64 17468}
!834 = !{i64 17480}
!835 = !{i64 17492}
!836 = !{i64 17500}
!837 = !{i64 17516}
!838 = !{i64 17536}
!839 = !{i64 17548}
!840 = !{i64 17556}
!841 = !{i64 17564}
!842 = !{i64 17580}
!843 = !{i64 17608}
!844 = !{i64 17624}
!845 = !{i64 17636}
!846 = !{i64 17644}
!847 = !{i64 17656}
!848 = !{i64 17664}
!849 = !{i64 17684}
!850 = !{i64 17696}
!851 = !{i64 17704}
!852 = !{i64 17712}
!853 = !{i64 17740}
!854 = !{i64 17748}
!855 = !{i64 17760}
!856 = !{i64 17780}
!857 = !{i64 17792}
!858 = !{i64 17800}
!859 = !{i64 17820}
