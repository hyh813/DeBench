source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_8838_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_8860_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_8888_type = type { void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_88b8_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8988_type = type { i64 (i64*)* }
%vtable_89f0_type = type { i64 (i64*)* }
%vtable_8a50_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8a78_type = type { i64 (i64*)*, void (i64*)*, void (i64*)*, i64 (i64*)* }
%vtable_8ad0_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8af8_type = type { i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8b20_type = type { i64 (i64*, i32)*, i64 (i64*)*, void (i64*)*, void (i64*)* }
%vtable_8b50_type = type { i64 (i64*, i32)*, i64 (i64*)*, void (i64*)*, void (i64*)* }
%_Unwind_Exception = type { i32 }

@global_var_9030 = global i64 0
@global_var_8fd0 = local_unnamed_addr global i64 0
@global_var_9008 = external global i64
@global_var_5028 = constant [5 x i8] c"Test\00"
@global_var_5230 = local_unnamed_addr constant i64 4609434218613702656
@global_var_5238 = local_unnamed_addr constant i64 4612811918334230528
@global_var_5240 = local_unnamed_addr constant i64 4614253070214989087
@global_var_8b70 = global i64 0
@global_var_8bd0 = local_unnamed_addr global i64 0
@global_var_8b98 = global i64 0
@global_var_8b80 = global i64 0
@global_var_8bb0 = global i64 0
@global_var_9038 = global i64 0
@global_var_1234 = global i64 90709709291520
@global_var_502d = constant [5 x i8] c"Base\00"
@global_var_5032 = constant [8 x i8] c"Derived\00"
@global_var_8aa8 = global i64 14667
@global_var_8940 = external global i64
@global_var_89c0 = local_unnamed_addr global i64 14958
@global_var_8a28 = local_unnamed_addr global i64 15018
@global_var_8920 = global i64 15078
@global_var_88e8 = global i64 15091
@global_var_8950 = external global i64
@0 = external global i32
@global_var_3e8 = global i32 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95C++\E9\9D\A2\E5\90\91\E5\AF\B9\E8\B1\A1\E7\89\B9\E6\80\A7 ===\00"
@global_var_5040 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@2 = internal constant [30 x i8] c"CPP-L3-01: %d (\E6\9C\9F\E6\9C\9B: 4704)\0A\00"
@global_var_5064 = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @2, i64 0, i64 0)
@3 = internal constant [28 x i8] c"CPP-L3-02: %d (\E6\9C\9F\E6\9C\9B: 21)\0A\00"
@global_var_5082 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @3, i64 0, i64 0)
@4 = internal constant [28 x i8] c"CPP-L3-03: %d (\E6\9C\9F\E6\9C\9B: 42)\0A\00"
@global_var_509e = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @4, i64 0, i64 0)
@5 = internal constant [28 x i8] c"CPP-L3-04: %d (\E6\9C\9F\E6\9C\9B: 71)\0A\00"
@global_var_50ba = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @5, i64 0, i64 0)
@6 = internal constant [29 x i8] c"CPP-L3-05: %d (\E6\9C\9F\E6\9C\9B: 650)\0A\00"
@global_var_50d6 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @6, i64 0, i64 0)
@7 = internal constant [28 x i8] c"CPP-L3-06: %d (\E6\9C\9F\E6\9C\9B: 22)\0A\00"
@global_var_50f3 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @7, i64 0, i64 0)
@8 = internal constant [28 x i8] c"CPP-L3-07: %d (\E6\9C\9F\E6\9C\9B: 39)\0A\00"
@global_var_510f = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @8, i64 0, i64 0)
@9 = internal constant [28 x i8] c"CPP-L3-08: %d (\E6\9C\9F\E6\9C\9B: 16)\0A\00"
@global_var_512b = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i64 0, i64 0)
@10 = internal constant [28 x i8] c"CPP-L3-09: %d (\E6\9C\9F\E6\9C\9B: 85)\0A\00"
@global_var_5147 = constant i8* getelementptr inbounds ([28 x i8], [28 x i8]* @10, i64 0, i64 0)
@11 = internal constant [29 x i8] c"CPP-L4-01: %d (\E6\9C\9F\E6\9C\9B: 226)\0A\00"
@global_var_5163 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @11, i64 0, i64 0)
@12 = internal constant [29 x i8] c"CPP-L4-02: %d (\E6\9C\9F\E6\9C\9B: 703)\0A\00"
@global_var_5180 = constant i8* getelementptr inbounds ([29 x i8], [29 x i8]* @12, i64 0, i64 0)
@13 = internal constant [30 x i8] c"CPP-L4-03: %d (\E6\9C\9F\E6\9C\9B: 330+)\0A\00"
@global_var_519d = constant i8* getelementptr inbounds ([30 x i8], [30 x i8]* @13, i64 0, i64 0)
@global_var_9034 = local_unnamed_addr global i32 0
@global_var_9035 = global i32 0
@global_var_8838 = global %vtable_8838_type { void (i64*)* @_ZN12RTTIDerivedBD2Ev, void (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedB7getTypeEv }
@global_var_8860 = global %vtable_8860_type { void (i64*)* @_ZN12RTTIDerivedAD2Ev, void (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_8888 = global %vtable_8888_type { void (i64*)* @_ZN8RTTIBaseD2Ev, void (i64*)* @_ZN8RTTIBaseD0Ev, i64 (i64*)* @_ZNK8RTTIBase7getTypeEv }
@global_var_88b8 = global %vtable_88b8_type { i64 (i64*)* @_ZN14DiamondDerived4funcEv, void (i64*)* @_ZN14DiamondDerivedD1Ev, void (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_8988 = local_unnamed_addr global %vtable_8988_type { i64 (i64*)* @_ZN7MiddleA4funcEv }
@global_var_89f0 = local_unnamed_addr global %vtable_89f0_type { i64 (i64*)* @_ZN7MiddleB4funcEv }
@global_var_8a50 = global %vtable_8a50_type { i64 (i64*)* @_ZN11VirtualBase4funcEv, void (i64*)* @_ZN11VirtualBaseD2Ev, void (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_8a78 = global %vtable_8a78_type { i64 (i64*)* @_ZN12MultiDerived5funcAEv, void (i64*)* @_ZN12MultiDerivedD2Ev, void (i64*)* @_ZN12MultiDerivedD0Ev, i64 (i64*)* @_ZN12MultiDerived5funcBEv }
@global_var_8ad0 = global %vtable_8ad0_type { i64 (i64*)* @_ZN5BaseB5funcBEv, void (i64*)* @_ZN5BaseBD2Ev, void (i64*)* @_ZN5BaseBD0Ev }
@global_var_8af8 = global %vtable_8af8_type { i64 (i64*)* @_ZN5BaseA5funcAEv, void (i64*)* @_ZN5BaseAD2Ev, void (i64*)* @_ZN5BaseAD0Ev }
@global_var_8b20 = global %vtable_8b20_type { i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 (i64*)* @_ZNK7Derived7getNameEv, void (i64*)* @_ZN7DerivedD2Ev, void (i64*)* @_ZN7DerivedD0Ev }
@global_var_8b50 = global %vtable_8b50_type { i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 (i64*)* @_ZNK4Base7getNameEv, void (i64*)* @_ZN4BaseD2Ev, void (i64*)* @_ZN4BaseD0Ev }

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

define void @function_2180(i64* %d) local_unnamed_addr {
dec_label_pc_2180:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i64 @function_2190(i64 %arg1) local_unnamed_addr {
dec_label_pc_2190:
  %0 = call i64 @_Znam(i64 %arg1), !insn.addr !7
  ret i64 %0, !insn.addr !7
}

define i32 @function_21a0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_21a0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i64 @function_21b0(i64 %arg1) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = call i64 @__cxa_begin_catch(i64 %arg1), !insn.addr !9
  ret i64 %0, !insn.addr !9
}

define i32 @function_21c0(i8* %s) local_unnamed_addr {
dec_label_pc_21c0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i64 @function_21d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_21d0:
  %0 = call i64 @__cxa_allocate_exception(i64 %arg1), !insn.addr !11
  ret i64 %0, !insn.addr !11
}

define i8* @function_21e0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_21e0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define i32 @function_21f0(void (i64*)* %func, i64* %arg, i64* %dso_handle) local_unnamed_addr {
dec_label_pc_21f0:
  %0 = call i32 @__cxa_atexit(void (i64*)* %func, i64* %arg, i64* %dso_handle), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i64 @function_2200(i64 %arg1) local_unnamed_addr {
dec_label_pc_2200:
  %0 = call i64 @_Znwm(i64 %arg1), !insn.addr !14
  ret i64 %0, !insn.addr !14
}

define i64 @function_2210(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2210:
  %0 = call i64 @_ZdlPvm(i64* %arg1, i64 %arg2), !insn.addr !15
  ret i64 %0, !insn.addr !15
}

define i64 @function_2220() local_unnamed_addr {
dec_label_pc_2220:
  %0 = call i64 @__cxa_bad_typeid(), !insn.addr !16
  ret i64 %0, !insn.addr !16
}

define void @function_2230() local_unnamed_addr {
dec_label_pc_2230:
  call void @__stack_chk_fail(), !insn.addr !17
  ret void, !insn.addr !17
}

define i64 @function_2240(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_2240:
  %0 = call i64 @__dynamic_cast(i64 %arg1, i64* %arg2, i64* %arg3, i64 %arg4), !insn.addr !18
  ret i64 %0, !insn.addr !18
}

define void @function_2250(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_2250:
  %0 = zext i32 %size to i64
  %1 = inttoptr i64 %0 to i64*, !insn.addr !19
  call void @_ZdaPv(i64* %ptr, i64* %1), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_2260(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_2260:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i64 @function_2270() local_unnamed_addr {
dec_label_pc_2270:
  %0 = call i64 @__cxa_throw_bad_array_new_length(), !insn.addr !21
  ret i64 %0, !insn.addr !21
}

define i64 @function_2280() local_unnamed_addr {
dec_label_pc_2280:
  %0 = call i64 @__cxa_rethrow(), !insn.addr !22
  ret i64 %0, !insn.addr !22
}

define i64 @function_2290() local_unnamed_addr {
dec_label_pc_2290:
  %0 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !23
  ret i64 %0, !insn.addr !23
}

define i32 @function_22a0(i8* %s) local_unnamed_addr {
dec_label_pc_22a0:
  %0 = call i32 @puts(i8* %s), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i64 @function_22b0() local_unnamed_addr {
dec_label_pc_22b0:
  %0 = call i64 @__cxa_end_catch(), !insn.addr !25
  ret i64 %0, !insn.addr !25
}

define i64 @function_22c0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_22c0:
  %0 = call i64 @__cxa_throw(i64 %arg1, i64 %arg2, i64 %arg3), !insn.addr !26
  ret i64 %0, !insn.addr !26
}

define void @function_22d0(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_22d0:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !27
  ret void, !insn.addr !27
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_22e0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !28
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !28
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !28
  %3 = call i32 @__libc_start_main(i64 12493, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !28
  %4 = call i64 @__asm_hlt(), !insn.addr !29
  unreachable, !insn.addr !29
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_2310:
  ret i64 ptrtoint (i64* @global_var_9030 to i64), !insn.addr !30
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_2340:
  ret i64 0, !insn.addr !31
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_2380:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* bitcast (i64* @global_var_9030 to i8*), align 8, !insn.addr !32
  %3 = icmp eq i8 %2, 0, !insn.addr !32
  %4 = icmp eq i1 %3, false, !insn.addr !33
  br i1 %4, label %dec_label_pc_23b8, label %dec_label_pc_238d, !insn.addr !33

dec_label_pc_238d:                                ; preds = %dec_label_pc_2380
  %5 = load i64, i64* @global_var_8fd0, align 8, !insn.addr !34
  %6 = icmp eq i64 %5, 0, !insn.addr !34
  br i1 %6, label %dec_label_pc_23a7, label %dec_label_pc_239b, !insn.addr !35

dec_label_pc_239b:                                ; preds = %dec_label_pc_238d
  %7 = load i64, i64* inttoptr (i64 36872 to i64*), align 8, !insn.addr !36
  %8 = inttoptr i64 %7 to i64*, !insn.addr !37
  call void @__cxa_finalize(i64* %8), !insn.addr !37
  br label %dec_label_pc_23a7, !insn.addr !37

dec_label_pc_23a7:                                ; preds = %dec_label_pc_239b, %dec_label_pc_238d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !38
  store i8 1, i8* bitcast (i64* @global_var_9030 to i8*), align 8, !insn.addr !39
  ret i64 %9, !insn.addr !40

dec_label_pc_23b8:                                ; preds = %dec_label_pc_2380
  ret i64 %1, !insn.addr !41
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_23c0:
  %0 = call i64 @register_tm_clones(), !insn.addr !42
  ret i64 %0, !insn.addr !42
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_23ca:
  %rax.0.reg2mem = alloca i64, !insn.addr !43
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !44
  call void @_ZN11SimpleClassC2EiPKc(i64* nonnull %stack_var_-56, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5028, i64 0, i64 0)), !insn.addr !45
  %1 = call i64 @_ZN11SimpleClass8setValueEi(i64* nonnull %stack_var_-56, i32 10), !insn.addr !46
  %2 = call i64 @_ZNK11SimpleClass8getValueEv(i64* nonnull %stack_var_-56), !insn.addr !47
  %3 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %stack_var_-56, i32 3), !insn.addr !48
  %4 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !49
  %5 = add i64 %3, %2, !insn.addr !50
  %6 = add i64 %5, %4, !insn.addr !51
  %7 = and i64 %6, 4294967295, !insn.addr !51
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !52
  %9 = icmp eq i64 %0, %8, !insn.addr !52
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !53
  br i1 %9, label %dec_label_pc_245a, label %dec_label_pc_2455, !insn.addr !53

dec_label_pc_2455:                                ; preds = %dec_label_pc_23ca
  call void @__stack_chk_fail(), !insn.addr !54
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_245a, !insn.addr !54

dec_label_pc_245a:                                ; preds = %dec_label_pc_2455, %dec_label_pc_23ca
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %10 = trunc i64 %rax.0.reload to i32, !insn.addr !55
  ret i32 %10, !insn.addr !55
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_245c:
  %rax.0.reg2mem = alloca i64, !insn.addr !56
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !57
  call void @_ZN14LifecycleClassC2Em(i64* nonnull %stack_var_-40, i64 5), !insn.addr !58
  %1 = call i64 @_ZNK14LifecycleClass7getDataEm(i64* nonnull %stack_var_-40, i64 2), !insn.addr !59
  %2 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !60
  %3 = add i64 %2, %1, !insn.addr !61
  call void @_ZN14LifecycleClassD2Ev(i64* nonnull %stack_var_-40), !insn.addr !62
  %4 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !63
  %5 = mul i64 %4, zext (i32 ptrtoint (i32* @global_var_3e8 to i32) to i64), !insn.addr !64
  %6 = add i64 %3, %5, !insn.addr !65
  %7 = and i64 %6, 4294967295, !insn.addr !66
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !67
  %9 = icmp eq i64 %0, %8, !insn.addr !67
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !68
  br i1 %9, label %dec_label_pc_24dc, label %dec_label_pc_24d7, !insn.addr !68

dec_label_pc_24d7:                                ; preds = %dec_label_pc_245c
  call void @__stack_chk_fail(), !insn.addr !69
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_24dc, !insn.addr !69

dec_label_pc_24dc:                                ; preds = %dec_label_pc_24d7, %dec_label_pc_245c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %10 = trunc i64 %rax.0.reload to i32, !insn.addr !70
  ret i32 %10, !insn.addr !70

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_24de:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !71
  ret i32 %1, !insn.addr !71
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_250b:
  %rax.0.reg2mem = alloca i32, !insn.addr !72
  %stack_var_-56 = alloca i64, align 8
  %pd_-80 = alloca i32*, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !73
  store i32* bitcast (%vtable_8b50_type* @global_var_8b50 to i32*), i32** %pd_-80, align 8, !insn.addr !74
  call void @_ZN7DerivedC2Ei(i64* nonnull %stack_var_-56, i32 3), !insn.addr !75
  %1 = bitcast i32** %pd_-80 to i64*, !insn.addr !76
  %2 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %1, i32 5), !insn.addr !76
  %3 = trunc i64 %2 to i32, !insn.addr !77
  %4 = call i64 @_ZN7Derived12virtual_funcEi(i64* nonnull %stack_var_-56, i32 5), !insn.addr !78
  %5 = trunc i64 %4 to i32, !insn.addr !79
  %6 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %1, i32 5), !insn.addr !80
  %7 = call i32 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-56, i32 5), !insn.addr !81
  %8 = add i32 %5, %3, !insn.addr !82
  %9 = add i32 %8, %6, !insn.addr !83
  %10 = add i32 %9, %7, !insn.addr !84
  call void @_ZN7DerivedD2Ev(i64* nonnull %stack_var_-56), !insn.addr !85
  call void @_ZN4BaseD2Ev(i64* nonnull %1), !insn.addr !86
  %11 = call i64 @__readfsqword(i64 40), !insn.addr !87
  %12 = icmp eq i64 %0, %11, !insn.addr !87
  store i32 %10, i32* %rax.0.reg2mem, !insn.addr !88
  br i1 %12, label %dec_label_pc_2610, label %dec_label_pc_260b, !insn.addr !88

dec_label_pc_260b:                                ; preds = %dec_label_pc_250b
  call void @__stack_chk_fail(), !insn.addr !89
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !89
  br label %dec_label_pc_2610, !insn.addr !89

dec_label_pc_2610:                                ; preds = %dec_label_pc_260b, %dec_label_pc_250b
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !90

; uselistorder directives
  uselistorder i32 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_2616:
  %rax.0.reg2mem = alloca i64, !insn.addr !91
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !92
  call void @_ZN12MultiDerivedC2Ev(i64* nonnull %stack_var_-72), !insn.addr !93
  %1 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !94
  %2 = ptrtoint i64* %stack_var_-56 to i64
  %3 = add i64 %1, %2, !insn.addr !95
  call void @_ZN12MultiDerivedD2Ev(i64* nonnull %stack_var_-72), !insn.addr !96
  %4 = and i64 %3, 4294967288, !insn.addr !97
  %5 = or i64 %4, 1, !insn.addr !98
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !99
  %7 = icmp eq i64 %0, %6, !insn.addr !99
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !100
  br i1 %7, label %dec_label_pc_26ed, label %dec_label_pc_26e8, !insn.addr !100

dec_label_pc_26e8:                                ; preds = %dec_label_pc_2616
  call void @__stack_chk_fail(), !insn.addr !101
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !101
  br label %dec_label_pc_26ed, !insn.addr !101

dec_label_pc_26ed:                                ; preds = %dec_label_pc_26e8, %dec_label_pc_2616
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %8 = trunc i64 %rax.0.reload to i32, !insn.addr !102
  ret i32 %8, !insn.addr !102

; uselistorder directives
  uselistorder i64* %stack_var_-72, { 0, 2, 1 }
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_26f3:
  %rax.0.reg2mem = alloca i64, !insn.addr !103
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !104
  call void @_ZN14DiamondDerivedC1Ev(i64* nonnull %stack_var_-88), !insn.addr !105
  %1 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !106
  %2 = mul i64 %1, 2, !insn.addr !107
  call void @_ZN14DiamondDerivedD1Ev(i64* nonnull %stack_var_-88), !insn.addr !108
  %3 = and i64 %2, 4294967280, !insn.addr !109
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !110
  %5 = icmp eq i64 %0, %4, !insn.addr !110
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !111
  br i1 %5, label %dec_label_pc_27ac, label %dec_label_pc_27a7, !insn.addr !111

dec_label_pc_27a7:                                ; preds = %dec_label_pc_26f3
  call void @__stack_chk_fail(), !insn.addr !112
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_27ac, !insn.addr !112

dec_label_pc_27ac:                                ; preds = %dec_label_pc_27a7, %dec_label_pc_26f3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %6 = trunc i64 %rax.0.reload to i32, !insn.addr !113
  ret i32 %6, !insn.addr !113
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_27b2:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i32, !insn.addr !114
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %p3_-32 = alloca i64, align 8
  %p3_-40 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !115
  call void @_ZN5PointC2Eii(i64* nonnull %p3_-40, i32 1, i32 2), !insn.addr !116
  call void @_ZN5PointC2Eii(i64* nonnull %p3_-32, i32 3, i32 4), !insn.addr !117
  %3 = call i64 @_ZNK5PointplERKS_(i64* nonnull %p3_-40, i64* nonnull %p3_-32), !insn.addr !118
  %4 = trunc i64 %3 to i32, !insn.addr !119
  store i32 %4, i32* %stack_var_-24, align 4, !insn.addr !119
  %5 = call i64 @_ZNK5PointeqERKS_(i64* nonnull %p3_-40, i64* nonnull %p3_-32), !insn.addr !120
  %6 = trunc i64 %5 to i8, !insn.addr !121
  %7 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !122
  %8 = call i64 @_ZN5PointppEv(i64* nonnull %7), !insn.addr !122
  %9 = load i32, i32* %stack_var_-24, align 4, !insn.addr !123
  %10 = add i32 %9, %1, !insn.addr !124
  %11 = icmp eq i8 %6, 0, !insn.addr !125
  %. = select i1 %11, i32 10, i32 0
  %12 = add i32 %10, %., !insn.addr !126
  %13 = call i64 @__readfsqword(i64 40), !insn.addr !127
  %14 = icmp eq i64 %2, %13, !insn.addr !127
  store i32 %12, i32* %rax.0.reg2mem, !insn.addr !128
  br i1 %14, label %dec_label_pc_2862, label %dec_label_pc_285d, !insn.addr !128

dec_label_pc_285d:                                ; preds = %dec_label_pc_27b2
  call void @__stack_chk_fail(), !insn.addr !129
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !129
  br label %dec_label_pc_2862, !insn.addr !129

dec_label_pc_2862:                                ; preds = %dec_label_pc_285d, %dec_label_pc_27b2
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !130

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2864:
  %rax.0.reg2mem = alloca i32, !insn.addr !131
  %r2_-32 = alloca double, align 8
  %r1_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !132
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !133
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !134
  %3 = call i128 @__asm_movapd(i128 %2), !insn.addr !135
  %4 = call i128 @__asm_movq(i64 4612811918334230528), !insn.addr !136
  %5 = trunc i128 %4 to i64, !insn.addr !137
  %6 = bitcast i64 %5 to double, !insn.addr !137
  %7 = trunc i128 %3 to i64, !insn.addr !137
  %8 = bitcast i64 %7 to double, !insn.addr !137
  %9 = call double @_Z12template_maxIdET_S0_S0_(double %6, double %8), !insn.addr !137
  %10 = fptrunc double %9 to float, !insn.addr !137
  %11 = bitcast float %10 to i32, !insn.addr !137
  %12 = sext i32 %11 to i128, !insn.addr !137
  %13 = call i64 @__asm_movq.12(i128 %12), !insn.addr !138
  store i32 10, i32* %r1_-36, align 4, !insn.addr !139
  store double 9.881310e-323, double* %r2_-32, align 8, !insn.addr !140
  %14 = bitcast double* %r2_-32 to i32*, !insn.addr !141
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %r1_-36, i32* nonnull %14), !insn.addr !141
  %15 = call i128 @__asm_movsd(i64 %13), !insn.addr !142
  %16 = call i32 @__asm_cvttsd2si(i128 %15), !insn.addr !143
  %17 = add i32 %16, %1, !insn.addr !144
  %18 = load i32, i32* %r1_-36, align 4, !insn.addr !145
  %19 = add i32 %17, %18, !insn.addr !146
  %20 = load double, double* %r2_-32, align 8, !insn.addr !147
  %21 = fptrunc double %20 to float, !insn.addr !147
  %22 = bitcast float %21 to i32, !insn.addr !147
  %23 = add i32 %19, %22, !insn.addr !148
  %24 = call i64 @__readfsqword(i64 40), !insn.addr !149
  %25 = icmp eq i64 %0, %24, !insn.addr !149
  store i32 %23, i32* %rax.0.reg2mem, !insn.addr !150
  br i1 %25, label %dec_label_pc_2904, label %dec_label_pc_28ff, !insn.addr !150

dec_label_pc_28ff:                                ; preds = %dec_label_pc_2864
  call void @__stack_chk_fail(), !insn.addr !151
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_2904, !insn.addr !151

dec_label_pc_2904:                                ; preds = %dec_label_pc_28ff, %dec_label_pc_2864
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder i32* %r1_-36, { 1, 0, 2 }
  uselistorder double* %r2_-32, { 1, 0, 2 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2906:
  %rax.0.reg2mem = alloca i32, !insn.addr !153
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-152 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !154
  call void @_ZN9ContainerIiEC2Ev(i64* nonnull %stack_var_-152), !insn.addr !155
  %1 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 10), !insn.addr !156
  %2 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 20), !insn.addr !157
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 30), !insn.addr !158
  %4 = call i64 @_ZNK9ContainerIiE3getEi(i64* nonnull %stack_var_-152, i32 0), !insn.addr !159
  %sext = mul i64 %4, 4294967296
  %5 = ashr exact i64 %sext, 32, !insn.addr !160
  %6 = bitcast i64 %5 to double, !insn.addr !160
  %7 = call i64 @_ZNK9ContainerIiE7getSizeEv(i64* nonnull %stack_var_-152), !insn.addr !161
  %8 = trunc i64 %7 to i32, !insn.addr !162
  call void @_ZN9ContainerIdEC2Ev(i64* nonnull %stack_var_-104), !insn.addr !163
  %9 = call i128 @__asm_movq(i64 4614253070214989087), !insn.addr !164
  %10 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !165
  %11 = bitcast i64 %10 to double, !insn.addr !166
  %12 = call i64 @_ZN9ContainerIdE4pushEd(double %11), !insn.addr !166
  %13 = call i128 @_ZNK9ContainerIdE3getEi(i64* nonnull %stack_var_-104, i32 0), !insn.addr !167
  %14 = call i64 @__asm_movq.12(i128 %13), !insn.addr !168
  %15 = fptrunc double %6 to float, !insn.addr !169
  %16 = bitcast float %15 to i32, !insn.addr !169
  %17 = add i32 %16, %8, !insn.addr !170
  %18 = call i128 @__asm_movsd(i64 %14), !insn.addr !171
  %19 = call i32 @__asm_cvttsd2si(i128 %18), !insn.addr !172
  %20 = add i32 %17, %19, !insn.addr !173
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !174
  %22 = icmp eq i64 %0, %21, !insn.addr !174
  store i32 %20, i32* %rax.0.reg2mem, !insn.addr !175
  br i1 %22, label %dec_label_pc_2a0f, label %dec_label_pc_2a0a, !insn.addr !175

dec_label_pc_2a0a:                                ; preds = %dec_label_pc_2906
  call void @__stack_chk_fail(), !insn.addr !176
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !176
  br label %dec_label_pc_2a0f, !insn.addr !176

dec_label_pc_2a0f:                                ; preds = %dec_label_pc_2a0a, %dec_label_pc_2906
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !177

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 0, 2, 1 }
  uselistorder i64 (i64*, i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2a12:
  %rdi = alloca i64, align 8
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !178
  %2 = inttoptr i64 %1 to i64*, !insn.addr !178
  %3 = load i64, i64* %2, align 8, !insn.addr !178
  %4 = inttoptr i64 %3 to i32*, !insn.addr !179
  %5 = load i32, i32* %4, align 4, !insn.addr !179
  %6 = add i32 %5, 5, !insn.addr !180
  store i32 %6, i32* %4, align 4, !insn.addr !181
  %7 = bitcast i64* %rdi to i32*
  %8 = load i32, i32* %7, align 8, !insn.addr !182
  %9 = mul i32 %8, %arg2, !insn.addr !183
  %10 = load i64, i64* %2, align 8, !insn.addr !184
  %11 = inttoptr i64 %10 to i32*, !insn.addr !185
  %12 = load i32, i32* %11, align 4, !insn.addr !185
  %13 = add i32 %12, %9, !insn.addr !186
  %14 = zext i32 %13 to i64, !insn.addr !186
  ret i64 %14, !insn.addr !187
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2a4e:
  %rax.0.reg2mem = alloca i64, !insn.addr !188
  %stack_var_-40 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !189
  store i32 10, i32* %stack_var_-40, align 4, !insn.addr !190
  %1 = bitcast i32* %stack_var_-40 to i64*, !insn.addr !191
  %2 = call i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i64* nonnull %1, i32 3), !insn.addr !191
  %3 = add i64 %2, 30, !insn.addr !192
  %4 = and i64 %3, 4294967295, !insn.addr !192
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !193
  %6 = icmp eq i64 %0, %5, !insn.addr !193
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !194
  br i1 %6, label %dec_label_pc_2abc, label %dec_label_pc_2ab7, !insn.addr !194

dec_label_pc_2ab7:                                ; preds = %dec_label_pc_2a4e
  call void @__stack_chk_fail(), !insn.addr !195
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_2abc, !insn.addr !195

dec_label_pc_2abc:                                ; preds = %dec_label_pc_2ab7, %dec_label_pc_2a4e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = trunc i64 %rax.0.reload to i32, !insn.addr !196
  ret i32 %7, !insn.addr !196
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_2abe:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !197
  %1 = inttoptr i64 %0 to i32*, !insn.addr !198
  store i32 42, i32* %1, align 4, !insn.addr !198
  %2 = call i64 @__cxa_throw(i64 %0, i64 ptrtoint (i64* @global_var_8b70 to i64), i64 0), !insn.addr !199
  ret i32 0, !insn.addr !200
}

define i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2be4:
  %rax.0.reg2mem = alloca i64, !insn.addr !201
  store i32 -1, i32* %arg2, align 4, !insn.addr !202
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !203
  %1 = icmp eq i32* %arg2, null, !insn.addr !204
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !205
  br i1 %1, label %dec_label_pc_2c14, label %dec_label_pc_2c07, !insn.addr !205

dec_label_pc_2c07:                                ; preds = %dec_label_pc_2be4
  %2 = bitcast i32* %arg2 to i64*, !insn.addr !206
  %3 = call i64 @_ZdlPvm(i64* %2, i64 4), !insn.addr !206
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_2c14, !insn.addr !206

dec_label_pc_2c14:                                ; preds = %dec_label_pc_2c07, %dec_label_pc_2be4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !207
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2c17:
  %rax.0.reg2mem = alloca i32, !insn.addr !208
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-77 = alloca i64, align 8
  %ptr3_-48 = alloca i64, align 8
  %ptr3_-56 = alloca i64, align 8
  %arr_-64 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !209
  %1 = call i64 @_Znwm(i64 4), !insn.addr !210
  %2 = inttoptr i64 %1 to i32*, !insn.addr !211
  store i32 100, i32* %2, align 4, !insn.addr !211
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* nonnull %arr_-64, i32* %2), !insn.addr !212
  %3 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %arr_-64), !insn.addr !213
  %4 = inttoptr i64 %3 to i32*, !insn.addr !214
  store i32 200, i32* %4, align 4, !insn.addr !214
  %5 = bitcast i64* %arr_-64 to i64**, !insn.addr !215
  %6 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** nonnull %5), !insn.addr !215
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* nonnull %ptr3_-56, i64* %6), !insn.addr !216
  %7 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %ptr3_-56), !insn.addr !217
  %8 = inttoptr i64 %7 to i32*, !insn.addr !218
  %9 = load i32, i32* %8, align 4, !insn.addr !218
  %10 = call i64 @_Znam(i64 20), !insn.addr !219
  %11 = inttoptr i64 %10 to i32*, !insn.addr !220
  store i32 1, i32* %11, align 4, !insn.addr !220
  %12 = add i64 %10, 4, !insn.addr !221
  %13 = inttoptr i64 %12 to i32*, !insn.addr !222
  store i32 2, i32* %13, align 4, !insn.addr !222
  %14 = add i64 %10, 8, !insn.addr !223
  %15 = inttoptr i64 %14 to i32*, !insn.addr !224
  store i32 3, i32* %15, align 4, !insn.addr !224
  %16 = add i64 %10, 12, !insn.addr !225
  %17 = inttoptr i64 %16 to i32*, !insn.addr !226
  store i32 4, i32* %17, align 4, !insn.addr !226
  %18 = add i64 %10, 16, !insn.addr !227
  %19 = inttoptr i64 %18 to i32*, !insn.addr !228
  store i32 5, i32* %19, align 4, !insn.addr !228
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* nonnull %ptr3_-48, i32* %11), !insn.addr !229
  %20 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %ptr3_-48, i64 2), !insn.addr !230
  %21 = inttoptr i64 %20 to i32*, !insn.addr !231
  %22 = load i32, i32* %21, align 4, !insn.addr !231
  %23 = call i64 @_Znwm(i64 4), !insn.addr !232
  %24 = inttoptr i64 %23 to i32*, !insn.addr !233
  store i32 500, i32* %24, align 4, !insn.addr !233
  %25 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* nonnull %stack_var_-40, i32* %24, i64* nonnull %stack_var_-77), !insn.addr !234
  %26 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* nonnull %stack_var_-40), !insn.addr !235
  %27 = inttoptr i64 %26 to i32*, !insn.addr !236
  %28 = load i32, i32* %27, align 4, !insn.addr !236
  %29 = add i32 %22, %9, !insn.addr !237
  %30 = add i32 %29, %28, !insn.addr !238
  %31 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(i64* nonnull %stack_var_-40), !insn.addr !239
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* nonnull %ptr3_-48), !insn.addr !240
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %ptr3_-56), !insn.addr !241
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* nonnull %arr_-64), !insn.addr !242
  %32 = call i64 @__readfsqword(i64 40), !insn.addr !243
  %33 = icmp eq i64 %0, %32, !insn.addr !243
  store i32 %30, i32* %rax.0.reg2mem, !insn.addr !244
  br i1 %33, label %dec_label_pc_2dbf, label %dec_label_pc_2dba, !insn.addr !244

dec_label_pc_2dba:                                ; preds = %dec_label_pc_2c17
  call void @__stack_chk_fail(), !insn.addr !245
  store i32 ptrtoint (i32* @0 to i32), i32* %rax.0.reg2mem, !insn.addr !245
  br label %dec_label_pc_2dbf, !insn.addr !245

dec_label_pc_2dbf:                                ; preds = %dec_label_pc_2dba, %dec_label_pc_2c17
  %rax.0.reload = load i32, i32* %rax.0.reg2mem
  ret i32 %rax.0.reload, !insn.addr !246

; uselistorder directives
  uselistorder i64 %10, { 0, 1, 2, 4, 3 }
  uselistorder void (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 1, 0 }
  uselistorder i32 5, { 5, 6, 0, 1, 2, 3, 4 }
  uselistorder i32 4, { 1, 0 }
  uselistorder i32 3, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_2dc5:
  %stack_var_-60.4.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.3.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.2.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.1.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.0.reg2mem = alloca i32, !insn.addr !247
  %0 = call i64 @_Znwm(i64 8), !insn.addr !248
  %1 = inttoptr i64 %0 to i64*, !insn.addr !249
  store i64 0, i64* %1, align 8, !insn.addr !249
  call void @_ZN12RTTIDerivedAC2Ev(i64* %1), !insn.addr !250
  %2 = call i64 @_Znwm(i64 8), !insn.addr !251
  %3 = inttoptr i64 %2 to i64*, !insn.addr !252
  store i64 0, i64* %3, align 8, !insn.addr !252
  call void @_ZN12RTTIDerivedBC2Ev(i64* %3), !insn.addr !253
  %4 = icmp eq i64 %0, 0, !insn.addr !254
  br i1 %4, label %dec_label_pc_2e41, label %dec_label_pc_2e22, !insn.addr !255

dec_label_pc_2e22:                                ; preds = %dec_label_pc_2dc5
  %5 = load i64, i64* %1, align 8, !insn.addr !256
  %6 = add i64 %5, -8, !insn.addr !257
  %7 = inttoptr i64 %6 to i64*, !insn.addr !257
  %8 = load i64, i64* %7, align 8, !insn.addr !257
  %9 = inttoptr i64 %8 to i64*, !insn.addr !258
  %10 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %9, i64* nonnull @global_var_8b98), !insn.addr !258
  %11 = trunc i64 %10 to i8, !insn.addr !259
  %12 = icmp eq i8 %11, 0, !insn.addr !259
  store i32 0, i32* %stack_var_-60.0.reg2mem, !insn.addr !260
  br i1 %12, label %dec_label_pc_2e4a, label %dec_label_pc_2e46, !insn.addr !260

dec_label_pc_2e41:                                ; preds = %dec_label_pc_2dc5
  %13 = call i64 @__cxa_bad_typeid(), !insn.addr !261
  br label %dec_label_pc_2e46, !insn.addr !261

dec_label_pc_2e46:                                ; preds = %dec_label_pc_2e22, %dec_label_pc_2e41
  store i32 10, i32* %stack_var_-60.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_2e4a, !insn.addr !262

dec_label_pc_2e4a:                                ; preds = %dec_label_pc_2e46, %dec_label_pc_2e22
  %stack_var_-60.0.reload = load i32, i32* %stack_var_-60.0.reg2mem
  %14 = icmp eq i64 %2, 0, !insn.addr !263
  br i1 %14, label %dec_label_pc_2e72, label %dec_label_pc_2e53, !insn.addr !264

dec_label_pc_2e53:                                ; preds = %dec_label_pc_2e4a
  %15 = load i64, i64* %3, align 8, !insn.addr !265
  %16 = add i64 %15, -8, !insn.addr !266
  %17 = inttoptr i64 %16 to i64*, !insn.addr !266
  %18 = load i64, i64* %17, align 8, !insn.addr !266
  %19 = inttoptr i64 %18 to i64*, !insn.addr !267
  %20 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %19, i64* nonnull @global_var_8b80), !insn.addr !267
  %21 = trunc i64 %20 to i8, !insn.addr !268
  %22 = icmp eq i8 %21, 0, !insn.addr !268
  store i32 %stack_var_-60.0.reload, i32* %stack_var_-60.1.reg2mem, !insn.addr !269
  br i1 %22, label %dec_label_pc_2e7b, label %dec_label_pc_2e77, !insn.addr !269

dec_label_pc_2e72:                                ; preds = %dec_label_pc_2e4a
  %23 = call i64 @__cxa_bad_typeid(), !insn.addr !270
  br label %dec_label_pc_2e77, !insn.addr !270

dec_label_pc_2e77:                                ; preds = %dec_label_pc_2e53, %dec_label_pc_2e72
  %24 = or i32 %stack_var_-60.0.reload, 20, !insn.addr !271
  store i32 %24, i32* %stack_var_-60.1.reg2mem, !insn.addr !271
  br label %dec_label_pc_2e7b, !insn.addr !271

dec_label_pc_2e7b:                                ; preds = %dec_label_pc_2e77, %dec_label_pc_2e53
  %stack_var_-60.1.reload = load i32, i32* %stack_var_-60.1.reg2mem
  store i32 %stack_var_-60.1.reload, i32* %stack_var_-60.2.reg2mem, !insn.addr !272
  br i1 %4, label %dec_label_pc_2ec0, label %dec_label_pc_2ea6, !insn.addr !272

dec_label_pc_2ea6:                                ; preds = %dec_label_pc_2e7b
  %25 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_8bb0, i64* nonnull @global_var_8b98, i64 0), !insn.addr !273
  %26 = icmp eq i64 %25, 0, !insn.addr !274
  store i32 %stack_var_-60.1.reload, i32* %stack_var_-60.2.reg2mem, !insn.addr !275
  br i1 %26, label %dec_label_pc_2ec0, label %dec_label_pc_2eb1, !insn.addr !275

dec_label_pc_2eb1:                                ; preds = %dec_label_pc_2ea6
  %27 = inttoptr i64 %25 to i64*, !insn.addr !276
  %28 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %27), !insn.addr !276
  %29 = trunc i64 %28 to i32, !insn.addr !277
  %30 = add i32 %stack_var_-60.1.reload, %29, !insn.addr !277
  store i32 %30, i32* %stack_var_-60.2.reg2mem, !insn.addr !277
  br label %dec_label_pc_2ec0, !insn.addr !277

dec_label_pc_2ec0:                                ; preds = %dec_label_pc_2e7b, %dec_label_pc_2eb1, %dec_label_pc_2ea6
  %stack_var_-60.2.reload = load i32, i32* %stack_var_-60.2.reg2mem
  store i32 %stack_var_-60.2.reload, i32* %stack_var_-60.3.reg2mem, !insn.addr !278
  br i1 %14, label %dec_label_pc_2f05, label %dec_label_pc_2eeb, !insn.addr !278

dec_label_pc_2eeb:                                ; preds = %dec_label_pc_2ec0
  %31 = call i64 @__dynamic_cast(i64 %2, i64* nonnull @global_var_8bb0, i64* nonnull @global_var_8b80, i64 0), !insn.addr !279
  %32 = icmp eq i64 %31, 0, !insn.addr !280
  store i32 %stack_var_-60.2.reload, i32* %stack_var_-60.3.reg2mem, !insn.addr !281
  br i1 %32, label %dec_label_pc_2f05, label %dec_label_pc_2ef6, !insn.addr !281

dec_label_pc_2ef6:                                ; preds = %dec_label_pc_2eeb
  %33 = inttoptr i64 %31 to i64*, !insn.addr !282
  %34 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %33), !insn.addr !282
  %35 = trunc i64 %34 to i32, !insn.addr !283
  %36 = add i32 %stack_var_-60.2.reload, %35, !insn.addr !283
  store i32 %36, i32* %stack_var_-60.3.reg2mem, !insn.addr !283
  br label %dec_label_pc_2f05, !insn.addr !283

dec_label_pc_2f05:                                ; preds = %dec_label_pc_2ec0, %dec_label_pc_2ef6, %dec_label_pc_2eeb
  %stack_var_-60.3.reload = load i32, i32* %stack_var_-60.3.reg2mem
  br i1 %4, label %dec_label_pc_2f3a, label %dec_label_pc_2f0e, !insn.addr !284

dec_label_pc_2f0e:                                ; preds = %dec_label_pc_2f05
  %37 = load i64, i64* %1, align 8, !insn.addr !285
  %38 = add i64 %37, -8, !insn.addr !286
  %39 = inttoptr i64 %38 to i64*, !insn.addr !286
  %40 = load i64, i64* %39, align 8, !insn.addr !286
  %41 = inttoptr i64 %40 to i64*, !insn.addr !287
  %42 = call i64 @_ZNKSt9type_info4nameEv(i64* %41), !insn.addr !287
  %43 = inttoptr i64 %42 to i8*, !insn.addr !288
  %44 = call i32 @strlen(i8* %43), !insn.addr !288
  %45 = add i32 %44, %stack_var_-60.3.reload, !insn.addr !289
  store i32 %45, i32* %stack_var_-60.4.reg2mem
  br label %dec_label_pc_2f4e

dec_label_pc_2f3a:                                ; preds = %dec_label_pc_2f05
  %46 = call i64 @__cxa_bad_typeid(), !insn.addr !290
  store i32 %stack_var_-60.3.reload, i32* %stack_var_-60.4.reg2mem, !insn.addr !290
  br label %dec_label_pc_2f4e, !insn.addr !290

dec_label_pc_2f4e:                                ; preds = %dec_label_pc_2f0e, %dec_label_pc_2f3a
  %stack_var_-60.4.reload = load i32, i32* %stack_var_-60.4.reg2mem
  ret i32 %stack_var_-60.4.reload, !insn.addr !291

; uselistorder directives
  uselistorder i64 %31, { 1, 0 }
  uselistorder i32 %stack_var_-60.2.reload, { 2, 1, 0 }
  uselistorder i64 %25, { 1, 0 }
  uselistorder i32 %stack_var_-60.1.reload, { 2, 1, 0 }
  uselistorder i32 %stack_var_-60.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-60.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-60.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-60.2.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-60.3.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-60.4.reg2mem, { 0, 2, 1 }
  uselistorder i64 (i64, i64*, i64*, i64)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i64 ()* @__cxa_bad_typeid, { 2, 1, 0, 3 }
  uselistorder i64 (i64*, i64*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i64 (i64)* @_Znwm, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_2f4e, { 1, 0 }
  uselistorder label %dec_label_pc_2f05, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2ec0, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2e77, { 1, 0 }
  uselistorder label %dec_label_pc_2e46, { 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2f6f:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_5040 to i8*)), !insn.addr !292
  %1 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !293
  %2 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5064 to i8*)), !insn.addr !294
  %3 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !295
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5082 to i8*)), !insn.addr !296
  %5 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !297
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_509e to i8*)), !insn.addr !298
  %7 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !299
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50ba to i8*)), !insn.addr !300
  %9 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !301
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d6 to i8*)), !insn.addr !302
  %11 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !303
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50f3 to i8*)), !insn.addr !304
  %13 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !305
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_510f to i8*)), !insn.addr !306
  %15 = call i32 @_Z23test_cpp_template_classv(), !insn.addr !307
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_512b to i8*)), !insn.addr !308
  %17 = call i32 @_Z15test_cpp_lambdav(), !insn.addr !309
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5147 to i8*)), !insn.addr !310
  %19 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !311
  %20 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5163 to i8*)), !insn.addr !312
  %21 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !313
  %22 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5180 to i8*)), !insn.addr !314
  %23 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !315
  %24 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_519d to i8*)), !insn.addr !316
  ret void, !insn.addr !317

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_30cd:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !318
  ret i32 0, !insn.addr !319
}

define i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30e2:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3), !insn.addr !320
  ret i64 %0, !insn.addr !321
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* %result, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_3110:
  %0 = bitcast i64* %arg3 to i64**, !insn.addr !322
  %1 = call i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %0), !insn.addr !322
  ret i64 %1, !insn.addr !323
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_313e:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !324
  %1 = inttoptr i64 %0 to i64*, !insn.addr !325
  %2 = load i64, i64* %1, align 8, !insn.addr !325
  %3 = icmp eq i64 %2, 0, !insn.addr !326
  br i1 %3, label %dec_label_pc_3190, label %dec_label_pc_3167, !insn.addr !327

dec_label_pc_3167:                                ; preds = %dec_label_pc_313e
  %4 = inttoptr i64 %0 to i32***, !insn.addr !328
  %5 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result), !insn.addr !329
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !330
  %7 = load i64, i64* %6, align 8, !insn.addr !331
  %8 = inttoptr i64 %5 to i64*, !insn.addr !332
  %9 = inttoptr i64 %7 to i32*, !insn.addr !332
  %10 = call i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i64* %8, i32* %9), !insn.addr !332
  br label %dec_label_pc_3190, !insn.addr !332

dec_label_pc_3190:                                ; preds = %dec_label_pc_3167, %dec_label_pc_313e
  store i64 0, i64* %1, align 8, !insn.addr !333
  ret i64 %0, !insn.addr !334
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_31a2:
  %0 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result), !insn.addr !335
  ret i64 %0, !insn.addr !336
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_31c4:
  %stack_var_-40 = alloca i32*, align 8
  store i32* %arg2, i32** %stack_var_-40, align 8, !insn.addr !337
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !338
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !338
  %2 = bitcast i32** %stack_var_-40 to i32***, !insn.addr !339
  %3 = call i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i64* %result, i32*** nonnull %2, i64** %1), !insn.addr !339
  ret i64 %3, !insn.addr !340

; uselistorder directives
  uselistorder i32** %stack_var_-40, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3202:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !341
  %1 = ptrtoint i64* %0 to i64, !insn.addr !341
  ret i64 %1, !insn.addr !342
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_321c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result), !insn.addr !343
  ret i64 %0, !insn.addr !344
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3236:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !345
  ret i64 %0, !insn.addr !346
}

define i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_3250:
  %0 = bitcast i64* %arg1 to i64**, !insn.addr !347
  ret i64** %0, !insn.addr !347
}

define i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i64* %result, i32*** %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_325e:
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !348
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !348
  %2 = ptrtoint i64** %1 to i64, !insn.addr !348
  %3 = bitcast i32*** %arg2 to i64*, !insn.addr !349
  %4 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %3), !insn.addr !349
  %5 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i64* %result, i32*** %4, i64 %2), !insn.addr !350
  ret i64 %5, !insn.addr !351
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_32ac:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !352
  %1 = bitcast i32** %0 to i64*, !insn.addr !353
  ret i64* %1, !insn.addr !353
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_32c6:
  %0 = call i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !354
  %1 = ptrtoint i64* %0 to i64, !insn.addr !354
  ret i64 %1, !insn.addr !355
}

define i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_32e0:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %result), !insn.addr !356
  %1 = load i64, i64* %0, align 8, !insn.addr !357
  ret i64 %1, !insn.addr !358
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i64* %result, i32*** %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_32fe:
  %0 = inttoptr i64 %arg3 to i64*, !insn.addr !359
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !359
  %2 = bitcast i64** %1 to i64*, !insn.addr !360
  %3 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %2), !insn.addr !360
  %4 = bitcast i32*** %arg2 to i64*, !insn.addr !361
  %5 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %4), !insn.addr !361
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %5), !insn.addr !362
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !363

; uselistorder directives
  uselistorder i64** (i64*)* @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE, { 2, 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_3353:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1), !insn.addr !364
  %1 = inttoptr i64 %0 to i32**, !insn.addr !365
  ret i32** %1, !insn.addr !365
}

define i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_336d:
  %0 = call i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !366
  ret i64* %0, !insn.addr !367
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3387:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !368
  %1 = bitcast i32** %0 to i64*, !insn.addr !369
  ret i64* %1, !insn.addr !369
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_33a2:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %result, i64* %arg2), !insn.addr !370
  ret i64 %0, !insn.addr !371
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_33c8:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !372
  ret i64 %0, !insn.addr !373
}

define i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_33e2:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1), !insn.addr !374
  %1 = inttoptr i64 %0 to i64*, !insn.addr !375
  ret i64* %1, !insn.addr !375
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_33fc:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1), !insn.addr !376
  %1 = inttoptr i64 %0 to i32**, !insn.addr !377
  ret i32** %1, !insn.addr !377
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3416:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !378
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3425:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1), !insn.addr !379
  ret i64 %0, !insn.addr !380
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_343f:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !381
  ret i64 %0, !insn.addr !382
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3459:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !383
}

define void @__static_initialization_and_destruction_0(i32 %__initialize_p, i32 %__priority) local_unnamed_addr {
dec_label_pc_3467:
  %0 = icmp eq i32 %__initialize_p, 1, !insn.addr !384
  %1 = icmp eq i32 %__priority, 65535, !insn.addr !385
  %2 = icmp eq i1 %0, %1
  br i1 %2, label %dec_label_pc_3488, label %dec_label_pc_34ba, !insn.addr !386

dec_label_pc_3488:                                ; preds = %dec_label_pc_3467
  %3 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !387
  %4 = load i64, i64* inttoptr (i64 36856 to i64*), align 8, !insn.addr !388
  %5 = inttoptr i64 %4 to void (i64*)*, !insn.addr !389
  %6 = call i32 @__cxa_atexit(void (i64*)* %5, i64* nonnull @global_var_9038, i64* nonnull @global_var_9008), !insn.addr !389
  br label %dec_label_pc_34ba, !insn.addr !389

dec_label_pc_34ba:                                ; preds = %dec_label_pc_3467, %dec_label_pc_3488
  ret void, !insn.addr !390

; uselistorder directives
  uselistorder label %dec_label_pc_34ba, { 1, 0 }
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_34bd:
  call void @__static_initialization_and_destruction_0(i32 1, i32 65535), !insn.addr !391
  ret void, !insn.addr !392

; uselistorder directives
  uselistorder i32 65535, { 1, 0 }
}

define i64 @_ZNKSt9type_info4nameEv(i64* %result) local_unnamed_addr {
dec_label_pc_34d6:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !393
  %2 = inttoptr i64 %1 to i64*, !insn.addr !393
  %3 = load i64, i64* %2, align 8, !insn.addr !393
  %4 = inttoptr i64 %3 to i8*, !insn.addr !394
  %5 = load i8, i8* %4, align 1, !insn.addr !394
  %6 = icmp eq i8 %5, 42, !insn.addr !395
  %7 = zext i1 %6 to i64
  %storemerge = add i64 %3, %7
  ret i64 %storemerge, !insn.addr !396
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_350a:
  %storemerge.reg2mem = alloca i64, !insn.addr !397
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 8, !insn.addr !398
  %3 = inttoptr i64 %2 to i64*, !insn.addr !398
  %4 = load i64, i64* %3, align 8, !insn.addr !398
  %5 = add i64 %0, 8, !insn.addr !399
  %6 = inttoptr i64 %5 to i64*, !insn.addr !399
  %7 = load i64, i64* %6, align 8, !insn.addr !399
  %8 = icmp eq i64 %4, %7, !insn.addr !400
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !401
  br i1 %8, label %dec_label_pc_356d, label %dec_label_pc_3533, !insn.addr !401

dec_label_pc_3533:                                ; preds = %dec_label_pc_350a
  %9 = inttoptr i64 %4 to i8*, !insn.addr !402
  %10 = load i8, i8* %9, align 1, !insn.addr !402
  %11 = icmp eq i8 %10, 42, !insn.addr !403
  br i1 %11, label %dec_label_pc_3568, label %dec_label_pc_3542, !insn.addr !404

dec_label_pc_3542:                                ; preds = %dec_label_pc_3533
  %12 = inttoptr i64 %7 to i8*, !insn.addr !405
  %13 = call i32 @strcmp(i8* %9, i8* %12), !insn.addr !405
  %14 = icmp eq i32 %13, 0, !insn.addr !406
  %15 = icmp eq i1 %14, false, !insn.addr !407
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !407
  br i1 %15, label %dec_label_pc_3568, label %dec_label_pc_356d, !insn.addr !407

dec_label_pc_3568:                                ; preds = %dec_label_pc_3542, %dec_label_pc_3533
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !408
  br label %dec_label_pc_356d, !insn.addr !408

dec_label_pc_356d:                                ; preds = %dec_label_pc_350a, %dec_label_pc_3542, %dec_label_pc_3568
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !409

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_356d, { 2, 1, 0 }
}

define void @_ZN11SimpleClassC2EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_3570:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !410
  store i32 %arg2, i32* %1, align 4, !insn.addr !410
  %2 = add i64 %0, 4, !insn.addr !411
  %3 = inttoptr i64 %2 to i8*, !insn.addr !412
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !412
  %5 = add i64 %0, 35, !insn.addr !413
  %6 = inttoptr i64 %5 to i8*, !insn.addr !413
  store i8 0, i8* %6, align 1, !insn.addr !413
  ret void, !insn.addr !414

; uselistorder directives
  uselistorder i8 0, { 4, 1, 2, 3, 0 }
}

define i64 @_ZNK11SimpleClass8getValueEv(i64* %result) local_unnamed_addr {
dec_label_pc_35b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !415
  ret i64 %2, !insn.addr !416
}

define i64 @_ZN11SimpleClass8setValueEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_35cc:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !417
  store i32 %arg2, i32* %1, align 4, !insn.addr !417
  ret i64 %0, !insn.addr !418
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_35e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !419
  %5 = add i64 %2, 4, !insn.addr !420
  %6 = inttoptr i64 %5 to i8*, !insn.addr !421
  %7 = call i32 @strlen(i8* %6), !insn.addr !421
  %8 = add i32 %7, %4, !insn.addr !422
  %9 = zext i32 %8 to i64, !insn.addr !422
  ret i64 %9, !insn.addr !423
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_3620:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !424
}

define void @_ZN14LifecycleClassC2Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3630:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !425
  %rdi.1.reg2mem = alloca i64, !insn.addr !425
  %rdi.0.reg2mem = alloca i64, !insn.addr !425
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !425
  %.pre-phi.reg2mem = alloca i64, !insn.addr !425
  %1 = ptrtoint i64* %result to i64
  %2 = load i32, i32* %0
  %3 = add i64 %1, 8, !insn.addr !426
  %4 = inttoptr i64 %3 to i64*, !insn.addr !426
  store i64 %arg2, i64* %4, align 8, !insn.addr !426
  %5 = icmp ult i64 %arg2, 2305843009213693951
  br i1 %5, label %dec_label_pc_3663, label %dec_label_pc_3683, !insn.addr !427

dec_label_pc_3663:                                ; preds = %dec_label_pc_3630
  %6 = mul i64 %arg2, 4, !insn.addr !428
  %7 = call i64 @_Znam(i64 %6), !insn.addr !429
  store i64 %7, i64* %result, align 8, !insn.addr !430
  store i64 %6, i64* %rdi.1.reg2mem, !insn.addr !431
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !431
  br label %dec_label_pc_36b4, !insn.addr !431

dec_label_pc_3683:                                ; preds = %dec_label_pc_3630
  %8 = call i64 @__cxa_throw_bad_array_new_length(), !insn.addr !432
  %.pre = sext i32 %2 to i64, !insn.addr !433
  store i64 %.pre, i64* %.pre-phi.reg2mem, !insn.addr !432
  store i64 %1, i64* %rdi.0.reg2mem, !insn.addr !432
  br label %dec_label_pc_3688, !insn.addr !432

dec_label_pc_3688:                                ; preds = %dec_label_pc_36b4, %dec_label_pc_3683
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  %9 = mul i32 %stack_var_-16.0.reload, 10, !insn.addr !434
  %10 = mul i64 %.pre-phi.reload, 4, !insn.addr !435
  %11 = add i64 %rdi.0.reload, %10, !insn.addr !436
  %12 = inttoptr i64 %11 to i32*, !insn.addr !437
  store i32 %9, i32* %12, align 4, !insn.addr !437
  %13 = add i32 %stack_var_-16.0.reload, 1, !insn.addr !438
  store i64 %rdi.0.reload, i64* %rdi.1.reg2mem, !insn.addr !438
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !438
  br label %dec_label_pc_36b4, !insn.addr !438

dec_label_pc_36b4:                                ; preds = %dec_label_pc_3688, %dec_label_pc_3663
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %14 = sext i32 %storemerge.reload to i64
  %15 = icmp ult i64 %14, %arg2, !insn.addr !439
  store i64 %14, i64* %.pre-phi.reg2mem, !insn.addr !440
  store i32 %storemerge.reload, i32* %stack_var_-16.0.reg2mem, !insn.addr !440
  store i64 %rdi.1.reload, i64* %rdi.0.reg2mem, !insn.addr !440
  br i1 %15, label %dec_label_pc_3688, label %dec_label_pc_36be, !insn.addr !440

dec_label_pc_36be:                                ; preds = %dec_label_pc_36b4
  store i32 ptrtoint (i32* @global_var_9035 to i32), i32* @global_var_9034, align 4, !insn.addr !441
  ret void, !insn.addr !442

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 1, 0 }
  uselistorder i32 %stack_var_-16.0.reload, { 1, 0 }
  uselistorder i64* %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.0.reg2mem, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 10, { 2, 0, 3, 4, 6, 1, 5 }
  uselistorder i64 %arg2, { 1, 0, 2, 3 }
}

define void @_ZN14LifecycleClassD2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_36d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !443
  br i1 %2, label %dec_label_pc_36fb, label %dec_label_pc_36ec, !insn.addr !444

dec_label_pc_36ec:                                ; preds = %dec_label_pc_36d0
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !445
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !445
  br label %dec_label_pc_36fb, !insn.addr !445

dec_label_pc_36fb:                                ; preds = %dec_label_pc_36ec, %dec_label_pc_36d0
  %5 = load i32, i32* @global_var_9034, align 4, !insn.addr !446
  %6 = add i32 %5, -1, !insn.addr !447
  store i32 %6, i32* @global_var_9034, align 4, !insn.addr !448
  ret void, !insn.addr !449
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_370e:
  %storemerge.reg2mem = alloca i64, !insn.addr !450
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !451
  %2 = inttoptr i64 %1 to i64*, !insn.addr !451
  %3 = load i64, i64* %2, align 8, !insn.addr !451
  %4 = icmp ugt i64 %3, %arg2, !insn.addr !452
  %5 = icmp eq i1 %4, false, !insn.addr !453
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !453
  br i1 %5, label %dec_label_pc_3747, label %dec_label_pc_372c, !insn.addr !453

dec_label_pc_372c:                                ; preds = %dec_label_pc_370e
  %6 = mul i64 %arg2, 4, !insn.addr !454
  %7 = add i64 %6, %0, !insn.addr !455
  %8 = inttoptr i64 %7 to i32*, !insn.addr !456
  %9 = load i32, i32* %8, align 4, !insn.addr !456
  %10 = zext i32 %9 to i64, !insn.addr !456
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !457
  br label %dec_label_pc_3747, !insn.addr !457

dec_label_pc_3747:                                ; preds = %dec_label_pc_370e, %dec_label_pc_372c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !458

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3747, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_3749:
  %0 = load i32, i32* @global_var_9034, align 4, !insn.addr !459
  %1 = zext i32 %0 to i64, !insn.addr !459
  ret i64 %1, !insn.addr !460

; uselistorder directives
  uselistorder i32* @global_var_9034, { 3, 2, 1, 0 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_375a:
  %0 = add i32 %arg2, 1, !insn.addr !461
  %1 = zext i32 %0 to i64, !insn.addr !461
  ret i64 %1, !insn.addr !462
}

define i64 @_ZNK4Base7getNameEv(i64* %result) {
dec_label_pc_3772:
  ret i64 ptrtoint ([5 x i8]* @global_var_502d to i64), !insn.addr !463
}

define void @_ZN4BaseD2Ev(i64* %result) {
dec_label_pc_3788:
  store i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), i64* %result, align 8, !insn.addr !464
  ret void, !insn.addr !465
}

define void @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_37a6:
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !466
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !467
  ret void, !insn.addr !468
}

define void @_ZN4BaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_37d6:
  store i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), i64* %result, align 8, !insn.addr !469
  ret void, !insn.addr !470

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
  uselistorder %vtable_8b50_type* @global_var_8b50, { 1, 0 }
}

define void @_ZN7DerivedC2Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_37f4:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN4BaseC2Ev(i64* %result), !insn.addr !471
  store i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), i64* %result, align 8, !insn.addr !472
  %1 = add i64 %0, 8, !insn.addr !473
  %2 = inttoptr i64 %1 to i32*, !insn.addr !473
  store i32 %arg2, i32* %2, align 4, !insn.addr !473
  ret void, !insn.addr !474
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_382e:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !475
  %2 = inttoptr i64 %1 to i32*, !insn.addr !475
  %3 = load i32, i32* %2, align 4, !insn.addr !475
  %4 = mul i32 %3, %arg2, !insn.addr !476
  %5 = zext i32 %4 to i64, !insn.addr !476
  ret i64 %5, !insn.addr !477
}

define i64 @_ZNK7Derived7getNameEv(i64* %result) {
dec_label_pc_384a:
  ret i64 ptrtoint ([8 x i8]* @global_var_5032 to i64), !insn.addr !478
}

define i64 @_ZN5BaseA5funcAEv(i64* %result) {
dec_label_pc_3860:
  ret i64 10, !insn.addr !479
}

define void @_ZN5BaseAD2Ev(i64* %result) {
dec_label_pc_3874:
  store i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), i64* %result, align 8, !insn.addr !480
  ret void, !insn.addr !481
}

define void @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_3892:
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !482
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !483
  ret void, !insn.addr !484
}

define i64 @_ZN5BaseB5funcBEv(i64* %result) {
dec_label_pc_38c2:
  ret i64 20, !insn.addr !485
}

define void @_ZN5BaseBD2Ev(i64* %result) {
dec_label_pc_38d6:
  store i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), i64* %result, align 8, !insn.addr !486
  ret void, !insn.addr !487
}

define void @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_38f4:
  call void @_ZN5BaseBD2Ev(i64* %result), !insn.addr !488
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !489
  ret void, !insn.addr !490
}

define i64 @_ZN12MultiDerived5funcAEv(i64* %result) {
dec_label_pc_3924:
  ret i64 30, !insn.addr !491
}

define i64 @_ZN12MultiDerived5funcBEv(i64* %result) {
dec_label_pc_3938:
  ret i64 40, !insn.addr !492
}

define i64 @_ZThn16_N12MultiDerived5funcBEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_394b:
  %0 = add i64 %arg1, -16, !insn.addr !493
  %1 = inttoptr i64 %0 to i64*, !insn.addr !494
  %2 = call i64 @_ZN12MultiDerived5funcBEv(i64* %1), !insn.addr !494
  ret i64 %2, !insn.addr !494
}

define void @_ZN5BaseAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3956:
  store i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), i64* %result, align 8, !insn.addr !495
  ret void, !insn.addr !496

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), { 1, 0 }
}

define void @_ZN5BaseBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3974:
  store i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), i64* %result, align 8, !insn.addr !497
  ret void, !insn.addr !498

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), { 1, 0 }
}

define void @_ZN12MultiDerivedC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3992:
  %0 = ptrtoint i64* %result to i64
  call void @_ZN5BaseAC2Ev(i64* %result), !insn.addr !499
  %1 = add i64 %0, 16, !insn.addr !500
  %2 = inttoptr i64 %1 to i64*, !insn.addr !501
  call void @_ZN5BaseBC2Ev(i64* %2), !insn.addr !501
  store i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), i64* %result, align 8, !insn.addr !502
  store i64 ptrtoint (i64* @global_var_8aa8 to i64), i64* %2, align 8, !insn.addr !503
  ret void, !insn.addr !504
}

define i64 @_ZN11VirtualBase4funcEv(i64* %result) {
dec_label_pc_39de:
  ret i64 100, !insn.addr !505
}

define void @_ZN11VirtualBaseD2Ev(i64* %result) {
dec_label_pc_39f2:
  store i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), i64* %result, align 8, !insn.addr !506
  ret void, !insn.addr !507
}

define void @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_3a10:
  call void @_ZN11VirtualBaseD2Ev(i64* %result), !insn.addr !508
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !509
  ret void, !insn.addr !510
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_3a40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !511
  %2 = inttoptr i64 %1 to i64*, !insn.addr !512
  %3 = load i64, i64* %2, align 8, !insn.addr !512
  %4 = add i64 %0, 8, !insn.addr !513
  %5 = add i64 %4, %3, !insn.addr !514
  %6 = inttoptr i64 %5 to i32*, !insn.addr !514
  %7 = load i32, i32* %6, align 4, !insn.addr !514
  %8 = add i32 %7, 150, !insn.addr !515
  %9 = zext i32 %8 to i64, !insn.addr !515
  ret i64 %9, !insn.addr !516
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a6e:
  %0 = add i64 %arg1, -24, !insn.addr !517
  %1 = inttoptr i64 %0 to i64*, !insn.addr !517
  %2 = load i64, i64* %1, align 8, !insn.addr !517
  %3 = add i64 %2, %arg1, !insn.addr !517
  %4 = inttoptr i64 %3 to i64*, !insn.addr !518
  %5 = call i64 @_ZN7MiddleA4funcEv(i64* %4), !insn.addr !518
  ret i64 %5, !insn.addr !518

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleA4funcEv, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_3a7c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !519
  %2 = inttoptr i64 %1 to i64*, !insn.addr !520
  %3 = load i64, i64* %2, align 8, !insn.addr !520
  %4 = add i64 %0, 8, !insn.addr !521
  %5 = add i64 %4, %3, !insn.addr !522
  %6 = inttoptr i64 %5 to i32*, !insn.addr !522
  %7 = load i32, i32* %6, align 4, !insn.addr !522
  %8 = add i32 %7, 200, !insn.addr !523
  %9 = zext i32 %8 to i64, !insn.addr !523
  ret i64 %9, !insn.addr !524
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3aaa:
  %0 = add i64 %arg1, -24, !insn.addr !525
  %1 = inttoptr i64 %0 to i64*, !insn.addr !525
  %2 = load i64, i64* %1, align 8, !insn.addr !525
  %3 = add i64 %2, %arg1, !insn.addr !525
  %4 = inttoptr i64 %3 to i64*, !insn.addr !526
  %5 = call i64 @_ZN7MiddleB4funcEv(i64* %4), !insn.addr !526
  ret i64 %5, !insn.addr !526

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleB4funcEv, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_3ab8:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !527
  %2 = inttoptr i64 %1 to i64*, !insn.addr !528
  %3 = load i64, i64* %2, align 8, !insn.addr !528
  %4 = add i64 %0, 8, !insn.addr !529
  %5 = add i64 %4, %3, !insn.addr !530
  %6 = inttoptr i64 %5 to i32*, !insn.addr !530
  %7 = load i32, i32* %6, align 4, !insn.addr !530
  %8 = add i32 %7, 250, !insn.addr !531
  %9 = zext i32 %8 to i64, !insn.addr !531
  ret i64 %9, !insn.addr !532
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3ae6:
  %0 = add i64 %arg1, -24, !insn.addr !533
  %1 = inttoptr i64 %0 to i64*, !insn.addr !533
  %2 = load i64, i64* %1, align 8, !insn.addr !533
  %3 = add i64 %2, %arg1, !insn.addr !533
  %4 = inttoptr i64 %3 to i64*, !insn.addr !534
  %5 = call i64 @_ZN14DiamondDerived4funcEv(i64* %4), !insn.addr !534
  ret i64 %5, !insn.addr !534
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3af3:
  %0 = add i64 %arg1, -16, !insn.addr !535
  %1 = inttoptr i64 %0 to i64*, !insn.addr !536
  %2 = call i64 @_ZN14DiamondDerived4funcEv(i64* %1), !insn.addr !536
  ret i64 %2, !insn.addr !536
}

define void @_ZN11VirtualBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3afe:
  store i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), i64* %result, align 8, !insn.addr !537
  ret void, !insn.addr !538

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), { 1, 0 }
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3b1c:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !539
  %2 = add i64 %1, -24, !insn.addr !540
  %3 = inttoptr i64 %2 to i64*, !insn.addr !541
  %4 = load i64, i64* %3, align 8, !insn.addr !541
  %5 = add i64 %4, %1, !insn.addr !542
  %6 = add i64 %0, 8, !insn.addr !543
  %7 = inttoptr i64 %6 to i64*, !insn.addr !543
  %8 = load i64, i64* %7, align 8, !insn.addr !543
  %9 = inttoptr i64 %5 to i64*, !insn.addr !544
  store i64 %8, i64* %9, align 8, !insn.addr !544
  ret i64 %8, !insn.addr !545

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3b60:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !546
  %2 = add i64 %1, -24, !insn.addr !547
  %3 = inttoptr i64 %2 to i64*, !insn.addr !548
  %4 = load i64, i64* %3, align 8, !insn.addr !548
  %5 = add i64 %4, %1, !insn.addr !549
  %6 = add i64 %0, 8, !insn.addr !550
  %7 = inttoptr i64 %6 to i64*, !insn.addr !550
  %8 = load i64, i64* %7, align 8, !insn.addr !550
  %9 = inttoptr i64 %5 to i64*, !insn.addr !551
  store i64 %8, i64* %9, align 8, !insn.addr !551
  ret i64 %8, !insn.addr !552

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3ba4:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !553
  %2 = add i64 %1, -24, !insn.addr !554
  %3 = inttoptr i64 %2 to i64*, !insn.addr !555
  %4 = load i64, i64* %3, align 8, !insn.addr !555
  %5 = add i64 %4, %1, !insn.addr !556
  %6 = add i64 %0, 8, !insn.addr !557
  %7 = inttoptr i64 %6 to i64*, !insn.addr !557
  %8 = load i64, i64* %7, align 8, !insn.addr !557
  %9 = inttoptr i64 %5 to i64*, !insn.addr !558
  store i64 %8, i64* %9, align 8, !insn.addr !558
  ret i64 %8, !insn.addr !559

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3be8:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !560
  %2 = add i64 %1, -24, !insn.addr !561
  %3 = inttoptr i64 %2 to i64*, !insn.addr !562
  %4 = load i64, i64* %3, align 8, !insn.addr !562
  %5 = add i64 %4, %1, !insn.addr !563
  %6 = add i64 %0, 8, !insn.addr !564
  %7 = inttoptr i64 %6 to i64*, !insn.addr !564
  %8 = load i64, i64* %7, align 8, !insn.addr !564
  %9 = inttoptr i64 %5 to i64*, !insn.addr !565
  store i64 %8, i64* %9, align 8, !insn.addr !565
  ret i64 %8, !insn.addr !566

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 -24, { 0, 1, 2, 3, 7, 4, 8, 5, 9, 6 }
}

define void @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3c2c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !567
  %2 = inttoptr i64 %1 to i64*, !insn.addr !568
  call void @_ZN11VirtualBaseC2Ev(i64* %2), !insn.addr !568
  %3 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_8940), !insn.addr !569
  %4 = add i64 %0, 16, !insn.addr !570
  %5 = inttoptr i64 %4 to i64*, !insn.addr !571
  %6 = call i64 @_ZN7MiddleBC2Ev(i64* %5, i64* nonnull @global_var_8950), !insn.addr !571
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !572
  store i64 ptrtoint (i64* @global_var_8920 to i64), i64* %2, align 8, !insn.addr !573
  store i64 ptrtoint (i64* @global_var_88e8 to i64), i64* %5, align 8, !insn.addr !574
  ret void, !insn.addr !575
}

define void @_ZN5PointC2Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_3cae:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !576
  store i32 %arg2, i32* %1, align 4, !insn.addr !576
  %2 = add i64 %0, 4, !insn.addr !577
  %3 = inttoptr i64 %2 to i32*, !insn.addr !577
  store i32 %arg3, i32* %3, align 4, !insn.addr !577
  ret void, !insn.addr !578
}

define i64 @_ZNK5PointplERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3cd6:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !579
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i64* %arg2 to i64
  %4 = ptrtoint i64* %result to i64
  %stack_var_-24 = alloca i64, align 8
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !580
  %6 = add i64 %4, 4, !insn.addr !581
  %7 = inttoptr i64 %6 to i32*, !insn.addr !581
  %8 = load i32, i32* %7, align 4, !insn.addr !581
  %9 = add i64 %3, 4, !insn.addr !582
  %10 = inttoptr i64 %9 to i32*, !insn.addr !582
  %11 = load i32, i32* %10, align 4, !insn.addr !582
  %12 = add i32 %11, %8, !insn.addr !583
  %13 = trunc i64 %1 to i32
  %14 = trunc i64 %2 to i32
  %15 = add i32 %14, %13, !insn.addr !584
  call void @_ZN5PointC2Eii(i64* nonnull %stack_var_-24, i32 %15, i32 %12), !insn.addr !585
  %16 = load i64, i64* %stack_var_-24, align 8, !insn.addr !586
  %17 = call i64 @__readfsqword(i64 40), !insn.addr !587
  %18 = icmp eq i64 %5, %17, !insn.addr !587
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !588
  br i1 %18, label %dec_label_pc_3d3d, label %dec_label_pc_3d38, !insn.addr !588

dec_label_pc_3d38:                                ; preds = %dec_label_pc_3cd6
  call void @__stack_chk_fail(), !insn.addr !589
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !589
  br label %dec_label_pc_3d3d, !insn.addr !589

dec_label_pc_3d3d:                                ; preds = %dec_label_pc_3d38, %dec_label_pc_3cd6
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !590

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 6, 10, 9, 8, 7, 5, 4, 3, 2, 0, 1, 11 }
  uselistorder void (i64*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3d40:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !591
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !592
  %6 = icmp eq i1 %5, false, !insn.addr !593
  br i1 %6, label %dec_label_pc_3d79, label %dec_label_pc_3d60, !insn.addr !593

dec_label_pc_3d60:                                ; preds = %dec_label_pc_3d40
  %7 = ptrtoint i64* %result to i64
  %8 = ptrtoint i64* %arg2 to i64
  %9 = add i64 %7, 4, !insn.addr !594
  %10 = inttoptr i64 %9 to i32*, !insn.addr !594
  %11 = load i32, i32* %10, align 4, !insn.addr !594
  %12 = add i64 %8, 4, !insn.addr !595
  %13 = inttoptr i64 %12 to i32*, !insn.addr !595
  %14 = load i32, i32* %13, align 4, !insn.addr !595
  %15 = icmp eq i32 %11, %14, !insn.addr !596
  %16 = icmp eq i1 %15, false, !insn.addr !597
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !597
  br i1 %16, label %dec_label_pc_3d79, label %dec_label_pc_3d7e, !insn.addr !597

dec_label_pc_3d79:                                ; preds = %dec_label_pc_3d60, %dec_label_pc_3d40
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !598
  br label %dec_label_pc_3d7e, !insn.addr !598

dec_label_pc_3d7e:                                ; preds = %dec_label_pc_3d60, %dec_label_pc_3d79
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !599

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i1 false, { 2, 3, 4, 1, 0 }
  uselistorder label %dec_label_pc_3d7e, { 1, 0 }
}

define i64 @_ZN5PointppEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, 1, !insn.addr !600
  %5 = bitcast i64* %result to i32*, !insn.addr !601
  store i32 %4, i32* %5, align 4, !insn.addr !601
  %6 = add i64 %2, 4, !insn.addr !602
  %7 = inttoptr i64 %6 to i32*, !insn.addr !602
  %8 = load i32, i32* %7, align 4, !insn.addr !602
  %9 = add i32 %8, 1, !insn.addr !603
  store i32 %9, i32* %7, align 4, !insn.addr !604
  ret i64 %2, !insn.addr !605
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3db2:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !606
  %storemerge.in = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge.in, !insn.addr !607
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3dd2:
  %0 = alloca i1
  %storemerge.reg2mem = alloca i128, !insn.addr !608
  %1 = load i1, i1* %0
  %2 = load i1, i1* %0
  %3 = fptrunc double %arg2 to float
  %4 = bitcast float %3 to i32
  %5 = sext i32 %4 to i128
  %6 = fptrunc double %arg1 to float
  %7 = bitcast float %6 to i32
  %8 = sext i32 %7 to i128
  %9 = call i64 @__asm_movsd.13(i128 %8), !insn.addr !609
  %10 = call i64 @__asm_movsd.13(i128 %5), !insn.addr !610
  %11 = call i128 @__asm_movsd(i64 %9), !insn.addr !611
  %12 = sext i64 %10 to i128, !insn.addr !612
  call void @__asm_comisd(i128 %11, i128 %12), !insn.addr !612
  %13 = or i1 %1, %2, !insn.addr !613
  br i1 %13, label %dec_label_pc_3df7, label %dec_label_pc_3df0, !insn.addr !613

dec_label_pc_3df0:                                ; preds = %dec_label_pc_3dd2
  %14 = call i128 @__asm_movsd(i64 %9), !insn.addr !614
  store i128 %14, i128* %storemerge.reg2mem, !insn.addr !615
  br label %dec_label_pc_3dfc, !insn.addr !615

dec_label_pc_3df7:                                ; preds = %dec_label_pc_3dd2
  %15 = call i128 @__asm_movsd(i64 %10), !insn.addr !616
  store i128 %15, i128* %storemerge.reg2mem, !insn.addr !616
  br label %dec_label_pc_3dfc, !insn.addr !616

dec_label_pc_3dfc:                                ; preds = %dec_label_pc_3df7, %dec_label_pc_3df0
  %storemerge.reload = load i128, i128* %storemerge.reg2mem
  %16 = call i64 @__asm_movq.12(i128 %storemerge.reload), !insn.addr !617
  %17 = call i128 @__asm_movq(i64 %16), !insn.addr !618
  %18 = trunc i128 %17 to i64, !insn.addr !619
  %19 = bitcast i64 %18 to double, !insn.addr !619
  ret double %19, !insn.addr !619

; uselistorder directives
  uselistorder i128* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_3e08:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !620
  store i32 %3, i32* %arg2, align 4, !insn.addr !621
  ret void, !insn.addr !622

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define void @_ZN9ContainerIiEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3e3a:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !623
  %2 = inttoptr i64 %1 to i32*, !insn.addr !623
  store i32 0, i32* %2, align 4, !insn.addr !623
  ret void, !insn.addr !624
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3e54:
  %rax.0.reg2mem = alloca i64, !insn.addr !625
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !626
  %2 = inttoptr i64 %1 to i32*, !insn.addr !626
  %3 = load i32, i32* %2, align 4, !insn.addr !626
  %4 = zext i32 %3 to i64, !insn.addr !626
  %5 = icmp sgt i32 %3, 9, !insn.addr !627
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !627
  br i1 %5, label %dec_label_pc_3e8c, label %dec_label_pc_3e6f, !insn.addr !627

dec_label_pc_3e6f:                                ; preds = %dec_label_pc_3e54
  %6 = add i32 %3, 1, !insn.addr !628
  store i32 %6, i32* %2, align 4, !insn.addr !629
  %7 = sext i32 %3 to i64, !insn.addr !630
  %8 = mul i64 %7, 4, !insn.addr !631
  %9 = add i64 %8, %0, !insn.addr !631
  %10 = inttoptr i64 %9 to i32*, !insn.addr !631
  store i32 %arg2, i32* %10, align 4, !insn.addr !631
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !631
  br label %dec_label_pc_3e8c, !insn.addr !631

dec_label_pc_3e8c:                                ; preds = %dec_label_pc_3e6f, %dec_label_pc_3e54
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !632

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2, 3 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3e90:
  %storemerge.reg2mem = alloca i64, !insn.addr !633
  %0 = icmp slt i32 %arg2, 0, !insn.addr !634
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !635
  br i1 %0, label %dec_label_pc_3ec5, label %dec_label_pc_3ea5, !insn.addr !635

dec_label_pc_3ea5:                                ; preds = %dec_label_pc_3e90
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !636
  %3 = inttoptr i64 %2 to i32*, !insn.addr !636
  %4 = load i32, i32* %3, align 4, !insn.addr !636
  %5 = zext i32 %4 to i64, !insn.addr !636
  %6 = sext i32 %arg2 to i64, !insn.addr !637
  %7 = icmp slt i64 %6, %5, !insn.addr !637
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !637
  br i1 %7, label %dec_label_pc_3eb1, label %dec_label_pc_3ec5, !insn.addr !637

dec_label_pc_3eb1:                                ; preds = %dec_label_pc_3ea5
  %8 = mul i64 %6, 4, !insn.addr !638
  %9 = add i64 %8, %1, !insn.addr !638
  %10 = inttoptr i64 %9 to i32*, !insn.addr !638
  %11 = load i32, i32* %10, align 4, !insn.addr !638
  %12 = zext i32 %11 to i64, !insn.addr !638
  store i64 %12, i64* %storemerge.reg2mem, !insn.addr !639
  br label %dec_label_pc_3ec5, !insn.addr !639

dec_label_pc_3ec5:                                ; preds = %dec_label_pc_3e90, %dec_label_pc_3ea5, %dec_label_pc_3eb1
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !640

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3ec5, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ec8:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !641
  %2 = inttoptr i64 %1 to i32*, !insn.addr !641
  %3 = load i32, i32* %2, align 4, !insn.addr !641
  %4 = zext i32 %3 to i64, !insn.addr !641
  ret i64 %4, !insn.addr !642

; uselistorder directives
  uselistorder i64 40, { 23, 24, 25, 26, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 }
}

define void @_ZN9ContainerIdEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ede:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !643
  %2 = inttoptr i64 %1 to i32*, !insn.addr !643
  store i32 0, i32* %2, align 4, !insn.addr !643
  ret void, !insn.addr !644
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3ef8:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !645
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = call i64 @__asm_movsd.13(i128 %1), !insn.addr !646
  %4 = add i64 %2, 80, !insn.addr !647
  %5 = inttoptr i64 %4 to i32*, !insn.addr !647
  %6 = load i32, i32* %5, align 4, !insn.addr !647
  %7 = zext i32 %6 to i64, !insn.addr !647
  %8 = icmp sgt i32 %6, 9, !insn.addr !648
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !648
  br i1 %8, label %dec_label_pc_3f36, label %dec_label_pc_3f15, !insn.addr !648

dec_label_pc_3f15:                                ; preds = %dec_label_pc_3ef8
  %9 = call i128 @__asm_movsd(i64 %3), !insn.addr !649
  %10 = load i32, i32* %5, align 4, !insn.addr !650
  %11 = add i32 %10, 1, !insn.addr !651
  store i32 %11, i32* %5, align 4, !insn.addr !652
  %12 = sext i32 %10 to i64, !insn.addr !653
  %13 = call i64 @__asm_movsd.13(i128 %9), !insn.addr !654
  %14 = mul i64 %12, 8, !insn.addr !654
  %15 = add i64 %14, %2, !insn.addr !654
  %16 = inttoptr i64 %15 to i64*, !insn.addr !654
  store i64 %13, i64* %16, align 8, !insn.addr !654
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !654
  br label %dec_label_pc_3f36, !insn.addr !654

dec_label_pc_3f36:                                ; preds = %dec_label_pc_3f15, %dec_label_pc_3ef8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !655

; uselistorder directives
  uselistorder i32* %5, { 1, 0, 2 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3f3a:
  %0 = alloca i128
  %storemerge.reg2mem = alloca i128, !insn.addr !656
  %1 = load i128, i128* %0
  %2 = icmp slt i32 %arg2, 0, !insn.addr !657
  br i1 %2, label %dec_label_pc_3f6c, label %dec_label_pc_3f4f, !insn.addr !658

dec_label_pc_3f4f:                                ; preds = %dec_label_pc_3f3a
  %3 = ptrtoint i64* %result to i64
  %4 = add i64 %3, 80, !insn.addr !659
  %5 = inttoptr i64 %4 to i32*, !insn.addr !659
  %6 = load i32, i32* %5, align 4, !insn.addr !659
  %7 = zext i32 %6 to i64, !insn.addr !659
  %8 = sext i32 %arg2 to i64, !insn.addr !660
  %9 = icmp slt i64 %8, %7, !insn.addr !660
  br i1 %9, label %dec_label_pc_3f5b, label %dec_label_pc_3f6c, !insn.addr !660

dec_label_pc_3f5b:                                ; preds = %dec_label_pc_3f4f
  %10 = mul i64 %8, 8, !insn.addr !661
  %11 = add i64 %10, %3, !insn.addr !661
  %12 = inttoptr i64 %11 to i64*, !insn.addr !661
  %13 = load i64, i64* %12, align 8, !insn.addr !661
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !661
  store i128 %14, i128* %storemerge.reg2mem, !insn.addr !662
  br label %dec_label_pc_3f70, !insn.addr !662

dec_label_pc_3f6c:                                ; preds = %dec_label_pc_3f4f, %dec_label_pc_3f3a
  %15 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !663
  store i128 %15, i128* %storemerge.reg2mem, !insn.addr !663
  br label %dec_label_pc_3f70, !insn.addr !663

dec_label_pc_3f70:                                ; preds = %dec_label_pc_3f6c, %dec_label_pc_3f5b
  %storemerge.reload = load i128, i128* %storemerge.reg2mem
  %16 = call i64 @__asm_movq.12(i128 %storemerge.reload), !insn.addr !664
  %17 = call i128 @__asm_movq(i64 %16), !insn.addr !665
  ret i128 %17, !insn.addr !666

; uselistorder directives
  uselistorder i128* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i128 (i64)* @__asm_movq, { 0, 2, 1, 3 }
  uselistorder i64 (i128)* @__asm_movq.12, { 0, 2, 1, 3 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 1, 3, 4, 5, 2, 6, 7 }
  uselistorder i32 0, { 11, 12, 13, 14, 0, 10, 2, 1, 3, 5, 6, 4, 7, 8, 9 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f7c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !667
  %2 = inttoptr i64 %1 to i32*, !insn.addr !667
  %3 = load i32, i32* %2, align 4, !insn.addr !667
  %4 = zext i32 %3 to i64, !insn.addr !667
  ret i64 %4, !insn.addr !668
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3f92:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !669
  ret void, !insn.addr !670
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3fbc:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !671
  ret void, !insn.addr !672
}

define i64 @_ZNK8RTTIBase7getTypeEv(i64* %result) {
dec_label_pc_3fe6:
  ret i64 0, !insn.addr !673
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv(i64* %result) {
dec_label_pc_3ffa:
  ret i64 1, !insn.addr !674

; uselistorder directives
  uselistorder i64 1, { 3, 0, 2, 1, 4 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_400e:
  ret i64 100, !insn.addr !675
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv(i64* %result) {
dec_label_pc_4022:
  ret i64 2, !insn.addr !676

; uselistorder directives
  uselistorder i64 2, { 1, 2, 0, 3 }
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_4036:
  ret i64 200, !insn.addr !677
}

define void @_ZN8RTTIBaseC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_404a:
  store i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), i64* %result, align 8, !insn.addr !678
  ret void, !insn.addr !679
}

define void @_ZN8RTTIBaseD2Ev(i64* %result) {
dec_label_pc_4068:
  store i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), i64* %result, align 8, !insn.addr !680
  ret void, !insn.addr !681

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), { 1, 0 }
}

define void @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_4086:
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !682
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !683
  ret void, !insn.addr !684
}

define void @_ZN12RTTIDerivedAC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_40b6:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !685
  store i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), i64* %result, align 8, !insn.addr !686
  ret void, !insn.addr !687
}

define void @_ZN12RTTIDerivedBC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_40e4:
  call void @_ZN8RTTIBaseC2Ev(i64* %result), !insn.addr !688
  store i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), i64* %result, align 8, !insn.addr !689
  ret void, !insn.addr !690

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4112:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2), !insn.addr !691
  ret void, !insn.addr !692
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_413c:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !693
  ret void, !insn.addr !694
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4166:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !695
  %1 = inttoptr i64 %0 to i64*, !insn.addr !696
  %2 = load i64, i64* %1, align 8, !insn.addr !696
  %3 = icmp eq i64 %2, 0, !insn.addr !697
  br i1 %3, label %dec_label_pc_41bc, label %dec_label_pc_4193, !insn.addr !698

dec_label_pc_4193:                                ; preds = %dec_label_pc_4166
  %4 = inttoptr i64 %0 to i32***, !insn.addr !699
  %5 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result), !insn.addr !700
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !701
  %7 = load i64, i64* %6, align 8, !insn.addr !702
  %8 = inttoptr i64 %5 to i64*, !insn.addr !703
  %9 = inttoptr i64 %7 to i32*, !insn.addr !703
  %10 = call i64 @_ZNKSt14default_deleteIiEclEPi(i64* %8, i32* %9), !insn.addr !703
  br label %dec_label_pc_41bc, !insn.addr !703

dec_label_pc_41bc:                                ; preds = %dec_label_pc_4193, %dec_label_pc_4166
  store i64 0, i64* %1, align 8, !insn.addr !704
  ret void, !insn.addr !705

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_41ce:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !706
  ret i64 %0, !insn.addr !707
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_41f3:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !708
  ret i64* %0, !insn.addr !708
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4206:
  %0 = ptrtoint i64* %arg2 to i64
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2), !insn.addr !709
  store i64 %0, i64* %result, align 8, !insn.addr !710
  ret void, !insn.addr !711
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_423e:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %arg2), !insn.addr !712
  ret void, !insn.addr !713
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4268:
  %0 = bitcast i64* %arg2 to i64**, !insn.addr !714
  %1 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %0), !insn.addr !714
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i64* %result, i64* %1), !insn.addr !715
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !716
  %3 = inttoptr i64 %2 to i64*, !insn.addr !717
  store i64 0, i64* %3, align 8, !insn.addr !717
  ret void, !insn.addr !718
}

define void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_42b2:
  call void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2), !insn.addr !719
  ret void, !insn.addr !720
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_42dc:
  call void @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !721
  ret void, !insn.addr !722
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4306:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !723
  %1 = inttoptr i64 %0 to i64*, !insn.addr !724
  %2 = load i64, i64* %1, align 8, !insn.addr !724
  %3 = icmp eq i64 %2, 0, !insn.addr !725
  br i1 %3, label %dec_label_pc_4353, label %dec_label_pc_4332, !insn.addr !726

dec_label_pc_4332:                                ; preds = %dec_label_pc_4306
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result), !insn.addr !727
  %5 = load i64, i64* %1, align 8, !insn.addr !728
  %6 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(i64 %4, i64 %5), !insn.addr !729
  br label %dec_label_pc_4353, !insn.addr !729

dec_label_pc_4353:                                ; preds = %dec_label_pc_4332, %dec_label_pc_4306
  store i64 0, i64* %1, align 8, !insn.addr !730
  ret void, !insn.addr !731

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_4362:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !732
  %1 = mul i64 %arg2, 4, !insn.addr !733
  %2 = add i64 %0, %1, !insn.addr !734
  ret i64 %2, !insn.addr !735
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_439a:
  call void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !736
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !737
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !738
  %2 = inttoptr i64 %1 to i64*, !insn.addr !739
  store i64 %0, i64* %2, align 8, !insn.addr !739
  ret void, !insn.addr !740

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_43d6:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !741
  %1 = ptrtoint i64* %0 to i64, !insn.addr !741
  ret i64 %1, !insn.addr !742
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_43f4:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !743
  ret i64 %0, !insn.addr !744
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_4412:
  %0 = bitcast i32*** %arg1 to i64*, !insn.addr !745
  ret i64* %0, !insn.addr !745
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4424:
  %rax.0.reg2mem = alloca i64, !insn.addr !746
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !747
  %1 = icmp eq i32* %arg2, null, !insn.addr !748
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !749
  br i1 %1, label %dec_label_pc_444e, label %dec_label_pc_4441, !insn.addr !749

dec_label_pc_4441:                                ; preds = %dec_label_pc_4424
  %2 = bitcast i32* %arg2 to i64*, !insn.addr !750
  %3 = call i64 @_ZdlPvm(i64* %2, i64 4), !insn.addr !750
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !750
  br label %dec_label_pc_444e, !insn.addr !750

dec_label_pc_444e:                                ; preds = %dec_label_pc_4441, %dec_label_pc_4424
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !751

; uselistorder directives
  uselistorder i64 4, { 6, 0, 1, 2, 12, 13, 14, 15, 16, 17, 3, 4, 5, 18, 19, 7, 11, 8, 9, 10 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4452:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !752
  ret i64 %0, !insn.addr !753
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_4470:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !754
  ret i64* %0, !insn.addr !754
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4482:
  ret void, !insn.addr !755
}

define void @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4496:
  call void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result), !insn.addr !756
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !757
  %1 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !758
  %2 = inttoptr i64 %1 to i64*, !insn.addr !759
  store i64 %0, i64* %2, align 8, !insn.addr !759
  ret void, !insn.addr !760

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_44d2:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !761
  %1 = ptrtoint i64* %0 to i64, !insn.addr !761
  ret i64 %1, !insn.addr !762
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_44f0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !763
  ret i64 %0, !insn.addr !764
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_450e:
  %rax.0.reg2mem = alloca i64, !insn.addr !765
  %0 = icmp eq i64 %arg2, 0, !insn.addr !766
  br i1 %0, label %dec_label_pc_4535, label %dec_label_pc_4529, !insn.addr !767

dec_label_pc_4529:                                ; preds = %dec_label_pc_450e
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !768
  %2 = and i64 %arg2, 4294967295
  %3 = inttoptr i64 %2 to i64*, !insn.addr !768
  call void @_ZdaPv(i64* %1, i64* %3), !insn.addr !768
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !768
  br label %dec_label_pc_4535, !insn.addr !768

dec_label_pc_4535:                                ; preds = %dec_label_pc_4529, %dec_label_pc_450e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !769

; uselistorder directives
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 0, 3, 1, 4, 5, 6 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4538:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !770
  ret i64 %0, !insn.addr !771
}

define void @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_4556:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !772
  ret void, !insn.addr !773
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4575:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !774
  %1 = bitcast i32** %0 to i64*, !insn.addr !775
  ret i64* %1, !insn.addr !775
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4594:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !776
  %1 = ptrtoint i64* %0 to i64, !insn.addr !776
  ret i64 %1, !insn.addr !777
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_45b2:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !778
  %1 = load i64, i64* %0, align 8, !insn.addr !779
  ret i64 %1, !insn.addr !780
}

define void @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_45d4:
  call void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !781
  ret void, !insn.addr !782
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_45f3:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !783
  %1 = bitcast i32** %0 to i64*, !insn.addr !784
  ret i64* %1, !insn.addr !784
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4612:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !785
  %1 = ptrtoint i64* %0 to i64, !insn.addr !785
  ret i64 %1, !insn.addr !786
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4630:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !787
  %1 = load i64, i64* %0, align 8, !insn.addr !788
  ret i64 %1, !insn.addr !789
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4652:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result), !insn.addr !790
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !791
  ret void, !insn.addr !792
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_467d:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !793
  %1 = inttoptr i64 %0 to i32**, !insn.addr !794
  ret i32** %1, !insn.addr !794
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_469b:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !795
  ret i64* %0, !insn.addr !796
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46b9:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !797
  %1 = bitcast i32** %0 to i64*, !insn.addr !798
  ret i64* %1, !insn.addr !798
}

define void @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_46d8:
  call void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result), !insn.addr !799
  call void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result), !insn.addr !800
  ret void, !insn.addr !801

; uselistorder directives
  uselistorder void (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev, { 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4703:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !802
  %1 = inttoptr i64 %0 to i32**, !insn.addr !803
  ret i32** %1, !insn.addr !803
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4721:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !804
  ret i64* %0, !insn.addr !805
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_473f:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !806
  %1 = bitcast i32** %0 to i64*, !insn.addr !807
  ret i64* %1, !insn.addr !807
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_475d:
  %0 = bitcast i64* %arg1 to i32***, !insn.addr !808
  ret i32*** %0, !insn.addr !808
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4770:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result), !insn.addr !809
  ret void, !insn.addr !810
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4790:
  store i64 0, i64* %result, align 8, !insn.addr !811
  ret void, !insn.addr !812

; uselistorder directives
  uselistorder i64 0, { 54, 55, 56, 57, 58, 59, 60, 5, 1, 0, 2, 3, 61, 62, 48, 35, 49, 36, 50, 51, 52, 53, 37, 33, 34, 46, 6, 4, 47, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 38, 39, 40, 41, 42, 43, 44, 45 }
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_47aa:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !813
  ret i64 %0, !insn.addr !814
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_47c8:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !815
  %1 = inttoptr i64 %0 to i64*, !insn.addr !816
  ret i64* %1, !insn.addr !816
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_47e6:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !817
  %1 = inttoptr i64 %0 to i32**, !insn.addr !818
  ret i32** %1, !insn.addr !818
}

define void @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4804:
  call void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result), !insn.addr !819
  ret void, !insn.addr !820
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4823:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !821
  ret i64 %0, !insn.addr !822

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4841:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !823
  %1 = inttoptr i64 %0 to i64*, !insn.addr !824
  ret i64* %1, !insn.addr !824
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_485f:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !825
  %1 = inttoptr i64 %0 to i32**, !insn.addr !826
  ret i32** %1, !insn.addr !826
}

define void @_ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_487e:
  %0 = bitcast i32*** %arg2 to i64*
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %0), !insn.addr !827
  %2 = load i32**, i32*** %1, align 8, !insn.addr !828
  %3 = ptrtoint i32** %2 to i64, !insn.addr !828
  store i64 %3, i64* %result, align 8, !insn.addr !829
  ret void, !insn.addr !830

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48ac:
  ret void, !insn.addr !831
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48bb:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !832
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48cd:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1), !insn.addr !833
  ret i64 %0, !insn.addr !834
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48eb:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !835
  ret i64 %0, !insn.addr !836
}

define void @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev(i64* %result) local_unnamed_addr {
dec_label_pc_490a:
  ret void, !insn.addr !837
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4919:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1), !insn.addr !838
  ret i64 %0, !insn.addr !839
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4937:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !840
  ret i64 %0, !insn.addr !841

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4955:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !842
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4967:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !843
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4979:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !844
}

define void @_ZN12RTTIDerivedBD2Ev(i64* %result) {
dec_label_pc_498c:
  store i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), i64* %result, align 8, !insn.addr !845
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !846
  ret void, !insn.addr !847

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), { 1, 0 }
}

define void @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_49ba:
  call void @_ZN12RTTIDerivedBD2Ev(i64* %result), !insn.addr !848
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !849
  ret void, !insn.addr !850

; uselistorder directives
  uselistorder void (i64*)* @_ZN12RTTIDerivedBD2Ev, { 1, 0 }
}

define void @_ZN12RTTIDerivedAD2Ev(i64* %result) {
dec_label_pc_49ea:
  store i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), i64* %result, align 8, !insn.addr !851
  call void @_ZN8RTTIBaseD2Ev(i64* %result), !insn.addr !852
  ret void, !insn.addr !853

; uselistorder directives
  uselistorder void (i64*)* @_ZN8RTTIBaseD2Ev, { 3, 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), { 1, 0 }
}

define void @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_4a18:
  call void @_ZN12RTTIDerivedAD2Ev(i64* %result), !insn.addr !854
  %0 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !855
  ret void, !insn.addr !856

; uselistorder directives
  uselistorder i64 8, { 6, 7, 8, 0, 1, 16, 18, 17, 19, 2, 3, 4, 20, 21, 9, 22, 23, 12, 13, 14, 10, 11, 5, 15 }
  uselistorder void (i64*)* @_ZN12RTTIDerivedAD2Ev, { 1, 0 }
}

define void @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_4a48:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !857
  %1 = add i64 %0, 32, !insn.addr !858
  %2 = inttoptr i64 %1 to i64*, !insn.addr !859
  store i64 ptrtoint (i64* @global_var_8920 to i64), i64* %2, align 8, !insn.addr !859
  %3 = add i64 %0, 16, !insn.addr !860
  %4 = inttoptr i64 %3 to i64*, !insn.addr !860
  store i64 ptrtoint (i64* @global_var_88e8 to i64), i64* %4, align 8, !insn.addr !860
  %5 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* nonnull @global_var_8950), !insn.addr !861
  %6 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* nonnull @global_var_8940), !insn.addr !862
  call void @_ZN11VirtualBaseD2Ev(i64* %2), !insn.addr !863
  ret void, !insn.addr !864

; uselistorder directives
  uselistorder void (i64*)* @_ZN11VirtualBaseD2Ev, { 1, 2, 0 }
  uselistorder i64 (i64*)* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4aca:
  %0 = add i64 %arg1, -16, !insn.addr !865
  %1 = inttoptr i64 %0 to i64*, !insn.addr !866
  call void @_ZN14DiamondDerivedD1Ev(i64* %1), !insn.addr !866
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !866
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4ad7:
  %0 = add i64 %arg1, -32, !insn.addr !867
  %1 = inttoptr i64 %0 to i64*, !insn.addr !867
  %2 = load i64, i64* %1, align 8, !insn.addr !867
  %3 = add i64 %2, %arg1, !insn.addr !867
  %4 = inttoptr i64 %3 to i64*, !insn.addr !868
  call void @_ZN14DiamondDerivedD1Ev(i64* %4), !insn.addr !868
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !868
}

define void @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_4ae8:
  call void @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !869
  %0 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !870
  ret void, !insn.addr !871

; uselistorder directives
  uselistorder void (i64*)* @_ZN14DiamondDerivedD1Ev, { 2, 4, 3, 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b17:
  %0 = add i64 %arg1, -16, !insn.addr !872
  %1 = inttoptr i64 %0 to i64*, !insn.addr !873
  call void @_ZN14DiamondDerivedD0Ev(i64* %1), !insn.addr !873
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !873
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b21:
  %0 = add i64 %arg1, -32, !insn.addr !874
  %1 = inttoptr i64 %0 to i64*, !insn.addr !874
  %2 = load i64, i64* %1, align 8, !insn.addr !874
  %3 = add i64 %2, %arg1, !insn.addr !874
  %4 = inttoptr i64 %3 to i64*, !insn.addr !875
  call void @_ZN14DiamondDerivedD0Ev(i64* %4), !insn.addr !875
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !875

; uselistorder directives
  uselistorder void (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
}

define void @_ZN12MultiDerivedD2Ev(i64* %result) {
dec_label_pc_4b2e:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), i64* %result, align 8, !insn.addr !876
  %1 = add i64 %0, 16, !insn.addr !877
  %2 = inttoptr i64 %1 to i64*, !insn.addr !877
  store i64 ptrtoint (i64* @global_var_8aa8 to i64), i64* %2, align 8, !insn.addr !877
  call void @_ZN5BaseBD2Ev(i64* %2), !insn.addr !878
  call void @_ZN5BaseAD2Ev(i64* %result), !insn.addr !879
  ret void, !insn.addr !880

; uselistorder directives
  uselistorder void (i64*)* @_ZN5BaseAD2Ev, { 1, 2, 0 }
  uselistorder void (i64*)* @_ZN5BaseBD2Ev, { 1, 2, 0 }
  uselistorder i64 (i64*)* @_ZN12MultiDerived5funcBEv, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), { 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b7a:
  %0 = add i64 %arg1, -16, !insn.addr !881
  %1 = inttoptr i64 %0 to i64*, !insn.addr !882
  call void @_ZN12MultiDerivedD2Ev(i64* %1), !insn.addr !882
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !882
}

define void @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_4b84:
  call void @_ZN12MultiDerivedD2Ev(i64* %result), !insn.addr !883
  %0 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !884
  ret void, !insn.addr !885

; uselistorder directives
  uselistorder i64 32, { 1, 2, 3, 0 }
  uselistorder void (i64*)* @_ZN12MultiDerivedD2Ev, { 2, 3, 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4bb3:
  %0 = add i64 %arg1, -16, !insn.addr !886
  %1 = inttoptr i64 %0 to i64*, !insn.addr !887
  call void @_ZN12MultiDerivedD0Ev(i64* %1), !insn.addr !887
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !887

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 8, 9, 10, 11, 12, 13, 0, 1, 14, 2, 3, 4, 5, 6, 7 }
  uselistorder void (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define void @_ZN7DerivedD2Ev(i64* %result) {
dec_label_pc_4bbe:
  store i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), i64* %result, align 8, !insn.addr !888
  call void @_ZN4BaseD2Ev(i64* %result), !insn.addr !889
  ret void, !insn.addr !890

; uselistorder directives
  uselistorder void (i64*)* @_ZN4BaseD2Ev, { 2, 3, 1, 0 }
  uselistorder i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), { 1, 0 }
}

define void @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_4bec:
  call void @_ZN7DerivedD2Ev(i64* %result), !insn.addr !891
  %0 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !892
  ret void, !insn.addr !893

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 11, 10, 9, 8, 7, 1, 6, 5, 4, 3, 2, 0, 12 }
  uselistorder i64 16, { 1, 7, 5, 6, 2, 8, 3, 4, 0 }
  uselistorder void (i64*)* @_ZN7DerivedD2Ev, { 2, 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4c1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !894

; uselistorder directives
  uselistorder i32 1, { 11, 15, 16, 17, 1, 48, 18, 0, 19, 49, 20, 10, 21, 14, 50, 51, 9, 22, 8, 59, 23, 7, 82, 24, 6, 52, 29, 28, 27, 26, 25, 13, 5, 4, 30, 53, 54, 3, 57, 35, 34, 33, 32, 31, 81, 64, 63, 62, 61, 60, 36, 37, 65, 38, 56, 67, 66, 39, 69, 68, 40, 55, 71, 70, 58, 41, 12, 73, 72, 42, 75, 74, 43, 77, 76, 44, 78, 45, 79, 46, 2, 80, 47 }
}

declare i64 @_Znam(i64) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64 @__cxa_begin_catch(i64) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i64 @__cxa_allocate_exception(i64) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @__cxa_atexit(void (i64*)*, i64*, i64*) local_unnamed_addr

declare i64 @_Znwm(i64) local_unnamed_addr

declare i64 @_ZdlPvm(i64*, i64) local_unnamed_addr

declare i64 @__cxa_bad_typeid() local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i64 @__dynamic_cast(i64, i64*, i64*, i64) local_unnamed_addr

declare void @_ZdaPv(i64*, i64*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__cxa_throw_bad_array_new_length() local_unnamed_addr

declare i64 @__cxa_rethrow() local_unnamed_addr

declare i64 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i64 @__cxa_end_catch() local_unnamed_addr

declare i64 @__cxa_throw(i64, i64, i64) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i128 @__asm_movapd(i128) local_unnamed_addr

declare i128 @__asm_movq(i64) local_unnamed_addr

declare i64 @__asm_movq.12(i128) local_unnamed_addr

declare i32 @__asm_cvttsd2si(i128) local_unnamed_addr

declare i64 @__asm_movsd.13(i128) local_unnamed_addr

declare void @__asm_comisd(i128, i128) local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 8192}
!1 = !{i64 8200}
!2 = !{i64 8207}
!3 = !{i64 8210}
!4 = !{i64 8212}
!5 = !{i64 8218}
!6 = !{i64 8580}
!7 = !{i64 8596}
!8 = !{i64 8612}
!9 = !{i64 8628}
!10 = !{i64 8644}
!11 = !{i64 8660}
!12 = !{i64 8676}
!13 = !{i64 8692}
!14 = !{i64 8708}
!15 = !{i64 8724}
!16 = !{i64 8740}
!17 = !{i64 8756}
!18 = !{i64 8772}
!19 = !{i64 8788}
!20 = !{i64 8804}
!21 = !{i64 8820}
!22 = !{i64 8836}
!23 = !{i64 8852}
!24 = !{i64 8868}
!25 = !{i64 8884}
!26 = !{i64 8900}
!27 = !{i64 8916}
!28 = !{i64 8959}
!29 = !{i64 8965}
!30 = !{i64 9016}
!31 = !{i64 9080}
!32 = !{i64 9092}
!33 = !{i64 9099}
!34 = !{i64 9102}
!35 = !{i64 9113}
!36 = !{i64 9115}
!37 = !{i64 9122}
!38 = !{i64 9127}
!39 = !{i64 9132}
!40 = !{i64 9140}
!41 = !{i64 9144}
!42 = !{i64 9156}
!43 = !{i64 9162}
!44 = !{i64 9174}
!45 = !{i64 9208}
!46 = !{i64 9225}
!47 = !{i64 9237}
!48 = !{i64 9257}
!49 = !{i64 9265}
!50 = !{i64 9279}
!51 = !{i64 9284}
!52 = !{i64 9290}
!53 = !{i64 9299}
!54 = !{i64 9301}
!55 = !{i64 9307}
!56 = !{i64 9308}
!57 = !{i64 9320}
!58 = !{i64 9354}
!59 = !{i64 9371}
!60 = !{i64 9379}
!61 = !{i64 9384}
!62 = !{i64 9394}
!63 = !{i64 9399}
!64 = !{i64 9404}
!65 = !{i64 9410}
!66 = !{i64 9413}
!67 = !{i64 9420}
!68 = !{i64 9429}
!69 = !{i64 9431}
!70 = !{i64 9437}
!71 = !{i64 9482}
!72 = !{i64 9483}
!73 = !{i64 9496}
!74 = !{i64 9518}
!75 = !{i64 9534}
!76 = !{i64 9551}
!77 = !{i64 9556}
!78 = !{i64 9571}
!79 = !{i64 9576}
!80 = !{i64 9607}
!81 = !{i64 9627}
!82 = !{i64 9641}
!83 = !{i64 9646}
!84 = !{i64 9651}
!85 = !{i64 9661}
!86 = !{i64 9673}
!87 = !{i64 9684}
!88 = !{i64 9693}
!89 = !{i64 9739}
!90 = !{i64 9749}
!91 = !{i64 9750}
!92 = !{i64 9763}
!93 = !{i64 9785}
!94 = !{i64 9808}
!95 = !{i64 9891}
!96 = !{i64 9906}
!97 = !{i64 9896}
!98 = !{i64 9911}
!99 = !{i64 9917}
!100 = !{i64 9926}
!101 = !{i64 9960}
!102 = !{i64 9970}
!103 = !{i64 9971}
!104 = !{i64 9984}
!105 = !{i64 10006}
!106 = !{i64 10026}
!107 = !{i64 10087}
!108 = !{i64 10097}
!109 = !{i64 10102}
!110 = !{i64 10108}
!111 = !{i64 10117}
!112 = !{i64 10151}
!113 = !{i64 10161}
!114 = !{i64 10162}
!115 = !{i64 10174}
!116 = !{i64 10206}
!117 = !{i64 10228}
!118 = !{i64 10247}
!119 = !{i64 10252}
!120 = !{i64 10270}
!121 = !{i64 10275}
!122 = !{i64 10285}
!123 = !{i64 10290}
!124 = !{i64 10296}
!125 = !{i64 10298}
!126 = !{i64 10316}
!127 = !{i64 10322}
!128 = !{i64 10331}
!129 = !{i64 10333}
!130 = !{i64 10339}
!131 = !{i64 10340}
!132 = !{i64 10352}
!133 = !{i64 10377}
!134 = !{i64 10385}
!135 = !{i64 10400}
!136 = !{i64 10404}
!137 = !{i64 10409}
!138 = !{i64 10414}
!139 = !{i64 10423}
!140 = !{i64 10430}
!141 = !{i64 10451}
!142 = !{i64 10456}
!143 = !{i64 10461}
!144 = !{i64 10468}
!145 = !{i64 10470}
!146 = !{i64 10473}
!147 = !{i64 10475}
!148 = !{i64 10478}
!149 = !{i64 10484}
!150 = !{i64 10493}
!151 = !{i64 10495}
!152 = !{i64 10501}
!153 = !{i64 10502}
!154 = !{i64 10517}
!155 = !{i64 10542}
!156 = !{i64 10562}
!157 = !{i64 10582}
!158 = !{i64 10602}
!159 = !{i64 10622}
!160 = !{i64 10627}
!161 = !{i64 10643}
!162 = !{i64 10648}
!163 = !{i64 10661}
!164 = !{i64 10677}
!165 = !{i64 10682}
!166 = !{i64 10685}
!167 = !{i64 10702}
!168 = !{i64 10707}
!169 = !{i64 10719}
!170 = !{i64 10731}
!171 = !{i64 10733}
!172 = !{i64 10741}
!173 = !{i64 10745}
!174 = !{i64 10751}
!175 = !{i64 10760}
!176 = !{i64 10762}
!177 = !{i64 10768}
!178 = !{i64 10785}
!179 = !{i64 10789}
!180 = !{i64 10799}
!181 = !{i64 10802}
!182 = !{i64 10808}
!183 = !{i64 10810}
!184 = !{i64 10820}
!185 = !{i64 10824}
!186 = !{i64 10826}
!187 = !{i64 10829}
!188 = !{i64 10830}
!189 = !{i64 10842}
!190 = !{i64 10874}
!191 = !{i64 10897}
!192 = !{i64 10918}
!193 = !{i64 10924}
!194 = !{i64 10933}
!195 = !{i64 10935}
!196 = !{i64 10941}
!197 = !{i64 10969}
!198 = !{i64 10974}
!199 = !{i64 10998}
!200 = !{i64 11234}
!201 = !{i64 11236}
!202 = !{i64 11256}
!203 = !{i64 11262}
!204 = !{i64 11266}
!205 = !{i64 11269}
!206 = !{i64 11279}
!207 = !{i64 11286}
!208 = !{i64 11287}
!209 = !{i64 11300}
!210 = !{i64 11320}
!211 = !{i64 11325}
!212 = !{i64 11341}
!213 = !{i64 11353}
!214 = !{i64 11358}
!215 = !{i64 11371}
!216 = !{i64 11389}
!217 = !{i64 11401}
!218 = !{i64 11406}
!219 = !{i64 11416}
!220 = !{i64 11427}
!221 = !{i64 11433}
!222 = !{i64 11437}
!223 = !{i64 11443}
!224 = !{i64 11447}
!225 = !{i64 11453}
!226 = !{i64 11457}
!227 = !{i64 11463}
!228 = !{i64 11467}
!229 = !{i64 11483}
!230 = !{i64 11500}
!231 = !{i64 11505}
!232 = !{i64 11515}
!233 = !{i64 11520}
!234 = !{i64 11540}
!235 = !{i64 11552}
!236 = !{i64 11557}
!237 = !{i64 11568}
!238 = !{i64 11573}
!239 = !{i64 11583}
!240 = !{i64 11595}
!241 = !{i64 11607}
!242 = !{i64 11619}
!243 = !{i64 11630}
!244 = !{i64 11639}
!245 = !{i64 11706}
!246 = !{i64 11716}
!247 = !{i64 11717}
!248 = !{i64 11735}
!249 = !{i64 11743}
!250 = !{i64 11753}
!251 = !{i64 11767}
!252 = !{i64 11775}
!253 = !{i64 11785}
!254 = !{i64 11805}
!255 = !{i64 11808}
!256 = !{i64 11810}
!257 = !{i64 11813}
!258 = !{i64 11830}
!259 = !{i64 11835}
!260 = !{i64 11837}
!261 = !{i64 11841}
!262 = !{i64 11846}
!263 = !{i64 11854}
!264 = !{i64 11857}
!265 = !{i64 11859}
!266 = !{i64 11862}
!267 = !{i64 11879}
!268 = !{i64 11884}
!269 = !{i64 11886}
!270 = !{i64 11890}
!271 = !{i64 11895}
!272 = !{i64 11906}
!273 = !{i64 11930}
!274 = !{i64 11946}
!275 = !{i64 11951}
!276 = !{i64 11960}
!277 = !{i64 11965}
!278 = !{i64 11975}
!279 = !{i64 11999}
!280 = !{i64 12015}
!281 = !{i64 12020}
!282 = !{i64 12029}
!283 = !{i64 12034}
!284 = !{i64 12044}
!285 = !{i64 12046}
!286 = !{i64 12049}
!287 = !{i64 12056}
!288 = !{i64 12064}
!289 = !{i64 12074}
!290 = !{i64 12090}
!291 = !{i64 12142}
!292 = !{i64 12161}
!293 = !{i64 12166}
!294 = !{i64 12188}
!295 = !{i64 12193}
!296 = !{i64 12215}
!297 = !{i64 12220}
!298 = !{i64 12242}
!299 = !{i64 12247}
!300 = !{i64 12269}
!301 = !{i64 12274}
!302 = !{i64 12296}
!303 = !{i64 12301}
!304 = !{i64 12323}
!305 = !{i64 12328}
!306 = !{i64 12350}
!307 = !{i64 12355}
!308 = !{i64 12377}
!309 = !{i64 12382}
!310 = !{i64 12404}
!311 = !{i64 12409}
!312 = !{i64 12431}
!313 = !{i64 12436}
!314 = !{i64 12458}
!315 = !{i64 12463}
!316 = !{i64 12485}
!317 = !{i64 12492}
!318 = !{i64 12501}
!319 = !{i64 12512}
!320 = !{i64 12552}
!321 = !{i64 12559}
!322 = !{i64 12598}
!323 = !{i64 12605}
!324 = !{i64 12626}
!325 = !{i64 12639}
!326 = !{i64 12642}
!327 = !{i64 12645}
!328 = !{i64 12631}
!329 = !{i64 12654}
!330 = !{i64 12669}
!331 = !{i64 12674}
!332 = !{i64 12683}
!333 = !{i64 12692}
!334 = !{i64 12705}
!335 = !{i64 12732}
!336 = !{i64 12738}
!337 = !{i64 12753}
!338 = !{i64 12772}
!339 = !{i64 12790}
!340 = !{i64 12801}
!341 = !{i64 12821}
!342 = !{i64 12827}
!343 = !{i64 12847}
!344 = !{i64 12853}
!345 = !{i64 12873}
!346 = !{i64 12879}
!347 = !{i64 12893}
!348 = !{i64 12928}
!349 = !{i64 12943}
!350 = !{i64 12957}
!351 = !{i64 12971}
!352 = !{i64 12991}
!353 = !{i64 12997}
!354 = !{i64 13017}
!355 = !{i64 13023}
!356 = !{i64 13043}
!357 = !{i64 13048}
!358 = !{i64 13052}
!359 = !{i64 13082}
!360 = !{i64 13100}
!361 = !{i64 13116}
!362 = !{i64 13127}
!363 = !{i64 13138}
!364 = !{i64 13158}
!365 = !{i64 13164}
!366 = !{i64 13184}
!367 = !{i64 13190}
!368 = !{i64 13210}
!369 = !{i64 13216}
!370 = !{i64 13248}
!371 = !{i64 13255}
!372 = !{i64 13275}
!373 = !{i64 13281}
!374 = !{i64 13301}
!375 = !{i64 13307}
!376 = !{i64 13327}
!377 = !{i64 13333}
!378 = !{i64 13348}
!379 = !{i64 13368}
!380 = !{i64 13374}
!381 = !{i64 13394}
!382 = !{i64 13400}
!383 = !{i64 13414}
!384 = !{i64 13433}
!385 = !{i64 13439}
!386 = !{i64 13437}
!387 = !{i64 13458}
!388 = !{i64 13483}
!389 = !{i64 13493}
!390 = !{i64 13500}
!391 = !{i64 13519}
!392 = !{i64 13525}
!393 = !{i64 13542}
!394 = !{i64 13546}
!395 = !{i64 13549}
!396 = !{i64 13576}
!397 = !{i64 13578}
!398 = !{i64 13602}
!399 = !{i64 13610}
!400 = !{i64 13614}
!401 = !{i64 13617}
!402 = !{i64 13627}
!403 = !{i64 13630}
!404 = !{i64 13632}
!405 = !{i64 13656}
!406 = !{i64 13661}
!407 = !{i64 13663}
!408 = !{i64 13672}
!409 = !{i64 13678}
!410 = !{i64 13710}
!411 = !{i64 13716}
!412 = !{i64 13735}
!413 = !{i64 13744}
!414 = !{i64 13750}
!415 = !{i64 13768}
!416 = !{i64 13771}
!417 = !{i64 13794}
!418 = !{i64 13798}
!419 = !{i64 13826}
!420 = !{i64 13836}
!421 = !{i64 13843}
!422 = !{i64 13848}
!423 = !{i64 13855}
!424 = !{i64 13870}
!425 = !{i64 13872}
!426 = !{i64 13900}
!427 = !{i64 13921}
!428 = !{i64 13923}
!429 = !{i64 13930}
!430 = !{i64 13942}
!431 = !{i64 13953}
!432 = !{i64 13955}
!433 = !{i64 13984}
!434 = !{i64 13973}
!435 = !{i64 13988}
!436 = !{i64 13992}
!437 = !{i64 13997}
!438 = !{i64 13999}
!439 = !{i64 14008}
!440 = !{i64 14012}
!441 = !{i64 14023}
!442 = !{i64 14031}
!443 = !{i64 14055}
!444 = !{i64 14058}
!445 = !{i64 14070}
!446 = !{i64 14075}
!447 = !{i64 14081}
!448 = !{i64 14084}
!449 = !{i64 14092}
!450 = !{i64 14094}
!451 = !{i64 14114}
!452 = !{i64 14118}
!453 = !{i64 14122}
!454 = !{i64 14135}
!455 = !{i64 14139}
!456 = !{i64 14142}
!457 = !{i64 14144}
!458 = !{i64 14152}
!459 = !{i64 14161}
!460 = !{i64 14168}
!461 = !{i64 14188}
!462 = !{i64 14192}
!463 = !{i64 14214}
!464 = !{i64 14239}
!465 = !{i64 14244}
!466 = !{i64 14269}
!467 = !{i64 14286}
!468 = !{i64 14292}
!469 = !{i64 14317}
!470 = !{i64 14322}
!471 = !{i64 14350}
!472 = !{i64 14366}
!473 = !{i64 14376}
!474 = !{i64 14381}
!475 = !{i64 14401}
!476 = !{i64 14404}
!477 = !{i64 14409}
!478 = !{i64 14430}
!479 = !{i64 14450}
!480 = !{i64 14475}
!481 = !{i64 14480}
!482 = !{i64 14505}
!483 = !{i64 14522}
!484 = !{i64 14528}
!485 = !{i64 14548}
!486 = !{i64 14573}
!487 = !{i64 14578}
!488 = !{i64 14603}
!489 = !{i64 14620}
!490 = !{i64 14626}
!491 = !{i64 14646}
!492 = !{i64 14666}
!493 = !{i64 14671}
!494 = !{i64 14675}
!495 = !{i64 14701}
!496 = !{i64 14706}
!497 = !{i64 14731}
!498 = !{i64 14736}
!499 = !{i64 14761}
!500 = !{i64 14770}
!501 = !{i64 14777}
!502 = !{i64 14793}
!503 = !{i64 14807}
!504 = !{i64 14813}
!505 = !{i64 14832}
!506 = !{i64 14857}
!507 = !{i64 14862}
!508 = !{i64 14887}
!509 = !{i64 14904}
!510 = !{i64 14910}
!511 = !{i64 14931}
!512 = !{i64 14935}
!513 = !{i64 14945}
!514 = !{i64 14948}
!515 = !{i64 14951}
!516 = !{i64 14957}
!517 = !{i64 14965}
!518 = !{i64 14969}
!519 = !{i64 14991}
!520 = !{i64 14995}
!521 = !{i64 15005}
!522 = !{i64 15008}
!523 = !{i64 15011}
!524 = !{i64 15017}
!525 = !{i64 15025}
!526 = !{i64 15029}
!527 = !{i64 15051}
!528 = !{i64 15055}
!529 = !{i64 15065}
!530 = !{i64 15068}
!531 = !{i64 15071}
!532 = !{i64 15077}
!533 = !{i64 15085}
!534 = !{i64 15089}
!535 = !{i64 15095}
!536 = !{i64 15099}
!537 = !{i64 15125}
!538 = !{i64 15130}
!539 = !{i64 15159}
!540 = !{i64 15169}
!541 = !{i64 15173}
!542 = !{i64 15183}
!543 = !{i64 15190}
!544 = !{i64 15194}
!545 = !{i64 15199}
!546 = !{i64 15227}
!547 = !{i64 15237}
!548 = !{i64 15241}
!549 = !{i64 15251}
!550 = !{i64 15258}
!551 = !{i64 15262}
!552 = !{i64 15267}
!553 = !{i64 15295}
!554 = !{i64 15305}
!555 = !{i64 15309}
!556 = !{i64 15319}
!557 = !{i64 15326}
!558 = !{i64 15330}
!559 = !{i64 15335}
!560 = !{i64 15363}
!561 = !{i64 15373}
!562 = !{i64 15377}
!563 = !{i64 15387}
!564 = !{i64 15394}
!565 = !{i64 15398}
!566 = !{i64 15403}
!567 = !{i64 15424}
!568 = !{i64 15431}
!569 = !{i64 15453}
!570 = !{i64 15462}
!571 = !{i64 15479}
!572 = !{i64 15495}
!573 = !{i64 15513}
!574 = !{i64 15527}
!575 = !{i64 15533}
!576 = !{i64 15559}
!577 = !{i64 15568}
!578 = !{i64 15573}
!579 = !{i64 15574}
!580 = !{i64 15594}
!581 = !{i64 15613}
!582 = !{i64 15620}
!583 = !{i64 15623}
!584 = !{i64 15637}
!585 = !{i64 15648}
!586 = !{i64 15653}
!587 = !{i64 15661}
!588 = !{i64 15670}
!589 = !{i64 15672}
!590 = !{i64 15678}
!591 = !{i64 15680}
!592 = !{i64 15708}
!593 = !{i64 15710}
!594 = !{i64 15716}
!595 = !{i64 15723}
!596 = !{i64 15726}
!597 = !{i64 15728}
!598 = !{i64 15737}
!599 = !{i64 15743}
!600 = !{i64 15762}
!601 = !{i64 15769}
!602 = !{i64 15775}
!603 = !{i64 15778}
!604 = !{i64 15785}
!605 = !{i64 15793}
!606 = !{i64 15814}
!607 = !{i64 15825}
!608 = !{i64 15826}
!609 = !{i64 15834}
!610 = !{i64 15839}
!611 = !{i64 15844}
!612 = !{i64 15849}
!613 = !{i64 15854}
!614 = !{i64 15856}
!615 = !{i64 15861}
!616 = !{i64 15863}
!617 = !{i64 15868}
!618 = !{i64 15873}
!619 = !{i64 15879}
!620 = !{i64 15915}
!621 = !{i64 15924}
!622 = !{i64 15928}
!623 = !{i64 15946}
!624 = !{i64 15955}
!625 = !{i64 15956}
!626 = !{i64 15975}
!627 = !{i64 15981}
!628 = !{i64 15993}
!629 = !{i64 16000}
!630 = !{i64 16007}
!631 = !{i64 16009}
!632 = !{i64 16014}
!633 = !{i64 16016}
!634 = !{i64 16031}
!635 = !{i64 16035}
!636 = !{i64 16041}
!637 = !{i64 16047}
!638 = !{i64 16059}
!639 = !{i64 16062}
!640 = !{i64 16070}
!641 = !{i64 16088}
!642 = !{i64 16092}
!643 = !{i64 16110}
!644 = !{i64 16119}
!645 = !{i64 16120}
!646 = !{i64 16132}
!647 = !{i64 16141}
!648 = !{i64 16147}
!649 = !{i64 16149}
!650 = !{i64 16158}
!651 = !{i64 16161}
!652 = !{i64 16168}
!653 = !{i64 16175}
!654 = !{i64 16177}
!655 = !{i64 16184}
!656 = !{i64 16186}
!657 = !{i64 16201}
!658 = !{i64 16205}
!659 = !{i64 16211}
!660 = !{i64 16217}
!661 = !{i64 16229}
!662 = !{i64 16234}
!663 = !{i64 16236}
!664 = !{i64 16240}
!665 = !{i64 16245}
!666 = !{i64 16251}
!667 = !{i64 16268}
!668 = !{i64 16272}
!669 = !{i64 16308}
!670 = !{i64 16315}
!671 = !{i64 16350}
!672 = !{i64 16357}
!673 = !{i64 16376}
!674 = !{i64 16396}
!675 = !{i64 16416}
!676 = !{i64 16436}
!677 = !{i64 16456}
!678 = !{i64 16481}
!679 = !{i64 16486}
!680 = !{i64 16511}
!681 = !{i64 16516}
!682 = !{i64 16541}
!683 = !{i64 16558}
!684 = !{i64 16564}
!685 = !{i64 16589}
!686 = !{i64 16605}
!687 = !{i64 16610}
!688 = !{i64 16635}
!689 = !{i64 16651}
!690 = !{i64 16656}
!691 = !{i64 16692}
!692 = !{i64 16699}
!693 = !{i64 16734}
!694 = !{i64 16741}
!695 = !{i64 16766}
!696 = !{i64 16779}
!697 = !{i64 16782}
!698 = !{i64 16785}
!699 = !{i64 16771}
!700 = !{i64 16794}
!701 = !{i64 16809}
!702 = !{i64 16814}
!703 = !{i64 16823}
!704 = !{i64 16832}
!705 = !{i64 16845}
!706 = !{i64 16876}
!707 = !{i64 16882}
!708 = !{i64 16900}
!709 = !{i64 16936}
!710 = !{i64 16952}
!711 = !{i64 16957}
!712 = !{i64 16992}
!713 = !{i64 16999}
!714 = !{i64 17032}
!715 = !{i64 17043}
!716 = !{i64 17055}
!717 = !{i64 17060}
!718 = !{i64 17073}
!719 = !{i64 17108}
!720 = !{i64 17115}
!721 = !{i64 17150}
!722 = !{i64 17157}
!723 = !{i64 17181}
!724 = !{i64 17194}
!725 = !{i64 17197}
!726 = !{i64 17200}
!727 = !{i64 17209}
!728 = !{i64 17221}
!729 = !{i64 17230}
!730 = !{i64 17239}
!731 = !{i64 17248}
!732 = !{i64 17284}
!733 = !{i64 17296}
!734 = !{i64 17300}
!735 = !{i64 17304}
!736 = !{i64 17334}
!737 = !{i64 17339}
!738 = !{i64 17350}
!739 = !{i64 17355}
!740 = !{i64 17364}
!741 = !{i64 17389}
!742 = !{i64 17395}
!743 = !{i64 17419}
!744 = !{i64 17425}
!745 = !{i64 17443}
!746 = !{i64 17444}
!747 = !{i64 17464}
!748 = !{i64 17468}
!749 = !{i64 17471}
!750 = !{i64 17481}
!751 = !{i64 17488}
!752 = !{i64 17513}
!753 = !{i64 17519}
!754 = !{i64 17537}
!755 = !{i64 17556}
!756 = !{i64 17586}
!757 = !{i64 17591}
!758 = !{i64 17602}
!759 = !{i64 17607}
!760 = !{i64 17616}
!761 = !{i64 17641}
!762 = !{i64 17647}
!763 = !{i64 17671}
!764 = !{i64 17677}
!765 = !{i64 17678}
!766 = !{i64 17698}
!767 = !{i64 17703}
!768 = !{i64 17712}
!769 = !{i64 17719}
!770 = !{i64 17743}
!771 = !{i64 17749}
!772 = !{i64 17773}
!773 = !{i64 17780}
!774 = !{i64 17804}
!775 = !{i64 17810}
!776 = !{i64 17835}
!777 = !{i64 17841}
!778 = !{i64 17865}
!779 = !{i64 17870}
!780 = !{i64 17874}
!781 = !{i64 17899}
!782 = !{i64 17906}
!783 = !{i64 17930}
!784 = !{i64 17936}
!785 = !{i64 17961}
!786 = !{i64 17967}
!787 = !{i64 17991}
!788 = !{i64 17996}
!789 = !{i64 18000}
!790 = !{i64 18025}
!791 = !{i64 18037}
!792 = !{i64 18044}
!793 = !{i64 18068}
!794 = !{i64 18074}
!795 = !{i64 18098}
!796 = !{i64 18104}
!797 = !{i64 18128}
!798 = !{i64 18134}
!799 = !{i64 18159}
!800 = !{i64 18171}
!801 = !{i64 18178}
!802 = !{i64 18202}
!803 = !{i64 18208}
!804 = !{i64 18232}
!805 = !{i64 18238}
!806 = !{i64 18262}
!807 = !{i64 18268}
!808 = !{i64 18286}
!809 = !{i64 18311}
!810 = !{i64 18318}
!811 = !{i64 18336}
!812 = !{i64 18345}
!813 = !{i64 18369}
!814 = !{i64 18375}
!815 = !{i64 18399}
!816 = !{i64 18405}
!817 = !{i64 18429}
!818 = !{i64 18435}
!819 = !{i64 18459}
!820 = !{i64 18466}
!821 = !{i64 18490}
!822 = !{i64 18496}
!823 = !{i64 18520}
!824 = !{i64 18526}
!825 = !{i64 18550}
!826 = !{i64 18556}
!827 = !{i64 18585}
!828 = !{i64 18590}
!829 = !{i64 18597}
!830 = !{i64 18602}
!831 = !{i64 18618}
!832 = !{i64 18636}
!833 = !{i64 18660}
!834 = !{i64 18666}
!835 = !{i64 18690}
!836 = !{i64 18696}
!837 = !{i64 18712}
!838 = !{i64 18736}
!839 = !{i64 18742}
!840 = !{i64 18766}
!841 = !{i64 18772}
!842 = !{i64 18790}
!843 = !{i64 18808}
!844 = !{i64 18826}
!845 = !{i64 18855}
!846 = !{i64 18865}
!847 = !{i64 18872}
!848 = !{i64 18897}
!849 = !{i64 18914}
!850 = !{i64 18920}
!851 = !{i64 18949}
!852 = !{i64 18959}
!853 = !{i64 18966}
!854 = !{i64 18991}
!855 = !{i64 19008}
!856 = !{i64 19014}
!857 = !{i64 19043}
!858 = !{i64 19050}
!859 = !{i64 19061}
!860 = !{i64 19075}
!861 = !{i64 19100}
!862 = !{i64 19122}
!863 = !{i64 19138}
!864 = !{i64 19145}
!865 = !{i64 19150}
!866 = !{i64 19154}
!867 = !{i64 19166}
!868 = !{i64 19170}
!869 = !{i64 19199}
!870 = !{i64 19216}
!871 = !{i64 19222}
!872 = !{i64 19227}
!873 = !{i64 19231}
!874 = !{i64 19240}
!875 = !{i64 19244}
!876 = !{i64 19273}
!877 = !{i64 19287}
!878 = !{i64 19302}
!879 = !{i64 19314}
!880 = !{i64 19321}
!881 = !{i64 19326}
!882 = !{i64 19330}
!883 = !{i64 19355}
!884 = !{i64 19372}
!885 = !{i64 19378}
!886 = !{i64 19383}
!887 = !{i64 19387}
!888 = !{i64 19417}
!889 = !{i64 19427}
!890 = !{i64 19434}
!891 = !{i64 19459}
!892 = !{i64 19476}
!893 = !{i64 19482}
!894 = !{i64 19496}
