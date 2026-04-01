source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_Unwind_Exception = type { i32 }

@global_var_3e8 = global [3 x i32] %wide-string
@global_var_c00 = local_unnamed_addr global i32 36852
@global_var_74d4 = local_unnamed_addr constant i32 3473443
@global_var_7404 = constant i32 134548545
@global_var_805 = global i32 1677721600
@global_var_7264 = local_unnamed_addr constant i32* @global_var_805
@global_var_1f4 = global i32 1
@global_var_7023 = local_unnamed_addr constant i32 7168
@global_var_6fd4 = constant i32 135151872
@global_var_6f94 = local_unnamed_addr constant i32 135151872
@global_var_6ef3 = constant i32 1107461384
@global_var_6c54 = constant i32 67374175
@global_var_6ac6 = local_unnamed_addr constant i32 42272782
@global_var_6a94 = local_unnamed_addr constant i32 28
@global_var_6a54 = local_unnamed_addr constant i32 28
@global_var_69f3 = local_unnamed_addr constant i32 7168
@global_var_6974 = local_unnamed_addr constant i32 28
@global_var_68f4 = local_unnamed_addr constant i32 4084
@global_var_68a6 = local_unnamed_addr constant i32 1141181762
@global_var_6874 = constant i32 3956
@global_var_6824 = local_unnamed_addr constant i32 222429829
@global_var_67d6 = local_unnamed_addr constant i32 -653787136
@global_var_67a6 = local_unnamed_addr constant i32 1107627330
@global_var_6776 = local_unnamed_addr constant i32 -656932864
@global_var_6746 = local_unnamed_addr constant i32 1141181762
@global_var_6716 = local_unnamed_addr constant i32 -662175744
@global_var_66e6 = local_unnamed_addr constant i32 1191513410
@global_var_66b6 = local_unnamed_addr constant i32 -673710080
@global_var_6674 = constant i32 -10324
@global_var_6626 = local_unnamed_addr constant i32 263180
@global_var_65f6 = local_unnamed_addr constant i32 917503
@global_var_65c6 = local_unnamed_addr constant i32 208077699
@global_var_6596 = local_unnamed_addr constant i32 3014655
@global_var_6564 = local_unnamed_addr constant i32 58933765
@global_var_64e4 = local_unnamed_addr constant i32 58933765
@global_var_6494 = constant i32 -10484
@global_var_63a8 = constant i32 28
@global_var_6384 = constant i32 32
@global_var_6338 = constant i32 222429829
@global_var_6304 = constant i32 28
@global_var_6276 = local_unnamed_addr constant i32 42272782
@global_var_6234 = constant i32 135151872
@global_var_61d4 = local_unnamed_addr constant i32 135151872
@global_var_6194 = constant i32 135151872
@global_var_60f4 = constant i32 135151872
@global_var_6083 = local_unnamed_addr constant i32 492544
@global_var_5d84 = constant i32 222429829
@global_var_5d34 = constant i32 -11396
@global_var_5ce4 = local_unnamed_addr constant i32 67917573
@global_var_5ca4 = constant i32 1174537091
@global_var_5c54 = constant i32 135151872
@global_var_5c04 = constant i32 -11684
@global_var_5b84 = local_unnamed_addr constant i32 37
@global_var_5af4 = constant i32 67374184
@global_var_5ab4 = constant i32 32
@global_var_5a74 = local_unnamed_addr constant i32 28
@global_var_5988 = constant i32 32
@global_var_5964 = local_unnamed_addr constant i32 32
@global_var_5928 = constant i32 134693888
@global_var_5904 = constant i32 0
@global_var_58c8 = constant i32 -2172
@global_var_5898 = constant i32 -2444
@global_var_5854 = constant i32 8484
@global_var_5806 = local_unnamed_addr constant i32 -219938816
@global_var_57d6 = local_unnamed_addr constant i32 -237764608
@global_var_57a6 = local_unnamed_addr constant i32 -257687552
@global_var_5754 = local_unnamed_addr constant i32 5540
@global_var_56f4 = local_unnamed_addr constant i32 5188
@global_var_56b8 = constant i32 -5356
@global_var_5624 = constant i32 4344
@global_var_55d4 = constant i32 4024
@global_var_5596 = local_unnamed_addr constant i32 -456916992
@global_var_5566 = local_unnamed_addr constant i32 -474742784
@global_var_5536 = local_unnamed_addr constant i32 -511442944
@global_var_b64 = global i32 8
@global_var_54e4 = constant i32* @global_var_b64
@global_var_9fc = global i32 8
@global_var_5494 = constant i32* @global_var_9fc
@global_var_5456 = local_unnamed_addr constant i32 -621543424
@global_var_5426 = local_unnamed_addr constant i32 -644612096
@global_var_53f6 = local_unnamed_addr constant i32 -668729344
@global_var_53a4 = constant i32 7416
@global_var_5366 = local_unnamed_addr constant i32 -728498176
@global_var_5336 = local_unnamed_addr constant i32 -758906880
@global_var_5306 = local_unnamed_addr constant i32 -886833152
@global_var_52d6 = local_unnamed_addr constant i32 -963379200
@global_var_52a6 = local_unnamed_addr constant i32 -1045168128
@global_var_5276 = local_unnamed_addr constant i32 -1111228416
@global_var_5224 = local_unnamed_addr constant [9 x i8] c"iDerived\00"
@global_var_51c4 = local_unnamed_addr constant [35 x i8] c"est_cpp_exceptionvE13BaseException\00"
@global_var_5164 = local_unnamed_addr constant [7 x i8] c" 703)\0A\00"
@global_var_5124 = local_unnamed_addr constant i32 -425747226
@global_var_5094 = local_unnamed_addr constant i32 -433577884
@global_var_5056 = local_unnamed_addr constant i32 976367661
@global_var_5027 = local_unnamed_addr constant i32 -2132362871
@global_var_46a6 = local_unnamed_addr constant i32 5608
@0 = external global i32

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define i32* @function_1040(i32 %size) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32* @_Znwj(i32 %size), !insn.addr !4
  ret i32* %0, !insn.addr !4
}

define i32 @function_1050() local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @_ZSt9terminatev(), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1060(i32 %arg1) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @__cxa_begin_catch(i32 %arg1), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1070(i32 %arg1) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @__cxa_allocate_exception(i32 %arg1), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1080(i8* %s) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @strlen(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1090(void (i32*)* %func, i32* %arg, i32* %dso_handle) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @__cxa_atexit(void (i32*)* %func, i32* %arg, i32* %dso_handle), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10a0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10b0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32* @function_10c0(i32 %size) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32* @_Znaj(i32 %size), !insn.addr !12
  ret i32* %0, !insn.addr !12
}

define i8* @function_10d0(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !13
  ret i8* %0, !insn.addr !13
}

define void @function_10e0(i32* %ptr) local_unnamed_addr {
dec_label_pc_10e0:
  call void @_ZdlPv(i32* %ptr), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_10f0(i32 %arg1) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 @__cxa_bad_typeid(i32 %arg1), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1100(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @__dynamic_cast(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_1110(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1110:
  %0 = inttoptr i32 %size to i32*, !insn.addr !17
  call void @_ZdaPv(i32* %ptr, i32* %0), !insn.addr !17
  ret void, !insn.addr !17
}

define i32 @function_1120(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_1130() local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @__cxa_rethrow(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1140() local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1150() local_unnamed_addr {
dec_label_pc_1150:
  %0 = call i32 @__cxa_end_catch(), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32* @function_1160(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !22
  ret i32* %0, !insn.addr !22
}

define i32 @function_1170(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32 @__cxa_throw(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define void @function_1180(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1180:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @function_1190() local_unnamed_addr {
dec_label_pc_1190:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !25
}

define i32 @__cxx_global_var_init(i32 %arg1) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !26
  %3 = add i32 %1, 32336, !insn.addr !27
  %4 = inttoptr i32 %3 to i32*, !insn.addr !27
  %5 = load i32, i32* %4, align 4, !insn.addr !27
  %6 = add i32 %1, 32468, !insn.addr !28
  %7 = add i32 %1, 32440, !insn.addr !29
  %8 = inttoptr i32 %5 to void (i32*)*, !insn.addr !30
  %9 = inttoptr i32 %6 to i32*, !insn.addr !31
  %10 = inttoptr i32 %7 to i32*, !insn.addr !31
  %11 = call i32 @__cxa_atexit(void (i32*)* %8, i32* %9, i32* %10), !insn.addr !31
  ret i32 %11, !insn.addr !32
}

define i32 @_GLOBAL__sub_I_5_1.cpp(i32 %arg1) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__cxx_global_var_init(i32 %1), !insn.addr !33
  ret i32 %2, !insn.addr !34
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1210:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_123c(i32 %2), !insn.addr !35
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 32200, !insn.addr !36
  %6 = inttoptr i32 %5 to i32*, !insn.addr !36
  %7 = load i32, i32* %6, align 4, !insn.addr !36
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !37
  %9 = call i32 @__asm_hlt(), !insn.addr !38
  unreachable, !insn.addr !38

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_123c(i32 %arg1) local_unnamed_addr {
dec_label_pc_123c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !39
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !40
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1250:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !41
  %3 = add i32 %1, 32291, !insn.addr !42
  ret i32 %3, !insn.addr !43
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !44
  ret i32 0, !insn.addr !45
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_12e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !46
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !47
  %3 = add i32 %1, 32139, !insn.addr !48
  %4 = inttoptr i32 %3 to i8*, !insn.addr !48
  %5 = load i8, i8* %4, align 1, !insn.addr !48
  %6 = icmp eq i8 %5, 0, !insn.addr !48
  %7 = icmp eq i1 %6, false, !insn.addr !49
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !49
  br i1 %7, label %dec_label_pc_1362, label %dec_label_pc_1301, !insn.addr !49

dec_label_pc_1301:                                ; preds = %dec_label_pc_12e0
  %8 = add i32 %1, 31995, !insn.addr !50
  %9 = inttoptr i32 %8 to i32*, !insn.addr !50
  %10 = load i32, i32* %9, align 4, !insn.addr !50
  %11 = icmp eq i32 %10, 0, !insn.addr !51
  br i1 %11, label %dec_label_pc_131e, label %dec_label_pc_130b, !insn.addr !52

dec_label_pc_130b:                                ; preds = %dec_label_pc_1301
  %12 = call i32 @function_1190(), !insn.addr !53
  br label %dec_label_pc_131e, !insn.addr !54

dec_label_pc_131e:                                ; preds = %dec_label_pc_130b, %dec_label_pc_1301
  %13 = call i32 @deregister_tm_clones(), !insn.addr !55
  store i8 1, i8* %4, align 1, !insn.addr !56
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !56
  br label %dec_label_pc_1362, !insn.addr !56

dec_label_pc_1362:                                ; preds = %dec_label_pc_131e, %dec_label_pc_12e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !57

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1370:
  %0 = call i32 @register_tm_clones(), !insn.addr !58
  ret i32 %0, !insn.addr !58
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1379:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !59
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_137d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !60
}

define i32 @_Z20test_cpp_member_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1390:
  %0 = alloca i32
  %stack_var_-44 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 31844, !insn.addr !61
  %3 = add i32 %1, 15468, !insn.addr !62
  %4 = inttoptr i32 %2 to i8*, !insn.addr !63
  %5 = call i32 @_ZN11SimpleClassC2EiPKc(i32* nonnull %stack_var_-44, i32* inttoptr (i32 5 to i32*), i32 %3, i8* %4), !insn.addr !63
  %6 = call i32 @_ZN11SimpleClass8setValueEi(i32* nonnull %stack_var_-44, i32 10), !insn.addr !64
  %7 = call i32 @_ZNK11SimpleClass8getValueEv(i32* nonnull %stack_var_-44), !insn.addr !65
  %8 = call i32 @_ZNK11SimpleClass7computeEi(i32* nonnull %stack_var_-44, i32* inttoptr (i32 3 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !66
  %9 = call i32 @_ZN11SimpleClass10getClassIDEv(), !insn.addr !67
  %10 = add i32 %8, %7, !insn.addr !68
  %11 = add i32 %10, %9, !insn.addr !69
  ret i32 %11, !insn.addr !70
}

define i32 @_Z20test_cpp_constructorv(i32* %result) local_unnamed_addr {
dec_label_pc_1420:
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @_ZN14LifecycleClassC2Ej(i32* nonnull %stack_var_-20, i32* inttoptr (i32 5 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !71
  %1 = call i32 @_ZNK14LifecycleClass7getDataEj(i32* nonnull %stack_var_-20, i32 2), !insn.addr !72
  %2 = inttoptr i32 %1 to i32*, !insn.addr !73
  %3 = call i32 @_ZN14LifecycleClass16getInstanceCountEv(i32* %2), !insn.addr !73
  %4 = add i32 %3, %1, !insn.addr !74
  %5 = call i32 @_ZN14LifecycleClassD2Ev(i32* nonnull %stack_var_-20, i32* nonnull @0), !insn.addr !75
  %6 = call i32 @_ZN14LifecycleClass16getInstanceCountEv(i32* nonnull @0), !insn.addr !76
  %7 = mul i32 %6, ptrtoint ([3 x i32]* @global_var_3e8 to i32), !insn.addr !77
  %8 = add i32 %4, %7, !insn.addr !78
  ret i32 %8, !insn.addr !79

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN14LifecycleClass16getInstanceCountEv, { 1, 0 }
}

define i32 @_Z17call_virtual_funcP4Basei(i32* %result, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_14f0:
  %0 = load i32, i32* %arg2, align 4, !insn.addr !80
  ret i32 %0, !insn.addr !81
}

define i32 @_Z21test_cpp_virtual_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1520:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 @_ZN4BaseC2Ev(i32* nonnull %stack_var_-12, i32* nonnull @0), !insn.addr !82
  %1 = call i32 @_ZN7DerivedC2Ei(i32* nonnull %stack_var_-20, i32* inttoptr (i32 3 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !83
  %2 = call i32 @_ZN4Base12virtual_funcEi(i32* nonnull %stack_var_-12, i32 5), !insn.addr !84
  %3 = call i32 @_ZN7Derived12virtual_funcEi(i32* nonnull %stack_var_-20, i32 5), !insn.addr !85
  %4 = call i32 @_Z17call_virtual_funcP4Basei(i32* nonnull %stack_var_-12, i32* inttoptr (i32 5 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !86
  %5 = call i32 @_Z17call_virtual_funcP4Basei(i32* nonnull %stack_var_-20, i32* inttoptr (i32 5 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !87
  %6 = add i32 %3, %2, !insn.addr !88
  %7 = add i32 %6, %4, !insn.addr !89
  %8 = add i32 %7, %5, !insn.addr !90
  %9 = call i32 @_ZN7DerivedD2Ev(i32* nonnull %stack_var_-20, i32* nonnull @0), !insn.addr !91
  %10 = call i32 @_ZN4BaseD2Ev(i32* nonnull %stack_var_-12), !insn.addr !92
  ret i32 %8, !insn.addr !93

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0, 2, 3 }
  uselistorder i32 (i32*, i32*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i32 @function_162d() local_unnamed_addr {
dec_label_pc_162d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -20, !insn.addr !94
  %3 = inttoptr i32 %2 to i32*, !insn.addr !94
  %4 = add i32 %1, -24, !insn.addr !95
  %5 = inttoptr i32 %4 to i32*, !insn.addr !95
  %6 = call i32 @function_164c(), !insn.addr !96
  ret i32 %6, !insn.addr !96

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_1638() local_unnamed_addr {
dec_label_pc_1638:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -20, !insn.addr !97
  %3 = inttoptr i32 %2 to i32*, !insn.addr !97
  %4 = add i32 %1, -24, !insn.addr !98
  %5 = inttoptr i32 %4 to i32*, !insn.addr !98
  %6 = add i32 %1, -16, !insn.addr !99
  %7 = inttoptr i32 %6 to i32*, !insn.addr !100
  %8 = call i32 @_ZN7DerivedD2Ev(i32* %7, i32* nonnull @0), !insn.addr !100
  ret i32 %8, !insn.addr !100

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
}

define i32 @function_164c() local_unnamed_addr {
dec_label_pc_164c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -8, !insn.addr !101
  %3 = inttoptr i32 %2 to i32*, !insn.addr !102
  %4 = call i32 @_ZN4BaseD2Ev(i32* %3), !insn.addr !102
  %5 = add i32 %1, -20, !insn.addr !103
  %6 = inttoptr i32 %5 to i32*, !insn.addr !103
  %7 = load i32, i32* %6, align 4, !insn.addr !103
  %8 = inttoptr i32 %7 to %_Unwind_Exception*, !insn.addr !104
  call void @_Unwind_Resume(%_Unwind_Exception* %8), !insn.addr !104
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !105

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -20, { 1, 0, 2 }
}

define i32 @_Z29test_cpp_multiple_inheritancev(i32* %result) local_unnamed_addr {
dec_label_pc_1670:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @_ZN12MultiDerivedC2Ev(i32* nonnull %stack_var_-28, i32* nonnull @0), !insn.addr !106
  %3 = load i32, i32* %stack_var_-28, align 4, !insn.addr !107
  %4 = inttoptr i32 %3 to i32*, !insn.addr !108
  %5 = load i32, i32* %4, align 4, !insn.addr !108
  %6 = inttoptr i32 %1 to i32*, !insn.addr !109
  %7 = load i32, i32* %6, align 4, !insn.addr !109
  %8 = add i32 %5, 1, !insn.addr !110
  %9 = add i32 %8, %7, !insn.addr !111
  %10 = call i32 @_ZN12MultiDerivedD2Ev(i32* nonnull %stack_var_-28, i32* nonnull @0), !insn.addr !112
  ret i32 %9, !insn.addr !113

; uselistorder directives
  uselistorder i32* %stack_var_-28, { 1, 0, 2 }
}

define i32 @_Z28test_cpp_diamond_inheritancev(i32* %result) local_unnamed_addr {
dec_label_pc_1760:
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %0 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !114
  %1 = call i32 @_ZN14DiamondDerivedC1Ev(i32* nonnull %stack_var_-36, i32* nonnull @0), !insn.addr !115
  %2 = load i32, i32* %stack_var_-36, align 4, !insn.addr !116
  %3 = add i32 %2, -12, !insn.addr !117
  %4 = inttoptr i32 %3 to i32*, !insn.addr !117
  %5 = load i32, i32* %4, align 4, !insn.addr !117
  %6 = add i32 %0, -28, !insn.addr !118
  %7 = add i32 %5, %6, !insn.addr !118
  %8 = inttoptr i32 %7 to i32*, !insn.addr !118
  store i32 50, i32* %8, align 4, !insn.addr !118
  %9 = load i32, i32* %stack_var_-36, align 4, !insn.addr !119
  %10 = add i32 %9, -12, !insn.addr !120
  %11 = inttoptr i32 %10 to i32*, !insn.addr !120
  %12 = load i32, i32* %11, align 4, !insn.addr !120
  %13 = ptrtoint i32* %stack_var_-36 to i32, !insn.addr !121
  %14 = add i32 %12, %13, !insn.addr !122
  %15 = inttoptr i32 %14 to i32*, !insn.addr !123
  %16 = load i32, i32* %15, align 4, !insn.addr !123
  %17 = inttoptr i32 %16 to i32*, !insn.addr !124
  %18 = load i32, i32* %17, align 4, !insn.addr !124
  %19 = add i32 %12, %6, !insn.addr !125
  %20 = inttoptr i32 %19 to i32*, !insn.addr !125
  store i32 100, i32* %20, align 4, !insn.addr !125
  %21 = load i32, i32* %15, align 4, !insn.addr !126
  %22 = inttoptr i32 %21 to i32*, !insn.addr !127
  %23 = load i32, i32* %22, align 4, !insn.addr !127
  %24 = add i32 %23, %18, !insn.addr !128
  %25 = call i32 @_ZN14DiamondDerivedD1Ev(i32* nonnull %stack_var_-36, i32* nonnull @0), !insn.addr !129
  ret i32 %24, !insn.addr !130

; uselistorder directives
  uselistorder i32* %stack_var_-36, { 0, 2, 3, 4, 1 }
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %2 = call i32 @_ZN5PointC2Eii(i32* nonnull %stack_var_-20, i32 1, i32 2), !insn.addr !131
  %3 = call i32 @_ZN5PointC2Eii(i32* nonnull %stack_var_-28, i32 3, i32 4), !insn.addr !132
  %4 = call i32 @_ZNK5PointplERKS_(i32* nonnull %stack_var_-36, i32* nonnull %stack_var_-20, i32* nonnull %stack_var_-28, i32 ptrtoint (i32* @0 to i32)), !insn.addr !133
  %5 = call i32 @_ZNK5PointeqERKS_(i32* nonnull %stack_var_-20, i32* nonnull %stack_var_-28), !insn.addr !134
  %6 = call i32 @_ZN5PointppEv(i32* nonnull %stack_var_-36), !insn.addr !135
  %7 = load i32, i32* %stack_var_-36, align 4, !insn.addr !136
  %8 = add i32 %7, %1, !insn.addr !137
  %9 = urem i32 %5, 2
  %10 = icmp eq i32 %9, 0, !insn.addr !138
  %11 = icmp eq i1 %10, false, !insn.addr !139
  %12 = select i1 %11, i32 0, i32 10, !insn.addr !139
  %13 = add i32 %8, %12, !insn.addr !140
  ret i32 %13, !insn.addr !141

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 0, 2, 1 }
  uselistorder i32* %stack_var_-28, { 0, 2, 1 }
  uselistorder i32* %stack_var_-36, { 2, 0, 1 }
}

define i32 @_Z22test_cpp_template_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1900:
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = call i32 @_Z12template_maxIiET_S0_S0_(i32 0, i32 7), !insn.addr !142
  %1 = call double @_Z12template_maxIdET_S0_S0_(double 0.000000e+00, double 0x40040000), !insn.addr !143
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !144
  store i32 20, i32* %stack_var_-28, align 4, !insn.addr !145
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-28), !insn.addr !146
  %2 = fptosi double %1 to i32, !insn.addr !147
  %3 = add i32 %0, %2, !insn.addr !148
  %4 = load i32, i32* %stack_var_-24, align 4, !insn.addr !149
  %5 = add i32 %3, %4, !insn.addr !149
  %6 = load i32, i32* %stack_var_-28, align 4, !insn.addr !150
  %7 = add i32 %5, %6, !insn.addr !150
  ret i32 %7, !insn.addr !151

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 0, 2 }
  uselistorder i32* %stack_var_-28, { 1, 0, 2 }
}

define i32 @_Z23test_cpp_template_classv(i32* %result) local_unnamed_addr {
dec_label_pc_19b0:
  %0 = alloca x86_fp80
  %1 = load x86_fp80, x86_fp80* %0
  %stack_var_-148 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %2 = call i32 @_ZN9ContainerIiEC1Ev(i32* nonnull %stack_var_-52), !insn.addr !152
  %3 = call i32 @_ZN9ContainerIiE4pushEi(i32* nonnull %stack_var_-52, i32 10), !insn.addr !153
  %4 = call i32 @_ZN9ContainerIiE4pushEi(i32* nonnull %stack_var_-52, i32 20), !insn.addr !154
  %5 = call i32 @_ZN9ContainerIiE4pushEi(i32* nonnull %stack_var_-52, i32 30), !insn.addr !155
  %6 = call i32 @_ZNK9ContainerIiE3getEi(i32* nonnull %stack_var_-52, i32 0), !insn.addr !156
  %7 = call i32 @_ZNK9ContainerIiE7getSizeEv(i32* nonnull %stack_var_-52), !insn.addr !157
  %8 = call i32 @_ZN9ContainerIdEC1Ev(i32* nonnull %stack_var_-148), !insn.addr !158
  %9 = call i32 @_ZN9ContainerIdE4pushEd(i32* nonnull %stack_var_-148, double 0x51EB851F), !insn.addr !159
  %10 = call i32 @_ZNK9ContainerIdE3getEi(i32* nonnull %stack_var_-148, i32 0), !insn.addr !160
  %11 = fptosi x86_fp80 %1 to i32, !insn.addr !161
  %12 = add i32 %6, %11, !insn.addr !162
  %13 = add i32 %12, %7, !insn.addr !163
  ret i32 %13, !insn.addr !164

; uselistorder directives
  uselistorder i32 (i32*, i32)* @_ZN9ContainerIiE4pushEi, { 2, 1, 0 }
}

define i32 @_Z15test_cpp_lambdav(i32* %result) local_unnamed_addr {
dec_label_pc_1b20:
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  store i32 10, i32* %stack_var_-28, align 4, !insn.addr !165
  %0 = call i32 @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i32* nonnull %stack_var_-28, i32 3), !insn.addr !166
  %1 = call i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i32* nonnull %stack_var_-36, i32 10, i32 20), !insn.addr !167
  %2 = add i32 %1, %0, !insn.addr !168
  ret i32 %2, !insn.addr !169
}

define i32 @"_ZZ15test_cpp_lambdavENK3$_1clEi"(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !170
  %2 = inttoptr i32 %1 to i32*, !insn.addr !170
  %3 = load i32, i32* %2, align 4, !insn.addr !170
  %4 = inttoptr i32 %3 to i32*, !insn.addr !171
  %5 = load i32, i32* %4, align 4, !insn.addr !171
  %6 = add i32 %5, 5, !insn.addr !172
  store i32 %6, i32* %4, align 4, !insn.addr !173
  %7 = load i32, i32* %result, align 4, !insn.addr !174
  %8 = mul i32 %7, %arg2, !insn.addr !174
  %9 = load i32, i32* %2, align 4, !insn.addr !175
  %10 = inttoptr i32 %9 to i32*, !insn.addr !176
  %11 = load i32, i32* %10, align 4, !insn.addr !176
  %12 = add i32 %11, %8, !insn.addr !176
  ret i32 %12, !insn.addr !177
}

define i32 @"_ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_"(i32* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = add i32 %arg3, %arg2, !insn.addr !178
  ret i32 %0, !insn.addr !179
}

define i32 @_Z18test_cpp_exceptionv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__cxa_allocate_exception(i32 4), !insn.addr !180
  %3 = inttoptr i32 %2 to i32*, !insn.addr !181
  store i32 42, i32* %3, align 4, !insn.addr !181
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_7404 to i32), i32 -28), !insn.addr !182
  %5 = inttoptr i32 %4 to i32*, !insn.addr !182
  %6 = load i32, i32* %5, align 4, !insn.addr !182
  %7 = call i32 @__cxa_throw(i32 %2, i32 %6, i32 0), !insn.addr !183
  ret i32 %7, !insn.addr !184
}

define i32 @_Z18test_cpp_smart_ptrv(i32* %result) local_unnamed_addr {
dec_label_pc_1d90:
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %stack_var_-36 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32* @_Znwj(i32 4), !insn.addr !185
  store i32 100, i32* %0, align 4, !insn.addr !186
  %1 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i32* nonnull %stack_var_-12, i32* %0, i32* nonnull @0), !insn.addr !187
  %2 = call i32 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i32* nonnull %stack_var_-12, i32* nonnull @0), !insn.addr !188
  %3 = inttoptr i32 %2 to i32*, !insn.addr !189
  store i32 200, i32* %3, align 4, !insn.addr !189
  %4 = bitcast i32* %stack_var_-12 to i32**, !insn.addr !190
  %5 = call i32* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i32** nonnull %4), !insn.addr !190
  %6 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i32* nonnull %stack_var_-28, i32* %5, i32* nonnull @0), !insn.addr !191
  %7 = call i32 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i32* nonnull %stack_var_-28, i32* nonnull @0), !insn.addr !192
  %8 = inttoptr i32 %7 to i32*, !insn.addr !193
  %9 = load i32, i32* %8, align 4, !insn.addr !193
  %10 = call i32* @_Znaj(i32 20), !insn.addr !194
  %11 = ptrtoint i32* %10 to i32, !insn.addr !194
  store i32 1, i32* %10, align 4, !insn.addr !195
  %12 = add i32 %11, 4, !insn.addr !196
  %13 = inttoptr i32 %12 to i32*, !insn.addr !196
  store i32 2, i32* %13, align 4, !insn.addr !196
  %14 = add i32 %11, 8, !insn.addr !197
  %15 = inttoptr i32 %14 to i32*, !insn.addr !197
  store i32 3, i32* %15, align 4, !insn.addr !197
  %16 = add i32 %11, 12, !insn.addr !198
  %17 = inttoptr i32 %16 to i32*, !insn.addr !198
  store i32 4, i32* %17, align 4, !insn.addr !198
  %18 = add i32 %11, 16, !insn.addr !199
  %19 = inttoptr i32 %18 to i32*, !insn.addr !199
  store i32 5, i32* %19, align 4, !insn.addr !199
  %20 = call i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i32* nonnull %stack_var_-36, i32* %10, i32* nonnull @0), !insn.addr !200
  %21 = call i32 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj(i32* nonnull %stack_var_-36, i32* inttoptr (i32 2 to i32*), i32 ptrtoint (i32* @0 to i32)), !insn.addr !201
  %22 = inttoptr i32 %21 to i32*, !insn.addr !202
  %23 = load i32, i32* %22, align 4, !insn.addr !202
  %24 = call i32* @_Znwj(i32 4), !insn.addr !203
  store i32 ptrtoint (i32* @global_var_1f4 to i32), i32* %24, align 4, !insn.addr !204
  %25 = call i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i32* nonnull %stack_var_-52, i32* %24, i32* nonnull %stack_var_-44, i32* nonnull @0), !insn.addr !205
  %26 = call i32 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i32* nonnull %stack_var_-52, i32* nonnull @0), !insn.addr !206
  %27 = inttoptr i32 %26 to i32*, !insn.addr !207
  %28 = load i32, i32* %27, align 4, !insn.addr !207
  %29 = add i32 %23, %9, !insn.addr !208
  %30 = add i32 %29, %28, !insn.addr !209
  %31 = call i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i32* nonnull %stack_var_-52, i32* nonnull @0), !insn.addr !210
  %32 = call i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i32* nonnull %stack_var_-36, i32* nonnull @0), !insn.addr !211
  %33 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %stack_var_-28, i32* nonnull @0), !insn.addr !212
  %34 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %stack_var_-12, i32* nonnull @0), !insn.addr !213
  ret i32 %30, !insn.addr !214

; uselistorder directives
  uselistorder i32 %11, { 3, 0, 1, 2 }
  uselistorder i32 5, { 3, 4, 1, 2, 0 }
  uselistorder i32 3, { 3, 1, 2, 0 }
  uselistorder i32 (i32*, i32*)* @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv, { 1, 0 }
}

define i32 @function_1f55() local_unnamed_addr {
dec_label_pc_1f55:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -12, !insn.addr !215
  %3 = inttoptr i32 %2 to i32*, !insn.addr !215
  %4 = add i32 %1, -16, !insn.addr !216
  %5 = inttoptr i32 %4 to i32*, !insn.addr !216
  %6 = call i32 @function_1fa6(), !insn.addr !217
  ret i32 %6, !insn.addr !217

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_1f60() local_unnamed_addr {
dec_label_pc_1f60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -12, !insn.addr !218
  %3 = inttoptr i32 %2 to i32*, !insn.addr !218
  %4 = add i32 %1, -16, !insn.addr !219
  %5 = inttoptr i32 %4 to i32*, !insn.addr !219
  %6 = call i32 @function_1f98(), !insn.addr !220
  ret i32 %6, !insn.addr !220

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_1f6b() local_unnamed_addr {
dec_label_pc_1f6b:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -12, !insn.addr !221
  %3 = inttoptr i32 %2 to i32*, !insn.addr !221
  %4 = add i32 %1, -16, !insn.addr !222
  %5 = inttoptr i32 %4 to i32*, !insn.addr !222
  %6 = call i32 @function_1f8a(), !insn.addr !223
  ret i32 %6, !insn.addr !223

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_1f76() local_unnamed_addr {
dec_label_pc_1f76:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -12, !insn.addr !224
  %3 = inttoptr i32 %2 to i32*, !insn.addr !224
  %4 = add i32 %1, -16, !insn.addr !225
  %5 = inttoptr i32 %4 to i32*, !insn.addr !225
  %6 = add i32 %1, -48, !insn.addr !226
  %7 = inttoptr i32 %6 to i32*, !insn.addr !227
  %8 = call i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i32* %7, i32* nonnull @0), !insn.addr !227
  ret i32 %8, !insn.addr !227

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32 (i32*, i32*)* @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev", { 1, 0 }
}

define i32 @function_1f8a() local_unnamed_addr {
dec_label_pc_1f8a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -32, !insn.addr !228
  %3 = inttoptr i32 %2 to i32*, !insn.addr !229
  %4 = call i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i32* %3, i32* nonnull @0), !insn.addr !229
  ret i32 %4, !insn.addr !229

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev, { 1, 0 }
}

define i32 @function_1f98() local_unnamed_addr {
dec_label_pc_1f98:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -24, !insn.addr !230
  %3 = inttoptr i32 %2 to i32*, !insn.addr !231
  %4 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* %3, i32* nonnull @0), !insn.addr !231
  ret i32 %4, !insn.addr !231
}

define i32 @function_1fa6() local_unnamed_addr {
dec_label_pc_1fa6:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, -8, !insn.addr !232
  %3 = inttoptr i32 %2 to i32*, !insn.addr !233
  %4 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* %3, i32* nonnull @0), !insn.addr !233
  %5 = add i32 %1, -12, !insn.addr !234
  %6 = inttoptr i32 %5 to i32*, !insn.addr !234
  %7 = load i32, i32* %6, align 4, !insn.addr !234
  %8 = inttoptr i32 %7 to %_Unwind_Exception*, !insn.addr !235
  call void @_Unwind_Resume(%_Unwind_Exception* %8), !insn.addr !235
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !236

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder i32 (i32*, i32*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 2, 3, 1, 0 }
}

define i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_"(i32* %this, i32* %result, i32* %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_1fd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = ptrtoint i32* %arg4 to i32
  %5 = ptrtoint i32* %arg3 to i32
  %6 = ptrtoint i32* %result to i32
  %7 = call i32 @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i32 %6, i32 %5, i32 %4, i32 %1, i32 %3, i32 %2), !insn.addr !237
  ret i32 %7, !insn.addr !238

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv"(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2020:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_6fd4 to i32), !insn.addr !239
  %3 = inttoptr i32 %2 to i32*, !insn.addr !240
  %4 = call i32 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i32* %result, i32* %3), !insn.addr !240
  ret i32 %4, !insn.addr !241
}

define i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev"(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2060:
  %0 = call i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i32* %result, i32* nonnull @0), !insn.addr !242
  %1 = inttoptr i32 %0 to i32*, !insn.addr !243
  %2 = load i32, i32* %1, align 4, !insn.addr !243
  %3 = icmp eq i32 %2, 0, !insn.addr !243
  br i1 %3, label %dec_label_pc_20e1, label %dec_label_pc_20a2, !insn.addr !244

dec_label_pc_20a2:                                ; preds = %dec_label_pc_2060
  %4 = call i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i32* %result, i32* nonnull @0), !insn.addr !245
  %5 = inttoptr i32 %0 to i32***, !insn.addr !246
  %6 = call i32* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %5), !insn.addr !246
  %7 = load i32, i32* %6, align 4, !insn.addr !247
  %8 = inttoptr i32 %4 to i32*, !insn.addr !248
  %9 = inttoptr i32 %7 to i32*, !insn.addr !248
  %10 = call i32 @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i32* %8, i32* %9, i32* nonnull @0), !insn.addr !248
  br label %dec_label_pc_20e1, !insn.addr !249

dec_label_pc_20e1:                                ; preds = %dec_label_pc_20a2, %dec_label_pc_2060
  store i32 0, i32* %1, align 4, !insn.addr !250
  ret i32 %0, !insn.addr !251

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_Z13test_cpp_rttiv(i32* %result) local_unnamed_addr {
dec_label_pc_2100:
  %0 = alloca i32
  %stack_var_-24.3.reg2mem = alloca i32, !insn.addr !252
  %stack_var_-24.2.reg2mem = alloca i32, !insn.addr !252
  %1 = load i32, i32* %0
  %2 = call i32* @_Znwj(i32 4), !insn.addr !253
  %3 = ptrtoint i32* %2 to i32, !insn.addr !253
  %4 = call i32* @memset(i32* %2, i32 0, i32 4), !insn.addr !254
  %5 = call i32 @_ZN12RTTIDerivedAC2Ev(i32* %2, i32* nonnull @0), !insn.addr !255
  %6 = call i32* @_Znwj(i32 4), !insn.addr !256
  %7 = call i32* @memset(i32* %6, i32 0, i32 4), !insn.addr !257
  %8 = call i32 @_ZN12RTTIDerivedBC2Ev(i32* %6, i32* nonnull @0), !insn.addr !258
  %9 = icmp eq i32* %2, null, !insn.addr !259
  %10 = icmp eq i1 %9, false, !insn.addr !260
  br i1 %10, label %dec_label_pc_21b8, label %dec_label_pc_21b0, !insn.addr !260

dec_label_pc_21b0:                                ; preds = %dec_label_pc_2100
  %11 = call i32 @__cxa_bad_typeid(i32 %3), !insn.addr !261
  br label %dec_label_pc_21b8, !insn.addr !261

dec_label_pc_21b8:                                ; preds = %dec_label_pc_21b0, %dec_label_pc_2100
  %12 = ptrtoint i32* %6 to i32, !insn.addr !256
  %13 = load i32, i32* %2, align 4, !insn.addr !262
  %14 = add i32 %13, -4, !insn.addr !263
  %15 = inttoptr i32 %14 to i32*, !insn.addr !263
  %16 = load i32, i32* %15, align 4, !insn.addr !263
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6ef3 to i32), i32 -996), !insn.addr !264
  %18 = inttoptr i32 %16 to i32*
  %19 = inttoptr i32 %17 to i32*, !insn.addr !265
  %20 = call i32 @_ZNKSt9type_infoeqERKS_(i32* %18, i32* %19, i32* nonnull @0), !insn.addr !265
  %21 = icmp eq i32* %6, null, !insn.addr !266
  %22 = icmp eq i1 %21, false, !insn.addr !267
  br i1 %22, label %dec_label_pc_2282, label %dec_label_pc_21fa, !insn.addr !267

dec_label_pc_21fa:                                ; preds = %dec_label_pc_21b8
  %23 = call i32 @__cxa_bad_typeid(i32 %12), !insn.addr !268
  br label %dec_label_pc_2282, !insn.addr !268

dec_label_pc_2282:                                ; preds = %dec_label_pc_21fa, %dec_label_pc_21b8
  %24 = urem i32 %20, 2
  %25 = icmp eq i32 %24, 0, !insn.addr !269
  %26 = icmp eq i1 %25, false, !insn.addr !270
  %spec.select = select i1 %26, i32 10, i32 0
  %27 = load i32, i32* %6, align 4, !insn.addr !271
  %28 = add i32 %27, -4, !insn.addr !272
  %29 = inttoptr i32 %28 to i32*, !insn.addr !272
  %30 = load i32, i32* %29, align 4, !insn.addr !272
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6ef3 to i32), i32 -984), !insn.addr !273
  %32 = inttoptr i32 %30 to i32*
  %33 = inttoptr i32 %31 to i32*, !insn.addr !274
  %34 = call i32 @_ZNKSt9type_infoeqERKS_(i32* %32, i32* %33, i32* nonnull @0), !insn.addr !274
  %35 = urem i32 %34, 2
  %36 = icmp eq i32 %35, 0, !insn.addr !275
  %37 = icmp eq i1 %36, false, !insn.addr !276
  %38 = or i32 %spec.select, 20
  %spec.select4 = select i1 %37, i32 %38, i32 %spec.select
  %39 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6ef3 to i32), i32 -1004)
  %40 = call i32 @__dynamic_cast(i32 %3, i32 %39, i32 %17, i32 0), !insn.addr !277
  %41 = icmp eq i32 %40, 0, !insn.addr !278
  store i32 %spec.select4, i32* %stack_var_-24.2.reg2mem, !insn.addr !279
  br i1 %41, label %dec_label_pc_22f3, label %dec_label_pc_2292, !insn.addr !279

dec_label_pc_2292:                                ; preds = %dec_label_pc_2282
  %42 = inttoptr i32 %40 to i32*
  %43 = call i32 @_ZNK12RTTIDerivedA13derivedA_dataEv(i32* %42), !insn.addr !280
  %44 = add i32 %43, %spec.select4, !insn.addr !281
  store i32 %44, i32* %stack_var_-24.2.reg2mem, !insn.addr !282
  br label %dec_label_pc_22f3, !insn.addr !282

dec_label_pc_22f3:                                ; preds = %dec_label_pc_2292, %dec_label_pc_2282
  %stack_var_-24.2.reload = load i32, i32* %stack_var_-24.2.reg2mem
  %45 = call i32 @__dynamic_cast(i32 %12, i32 %39, i32 %31, i32 0), !insn.addr !283
  %46 = icmp eq i32 %45, 0, !insn.addr !284
  store i32 %stack_var_-24.2.reload, i32* %stack_var_-24.3.reg2mem, !insn.addr !285
  br i1 %46, label %dec_label_pc_2317, label %dec_label_pc_2303, !insn.addr !285

dec_label_pc_2303:                                ; preds = %dec_label_pc_22f3
  %47 = inttoptr i32 %45 to i32*
  %48 = call i32 @_ZNK12RTTIDerivedB13derivedB_dataEv(i32* %47), !insn.addr !286
  %49 = add i32 %48, %stack_var_-24.2.reload, !insn.addr !287
  store i32 %49, i32* %stack_var_-24.3.reg2mem, !insn.addr !288
  br label %dec_label_pc_2317, !insn.addr !288

dec_label_pc_2317:                                ; preds = %dec_label_pc_2303, %dec_label_pc_22f3
  %stack_var_-24.3.reload = load i32, i32* %stack_var_-24.3.reg2mem
  br i1 %10, label %dec_label_pc_232e, label %dec_label_pc_2326, !insn.addr !289

dec_label_pc_2326:                                ; preds = %dec_label_pc_2317
  %50 = call i32 @__cxa_bad_typeid(i32 %3), !insn.addr !290
  br label %dec_label_pc_232e, !insn.addr !290

dec_label_pc_232e:                                ; preds = %dec_label_pc_2326, %dec_label_pc_2317
  %51 = load i32, i32* %2, align 4, !insn.addr !291
  %52 = add i32 %51, -4, !insn.addr !292
  %53 = inttoptr i32 %52 to i32*, !insn.addr !292
  %54 = load i32, i32* %53, align 4, !insn.addr !292
  %55 = inttoptr i32 %54 to i32*
  %56 = call i32 @_ZNKSt9type_info4nameEv(i32* %55), !insn.addr !293
  %57 = inttoptr i32 %56 to i8*, !insn.addr !294
  %58 = call i32 @strlen(i8* %57), !insn.addr !295
  %59 = add i32 %58, %stack_var_-24.3.reload, !insn.addr !296
  ret i32 %59, !insn.addr !297

; uselistorder directives
  uselistorder i32 %45, { 1, 0 }
  uselistorder i32 %stack_var_-24.2.reload, { 1, 0 }
  uselistorder i32 %40, { 1, 0 }
  uselistorder i32 %spec.select4, { 1, 0 }
  uselistorder i32* %6, { 0, 1, 4, 2, 3 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32 (i32, i32, i32, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i32*, i32*, i32*)* @_ZNKSt9type_infoeqERKS_, { 1, 0 }
  uselistorder i32 (i32)* @__cxa_bad_typeid, { 0, 2, 1, 3 }
  uselistorder i32* (i32)* @_Znwj, { 0, 2, 1, 3, 4 }
}

define i32 @_Z20test_cpp_oo_featuresv(i32* %result) local_unnamed_addr {
dec_label_pc_23a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16371), !insn.addr !298
  %3 = inttoptr i32 %2 to i8*, !insn.addr !299
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !300
  %5 = call i32 @_Z20test_cpp_member_funcv(i32* nonnull @0), !insn.addr !301
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16334), !insn.addr !302
  %7 = inttoptr i32 %6 to i8*, !insn.addr !303
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !304
  %9 = call i32 @_Z20test_cpp_constructorv(i32* nonnull @0), !insn.addr !305
  %10 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16304), !insn.addr !306
  %11 = inttoptr i32 %10 to i8*, !insn.addr !307
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !308
  %13 = call i32 @_Z21test_cpp_virtual_funcv(i32* nonnull @0), !insn.addr !309
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16276), !insn.addr !310
  %15 = inttoptr i32 %14 to i8*, !insn.addr !311
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !312
  %17 = call i32 @_Z29test_cpp_multiple_inheritancev(i32* nonnull @0), !insn.addr !313
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16248), !insn.addr !314
  %19 = inttoptr i32 %18 to i8*, !insn.addr !315
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !316
  %21 = call i32 @_Z28test_cpp_diamond_inheritancev(i32* nonnull @0), !insn.addr !317
  %22 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16220), !insn.addr !318
  %23 = inttoptr i32 %22 to i8*, !insn.addr !319
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !320
  %25 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !321
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16191), !insn.addr !322
  %27 = inttoptr i32 %26 to i8*, !insn.addr !323
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !324
  %29 = call i32 @_Z22test_cpp_template_funcv(i32* nonnull @0), !insn.addr !325
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16163), !insn.addr !326
  %31 = inttoptr i32 %30 to i8*, !insn.addr !327
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !328
  %33 = call i32 @_Z23test_cpp_template_classv(i32* nonnull @0), !insn.addr !329
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16135), !insn.addr !330
  %35 = inttoptr i32 %34 to i8*, !insn.addr !331
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !332
  %37 = call i32 @_Z15test_cpp_lambdav(i32* nonnull @0), !insn.addr !333
  %38 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16107), !insn.addr !334
  %39 = inttoptr i32 %38 to i8*, !insn.addr !335
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !336
  %41 = call i32 @_Z18test_cpp_exceptionv(i32* nonnull @0, i32* nonnull @0), !insn.addr !337
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16079), !insn.addr !338
  %43 = inttoptr i32 %42 to i8*, !insn.addr !339
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !340
  %45 = call i32 @_Z18test_cpp_smart_ptrv(i32* nonnull @0), !insn.addr !341
  %46 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16050), !insn.addr !342
  %47 = inttoptr i32 %46 to i8*, !insn.addr !343
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !344
  %49 = call i32 @_Z13test_cpp_rttiv(i32* nonnull @0), !insn.addr !345
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6c54 to i32), i32 -16021), !insn.addr !346
  %51 = inttoptr i32 %50 to i8*, !insn.addr !347
  %52 = call i32 (i8*, ...) @printf(i8* %51), !insn.addr !348
  ret i32 %52, !insn.addr !349

; uselistorder directives
  uselistorder i32 %1, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 2, 4, 3, 1, 0, 13 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2530:
  %0 = call i32 @_Z20test_cpp_oo_featuresv(i32* null), !insn.addr !350
  ret i32 0, !insn.addr !351
}

define i32 @"_ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_"(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_2560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32**, !insn.addr !352
  %3 = inttoptr i32 %arg2 to i32*, !insn.addr !353
  %4 = inttoptr i32 %arg3 to i32*, !insn.addr !353
  %5 = inttoptr i32 %arg4 to i32*, !insn.addr !353
  %6 = call i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i32* %3, i32* %4, i32* %5, i32** %2), !insn.addr !353
  ret i32 %6, !insn.addr !354
}

define i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_"(i32* %this, i32* %result, i32* %arg3, i32** %arg4) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = ptrtoint i32* %arg3 to i32
  %stack_var_8 = alloca i32, align 4
  store i32 %0, i32* %stack_var_8, align 4
  %1 = bitcast i32** %arg4 to i32*, !insn.addr !355
  %2 = call i32** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i32* %1), !insn.addr !355
  %3 = bitcast i32** %2 to i32***, !insn.addr !356
  %4 = call i32 @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i32* %result, i32* nonnull %stack_var_8, i32*** %3, i32** bitcast (i32* @0 to i32**)), !insn.addr !356
  ret i32 %4, !insn.addr !357
}

define i32** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i32* %arg1) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = bitcast i32* %arg1 to i32**, !insn.addr !358
  ret i32** %0, !insn.addr !358
}

define i32 @"_ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_"(i32* %this, i32* %result, i32*** %arg3, i32** %arg4) local_unnamed_addr {
dec_label_pc_2600:
  %0 = bitcast i32*** %arg3 to i32*, !insn.addr !359
  %1 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i32* %0), !insn.addr !359
  %2 = bitcast i32** %arg4 to i32*, !insn.addr !360
  %3 = call i32** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i32* %2), !insn.addr !360
  %4 = bitcast i32*** %1 to i32*, !insn.addr !361
  %5 = bitcast i32** %3 to i32***, !insn.addr !361
  %6 = call i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i32* %result, i32* %4, i32*** %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !361
  ret i32 %6, !insn.addr !362
}

define i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_"(i32* %this, i32* %result, i32*** %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2680:
  %0 = inttoptr i32 %arg4 to i32*, !insn.addr !363
  %1 = call i32** @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE"(i32* %0), !insn.addr !363
  %2 = bitcast i32** %1 to i32*, !insn.addr !364
  %3 = call i32 @"_ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i32* %result, i32* %2, i32* nonnull @0), !insn.addr !364
  %4 = bitcast i32*** %arg3 to i32*, !insn.addr !365
  %5 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i32* %4), !insn.addr !365
  %6 = bitcast i32*** %5 to i32*, !insn.addr !366
  %7 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_(i32* %result, i32* %6, i32*** bitcast (i32* @0 to i32***)), !insn.addr !366
  ret i32 %7, !insn.addr !367

; uselistorder directives
  uselistorder i32** (i32*)* @"_ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE", { 2, 1, 0 }
}

define i32 @"_ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_"(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_2700:
  %0 = call i32 @"_ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i32* %result, i32* %arg3), !insn.addr !368
  ret i32 %0, !insn.addr !369
}

define i32 @"_ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2740:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !370
}

define i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2750:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !371
  %3 = call i32* @"_ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i32* %result, i32* %2), !insn.addr !371
  %4 = ptrtoint i32* %3 to i32, !insn.addr !371
  ret i32 %4, !insn.addr !372
}

define i32 @"_ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv"(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2780:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, ptrtoint (i32* @global_var_6874 to i32), !insn.addr !373
  %6 = call i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !374
  ret i32 %6, !insn.addr !375

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @"_ZZ18test_cpp_smart_ptrvENK3$_2clEPi"(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_27d0:
  %eax.0.reg2mem = alloca i32, !insn.addr !376
  %0 = ptrtoint i32* %arg3 to i32
  store i32 -1, i32* %arg3, align 4, !insn.addr !377
  %1 = icmp eq i32* %arg3, null, !insn.addr !378
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !379
  br i1 %1, label %dec_label_pc_2812, label %dec_label_pc_2804, !insn.addr !379

dec_label_pc_2804:                                ; preds = %dec_label_pc_27d0
  call void @_ZdlPv(i32* nonnull %arg3), !insn.addr !380
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !380
  br label %dec_label_pc_2812, !insn.addr !380

dec_label_pc_2812:                                ; preds = %dec_label_pc_2804, %dec_label_pc_27d0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !381
}

define i32* @"_ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2820:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !382
  %3 = call i32** @"_ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i32* %arg2, i32* %2), !insn.addr !382
  %4 = bitcast i32** %3 to i32*, !insn.addr !383
  ret i32* %4, !insn.addr !383
}

define i32** @"_ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2850:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !384
  %3 = call i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i32* %arg2, i32* %2), !insn.addr !384
  %4 = inttoptr i32 %3 to i32**, !insn.addr !385
  ret i32** %4, !insn.addr !385
}

define i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2880:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_(i32* %arg2), !insn.addr !386
  ret i32 %0, !insn.addr !387
}

define i32 @"_ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv"(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_28b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !388
  %3 = inttoptr i32 %1 to i32*, !insn.addr !388
  %4 = call i32* @"_ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i32* %2, i32* %3), !insn.addr !388
  %5 = ptrtoint i32* %4 to i32, !insn.addr !388
  ret i32 %5, !insn.addr !389
}

define i32* @"_ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_28e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !390
  %3 = call i32* @"_ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i32* %arg2, i32* %2), !insn.addr !390
  ret i32* %3, !insn.addr !391
}

define i32* @"_ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2910:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !392
  %3 = call i32 @"_ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i32* %arg2, i32* %2), !insn.addr !392
  %4 = inttoptr i32 %3 to i32*, !insn.addr !393
  ret i32* %4, !insn.addr !393
}

define i32 @"_ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2940:
  %0 = call i32 @"_ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i32* %arg2), !insn.addr !394
  ret i32 %0, !insn.addr !395
}

define i32 @"_ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_"(i32* %arg1) local_unnamed_addr {
dec_label_pc_2970:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !396
}

define i32 @"_ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv"(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2980:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, ptrtoint (i32* @global_var_6674 to i32), !insn.addr !397
  %6 = call i32 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !398
  ret i32 %6, !insn.addr !399

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @"_ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv"(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_29d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !400
  %3 = inttoptr i32 %1 to i32*, !insn.addr !400
  %4 = call i32* @"_ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i32* %2, i32* %3), !insn.addr !400
  %5 = load i32, i32* %4, align 4, !insn.addr !401
  ret i32 %5, !insn.addr !402
}

define i32* @"_ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2a00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !403
  %3 = call i32** @"_ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i32* %arg2, i32* %2), !insn.addr !403
  %4 = bitcast i32** %3 to i32*, !insn.addr !404
  ret i32* %4, !insn.addr !404
}

define i32** @"_ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2a30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !405
  %3 = call i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i32* %arg2, i32* %2), !insn.addr !405
  %4 = inttoptr i32 %3 to i32**, !insn.addr !406
  ret i32** %4, !insn.addr !406
}

define i32 @"_ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_"(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2a60:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_(i32* %arg2), !insn.addr !407
  ret i32 %0, !insn.addr !408
}

define i32 @_ZN11SimpleClassC2EiPKc(i32* %this, i32* %result, i32 %arg3, i8* %arg4) local_unnamed_addr {
dec_label_pc_2a90:
  %0 = ptrtoint i32* %result to i32
  store i32 %arg3, i32* %result, align 4, !insn.addr !409
  %1 = add i32 %0, 4, !insn.addr !410
  %2 = inttoptr i32 %1 to i8*, !insn.addr !411
  %3 = call i8* @strncpy(i8* %2, i8* %arg4, i32 31), !insn.addr !412
  %4 = add i32 %0, 35, !insn.addr !413
  %5 = inttoptr i32 %4 to i8*, !insn.addr !413
  store i8 0, i8* %5, align 1, !insn.addr !413
  ret i32 %0, !insn.addr !414

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
}

define i32 @_ZN11SimpleClass8setValueEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2ae0:
  %0 = ptrtoint i32* %result to i32
  store i32 %arg2, i32* %result, align 4, !insn.addr !415
  ret i32 %0, !insn.addr !416
}

define i32 @_ZNK11SimpleClass8getValueEv(i32* %result) local_unnamed_addr {
dec_label_pc_2b00:
  %0 = load i32, i32* %result, align 4, !insn.addr !417
  ret i32 %0, !insn.addr !418
}

define i32 @_ZNK11SimpleClass7computeEi(i32* %this, i32* %result, i32 %arg3) local_unnamed_addr {
dec_label_pc_2b10:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !419
  %2 = mul i32 %1, %arg3, !insn.addr !420
  %3 = add i32 %0, 4, !insn.addr !421
  %4 = inttoptr i32 %3 to i8*, !insn.addr !422
  %5 = call i32 @strlen(i8* %4), !insn.addr !423
  %6 = add i32 %2, %5, !insn.addr !424
  ret i32 %6, !insn.addr !425
}

define i32 @_ZN11SimpleClass10getClassIDEv() local_unnamed_addr {
dec_label_pc_2b50:
  ret i32 4660, !insn.addr !426
}

define i32 @_ZN14LifecycleClassC2Ej(i32* %this, i32* %result, i32 %arg3) local_unnamed_addr {
dec_label_pc_2b60:
  %0 = alloca i32
  %.reg2mem = alloca i32, !insn.addr !427
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %1, 4, !insn.addr !428
  %4 = inttoptr i32 %3 to i32*, !insn.addr !428
  store i32 %arg3, i32* %4, align 4, !insn.addr !428
  %5 = mul i32 %arg3, 4, !insn.addr !429
  %6 = icmp ugt i32 %arg3, 1073741823, !insn.addr !429
  %7 = select i1 %6, i32 -1, i32 %5, !insn.addr !430
  %8 = call i32* @_Znaj(i32 %7), !insn.addr !431
  %9 = ptrtoint i32* %8 to i32, !insn.addr !431
  store i32 %9, i32* %result, align 4, !insn.addr !432
  %10 = icmp ne i32 %arg3, 0, !insn.addr !433
  %11 = icmp eq i1 %10, false, !insn.addr !434
  br i1 %11, label %dec_label_pc_2bdc, label %dec_label_pc_2bbf.preheader, !insn.addr !434

dec_label_pc_2bbf.preheader:                      ; preds = %dec_label_pc_2b60
  store i32 0, i32* %8, align 4, !insn.addr !435
  %12 = icmp ugt i32 %arg3, 1, !insn.addr !433
  %13 = icmp eq i1 %12, false, !insn.addr !434
  store i32 1, i32* %.reg2mem, !insn.addr !434
  br i1 %13, label %dec_label_pc_2bdc, label %dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge, !insn.addr !434

dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge:    ; preds = %dec_label_pc_2bbf.preheader, %dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge
  %.reload = load i32, i32* %.reg2mem
  %.pre = load i32, i32* %result, align 4
  %14 = mul i32 %.reload, 10, !insn.addr !436
  %15 = mul i32 %.reload, 4, !insn.addr !435
  %16 = add i32 %15, %.pre, !insn.addr !435
  %17 = inttoptr i32 %16 to i32*, !insn.addr !435
  store i32 %14, i32* %17, align 4, !insn.addr !435
  %18 = add i32 %.reload, 1, !insn.addr !437
  %19 = icmp ult i32 %18, %arg3, !insn.addr !433
  %20 = icmp eq i1 %19, false, !insn.addr !434
  store i32 %18, i32* %.reg2mem, !insn.addr !434
  br i1 %20, label %dec_label_pc_2bdc, label %dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge, !insn.addr !434

dec_label_pc_2bdc:                                ; preds = %dec_label_pc_2bbf.preheader, %dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge, %dec_label_pc_2b60
  %21 = add i32 %2, ptrtoint (i32* @global_var_6494 to i32), !insn.addr !438
  %22 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6494 to i32), i32 132), !insn.addr !439
  %23 = inttoptr i32 %22 to i32*, !insn.addr !439
  %24 = load i32, i32* %23, align 4, !insn.addr !439
  %25 = add i32 %24, 1, !insn.addr !440
  store i32 %25, i32* %23, align 4, !insn.addr !441
  ret i32 %21, !insn.addr !442

; uselistorder directives
  uselistorder i32 %.reload, { 0, 2, 1 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* (i32)* @_Znaj, { 1, 0, 2 }
  uselistorder i32 %arg3, { 3, 1, 2, 4, 0, 5 }
  uselistorder label %dec_label_pc_2bdc, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2bbf.dec_label_pc_2bbf_crit_edge, { 1, 0 }
}

define i32 @_ZNK14LifecycleClass7getDataEj(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2c00:
  %storemerge.reg2mem = alloca i32, !insn.addr !443
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !444
  %2 = inttoptr i32 %1 to i32*, !insn.addr !444
  %3 = load i32, i32* %2, align 4, !insn.addr !444
  %4 = icmp ugt i32 %3, %arg2, !insn.addr !444
  %5 = icmp eq i1 %4, false, !insn.addr !445
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !445
  br i1 %5, label %dec_label_pc_2c3e, label %dec_label_pc_2c1e, !insn.addr !445

dec_label_pc_2c1e:                                ; preds = %dec_label_pc_2c00
  %6 = load i32, i32* %result, align 4, !insn.addr !446
  %7 = mul i32 %arg2, 4, !insn.addr !447
  %8 = add i32 %6, %7, !insn.addr !447
  %9 = inttoptr i32 %8 to i32*, !insn.addr !447
  %10 = load i32, i32* %9, align 4, !insn.addr !447
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !448
  br label %dec_label_pc_2c3e, !insn.addr !448

dec_label_pc_2c3e:                                ; preds = %dec_label_pc_2c00, %dec_label_pc_2c1e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !449

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2c3e, { 1, 0 }
}

define i32 @_ZN14LifecycleClass16getInstanceCountEv(i32* %result) local_unnamed_addr {
dec_label_pc_2c50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_63a8 to i32), i32 132), !insn.addr !450
  %3 = inttoptr i32 %2 to i32*, !insn.addr !450
  %4 = load i32, i32* %3, align 4, !insn.addr !450
  ret i32 %4, !insn.addr !451
}

define i32 @_ZN14LifecycleClassD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2c70:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_6384 to i32), !insn.addr !452
  %3 = load i32, i32* %result, align 4, !insn.addr !453
  %4 = icmp eq i32 %3, 0, !insn.addr !454
  br i1 %4, label %dec_label_pc_2ca8, label %dec_label_pc_2c9a, !insn.addr !455

dec_label_pc_2c9a:                                ; preds = %dec_label_pc_2c70
  %5 = inttoptr i32 %3 to i32*, !insn.addr !456
  %6 = inttoptr i32 %2 to i32*, !insn.addr !456
  call void @_ZdaPv(i32* %5, i32* %6), !insn.addr !456
  br label %dec_label_pc_2ca8, !insn.addr !456

dec_label_pc_2ca8:                                ; preds = %dec_label_pc_2c9a, %dec_label_pc_2c70
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6384 to i32), i32 132), !insn.addr !457
  %8 = inttoptr i32 %7 to i32*, !insn.addr !457
  %9 = load i32, i32* %8, align 4, !insn.addr !457
  %10 = add i32 %9, -1, !insn.addr !458
  store i32 %10, i32* %8, align 4, !insn.addr !459
  ret i32 %2, !insn.addr !460

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 132, { 0, 2, 1 }
}

define i32 @_ZN4BaseC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2cc0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_6338 to i32), i32 -964), !insn.addr !461
  store i32 %3, i32* %result, align 4, !insn.addr !462
  ret i32 %2, !insn.addr !463
}

define i32 @_ZN7DerivedC2Ei(i32* %this, i32* %result, i32 %arg3) local_unnamed_addr {
dec_label_pc_2cf0:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_6304 to i32), !insn.addr !464
  %4 = inttoptr i32 %3 to i32*, !insn.addr !465
  %5 = call i32 @_ZN4BaseC2Ev(i32* %result, i32* %4), !insn.addr !465
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6304 to i32), i32 -932), !insn.addr !466
  store i32 %6, i32* %result, align 4, !insn.addr !467
  %7 = add i32 %1, 4, !insn.addr !468
  %8 = inttoptr i32 %7 to i32*, !insn.addr !468
  store i32 %arg3, i32* %8, align 4, !insn.addr !468
  ret i32 %1, !insn.addr !469

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 (i32*, i32*)* @_ZN4BaseC2Ev, { 1, 0 }
}

define i32 @_ZN4Base12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2d40:
  %0 = add i32 %arg2, 1, !insn.addr !470
  ret i32 %0, !insn.addr !471
}

define i32 @_ZN7Derived12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2d60:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !472
  %2 = inttoptr i32 %1 to i32*, !insn.addr !472
  %3 = load i32, i32* %2, align 4, !insn.addr !472
  %4 = mul i32 %3, %arg2, !insn.addr !472
  ret i32 %4, !insn.addr !473
}

define i32 @_ZN7DerivedD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2d80:
  %0 = call i32 @_ZN4BaseD2Ev(i32* %result), !insn.addr !474
  ret i32 %0, !insn.addr !475
}

define i32 @_ZN4BaseD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_2db0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !476
}

define i32 @_ZN12MultiDerivedC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2dc0:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_6234 to i32), !insn.addr !477
  %4 = inttoptr i32 %3 to i32*, !insn.addr !478
  %5 = call i32 @_ZN5BaseAC2Ev(i32* %result, i32* %4), !insn.addr !478
  %6 = add i32 %1, 8, !insn.addr !479
  %7 = inttoptr i32 %6 to i32*, !insn.addr !480
  %8 = call i32 @_ZN5BaseBC2Ev(i32* %7, i32* nonnull @0), !insn.addr !480
  %9 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6234 to i32), i32 -896), !insn.addr !481
  store i32 %9, i32* %result, align 4, !insn.addr !482
  %10 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6234 to i32), i32 -872), !insn.addr !483
  store i32 %10, i32* %7, align 4, !insn.addr !484
  ret i32 %1, !insn.addr !485

; uselistorder directives
  uselistorder i32 %2, { 2, 1, 0 }
  uselistorder i32 %1, { 1, 0 }
}

define i32 @_ZN12MultiDerivedD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2e20:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 8, !insn.addr !486
  %2 = inttoptr i32 %1 to i32*, !insn.addr !487
  %3 = call i32 @_ZN5BaseBD2Ev(i32* %2), !insn.addr !487
  %4 = call i32 @_ZN5BaseAD2Ev(i32* %result), !insn.addr !488
  ret i32 %4, !insn.addr !489
}

define i32 @_ZN14DiamondDerivedC1Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2e60:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_6194 to i32), !insn.addr !490
  %4 = add i32 %1, 16, !insn.addr !491
  %5 = inttoptr i32 %4 to i32*, !insn.addr !492
  %6 = inttoptr i32 %3 to i32*, !insn.addr !492
  %7 = call i32 @_ZN11VirtualBaseC2Ev(i32* %5, i32* %6), !insn.addr !492
  %8 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6194 to i32), i32 -692), !insn.addr !493
  %9 = inttoptr i32 %8 to i32*, !insn.addr !494
  %10 = call i32 @_ZN7MiddleAC2Ev(i32* %result, i32* %9), !insn.addr !494
  %11 = add i32 %1, 8, !insn.addr !495
  %12 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6194 to i32), i32 -684), !insn.addr !496
  %13 = inttoptr i32 %11 to i32*, !insn.addr !497
  %14 = inttoptr i32 %12 to i32*, !insn.addr !497
  %15 = call i32 @_ZN7MiddleBC2Ev(i32* %13, i32* %14), !insn.addr !497
  %16 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6194 to i32), i32 -760), !insn.addr !498
  store i32 %16, i32* %result, align 4, !insn.addr !499
  %17 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6194 to i32), i32 -708), !insn.addr !500
  store i32 %17, i32* %5, align 4, !insn.addr !501
  %18 = add i32 %2, add (i32 ptrtoint (i32* @global_var_6194 to i32), i32 -736), !insn.addr !502
  store i32 %18, i32* %13, align 4, !insn.addr !503
  ret i32 %1, !insn.addr !504

; uselistorder directives
  uselistorder i32 %2, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
}

define i32 @_ZN14DiamondDerivedD1Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2f00:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_60f4 to i32), !insn.addr !505
  %4 = add i32 %2, add (i32 ptrtoint (i32* @global_var_60f4 to i32), i32 -696), !insn.addr !506
  %5 = call i32 @_ZN14DiamondDerivedD2Ev(i32 %1, i32 %4, i32 %3), !insn.addr !507
  %6 = add i32 %1, 16, !insn.addr !508
  %7 = inttoptr i32 %6 to i32*, !insn.addr !509
  %8 = call i32 @_ZN11VirtualBaseD2Ev(i32* %7), !insn.addr !509
  ret i32 %8, !insn.addr !510

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 16, { 1, 2, 0 }
}

define i32 @_ZN5PointC2Eii(i32* %result, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2f50:
  %0 = ptrtoint i32* %result to i32
  store i32 %arg2, i32* %result, align 4, !insn.addr !511
  %1 = add i32 %0, 4, !insn.addr !512
  %2 = inttoptr i32 %1 to i32*, !insn.addr !512
  store i32 %arg3, i32* %2, align 4, !insn.addr !512
  ret i32 %0, !insn.addr !513

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZNK5PointplERKS_(i32* %arg1, i32* %arg2, i32* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_2f70:
  %0 = ptrtoint i32* %arg3 to i32
  %1 = load i32, i32* %arg3, align 4, !insn.addr !514
  %2 = inttoptr i32 %arg4 to i32*, !insn.addr !515
  %3 = load i32, i32* %2, align 4, !insn.addr !515
  %4 = add i32 %3, %1, !insn.addr !515
  %5 = add i32 %0, 4, !insn.addr !516
  %6 = inttoptr i32 %5 to i32*, !insn.addr !516
  %7 = load i32, i32* %6, align 4, !insn.addr !516
  %8 = add i32 %arg4, 4, !insn.addr !517
  %9 = inttoptr i32 %8 to i32*, !insn.addr !517
  %10 = load i32, i32* %9, align 4, !insn.addr !517
  %11 = add i32 %10, %7, !insn.addr !517
  %12 = call i32 @_ZN5PointC2Eii(i32* %arg2, i32 %4, i32 %11), !insn.addr !518
  ret i32 %11, !insn.addr !519

; uselistorder directives
  uselistorder i32 (i32*, i32, i32)* @_ZN5PointC2Eii, { 2, 1, 0 }
}

define i32 @_ZNK5PointeqERKS_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_2fd0:
  %stack_var_-5.0.reg2mem = alloca i32, !insn.addr !520
  %0 = load i32, i32* %result, align 4, !insn.addr !521
  %1 = load i32, i32* %arg2, align 4, !insn.addr !522
  %2 = icmp eq i32 %0, %1, !insn.addr !522
  %3 = icmp eq i1 %2, false, !insn.addr !523
  store i32 0, i32* %stack_var_-5.0.reg2mem, !insn.addr !523
  br i1 %3, label %dec_label_pc_3006, label %dec_label_pc_2ff4, !insn.addr !523

dec_label_pc_2ff4:                                ; preds = %dec_label_pc_2fd0
  %4 = ptrtoint i32* %result to i32
  %5 = ptrtoint i32* %arg2 to i32
  %6 = add i32 %4, 4, !insn.addr !524
  %7 = inttoptr i32 %6 to i32*, !insn.addr !524
  %8 = load i32, i32* %7, align 4, !insn.addr !524
  %9 = add i32 %5, 4, !insn.addr !525
  %10 = inttoptr i32 %9 to i32*, !insn.addr !525
  %11 = load i32, i32* %10, align 4, !insn.addr !525
  %12 = icmp eq i32 %8, %11, !insn.addr !525
  %phitmp = zext i1 %12 to i32
  store i32 %phitmp, i32* %stack_var_-5.0.reg2mem, !insn.addr !526
  br label %dec_label_pc_3006, !insn.addr !526

dec_label_pc_3006:                                ; preds = %dec_label_pc_2ff4, %dec_label_pc_2fd0
  %stack_var_-5.0.reload = load i32, i32* %stack_var_-5.0.reg2mem
  ret i32 %stack_var_-5.0.reload, !insn.addr !527

; uselistorder directives
  uselistorder i32* %arg2, { 1, 0 }
  uselistorder i32* %result, { 1, 0 }
}

define i32 @_ZN5PointppEv(i32* %result) local_unnamed_addr {
dec_label_pc_3020:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !528
  %2 = add i32 %1, 1, !insn.addr !529
  store i32 %2, i32* %result, align 4, !insn.addr !530
  %3 = add i32 %0, 4, !insn.addr !531
  %4 = inttoptr i32 %3 to i32*, !insn.addr !531
  %5 = load i32, i32* %4, align 4, !insn.addr !531
  %6 = add i32 %5, 1, !insn.addr !532
  store i32 %6, i32* %4, align 4, !insn.addr !533
  ret i32 %0, !insn.addr !534
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3040:
  %0 = icmp sgt i32 %arg1, %arg2, !insn.addr !535
  %storemerge = select i1 %0, i32 %arg1, i32 %arg2
  ret i32 %storemerge, !insn.addr !536
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_3070:
  ret double %arg2, !insn.addr !537
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_30b0:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !538
  %1 = load i32, i32* %arg2, align 4, !insn.addr !539
  store i32 %1, i32* %arg1, align 4, !insn.addr !540
  store i32 %0, i32* %arg2, align 4, !insn.addr !541
  ret void, !insn.addr !542
}

define i32 @_ZN9ContainerIiEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_30e0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !543
  %2 = inttoptr i32 %1 to i32*, !insn.addr !543
  store i32 0, i32* %2, align 4, !insn.addr !543
  ret i32 %0, !insn.addr !544

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIiE4pushEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3100:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !545
  %2 = inttoptr i32 %1 to i32*, !insn.addr !545
  %3 = load i32, i32* %2, align 4, !insn.addr !545
  %4 = icmp sgt i32 %3, 9, !insn.addr !546
  br i1 %4, label %dec_label_pc_312f, label %dec_label_pc_311b, !insn.addr !546

dec_label_pc_311b:                                ; preds = %dec_label_pc_3100
  %5 = add i32 %3, 1, !insn.addr !547
  store i32 %5, i32* %2, align 4, !insn.addr !548
  %6 = mul i32 %3, 4, !insn.addr !549
  %7 = add i32 %6, %0, !insn.addr !549
  %8 = inttoptr i32 %7 to i32*, !insn.addr !549
  store i32 %arg2, i32* %8, align 4, !insn.addr !549
  br label %dec_label_pc_312f, !insn.addr !549

dec_label_pc_312f:                                ; preds = %dec_label_pc_311b, %dec_label_pc_3100
  ret i32 %0, !insn.addr !550

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3140:
  %storemerge.reg2mem = alloca i32, !insn.addr !551
  %0 = icmp slt i32 %arg2, 0, !insn.addr !552
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !553
  br i1 %0, label %dec_label_pc_3183, label %dec_label_pc_315c, !insn.addr !553

dec_label_pc_315c:                                ; preds = %dec_label_pc_3140
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 40, !insn.addr !554
  %3 = inttoptr i32 %2 to i32*, !insn.addr !554
  %4 = load i32, i32* %3, align 4, !insn.addr !554
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !555
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !555
  br i1 %5, label %dec_label_pc_316b, label %dec_label_pc_3183, !insn.addr !555

dec_label_pc_316b:                                ; preds = %dec_label_pc_315c
  %6 = mul i32 %arg2, 4, !insn.addr !556
  %7 = add i32 %6, %1, !insn.addr !556
  %8 = inttoptr i32 %7 to i32*, !insn.addr !556
  %9 = load i32, i32* %8, align 4, !insn.addr !556
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !557
  br label %dec_label_pc_3183, !insn.addr !557

dec_label_pc_3183:                                ; preds = %dec_label_pc_3140, %dec_label_pc_315c, %dec_label_pc_316b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !558

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_3183, { 2, 1, 0 }
}

define i32 @_ZNK9ContainerIiE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_3190:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !559
  %2 = inttoptr i32 %1 to i32*, !insn.addr !559
  %3 = load i32, i32* %2, align 4, !insn.addr !559
  ret i32 %3, !insn.addr !560
}

define i32 @_ZN9ContainerIdEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_31a0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !561
  %2 = inttoptr i32 %1 to i32*, !insn.addr !561
  store i32 0, i32* %2, align 4, !insn.addr !561
  ret i32 %0, !insn.addr !562

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIdE4pushEd(i32* %result, double %arg2) local_unnamed_addr {
dec_label_pc_31c0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !563
  %2 = inttoptr i32 %1 to i32*, !insn.addr !563
  %3 = load i32, i32* %2, align 4, !insn.addr !563
  %4 = icmp sgt i32 %3, 9, !insn.addr !564
  br i1 %4, label %dec_label_pc_31f3, label %dec_label_pc_31df, !insn.addr !564

dec_label_pc_31df:                                ; preds = %dec_label_pc_31c0
  %5 = add i32 %3, 1, !insn.addr !565
  store i32 %5, i32* %2, align 4, !insn.addr !566
  %6 = mul i32 %3, 8, !insn.addr !567
  %7 = add i32 %6, %0, !insn.addr !567
  %8 = inttoptr i32 %7 to double*, !insn.addr !567
  store double %arg2, double* %8, align 4, !insn.addr !567
  br label %dec_label_pc_31f3, !insn.addr !567

dec_label_pc_31f3:                                ; preds = %dec_label_pc_31df, %dec_label_pc_31c0
  ret i32 %0, !insn.addr !568

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIdE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_3200:
  %0 = ptrtoint i32* %result to i32
  %1 = icmp slt i32 %arg2, 0, !insn.addr !569
  br i1 %1, label %dec_label_pc_324a, label %dec_label_pc_321c, !insn.addr !570

dec_label_pc_321c:                                ; preds = %dec_label_pc_3200
  %2 = add i32 %0, 80, !insn.addr !571
  %3 = inttoptr i32 %2 to i32*, !insn.addr !571
  %4 = load i32, i32* %3, align 4, !insn.addr !571
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !572
  %spec.select = select i1 %5, i32 %0, i32 %arg2
  ret i32 %spec.select

dec_label_pc_324a:                                ; preds = %dec_label_pc_3200
  ret i32 %0, !insn.addr !573
}

define i32 @_ZNK9ContainerIdE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_3260:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !574
  %2 = inttoptr i32 %1 to i32*, !insn.addr !574
  %3 = load i32, i32* %2, align 4, !insn.addr !574
  ret i32 %3, !insn.addr !575
}

define i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3270:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %arg3 to i32
  %4 = ptrtoint i32* %result to i32
  %5 = load i32, i32* %0
  %6 = add i32 %5, ptrtoint (i32* @global_var_5d84 to i32), !insn.addr !576
  %7 = call i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i32 %4, i32 %3, i32 %6, i32 %2, i32 %1), !insn.addr !577
  ret i32 %7, !insn.addr !578

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @_ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_32c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_5d34 to i32), !insn.addr !579
  %3 = inttoptr i32 %2 to i32*, !insn.addr !580
  %4 = call i32 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i32* %result, i32* %3), !insn.addr !580
  ret i32 %4, !insn.addr !581
}

define i32* @_ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_(i32** %arg1) local_unnamed_addr {
dec_label_pc_3300:
  %0 = bitcast i32** %arg1 to i32*, !insn.addr !582
  ret i32* %0, !insn.addr !582
}

define i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3310:
  %0 = call i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i32* %result, i32* %arg3, i32* nonnull @0), !insn.addr !583
  ret i32 %0, !insn.addr !584
}

define i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3350:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %arg3 to i32
  %4 = ptrtoint i32* %result to i32
  %5 = load i32, i32* %0
  %6 = add i32 %5, ptrtoint (i32* @global_var_5ca4 to i32), !insn.addr !585
  %7 = call i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i32 %4, i32 %3, i32 %6, i32 %2, i32 %1), !insn.addr !586
  ret i32 %7, !insn.addr !587

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj(i32* %this, i32* %result, i32 %arg3) local_unnamed_addr {
dec_label_pc_33a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_5c54 to i32), !insn.addr !588
  %3 = inttoptr i32 %2 to i32*, !insn.addr !589
  %4 = call i32 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i32* %result, i32* %3), !insn.addr !589
  %5 = mul i32 %arg3, 4, !insn.addr !590
  %6 = add i32 %4, %5, !insn.addr !591
  ret i32 %6, !insn.addr !592
}

define i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_33f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_5c04 to i32), !insn.addr !593
  %3 = inttoptr i32 %2 to i32*, !insn.addr !594
  %4 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i32* %result, i32* %3), !insn.addr !594
  %5 = inttoptr i32 %4 to i32*, !insn.addr !595
  %6 = load i32, i32* %5, align 4, !insn.addr !595
  %7 = icmp eq i32 %6, 0, !insn.addr !595
  br i1 %7, label %dec_label_pc_3455, label %dec_label_pc_3426, !insn.addr !596

dec_label_pc_3426:                                ; preds = %dec_label_pc_33f0
  %8 = call i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i32* %result, i32* nonnull @0), !insn.addr !597
  %9 = load i32, i32* %5, align 4, !insn.addr !598
  %10 = inttoptr i32 %8 to i32*, !insn.addr !599
  %11 = inttoptr i32 %9 to i32*, !insn.addr !599
  %12 = call i32 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i32* %10, i32* %11, i32* nonnull @0), !insn.addr !599
  br label %dec_label_pc_3455, !insn.addr !600

dec_label_pc_3455:                                ; preds = %dec_label_pc_3426, %dec_label_pc_33f0
  store i32 0, i32* %5, align 4, !insn.addr !601
  ret i32 %4, !insn.addr !602

; uselistorder directives
  uselistorder i32* %5, { 1, 0, 2 }
}

define i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3470:
  %0 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32* %result, i32* nonnull @0), !insn.addr !603
  %1 = inttoptr i32 %0 to i32*, !insn.addr !604
  %2 = load i32, i32* %1, align 4, !insn.addr !604
  %3 = icmp eq i32 %2, 0, !insn.addr !604
  br i1 %3, label %dec_label_pc_34e5, label %dec_label_pc_34a6, !insn.addr !605

dec_label_pc_34a6:                                ; preds = %dec_label_pc_3470
  %4 = call i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i32* %result, i32* nonnull @0), !insn.addr !606
  %5 = inttoptr i32 %0 to i32***, !insn.addr !607
  %6 = call i32* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %5), !insn.addr !607
  %7 = load i32, i32* %6, align 4, !insn.addr !608
  %8 = inttoptr i32 %4 to i32*, !insn.addr !609
  %9 = inttoptr i32 %7 to i32*, !insn.addr !609
  %10 = call i32 @_ZNKSt14default_deleteIiEclEPi(i32* %8, i32* %9, i32* nonnull @0), !insn.addr !609
  br label %dec_label_pc_34e5, !insn.addr !610

dec_label_pc_34e5:                                ; preds = %dec_label_pc_34a6, %dec_label_pc_3470
  store i32 0, i32* %1, align 4, !insn.addr !611
  ret i32 %0, !insn.addr !612

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i32* (i32***)* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_, { 1, 0 }
}

define i32 @_ZN12RTTIDerivedAC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3500:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_5af4 to i32), !insn.addr !613
  %4 = inttoptr i32 %3 to i32*, !insn.addr !614
  %5 = call i32 @_ZN8RTTIBaseC2Ev(i32* %result, i32* %4), !insn.addr !614
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5af4 to i32), i32 -328), !insn.addr !615
  store i32 %6, i32* %result, align 4, !insn.addr !616
  ret i32 %1, !insn.addr !617

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @_ZN12RTTIDerivedBC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3540:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, ptrtoint (i32* @global_var_5ab4 to i32), !insn.addr !618
  %4 = inttoptr i32 %3 to i32*, !insn.addr !619
  %5 = call i32 @_ZN8RTTIBaseC2Ev(i32* %result, i32* %4), !insn.addr !619
  %6 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5ab4 to i32), i32 -288), !insn.addr !620
  store i32 %6, i32* %result, align 4, !insn.addr !621
  ret i32 %1, !insn.addr !622

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 (i32*, i32*)* @_ZN8RTTIBaseC2Ev, { 1, 0 }
}

define i32 @_ZNKSt9type_infoeqERKS_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3580:
  %stack_var_-9.0.reg2mem = alloca i32, !insn.addr !623
  %0 = ptrtoint i32* %arg3 to i32
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 4, !insn.addr !624
  %3 = inttoptr i32 %2 to i32*, !insn.addr !624
  %4 = load i32, i32* %3, align 4, !insn.addr !624
  %5 = add i32 %0, 4, !insn.addr !625
  %6 = inttoptr i32 %5 to i32*, !insn.addr !625
  %7 = load i32, i32* %6, align 4, !insn.addr !625
  %8 = icmp eq i32 %4, %7, !insn.addr !625
  store i32 1, i32* %stack_var_-9.0.reg2mem, !insn.addr !626
  br i1 %8, label %dec_label_pc_35f7, label %dec_label_pc_35b6, !insn.addr !626

dec_label_pc_35b6:                                ; preds = %dec_label_pc_3580
  %9 = inttoptr i32 %4 to i8*, !insn.addr !627
  %10 = load i8, i8* %9, align 1, !insn.addr !627
  %11 = icmp eq i8 %10, 42, !insn.addr !628
  store i32 0, i32* %stack_var_-9.0.reg2mem, !insn.addr !629
  br i1 %11, label %dec_label_pc_35f7, label %dec_label_pc_35cd, !insn.addr !629

dec_label_pc_35cd:                                ; preds = %dec_label_pc_35b6
  %12 = inttoptr i32 %7 to i8*, !insn.addr !630
  %13 = call i32 @strcmp(i8* %9, i8* %12), !insn.addr !630
  %14 = icmp eq i32 %13, 0, !insn.addr !631
  %15 = zext i1 %14 to i32, !insn.addr !632
  store i32 %15, i32* %stack_var_-9.0.reg2mem, !insn.addr !632
  br label %dec_label_pc_35f7, !insn.addr !632

dec_label_pc_35f7:                                ; preds = %dec_label_pc_35b6, %dec_label_pc_35cd, %dec_label_pc_3580
  %stack_var_-9.0.reload = load i32, i32* %stack_var_-9.0.reg2mem
  ret i32 %stack_var_-9.0.reload, !insn.addr !633

; uselistorder directives
  uselistorder label %dec_label_pc_35f7, { 1, 0, 2 }
}

define i32 @_ZNK12RTTIDerivedA13derivedA_dataEv(i32* %result) local_unnamed_addr {
dec_label_pc_3610:
  ret i32 100, !insn.addr !634
}

define i32 @_ZNK12RTTIDerivedB13derivedB_dataEv(i32* %result) local_unnamed_addr {
dec_label_pc_3620:
  ret i32 200, !insn.addr !635
}

define i32 @_ZNKSt9type_info4nameEv(i32* %result) local_unnamed_addr {
dec_label_pc_3630:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !636
  %2 = inttoptr i32 %1 to i32*, !insn.addr !636
  %3 = load i32, i32* %2, align 4, !insn.addr !636
  %4 = inttoptr i32 %3 to i8*, !insn.addr !637
  %5 = load i8, i8* %4, align 1, !insn.addr !637
  %6 = icmp eq i8 %5, 42, !insn.addr !638
  %7 = zext i1 %6 to i32
  %storemerge = add i32 %3, %7
  ret i32 %storemerge, !insn.addr !639
}

define i32 @_ZNK4Base7getNameEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3670:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5988 to i32), i32 -15991), !insn.addr !640
  ret i32 %2, !insn.addr !641
}

define i32 @_ZN4BaseD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3690:
  %0 = call i32 @_ZN4BaseD2Ev(i32* %result), !insn.addr !642
  call void @_ZdlPv(i32* %result), !insn.addr !643
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !644

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN4BaseD2Ev, { 2, 1, 3, 0 }
}

define i32 @_ZNK7Derived7getNameEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_36d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5928 to i32), i32 -15986), !insn.addr !645
  ret i32 %2, !insn.addr !646
}

define i32 @_ZN7DerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_36f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_5904 to i32), !insn.addr !647
  %3 = inttoptr i32 %2 to i32*, !insn.addr !648
  %4 = call i32 @_ZN7DerivedD2Ev(i32* %result, i32* %3), !insn.addr !648
  call void @_ZdlPv(i32* %result), !insn.addr !649
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !650

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN7DerivedD2Ev, { 1, 2, 0 }
}

define i32 @_ZN5BaseAC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3730:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_58c8 to i32), i32 -804), !insn.addr !651
  store i32 %3, i32* %result, align 4, !insn.addr !652
  ret i32 %2, !insn.addr !653
}

define i32 @_ZN5BaseBC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3760:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_5898 to i32), i32 -784), !insn.addr !654
  store i32 %3, i32* %result, align 4, !insn.addr !655
  ret i32 %2, !insn.addr !656
}

define i32 @_ZN12MultiDerived5funcAEv(i32* %result) local_unnamed_addr {
dec_label_pc_3790:
  ret i32 30, !insn.addr !657
}

define i32 @_ZN12MultiDerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_37a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_5854 to i32), !insn.addr !658
  %3 = inttoptr i32 %2 to i32*, !insn.addr !659
  %4 = call i32 @_ZN12MultiDerivedD2Ev(i32* %result, i32* %3), !insn.addr !659
  call void @_ZdlPv(i32* %result), !insn.addr !660
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !661
}

define i32 @_ZN12MultiDerived5funcBEv(i32* %result) local_unnamed_addr {
dec_label_pc_37e0:
  ret i32 40, !insn.addr !662
}

define i32 @_ZThn8_N12MultiDerived5funcBEv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_37f0:
  %0 = add i32 %arg2, -8, !insn.addr !663
  %1 = inttoptr i32 %0 to i32*, !insn.addr !664
  %2 = call i32 @_ZN12MultiDerived5funcBEv(i32* %1), !insn.addr !664
  ret i32 %2, !insn.addr !665
}

define i32 @_ZThn8_N12MultiDerivedD1Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3820:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -8, !insn.addr !666
  %3 = inttoptr i32 %2 to i32*, !insn.addr !667
  %4 = inttoptr i32 %1 to i32*, !insn.addr !667
  %5 = call i32 @_ZN12MultiDerivedD2Ev(i32* %3, i32* %4), !insn.addr !667
  ret i32 %5, !insn.addr !668

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN12MultiDerivedD2Ev, { 2, 1, 0 }
}

define i32 @_ZThn8_N12MultiDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3850:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -8, !insn.addr !669
  %3 = inttoptr i32 %2 to i32*, !insn.addr !670
  %4 = inttoptr i32 %1 to i32*, !insn.addr !670
  %5 = call i32 @_ZN12MultiDerivedD0Ev(i32* %3, i32* %4), !insn.addr !670
  ret i32 %5, !insn.addr !671
}

define i32 @_ZN5BaseA5funcAEv(i32* %result) local_unnamed_addr {
dec_label_pc_3880:
  ret i32 10, !insn.addr !672

; uselistorder directives
  uselistorder i32 10, { 0, 2, 1, 3, 4, 5, 8, 6, 7 }
}

define i32 @_ZN5BaseAD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_3890:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !673
}

define i32 @_ZN5BaseAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_38a0:
  %0 = call i32 @_ZN5BaseAD2Ev(i32* %result), !insn.addr !674
  call void @_ZdlPv(i32* %result), !insn.addr !675
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !676

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN5BaseAD2Ev, { 1, 0 }
}

define i32 @_ZN5BaseB5funcBEv(i32* %result) local_unnamed_addr {
dec_label_pc_38e0:
  ret i32 20, !insn.addr !677
}

define i32 @_ZN5BaseBD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_38f0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !678
}

define i32 @_ZN5BaseBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3900:
  %0 = call i32 @_ZN5BaseBD2Ev(i32* %result), !insn.addr !679
  call void @_ZdlPv(i32* %result), !insn.addr !680
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !681

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN5BaseBD2Ev, { 1, 0 }
}

define i32 @_ZN11VirtualBaseC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3940:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_56b8 to i32), i32 -468), !insn.addr !682
  store i32 %3, i32* %result, align 4, !insn.addr !683
  ret i32 %2, !insn.addr !684
}

define i32 @_ZN7MiddleAC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3970:
  %0 = ptrtoint i32* %result to i32
  %1 = ptrtoint i32* %this to i32
  %2 = load i32, i32* %result, align 4, !insn.addr !685
  store i32 %2, i32* %this, align 4, !insn.addr !686
  %3 = add i32 %0, 4, !insn.addr !687
  %4 = inttoptr i32 %3 to i32*, !insn.addr !687
  %5 = load i32, i32* %4, align 4, !insn.addr !687
  %6 = add i32 %2, -12, !insn.addr !688
  %7 = inttoptr i32 %6 to i32*, !insn.addr !688
  %8 = load i32, i32* %7, align 4, !insn.addr !688
  %9 = add i32 %8, %1, !insn.addr !689
  %10 = inttoptr i32 %9 to i32*, !insn.addr !689
  store i32 %5, i32* %10, align 4, !insn.addr !689
  ret i32 %1, !insn.addr !690

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @_ZN7MiddleBC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3990:
  %0 = ptrtoint i32* %result to i32
  %1 = ptrtoint i32* %this to i32
  %2 = load i32, i32* %result, align 4, !insn.addr !691
  store i32 %2, i32* %this, align 4, !insn.addr !692
  %3 = add i32 %0, 4, !insn.addr !693
  %4 = inttoptr i32 %3 to i32*, !insn.addr !693
  %5 = load i32, i32* %4, align 4, !insn.addr !693
  %6 = add i32 %2, -12, !insn.addr !694
  %7 = inttoptr i32 %6 to i32*, !insn.addr !694
  %8 = load i32, i32* %7, align 4, !insn.addr !694
  %9 = add i32 %8, %1, !insn.addr !695
  %10 = inttoptr i32 %9 to i32*, !insn.addr !695
  store i32 %5, i32* %10, align 4, !insn.addr !695
  ret i32 %1, !insn.addr !696

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @_ZN7MiddleA4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_39b0:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !697
  %2 = add i32 %1, -12, !insn.addr !698
  %3 = inttoptr i32 %2 to i32*, !insn.addr !698
  %4 = load i32, i32* %3, align 4, !insn.addr !698
  %5 = add i32 %0, 4, !insn.addr !699
  %6 = add i32 %5, %4, !insn.addr !699
  %7 = inttoptr i32 %6 to i32*, !insn.addr !699
  %8 = load i32, i32* %7, align 4, !insn.addr !699
  %9 = add i32 %8, 150, !insn.addr !700
  ret i32 %9, !insn.addr !701
}

define i32 @_ZN7MiddleAD1Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_39d0:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5624 to i32), i32 -404), !insn.addr !702
  %4 = inttoptr i32 %3 to i32*, !insn.addr !703
  %5 = call i32 @_ZN7MiddleAD2Ev(i32* %result, i32* %4), !insn.addr !703
  %6 = add i32 %1, 8, !insn.addr !704
  %7 = inttoptr i32 %6 to i32*, !insn.addr !705
  %8 = call i32 @_ZN11VirtualBaseD2Ev(i32* %7), !insn.addr !705
  ret i32 %8, !insn.addr !706
}

define i32 @_ZN7MiddleAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3a20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_55d4 to i32), !insn.addr !707
  %3 = inttoptr i32 %2 to i32*, !insn.addr !708
  %4 = call i32 @_ZN7MiddleAD1Ev(i32* %result, i32* %3), !insn.addr !708
  call void @_ZdlPv(i32* %result), !insn.addr !709
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !710
}

define i32 @_ZTv0_n12_N7MiddleA4funcEv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a60:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !711
  %1 = load i32, i32* %0, align 4, !insn.addr !711
  %2 = add i32 %1, -12, !insn.addr !712
  %3 = inttoptr i32 %2 to i32*, !insn.addr !712
  %4 = load i32, i32* %3, align 4, !insn.addr !712
  %5 = add i32 %4, %arg2, !insn.addr !712
  %6 = inttoptr i32 %5 to i32*, !insn.addr !713
  %7 = call i32 @_ZN7MiddleA4funcEv(i32* %6), !insn.addr !713
  ret i32 %7, !insn.addr !714
}

define i32 @_ZTv0_n16_N7MiddleAD1Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3a90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !715
  %3 = load i32, i32* %2, align 4, !insn.addr !715
  %4 = add i32 %3, -16, !insn.addr !716
  %5 = inttoptr i32 %4 to i32*, !insn.addr !716
  %6 = load i32, i32* %5, align 4, !insn.addr !716
  %7 = add i32 %6, %arg2, !insn.addr !716
  %8 = inttoptr i32 %7 to i32*, !insn.addr !717
  %9 = inttoptr i32 %1 to i32*, !insn.addr !717
  %10 = call i32 @_ZN7MiddleAD1Ev(i32* %8, i32* %9), !insn.addr !717
  ret i32 %10, !insn.addr !718

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN7MiddleAD1Ev, { 1, 0 }
}

define i32 @_ZTv0_n16_N7MiddleAD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3ac0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !719
  %3 = load i32, i32* %2, align 4, !insn.addr !719
  %4 = add i32 %3, -16, !insn.addr !720
  %5 = inttoptr i32 %4 to i32*, !insn.addr !720
  %6 = load i32, i32* %5, align 4, !insn.addr !720
  %7 = add i32 %6, %arg2, !insn.addr !720
  %8 = inttoptr i32 %7 to i32*, !insn.addr !721
  %9 = inttoptr i32 %1 to i32*, !insn.addr !721
  %10 = call i32 @_ZN7MiddleAD0Ev(i32* %8, i32* %9), !insn.addr !721
  ret i32 %10, !insn.addr !722
}

define i32 @_ZN7MiddleB4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_3af0:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !723
  %2 = add i32 %1, -12, !insn.addr !724
  %3 = inttoptr i32 %2 to i32*, !insn.addr !724
  %4 = load i32, i32* %3, align 4, !insn.addr !724
  %5 = add i32 %0, 4, !insn.addr !725
  %6 = add i32 %5, %4, !insn.addr !725
  %7 = inttoptr i32 %6 to i32*, !insn.addr !725
  %8 = load i32, i32* %7, align 4, !insn.addr !725
  %9 = add i32 %8, 200, !insn.addr !726
  ret i32 %9, !insn.addr !727

; uselistorder directives
  uselistorder i32 200, { 1, 0, 2 }
}

define i32 @_ZN7MiddleBD1Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3b10:
  %0 = alloca i32
  %1 = ptrtoint i32* %result to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32** @global_var_54e4 to i32), i32 -344), !insn.addr !728
  %4 = inttoptr i32 %3 to i32*, !insn.addr !729
  %5 = call i32 @_ZN7MiddleBD2Ev(i32* %result, i32* %4), !insn.addr !729
  %6 = add i32 %1, 8, !insn.addr !730
  %7 = inttoptr i32 %6 to i32*, !insn.addr !731
  %8 = call i32 @_ZN11VirtualBaseD2Ev(i32* %7), !insn.addr !731
  ret i32 %8, !insn.addr !732
}

define i32 @_ZN7MiddleBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3b60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32** @global_var_5494 to i32), !insn.addr !733
  %3 = inttoptr i32 %2 to i32*, !insn.addr !734
  %4 = call i32 @_ZN7MiddleBD1Ev(i32* %result, i32* %3), !insn.addr !734
  call void @_ZdlPv(i32* %result), !insn.addr !735
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !736
}

define i32 @_ZTv0_n12_N7MiddleB4funcEv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3ba0:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !737
  %1 = load i32, i32* %0, align 4, !insn.addr !737
  %2 = add i32 %1, -12, !insn.addr !738
  %3 = inttoptr i32 %2 to i32*, !insn.addr !738
  %4 = load i32, i32* %3, align 4, !insn.addr !738
  %5 = add i32 %4, %arg2, !insn.addr !738
  %6 = inttoptr i32 %5 to i32*, !insn.addr !739
  %7 = call i32 @_ZN7MiddleB4funcEv(i32* %6), !insn.addr !739
  ret i32 %7, !insn.addr !740
}

define i32 @_ZTv0_n16_N7MiddleBD1Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3bd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !741
  %3 = load i32, i32* %2, align 4, !insn.addr !741
  %4 = add i32 %3, -16, !insn.addr !742
  %5 = inttoptr i32 %4 to i32*, !insn.addr !742
  %6 = load i32, i32* %5, align 4, !insn.addr !742
  %7 = add i32 %6, %arg2, !insn.addr !742
  %8 = inttoptr i32 %7 to i32*, !insn.addr !743
  %9 = inttoptr i32 %1 to i32*, !insn.addr !743
  %10 = call i32 @_ZN7MiddleBD1Ev(i32* %8, i32* %9), !insn.addr !743
  ret i32 %10, !insn.addr !744

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN7MiddleBD1Ev, { 1, 0 }
}

define i32 @_ZTv0_n16_N7MiddleBD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3c00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !745
  %3 = load i32, i32* %2, align 4, !insn.addr !745
  %4 = add i32 %3, -16, !insn.addr !746
  %5 = inttoptr i32 %4 to i32*, !insn.addr !746
  %6 = load i32, i32* %5, align 4, !insn.addr !746
  %7 = add i32 %6, %arg2, !insn.addr !746
  %8 = inttoptr i32 %7 to i32*, !insn.addr !747
  %9 = inttoptr i32 %1 to i32*, !insn.addr !747
  %10 = call i32 @_ZN7MiddleBD0Ev(i32* %8, i32* %9), !insn.addr !747
  ret i32 %10, !insn.addr !748
}

define i32 @_ZN14DiamondDerived4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_3c30:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !749
  %2 = add i32 %1, -12, !insn.addr !750
  %3 = inttoptr i32 %2 to i32*, !insn.addr !750
  %4 = load i32, i32* %3, align 4, !insn.addr !750
  %5 = add i32 %0, 4, !insn.addr !751
  %6 = add i32 %5, %4, !insn.addr !751
  %7 = inttoptr i32 %6 to i32*, !insn.addr !751
  %8 = load i32, i32* %7, align 4, !insn.addr !751
  %9 = add i32 %8, 250, !insn.addr !752
  ret i32 %9, !insn.addr !753
}

define i32 @_ZN14DiamondDerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3c50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, ptrtoint (i32* @global_var_53a4 to i32), !insn.addr !754
  %3 = inttoptr i32 %2 to i32*, !insn.addr !755
  %4 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %result, i32* %3), !insn.addr !755
  call void @_ZdlPv(i32* %result), !insn.addr !756
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !757
}

define i32 @_ZThn8_N14DiamondDerived4funcEv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3c90:
  %0 = add i32 %arg2, -8, !insn.addr !758
  %1 = inttoptr i32 %0 to i32*, !insn.addr !759
  %2 = call i32 @_ZN14DiamondDerived4funcEv(i32* %1), !insn.addr !759
  ret i32 %2, !insn.addr !760
}

define i32 @_ZThn8_N14DiamondDerivedD1Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3cc0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -8, !insn.addr !761
  %3 = inttoptr i32 %2 to i32*, !insn.addr !762
  %4 = inttoptr i32 %1 to i32*, !insn.addr !762
  %5 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %3, i32* %4), !insn.addr !762
  ret i32 %5, !insn.addr !763
}

define i32 @_ZThn8_N14DiamondDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3cf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -8, !insn.addr !764
  %3 = inttoptr i32 %2 to i32*, !insn.addr !765
  %4 = inttoptr i32 %1 to i32*, !insn.addr !765
  %5 = call i32 @_ZN14DiamondDerivedD0Ev(i32* %3, i32* %4), !insn.addr !765
  ret i32 %5, !insn.addr !766

; uselistorder directives
  uselistorder i32 -8, { 2, 3, 4, 5, 6, 7, 0, 1 }
}

define i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3d20:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !767
  %1 = load i32, i32* %0, align 4, !insn.addr !767
  %2 = add i32 %1, -12, !insn.addr !768
  %3 = inttoptr i32 %2 to i32*, !insn.addr !768
  %4 = load i32, i32* %3, align 4, !insn.addr !768
  %5 = add i32 %4, %arg2, !insn.addr !768
  %6 = inttoptr i32 %5 to i32*, !insn.addr !769
  %7 = call i32 @_ZN14DiamondDerived4funcEv(i32* %6), !insn.addr !769
  ret i32 %7, !insn.addr !770

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN14DiamondDerived4funcEv, { 1, 0 }
  uselistorder i32 -12, { 5, 6, 7, 8, 9, 10, 11, 12, 3, 0, 1, 2, 4, 13, 14 }
}

define i32 @_ZTv0_n16_N14DiamondDerivedD1Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3d50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !771
  %3 = load i32, i32* %2, align 4, !insn.addr !771
  %4 = add i32 %3, -16, !insn.addr !772
  %5 = inttoptr i32 %4 to i32*, !insn.addr !772
  %6 = load i32, i32* %5, align 4, !insn.addr !772
  %7 = add i32 %6, %arg2, !insn.addr !772
  %8 = inttoptr i32 %7 to i32*, !insn.addr !773
  %9 = inttoptr i32 %1 to i32*, !insn.addr !773
  %10 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %8, i32* %9), !insn.addr !773
  ret i32 %10, !insn.addr !774

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN14DiamondDerivedD1Ev, { 3, 2, 1, 0 }
}

define i32 @_ZTv0_n16_N14DiamondDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_3d80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !775
  %3 = load i32, i32* %2, align 4, !insn.addr !775
  %4 = add i32 %3, -16, !insn.addr !776
  %5 = inttoptr i32 %4 to i32*, !insn.addr !776
  %6 = load i32, i32* %5, align 4, !insn.addr !776
  %7 = add i32 %6, %arg2, !insn.addr !776
  %8 = inttoptr i32 %7 to i32*, !insn.addr !777
  %9 = inttoptr i32 %1 to i32*, !insn.addr !777
  %10 = call i32 @_ZN14DiamondDerivedD0Ev(i32* %8, i32* %9), !insn.addr !777
  ret i32 %10, !insn.addr !778

; uselistorder directives
  uselistorder i32 (i32*, i32*)* @_ZN14DiamondDerivedD0Ev, { 1, 0 }
  uselistorder i32 -16, { 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4 }
}

define i32 @_ZN11VirtualBase4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_3db0:
  ret i32 100, !insn.addr !779
}

define i32 @_ZN11VirtualBaseD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_3dc0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !780
}

define i32 @_ZN11VirtualBaseD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3dd0:
  %0 = call i32 @_ZN11VirtualBaseD2Ev(i32* %result), !insn.addr !781
  call void @_ZdlPv(i32* %result), !insn.addr !782
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !783

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN11VirtualBaseD2Ev, { 3, 2, 1, 0 }
}

define i32 @_ZN7MiddleAD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3e10:
  %0 = ptrtoint i32* %this to i32
  ret i32 %0, !insn.addr !784
}

define i32 @_ZN7MiddleBD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3e20:
  %0 = ptrtoint i32* %this to i32
  ret i32 %0, !insn.addr !785
}

define i32 @_ZN14DiamondDerivedD2Ev(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_3e30:
  %0 = add i32 %arg2, 8, !insn.addr !786
  %1 = add i32 %arg3, 12, !insn.addr !787
  %2 = inttoptr i32 %0 to i32*, !insn.addr !788
  %3 = inttoptr i32 %1 to i32*, !insn.addr !788
  %4 = call i32 @_ZN7MiddleBD2Ev(i32* %2, i32* %3), !insn.addr !788
  %5 = add i32 %arg3, 4, !insn.addr !789
  %6 = inttoptr i32 %arg2 to i32*, !insn.addr !790
  %7 = inttoptr i32 %5 to i32*, !insn.addr !790
  %8 = call i32 @_ZN7MiddleAD2Ev(i32* %6, i32* %7), !insn.addr !790
  ret i32 %8, !insn.addr !791

; uselistorder directives
  uselistorder i32 4, { 29, 14, 15, 16, 30, 31, 17, 18, 19, 0, 1, 2, 23, 24, 25, 26, 27, 28, 32, 33, 3, 34, 4, 5, 35, 36, 37, 11, 6, 12, 7, 8, 20, 21, 9, 10, 22, 13 }
  uselistorder i32 12, { 1, 0 }
  uselistorder i32 8, { 6, 3, 4, 0, 7, 8, 9, 5, 1, 2 }
}

define i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3e90:
  %0 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i32* %result, i32* %arg3, i32* nonnull @0), !insn.addr !792
  ret i32 %0, !insn.addr !793
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3ed0:
  %0 = bitcast i32* %arg3 to i32**, !insn.addr !794
  %1 = call i32* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i32** %0), !insn.addr !794
  %2 = call i32 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i32* %result, i32* %1, i32* nonnull @0), !insn.addr !795
  %3 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32* %arg3, i32* nonnull @0), !insn.addr !796
  %4 = inttoptr i32 %3 to i32*, !insn.addr !797
  store i32 0, i32* %4, align 4, !insn.addr !797
  ret i32 %3, !insn.addr !798
}

define i32* @_ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_(i32** %arg1) local_unnamed_addr {
dec_label_pc_3f50:
  %0 = bitcast i32** %arg1 to i32*, !insn.addr !799
  ret i32* %0, !insn.addr !799
}

define i32 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_3f60:
  %0 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_(i32* %result, i32* %arg3, i32* nonnull @0), !insn.addr !800
  ret i32 %0, !insn.addr !801
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_3fa0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !802
  %3 = call i32* @_ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i32* %result, i32* %2), !insn.addr !802
  %4 = ptrtoint i32* %3 to i32, !insn.addr !802
  ret i32 %4, !insn.addr !803
}

define i32 @__clang_call_terminate(i32 %arg1) local_unnamed_addr {
dec_label_pc_3fd0:
  %0 = call i32 @__cxa_begin_catch(i32 %arg1), !insn.addr !804
  %1 = call i32 @_ZSt9terminatev(), !insn.addr !805
  ret i32 %1, !insn.addr !805
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_4000:
  %0 = ptrtoint i32* %result to i32
  %1 = call i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_(i32* %result, i32* %arg3), !insn.addr !806
  %2 = load i32, i32* %arg3, align 4, !insn.addr !807
  store i32 %2, i32* %result, align 4, !insn.addr !808
  ret i32 %0, !insn.addr !809
}

define i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4040:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !810
}

define i32* @_ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4050:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !811
  %3 = call i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !811
  %4 = bitcast i32** %3 to i32*, !insn.addr !812
  ret i32* %4, !insn.addr !812
}

define i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4080:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !813
  %3 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_(i32* %arg2, i32* %2), !insn.addr !813
  %4 = inttoptr i32 %3 to i32**, !insn.addr !814
  ret i32** %4, !insn.addr !814
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_40b0:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_(i32* %arg2), !insn.addr !815
  ret i32 %0, !insn.addr !816
}

define i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_(i32* %arg1) local_unnamed_addr {
dec_label_pc_40e0:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !817
}

define i32 @_ZN8RTTIBaseC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_40f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = add i32 %1, 19924, !insn.addr !818
  store i32 %3, i32* %result, align 4, !insn.addr !819
  ret i32 %2, !insn.addr !820
}

define i32 @_ZN12RTTIDerivedAD2Ev(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_4120:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !821
  %1 = call i32 @_ZN8RTTIBaseD2Ev(i32* %0), !insn.addr !821
  ret i32 %1, !insn.addr !822
}

define i32 @_ZN12RTTIDerivedAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4150:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 20132, !insn.addr !823
  %6 = call i32 @_ZN12RTTIDerivedAD2Ev(i32 %3, i32 %5, i32 %3, i32 %2, i32 %1), !insn.addr !824
  call void @_ZdlPv(i32* %result), !insn.addr !825
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !826

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @_ZNK12RTTIDerivedA7getTypeEv(i32* %result) local_unnamed_addr {
dec_label_pc_4190:
  ret i32 1, !insn.addr !827
}

define i32 @_ZN8RTTIBaseD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_41a0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !828
}

define i32 @_ZN8RTTIBaseD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_41b0:
  %0 = call i32 @_ZN8RTTIBaseD2Ev(i32* %result), !insn.addr !829
  call void @_ZdlPv(i32* %result), !insn.addr !830
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !831
}

define i32 @_ZNK8RTTIBase7getTypeEv(i32* %result) local_unnamed_addr {
dec_label_pc_41f0:
  ret i32 0, !insn.addr !832
}

define i32 @_ZN12RTTIDerivedBD2Ev(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_4200:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !833
  %1 = call i32 @_ZN8RTTIBaseD2Ev(i32* %0), !insn.addr !833
  ret i32 %1, !insn.addr !834

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN8RTTIBaseD2Ev, { 2, 1, 0 }
}

define i32 @_ZN12RTTIDerivedBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4230:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 19908, !insn.addr !835
  %6 = call i32 @_ZN12RTTIDerivedBD2Ev(i32 %3, i32 %5, i32 %3, i32 %2, i32 %1), !insn.addr !836
  call void @_ZdlPv(i32* %result), !insn.addr !837
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !838

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @_ZNK12RTTIDerivedB7getTypeEv(i32* %result) local_unnamed_addr {
dec_label_pc_4270:
  ret i32 2, !insn.addr !839

; uselistorder directives
  uselistorder i32 2, { 0, 1, 2, 4, 7, 3, 5, 6 }
}

define i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_4280:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !840
  %1 = inttoptr i32 %arg3 to i32*, !insn.addr !840
  %2 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i32* %0, i32* %1, i32* nonnull @0), !insn.addr !840
  ret i32 %2, !insn.addr !841
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_42c0:
  %0 = alloca i32
  %1 = ptrtoint i32* %arg3 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, 19764, !insn.addr !842
  %4 = inttoptr i32 %3 to i32*, !insn.addr !843
  %5 = call i32 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i32* %result, i32* %4), !insn.addr !843
  %6 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32* %result, i32* nonnull @0), !insn.addr !844
  %7 = inttoptr i32 %6 to i32*, !insn.addr !845
  store i32 %1, i32* %7, align 4, !insn.addr !845
  ret i32 %6, !insn.addr !846

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 (i32*, i32*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv, { 2, 1, 0 }
}

define i32 @_ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4310:
  %0 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev(i32* %result, i32* nonnull @0), !insn.addr !847
  ret i32 %0, !insn.addr !848
}

define i32 @function_434a() local_unnamed_addr {
dec_label_pc_434a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !849
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4350:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 19620, !insn.addr !850
  %6 = call i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev(i32 %3, i32 %5, i32 %3, i32 %2, i32 %1), !insn.addr !851
  %7 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EEC2Ev(i32* %result), !insn.addr !852
  ret i32 %7, !insn.addr !853

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_4390:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !854
  %1 = call i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev(i32* %0), !insn.addr !854
  ret i32 %1, !insn.addr !855
}

define i32 @_ZNSt10_Head_baseILj0EPiLb0EEC2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_43c0:
  %0 = ptrtoint i32* %result to i32
  store i32 0, i32* %result, align 4, !insn.addr !856
  ret i32 %0, !insn.addr !857

; uselistorder directives
  uselistorder i32 0, { 26, 4, 27, 23, 0, 28, 29, 30, 31, 34, 35, 2, 1, 36, 37, 3, 38, 7, 8, 5, 24, 14, 25, 15, 10, 9, 11, 16, 17, 32, 33, 18, 19, 20, 12, 21, 13, 39, 6, 22 }
}

define i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_43e0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !858
}

define i32 @_ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_43f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 19460, !insn.addr !859
  %6 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !860
  ret i32 %6, !insn.addr !861

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_4430() local_unnamed_addr {
dec_label_pc_4430:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !862
}

define i32 @_ZNKSt14default_deleteIiEclEPi(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_4440:
  %eax.0.reg2mem = alloca i32, !insn.addr !863
  %0 = ptrtoint i32* %arg3 to i32
  %1 = icmp eq i32* %arg3, null, !insn.addr !864
  store i32 %0, i32* %eax.0.reg2mem, !insn.addr !865
  br i1 %1, label %dec_label_pc_4479, label %dec_label_pc_446b, !insn.addr !865

dec_label_pc_446b:                                ; preds = %dec_label_pc_4440
  call void @_ZdlPv(i32* nonnull %arg3), !insn.addr !866
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !866
  br label %dec_label_pc_4479, !insn.addr !866

dec_label_pc_4479:                                ; preds = %dec_label_pc_446b, %dec_label_pc_4440
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !867

; uselistorder directives
  uselistorder void (i32*)* @_ZdlPv, { 12, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 13, 11, 14 }
}

define i32* @_ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_(i32*** %arg1) local_unnamed_addr {
dec_label_pc_4480:
  %0 = bitcast i32*** %arg1 to i32*, !insn.addr !868
  ret i32* %0, !insn.addr !868
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_4490:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !869
  %3 = inttoptr i32 %1 to i32*, !insn.addr !869
  %4 = call i32* @_ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i32* %2, i32* %3), !insn.addr !869
  %5 = ptrtoint i32* %4 to i32, !insn.addr !869
  ret i32 %5, !insn.addr !870
}

define i32* @_ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_44c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !871
  %3 = call i32* @_ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !871
  ret i32* %3, !insn.addr !872
}

define i32* @_ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_44f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !873
  %3 = call i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_(i32* %arg2, i32* %2), !insn.addr !873
  %4 = inttoptr i32 %3 to i32*, !insn.addr !874
  ret i32* %4, !insn.addr !874
}

define i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4520:
  %0 = call i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_(i32* %arg2), !insn.addr !875
  ret i32 %0, !insn.addr !876
}

define i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_(i32* %arg1) local_unnamed_addr {
dec_label_pc_4550:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !877
}

define i32 @_ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 19092, !insn.addr !878
  %6 = call i32 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !879
  ret i32 %6, !insn.addr !880

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_45a0() local_unnamed_addr {
dec_label_pc_45a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !881
}

define i32 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_45b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !882
  %3 = inttoptr i32 %1 to i32*, !insn.addr !882
  %4 = call i32* @_ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i32* %2, i32* %3), !insn.addr !882
  %5 = load i32, i32* %4, align 4, !insn.addr !883
  ret i32 %5, !insn.addr !884
}

define i32* @_ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_45e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !885
  %3 = call i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !885
  %4 = bitcast i32** %3 to i32*, !insn.addr !886
  ret i32* %4, !insn.addr !886
}

define i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4610:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !887
  %3 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i32* %arg2, i32* %2), !insn.addr !887
  %4 = inttoptr i32 %3 to i32**, !insn.addr !888
  ret i32** %4, !insn.addr !888
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4640:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_(i32* %arg2), !insn.addr !889
  ret i32 %0, !insn.addr !890
}

define i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_(i32* %arg1) local_unnamed_addr {
dec_label_pc_4670:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !891
}

define i32 @_ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_4680:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !892
  %1 = inttoptr i32 %arg3 to i32*, !insn.addr !892
  %2 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i32* %0, i32* %1, i32* nonnull @0), !insn.addr !892
  ret i32 %2, !insn.addr !893
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_46c0:
  %0 = alloca i32
  %1 = ptrtoint i32* %arg3 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %2, 18740, !insn.addr !894
  %4 = inttoptr i32 %3 to i32*, !insn.addr !895
  %5 = call i32 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i32* %result, i32* %4), !insn.addr !895
  %6 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i32* %result, i32* nonnull @0), !insn.addr !896
  %7 = inttoptr i32 %6 to i32*, !insn.addr !897
  store i32 %1, i32* %7, align 4, !insn.addr !897
  ret i32 %6, !insn.addr !898

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 (i32*, i32*)* @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv, { 1, 0 }
}

define i32 @_ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4710:
  %0 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev(i32* %result, i32* nonnull @0), !insn.addr !899
  ret i32 %0, !insn.addr !900
}

define i32 @function_474a() local_unnamed_addr {
dec_label_pc_474a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !901
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4750:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !902
  %3 = call i32* @_ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i32* %result, i32* %2), !insn.addr !902
  %4 = ptrtoint i32* %3 to i32, !insn.addr !902
  ret i32 %4, !insn.addr !903
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4780:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 18548, !insn.addr !904
  %6 = call i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev(i32 %3, i32 %5, i32 %3, i32 %2, i32 %1), !insn.addr !905
  %7 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EEC2Ev(i32* %result), !insn.addr !906
  ret i32 %7, !insn.addr !907

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i32 (i32*)* @_ZNSt10_Head_baseILj0EPiLb0EEC2Ev, { 1, 0 }
}

define i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_47c0:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !908
  %1 = call i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev(i32* %0), !insn.addr !908
  ret i32 %1, !insn.addr !909
}

define i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_47f0:
  %0 = ptrtoint i32* %result to i32
  ret i32 %0, !insn.addr !910
}

define i32* @_ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4800:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !911
  %3 = call i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !911
  %4 = bitcast i32** %3 to i32*, !insn.addr !912
  ret i32* %4, !insn.addr !912
}

define i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4830:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !913
  %3 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i32* %arg2, i32* %2), !insn.addr !913
  %4 = inttoptr i32 %3 to i32**, !insn.addr !914
  ret i32** %4, !insn.addr !914
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4860:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_(i32* %arg2), !insn.addr !915
  ret i32 %0, !insn.addr !916

; uselistorder directives
  uselistorder i32 (i32*)* @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_, { 2, 1, 0 }
}

define i32 @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_4890:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 18276, !insn.addr !917
  %6 = call i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !918
  ret i32 %6, !insn.addr !919

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_48ce() local_unnamed_addr {
dec_label_pc_48ce:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = udiv i32 %1, 256, !insn.addr !920
  %4 = trunc i32 %3 to i16, !insn.addr !920
  %5 = trunc i32 %2 to i16, !insn.addr !920
  %6 = urem i16 %4, 256, !insn.addr !920
  %7 = sdiv i16 %5, %6, !insn.addr !920
  %8 = and i32 %2, -65536, !insn.addr !920
  %9 = srem i16 %5, %6, !insn.addr !920
  %10 = mul i16 %9, 256
  %11 = zext i16 %10 to i32, !insn.addr !920
  %12 = urem i16 %7, 256
  %.masked = zext i16 %12 to i32
  %13 = or i32 %8, %.masked, !insn.addr !920
  %14 = or i32 %13, %11, !insn.addr !920
  ret i32 %14, !insn.addr !921

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i16 256, { 1, 0, 2 }
}

define i32 @_ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_(i32* %this, i32* %result, i32* %arg3) local_unnamed_addr {
dec_label_pc_48e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !922
  %1 = ptrtoint i32* %arg3 to i32
  %2 = load i32, i32* %0
  %3 = icmp eq i32* %arg3, null, !insn.addr !923
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !924
  br i1 %3, label %dec_label_pc_4919, label %dec_label_pc_490b, !insn.addr !924

dec_label_pc_490b:                                ; preds = %dec_label_pc_48e0
  %4 = add i32 %2, 18196, !insn.addr !925
  %5 = inttoptr i32 %4 to i32*, !insn.addr !926
  call void @_ZdaPv(i32* nonnull %arg3, i32* %5), !insn.addr !926
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !926
  br label %dec_label_pc_4919, !insn.addr !926

dec_label_pc_4919:                                ; preds = %dec_label_pc_490b, %dec_label_pc_48e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !927

; uselistorder directives
  uselistorder void (i32*, i32*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i32* null, { 1, 2, 3, 4, 0, 5 }
}

define i32 @_ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_4920:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !928
  %3 = inttoptr i32 %1 to i32*, !insn.addr !928
  %4 = call i32* @_ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i32* %2, i32* %3), !insn.addr !928
  %5 = ptrtoint i32* %4 to i32, !insn.addr !928
  ret i32 %5, !insn.addr !929
}

define i32* @_ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4950:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !930
  %3 = call i32* @_ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !930
  ret i32* %3, !insn.addr !931
}

define i32* @_ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4980:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !932
  %3 = call i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_(i32* %arg2, i32* %2), !insn.addr !932
  %4 = inttoptr i32 %3 to i32*, !insn.addr !933
  ret i32* %4, !insn.addr !933
}

define i32 @_ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_49b0:
  %0 = call i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i32* %arg2), !insn.addr !934
  ret i32 %0, !insn.addr !935
}

define i32 @_ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_(i32* %arg1) local_unnamed_addr {
dec_label_pc_49e0:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !936
}

define i32 @_ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_49f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = ptrtoint i32* %result to i32
  %4 = load i32, i32* %0
  %5 = add i32 %4, 17924, !insn.addr !937
  %6 = call i32 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i32 %3, i32 %5, i32 %2, i32 %1), !insn.addr !938
  ret i32 %6, !insn.addr !939

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_4a30() local_unnamed_addr {
dec_label_pc_4a30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !940
}

define i32 @_ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_4a40:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %arg2 to i32*, !insn.addr !941
  %3 = inttoptr i32 %1 to i32*, !insn.addr !941
  %4 = call i32* @_ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i32* %2, i32* %3), !insn.addr !941
  %5 = load i32, i32* %4, align 4, !insn.addr !942
  ret i32 %5, !insn.addr !943
}

define i32* @_ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4a70:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !944
  %3 = call i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i32* %arg2, i32* %2), !insn.addr !944
  %4 = bitcast i32** %3 to i32*, !insn.addr !945
  ret i32* %4, !insn.addr !945
}

define i32** @_ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4aa0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !946
  %3 = call i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i32* %arg2, i32* %2), !insn.addr !946
  %4 = inttoptr i32 %3 to i32**, !insn.addr !947
  ret i32** %4, !insn.addr !947
}

define i32 @_ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_(i32* %result, i32* %arg2) local_unnamed_addr {
dec_label_pc_4ad0:
  %0 = call i32 @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_(i32* %arg2), !insn.addr !948
  ret i32 %0, !insn.addr !949

; uselistorder directives
  uselistorder i32 (i32*)* @_ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_, { 2, 1, 0 }
}

define i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i32* %arg1) local_unnamed_addr {
dec_label_pc_4b00:
  %0 = bitcast i32* %arg1 to i32***, !insn.addr !950
  ret i32*** %0, !insn.addr !950
}

define i32 @_ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_(i32* %this, i32* %result, i32*** %arg3) local_unnamed_addr {
dec_label_pc_4b10:
  %0 = ptrtoint i32* %result to i32
  %1 = bitcast i32*** %arg3 to i32*
  %2 = call i32*** @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE(i32* %1), !insn.addr !951
  %3 = load i32**, i32*** %2, align 4, !insn.addr !952
  %4 = ptrtoint i32** %3 to i32, !insn.addr !952
  store i32 %4, i32* %result, align 4, !insn.addr !953
  ret i32 %0, !insn.addr !954

; uselistorder directives
  uselistorder i32*** (i32*)* @_ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE, { 2, 1, 0 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_4b50:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !955
  %ebx.0.reg2mem = alloca i32, !insn.addr !955
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !956
  %3 = add i32 %1, 16535, !insn.addr !957
  %4 = inttoptr i32 %3 to i32*, !insn.addr !957
  %5 = load i32, i32* %4, align 4, !insn.addr !957
  %6 = icmp eq i32 %5, -1, !insn.addr !958
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !959
  store i32 -1, i32* %merge.reg2mem, !insn.addr !959
  br i1 %6, label %dec_label_pc_4b8d, label %dec_label_pc_4b80, !insn.addr !959

dec_label_pc_4b80:                                ; preds = %dec_label_pc_4b50, %dec_label_pc_4b80
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !960
  %8 = inttoptr i32 %7 to i32*, !insn.addr !960
  %9 = load i32, i32* %8, align 4, !insn.addr !960
  %10 = icmp eq i32 %9, -1, !insn.addr !961
  %11 = icmp eq i1 %10, false, !insn.addr !962
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !962
  store i32 %9, i32* %merge.reg2mem, !insn.addr !962
  br i1 %11, label %dec_label_pc_4b80, label %dec_label_pc_4b8d, !insn.addr !962

dec_label_pc_4b8d:                                ; preds = %dec_label_pc_4b80, %dec_label_pc_4b50
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !963

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 11, 6, 8, 9, 0, 1, 2, 4, 3, 5, 7, 10 }
  uselistorder i32 -4, { 3, 0, 1, 2 }
  uselistorder i32 -1, { 2, 0, 3, 6, 1, 4, 5 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 30, 50, 14, 55, 43, 38, 8, 42, 31, 23, 10, 51, 41, 44, 12, 20, 9, 0, 57, 1, 56, 4, 45, 46, 19, 40, 26, 25, 54, 13, 35, 29, 37, 36, 6, 53, 58, 59, 60, 17, 18, 33, 62, 16, 15, 32, 61, 63, 64, 5, 48, 39, 47, 34, 21, 49, 52, 7, 28, 27, 24, 11, 22, 2, 3 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 3, 0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 2, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }
  uselistorder label %dec_label_pc_4b80, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_4b9c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !964
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !965
  ret i32 %3, !insn.addr !966

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 115, 118, 117, 114, 113, 112, 111, 110, 109, 108, 107, 106, 119, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 120, 88, 87, 86, 85, 84, 83, 132, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 121, 122, 55, 54, 53, 52, 51, 50, 49, 161, 123, 162, 163, 164, 124, 48, 47, 46, 165, 45, 44, 43, 42, 125, 166, 167, 126, 133, 127, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 128, 31, 30, 137, 29, 28, 130, 129, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 160, 142, 141, 140, 139, 138, 17, 144, 143, 146, 145, 116, 148, 147, 135, 151, 150, 149, 16, 153, 152, 134, 154, 15, 14, 13, 12, 156, 155, 157, 158, 11, 10, 9, 131, 8, 7, 6, 5, 159, 4, 3, 2, 1, 0, 136 }
}

declare i32* @_Znwj(i32) local_unnamed_addr

declare i32 @_ZSt9terminatev() local_unnamed_addr

declare i32 @__cxa_begin_catch(i32) local_unnamed_addr

declare i32 @__cxa_allocate_exception(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__cxa_atexit(void (i32*)*, i32*, i32*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32* @_Znaj(i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare void @_ZdlPv(i32*) local_unnamed_addr

declare i32 @__cxa_bad_typeid(i32) local_unnamed_addr

declare i32 @__dynamic_cast(i32, i32, i32, i32) local_unnamed_addr

declare void @_ZdaPv(i32*, i32*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__cxa_rethrow() local_unnamed_addr

declare i32 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @__cxa_end_catch() local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @__cxa_throw(i32, i32, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4160}
!5 = !{i64 4176}
!6 = !{i64 4192}
!7 = !{i64 4208}
!8 = !{i64 4224}
!9 = !{i64 4240}
!10 = !{i64 4256}
!11 = !{i64 4272}
!12 = !{i64 4288}
!13 = !{i64 4304}
!14 = !{i64 4320}
!15 = !{i64 4336}
!16 = !{i64 4352}
!17 = !{i64 4368}
!18 = !{i64 4384}
!19 = !{i64 4400}
!20 = !{i64 4416}
!21 = !{i64 4432}
!22 = !{i64 4448}
!23 = !{i64 4464}
!24 = !{i64 4480}
!25 = !{i64 4496}
!26 = !{i64 4543}
!27 = !{i64 4551}
!28 = !{i64 4557}
!29 = !{i64 4563}
!30 = !{i64 4569}
!31 = !{i64 4580}
!32 = !{i64 4590}
!33 = !{i64 4609}
!34 = !{i64 4619}
!35 = !{i64 4639}
!36 = !{i64 4656}
!37 = !{i64 4662}
!38 = !{i64 4667}
!39 = !{i64 4671}
!40 = !{i64 4675}
!41 = !{i64 4688}
!42 = !{i64 4705}
!43 = !{i64 4744}
!44 = !{i64 4752}
!45 = !{i64 4822}
!46 = !{i64 4832}
!47 = !{i64 4840}
!48 = !{i64 4856}
!49 = !{i64 4863}
!50 = !{i64 4865}
!51 = !{i64 4871}
!52 = !{i64 4873}
!53 = !{i64 4886}
!54 = !{i64 4891}
!55 = !{i64 4950}
!56 = !{i64 4955}
!57 = !{i64 4969}
!58 = !{i64 4980}
!59 = !{i64 4988}
!60 = !{i64 4992}
!61 = !{i64 5021}
!62 = !{i64 5033}
!63 = !{i64 5054}
!64 = !{i64 5076}
!65 = !{i64 5090}
!66 = !{i64 5115}
!67 = !{i64 5126}
!68 = !{i64 5137}
!69 = !{i64 5140}
!70 = !{i64 5148}
!71 = !{i64 5198}
!72 = !{i64 5220}
!73 = !{i64 5247}
!74 = !{i64 5266}
!75 = !{i64 5278}
!76 = !{i64 5286}
!77 = !{i64 5291}
!78 = !{i64 5297}
!79 = !{i64 5311}
!80 = !{i64 5391}
!81 = !{i64 5407}
!82 = !{i64 5437}
!83 = !{i64 5459}
!84 = !{i64 5486}
!85 = !{i64 5522}
!86 = !{i64 5570}
!87 = !{i64 5606}
!88 = !{i64 5631}
!89 = !{i64 5634}
!90 = !{i64 5637}
!91 = !{i64 5649}
!92 = !{i64 5663}
!93 = !{i64 5676}
!94 = !{i64 5677}
!95 = !{i64 5680}
!96 = !{i64 5683}
!97 = !{i64 5691}
!98 = !{i64 5694}
!99 = !{i64 5697}
!100 = !{i64 5703}
!101 = !{i64 5711}
!102 = !{i64 5717}
!103 = !{i64 5725}
!104 = !{i64 5731}
!105 = !{i64 5743}
!106 = !{i64 5773}
!107 = !{i64 5836}
!108 = !{i64 5838}
!109 = !{i64 5868}
!110 = !{i64 5917}
!111 = !{i64 5920}
!112 = !{i64 5932}
!113 = !{i64 5946}
!114 = !{i64 5985}
!115 = !{i64 6012}
!116 = !{i64 6017}
!117 = !{i64 6020}
!118 = !{i64 6023}
!119 = !{i64 6048}
!120 = !{i64 6051}
!121 = !{i64 6054}
!122 = !{i64 6057}
!123 = !{i64 6074}
!124 = !{i64 6076}
!125 = !{i64 6107}
!126 = !{i64 6118}
!127 = !{i64 6120}
!128 = !{i64 6148}
!129 = !{i64 6160}
!130 = !{i64 6173}
!131 = !{i64 6252}
!132 = !{i64 6282}
!133 = !{i64 6310}
!134 = !{i64 6334}
!135 = !{i64 6353}
!136 = !{i64 6358}
!137 = !{i64 6361}
!138 = !{i64 6374}
!139 = !{i64 6377}
!140 = !{i64 6380}
!141 = !{i64 6387}
!142 = !{i64 6437}
!143 = !{i64 6477}
!144 = !{i64 6488}
!145 = !{i64 6495}
!146 = !{i64 6515}
!147 = !{i64 6546}
!148 = !{i64 6555}
!149 = !{i64 6557}
!150 = !{i64 6560}
!151 = !{i64 6568}
!152 = !{i64 6617}
!153 = !{i64 6645}
!154 = !{i64 6673}
!155 = !{i64 6701}
!156 = !{i64 6729}
!157 = !{i64 6753}
!158 = !{i64 6783}
!159 = !{i64 6818}
!160 = !{i64 6846}
!161 = !{i64 6903}
!162 = !{i64 6863}
!163 = !{i64 6921}
!164 = !{i64 6931}
!165 = !{i64 6983}
!166 = !{i64 7006}
!167 = !{i64 7039}
!168 = !{i64 7050}
!169 = !{i64 7058}
!170 = !{i64 7084}
!171 = !{i64 7087}
!172 = !{i64 7089}
!173 = !{i64 7092}
!174 = !{i64 7097}
!175 = !{i64 7100}
!176 = !{i64 7103}
!177 = !{i64 7106}
!178 = !{i64 7135}
!179 = !{i64 7139}
!180 = !{i64 7189}
!181 = !{i64 7199}
!182 = !{i64 7205}
!183 = !{i64 7225}
!184 = !{i64 7567}
!185 = !{i64 7598}
!186 = !{i64 7608}
!187 = !{i64 7627}
!188 = !{i64 7642}
!189 = !{i64 7661}
!190 = !{i64 7674}
!191 = !{i64 7697}
!192 = !{i64 7712}
!193 = !{i64 7731}
!194 = !{i64 7744}
!195 = !{i64 7763}
!196 = !{i64 7769}
!197 = !{i64 7776}
!198 = !{i64 7783}
!199 = !{i64 7790}
!200 = !{i64 7810}
!201 = !{i64 7832}
!202 = !{i64 7851}
!203 = !{i64 7864}
!204 = !{i64 7883}
!205 = !{i64 7908}
!206 = !{i64 7923}
!207 = !{i64 7942}
!208 = !{i64 7950}
!209 = !{i64 7953}
!210 = !{i64 7965}
!211 = !{i64 7979}
!212 = !{i64 7993}
!213 = !{i64 8007}
!214 = !{i64 8020}
!215 = !{i64 8021}
!216 = !{i64 8024}
!217 = !{i64 8027}
!218 = !{i64 8032}
!219 = !{i64 8035}
!220 = !{i64 8038}
!221 = !{i64 8043}
!222 = !{i64 8046}
!223 = !{i64 8049}
!224 = !{i64 8057}
!225 = !{i64 8060}
!226 = !{i64 8063}
!227 = !{i64 8069}
!228 = !{i64 8077}
!229 = !{i64 8083}
!230 = !{i64 8091}
!231 = !{i64 8097}
!232 = !{i64 8105}
!233 = !{i64 8111}
!234 = !{i64 8119}
!235 = !{i64 8125}
!236 = !{i64 8143}
!237 = !{i64 8195}
!238 = !{i64 8211}
!239 = !{i64 8237}
!240 = !{i64 8269}
!241 = !{i64 8279}
!242 = !{i64 8323}
!243 = !{i64 8345}
!244 = !{i64 8348}
!245 = !{i64 8364}
!246 = !{i64 8382}
!247 = !{i64 8393}
!248 = !{i64 8402}
!249 = !{i64 8412}
!250 = !{i64 8420}
!251 = !{i64 8431}
!252 = !{i64 8448}
!253 = !{i64 8478}
!254 = !{i64 8510}
!255 = !{i64 8524}
!256 = !{i64 8545}
!257 = !{i64 8577}
!258 = !{i64 8591}
!259 = !{i64 8615}
!260 = !{i64 8618}
!261 = !{i64 8627}
!262 = !{i64 8638}
!263 = !{i64 8640}
!264 = !{i64 8643}
!265 = !{i64 8656}
!266 = !{i64 8689}
!267 = !{i64 8692}
!268 = !{i64 8701}
!269 = !{i64 8661}
!270 = !{i64 8663}
!271 = !{i64 8712}
!272 = !{i64 8714}
!273 = !{i64 8717}
!274 = !{i64 8730}
!275 = !{i64 8735}
!276 = !{i64 8737}
!277 = !{i64 8811}
!278 = !{i64 8840}
!279 = !{i64 8844}
!280 = !{i64 8859}
!281 = !{i64 8864}
!282 = !{i64 8867}
!283 = !{i64 8924}
!284 = !{i64 8953}
!285 = !{i64 8957}
!286 = !{i64 8972}
!287 = !{i64 8977}
!288 = !{i64 8980}
!289 = !{i64 8992}
!290 = !{i64 9001}
!291 = !{i64 9012}
!292 = !{i64 9014}
!293 = !{i64 9020}
!294 = !{i64 9032}
!295 = !{i64 9034}
!296 = !{i64 9039}
!297 = !{i64 9112}
!298 = !{i64 9142}
!299 = !{i64 9148}
!300 = !{i64 9151}
!301 = !{i64 9159}
!302 = !{i64 9167}
!303 = !{i64 9173}
!304 = !{i64 9180}
!305 = !{i64 9188}
!306 = !{i64 9196}
!307 = !{i64 9202}
!308 = !{i64 9209}
!309 = !{i64 9217}
!310 = !{i64 9225}
!311 = !{i64 9231}
!312 = !{i64 9238}
!313 = !{i64 9246}
!314 = !{i64 9254}
!315 = !{i64 9260}
!316 = !{i64 9267}
!317 = !{i64 9275}
!318 = !{i64 9283}
!319 = !{i64 9289}
!320 = !{i64 9296}
!321 = !{i64 9304}
!322 = !{i64 9312}
!323 = !{i64 9318}
!324 = !{i64 9325}
!325 = !{i64 9333}
!326 = !{i64 9341}
!327 = !{i64 9347}
!328 = !{i64 9354}
!329 = !{i64 9362}
!330 = !{i64 9370}
!331 = !{i64 9376}
!332 = !{i64 9383}
!333 = !{i64 9391}
!334 = !{i64 9399}
!335 = !{i64 9405}
!336 = !{i64 9412}
!337 = !{i64 9420}
!338 = !{i64 9428}
!339 = !{i64 9434}
!340 = !{i64 9441}
!341 = !{i64 9449}
!342 = !{i64 9457}
!343 = !{i64 9463}
!344 = !{i64 9470}
!345 = !{i64 9478}
!346 = !{i64 9486}
!347 = !{i64 9492}
!348 = !{i64 9499}
!349 = !{i64 9509}
!350 = !{i64 9544}
!351 = !{i64 9556}
!352 = !{i64 9571}
!353 = !{i64 9616}
!354 = !{i64 9626}
!355 = !{i64 9675}
!356 = !{i64 9700}
!357 = !{i64 9710}
!358 = !{i64 9722}
!359 = !{i64 9773}
!360 = !{i64 9791}
!361 = !{i64 9817}
!362 = !{i64 9833}
!363 = !{i64 9902}
!364 = !{i64 9920}
!365 = !{i64 9940}
!366 = !{i64 9958}
!367 = !{i64 9968}
!368 = !{i64 10022}
!369 = !{i64 10032}
!370 = !{i64 10058}
!371 = !{i64 10090}
!372 = !{i64 10100}
!373 = !{i64 10125}
!374 = !{i64 10144}
!375 = !{i64 10165}
!376 = !{i64 10192}
!377 = !{i64 10223}
!378 = !{i64 10235}
!379 = !{i64 10238}
!380 = !{i64 10253}
!381 = !{i64 10263}
!382 = !{i64 10298}
!383 = !{i64 10308}
!384 = !{i64 10346}
!385 = !{i64 10356}
!386 = !{i64 10394}
!387 = !{i64 10404}
!388 = !{i64 10442}
!389 = !{i64 10452}
!390 = !{i64 10490}
!391 = !{i64 10500}
!392 = !{i64 10538}
!393 = !{i64 10548}
!394 = !{i64 10586}
!395 = !{i64 10596}
!396 = !{i64 10618}
!397 = !{i64 10637}
!398 = !{i64 10656}
!399 = !{i64 10677}
!400 = !{i64 10730}
!401 = !{i64 10735}
!402 = !{i64 10742}
!403 = !{i64 10778}
!404 = !{i64 10788}
!405 = !{i64 10826}
!406 = !{i64 10836}
!407 = !{i64 10874}
!408 = !{i64 10884}
!409 = !{i64 10933}
!410 = !{i64 10935}
!411 = !{i64 10941}
!412 = !{i64 10956}
!413 = !{i64 10964}
!414 = !{i64 10973}
!415 = !{i64 10991}
!416 = !{i64 10994}
!417 = !{i64 11017}
!418 = !{i64 11020}
!419 = !{i64 11052}
!420 = !{i64 11054}
!421 = !{i64 11061}
!422 = !{i64 11066}
!423 = !{i64 11068}
!424 = !{i64 11078}
!425 = !{i64 11085}
!426 = !{i64 11097}
!427 = !{i64 11104}
!428 = !{i64 11141}
!429 = !{i64 11152}
!430 = !{i64 11162}
!431 = !{i64 11168}
!432 = !{i64 11178}
!433 = !{i64 11190}
!434 = !{i64 11193}
!435 = !{i64 11211}
!436 = !{i64 11202}
!437 = !{i64 11217}
!438 = !{i64 11117}
!439 = !{i64 11231}
!440 = !{i64 11237}
!441 = !{i64 11240}
!442 = !{i64 11251}
!443 = !{i64 11264}
!444 = !{i64 11285}
!445 = !{i64 11288}
!446 = !{i64 11297}
!447 = !{i64 11302}
!448 = !{i64 11308}
!449 = !{i64 11333}
!450 = !{i64 11359}
!451 = !{i64 11366}
!452 = !{i64 11389}
!453 = !{i64 11404}
!454 = !{i64 11409}
!455 = !{i64 11412}
!456 = !{i64 11427}
!457 = !{i64 11435}
!458 = !{i64 11441}
!459 = !{i64 11444}
!460 = !{i64 11455}
!461 = !{i64 11483}
!462 = !{i64 11486}
!463 = !{i64 11489}
!464 = !{i64 11517}
!465 = !{i64 11541}
!466 = !{i64 11558}
!467 = !{i64 11561}
!468 = !{i64 11566}
!469 = !{i64 11574}
!470 = !{i64 11596}
!471 = !{i64 11600}
!472 = !{i64 11631}
!473 = !{i64 11636}
!474 = !{i64 11674}
!475 = !{i64 11684}
!476 = !{i64 11703}
!477 = !{i64 11725}
!478 = !{i64 11746}
!479 = !{i64 11757}
!480 = !{i64 11763}
!481 = !{i64 11780}
!482 = !{i64 11783}
!483 = !{i64 11791}
!484 = !{i64 11794}
!485 = !{i64 11802}
!486 = !{i64 11839}
!487 = !{i64 11845}
!488 = !{i64 11859}
!489 = !{i64 11869}
!490 = !{i64 11885}
!491 = !{i64 11903}
!492 = !{i64 11909}
!493 = !{i64 11926}
!494 = !{i64 11936}
!495 = !{i64 11947}
!496 = !{i64 11956}
!497 = !{i64 11966}
!498 = !{i64 11983}
!499 = !{i64 11986}
!500 = !{i64 11994}
!501 = !{i64 11997}
!502 = !{i64 12006}
!503 = !{i64 12009}
!504 = !{i64 12017}
!505 = !{i64 12045}
!506 = !{i64 12063}
!507 = !{i64 12076}
!508 = !{i64 12087}
!509 = !{i64 12093}
!510 = !{i64 12103}
!511 = !{i64 12130}
!512 = !{i64 12135}
!513 = !{i64 12139}
!514 = !{i64 12181}
!515 = !{i64 12186}
!516 = !{i64 12188}
!517 = !{i64 12194}
!518 = !{i64 12208}
!519 = !{i64 12222}
!520 = !{i64 12240}
!521 = !{i64 12258}
!522 = !{i64 12265}
!523 = !{i64 12270}
!524 = !{i64 12279}
!525 = !{i64 12285}
!526 = !{i64 12291}
!527 = !{i64 12306}
!528 = !{i64 12329}
!529 = !{i64 12331}
!530 = !{i64 12334}
!531 = !{i64 12336}
!532 = !{i64 12339}
!533 = !{i64 12342}
!534 = !{i64 12346}
!535 = !{i64 12368}
!536 = !{i64 12398}
!537 = !{i64 12463}
!538 = !{i64 12477}
!539 = !{i64 12485}
!540 = !{i64 12490}
!541 = !{i64 12498}
!542 = !{i64 12504}
!543 = !{i64 12521}
!544 = !{i64 12529}
!545 = !{i64 12561}
!546 = !{i64 12565}
!547 = !{i64 12582}
!548 = !{i64 12585}
!549 = !{i64 12588}
!550 = !{i64 12596}
!551 = !{i64 12608}
!552 = !{i64 12626}
!553 = !{i64 12630}
!554 = !{i64 12642}
!555 = !{i64 12645}
!556 = !{i64 12657}
!557 = !{i64 12663}
!558 = !{i64 12682}
!559 = !{i64 12697}
!560 = !{i64 12701}
!561 = !{i64 12713}
!562 = !{i64 12721}
!563 = !{i64 12757}
!564 = !{i64 12761}
!565 = !{i64 12778}
!566 = !{i64 12781}
!567 = !{i64 12784}
!568 = !{i64 12791}
!569 = !{i64 12818}
!570 = !{i64 12822}
!571 = !{i64 12834}
!572 = !{i64 12837}
!573 = !{i64 12881}
!574 = !{i64 12905}
!575 = !{i64 12909}
!576 = !{i64 12925}
!577 = !{i64 12953}
!578 = !{i64 12968}
!579 = !{i64 13005}
!580 = !{i64 13037}
!581 = !{i64 13047}
!582 = !{i64 13066}
!583 = !{i64 13110}
!584 = !{i64 13120}
!585 = !{i64 13149}
!586 = !{i64 13177}
!587 = !{i64 13192}
!588 = !{i64 13229}
!589 = !{i64 13264}
!590 = !{i64 13272}
!591 = !{i64 13275}
!592 = !{i64 13282}
!593 = !{i64 13309}
!594 = !{i64 13330}
!595 = !{i64 13341}
!596 = !{i64 13344}
!597 = !{i64 13360}
!598 = !{i64 13373}
!599 = !{i64 13382}
!600 = !{i64 13392}
!601 = !{i64 13400}
!602 = !{i64 13411}
!603 = !{i64 13458}
!604 = !{i64 13469}
!605 = !{i64 13472}
!606 = !{i64 13488}
!607 = !{i64 13506}
!608 = !{i64 13517}
!609 = !{i64 13526}
!610 = !{i64 13536}
!611 = !{i64 13544}
!612 = !{i64 13555}
!613 = !{i64 13581}
!614 = !{i64 13602}
!615 = !{i64 13619}
!616 = !{i64 13622}
!617 = !{i64 13629}
!618 = !{i64 13645}
!619 = !{i64 13666}
!620 = !{i64 13683}
!621 = !{i64 13686}
!622 = !{i64 13693}
!623 = !{i64 13696}
!624 = !{i64 13730}
!625 = !{i64 13738}
!626 = !{i64 13744}
!627 = !{i64 13756}
!628 = !{i64 13761}
!629 = !{i64 13767}
!630 = !{i64 13795}
!631 = !{i64 13800}
!632 = !{i64 13806}
!633 = !{i64 13828}
!634 = !{i64 13852}
!635 = !{i64 13868}
!636 = !{i64 13887}
!637 = !{i64 13890}
!638 = !{i64 13893}
!639 = !{i64 13935}
!640 = !{i64 13954}
!641 = !{i64 13961}
!642 = !{i64 14002}
!643 = !{i64 14016}
!644 = !{i64 14026}
!645 = !{i64 14050}
!646 = !{i64 14057}
!647 = !{i64 14077}
!648 = !{i64 14098}
!649 = !{i64 14112}
!650 = !{i64 14122}
!651 = !{i64 14155}
!652 = !{i64 14158}
!653 = !{i64 14161}
!654 = !{i64 14203}
!655 = !{i64 14206}
!656 = !{i64 14209}
!657 = !{i64 14236}
!658 = !{i64 14253}
!659 = !{i64 14274}
!660 = !{i64 14288}
!661 = !{i64 14298}
!662 = !{i64 14316}
!663 = !{i64 14343}
!664 = !{i64 14350}
!665 = !{i64 14360}
!666 = !{i64 14391}
!667 = !{i64 14398}
!668 = !{i64 14408}
!669 = !{i64 14439}
!670 = !{i64 14446}
!671 = !{i64 14456}
!672 = !{i64 14476}
!673 = !{i64 14487}
!674 = !{i64 14530}
!675 = !{i64 14544}
!676 = !{i64 14554}
!677 = !{i64 14572}
!678 = !{i64 14583}
!679 = !{i64 14626}
!680 = !{i64 14640}
!681 = !{i64 14650}
!682 = !{i64 14683}
!683 = !{i64 14686}
!684 = !{i64 14689}
!685 = !{i64 14719}
!686 = !{i64 14721}
!687 = !{i64 14723}
!688 = !{i64 14728}
!689 = !{i64 14731}
!690 = !{i64 14735}
!691 = !{i64 14751}
!692 = !{i64 14753}
!693 = !{i64 14755}
!694 = !{i64 14760}
!695 = !{i64 14763}
!696 = !{i64 14767}
!697 = !{i64 14777}
!698 = !{i64 14779}
!699 = !{i64 14782}
!700 = !{i64 14786}
!701 = !{i64 14792}
!702 = !{i64 14831}
!703 = !{i64 14844}
!704 = !{i64 14855}
!705 = !{i64 14861}
!706 = !{i64 14871}
!707 = !{i64 14893}
!708 = !{i64 14914}
!709 = !{i64 14928}
!710 = !{i64 14938}
!711 = !{i64 14969}
!712 = !{i64 14971}
!713 = !{i64 14978}
!714 = !{i64 14988}
!715 = !{i64 15017}
!716 = !{i64 15019}
!717 = !{i64 15026}
!718 = !{i64 15036}
!719 = !{i64 15065}
!720 = !{i64 15067}
!721 = !{i64 15074}
!722 = !{i64 15084}
!723 = !{i64 15097}
!724 = !{i64 15099}
!725 = !{i64 15102}
!726 = !{i64 15106}
!727 = !{i64 15112}
!728 = !{i64 15151}
!729 = !{i64 15164}
!730 = !{i64 15175}
!731 = !{i64 15181}
!732 = !{i64 15191}
!733 = !{i64 15213}
!734 = !{i64 15234}
!735 = !{i64 15248}
!736 = !{i64 15258}
!737 = !{i64 15289}
!738 = !{i64 15291}
!739 = !{i64 15298}
!740 = !{i64 15308}
!741 = !{i64 15337}
!742 = !{i64 15339}
!743 = !{i64 15346}
!744 = !{i64 15356}
!745 = !{i64 15385}
!746 = !{i64 15387}
!747 = !{i64 15394}
!748 = !{i64 15404}
!749 = !{i64 15417}
!750 = !{i64 15419}
!751 = !{i64 15422}
!752 = !{i64 15426}
!753 = !{i64 15432}
!754 = !{i64 15453}
!755 = !{i64 15474}
!756 = !{i64 15488}
!757 = !{i64 15498}
!758 = !{i64 15527}
!759 = !{i64 15534}
!760 = !{i64 15544}
!761 = !{i64 15575}
!762 = !{i64 15582}
!763 = !{i64 15592}
!764 = !{i64 15623}
!765 = !{i64 15630}
!766 = !{i64 15640}
!767 = !{i64 15673}
!768 = !{i64 15675}
!769 = !{i64 15682}
!770 = !{i64 15692}
!771 = !{i64 15721}
!772 = !{i64 15723}
!773 = !{i64 15730}
!774 = !{i64 15740}
!775 = !{i64 15769}
!776 = !{i64 15771}
!777 = !{i64 15778}
!778 = !{i64 15788}
!779 = !{i64 15804}
!780 = !{i64 15815}
!781 = !{i64 15858}
!782 = !{i64 15872}
!783 = !{i64 15882}
!784 = !{i64 15898}
!785 = !{i64 15914}
!786 = !{i64 15960}
!787 = !{i64 15963}
!788 = !{i64 15973}
!789 = !{i64 15987}
!790 = !{i64 15997}
!791 = !{i64 16007}
!792 = !{i64 16054}
!793 = !{i64 16064}
!794 = !{i64 16121}
!795 = !{i64 16141}
!796 = !{i64 16156}
!797 = !{i64 16172}
!798 = !{i64 16183}
!799 = !{i64 16218}
!800 = !{i64 16262}
!801 = !{i64 16272}
!802 = !{i64 16314}
!803 = !{i64 16324}
!804 = !{i64 16363}
!805 = !{i64 16372}
!806 = !{i64 16425}
!807 = !{i64 16436}
!808 = !{i64 16438}
!809 = !{i64 16445}
!810 = !{i64 16458}
!811 = !{i64 16490}
!812 = !{i64 16500}
!813 = !{i64 16538}
!814 = !{i64 16548}
!815 = !{i64 16586}
!816 = !{i64 16596}
!817 = !{i64 16618}
!818 = !{i64 16651}
!819 = !{i64 16654}
!820 = !{i64 16657}
!821 = !{i64 16698}
!822 = !{i64 16708}
!823 = !{i64 16733}
!824 = !{i64 16754}
!825 = !{i64 16768}
!826 = !{i64 16778}
!827 = !{i64 16796}
!828 = !{i64 16807}
!829 = !{i64 16850}
!830 = !{i64 16864}
!831 = !{i64 16874}
!832 = !{i64 16889}
!833 = !{i64 16922}
!834 = !{i64 16932}
!835 = !{i64 16957}
!836 = !{i64 16978}
!837 = !{i64 16992}
!838 = !{i64 17002}
!839 = !{i64 17020}
!840 = !{i64 17062}
!841 = !{i64 17072}
!842 = !{i64 17101}
!843 = !{i64 17125}
!844 = !{i64 17145}
!845 = !{i64 17153}
!846 = !{i64 17160}
!847 = !{i64 17200}
!848 = !{i64 17215}
!849 = !{i64 17226}
!850 = !{i64 17245}
!851 = !{i64 17266}
!852 = !{i64 17280}
!853 = !{i64 17290}
!854 = !{i64 17322}
!855 = !{i64 17332}
!856 = !{i64 17353}
!857 = !{i64 17360}
!858 = !{i64 17383}
!859 = !{i64 17405}
!860 = !{i64 17424}
!861 = !{i64 17445}
!862 = !{i64 17456}
!863 = !{i64 17472}
!864 = !{i64 17506}
!865 = !{i64 17509}
!866 = !{i64 17524}
!867 = !{i64 17534}
!868 = !{i64 17546}
!869 = !{i64 17578}
!870 = !{i64 17588}
!871 = !{i64 17626}
!872 = !{i64 17636}
!873 = !{i64 17674}
!874 = !{i64 17684}
!875 = !{i64 17722}
!876 = !{i64 17732}
!877 = !{i64 17754}
!878 = !{i64 17773}
!879 = !{i64 17792}
!880 = !{i64 17813}
!881 = !{i64 17824}
!882 = !{i64 17866}
!883 = !{i64 17871}
!884 = !{i64 17878}
!885 = !{i64 17914}
!886 = !{i64 17924}
!887 = !{i64 17962}
!888 = !{i64 17972}
!889 = !{i64 18010}
!890 = !{i64 18020}
!891 = !{i64 18042}
!892 = !{i64 18086}
!893 = !{i64 18096}
!894 = !{i64 18125}
!895 = !{i64 18149}
!896 = !{i64 18169}
!897 = !{i64 18177}
!898 = !{i64 18184}
!899 = !{i64 18224}
!900 = !{i64 18239}
!901 = !{i64 18250}
!902 = !{i64 18282}
!903 = !{i64 18292}
!904 = !{i64 18317}
!905 = !{i64 18338}
!906 = !{i64 18352}
!907 = !{i64 18362}
!908 = !{i64 18394}
!909 = !{i64 18404}
!910 = !{i64 18423}
!911 = !{i64 18458}
!912 = !{i64 18468}
!913 = !{i64 18506}
!914 = !{i64 18516}
!915 = !{i64 18554}
!916 = !{i64 18564}
!917 = !{i64 18589}
!918 = !{i64 18608}
!919 = !{i64 18629}
!920 = !{i64 18638}
!921 = !{i64 18640}
!922 = !{i64 18656}
!923 = !{i64 18690}
!924 = !{i64 18693}
!925 = !{i64 18669}
!926 = !{i64 18708}
!927 = !{i64 18718}
!928 = !{i64 18746}
!929 = !{i64 18756}
!930 = !{i64 18794}
!931 = !{i64 18804}
!932 = !{i64 18842}
!933 = !{i64 18852}
!934 = !{i64 18890}
!935 = !{i64 18900}
!936 = !{i64 18922}
!937 = !{i64 18941}
!938 = !{i64 18960}
!939 = !{i64 18981}
!940 = !{i64 18992}
!941 = !{i64 19034}
!942 = !{i64 19039}
!943 = !{i64 19046}
!944 = !{i64 19082}
!945 = !{i64 19092}
!946 = !{i64 19130}
!947 = !{i64 19140}
!948 = !{i64 19178}
!949 = !{i64 19188}
!950 = !{i64 19210}
!951 = !{i64 19253}
!952 = !{i64 19263}
!953 = !{i64 19265}
!954 = !{i64 19272}
!955 = !{i64 19280}
!956 = !{i64 19284}
!957 = !{i64 19295}
!958 = !{i64 19301}
!959 = !{i64 19304}
!960 = !{i64 19330}
!961 = !{i64 19336}
!962 = !{i64 19339}
!963 = !{i64 19345}
!964 = !{i64 19364}
!965 = !{i64 19375}
!966 = !{i64 19384}
