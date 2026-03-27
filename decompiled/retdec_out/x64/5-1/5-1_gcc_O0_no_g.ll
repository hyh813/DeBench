source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%vtable_8838_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8860_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8888_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_88b8_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8988_type = type { i64 (i64*)* }
%vtable_89f0_type = type { i64 (i64*)* }
%vtable_8a50_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8a78_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8ad0_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8af8_type = type { i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8b20_type = type { i64 (i64*, i32)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
%vtable_8b50_type = type { i64 (i64*, i32)*, i64 (i64*)*, i64 (i64*)*, i64 (i64*)* }
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
@global_var_8838 = global %vtable_8838_type { i64 (i64*)* @_ZN12RTTIDerivedBD1Ev, i64 (i64*)* @_ZN12RTTIDerivedBD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedB7getTypeEv }
@global_var_8860 = global %vtable_8860_type { i64 (i64*)* @_ZN12RTTIDerivedAD1Ev, i64 (i64*)* @_ZN12RTTIDerivedAD0Ev, i64 (i64*)* @_ZNK12RTTIDerivedA7getTypeEv }
@global_var_8888 = global %vtable_8888_type { i64 (i64*)* @_ZN8RTTIBaseD1Ev, i64 (i64*)* @_ZN8RTTIBaseD0Ev, i64 (i64*)* @_ZNK8RTTIBase7getTypeEv }
@global_var_88b8 = global %vtable_88b8_type { i64 (i64*)* @_ZN14DiamondDerived4funcEv, i64 (i64*)* @_ZN14DiamondDerivedD1Ev, i64 (i64*)* @_ZN14DiamondDerivedD0Ev }
@global_var_8988 = local_unnamed_addr global %vtable_8988_type { i64 (i64*)* @_ZN7MiddleA4funcEv }
@global_var_89f0 = local_unnamed_addr global %vtable_89f0_type { i64 (i64*)* @_ZN7MiddleB4funcEv }
@global_var_8a50 = global %vtable_8a50_type { i64 (i64*)* @_ZN11VirtualBase4funcEv, i64 (i64*)* @_ZN11VirtualBaseD1Ev, i64 (i64*)* @_ZN11VirtualBaseD0Ev }
@global_var_8a78 = global %vtable_8a78_type { i64 (i64*)* @_ZN12MultiDerived5funcAEv, i64 (i64*)* @_ZN12MultiDerivedD1Ev, i64 (i64*)* @_ZN12MultiDerivedD0Ev, i64 (i64*)* @_ZN12MultiDerived5funcBEv }
@global_var_8ad0 = global %vtable_8ad0_type { i64 (i64*)* @_ZN5BaseB5funcBEv, i64 (i64*)* @_ZN5BaseBD1Ev, i64 (i64*)* @_ZN5BaseBD0Ev }
@global_var_8af8 = global %vtable_8af8_type { i64 (i64*)* @_ZN5BaseA5funcAEv, i64 (i64*)* @_ZN5BaseAD1Ev, i64 (i64*)* @_ZN5BaseAD0Ev }
@global_var_8b20 = global %vtable_8b20_type { i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, i64 (i64*)* @_ZNK7Derived7getNameEv, i64 (i64*)* @_ZN7DerivedD1Ev, i64 (i64*)* @_ZN7DerivedD0Ev }
@global_var_8b50 = global %vtable_8b50_type { i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, i64 (i64*)* @_ZNK4Base7getNameEv, i64 (i64*)* @_ZN4BaseD1Ev, i64 (i64*)* @_ZN4BaseD0Ev }

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

define i64 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_23ca:
  %rax.0.reg2mem = alloca i64, !insn.addr !43
  %stack_var_-56 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !44
  %1 = call i64 @_ZN11SimpleClassC1EiPKc(i64* nonnull %stack_var_-56, i32 5, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_5028, i64 0, i64 0)), !insn.addr !45
  %2 = call i64 @_ZN11SimpleClass8setValueEi(i64* nonnull %stack_var_-56, i32 10), !insn.addr !46
  %3 = call i64 @_ZNK11SimpleClass8getValueEv(i64* nonnull %stack_var_-56), !insn.addr !47
  %4 = call i64 @_ZNK11SimpleClass7computeEi(i64* nonnull %stack_var_-56, i32 3), !insn.addr !48
  %5 = call i64 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !49
  %6 = add i64 %4, %3, !insn.addr !50
  %7 = add i64 %6, %5, !insn.addr !51
  %8 = and i64 %7, 4294967295, !insn.addr !51
  %9 = call i64 @__readfsqword(i64 40), !insn.addr !52
  %10 = icmp eq i64 %0, %9, !insn.addr !52
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !53
  br i1 %10, label %dec_label_pc_245a, label %dec_label_pc_2455, !insn.addr !53

dec_label_pc_2455:                                ; preds = %dec_label_pc_23ca
  call void @__stack_chk_fail(), !insn.addr !54
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_245a, !insn.addr !54

dec_label_pc_245a:                                ; preds = %dec_label_pc_2455, %dec_label_pc_23ca
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !55
}

define i64 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_245c:
  %rax.0.reg2mem = alloca i64, !insn.addr !56
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !57
  %1 = call i64 @_ZN14LifecycleClassC1Em(i64* nonnull %stack_var_-40, i64 5), !insn.addr !58
  %2 = call i64 @_ZNK14LifecycleClass7getDataEm(i64* nonnull %stack_var_-40, i64 2), !insn.addr !59
  %3 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !60
  %4 = add i64 %3, %2, !insn.addr !61
  %5 = call i64 @_ZN14LifecycleClassD1Ev(i64* nonnull %stack_var_-40), !insn.addr !62
  %6 = call i64 @_ZN14LifecycleClass16getInstanceCountEv(), !insn.addr !63
  %7 = mul i64 %6, zext (i32 ptrtoint (i32* @global_var_3e8 to i32) to i64), !insn.addr !64
  %8 = add i64 %4, %7, !insn.addr !65
  %9 = and i64 %8, 4294967295, !insn.addr !66
  %10 = call i64 @__readfsqword(i64 40), !insn.addr !67
  %11 = icmp eq i64 %0, %10, !insn.addr !67
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !68
  br i1 %11, label %dec_label_pc_24dc, label %dec_label_pc_24d7, !insn.addr !68

dec_label_pc_24d7:                                ; preds = %dec_label_pc_245c
  call void @__stack_chk_fail(), !insn.addr !69
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_24dc, !insn.addr !69

dec_label_pc_24dc:                                ; preds = %dec_label_pc_24d7, %dec_label_pc_245c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !70

; uselistorder directives
  uselistorder i64 ()* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i64 @_Z17call_virtual_funcP4Basei(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_24de:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !71
}

define i64 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_250b:
  %rax.0.reg2mem = alloca i64, !insn.addr !72
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-80 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !73
  store i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), i64* %stack_var_-80, align 8, !insn.addr !74
  %1 = call i64 @_ZN7DerivedC1Ei(i64* nonnull %stack_var_-56, i32 3), !insn.addr !75
  %2 = call i64 @_ZN4Base12virtual_funcEi(i64* nonnull %stack_var_-80, i32 5), !insn.addr !76
  %3 = call i64 @_ZN7Derived12virtual_funcEi(i64* nonnull %stack_var_-56, i32 5), !insn.addr !77
  %4 = call i64 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-80, i32 5), !insn.addr !78
  %5 = call i64 @_Z17call_virtual_funcP4Basei(i64* nonnull %stack_var_-56, i32 5), !insn.addr !79
  %6 = add i64 %3, %2, !insn.addr !80
  %7 = add i64 %6, %4, !insn.addr !81
  %8 = add i64 %7, %5, !insn.addr !82
  %9 = call i64 @_ZN7DerivedD1Ev(i64* nonnull %stack_var_-56), !insn.addr !83
  %10 = call i64 @_ZN4BaseD1Ev(i64* nonnull %stack_var_-80), !insn.addr !84
  %11 = and i64 %8, 4294967295, !insn.addr !85
  %12 = call i64 @__readfsqword(i64 40), !insn.addr !86
  %13 = icmp eq i64 %0, %12, !insn.addr !86
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !87
  br i1 %13, label %dec_label_pc_2610, label %dec_label_pc_260b, !insn.addr !87

dec_label_pc_260b:                                ; preds = %dec_label_pc_250b
  call void @__stack_chk_fail(), !insn.addr !88
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_2610, !insn.addr !88

dec_label_pc_2610:                                ; preds = %dec_label_pc_260b, %dec_label_pc_250b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !89

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i64 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_2616:
  %rax.0.reg2mem = alloca i64, !insn.addr !90
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-72 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !91
  %1 = call i64 @_ZN12MultiDerivedC1Ev(i64* nonnull %stack_var_-72), !insn.addr !92
  %2 = ptrtoint i64* %stack_var_-72 to i64, !insn.addr !93
  %3 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !94
  %4 = add i64 %2, %3, !insn.addr !95
  %5 = call i64 @_ZN12MultiDerivedD1Ev(i64* nonnull %stack_var_-72), !insn.addr !96
  %6 = and i64 %4, 4294967288, !insn.addr !97
  %7 = or i64 %6, 1, !insn.addr !98
  %8 = call i64 @__readfsqword(i64 40), !insn.addr !99
  %9 = icmp eq i64 %0, %8, !insn.addr !99
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !100
  br i1 %9, label %dec_label_pc_26ed, label %dec_label_pc_26e8, !insn.addr !100

dec_label_pc_26e8:                                ; preds = %dec_label_pc_2616
  call void @__stack_chk_fail(), !insn.addr !101
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !101
  br label %dec_label_pc_26ed, !insn.addr !101

dec_label_pc_26ed:                                ; preds = %dec_label_pc_26e8, %dec_label_pc_2616
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !102

; uselistorder directives
  uselistorder i64* %stack_var_-72, { 0, 2, 1 }
}

define i64 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_26f3:
  %rax.0.reg2mem = alloca i64, !insn.addr !103
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !104
  %1 = call i64 @_ZN14DiamondDerivedC1Ev(i64* nonnull %stack_var_-88), !insn.addr !105
  %2 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !106
  %3 = mul i64 %2, 2, !insn.addr !107
  %4 = call i64 @_ZN14DiamondDerivedD1Ev(i64* nonnull %stack_var_-88), !insn.addr !108
  %5 = and i64 %3, 4294967280, !insn.addr !109
  %6 = call i64 @__readfsqword(i64 40), !insn.addr !110
  %7 = icmp eq i64 %0, %6, !insn.addr !110
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !111
  br i1 %7, label %dec_label_pc_27ac, label %dec_label_pc_27a7, !insn.addr !111

dec_label_pc_27a7:                                ; preds = %dec_label_pc_26f3
  call void @__stack_chk_fail(), !insn.addr !112
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_27ac, !insn.addr !112

dec_label_pc_27ac:                                ; preds = %dec_label_pc_27a7, %dec_label_pc_26f3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !113
}

define i64 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_27b2:
  %0 = alloca i32
  %rax.0.reg2mem = alloca i64, !insn.addr !114
  %1 = load i32, i32* %0
  %stack_var_-24 = alloca i32, align 4
  %stack_var_-32 = alloca i64, align 8
  %stack_var_-40 = alloca i64, align 8
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !115
  %3 = call i64 @_ZN5PointC1Eii(i64* nonnull %stack_var_-40, i32 1, i32 2), !insn.addr !116
  %4 = call i64 @_ZN5PointC1Eii(i64* nonnull %stack_var_-32, i32 3, i32 4), !insn.addr !117
  %5 = call i64 @_ZNK5PointplERKS_(i64* nonnull %stack_var_-40, i64* nonnull %stack_var_-32), !insn.addr !118
  %6 = trunc i64 %5 to i32, !insn.addr !119
  store i32 %6, i32* %stack_var_-24, align 4, !insn.addr !119
  %7 = call i64 @_ZNK5PointeqERKS_(i64* nonnull %stack_var_-40, i64* nonnull %stack_var_-32), !insn.addr !120
  %8 = trunc i64 %7 to i8, !insn.addr !121
  %9 = bitcast i32* %stack_var_-24 to i64*, !insn.addr !122
  %10 = call i64 @_ZN5PointppEv(i64* nonnull %9), !insn.addr !122
  %11 = load i32, i32* %stack_var_-24, align 4, !insn.addr !123
  %12 = add i32 %11, %1, !insn.addr !124
  %13 = zext i32 %12 to i64, !insn.addr !124
  %14 = icmp eq i8 %8, 0, !insn.addr !125
  %. = select i1 %14, i64 10, i64 0
  %15 = add nuw nsw i64 %., %13, !insn.addr !126
  %16 = and i64 %15, 4294967295, !insn.addr !126
  %17 = call i64 @__readfsqword(i64 40), !insn.addr !127
  %18 = icmp eq i64 %2, %17, !insn.addr !127
  store i64 %16, i64* %rax.0.reg2mem, !insn.addr !128
  br i1 %18, label %dec_label_pc_2862, label %dec_label_pc_285d, !insn.addr !128

dec_label_pc_285d:                                ; preds = %dec_label_pc_27b2
  call void @__stack_chk_fail(), !insn.addr !129
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !129
  br label %dec_label_pc_2862, !insn.addr !129

dec_label_pc_2862:                                ; preds = %dec_label_pc_285d, %dec_label_pc_27b2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !130

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 2, 0 }
}

define i64 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_2864:
  %rax.0.reg2mem = alloca i64, !insn.addr !131
  %stack_var_-32 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !132
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 3, i32 7), !insn.addr !133
  %2 = call i128 @__asm_movsd(i64 4609434218613702656), !insn.addr !134
  %3 = call i128 @__asm_movapd(i128 %2), !insn.addr !135
  %4 = call i128 @__asm_movq(i64 4612811918334230528), !insn.addr !136
  %5 = call double @_Z12template_maxIdET_S0_S0_(double bitcast (i64 ptrtoint (i32* @0 to i64) to double), double bitcast (i64 ptrtoint (i32* @0 to i64) to double)), !insn.addr !137
  %6 = fptrunc double %5 to float, !insn.addr !137
  %7 = bitcast float %6 to i32, !insn.addr !137
  %8 = sext i32 %7 to i128, !insn.addr !137
  %9 = call i64 @__asm_movq.12(i128 %8), !insn.addr !138
  store i32 10, i32* %stack_var_-36, align 4, !insn.addr !139
  store i32 20, i32* %stack_var_-32, align 4, !insn.addr !140
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-36, i32* nonnull %stack_var_-32), !insn.addr !141
  %10 = call i128 @__asm_movsd(i64 %9), !insn.addr !142
  %11 = call i32 @__asm_cvttsd2si(i128 %10), !insn.addr !143
  %12 = add i32 %11, %1, !insn.addr !144
  %13 = load i32, i32* %stack_var_-36, align 4, !insn.addr !145
  %14 = add i32 %12, %13, !insn.addr !146
  %15 = load i32, i32* %stack_var_-32, align 4, !insn.addr !147
  %16 = add i32 %14, %15, !insn.addr !148
  %17 = zext i32 %16 to i64, !insn.addr !148
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !149
  %19 = icmp eq i64 %0, %18, !insn.addr !149
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !150
  br i1 %19, label %dec_label_pc_2904, label %dec_label_pc_28ff, !insn.addr !150

dec_label_pc_28ff:                                ; preds = %dec_label_pc_2864
  call void @__stack_chk_fail(), !insn.addr !151
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_2904, !insn.addr !151

dec_label_pc_2904:                                ; preds = %dec_label_pc_28ff, %dec_label_pc_2864
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 1, 0, 2 }
  uselistorder i32* %stack_var_-32, { 1, 0, 2 }
}

define i64 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_2906:
  %rax.0.reg2mem = alloca i64, !insn.addr !153
  %stack_var_-104 = alloca i64, align 8
  %stack_var_-152 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !154
  %1 = call i64 @_ZN9ContainerIiEC1Ev(i64* nonnull %stack_var_-152), !insn.addr !155
  %2 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 10), !insn.addr !156
  %3 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 20), !insn.addr !157
  %4 = call i64 @_ZN9ContainerIiE4pushEi(i64* nonnull %stack_var_-152, i32 30), !insn.addr !158
  %5 = call i64 @_ZNK9ContainerIiE3getEi(i64* nonnull %stack_var_-152, i32 0), !insn.addr !159
  %6 = trunc i64 %5 to i32, !insn.addr !160
  %7 = call i64 @_ZNK9ContainerIiE7getSizeEv(i64* nonnull %stack_var_-152), !insn.addr !161
  %8 = trunc i64 %7 to i32, !insn.addr !162
  %9 = call i64 @_ZN9ContainerIdEC1Ev(i64* nonnull %stack_var_-104), !insn.addr !163
  %10 = call i128 @__asm_movq(i64 4614253070214989087), !insn.addr !164
  %11 = ptrtoint i64* %stack_var_-104 to i64, !insn.addr !165
  %12 = bitcast i64 %11 to double, !insn.addr !166
  %13 = call i64 @_ZN9ContainerIdE4pushEd(double %12), !insn.addr !166
  %14 = call i128 @_ZNK9ContainerIdE3getEi(i64* nonnull %stack_var_-104, i32 0), !insn.addr !167
  %15 = call i64 @__asm_movq.12(i128 %14), !insn.addr !168
  %16 = add i32 %8, %6, !insn.addr !169
  %17 = call i128 @__asm_movsd(i64 %15), !insn.addr !170
  %18 = call i32 @__asm_cvttsd2si(i128 %17), !insn.addr !171
  %19 = add i32 %16, %18, !insn.addr !172
  %20 = zext i32 %19 to i64, !insn.addr !172
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !173
  %22 = icmp eq i64 %0, %21, !insn.addr !173
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !174
  br i1 %22, label %dec_label_pc_2a0f, label %dec_label_pc_2a0a, !insn.addr !174

dec_label_pc_2a0a:                                ; preds = %dec_label_pc_2906
  call void @__stack_chk_fail(), !insn.addr !175
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !175
  br label %dec_label_pc_2a0f, !insn.addr !175

dec_label_pc_2a0f:                                ; preds = %dec_label_pc_2a0a, %dec_label_pc_2906
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !176

; uselistorder directives
  uselistorder i64* %stack_var_-104, { 0, 2, 1 }
  uselistorder i64 (i64*, i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2a12:
  %rdi = alloca i64, align 8
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !177
  %2 = inttoptr i64 %1 to i64*, !insn.addr !177
  %3 = load i64, i64* %2, align 8, !insn.addr !177
  %4 = inttoptr i64 %3 to i32*, !insn.addr !178
  %5 = load i32, i32* %4, align 4, !insn.addr !178
  %6 = add i32 %5, 5, !insn.addr !179
  store i32 %6, i32* %4, align 4, !insn.addr !180
  %7 = bitcast i64* %rdi to i32*
  %8 = load i32, i32* %7, align 8, !insn.addr !181
  %9 = mul i32 %8, %arg2, !insn.addr !182
  %10 = load i64, i64* %2, align 8, !insn.addr !183
  %11 = inttoptr i64 %10 to i32*, !insn.addr !184
  %12 = load i32, i32* %11, align 4, !insn.addr !184
  %13 = add i32 %12, %9, !insn.addr !185
  %14 = zext i32 %13 to i64, !insn.addr !185
  ret i64 %14, !insn.addr !186
}

define i64 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_2a4e:
  %rax.0.reg2mem = alloca i64, !insn.addr !187
  %stack_var_-40 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !188
  store i32 10, i32* %stack_var_-40, align 4, !insn.addr !189
  %1 = bitcast i32* %stack_var_-40 to i64*, !insn.addr !190
  %2 = call i64 @_ZZ15test_cpp_lambdavENKUliE_clEi(i64* nonnull %1, i32 3), !insn.addr !190
  %3 = add i64 %2, 30, !insn.addr !191
  %4 = and i64 %3, 4294967295, !insn.addr !191
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !192
  %6 = icmp eq i64 %0, %5, !insn.addr !192
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !193
  br i1 %6, label %dec_label_pc_2abc, label %dec_label_pc_2ab7, !insn.addr !193

dec_label_pc_2ab7:                                ; preds = %dec_label_pc_2a4e
  call void @__stack_chk_fail(), !insn.addr !194
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !194
  br label %dec_label_pc_2abc, !insn.addr !194

dec_label_pc_2abc:                                ; preds = %dec_label_pc_2ab7, %dec_label_pc_2a4e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !195
}

define i64 @_Z18test_cpp_exceptionv(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2abe:
  %0 = call i64 @__cxa_allocate_exception(i64 4), !insn.addr !196
  %1 = inttoptr i64 %0 to i32*, !insn.addr !197
  store i32 42, i32* %1, align 4, !insn.addr !197
  %2 = call i64 @__cxa_throw(i64 %0, i64 ptrtoint (i64* @global_var_8b70 to i64), i64 0), !insn.addr !198
  ret i64 0, !insn.addr !199
}

define i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2be4:
  %rax.0.reg2mem = alloca i64, !insn.addr !200
  store i32 -1, i32* %arg2, align 4, !insn.addr !201
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !202
  %1 = icmp eq i32* %arg2, null, !insn.addr !203
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !204
  br i1 %1, label %dec_label_pc_2c14, label %dec_label_pc_2c07, !insn.addr !204

dec_label_pc_2c07:                                ; preds = %dec_label_pc_2be4
  %2 = bitcast i32* %arg2 to i64*, !insn.addr !205
  %3 = call i64 @_ZdlPvm(i64* %2, i64 4), !insn.addr !205
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !205
  br label %dec_label_pc_2c14, !insn.addr !205

dec_label_pc_2c14:                                ; preds = %dec_label_pc_2c07, %dec_label_pc_2be4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !206
}

define i64 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_2c17:
  %rax.0.reg2mem = alloca i64, !insn.addr !207
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-77 = alloca i64, align 8
  %stack_var_-48 = alloca i64, align 8
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-64 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !208
  %1 = call i64 @_Znwm(i64 4), !insn.addr !209
  %2 = inttoptr i64 %1 to i32*, !insn.addr !210
  store i32 100, i32* %2, align 4, !insn.addr !210
  %3 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1IS1_vEEPi(i64* nonnull %stack_var_-64, i32* %2), !insn.addr !211
  %4 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-64), !insn.addr !212
  %5 = inttoptr i64 %4 to i32*, !insn.addr !213
  store i32 200, i32* %5, align 4, !insn.addr !213
  %6 = bitcast i64* %stack_var_-64 to i64**, !insn.addr !214
  %7 = call i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** nonnull %6), !insn.addr !214
  %8 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_(i64* nonnull %stack_var_-56, i64* %7), !insn.addr !215
  %9 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* nonnull %stack_var_-56), !insn.addr !216
  %10 = inttoptr i64 %9 to i32*, !insn.addr !217
  %11 = load i32, i32* %10, align 4, !insn.addr !217
  %12 = call i64 @_Znam(i64 20), !insn.addr !218
  %13 = inttoptr i64 %12 to i32*, !insn.addr !219
  store i32 1, i32* %13, align 4, !insn.addr !219
  %14 = add i64 %12, 4, !insn.addr !220
  %15 = inttoptr i64 %14 to i32*, !insn.addr !221
  store i32 2, i32* %15, align 4, !insn.addr !221
  %16 = add i64 %12, 8, !insn.addr !222
  %17 = inttoptr i64 %16 to i32*, !insn.addr !223
  store i32 3, i32* %17, align 4, !insn.addr !223
  %18 = add i64 %12, 12, !insn.addr !224
  %19 = inttoptr i64 %18 to i32*, !insn.addr !225
  store i32 4, i32* %19, align 4, !insn.addr !225
  %20 = add i64 %12, 16, !insn.addr !226
  %21 = inttoptr i64 %20 to i32*, !insn.addr !227
  store i32 5, i32* %21, align 4, !insn.addr !227
  %22 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC1IPiS2_vbEET_(i64* nonnull %stack_var_-48, i32* %13), !insn.addr !228
  %23 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* nonnull %stack_var_-48, i64 2), !insn.addr !229
  %24 = inttoptr i64 %23 to i32*, !insn.addr !230
  %25 = load i32, i32* %24, align 4, !insn.addr !230
  %26 = call i64 @_Znwm(i64 4), !insn.addr !231
  %27 = inttoptr i64 %26 to i32*, !insn.addr !232
  store i32 500, i32* %27, align 4, !insn.addr !232
  %28 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* nonnull %stack_var_-40, i32* %27, i64* nonnull %stack_var_-77), !insn.addr !233
  %29 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* nonnull %stack_var_-40), !insn.addr !234
  %30 = inttoptr i64 %29 to i32*, !insn.addr !235
  %31 = load i32, i32* %30, align 4, !insn.addr !235
  %32 = add i32 %25, %11, !insn.addr !236
  %33 = add i32 %32, %31, !insn.addr !237
  %34 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(i64* nonnull %stack_var_-40), !insn.addr !238
  %35 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev(i64* nonnull %stack_var_-48), !insn.addr !239
  %36 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(i64* nonnull %stack_var_-56), !insn.addr !240
  %37 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(i64* nonnull %stack_var_-64), !insn.addr !241
  %38 = zext i32 %33 to i64, !insn.addr !242
  %39 = call i64 @__readfsqword(i64 40), !insn.addr !243
  %40 = icmp eq i64 %0, %39, !insn.addr !243
  store i64 %38, i64* %rax.0.reg2mem, !insn.addr !244
  br i1 %40, label %dec_label_pc_2dbf, label %dec_label_pc_2dba, !insn.addr !244

dec_label_pc_2dba:                                ; preds = %dec_label_pc_2c17
  call void @__stack_chk_fail(), !insn.addr !245
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !245
  br label %dec_label_pc_2dbf, !insn.addr !245

dec_label_pc_2dbf:                                ; preds = %dec_label_pc_2dba, %dec_label_pc_2c17
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !246

; uselistorder directives
  uselistorder i64 %12, { 0, 1, 2, 4, 3 }
  uselistorder i64 (i64*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev, { 1, 0 }
  uselistorder i32 5, { 5, 6, 0, 1, 2, 3, 4 }
  uselistorder i32 4, { 1, 0 }
  uselistorder i32 3, { 5, 0, 1, 2, 3, 4 }
  uselistorder i32 2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i64 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_2dc5:
  %stack_var_-60.4.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.3.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.2.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.1.reg2mem = alloca i32, !insn.addr !247
  %stack_var_-60.0.reg2mem = alloca i32, !insn.addr !247
  %0 = call i64 @_Znwm(i64 8), !insn.addr !248
  %1 = inttoptr i64 %0 to i64*, !insn.addr !249
  store i64 0, i64* %1, align 8, !insn.addr !249
  %2 = call i64 @_ZN12RTTIDerivedAC1Ev(i64* %1), !insn.addr !250
  %3 = call i64 @_Znwm(i64 8), !insn.addr !251
  %4 = inttoptr i64 %3 to i64*, !insn.addr !252
  store i64 0, i64* %4, align 8, !insn.addr !252
  %5 = call i64 @_ZN12RTTIDerivedBC1Ev(i64* %4), !insn.addr !253
  %6 = icmp eq i64 %0, 0, !insn.addr !254
  br i1 %6, label %dec_label_pc_2e41, label %dec_label_pc_2e22, !insn.addr !255

dec_label_pc_2e22:                                ; preds = %dec_label_pc_2dc5
  %7 = load i64, i64* %1, align 8, !insn.addr !256
  %8 = add i64 %7, -8, !insn.addr !257
  %9 = inttoptr i64 %8 to i64*, !insn.addr !257
  %10 = load i64, i64* %9, align 8, !insn.addr !257
  %11 = inttoptr i64 %10 to i64*, !insn.addr !258
  %12 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %11, i64* nonnull @global_var_8b98), !insn.addr !258
  %13 = trunc i64 %12 to i8, !insn.addr !259
  %14 = icmp eq i8 %13, 0, !insn.addr !259
  store i32 0, i32* %stack_var_-60.0.reg2mem, !insn.addr !260
  br i1 %14, label %dec_label_pc_2e4a, label %dec_label_pc_2e46, !insn.addr !260

dec_label_pc_2e41:                                ; preds = %dec_label_pc_2dc5
  %15 = call i64 @__cxa_bad_typeid(), !insn.addr !261
  br label %dec_label_pc_2e46, !insn.addr !261

dec_label_pc_2e46:                                ; preds = %dec_label_pc_2e22, %dec_label_pc_2e41
  store i32 10, i32* %stack_var_-60.0.reg2mem, !insn.addr !262
  br label %dec_label_pc_2e4a, !insn.addr !262

dec_label_pc_2e4a:                                ; preds = %dec_label_pc_2e46, %dec_label_pc_2e22
  %stack_var_-60.0.reload = load i32, i32* %stack_var_-60.0.reg2mem
  %16 = icmp eq i64 %3, 0, !insn.addr !263
  br i1 %16, label %dec_label_pc_2e72, label %dec_label_pc_2e53, !insn.addr !264

dec_label_pc_2e53:                                ; preds = %dec_label_pc_2e4a
  %17 = load i64, i64* %4, align 8, !insn.addr !265
  %18 = add i64 %17, -8, !insn.addr !266
  %19 = inttoptr i64 %18 to i64*, !insn.addr !266
  %20 = load i64, i64* %19, align 8, !insn.addr !266
  %21 = inttoptr i64 %20 to i64*, !insn.addr !267
  %22 = call i64 @_ZNKSt9type_infoeqERKS_(i64* %21, i64* nonnull @global_var_8b80), !insn.addr !267
  %23 = trunc i64 %22 to i8, !insn.addr !268
  %24 = icmp eq i8 %23, 0, !insn.addr !268
  store i32 %stack_var_-60.0.reload, i32* %stack_var_-60.1.reg2mem, !insn.addr !269
  br i1 %24, label %dec_label_pc_2e7b, label %dec_label_pc_2e77, !insn.addr !269

dec_label_pc_2e72:                                ; preds = %dec_label_pc_2e4a
  %25 = call i64 @__cxa_bad_typeid(), !insn.addr !270
  br label %dec_label_pc_2e77, !insn.addr !270

dec_label_pc_2e77:                                ; preds = %dec_label_pc_2e53, %dec_label_pc_2e72
  %26 = or i32 %stack_var_-60.0.reload, 20, !insn.addr !271
  store i32 %26, i32* %stack_var_-60.1.reg2mem, !insn.addr !271
  br label %dec_label_pc_2e7b, !insn.addr !271

dec_label_pc_2e7b:                                ; preds = %dec_label_pc_2e77, %dec_label_pc_2e53
  %stack_var_-60.1.reload = load i32, i32* %stack_var_-60.1.reg2mem
  store i32 %stack_var_-60.1.reload, i32* %stack_var_-60.2.reg2mem, !insn.addr !272
  br i1 %6, label %dec_label_pc_2ec0, label %dec_label_pc_2ea6, !insn.addr !272

dec_label_pc_2ea6:                                ; preds = %dec_label_pc_2e7b
  %27 = call i64 @__dynamic_cast(i64 %0, i64* nonnull @global_var_8bb0, i64* nonnull @global_var_8b98, i64 0), !insn.addr !273
  %28 = icmp eq i64 %27, 0, !insn.addr !274
  store i32 %stack_var_-60.1.reload, i32* %stack_var_-60.2.reg2mem, !insn.addr !275
  br i1 %28, label %dec_label_pc_2ec0, label %dec_label_pc_2eb1, !insn.addr !275

dec_label_pc_2eb1:                                ; preds = %dec_label_pc_2ea6
  %29 = inttoptr i64 %27 to i64*, !insn.addr !276
  %30 = call i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %29), !insn.addr !276
  %31 = trunc i64 %30 to i32, !insn.addr !277
  %32 = add i32 %stack_var_-60.1.reload, %31, !insn.addr !277
  store i32 %32, i32* %stack_var_-60.2.reg2mem, !insn.addr !277
  br label %dec_label_pc_2ec0, !insn.addr !277

dec_label_pc_2ec0:                                ; preds = %dec_label_pc_2e7b, %dec_label_pc_2eb1, %dec_label_pc_2ea6
  %stack_var_-60.2.reload = load i32, i32* %stack_var_-60.2.reg2mem
  store i32 %stack_var_-60.2.reload, i32* %stack_var_-60.3.reg2mem, !insn.addr !278
  br i1 %16, label %dec_label_pc_2f05, label %dec_label_pc_2eeb, !insn.addr !278

dec_label_pc_2eeb:                                ; preds = %dec_label_pc_2ec0
  %33 = call i64 @__dynamic_cast(i64 %3, i64* nonnull @global_var_8bb0, i64* nonnull @global_var_8b80, i64 0), !insn.addr !279
  %34 = icmp eq i64 %33, 0, !insn.addr !280
  store i32 %stack_var_-60.2.reload, i32* %stack_var_-60.3.reg2mem, !insn.addr !281
  br i1 %34, label %dec_label_pc_2f05, label %dec_label_pc_2ef6, !insn.addr !281

dec_label_pc_2ef6:                                ; preds = %dec_label_pc_2eeb
  %35 = inttoptr i64 %33 to i64*, !insn.addr !282
  %36 = call i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %35), !insn.addr !282
  %37 = trunc i64 %36 to i32, !insn.addr !283
  %38 = add i32 %stack_var_-60.2.reload, %37, !insn.addr !283
  store i32 %38, i32* %stack_var_-60.3.reg2mem, !insn.addr !283
  br label %dec_label_pc_2f05, !insn.addr !283

dec_label_pc_2f05:                                ; preds = %dec_label_pc_2ec0, %dec_label_pc_2ef6, %dec_label_pc_2eeb
  %stack_var_-60.3.reload = load i32, i32* %stack_var_-60.3.reg2mem
  br i1 %6, label %dec_label_pc_2f3a, label %dec_label_pc_2f0e, !insn.addr !284

dec_label_pc_2f0e:                                ; preds = %dec_label_pc_2f05
  %39 = load i64, i64* %1, align 8, !insn.addr !285
  %40 = add i64 %39, -8, !insn.addr !286
  %41 = inttoptr i64 %40 to i64*, !insn.addr !286
  %42 = load i64, i64* %41, align 8, !insn.addr !286
  %43 = inttoptr i64 %42 to i64*, !insn.addr !287
  %44 = call i64 @_ZNKSt9type_info4nameEv(i64* %43), !insn.addr !287
  %45 = inttoptr i64 %44 to i8*, !insn.addr !288
  %46 = call i32 @strlen(i8* %45), !insn.addr !288
  %47 = add i32 %46, %stack_var_-60.3.reload, !insn.addr !289
  store i32 %47, i32* %stack_var_-60.4.reg2mem
  br label %dec_label_pc_2f4e

dec_label_pc_2f3a:                                ; preds = %dec_label_pc_2f05
  %48 = call i64 @__cxa_bad_typeid(), !insn.addr !290
  store i32 %stack_var_-60.3.reload, i32* %stack_var_-60.4.reg2mem, !insn.addr !290
  br label %dec_label_pc_2f4e, !insn.addr !290

dec_label_pc_2f4e:                                ; preds = %dec_label_pc_2f0e, %dec_label_pc_2f3a
  %stack_var_-60.4.reload = load i32, i32* %stack_var_-60.4.reg2mem
  %49 = zext i32 %stack_var_-60.4.reload to i64, !insn.addr !291
  ret i64 %49, !insn.addr !292

; uselistorder directives
  uselistorder i64 %33, { 1, 0 }
  uselistorder i32 %stack_var_-60.2.reload, { 2, 1, 0 }
  uselistorder i64 %27, { 1, 0 }
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

define i64 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_2f6f:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i32 @puts(i8* bitcast (i8** @global_var_5040 to i8*)), !insn.addr !293
  %3 = call i64 @_Z20test_cpp_member_funcv(), !insn.addr !294
  %4 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5064 to i8*)), !insn.addr !295
  %5 = call i64 @_Z20test_cpp_constructorv(), !insn.addr !296
  %6 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5082 to i8*)), !insn.addr !297
  %7 = call i64 @_Z21test_cpp_virtual_funcv(), !insn.addr !298
  %8 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_509e to i8*)), !insn.addr !299
  %9 = call i64 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !300
  %10 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50ba to i8*)), !insn.addr !301
  %11 = call i64 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !302
  %12 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50d6 to i8*)), !insn.addr !303
  %13 = call i64 @_Z26test_cpp_operator_overloadv(), !insn.addr !304
  %14 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_50f3 to i8*)), !insn.addr !305
  %15 = call i64 @_Z22test_cpp_template_funcv(), !insn.addr !306
  %16 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_510f to i8*)), !insn.addr !307
  %17 = call i64 @_Z23test_cpp_template_classv(), !insn.addr !308
  %18 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_512b to i8*)), !insn.addr !309
  %19 = call i64 @_Z15test_cpp_lambdav(), !insn.addr !310
  %20 = and i64 %19, 4294967295, !insn.addr !311
  %21 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5147 to i8*)), !insn.addr !312
  %22 = call i64 @_Z18test_cpp_exceptionv(i64 ptrtoint (i8** @global_var_5147 to i64), i64 %20, i64 %1), !insn.addr !313
  %23 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5163 to i8*)), !insn.addr !314
  %24 = call i64 @_Z18test_cpp_smart_ptrv(), !insn.addr !315
  %25 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_5180 to i8*)), !insn.addr !316
  %26 = call i64 @_Z13test_cpp_rttiv(), !insn.addr !317
  %27 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_519d to i8*)), !insn.addr !318
  %28 = sext i32 %27 to i64, !insn.addr !318
  ret i64 %28, !insn.addr !319

; uselistorder directives
  uselistorder i8** @global_var_5147, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_30cd:
  %0 = call i64 @_Z20test_cpp_oo_featuresv(), !insn.addr !320
  ret i64 0, !insn.addr !321
}

define i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_30e2:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3), !insn.addr !322
  ret i64 %0, !insn.addr !323
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC1IS1_vEES0_RKS1_(i64* %result, i32* %arg2, i64* %arg3) local_unnamed_addr {
dec_label_pc_3110:
  %0 = bitcast i64* %arg3 to i64**, !insn.addr !324
  %1 = call i64 @_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %0), !insn.addr !324
  ret i64 %1, !insn.addr !325
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_313e:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !326
  %1 = inttoptr i64 %0 to i64*, !insn.addr !327
  %2 = load i64, i64* %1, align 8, !insn.addr !327
  %3 = icmp eq i64 %2, 0, !insn.addr !328
  br i1 %3, label %dec_label_pc_3190, label %dec_label_pc_3167, !insn.addr !329

dec_label_pc_3167:                                ; preds = %dec_label_pc_313e
  %4 = inttoptr i64 %0 to i32***, !insn.addr !330
  %5 = call i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result), !insn.addr !331
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !332
  %7 = load i64, i64* %6, align 8, !insn.addr !333
  %8 = inttoptr i64 %5 to i64*, !insn.addr !334
  %9 = inttoptr i64 %7 to i32*, !insn.addr !334
  %10 = call i64 @_ZZ18test_cpp_smart_ptrvENKUlPiE_clES_(i64* %8, i32* %9), !insn.addr !334
  br label %dec_label_pc_3190, !insn.addr !334

dec_label_pc_3190:                                ; preds = %dec_label_pc_3167, %dec_label_pc_313e
  store i64 0, i64* %1, align 8, !insn.addr !335
  ret i64 %0, !insn.addr !336
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_31a2:
  %0 = call i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result), !insn.addr !337
  ret i64 %0, !insn.addr !338
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_(i64* %result, i32* %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_31c4:
  %stack_var_-40 = alloca i32*, align 8
  store i32* %arg2, i32** %stack_var_-40, align 8, !insn.addr !339
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !340
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !340
  %2 = bitcast i32** %stack_var_-40 to i32***, !insn.addr !341
  %3 = call i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i64* %result, i32*** nonnull %2, i64** %1), !insn.addr !341
  ret i64 %3, !insn.addr !342

; uselistorder directives
  uselistorder i32** %stack_var_-40, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_3202:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !343
  %1 = ptrtoint i64* %0 to i64, !insn.addr !343
  ret i64 %1, !insn.addr !344
}

define i64 @_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_321c:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result), !insn.addr !345
  ret i64 %0, !insn.addr !346
}

define i64 @_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_3236:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result), !insn.addr !347
  ret i64 %0, !insn.addr !348
}

define i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_3250:
  %0 = bitcast i64* %arg1 to i64**, !insn.addr !349
  ret i64** %0, !insn.addr !349
}

define i64 @_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC1IRS0_RKS1_Lb1EEEOT_OT0_(i64* %result, i32*** %arg2, i64** %arg3) local_unnamed_addr {
dec_label_pc_325e:
  %0 = bitcast i64** %arg3 to i64*, !insn.addr !350
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !350
  %2 = ptrtoint i64** %1 to i64, !insn.addr !350
  %3 = bitcast i32*** %arg2 to i64*, !insn.addr !351
  %4 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %3), !insn.addr !351
  %5 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i64* %result, i32*** %4, i64 %2), !insn.addr !352
  ret i64 %5, !insn.addr !353
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_32ac:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !354
  %1 = bitcast i32** %0 to i64*, !insn.addr !355
  ret i64* %1, !insn.addr !355
}

define i64 @_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_32c6:
  %0 = call i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %result), !insn.addr !356
  %1 = ptrtoint i64* %0 to i64, !insn.addr !356
  ret i64 %1, !insn.addr !357
}

define i64 @_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_32e0:
  %0 = call i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %result), !insn.addr !358
  %1 = load i64, i64* %0, align 8, !insn.addr !359
  ret i64 %1, !insn.addr !360
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_(i64* %result, i32*** %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_32fe:
  %0 = inttoptr i64 %arg3 to i64*, !insn.addr !361
  %1 = call i64** @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE(i64* %0), !insn.addr !361
  %2 = bitcast i64** %1 to i64*, !insn.addr !362
  %3 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %2), !insn.addr !362
  %4 = bitcast i32*** %arg2 to i64*, !insn.addr !363
  %5 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %4), !insn.addr !363
  %6 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1IRS0_EEOT_(i64* %result, i32*** %5), !insn.addr !364
  ret i64 %6, !insn.addr !365

; uselistorder directives
  uselistorder i64** (i64*)* @_ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE, { 2, 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_3353:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1), !insn.addr !366
  %1 = inttoptr i64 %0 to i32**, !insn.addr !367
  ret i32** %1, !insn.addr !367
}

define i64* @_ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_336d:
  %0 = call i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !368
  ret i64* %0, !insn.addr !369
}

define i64* @_ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3387:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !370
  %1 = bitcast i32** %0 to i64*, !insn.addr !371
  ret i64* %1, !insn.addr !371
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_33a2:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %result, i64* %arg2), !insn.addr !372
  ret i64 %0, !insn.addr !373
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_33c8:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !374
  ret i64 %0, !insn.addr !375
}

define i64* @_ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_33e2:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1), !insn.addr !376
  %1 = inttoptr i64 %0 to i64*, !insn.addr !377
  ret i64* %1, !insn.addr !377
}

define i32** @_ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_33fc:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1), !insn.addr !378
  %1 = inttoptr i64 %0 to i32**, !insn.addr !379
  ret i32** %1, !insn.addr !379
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3416:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !380
}

define i64 @_ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3425:
  %0 = call i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1), !insn.addr !381
  ret i64 %0, !insn.addr !382
}

define i64 @_ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_343f:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !383
  ret i64 %0, !insn.addr !384
}

define i64 @_ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_3459:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !385
}

define i64 @_Z41__static_initialization_and_destruction_0ii(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3467:
  %rax.0.reg2mem = alloca i64, !insn.addr !386
  %0 = icmp eq i32 %arg1, 1, !insn.addr !387
  %1 = icmp eq i32 %arg2, 65535, !insn.addr !388
  %2 = icmp eq i1 %0, %1
  br i1 %2, label %dec_label_pc_3488, label %dec_label_pc_34ba, !insn.addr !389

dec_label_pc_3488:                                ; preds = %dec_label_pc_3467
  %3 = call i64 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !390
  %4 = load i64, i64* inttoptr (i64 36856 to i64*), align 8, !insn.addr !391
  %5 = inttoptr i64 %4 to void (i64*)*, !insn.addr !392
  %6 = call i32 @__cxa_atexit(void (i64*)* %5, i64* nonnull @global_var_9038, i64* nonnull @global_var_9008), !insn.addr !392
  %7 = sext i32 %6 to i64, !insn.addr !392
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !392
  br label %dec_label_pc_34ba, !insn.addr !392

dec_label_pc_34ba:                                ; preds = %dec_label_pc_3467, %dec_label_pc_3488
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !393

; uselistorder directives
  uselistorder label %dec_label_pc_34ba, { 1, 0 }
}

define i64 @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_34bd:
  %0 = call i64 @_Z41__static_initialization_and_destruction_0ii(i32 1, i32 65535), !insn.addr !394
  ret i64 %0, !insn.addr !395

; uselistorder directives
  uselistorder i32 65535, { 1, 0 }
}

define i64 @_ZNKSt9type_info4nameEv(i64* %result) local_unnamed_addr {
dec_label_pc_34d6:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !396
  %2 = inttoptr i64 %1 to i64*, !insn.addr !396
  %3 = load i64, i64* %2, align 8, !insn.addr !396
  %4 = inttoptr i64 %3 to i8*, !insn.addr !397
  %5 = load i8, i8* %4, align 1, !insn.addr !397
  %6 = icmp eq i8 %5, 42, !insn.addr !398
  %7 = zext i1 %6 to i64
  %storemerge = add i64 %3, %7
  ret i64 %storemerge, !insn.addr !399
}

define i64 @_ZNKSt9type_infoeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_350a:
  %storemerge.reg2mem = alloca i64, !insn.addr !400
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 8, !insn.addr !401
  %3 = inttoptr i64 %2 to i64*, !insn.addr !401
  %4 = load i64, i64* %3, align 8, !insn.addr !401
  %5 = add i64 %0, 8, !insn.addr !402
  %6 = inttoptr i64 %5 to i64*, !insn.addr !402
  %7 = load i64, i64* %6, align 8, !insn.addr !402
  %8 = icmp eq i64 %4, %7, !insn.addr !403
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !404
  br i1 %8, label %dec_label_pc_356d, label %dec_label_pc_3533, !insn.addr !404

dec_label_pc_3533:                                ; preds = %dec_label_pc_350a
  %9 = inttoptr i64 %4 to i8*, !insn.addr !405
  %10 = load i8, i8* %9, align 1, !insn.addr !405
  %11 = icmp eq i8 %10, 42, !insn.addr !406
  br i1 %11, label %dec_label_pc_3568, label %dec_label_pc_3542, !insn.addr !407

dec_label_pc_3542:                                ; preds = %dec_label_pc_3533
  %12 = inttoptr i64 %7 to i8*, !insn.addr !408
  %13 = call i32 @strcmp(i8* %9, i8* %12), !insn.addr !408
  %14 = icmp eq i32 %13, 0, !insn.addr !409
  %15 = icmp eq i1 %14, false, !insn.addr !410
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !410
  br i1 %15, label %dec_label_pc_3568, label %dec_label_pc_356d, !insn.addr !410

dec_label_pc_3568:                                ; preds = %dec_label_pc_3542, %dec_label_pc_3533
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !411
  br label %dec_label_pc_356d, !insn.addr !411

dec_label_pc_356d:                                ; preds = %dec_label_pc_350a, %dec_label_pc_3542, %dec_label_pc_3568
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !412

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_356d, { 2, 1, 0 }
}

define i64 @_ZN11SimpleClassC1EiPKc(i64* %result, i32 %arg2, i8* %arg3) local_unnamed_addr {
dec_label_pc_3570:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !413
  store i32 %arg2, i32* %1, align 4, !insn.addr !413
  %2 = add i64 %0, 4, !insn.addr !414
  %3 = inttoptr i64 %2 to i8*, !insn.addr !415
  %4 = call i8* @strncpy(i8* %3, i8* %arg3, i32 31), !insn.addr !415
  %5 = add i64 %0, 35, !insn.addr !416
  %6 = inttoptr i64 %5 to i8*, !insn.addr !416
  store i8 0, i8* %6, align 1, !insn.addr !416
  ret i64 %0, !insn.addr !417

; uselistorder directives
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i8 0, { 3, 0, 1, 2, 4 }
}

define i64 @_ZNK11SimpleClass8getValueEv(i64* %result) local_unnamed_addr {
dec_label_pc_35b8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, 4294967295, !insn.addr !418
  ret i64 %2, !insn.addr !419
}

define i64 @_ZN11SimpleClass8setValueEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_35cc:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !420
  store i32 %arg2, i32* %1, align 4, !insn.addr !420
  ret i64 %0, !insn.addr !421
}

define i64 @_ZNK11SimpleClass7computeEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_35e8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = mul i32 %3, %arg2, !insn.addr !422
  %5 = add i64 %2, 4, !insn.addr !423
  %6 = inttoptr i64 %5 to i8*, !insn.addr !424
  %7 = call i32 @strlen(i8* %6), !insn.addr !424
  %8 = add i32 %7, %4, !insn.addr !425
  %9 = zext i32 %8 to i64, !insn.addr !425
  ret i64 %9, !insn.addr !426
}

define i64 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_3620:
  ret i64 ptrtoint (i64* @global_var_1234 to i64), !insn.addr !427
}

define i64 @_ZN14LifecycleClassC1Em(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_3630:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !428
  %rdi.1.reg2mem = alloca i64, !insn.addr !428
  %rdi.0.reg2mem = alloca i64, !insn.addr !428
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !428
  %.pre-phi.reg2mem = alloca i64, !insn.addr !428
  %1 = ptrtoint i64* %result to i64
  %2 = load i32, i32* %0
  %3 = add i64 %1, 8, !insn.addr !429
  %4 = inttoptr i64 %3 to i64*, !insn.addr !429
  store i64 %arg2, i64* %4, align 8, !insn.addr !429
  %5 = icmp ult i64 %arg2, 2305843009213693951
  br i1 %5, label %dec_label_pc_3663, label %dec_label_pc_3683, !insn.addr !430

dec_label_pc_3663:                                ; preds = %dec_label_pc_3630
  %6 = mul i64 %arg2, 4, !insn.addr !431
  %7 = call i64 @_Znam(i64 %6), !insn.addr !432
  store i64 %7, i64* %result, align 8, !insn.addr !433
  store i64 %6, i64* %rdi.1.reg2mem, !insn.addr !434
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !434
  br label %dec_label_pc_36b4, !insn.addr !434

dec_label_pc_3683:                                ; preds = %dec_label_pc_3630
  %8 = call i64 @__cxa_throw_bad_array_new_length(), !insn.addr !435
  %.pre = sext i32 %2 to i64, !insn.addr !436
  store i64 %.pre, i64* %.pre-phi.reg2mem, !insn.addr !435
  store i64 %1, i64* %rdi.0.reg2mem, !insn.addr !435
  br label %dec_label_pc_3688, !insn.addr !435

dec_label_pc_3688:                                ; preds = %dec_label_pc_36b4, %dec_label_pc_3683
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  %9 = mul i32 %stack_var_-16.0.reload, 10, !insn.addr !437
  %10 = mul i64 %.pre-phi.reload, 4, !insn.addr !438
  %11 = add i64 %rdi.0.reload, %10, !insn.addr !439
  %12 = inttoptr i64 %11 to i32*, !insn.addr !440
  store i32 %9, i32* %12, align 4, !insn.addr !440
  %13 = add i32 %stack_var_-16.0.reload, 1, !insn.addr !441
  store i64 %rdi.0.reload, i64* %rdi.1.reg2mem, !insn.addr !441
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !441
  br label %dec_label_pc_36b4, !insn.addr !441

dec_label_pc_36b4:                                ; preds = %dec_label_pc_3688, %dec_label_pc_3663
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %14 = sext i32 %storemerge.reload to i64
  %15 = icmp ult i64 %14, %arg2, !insn.addr !442
  store i64 %14, i64* %.pre-phi.reg2mem, !insn.addr !443
  store i32 %storemerge.reload, i32* %stack_var_-16.0.reg2mem, !insn.addr !443
  store i64 %rdi.1.reload, i64* %rdi.0.reg2mem, !insn.addr !443
  br i1 %15, label %dec_label_pc_3688, label %dec_label_pc_36be, !insn.addr !443

dec_label_pc_36be:                                ; preds = %dec_label_pc_36b4
  store i32 ptrtoint (i32* @global_var_9035 to i32), i32* @global_var_9034, align 4, !insn.addr !444
  ret i64 ptrtoint (i32* @global_var_9035 to i64), !insn.addr !445

; uselistorder directives
  uselistorder i32 %storemerge.reload, { 1, 0 }
  uselistorder i32 %stack_var_-16.0.reload, { 1, 0 }
  uselistorder i64* %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.0.reg2mem, { 1, 0 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* @global_var_9035, { 1, 0 }
  uselistorder i32 10, { 1, 0, 2, 3, 5, 4 }
  uselistorder i64 %arg2, { 1, 0, 2, 3 }
}

define i64 @_ZN14LifecycleClassD1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_36d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %result, null, !insn.addr !446
  br i1 %2, label %dec_label_pc_36fb, label %dec_label_pc_36ec, !insn.addr !447

dec_label_pc_36ec:                                ; preds = %dec_label_pc_36d0
  %3 = and i64 %1, 4294967295
  %4 = inttoptr i64 %3 to i64*, !insn.addr !448
  call void @_ZdaPv(i64* nonnull %result, i64* %4), !insn.addr !448
  br label %dec_label_pc_36fb, !insn.addr !448

dec_label_pc_36fb:                                ; preds = %dec_label_pc_36ec, %dec_label_pc_36d0
  %5 = load i32, i32* @global_var_9034, align 4, !insn.addr !449
  %6 = add i32 %5, -1, !insn.addr !450
  %7 = zext i32 %6 to i64, !insn.addr !450
  store i32 %6, i32* @global_var_9034, align 4, !insn.addr !451
  ret i64 %7, !insn.addr !452
}

define i64 @_ZNK14LifecycleClass7getDataEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_370e:
  %storemerge.reg2mem = alloca i64, !insn.addr !453
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !454
  %2 = inttoptr i64 %1 to i64*, !insn.addr !454
  %3 = load i64, i64* %2, align 8, !insn.addr !454
  %4 = icmp ugt i64 %3, %arg2, !insn.addr !455
  %5 = icmp eq i1 %4, false, !insn.addr !456
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !456
  br i1 %5, label %dec_label_pc_3747, label %dec_label_pc_372c, !insn.addr !456

dec_label_pc_372c:                                ; preds = %dec_label_pc_370e
  %6 = mul i64 %arg2, 4, !insn.addr !457
  %7 = add i64 %6, %0, !insn.addr !458
  %8 = inttoptr i64 %7 to i32*, !insn.addr !459
  %9 = load i32, i32* %8, align 4, !insn.addr !459
  %10 = zext i32 %9 to i64, !insn.addr !459
  store i64 %10, i64* %storemerge.reg2mem, !insn.addr !460
  br label %dec_label_pc_3747, !insn.addr !460

dec_label_pc_3747:                                ; preds = %dec_label_pc_370e, %dec_label_pc_372c
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !461

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_3747, { 1, 0 }
}

define i64 @_ZN14LifecycleClass16getInstanceCountEv() local_unnamed_addr {
dec_label_pc_3749:
  %0 = load i32, i32* @global_var_9034, align 4, !insn.addr !462
  %1 = zext i32 %0 to i64, !insn.addr !462
  ret i64 %1, !insn.addr !463

; uselistorder directives
  uselistorder i32* @global_var_9034, { 3, 2, 1, 0 }
}

define i64 @_ZN4Base12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_375a:
  %0 = add i32 %arg2, 1, !insn.addr !464
  %1 = zext i32 %0 to i64, !insn.addr !464
  ret i64 %1, !insn.addr !465
}

define i64 @_ZNK4Base7getNameEv(i64* %result) {
dec_label_pc_3772:
  ret i64 ptrtoint ([5 x i8]* @global_var_502d to i64), !insn.addr !466
}

define i64 @_ZN4BaseD1Ev(i64* %result) {
dec_label_pc_3788:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), i64* %result, align 8, !insn.addr !467
  ret i64 %0, !insn.addr !468
}

define i64 @_ZN4BaseD0Ev(i64* %result) {
dec_label_pc_37a6:
  %0 = call i64 @_ZN4BaseD1Ev(i64* %result), !insn.addr !469
  %1 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !470
  ret i64 %1, !insn.addr !471
}

define i64 @_ZN4BaseC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_37d6:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), i64* %result, align 8, !insn.addr !472
  ret i64 %0, !insn.addr !473

; uselistorder directives
  uselistorder i64 (i64*, i32)* @_ZN4Base12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8b50_type* @global_var_8b50 to i64), { 2, 1, 0 }
}

define i64 @_ZN7DerivedC1Ei(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_37f4:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN4BaseC1Ev(i64* %result), !insn.addr !474
  store i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), i64* %result, align 8, !insn.addr !475
  %2 = add i64 %0, 8, !insn.addr !476
  %3 = inttoptr i64 %2 to i32*, !insn.addr !476
  store i32 %arg2, i32* %3, align 4, !insn.addr !476
  ret i64 %0, !insn.addr !477

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN7Derived12virtual_funcEi(i64* %result, i32 %arg2) {
dec_label_pc_382e:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 8, !insn.addr !478
  %2 = inttoptr i64 %1 to i32*, !insn.addr !478
  %3 = load i32, i32* %2, align 4, !insn.addr !478
  %4 = mul i32 %3, %arg2, !insn.addr !479
  %5 = zext i32 %4 to i64, !insn.addr !479
  ret i64 %5, !insn.addr !480
}

define i64 @_ZNK7Derived7getNameEv(i64* %result) {
dec_label_pc_384a:
  ret i64 ptrtoint ([8 x i8]* @global_var_5032 to i64), !insn.addr !481
}

define i64 @_ZN5BaseA5funcAEv(i64* %result) {
dec_label_pc_3860:
  ret i64 10, !insn.addr !482
}

define i64 @_ZN5BaseAD1Ev(i64* %result) {
dec_label_pc_3874:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), i64* %result, align 8, !insn.addr !483
  ret i64 %0, !insn.addr !484
}

define i64 @_ZN5BaseAD0Ev(i64* %result) {
dec_label_pc_3892:
  %0 = call i64 @_ZN5BaseAD1Ev(i64* %result), !insn.addr !485
  %1 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !486
  ret i64 %1, !insn.addr !487
}

define i64 @_ZN5BaseB5funcBEv(i64* %result) {
dec_label_pc_38c2:
  ret i64 20, !insn.addr !488
}

define i64 @_ZN5BaseBD1Ev(i64* %result) {
dec_label_pc_38d6:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), i64* %result, align 8, !insn.addr !489
  ret i64 %0, !insn.addr !490
}

define i64 @_ZN5BaseBD0Ev(i64* %result) {
dec_label_pc_38f4:
  %0 = call i64 @_ZN5BaseBD1Ev(i64* %result), !insn.addr !491
  %1 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !492
  ret i64 %1, !insn.addr !493
}

define i64 @_ZN12MultiDerived5funcAEv(i64* %result) {
dec_label_pc_3924:
  ret i64 30, !insn.addr !494
}

define i64 @_ZN12MultiDerived5funcBEv(i64* %result) {
dec_label_pc_3938:
  ret i64 40, !insn.addr !495
}

define i64 @_ZThn16_N12MultiDerived5funcBEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_394b:
  %0 = add i64 %arg1, -16, !insn.addr !496
  %1 = inttoptr i64 %0 to i64*, !insn.addr !497
  %2 = call i64 @_ZN12MultiDerived5funcBEv(i64* %1), !insn.addr !497
  ret i64 %2, !insn.addr !497
}

define i64 @_ZN5BaseAC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3956:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), i64* %result, align 8, !insn.addr !498
  ret i64 %0, !insn.addr !499

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8af8_type* @global_var_8af8 to i64), { 1, 0 }
}

define i64 @_ZN5BaseBC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3974:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), i64* %result, align 8, !insn.addr !500
  ret i64 %0, !insn.addr !501

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8ad0_type* @global_var_8ad0 to i64), { 1, 0 }
}

define i64 @_ZN12MultiDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3992:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN5BaseAC1Ev(i64* %result), !insn.addr !502
  %2 = add i64 %0, 16, !insn.addr !503
  %3 = inttoptr i64 %2 to i64*, !insn.addr !504
  %4 = call i64 @_ZN5BaseBC1Ev(i64* %3), !insn.addr !504
  store i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), i64* %result, align 8, !insn.addr !505
  store i64 ptrtoint (i64* @global_var_8aa8 to i64), i64* %3, align 8, !insn.addr !506
  ret i64 %0, !insn.addr !507
}

define i64 @_ZN11VirtualBase4funcEv(i64* %result) {
dec_label_pc_39de:
  ret i64 100, !insn.addr !508
}

define i64 @_ZN11VirtualBaseD1Ev(i64* %result) {
dec_label_pc_39f2:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), i64* %result, align 8, !insn.addr !509
  ret i64 %0, !insn.addr !510
}

define i64 @_ZN11VirtualBaseD0Ev(i64* %result) {
dec_label_pc_3a10:
  %0 = call i64 @_ZN11VirtualBaseD1Ev(i64* %result), !insn.addr !511
  %1 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !512
  ret i64 %1, !insn.addr !513
}

define i64 @_ZN7MiddleA4funcEv(i64* %result) {
dec_label_pc_3a40:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !514
  %2 = inttoptr i64 %1 to i64*, !insn.addr !515
  %3 = load i64, i64* %2, align 8, !insn.addr !515
  %4 = add i64 %0, 8, !insn.addr !516
  %5 = add i64 %4, %3, !insn.addr !517
  %6 = inttoptr i64 %5 to i32*, !insn.addr !517
  %7 = load i32, i32* %6, align 4, !insn.addr !517
  %8 = add i32 %7, 150, !insn.addr !518
  %9 = zext i32 %8 to i64, !insn.addr !518
  ret i64 %9, !insn.addr !519
}

define i64 @_ZTv0_n24_N7MiddleA4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3a6e:
  %0 = add i64 %arg1, -24, !insn.addr !520
  %1 = inttoptr i64 %0 to i64*, !insn.addr !520
  %2 = load i64, i64* %1, align 8, !insn.addr !520
  %3 = add i64 %2, %arg1, !insn.addr !520
  %4 = inttoptr i64 %3 to i64*, !insn.addr !521
  %5 = call i64 @_ZN7MiddleA4funcEv(i64* %4), !insn.addr !521
  ret i64 %5, !insn.addr !521

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleA4funcEv, { 1, 0 }
}

define i64 @_ZN7MiddleB4funcEv(i64* %result) {
dec_label_pc_3a7c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !522
  %2 = inttoptr i64 %1 to i64*, !insn.addr !523
  %3 = load i64, i64* %2, align 8, !insn.addr !523
  %4 = add i64 %0, 8, !insn.addr !524
  %5 = add i64 %4, %3, !insn.addr !525
  %6 = inttoptr i64 %5 to i32*, !insn.addr !525
  %7 = load i32, i32* %6, align 4, !insn.addr !525
  %8 = add i32 %7, 200, !insn.addr !526
  %9 = zext i32 %8 to i64, !insn.addr !526
  ret i64 %9, !insn.addr !527
}

define i64 @_ZTv0_n24_N7MiddleB4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3aaa:
  %0 = add i64 %arg1, -24, !insn.addr !528
  %1 = inttoptr i64 %0 to i64*, !insn.addr !528
  %2 = load i64, i64* %1, align 8, !insn.addr !528
  %3 = add i64 %2, %arg1, !insn.addr !528
  %4 = inttoptr i64 %3 to i64*, !insn.addr !529
  %5 = call i64 @_ZN7MiddleB4funcEv(i64* %4), !insn.addr !529
  ret i64 %5, !insn.addr !529

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN7MiddleB4funcEv, { 1, 0 }
}

define i64 @_ZN14DiamondDerived4funcEv(i64* %result) {
dec_label_pc_3ab8:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, -24, !insn.addr !530
  %2 = inttoptr i64 %1 to i64*, !insn.addr !531
  %3 = load i64, i64* %2, align 8, !insn.addr !531
  %4 = add i64 %0, 8, !insn.addr !532
  %5 = add i64 %4, %3, !insn.addr !533
  %6 = inttoptr i64 %5 to i32*, !insn.addr !533
  %7 = load i32, i32* %6, align 4, !insn.addr !533
  %8 = add i32 %7, 250, !insn.addr !534
  %9 = zext i32 %8 to i64, !insn.addr !534
  ret i64 %9, !insn.addr !535
}

define i64 @_ZTv0_n24_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3ae6:
  %0 = add i64 %arg1, -24, !insn.addr !536
  %1 = inttoptr i64 %0 to i64*, !insn.addr !536
  %2 = load i64, i64* %1, align 8, !insn.addr !536
  %3 = add i64 %2, %arg1, !insn.addr !536
  %4 = inttoptr i64 %3 to i64*, !insn.addr !537
  %5 = call i64 @_ZN14DiamondDerived4funcEv(i64* %4), !insn.addr !537
  ret i64 %5, !insn.addr !537
}

define i64 @_ZThn16_N14DiamondDerived4funcEv(i64 %arg1) local_unnamed_addr {
dec_label_pc_3af3:
  %0 = add i64 %arg1, -16, !insn.addr !538
  %1 = inttoptr i64 %0 to i64*, !insn.addr !539
  %2 = call i64 @_ZN14DiamondDerived4funcEv(i64* %1), !insn.addr !539
  ret i64 %2, !insn.addr !539
}

define i64 @_ZN11VirtualBaseC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3afe:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), i64* %result, align 8, !insn.addr !540
  ret i64 %0, !insn.addr !541

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8a50_type* @global_var_8a50 to i64), { 1, 0 }
}

define i64 @_ZN7MiddleAC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3b1c:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !542
  %2 = add i64 %1, -24, !insn.addr !543
  %3 = inttoptr i64 %2 to i64*, !insn.addr !544
  %4 = load i64, i64* %3, align 8, !insn.addr !544
  %5 = add i64 %4, %1, !insn.addr !545
  %6 = add i64 %0, 8, !insn.addr !546
  %7 = inttoptr i64 %6 to i64*, !insn.addr !546
  %8 = load i64, i64* %7, align 8, !insn.addr !546
  %9 = inttoptr i64 %5 to i64*, !insn.addr !547
  store i64 %8, i64* %9, align 8, !insn.addr !547
  ret i64 %8, !insn.addr !548

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleAD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3b60:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !549
  %2 = add i64 %1, -24, !insn.addr !550
  %3 = inttoptr i64 %2 to i64*, !insn.addr !551
  %4 = load i64, i64* %3, align 8, !insn.addr !551
  %5 = add i64 %4, %1, !insn.addr !552
  %6 = add i64 %0, 8, !insn.addr !553
  %7 = inttoptr i64 %6 to i64*, !insn.addr !553
  %8 = load i64, i64* %7, align 8, !insn.addr !553
  %9 = inttoptr i64 %5 to i64*, !insn.addr !554
  store i64 %8, i64* %9, align 8, !insn.addr !554
  ret i64 %8, !insn.addr !555

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleBC2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3ba4:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !556
  %2 = add i64 %1, -24, !insn.addr !557
  %3 = inttoptr i64 %2 to i64*, !insn.addr !558
  %4 = load i64, i64* %3, align 8, !insn.addr !558
  %5 = add i64 %4, %1, !insn.addr !559
  %6 = add i64 %0, 8, !insn.addr !560
  %7 = inttoptr i64 %6 to i64*, !insn.addr !560
  %8 = load i64, i64* %7, align 8, !insn.addr !560
  %9 = inttoptr i64 %5 to i64*, !insn.addr !561
  store i64 %8, i64* %9, align 8, !insn.addr !561
  ret i64 %8, !insn.addr !562

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
}

define i64 @_ZN7MiddleBD2Ev(i64* %this, i64* %result) local_unnamed_addr {
dec_label_pc_3be8:
  %0 = ptrtoint i64* %result to i64
  %1 = ptrtoint i64* %this to i64
  store i64 %0, i64* %this, align 8, !insn.addr !563
  %2 = add i64 %1, -24, !insn.addr !564
  %3 = inttoptr i64 %2 to i64*, !insn.addr !565
  %4 = load i64, i64* %3, align 8, !insn.addr !565
  %5 = add i64 %4, %1, !insn.addr !566
  %6 = add i64 %0, 8, !insn.addr !567
  %7 = inttoptr i64 %6 to i64*, !insn.addr !567
  %8 = load i64, i64* %7, align 8, !insn.addr !567
  %9 = inttoptr i64 %5 to i64*, !insn.addr !568
  store i64 %8, i64* %9, align 8, !insn.addr !568
  ret i64 %8, !insn.addr !569

; uselistorder directives
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 -24, { 0, 1, 2, 3, 7, 4, 8, 5, 9, 6 }
}

define i64 @_ZN14DiamondDerivedC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3c2c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 32, !insn.addr !570
  %2 = inttoptr i64 %1 to i64*, !insn.addr !571
  %3 = call i64 @_ZN11VirtualBaseC1Ev(i64* %2), !insn.addr !571
  %4 = call i64 @_ZN7MiddleAC2Ev(i64* %result, i64* nonnull @global_var_8940), !insn.addr !572
  %5 = add i64 %0, 16, !insn.addr !573
  %6 = inttoptr i64 %5 to i64*, !insn.addr !574
  %7 = call i64 @_ZN7MiddleBC2Ev(i64* %6, i64* nonnull @global_var_8950), !insn.addr !574
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !575
  store i64 ptrtoint (i64* @global_var_8920 to i64), i64* %2, align 8, !insn.addr !576
  store i64 ptrtoint (i64* @global_var_88e8 to i64), i64* %6, align 8, !insn.addr !577
  ret i64 %0, !insn.addr !578
}

define i64 @_ZN5PointC1Eii(i64* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_3cae:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i64* %result to i32*, !insn.addr !579
  store i32 %arg2, i32* %1, align 4, !insn.addr !579
  %2 = add i64 %0, 4, !insn.addr !580
  %3 = inttoptr i64 %2 to i32*, !insn.addr !580
  store i32 %arg3, i32* %3, align 4, !insn.addr !580
  ret i64 %0, !insn.addr !581

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZNK5PointplERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3cd6:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !582
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i64* %arg2 to i64
  %4 = ptrtoint i64* %result to i64
  %stack_var_-24 = alloca i64, align 8
  %5 = call i64 @__readfsqword(i64 40), !insn.addr !583
  %6 = add i64 %4, 4, !insn.addr !584
  %7 = inttoptr i64 %6 to i32*, !insn.addr !584
  %8 = load i32, i32* %7, align 4, !insn.addr !584
  %9 = add i64 %3, 4, !insn.addr !585
  %10 = inttoptr i64 %9 to i32*, !insn.addr !585
  %11 = load i32, i32* %10, align 4, !insn.addr !585
  %12 = add i32 %11, %8, !insn.addr !586
  %13 = trunc i64 %1 to i32
  %14 = trunc i64 %2 to i32
  %15 = add i32 %14, %13, !insn.addr !587
  %16 = call i64 @_ZN5PointC1Eii(i64* nonnull %stack_var_-24, i32 %15, i32 %12), !insn.addr !588
  %17 = load i64, i64* %stack_var_-24, align 8, !insn.addr !589
  %18 = call i64 @__readfsqword(i64 40), !insn.addr !590
  %19 = icmp eq i64 %5, %18, !insn.addr !590
  store i64 %17, i64* %rax.0.reg2mem, !insn.addr !591
  br i1 %19, label %dec_label_pc_3d3d, label %dec_label_pc_3d38, !insn.addr !591

dec_label_pc_3d38:                                ; preds = %dec_label_pc_3cd6
  call void @__stack_chk_fail(), !insn.addr !592
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !592
  br label %dec_label_pc_3d3d, !insn.addr !592

dec_label_pc_3d3d:                                ; preds = %dec_label_pc_3d38, %dec_label_pc_3cd6
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !593

; uselistorder directives
  uselistorder i64* %stack_var_-24, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder void ()* @__stack_chk_fail, { 6, 10, 9, 8, 7, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i64 (i64*, i32, i32)* @_ZN5PointC1Eii, { 2, 1, 0 }
}

define i64 @_ZNK5PointeqERKS_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3d40:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !594
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  %5 = icmp eq i32 %3, %4, !insn.addr !595
  %6 = icmp eq i1 %5, false, !insn.addr !596
  br i1 %6, label %dec_label_pc_3d79, label %dec_label_pc_3d60, !insn.addr !596

dec_label_pc_3d60:                                ; preds = %dec_label_pc_3d40
  %7 = ptrtoint i64* %result to i64
  %8 = ptrtoint i64* %arg2 to i64
  %9 = add i64 %7, 4, !insn.addr !597
  %10 = inttoptr i64 %9 to i32*, !insn.addr !597
  %11 = load i32, i32* %10, align 4, !insn.addr !597
  %12 = add i64 %8, 4, !insn.addr !598
  %13 = inttoptr i64 %12 to i32*, !insn.addr !598
  %14 = load i32, i32* %13, align 4, !insn.addr !598
  %15 = icmp eq i32 %11, %14, !insn.addr !599
  %16 = icmp eq i1 %15, false, !insn.addr !600
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !600
  br i1 %16, label %dec_label_pc_3d79, label %dec_label_pc_3d7e, !insn.addr !600

dec_label_pc_3d79:                                ; preds = %dec_label_pc_3d60, %dec_label_pc_3d40
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !601
  br label %dec_label_pc_3d7e, !insn.addr !601

dec_label_pc_3d7e:                                ; preds = %dec_label_pc_3d60, %dec_label_pc_3d79
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !602

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i1 false, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_3d7e, { 1, 0 }
}

define i64 @_ZN5PointppEv(i64* %result) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %result to i64
  %3 = trunc i64 %1 to i32
  %4 = add i32 %3, 1, !insn.addr !603
  %5 = bitcast i64* %result to i32*, !insn.addr !604
  store i32 %4, i32* %5, align 4, !insn.addr !604
  %6 = add i64 %2, 4, !insn.addr !605
  %7 = inttoptr i64 %6 to i32*, !insn.addr !605
  %8 = load i32, i32* %7, align 4, !insn.addr !605
  %9 = add i32 %8, 1, !insn.addr !606
  store i32 %9, i32* %7, align 4, !insn.addr !607
  ret i64 %2, !insn.addr !608
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3db2:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !609
  %storemerge.in = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge.in, !insn.addr !610
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3dd2:
  %0 = alloca i128
  %1 = alloca i1
  %storemerge.reg2mem = alloca i128, !insn.addr !611
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = call i64 @__asm_movsd.13(i128 %3), !insn.addr !612
  %7 = call i64 @__asm_movsd.13(i128 %2), !insn.addr !613
  %8 = call i128 @__asm_movsd(i64 %6), !insn.addr !614
  %9 = sext i64 %7 to i128, !insn.addr !615
  call void @__asm_comisd(i128 %8, i128 %9), !insn.addr !615
  %10 = or i1 %4, %5, !insn.addr !616
  br i1 %10, label %dec_label_pc_3df7, label %dec_label_pc_3df0, !insn.addr !616

dec_label_pc_3df0:                                ; preds = %dec_label_pc_3dd2
  %11 = call i128 @__asm_movsd(i64 %6), !insn.addr !617
  store i128 %11, i128* %storemerge.reg2mem, !insn.addr !618
  br label %dec_label_pc_3dfc, !insn.addr !618

dec_label_pc_3df7:                                ; preds = %dec_label_pc_3dd2
  %12 = call i128 @__asm_movsd(i64 %7), !insn.addr !619
  store i128 %12, i128* %storemerge.reg2mem, !insn.addr !619
  br label %dec_label_pc_3dfc, !insn.addr !619

dec_label_pc_3dfc:                                ; preds = %dec_label_pc_3df7, %dec_label_pc_3df0
  %storemerge.reload = load i128, i128* %storemerge.reg2mem
  %13 = call i64 @__asm_movq.12(i128 %storemerge.reload), !insn.addr !620
  %14 = call i128 @__asm_movq(i64 %13), !insn.addr !621
  %15 = trunc i128 %14 to i64, !insn.addr !622
  %16 = bitcast i64 %15 to double, !insn.addr !622
  ret double %16, !insn.addr !622

; uselistorder directives
  uselistorder i128* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i1* %1, { 1, 0 }
  uselistorder i128* %0, { 1, 0 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_3e08:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = trunc i64 %1 to i32
  %4 = trunc i64 %2 to i32
  store i32 %4, i32* %arg1, align 4, !insn.addr !623
  store i32 %3, i32* %arg2, align 4, !insn.addr !624
  ret void, !insn.addr !625

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3e3a:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !626
  %2 = inttoptr i64 %1 to i32*, !insn.addr !626
  store i32 0, i32* %2, align 4, !insn.addr !626
  ret i64 %0, !insn.addr !627

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN9ContainerIiE4pushEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3e54:
  %rax.0.reg2mem = alloca i64, !insn.addr !628
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !629
  %2 = inttoptr i64 %1 to i32*, !insn.addr !629
  %3 = load i32, i32* %2, align 4, !insn.addr !629
  %4 = zext i32 %3 to i64, !insn.addr !629
  %5 = icmp sgt i32 %3, 9, !insn.addr !630
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !630
  br i1 %5, label %dec_label_pc_3e8c, label %dec_label_pc_3e6f, !insn.addr !630

dec_label_pc_3e6f:                                ; preds = %dec_label_pc_3e54
  %6 = add i32 %3, 1, !insn.addr !631
  store i32 %6, i32* %2, align 4, !insn.addr !632
  %7 = sext i32 %3 to i64, !insn.addr !633
  %8 = mul i64 %7, 4, !insn.addr !634
  %9 = add i64 %8, %0, !insn.addr !634
  %10 = inttoptr i64 %9 to i32*, !insn.addr !634
  store i32 %arg2, i32* %10, align 4, !insn.addr !634
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !634
  br label %dec_label_pc_3e8c, !insn.addr !634

dec_label_pc_3e8c:                                ; preds = %dec_label_pc_3e6f, %dec_label_pc_3e54
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !635

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2, 3 }
}

define i64 @_ZNK9ContainerIiE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3e90:
  %storemerge.reg2mem = alloca i64, !insn.addr !636
  %0 = icmp slt i32 %arg2, 0, !insn.addr !637
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !638
  br i1 %0, label %dec_label_pc_3ec5, label %dec_label_pc_3ea5, !insn.addr !638

dec_label_pc_3ea5:                                ; preds = %dec_label_pc_3e90
  %1 = ptrtoint i64* %result to i64
  %2 = add i64 %1, 40, !insn.addr !639
  %3 = inttoptr i64 %2 to i32*, !insn.addr !639
  %4 = load i32, i32* %3, align 4, !insn.addr !639
  %5 = zext i32 %4 to i64, !insn.addr !639
  %6 = sext i32 %arg2 to i64, !insn.addr !640
  %7 = icmp slt i64 %6, %5, !insn.addr !640
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !640
  br i1 %7, label %dec_label_pc_3eb1, label %dec_label_pc_3ec5, !insn.addr !640

dec_label_pc_3eb1:                                ; preds = %dec_label_pc_3ea5
  %8 = mul i64 %6, 4, !insn.addr !641
  %9 = add i64 %8, %1, !insn.addr !641
  %10 = inttoptr i64 %9 to i32*, !insn.addr !641
  %11 = load i32, i32* %10, align 4, !insn.addr !641
  %12 = zext i32 %11 to i64, !insn.addr !641
  store i64 %12, i64* %storemerge.reg2mem, !insn.addr !642
  br label %dec_label_pc_3ec5, !insn.addr !642

dec_label_pc_3ec5:                                ; preds = %dec_label_pc_3e90, %dec_label_pc_3ea5, %dec_label_pc_3eb1
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !643

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3ec5, { 2, 1, 0 }
}

define i64 @_ZNK9ContainerIiE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3ec8:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 40, !insn.addr !644
  %2 = inttoptr i64 %1 to i32*, !insn.addr !644
  %3 = load i32, i32* %2, align 4, !insn.addr !644
  %4 = zext i32 %3 to i64, !insn.addr !644
  ret i64 %4, !insn.addr !645

; uselistorder directives
  uselistorder i64 40, { 23, 24, 25, 26, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 }
}

define i64 @_ZN9ContainerIdEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_3ede:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !646
  %2 = inttoptr i64 %1 to i32*, !insn.addr !646
  store i32 0, i32* %2, align 4, !insn.addr !646
  ret i64 %0, !insn.addr !647

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @_ZN9ContainerIdE4pushEd(double %arg1) local_unnamed_addr {
dec_label_pc_3ef8:
  %0 = alloca i128
  %rax.0.reg2mem = alloca i64, !insn.addr !648
  %1 = load i128, i128* %0
  %2 = bitcast double %arg1 to i64
  %3 = call i64 @__asm_movsd.13(i128 %1), !insn.addr !649
  %4 = add i64 %2, 80, !insn.addr !650
  %5 = inttoptr i64 %4 to i32*, !insn.addr !650
  %6 = load i32, i32* %5, align 4, !insn.addr !650
  %7 = zext i32 %6 to i64, !insn.addr !650
  %8 = icmp sgt i32 %6, 9, !insn.addr !651
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !651
  br i1 %8, label %dec_label_pc_3f36, label %dec_label_pc_3f15, !insn.addr !651

dec_label_pc_3f15:                                ; preds = %dec_label_pc_3ef8
  %9 = call i128 @__asm_movsd(i64 %3), !insn.addr !652
  %10 = load i32, i32* %5, align 4, !insn.addr !653
  %11 = add i32 %10, 1, !insn.addr !654
  store i32 %11, i32* %5, align 4, !insn.addr !655
  %12 = sext i32 %10 to i64, !insn.addr !656
  %13 = call i64 @__asm_movsd.13(i128 %9), !insn.addr !657
  %14 = mul i64 %12, 8, !insn.addr !657
  %15 = add i64 %14, %2, !insn.addr !657
  %16 = inttoptr i64 %15 to i64*, !insn.addr !657
  store i64 %13, i64* %16, align 8, !insn.addr !657
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !657
  br label %dec_label_pc_3f36, !insn.addr !657

dec_label_pc_3f36:                                ; preds = %dec_label_pc_3f15, %dec_label_pc_3ef8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !658

; uselistorder directives
  uselistorder i32* %5, { 1, 0, 2 }
}

define i128 @_ZNK9ContainerIdE3getEi(i64* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3f3a:
  %0 = alloca i128
  %storemerge.reg2mem = alloca i128, !insn.addr !659
  %1 = load i128, i128* %0
  %2 = icmp slt i32 %arg2, 0, !insn.addr !660
  br i1 %2, label %dec_label_pc_3f6c, label %dec_label_pc_3f4f, !insn.addr !661

dec_label_pc_3f4f:                                ; preds = %dec_label_pc_3f3a
  %3 = ptrtoint i64* %result to i64
  %4 = add i64 %3, 80, !insn.addr !662
  %5 = inttoptr i64 %4 to i32*, !insn.addr !662
  %6 = load i32, i32* %5, align 4, !insn.addr !662
  %7 = zext i32 %6 to i64, !insn.addr !662
  %8 = sext i32 %arg2 to i64, !insn.addr !663
  %9 = icmp slt i64 %8, %7, !insn.addr !663
  br i1 %9, label %dec_label_pc_3f5b, label %dec_label_pc_3f6c, !insn.addr !663

dec_label_pc_3f5b:                                ; preds = %dec_label_pc_3f4f
  %10 = mul i64 %8, 8, !insn.addr !664
  %11 = add i64 %10, %3, !insn.addr !664
  %12 = inttoptr i64 %11 to i64*, !insn.addr !664
  %13 = load i64, i64* %12, align 8, !insn.addr !664
  %14 = call i128 @__asm_movsd(i64 %13), !insn.addr !664
  store i128 %14, i128* %storemerge.reg2mem, !insn.addr !665
  br label %dec_label_pc_3f70, !insn.addr !665

dec_label_pc_3f6c:                                ; preds = %dec_label_pc_3f4f, %dec_label_pc_3f3a
  %15 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !666
  store i128 %15, i128* %storemerge.reg2mem, !insn.addr !666
  br label %dec_label_pc_3f70, !insn.addr !666

dec_label_pc_3f70:                                ; preds = %dec_label_pc_3f6c, %dec_label_pc_3f5b
  %storemerge.reload = load i128, i128* %storemerge.reg2mem
  %16 = call i64 @__asm_movq.12(i128 %storemerge.reload), !insn.addr !667
  %17 = call i128 @__asm_movq(i64 %16), !insn.addr !668
  ret i128 %17, !insn.addr !669

; uselistorder directives
  uselistorder i128* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i128 (i64)* @__asm_movq, { 0, 2, 1, 3 }
  uselistorder i64 (i128)* @__asm_movq.12, { 0, 2, 1, 3 }
  uselistorder i128 (i64)* @__asm_movsd, { 0, 1, 3, 4, 5, 2, 6, 7 }
  uselistorder i32 0, { 8, 9, 10, 11, 0, 7, 1, 2, 3, 4, 5, 6 }
}

define i64 @_ZNK9ContainerIdE7getSizeEv(i64* %result) local_unnamed_addr {
dec_label_pc_3f7c:
  %0 = ptrtoint i64* %result to i64
  %1 = add i64 %0, 80, !insn.addr !670
  %2 = inttoptr i64 %1 to i32*, !insn.addr !670
  %3 = load i32, i32* %2, align 4, !insn.addr !670
  %4 = zext i32 %3 to i64, !insn.addr !670
  ret i64 %4, !insn.addr !671
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3f92:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_(i64* %result, i64* %arg2), !insn.addr !672
  ret i64 %0, !insn.addr !673
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_3fbc:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC1EOS2_(i64* %result, i64* %arg2), !insn.addr !674
  ret i64 %0, !insn.addr !675
}

define i64 @_ZNK8RTTIBase7getTypeEv(i64* %result) {
dec_label_pc_3fe6:
  ret i64 0, !insn.addr !676
}

define i64 @_ZNK12RTTIDerivedA7getTypeEv(i64* %result) {
dec_label_pc_3ffa:
  ret i64 1, !insn.addr !677

; uselistorder directives
  uselistorder i64 1, { 3, 0, 2, 1, 4 }
}

define i64 @_ZNK12RTTIDerivedA13derivedA_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_400e:
  ret i64 100, !insn.addr !678
}

define i64 @_ZNK12RTTIDerivedB7getTypeEv(i64* %result) {
dec_label_pc_4022:
  ret i64 2, !insn.addr !679

; uselistorder directives
  uselistorder i64 2, { 1, 2, 0, 3 }
}

define i64 @_ZNK12RTTIDerivedB13derivedB_dataEv(i64* %result) local_unnamed_addr {
dec_label_pc_4036:
  ret i64 200, !insn.addr !680
}

define i64 @_ZN8RTTIBaseC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_404a:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), i64* %result, align 8, !insn.addr !681
  ret i64 %0, !insn.addr !682
}

define i64 @_ZN8RTTIBaseD1Ev(i64* %result) {
dec_label_pc_4068:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), i64* %result, align 8, !insn.addr !683
  ret i64 %0, !insn.addr !684

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8888_type* @global_var_8888 to i64), { 1, 0 }
}

define i64 @_ZN8RTTIBaseD0Ev(i64* %result) {
dec_label_pc_4086:
  %0 = call i64 @_ZN8RTTIBaseD1Ev(i64* %result), !insn.addr !685
  %1 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !686
  ret i64 %1, !insn.addr !687
}

define i64 @_ZN12RTTIDerivedAC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_40b6:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC1Ev(i64* %result), !insn.addr !688
  store i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), i64* %result, align 8, !insn.addr !689
  ret i64 %0, !insn.addr !690
}

define i64 @_ZN12RTTIDerivedBC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_40e4:
  %0 = ptrtoint i64* %result to i64
  %1 = call i64 @_ZN8RTTIBaseC1Ev(i64* %result), !insn.addr !691
  store i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), i64* %result, align 8, !insn.addr !692
  ret i64 %0, !insn.addr !693

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN8RTTIBaseC1Ev, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI1St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4112:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EPi(i64* %result, i32* %arg2), !insn.addr !694
  ret i64 %0, !insn.addr !695
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC1IS1_vEEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_413c:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI1St15__uniq_ptr_implIiS1_EEPi(i64* %result, i32* %arg2), !insn.addr !696
  ret i64 %0, !insn.addr !697
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4166:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !698
  %1 = inttoptr i64 %0 to i64*, !insn.addr !699
  %2 = load i64, i64* %1, align 8, !insn.addr !699
  %3 = icmp eq i64 %2, 0, !insn.addr !700
  br i1 %3, label %dec_label_pc_41bc, label %dec_label_pc_4193, !insn.addr !701

dec_label_pc_4193:                                ; preds = %dec_label_pc_4166
  %4 = inttoptr i64 %0 to i32***, !insn.addr !702
  %5 = call i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result), !insn.addr !703
  %6 = call i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %4), !insn.addr !704
  %7 = load i64, i64* %6, align 8, !insn.addr !705
  %8 = inttoptr i64 %5 to i64*, !insn.addr !706
  %9 = inttoptr i64 %7 to i32*, !insn.addr !706
  %10 = call i64 @_ZNKSt14default_deleteIiEclEPi(i64* %8, i32* %9), !insn.addr !706
  br label %dec_label_pc_41bc, !insn.addr !706

dec_label_pc_41bc:                                ; preds = %dec_label_pc_4193, %dec_label_pc_4166
  store i64 0, i64* %1, align 8, !insn.addr !707
  ret i64 %0, !insn.addr !708

; uselistorder directives
  uselistorder i64* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i64* %result) local_unnamed_addr {
dec_label_pc_41ce:
  %0 = call i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result), !insn.addr !709
  ret i64 %0, !insn.addr !710
}

define i64* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i64** %arg1) local_unnamed_addr {
dec_label_pc_41f3:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !711
  ret i64* %0, !insn.addr !711
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4206:
  %0 = ptrtoint i64* %arg2 to i64
  %1 = ptrtoint i64* %result to i64
  %2 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1EOS2_(i64* %result, i64* %arg2), !insn.addr !712
  store i64 %0, i64* %result, align 8, !insn.addr !713
  ret i64 %1, !insn.addr !714
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_423e:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %arg2), !insn.addr !715
  ret i64 %0, !insn.addr !716
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4268:
  %0 = bitcast i64* %arg2 to i64**, !insn.addr !717
  %1 = call i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %0), !insn.addr !717
  %2 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_(i64* %result, i64* %1), !insn.addr !718
  %3 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %arg2), !insn.addr !719
  %4 = inttoptr i64 %3 to i64*, !insn.addr !720
  store i64 0, i64* %4, align 8, !insn.addr !720
  ret i64 %3, !insn.addr !721

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_42b2:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC1EPi(i64* %result, i32* %arg2), !insn.addr !722
  ret i64 %0, !insn.addr !723
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC1IPiS2_vbEET_(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_42dc:
  %0 = call i64 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi(i64* %result, i32* %arg2), !insn.addr !724
  ret i64 %0, !insn.addr !725
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4306:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !726
  %1 = inttoptr i64 %0 to i64*, !insn.addr !727
  %2 = load i64, i64* %1, align 8, !insn.addr !727
  %3 = icmp eq i64 %2, 0, !insn.addr !728
  br i1 %3, label %dec_label_pc_4353, label %dec_label_pc_4332, !insn.addr !729

dec_label_pc_4332:                                ; preds = %dec_label_pc_4306
  %4 = call i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result), !insn.addr !730
  %5 = load i64, i64* %1, align 8, !insn.addr !731
  %6 = call i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(i64 %4, i64 %5), !insn.addr !732
  br label %dec_label_pc_4353, !insn.addr !732

dec_label_pc_4353:                                ; preds = %dec_label_pc_4332, %dec_label_pc_4306
  store i64 0, i64* %1, align 8, !insn.addr !733
  ret i64 %0, !insn.addr !734

; uselistorder directives
  uselistorder i64* %1, { 1, 0, 2 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm(i64* %result, i64 %arg2) local_unnamed_addr {
dec_label_pc_4362:
  %0 = call i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result), !insn.addr !735
  %1 = mul i64 %arg2, 4, !insn.addr !736
  %2 = add i64 %0, %1, !insn.addr !737
  ret i64 %2, !insn.addr !738
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_439a:
  %0 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv(i64* %result), !insn.addr !739
  %1 = ptrtoint i32* %arg2 to i64, !insn.addr !740
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !741
  %3 = inttoptr i64 %2 to i64*, !insn.addr !742
  store i64 %1, i64* %3, align 8, !insn.addr !742
  ret i64 %2, !insn.addr !743

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_43d6:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !744
  %1 = ptrtoint i64* %0 to i64, !insn.addr !744
  ret i64 %1, !insn.addr !745
}

define i64 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_43f4:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result), !insn.addr !746
  ret i64 %0, !insn.addr !747
}

define i64* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_4412:
  %0 = bitcast i32*** %arg1 to i64*, !insn.addr !748
  ret i64* %0, !insn.addr !748
}

define i64 @_ZNKSt14default_deleteIiEclEPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4424:
  %rax.0.reg2mem = alloca i64, !insn.addr !749
  %0 = ptrtoint i32* %arg2 to i64, !insn.addr !750
  %1 = icmp eq i32* %arg2, null, !insn.addr !751
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !752
  br i1 %1, label %dec_label_pc_444e, label %dec_label_pc_4441, !insn.addr !752

dec_label_pc_4441:                                ; preds = %dec_label_pc_4424
  %2 = bitcast i32* %arg2 to i64*, !insn.addr !753
  %3 = call i64 @_ZdlPvm(i64* %2, i64 4), !insn.addr !753
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !753
  br label %dec_label_pc_444e, !insn.addr !753

dec_label_pc_444e:                                ; preds = %dec_label_pc_4441, %dec_label_pc_4424
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !754

; uselistorder directives
  uselistorder i64 4, { 6, 0, 1, 2, 12, 13, 14, 15, 16, 17, 3, 4, 5, 18, 19, 7, 11, 8, 9, 10 }
}

define i64 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4452:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result), !insn.addr !755
  ret i64 %0, !insn.addr !756
}

define i64* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i64** %arg1) local_unnamed_addr {
dec_label_pc_4470:
  %0 = bitcast i64** %arg1 to i64*, !insn.addr !757
  ret i64* %0, !insn.addr !757
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1EOS2_(i64* %result, i64* %arg2) local_unnamed_addr {
dec_label_pc_4482:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !758
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC1EPi(i64* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4496:
  %0 = call i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC1ILb1ELb1EEEv(i64* %result), !insn.addr !759
  %1 = ptrtoint i32* %arg2 to i64, !insn.addr !760
  %2 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !761
  %3 = inttoptr i64 %2 to i64*, !insn.addr !762
  store i64 %1, i64* %3, align 8, !insn.addr !762
  ret i64 %2, !insn.addr !763

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 (i64*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_44d2:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !764
  %1 = ptrtoint i64* %0 to i64, !insn.addr !764
  ret i64 %1, !insn.addr !765
}

define i64 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_44f0:
  %0 = call i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result), !insn.addr !766
  ret i64 %0, !insn.addr !767
}

define i64 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_450e:
  %rax.0.reg2mem = alloca i64, !insn.addr !768
  %0 = icmp eq i64 %arg2, 0, !insn.addr !769
  br i1 %0, label %dec_label_pc_4535, label %dec_label_pc_4529, !insn.addr !770

dec_label_pc_4529:                                ; preds = %dec_label_pc_450e
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !771
  %2 = and i64 %arg2, 4294967295
  %3 = inttoptr i64 %2 to i64*, !insn.addr !771
  call void @_ZdaPv(i64* %1, i64* %3), !insn.addr !771
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !771
  br label %dec_label_pc_4535, !insn.addr !771

dec_label_pc_4535:                                ; preds = %dec_label_pc_4529, %dec_label_pc_450e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !772

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 0, 1, 2, 3, 4, 5, 13, 6, 7, 8, 9, 10, 11, 12 }
  uselistorder void (i64*, i64*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i64 4294967295, { 2, 0, 3, 1, 4, 5, 6, 7, 8, 9 }
}

define i64 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i64* %result) local_unnamed_addr {
dec_label_pc_4538:
  %0 = call i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result), !insn.addr !773
  ret i64 %0, !insn.addr !774
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_4556:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev(i64* %result), !insn.addr !775
  ret i64 %0, !insn.addr !776
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4575:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !777
  %1 = bitcast i32** %0 to i64*, !insn.addr !778
  ret i64* %1, !insn.addr !778
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4594:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %result), !insn.addr !779
  %1 = ptrtoint i64* %0 to i64, !insn.addr !779
  ret i64 %1, !insn.addr !780
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_45b2:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %result), !insn.addr !781
  %1 = load i64, i64* %0, align 8, !insn.addr !782
  ret i64 %1, !insn.addr !783
}

define i64 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC1ILb1ELb1EEEv(i64* %result) local_unnamed_addr {
dec_label_pc_45d4:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC1Ev(i64* %result), !insn.addr !784
  ret i64 %0, !insn.addr !785
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_45f3:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !786
  %1 = bitcast i32** %0 to i64*, !insn.addr !787
  ret i64* %1, !insn.addr !787
}

define i64 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i64* %result) local_unnamed_addr {
dec_label_pc_4612:
  %0 = call i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %result), !insn.addr !788
  %1 = ptrtoint i64* %0 to i64, !insn.addr !788
  ret i64 %1, !insn.addr !789
}

define i64 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i64* %result) local_unnamed_addr {
dec_label_pc_4630:
  %0 = call i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %result), !insn.addr !790
  %1 = load i64, i64* %0, align 8, !insn.addr !791
  ret i64 %1, !insn.addr !792
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4652:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1Ev(i64* %result), !insn.addr !793
  %1 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev(i64* %result), !insn.addr !794
  ret i64 %1, !insn.addr !795
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_467d:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1), !insn.addr !796
  %1 = inttoptr i64 %0 to i32**, !insn.addr !797
  ret i32** %1, !insn.addr !797
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_469b:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1), !insn.addr !798
  ret i64* %0, !insn.addr !799
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i64* %arg1) local_unnamed_addr {
dec_label_pc_46b9:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !800
  %1 = bitcast i32** %0 to i64*, !insn.addr !801
  ret i64* %1, !insn.addr !801
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_46d8:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC1Ev(i64* %result), !insn.addr !802
  %1 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev(i64* %result), !insn.addr !803
  ret i64 %1, !insn.addr !804

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev, { 1, 0 }
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4703:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1), !insn.addr !805
  %1 = inttoptr i64 %0 to i32**, !insn.addr !806
  ret i32** %1, !insn.addr !806
}

define i64* @_ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4721:
  %0 = call i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1), !insn.addr !807
  ret i64* %0, !insn.addr !808
}

define i64* @_ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i64* %arg1) local_unnamed_addr {
dec_label_pc_473f:
  %0 = call i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1), !insn.addr !809
  %1 = bitcast i32** %0 to i64*, !insn.addr !810
  ret i64* %1, !insn.addr !810
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %arg1) local_unnamed_addr {
dec_label_pc_475d:
  %0 = bitcast i64* %arg1 to i32***, !insn.addr !811
  ret i32*** %0, !insn.addr !811
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4770:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC1Ev(i64* %result), !insn.addr !812
  ret i64 %0, !insn.addr !813
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4790:
  %0 = ptrtoint i64* %result to i64
  store i64 0, i64* %result, align 8, !insn.addr !814
  ret i64 %0, !insn.addr !815

; uselistorder directives
  uselistorder i64 0, { 55, 56, 57, 58, 59, 60, 61, 5, 1, 0, 2, 3, 62, 63, 6, 49, 38, 50, 39, 51, 52, 53, 54, 7, 40, 35, 36, 37, 64, 8, 4, 65, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 41, 42, 43, 44, 45, 46, 47, 48 }
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_47aa:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !816
  ret i64 %0, !insn.addr !817
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_47c8:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1), !insn.addr !818
  %1 = inttoptr i64 %0 to i64*, !insn.addr !819
  ret i64* %1, !insn.addr !819
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_47e6:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1), !insn.addr !820
  %1 = inttoptr i64 %0 to i32**, !insn.addr !821
  ret i32** %1, !insn.addr !821
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_4804:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev(i64* %result), !insn.addr !822
  ret i64 %0, !insn.addr !823
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4823:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1), !insn.addr !824
  ret i64 %0, !insn.addr !825

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i64* @_ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_4841:
  %0 = call i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1), !insn.addr !826
  %1 = inttoptr i64 %0 to i64*, !insn.addr !827
  ret i64* %1, !insn.addr !827
}

define i32** @_ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i64* %arg1) local_unnamed_addr {
dec_label_pc_485f:
  %0 = call i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1), !insn.addr !828
  %1 = inttoptr i64 %0 to i32**, !insn.addr !829
  ret i32** %1, !insn.addr !829
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EEC1IRS0_EEOT_(i64* %result, i32*** %arg2) local_unnamed_addr {
dec_label_pc_487e:
  %0 = ptrtoint i64* %result to i64
  %1 = bitcast i32*** %arg2 to i64*
  %2 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i64* %1), !insn.addr !830
  %3 = load i32**, i32*** %2, align 8, !insn.addr !831
  %4 = ptrtoint i32** %3 to i64, !insn.addr !831
  store i64 %4, i64* %result, align 8, !insn.addr !832
  ret i64 %0, !insn.addr !833

; uselistorder directives
  uselistorder i32*** (i64*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_48ac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !834
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48bb:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !835
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48cd:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1), !insn.addr !836
  ret i64 %0, !insn.addr !837
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_48eb:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !838
  ret i64 %0, !insn.addr !839
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev(i64* %result) local_unnamed_addr {
dec_label_pc_490a:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !840
}

define i64 @_ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4919:
  %0 = call i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1), !insn.addr !841
  ret i64 %0, !insn.addr !842
}

define i64 @_ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4937:
  %0 = call i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1), !insn.addr !843
  ret i64 %0, !insn.addr !844

; uselistorder directives
  uselistorder i64 (i64*)* @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4955:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !845
}

define i64 @_ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4967:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !846
}

define i64 @_ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i64* %arg1) local_unnamed_addr {
dec_label_pc_4979:
  %0 = ptrtoint i64* %arg1 to i64
  ret i64 %0, !insn.addr !847
}

define i64 @_ZN12RTTIDerivedBD1Ev(i64* %result) {
dec_label_pc_498c:
  store i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), i64* %result, align 8, !insn.addr !848
  %0 = call i64 @_ZN8RTTIBaseD1Ev(i64* %result), !insn.addr !849
  ret i64 %0, !insn.addr !850

; uselistorder directives
  uselistorder i64 ptrtoint (%vtable_8838_type* @global_var_8838 to i64), { 1, 0 }
}

define i64 @_ZN12RTTIDerivedBD0Ev(i64* %result) {
dec_label_pc_49ba:
  %0 = call i64 @_ZN12RTTIDerivedBD1Ev(i64* %result), !insn.addr !851
  %1 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !852
  ret i64 %1, !insn.addr !853

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedBD1Ev, { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAD1Ev(i64* %result) {
dec_label_pc_49ea:
  store i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), i64* %result, align 8, !insn.addr !854
  %0 = call i64 @_ZN8RTTIBaseD1Ev(i64* %result), !insn.addr !855
  ret i64 %0, !insn.addr !856

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN8RTTIBaseD1Ev, { 3, 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8860_type* @global_var_8860 to i64), { 1, 0 }
}

define i64 @_ZN12RTTIDerivedAD0Ev(i64* %result) {
dec_label_pc_4a18:
  %0 = call i64 @_ZN12RTTIDerivedAD1Ev(i64* %result), !insn.addr !857
  %1 = call i64 @_ZdlPvm(i64* %result, i64 8), !insn.addr !858
  ret i64 %1, !insn.addr !859

; uselistorder directives
  uselistorder i64 8, { 6, 7, 8, 0, 1, 16, 18, 17, 19, 2, 3, 4, 20, 21, 9, 22, 23, 12, 13, 14, 10, 11, 5, 15 }
  uselistorder i64 (i64*)* @_ZN12RTTIDerivedAD1Ev, { 1, 0 }
}

define i64 @_ZN14DiamondDerivedD1Ev(i64* %result) {
dec_label_pc_4a48:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), i64* %result, align 8, !insn.addr !860
  %1 = add i64 %0, 32, !insn.addr !861
  %2 = inttoptr i64 %1 to i64*, !insn.addr !862
  store i64 ptrtoint (i64* @global_var_8920 to i64), i64* %2, align 8, !insn.addr !862
  %3 = add i64 %0, 16, !insn.addr !863
  %4 = inttoptr i64 %3 to i64*, !insn.addr !863
  store i64 ptrtoint (i64* @global_var_88e8 to i64), i64* %4, align 8, !insn.addr !863
  %5 = call i64 @_ZN7MiddleBD2Ev(i64* %4, i64* nonnull @global_var_8950), !insn.addr !864
  %6 = call i64 @_ZN7MiddleAD2Ev(i64* %result, i64* nonnull @global_var_8940), !insn.addr !865
  %7 = call i64 @_ZN11VirtualBaseD1Ev(i64* %2), !insn.addr !866
  ret i64 %7, !insn.addr !867

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN11VirtualBaseD1Ev, { 1, 2, 0 }
  uselistorder i64 (i64*)* @_ZN14DiamondDerived4funcEv, { 2, 1, 0 }
  uselistorder i64 ptrtoint (%vtable_88b8_type* @global_var_88b8 to i64), { 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4aca:
  %0 = add i64 %arg1, -16, !insn.addr !868
  %1 = inttoptr i64 %0 to i64*, !insn.addr !869
  %2 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %1), !insn.addr !869
  ret i64 %2, !insn.addr !869
}

define i64 @_ZTv0_n32_N14DiamondDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4ad7:
  %0 = add i64 %arg1, -32, !insn.addr !870
  %1 = inttoptr i64 %0 to i64*, !insn.addr !870
  %2 = load i64, i64* %1, align 8, !insn.addr !870
  %3 = add i64 %2, %arg1, !insn.addr !870
  %4 = inttoptr i64 %3 to i64*, !insn.addr !871
  %5 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %4), !insn.addr !871
  ret i64 %5, !insn.addr !871
}

define i64 @_ZN14DiamondDerivedD0Ev(i64* %result) {
dec_label_pc_4ae8:
  %0 = call i64 @_ZN14DiamondDerivedD1Ev(i64* %result), !insn.addr !872
  %1 = call i64 @_ZdlPvm(i64* %result, i64 48), !insn.addr !873
  ret i64 %1, !insn.addr !874

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN14DiamondDerivedD1Ev, { 4, 3, 2, 1, 0 }
}

define i64 @_ZThn16_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b17:
  %0 = add i64 %arg1, -16, !insn.addr !875
  %1 = inttoptr i64 %0 to i64*, !insn.addr !876
  %2 = call i64 @_ZN14DiamondDerivedD0Ev(i64* %1), !insn.addr !876
  ret i64 %2, !insn.addr !876
}

define i64 @_ZTv0_n32_N14DiamondDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b21:
  %0 = add i64 %arg1, -32, !insn.addr !877
  %1 = inttoptr i64 %0 to i64*, !insn.addr !877
  %2 = load i64, i64* %1, align 8, !insn.addr !877
  %3 = add i64 %2, %arg1, !insn.addr !877
  %4 = inttoptr i64 %3 to i64*, !insn.addr !878
  %5 = call i64 @_ZN14DiamondDerivedD0Ev(i64* %4), !insn.addr !878
  ret i64 %5, !insn.addr !878

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN14DiamondDerivedD0Ev, { 2, 1, 0 }
}

define i64 @_ZN12MultiDerivedD1Ev(i64* %result) {
dec_label_pc_4b2e:
  %0 = ptrtoint i64* %result to i64
  store i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), i64* %result, align 8, !insn.addr !879
  %1 = add i64 %0, 16, !insn.addr !880
  %2 = inttoptr i64 %1 to i64*, !insn.addr !880
  store i64 ptrtoint (i64* @global_var_8aa8 to i64), i64* %2, align 8, !insn.addr !880
  %3 = call i64 @_ZN5BaseBD1Ev(i64* %2), !insn.addr !881
  %4 = call i64 @_ZN5BaseAD1Ev(i64* %result), !insn.addr !882
  ret i64 %4, !insn.addr !883

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN5BaseAD1Ev, { 1, 2, 0 }
  uselistorder i64 (i64*)* @_ZN5BaseBD1Ev, { 1, 2, 0 }
  uselistorder i64 (i64*)* @_ZN12MultiDerived5funcBEv, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8a78_type* @global_var_8a78 to i64), { 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD1Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4b7a:
  %0 = add i64 %arg1, -16, !insn.addr !884
  %1 = inttoptr i64 %0 to i64*, !insn.addr !885
  %2 = call i64 @_ZN12MultiDerivedD1Ev(i64* %1), !insn.addr !885
  ret i64 %2, !insn.addr !885
}

define i64 @_ZN12MultiDerivedD0Ev(i64* %result) {
dec_label_pc_4b84:
  %0 = call i64 @_ZN12MultiDerivedD1Ev(i64* %result), !insn.addr !886
  %1 = call i64 @_ZdlPvm(i64* %result, i64 32), !insn.addr !887
  ret i64 %1, !insn.addr !888

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerivedD1Ev, { 3, 2, 1, 0 }
}

define i64 @_ZThn16_N12MultiDerivedD0Ev(i64 %arg1) local_unnamed_addr {
dec_label_pc_4bb3:
  %0 = add i64 %arg1, -16, !insn.addr !889
  %1 = inttoptr i64 %0 to i64*, !insn.addr !890
  %2 = call i64 @_ZN12MultiDerivedD0Ev(i64* %1), !insn.addr !890
  ret i64 %2, !insn.addr !890

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN12MultiDerivedD0Ev, { 1, 0 }
}

define i64 @_ZN7DerivedD1Ev(i64* %result) {
dec_label_pc_4bbe:
  store i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), i64* %result, align 8, !insn.addr !891
  %0 = call i64 @_ZN4BaseD1Ev(i64* %result), !insn.addr !892
  ret i64 %0, !insn.addr !893

; uselistorder directives
  uselistorder i64 (i64*)* @_ZN4BaseD1Ev, { 2, 3, 1, 0 }
  uselistorder i64 (i64*, i32)* @_ZN7Derived12virtual_funcEi, { 1, 0 }
  uselistorder i64 ptrtoint (%vtable_8b20_type* @global_var_8b20 to i64), { 1, 0 }
}

define i64 @_ZN7DerivedD0Ev(i64* %result) {
dec_label_pc_4bec:
  %0 = call i64 @_ZN7DerivedD1Ev(i64* %result), !insn.addr !894
  %1 = call i64 @_ZdlPvm(i64* %result, i64 16), !insn.addr !895
  ret i64 %1, !insn.addr !896

; uselistorder directives
  uselistorder i64 (i64*, i64)* @_ZdlPvm, { 11, 10, 9, 8, 7, 1, 6, 5, 4, 3, 2, 0, 12 }
  uselistorder i64 16, { 1, 7, 5, 6, 2, 8, 3, 4, 0 }
  uselistorder i64 (i64*)* @_ZN7DerivedD1Ev, { 2, 1, 0 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_4c1c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !897

; uselistorder directives
  uselistorder i32 1, { 16, 15, 14, 20, 13, 21, 22, 2, 54, 23, 1, 24, 55, 25, 12, 26, 19, 0, 56, 57, 11, 27, 10, 65, 28, 9, 88, 29, 8, 58, 34, 33, 32, 31, 30, 18, 7, 6, 35, 59, 60, 36, 5, 63, 4, 41, 40, 39, 38, 37, 87, 70, 69, 68, 67, 66, 42, 43, 71, 44, 62, 73, 72, 45, 75, 74, 46, 61, 77, 76, 64, 47, 17, 79, 78, 48, 81, 80, 49, 83, 82, 50, 84, 51, 85, 52, 3, 86, 53 }
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
!77 = !{i64 9571}
!78 = !{i64 9607}
!79 = !{i64 9627}
!80 = !{i64 9641}
!81 = !{i64 9646}
!82 = !{i64 9651}
!83 = !{i64 9661}
!84 = !{i64 9673}
!85 = !{i64 9678}
!86 = !{i64 9684}
!87 = !{i64 9693}
!88 = !{i64 9739}
!89 = !{i64 9749}
!90 = !{i64 9750}
!91 = !{i64 9763}
!92 = !{i64 9785}
!93 = !{i64 9808}
!94 = !{i64 9820}
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
!169 = !{i64 10731}
!170 = !{i64 10733}
!171 = !{i64 10741}
!172 = !{i64 10745}
!173 = !{i64 10751}
!174 = !{i64 10760}
!175 = !{i64 10762}
!176 = !{i64 10768}
!177 = !{i64 10785}
!178 = !{i64 10789}
!179 = !{i64 10799}
!180 = !{i64 10802}
!181 = !{i64 10808}
!182 = !{i64 10810}
!183 = !{i64 10820}
!184 = !{i64 10824}
!185 = !{i64 10826}
!186 = !{i64 10829}
!187 = !{i64 10830}
!188 = !{i64 10842}
!189 = !{i64 10874}
!190 = !{i64 10897}
!191 = !{i64 10918}
!192 = !{i64 10924}
!193 = !{i64 10933}
!194 = !{i64 10935}
!195 = !{i64 10941}
!196 = !{i64 10969}
!197 = !{i64 10974}
!198 = !{i64 10998}
!199 = !{i64 11234}
!200 = !{i64 11236}
!201 = !{i64 11256}
!202 = !{i64 11262}
!203 = !{i64 11266}
!204 = !{i64 11269}
!205 = !{i64 11279}
!206 = !{i64 11286}
!207 = !{i64 11287}
!208 = !{i64 11300}
!209 = !{i64 11320}
!210 = !{i64 11325}
!211 = !{i64 11341}
!212 = !{i64 11353}
!213 = !{i64 11358}
!214 = !{i64 11371}
!215 = !{i64 11389}
!216 = !{i64 11401}
!217 = !{i64 11406}
!218 = !{i64 11416}
!219 = !{i64 11427}
!220 = !{i64 11433}
!221 = !{i64 11437}
!222 = !{i64 11443}
!223 = !{i64 11447}
!224 = !{i64 11453}
!225 = !{i64 11457}
!226 = !{i64 11463}
!227 = !{i64 11467}
!228 = !{i64 11483}
!229 = !{i64 11500}
!230 = !{i64 11505}
!231 = !{i64 11515}
!232 = !{i64 11520}
!233 = !{i64 11540}
!234 = !{i64 11552}
!235 = !{i64 11557}
!236 = !{i64 11568}
!237 = !{i64 11573}
!238 = !{i64 11583}
!239 = !{i64 11595}
!240 = !{i64 11607}
!241 = !{i64 11619}
!242 = !{i64 11624}
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
!291 = !{i64 12134}
!292 = !{i64 12142}
!293 = !{i64 12161}
!294 = !{i64 12166}
!295 = !{i64 12188}
!296 = !{i64 12193}
!297 = !{i64 12215}
!298 = !{i64 12220}
!299 = !{i64 12242}
!300 = !{i64 12247}
!301 = !{i64 12269}
!302 = !{i64 12274}
!303 = !{i64 12296}
!304 = !{i64 12301}
!305 = !{i64 12323}
!306 = !{i64 12328}
!307 = !{i64 12350}
!308 = !{i64 12355}
!309 = !{i64 12377}
!310 = !{i64 12382}
!311 = !{i64 12387}
!312 = !{i64 12404}
!313 = !{i64 12409}
!314 = !{i64 12431}
!315 = !{i64 12436}
!316 = !{i64 12458}
!317 = !{i64 12463}
!318 = !{i64 12485}
!319 = !{i64 12492}
!320 = !{i64 12501}
!321 = !{i64 12512}
!322 = !{i64 12552}
!323 = !{i64 12559}
!324 = !{i64 12598}
!325 = !{i64 12605}
!326 = !{i64 12626}
!327 = !{i64 12639}
!328 = !{i64 12642}
!329 = !{i64 12645}
!330 = !{i64 12631}
!331 = !{i64 12654}
!332 = !{i64 12669}
!333 = !{i64 12674}
!334 = !{i64 12683}
!335 = !{i64 12692}
!336 = !{i64 12705}
!337 = !{i64 12732}
!338 = !{i64 12738}
!339 = !{i64 12753}
!340 = !{i64 12772}
!341 = !{i64 12790}
!342 = !{i64 12801}
!343 = !{i64 12821}
!344 = !{i64 12827}
!345 = !{i64 12847}
!346 = !{i64 12853}
!347 = !{i64 12873}
!348 = !{i64 12879}
!349 = !{i64 12893}
!350 = !{i64 12928}
!351 = !{i64 12943}
!352 = !{i64 12957}
!353 = !{i64 12971}
!354 = !{i64 12991}
!355 = !{i64 12997}
!356 = !{i64 13017}
!357 = !{i64 13023}
!358 = !{i64 13043}
!359 = !{i64 13048}
!360 = !{i64 13052}
!361 = !{i64 13082}
!362 = !{i64 13100}
!363 = !{i64 13116}
!364 = !{i64 13127}
!365 = !{i64 13138}
!366 = !{i64 13158}
!367 = !{i64 13164}
!368 = !{i64 13184}
!369 = !{i64 13190}
!370 = !{i64 13210}
!371 = !{i64 13216}
!372 = !{i64 13248}
!373 = !{i64 13255}
!374 = !{i64 13275}
!375 = !{i64 13281}
!376 = !{i64 13301}
!377 = !{i64 13307}
!378 = !{i64 13327}
!379 = !{i64 13333}
!380 = !{i64 13348}
!381 = !{i64 13368}
!382 = !{i64 13374}
!383 = !{i64 13394}
!384 = !{i64 13400}
!385 = !{i64 13414}
!386 = !{i64 13415}
!387 = !{i64 13433}
!388 = !{i64 13439}
!389 = !{i64 13437}
!390 = !{i64 13458}
!391 = !{i64 13483}
!392 = !{i64 13493}
!393 = !{i64 13500}
!394 = !{i64 13519}
!395 = !{i64 13525}
!396 = !{i64 13542}
!397 = !{i64 13546}
!398 = !{i64 13549}
!399 = !{i64 13576}
!400 = !{i64 13578}
!401 = !{i64 13602}
!402 = !{i64 13610}
!403 = !{i64 13614}
!404 = !{i64 13617}
!405 = !{i64 13627}
!406 = !{i64 13630}
!407 = !{i64 13632}
!408 = !{i64 13656}
!409 = !{i64 13661}
!410 = !{i64 13663}
!411 = !{i64 13672}
!412 = !{i64 13678}
!413 = !{i64 13710}
!414 = !{i64 13716}
!415 = !{i64 13735}
!416 = !{i64 13744}
!417 = !{i64 13750}
!418 = !{i64 13768}
!419 = !{i64 13771}
!420 = !{i64 13794}
!421 = !{i64 13798}
!422 = !{i64 13826}
!423 = !{i64 13836}
!424 = !{i64 13843}
!425 = !{i64 13848}
!426 = !{i64 13855}
!427 = !{i64 13870}
!428 = !{i64 13872}
!429 = !{i64 13900}
!430 = !{i64 13921}
!431 = !{i64 13923}
!432 = !{i64 13930}
!433 = !{i64 13942}
!434 = !{i64 13953}
!435 = !{i64 13955}
!436 = !{i64 13984}
!437 = !{i64 13973}
!438 = !{i64 13988}
!439 = !{i64 13992}
!440 = !{i64 13997}
!441 = !{i64 13999}
!442 = !{i64 14008}
!443 = !{i64 14012}
!444 = !{i64 14023}
!445 = !{i64 14031}
!446 = !{i64 14055}
!447 = !{i64 14058}
!448 = !{i64 14070}
!449 = !{i64 14075}
!450 = !{i64 14081}
!451 = !{i64 14084}
!452 = !{i64 14092}
!453 = !{i64 14094}
!454 = !{i64 14114}
!455 = !{i64 14118}
!456 = !{i64 14122}
!457 = !{i64 14135}
!458 = !{i64 14139}
!459 = !{i64 14142}
!460 = !{i64 14144}
!461 = !{i64 14152}
!462 = !{i64 14161}
!463 = !{i64 14168}
!464 = !{i64 14188}
!465 = !{i64 14192}
!466 = !{i64 14214}
!467 = !{i64 14239}
!468 = !{i64 14244}
!469 = !{i64 14269}
!470 = !{i64 14286}
!471 = !{i64 14292}
!472 = !{i64 14317}
!473 = !{i64 14322}
!474 = !{i64 14350}
!475 = !{i64 14366}
!476 = !{i64 14376}
!477 = !{i64 14381}
!478 = !{i64 14401}
!479 = !{i64 14404}
!480 = !{i64 14409}
!481 = !{i64 14430}
!482 = !{i64 14450}
!483 = !{i64 14475}
!484 = !{i64 14480}
!485 = !{i64 14505}
!486 = !{i64 14522}
!487 = !{i64 14528}
!488 = !{i64 14548}
!489 = !{i64 14573}
!490 = !{i64 14578}
!491 = !{i64 14603}
!492 = !{i64 14620}
!493 = !{i64 14626}
!494 = !{i64 14646}
!495 = !{i64 14666}
!496 = !{i64 14671}
!497 = !{i64 14675}
!498 = !{i64 14701}
!499 = !{i64 14706}
!500 = !{i64 14731}
!501 = !{i64 14736}
!502 = !{i64 14761}
!503 = !{i64 14770}
!504 = !{i64 14777}
!505 = !{i64 14793}
!506 = !{i64 14807}
!507 = !{i64 14813}
!508 = !{i64 14832}
!509 = !{i64 14857}
!510 = !{i64 14862}
!511 = !{i64 14887}
!512 = !{i64 14904}
!513 = !{i64 14910}
!514 = !{i64 14931}
!515 = !{i64 14935}
!516 = !{i64 14945}
!517 = !{i64 14948}
!518 = !{i64 14951}
!519 = !{i64 14957}
!520 = !{i64 14965}
!521 = !{i64 14969}
!522 = !{i64 14991}
!523 = !{i64 14995}
!524 = !{i64 15005}
!525 = !{i64 15008}
!526 = !{i64 15011}
!527 = !{i64 15017}
!528 = !{i64 15025}
!529 = !{i64 15029}
!530 = !{i64 15051}
!531 = !{i64 15055}
!532 = !{i64 15065}
!533 = !{i64 15068}
!534 = !{i64 15071}
!535 = !{i64 15077}
!536 = !{i64 15085}
!537 = !{i64 15089}
!538 = !{i64 15095}
!539 = !{i64 15099}
!540 = !{i64 15125}
!541 = !{i64 15130}
!542 = !{i64 15159}
!543 = !{i64 15169}
!544 = !{i64 15173}
!545 = !{i64 15183}
!546 = !{i64 15190}
!547 = !{i64 15194}
!548 = !{i64 15199}
!549 = !{i64 15227}
!550 = !{i64 15237}
!551 = !{i64 15241}
!552 = !{i64 15251}
!553 = !{i64 15258}
!554 = !{i64 15262}
!555 = !{i64 15267}
!556 = !{i64 15295}
!557 = !{i64 15305}
!558 = !{i64 15309}
!559 = !{i64 15319}
!560 = !{i64 15326}
!561 = !{i64 15330}
!562 = !{i64 15335}
!563 = !{i64 15363}
!564 = !{i64 15373}
!565 = !{i64 15377}
!566 = !{i64 15387}
!567 = !{i64 15394}
!568 = !{i64 15398}
!569 = !{i64 15403}
!570 = !{i64 15424}
!571 = !{i64 15431}
!572 = !{i64 15453}
!573 = !{i64 15462}
!574 = !{i64 15479}
!575 = !{i64 15495}
!576 = !{i64 15513}
!577 = !{i64 15527}
!578 = !{i64 15533}
!579 = !{i64 15559}
!580 = !{i64 15568}
!581 = !{i64 15573}
!582 = !{i64 15574}
!583 = !{i64 15594}
!584 = !{i64 15613}
!585 = !{i64 15620}
!586 = !{i64 15623}
!587 = !{i64 15637}
!588 = !{i64 15648}
!589 = !{i64 15653}
!590 = !{i64 15661}
!591 = !{i64 15670}
!592 = !{i64 15672}
!593 = !{i64 15678}
!594 = !{i64 15680}
!595 = !{i64 15708}
!596 = !{i64 15710}
!597 = !{i64 15716}
!598 = !{i64 15723}
!599 = !{i64 15726}
!600 = !{i64 15728}
!601 = !{i64 15737}
!602 = !{i64 15743}
!603 = !{i64 15762}
!604 = !{i64 15769}
!605 = !{i64 15775}
!606 = !{i64 15778}
!607 = !{i64 15785}
!608 = !{i64 15793}
!609 = !{i64 15814}
!610 = !{i64 15825}
!611 = !{i64 15826}
!612 = !{i64 15834}
!613 = !{i64 15839}
!614 = !{i64 15844}
!615 = !{i64 15849}
!616 = !{i64 15854}
!617 = !{i64 15856}
!618 = !{i64 15861}
!619 = !{i64 15863}
!620 = !{i64 15868}
!621 = !{i64 15873}
!622 = !{i64 15879}
!623 = !{i64 15915}
!624 = !{i64 15924}
!625 = !{i64 15928}
!626 = !{i64 15946}
!627 = !{i64 15955}
!628 = !{i64 15956}
!629 = !{i64 15975}
!630 = !{i64 15981}
!631 = !{i64 15993}
!632 = !{i64 16000}
!633 = !{i64 16007}
!634 = !{i64 16009}
!635 = !{i64 16014}
!636 = !{i64 16016}
!637 = !{i64 16031}
!638 = !{i64 16035}
!639 = !{i64 16041}
!640 = !{i64 16047}
!641 = !{i64 16059}
!642 = !{i64 16062}
!643 = !{i64 16070}
!644 = !{i64 16088}
!645 = !{i64 16092}
!646 = !{i64 16110}
!647 = !{i64 16119}
!648 = !{i64 16120}
!649 = !{i64 16132}
!650 = !{i64 16141}
!651 = !{i64 16147}
!652 = !{i64 16149}
!653 = !{i64 16158}
!654 = !{i64 16161}
!655 = !{i64 16168}
!656 = !{i64 16175}
!657 = !{i64 16177}
!658 = !{i64 16184}
!659 = !{i64 16186}
!660 = !{i64 16201}
!661 = !{i64 16205}
!662 = !{i64 16211}
!663 = !{i64 16217}
!664 = !{i64 16229}
!665 = !{i64 16234}
!666 = !{i64 16236}
!667 = !{i64 16240}
!668 = !{i64 16245}
!669 = !{i64 16251}
!670 = !{i64 16268}
!671 = !{i64 16272}
!672 = !{i64 16308}
!673 = !{i64 16315}
!674 = !{i64 16350}
!675 = !{i64 16357}
!676 = !{i64 16376}
!677 = !{i64 16396}
!678 = !{i64 16416}
!679 = !{i64 16436}
!680 = !{i64 16456}
!681 = !{i64 16481}
!682 = !{i64 16486}
!683 = !{i64 16511}
!684 = !{i64 16516}
!685 = !{i64 16541}
!686 = !{i64 16558}
!687 = !{i64 16564}
!688 = !{i64 16589}
!689 = !{i64 16605}
!690 = !{i64 16610}
!691 = !{i64 16635}
!692 = !{i64 16651}
!693 = !{i64 16656}
!694 = !{i64 16692}
!695 = !{i64 16699}
!696 = !{i64 16734}
!697 = !{i64 16741}
!698 = !{i64 16766}
!699 = !{i64 16779}
!700 = !{i64 16782}
!701 = !{i64 16785}
!702 = !{i64 16771}
!703 = !{i64 16794}
!704 = !{i64 16809}
!705 = !{i64 16814}
!706 = !{i64 16823}
!707 = !{i64 16832}
!708 = !{i64 16845}
!709 = !{i64 16876}
!710 = !{i64 16882}
!711 = !{i64 16900}
!712 = !{i64 16936}
!713 = !{i64 16952}
!714 = !{i64 16957}
!715 = !{i64 16992}
!716 = !{i64 16999}
!717 = !{i64 17032}
!718 = !{i64 17043}
!719 = !{i64 17055}
!720 = !{i64 17060}
!721 = !{i64 17073}
!722 = !{i64 17108}
!723 = !{i64 17115}
!724 = !{i64 17150}
!725 = !{i64 17157}
!726 = !{i64 17181}
!727 = !{i64 17194}
!728 = !{i64 17197}
!729 = !{i64 17200}
!730 = !{i64 17209}
!731 = !{i64 17221}
!732 = !{i64 17230}
!733 = !{i64 17239}
!734 = !{i64 17248}
!735 = !{i64 17284}
!736 = !{i64 17296}
!737 = !{i64 17300}
!738 = !{i64 17304}
!739 = !{i64 17334}
!740 = !{i64 17339}
!741 = !{i64 17350}
!742 = !{i64 17355}
!743 = !{i64 17364}
!744 = !{i64 17389}
!745 = !{i64 17395}
!746 = !{i64 17419}
!747 = !{i64 17425}
!748 = !{i64 17443}
!749 = !{i64 17444}
!750 = !{i64 17464}
!751 = !{i64 17468}
!752 = !{i64 17471}
!753 = !{i64 17481}
!754 = !{i64 17488}
!755 = !{i64 17513}
!756 = !{i64 17519}
!757 = !{i64 17537}
!758 = !{i64 17556}
!759 = !{i64 17586}
!760 = !{i64 17591}
!761 = !{i64 17602}
!762 = !{i64 17607}
!763 = !{i64 17616}
!764 = !{i64 17641}
!765 = !{i64 17647}
!766 = !{i64 17671}
!767 = !{i64 17677}
!768 = !{i64 17678}
!769 = !{i64 17698}
!770 = !{i64 17703}
!771 = !{i64 17712}
!772 = !{i64 17719}
!773 = !{i64 17743}
!774 = !{i64 17749}
!775 = !{i64 17773}
!776 = !{i64 17780}
!777 = !{i64 17804}
!778 = !{i64 17810}
!779 = !{i64 17835}
!780 = !{i64 17841}
!781 = !{i64 17865}
!782 = !{i64 17870}
!783 = !{i64 17874}
!784 = !{i64 17899}
!785 = !{i64 17906}
!786 = !{i64 17930}
!787 = !{i64 17936}
!788 = !{i64 17961}
!789 = !{i64 17967}
!790 = !{i64 17991}
!791 = !{i64 17996}
!792 = !{i64 18000}
!793 = !{i64 18025}
!794 = !{i64 18037}
!795 = !{i64 18044}
!796 = !{i64 18068}
!797 = !{i64 18074}
!798 = !{i64 18098}
!799 = !{i64 18104}
!800 = !{i64 18128}
!801 = !{i64 18134}
!802 = !{i64 18159}
!803 = !{i64 18171}
!804 = !{i64 18178}
!805 = !{i64 18202}
!806 = !{i64 18208}
!807 = !{i64 18232}
!808 = !{i64 18238}
!809 = !{i64 18262}
!810 = !{i64 18268}
!811 = !{i64 18286}
!812 = !{i64 18311}
!813 = !{i64 18318}
!814 = !{i64 18336}
!815 = !{i64 18345}
!816 = !{i64 18369}
!817 = !{i64 18375}
!818 = !{i64 18399}
!819 = !{i64 18405}
!820 = !{i64 18429}
!821 = !{i64 18435}
!822 = !{i64 18459}
!823 = !{i64 18466}
!824 = !{i64 18490}
!825 = !{i64 18496}
!826 = !{i64 18520}
!827 = !{i64 18526}
!828 = !{i64 18550}
!829 = !{i64 18556}
!830 = !{i64 18585}
!831 = !{i64 18590}
!832 = !{i64 18597}
!833 = !{i64 18602}
!834 = !{i64 18618}
!835 = !{i64 18636}
!836 = !{i64 18660}
!837 = !{i64 18666}
!838 = !{i64 18690}
!839 = !{i64 18696}
!840 = !{i64 18712}
!841 = !{i64 18736}
!842 = !{i64 18742}
!843 = !{i64 18766}
!844 = !{i64 18772}
!845 = !{i64 18790}
!846 = !{i64 18808}
!847 = !{i64 18826}
!848 = !{i64 18855}
!849 = !{i64 18865}
!850 = !{i64 18872}
!851 = !{i64 18897}
!852 = !{i64 18914}
!853 = !{i64 18920}
!854 = !{i64 18949}
!855 = !{i64 18959}
!856 = !{i64 18966}
!857 = !{i64 18991}
!858 = !{i64 19008}
!859 = !{i64 19014}
!860 = !{i64 19043}
!861 = !{i64 19050}
!862 = !{i64 19061}
!863 = !{i64 19075}
!864 = !{i64 19100}
!865 = !{i64 19122}
!866 = !{i64 19138}
!867 = !{i64 19145}
!868 = !{i64 19150}
!869 = !{i64 19154}
!870 = !{i64 19166}
!871 = !{i64 19170}
!872 = !{i64 19199}
!873 = !{i64 19216}
!874 = !{i64 19222}
!875 = !{i64 19227}
!876 = !{i64 19231}
!877 = !{i64 19240}
!878 = !{i64 19244}
!879 = !{i64 19273}
!880 = !{i64 19287}
!881 = !{i64 19302}
!882 = !{i64 19314}
!883 = !{i64 19321}
!884 = !{i64 19326}
!885 = !{i64 19330}
!886 = !{i64 19355}
!887 = !{i64 19372}
!888 = !{i64 19378}
!889 = !{i64 19383}
!890 = !{i64 19387}
!891 = !{i64 19417}
!892 = !{i64 19427}
!893 = !{i64 19434}
!894 = !{i64 19459}
!895 = !{i64 19476}
!896 = !{i64 19482}
!897 = !{i64 19496}
