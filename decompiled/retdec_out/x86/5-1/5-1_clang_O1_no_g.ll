source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_Unwind_Exception = type { i32 }

@global_var_2bf = global i32 0
@global_var_19ca = local_unnamed_addr constant i32 12836
@global_var_1866 = local_unnamed_addr constant [3 x i8] c"$,\00"
@global_var_3eb7 = local_unnamed_addr constant i32 135151884
@global_var_3e77 = constant i32 100356
@global_var_3bff = constant i32 269370120
@global_var_3e27 = local_unnamed_addr constant i32* @global_var_3bff
@0 = external global i32
@global_var_3e8 = external global i64

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

define i32 @function_1050(i32 %arg1) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @__cxa_begin_catch(i32 %arg1), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_1060(i32 %arg1) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @__cxa_allocate_exception(i32 %arg1), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1070(i8* %s) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @strlen(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1080(void (i32*)* %func, i32* %arg, i32* %dso_handle) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @__cxa_atexit(void (i32*)* %func, i32* %arg, i32* %dso_handle), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1090(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10a0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32* @function_10b0(i32 %size) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32* @_Znaj(i32 %size), !insn.addr !11
  ret i32* %0, !insn.addr !11
}

define void @function_10c0(i32* %ptr) local_unnamed_addr {
dec_label_pc_10c0:
  call void @_ZdlPv(i32* %ptr), !insn.addr !12
  ret void, !insn.addr !12
}

define i32 @function_10d0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @__dynamic_cast(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define void @function_10e0(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = inttoptr i32 %size to i32*, !insn.addr !14
  call void @_ZdaPv(i32* %ptr, i32* %0), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_10f0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10f0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1100() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @__cxa_rethrow(), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_1110(i8* %s) local_unnamed_addr {
dec_label_pc_1110:
  %0 = call i32 @puts(i8* %s), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_1120() local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_1130() local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @__cxa_end_catch(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1140(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1140:
  %0 = call i32 @__cxa_throw(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @function_1150(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1150:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_1160() local_unnamed_addr {
dec_label_pc_1160:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !22
}

define i32 @_GLOBAL__sub_I_5_1.cpp(i32 %arg1) local_unnamed_addr {
dec_label_pc_1170:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 20220, !insn.addr !23
  %3 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !24
  %4 = add i32 %1, 20192, !insn.addr !25
  %5 = add i32 %1, 20100, !insn.addr !26
  %6 = inttoptr i32 %5 to i32*, !insn.addr !26
  %7 = load i32, i32* %6, align 4, !insn.addr !26
  %8 = inttoptr i32 %7 to void (i32*)*, !insn.addr !27
  %9 = inttoptr i32 %2 to i32*, !insn.addr !28
  %10 = inttoptr i32 %4 to i32*, !insn.addr !28
  %11 = call i32 @__cxa_atexit(void (i32*)* %8, i32* %9, i32* %10), !insn.addr !28
  ret i32 %11, !insn.addr !29

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0 }
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_11dc(i32 %2), !insn.addr !30
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20008, !insn.addr !31
  %6 = inttoptr i32 %5 to i32*, !insn.addr !31
  %7 = load i32, i32* %6, align 4, !insn.addr !31
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !32
  %9 = call i32 @__asm_hlt(), !insn.addr !33
  unreachable, !insn.addr !33

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_11dc(i32 %arg1) local_unnamed_addr {
dec_label_pc_11dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !34
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_11f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !36
  %3 = add i32 %1, 20087, !insn.addr !37
  ret i32 %3, !insn.addr !38
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !39
  ret i32 0, !insn.addr !40
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1280:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !41
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !42
  %3 = add i32 %1, 19935, !insn.addr !43
  %4 = inttoptr i32 %3 to i8*, !insn.addr !43
  %5 = load i8, i8* %4, align 1, !insn.addr !43
  %6 = icmp eq i8 %5, 0, !insn.addr !43
  %7 = icmp eq i1 %6, false, !insn.addr !44
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !44
  br i1 %7, label %dec_label_pc_1302, label %dec_label_pc_12a1, !insn.addr !44

dec_label_pc_12a1:                                ; preds = %dec_label_pc_1280
  %8 = add i32 %1, 19803, !insn.addr !45
  %9 = inttoptr i32 %8 to i32*, !insn.addr !45
  %10 = load i32, i32* %9, align 4, !insn.addr !45
  %11 = icmp eq i32 %10, 0, !insn.addr !46
  br i1 %11, label %dec_label_pc_12be, label %dec_label_pc_12ab, !insn.addr !47

dec_label_pc_12ab:                                ; preds = %dec_label_pc_12a1
  %12 = call i32 @function_1160(), !insn.addr !48
  br label %dec_label_pc_12be, !insn.addr !49

dec_label_pc_12be:                                ; preds = %dec_label_pc_12ab, %dec_label_pc_12a1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !50
  store i8 1, i8* %4, align 1, !insn.addr !51
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !51
  br label %dec_label_pc_1302, !insn.addr !51

dec_label_pc_1302:                                ; preds = %dec_label_pc_12be, %dec_label_pc_1280
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !52

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1310:
  %0 = call i32 @register_tm_clones(), !insn.addr !53
  ret i32 %0, !insn.addr !53
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1319:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !54
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_131d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !55
}

define i32 @_Z20test_cpp_member_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1330:
  %stack_var_-36 = alloca i32, align 4
  store i32 1953719636, i32* %stack_var_-36, align 4, !insn.addr !56
  %0 = bitcast i32* %stack_var_-36 to i8*
  %1 = call i32 @strlen(i8* nonnull %0), !insn.addr !57
  %2 = add i32 %1, 4700, !insn.addr !58
  ret i32 %2, !insn.addr !59
}

define i32 @_Z20test_cpp_constructorv(i32* %result) local_unnamed_addr {
dec_label_pc_13b0:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !60
  %ecx.0.reg2mem = alloca i32, !insn.addr !60
  %1 = load i32, i32* %0
  %2 = call i32* @_Znaj(i32 20), !insn.addr !61
  %3 = ptrtoint i32* %2 to i32, !insn.addr !61
  store i32 %3, i32* %ecx.0.reg2mem, !insn.addr !62
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !62
  br label %dec_label_pc_13d0, !insn.addr !62

dec_label_pc_13d0:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13b0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %4 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !63
  store i32 %esi.0.reload, i32* %4, align 4, !insn.addr !63
  %5 = add nuw nsw i32 %esi.0.reload, 10, !insn.addr !64
  %6 = add i32 %ecx.0.reload, 4, !insn.addr !65
  %7 = icmp eq i32 %esi.0.reload, 40, !insn.addr !66
  %8 = icmp eq i1 %7, false, !insn.addr !67
  store i32 %6, i32* %ecx.0.reg2mem, !insn.addr !67
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !67
  br i1 %8, label %dec_label_pc_13d0, label %dec_label_pc_13dd, !insn.addr !67

dec_label_pc_13dd:                                ; preds = %dec_label_pc_13d0
  %9 = add i32 %1, 19648, !insn.addr !68
  %10 = inttoptr i32 %9 to i32*, !insn.addr !68
  %11 = load i32, i32* %10, align 4, !insn.addr !68
  %12 = add i32 %11, 1, !insn.addr !69
  store i32 %12, i32* %10, align 4, !insn.addr !70
  %13 = add i32 %3, 8, !insn.addr !71
  %14 = inttoptr i32 %13 to i32*, !insn.addr !71
  %15 = load i32, i32* %14, align 4, !insn.addr !71
  %16 = add i32 %15, %12, !insn.addr !71
  call void @_ZdaPv(i32* %2, i32* nonnull @0), !insn.addr !72
  %17 = load i32, i32* %10, align 4, !insn.addr !73
  %18 = add i32 %17, -1, !insn.addr !74
  store i32 %18, i32* %10, align 4, !insn.addr !75
  %19 = mul i32 %18, ptrtoint (i64* @global_var_3e8 to i32), !insn.addr !76
  %20 = add i32 %16, %19, !insn.addr !77
  ret i32 %20, !insn.addr !78

; uselistorder directives
  uselistorder i32* %10, { 1, 0, 2, 3 }
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 2, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
}

define i32 @_Z17call_virtual_funcP4Basei(i32* %result, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1420:
  %0 = ptrtoint i32* %arg2 to i32
  ret i32 %0, !insn.addr !79
}

define i32 @_Z21test_cpp_virtual_funcv(i32* %result) local_unnamed_addr {
dec_label_pc_1450:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-8 to i32, !insn.addr !80
  %3 = add i32 %1, 18623, !insn.addr !81
  %4 = add i32 %3, %2, !insn.addr !82
  ret i32 %4, !insn.addr !83
}

define i32 @_Z29test_cpp_multiple_inheritancev(i32* %result) local_unnamed_addr {
dec_label_pc_14b0:
  %0 = alloca i32
  %stack_var_-24 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-24 to i32, !insn.addr !84
  %3 = add i32 %2, 18566, !insn.addr !85
  %4 = add i32 %3, %1, !insn.addr !86
  ret i32 %4, !insn.addr !87
}

define i32 @_Z28test_cpp_diamond_inheritancev(i32* %result) local_unnamed_addr {
dec_label_pc_1510:
  %0 = alloca i32
  %stack_var_-16 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %stack_var_-40 to i32, !insn.addr !88
  %3 = add i32 %1, 18633, !insn.addr !89
  store i32 %3, i32* %stack_var_-16, align 4, !insn.addr !90
  %4 = add i32 %1, 18605, !insn.addr !91
  %5 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !92
  store i32 %5, i32* %stack_var_-40, align 4, !insn.addr !92
  %6 = add i32 %1, 18569, !insn.addr !93
  %7 = inttoptr i32 %6 to i32*, !insn.addr !93
  %8 = load i32, i32* %7, align 4, !insn.addr !93
  %9 = add i32 %2, 12, !insn.addr !94
  %10 = add i32 %9, %8, !insn.addr !94
  %11 = inttoptr i32 %10 to i32*, !insn.addr !94
  store i32 100, i32* %11, align 4, !insn.addr !94
  %12 = load i32, i32* %stack_var_-16, align 4, !insn.addr !95
  %13 = add i32 %4, %12, !insn.addr !96
  ret i32 %13, !insn.addr !97
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1580:
  ret i32 22, !insn.addr !98
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1590:
  ret i32 39, !insn.addr !99
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_15a0:
  ret i32 16, !insn.addr !100
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_15b0:
  ret i32 85, !insn.addr !101
}

define i32 @_Z18test_cpp_exceptionv(i32* %result) local_unnamed_addr {
dec_label_pc_15c0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !102
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @__cxa_allocate_exception(i32 4), !insn.addr !103
  %6 = inttoptr i32 %5 to i32*, !insn.addr !104
  store i32 42, i32* %6, align 4, !insn.addr !104
  %7 = add i32 %4, 18968, !insn.addr !105
  %8 = inttoptr i32 %7 to i32*, !insn.addr !105
  %9 = load i32, i32* %8, align 4, !insn.addr !105
  %10 = call i32 @__cxa_throw(i32 %5, i32 %9, i32 0), !insn.addr !106
  %11 = icmp eq i32 %3, 3, !insn.addr !107
  store i32 100, i32* %eax.0.reg2mem, !insn.addr !108
  br i1 %11, label %dec_label_pc_167c, label %dec_label_pc_1672, !insn.addr !108

dec_label_pc_1672:                                ; preds = %dec_label_pc_15c0
  %12 = icmp eq i32 %3, 2, !insn.addr !109
  %13 = icmp eq i1 %12, false, !insn.addr !110
  store i32 200, i32* %eax.0.reg2mem, !insn.addr !110
  br i1 %13, label %dec_label_pc_169e, label %dec_label_pc_167c, !insn.addr !110

dec_label_pc_167c:                                ; preds = %dec_label_pc_1672, %dec_label_pc_15c0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %14 = mul i32 %1, 2, !insn.addr !111
  %15 = add i32 %2, %14, !insn.addr !112
  %16 = add i32 %15, %eax.0.reload, !insn.addr !113
  %17 = call i32 @__cxa_begin_catch(i32 %10), !insn.addr !114
  %18 = call i32 @__cxa_end_catch(), !insn.addr !115
  ret i32 %16, !insn.addr !116

dec_label_pc_169e:                                ; preds = %dec_label_pc_1672
  %19 = inttoptr i32 %10 to %_Unwind_Exception*, !insn.addr !117
  call void @_Unwind_Resume(%_Unwind_Exception* %19), !insn.addr !118
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !119

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_16b0:
  ret i32 ptrtoint (i32* @global_var_2bf to i32), !insn.addr !120
}

define i32 @_Z13test_cpp_rttiv(i32* %result) local_unnamed_addr {
dec_label_pc_16c0:
  %0 = alloca i32
  %.reg2mem5 = alloca i32, !insn.addr !121
  %esi.0.reg2mem = alloca i32, !insn.addr !121
  %.reg2mem = alloca i32, !insn.addr !121
  %1 = load i32, i32* %0
  %2 = call i32* @_Znwj(i32 4), !insn.addr !122
  %3 = add i32 %1, 18432, !insn.addr !123
  store i32 %3, i32* %2, align 4, !insn.addr !124
  %4 = call i32* @_Znwj(i32 4), !insn.addr !125
  %5 = add i32 %1, 18452, !insn.addr !126
  store i32 %5, i32* %4, align 4, !insn.addr !127
  %6 = load i32, i32* %2, align 4, !insn.addr !128
  %7 = add i32 %6, -4, !insn.addr !129
  %8 = inttoptr i32 %7 to i32*, !insn.addr !129
  %9 = load i32, i32* %8, align 4, !insn.addr !129
  %10 = add i32 %9, 4, !insn.addr !130
  %11 = inttoptr i32 %10 to i32*, !insn.addr !130
  %12 = load i32, i32* %11, align 4, !insn.addr !130
  %13 = add i32 %1, 6541, !insn.addr !131
  %14 = icmp eq i32 %12, %13, !insn.addr !132
  %15 = inttoptr i32 %12 to i8*, !insn.addr !133
  store i32 %5, i32* %.reg2mem, !insn.addr !134
  store i32 10, i32* %esi.0.reg2mem, !insn.addr !134
  br i1 %14, label %dec_label_pc_1741, label %dec_label_pc_1717, !insn.addr !134

dec_label_pc_1717:                                ; preds = %dec_label_pc_16c0
  %16 = load i8, i8* %15, align 1, !insn.addr !135
  %17 = icmp eq i8 %16, 42, !insn.addr !135
  store i32 %5, i32* %.reg2mem, !insn.addr !136
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !136
  br i1 %17, label %dec_label_pc_1741, label %dec_label_pc_171e, !insn.addr !136

dec_label_pc_171e:                                ; preds = %dec_label_pc_1717
  %18 = inttoptr i32 %13 to i8*, !insn.addr !137
  %19 = call i32 @strcmp(i8* nonnull %15, i8* %18), !insn.addr !138
  %20 = icmp eq i32 %19, 0, !insn.addr !139
  %21 = icmp eq i1 %20, false, !insn.addr !140
  %22 = select i1 %21, i32 0, i32 10, !insn.addr !140
  %.pre = load i32, i32* %4, align 4
  store i32 %.pre, i32* %.reg2mem, !insn.addr !141
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !141
  br label %dec_label_pc_1741, !insn.addr !141

dec_label_pc_1741:                                ; preds = %dec_label_pc_16c0, %dec_label_pc_171e, %dec_label_pc_1717
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !142
  %23 = add i32 %.reload, -4, !insn.addr !143
  %24 = inttoptr i32 %23 to i32*, !insn.addr !143
  %25 = load i32, i32* %24, align 4, !insn.addr !143
  %26 = add i32 %25, 4, !insn.addr !144
  %27 = inttoptr i32 %26 to i32*, !insn.addr !144
  %28 = load i32, i32* %27, align 4, !insn.addr !144
  %29 = add i32 %1, 6566, !insn.addr !145
  %30 = icmp eq i32 %28, %29, !insn.addr !146
  br i1 %30, label %dec_label_pc_1777.thread4, label %dec_label_pc_1758, !insn.addr !147

dec_label_pc_1777.thread4:                        ; preds = %dec_label_pc_1741
  %31 = or i32 %esi.0.reload, 20, !insn.addr !148
  store i32 %31, i32* %.reg2mem5
  br label %40

dec_label_pc_1758:                                ; preds = %dec_label_pc_1741
  %32 = inttoptr i32 %28 to i8*, !insn.addr !149
  %33 = load i8, i8* %32, align 1, !insn.addr !149
  %34 = icmp eq i8 %33, 42, !insn.addr !149
  %35 = icmp eq i1 %34, false, !insn.addr !150
  br i1 %35, label %dec_label_pc_1777, label %dec_label_pc_1777.thread, !insn.addr !150

dec_label_pc_1777:                                ; preds = %dec_label_pc_1758
  %36 = inttoptr i32 %29 to i8*, !insn.addr !151
  %37 = call i32 @strcmp(i8* %32, i8* %36), !insn.addr !152
  %38 = icmp eq i32 %37, 0, !insn.addr !153
  %phitmp = icmp eq i1 %38, false
  %39 = or i32 %esi.0.reload, 20, !insn.addr !148
  store i32 %39, i32* %.reg2mem5
  br i1 %phitmp, label %dec_label_pc_1777.thread, label %40

dec_label_pc_1777.thread:                         ; preds = %dec_label_pc_1758, %dec_label_pc_1777
  store i32 %esi.0.reload, i32* %.reg2mem5
  br label %40

; <label>:40:                                     ; preds = %dec_label_pc_1777.thread4, %dec_label_pc_1777, %dec_label_pc_1777.thread
  %41 = ptrtoint i32* %2 to i32, !insn.addr !122
  %42 = ptrtoint i32* %4 to i32, !insn.addr !125
  %.reload6 = load i32, i32* %.reg2mem5
  %43 = add i32 %1, 17912, !insn.addr !154
  %44 = add i32 %1, 17904, !insn.addr !155
  %45 = call i32 @__dynamic_cast(i32 %41, i32 %44, i32 %43, i32 0), !insn.addr !156
  %46 = add nuw nsw i32 %.reload6, 100, !insn.addr !157
  %47 = icmp eq i32 %45, 0, !insn.addr !158
  %48 = select i1 %47, i32 %.reload6, i32 %46, !insn.addr !159
  %49 = add i32 %1, 17924, !insn.addr !160
  %50 = call i32 @__dynamic_cast(i32 %42, i32 %44, i32 %49, i32 0), !insn.addr !161
  %51 = add nuw nsw i32 %48, 200, !insn.addr !162
  %52 = icmp eq i32 %50, 0, !insn.addr !163
  %53 = select i1 %52, i32 %48, i32 %51, !insn.addr !164
  %54 = load i8, i8* %15, align 1, !insn.addr !165
  %55 = icmp eq i8 %54, 42, !insn.addr !165
  %56 = zext i1 %55 to i32, !insn.addr !166
  %57 = add i32 %12, %56, !insn.addr !167
  %58 = inttoptr i32 %57 to i8*, !insn.addr !168
  %59 = call i32 @strlen(i8* %58), !insn.addr !169
  %60 = add i32 %53, %59, !insn.addr !170
  ret i32 %60, !insn.addr !171

; uselistorder directives
  uselistorder i32 %48, { 1, 0 }
  uselistorder i32 %.reload6, { 1, 0 }
  uselistorder i32 %12, { 0, 2, 1 }
  uselistorder i32 %5, { 1, 0, 2 }
  uselistorder i32* %4, { 2, 0, 1 }
  uselistorder i32* %2, { 2, 0, 1 }
  uselistorder i32 %1, { 6, 5, 4, 3, 0, 1, 2 }
  uselistorder i32* %.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %esi.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %.reg2mem5, { 0, 3, 2, 1 }
  uselistorder i32 (i32, i32, i32, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32* (i32)* @_Znwj, { 1, 0, 2 }
  uselistorder label %40, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1777.thread, { 1, 0 }
  uselistorder label %dec_label_pc_1741, { 1, 2, 0 }
}

define i32 @_Z20test_cpp_oo_featuresv(i32* %result) local_unnamed_addr {
dec_label_pc_1810:
  %0 = alloca i32
  %esi.0.reg2mem = alloca i32, !insn.addr !172
  %ecx.0.reg2mem = alloca i32, !insn.addr !172
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-52 = alloca i32, align 4
  %stack_var_-72 = alloca i8*, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 6602, !insn.addr !173
  %3 = inttoptr i32 %2 to i8*, !insn.addr !174
  %4 = call i32 @puts(i8* %3), !insn.addr !175
  store i32 1953719636, i32* %stack_var_-52, align 4, !insn.addr !176
  store i32 0, i32* %stack_var_-40, align 4, !insn.addr !177
  %5 = bitcast i32* %stack_var_-52 to i8*
  %6 = call i32 @strlen(i8* nonnull %5), !insn.addr !178
  %7 = add i32 %1, 6246, !insn.addr !179
  %8 = inttoptr i32 %7 to i8*, !insn.addr !180
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !181
  store i8* inttoptr (i32 20 to i8*), i8** %stack_var_-72, align 4, !insn.addr !182
  %10 = call i32* @_Znaj(i32 20), !insn.addr !183
  %11 = ptrtoint i32* %10 to i32, !insn.addr !183
  store i32 %11, i32* %ecx.0.reg2mem, !insn.addr !184
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !184
  br label %dec_label_pc_18b0, !insn.addr !184

dec_label_pc_18b0:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_1810
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %12 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !185
  store i32 %esi.0.reload, i32* %12, align 4, !insn.addr !185
  %13 = add nuw nsw i32 %esi.0.reload, 10, !insn.addr !186
  %14 = add i32 %ecx.0.reload, 4, !insn.addr !187
  %15 = icmp eq i32 %esi.0.reload, 40, !insn.addr !188
  %16 = icmp eq i1 %15, false, !insn.addr !189
  store i32 %14, i32* %ecx.0.reg2mem, !insn.addr !189
  store i32 %13, i32* %esi.0.reg2mem, !insn.addr !189
  br i1 %16, label %dec_label_pc_18b0, label %dec_label_pc_18bd, !insn.addr !189

dec_label_pc_18bd:                                ; preds = %dec_label_pc_18b0
  %17 = ptrtoint i8** %stack_var_-72 to i32, !insn.addr !190
  %18 = add i32 %1, 18525, !insn.addr !191
  %19 = inttoptr i32 %18 to i32*, !insn.addr !191
  %20 = load i32, i32* %19, align 4, !insn.addr !191
  %21 = add i32 %20, 1, !insn.addr !192
  store i32 %21, i32* %19, align 4, !insn.addr !193
  %22 = bitcast i32* %10 to i8*, !insn.addr !194
  store i8* %22, i8** %stack_var_-72, align 4, !insn.addr !194
  call void @_ZdaPv(i32* %10, i32* nonnull @0), !insn.addr !195
  %23 = load i32, i32* %19, align 4, !insn.addr !196
  %24 = add i32 %23, -1, !insn.addr !197
  store i32 %24, i32* %19, align 4, !insn.addr !198
  %25 = add i32 %1, 6276, !insn.addr !199
  %26 = inttoptr i32 %25 to i8*, !insn.addr !200
  store i8* %26, i8** %stack_var_-72, align 4, !insn.addr !200
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !201
  store i32 3, i32* %stack_var_-52, align 4, !insn.addr !202
  %28 = add i32 %1, 6304, !insn.addr !203
  %29 = inttoptr i32 %28 to i8*, !insn.addr !204
  store i8* %29, i8** %stack_var_-72, align 4, !insn.addr !204
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !205
  store i32 100, i32* %stack_var_-52, align 4, !insn.addr !206
  %31 = add i32 %1, 6332, !insn.addr !207
  %32 = inttoptr i32 %31 to i8*, !insn.addr !208
  store i8* %32, i8** %stack_var_-72, align 4, !insn.addr !208
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !209
  %34 = add i32 %1, 17865, !insn.addr !210
  store i32 %34, i32* %stack_var_-40, align 4, !insn.addr !211
  %35 = bitcast i32* %stack_var_-40 to i8*
  store i8* %35, i8** %stack_var_-72, align 4, !insn.addr !212
  %36 = add i32 %1, 17801, !insn.addr !213
  %37 = inttoptr i32 %36 to i32*, !insn.addr !213
  %38 = load i32, i32* %37, align 4, !insn.addr !213
  %39 = add i32 %17, 20, !insn.addr !214
  %40 = add i32 %39, %38, !insn.addr !214
  %41 = inttoptr i32 %40 to i32*, !insn.addr !214
  store i32 100, i32* %41, align 4, !insn.addr !214
  %42 = add i32 %1, 6360, !insn.addr !215
  %43 = inttoptr i32 %42 to i8*, !insn.addr !216
  store i8* %43, i8** %stack_var_-72, align 4, !insn.addr !216
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !217
  %45 = add i32 %1, 6389, !insn.addr !218
  %46 = inttoptr i32 %45 to i8*, !insn.addr !219
  store i8* %46, i8** %stack_var_-72, align 4, !insn.addr !219
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !220
  %48 = add i32 %1, 6417, !insn.addr !221
  %49 = inttoptr i32 %48 to i8*, !insn.addr !222
  store i8* %49, i8** %stack_var_-72, align 4, !insn.addr !222
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !223
  %51 = add i32 %1, 6445, !insn.addr !224
  %52 = inttoptr i32 %51 to i8*, !insn.addr !225
  store i8* %52, i8** %stack_var_-72, align 4, !insn.addr !225
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !226
  %54 = add i32 %1, 6473, !insn.addr !227
  %55 = inttoptr i32 %54 to i8*, !insn.addr !228
  store i8* %55, i8** %stack_var_-72, align 4, !insn.addr !228
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !229
  %57 = call i32 @_Z18test_cpp_exceptionv(i32* nonnull @0), !insn.addr !230
  %58 = add i32 %1, 6501, !insn.addr !231
  %59 = inttoptr i32 %58 to i8*, !insn.addr !232
  store i8* %59, i8** %stack_var_-72, align 4, !insn.addr !232
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !233
  %61 = add i32 %1, 6530, !insn.addr !234
  %62 = inttoptr i32 %61 to i8*, !insn.addr !235
  store i8* %62, i8** %stack_var_-72, align 4, !insn.addr !235
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !236
  %64 = call i32 @_Z13test_cpp_rttiv(i32* nonnull @0), !insn.addr !237
  %65 = add i32 %1, 6559, !insn.addr !238
  %66 = inttoptr i32 %65 to i8*, !insn.addr !239
  store i8* %66, i8** %stack_var_-72, align 4, !insn.addr !239
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !240
  ret i32 %67, !insn.addr !241

; uselistorder directives
  uselistorder i32* %19, { 1, 0, 2, 3 }
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 2, 0 }
  uselistorder i32 %1, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i8** %stack_var_-72, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32* %stack_var_-52, { 1, 2, 0, 3 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 3, { 1, 0 }
  uselistorder void (i32*, i32*)* @_ZdaPv, { 1, 0, 2 }
  uselistorder i32* (i32)* @_Znaj, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1ab0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = inttoptr i32 %1 to i32*, !insn.addr !242
  %3 = call i32 @_Z20test_cpp_oo_featuresv(i32* %2), !insn.addr !242
  ret i32 0, !insn.addr !243
}

define i32 @_ZN4Base12virtual_funcEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ad0:
  %0 = add i32 %arg1, 1, !insn.addr !244
  ret i32 %0, !insn.addr !245
}

define i32 @_ZN7Derived12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ae0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !246
  %2 = inttoptr i32 %1 to i32*, !insn.addr !246
  %3 = load i32, i32* %2, align 4, !insn.addr !246
  %4 = mul i32 %3, %arg2, !insn.addr !247
  ret i32 %4, !insn.addr !248
}

define i32 @_ZN4BaseD2Ev() local_unnamed_addr {
dec_label_pc_1af0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !249
}

define i32 @_ZN12MultiDerivedD2Ev() local_unnamed_addr {
dec_label_pc_1b00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !250
}

define i32 @_ZN14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !251
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = sub i32 %arg1, %arg2, !insn.addr !252
  %1 = xor i32 %arg2, %arg1, !insn.addr !252
  %2 = xor i32 %0, %arg1, !insn.addr !252
  %3 = and i32 %2, %1, !insn.addr !252
  %4 = icmp slt i32 %3, 0, !insn.addr !252
  %5 = icmp eq i32 %0, 0, !insn.addr !252
  %6 = icmp slt i32 %0, 0, !insn.addr !252
  %7 = icmp eq i1 %6, %4, !insn.addr !253
  %8 = icmp eq i1 %5, false, !insn.addr !253
  %9 = icmp eq i1 %7, %8, !insn.addr !253
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !253
  ret i32 %10, !insn.addr !254

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 3, 0, 1, 2 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1b30:
  %cf.0.reg2mem = alloca i1, !insn.addr !255
  %zf.0.reg2mem = alloca i1, !insn.addr !255
  %0 = fcmp ogt double %arg1, %arg2, !insn.addr !256
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !256
  store i1 false, i1* %cf.0.reg2mem, !insn.addr !256
  br i1 %0, label %5, label %1, !insn.addr !256

; <label>:1:                                      ; preds = %dec_label_pc_1b30
  %2 = fcmp olt double %arg1, %arg2, !insn.addr !256
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !256
  store i1 true, i1* %cf.0.reg2mem, !insn.addr !256
  br i1 %2, label %5, label %3, !insn.addr !256

; <label>:3:                                      ; preds = %1
  %4 = fcmp une double %arg1, %arg2, !insn.addr !256
  store i1 true, i1* %zf.0.reg2mem, !insn.addr !256
  store i1 %4, i1* %cf.0.reg2mem, !insn.addr !256
  br label %5, !insn.addr !256

; <label>:5:                                      ; preds = %1, %dec_label_pc_1b30, %3
  %cf.0.reload = load i1, i1* %cf.0.reg2mem
  %zf.0.reload = load i1, i1* %zf.0.reg2mem
  %6 = or i1 %zf.0.reload, %cf.0.reload, !insn.addr !257
  %.v = select i1 %6, double %arg2, double %arg1
  ret double %.v, !insn.addr !258

; uselistorder directives
  uselistorder i1* %zf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1* %cf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 true, { 1, 0 }
  uselistorder label %5, { 2, 0, 1 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1b50:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !259
  %1 = load i32, i32* %arg2, align 4, !insn.addr !260
  store i32 %1, i32* %arg1, align 4, !insn.addr !261
  store i32 %0, i32* %arg2, align 4, !insn.addr !262
  ret void, !insn.addr !263
}

define i32 @_ZN9ContainerIiEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1b70:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !264
  %2 = inttoptr i32 %1 to i32*, !insn.addr !264
  store i32 0, i32* %2, align 4, !insn.addr !264
  ret i32 %0, !insn.addr !265

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIiE4pushEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !266
  %2 = inttoptr i32 %1 to i32*, !insn.addr !266
  %3 = load i32, i32* %2, align 4, !insn.addr !266
  %4 = icmp sgt i32 %3, 9, !insn.addr !267
  br i1 %4, label %dec_label_pc_1b9a, label %dec_label_pc_1b8d, !insn.addr !267

dec_label_pc_1b8d:                                ; preds = %dec_label_pc_1b80
  %5 = add i32 %3, 1, !insn.addr !268
  store i32 %5, i32* %2, align 4, !insn.addr !269
  %6 = mul i32 %3, 4, !insn.addr !270
  %7 = add i32 %6, %0, !insn.addr !270
  %8 = inttoptr i32 %7 to i32*, !insn.addr !270
  store i32 %arg2, i32* %8, align 4, !insn.addr !270
  br label %dec_label_pc_1b9a, !insn.addr !270

dec_label_pc_1b9a:                                ; preds = %dec_label_pc_1b8d, %dec_label_pc_1b80
  ret i32 %0, !insn.addr !271

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ba0:
  %eax.0.reg2mem = alloca i32, !insn.addr !272
  %0 = icmp slt i32 %arg2, 0, !insn.addr !273
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !274
  br i1 %0, label %dec_label_pc_1bb6, label %dec_label_pc_1baa, !insn.addr !274

dec_label_pc_1baa:                                ; preds = %dec_label_pc_1ba0
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 40, !insn.addr !275
  %3 = inttoptr i32 %2 to i32*, !insn.addr !275
  %4 = load i32, i32* %3, align 4, !insn.addr !275
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !276
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !276
  br i1 %5, label %dec_label_pc_1bb3, label %dec_label_pc_1bb6, !insn.addr !276

dec_label_pc_1bb3:                                ; preds = %dec_label_pc_1baa
  %6 = mul i32 %arg2, 4, !insn.addr !277
  %7 = add i32 %6, %1, !insn.addr !277
  %8 = inttoptr i32 %7 to i32*, !insn.addr !277
  %9 = load i32, i32* %8, align 4, !insn.addr !277
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !277
  br label %dec_label_pc_1bb6, !insn.addr !277

dec_label_pc_1bb6:                                ; preds = %dec_label_pc_1baa, %dec_label_pc_1bb3, %dec_label_pc_1ba0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !278

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder label %dec_label_pc_1bb6, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_1bc0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !279
  %2 = inttoptr i32 %1 to i32*, !insn.addr !279
  %3 = load i32, i32* %2, align 4, !insn.addr !279
  ret i32 %3, !insn.addr !280
}

define i32 @_ZN9ContainerIdEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1bd0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !281
  %2 = inttoptr i32 %1 to i32*, !insn.addr !281
  store i32 0, i32* %2, align 4, !insn.addr !281
  ret i32 %0, !insn.addr !282

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 0, { 13, 0, 1, 14, 15, 16, 17, 18, 5, 2, 12, 19, 8, 20, 7, 21, 10, 22, 3, 9, 4, 23, 6, 11 }
}

define x86_fp80 @_ZN9ContainerIdE4pushEd(i32* %result, double %arg2) local_unnamed_addr {
dec_label_pc_1be0:
  %st7.0.reg2mem = alloca x86_fp80, !insn.addr !283
  %0 = ptrtoint i32* %result to i32
  %1 = fpext double %arg2 to x86_fp80, !insn.addr !283
  %2 = add i32 %0, 80, !insn.addr !284
  %3 = inttoptr i32 %2 to i32*, !insn.addr !284
  %4 = load i32, i32* %3, align 4, !insn.addr !284
  %5 = icmp sgt i32 %4, 9, !insn.addr !285
  store x86_fp80 %1, x86_fp80* %st7.0.reg2mem, !insn.addr !285
  br i1 %5, label %dec_label_pc_1bfb, label %dec_label_pc_1bf0, !insn.addr !285

dec_label_pc_1bf0:                                ; preds = %dec_label_pc_1be0
  %6 = add i32 %4, 1, !insn.addr !286
  store i32 %6, i32* %3, align 4, !insn.addr !287
  %7 = mul i32 %4, 8, !insn.addr !288
  %8 = add i32 %7, %0, !insn.addr !288
  %9 = inttoptr i32 %8 to double*, !insn.addr !288
  store double %arg2, double* %9, align 4, !insn.addr !288
  store x86_fp80 0xK00000000000000000000, x86_fp80* %st7.0.reg2mem, !insn.addr !289
  br label %dec_label_pc_1bfb, !insn.addr !289

dec_label_pc_1bfb:                                ; preds = %dec_label_pc_1bf0, %dec_label_pc_1be0
  %st7.0.reload = load x86_fp80, x86_fp80* %st7.0.reg2mem
  ret x86_fp80 %st7.0.reload, !insn.addr !290
}

define i32 @_ZNK9ContainerIdE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c00:
  ret i32 %arg2, !insn.addr !291
}

define i32 @_ZNK9ContainerIdE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_1c20:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !292
  %2 = inttoptr i32 %1 to i32*, !insn.addr !292
  %3 = load i32, i32* %2, align 4, !insn.addr !292
  ret i32 %3, !insn.addr !293
}

define i32 @_ZNK4Base7getNameEv(i32* %result) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 5539, !insn.addr !294
  ret i32 %1, !insn.addr !295
}

define i32 @_ZN4BaseD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1c50:
  call void @_ZdlPv(i32* %result), !insn.addr !296
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !297
}

define i32 @_ZNK7Derived7getNameEv(i32* %result) local_unnamed_addr {
dec_label_pc_1c80:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 5464, !insn.addr !298
  ret i32 %1, !insn.addr !299
}

define i32 @_ZN7DerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1ca0:
  call void @_ZdlPv(i32* %result), !insn.addr !300
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !301
}

define i32 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_1cd0:
  ret i32 30, !insn.addr !302
}

define i32 @_ZN12MultiDerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1ce0:
  call void @_ZdlPv(i32* %result), !insn.addr !303
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !304
}

define i32 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1d10:
  ret i32 40, !insn.addr !305
}

define i32 @_ZThn8_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1d20:
  ret i32 40, !insn.addr !306

; uselistorder directives
  uselistorder i32 40, { 0, 1, 4, 5, 6, 7, 2, 3 }
}

define i32 @_ZThn8_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1d30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !307
}

define i32 @_ZThn8_N12MultiDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1d40:
  %0 = add i32 %arg2, -8, !insn.addr !308
  %1 = inttoptr i32 %0 to i32*, !insn.addr !309
  call void @_ZdlPv(i32* %1), !insn.addr !309
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !310
}

define i32 @_ZN5BaseA5funcAEv() local_unnamed_addr {
dec_label_pc_1d70:
  ret i32 10, !insn.addr !311

; uselistorder directives
  uselistorder i32 10, { 1, 3, 2, 0, 4 }
}

define i32 @_ZN5BaseAD2Ev() local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !312
}

define i32 @_ZN5BaseAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1d90:
  call void @_ZdlPv(i32* %result), !insn.addr !313
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !314
}

define i32 @_ZN5BaseB5funcBEv() local_unnamed_addr {
dec_label_pc_1dc0:
  ret i32 20, !insn.addr !315

; uselistorder directives
  uselistorder i32 20, { 0, 5, 2, 3, 6, 1, 4 }
}

define i32 @_ZN5BaseBD2Ev() local_unnamed_addr {
dec_label_pc_1dd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !316
}

define i32 @_ZN5BaseBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1de0:
  call void @_ZdlPv(i32* %result), !insn.addr !317
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !318
}

define i32 @_ZN7MiddleA4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !319
  %2 = add i32 %1, -12, !insn.addr !320
  %3 = inttoptr i32 %2 to i32*, !insn.addr !320
  %4 = load i32, i32* %3, align 4, !insn.addr !320
  %5 = add i32 %0, 4, !insn.addr !321
  %6 = add i32 %5, %4, !insn.addr !321
  %7 = inttoptr i32 %6 to i32*, !insn.addr !321
  %8 = load i32, i32* %7, align 4, !insn.addr !321
  %9 = add i32 %8, 150, !insn.addr !321
  ret i32 %9, !insn.addr !322
}

define i32 @_ZN7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_1e30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !323
}

define i32 @_ZN7MiddleAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1e40:
  call void @_ZdlPv(i32* %result), !insn.addr !324
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !325
}

define i32 @_ZTv0_n12_N7MiddleA4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e70:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !326
  %1 = load i32, i32* %0, align 4, !insn.addr !326
  %2 = add i32 %1, -12, !insn.addr !327
  %3 = inttoptr i32 %2 to i32*, !insn.addr !327
  %4 = load i32, i32* %3, align 4, !insn.addr !327
  %5 = add i32 %4, %arg1, !insn.addr !328
  %6 = inttoptr i32 %5 to i32*, !insn.addr !329
  %7 = load i32, i32* %6, align 4, !insn.addr !329
  %8 = add i32 %7, -12, !insn.addr !330
  %9 = inttoptr i32 %8 to i32*, !insn.addr !330
  %10 = load i32, i32* %9, align 4, !insn.addr !330
  %11 = add i32 %5, 4, !insn.addr !331
  %12 = add i32 %11, %10, !insn.addr !331
  %13 = inttoptr i32 %12 to i32*, !insn.addr !331
  %14 = load i32, i32* %13, align 4, !insn.addr !331
  %15 = add i32 %14, 150, !insn.addr !331
  ret i32 %15, !insn.addr !332
}

define i32 @_ZTv0_n16_N7MiddleAD1Ev() local_unnamed_addr {
dec_label_pc_1e90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !333
}

define i32 @_ZTv0_n16_N7MiddleAD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ea0:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !334
  %1 = load i32, i32* %0, align 4, !insn.addr !334
  %2 = add i32 %1, -16, !insn.addr !335
  %3 = inttoptr i32 %2 to i32*, !insn.addr !335
  %4 = load i32, i32* %3, align 4, !insn.addr !335
  %5 = add i32 %4, %arg2, !insn.addr !335
  %6 = inttoptr i32 %5 to i32*, !insn.addr !336
  call void @_ZdlPv(i32* %6), !insn.addr !336
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !337
}

define i32 @_ZN7MiddleB4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1ed0:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !338
  %2 = add i32 %1, -12, !insn.addr !339
  %3 = inttoptr i32 %2 to i32*, !insn.addr !339
  %4 = load i32, i32* %3, align 4, !insn.addr !339
  %5 = add i32 %0, 4, !insn.addr !340
  %6 = add i32 %5, %4, !insn.addr !340
  %7 = inttoptr i32 %6 to i32*, !insn.addr !340
  %8 = load i32, i32* %7, align 4, !insn.addr !340
  %9 = add i32 %8, 200, !insn.addr !340
  ret i32 %9, !insn.addr !341
}

define i32 @_ZN7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !342
}

define i32 @_ZN7MiddleBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1f00:
  call void @_ZdlPv(i32* %result), !insn.addr !343
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !344
}

define i32 @_ZTv0_n12_N7MiddleB4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f30:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !345
  %1 = load i32, i32* %0, align 4, !insn.addr !345
  %2 = add i32 %1, -12, !insn.addr !346
  %3 = inttoptr i32 %2 to i32*, !insn.addr !346
  %4 = load i32, i32* %3, align 4, !insn.addr !346
  %5 = add i32 %4, %arg1, !insn.addr !347
  %6 = inttoptr i32 %5 to i32*, !insn.addr !348
  %7 = load i32, i32* %6, align 4, !insn.addr !348
  %8 = add i32 %7, -12, !insn.addr !349
  %9 = inttoptr i32 %8 to i32*, !insn.addr !349
  %10 = load i32, i32* %9, align 4, !insn.addr !349
  %11 = add i32 %5, 4, !insn.addr !350
  %12 = add i32 %11, %10, !insn.addr !350
  %13 = inttoptr i32 %12 to i32*, !insn.addr !350
  %14 = load i32, i32* %13, align 4, !insn.addr !350
  %15 = add i32 %14, 200, !insn.addr !350
  ret i32 %15, !insn.addr !351

; uselistorder directives
  uselistorder i32 200, { 1, 2, 3, 0 }
}

define i32 @_ZTv0_n16_N7MiddleBD1Ev() local_unnamed_addr {
dec_label_pc_1f50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !352
}

define i32 @_ZTv0_n16_N7MiddleBD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f60:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !353
  %1 = load i32, i32* %0, align 4, !insn.addr !353
  %2 = add i32 %1, -16, !insn.addr !354
  %3 = inttoptr i32 %2 to i32*, !insn.addr !354
  %4 = load i32, i32* %3, align 4, !insn.addr !354
  %5 = add i32 %4, %arg2, !insn.addr !354
  %6 = inttoptr i32 %5 to i32*, !insn.addr !355
  call void @_ZdlPv(i32* %6), !insn.addr !355
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !356
}

define i32 @_ZN14DiamondDerived4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1f90:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !357
  %2 = add i32 %1, -12, !insn.addr !358
  %3 = inttoptr i32 %2 to i32*, !insn.addr !358
  %4 = load i32, i32* %3, align 4, !insn.addr !358
  %5 = add i32 %0, 4, !insn.addr !359
  %6 = add i32 %5, %4, !insn.addr !359
  %7 = inttoptr i32 %6 to i32*, !insn.addr !359
  %8 = load i32, i32* %7, align 4, !insn.addr !359
  %9 = add i32 %8, 250, !insn.addr !359
  ret i32 %9, !insn.addr !360
}

define i32 @_ZN14DiamondDerivedD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1fb0:
  call void @_ZdlPv(i32* %result), !insn.addr !361
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !362
}

define i32 @_ZThn8_N14DiamondDerived4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1fe0:
  %0 = add i32 %arg1, -8, !insn.addr !363
  %1 = inttoptr i32 %0 to i32*, !insn.addr !363
  %2 = load i32, i32* %1, align 4, !insn.addr !363
  %3 = add i32 %2, -12, !insn.addr !364
  %4 = inttoptr i32 %3 to i32*, !insn.addr !364
  %5 = load i32, i32* %4, align 4, !insn.addr !364
  %6 = add i32 %arg1, -4, !insn.addr !365
  %7 = add i32 %6, %5, !insn.addr !365
  %8 = inttoptr i32 %7 to i32*, !insn.addr !365
  %9 = load i32, i32* %8, align 4, !insn.addr !365
  %10 = add i32 %9, 250, !insn.addr !365
  ret i32 %10, !insn.addr !366

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @_ZThn8_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !367
}

define i32 @_ZThn8_N14DiamondDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2010:
  %0 = add i32 %arg2, -8, !insn.addr !368
  %1 = inttoptr i32 %0 to i32*, !insn.addr !369
  call void @_ZdlPv(i32* %1), !insn.addr !369
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !370
}

define i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_2040:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !371
  %1 = load i32, i32* %0, align 4, !insn.addr !371
  %2 = add i32 %1, -12, !insn.addr !372
  %3 = inttoptr i32 %2 to i32*, !insn.addr !372
  %4 = load i32, i32* %3, align 4, !insn.addr !372
  %5 = add i32 %4, %arg1, !insn.addr !373
  %6 = inttoptr i32 %5 to i32*, !insn.addr !374
  %7 = load i32, i32* %6, align 4, !insn.addr !374
  %8 = add i32 %7, -12, !insn.addr !375
  %9 = inttoptr i32 %8 to i32*, !insn.addr !375
  %10 = load i32, i32* %9, align 4, !insn.addr !375
  %11 = add i32 %5, 4, !insn.addr !376
  %12 = add i32 %11, %10, !insn.addr !376
  %13 = inttoptr i32 %12 to i32*, !insn.addr !376
  %14 = load i32, i32* %13, align 4, !insn.addr !376
  %15 = add i32 %14, 250, !insn.addr !376
  ret i32 %15, !insn.addr !377

; uselistorder directives
  uselistorder i32 4, { 5, 6, 7, 8, 9, 10, 0, 1, 11, 12, 13, 14, 2, 3, 4, 15 }
}

define i32 @_ZTv0_n16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_2060:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !378
}

define i32 @_ZTv0_n16_N14DiamondDerivedD0Ev(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2070:
  %0 = inttoptr i32 %arg2 to i32*, !insn.addr !379
  %1 = load i32, i32* %0, align 4, !insn.addr !379
  %2 = add i32 %1, -16, !insn.addr !380
  %3 = inttoptr i32 %2 to i32*, !insn.addr !380
  %4 = load i32, i32* %3, align 4, !insn.addr !380
  %5 = add i32 %4, %arg2, !insn.addr !380
  %6 = inttoptr i32 %5 to i32*, !insn.addr !381
  call void @_ZdlPv(i32* %6), !insn.addr !381
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !382
}

define i32 @_ZN11VirtualBase4funcEv() local_unnamed_addr {
dec_label_pc_20a0:
  ret i32 100, !insn.addr !383

; uselistorder directives
  uselistorder i32 100, { 1, 3, 2, 4, 0, 5 }
}

define i32 @_ZN11VirtualBaseD2Ev() local_unnamed_addr {
dec_label_pc_20b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !384
}

define i32 @_ZN11VirtualBaseD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_20c0:
  call void @_ZdlPv(i32* %result), !insn.addr !385
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !386
}

define i32 @_ZN12RTTIDerivedAD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_20f0:
  call void @_ZdlPv(i32* %result), !insn.addr !387
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !388
}

define i32 @_ZNK12RTTIDerivedA7getTypeEv() local_unnamed_addr {
dec_label_pc_2120:
  ret i32 1, !insn.addr !389
}

define i32 @_ZN8RTTIBaseD2Ev() local_unnamed_addr {
dec_label_pc_2130:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !390
}

define i32 @_ZN12RTTIDerivedBD0Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_2140:
  call void @_ZdlPv(i32* %result), !insn.addr !391
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !392

; uselistorder directives
  uselistorder void (i32*)* @_ZdlPv, { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 16 }
}

define i32 @_ZNK12RTTIDerivedB7getTypeEv() local_unnamed_addr {
dec_label_pc_2170:
  ret i32 2, !insn.addr !393

; uselistorder directives
  uselistorder i32 2, { 1, 0, 2 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2180:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !394
  %ebx.0.reg2mem = alloca i32, !insn.addr !394
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !395
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e77 to i32), i32 -872), !insn.addr !396
  %4 = inttoptr i32 %3 to i32*, !insn.addr !396
  %5 = load i32, i32* %4, align 4, !insn.addr !396
  %6 = icmp eq i32 %5, -1, !insn.addr !397
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !398
  store i32 -1, i32* %merge.reg2mem, !insn.addr !398
  br i1 %6, label %dec_label_pc_21bd, label %dec_label_pc_21b0, !insn.addr !398

dec_label_pc_21b0:                                ; preds = %dec_label_pc_2180, %dec_label_pc_21b0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !399
  %8 = inttoptr i32 %7 to i32*, !insn.addr !399
  %9 = load i32, i32* %8, align 4, !insn.addr !399
  %10 = icmp eq i32 %9, -1, !insn.addr !400
  %11 = icmp eq i1 %10, false, !insn.addr !401
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !401
  store i32 %9, i32* %merge.reg2mem, !insn.addr !401
  br i1 %11, label %dec_label_pc_21b0, label %dec_label_pc_21bd, !insn.addr !401

dec_label_pc_21bd:                                ; preds = %dec_label_pc_21b0, %dec_label_pc_2180
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !402

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 11, 1, 0, 2, 4, 5, 3, 6, 7, 8, 9, 10 }
  uselistorder i32 -4, { 3, 0, 1, 2 }
  uselistorder i32 -1, { 1, 0, 2, 3, 4 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 5, 4, 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_21b0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_21cc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !403
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !404
  ret i32 %3, !insn.addr !405

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 33, 35, 34, 32, 31, 49, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 59, 36, 37, 60, 39, 38, 20, 19, 18, 61, 17, 62, 50, 52, 51, 41, 40, 16, 44, 43, 42, 15, 45, 14, 54, 53, 13, 55, 12, 56, 11, 63, 47, 46, 10, 57, 9, 8, 48, 7, 6, 5, 4, 58, 3, 2, 1, 0 }
}

declare i32* @_Znwj(i32) local_unnamed_addr

declare i32 @__cxa_begin_catch(i32) local_unnamed_addr

declare i32 @__cxa_allocate_exception(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__cxa_atexit(void (i32*)*, i32*, i32*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32* @_Znaj(i32) local_unnamed_addr

declare void @_ZdlPv(i32*) local_unnamed_addr

declare i32 @__dynamic_cast(i32, i32, i32, i32) local_unnamed_addr

declare void @_ZdaPv(i32*, i32*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__cxa_rethrow() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @__cxa_end_catch() local_unnamed_addr

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
!23 = !{i64 4482}
!24 = !{i64 4489}
!25 = !{i64 4497}
!26 = !{i64 4503}
!27 = !{i64 4511}
!28 = !{i64 4512}
!29 = !{i64 4522}
!30 = !{i64 4543}
!31 = !{i64 4560}
!32 = !{i64 4566}
!33 = !{i64 4571}
!34 = !{i64 4575}
!35 = !{i64 4579}
!36 = !{i64 4592}
!37 = !{i64 4609}
!38 = !{i64 4648}
!39 = !{i64 4656}
!40 = !{i64 4726}
!41 = !{i64 4736}
!42 = !{i64 4744}
!43 = !{i64 4760}
!44 = !{i64 4767}
!45 = !{i64 4769}
!46 = !{i64 4775}
!47 = !{i64 4777}
!48 = !{i64 4790}
!49 = !{i64 4795}
!50 = !{i64 4854}
!51 = !{i64 4859}
!52 = !{i64 4873}
!53 = !{i64 4884}
!54 = !{i64 4892}
!55 = !{i64 4896}
!56 = !{i64 4932}
!57 = !{i64 5012}
!58 = !{i64 5017}
!59 = !{i64 5026}
!60 = !{i64 5040}
!61 = !{i64 5064}
!62 = !{i64 5071}
!63 = !{i64 5072}
!64 = !{i64 5074}
!65 = !{i64 5077}
!66 = !{i64 5080}
!67 = !{i64 5083}
!68 = !{i64 5085}
!69 = !{i64 5091}
!70 = !{i64 5094}
!71 = !{i64 5100}
!72 = !{i64 5106}
!73 = !{i64 5111}
!74 = !{i64 5117}
!75 = !{i64 5120}
!76 = !{i64 5126}
!77 = !{i64 5132}
!78 = !{i64 5139}
!79 = !{i64 5188}
!80 = !{i64 5264}
!81 = !{i64 5285}
!82 = !{i64 5287}
!83 = !{i64 5295}
!84 = !{i64 5367}
!85 = !{i64 5378}
!86 = !{i64 5380}
!87 = !{i64 5389}
!88 = !{i64 5403}
!89 = !{i64 5424}
!90 = !{i64 5430}
!91 = !{i64 5434}
!92 = !{i64 5452}
!93 = !{i64 5467}
!94 = !{i64 5470}
!95 = !{i64 5478}
!96 = !{i64 5487}
!97 = !{i64 5495}
!98 = !{i64 5509}
!99 = !{i64 5525}
!100 = !{i64 5541}
!101 = !{i64 5557}
!102 = !{i64 5568}
!103 = !{i64 5594}
!104 = !{i64 5599}
!105 = !{i64 5605}
!106 = !{i64 5626}
!107 = !{i64 5741}
!108 = !{i64 5744}
!109 = !{i64 5751}
!110 = !{i64 5754}
!111 = !{i64 5756}
!112 = !{i64 5763}
!113 = !{i64 5765}
!114 = !{i64 5770}
!115 = !{i64 5775}
!116 = !{i64 5789}
!117 = !{i64 5790}
!118 = !{i64 5793}
!119 = !{i64 5807}
!120 = !{i64 5813}
!121 = !{i64 5824}
!122 = !{i64 5848}
!123 = !{i64 5858}
!124 = !{i64 5864}
!125 = !{i64 5871}
!126 = !{i64 5881}
!127 = !{i64 5887}
!128 = !{i64 5890}
!129 = !{i64 5892}
!130 = !{i64 5895}
!131 = !{i64 5898}
!132 = !{i64 5904}
!133 = !{i64 5906}
!134 = !{i64 5909}
!135 = !{i64 5913}
!136 = !{i64 5916}
!137 = !{i64 5921}
!138 = !{i64 5926}
!139 = !{i64 5936}
!140 = !{i64 5943}
!141 = !{i64 5946}
!142 = !{i64 5953}
!143 = !{i64 5956}
!144 = !{i64 5959}
!145 = !{i64 5962}
!146 = !{i64 5968}
!147 = !{i64 5974}
!148 = !{i64 6009}
!149 = !{i64 5976}
!150 = !{i64 5979}
!151 = !{i64 5992}
!152 = !{i64 5994}
!153 = !{i64 6002}
!154 = !{i64 6017}
!155 = !{i64 6023}
!156 = !{i64 6034}
!157 = !{i64 6046}
!158 = !{i64 6049}
!159 = !{i64 6051}
!160 = !{i64 6054}
!161 = !{i64 6069}
!162 = !{i64 6077}
!163 = !{i64 6083}
!164 = !{i64 6085}
!165 = !{i64 6095}
!166 = !{i64 6098}
!167 = !{i64 6101}
!168 = !{i64 6106}
!169 = !{i64 6107}
!170 = !{i64 6145}
!171 = !{i64 6156}
!172 = !{i64 6160}
!173 = !{i64 6178}
!174 = !{i64 6184}
!175 = !{i64 6187}
!176 = !{i64 6196}
!177 = !{i64 6220}
!178 = !{i64 6276}
!179 = !{i64 6290}
!180 = !{i64 6296}
!181 = !{i64 6299}
!182 = !{i64 6304}
!183 = !{i64 6313}
!184 = !{i64 6318}
!185 = !{i64 6320}
!186 = !{i64 6322}
!187 = !{i64 6325}
!188 = !{i64 6328}
!189 = !{i64 6331}
!190 = !{i64 6171}
!191 = !{i64 6333}
!192 = !{i64 6339}
!193 = !{i64 6342}
!194 = !{i64 6351}
!195 = !{i64 6354}
!196 = !{i64 6359}
!197 = !{i64 6365}
!198 = !{i64 6368}
!199 = !{i64 6386}
!200 = !{i64 6392}
!201 = !{i64 6395}
!202 = !{i64 6420}
!203 = !{i64 6481}
!204 = !{i64 6487}
!205 = !{i64 6490}
!206 = !{i64 6519}
!207 = !{i64 6551}
!208 = !{i64 6557}
!209 = !{i64 6560}
!210 = !{i64 6579}
!211 = !{i64 6585}
!212 = !{i64 6607}
!213 = !{i64 6622}
!214 = !{i64 6625}
!215 = !{i64 6648}
!216 = !{i64 6654}
!217 = !{i64 6657}
!218 = !{i64 6662}
!219 = !{i64 6668}
!220 = !{i64 6679}
!221 = !{i64 6684}
!222 = !{i64 6690}
!223 = !{i64 6701}
!224 = !{i64 6706}
!225 = !{i64 6712}
!226 = !{i64 6723}
!227 = !{i64 6728}
!228 = !{i64 6734}
!229 = !{i64 6745}
!230 = !{i64 6750}
!231 = !{i64 6759}
!232 = !{i64 6765}
!233 = !{i64 6768}
!234 = !{i64 6773}
!235 = !{i64 6779}
!236 = !{i64 6790}
!237 = !{i64 6795}
!238 = !{i64 6804}
!239 = !{i64 6810}
!240 = !{i64 6813}
!241 = !{i64 6824}
!242 = !{i64 6848}
!243 = !{i64 6859}
!244 = !{i64 6868}
!245 = !{i64 6871}
!246 = !{i64 6884}
!247 = !{i64 6887}
!248 = !{i64 6892}
!249 = !{i64 6896}
!250 = !{i64 6912}
!251 = !{i64 6928}
!252 = !{i64 6952}
!253 = !{i64 6954}
!254 = !{i64 6957}
!255 = !{i64 6960}
!256 = !{i64 6968}
!257 = !{i64 6972}
!258 = !{i64 6976}
!259 = !{i64 7001}
!260 = !{i64 7003}
!261 = !{i64 7005}
!262 = !{i64 7007}
!263 = !{i64 7010}
!264 = !{i64 7028}
!265 = !{i64 7035}
!266 = !{i64 7045}
!267 = !{i64 7051}
!268 = !{i64 7057}
!269 = !{i64 7060}
!270 = !{i64 7063}
!271 = !{i64 7067}
!272 = !{i64 7072}
!273 = !{i64 7078}
!274 = !{i64 7080}
!275 = !{i64 7086}
!276 = !{i64 7089}
!277 = !{i64 7091}
!278 = !{i64 7094}
!279 = !{i64 7108}
!280 = !{i64 7111}
!281 = !{i64 7124}
!282 = !{i64 7131}
!283 = !{i64 7136}
!284 = !{i64 7144}
!285 = !{i64 7150}
!286 = !{i64 7152}
!287 = !{i64 7155}
!288 = !{i64 7158}
!289 = !{i64 7161}
!290 = !{i64 7165}
!291 = !{i64 7192}
!292 = !{i64 7204}
!293 = !{i64 7207}
!294 = !{i64 7228}
!295 = !{i64 7234}
!296 = !{i64 7271}
!297 = !{i64 7280}
!298 = !{i64 7308}
!299 = !{i64 7314}
!300 = !{i64 7351}
!301 = !{i64 7360}
!302 = !{i64 7381}
!303 = !{i64 7415}
!304 = !{i64 7424}
!305 = !{i64 7445}
!306 = !{i64 7461}
!307 = !{i64 7472}
!308 = !{i64 7508}
!309 = !{i64 7514}
!310 = !{i64 7523}
!311 = !{i64 7541}
!312 = !{i64 7552}
!313 = !{i64 7591}
!314 = !{i64 7600}
!315 = !{i64 7621}
!316 = !{i64 7632}
!317 = !{i64 7671}
!318 = !{i64 7680}
!319 = !{i64 7700}
!320 = !{i64 7702}
!321 = !{i64 7710}
!322 = !{i64 7714}
!323 = !{i64 7728}
!324 = !{i64 7767}
!325 = !{i64 7776}
!326 = !{i64 7796}
!327 = !{i64 7798}
!328 = !{i64 7801}
!329 = !{i64 7804}
!330 = !{i64 7807}
!331 = !{i64 7815}
!332 = !{i64 7819}
!333 = !{i64 7824}
!334 = !{i64 7860}
!335 = !{i64 7862}
!336 = !{i64 7868}
!337 = !{i64 7877}
!338 = !{i64 7892}
!339 = !{i64 7894}
!340 = !{i64 7902}
!341 = !{i64 7906}
!342 = !{i64 7920}
!343 = !{i64 7959}
!344 = !{i64 7968}
!345 = !{i64 7988}
!346 = !{i64 7990}
!347 = !{i64 7993}
!348 = !{i64 7996}
!349 = !{i64 7999}
!350 = !{i64 8007}
!351 = !{i64 8011}
!352 = !{i64 8016}
!353 = !{i64 8052}
!354 = !{i64 8054}
!355 = !{i64 8060}
!356 = !{i64 8069}
!357 = !{i64 8084}
!358 = !{i64 8086}
!359 = !{i64 8094}
!360 = !{i64 8098}
!361 = !{i64 8135}
!362 = !{i64 8144}
!363 = !{i64 8164}
!364 = !{i64 8167}
!365 = !{i64 8175}
!366 = !{i64 8179}
!367 = !{i64 8192}
!368 = !{i64 8228}
!369 = !{i64 8234}
!370 = !{i64 8243}
!371 = !{i64 8260}
!372 = !{i64 8262}
!373 = !{i64 8265}
!374 = !{i64 8268}
!375 = !{i64 8271}
!376 = !{i64 8279}
!377 = !{i64 8283}
!378 = !{i64 8288}
!379 = !{i64 8324}
!380 = !{i64 8326}
!381 = !{i64 8332}
!382 = !{i64 8341}
!383 = !{i64 8357}
!384 = !{i64 8368}
!385 = !{i64 8407}
!386 = !{i64 8416}
!387 = !{i64 8455}
!388 = !{i64 8464}
!389 = !{i64 8485}
!390 = !{i64 8496}
!391 = !{i64 8535}
!392 = !{i64 8544}
!393 = !{i64 8565}
!394 = !{i64 8576}
!395 = !{i64 8580}
!396 = !{i64 8591}
!397 = !{i64 8597}
!398 = !{i64 8600}
!399 = !{i64 8626}
!400 = !{i64 8632}
!401 = !{i64 8635}
!402 = !{i64 8641}
!403 = !{i64 8660}
!404 = !{i64 8671}
!405 = !{i64 8680}
