source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_1c89 = local_unnamed_addr constant i32 1001
@global_var_1d17 = local_unnamed_addr constant i32 8
@global_var_5ed4 = global i32 8016
@global_var_3e8 = global i32* @global_var_5ed4
@global_var_3e9 = global i32 134217822
@global_var_3fe8 = local_unnamed_addr constant i32 6
@global_var_3fab = local_unnamed_addr constant i32 135155984
@global_var_3f57 = local_unnamed_addr constant i32 1157792515
@global_var_3ecb = local_unnamed_addr constant i32 -2042880
@global_var_3e46 = constant i32 3866623
@global_var_3d07 = local_unnamed_addr constant i32 269369620
@global_var_3cd7 = constant i32 4096
@global_var_3c87 = local_unnamed_addr constant i32 11007
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

define i32 @function_1040(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1050(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_1060([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1060:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1070([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1080(i8* %s) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_1090() local_unnamed_addr {
dec_label_pc_1090:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !9
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10cc(i32 %2), !insn.addr !10
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20292, !insn.addr !11
  %6 = inttoptr i32 %5 to i32*, !insn.addr !11
  %7 = load i32, i32* %6, align 4, !insn.addr !11
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !12
  %9 = call i32 @__asm_hlt(), !insn.addr !13
  unreachable, !insn.addr !13

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10cc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10cc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !16
  %3 = add i32 %1, 20291, !insn.addr !17
  ret i32 %3, !insn.addr !18
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1120:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !19
  ret i32 0, !insn.addr !20
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1170:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !21
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !22
  %3 = add i32 %1, 20139, !insn.addr !23
  %4 = inttoptr i32 %3 to i8*, !insn.addr !23
  %5 = load i8, i8* %4, align 1, !insn.addr !23
  %6 = icmp eq i8 %5, 0, !insn.addr !23
  %7 = icmp eq i1 %6, false, !insn.addr !24
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !24
  br i1 %7, label %dec_label_pc_11f2, label %dec_label_pc_1191, !insn.addr !24

dec_label_pc_1191:                                ; preds = %dec_label_pc_1170
  %8 = add i32 %1, 20083, !insn.addr !25
  %9 = inttoptr i32 %8 to i32*, !insn.addr !25
  %10 = load i32, i32* %9, align 4, !insn.addr !25
  %11 = icmp eq i32 %10, 0, !insn.addr !26
  br i1 %11, label %dec_label_pc_11ae, label %dec_label_pc_119b, !insn.addr !27

dec_label_pc_119b:                                ; preds = %dec_label_pc_1191
  %12 = call i32 @function_1090(), !insn.addr !28
  br label %dec_label_pc_11ae, !insn.addr !29

dec_label_pc_11ae:                                ; preds = %dec_label_pc_119b, %dec_label_pc_1191
  %13 = call i32 @deregister_tm_clones(), !insn.addr !30
  store i8 1, i8* %4, align 1, !insn.addr !31
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !31
  br label %dec_label_pc_11f2, !insn.addr !31

dec_label_pc_11f2:                                ; preds = %dec_label_pc_11ae, %dec_label_pc_1170
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !32

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i32 @register_tm_clones(), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1209:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !34
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_120d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @sequential_ops(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1220:
  %0 = add i32 %arg2, %arg1, !insn.addr !36
  %1 = mul i32 %0, 2, !insn.addr !37
  %2 = sub i32 %1, %arg3, !insn.addr !38
  ret i32 %2, !insn.addr !39
}

define i32 @single_if(i32 %arg1) local_unnamed_addr {
dec_label_pc_1230:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !40
  %1 = icmp slt i32 %arg1, 0, !insn.addr !40
  %2 = icmp eq i1 %1, false, !insn.addr !41
  %3 = icmp eq i1 %0, false, !insn.addr !41
  %4 = icmp eq i1 %2, %3, !insn.addr !41
  %5 = zext i1 %4 to i32
  %storemerge = shl i32 %arg1, %5
  ret i32 %storemerge, !insn.addr !42
}

define i32 @if_else(i32 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !43
  %1 = icmp slt i32 %arg1, 0, !insn.addr !43
  %2 = icmp eq i1 %1, false, !insn.addr !44
  %3 = icmp eq i1 %0, false, !insn.addr !44
  %4 = icmp eq i1 %2, %3, !insn.addr !44
  %5 = zext i1 %4 to i32, !insn.addr !44
  ret i32 %5, !insn.addr !45

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @nested_if_2(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1250:
  %0 = icmp sgt i32 %arg2, 0
  %1 = select i1 %0, i32 %arg2, i32 0, !insn.addr !46
  %2 = add i32 %1, %arg1, !insn.addr !47
  %3 = icmp slt i32 %arg1, 1
  %4 = select i1 %3, i32 0, i32 %2, !insn.addr !48
  ret i32 %4, !insn.addr !49

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @nested_if_deep(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_1270:
  %merge.reg2mem = alloca i32, !insn.addr !50
  %0 = icmp slt i32 %arg1, 1, !insn.addr !51
  store i32 0, i32* %merge.reg2mem, !insn.addr !51
  br i1 %0, label %dec_label_pc_129a, label %dec_label_pc_1277, !insn.addr !51

dec_label_pc_1277:                                ; preds = %dec_label_pc_1270
  %1 = icmp slt i32 %arg2, 1, !insn.addr !52
  store i32 1, i32* %merge.reg2mem, !insn.addr !52
  br i1 %1, label %dec_label_pc_129a, label %dec_label_pc_127e, !insn.addr !52

dec_label_pc_127e:                                ; preds = %dec_label_pc_1277
  %2 = icmp slt i32 %arg3, 1, !insn.addr !53
  store i32 2, i32* %merge.reg2mem, !insn.addr !53
  br i1 %2, label %dec_label_pc_129a, label %dec_label_pc_1285, !insn.addr !53

dec_label_pc_1285:                                ; preds = %dec_label_pc_127e
  %3 = icmp slt i32 %arg4, 1, !insn.addr !54
  store i32 3, i32* %merge.reg2mem, !insn.addr !54
  br i1 %3, label %dec_label_pc_129a, label %dec_label_pc_128c, !insn.addr !54

dec_label_pc_128c:                                ; preds = %dec_label_pc_1285
  %4 = icmp eq i32 %arg5, 0, !insn.addr !55
  %5 = icmp slt i32 %arg5, 0, !insn.addr !55
  %6 = icmp eq i1 %5, false, !insn.addr !56
  %7 = icmp eq i1 %4, false, !insn.addr !56
  %8 = icmp eq i1 %6, %7, !insn.addr !56
  %9 = zext i1 %8 to i32, !insn.addr !56
  %10 = or i32 %9, 4, !insn.addr !57
  ret i32 %10, !insn.addr !58

dec_label_pc_129a:                                ; preds = %dec_label_pc_1285, %dec_label_pc_127e, %dec_label_pc_1277, %dec_label_pc_1270
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !59

; uselistorder directives
  uselistorder i32 %arg5, { 1, 0 }
}

define i32 @if_elseif_chain(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b0:
  %0 = icmp ult i32 %arg1, 3, !insn.addr !60
  %factor = mul i32 %arg1, 10
  %1 = add i32 %factor, 10, !insn.addr !61
  %2 = select i1 %0, i32 %1, i32 -1, !insn.addr !62
  ret i32 %2, !insn.addr !63
}

define i32 @if_elseif_long(i32 %arg1) local_unnamed_addr {
dec_label_pc_12d0:
  %0 = mul i32 %arg1, 100, !insn.addr !64
  %1 = add i32 %0, 100, !insn.addr !65
  %2 = icmp ult i32 %arg1, 5, !insn.addr !66
  %3 = select i1 %2, i32 %1, i32 -1, !insn.addr !67
  ret i32 %3, !insn.addr !68

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @switch_small(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12f0:
  %eax.0.reg2mem = alloca i32, !insn.addr !69
  %0 = icmp ult i32 %arg2, 4
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !70
  br i1 %0, label %dec_label_pc_130a, label %dec_label_pc_1311, !insn.addr !70

dec_label_pc_130a:                                ; preds = %dec_label_pc_12f0
  %1 = mul i32 %arg2, 4, !insn.addr !71
  %2 = add i32 %arg1, 9227, !insn.addr !71
  %3 = add i32 %2, %1, !insn.addr !71
  %4 = inttoptr i32 %3 to i32*, !insn.addr !71
  %5 = load i32, i32* %4, align 4, !insn.addr !71
  store i32 %5, i32* %eax.0.reg2mem, !insn.addr !71
  br label %dec_label_pc_1311, !insn.addr !71

dec_label_pc_1311:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_130a
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !72

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1311, { 1, 0 }
}

define i32 @switch_large(i32 %arg1) local_unnamed_addr {
dec_label_pc_1320:
  %0 = icmp ult i32 %arg1, 10, !insn.addr !73
  %1 = mul i32 %arg1, 10, !insn.addr !74
  %2 = select i1 %0, i32 %1, i32 -1, !insn.addr !75
  ret i32 %2, !insn.addr !76
}

define i32 @switch_default(i32 %arg1) local_unnamed_addr {
dec_label_pc_1340:
  %0 = add i32 %arg1, -1, !insn.addr !77
  %1 = mul i32 %0, 100, !insn.addr !78
  %2 = add i32 %1, 100, !insn.addr !79
  %3 = icmp ult i32 %0, 3, !insn.addr !80
  %4 = select i1 %3, i32 %2, i32 0, !insn.addr !81
  ret i32 %4, !insn.addr !82

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i32 @switch_fallthrough(i32 %arg1) local_unnamed_addr {
dec_label_pc_1360:
  %eax.2.reg2mem = alloca i32, !insn.addr !83
  %eax.1.reg2mem = alloca i32, !insn.addr !83
  %eax.0.reg2mem = alloca i32, !insn.addr !83
  store i32 0, i32* %eax.0.reg2mem
  store i32 0, i32* %eax.1.reg2mem
  switch i32 %arg1, label %dec_label_pc_1370 [
    i32 1, label %dec_label_pc_1382
    i32 2, label %dec_label_pc_137f
  ]

dec_label_pc_1370:                                ; preds = %dec_label_pc_1360
  %0 = icmp eq i32 %arg1, 3, !insn.addr !84
  %1 = icmp eq i1 %0, false, !insn.addr !85
  store i32 12, i32* %eax.0.reg2mem, !insn.addr !85
  store i32 -1, i32* %eax.2.reg2mem, !insn.addr !85
  br i1 %1, label %dec_label_pc_1384, label %dec_label_pc_137f, !insn.addr !85

dec_label_pc_137f:                                ; preds = %dec_label_pc_1370, %dec_label_pc_1360
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = mul i32 %arg1, 2, !insn.addr !86
  %3 = add i32 %eax.0.reload, %2, !insn.addr !86
  store i32 %3, i32* %eax.1.reg2mem, !insn.addr !86
  br label %dec_label_pc_1382, !insn.addr !86

dec_label_pc_1382:                                ; preds = %dec_label_pc_1360, %dec_label_pc_137f
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %4 = add i32 %eax.1.reload, %arg1, !insn.addr !87
  store i32 %4, i32* %eax.2.reg2mem, !insn.addr !87
  br label %dec_label_pc_1384, !insn.addr !87

dec_label_pc_1384:                                ; preds = %dec_label_pc_1382, %dec_label_pc_1370
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  ret i32 %eax.2.reload, !insn.addr !88

; uselistorder directives
  uselistorder i32* %eax.2.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1382, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %arg1) local_unnamed_addr {
dec_label_pc_1390:
  %0 = icmp slt i32 %arg1, 1
  br i1 %0, label %dec_label_pc_13ab, label %dec_label_pc_1398, !insn.addr !89

dec_label_pc_1398:                                ; preds = %dec_label_pc_1390
  %1 = add i32 %arg1, -1
  %2 = add i32 %arg1, -2, !insn.addr !90
  %3 = zext i32 %2 to i64, !insn.addr !91
  %4 = zext i32 %1 to i64, !insn.addr !91
  %5 = mul nuw i64 %3, %4, !insn.addr !91
  %6 = trunc i64 %5 to i32, !insn.addr !91
  %7 = udiv i64 %5, 2
  %8 = trunc i64 %7 to i32
  %9 = and i32 %8, -2147483648, !insn.addr !92
  %10 = udiv i32 %6, 2, !insn.addr !92
  %11 = or i32 %9, %10, !insn.addr !92
  %12 = add i32 %11, %1, !insn.addr !93
  ret i32 %12, !insn.addr !94

dec_label_pc_13ab:                                ; preds = %dec_label_pc_1390
  ret i32 0, !insn.addr !95

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @loop_while(i32 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
  %merge.reg2mem = alloca i32, !insn.addr !96
  %esi.0.reg2mem = alloca i32, !insn.addr !96
  %ecx.0.reg2mem = alloca i32, !insn.addr !96
  %0 = icmp eq i32 %arg1, 0, !insn.addr !97
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !98
  store i32 %arg1, i32* %esi.0.reg2mem, !insn.addr !98
  store i32 1, i32* %merge.reg2mem, !insn.addr !98
  br i1 %0, label %dec_label_pc_13eb, label %dec_label_pc_13d0, !insn.addr !98

dec_label_pc_13d0:                                ; preds = %dec_label_pc_13b0, %dec_label_pc_13d0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %1 = sext i32 %esi.0.reload to i64, !insn.addr !99
  %2 = mul nsw i64 %1, 1717986919, !insn.addr !99
  %3 = udiv i64 %2, 4294967296, !insn.addr !99
  %4 = trunc i64 %3 to i32, !insn.addr !99
  %5 = lshr i64 %2, 63
  %6 = trunc i64 %5 to i32, !insn.addr !100
  %7 = ashr i32 %4, 2, !insn.addr !101
  %8 = add nsw i32 %7, %6, !insn.addr !102
  %9 = add i32 %ecx.0.reload, 1, !insn.addr !103
  %10 = add i32 %esi.0.reload, 9, !insn.addr !104
  %11 = icmp ult i32 %10, 19
  store i32 %9, i32* %ecx.0.reg2mem, !insn.addr !105
  store i32 %8, i32* %esi.0.reg2mem, !insn.addr !105
  store i32 %9, i32* %merge.reg2mem, !insn.addr !105
  br i1 %11, label %dec_label_pc_13eb, label %dec_label_pc_13d0, !insn.addr !105

dec_label_pc_13eb:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13b0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !106

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13d0, { 1, 0 }
}

define i32 @loop_dowhile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1400:
  %esi.0.reg2mem = alloca i32, !insn.addr !107
  %ecx.0.reg2mem = alloca i32, !insn.addr !107
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !108
  store i32 %arg1, i32* %esi.0.reg2mem, !insn.addr !108
  br label %dec_label_pc_1410, !insn.addr !108

dec_label_pc_1410:                                ; preds = %dec_label_pc_1410, %dec_label_pc_1400
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %0 = sext i32 %esi.0.reload to i64, !insn.addr !109
  %1 = mul nsw i64 %0, 1717986919, !insn.addr !109
  %2 = udiv i64 %1, 4294967296, !insn.addr !109
  %3 = trunc i64 %2 to i32, !insn.addr !109
  %4 = lshr i64 %1, 63
  %5 = trunc i64 %4 to i32, !insn.addr !110
  %6 = ashr i32 %3, 2, !insn.addr !111
  %7 = add nsw i32 %6, %5, !insn.addr !112
  %8 = add i32 %ecx.0.reload, 1, !insn.addr !113
  %9 = add i32 %esi.0.reload, 9, !insn.addr !114
  %10 = icmp ult i32 %9, 19
  store i32 %8, i32* %ecx.0.reg2mem, !insn.addr !115
  store i32 %7, i32* %esi.0.reg2mem, !insn.addr !115
  br i1 %10, label %dec_label_pc_142b, label %dec_label_pc_1410, !insn.addr !115

dec_label_pc_142b:                                ; preds = %dec_label_pc_1410
  ret i32 %8, !insn.addr !116

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1430:
  %0 = mul i32 %arg2, %arg1, !insn.addr !117
  %1 = icmp slt i32 %arg2, 1
  %2 = icmp slt i32 %arg1, 1
  %3 = or i1 %2, %1
  %4 = select i1 %3, i32 0, i32 %0, !insn.addr !118
  ret i32 %4, !insn.addr !119

; uselistorder directives
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @loop_break(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1450:
  %0 = add i32 %arg2, -10, !insn.addr !120
  %1 = icmp ugt i32 %0, 40
  %spec.select = sext i1 %1 to i32
  ret i32 %spec.select, !insn.addr !121
}

define i32 @function_147f() local_unnamed_addr {
dec_label_pc_147f:
  ret i32 2, !insn.addr !122
}

define i32 @function_1485() local_unnamed_addr {
dec_label_pc_1485:
  ret i32 3, !insn.addr !123
}

define i32 @function_148b() local_unnamed_addr {
dec_label_pc_148b:
  ret i32 4, !insn.addr !124
}

define i32 @loop_continue(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %eax.3.reg2mem = alloca i32, !insn.addr !125
  %edx.2.reg2mem = alloca i32, !insn.addr !125
  %ecx.0.reg2mem = alloca i32, !insn.addr !125
  %eax.2.reg2mem = alloca i32, !insn.addr !125
  %edx.1.reg2mem = alloca i32, !insn.addr !125
  %eax.1.reg2mem = alloca i32, !insn.addr !125
  %edx.0.reg2mem = alloca i32, !insn.addr !125
  %eax.0.reg2mem = alloca i32, !insn.addr !125
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !126
  br i1 %0, label %dec_label_pc_1503, label %dec_label_pc_14aa, !insn.addr !126

dec_label_pc_14aa:                                ; preds = %dec_label_pc_14a0
  %1 = add i32 %arg1, -1, !insn.addr !127
  %2 = icmp ult i32 %1, 3, !insn.addr !128
  %3 = icmp eq i1 %2, false, !insn.addr !129
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !129
  store i32 1, i32* %edx.1.reg2mem, !insn.addr !129
  br i1 %3, label %dec_label_pc_14c4, label %dec_label_pc_14e5, !insn.addr !129

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14aa
  %4 = and i32 %arg1, -4, !insn.addr !130
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !131
  store i32 1, i32* %edx.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_14d0, !insn.addr !131

dec_label_pc_14d0:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14c4
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %factor = mul i32 %edx.0.reload, 2
  %5 = add i32 %eax.0.reload, 2, !insn.addr !132
  %6 = add i32 %5, %factor, !insn.addr !133
  %7 = sub i32 %edx.0.reload, %4, !insn.addr !134
  %8 = add i32 %edx.0.reload, 4, !insn.addr !135
  %9 = icmp eq i32 %7, -3, !insn.addr !136
  %10 = icmp eq i1 %9, false, !insn.addr !137
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !137
  store i32 %8, i32* %edx.0.reg2mem, !insn.addr !137
  store i32 %6, i32* %eax.1.reg2mem, !insn.addr !137
  store i32 %8, i32* %edx.1.reg2mem, !insn.addr !137
  br i1 %10, label %dec_label_pc_14d0, label %dec_label_pc_14e5, !insn.addr !137

dec_label_pc_14e5:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14aa
  %11 = urem i32 %arg1, 4, !insn.addr !138
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %12 = icmp eq i32 %11, 0, !insn.addr !139
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !140
  store i32 %11, i32* %ecx.0.reg2mem, !insn.addr !140
  store i32 %edx.1.reload, i32* %edx.2.reg2mem, !insn.addr !140
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !140
  br i1 %12, label %dec_label_pc_1503, label %dec_label_pc_14f0, !insn.addr !140

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14e5, %dec_label_pc_14f0
  %edx.2.reload = load i32, i32* %edx.2.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %13 = urem i32 %edx.2.reload, 2, !insn.addr !141
  %14 = sub nsw i32 0, %13, !insn.addr !142
  %15 = and i32 %edx.2.reload, %14, !insn.addr !143
  %16 = add i32 %15, %eax.2.reload, !insn.addr !144
  %17 = add i32 %edx.2.reload, 1, !insn.addr !145
  %18 = add i32 %ecx.0.reload, -1, !insn.addr !146
  %19 = icmp eq i32 %18, 0, !insn.addr !146
  %20 = icmp eq i1 %19, false, !insn.addr !147
  store i32 %16, i32* %eax.2.reg2mem, !insn.addr !147
  store i32 %18, i32* %ecx.0.reg2mem, !insn.addr !147
  store i32 %17, i32* %edx.2.reg2mem, !insn.addr !147
  store i32 %16, i32* %eax.3.reg2mem, !insn.addr !147
  br i1 %20, label %dec_label_pc_14f0, label %dec_label_pc_1503, !insn.addr !147

dec_label_pc_1503:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14a0, %dec_label_pc_14e5
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !148

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.3.reg2mem, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_1503, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14f0, { 1, 0 }
}

define i32 @goto_forward(i32 %arg1) local_unnamed_addr {
dec_label_pc_1510:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !149
  %1 = icmp slt i32 %arg1, 0, !insn.addr !149
  %2 = icmp eq i1 %1, false, !insn.addr !150
  %3 = icmp eq i1 %0, false, !insn.addr !150
  %4 = icmp eq i1 %2, %3, !insn.addr !150
  %5 = select i1 %4, i32 %arg1, i32 1, !insn.addr !151
  %6 = mul i32 %arg1, 2, !insn.addr !151
  %7 = mul i32 %6, %5, !insn.addr !152
  ret i32 %7, !insn.addr !153
}

define i32 @goto_backward(i32 %arg1) local_unnamed_addr {
dec_label_pc_1530:
  %edx.1.reg2mem = alloca i32, !insn.addr !154
  %ecx.0.reg2mem = alloca i32, !insn.addr !154
  %eax.2.reg2mem = alloca i32, !insn.addr !154
  %edx.1.ph.reg2mem = alloca i32, !insn.addr !154
  %eax.2.ph.reg2mem = alloca i32, !insn.addr !154
  %edx.0.reg2mem = alloca i32, !insn.addr !154
  %eax.1.reg2mem = alloca i32, !insn.addr !154
  %eax.0.reg2mem = alloca i32, !insn.addr !154
  %0 = icmp slt i32 %arg1, 1
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !155
  br i1 %0, label %dec_label_pc_1556, label %dec_label_pc_153b, !insn.addr !155

dec_label_pc_153b:                                ; preds = %dec_label_pc_1530
  %1 = add i32 %arg1, -1, !insn.addr !156
  %2 = urem i32 %arg1, 8, !insn.addr !157
  %3 = icmp ult i32 %1, 7, !insn.addr !158
  %4 = icmp eq i1 %3, false, !insn.addr !159
  br i1 %4, label %dec_label_pc_1563, label %dec_label_pc_1548, !insn.addr !159

dec_label_pc_1548:                                ; preds = %dec_label_pc_153b
  %5 = icmp eq i32 %2, 0, !insn.addr !160
  %6 = icmp eq i1 %5, false, !insn.addr !161
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !161
  store i32 1, i32* %eax.2.ph.reg2mem, !insn.addr !161
  store i32 1, i32* %edx.1.ph.reg2mem, !insn.addr !161
  br i1 %6, label %dec_label_pc_15d0.preheader, label %dec_label_pc_1556, !insn.addr !161

dec_label_pc_1556:                                ; preds = %dec_label_pc_15d0, %dec_label_pc_1530, %dec_label_pc_15bb, %dec_label_pc_1548
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !162

dec_label_pc_1563:                                ; preds = %dec_label_pc_153b
  %7 = and i32 %arg1, -8, !insn.addr !163
  store i32 1, i32* %eax.1.reg2mem, !insn.addr !164
  store i32 8, i32* %edx.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_1580, !insn.addr !164

dec_label_pc_1580:                                ; preds = %dec_label_pc_1580, %dec_label_pc_1563
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %8 = add i32 %edx.0.reload, -7, !insn.addr !165
  %9 = add i32 %edx.0.reload, -6, !insn.addr !166
  %10 = add i32 %edx.0.reload, -5, !insn.addr !167
  %11 = add i32 %edx.0.reload, -4, !insn.addr !168
  %12 = add i32 %edx.0.reload, -3, !insn.addr !169
  %13 = add i32 %edx.0.reload, -2, !insn.addr !170
  %14 = add i32 %edx.0.reload, -1, !insn.addr !171
  %15 = mul i32 %edx.0.reload, %eax.1.reload, !insn.addr !172
  %16 = mul i32 %15, %14, !insn.addr !173
  %17 = mul i32 %16, %12, !insn.addr !174
  %18 = mul i32 %17, %11, !insn.addr !175
  %19 = mul i32 %18, %13, !insn.addr !176
  %20 = mul i32 %19, %10, !insn.addr !177
  %21 = mul i32 %20, %9, !insn.addr !178
  %22 = mul i32 %21, %8, !insn.addr !179
  %23 = add i32 %edx.0.reload, 8, !insn.addr !180
  %24 = icmp eq i32 %edx.0.reload, %7, !insn.addr !181
  %25 = icmp eq i1 %24, false, !insn.addr !182
  store i32 %22, i32* %eax.1.reg2mem, !insn.addr !182
  store i32 %23, i32* %edx.0.reg2mem, !insn.addr !182
  br i1 %25, label %dec_label_pc_1580, label %dec_label_pc_15bb, !insn.addr !182

dec_label_pc_15bb:                                ; preds = %dec_label_pc_1580
  %26 = or i32 %edx.0.reload, 1, !insn.addr !183
  %27 = icmp eq i32 %2, 0, !insn.addr !184
  store i32 %22, i32* %eax.0.reg2mem, !insn.addr !185
  store i32 %22, i32* %eax.2.ph.reg2mem, !insn.addr !185
  store i32 %26, i32* %edx.1.ph.reg2mem, !insn.addr !185
  br i1 %27, label %dec_label_pc_1556, label %dec_label_pc_15d0.preheader, !insn.addr !185

dec_label_pc_15d0.preheader:                      ; preds = %dec_label_pc_1548, %dec_label_pc_15bb
  %edx.1.ph.reload = load i32, i32* %edx.1.ph.reg2mem
  %eax.2.ph.reload = load i32, i32* %eax.2.ph.reg2mem
  store i32 %eax.2.ph.reload, i32* %eax.2.reg2mem
  store i32 %2, i32* %ecx.0.reg2mem
  store i32 %edx.1.ph.reload, i32* %edx.1.reg2mem
  br label %dec_label_pc_15d0

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15d0.preheader, %dec_label_pc_15d0
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %28 = mul i32 %edx.1.reload, %eax.2.reload, !insn.addr !186
  %29 = add i32 %edx.1.reload, 1, !insn.addr !187
  %30 = add i32 %ecx.0.reload, -1, !insn.addr !188
  %31 = icmp eq i32 %30, 0, !insn.addr !188
  %32 = icmp eq i1 %31, false, !insn.addr !189
  store i32 %28, i32* %eax.0.reg2mem, !insn.addr !189
  store i32 %28, i32* %eax.2.reg2mem, !insn.addr !189
  store i32 %30, i32* %ecx.0.reg2mem, !insn.addr !189
  store i32 %29, i32* %edx.1.reg2mem, !insn.addr !189
  br i1 %32, label %dec_label_pc_15d0, label %dec_label_pc_1556, !insn.addr !189

; uselistorder directives
  uselistorder i32 %22, { 0, 2, 1 }
  uselistorder i32 %edx.0.reload, { 10, 8, 1, 9, 0, 4, 3, 2, 5, 6, 7 }
  uselistorder i32* %eax.0.reg2mem, { 1, 4, 0, 3, 2 }
  uselistorder i32* %eax.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_15d0, { 1, 0 }
  uselistorder label %dec_label_pc_15d0.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_1556, { 0, 2, 3, 1 }
}

define i32 @ternary_op(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = sub i32 %arg1, %arg2, !insn.addr !190
  %1 = xor i32 %arg2, %arg1, !insn.addr !190
  %2 = xor i32 %0, %arg1, !insn.addr !190
  %3 = and i32 %2, %1, !insn.addr !190
  %4 = icmp slt i32 %3, 0, !insn.addr !190
  %5 = icmp eq i32 %0, 0, !insn.addr !190
  %6 = icmp slt i32 %0, 0, !insn.addr !190
  %7 = icmp eq i1 %6, %4, !insn.addr !191
  %8 = icmp eq i1 %5, false, !insn.addr !191
  %9 = icmp eq i1 %7, %8, !insn.addr !191
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !191
  ret i32 %10, !insn.addr !192

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 3, 0, 1, 2 }
}

define i32 @test_control_flow_l1(i32 %arg1) local_unnamed_addr {
dec_label_pc_15f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 8343, !insn.addr !193
  %3 = inttoptr i32 %2 to i8*, !insn.addr !194
  %4 = call i32 @puts(i8* %3), !insn.addr !195
  %5 = add i32 %1, 6978, !insn.addr !196
  %6 = inttoptr i32 %5 to i8*, !insn.addr !197
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !198
  %8 = add i32 %1, 7009, !insn.addr !199
  %9 = inttoptr i32 %8 to i8*, !insn.addr !200
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !201
  %11 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !202
  %12 = add i32 %1, 7035, !insn.addr !203
  %13 = inttoptr i32 %12 to i8*, !insn.addr !204
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !205
  %15 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !206
  %16 = add i32 %1, 7059, !insn.addr !207
  %17 = inttoptr i32 %16 to i8*, !insn.addr !208
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !209
  %19 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !210
  %20 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !211
  %21 = add i32 %1, 7087, !insn.addr !212
  %22 = inttoptr i32 %21 to i8*, !insn.addr !213
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !214
  %24 = add i32 %1, 7118, !insn.addr !215
  %25 = inttoptr i32 %24 to i8*, !insn.addr !216
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !217
  %27 = add i32 %1, 7150, !insn.addr !218
  %28 = inttoptr i32 %27 to i8*, !insn.addr !219
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !220
  %30 = add i32 %1, 7181, !insn.addr !221
  %31 = inttoptr i32 %30 to i8*, !insn.addr !222
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !223
  %33 = add i32 %1, 7210, !insn.addr !224
  %34 = inttoptr i32 %33 to i8*, !insn.addr !225
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !226
  %36 = add i32 %1, 7239, !insn.addr !227
  %37 = inttoptr i32 %36 to i8*, !insn.addr !228
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !229
  %39 = add i32 %1, 7270, !insn.addr !230
  %40 = inttoptr i32 %39 to i8*, !insn.addr !231
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !232
  %42 = add i32 %1, 7305, !insn.addr !233
  %43 = inttoptr i32 %42 to i8*, !insn.addr !234
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !235
  %45 = add i32 %1, 7336, !insn.addr !236
  %46 = inttoptr i32 %45 to i8*, !insn.addr !237
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !238
  %48 = add i32 %1, 7363, !insn.addr !239
  %49 = inttoptr i32 %48 to i8*, !insn.addr !240
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !241
  %51 = add i32 %1, 7392, !insn.addr !242
  %52 = inttoptr i32 %51 to i8*, !insn.addr !243
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !244
  %54 = add i32 %1, 7420, !insn.addr !245
  %55 = inttoptr i32 %54 to i8*, !insn.addr !246
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !247
  %57 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !248
  %58 = add i32 %1, 7447, !insn.addr !249
  %59 = inttoptr i32 %58 to i8*, !insn.addr !250
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !251
  %61 = add i32 %1, 7477, !insn.addr !252
  %62 = inttoptr i32 %61 to i8*, !insn.addr !253
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !254
  %64 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !255
  %65 = add i32 %1, 7506, !insn.addr !256
  %66 = inttoptr i32 %65 to i8*, !insn.addr !257
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !258
  %68 = add i32 %1, 7536, !insn.addr !259
  %69 = inttoptr i32 %68 to i8*, !insn.addr !260
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !261
  %71 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !262
  ret i32 %71, !insn.addr !263
}

define i32 @loop_multi_exit(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !264
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -1, !insn.addr !265
  %3 = icmp ult i32 %2, 12
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !266
  br i1 %3, label %dec_label_pc_185e, label %dec_label_pc_186c, !insn.addr !266

dec_label_pc_185e:                                ; preds = %dec_label_pc_1840
  %4 = mul i32 %arg2, 4, !insn.addr !267
  %5 = add i32 %1, %4
  %6 = add i32 %5, 6338, !insn.addr !267
  %7 = inttoptr i32 %6 to i32*, !insn.addr !267
  %8 = load i32, i32* %7, align 4, !insn.addr !267
  %9 = add i32 %5, 6290, !insn.addr !268
  %10 = inttoptr i32 %9 to i32*, !insn.addr !268
  %11 = load i32, i32* %10, align 4, !insn.addr !268
  %12 = add i32 %11, %8, !insn.addr !268
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !268
  br label %dec_label_pc_186c, !insn.addr !268

dec_label_pc_186c:                                ; preds = %dec_label_pc_1840, %dec_label_pc_185e
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !269

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 12, { 1, 0 }
  uselistorder label %dec_label_pc_186c, { 1, 0 }
}

define i32 @infinite_loop(i32 %arg1) local_unnamed_addr {
dec_label_pc_1870:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !270
  %1 = load i32, i32* %0, align 4, !insn.addr !270
  %2 = icmp eq i32 %1, 1, !insn.addr !271
  br i1 %2, label %dec_label_pc_18a6, label %dec_label_pc_189c.preheader, !insn.addr !272

dec_label_pc_189c.preheader:                      ; preds = %dec_label_pc_1870
  store i32 1, i32* %0, align 4, !insn.addr !273
  ret i32 ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !274

dec_label_pc_18a6:                                ; preds = %dec_label_pc_1870
  ret i32 0, !insn.addr !275
}

define i32 @multi_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_18c0:
  %eax.0.reg2mem = alloca i32, !insn.addr !276
  %0 = icmp slt i32 %arg1, 0, !insn.addr !277
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !278
  br i1 %0, label %dec_label_pc_18e0, label %dec_label_pc_18c8, !insn.addr !278

dec_label_pc_18c8:                                ; preds = %dec_label_pc_18c0
  %1 = icmp ult i32 %arg1, 51
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !279
  br i1 %1, label %dec_label_pc_18d2, label %dec_label_pc_18e0, !insn.addr !279

dec_label_pc_18d2:                                ; preds = %dec_label_pc_18c8
  %2 = mul i32 %arg1, 2, !insn.addr !280
  %3 = add i32 %arg1, 1, !insn.addr !281
  %4 = urem i32 %arg1, 2
  %5 = icmp eq i32 %4, 0, !insn.addr !282
  %6 = select i1 %5, i32 %2, i32 %3, !insn.addr !283
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !283
  br label %dec_label_pc_18e0, !insn.addr !283

dec_label_pc_18e0:                                ; preds = %dec_label_pc_18c0, %dec_label_pc_18c8, %dec_label_pc_18d2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !284

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg1, { 1, 3, 0, 2, 4 }
  uselistorder label %dec_label_pc_18e0, { 2, 1, 0 }
}

define i32 @conditional_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_18f0:
  %0 = mul i32 %arg1, 2, !insn.addr !285
  %1 = sub i32 0, %arg1, !insn.addr !286
  %2 = icmp eq i32 %arg1, 0, !insn.addr !287
  %3 = icmp slt i32 %arg1, 0, !insn.addr !287
  %4 = icmp eq i1 %3, false, !insn.addr !288
  %5 = icmp eq i1 %2, false, !insn.addr !288
  %6 = icmp eq i1 %4, %5, !insn.addr !288
  %7 = select i1 %6, i32 %0, i32 %1, !insn.addr !288
  ret i32 %7, !insn.addr !289

; uselistorder directives
  uselistorder i32 %arg1, { 2, 3, 1, 0 }
}

define i32 @duffs_device(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1910:
  %0 = icmp slt i32 %arg4, 1
  br i1 %0, label %dec_label_pc_19a4, label %dec_label_pc_1934, !insn.addr !290

dec_label_pc_1934:                                ; preds = %dec_label_pc_1910
  %1 = add i32 %arg4, 7, !insn.addr !291
  %2 = udiv i32 %1, 8, !insn.addr !292
  ret i32 %2, !insn.addr !293

dec_label_pc_19a4:                                ; preds = %dec_label_pc_1910
  ret i32 -1, !insn.addr !294

; uselistorder directives
  uselistorder i32 8, { 1, 4, 0, 2, 3 }
}

define i32 @loop_complex_cond(i32 %arg1) local_unnamed_addr {
dec_label_pc_19b0:
  %edx.0.reg2mem = alloca i32, !insn.addr !295
  %ecx.1.reg2mem = alloca i32, !insn.addr !295
  %eax.1.reg2mem = alloca i32, !insn.addr !295
  %esi.0.reg2mem = alloca i32, !insn.addr !295
  %ecx.0.reg2mem = alloca i32, !insn.addr !295
  %eax.0.reg2mem = alloca i32, !insn.addr !295
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !296
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !296
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !296
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !296
  store i32 %arg1, i32* %ecx.1.reg2mem, !insn.addr !296
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !296
  br i1 %0, label %dec_label_pc_19e1, label %dec_label_pc_19c0, !insn.addr !296

dec_label_pc_19c0:                                ; preds = %dec_label_pc_19b0, %dec_label_pc_19c0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add nuw nsw i32 %eax.0.reload, 2, !insn.addr !297
  %2 = add nsw i32 %ecx.0.reload, -1, !insn.addr !298
  %3 = add nuw nsw i32 %esi.0.reload, 1, !insn.addr !299
  %4 = icmp ugt i32 %ecx.0.reload, 1, !insn.addr !300
  %5 = icmp slt i32 %1, %2, !insn.addr !301
  %or.cond = icmp eq i1 %4, %5
  %6 = icmp ult i32 %esi.0.reload, 9, !insn.addr !302
  %or.cond1 = icmp eq i1 %6, %or.cond
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !303
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !303
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !303
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !303
  store i32 %2, i32* %ecx.1.reg2mem, !insn.addr !303
  store i32 %3, i32* %edx.0.reg2mem, !insn.addr !303
  br i1 %or.cond1, label %dec_label_pc_19c0, label %dec_label_pc_19e1, !insn.addr !303

dec_label_pc_19e1:                                ; preds = %dec_label_pc_19c0, %dec_label_pc_19b0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %7 = add i32 %ecx.1.reload, %eax.1.reload, !insn.addr !304
  %8 = add i32 %7, %edx.0.reload, !insn.addr !305
  ret i32 %8, !insn.addr !306

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19c0, { 1, 0 }
}

define i32 @loop_modify_var(i32 %arg1) local_unnamed_addr {
dec_label_pc_19f0:
  %merge.reg2mem = alloca i32, !insn.addr !307
  %edx.0.reg2mem = alloca i32, !insn.addr !307
  %eax.0.reg2mem = alloca i32, !insn.addr !307
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !308
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !308
  store i32 0, i32* %merge.reg2mem, !insn.addr !308
  br i1 %0, label %dec_label_pc_1a14, label %dec_label_pc_1a00, !insn.addr !308

dec_label_pc_1a00:                                ; preds = %dec_label_pc_19f0, %dec_label_pc_1a00
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !309
  %2 = add i32 %edx.0.reload, 2, !insn.addr !310
  %3 = add i32 %edx.0.reload, -6, !insn.addr !311
  %4 = sub i32 5, %edx.0.reload
  %5 = and i32 %4, %edx.0.reload, !insn.addr !311
  %6 = icmp slt i32 %5, 0, !insn.addr !311
  %7 = icmp slt i32 %3, 0, !insn.addr !311
  %8 = icmp eq i1 %7, %6, !insn.addr !312
  %9 = select i1 %8, i32 %2, i32 %edx.0.reload, !insn.addr !312
  %10 = add i32 %9, 1, !insn.addr !313
  %11 = icmp slt i32 %10, %arg1, !insn.addr !314
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !314
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !314
  store i32 %1, i32* %merge.reg2mem, !insn.addr !314
  br i1 %11, label %dec_label_pc_1a00, label %dec_label_pc_1a14, !insn.addr !314

dec_label_pc_1a14:                                ; preds = %dec_label_pc_1a00, %dec_label_pc_19f0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !315

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 3, 5, 0, 1, 2, 4 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a00, { 1, 0 }
}

define i32 @loop_external_state(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a20:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !316
  %1 = load i32, i32* %0, align 4, !insn.addr !316
  %2 = icmp eq i32 %1, 0
  %3 = icmp eq i1 %2, false, !insn.addr !317
  %spec.select = select i1 %3, i32 0, i32 101
  ret i32 %spec.select, !insn.addr !318
}

define i32 @recursion_factorial(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a60:
  %eax.1.reg2mem = alloca i32, !insn.addr !319
  %ecx.0.reg2mem = alloca i32, !insn.addr !319
  %eax.0.reg2mem = alloca i32, !insn.addr !319
  %0 = icmp slt i32 %arg1, 2, !insn.addr !320
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !320
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !320
  store i32 1, i32* %eax.1.reg2mem, !insn.addr !320
  br i1 %0, label %dec_label_pc_1a8d, label %dec_label_pc_1a80, !insn.addr !320

dec_label_pc_1a80:                                ; preds = %dec_label_pc_1a60, %dec_label_pc_1a80
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !321
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !322
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !323
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !323
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !323
  br i1 %3, label %dec_label_pc_1a8d, label %dec_label_pc_1a80, !insn.addr !323

dec_label_pc_1a8d:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a60
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !324

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a80, { 1, 0 }
}

define i32 @tail_recursion(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a90:
  %eax.1.reg2mem = alloca i32, !insn.addr !325
  %ecx.0.reg2mem = alloca i32, !insn.addr !325
  %eax.0.reg2mem = alloca i32, !insn.addr !325
  %0 = icmp slt i32 %arg1, 2, !insn.addr !326
  store i32 %arg2, i32* %eax.0.reg2mem, !insn.addr !326
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !326
  store i32 %arg2, i32* %eax.1.reg2mem, !insn.addr !326
  br i1 %0, label %dec_label_pc_1aad, label %dec_label_pc_1aa0, !insn.addr !326

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1aa0
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !327
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !328
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !329
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !329
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !329
  br i1 %3, label %dec_label_pc_1aad, label %dec_label_pc_1aa0, !insn.addr !329

dec_label_pc_1aad:                                ; preds = %dec_label_pc_1aa0, %dec_label_pc_1a90
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !330

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1aa0, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ab0:
  %merge.reg2mem = alloca i32, !insn.addr !331
  %ecx.0.reg2mem = alloca i32, !insn.addr !331
  %eax.0.reg2mem = alloca i32, !insn.addr !331
  %storemerge.reg2mem = alloca i32, !insn.addr !331
  %0 = icmp slt i32 %arg2, 1
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !332
  br i1 %0, label %dec_label_pc_1b0d, label %dec_label_pc_1abc, !insn.addr !332

dec_label_pc_1abc:                                ; preds = %dec_label_pc_1ab0
  %1 = add i32 %arg2, 2, !insn.addr !333
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !334
  store i32 %1, i32* %ecx.0.reg2mem, !insn.addr !334
  br label %dec_label_pc_1ad8, !insn.addr !334

dec_label_pc_1ad0:                                ; preds = %dec_label_pc_1b08, %dec_label_pc_1aea
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %2 = add i32 %ecx.0.reload, -2, !insn.addr !335
  %3 = icmp slt i32 %2, 3, !insn.addr !336
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !336
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !336
  store i32 %storemerge.reload, i32* %merge.reg2mem, !insn.addr !336
  br i1 %3, label %dec_label_pc_1b0d, label %dec_label_pc_1ad8, !insn.addr !336

dec_label_pc_1ad8:                                ; preds = %dec_label_pc_1ad0, %dec_label_pc_1abc
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = urem i32 %eax.0.reload, 2
  %5 = icmp eq i32 %4, 0, !insn.addr !337
  %6 = icmp eq i1 %5, false, !insn.addr !338
  br i1 %6, label %dec_label_pc_1b00, label %dec_label_pc_1adc, !insn.addr !338

dec_label_pc_1adc:                                ; preds = %dec_label_pc_1ad8
  %7 = icmp slt i32 %eax.0.reload, 0
  %8 = zext i1 %7 to i32, !insn.addr !339
  %9 = add i32 %eax.0.reload, %8, !insn.addr !340
  %10 = ashr i32 %9, 1, !insn.addr !341
  %11 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !342
  store i32 %10, i32* %merge.reg2mem, !insn.addr !343
  br i1 %11, label %dec_label_pc_1b0d, label %dec_label_pc_1aea, !insn.addr !343

dec_label_pc_1aea:                                ; preds = %dec_label_pc_1adc
  %12 = add nsw i32 %10, 1, !insn.addr !344
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !345
  br label %dec_label_pc_1ad0, !insn.addr !345

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1ad8
  %13 = mul i32 %eax.0.reload, 3, !insn.addr !346
  %14 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !347
  br i1 %14, label %dec_label_pc_1b10, label %dec_label_pc_1b08, !insn.addr !348

dec_label_pc_1b08:                                ; preds = %dec_label_pc_1b00
  %15 = add i32 %13, 2, !insn.addr !349
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !350
  br label %dec_label_pc_1ad0, !insn.addr !350

dec_label_pc_1b0d:                                ; preds = %dec_label_pc_1ad0, %dec_label_pc_1adc, %dec_label_pc_1ab0, %dec_label_pc_1b10
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !351

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1b00
  %16 = add i32 %13, 1, !insn.addr !352
  store i32 %16, i32* %merge.reg2mem, !insn.addr !352
  br label %dec_label_pc_1b0d, !insn.addr !352

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 0, 3, 2, 1 }
  uselistorder i32 %ecx.0.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 2, 1, 0 }
  uselistorder i32* %merge.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1b0d, { 3, 1, 0, 2 }
}

define i32 @call_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !353
}

define i32 @call_func_ptr_array(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1b40:
  %0 = icmp ult i32 %arg2, 3
  %spec.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.select, !insn.addr !354
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = mul i32 %arg1, 2, !insn.addr !355
  ret i32 %0, !insn.addr !356
}

define i32 @triple_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = mul i32 %arg1, 3, !insn.addr !357
  ret i32 %0, !insn.addr !358
}

define i32 @call_virtual_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ba0:
  %0 = mul i32 %arg1, 2, !insn.addr !359
  ret i32 %0, !insn.addr !360
}

define i32 @process_with_callback(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1bb0:
  %esi.1.reg2mem = alloca i32, !insn.addr !361
  %esi.0.reg2mem = alloca i32, !insn.addr !361
  %ebp.0.reg2mem = alloca i32, !insn.addr !361
  %0 = icmp slt i32 %arg3, 1
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !362
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !362
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !362
  br i1 %0, label %dec_label_pc_1beb, label %dec_label_pc_1bd0, !insn.addr !362

dec_label_pc_1bd0:                                ; preds = %dec_label_pc_1bb0, %dec_label_pc_1bd0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %1 = mul i32 %ebp.0.reload, 4, !insn.addr !363
  %2 = add i32 %1, %arg2, !insn.addr !363
  %3 = inttoptr i32 %2 to i32*, !insn.addr !363
  %4 = load i32, i32* %3, align 4, !insn.addr !363
  %5 = add i32 %4, %esi.0.reload, !insn.addr !364
  %6 = add i32 %ebp.0.reload, 1, !insn.addr !365
  %7 = icmp eq i32 %6, %arg3, !insn.addr !366
  %8 = icmp eq i1 %7, false, !insn.addr !367
  store i32 %6, i32* %ebp.0.reg2mem, !insn.addr !367
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !367
  store i32 %5, i32* %esi.1.reg2mem, !insn.addr !367
  br i1 %8, label %dec_label_pc_1bd0, label %dec_label_pc_1beb, !insn.addr !367

dec_label_pc_1beb:                                ; preds = %dec_label_pc_1bd0, %dec_label_pc_1bb0
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  ret i32 %esi.1.reload, !insn.addr !368

; uselistorder directives
  uselistorder i32* %ebp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 4, { 0, 1, 4, 6, 3, 2, 5, 7 }
  uselistorder label %dec_label_pc_1bd0, { 1, 0 }
}

define i32 @test_control_flow_l2(i32 %arg1) local_unnamed_addr {
dec_label_pc_1c00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 6826, !insn.addr !369
  %3 = inttoptr i32 %2 to i8*, !insn.addr !370
  %4 = call i32 @puts(i8* %3), !insn.addr !371
  %5 = add i32 %1, 6010, !insn.addr !372
  %6 = inttoptr i32 %5 to i8*, !insn.addr !373
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !374
  %8 = add i32 %1, 6042, !insn.addr !375
  %9 = inttoptr i32 %8 to i8*, !insn.addr !376
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !377
  %11 = add i32 %1, 6072, !insn.addr !378
  %12 = inttoptr i32 %11 to i8*, !insn.addr !379
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !380
  %14 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !381
  %15 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !382
  %16 = add i32 %1, 6101, !insn.addr !383
  %17 = inttoptr i32 %16 to i8*, !insn.addr !384
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !385
  %19 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !386
  %20 = add i32 %1, 6136, !insn.addr !387
  %21 = inttoptr i32 %20 to i8*, !insn.addr !388
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !389
  %23 = add i32 %1, 6165, !insn.addr !390
  %24 = inttoptr i32 %23 to i8*, !insn.addr !391
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !392
  %26 = add i32 %1, 6199, !insn.addr !393
  %27 = inttoptr i32 %26 to i8*, !insn.addr !394
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !395
  %29 = add i32 %1, 6231, !insn.addr !396
  %30 = inttoptr i32 %29 to i8*, !insn.addr !397
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !398
  %32 = add i32 %1, 6267, !insn.addr !399
  %33 = inttoptr i32 %32 to i8*, !insn.addr !400
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !401
  %35 = add i32 %1, 6303, !insn.addr !402
  %36 = inttoptr i32 %35 to i8*, !insn.addr !403
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !404
  %38 = add i32 %1, 6334, !insn.addr !405
  %39 = inttoptr i32 %38 to i8*, !insn.addr !406
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !407
  %41 = add i32 %1, 6369, !insn.addr !408
  %42 = inttoptr i32 %41 to i8*, !insn.addr !409
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !410
  %44 = add i32 %1, 6399, !insn.addr !411
  %45 = inttoptr i32 %44 to i8*, !insn.addr !412
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !413
  %47 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !414
  %48 = add i32 %1, 6435, !insn.addr !415
  %49 = inttoptr i32 %48 to i8*, !insn.addr !416
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !417
  ret i32 %50, !insn.addr !418

; uselistorder directives
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
}

define i32 @non_local_jump(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e80:
  %0 = alloca i32
  %ecx.0.reg2mem = alloca i32, !insn.addr !419
  %1 = load i32, i32* %0
  %2 = add i32 %1, 16806, !insn.addr !420
  %3 = insertvalue [8 x i32] undef, i32 %2, 0, !insn.addr !421
  %4 = insertvalue %__jmp_buf_tag undef, [8 x i32] %3, 0, !insn.addr !421
  %5 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %4, 0, !insn.addr !421
  %6 = call i32 @_setjmp([1 x %__jmp_buf_tag] %5), !insn.addr !421
  %7 = icmp eq i32 %6, 0, !insn.addr !422
  %8 = icmp eq i1 %7, false, !insn.addr !423
  store i32 -1, i32* %ecx.0.reg2mem, !insn.addr !423
  br i1 %8, label %dec_label_pc_1eba, label %dec_label_pc_1ea9, !insn.addr !423

dec_label_pc_1ea9:                                ; preds = %dec_label_pc_1e80
  %9 = icmp slt i32 %arg2, 0, !insn.addr !424
  br i1 %9, label %dec_label_pc_1ec2, label %dec_label_pc_1eb1, !insn.addr !425

dec_label_pc_1eb1:                                ; preds = %dec_label_pc_1ea9
  %10 = icmp ult i32 %arg2, 101, !insn.addr !426
  %11 = icmp eq i1 %10, false, !insn.addr !427
  br i1 %11, label %dec_label_pc_1ed2, label %dec_label_pc_1eb6, !insn.addr !427

dec_label_pc_1eb6:                                ; preds = %dec_label_pc_1eb1
  %12 = mul i32 %arg2, 2, !insn.addr !428
  store i32 %12, i32* %ecx.0.reg2mem, !insn.addr !429
  br label %dec_label_pc_1eba, !insn.addr !429

dec_label_pc_1eba:                                ; preds = %dec_label_pc_1eb6, %dec_label_pc_1e80
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  ret i32 %ecx.0.reload, !insn.addr !430

dec_label_pc_1ec2:                                ; preds = %dec_label_pc_1ea9
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !431
  unreachable, !insn.addr !431

dec_label_pc_1ed2:                                ; preds = %dec_label_pc_1eb1
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !432
  unreachable, !insn.addr !432

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder i32 101, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 1 }
}

define i32 @cpp_exception(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = mul i32 %arg1, 2, !insn.addr !433
  %1 = add i32 %arg1, -101, !insn.addr !434
  %2 = sub i32 100, %arg1
  %3 = and i32 %2, %arg1, !insn.addr !434
  %4 = icmp slt i32 %3, 0, !insn.addr !434
  %5 = icmp slt i32 %1, 0, !insn.addr !434
  %6 = icmp eq i1 %5, %4, !insn.addr !435
  %7 = select i1 %6, i32 -2, i32 %0, !insn.addr !435
  %8 = icmp slt i32 %arg1, 0, !insn.addr !436
  %9 = icmp eq i1 %8, false, !insn.addr !437
  %10 = select i1 %9, i32 %7, i32 -1, !insn.addr !437
  ret i32 %10, !insn.addr !438

; uselistorder directives
  uselistorder i32 -2, { 1, 2, 0, 3, 4 }
  uselistorder i32 100, { 0, 3, 1, 4, 2 }
  uselistorder i32 %arg1, { 4, 1, 2, 3, 0 }
}

define i32 @large_jump_table(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1f10:
  %0 = icmp ult i32 %arg2, 10
  %spec.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.select, !insn.addr !439
}

define i32 @op_add(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f50:
  %0 = add i32 %arg2, %arg1, !insn.addr !440
  ret i32 %0, !insn.addr !441
}

define i32 @op_sub(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f60:
  %0 = sub i32 %arg1, %arg2, !insn.addr !442
  ret i32 %0, !insn.addr !443
}

define i32 @op_mul(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f70:
  %0 = mul i32 %arg2, %arg1, !insn.addr !444
  ret i32 %0, !insn.addr !445
}

define i32 @op_div(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f80:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !446
  br i1 %0, label %dec_label_pc_1f90, label %dec_label_pc_1f88, !insn.addr !447

dec_label_pc_1f88:                                ; preds = %dec_label_pc_1f80
  %1 = ashr i32 %arg1, 31, !insn.addr !448
  %2 = zext i32 %arg1 to i64, !insn.addr !449
  %3 = zext i32 %1 to i64, !insn.addr !449
  %4 = mul i64 %3, 4294967296, !insn.addr !449
  %5 = or i64 %4, %2, !insn.addr !449
  %6 = zext i32 %arg2 to i64, !insn.addr !449
  %7 = sdiv i64 %5, %6, !insn.addr !449
  %8 = trunc i64 %7 to i32, !insn.addr !449
  ret i32 %8, !insn.addr !450

dec_label_pc_1f90:                                ; preds = %dec_label_pc_1f80
  ret i32 0, !insn.addr !451
}

define i32 @op_mod(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !452
  br i1 %0, label %dec_label_pc_1fb2, label %dec_label_pc_1fa8, !insn.addr !453

dec_label_pc_1fa8:                                ; preds = %dec_label_pc_1fa0
  %1 = ashr i32 %arg1, 31, !insn.addr !454
  %2 = zext i32 %arg1 to i64, !insn.addr !455
  %3 = zext i32 %1 to i64, !insn.addr !455
  %4 = mul i64 %3, 4294967296, !insn.addr !455
  %5 = or i64 %4, %2, !insn.addr !455
  %6 = zext i32 %arg2 to i64, !insn.addr !455
  %7 = srem i64 %5, %6, !insn.addr !455
  %8 = trunc i64 %7 to i32, !insn.addr !455
  ret i32 %8, !insn.addr !456

dec_label_pc_1fb2:                                ; preds = %dec_label_pc_1fa0
  ret i32 0, !insn.addr !457
}

define i32 @op_and(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fc0:
  %0 = and i32 %arg2, %arg1, !insn.addr !458
  ret i32 %0, !insn.addr !459
}

define i32 @op_or(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fd0:
  %0 = or i32 %arg2, %arg1, !insn.addr !460
  ret i32 %0, !insn.addr !461
}

define i32 @op_xor(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fe0:
  %0 = xor i32 %arg2, %arg1, !insn.addr !462
  ret i32 %0, !insn.addr !463
}

define i32 @op_shl(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_1ff0:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = shl i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !464
}

define i32 @op_shr(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_2000:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = ashr i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !465
}

define i32 @conditional_func_ptr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2010:
  ret i32 %arg3, !insn.addr !466
}

define i32 @state_machine(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2050:
  %0 = icmp ult i32 %arg3, 3
  %spec.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.select, !insn.addr !467
}

define i32 @function_2081() local_unnamed_addr {
dec_label_pc_2081:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 99, !insn.addr !468
  %3 = zext i1 %2 to i32, !insn.addr !469
  %4 = mul i32 %3, 2, !insn.addr !470
  %5 = or i32 %4, 1, !insn.addr !471
  %6 = icmp eq i32 %1, 2, !insn.addr !472
  %7 = select i1 %6, i32 2, i32 %5, !insn.addr !473
  ret i32 %7, !insn.addr !474

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_2095() local_unnamed_addr {
dec_label_pc_2095:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !475
  %3 = icmp eq i1 %2, false, !insn.addr !476
  %4 = select i1 %3, i32 3, i32 0, !insn.addr !477
  ret i32 %4, !insn.addr !478
}

define i32 @fsm_func_table(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_20a0:
  %0 = icmp ult i32 %arg3, 3
  %spec.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.select, !insn.addr !479
}

define i32 @state_idle(i32 %arg1) local_unnamed_addr {
dec_label_pc_20e0:
  %0 = icmp eq i32 %arg1, 1, !insn.addr !480
  %1 = zext i1 %0 to i32, !insn.addr !481
  ret i32 %1, !insn.addr !482
}

define i32 @state_processing(i32 %arg1) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = icmp eq i32 %arg1, 99, !insn.addr !483
  %1 = zext i1 %0 to i32, !insn.addr !484
  %2 = mul i32 %1, 2, !insn.addr !485
  %3 = or i32 %2, 1, !insn.addr !486
  %4 = icmp eq i32 %arg1, 2, !insn.addr !487
  %5 = select i1 %4, i32 2, i32 %3, !insn.addr !488
  ret i32 %5, !insn.addr !489
}

define i32 @state_done() local_unnamed_addr {
dec_label_pc_2110:
  ret i32 2, !insn.addr !490
}

define i32 @state_error(i32 %arg1) local_unnamed_addr {
dec_label_pc_2120:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !491
  %1 = icmp eq i1 %0, false, !insn.addr !492
  %2 = select i1 %1, i32 3, i32 0, !insn.addr !493
  ret i32 %2, !insn.addr !494
}

define i32 @computed_goto(i32 %arg1) local_unnamed_addr {
dec_label_pc_2130:
  ret i32 -1, !insn.addr !495
}

define i32 @function_2152() local_unnamed_addr {
dec_label_pc_2152:
  ret i32 0, !insn.addr !496
}

define i32 @function_2155() local_unnamed_addr {
dec_label_pc_2155:
  ret i32 20, !insn.addr !497
}

define i32 @function_215b() local_unnamed_addr {
dec_label_pc_215b:
  ret i32 30, !insn.addr !498
}

define i32 @function_2161() local_unnamed_addr {
dec_label_pc_2161:
  ret i32 10, !insn.addr !499

; uselistorder directives
  uselistorder i32 10, { 0, 3, 4, 5, 2, 1 }
}

define i32 @obfuscated_cf(i32 %arg1) local_unnamed_addr {
dec_label_pc_2170:
  %0 = mul i32 %arg1, 2, !insn.addr !500
  ret i32 %0, !insn.addr !501
}

define i32 @opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_2180:
  %0 = mul i32 %arg1, 2, !insn.addr !502
  ret i32 %0, !insn.addr !503
}

define i32 @overlapped_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_2190:
  %0 = urem i32 %arg1, 2
  %1 = icmp eq i32 %0, 0, !insn.addr !504
  %2 = icmp eq i1 %1, false, !insn.addr !505
  br i1 %2, label %dec_label_pc_21a3, label %dec_label_pc_2199, !insn.addr !505

dec_label_pc_2199:                                ; preds = %dec_label_pc_2190
  %3 = icmp slt i32 %arg1, 0
  %4 = zext i1 %3 to i32, !insn.addr !506
  %5 = add i32 %4, %arg1, !insn.addr !507
  %6 = ashr i32 %5, 1, !insn.addr !508
  ret i32 %6, !insn.addr !509

dec_label_pc_21a3:                                ; preds = %dec_label_pc_2190
  %7 = mul i32 %arg1, 3, !insn.addr !510
  %8 = add i32 %7, 1, !insn.addr !511
  ret i32 %8, !insn.addr !512

; uselistorder directives
  uselistorder i32 3, { 6, 7, 2, 3, 8, 4, 5, 9, 10, 11, 12, 13, 17, 14, 15, 18, 1, 16, 19, 20, 0 }
  uselistorder i32 %arg1, { 3, 2, 0, 1 }
}

define i32 @test_control_flow_l3(i32 %arg1) local_unnamed_addr {
dec_label_pc_21b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10535), !insn.addr !513
  %3 = inttoptr i32 %2 to i8*, !insn.addr !514
  %4 = call i32 @puts(i8* %3), !insn.addr !515
  %5 = call i32 @non_local_jump(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !516
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10924), !insn.addr !517
  %7 = inttoptr i32 %6 to i8*, !insn.addr !518
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !519
  %9 = call i32 @non_local_jump(i32 -5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !520
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !521
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10893), !insn.addr !522
  %12 = inttoptr i32 %11 to i8*, !insn.addr !523
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !524
  %14 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !525
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10863), !insn.addr !526
  %16 = inttoptr i32 %15 to i8*, !insn.addr !527
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !528
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10830), !insn.addr !529
  %19 = inttoptr i32 %18 to i8*, !insn.addr !530
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !531
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10793), !insn.addr !532
  %22 = inttoptr i32 %21 to i8*, !insn.addr !533
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !534
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10763), !insn.addr !535
  %25 = inttoptr i32 %24 to i8*, !insn.addr !536
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !537
  %27 = call i32 @computed_goto(i32 2), !insn.addr !538
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10732), !insn.addr !539
  %29 = inttoptr i32 %28 to i8*, !insn.addr !540
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !541
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10702), !insn.addr !542
  %32 = inttoptr i32 %31 to i8*, !insn.addr !543
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !544
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10672), !insn.addr !545
  %35 = inttoptr i32 %34 to i8*, !insn.addr !546
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !547
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e46 to i32), i32 -10639), !insn.addr !548
  %38 = inttoptr i32 %37 to i8*, !insn.addr !549
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !550
  ret i32 %39, !insn.addr !551

; uselistorder directives
  uselistorder i32 %1, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 2, { 28, 17, 1, 2, 15, 24, 25, 3, 26, 27, 4, 5, 6, 7, 8, 31, 18, 32, 29, 30, 33, 34, 9, 19, 10, 11, 20, 22, 12, 16, 35, 36, 21, 13, 23, 0, 14 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i32 (i32, i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_22f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_control_flow_l1(i32 %1), !insn.addr !552
  %3 = call i32 @test_control_flow_l2(i32 ptrtoint (i32* @0 to i32)), !insn.addr !553
  %4 = call i32 @test_control_flow_l3(i32 ptrtoint (i32* @0 to i32)), !insn.addr !554
  ret i32 0, !insn.addr !555

; uselistorder directives
  uselistorder i32 0, { 18, 25, 28, 19, 29, 39, 30, 38, 20, 40, 21, 41, 42, 43, 44, 45, 46, 0, 1, 2, 26, 31, 27, 47, 48, 49, 3, 4, 5, 6, 7, 8, 9, 50, 51, 52, 32, 53, 22, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 12, 11, 10, 35, 13, 14, 65, 23, 15, 16, 36, 66, 67, 17, 37, 33, 34, 68, 69, 70, 71, 72, 24 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2320:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !556
  %ebx.0.reg2mem = alloca i32, !insn.addr !556
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !557
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3cd7 to i32), i32 -328), !insn.addr !558
  %4 = inttoptr i32 %3 to i32*, !insn.addr !558
  %5 = load i32, i32* %4, align 4, !insn.addr !558
  %6 = icmp eq i32 %5, -1, !insn.addr !559
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !560
  store i32 -1, i32* %merge.reg2mem, !insn.addr !560
  br i1 %6, label %dec_label_pc_235d, label %dec_label_pc_2350, !insn.addr !560

dec_label_pc_2350:                                ; preds = %dec_label_pc_2320, %dec_label_pc_2350
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !561
  %8 = inttoptr i32 %7 to i32*, !insn.addr !561
  %9 = load i32, i32* %8, align 4, !insn.addr !561
  %10 = icmp eq i32 %9, -1, !insn.addr !562
  %11 = icmp eq i1 %10, false, !insn.addr !563
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !563
  store i32 %9, i32* %merge.reg2mem, !insn.addr !563
  br i1 %11, label %dec_label_pc_2350, label %dec_label_pc_235d, !insn.addr !563

dec_label_pc_235d:                                ; preds = %dec_label_pc_2350, %dec_label_pc_2320
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !564

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 29, 6, 7, 5, 8, 9, 10, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 3, 21, 22, 23, 24, 25, 0, 26, 1, 27, 4, 28 }
  uselistorder i32 -4, { 2, 0, 1 }
  uselistorder i32 -1, { 10, 0, 11, 6, 8, 12, 1, 9, 16, 17, 18, 7, 2, 3, 19, 20, 21, 22, 23, 24, 25, 4, 26, 13, 5, 14, 15 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 0, 1, 2, 3, 4, 6, 5, 7, 8 }
  uselistorder label %dec_label_pc_2350, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_236c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !565
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !566
  ret i32 %3, !insn.addr !567

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 19, 21, 20, 18, 17, 16, 109, 110, 88, 89, 15, 90, 14, 22, 13, 12, 111, 91, 25, 24, 23, 11, 112, 113, 114, 92, 29, 28, 27, 26, 32, 31, 30, 33, 36, 37, 35, 34, 115, 93, 40, 39, 38, 85, 116, 94, 46, 45, 44, 43, 42, 41, 95, 117, 47, 118, 96, 48, 10, 9, 119, 87, 57, 52, 54, 60, 59, 97, 61, 58, 56, 55, 53, 51, 50, 49, 98, 120, 69, 66, 99, 71, 70, 68, 67, 65, 64, 63, 62, 100, 101, 121, 73, 72, 122, 74, 77, 76, 75, 102, 86, 80, 79, 78, 81, 103, 104, 82, 105, 106, 83, 107, 8, 7, 84, 6, 5, 4, 3, 108, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

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
!10 = !{i64 4271}
!11 = !{i64 4288}
!12 = !{i64 4294}
!13 = !{i64 4299}
!14 = !{i64 4303}
!15 = !{i64 4307}
!16 = !{i64 4320}
!17 = !{i64 4337}
!18 = !{i64 4376}
!19 = !{i64 4384}
!20 = !{i64 4454}
!21 = !{i64 4464}
!22 = !{i64 4472}
!23 = !{i64 4488}
!24 = !{i64 4495}
!25 = !{i64 4497}
!26 = !{i64 4503}
!27 = !{i64 4505}
!28 = !{i64 4518}
!29 = !{i64 4523}
!30 = !{i64 4582}
!31 = !{i64 4587}
!32 = !{i64 4601}
!33 = !{i64 4612}
!34 = !{i64 4620}
!35 = !{i64 4624}
!36 = !{i64 4644}
!37 = !{i64 4648}
!38 = !{i64 4650}
!39 = !{i64 4654}
!40 = !{i64 4660}
!41 = !{i64 4662}
!42 = !{i64 4667}
!43 = !{i64 4674}
!44 = !{i64 4679}
!45 = !{i64 4682}
!46 = !{i64 4700}
!47 = !{i64 4703}
!48 = !{i64 4707}
!49 = !{i64 4710}
!50 = !{i64 4720}
!51 = !{i64 4725}
!52 = !{i64 4732}
!53 = !{i64 4739}
!54 = !{i64 4746}
!55 = !{i64 4750}
!56 = !{i64 4755}
!57 = !{i64 4758}
!58 = !{i64 4761}
!59 = !{i64 4764}
!60 = !{i64 4788}
!61 = !{i64 4794}
!62 = !{i64 4803}
!63 = !{i64 4806}
!64 = !{i64 4820}
!65 = !{i64 4823}
!66 = !{i64 4826}
!67 = !{i64 4834}
!68 = !{i64 4837}
!69 = !{i64 4848}
!70 = !{i64 4872}
!71 = !{i64 4874}
!72 = !{i64 4881}
!73 = !{i64 4903}
!74 = !{i64 4906}
!75 = !{i64 4914}
!76 = !{i64 4917}
!77 = !{i64 4932}
!78 = !{i64 4935}
!79 = !{i64 4938}
!80 = !{i64 4943}
!81 = !{i64 4946}
!82 = !{i64 4949}
!83 = !{i64 4960}
!84 = !{i64 4981}
!85 = !{i64 4984}
!86 = !{i64 4991}
!87 = !{i64 4994}
!88 = !{i64 4996}
!89 = !{i64 5014}
!90 = !{i64 5019}
!91 = !{i64 5022}
!92 = !{i64 5024}
!93 = !{i64 5031}
!94 = !{i64 5034}
!95 = !{i64 5037}
!96 = !{i64 5040}
!97 = !{i64 5046}
!98 = !{i64 5048}
!99 = !{i64 5074}
!100 = !{i64 5078}
!101 = !{i64 5081}
!102 = !{i64 5084}
!103 = !{i64 5086}
!104 = !{i64 5089}
!105 = !{i64 5097}
!106 = !{i64 5103}
!107 = !{i64 5120}
!108 = !{i64 5135}
!109 = !{i64 5138}
!110 = !{i64 5142}
!111 = !{i64 5145}
!112 = !{i64 5148}
!113 = !{i64 5150}
!114 = !{i64 5153}
!115 = !{i64 5161}
!116 = !{i64 5167}
!117 = !{i64 5179}
!118 = !{i64 5191}
!119 = !{i64 5195}
!120 = !{i64 5216}
!121 = !{i64 5233}
!122 = !{i64 5252}
!123 = !{i64 5258}
!124 = !{i64 5264}
!125 = !{i64 5280}
!126 = !{i64 5288}
!127 = !{i64 5290}
!128 = !{i64 5298}
!129 = !{i64 5301}
!130 = !{i64 5316}
!131 = !{i64 5323}
!132 = !{i64 5330}
!133 = !{i64 5332}
!134 = !{i64 5335}
!135 = !{i64 5341}
!136 = !{i64 5344}
!137 = !{i64 5347}
!138 = !{i64 5295}
!139 = !{i64 5349}
!140 = !{i64 5351}
!141 = !{i64 5362}
!142 = !{i64 5365}
!143 = !{i64 5367}
!144 = !{i64 5369}
!145 = !{i64 5371}
!146 = !{i64 5374}
!147 = !{i64 5377}
!148 = !{i64 5381}
!149 = !{i64 5396}
!150 = !{i64 5403}
!151 = !{i64 5406}
!152 = !{i64 5409}
!153 = !{i64 5411}
!154 = !{i64 5424}
!155 = !{i64 5433}
!156 = !{i64 5435}
!157 = !{i64 5440}
!158 = !{i64 5443}
!159 = !{i64 5446}
!160 = !{i64 5458}
!161 = !{i64 5460}
!162 = !{i64 5465}
!163 = !{i64 5475}
!164 = !{i64 5503}
!165 = !{i64 5504}
!166 = !{i64 5510}
!167 = !{i64 5513}
!168 = !{i64 5522}
!169 = !{i64 5525}
!170 = !{i64 5531}
!171 = !{i64 5540}
!172 = !{i64 5507}
!173 = !{i64 5516}
!174 = !{i64 5519}
!175 = !{i64 5528}
!176 = !{i64 5534}
!177 = !{i64 5537}
!178 = !{i64 5543}
!179 = !{i64 5546}
!180 = !{i64 5555}
!181 = !{i64 5558}
!182 = !{i64 5561}
!183 = !{i64 5563}
!184 = !{i64 5566}
!185 = !{i64 5568}
!186 = !{i64 5584}
!187 = !{i64 5587}
!188 = !{i64 5590}
!189 = !{i64 5593}
!190 = !{i64 5608}
!191 = !{i64 5610}
!192 = !{i64 5613}
!193 = !{i64 5633}
!194 = !{i64 5639}
!195 = !{i64 5642}
!196 = !{i64 5647}
!197 = !{i64 5653}
!198 = !{i64 5664}
!199 = !{i64 5669}
!200 = !{i64 5675}
!201 = !{i64 5686}
!202 = !{i64 5702}
!203 = !{i64 5707}
!204 = !{i64 5713}
!205 = !{i64 5724}
!206 = !{i64 5740}
!207 = !{i64 5745}
!208 = !{i64 5751}
!209 = !{i64 5762}
!210 = !{i64 5778}
!211 = !{i64 5794}
!212 = !{i64 5799}
!213 = !{i64 5805}
!214 = !{i64 5816}
!215 = !{i64 5821}
!216 = !{i64 5827}
!217 = !{i64 5838}
!218 = !{i64 5843}
!219 = !{i64 5849}
!220 = !{i64 5860}
!221 = !{i64 5865}
!222 = !{i64 5871}
!223 = !{i64 5882}
!224 = !{i64 5887}
!225 = !{i64 5893}
!226 = !{i64 5904}
!227 = !{i64 5909}
!228 = !{i64 5915}
!229 = !{i64 5926}
!230 = !{i64 5931}
!231 = !{i64 5937}
!232 = !{i64 5948}
!233 = !{i64 5953}
!234 = !{i64 5959}
!235 = !{i64 5970}
!236 = !{i64 5975}
!237 = !{i64 5981}
!238 = !{i64 5992}
!239 = !{i64 5997}
!240 = !{i64 6003}
!241 = !{i64 6014}
!242 = !{i64 6019}
!243 = !{i64 6025}
!244 = !{i64 6036}
!245 = !{i64 6041}
!246 = !{i64 6047}
!247 = !{i64 6058}
!248 = !{i64 6074}
!249 = !{i64 6079}
!250 = !{i64 6085}
!251 = !{i64 6096}
!252 = !{i64 6101}
!253 = !{i64 6107}
!254 = !{i64 6118}
!255 = !{i64 6134}
!256 = !{i64 6139}
!257 = !{i64 6145}
!258 = !{i64 6156}
!259 = !{i64 6161}
!260 = !{i64 6167}
!261 = !{i64 6178}
!262 = !{i64 6194}
!263 = !{i64 6204}
!264 = !{i64 6208}
!265 = !{i64 6225}
!266 = !{i64 6236}
!267 = !{i64 6238}
!268 = !{i64 6245}
!269 = !{i64 6253}
!270 = !{i64 6262}
!271 = !{i64 6264}
!272 = !{i64 6267}
!273 = !{i64 6311}
!274 = !{i64 6322}
!275 = !{i64 6310}
!276 = !{i64 6336}
!277 = !{i64 6340}
!278 = !{i64 6342}
!279 = !{i64 6352}
!280 = !{i64 6354}
!281 = !{i64 6359}
!282 = !{i64 6362}
!283 = !{i64 6365}
!284 = !{i64 6368}
!285 = !{i64 6388}
!286 = !{i64 6393}
!287 = !{i64 6395}
!288 = !{i64 6397}
!289 = !{i64 6400}
!290 = !{i64 6450}
!291 = !{i64 6452}
!292 = !{i64 6455}
!293 = !{i64 6470}
!294 = !{i64 6567}
!295 = !{i64 6576}
!296 = !{i64 6584}
!297 = !{i64 6594}
!298 = !{i64 6597}
!299 = !{i64 6600}
!300 = !{i64 6603}
!301 = !{i64 6610}
!302 = !{i64 6612}
!303 = !{i64 6606}
!304 = !{i64 6625}
!305 = !{i64 6627}
!306 = !{i64 6631}
!307 = !{i64 6640}
!308 = !{i64 6647}
!309 = !{i64 6656}
!310 = !{i64 6658}
!311 = !{i64 6661}
!312 = !{i64 6664}
!313 = !{i64 6667}
!314 = !{i64 6674}
!315 = !{i64 6677}
!316 = !{i64 6694}
!317 = !{i64 6697}
!318 = !{i64 6732}
!319 = !{i64 6752}
!320 = !{i64 6764}
!321 = !{i64 6784}
!322 = !{i64 6787}
!323 = !{i64 6795}
!324 = !{i64 6797}
!325 = !{i64 6800}
!326 = !{i64 6811}
!327 = !{i64 6816}
!328 = !{i64 6819}
!329 = !{i64 6827}
!330 = !{i64 6829}
!331 = !{i64 6832}
!332 = !{i64 6842}
!333 = !{i64 6844}
!334 = !{i64 6847}
!335 = !{i64 6864}
!336 = !{i64 6870}
!337 = !{i64 6872}
!338 = !{i64 6874}
!339 = !{i64 6878}
!340 = !{i64 6881}
!341 = !{i64 6883}
!342 = !{i64 6885}
!343 = !{i64 6888}
!344 = !{i64 6890}
!345 = !{i64 6895}
!346 = !{i64 6912}
!347 = !{i64 6915}
!348 = !{i64 6918}
!349 = !{i64 6920}
!350 = !{i64 6923}
!351 = !{i64 6927}
!352 = !{i64 6928}
!353 = !{i64 6975}
!354 = !{i64 7010}
!355 = !{i64 7044}
!356 = !{i64 7046}
!357 = !{i64 7060}
!358 = !{i64 7063}
!359 = !{i64 7076}
!360 = !{i64 7078}
!361 = !{i64 7088}
!362 = !{i64 7113}
!363 = !{i64 7124}
!364 = !{i64 7134}
!365 = !{i64 7136}
!366 = !{i64 7139}
!367 = !{i64 7141}
!368 = !{i64 7156}
!369 = !{i64 7186}
!370 = !{i64 7192}
!371 = !{i64 7195}
!372 = !{i64 7200}
!373 = !{i64 7206}
!374 = !{i64 7217}
!375 = !{i64 7328}
!376 = !{i64 7334}
!377 = !{i64 7337}
!378 = !{i64 7342}
!379 = !{i64 7348}
!380 = !{i64 7359}
!381 = !{i64 7375}
!382 = !{i64 7391}
!383 = !{i64 7396}
!384 = !{i64 7402}
!385 = !{i64 7413}
!386 = !{i64 7429}
!387 = !{i64 7434}
!388 = !{i64 7440}
!389 = !{i64 7451}
!390 = !{i64 7500}
!391 = !{i64 7506}
!392 = !{i64 7509}
!393 = !{i64 7514}
!394 = !{i64 7520}
!395 = !{i64 7531}
!396 = !{i64 7630}
!397 = !{i64 7636}
!398 = !{i64 7639}
!399 = !{i64 7644}
!400 = !{i64 7650}
!401 = !{i64 7661}
!402 = !{i64 7666}
!403 = !{i64 7672}
!404 = !{i64 7683}
!405 = !{i64 7688}
!406 = !{i64 7694}
!407 = !{i64 7705}
!408 = !{i64 7710}
!409 = !{i64 7716}
!410 = !{i64 7727}
!411 = !{i64 7732}
!412 = !{i64 7738}
!413 = !{i64 7749}
!414 = !{i64 7765}
!415 = !{i64 7770}
!416 = !{i64 7776}
!417 = !{i64 7787}
!418 = !{i64 7798}
!419 = !{i64 7808}
!420 = !{i64 7827}
!421 = !{i64 7835}
!422 = !{i64 7845}
!423 = !{i64 7847}
!424 = !{i64 7853}
!425 = !{i64 7855}
!426 = !{i64 7857}
!427 = !{i64 7860}
!428 = !{i64 7862}
!429 = !{i64 7864}
!430 = !{i64 7873}
!431 = !{i64 7885}
!432 = !{i64 7901}
!433 = !{i64 7924}
!434 = !{i64 7927}
!435 = !{i64 7935}
!436 = !{i64 7938}
!437 = !{i64 7945}
!438 = !{i64 7948}
!439 = !{i64 7986}
!440 = !{i64 8020}
!441 = !{i64 8024}
!442 = !{i64 8036}
!443 = !{i64 8040}
!444 = !{i64 8052}
!445 = !{i64 8057}
!446 = !{i64 8068}
!447 = !{i64 8070}
!448 = !{i64 8076}
!449 = !{i64 8077}
!450 = !{i64 8079}
!451 = !{i64 8082}
!452 = !{i64 8100}
!453 = !{i64 8102}
!454 = !{i64 8108}
!455 = !{i64 8109}
!456 = !{i64 8113}
!457 = !{i64 8116}
!458 = !{i64 8132}
!459 = !{i64 8136}
!460 = !{i64 8148}
!461 = !{i64 8152}
!462 = !{i64 8164}
!463 = !{i64 8168}
!464 = !{i64 8186}
!465 = !{i64 8202}
!466 = !{i64 8270}
!467 = !{i64 8304}
!468 = !{i64 8323}
!469 = !{i64 8326}
!470 = !{i64 8329}
!471 = !{i64 8331}
!472 = !{i64 8334}
!473 = !{i64 8337}
!474 = !{i64 8340}
!475 = !{i64 8343}
!476 = !{i64 8345}
!477 = !{i64 8348}
!478 = !{i64 8351}
!479 = !{i64 8386}
!480 = !{i64 8418}
!481 = !{i64 8423}
!482 = !{i64 8426}
!483 = !{i64 8438}
!484 = !{i64 8441}
!485 = !{i64 8444}
!486 = !{i64 8446}
!487 = !{i64 8449}
!488 = !{i64 8452}
!489 = !{i64 8455}
!490 = !{i64 8469}
!491 = !{i64 8482}
!492 = !{i64 8487}
!493 = !{i64 8490}
!494 = !{i64 8493}
!495 = !{i64 8523}
!496 = !{i64 8532}
!497 = !{i64 8538}
!498 = !{i64 8544}
!499 = !{i64 8550}
!500 = !{i64 8564}
!501 = !{i64 8566}
!502 = !{i64 8580}
!503 = !{i64 8582}
!504 = !{i64 8596}
!505 = !{i64 8599}
!506 = !{i64 8603}
!507 = !{i64 8606}
!508 = !{i64 8608}
!509 = !{i64 8610}
!510 = !{i64 8611}
!511 = !{i64 8614}
!512 = !{i64 8617}
!513 = !{i64 8641}
!514 = !{i64 8647}
!515 = !{i64 8650}
!516 = !{i64 8662}
!517 = !{i64 8671}
!518 = !{i64 8677}
!519 = !{i64 8680}
!520 = !{i64 8692}
!521 = !{i64 8704}
!522 = !{i64 8709}
!523 = !{i64 8715}
!524 = !{i64 8726}
!525 = !{i64 8742}
!526 = !{i64 8747}
!527 = !{i64 8753}
!528 = !{i64 8764}
!529 = !{i64 8769}
!530 = !{i64 8775}
!531 = !{i64 8786}
!532 = !{i64 8791}
!533 = !{i64 8797}
!534 = !{i64 8808}
!535 = !{i64 8813}
!536 = !{i64 8819}
!537 = !{i64 8830}
!538 = !{i64 8843}
!539 = !{i64 8852}
!540 = !{i64 8858}
!541 = !{i64 8861}
!542 = !{i64 8866}
!543 = !{i64 8872}
!544 = !{i64 8883}
!545 = !{i64 8888}
!546 = !{i64 8894}
!547 = !{i64 8905}
!548 = !{i64 8910}
!549 = !{i64 8916}
!550 = !{i64 8927}
!551 = !{i64 8937}
!552 = !{i64 8960}
!553 = !{i64 8965}
!554 = !{i64 8970}
!555 = !{i64 8981}
!556 = !{i64 8992}
!557 = !{i64 8996}
!558 = !{i64 9007}
!559 = !{i64 9013}
!560 = !{i64 9016}
!561 = !{i64 9042}
!562 = !{i64 9048}
!563 = !{i64 9051}
!564 = !{i64 9057}
!565 = !{i64 9076}
!566 = !{i64 9087}
!567 = !{i64 9096}
