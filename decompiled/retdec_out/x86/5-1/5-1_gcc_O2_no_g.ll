source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%_Unwind_Exception = type { i32 }

@global_var_2bea = local_unnamed_addr constant i32 1157627904
@global_var_2be9 = constant i32 0
@global_var_2ba0 = constant i32 1343111756
@global_var_2b6f = constant i32 239620110
@global_var_2b2f = constant i32 240339982
@global_var_2ad7 = constant i32 1664093768
@global_var_2a28 = local_unnamed_addr constant i32 10
@global_var_298b = constant i32 0
@global_var_28a = global i32 0
@global_var_2bf = global i32 0
@global_var_2832 = constant i32 2883584
@global_var_270a = constant i32 1108872782
@global_var_254b = constant i32 0
@global_var_24fb = constant i32 0
@global_var_232a = local_unnamed_addr constant i32 95485951
@global_var_22fa = local_unnamed_addr constant i32 48300031
@global_var_22ca = local_unnamed_addr constant i32 140050431
@global_var_229a = local_unnamed_addr constant i32 107806719
@global_var_226a = local_unnamed_addr constant i32 164167679
@global_var_223a = local_unnamed_addr constant i32 4456448
@global_var_220a = local_unnamed_addr constant [8 x i8] c"TTIBase\00"
@global_var_21da = local_unnamed_addr constant i32 0
@global_var_21aa = local_unnamed_addr constant [33 x i8] c"pp_exceptionvE16DerivedException\00"
@global_var_201a = local_unnamed_addr constant i32 -1243209667
@0 = external global i32
@global_var_3e9 = global i64 0

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define void @function_1150(i32* %d) local_unnamed_addr {
dec_label_pc_1150:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_1160(i32 %flag, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i32 (i32, i8*, ...) @__printf_chk(i32 %flag, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32* @function_1170(i32 %size) local_unnamed_addr {
dec_label_pc_1170:
  %0 = call i32* @_Znwj(i32 %size), !insn.addr !6
  ret i32* %0, !insn.addr !6
}

define i32 @function_1180() local_unnamed_addr {
dec_label_pc_1180:
  %0 = call i32 @__cxa_begin_catch(), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1190() local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 @__cxa_allocate_exception(), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_11a0(i8* %s) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = call i32 @strlen(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_11b0(void (i32*)* %func, i32* %arg, i32* %dso_handle) local_unnamed_addr {
dec_label_pc_11b0:
  %0 = call i32 @__cxa_atexit(void (i32*)* %func, i32* %arg, i32* %dso_handle), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_11c0(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i32 @_ZdlPvj(i32* %arg1, i32 %arg2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_11d0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_11d0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @function_11e0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_11e0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define void @function_11f0() local_unnamed_addr {
dec_label_pc_11f0:
  call void @__stack_chk_fail(), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_1200(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @__dynamic_cast(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1210(i32 %arg1) local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i32 @__cxa_rethrow(i32 %arg1), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_1220(i8* %s) local_unnamed_addr {
dec_label_pc_1220:
  %0 = call i32 @puts(i8* %s), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_1230() local_unnamed_addr {
dec_label_pc_1230:
  %0 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_1240() local_unnamed_addr {
dec_label_pc_1240:
  %0 = call i32 @__cxa_end_catch(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_1250() local_unnamed_addr {
dec_label_pc_1250:
  %0 = call i32 @__cxa_throw(), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @function_1260(%_Unwind_Exception* %object) local_unnamed_addr {
dec_label_pc_1260:
  call void @_Unwind_Resume(%_Unwind_Exception* %object), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @_Z18test_cpp_exceptionv() local_unnamed_addr {
dec_label_pc_1270:
  %0 = alloca i32
  %edi.1.reg2mem = alloca i32, !insn.addr !22
  %esp.2.reg2mem = alloca i32, !insn.addr !22
  %eax.0.reg2mem = alloca i32, !insn.addr !22
  %esp.1.reg2mem = alloca i32, !insn.addr !22
  %stack_var_-32.02.reg2mem = alloca i32, !insn.addr !22
  %edi.03.reg2mem = alloca i32, !insn.addr !22
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-76 = alloca %_Unwind_Exception*, align 4
  %stack_var_-60 = alloca i32, align 4
  %3 = call i32 @__x86.get_pc_thunk.si(i32 %1), !insn.addr !23
  %4 = call i32 @__cxa_allocate_exception(), !insn.addr !24
  %5 = inttoptr i32 %4 to i32*, !insn.addr !25
  store i32 42, i32* %5, align 4, !insn.addr !25
  store i32 %4, i32* %stack_var_-60, align 4, !insn.addr !26
  %6 = call i32 @__cxa_throw(), !insn.addr !27
  %7 = icmp eq i32 %2, 1, !insn.addr !28
  %8 = inttoptr i32 %6 to %_Unwind_Exception*
  store %_Unwind_Exception* %8, %_Unwind_Exception** %stack_var_-76, align 4
  br i1 %7, label %dec_label_pc_12e7.thread, label %dec_label_pc_12ea, !insn.addr !29

dec_label_pc_12e7.thread:                         ; preds = %dec_label_pc_1270
  %9 = ptrtoint i32* %stack_var_-60 to i32, !insn.addr !26
  %10 = call i32 @__cxa_begin_catch(), !insn.addr !30
  %11 = inttoptr i32 %10 to i32*, !insn.addr !31
  %12 = load i32, i32* %11, align 4, !insn.addr !31
  %13 = call i32 @__cxa_rethrow(i32 %12), !insn.addr !32
  %14 = call i32 @__cxa_end_catch(), !insn.addr !33
  store i32 %13, i32* %edi.03.reg2mem
  store i32 %12, i32* %stack_var_-32.02.reg2mem
  store i32 %9, i32* %esp.1.reg2mem
  br label %dec_label_pc_12f5

dec_label_pc_12ea:                                ; preds = %dec_label_pc_1270
  %15 = ptrtoint %_Unwind_Exception** %stack_var_-76 to i32, !insn.addr !34
  call void @_Unwind_Resume(%_Unwind_Exception* %8), !insn.addr !35
  store i32 %6, i32* %edi.03.reg2mem, !insn.addr !35
  store i32 0, i32* %stack_var_-32.02.reg2mem, !insn.addr !35
  store i32 %15, i32* %esp.1.reg2mem, !insn.addr !35
  br label %dec_label_pc_12f5, !insn.addr !35

dec_label_pc_12f5:                                ; preds = %dec_label_pc_12e7.thread, %dec_label_pc_12ea
  %esp.1.reload = load i32, i32* %esp.1.reg2mem
  %stack_var_-32.02.reload = load i32, i32* %stack_var_-32.02.reg2mem
  %edi.03.reload = load i32, i32* %edi.03.reg2mem
  %16 = add i32 %esp.1.reload, -16, !insn.addr !36
  %17 = inttoptr i32 %16 to i32*, !insn.addr !36
  store i32 %edi.03.reload, i32* %17, align 4, !insn.addr !36
  %18 = call i32 @__cxa_begin_catch(), !insn.addr !37
  %19 = inttoptr i32 %18 to i32*, !insn.addr !38
  %20 = load i32, i32* %19, align 4, !insn.addr !38
  %21 = mul i32 %20, 2, !insn.addr !39
  %22 = add i32 %21, %stack_var_-32.02.reload, !insn.addr !40
  %23 = call i32 @__cxa_end_catch(), !insn.addr !41
  store i32 1, i32* %17, align 4, !insn.addr !42
  %24 = call i32 @__cxa_allocate_exception(), !insn.addr !43
  %25 = add i32 %1, 11242, !insn.addr !44
  %26 = add i32 %esp.1.reload, -8, !insn.addr !45
  %27 = inttoptr i32 %26 to i32*, !insn.addr !45
  store i32 0, i32* %27, align 4, !insn.addr !45
  %28 = add i32 %esp.1.reload, -12, !insn.addr !46
  %29 = inttoptr i32 %28 to i32*, !insn.addr !46
  store i32 %25, i32* %29, align 4, !insn.addr !46
  store i32 %24, i32* %17, align 4, !insn.addr !47
  %30 = call i32 @__cxa_throw(), !insn.addr !48
  %31 = icmp eq i32 %1, -11240, !insn.addr !49
  store i32 %30, i32* %eax.0.reg2mem, !insn.addr !50
  store i32 %16, i32* %esp.2.reg2mem, !insn.addr !50
  br i1 %31, label %dec_label_pc_1343, label %dec_label_pc_1333, !insn.addr !50

dec_label_pc_1333:                                ; preds = %dec_label_pc_12f5
  %32 = icmp eq i32 %25, 3, !insn.addr !51
  br i1 %32, label %dec_label_pc_135b, label %dec_label_pc_1338, !insn.addr !52

dec_label_pc_1338:                                ; preds = %dec_label_pc_1333
  %33 = add i32 %esp.1.reload, -32, !insn.addr !53
  %34 = inttoptr i32 %33 to i32*, !insn.addr !53
  store i32 %30, i32* %34, align 4, !insn.addr !53
  call void @_Unwind_Resume(%_Unwind_Exception* bitcast (i32* @0 to %_Unwind_Exception*)), !insn.addr !54
  store i32 ptrtoint (i32* @0 to i32), i32* %eax.0.reg2mem, !insn.addr !54
  store i32 %33, i32* %esp.2.reg2mem, !insn.addr !54
  br label %dec_label_pc_1343, !insn.addr !54

dec_label_pc_1343:                                ; preds = %dec_label_pc_1338, %dec_label_pc_12f5
  %esp.2.reload = load i32, i32* %esp.2.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %35 = add i32 %22, 100, !insn.addr !55
  %36 = add i32 %esp.2.reload, -16, !insn.addr !56
  %37 = inttoptr i32 %36 to i32*, !insn.addr !56
  store i32 %eax.0.reload, i32* %37, align 4, !insn.addr !56
  %38 = call i32 @__cxa_begin_catch(), !insn.addr !57
  %39 = call i32 @__cxa_end_catch(), !insn.addr !58
  store i32 %35, i32* %edi.1.reg2mem, !insn.addr !59
  br label %dec_label_pc_1374, !insn.addr !59

dec_label_pc_135b:                                ; preds = %dec_label_pc_1333
  %40 = add i32 %22, 200, !insn.addr !60
  %41 = add i32 %esp.1.reload, -32, !insn.addr !61
  %42 = inttoptr i32 %41 to i32*, !insn.addr !61
  store i32 %30, i32* %42, align 4, !insn.addr !61
  %43 = call i32 @__cxa_begin_catch(), !insn.addr !62
  %44 = call i32 @__cxa_end_catch(), !insn.addr !63
  store i32 %40, i32* %edi.1.reg2mem, !insn.addr !64
  br label %dec_label_pc_1374, !insn.addr !64

dec_label_pc_1374:                                ; preds = %dec_label_pc_135b, %dec_label_pc_1343
  %edi.1.reload = load i32, i32* %edi.1.reg2mem
  ret i32 %edi.1.reload, !insn.addr !65

; uselistorder directives
  uselistorder i32 %30, { 1, 2, 0 }
  uselistorder i32 %esp.1.reload, { 4, 3, 0, 1, 2 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder %_Unwind_Exception** %stack_var_-76, { 1, 0 }
  uselistorder i32 %1, { 2, 1, 0 }
  uselistorder i32* %edi.03.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-32.02.reg2mem, { 0, 2, 1 }
  uselistorder i32* %esp.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder void (%_Unwind_Exception*)* @_Unwind_Resume, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12f5, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1380:
  %0 = call i32 @_Z20test_cpp_oo_featuresv(), !insn.addr !66
  ret i32 0, !insn.addr !67
}

define i32 @_GLOBAL__sub_I__Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_13a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !68
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2be9 to i32), i32 144), !insn.addr !69
  %4 = call i32 @_ZNSt8ios_base4InitC1Ev(), !insn.addr !70
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2be9 to i32), i32 112), !insn.addr !71
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2be9 to i32), i32 104), !insn.addr !72
  %7 = inttoptr i32 %6 to i32*, !insn.addr !72
  %8 = load i32, i32* %7, align 4, !insn.addr !72
  %9 = inttoptr i32 %8 to void (i32*)*, !insn.addr !72
  %10 = inttoptr i32 %3 to i32*, !insn.addr !73
  %11 = inttoptr i32 %5 to i32*, !insn.addr !73
  %12 = call i32 @__cxa_atexit(void (i32*)* %9, i32* %10, i32* %11), !insn.addr !73
  ret i32 %12, !insn.addr !74
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_13e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_140c(i32 %2), !insn.addr !75
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ba0 to i32), i32 88), !insn.addr !76
  %6 = inttoptr i32 %5 to i32*, !insn.addr !76
  %7 = load i32, i32* %6, align 4, !insn.addr !76
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !77
  %9 = call i32 @__asm_hlt(), !insn.addr !78
  unreachable, !insn.addr !78

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_140c(i32 %arg1) local_unnamed_addr {
dec_label_pc_140c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !79
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !80
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1420:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !81
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !81
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2b6f to i32), i32 132), !insn.addr !82
  store i32 %3, i32* %merge.reg2mem, !insn.addr !83
  br i1 icmp eq (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2b6f to i32), i32 132), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2b6f to i32), i32 132))), i32 0), label %dec_label_pc_1445, label %dec_label_pc_143b, !insn.addr !83

dec_label_pc_143b:                                ; preds = %dec_label_pc_1420
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2b6f to i32), i32 92), !insn.addr !84
  %5 = inttoptr i32 %4 to i32*, !insn.addr !84
  %6 = load i32, i32* %5, align 4, !insn.addr !84
  store i32 %6, i32* %merge.reg2mem
  br label %dec_label_pc_1445

dec_label_pc_1445:                                ; preds = %dec_label_pc_143b, %dec_label_pc_1420
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !85

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1460:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !86
  ret i32 ashr (i32 add (i32 lshr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2b2f to i32), i32 132), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2b2f to i32), i32 132))), i32 31), i32 ashr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_2b2f to i32), i32 132), i32 sub (i32 0, i32 add (i32 ptrtoint (i32* @global_var_2b2f to i32), i32 132))), i32 2)), i32 1), !insn.addr !87
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_14b0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !88
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !89
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ad7 to i32), i32 132), !insn.addr !90
  %4 = inttoptr i32 %3 to i8*, !insn.addr !90
  %5 = load i8, i8* %4, align 1, !insn.addr !90
  %6 = icmp eq i8 %5, 0, !insn.addr !90
  %7 = icmp eq i1 %6, false, !insn.addr !91
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !91
  br i1 %7, label %dec_label_pc_1532, label %dec_label_pc_14d1, !insn.addr !91

dec_label_pc_14d1:                                ; preds = %dec_label_pc_14b0
  %8 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ad7 to i32), i32 84), !insn.addr !92
  %9 = inttoptr i32 %8 to i32*, !insn.addr !92
  %10 = load i32, i32* %9, align 4, !insn.addr !92
  %11 = icmp eq i32 %10, 0, !insn.addr !93
  br i1 %11, label %dec_label_pc_14ee, label %dec_label_pc_14db, !insn.addr !94

dec_label_pc_14db:                                ; preds = %dec_label_pc_14d1
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2ad7 to i32), i32 112), !insn.addr !95
  %13 = inttoptr i32 %12 to i32*, !insn.addr !95
  %14 = load i32, i32* %13, align 4, !insn.addr !95
  %15 = inttoptr i32 %14 to i32*, !insn.addr !96
  call void @__cxa_finalize(i32* %15), !insn.addr !96
  br label %dec_label_pc_14ee, !insn.addr !97

dec_label_pc_14ee:                                ; preds = %dec_label_pc_14db, %dec_label_pc_14d1
  %16 = call i32 @deregister_tm_clones(), !insn.addr !98
  store i8 1, i8* %4, align 1, !insn.addr !99
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_1532, !insn.addr !99

dec_label_pc_1532:                                ; preds = %dec_label_pc_14ee, %dec_label_pc_14b0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !100

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1540:
  %0 = call i32 @register_tm_clones(), !insn.addr !101
  ret i32 %0, !insn.addr !101
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1549:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !102
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_154d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !103
}

define i32 @_Z20test_cpp_member_funcv() local_unnamed_addr {
dec_label_pc_1560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !104
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !105
  store i32 1953719636, i32* %stack_var_-48, align 4, !insn.addr !106
  %4 = bitcast i32* %stack_var_-48 to i8*
  %5 = call i32 @strlen(i8* nonnull %4), !insn.addr !107
  %6 = call i32 @__readgsdword(i32 20), !insn.addr !108
  %7 = icmp eq i32 %3, %6, !insn.addr !108
  %8 = icmp eq i1 %7, false, !insn.addr !109
  br i1 %8, label %dec_label_pc_15ef, label %dec_label_pc_15ea, !insn.addr !109

dec_label_pc_15ea:                                ; preds = %dec_label_pc_1560
  %9 = add i32 %5, 4700, !insn.addr !110
  ret i32 %9, !insn.addr !111

dec_label_pc_15ef:                                ; preds = %dec_label_pc_1560
  %10 = call i32 @__stack_chk_fail_local(), !insn.addr !112
  ret i32 %10, !insn.addr !113
}

define i32 @_Z20test_cpp_constructorv() local_unnamed_addr {
dec_label_pc_1600:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !114
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_298b to i32), i32 140), !insn.addr !115
  %2 = inttoptr i32 %1 to i32*, !insn.addr !115
  %3 = load i32, i32* %2, align 4, !insn.addr !115
  %4 = mul i32 %3, ptrtoint (i64* @global_var_3e9 to i32), !insn.addr !115
  %5 = add i32 %4, 21, !insn.addr !116
  ret i32 %5, !insn.addr !117
}

define i32 @_Z17call_virtual_funcP4Basei(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1620:
  %0 = ptrtoint i32* %arg1 to i32
  ret i32 %0, !insn.addr !118
}

define i32 @_Z21test_cpp_virtual_funcv() local_unnamed_addr {
dec_label_pc_1630:
  ret i32 42, !insn.addr !119
}

define i32 @_Z29test_cpp_multiple_inheritancev() local_unnamed_addr {
dec_label_pc_1640:
  ret i32 71, !insn.addr !120
}

define i32 @_Z28test_cpp_diamond_inheritancev() local_unnamed_addr {
dec_label_pc_1650:
  ret i32 ptrtoint (i32* @global_var_28a to i32), !insn.addr !121
}

define i32 @_Z26test_cpp_operator_overloadv() local_unnamed_addr {
dec_label_pc_1660:
  ret i32 22, !insn.addr !122
}

define i32 @_Z22test_cpp_template_funcv() local_unnamed_addr {
dec_label_pc_1670:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-24 = alloca i32, align 4
  %0 = call i32 @__readgsdword(i32 20), !insn.addr !123
  %1 = call i32 @_Z12template_maxIiET_S0_S0_(i32 0, i32 0), !insn.addr !124
  %2 = call double @_Z12template_maxIdET_S0_S0_(double 0.000000e+00, double 0x40040000), !insn.addr !125
  store i32 10, i32* %stack_var_-24, align 4, !insn.addr !126
  store i32 20, i32* %stack_var_-20, align 4, !insn.addr !127
  call void @_Z13template_swapIiEvRT_S1_(i32* nonnull %stack_var_-24, i32* nonnull %stack_var_-20), !insn.addr !128
  %3 = load i32, i32* %stack_var_-24, align 4, !insn.addr !129
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !130
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !131
  %6 = icmp eq i32 %0, %5, !insn.addr !131
  %7 = icmp eq i1 %6, false, !insn.addr !132
  br i1 %7, label %dec_label_pc_170e, label %dec_label_pc_1709, !insn.addr !132

dec_label_pc_1709:                                ; preds = %dec_label_pc_1670
  %8 = fptrunc double %2 to float, !insn.addr !133
  %9 = bitcast float %8 to i32, !insn.addr !133
  %10 = add i32 %1, %9, !insn.addr !134
  %11 = add i32 %10, %3, !insn.addr !129
  %12 = add i32 %11, %4, !insn.addr !130
  ret i32 %12, !insn.addr !135

dec_label_pc_170e:                                ; preds = %dec_label_pc_1670
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !136
  ret i32 %13, !insn.addr !137

; uselistorder directives
  uselistorder i32* %stack_var_-24, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20, { 1, 0, 2 }
}

define i32 @_Z23test_cpp_template_classv() local_unnamed_addr {
dec_label_pc_1720:
  ret i32 16, !insn.addr !138
}

define i32 @_Z15test_cpp_lambdav() local_unnamed_addr {
dec_label_pc_1730:
  ret i32 85, !insn.addr !139
}

define i32 @_Z18test_cpp_smart_ptrv() local_unnamed_addr {
dec_label_pc_1740:
  ret i32 ptrtoint (i32* @global_var_2bf to i32), !insn.addr !140
}

define i32 @_Z13test_cpp_rttiv() local_unnamed_addr {
dec_label_pc_1750:
  %0 = alloca i32
  %esi.1.reg2mem = alloca i32, !insn.addr !141
  %esi.0.reg2mem = alloca i32, !insn.addr !141
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !142
  %3 = call i32* @_Znwj(i32 4), !insn.addr !143
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -332), !insn.addr !144
  store i32 %4, i32* %3, align 4, !insn.addr !145
  %5 = call i32* @_Znwj(i32 4), !insn.addr !146
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -312), !insn.addr !147
  store i32 %6, i32* %5, align 4, !insn.addr !148
  %7 = load i32, i32* %3, align 4, !insn.addr !149
  %8 = add i32 %7, -4, !insn.addr !150
  %9 = inttoptr i32 %8 to i32*, !insn.addr !150
  %10 = load i32, i32* %9, align 4, !insn.addr !150
  %11 = add i32 %10, 4, !insn.addr !151
  %12 = inttoptr i32 %11 to i32*, !insn.addr !151
  %13 = load i32, i32* %12, align 4, !insn.addr !151
  %14 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -7552), !insn.addr !152
  %15 = icmp eq i32 %13, %14, !insn.addr !153
  store i32 10, i32* %esi.0.reg2mem, !insn.addr !154
  br i1 %15, label %dec_label_pc_17cc, label %dec_label_pc_17af, !insn.addr !154

dec_label_pc_17af:                                ; preds = %dec_label_pc_1750
  %16 = inttoptr i32 %13 to i8*, !insn.addr !155
  %17 = load i8, i8* %16, align 1, !insn.addr !155
  %18 = icmp eq i8 %17, 42, !insn.addr !155
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !156
  br i1 %18, label %dec_label_pc_17cc, label %dec_label_pc_17b7, !insn.addr !156

dec_label_pc_17b7:                                ; preds = %dec_label_pc_17af
  %19 = inttoptr i32 %14 to i8*, !insn.addr !157
  %20 = call i32 @strcmp(i8* %16, i8* %19), !insn.addr !158
  %21 = icmp eq i32 %20, 0, !insn.addr !159
  %22 = select i1 %21, i32 10, i32 0, !insn.addr !160
  store i32 %22, i32* %esi.0.reg2mem, !insn.addr !160
  br label %dec_label_pc_17cc, !insn.addr !160

dec_label_pc_17cc:                                ; preds = %dec_label_pc_17b7, %dec_label_pc_17af, %dec_label_pc_1750
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -316), !insn.addr !161
  %24 = inttoptr i32 %23 to i32*, !insn.addr !161
  %25 = load i32, i32* %24, align 4, !insn.addr !161
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -7536), !insn.addr !162
  %27 = add i32 %25, 4, !insn.addr !163
  %28 = inttoptr i32 %27 to i32*, !insn.addr !163
  %29 = load i32, i32* %28, align 4, !insn.addr !163
  %30 = icmp eq i32 %29, %26, !insn.addr !164
  br i1 %30, label %dec_label_pc_17f5, label %dec_label_pc_17df, !insn.addr !165

dec_label_pc_17df:                                ; preds = %dec_label_pc_17cc
  %31 = inttoptr i32 %29 to i8*, !insn.addr !166
  %32 = load i8, i8* %31, align 1, !insn.addr !166
  %33 = icmp eq i8 %32, 42, !insn.addr !166
  store i32 %esi.0.reload, i32* %esi.1.reg2mem, !insn.addr !167
  br i1 %33, label %dec_label_pc_17f8, label %dec_label_pc_17e4, !insn.addr !167

dec_label_pc_17e4:                                ; preds = %dec_label_pc_17df
  %34 = inttoptr i32 %26 to i8*, !insn.addr !168
  %35 = call i32 @strcmp(i8* %31, i8* %34), !insn.addr !169
  %36 = icmp eq i32 %35, 0, !insn.addr !170
  %37 = icmp eq i1 %36, false, !insn.addr !171
  store i32 %esi.0.reload, i32* %esi.1.reg2mem, !insn.addr !171
  br i1 %37, label %dec_label_pc_17f8, label %dec_label_pc_17f5, !insn.addr !171

dec_label_pc_17f5:                                ; preds = %dec_label_pc_17e4, %dec_label_pc_17cc
  %38 = or i32 %esi.0.reload, 20, !insn.addr !172
  store i32 %38, i32* %esi.1.reg2mem, !insn.addr !172
  br label %dec_label_pc_17f8, !insn.addr !172

dec_label_pc_17f8:                                ; preds = %dec_label_pc_17f5, %dec_label_pc_17e4, %dec_label_pc_17df
  %39 = ptrtoint i32* %3 to i32, !insn.addr !143
  %40 = ptrtoint i32* %5 to i32
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  %41 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -280), !insn.addr !173
  %42 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -272), !insn.addr !174
  %43 = call i32 @__dynamic_cast(i32 %39, i32 %41, i32 %42, i32 0), !insn.addr !175
  %44 = add nsw i32 %esi.1.reload, 100, !insn.addr !176
  %45 = icmp eq i32 %43, 0, !insn.addr !177
  %46 = icmp eq i1 %45, false, !insn.addr !178
  %47 = select i1 %46, i32 %44, i32 %esi.1.reload, !insn.addr !178
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_2832 to i32), i32 -260), !insn.addr !179
  %49 = call i32 @__dynamic_cast(i32 %40, i32 %41, i32 %48, i32 0), !insn.addr !180
  %50 = add nsw i32 %47, 200, !insn.addr !181
  %51 = icmp eq i32 %49, 0, !insn.addr !182
  %52 = icmp eq i1 %51, false, !insn.addr !183
  %53 = select i1 %52, i32 %50, i32 %47, !insn.addr !183
  %54 = inttoptr i32 %13 to i8*, !insn.addr !184
  %55 = load i8, i8* %54, align 1, !insn.addr !184
  %56 = icmp eq i8 %55, 42, !insn.addr !184
  %57 = zext i1 %56 to i32, !insn.addr !185
  %58 = add i32 %13, %57, !insn.addr !186
  %59 = inttoptr i32 %58 to i8*, !insn.addr !187
  %60 = call i32 @strlen(i8* %59), !insn.addr !188
  %61 = add i32 %53, %60, !insn.addr !189
  ret i32 %61, !insn.addr !190

; uselistorder directives
  uselistorder i32 %47, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 2, 0, 1 }
  uselistorder i32 %13, { 0, 2, 1, 3 }
  uselistorder i32* %3, { 2, 0, 1 }
  uselistorder i32 %1, { 8, 7, 6, 5, 4, 0, 1, 2, 3 }
  uselistorder i32* %esi.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 (i32, i32, i32, i32)* @__dynamic_cast, { 1, 0, 2 }
  uselistorder i32 10, { 1, 0, 3, 2 }
}

define i32 @_Z20test_cpp_oo_featuresv() local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !191
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !192
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -8060), !insn.addr !193
  %5 = inttoptr i32 %4 to i8*, !insn.addr !194
  %6 = call i32 @puts(i8* %5), !insn.addr !195
  store i32 1953719636, i32* %stack_var_-48, align 4, !insn.addr !196
  %7 = bitcast i32* %stack_var_-48 to i8*
  %8 = call i32 @strlen(i8* nonnull %7), !insn.addr !197
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -8024), !insn.addr !198
  %10 = inttoptr i32 %9 to i8*, !insn.addr !199
  %11 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %10), !insn.addr !200
  %12 = call i32 @_Z20test_cpp_constructorv(), !insn.addr !201
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7994), !insn.addr !202
  %14 = inttoptr i32 %13 to i8*, !insn.addr !203
  %15 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %14), !insn.addr !204
  %16 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7966), !insn.addr !205
  %17 = inttoptr i32 %16 to i8*, !insn.addr !206
  %18 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %17), !insn.addr !207
  %19 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7938), !insn.addr !208
  %20 = inttoptr i32 %19 to i8*, !insn.addr !209
  %21 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %20), !insn.addr !210
  %22 = call i32 @_Z28test_cpp_diamond_inheritancev(), !insn.addr !211
  %23 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7910), !insn.addr !212
  %24 = inttoptr i32 %23 to i8*, !insn.addr !213
  %25 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %24), !insn.addr !214
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7881), !insn.addr !215
  %27 = inttoptr i32 %26 to i8*, !insn.addr !216
  %28 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %27), !insn.addr !217
  %29 = call i32 @_Z22test_cpp_template_funcv(), !insn.addr !218
  %30 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7853), !insn.addr !219
  %31 = inttoptr i32 %30 to i8*, !insn.addr !220
  %32 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %31), !insn.addr !221
  %33 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7825), !insn.addr !222
  %34 = inttoptr i32 %33 to i8*, !insn.addr !223
  %35 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %34), !insn.addr !224
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7797), !insn.addr !225
  %37 = inttoptr i32 %36 to i8*, !insn.addr !226
  %38 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %37), !insn.addr !227
  %39 = call i32 @_Z18test_cpp_exceptionv(), !insn.addr !228
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7769), !insn.addr !229
  %41 = inttoptr i32 %40 to i8*, !insn.addr !230
  %42 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %41), !insn.addr !231
  %43 = call i32 @_Z18test_cpp_smart_ptrv(), !insn.addr !232
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7740), !insn.addr !233
  %45 = inttoptr i32 %44 to i8*, !insn.addr !234
  %46 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %45), !insn.addr !235
  %47 = call i32 @_Z13test_cpp_rttiv(), !insn.addr !236
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_270a to i32), i32 -7711), !insn.addr !237
  %49 = inttoptr i32 %48 to i8*, !insn.addr !238
  %50 = call i32 (i32, i8*, ...) @__printf_chk(i32 1, i8* %49), !insn.addr !239
  %51 = call i32 @__readgsdword(i32 20), !insn.addr !240
  %52 = sub i32 %3, %51, !insn.addr !240
  %53 = icmp eq i32 %52, 0, !insn.addr !240
  %54 = icmp eq i1 %53, false, !insn.addr !241
  br i1 %54, label %dec_label_pc_1a1e, label %dec_label_pc_1a19, !insn.addr !241

dec_label_pc_1a19:                                ; preds = %dec_label_pc_1880
  ret i32 %52, !insn.addr !242

dec_label_pc_1a1e:                                ; preds = %dec_label_pc_1880
  %55 = call i32 @__stack_chk_fail_local(), !insn.addr !243
  ret i32 %55, !insn.addr !244

; uselistorder directives
  uselistorder i32 (i32, i8*, ...)* @__printf_chk, { 9, 8, 11, 10, 1, 0, 5, 4, 3, 2, 7, 6, 12 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 20, { 2, 3, 0, 4, 1, 5, 6, 7 }
}

define i32 @_ZN4Base12virtual_funcEi(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %0 = add i32 %arg1, 1, !insn.addr !245
  ret i32 %0, !insn.addr !246
}

define i32 @_ZNK4Base7getNameEv() local_unnamed_addr {
dec_label_pc_1a40:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !247
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_254b to i32), i32 -8076), !insn.addr !248
  ret i32 %1, !insn.addr !249
}

define i32 @_ZN4BaseD1Ev() local_unnamed_addr {
dec_label_pc_1a60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !250
}

define i32 @_ZN7Derived12virtual_funcEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 4, !insn.addr !251
  %2 = inttoptr i32 %1 to i32*, !insn.addr !251
  %3 = load i32, i32* %2, align 4, !insn.addr !251
  %4 = mul i32 %3, %arg2, !insn.addr !251
  ret i32 %4, !insn.addr !252
}

define i32 @_ZNK7Derived7getNameEv() local_unnamed_addr {
dec_label_pc_1a90:
  %0 = call i32 @__x86.get_pc_thunk.ax(i32 ptrtoint (i32* @0 to i32)), !insn.addr !253
  %1 = add i32 %0, add (i32 ptrtoint (i32* @global_var_24fb to i32), i32 -8071), !insn.addr !254
  ret i32 %1, !insn.addr !255

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 2, 1, 0 }
}

define i32 @_ZN12MultiDerived5funcAEv() local_unnamed_addr {
dec_label_pc_1ab0:
  ret i32 30, !insn.addr !256
}

define i32 @_ZN12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1ac0:
  ret i32 40, !insn.addr !257
}

define i32 @_ZThn8_N12MultiDerived5funcBEv() local_unnamed_addr {
dec_label_pc_1ad0:
  ret i32 40, !insn.addr !258
}

define i32 @_ZN7MiddleA4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1ae0:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !259
  %2 = add i32 %1, -12, !insn.addr !260
  %3 = inttoptr i32 %2 to i32*, !insn.addr !260
  %4 = load i32, i32* %3, align 4, !insn.addr !260
  %5 = add i32 %0, 4, !insn.addr !261
  %6 = add i32 %5, %4, !insn.addr !261
  %7 = inttoptr i32 %6 to i32*, !insn.addr !261
  %8 = load i32, i32* %7, align 4, !insn.addr !261
  %9 = add i32 %8, 150, !insn.addr !262
  ret i32 %9, !insn.addr !263
}

define i32 @_ZTv0_n12_N7MiddleA4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b00:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !264
  %1 = load i32, i32* %0, align 4, !insn.addr !264
  %2 = add i32 %1, -12, !insn.addr !265
  %3 = inttoptr i32 %2 to i32*, !insn.addr !265
  %4 = load i32, i32* %3, align 4, !insn.addr !265
  %5 = add i32 %4, %arg1, !insn.addr !265
  %6 = inttoptr i32 %5 to i32*, !insn.addr !266
  %7 = load i32, i32* %6, align 4, !insn.addr !266
  %8 = add i32 %7, -12, !insn.addr !267
  %9 = inttoptr i32 %8 to i32*, !insn.addr !267
  %10 = load i32, i32* %9, align 4, !insn.addr !267
  %11 = add i32 %5, 4, !insn.addr !268
  %12 = add i32 %11, %10, !insn.addr !268
  %13 = inttoptr i32 %12 to i32*, !insn.addr !268
  %14 = load i32, i32* %13, align 4, !insn.addr !268
  %15 = add i32 %14, 150, !insn.addr !269
  ret i32 %15, !insn.addr !270

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i32 @_ZN7MiddleB4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !271
  %2 = add i32 %1, -12, !insn.addr !272
  %3 = inttoptr i32 %2 to i32*, !insn.addr !272
  %4 = load i32, i32* %3, align 4, !insn.addr !272
  %5 = add i32 %0, 4, !insn.addr !273
  %6 = add i32 %5, %4, !insn.addr !273
  %7 = inttoptr i32 %6 to i32*, !insn.addr !273
  %8 = load i32, i32* %7, align 4, !insn.addr !273
  %9 = add i32 %8, 200, !insn.addr !274
  ret i32 %9, !insn.addr !275
}

define i32 @_ZTv0_n12_N7MiddleB4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b40:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !276
  %1 = load i32, i32* %0, align 4, !insn.addr !276
  %2 = add i32 %1, -12, !insn.addr !277
  %3 = inttoptr i32 %2 to i32*, !insn.addr !277
  %4 = load i32, i32* %3, align 4, !insn.addr !277
  %5 = add i32 %4, %arg1, !insn.addr !277
  %6 = inttoptr i32 %5 to i32*, !insn.addr !278
  %7 = load i32, i32* %6, align 4, !insn.addr !278
  %8 = add i32 %7, -12, !insn.addr !279
  %9 = inttoptr i32 %8 to i32*, !insn.addr !279
  %10 = load i32, i32* %9, align 4, !insn.addr !279
  %11 = add i32 %5, 4, !insn.addr !280
  %12 = add i32 %11, %10, !insn.addr !280
  %13 = inttoptr i32 %12 to i32*, !insn.addr !280
  %14 = load i32, i32* %13, align 4, !insn.addr !280
  %15 = add i32 %14, 200, !insn.addr !281
  ret i32 %15, !insn.addr !282

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i32 @_ZN14DiamondDerived4funcEv(i32* %result) local_unnamed_addr {
dec_label_pc_1b60:
  %0 = ptrtoint i32* %result to i32
  %1 = load i32, i32* %result, align 4, !insn.addr !283
  %2 = add i32 %1, -12, !insn.addr !284
  %3 = inttoptr i32 %2 to i32*, !insn.addr !284
  %4 = load i32, i32* %3, align 4, !insn.addr !284
  %5 = add i32 %0, 4, !insn.addr !285
  %6 = add i32 %5, %4, !insn.addr !285
  %7 = inttoptr i32 %6 to i32*, !insn.addr !285
  %8 = load i32, i32* %7, align 4, !insn.addr !285
  %9 = add i32 %8, 250, !insn.addr !286
  ret i32 %9, !insn.addr !287
}

define i32 @_ZTv0_n12_N14DiamondDerived4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !288
  %1 = load i32, i32* %0, align 4, !insn.addr !288
  %2 = add i32 %1, -12, !insn.addr !289
  %3 = inttoptr i32 %2 to i32*, !insn.addr !289
  %4 = load i32, i32* %3, align 4, !insn.addr !289
  %5 = add i32 %4, %arg1, !insn.addr !289
  %6 = inttoptr i32 %5 to i32*, !insn.addr !290
  %7 = load i32, i32* %6, align 4, !insn.addr !290
  %8 = add i32 %7, -12, !insn.addr !291
  %9 = inttoptr i32 %8 to i32*, !insn.addr !291
  %10 = load i32, i32* %9, align 4, !insn.addr !291
  %11 = add i32 %5, 4, !insn.addr !292
  %12 = add i32 %11, %10, !insn.addr !292
  %13 = inttoptr i32 %12 to i32*, !insn.addr !292
  %14 = load i32, i32* %13, align 4, !insn.addr !292
  %15 = add i32 %14, 250, !insn.addr !293
  ret i32 %15, !insn.addr !294

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i32 @_ZThn8_N14DiamondDerived4funcEv(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = add i32 %arg1, -8, !insn.addr !295
  %1 = inttoptr i32 %0 to i32*, !insn.addr !295
  %2 = load i32, i32* %1, align 4, !insn.addr !295
  %3 = add i32 %2, -12, !insn.addr !296
  %4 = inttoptr i32 %3 to i32*, !insn.addr !296
  %5 = load i32, i32* %4, align 4, !insn.addr !296
  %6 = add i32 %arg1, -4, !insn.addr !297
  %7 = add i32 %6, %5, !insn.addr !297
  %8 = inttoptr i32 %7 to i32*, !insn.addr !297
  %9 = load i32, i32* %8, align 4, !insn.addr !297
  %10 = add i32 %9, 250, !insn.addr !298
  ret i32 %10, !insn.addr !299

; uselistorder directives
  uselistorder i32 -12, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0 }
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @_ZNK12RTTIDerivedA7getTypeEv() local_unnamed_addr {
dec_label_pc_1bc0:
  ret i32 1, !insn.addr !300
}

define i32 @_ZNK12RTTIDerivedB7getTypeEv() local_unnamed_addr {
dec_label_pc_1bd0:
  ret i32 2, !insn.addr !301

; uselistorder directives
  uselistorder i32 2, { 1, 2, 0 }
}

define i32 @_ZN12RTTIDerivedBD1Ev() local_unnamed_addr {
dec_label_pc_1be0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !302
}

define i32 @_ZN12RTTIDerivedAD1Ev() local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !303
}

define i32 @_ZN14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !304
}

define i32 @_ZTv0_n16_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !305
}

define i32 @_ZThn8_N14DiamondDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !306
}

define i32 @_ZN12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !307
}

define i32 @_ZThn8_N12MultiDerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c40:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !308
}

define i32 @_ZN7DerivedD1Ev() local_unnamed_addr {
dec_label_pc_1c50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !309
}

define i32 @_ZN4BaseD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1c60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !310
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !311
  ret i32 %3, !insn.addr !312
}

define i32 @_ZN7DerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1c90:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !313
  %3 = call i32 @_ZdlPvj(i32* %result, i32 8), !insn.addr !314
  ret i32 %3, !insn.addr !315
}

define i32 @_ZN12MultiDerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1cc0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !316
  %3 = call i32 @_ZdlPvj(i32* %result, i32 16), !insn.addr !317
  ret i32 %3, !insn.addr !318
}

define i32 @_ZThn8_N12MultiDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !319
  %3 = add i32 %arg1, -8, !insn.addr !320
  %4 = inttoptr i32 %3 to i32*, !insn.addr !321
  %5 = call i32 @_ZdlPvj(i32* %4, i32 16), !insn.addr !321
  ret i32 %5, !insn.addr !322

; uselistorder directives
  uselistorder i32 16, { 1, 2, 0 }
}

define i32 @_ZN12RTTIDerivedBD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !323
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !324
  ret i32 %3, !insn.addr !325
}

define i32 @_ZN12RTTIDerivedAD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !326
  %3 = call i32 @_ZdlPvj(i32* %result, i32 4), !insn.addr !327
  ret i32 %3, !insn.addr !328
}

define i32 @_ZN14DiamondDerivedD0Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !329
  %3 = call i32 @_ZdlPvj(i32* %result, i32 24), !insn.addr !330
  ret i32 %3, !insn.addr !331
}

define i32 @_ZTv0_n16_N14DiamondDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1db0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !332
  %3 = inttoptr i32 %arg1 to i32*, !insn.addr !333
  %4 = load i32, i32* %3, align 4, !insn.addr !333
  %5 = add i32 %4, -16, !insn.addr !334
  %6 = inttoptr i32 %5 to i32*, !insn.addr !334
  %7 = load i32, i32* %6, align 4, !insn.addr !334
  %8 = add i32 %7, %arg1, !insn.addr !334
  %9 = inttoptr i32 %8 to i32*, !insn.addr !335
  %10 = call i32 @_ZdlPvj(i32* %9, i32 24), !insn.addr !335
  ret i32 %10, !insn.addr !336

; uselistorder directives
  uselistorder i32 -16, { 2, 0, 1 }
}

define i32 @_ZThn8_N14DiamondDerivedD0Ev(i32 %arg1) local_unnamed_addr {
dec_label_pc_1de0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !337
  %3 = add i32 %arg1, -8, !insn.addr !338
  %4 = inttoptr i32 %3 to i32*, !insn.addr !339
  %5 = call i32 @_ZdlPvj(i32* %4, i32 24), !insn.addr !339
  ret i32 %5, !insn.addr !340

; uselistorder directives
  uselistorder i32 (i32*, i32)* @_ZdlPvj, { 0, 8, 7, 2, 1, 6, 5, 4, 3, 9 }
  uselistorder i32 24, { 1, 0, 2 }
  uselistorder i32 -8, { 0, 1, 3, 2 }
}

define i32 @_Z12template_maxIiET_S0_S0_(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e10:
  %0 = sub i32 %arg1, %arg2, !insn.addr !341
  %1 = xor i32 %arg2, %arg1, !insn.addr !341
  %2 = xor i32 %0, %arg1, !insn.addr !341
  %3 = and i32 %2, %1, !insn.addr !341
  %4 = icmp slt i32 %3, 0, !insn.addr !341
  %5 = icmp slt i32 %0, 0, !insn.addr !341
  %6 = icmp eq i1 %5, %4, !insn.addr !342
  %7 = select i1 %6, i32 %arg1, i32 %arg2, !insn.addr !342
  ret i32 %7, !insn.addr !343

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32 %arg2, { 1, 0, 2 }
  uselistorder i32 %arg1, { 2, 0, 1, 3 }
}

define double @_Z12template_maxIdET_S0_S0_(double %arg1, double %arg2) local_unnamed_addr {
dec_label_pc_1e30:
  %cf.0.reg2mem = alloca i1, !insn.addr !344
  %zf.0.reg2mem = alloca i1, !insn.addr !344
  %0 = fcmp ogt double %arg1, %arg2, !insn.addr !345
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !345
  store i1 false, i1* %cf.0.reg2mem, !insn.addr !345
  br i1 %0, label %5, label %1, !insn.addr !345

; <label>:1:                                      ; preds = %dec_label_pc_1e30
  %2 = fcmp olt double %arg1, %arg2, !insn.addr !345
  store i1 false, i1* %zf.0.reg2mem, !insn.addr !345
  store i1 true, i1* %cf.0.reg2mem, !insn.addr !345
  br i1 %2, label %5, label %3, !insn.addr !345

; <label>:3:                                      ; preds = %1
  %4 = fcmp une double %arg1, %arg2, !insn.addr !345
  store i1 true, i1* %zf.0.reg2mem, !insn.addr !345
  store i1 %4, i1* %cf.0.reg2mem, !insn.addr !345
  br label %5, !insn.addr !345

; <label>:5:                                      ; preds = %1, %dec_label_pc_1e30, %3
  %cf.0.reload = load i1, i1* %cf.0.reg2mem
  %zf.0.reload = load i1, i1* %zf.0.reg2mem
  %6 = or i1 %zf.0.reload, %cf.0.reload, !insn.addr !346
  %.v = select i1 %6, double %arg2, double %arg1
  ret double %.v, !insn.addr !347

; uselistorder directives
  uselistorder i1* %zf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1* %cf.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i1 true, { 1, 0 }
  uselistorder label %5, { 2, 0, 1 }
}

define void @_Z13template_swapIiEvRT_S1_(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_1e50:
  %0 = load i32, i32* %arg1, align 4, !insn.addr !348
  %1 = load i32, i32* %arg2, align 4, !insn.addr !349
  store i32 %1, i32* %arg1, align 4, !insn.addr !350
  store i32 %0, i32* %arg2, align 4, !insn.addr !351
  ret void, !insn.addr !352
}

define i32 @_ZN9ContainerIiEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1e70:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !353
  %2 = inttoptr i32 %1 to i32*, !insn.addr !353
  store i32 0, i32* %2, align 4, !insn.addr !353
  ret i32 %0, !insn.addr !354

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIiE4pushEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e80:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !355
  %2 = inttoptr i32 %1 to i32*, !insn.addr !355
  %3 = load i32, i32* %2, align 4, !insn.addr !355
  %4 = icmp sgt i32 %3, 9, !insn.addr !356
  br i1 %4, label %dec_label_pc_1e9d, label %dec_label_pc_1e90, !insn.addr !356

dec_label_pc_1e90:                                ; preds = %dec_label_pc_1e80
  %5 = add i32 %3, 1, !insn.addr !357
  store i32 %5, i32* %2, align 4, !insn.addr !358
  %6 = mul i32 %3, 4, !insn.addr !359
  %7 = add i32 %6, %0, !insn.addr !359
  %8 = inttoptr i32 %7 to i32*, !insn.addr !359
  store i32 %arg2, i32* %8, align 4, !insn.addr !359
  br label %dec_label_pc_1e9d, !insn.addr !359

dec_label_pc_1e9d:                                ; preds = %dec_label_pc_1e90, %dec_label_pc_1e80
  ret i32 %0, !insn.addr !360

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i32 @_ZNK9ContainerIiE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ea0:
  %0 = icmp slt i32 %arg2, 0, !insn.addr !361
  br i1 %0, label %dec_label_pc_1eb7, label %dec_label_pc_1eae, !insn.addr !362

dec_label_pc_1eae:                                ; preds = %dec_label_pc_1ea0
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 40, !insn.addr !363
  %3 = inttoptr i32 %2 to i32*, !insn.addr !363
  %4 = load i32, i32* %3, align 4, !insn.addr !363
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !364
  br i1 %5, label %dec_label_pc_1ec0, label %dec_label_pc_1eb7, !insn.addr !364

dec_label_pc_1eb7:                                ; preds = %dec_label_pc_1eae, %dec_label_pc_1ea0
  ret i32 0, !insn.addr !365

dec_label_pc_1ec0:                                ; preds = %dec_label_pc_1eae
  %6 = mul i32 %arg2, 4, !insn.addr !366
  %7 = add i32 %6, %1, !insn.addr !366
  %8 = inttoptr i32 %7 to i32*, !insn.addr !366
  %9 = load i32, i32* %8, align 4, !insn.addr !366
  ret i32 %9, !insn.addr !367

; uselistorder directives
  uselistorder i32 4, { 0, 1, 2, 3, 4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 5, 6 }
}

define i32 @_ZNK9ContainerIiE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_1ed0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 40, !insn.addr !368
  %2 = inttoptr i32 %1 to i32*, !insn.addr !368
  %3 = load i32, i32* %2, align 4, !insn.addr !368
  ret i32 %3, !insn.addr !369

; uselistorder directives
  uselistorder i32 40, { 2, 3, 4, 5, 0, 1 }
}

define i32 @_ZN9ContainerIdEC1Ev(i32* %result) local_unnamed_addr {
dec_label_pc_1ee0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !370
  %2 = inttoptr i32 %1 to i32*, !insn.addr !370
  store i32 0, i32* %2, align 4, !insn.addr !370
  ret i32 %0, !insn.addr !371

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @_ZN9ContainerIdE4pushEd(i32* %result, double %arg2) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !372
  %2 = inttoptr i32 %1 to i32*, !insn.addr !372
  %3 = load i32, i32* %2, align 4, !insn.addr !372
  %4 = icmp sgt i32 %3, 9, !insn.addr !373
  br i1 %4, label %dec_label_pc_1f12, label %dec_label_pc_1f04, !insn.addr !373

dec_label_pc_1f04:                                ; preds = %dec_label_pc_1ef0
  %5 = add i32 %3, 1, !insn.addr !374
  store i32 %5, i32* %2, align 4, !insn.addr !375
  %6 = mul i32 %3, 8, !insn.addr !376
  %7 = add i32 %6, %0, !insn.addr !376
  %8 = inttoptr i32 %7 to double*, !insn.addr !376
  store double %arg2, double* %8, align 4, !insn.addr !376
  br label %dec_label_pc_1f12, !insn.addr !377

dec_label_pc_1f12:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1f04
  ret i32 %0, !insn.addr !378

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1f12, { 1, 0 }
}

define x86_fp80 @_ZNK9ContainerIdE3getEi(i32* %result, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f20:
  %0 = icmp slt i32 %arg2, 0, !insn.addr !379
  br i1 %0, label %dec_label_pc_1f35, label %dec_label_pc_1f2c, !insn.addr !380

dec_label_pc_1f2c:                                ; preds = %dec_label_pc_1f20
  %1 = ptrtoint i32* %result to i32
  %2 = add i32 %1, 80, !insn.addr !381
  %3 = inttoptr i32 %2 to i32*, !insn.addr !381
  %4 = load i32, i32* %3, align 4, !insn.addr !381
  %5 = icmp sgt i32 %4, %arg2, !insn.addr !382
  br i1 %5, label %dec_label_pc_1f40, label %dec_label_pc_1f35, !insn.addr !382

dec_label_pc_1f35:                                ; preds = %dec_label_pc_1f2c, %dec_label_pc_1f20
  ret x86_fp80 0xK00000000000000000000, !insn.addr !383

dec_label_pc_1f40:                                ; preds = %dec_label_pc_1f2c
  %6 = mul i32 %arg2, 8, !insn.addr !384
  %7 = add i32 %6, %1, !insn.addr !384
  %8 = inttoptr i32 %7 to double*, !insn.addr !384
  %9 = load double, double* %8, align 4, !insn.addr !384
  %10 = fpext double %9 to x86_fp80, !insn.addr !384
  ret x86_fp80 %10, !insn.addr !385

; uselistorder directives
  uselistorder i32 0, { 20, 21, 2, 22, 23, 25, 26, 30, 27, 4, 28, 5, 29, 6, 7, 0, 8, 9, 24, 10, 11, 12, 3, 31, 1, 13, 14, 15, 16, 17, 18, 19 }
}

define i32 @_ZNK9ContainerIdE7getSizeEv(i32* %result) local_unnamed_addr {
dec_label_pc_1f50:
  %0 = ptrtoint i32* %result to i32
  %1 = add i32 %0, 80, !insn.addr !386
  %2 = inttoptr i32 %1 to i32*, !insn.addr !386
  %3 = load i32, i32* %2, align 4, !insn.addr !386
  ret i32 %3, !insn.addr !387
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f5c:
  ret i32 %arg1, !insn.addr !388
}

define i32 @__x86.get_pc_thunk.si(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f60:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !389
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_1f70:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !390
  call void @__stack_chk_fail(), !insn.addr !391
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !392
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1f90:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !393
  %ebx.0.reg2mem = alloca i32, !insn.addr !393
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !394
  %3 = add i32 %1, 7831, !insn.addr !395
  %4 = inttoptr i32 %3 to i32*, !insn.addr !395
  %5 = load i32, i32* %4, align 4, !insn.addr !395
  %6 = icmp eq i32 %5, -1, !insn.addr !396
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !397
  store i32 -1, i32* %merge.reg2mem, !insn.addr !397
  br i1 %6, label %dec_label_pc_1fcd, label %dec_label_pc_1fc0, !insn.addr !397

dec_label_pc_1fc0:                                ; preds = %dec_label_pc_1f90, %dec_label_pc_1fc0
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !398
  %8 = inttoptr i32 %7 to i32*, !insn.addr !398
  %9 = load i32, i32* %8, align 4, !insn.addr !398
  %10 = icmp eq i32 %9, -1, !insn.addr !399
  %11 = icmp eq i1 %10, false, !insn.addr !400
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !400
  store i32 %9, i32* %merge.reg2mem, !insn.addr !400
  br i1 %11, label %dec_label_pc_1fc0, label %dec_label_pc_1fcd, !insn.addr !400

dec_label_pc_1fcd:                                ; preds = %dec_label_pc_1fc0, %dec_label_pc_1f90
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !401

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 10, 1, 0, 2, 9, 5, 6, 7, 8, 3, 4 }
  uselistorder i32 -4, { 2, 0, 1 }
  uselistorder i32 -1, { 1, 0, 2 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 1, 2, 3, 4, 5, 6, 7, 0 }
  uselistorder label %dec_label_pc_1fc0, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1fdc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !402
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !403
  ret i32 %3, !insn.addr !404

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 15, 3, 14, 13, 12, 11, 10, 9, 8, 7, 6, 1, 2, 5, 4, 0 }
  uselistorder i32 1, { 34, 36, 35, 33, 32, 31, 71, 72, 38, 37, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 49, 13, 73, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 65, 12, 40, 39, 11, 67, 66, 68, 10, 9, 8, 41, 7, 62, 42, 6, 5, 4, 69, 3, 2, 74, 63, 70, 64, 48, 47, 46, 45, 44, 43, 1, 0 }
}

declare i32 @__printf_chk(i32, i8*, ...) local_unnamed_addr

declare i32* @_Znwj(i32) local_unnamed_addr

declare i32 @__cxa_begin_catch() local_unnamed_addr

declare i32 @__cxa_allocate_exception() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @__cxa_atexit(void (i32*)*, i32*, i32*) local_unnamed_addr

declare i32 @_ZdlPvj(i32*, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @__dynamic_cast(i32, i32, i32, i32) local_unnamed_addr

declare i32 @__cxa_rethrow(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @_ZNSt8ios_base4InitC1Ev() local_unnamed_addr

declare i32 @__cxa_end_catch() local_unnamed_addr

declare i32 @__cxa_throw() local_unnamed_addr

declare void @_Unwind_Resume(%_Unwind_Exception*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4436}
!5 = !{i64 4452}
!6 = !{i64 4468}
!7 = !{i64 4484}
!8 = !{i64 4500}
!9 = !{i64 4516}
!10 = !{i64 4532}
!11 = !{i64 4548}
!12 = !{i64 4564}
!13 = !{i64 4580}
!14 = !{i64 4596}
!15 = !{i64 4612}
!16 = !{i64 4628}
!17 = !{i64 4644}
!18 = !{i64 4660}
!19 = !{i64 4676}
!20 = !{i64 4692}
!21 = !{i64 4708}
!22 = !{i64 4720}
!23 = !{i64 4729}
!24 = !{i64 4748}
!25 = !{i64 4756}
!26 = !{i64 4770}
!27 = !{i64 4771}
!28 = !{i64 4782}
!29 = !{i64 4785}
!30 = !{i64 4802}
!31 = !{i64 4810}
!32 = !{i64 4815}
!33 = !{i64 4831}
!34 = !{i64 4847}
!35 = !{i64 4848}
!36 = !{i64 4858}
!37 = !{i64 4859}
!38 = !{i64 4864}
!39 = !{i64 4866}
!40 = !{i64 4868}
!41 = !{i64 4871}
!42 = !{i64 4876}
!43 = !{i64 4883}
!44 = !{i64 4891}
!45 = !{i64 4897}
!46 = !{i64 4899}
!47 = !{i64 4900}
!48 = !{i64 4901}
!49 = !{i64 4910}
!50 = !{i64 4913}
!51 = !{i64 4915}
!52 = !{i64 4918}
!53 = !{i64 4925}
!54 = !{i64 4926}
!55 = !{i64 4936}
!56 = !{i64 4939}
!57 = !{i64 4940}
!58 = !{i64 4945}
!59 = !{i64 4953}
!60 = !{i64 4960}
!61 = !{i64 4966}
!62 = !{i64 4967}
!63 = !{i64 4972}
!64 = !{i64 4977}
!65 = !{i64 4989}
!66 = !{i64 5002}
!67 = !{i64 5010}
!68 = !{i64 5030}
!69 = !{i64 5044}
!70 = !{i64 5051}
!71 = !{i64 5059}
!72 = !{i64 5067}
!73 = !{i64 5073}
!74 = !{i64 5083}
!75 = !{i64 5103}
!76 = !{i64 5120}
!77 = !{i64 5126}
!78 = !{i64 5131}
!79 = !{i64 5135}
!80 = !{i64 5139}
!81 = !{i64 5152}
!82 = !{i64 5169}
!83 = !{i64 5177}
!84 = !{i64 5179}
!85 = !{i64 5202}
!86 = !{i64 5216}
!87 = !{i64 5286}
!88 = !{i64 5296}
!89 = !{i64 5304}
!90 = !{i64 5320}
!91 = !{i64 5327}
!92 = !{i64 5329}
!93 = !{i64 5335}
!94 = !{i64 5337}
!95 = !{i64 5342}
!96 = !{i64 5350}
!97 = !{i64 5355}
!98 = !{i64 5414}
!99 = !{i64 5419}
!100 = !{i64 5433}
!101 = !{i64 5444}
!102 = !{i64 5452}
!103 = !{i64 5456}
!104 = !{i64 5479}
!105 = !{i64 5493}
!106 = !{i64 5505}
!107 = !{i64 5584}
!108 = !{i64 5601}
!109 = !{i64 5608}
!110 = !{i64 5592}
!111 = !{i64 5614}
!112 = !{i64 5615}
!113 = !{i64 5631}
!114 = !{i64 5636}
!115 = !{i64 5646}
!116 = !{i64 5656}
!117 = !{i64 5659}
!118 = !{i64 5678}
!119 = !{i64 5689}
!120 = !{i64 5705}
!121 = !{i64 5721}
!122 = !{i64 5737}
!123 = !{i64 5752}
!124 = !{i64 5768}
!125 = !{i64 5792}
!126 = !{i64 5797}
!127 = !{i64 5809}
!128 = !{i64 5829}
!129 = !{i64 5873}
!130 = !{i64 5877}
!131 = !{i64 5888}
!132 = !{i64 5895}
!133 = !{i64 5867}
!134 = !{i64 5871}
!135 = !{i64 5901}
!136 = !{i64 5902}
!137 = !{i64 5914}
!138 = !{i64 5929}
!139 = !{i64 5945}
!140 = !{i64 5961}
!141 = !{i64 5968}
!142 = !{i64 5981}
!143 = !{i64 5997}
!144 = !{i64 6011}
!145 = !{i64 6017}
!146 = !{i64 6019}
!147 = !{i64 6030}
!148 = !{i64 6036}
!149 = !{i64 6038}
!150 = !{i64 6044}
!151 = !{i64 6050}
!152 = !{i64 6053}
!153 = !{i64 6059}
!154 = !{i64 6061}
!155 = !{i64 6065}
!156 = !{i64 6069}
!157 = !{i64 6074}
!158 = !{i64 6076}
!159 = !{i64 6084}
!160 = !{i64 6089}
!161 = !{i64 6092}
!162 = !{i64 6098}
!163 = !{i64 6104}
!164 = !{i64 6107}
!165 = !{i64 6109}
!166 = !{i64 6111}
!167 = !{i64 6114}
!168 = !{i64 6119}
!169 = !{i64 6121}
!170 = !{i64 6129}
!171 = !{i64 6131}
!172 = !{i64 6133}
!173 = !{i64 6136}
!174 = !{i64 6142}
!175 = !{i64 6157}
!176 = !{i64 6167}
!177 = !{i64 6172}
!178 = !{i64 6174}
!179 = !{i64 6177}
!180 = !{i64 6193}
!181 = !{i64 6200}
!182 = !{i64 6206}
!183 = !{i64 6208}
!184 = !{i64 6213}
!185 = !{i64 6217}
!186 = !{i64 6220}
!187 = !{i64 6222}
!188 = !{i64 6225}
!189 = !{i64 6233}
!190 = !{i64 6263}
!191 = !{i64 6277}
!192 = !{i64 6291}
!193 = !{i64 6303}
!194 = !{i64 6309}
!195 = !{i64 6310}
!196 = !{i64 6331}
!197 = !{i64 6395}
!198 = !{i64 6409}
!199 = !{i64 6415}
!200 = !{i64 6418}
!201 = !{i64 6423}
!202 = !{i64 6432}
!203 = !{i64 6438}
!204 = !{i64 6441}
!205 = !{i64 6449}
!206 = !{i64 6457}
!207 = !{i64 6460}
!208 = !{i64 6468}
!209 = !{i64 6476}
!210 = !{i64 6479}
!211 = !{i64 6484}
!212 = !{i64 6493}
!213 = !{i64 6499}
!214 = !{i64 6502}
!215 = !{i64 6510}
!216 = !{i64 6518}
!217 = !{i64 6521}
!218 = !{i64 6529}
!219 = !{i64 6538}
!220 = !{i64 6544}
!221 = !{i64 6547}
!222 = !{i64 6555}
!223 = !{i64 6563}
!224 = !{i64 6566}
!225 = !{i64 6574}
!226 = !{i64 6582}
!227 = !{i64 6585}
!228 = !{i64 6593}
!229 = !{i64 6602}
!230 = !{i64 6608}
!231 = !{i64 6611}
!232 = !{i64 6616}
!233 = !{i64 6625}
!234 = !{i64 6631}
!235 = !{i64 6634}
!236 = !{i64 6642}
!237 = !{i64 6651}
!238 = !{i64 6657}
!239 = !{i64 6660}
!240 = !{i64 6672}
!241 = !{i64 6679}
!242 = !{i64 6685}
!243 = !{i64 6686}
!244 = !{i64 6703}
!245 = !{i64 6712}
!246 = !{i64 6715}
!247 = !{i64 6724}
!248 = !{i64 6734}
!249 = !{i64 6740}
!250 = !{i64 6756}
!251 = !{i64 6780}
!252 = !{i64 6784}
!253 = !{i64 6804}
!254 = !{i64 6814}
!255 = !{i64 6820}
!256 = !{i64 6841}
!257 = !{i64 6857}
!258 = !{i64 6873}
!259 = !{i64 6888}
!260 = !{i64 6890}
!261 = !{i64 6893}
!262 = !{i64 6897}
!263 = !{i64 6902}
!264 = !{i64 6920}
!265 = !{i64 6922}
!266 = !{i64 6925}
!267 = !{i64 6927}
!268 = !{i64 6930}
!269 = !{i64 6934}
!270 = !{i64 6939}
!271 = !{i64 6952}
!272 = !{i64 6954}
!273 = !{i64 6957}
!274 = !{i64 6961}
!275 = !{i64 6966}
!276 = !{i64 6984}
!277 = !{i64 6986}
!278 = !{i64 6989}
!279 = !{i64 6991}
!280 = !{i64 6994}
!281 = !{i64 6998}
!282 = !{i64 7003}
!283 = !{i64 7016}
!284 = !{i64 7018}
!285 = !{i64 7021}
!286 = !{i64 7025}
!287 = !{i64 7030}
!288 = !{i64 7048}
!289 = !{i64 7050}
!290 = !{i64 7053}
!291 = !{i64 7055}
!292 = !{i64 7058}
!293 = !{i64 7062}
!294 = !{i64 7067}
!295 = !{i64 7080}
!296 = !{i64 7083}
!297 = !{i64 7086}
!298 = !{i64 7090}
!299 = !{i64 7095}
!300 = !{i64 7113}
!301 = !{i64 7129}
!302 = !{i64 7140}
!303 = !{i64 7156}
!304 = !{i64 7172}
!305 = !{i64 7188}
!306 = !{i64 7204}
!307 = !{i64 7220}
!308 = !{i64 7236}
!309 = !{i64 7252}
!310 = !{i64 7269}
!311 = !{i64 7289}
!312 = !{i64 7298}
!313 = !{i64 7317}
!314 = !{i64 7337}
!315 = !{i64 7346}
!316 = !{i64 7365}
!317 = !{i64 7385}
!318 = !{i64 7394}
!319 = !{i64 7413}
!320 = !{i64 7433}
!321 = !{i64 7437}
!322 = !{i64 7446}
!323 = !{i64 7461}
!324 = !{i64 7481}
!325 = !{i64 7490}
!326 = !{i64 7509}
!327 = !{i64 7529}
!328 = !{i64 7538}
!329 = !{i64 7557}
!330 = !{i64 7577}
!331 = !{i64 7586}
!332 = !{i64 7605}
!333 = !{i64 7625}
!334 = !{i64 7627}
!335 = !{i64 7631}
!336 = !{i64 7640}
!337 = !{i64 7653}
!338 = !{i64 7673}
!339 = !{i64 7677}
!340 = !{i64 7686}
!341 = !{i64 7708}
!342 = !{i64 7710}
!343 = !{i64 7713}
!344 = !{i64 7728}
!345 = !{i64 7740}
!346 = !{i64 7742}
!347 = !{i64 7746}
!348 = !{i64 7773}
!349 = !{i64 7775}
!350 = !{i64 7777}
!351 = !{i64 7779}
!352 = !{i64 7782}
!353 = !{i64 7800}
!354 = !{i64 7807}
!355 = !{i64 7816}
!356 = !{i64 7822}
!357 = !{i64 7824}
!358 = !{i64 7827}
!359 = !{i64 7834}
!360 = !{i64 7837}
!361 = !{i64 7850}
!362 = !{i64 7852}
!363 = !{i64 7858}
!364 = !{i64 7861}
!365 = !{i64 7863}
!366 = !{i64 7872}
!367 = !{i64 7875}
!368 = !{i64 7896}
!369 = !{i64 7899}
!370 = !{i64 7912}
!371 = !{i64 7919}
!372 = !{i64 7932}
!373 = !{i64 7938}
!374 = !{i64 7940}
!375 = !{i64 7943}
!376 = !{i64 7946}
!377 = !{i64 7949}
!378 = !{i64 7954}
!379 = !{i64 7976}
!380 = !{i64 7978}
!381 = !{i64 7984}
!382 = !{i64 7987}
!383 = !{i64 7991}
!384 = !{i64 8000}
!385 = !{i64 8003}
!386 = !{i64 8024}
!387 = !{i64 8027}
!388 = !{i64 8031}
!389 = !{i64 8035}
!390 = !{i64 8053}
!391 = !{i64 8067}
!392 = !{i64 8078}
!393 = !{i64 8080}
!394 = !{i64 8084}
!395 = !{i64 8095}
!396 = !{i64 8101}
!397 = !{i64 8104}
!398 = !{i64 8130}
!399 = !{i64 8136}
!400 = !{i64 8139}
!401 = !{i64 8145}
!402 = !{i64 8164}
!403 = !{i64 8175}
!404 = !{i64 8184}
