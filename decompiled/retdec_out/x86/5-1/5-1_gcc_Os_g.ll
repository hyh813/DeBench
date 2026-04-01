source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_Unwind_Exception = type { i32 }

@global_var_2bf = global i32 0
@global_var_16ba = local_unnamed_addr constant i32 -402429433
@global_var_16d6 = local_unnamed_addr constant i32 2274
@global_var_16f2 = local_unnamed_addr constant i32 -402653184
@global_var_1748 = local_unnamed_addr constant i32 -196769536
@global_var_501 = constant [8 x i8] c"rethrow\00"
@global_var_3fea = local_unnamed_addr constant [8 x i8]* @global_var_501
@global_var_3fd6 = local_unnamed_addr constant i32 540540928
@global_var_3e3f = local_unnamed_addr constant i32 0
@global_var_3e5b = local_unnamed_addr constant i32 -2025716467
@global_var_3e31 = local_unnamed_addr constant i32 -738197504
@global_var_3e4d = local_unnamed_addr constant i32 -2046820389
@global_var_3daf = local_unnamed_addr constant i32 240058368
@global_var_3dcb = local_unnamed_addr constant i32 67945793
@global_var_3d85 = local_unnamed_addr constant i32 0
@global_var_3da1 = local_unnamed_addr constant i32 620756992
@global_var_34ff = constant i32 -1146368
@global_var_3ec3 = local_unnamed_addr constant i32* @global_var_34ff
@global_var_3e93 = local_unnamed_addr constant i32 67945413
@global_var_3e69 = constant i32 1103577542
@global_var_3d8d = local_unnamed_addr constant i32 84754946
@global_var_3d0e = local_unnamed_addr constant i32 778047534
@global_var_3cef = constant i32 -2760704
@global_var_3c9f = local_unnamed_addr constant i32 239403008
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

define void @function_1180(i32* %d) local_unnamed_addr {
dec_label_pc_1180:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_1190(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32* @function_11a0(i32 %size) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32* @_Znwj(i32 %size), !insn.addr !6
  ret i32* %0, !insn.addr !6
}

define i32 @function_11b0() local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i32 @__cxa_begin_catch(), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_11c0(i32 %arg1) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i32 @__cxa_allocate_exception(i32 %arg1), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_11d0(i8* %s) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_11e0(void (i32*)* %func, i32* %arg, i32* %dso_handle) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32 @__cxa_atexit(void (i32*)* %func, i32* %arg, i32* %dso_handle), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_11f0(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = call i32 @_ZdlPvj(i32* %arg1, i32 %arg2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1200(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_1210(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32* @function_1220(i32 %size) local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32* @_Znaj(i32 %size), !insn.addr !14
  ret i32* %0, !insn.addr !14
}

define i8* @function_1230(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !15
  ret i8* %0, !insn.addr !15
}

define void @function_1240() local_unnamed_addr {
dec_label_pc_1240:
  call void @__stack_chk_fail(), !insn.addr !16
  ret void, !insn.addr !16
}

define i32 @function_1250(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 @__dynamic_cast(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define void @function_1260(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_1260:
  %0 = inttoptr i32 %size to i32*, !insn.addr !18
  call void @_ZdaPv(i32* %ptr, i32* %0), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_1270() local_unnamed_addr {
dec_label_pc_1270:
  %0 = call i32 @__cxa_rethrow(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1280(i8* %s) local_unnamed_addr {
dec_label_pc_1280:
  %0 = call i32 @puts(i8* %s), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_1290() local_unnamed_addr {
dec_label_pc_1290:
  %0 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_12a0() local_unnamed_addr {
dec_label_pc_12a0:
  %0 = call i32 @__cxa_end_catch(), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_12b0(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = call i32 @__cxa_throw(i32 %arg1, i32 %arg2, i32 %arg3), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define void @function_12c0(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_12c0:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_12d0:
  %0 = alloca i32
  %edi.3.reg2mem = alloca i32, !insn.addr !25
  %edi.2.reg2mem = alloca i32, !insn.addr !25
  %esp.2.reg2mem = alloca i32, !insn.addr !25
  %eax.2.reg2mem = alloca i32, !insn.addr !25
  %edi.1.reg2mem = alloca i32, !insn.addr !25
  %esp.1.reg2mem = alloca i32, !insn.addr !25
  %eax.1.reg2mem = alloca i32, !insn.addr !25
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-60 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.si(i32 %1), !insn.addr !26
  store i32 4, i32* %stack_var_-60, align 4, !insn.addr !27
  %4 = call i32 @__cxa_allocate_exception(i32 4), !insn.addr !28
  %5 = inttoptr i32 %4 to i32*, !insn.addr !29
  store i32 42, i32* %5, align 4, !insn.addr !29
  %6 = add i32 %1, 19718, !insn.addr !30
  %7 = inttoptr i32 %6 to i32*, !insn.addr !30
  %8 = load i32, i32* %7, align 4, !insn.addr !30
  store i32 %4, i32* %stack_var_-60, align 4, !insn.addr !31
  %9 = ptrtoint i32* %stack_var_-60 to i32, !insn.addr !31
  %10 = call i32 @__cxa_throw(i32 %4, i32 %8, i32 0), !insn.addr !32
  %11 = icmp eq i32 %2, 1, !insn.addr !33
  %12 = icmp eq i1 %11, false, !insn.addr !34
  store i32 %10, i32* %eax.1.reg2mem, !insn.addr !34
  store i32 %9, i32* %esp.1.reg2mem, !insn.addr !34
  store i32 0, i32* %edi.1.reg2mem, !insn.addr !34
  br i1 %12, label %dec_label_pc_1384, label %dec_label_pc_1342, !insn.addr !34

dec_label_pc_1342:                                ; preds = %dec_label_pc_12d0
  store i32 %10, i32* %stack_var_-76, align 4, !insn.addr !35
  %13 = call i32 @__cxa_begin_catch(), !insn.addr !36
  %14 = inttoptr i32 %13 to i32*, !insn.addr !37
  %15 = load i32, i32* %14, align 4, !insn.addr !37
  %16 = call i32 @__cxa_rethrow(), !insn.addr !38
  %17 = call i32 @__cxa_end_catch(), !insn.addr !39
  store i32 %16, i32* %stack_var_-76, align 4, !insn.addr !40
  %18 = call i32 @__cxa_begin_catch(), !insn.addr !41
  %19 = inttoptr i32 %18 to i32*, !insn.addr !42
  %20 = load i32, i32* %19, align 4, !insn.addr !42
  %21 = mul i32 %20, 2, !insn.addr !43
  %22 = add i32 %21, %15, !insn.addr !44
  %23 = call i32 @__cxa_end_catch(), !insn.addr !45
  %24 = call i32 @__cxa_allocate_exception(i32 1), !insn.addr !46
  %25 = add i32 %1, 19326, !insn.addr !47
  store i32 %24, i32* %stack_var_-76, align 4, !insn.addr !48
  %26 = ptrtoint i32* %stack_var_-76 to i32, !insn.addr !48
  %27 = call i32 @__cxa_throw(i32 %24, i32 %25, i32 0), !insn.addr !49
  %28 = icmp eq i32 %1, -19324, !insn.addr !50
  store i32 %27, i32* %eax.2.reg2mem, !insn.addr !51
  store i32 %26, i32* %esp.2.reg2mem, !insn.addr !51
  store i32 %22, i32* %edi.2.reg2mem, !insn.addr !51
  br i1 %28, label %dec_label_pc_138f, label %dec_label_pc_137f, !insn.addr !51

dec_label_pc_137f:                                ; preds = %dec_label_pc_1342
  %29 = icmp eq i32 %25, 3, !insn.addr !52
  store i32 %27, i32* %eax.1.reg2mem, !insn.addr !53
  store i32 %26, i32* %esp.1.reg2mem, !insn.addr !53
  store i32 %22, i32* %edi.1.reg2mem, !insn.addr !53
  br i1 %29, label %dec_label_pc_139f, label %dec_label_pc_1384, !insn.addr !53

dec_label_pc_1384:                                ; preds = %dec_label_pc_12d0, %dec_label_pc_137f
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  %esp.1.reload = load i32, i32* %esp.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %30 = add i32 %esp.1.reload, -16, !insn.addr !54
  %31 = inttoptr i32 %30 to i32*, !insn.addr !54
  store i32 %eax.1.reload, i32* %31, align 4, !insn.addr !54
  call void @_Unwind_Resume(%_Unwind_Exception* bitcast (i32* @0 to %_Unwind_Exception*)), !insn.addr !55
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.2.reg2mem, !insn.addr !55
  store i32 %30, i32* %esp.2.reg2mem, !insn.addr !55
  store i32 %edi.1.reload, i32* %edi.2.reg2mem, !insn.addr !55
  br label %dec_label_pc_138f, !insn.addr !55

dec_label_pc_138f:                                ; preds = %dec_label_pc_1384, %dec_label_pc_1342
  %edi.2.reload = load i32, i32* %edi.2.reg2mem
  %esp.2.reload = load i32, i32* %esp.2.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %32 = add i32 %edi.2.reload, 100, !insn.addr !56
  %33 = add i32 %esp.2.reload, -16, !insn.addr !57
  %34 = inttoptr i32 %33 to i32*, !insn.addr !57
  store i32 %eax.2.reload, i32* %34, align 4, !insn.addr !57
  %35 = call i32 @__cxa_begin_catch(), !insn.addr !58
  store i32 %32, i32* %edi.3.reg2mem, !insn.addr !59
  br label %dec_label_pc_13b0, !insn.addr !59

dec_label_pc_139f:                                ; preds = %dec_label_pc_137f
  %36 = add i32 %22, 200, !insn.addr !60
  %37 = call i32 @__cxa_begin_catch(), !insn.addr !61
  store i32 %36, i32* %edi.3.reg2mem, !insn.addr !61
  br label %dec_label_pc_13b0, !insn.addr !61

dec_label_pc_13b0:                                ; preds = %dec_label_pc_139f, %dec_label_pc_138f
  %edi.3.reload = load i32, i32* %edi.3.reg2mem
  %38 = call i32 @__cxa_end_catch(), !insn.addr !62
  ret i32 %edi.3.reload, !insn.addr !63

; uselistorder directives
  uselistorder i32 %27, { 1, 0 }
  uselistorder i32 %26, { 1, 0 }
  uselistorder i32 %22, { 2, 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i32 %1, { 3, 2, 0, 1 }
  uselistorder i32* %eax.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %esp.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %edi.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %esp.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %edi.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 ()* @__cxa_end_catch, { 2, 0, 1, 3 }
  uselistorder i32 ()* @__cxa_begin_catch, { 3, 0, 1, 2, 4 }
  uselistorder i32 (i32, i32, i32)* @__cxa_throw, { 1, 0, 2 }
  uselistorder i32 (i32)* @__cxa_allocate_exception, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1384, { 1, 0 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_13c2:
  call void @_Z20test_cpp_oo_featuresv(), !insn.addr !64
  ret i32 0, !insn.addr !65
}

define void @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_13d5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !66
  %3 = add i32 %1, 19521, !insn.addr !67
  %4 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !68
  %5 = add i32 %1, 19489, !insn.addr !69
  %6 = add i32 %1, 19481, !insn.addr !70
  %7 = inttoptr i32 %6 to i32*, !insn.addr !70
  %8 = load i32, i32* %7, align 4, !insn.addr !70
  %9 = inttoptr i32 %8 to void (i32*)*, !insn.addr !70
  %10 = inttoptr i32 %3 to i32*, !insn.addr !71
  %11 = inttoptr i32 %5 to i32*, !insn.addr !71
  %12 = call i32 @__cxa_atexit(void (i32*)* %9, i32* %10, i32* %11), !insn.addr !71
  ret void, !insn.addr !72

; uselistorder directives
  uselistorder i32 %1, { 2, 1, 0, 3 }
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1420:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_144c(i32 %2), !insn.addr !73
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 19384, !insn.addr !74
  %6 = inttoptr i32 %5 to i32*, !insn.addr !74
  %7 = load i32, i32* %6, align 4, !insn.addr !74
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !75
  %9 = call i32 @__asm_hlt(), !insn.addr !76
  unreachable, !insn.addr !76

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_144c(i32 %arg1) local_unnamed_addr {
dec_label_pc_144c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !77
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1450:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !78
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1460:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !79
  %3 = add i32 %1, 19379, !insn.addr !80
  ret i32 %3, !insn.addr !81
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_14a0:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !82
  ret i32 0, !insn.addr !83
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_14f0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !84
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !85
  %3 = add i32 %1, 19227, !insn.addr !86
  %4 = inttoptr i32 %3 to i8*, !insn.addr !86
  %5 = load i8, i8* %4, align 1, !insn.addr !86
  %6 = icmp eq i8 %5, 0, !insn.addr !86
  %7 = icmp eq i1 %6, false, !insn.addr !87
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !87
  br i1 %7, label %dec_label_pc_1572, label %dec_label_pc_1511, !insn.addr !87

dec_label_pc_1511:                                ; preds = %dec_label_pc_14f0
  %8 = add i32 %1, 19179, !insn.addr !88
  %9 = inttoptr i32 %8 to i32*, !insn.addr !88
  %10 = load i32, i32* %9, align 4, !insn.addr !88
  %11 = icmp eq i32 %10, 0, !insn.addr !89
  br i1 %11, label %dec_label_pc_152e, label %dec_label_pc_151b, !insn.addr !90

dec_label_pc_151b:                                ; preds = %dec_label_pc_1511
  %12 = add i32 %1, 19207, !insn.addr !91
  %13 = inttoptr i32 %12 to i32*, !insn.addr !91
  %14 = load i32, i32* %13, align 4, !insn.addr !91
  %15 = inttoptr i32 %14 to i32*, !insn.addr !92
  call void @__cxa_finalize(i32* %15), !insn.addr !92
  br label %dec_label_pc_152e, !insn.addr !93

dec_label_pc_152e:                                ; preds = %dec_label_pc_151b, %dec_label_pc_1511
  %16 = call i32 @deregister_tm_clones(), !insn.addr !94
  store i8 1, i8* %4, align 1, !insn.addr !95
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !95
  br label %dec_label_pc_1572, !insn.addr !95

dec_label_pc_1572:                                ; preds = %dec_label_pc_152e, %dec_label_pc_14f0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !96

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1580:
  %0 = call i32 @register_tm_clones(), !insn.addr !97
  ret i32 %0, !insn.addr !97
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1589:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !98
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_158d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !99
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1591:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !100
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !101
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !102
  %4 = add i32 %1, 6771, !insn.addr !103
  %5 = inttoptr i32 %4 to i8*, !insn.addr !104
  %6 = bitcast i32* %stack_var_-48 to i8*
  %7 = call i8* @strncpy(i8* nonnull %6, i8* %5, i32 31), !insn.addr !105
  %8 = call i32 @strlen(i8* nonnull %6), !insn.addr !106
  %9 = add i32 %8, 4700, !insn.addr !107
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !108
  %11 = icmp eq i32 %3, %10, !insn.addr !108
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !109
  br i1 %11, label %dec_label_pc_15ea, label %dec_label_pc_15e5, !insn.addr !109

dec_label_pc_15e5:                                ; preds = %dec_label_pc_1591
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !110
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !110
  br label %dec_label_pc_15ea, !insn.addr !110

dec_label_pc_15ea:                                ; preds = %dec_label_pc_15e5, %dec_label_pc_1591
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !111
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_15f1:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !112
  %1 = add i32 %0, 18982, !insn.addr !113
  %2 = inttoptr i32 %1 to i32*, !insn.addr !113
  %3 = load i32, i32* %2, align 4, !insn.addr !113
  %4 = mul i32 %3, 1001, !insn.addr !113
  %5 = add i32 %4, 21, !insn.addr !114
  ret i32 %5, !insn.addr !115
}

define i32 @_Z17call_virtual_funcP4Basei(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_160d:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !116
  %1 = inttoptr i32 %0 to i32*, !insn.addr !117
  %2 = load i32, i32* %1, align 4, !insn.addr !117
  ret i32 %2, !insn.addr !118
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1621:
  %eax.0.reg2mem = alloca i32, !insn.addr !119
  %derived_-28 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !120
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !121
  %2 = add i32 %0, 17966, !insn.addr !122
  %3 = add i32 %0, 17990, !insn.addr !123
  store i32 %3, i32* %stack_var_-24, align 4, !insn.addr !124
  store i32 %2, i32* %derived_-28, align 4, !insn.addr !125
  %4 = call i32 @_Z17call_virtual_funcP4Basei(i32* nonnull %derived_-28, i32 5), !insn.addr !126
  %5 = call i32 @_Z17call_virtual_funcP4Basei(i32* nonnull %stack_var_-24, i32 5), !insn.addr !127
  %6 = add i32 %4, 21, !insn.addr !128
  %7 = add i32 %6, %5, !insn.addr !128
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !129
  %9 = icmp eq i32 %1, %8, !insn.addr !129
  store i32 %7, i32* %eax.0.reg2mem, !insn.addr !130
  br i1 %9, label %dec_label_pc_168a, label %dec_label_pc_1685, !insn.addr !130

dec_label_pc_1685:                                ; preds = %dec_label_pc_1621
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !131
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_168a, !insn.addr !131

dec_label_pc_168a:                                ; preds = %dec_label_pc_1685, %dec_label_pc_1621
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !132

; uselistorder directives
  uselistorder i32 (i32*, i32)* @_Z17call_virtual_funcP4Basei, { 1, 0 }
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_168f:
  ret i32 71, !insn.addr !133
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1699:
  ret i32 22, !insn.addr !134
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_16a3:
  %eax.0.reg2mem = alloca i32, !insn.addr !135
  %b_-24 = alloca i32, align 4
  %stack_var_-20 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !136
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 0, i32 0), !insn.addr !137
  %2 = call double @_Z12template_maxIdET_S0_S0_(double 0.000000e+00, double 0x40040000), !insn.addr !138
  store i32 10, i32* %b_-24, align 4, !insn.addr !139
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !140
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %b_-24, i32* nonnull %stack_var_-20), !insn.addr !141
  %3 = fptrunc double %2 to float, !insn.addr !142
  %4 = bitcast float %3 to i32, !insn.addr !142
  %5 = add i32 %1, %4, !insn.addr !143
  %6 = load i32, i32* %b_-24, align 4, !insn.addr !144
  %7 = add i32 %5, %6, !insn.addr !144
  %8 = load i32, i32* %stack_var_-20, align 4, !insn.addr !145
  %9 = add i32 %7, %8, !insn.addr !145
  %10 = call i32 @__readgsdword(i32 20), !insn.addr !146
  %11 = icmp eq i32 %0, %10, !insn.addr !146
  store i32 %9, i32* %eax.0.reg2mem, !insn.addr !147
  br i1 %11, label %dec_label_pc_1730, label %dec_label_pc_172b, !insn.addr !147

dec_label_pc_172b:                                ; preds = %dec_label_pc_16a3
  %12 = call i32 @__stack_chk_fail_local(), !insn.addr !148
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !148
  br label %dec_label_pc_1730, !insn.addr !148

dec_label_pc_1730:                                ; preds = %dec_label_pc_172b, %dec_label_pc_16a3
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !149

; uselistorder directives
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
  uselistorder i32* %b_-24, { 1, 0, 2 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1735:
  %eax.0.reg2mem = alloca i32, !insn.addr !150
  %stack_var_-60 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !151
  store i32 10, i32* %stack_var_-60, align 4, !insn.addr !152
  call void @_ZN9ContainerIiE4pushEi(i32* nonnull %stack_var_-60, i32 20), !insn.addr !153
  call void @_ZN9ContainerIiE4pushEi(i32* nonnull %stack_var_-60, i32 30), !insn.addr !154
  %1 = load i32, i32* %stack_var_-60, align 4, !insn.addr !155
  %2 = add i32 %1, 4, !insn.addr !156
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !157
  %4 = icmp eq i32 %0, %3, !insn.addr !157
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !158
  br i1 %4, label %dec_label_pc_1792, label %dec_label_pc_178d, !insn.addr !158

dec_label_pc_178d:                                ; preds = %dec_label_pc_1735
  %5 = call i32 @__stack_chk_fail_local(), !insn.addr !159
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !159
  br label %dec_label_pc_1792, !insn.addr !159

dec_label_pc_1792:                                ; preds = %dec_label_pc_178d, %dec_label_pc_1735
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !160

; uselistorder directives
  uselistorder i32* %stack_var_-60, { 2, 0, 1, 3 }
  uselistorder void (i32*, i32)* @_ZN9ContainerIiE4pushEi, { 1, 0 }
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1797:
  ret i32 85, !insn.addr !161
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_17a1:
  %0 = alloca i32
  %esi.1.reg2mem = alloca i32, !insn.addr !162
  %esi.0.reg2mem = alloca i32, !insn.addr !162
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !163
  %3 = call i32* @_Znwj(i32 4), !insn.addr !164
  %4 = add i32 %1, 17947, !insn.addr !165
  store i32 %4, i32* %3, align 4, !insn.addr !166
  %5 = call i32* @_Znwj(i32 4), !insn.addr !167
  %6 = add i32 %1, 17967, !insn.addr !168
  store i32 %6, i32* %5, align 4, !insn.addr !169
  %7 = load i32, i32* %3, align 4, !insn.addr !170
  %8 = add i32 %7, -4, !insn.addr !171
  %9 = inttoptr i32 %8 to i32*, !insn.addr !171
  %10 = load i32, i32* %9, align 4, !insn.addr !171
  %11 = add i32 %10, 4, !insn.addr !172
  %12 = inttoptr i32 %11 to i32*, !insn.addr !172
  %13 = load i32, i32* %12, align 4, !insn.addr !172
  %14 = add i32 %1, 6847, !insn.addr !173
  %15 = icmp eq i32 %13, %14, !insn.addr !174
  store i32 10, i32* %esi.0.reg2mem, !insn.addr !175
  br i1 %15, label %dec_label_pc_1823, label %dec_label_pc_1808, !insn.addr !175

dec_label_pc_1808:                                ; preds = %dec_label_pc_17a1
  %16 = inttoptr i32 %13 to i8*, !insn.addr !176
  %17 = load i8, i8* %16, align 1, !insn.addr !176
  %18 = icmp eq i8 %17, 42, !insn.addr !176
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !177
  br i1 %18, label %dec_label_pc_1823, label %dec_label_pc_180f, !insn.addr !177

dec_label_pc_180f:                                ; preds = %dec_label_pc_1808
  %19 = inttoptr i32 %14 to i8*, !insn.addr !178
  %20 = call i32 @strcmp(i8* %16, i8* %19), !insn.addr !178
  %21 = icmp eq i32 %20, 0, !insn.addr !179
  %22 = select i1 %21, i32 10, i32 0, !insn.addr !180
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !180
  br label %dec_label_pc_1823, !insn.addr !180

dec_label_pc_1823:                                ; preds = %dec_label_pc_180f, %dec_label_pc_1808, %dec_label_pc_17a1
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %23 = add i32 %1, 17963, !insn.addr !181
  %24 = inttoptr i32 %23 to i32*, !insn.addr !181
  %25 = load i32, i32* %24, align 4, !insn.addr !181
  %26 = add i32 %1, 6863, !insn.addr !182
  %27 = add i32 %25, 4, !insn.addr !183
  %28 = inttoptr i32 %27 to i32*, !insn.addr !183
  %29 = load i32, i32* %28, align 4, !insn.addr !183
  %30 = icmp eq i32 %29, %26, !insn.addr !184
  br i1 %30, label %dec_label_pc_184b, label %dec_label_pc_1836, !insn.addr !185

dec_label_pc_1836:                                ; preds = %dec_label_pc_1823
  %31 = inttoptr i32 %29 to i8*, !insn.addr !186
  %32 = load i8, i8* %31, align 1, !insn.addr !186
  %33 = icmp eq i8 %32, 42, !insn.addr !186
  store i32 %esi.0.reload, i32* %esi.1.reg2mem, !insn.addr !187
  br i1 %33, label %dec_label_pc_184e, label %dec_label_pc_183b, !insn.addr !187

dec_label_pc_183b:                                ; preds = %dec_label_pc_1836
  %34 = inttoptr i32 %26 to i8*, !insn.addr !188
  %35 = call i32 @strcmp(i8* %31, i8* %34), !insn.addr !188
  %36 = icmp eq i32 %35, 0, !insn.addr !189
  %37 = icmp eq i1 %36, false, !insn.addr !190
  store i32 %esi.0.reload, i32* %esi.1.reg2mem, !insn.addr !190
  br i1 %37, label %dec_label_pc_184e, label %dec_label_pc_184b, !insn.addr !190

dec_label_pc_184b:                                ; preds = %dec_label_pc_183b, %dec_label_pc_1823
  %38 = or i32 %esi.0.reload, 20, !insn.addr !191
  store i32 %38, i32* %esi.1.reg2mem, !insn.addr !191
  br label %dec_label_pc_184e, !insn.addr !191

dec_label_pc_184e:                                ; preds = %dec_label_pc_184b, %dec_label_pc_183b, %dec_label_pc_1836
  %39 = ptrtoint i32* %3 to i32, !insn.addr !164
  %40 = ptrtoint i32* %5 to i32
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %41 = add i32 %1, 18107, !insn.addr !192
  %42 = add i32 %1, 18115, !insn.addr !193
  %43 = call i32 @__dynamic_cast(i32 %39, i32 %41, i32 %42, i32 0), !insn.addr !194
  %44 = icmp eq i32 %43, 0, !insn.addr !195
  %45 = add nsw i32 %esi.1.reload, 100
  %spec.select = select i1 %44, i32 %esi.1.reload, i32 %45
  %46 = add i32 %1, 18127, !insn.addr !196
  %47 = call i32 @__dynamic_cast(i32 %40, i32 %41, i32 %46, i32 0), !insn.addr !197
  %48 = icmp eq i32 %47, 0, !insn.addr !198
  %49 = add nsw i32 %spec.select, 200
  %esi.3 = select i1 %48, i32 %spec.select, i32 %49
  %50 = inttoptr i32 %13 to i8*, !insn.addr !199
  %51 = load i8, i8* %50, align 1, !insn.addr !199
  %52 = icmp eq i8 %51, 42, !insn.addr !199
  %53 = zext i1 %52 to i32
  %spec.select3 = add i32 %13, %53
  %54 = inttoptr i32 %spec.select3 to i8*, !insn.addr !200
  %55 = call i32 @strlen(i8* %54), !insn.addr !201
  %56 = add i32 %esi.3, %55, !insn.addr !202
  ret i32 %56, !insn.addr !203

; uselistorder directives
  uselistorder i32 %esi.1.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 2, 0, 1 }
  uselistorder i32 %13, { 0, 2, 1, 3 }
  uselistorder i32* %3, { 2, 0, 1 }
  uselistorder i32 %1, { 8, 7, 6, 5, 4, 2, 1, 0, 3 }
  uselistorder i32* %esi.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 10, { 1, 0, 2, 3 }
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_18c9:
  %stack_var_-36 = alloca i32, align 4
  %arr_-44 = alloca i32, align 4
  %arr_-40 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !204
  %1 = call i32 @__readgsdword(i32 20), !insn.addr !205
  %2 = call i32* @_Znwj(i32 4), !insn.addr !206
  %3 = ptrtoint i32* %2 to i32, !insn.addr !206
  store i32 0, i32* %arr_-44, align 4, !insn.addr !207
  store i32 200, i32* %2, align 4, !insn.addr !208
  store i32 %3, i32* %arr_-40, align 4, !insn.addr !209
  %4 = call i32* @_Znaj(i32 20), !insn.addr !210
  %5 = ptrtoint i32* %4 to i32, !insn.addr !210
  store i32 1, i32* %4, align 4, !insn.addr !211
  %6 = add i32 %5, 4, !insn.addr !212
  %7 = inttoptr i32 %6 to i32*, !insn.addr !212
  store i32 2, i32* %7, align 4, !insn.addr !212
  %8 = add i32 %5, 8, !insn.addr !213
  %9 = inttoptr i32 %8 to i32*, !insn.addr !213
  store i32 3, i32* %9, align 4, !insn.addr !213
  %10 = add i32 %5, 12, !insn.addr !214
  %11 = inttoptr i32 %10 to i32*, !insn.addr !214
  store i32 4, i32* %11, align 4, !insn.addr !214
  %12 = add i32 %5, 16, !insn.addr !215
  %13 = inttoptr i32 %12 to i32*, !insn.addr !215
  store i32 5, i32* %13, align 4, !insn.addr !215
  store i32 %5, i32* %stack_var_-36, align 4, !insn.addr !216
  call void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i32* nonnull %stack_var_-36), !insn.addr !217
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %arr_-40), !insn.addr !218
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %arr_-44), !insn.addr !219
  %14 = call i32 @__readgsdword(i32 20), !insn.addr !220
  %15 = icmp eq i32 %1, %14, !insn.addr !220
  br i1 %15, label %dec_label_pc_1990, label %dec_label_pc_1969, !insn.addr !221

dec_label_pc_1969:                                ; preds = %dec_label_pc_18c9
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !222
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %arr_-40), !insn.addr !223
  call void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* nonnull %arr_-44), !insn.addr !224
  %17 = inttoptr i32 %16 to %_Unwind_Exception*, !insn.addr !225
  call void @_Unwind_Resume(%_Unwind_Exception* %17), !insn.addr !226
  br label %dec_label_pc_1990, !insn.addr !226

dec_label_pc_1990:                                ; preds = %dec_label_pc_1969, %dec_label_pc_18c9
  ret i32 ptrtoint (i32* @global_var_2bf to i32), !insn.addr !227

; uselistorder directives
  uselistorder i32 %5, { 4, 2, 3, 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder void (i32*)* @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev, { 3, 2, 1, 0 }
  uselistorder i32 5, { 2, 0, 1 }
  uselistorder i32 3, { 1, 0 }
  uselistorder i32* (i32)* @_Znwj, { 2, 1, 0, 3 }
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_199d:
  %eax.0.reg2mem = alloca i32, !insn.addr !228
  %stack_var_-56 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !229
  %1 = add i32 %0, 17378, !insn.addr !230
  %2 = call i32 @__readgsdword(i32 20), !insn.addr !231
  %3 = add i32 %0, 17430, !insn.addr !232
  store i32 %1, i32* %stack_var_-56, align 4, !insn.addr !233
  store i32 %3, i32* %stack_var_-40, align 4, !insn.addr !234
  %4 = call i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32* nonnull %stack_var_-40), !insn.addr !235
  %5 = call i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32* nonnull %stack_var_-40), !insn.addr !236
  %6 = add i32 %5, %4, !insn.addr !237
  %7 = call i32 @_ZN14DiamondDerivedD1Ev(i32* nonnull %stack_var_-56), !insn.addr !238
  %8 = call i32 @__readgsdword(i32 20), !insn.addr !239
  %9 = icmp eq i32 %2, %8, !insn.addr !239
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !240
  br i1 %9, label %dec_label_pc_1a1a, label %dec_label_pc_1a15, !insn.addr !240

dec_label_pc_1a15:                                ; preds = %dec_label_pc_199d
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !241
  store i32 %10, i32* %eax.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_1a1a, !insn.addr !241

dec_label_pc_1a1a:                                ; preds = %dec_label_pc_1a15, %dec_label_pc_199d
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !242

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32*)* @_ZTv0_n12_N14DiamondDerived4funcEv, { 1, 0 }
}

define void @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1a22:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !243
  %3 = add i32 %1, 5611, !insn.addr !244
  %4 = inttoptr i32 %3 to i8*, !insn.addr !245
  %5 = call i32 @puts(i8* %4), !insn.addr !246
  %6 = call i32 @_Z20test_cpp_member_funcv(), !insn.addr !247
  %7 = add i32 %1, 5647, !insn.addr !248
  %8 = inttoptr i32 %7 to i8*, !insn.addr !249
  %9 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %8), !insn.addr !250
  %10 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !251
  %11 = add i32 %1, 5677, !insn.addr !252
  %12 = inttoptr i32 %11 to i8*, !insn.addr !253
  %13 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %12), !insn.addr !254
  %14 = call i32 @_Z21test_cpp_virtual_funcv(), !insn.addr !255
  %15 = add i32 %1, 5705, !insn.addr !256
  %16 = inttoptr i32 %15 to i8*, !insn.addr !257
  %17 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %16), !insn.addr !258
  %18 = call i32 @_Z29test_cpp_multiple_inheritancev(), !insn.addr !259
  %19 = add i32 %1, 5733, !insn.addr !260
  %20 = inttoptr i32 %19 to i8*, !insn.addr !261
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !262
  %22 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !263
  %23 = add i32 %1, 5761, !insn.addr !264
  %24 = inttoptr i32 %23 to i8*, !insn.addr !265
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !266
  %26 = call i32 @_Z26test_cpp_operator_overloadv(), !insn.addr !267
  %27 = add i32 %1, 5790, !insn.addr !268
  %28 = inttoptr i32 %27 to i8*, !insn.addr !269
  %29 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %28), !insn.addr !270
  %30 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !271
  %31 = add i32 %1, 5818, !insn.addr !272
  %32 = inttoptr i32 %31 to i8*, !insn.addr !273
  %33 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %32), !insn.addr !274
  %34 = call i32 @_Z23test_cpp_template_classv(), !insn.addr !275
  %35 = add i32 %1, 5846, !insn.addr !276
  %36 = inttoptr i32 %35 to i8*, !insn.addr !277
  %37 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %36), !insn.addr !278
  %38 = call i32 @_Z15test_cpp_lambdav(), !insn.addr !279
  %39 = add i32 %1, 5874, !insn.addr !280
  %40 = inttoptr i32 %39 to i8*, !insn.addr !281
  %41 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %40), !insn.addr !282
  %42 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !283
  %43 = add i32 %1, 5902, !insn.addr !284
  %44 = inttoptr i32 %43 to i8*, !insn.addr !285
  %45 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %44), !insn.addr !286
  %46 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !287
  %47 = add i32 %1, 5931, !insn.addr !288
  %48 = inttoptr i32 %47 to i8*, !insn.addr !289
  %49 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %48), !insn.addr !290
  %50 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !291
  %51 = add i32 %1, 5960, !insn.addr !292
  %52 = inttoptr i32 %51 to i8*, !insn.addr !293
  %53 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %52), !insn.addr !294
  ret void, !insn.addr !295

; uselistorder directives
  uselistorder i32 %1, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
}

define void @_ZN4Base12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b66:
  ret void, !insn.addr !296
}

define i32 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_1b74:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !297
  %1 = add i32 %0, 5259, !insn.addr !298
  ret i32 %1, !insn.addr !299
}

define void @_ZN4BaseD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1b8a:
  ret void, !insn.addr !300
}

define void @_ZN7Derived12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b90:
  ret void, !insn.addr !301
}

define i32 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_1ba4:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !302
  %1 = add i32 %0, 5216, !insn.addr !303
  ret i32 %1, !insn.addr !304
}

define void @_ZN12MultiDerived5funcAEv(i32* %result) local_unnamed_addr {
dec_label_pc_1bba:
  ret void, !insn.addr !305
}

define void @_ZN12MultiDerived5funcBEv(i32* %result) local_unnamed_addr {
dec_label_pc_1bc4:
  ret void, !insn.addr !306
}

define i32 @_ZThn8_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1bce:
  ret i32 40, !insn.addr !307
}

define i32 @_ZN11VirtualBase4funcEv() local_unnamed_addr {
dec_label_pc_1bd8:
  ret i32 100, !insn.addr !308
}

define void @_ZN11VirtualBaseD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1be2:
  ret void, !insn.addr !309
}

define i32 @_ZN7MiddleA4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1be8:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !310
  %2 = add i32 %1, -12, !insn.addr !311
  %3 = inttoptr i32 %2 to i32*, !insn.addr !311
  %4 = load i32, i32* %3, align 4, !insn.addr !311
  %5 = add i32 %0, 4, !insn.addr !312
  %6 = add i32 %5, %4, !insn.addr !312
  %7 = inttoptr i32 %6 to i32*, !insn.addr !312
  %8 = load i32, i32* %7, align 4, !insn.addr !312
  %9 = add i32 %8, 150, !insn.addr !313
  ret i32 %9, !insn.addr !314
}

define i32 @_ZTv0_n12_N7MiddleA4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c02:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !315
  %1 = load i32, i32* %0, align 4, !insn.addr !315
  %2 = add i32 %1, -12, !insn.addr !316
  %3 = inttoptr i32 %2 to i32*, !insn.addr !316
  %4 = load i32, i32* %3, align 4, !insn.addr !316
  %5 = add i32 %4, %arg1, !insn.addr !316
  %6 = inttoptr i32 %5 to i32*, !insn.addr !317
  %7 = call i32 @_ZN7MiddleA4funcEv(i32* %6), !insn.addr !317
  ret i32 %7, !insn.addr !317
}

define i32 @_ZN7MiddleB4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1c16:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !318
  %2 = add i32 %1, -12, !insn.addr !319
  %3 = inttoptr i32 %2 to i32*, !insn.addr !319
  %4 = load i32, i32* %3, align 4, !insn.addr !319
  %5 = add i32 %0, 4, !insn.addr !320
  %6 = add i32 %5, %4, !insn.addr !320
  %7 = inttoptr i32 %6 to i32*, !insn.addr !320
  %8 = load i32, i32* %7, align 4, !insn.addr !320
  %9 = add i32 %8, 200, !insn.addr !321
  ret i32 %9, !insn.addr !322
}

define i32 @_ZTv0_n12_N7MiddleB4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c30:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !323
  %1 = load i32, i32* %0, align 4, !insn.addr !323
  %2 = add i32 %1, -12, !insn.addr !324
  %3 = inttoptr i32 %2 to i32*, !insn.addr !324
  %4 = load i32, i32* %3, align 4, !insn.addr !324
  %5 = add i32 %4, %arg1, !insn.addr !324
  %6 = inttoptr i32 %5 to i32*, !insn.addr !325
  %7 = call i32 @_ZN7MiddleB4funcEv(i32* %6), !insn.addr !325
  ret i32 %7, !insn.addr !325
}

define i32 @_ZN14DiamondDerived4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1c44:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !326
  %2 = add i32 %1, -12, !insn.addr !327
  %3 = inttoptr i32 %2 to i32*, !insn.addr !327
  %4 = load i32, i32* %3, align 4, !insn.addr !327
  %5 = add i32 %0, 4, !insn.addr !328
  %6 = add i32 %5, %4, !insn.addr !328
  %7 = inttoptr i32 %6 to i32*, !insn.addr !328
  %8 = load i32, i32* %7, align 4, !insn.addr !328
  %9 = add i32 %8, 250, !insn.addr !329
  ret i32 %9, !insn.addr !330
}

define i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32* %arg1) local_unnamed_addr {
dec_label_pc_1c5e:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = load i32, i32* %arg1, align 4, !insn.addr !331
  %2 = add i32 %1, -12, !insn.addr !332
  %3 = inttoptr i32 %2 to i32*, !insn.addr !332
  %4 = load i32, i32* %3, align 4, !insn.addr !332
  %5 = add i32 %4, %0, !insn.addr !332
  %6 = inttoptr i32 %5 to i32*, !insn.addr !333
  %7 = call i32 @_ZN14DiamondDerived4funcEv(i32* %6), !insn.addr !333
  ret i32 %7, !insn.addr !333
}

define i32 @_ZThn8_N14DiamondDerived4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c71:
  %0 = add i32 %arg1, -8, !insn.addr !334
  %1 = inttoptr i32 %0 to i32*, !insn.addr !335
  %2 = call i32 @_ZN14DiamondDerived4funcEv(i32* %1), !insn.addr !335
  ret i32 %2, !insn.addr !335

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN14DiamondDerived4funcEv, { 1, 0 }
}

define void @_ZN7MiddleAD1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1c7c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !336
  %4 = add i32 %1, 16399, !insn.addr !337
  store i32 %4, i32* %result, align 4, !insn.addr !338
  %5 = add i32 %1, 16427, !insn.addr !339
  %6 = add i32 %2, 8, !insn.addr !340
  %7 = inttoptr i32 %6 to i32*, !insn.addr !340
  store i32 %5, i32* %7, align 4, !insn.addr !340
  ret void, !insn.addr !341
}

define i32 @_ZTv0_n16_N7MiddleAD1Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ca1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !342
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !343
  %4 = load i32, i32* %3, align 4, !insn.addr !343
  %5 = add i32 %1, 16362, !insn.addr !344
  %6 = add i32 %4, -16, !insn.addr !345
  %7 = inttoptr i32 %6 to i32*, !insn.addr !345
  %8 = load i32, i32* %7, align 4, !insn.addr !345
  %9 = add i32 %8, %arg1, !insn.addr !345
  %10 = inttoptr i32 %9 to i32*, !insn.addr !346
  store i32 %5, i32* %10, align 4, !insn.addr !346
  %11 = add i32 %1, 16390, !insn.addr !347
  %12 = add i32 %9, 8, !insn.addr !348
  %13 = inttoptr i32 %12 to i32*, !insn.addr !348
  store i32 %11, i32* %13, align 4, !insn.addr !348
  ret i32 %9, !insn.addr !349

; uselistorder directives
  uselistorder i32 %9, { 2, 1, 0 }
}

define void @_ZN7MiddleBD1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1ccc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !350
  %4 = add i32 %1, 16379, !insn.addr !351
  store i32 %4, i32* %result, align 4, !insn.addr !352
  %5 = add i32 %1, 16407, !insn.addr !353
  %6 = add i32 %2, 8, !insn.addr !354
  %7 = inttoptr i32 %6 to i32*, !insn.addr !354
  store i32 %5, i32* %7, align 4, !insn.addr !354
  ret void, !insn.addr !355
}

define i32 @_ZTv0_n16_N7MiddleBD1Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cf1:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !356
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !357
  %4 = load i32, i32* %3, align 4, !insn.addr !357
  %5 = add i32 %1, 16342, !insn.addr !358
  %6 = add i32 %4, -16, !insn.addr !359
  %7 = inttoptr i32 %6 to i32*, !insn.addr !359
  %8 = load i32, i32* %7, align 4, !insn.addr !359
  %9 = add i32 %8, %arg1, !insn.addr !359
  %10 = inttoptr i32 %9 to i32*, !insn.addr !360
  store i32 %5, i32* %10, align 4, !insn.addr !360
  %11 = add i32 %1, 16370, !insn.addr !361
  %12 = add i32 %9, 8, !insn.addr !362
  %13 = inttoptr i32 %12 to i32*, !insn.addr !362
  store i32 %11, i32* %13, align 4, !insn.addr !362
  ret i32 %9, !insn.addr !363

; uselistorder directives
  uselistorder i32 %9, { 2, 1, 0 }
}

define i32 @_ZNK12RTTIDerivedA7getTypeEv() local_unnamed_addr {
dec_label_pc_1d1c:
  ret i32 1, !insn.addr !364
}

define i32 @_ZNK12RTTIDerivedB7getTypeEv() local_unnamed_addr {
dec_label_pc_1d26:
  ret i32 2, !insn.addr !365
}

define void @_ZN12RTTIDerivedBD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d30:
  ret void, !insn.addr !366
}

define void @_ZN12RTTIDerivedAD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d36:
  ret void, !insn.addr !367
}

define void @_ZN12MultiDerivedD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d3c:
  ret void, !insn.addr !368
}

define i32 @_ZThn8_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1d41:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !369
}

define void @_ZN7DerivedD2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d46:
  ret void, !insn.addr !370
}

define void @_ZN4BaseD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !371
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !372
  ret void, !insn.addr !373
}

define void @_ZN7DerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d74:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !374
  %3 = call i32 @_ZdlPvj(i32* %result, i32 8), !insn.addr !375
  ret void, !insn.addr !376
}

define void @_ZN12MultiDerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d9c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !377
  %3 = call i32 @_ZdlPvj(i32* %result, i32 16), !insn.addr !378
  ret void, !insn.addr !379
}

define i32 @_ZThn8_N12MultiDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1dc4:
  %0 = add i32 %arg1, -8, !insn.addr !380
  %1 = inttoptr i32 %0 to i32*, !insn.addr !381
  call void @_ZN12MultiDerivedD0Ev(i32* %1), !insn.addr !381
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !381
}

define void @_ZN11VirtualBaseD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1dd0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !382
  %3 = call i32 @_ZdlPvj(i32* %result, i32 8), !insn.addr !383
  ret void, !insn.addr !384
}

define void @_ZN12RTTIDerivedBD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1df8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !385
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !386
  ret void, !insn.addr !387
}

define void @_ZN12RTTIDerivedAD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1e20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !388
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !389
  ret void, !insn.addr !390
}

define i32 @_ZN7MiddleAD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1e48:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !391
  %4 = add i32 %1, 15935, !insn.addr !392
  store i32 %4, i32* %result, align 4, !insn.addr !393
  %5 = add i32 %1, 15963, !insn.addr !394
  %6 = add i32 %2, 8, !insn.addr !395
  %7 = inttoptr i32 %6 to i32*, !insn.addr !395
  store i32 %5, i32* %7, align 4, !insn.addr !395
  %8 = call i32 @_ZdlPvj(i32* %result, i32 16), !insn.addr !396
  ret i32 %8, !insn.addr !397

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @_ZTv0_n16_N7MiddleAD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1e7f:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !398
  %1 = load i32, i32* %0, align 4, !insn.addr !398
  %2 = add i32 %1, -16, !insn.addr !399
  %3 = inttoptr i32 %2 to i32*, !insn.addr !399
  %4 = load i32, i32* %3, align 4, !insn.addr !399
  %5 = add i32 %4, %arg1, !insn.addr !399
  %6 = inttoptr i32 %5 to i32*, !insn.addr !400
  %7 = call i32 @_ZN7MiddleAD0Ev(i32* %6), !insn.addr !400
  ret i32 %7, !insn.addr !400
}

define i32 @_ZN7MiddleBD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1e92:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %result to i32
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !401
  %4 = add i32 %1, 15921, !insn.addr !402
  store i32 %4, i32* %result, align 4, !insn.addr !403
  %5 = add i32 %1, 15949, !insn.addr !404
  %6 = add i32 %2, 8, !insn.addr !405
  %7 = inttoptr i32 %6 to i32*, !insn.addr !405
  store i32 %5, i32* %7, align 4, !insn.addr !405
  %8 = call i32 @_ZdlPvj(i32* %result, i32 16), !insn.addr !406
  ret i32 %8, !insn.addr !407

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2 }
}

define i32 @_ZTv0_n16_N7MiddleBD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ec9:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !408
  %1 = load i32, i32* %0, align 4, !insn.addr !408
  %2 = add i32 %1, -16, !insn.addr !409
  %3 = inttoptr i32 %2 to i32*, !insn.addr !409
  %4 = load i32, i32* %3, align 4, !insn.addr !409
  %5 = add i32 %4, %arg1, !insn.addr !409
  %6 = inttoptr i32 %5 to i32*, !insn.addr !410
  %7 = call i32 @_ZN7MiddleBD0Ev(i32* %6), !insn.addr !410
  ret i32 %7, !insn.addr !410
}

define i32 @_ZN7MiddleAD4Ev(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1edc:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !411
  %ecx.0.reg2mem = alloca i32, !insn.addr !411
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.cx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !412
  %3 = icmp eq i32 %arg2, 0, !insn.addr !413
  %4 = icmp eq i1 %3, false, !insn.addr !414
  br i1 %4, label %dec_label_pc_1f13, label %dec_label_pc_1f0b, !insn.addr !414

dec_label_pc_1f0b:                                ; preds = %dec_label_pc_1edc
  %5 = inttoptr i32 %arg3 to i32*, !insn.addr !415
  %6 = load i32, i32* %5, align 4, !insn.addr !415
  %7 = inttoptr i32 %arg1 to i32*, !insn.addr !416
  store i32 %6, i32* %7, align 4, !insn.addr !416
  %8 = add i32 %arg3, 4, !insn.addr !417
  %9 = inttoptr i32 %8 to i32*, !insn.addr !417
  %10 = load i32, i32* %9, align 4, !insn.addr !417
  %11 = add i32 %6, -12, !insn.addr !418
  %12 = inttoptr i32 %11 to i32*, !insn.addr !418
  %13 = load i32, i32* %12, align 4, !insn.addr !418
  store i32 %10, i32* %ecx.0.reg2mem, !insn.addr !419
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !419
  br label %dec_label_pc_1f1e, !insn.addr !419

dec_label_pc_1f13:                                ; preds = %dec_label_pc_1edc
  %14 = add i32 %1, 15791, !insn.addr !420
  %15 = inttoptr i32 %arg1 to i32*, !insn.addr !416
  store i32 %14, i32* %15, align 4, !insn.addr !416
  %16 = add i32 %1, 15819, !insn.addr !421
  store i32 %16, i32* %ecx.0.reg2mem, !insn.addr !422
  store i32 8, i32* %storemerge.reg2mem, !insn.addr !422
  br label %dec_label_pc_1f1e, !insn.addr !422

dec_label_pc_1f1e:                                ; preds = %dec_label_pc_1f13, %dec_label_pc_1f0b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %17 = add i32 %storemerge.reload, %arg1, !insn.addr !423
  %18 = inttoptr i32 %17 to i32*, !insn.addr !423
  store i32 %ecx.0.reload, i32* %18, align 4, !insn.addr !423
  ret i32 %storemerge.reload, !insn.addr !424

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @_ZN7MiddleAD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_1f26:
  %0 = ptrtoint i32* %result to i32
  %1 = ptrtoint i32* %this to i32
  %2 = call i32 @_ZN7MiddleAD4Ev(i32 %1, i32 0, i32 %0), !insn.addr !425
  ret i32 %2, !insn.addr !426
}

define i32 @_ZN7MiddleBD4Ev(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1f42:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !427
  %ecx.0.reg2mem = alloca i32, !insn.addr !427
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.cx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !428
  %3 = icmp eq i32 %arg2, 0, !insn.addr !429
  %4 = icmp eq i1 %3, false, !insn.addr !430
  br i1 %4, label %dec_label_pc_1f79, label %dec_label_pc_1f71, !insn.addr !430

dec_label_pc_1f71:                                ; preds = %dec_label_pc_1f42
  %5 = inttoptr i32 %arg3 to i32*, !insn.addr !431
  %6 = load i32, i32* %5, align 4, !insn.addr !431
  %7 = inttoptr i32 %arg1 to i32*, !insn.addr !432
  store i32 %6, i32* %7, align 4, !insn.addr !432
  %8 = add i32 %arg3, 4, !insn.addr !433
  %9 = inttoptr i32 %8 to i32*, !insn.addr !433
  %10 = load i32, i32* %9, align 4, !insn.addr !433
  %11 = add i32 %6, -12, !insn.addr !434
  %12 = inttoptr i32 %11 to i32*, !insn.addr !434
  %13 = load i32, i32* %12, align 4, !insn.addr !434
  store i32 %10, i32* %ecx.0.reg2mem, !insn.addr !435
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !435
  br label %dec_label_pc_1f84, !insn.addr !435

dec_label_pc_1f79:                                ; preds = %dec_label_pc_1f42
  %14 = add i32 %1, 15749, !insn.addr !436
  %15 = inttoptr i32 %arg1 to i32*, !insn.addr !432
  store i32 %14, i32* %15, align 4, !insn.addr !432
  %16 = add i32 %1, 15777, !insn.addr !437
  store i32 %16, i32* %ecx.0.reg2mem, !insn.addr !438
  store i32 8, i32* %storemerge.reg2mem, !insn.addr !438
  br label %dec_label_pc_1f84, !insn.addr !438

dec_label_pc_1f84:                                ; preds = %dec_label_pc_1f79, %dec_label_pc_1f71
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %17 = add i32 %storemerge.reload, %arg1, !insn.addr !439
  %18 = inttoptr i32 %17 to i32*, !insn.addr !439
  store i32 %ecx.0.reload, i32* %18, align 4, !insn.addr !439
  ret i32 %storemerge.reload, !insn.addr !440

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.cx, { 1, 0 }
  uselistorder i32 %arg3, { 1, 0 }
}

define i32 @_ZN7MiddleBD2Ev(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1f8c:
  %0 = call i32 @_ZN7MiddleBD4Ev(i32 %arg1, i32 0, i32 %arg2), !insn.addr !441
  ret i32 %0, !insn.addr !442
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fa8:
  %0 = sub i32 %arg1, %arg2, !insn.addr !443
  %1 = xor i32 %arg2, %arg1, !insn.addr !443
  %2 = xor i32 %0, %arg1, !insn.addr !443
  %3 = and i32 %2, %1, !insn.addr !443
  %4 = icmp slt i32 %3, 0, !insn.addr !443
  %5 = icmp slt i32 %0, 0, !insn.addr !443
  %6 = icmp eq i1 %5, %4, !insn.addr !444
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !444
  ret i32 %7, !insn.addr !445

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1fbc:
  %cf.0.reg2mem = alloca i1, !insn.addr !446
  %zf.0.reg2mem = alloca i1, !insn.addr !446
  %0 = fcmp ogt double %arg1, %arg2, !insn.addr !447
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !447
  store i1 false, i1* %cf.0.reg2mem, !insn.addr !447
  br i1 %0, label %dec_label_pc_1fd3, label %1, !insn.addr !447

; <label>:1:                                      ; preds = %dec_label_pc_1fbc
  %2 = fcmp olt double %arg1, %arg2, !insn.addr !447
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !447
  store i1 true, i1* %cf.0.reg2mem, !insn.addr !447
  br i1 %2, label %dec_label_pc_1fd3, label %3, !insn.addr !447

; <label>:3:                                      ; preds = %1
  %4 = fcmp une double %arg1, %arg2, !insn.addr !447
  store i1 true, i1* %zf.0.reg2mem, !insn.addr !447
  store i1 %4, i1* %cf.0.reg2mem, !insn.addr !447
  br label %dec_label_pc_1fd3, !insn.addr !447

dec_label_pc_1fd3:                                ; preds = %1, %dec_label_pc_1fbc, %3
  %cf.0.reload = load i1, i1* %cf.0.reg2mem
  %zf.0.reload = load i1, i1* %zf.0.reg2mem
  %5 = or i1 %zf.0.reload, %cf.0.reload, !insn.addr !448
  %spec.select = select i1 %5, double %arg2, double %arg1
  ret double %spec.select, !insn.addr !449

; uselistorder directives
  uselistorder i1* %zf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1* %cf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 true, { 1, 0 }
  uselistorder label %dec_label_pc_1fd3, { 2, 0, 1 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1fd5:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !450
  %1 = load i32, i32* %arg2, align 4, !insn.addr !451
  store i32 %1, i32* %arg1, align 4, !insn.addr !452
  store i32 %0, i32* %arg2, align 4, !insn.addr !453
  ret void, !insn.addr !454
}

define void @_ZN9ContainerIiEC2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1fee:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !455
  %2 = inttoptr i32 %1 to i32*, !insn.addr !455
  store i32 0, i32* %2, align 4, !insn.addr !455
  ret void, !insn.addr !456
}

define void @_ZN9ContainerIiE4pushEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2002:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !457
  %2 = inttoptr i32 %1 to i32*, !insn.addr !457
  %3 = load i32, i32* %2, align 4, !insn.addr !457
  %4 = icmp sgt i32 %3, 9, !insn.addr !458
  br i1 %4, label %dec_label_pc_2020, label %dec_label_pc_2014, !insn.addr !458

dec_label_pc_2014:                                ; preds = %dec_label_pc_2002
  %5 = add i32 %3, 1, !insn.addr !459
  store i32 %5, i32* %2, align 4, !insn.addr !460
  %6 = mul i32 %3, 4, !insn.addr !461
  %7 = add i32 %6, %0, !insn.addr !461
  %8 = inttoptr i32 %7 to i32*, !insn.addr !461
  store i32 %arg2, i32* %8, align 4, !insn.addr !461
  br label %dec_label_pc_2020, !insn.addr !461

dec_label_pc_2020:                                ; preds = %dec_label_pc_2014, %dec_label_pc_2002
  ret void, !insn.addr !462

; uselistorder directives
  uselistorder i32 40, { 2, 1, 0 }
}

define void @_ZNK9ContainerIiE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2022:
  ret void, !insn.addr !463
}

define void @_ZNK9ContainerIiE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_2040:
  ret void, !insn.addr !464
}

define void @_ZN9ContainerIdEC2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_2050:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !465
  %2 = inttoptr i32 %1 to i32*, !insn.addr !465
  store i32 0, i32* %2, align 4, !insn.addr !465
  ret void, !insn.addr !466
}

define void @_ZN9ContainerIdE4pushEd(i32* %result, double %arg2) local_unnamed_addr {
dec_label_pc_2064:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !467
  %2 = inttoptr i32 %1 to i32*, !insn.addr !467
  %3 = load i32, i32* %2, align 4, !insn.addr !467
  %4 = icmp sgt i32 %3, 9, !insn.addr !468
  br i1 %4, label %dec_label_pc_2086, label %dec_label_pc_2079, !insn.addr !468

dec_label_pc_2079:                                ; preds = %dec_label_pc_2064
  %5 = add i32 %3, 1, !insn.addr !469
  store i32 %5, i32* %2, align 4, !insn.addr !470
  %6 = mul i32 %3, 8, !insn.addr !471
  %7 = add i32 %6, %0, !insn.addr !471
  %8 = inttoptr i32 %7 to double*, !insn.addr !471
  store double %arg2, double* %8, align 4, !insn.addr !471
  br label %dec_label_pc_2086, !insn.addr !472

dec_label_pc_2086:                                ; preds = %dec_label_pc_2064, %dec_label_pc_2079
  ret void, !insn.addr !473

; uselistorder directives
  uselistorder label %dec_label_pc_2086, { 1, 0 }
}

define void @_ZNK9ContainerIdE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_2088:
  ret void, !insn.addr !474
}

define i32 @_ZNK9ContainerIdE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_20a8:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !475
  %2 = inttoptr i32 %1 to i32*, !insn.addr !475
  %3 = load i32, i32* %2, align 4, !insn.addr !475
  ret i32 %3, !insn.addr !476
}

define void @_ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_20b8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !477
  %3 = load i32, i32* %result, align 4, !insn.addr !478
  %4 = icmp eq i32 %3, 0, !insn.addr !479
  br i1 %4, label %dec_label_pc_20e2, label %dec_label_pc_20d5, !insn.addr !480

dec_label_pc_20d5:                                ; preds = %dec_label_pc_20b8
  %5 = inttoptr i32 %3 to i32*, !insn.addr !481
  %6 = call i32 @_ZdlPvj(i32* %5, i32 4), !insn.addr !481
  br label %dec_label_pc_20e2, !insn.addr !482

dec_label_pc_20e2:                                ; preds = %dec_label_pc_20d5, %dec_label_pc_20b8
  ret void, !insn.addr !483
}

define void @_ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(i32* %result) local_unnamed_addr {
dec_label_pc_20e8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !484
  %3 = load i32, i32* %result, align 4, !insn.addr !485
  %4 = icmp eq i32 %3, 0, !insn.addr !486
  br i1 %4, label %dec_label_pc_2111, label %dec_label_pc_2105, !insn.addr !487

dec_label_pc_2105:                                ; preds = %dec_label_pc_20e8
  %5 = inttoptr i32 %3 to i32*, !insn.addr !488
  call void @_ZdaPv(i32* %5, i32* nonnull @0), !insn.addr !488
  br label %dec_label_pc_2111, !insn.addr !489

dec_label_pc_2111:                                ; preds = %dec_label_pc_2105, %dec_label_pc_20e8
  ret void, !insn.addr !490
}

define i32 @_ZN14DiamondDerivedD4Ev(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2116:
  %edx.1.reg2mem = alloca i32, !insn.addr !491
  %.reg2mem = alloca i32*, !insn.addr !491
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !492
  %1 = icmp eq i32 %arg2, 0, !insn.addr !493
  %2 = icmp eq i1 %1, false, !insn.addr !494
  br i1 %2, label %dec_label_pc_215b.thread, label %dec_label_pc_2168, !insn.addr !494

dec_label_pc_215b.thread:                         ; preds = %dec_label_pc_2116
  %3 = add i32 %0, add (i32 ptrtoint (i32* @global_var_3e69 to i32), i32 -512), !insn.addr !495
  %4 = inttoptr i32 %arg1 to i32*, !insn.addr !496
  store i32 %3, i32* %4, align 4, !insn.addr !496
  %5 = add i32 %0, add (i32 ptrtoint (i32* @global_var_3e69 to i32), i32 -460), !insn.addr !497
  %6 = add i32 %arg1, 16, !insn.addr !498
  %7 = inttoptr i32 %6 to i32*, !insn.addr !498
  store i32 %5, i32* %7, align 4, !insn.addr !498
  %8 = add i32 %0, add (i32 ptrtoint (i32* @global_var_3e69 to i32), i32 -488), !insn.addr !499
  store i32* %4, i32** %.reg2mem
  store i32 %8, i32* %edx.1.reg2mem
  br label %dec_label_pc_216b

dec_label_pc_2168:                                ; preds = %dec_label_pc_2116
  %9 = inttoptr i32 %arg3 to i32*, !insn.addr !500
  %10 = load i32, i32* %9, align 4, !insn.addr !500
  %11 = inttoptr i32 %arg1 to i32*, !insn.addr !496
  store i32 %10, i32* %11, align 4, !insn.addr !496
  %12 = add i32 %arg3, 20, !insn.addr !501
  %13 = inttoptr i32 %12 to i32*, !insn.addr !501
  %14 = load i32, i32* %13, align 4, !insn.addr !501
  %15 = add i32 %10, -12, !insn.addr !502
  %16 = inttoptr i32 %15 to i32*, !insn.addr !502
  %17 = load i32, i32* %16, align 4, !insn.addr !502
  %18 = add i32 %17, %arg1, !insn.addr !498
  %19 = inttoptr i32 %18 to i32*, !insn.addr !498
  store i32 %14, i32* %19, align 4, !insn.addr !498
  %20 = add i32 %arg3, 24, !insn.addr !503
  %21 = inttoptr i32 %20 to i32*, !insn.addr !503
  %22 = load i32, i32* %21, align 4, !insn.addr !503
  store i32* %11, i32** %.reg2mem, !insn.addr !503
  store i32 %22, i32* %edx.1.reg2mem, !insn.addr !503
  br label %dec_label_pc_216b, !insn.addr !503

dec_label_pc_216b:                                ; preds = %dec_label_pc_215b.thread, %dec_label_pc_2168
  %23 = add i32 %0, ptrtoint (i32* @global_var_3e69 to i32), !insn.addr !504
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %.reload = load i32*, i32** %.reg2mem
  %24 = add i32 %arg1, 8, !insn.addr !505
  %25 = inttoptr i32 %24 to i32*, !insn.addr !505
  store i32 %edx.1.reload, i32* %25, align 4, !insn.addr !505
  %26 = add i32 %0, add (i32 ptrtoint (i32* @global_var_3e69 to i32), i32 -540), !insn.addr !506
  %27 = add i32 %arg3, 12
  %spec.select = select i1 %2, i32 %26, i32 %27
  %28 = call i32 @_ZN7MiddleBD2Ev(i32 %24, i32 %spec.select, i32 %23, i32 %23), !insn.addr !507
  %29 = add i32 %0, add (i32 ptrtoint (i32* @global_var_3e69 to i32), i32 -548), !insn.addr !508
  %30 = add i32 %arg3, 4
  %eax.0 = select i1 %2, i32 %29, i32 %30
  %31 = inttoptr i32 %eax.0 to i32*, !insn.addr !509
  %32 = call i32 @_ZN7MiddleAD2Ev(i32* %.reload, i32* %31), !insn.addr !509
  ret i32 %32, !insn.addr !509

; uselistorder directives
  uselistorder i32 %23, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %0, { 2, 3, 5, 0, 1, 4 }
  uselistorder i32** %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %edx.1.reg2mem, { 0, 2, 1 }
  uselistorder i32 4, { 15, 2, 0, 13, 14, 3, 4, 5, 16, 11, 12, 17, 18, 6, 19, 20, 7, 8, 1, 9, 10 }
  uselistorder i32 8, { 11, 2, 0, 1, 5, 6, 3, 4, 7, 9, 8, 10, 12 }
  uselistorder i32 -12, { 6, 4, 5, 8, 7, 0, 1, 2, 3 }
  uselistorder i32 20, { 16, 4, 5, 6, 1, 7, 0, 8, 2, 9, 10, 3, 11, 12, 13, 14, 15 }
  uselistorder i32 ptrtoint (i32* @global_var_3e69 to i32), { 1, 2, 5, 3, 0, 4 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 4, 6, 5, 3, 2, 1, 0 }
  uselistorder i32 %arg3, { 3, 2, 1, 0, 4 }
  uselistorder i32 %arg1, { 3, 0, 4, 1, 2 }
  uselistorder label %dec_label_pc_216b, { 1, 0 }
}

define i32 @_ZN14DiamondDerivedD1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = ptrtoint i32* %result to i32
  %1 = call i32 @_ZN14DiamondDerivedD4Ev(i32 %0, i32 2, i32 0), !insn.addr !510
  ret i32 %1, !insn.addr !511

; uselistorder directives
  uselistorder i32 2, { 2, 1, 3, 0 }
}

define i32 @_ZThn8_N14DiamondDerivedD1Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_21cb:
  %0 = add i32 %arg1, -8, !insn.addr !512
  %1 = inttoptr i32 %0 to i32*, !insn.addr !513
  %2 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %1), !insn.addr !513
  ret i32 %2, !insn.addr !513
}

define i32 @_ZTv0_n16_N14DiamondDerivedD1Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_21d6:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !514
  %1 = load i32, i32* %0, align 4, !insn.addr !514
  %2 = add i32 %1, -16, !insn.addr !515
  %3 = inttoptr i32 %2 to i32*, !insn.addr !515
  %4 = load i32, i32* %3, align 4, !insn.addr !515
  %5 = add i32 %4, %arg1, !insn.addr !515
  %6 = inttoptr i32 %5 to i32*, !insn.addr !516
  %7 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %6), !insn.addr !516
  ret i32 %7, !insn.addr !516
}

define i32 @_ZN14DiamondDerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_21ea:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !517
  %3 = call i32 @_ZN14DiamondDerivedD1Ev(i32* %result), !insn.addr !518
  %4 = call i32 @_ZdlPvj(i32* %result, i32 24), !insn.addr !519
  ret i32 %4, !insn.addr !520

; uselistorder directives
  uselistorder i32 (i32*, i32)* @_ZdlPvj, { 9, 0, 8, 7, 6, 5, 4, 3, 2, 1, 10 }
  uselistorder i32 (i32*)* @_ZN14DiamondDerivedD1Ev, { 3, 2, 1, 0 }
}

define i32 @_ZThn8_N14DiamondDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_221e:
  %0 = add i32 %arg1, -8, !insn.addr !521
  %1 = inttoptr i32 %0 to i32*, !insn.addr !522
  %2 = call i32 @_ZN14DiamondDerivedD0Ev(i32* %1), !insn.addr !522
  ret i32 %2, !insn.addr !522
}

define i32 @_ZTv0_n16_N14DiamondDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_2229:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !523
  %1 = load i32, i32* %0, align 4, !insn.addr !523
  %2 = add i32 %1, -16, !insn.addr !524
  %3 = inttoptr i32 %2 to i32*, !insn.addr !524
  %4 = load i32, i32* %3, align 4, !insn.addr !524
  %5 = add i32 %4, %arg1, !insn.addr !524
  %6 = inttoptr i32 %5 to i32*, !insn.addr !525
  %7 = call i32 @_ZN14DiamondDerivedD0Ev(i32* %6), !insn.addr !525
  ret i32 %7, !insn.addr !525

; uselistorder directives
  uselistorder i32 (i32*)* @_ZN14DiamondDerivedD0Ev, { 1, 0 }
  uselistorder i32 -16, { 2, 3, 4, 5, 6, 7, 0, 1 }
}

define i32 @_ZN14DiamondDerivedD2Ev(i32* %this, i32* %result) local_unnamed_addr {
dec_label_pc_223c:
  %0 = ptrtoint i32* %result to i32
  %1 = ptrtoint i32* %this to i32
  %2 = call i32 @_ZN14DiamondDerivedD4Ev(i32 %1, i32 0, i32 %0), !insn.addr !526
  ret i32 %2, !insn.addr !527

; uselistorder directives
  uselistorder i32 (i32, i32, i32)* @_ZN14DiamondDerivedD4Ev, { 1, 0 }
  uselistorder i32 0, { 5, 6, 25, 26, 27, 21, 22, 28, 29, 7, 23, 8, 24, 19, 30, 10, 31, 9, 32, 11, 12, 0, 13, 14, 20, 2, 3, 15, 1, 4, 16, 17, 18 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_2258:
  ret i32 %arg1, !insn.addr !528
}

define i32 @__x86.get_pc_thunk.cx(i32 %arg1) local_unnamed_addr {
dec_label_pc_225c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !529
}

define i32 @__x86.get_pc_thunk.si(i32 %arg1) local_unnamed_addr {
dec_label_pc_2260:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !530
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_2270:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !531
  call void @__stack_chk_fail(), !insn.addr !532
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !533
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2290:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !534
  %ebx.0.reg2mem = alloca i32, !insn.addr !534
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !535
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3cef to i32), i32 -840), !insn.addr !536
  %4 = inttoptr i32 %3 to i32*, !insn.addr !536
  %5 = load i32, i32* %4, align 4, !insn.addr !536
  %6 = icmp eq i32 %5, -1, !insn.addr !537
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !538
  store i32 -1, i32* %merge.reg2mem, !insn.addr !538
  br i1 %6, label %dec_label_pc_22cd, label %dec_label_pc_22c0, !insn.addr !538

dec_label_pc_22c0:                                ; preds = %dec_label_pc_2290, %dec_label_pc_22c0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !539
  %8 = inttoptr i32 %7 to i32*, !insn.addr !539
  %9 = load i32, i32* %8, align 4, !insn.addr !539
  %10 = icmp eq i32 %9, -1, !insn.addr !540
  %11 = icmp eq i1 %10, false, !insn.addr !541
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !541
  store i32 %9, i32* %merge.reg2mem, !insn.addr !541
  br i1 %11, label %dec_label_pc_22c0, label %dec_label_pc_22cd, !insn.addr !541

dec_label_pc_22cd:                                ; preds = %dec_label_pc_22c0, %dec_label_pc_2290
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !542

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 4, 7, 1, 0, 2, 5, 6, 8, 3, 9 }
  uselistorder i32 -1, { 1, 0, 2 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 3, 6, 1, 5, 0, 2, 4 }
  uselistorder i32* @0, { 3, 0, 1, 2 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0 }
  uselistorder label %dec_label_pc_22c0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_22dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !543
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !544
  ret i32 %3, !insn.addr !545

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 17, 5, 16, 4, 3, 15, 14, 12, 11, 10, 9, 8, 7, 0, 2, 1, 6, 13 }
  uselistorder i32 1, { 35, 37, 36, 34, 33, 32, 31, 30, 39, 38, 29, 28, 90, 91, 41, 40, 43, 42, 27, 45, 44, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 61, 16, 15, 14, 13, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 12, 77, 76, 46, 92, 80, 79, 78, 48, 47, 11, 81, 49, 83, 82, 50, 85, 84, 51, 86, 52, 10, 9, 8, 53, 7, 6, 5, 4, 87, 3, 2, 74, 75, 89, 88, 60, 59, 58, 57, 56, 55, 54, 1, 0 }
}

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32* @_Znwj(i32) local_unnamed_addr

declare i32 @__cxa_begin_catch() local_unnamed_addr

declare i32 @__cxa_allocate_exception(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__cxa_atexit(void (i32*)*, i32*, i32*) local_unnamed_addr

declare i32 @_ZdlPvj(i32*, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32* @_Znaj(i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @__dynamic_cast(i32, i32, i32, i32) local_unnamed_addr

declare void @_ZdaPv(i32*, i32*) local_unnamed_addr

declare i32 @__cxa_rethrow() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @__cxa_end_catch() local_unnamed_addr

declare i32 @__cxa_throw(i32, i32, i32) local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4484}
!5 = !{i64 4500}
!6 = !{i64 4516}
!7 = !{i64 4532}
!8 = !{i64 4548}
!9 = !{i64 4564}
!10 = !{i64 4580}
!11 = !{i64 4596}
!12 = !{i64 4612}
!13 = !{i64 4628}
!14 = !{i64 4644}
!15 = !{i64 4660}
!16 = !{i64 4676}
!17 = !{i64 4692}
!18 = !{i64 4708}
!19 = !{i64 4724}
!20 = !{i64 4740}
!21 = !{i64 4756}
!22 = !{i64 4772}
!23 = !{i64 4788}
!24 = !{i64 4804}
!25 = !{i64 4816}
!26 = !{i64 4825}
!27 = !{i64 4840}
!28 = !{i64 4844}
!29 = !{i64 4852}
!30 = !{i64 4860}
!31 = !{i64 4866}
!32 = !{i64 4867}
!33 = !{i64 4878}
!34 = !{i64 4881}
!35 = !{i64 4888}
!36 = !{i64 4889}
!37 = !{i64 4897}
!38 = !{i64 4899}
!39 = !{i64 4916}
!40 = !{i64 4935}
!41 = !{i64 4936}
!42 = !{i64 4941}
!43 = !{i64 4943}
!44 = !{i64 4945}
!45 = !{i64 4947}
!46 = !{i64 4959}
!47 = !{i64 4967}
!48 = !{i64 4976}
!49 = !{i64 4977}
!50 = !{i64 4986}
!51 = !{i64 4989}
!52 = !{i64 4991}
!53 = !{i64 4994}
!54 = !{i64 5001}
!55 = !{i64 5002}
!56 = !{i64 5012}
!57 = !{i64 5015}
!58 = !{i64 5016}
!59 = !{i64 5021}
!60 = !{i64 5028}
!61 = !{i64 5035}
!62 = !{i64 5040}
!63 = !{i64 5057}
!64 = !{i64 5068}
!65 = !{i64 5076}
!66 = !{i64 5086}
!67 = !{i64 5100}
!68 = !{i64 5107}
!69 = !{i64 5115}
!70 = !{i64 5123}
!71 = !{i64 5129}
!72 = !{i64 5143}
!73 = !{i64 5167}
!74 = !{i64 5184}
!75 = !{i64 5190}
!76 = !{i64 5195}
!77 = !{i64 5199}
!78 = !{i64 5203}
!79 = !{i64 5216}
!80 = !{i64 5233}
!81 = !{i64 5272}
!82 = !{i64 5280}
!83 = !{i64 5350}
!84 = !{i64 5360}
!85 = !{i64 5368}
!86 = !{i64 5384}
!87 = !{i64 5391}
!88 = !{i64 5393}
!89 = !{i64 5399}
!90 = !{i64 5401}
!91 = !{i64 5406}
!92 = !{i64 5414}
!93 = !{i64 5419}
!94 = !{i64 5478}
!95 = !{i64 5483}
!96 = !{i64 5497}
!97 = !{i64 5508}
!98 = !{i64 5516}
!99 = !{i64 5520}
!100 = !{i64 5521}
!101 = !{i64 5533}
!102 = !{i64 5547}
!103 = !{i64 5560}
!104 = !{i64 5566}
!105 = !{i64 5568}
!106 = !{i64 5580}
!107 = !{i64 5588}
!108 = !{i64 5596}
!109 = !{i64 5603}
!110 = !{i64 5605}
!111 = !{i64 5616}
!112 = !{i64 5621}
!113 = !{i64 5631}
!114 = !{i64 5641}
!115 = !{i64 5644}
!116 = !{i64 5655}
!117 = !{i64 5661}
!118 = !{i64 5663}
!119 = !{i64 5665}
!120 = !{i64 5669}
!121 = !{i64 5686}
!122 = !{i64 5698}
!123 = !{i64 5704}
!124 = !{i64 5712}
!125 = !{i64 5719}
!126 = !{i64 5729}
!127 = !{i64 5744}
!128 = !{i64 5749}
!129 = !{i64 5756}
!130 = !{i64 5763}
!131 = !{i64 5765}
!132 = !{i64 5774}
!133 = !{i64 5784}
!134 = !{i64 5794}
!135 = !{i64 5795}
!136 = !{i64 5806}
!137 = !{i64 5821}
!138 = !{i64 5845}
!139 = !{i64 5863}
!140 = !{i64 5870}
!141 = !{i64 5877}
!142 = !{i64 5908}
!143 = !{i64 5911}
!144 = !{i64 5913}
!145 = !{i64 5916}
!146 = !{i64 5922}
!147 = !{i64 5929}
!148 = !{i64 5931}
!149 = !{i64 5940}
!150 = !{i64 5941}
!151 = !{i64 5955}
!152 = !{i64 5976}
!153 = !{i64 5983}
!154 = !{i64 5993}
!155 = !{i64 6010}
!156 = !{i64 6013}
!157 = !{i64 6020}
!158 = !{i64 6027}
!159 = !{i64 6029}
!160 = !{i64 6038}
!161 = !{i64 6048}
!162 = !{i64 6049}
!163 = !{i64 6064}
!164 = !{i64 6080}
!165 = !{i64 6091}
!166 = !{i64 6097}
!167 = !{i64 6106}
!168 = !{i64 6120}
!169 = !{i64 6126}
!170 = !{i64 6131}
!171 = !{i64 6136}
!172 = !{i64 6139}
!173 = !{i64 6142}
!174 = !{i64 6148}
!175 = !{i64 6150}
!176 = !{i64 6154}
!177 = !{i64 6157}
!178 = !{i64 6163}
!179 = !{i64 6171}
!180 = !{i64 6176}
!181 = !{i64 6179}
!182 = !{i64 6185}
!183 = !{i64 6191}
!184 = !{i64 6194}
!185 = !{i64 6196}
!186 = !{i64 6198}
!187 = !{i64 6201}
!188 = !{i64 6207}
!189 = !{i64 6215}
!190 = !{i64 6217}
!191 = !{i64 6219}
!192 = !{i64 6222}
!193 = !{i64 6228}
!194 = !{i64 6244}
!195 = !{i64 6255}
!196 = !{i64 6262}
!197 = !{i64 6275}
!198 = !{i64 6283}
!199 = !{i64 6293}
!200 = !{i64 6302}
!201 = !{i64 6303}
!202 = !{i64 6312}
!203 = !{i64 6344}
!204 = !{i64 6349}
!205 = !{i64 6380}
!206 = !{i64 6393}
!207 = !{i64 6401}
!208 = !{i64 6408}
!209 = !{i64 6414}
!210 = !{i64 6424}
!211 = !{i64 6429}
!212 = !{i64 6435}
!213 = !{i64 6442}
!214 = !{i64 6449}
!215 = !{i64 6456}
!216 = !{i64 6463}
!217 = !{i64 6472}
!218 = !{i64 6480}
!219 = !{i64 6488}
!220 = !{i64 6496}
!221 = !{i64 6503}
!222 = !{i64 6505}
!223 = !{i64 6520}
!224 = !{i64 6528}
!225 = !{i64 6533}
!226 = !{i64 6539}
!227 = !{i64 6556}
!228 = !{i64 6557}
!229 = !{i64 6561}
!230 = !{i64 6583}
!231 = !{i64 6592}
!232 = !{i64 6605}
!233 = !{i64 6608}
!234 = !{i64 6614}
!235 = !{i64 6627}
!236 = !{i64 6644}
!237 = !{i64 6652}
!238 = !{i64 6657}
!239 = !{i64 6668}
!240 = !{i64 6675}
!241 = !{i64 6677}
!242 = !{i64 6689}
!243 = !{i64 6698}
!244 = !{i64 6712}
!245 = !{i64 6718}
!246 = !{i64 6719}
!247 = !{i64 6724}
!248 = !{i64 6733}
!249 = !{i64 6739}
!250 = !{i64 6742}
!251 = !{i64 6747}
!252 = !{i64 6756}
!253 = !{i64 6762}
!254 = !{i64 6765}
!255 = !{i64 6773}
!256 = !{i64 6780}
!257 = !{i64 6786}
!258 = !{i64 6789}
!259 = !{i64 6794}
!260 = !{i64 6803}
!261 = !{i64 6809}
!262 = !{i64 6812}
!263 = !{i64 6817}
!264 = !{i64 6826}
!265 = !{i64 6832}
!266 = !{i64 6835}
!267 = !{i64 6840}
!268 = !{i64 6849}
!269 = !{i64 6855}
!270 = !{i64 6858}
!271 = !{i64 6866}
!272 = !{i64 6873}
!273 = !{i64 6879}
!274 = !{i64 6882}
!275 = !{i64 6887}
!276 = !{i64 6896}
!277 = !{i64 6902}
!278 = !{i64 6905}
!279 = !{i64 6910}
!280 = !{i64 6919}
!281 = !{i64 6925}
!282 = !{i64 6928}
!283 = !{i64 6936}
!284 = !{i64 6943}
!285 = !{i64 6949}
!286 = !{i64 6952}
!287 = !{i64 6960}
!288 = !{i64 6967}
!289 = !{i64 6973}
!290 = !{i64 6976}
!291 = !{i64 6984}
!292 = !{i64 6991}
!293 = !{i64 6997}
!294 = !{i64 7000}
!295 = !{i64 7012}
!296 = !{i64 7026}
!297 = !{i64 7032}
!298 = !{i64 7042}
!299 = !{i64 7048}
!300 = !{i64 7054}
!301 = !{i64 7074}
!302 = !{i64 7080}
!303 = !{i64 7090}
!304 = !{i64 7096}
!305 = !{i64 7107}
!306 = !{i64 7117}
!307 = !{i64 7127}
!308 = !{i64 7137}
!309 = !{i64 7142}
!310 = !{i64 7155}
!311 = !{i64 7157}
!312 = !{i64 7160}
!313 = !{i64 7164}
!314 = !{i64 7169}
!315 = !{i64 7178}
!316 = !{i64 7180}
!317 = !{i64 7187}
!318 = !{i64 7201}
!319 = !{i64 7203}
!320 = !{i64 7206}
!321 = !{i64 7210}
!322 = !{i64 7215}
!323 = !{i64 7224}
!324 = !{i64 7226}
!325 = !{i64 7233}
!326 = !{i64 7247}
!327 = !{i64 7249}
!328 = !{i64 7252}
!329 = !{i64 7256}
!330 = !{i64 7261}
!331 = !{i64 7270}
!332 = !{i64 7272}
!333 = !{i64 7279}
!334 = !{i64 7285}
!335 = !{i64 7290}
!336 = !{i64 7296}
!337 = !{i64 7313}
!338 = !{i64 7319}
!339 = !{i64 7321}
!340 = !{i64 7324}
!341 = !{i64 7328}
!342 = !{i64 7333}
!343 = !{i64 7350}
!344 = !{i64 7352}
!345 = !{i64 7358}
!346 = !{i64 7361}
!347 = !{i64 7363}
!348 = !{i64 7366}
!349 = !{i64 7370}
!350 = !{i64 7376}
!351 = !{i64 7393}
!352 = !{i64 7399}
!353 = !{i64 7401}
!354 = !{i64 7404}
!355 = !{i64 7408}
!356 = !{i64 7413}
!357 = !{i64 7430}
!358 = !{i64 7432}
!359 = !{i64 7438}
!360 = !{i64 7441}
!361 = !{i64 7443}
!362 = !{i64 7446}
!363 = !{i64 7450}
!364 = !{i64 7461}
!365 = !{i64 7471}
!366 = !{i64 7476}
!367 = !{i64 7482}
!368 = !{i64 7488}
!369 = !{i64 7493}
!370 = !{i64 7498}
!371 = !{i64 7508}
!372 = !{i64 7527}
!373 = !{i64 7539}
!374 = !{i64 7548}
!375 = !{i64 7567}
!376 = !{i64 7579}
!377 = !{i64 7588}
!378 = !{i64 7607}
!379 = !{i64 7619}
!380 = !{i64 7624}
!381 = !{i64 7629}
!382 = !{i64 7640}
!383 = !{i64 7659}
!384 = !{i64 7671}
!385 = !{i64 7680}
!386 = !{i64 7699}
!387 = !{i64 7711}
!388 = !{i64 7720}
!389 = !{i64 7739}
!390 = !{i64 7751}
!391 = !{i64 7760}
!392 = !{i64 7777}
!393 = !{i64 7783}
!394 = !{i64 7785}
!395 = !{i64 7788}
!396 = !{i64 7794}
!397 = !{i64 7806}
!398 = !{i64 7815}
!399 = !{i64 7817}
!400 = !{i64 7824}
!401 = !{i64 7834}
!402 = !{i64 7851}
!403 = !{i64 7857}
!404 = !{i64 7859}
!405 = !{i64 7862}
!406 = !{i64 7868}
!407 = !{i64 7880}
!408 = !{i64 7889}
!409 = !{i64 7891}
!410 = !{i64 7898}
!411 = !{i64 7900}
!412 = !{i64 7904}
!413 = !{i64 7935}
!414 = !{i64 7937}
!415 = !{i64 7939}
!416 = !{i64 7941}
!417 = !{i64 7947}
!418 = !{i64 7950}
!419 = !{i64 7953}
!420 = !{i64 7929}
!421 = !{i64 7955}
!422 = !{i64 7961}
!423 = !{i64 7966}
!424 = !{i64 7972}
!425 = !{i64 7992}
!426 = !{i64 8001}
!427 = !{i64 8002}
!428 = !{i64 8006}
!429 = !{i64 8037}
!430 = !{i64 8039}
!431 = !{i64 8041}
!432 = !{i64 8043}
!433 = !{i64 8049}
!434 = !{i64 8052}
!435 = !{i64 8055}
!436 = !{i64 8031}
!437 = !{i64 8057}
!438 = !{i64 8063}
!439 = !{i64 8068}
!440 = !{i64 8074}
!441 = !{i64 8094}
!442 = !{i64 8103}
!443 = !{i64 8118}
!444 = !{i64 8120}
!445 = !{i64 8123}
!446 = !{i64 8124}
!447 = !{i64 8137}
!448 = !{i64 8139}
!449 = !{i64 8148}
!450 = !{i64 8163}
!451 = !{i64 8165}
!452 = !{i64 8167}
!453 = !{i64 8169}
!454 = !{i64 8173}
!455 = !{i64 8184}
!456 = !{i64 8192}
!457 = !{i64 8204}
!458 = !{i64 8210}
!459 = !{i64 8212}
!460 = !{i64 8215}
!461 = !{i64 8221}
!462 = !{i64 8225}
!463 = !{i64 8254}
!464 = !{i64 8270}
!465 = !{i64 8282}
!466 = !{i64 8290}
!467 = !{i64 8305}
!468 = !{i64 8311}
!469 = !{i64 8313}
!470 = !{i64 8316}
!471 = !{i64 8319}
!472 = !{i64 8322}
!473 = !{i64 8327}
!474 = !{i64 8358}
!475 = !{i64 8371}
!476 = !{i64 8374}
!477 = !{i64 8384}
!478 = !{i64 8399}
!479 = !{i64 8401}
!480 = !{i64 8403}
!481 = !{i64 8410}
!482 = !{i64 8415}
!483 = !{i64 8422}
!484 = !{i64 8432}
!485 = !{i64 8447}
!486 = !{i64 8449}
!487 = !{i64 8451}
!488 = !{i64 8457}
!489 = !{i64 8462}
!490 = !{i64 8469}
!491 = !{i64 8470}
!492 = !{i64 8474}
!493 = !{i64 8508}
!494 = !{i64 8510}
!495 = !{i64 8490}
!496 = !{i64 8514}
!497 = !{i64 8528}
!498 = !{i64 8539}
!499 = !{i64 8542}
!500 = !{i64 8512}
!501 = !{i64 8520}
!502 = !{i64 8523}
!503 = !{i64 8552}
!504 = !{i64 8479}
!505 = !{i64 8555}
!506 = !{i64 8561}
!507 = !{i64 8581}
!508 = !{i64 8592}
!509 = !{i64 8618}
!510 = !{i64 8641}
!511 = !{i64 8650}
!512 = !{i64 8655}
!513 = !{i64 8660}
!514 = !{i64 8670}
!515 = !{i64 8672}
!516 = !{i64 8679}
!517 = !{i64 8694}
!518 = !{i64 8709}
!519 = !{i64 8719}
!520 = !{i64 8733}
!521 = !{i64 8738}
!522 = !{i64 8743}
!523 = !{i64 8753}
!524 = !{i64 8755}
!525 = !{i64 8762}
!526 = !{i64 8782}
!527 = !{i64 8791}
!528 = !{i64 8795}
!529 = !{i64 8799}
!530 = !{i64 8803}
!531 = !{i64 8821}
!532 = !{i64 8835}
!533 = !{i64 8846}
!534 = !{i64 8848}
!535 = !{i64 8852}
!536 = !{i64 8863}
!537 = !{i64 8869}
!538 = !{i64 8872}
!539 = !{i64 8898}
!540 = !{i64 8904}
!541 = !{i64 8907}
!542 = !{i64 8913}
!543 = !{i64 8932}
!544 = !{i64 8943}
!545 = !{i64 8952}
