source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_1c1d = local_unnamed_addr constant i32 12
@global_var_1c3a = local_unnamed_addr constant i32 1000
@global_var_5ed4 = global i32 7984
@global_var_3e8 = global i32* @global_var_5ed4
@global_var_3e9 = global i32 134217822
@global_var_4008 = local_unnamed_addr constant i32 1740
@global_var_3fcb = local_unnamed_addr constant i32 -2018304
@global_var_3f77 = local_unnamed_addr constant i32 239403651
@global_var_3eeb = local_unnamed_addr constant i32 0
@global_var_3e66 = constant i32 86769664
@global_var_3d27 = local_unnamed_addr constant i32 -2209792
@global_var_3cf7 = constant i32 9216
@global_var_3ca7 = local_unnamed_addr constant i32 4096
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
  %ecx.1.reg2mem = alloca i32, !insn.addr !96
  %esi.0.reg2mem = alloca i32, !insn.addr !96
  %ecx.0.reg2mem = alloca i32, !insn.addr !96
  %0 = icmp eq i32 %arg1, 0, !insn.addr !97
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !98
  store i32 %arg1, i32* %esi.0.reg2mem, !insn.addr !98
  store i32 1, i32* %ecx.1.reg2mem, !insn.addr !98
  br i1 %0, label %dec_label_pc_13f2, label %dec_label_pc_13d0, !insn.addr !98

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
  store i32 %9, i32* %ecx.1.reg2mem, !insn.addr !105
  br i1 %11, label %dec_label_pc_13f2, label %dec_label_pc_13d0, !insn.addr !105

dec_label_pc_13f2:                                ; preds = %dec_label_pc_13d0, %dec_label_pc_13b0
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  ret i32 %ecx.1.reload, !insn.addr !106

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
  %0 = icmp sgt i32 %arg2, 0
  %1 = select i1 %0, i32 %arg2, i32 0, !insn.addr !117
  %2 = mul i32 %1, %arg1, !insn.addr !118
  %3 = icmp slt i32 %arg1, 1
  %4 = select i1 %3, i32 0, i32 %2, !insn.addr !119
  ret i32 %4, !insn.addr !120

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @loop_break(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1450:
  %0 = add i32 %arg2, -10, !insn.addr !121
  %1 = icmp ugt i32 %0, 40
  %spec.select = sext i1 %1 to i32
  ret i32 %spec.select, !insn.addr !122
}

define i32 @function_147f() local_unnamed_addr {
dec_label_pc_147f:
  ret i32 2, !insn.addr !123
}

define i32 @function_1485() local_unnamed_addr {
dec_label_pc_1485:
  ret i32 3, !insn.addr !124
}

define i32 @function_148b() local_unnamed_addr {
dec_label_pc_148b:
  ret i32 4, !insn.addr !125
}

define i32 @loop_continue(i32 %arg1) local_unnamed_addr {
dec_label_pc_14a0:
  %eax.3.reg2mem = alloca i32, !insn.addr !126
  %edx.2.reg2mem = alloca i32, !insn.addr !126
  %ecx.0.reg2mem = alloca i32, !insn.addr !126
  %eax.2.reg2mem = alloca i32, !insn.addr !126
  %edx.1.reg2mem = alloca i32, !insn.addr !126
  %eax.1.reg2mem = alloca i32, !insn.addr !126
  %edx.0.reg2mem = alloca i32, !insn.addr !126
  %eax.0.reg2mem = alloca i32, !insn.addr !126
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.3.reg2mem, !insn.addr !127
  br i1 %0, label %dec_label_pc_1503, label %dec_label_pc_14aa, !insn.addr !127

dec_label_pc_14aa:                                ; preds = %dec_label_pc_14a0
  %1 = add i32 %arg1, -1, !insn.addr !128
  %2 = icmp ult i32 %1, 3, !insn.addr !129
  %3 = icmp eq i1 %2, false, !insn.addr !130
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !130
  store i32 1, i32* %edx.1.reg2mem, !insn.addr !130
  br i1 %3, label %dec_label_pc_14c4, label %dec_label_pc_14e5, !insn.addr !130

dec_label_pc_14c4:                                ; preds = %dec_label_pc_14aa
  %4 = and i32 %arg1, -4, !insn.addr !131
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !132
  store i32 1, i32* %edx.0.reg2mem, !insn.addr !132
  br label %dec_label_pc_14d0, !insn.addr !132

dec_label_pc_14d0:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14c4
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %factor = mul i32 %edx.0.reload, 2
  %5 = add i32 %eax.0.reload, 2, !insn.addr !133
  %6 = add i32 %5, %factor, !insn.addr !134
  %7 = sub i32 %edx.0.reload, %4, !insn.addr !135
  %8 = add i32 %edx.0.reload, 4, !insn.addr !136
  %9 = icmp eq i32 %7, -3, !insn.addr !137
  %10 = icmp eq i1 %9, false, !insn.addr !138
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !138
  store i32 %8, i32* %edx.0.reg2mem, !insn.addr !138
  store i32 %6, i32* %eax.1.reg2mem, !insn.addr !138
  store i32 %8, i32* %edx.1.reg2mem, !insn.addr !138
  br i1 %10, label %dec_label_pc_14d0, label %dec_label_pc_14e5, !insn.addr !138

dec_label_pc_14e5:                                ; preds = %dec_label_pc_14d0, %dec_label_pc_14aa
  %11 = urem i32 %arg1, 4, !insn.addr !139
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %12 = icmp eq i32 %11, 0, !insn.addr !140
  store i32 %eax.1.reload, i32* %eax.2.reg2mem, !insn.addr !141
  store i32 %11, i32* %ecx.0.reg2mem, !insn.addr !141
  store i32 %edx.1.reload, i32* %edx.2.reg2mem, !insn.addr !141
  store i32 %eax.1.reload, i32* %eax.3.reg2mem, !insn.addr !141
  br i1 %12, label %dec_label_pc_1503, label %dec_label_pc_14f0, !insn.addr !141

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14e5, %dec_label_pc_14f0
  %edx.2.reload = load i32, i32* %edx.2.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %13 = urem i32 %edx.2.reload, 2, !insn.addr !142
  %14 = sub nsw i32 0, %13, !insn.addr !143
  %15 = and i32 %edx.2.reload, %14, !insn.addr !144
  %16 = add i32 %15, %eax.2.reload, !insn.addr !145
  %17 = add i32 %edx.2.reload, 1, !insn.addr !146
  %18 = add i32 %ecx.0.reload, -1, !insn.addr !147
  %19 = icmp eq i32 %18, 0, !insn.addr !147
  %20 = icmp eq i1 %19, false, !insn.addr !148
  store i32 %16, i32* %eax.2.reg2mem, !insn.addr !148
  store i32 %18, i32* %ecx.0.reg2mem, !insn.addr !148
  store i32 %17, i32* %edx.2.reg2mem, !insn.addr !148
  store i32 %16, i32* %eax.3.reg2mem, !insn.addr !148
  br i1 %20, label %dec_label_pc_14f0, label %dec_label_pc_1503, !insn.addr !148

dec_label_pc_1503:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14a0, %dec_label_pc_14e5
  %eax.3.reload = load i32, i32* %eax.3.reg2mem
  ret i32 %eax.3.reload, !insn.addr !149

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
  %0 = icmp eq i32 %arg1, 0, !insn.addr !150
  %1 = icmp slt i32 %arg1, 0, !insn.addr !150
  %2 = icmp eq i1 %1, false, !insn.addr !151
  %3 = icmp eq i1 %0, false, !insn.addr !151
  %4 = icmp eq i1 %2, %3, !insn.addr !151
  %5 = select i1 %4, i32 %arg1, i32 1, !insn.addr !152
  %6 = mul i32 %arg1, 2, !insn.addr !152
  %7 = mul i32 %6, %5, !insn.addr !153
  ret i32 %7, !insn.addr !154
}

define i32 @goto_backward(i32 %arg1) local_unnamed_addr {
dec_label_pc_1530:
  %eax.2.reg2mem = alloca i32, !insn.addr !155
  %edx.1.reg2mem = alloca i32, !insn.addr !155
  %ecx.0.reg2mem = alloca i32, !insn.addr !155
  %eax.1.reg2mem = alloca i32, !insn.addr !155
  %edx.1.ph.reg2mem = alloca i32, !insn.addr !155
  %eax.1.ph.reg2mem = alloca i32, !insn.addr !155
  %edx.0.reg2mem = alloca i32, !insn.addr !155
  %eax.0.reg2mem = alloca i32, !insn.addr !155
  %0 = icmp slt i32 %arg1, 1
  store i32 1, i32* %eax.2.reg2mem, !insn.addr !156
  br i1 %0, label %dec_label_pc_15cb, label %dec_label_pc_153b, !insn.addr !156

dec_label_pc_153b:                                ; preds = %dec_label_pc_1530
  %1 = add i32 %arg1, -1, !insn.addr !157
  %2 = urem i32 %arg1, 8, !insn.addr !158
  %3 = icmp ult i32 %1, 7, !insn.addr !159
  %4 = icmp eq i1 %3, false, !insn.addr !160
  br i1 %4, label %dec_label_pc_155f, label %dec_label_pc_1548, !insn.addr !160

dec_label_pc_1548:                                ; preds = %dec_label_pc_153b
  %5 = icmp eq i32 %2, 0, !insn.addr !161
  %6 = icmp eq i1 %5, false, !insn.addr !162
  store i32 1, i32* %eax.1.ph.reg2mem, !insn.addr !162
  store i32 1, i32* %edx.1.ph.reg2mem, !insn.addr !162
  store i32 1, i32* %eax.2.reg2mem, !insn.addr !162
  br i1 %6, label %dec_label_pc_15c0.preheader, label %dec_label_pc_15cb, !insn.addr !162

dec_label_pc_155f:                                ; preds = %dec_label_pc_153b
  %7 = and i32 %arg1, -8, !insn.addr !163
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !164
  store i32 8, i32* %edx.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_1570, !insn.addr !164

dec_label_pc_1570:                                ; preds = %dec_label_pc_1570, %dec_label_pc_155f
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %8 = add i32 %edx.0.reload, -7, !insn.addr !165
  %9 = add i32 %edx.0.reload, -6, !insn.addr !166
  %10 = add i32 %edx.0.reload, -5, !insn.addr !167
  %11 = add i32 %edx.0.reload, -4, !insn.addr !168
  %12 = add i32 %edx.0.reload, -3, !insn.addr !169
  %13 = add i32 %edx.0.reload, -2, !insn.addr !170
  %14 = add i32 %edx.0.reload, -1, !insn.addr !171
  %15 = mul i32 %edx.0.reload, %eax.0.reload, !insn.addr !172
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
  store i32 %22, i32* %eax.0.reg2mem, !insn.addr !182
  store i32 %23, i32* %edx.0.reg2mem, !insn.addr !182
  br i1 %25, label %dec_label_pc_1570, label %dec_label_pc_15ab, !insn.addr !182

dec_label_pc_15ab:                                ; preds = %dec_label_pc_1570
  %26 = or i32 %edx.0.reload, 1, !insn.addr !183
  %27 = icmp eq i32 %2, 0, !insn.addr !184
  store i32 %22, i32* %eax.1.ph.reg2mem, !insn.addr !185
  store i32 %26, i32* %edx.1.ph.reg2mem, !insn.addr !185
  store i32 %22, i32* %eax.2.reg2mem, !insn.addr !185
  br i1 %27, label %dec_label_pc_15cb, label %dec_label_pc_15c0.preheader, !insn.addr !185

dec_label_pc_15c0.preheader:                      ; preds = %dec_label_pc_1548, %dec_label_pc_15ab
  %edx.1.ph.reload = load i32, i32* %edx.1.ph.reg2mem
  %eax.1.ph.reload = load i32, i32* %eax.1.ph.reg2mem
  store i32 %eax.1.ph.reload, i32* %eax.1.reg2mem
  store i32 %2, i32* %ecx.0.reg2mem
  store i32 %edx.1.ph.reload, i32* %edx.1.reg2mem
  br label %dec_label_pc_15c0

dec_label_pc_15c0:                                ; preds = %dec_label_pc_15c0.preheader, %dec_label_pc_15c0
  %edx.1.reload = load i32, i32* %edx.1.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %28 = mul i32 %edx.1.reload, %eax.1.reload, !insn.addr !186
  %29 = add i32 %edx.1.reload, 1, !insn.addr !187
  %30 = add i32 %ecx.0.reload, -1, !insn.addr !188
  %31 = icmp eq i32 %30, 0, !insn.addr !188
  %32 = icmp eq i1 %31, false, !insn.addr !189
  store i32 %28, i32* %eax.1.reg2mem, !insn.addr !189
  store i32 %30, i32* %ecx.0.reg2mem, !insn.addr !189
  store i32 %29, i32* %edx.1.reg2mem, !insn.addr !189
  store i32 %28, i32* %eax.2.reg2mem, !insn.addr !189
  br i1 %32, label %dec_label_pc_15c0, label %dec_label_pc_15cb, !insn.addr !189

dec_label_pc_15cb:                                ; preds = %dec_label_pc_15c0, %dec_label_pc_1530, %dec_label_pc_1548, %dec_label_pc_15ab
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  ret i32 %eax.2.reload, !insn.addr !190

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 10, 8, 1, 9, 0, 4, 3, 2, 5, 6, 7 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %eax.2.reg2mem, { 0, 1, 4, 3, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_15cb, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_15c0, { 1, 0 }
  uselistorder label %dec_label_pc_15c0.preheader, { 1, 0 }
}

define i32 @ternary_op(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_15d0:
  %0 = sub i32 %arg1, %arg2, !insn.addr !191
  %1 = xor i32 %arg2, %arg1, !insn.addr !191
  %2 = xor i32 %0, %arg1, !insn.addr !191
  %3 = and i32 %2, %1, !insn.addr !191
  %4 = icmp slt i32 %3, 0, !insn.addr !191
  %5 = icmp eq i32 %0, 0, !insn.addr !191
  %6 = icmp slt i32 %0, 0, !insn.addr !191
  %7 = icmp eq i1 %6, %4, !insn.addr !192
  %8 = icmp eq i1 %5, false, !insn.addr !192
  %9 = icmp eq i1 %7, %8, !insn.addr !192
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !192
  ret i32 %10, !insn.addr !193

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 3, 0, 1, 2 }
}

define i32 @test_control_flow_l1(i32 %arg1) local_unnamed_addr {
dec_label_pc_15e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 8359, !insn.addr !194
  %3 = inttoptr i32 %2 to i8*, !insn.addr !195
  %4 = call i32 @puts(i8* %3), !insn.addr !196
  %5 = add i32 %1, 6994, !insn.addr !197
  %6 = inttoptr i32 %5 to i8*, !insn.addr !198
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !199
  %8 = add i32 %1, 7025, !insn.addr !200
  %9 = inttoptr i32 %8 to i8*, !insn.addr !201
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !202
  %11 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !203
  %12 = add i32 %1, 7051, !insn.addr !204
  %13 = inttoptr i32 %12 to i8*, !insn.addr !205
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !206
  %15 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !207
  %16 = add i32 %1, 7075, !insn.addr !208
  %17 = inttoptr i32 %16 to i8*, !insn.addr !209
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !210
  %19 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !211
  %20 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !212
  %21 = add i32 %1, 7103, !insn.addr !213
  %22 = inttoptr i32 %21 to i8*, !insn.addr !214
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !215
  %24 = add i32 %1, 7134, !insn.addr !216
  %25 = inttoptr i32 %24 to i8*, !insn.addr !217
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !218
  %27 = add i32 %1, 7166, !insn.addr !219
  %28 = inttoptr i32 %27 to i8*, !insn.addr !220
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !221
  %30 = add i32 %1, 7197, !insn.addr !222
  %31 = inttoptr i32 %30 to i8*, !insn.addr !223
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !224
  %33 = add i32 %1, 7226, !insn.addr !225
  %34 = inttoptr i32 %33 to i8*, !insn.addr !226
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !227
  %36 = add i32 %1, 7255, !insn.addr !228
  %37 = inttoptr i32 %36 to i8*, !insn.addr !229
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !230
  %39 = add i32 %1, 7286, !insn.addr !231
  %40 = inttoptr i32 %39 to i8*, !insn.addr !232
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !233
  %42 = add i32 %1, 7321, !insn.addr !234
  %43 = inttoptr i32 %42 to i8*, !insn.addr !235
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !236
  %45 = add i32 %1, 7352, !insn.addr !237
  %46 = inttoptr i32 %45 to i8*, !insn.addr !238
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !239
  %48 = add i32 %1, 7379, !insn.addr !240
  %49 = inttoptr i32 %48 to i8*, !insn.addr !241
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !242
  %51 = add i32 %1, 7408, !insn.addr !243
  %52 = inttoptr i32 %51 to i8*, !insn.addr !244
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !245
  %54 = add i32 %1, 7436, !insn.addr !246
  %55 = inttoptr i32 %54 to i8*, !insn.addr !247
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !248
  %57 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !249
  %58 = add i32 %1, 7463, !insn.addr !250
  %59 = inttoptr i32 %58 to i8*, !insn.addr !251
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !252
  %61 = add i32 %1, 7493, !insn.addr !253
  %62 = inttoptr i32 %61 to i8*, !insn.addr !254
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !255
  %64 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !256
  %65 = add i32 %1, 7522, !insn.addr !257
  %66 = inttoptr i32 %65 to i8*, !insn.addr !258
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !259
  %68 = add i32 %1, 7552, !insn.addr !260
  %69 = inttoptr i32 %68 to i8*, !insn.addr !261
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !262
  %71 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !263
  ret i32 %71, !insn.addr !264
}

define i32 @loop_multi_exit(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1830:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !265
  %1 = load i32, i32* %0
  %2 = add i32 %arg2, -1, !insn.addr !266
  %3 = icmp ult i32 %2, 12
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !267
  br i1 %3, label %dec_label_pc_184e, label %dec_label_pc_185c, !insn.addr !267

dec_label_pc_184e:                                ; preds = %dec_label_pc_1830
  %4 = mul i32 %arg2, 4, !insn.addr !268
  %5 = add i32 %1, %4
  %6 = add i32 %5, 6354, !insn.addr !268
  %7 = inttoptr i32 %6 to i32*, !insn.addr !268
  %8 = load i32, i32* %7, align 4, !insn.addr !268
  %9 = add i32 %5, 6306, !insn.addr !269
  %10 = inttoptr i32 %9 to i32*, !insn.addr !269
  %11 = load i32, i32* %10, align 4, !insn.addr !269
  %12 = add i32 %11, %8, !insn.addr !269
  store i32 %12, i32* %eax.0.reg2mem, !insn.addr !269
  br label %dec_label_pc_185c, !insn.addr !269

dec_label_pc_185c:                                ; preds = %dec_label_pc_1830, %dec_label_pc_184e
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !270

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 12, { 1, 0, 2 }
  uselistorder label %dec_label_pc_185c, { 1, 0 }
}

define i32 @infinite_loop(i32 %arg1) local_unnamed_addr {
dec_label_pc_1860:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !271
  %1 = load i32, i32* %0, align 4, !insn.addr !271
  %2 = icmp eq i32 %1, 1, !insn.addr !272
  br i1 %2, label %dec_label_pc_18a7, label %dec_label_pc_1877.preheader, !insn.addr !273

dec_label_pc_1877.preheader:                      ; preds = %dec_label_pc_1860
  store i32 1, i32* %0, align 4, !insn.addr !274
  ret i32 ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !275

dec_label_pc_18a7:                                ; preds = %dec_label_pc_1860
  ret i32 0, !insn.addr !276
}

define i32 @multi_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_18b0:
  %eax.0.reg2mem = alloca i32, !insn.addr !277
  %0 = icmp slt i32 %arg1, 0, !insn.addr !278
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !279
  br i1 %0, label %dec_label_pc_18d0, label %dec_label_pc_18b8, !insn.addr !279

dec_label_pc_18b8:                                ; preds = %dec_label_pc_18b0
  %1 = icmp ult i32 %arg1, 51
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !280
  br i1 %1, label %dec_label_pc_18c2, label %dec_label_pc_18d0, !insn.addr !280

dec_label_pc_18c2:                                ; preds = %dec_label_pc_18b8
  %2 = mul i32 %arg1, 2, !insn.addr !281
  %3 = add i32 %arg1, 1, !insn.addr !282
  %4 = urem i32 %arg1, 2
  %5 = icmp eq i32 %4, 0, !insn.addr !283
  %6 = select i1 %5, i32 %2, i32 %3, !insn.addr !284
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !284
  br label %dec_label_pc_18d0, !insn.addr !284

dec_label_pc_18d0:                                ; preds = %dec_label_pc_18b0, %dec_label_pc_18b8, %dec_label_pc_18c2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !285

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg1, { 1, 3, 0, 2, 4 }
  uselistorder label %dec_label_pc_18d0, { 2, 1, 0 }
}

define i32 @conditional_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_18e0:
  %0 = mul i32 %arg1, 2, !insn.addr !286
  %1 = sub i32 0, %arg1, !insn.addr !287
  %2 = icmp eq i32 %arg1, 0, !insn.addr !288
  %3 = icmp slt i32 %arg1, 0, !insn.addr !288
  %4 = icmp eq i1 %3, false, !insn.addr !289
  %5 = icmp eq i1 %2, false, !insn.addr !289
  %6 = icmp eq i1 %4, %5, !insn.addr !289
  %7 = select i1 %6, i32 %0, i32 %1, !insn.addr !289
  ret i32 %7, !insn.addr !290

; uselistorder directives
  uselistorder i32 %arg1, { 2, 3, 1, 0 }
}

define i32 @duffs_device(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1900:
  %0 = icmp slt i32 %arg4, 1
  br i1 %0, label %dec_label_pc_1994, label %dec_label_pc_1924, !insn.addr !291

dec_label_pc_1924:                                ; preds = %dec_label_pc_1900
  %1 = add i32 %arg4, 7, !insn.addr !292
  %2 = udiv i32 %1, 8, !insn.addr !293
  ret i32 %2, !insn.addr !294

dec_label_pc_1994:                                ; preds = %dec_label_pc_1900
  ret i32 -1, !insn.addr !295

; uselistorder directives
  uselistorder i32 8, { 1, 3, 0, 2 }
}

define i32 @loop_complex_cond(i32 %arg1) local_unnamed_addr {
dec_label_pc_19a0:
  %edx.0.reg2mem = alloca i32, !insn.addr !296
  %ecx.1.reg2mem = alloca i32, !insn.addr !296
  %eax.1.reg2mem = alloca i32, !insn.addr !296
  %esi.0.reg2mem = alloca i32, !insn.addr !296
  %ecx.0.reg2mem = alloca i32, !insn.addr !296
  %eax.0.reg2mem = alloca i32, !insn.addr !296
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !297
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !297
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !297
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !297
  store i32 %arg1, i32* %ecx.1.reg2mem, !insn.addr !297
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !297
  br i1 %0, label %dec_label_pc_19d1, label %dec_label_pc_19b0, !insn.addr !297

dec_label_pc_19b0:                                ; preds = %dec_label_pc_19a0, %dec_label_pc_19b0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add nuw nsw i32 %eax.0.reload, 2, !insn.addr !298
  %2 = add nsw i32 %ecx.0.reload, -1, !insn.addr !299
  %3 = add nuw nsw i32 %esi.0.reload, 1, !insn.addr !300
  %4 = icmp ugt i32 %ecx.0.reload, 1, !insn.addr !301
  %5 = icmp slt i32 %1, %2, !insn.addr !302
  %or.cond = icmp eq i1 %4, %5
  %6 = icmp ult i32 %esi.0.reload, 9, !insn.addr !303
  %or.cond1 = icmp eq i1 %6, %or.cond
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !304
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !304
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !304
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !304
  store i32 %2, i32* %ecx.1.reg2mem, !insn.addr !304
  store i32 %3, i32* %edx.0.reg2mem, !insn.addr !304
  br i1 %or.cond1, label %dec_label_pc_19b0, label %dec_label_pc_19d1, !insn.addr !304

dec_label_pc_19d1:                                ; preds = %dec_label_pc_19b0, %dec_label_pc_19a0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %7 = add i32 %ecx.1.reload, %eax.1.reload, !insn.addr !305
  %8 = add i32 %7, %edx.0.reload, !insn.addr !306
  ret i32 %8, !insn.addr !307

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19b0, { 1, 0 }
}

define i32 @loop_modify_var(i32 %arg1) local_unnamed_addr {
dec_label_pc_19e0:
  %merge.reg2mem = alloca i32, !insn.addr !308
  %edx.0.reg2mem = alloca i32, !insn.addr !308
  %eax.0.reg2mem = alloca i32, !insn.addr !308
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !309
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !309
  store i32 0, i32* %merge.reg2mem, !insn.addr !309
  br i1 %0, label %dec_label_pc_1a04, label %dec_label_pc_19f0, !insn.addr !309

dec_label_pc_19f0:                                ; preds = %dec_label_pc_19e0, %dec_label_pc_19f0
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !310
  %2 = add i32 %edx.0.reload, 2, !insn.addr !311
  %3 = add i32 %edx.0.reload, -6, !insn.addr !312
  %4 = sub i32 5, %edx.0.reload
  %5 = and i32 %4, %edx.0.reload, !insn.addr !312
  %6 = icmp slt i32 %5, 0, !insn.addr !312
  %7 = icmp slt i32 %3, 0, !insn.addr !312
  %8 = icmp eq i1 %7, %6, !insn.addr !313
  %9 = select i1 %8, i32 %2, i32 %edx.0.reload, !insn.addr !313
  %10 = add i32 %9, 1, !insn.addr !314
  %11 = icmp slt i32 %10, %arg1, !insn.addr !315
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !315
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !315
  store i32 %1, i32* %merge.reg2mem, !insn.addr !315
  br i1 %11, label %dec_label_pc_19f0, label %dec_label_pc_1a04, !insn.addr !315

dec_label_pc_1a04:                                ; preds = %dec_label_pc_19f0, %dec_label_pc_19e0
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !316

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 3, 5, 0, 1, 2, 4 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_19f0, { 1, 0 }
}

define i32 @loop_external_state(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a10:
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !317
  %1 = load i32, i32* %0, align 4, !insn.addr !317
  %2 = icmp eq i32 %1, 0
  %3 = icmp eq i1 %2, false, !insn.addr !318
  %spec.select = select i1 %3, i32 0, i32 101
  ret i32 %spec.select, !insn.addr !319
}

define i32 @recursion_factorial(i32 %arg1) local_unnamed_addr {
dec_label_pc_1a50:
  %eax.1.reg2mem = alloca i32, !insn.addr !320
  %ecx.0.reg2mem = alloca i32, !insn.addr !320
  %eax.0.reg2mem = alloca i32, !insn.addr !320
  %0 = icmp slt i32 %arg1, 2, !insn.addr !321
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !321
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !321
  store i32 1, i32* %eax.1.reg2mem, !insn.addr !321
  br i1 %0, label %dec_label_pc_1a7d, label %dec_label_pc_1a70, !insn.addr !321

dec_label_pc_1a70:                                ; preds = %dec_label_pc_1a50, %dec_label_pc_1a70
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !322
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !323
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !324
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !324
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !324
  br i1 %3, label %dec_label_pc_1a7d, label %dec_label_pc_1a70, !insn.addr !324

dec_label_pc_1a7d:                                ; preds = %dec_label_pc_1a70, %dec_label_pc_1a50
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !325

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a70, { 1, 0 }
}

define i32 @tail_recursion(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1a80:
  %eax.1.reg2mem = alloca i32, !insn.addr !326
  %ecx.0.reg2mem = alloca i32, !insn.addr !326
  %eax.0.reg2mem = alloca i32, !insn.addr !326
  %0 = icmp slt i32 %arg1, 2, !insn.addr !327
  store i32 %arg2, i32* %eax.0.reg2mem, !insn.addr !327
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !327
  store i32 %arg2, i32* %eax.1.reg2mem, !insn.addr !327
  br i1 %0, label %dec_label_pc_1a9d, label %dec_label_pc_1a90, !insn.addr !327

dec_label_pc_1a90:                                ; preds = %dec_label_pc_1a80, %dec_label_pc_1a90
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !328
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !329
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !330
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !330
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !330
  br i1 %3, label %dec_label_pc_1a9d, label %dec_label_pc_1a90, !insn.addr !330

dec_label_pc_1a9d:                                ; preds = %dec_label_pc_1a90, %dec_label_pc_1a80
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !331

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a90, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1aa0:
  %merge.reg2mem = alloca i32, !insn.addr !332
  %ecx.0.reg2mem = alloca i32, !insn.addr !332
  %eax.0.reg2mem = alloca i32, !insn.addr !332
  %storemerge.reg2mem = alloca i32, !insn.addr !332
  %0 = icmp slt i32 %arg2, 1
  store i32 %arg1, i32* %merge.reg2mem, !insn.addr !333
  br i1 %0, label %dec_label_pc_1afd, label %dec_label_pc_1aac, !insn.addr !333

dec_label_pc_1aac:                                ; preds = %dec_label_pc_1aa0
  %1 = add i32 %arg2, 2, !insn.addr !334
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !335
  store i32 %1, i32* %ecx.0.reg2mem, !insn.addr !335
  br label %dec_label_pc_1ac8, !insn.addr !335

dec_label_pc_1ac0:                                ; preds = %dec_label_pc_1af8, %dec_label_pc_1ada
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %2 = add i32 %ecx.0.reload, -2, !insn.addr !336
  %3 = icmp slt i32 %2, 3, !insn.addr !337
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !337
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !337
  store i32 %storemerge.reload, i32* %merge.reg2mem, !insn.addr !337
  br i1 %3, label %dec_label_pc_1afd, label %dec_label_pc_1ac8, !insn.addr !337

dec_label_pc_1ac8:                                ; preds = %dec_label_pc_1ac0, %dec_label_pc_1aac
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = urem i32 %eax.0.reload, 2
  %5 = icmp eq i32 %4, 0, !insn.addr !338
  %6 = icmp eq i1 %5, false, !insn.addr !339
  br i1 %6, label %dec_label_pc_1af0, label %dec_label_pc_1acc, !insn.addr !339

dec_label_pc_1acc:                                ; preds = %dec_label_pc_1ac8
  %7 = icmp slt i32 %eax.0.reload, 0
  %8 = zext i1 %7 to i32, !insn.addr !340
  %9 = add i32 %eax.0.reload, %8, !insn.addr !341
  %10 = ashr i32 %9, 1, !insn.addr !342
  %11 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !343
  store i32 %10, i32* %merge.reg2mem, !insn.addr !344
  br i1 %11, label %dec_label_pc_1afd, label %dec_label_pc_1ada, !insn.addr !344

dec_label_pc_1ada:                                ; preds = %dec_label_pc_1acc
  %12 = add nsw i32 %10, 1, !insn.addr !345
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !346
  br label %dec_label_pc_1ac0, !insn.addr !346

dec_label_pc_1af0:                                ; preds = %dec_label_pc_1ac8
  %13 = mul i32 %eax.0.reload, 3, !insn.addr !347
  %14 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !348
  br i1 %14, label %dec_label_pc_1b00, label %dec_label_pc_1af8, !insn.addr !349

dec_label_pc_1af8:                                ; preds = %dec_label_pc_1af0
  %15 = add i32 %13, 2, !insn.addr !350
  store i32 %15, i32* %storemerge.reg2mem, !insn.addr !351
  br label %dec_label_pc_1ac0, !insn.addr !351

dec_label_pc_1afd:                                ; preds = %dec_label_pc_1ac0, %dec_label_pc_1acc, %dec_label_pc_1aa0, %dec_label_pc_1b00
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !352

dec_label_pc_1b00:                                ; preds = %dec_label_pc_1af0
  %16 = add i32 %13, 1, !insn.addr !353
  store i32 %16, i32* %merge.reg2mem, !insn.addr !353
  br label %dec_label_pc_1afd, !insn.addr !353

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 0, 3, 2, 1 }
  uselistorder i32 %ecx.0.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 2, 1, 0 }
  uselistorder i32* %merge.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1afd, { 3, 1, 0, 2 }
}

define i32 @call_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !354
}

define i32 @call_func_ptr_array(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1b30:
  %0 = icmp ult i32 %arg2, 3
  %spec.store.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.store.select, !insn.addr !355
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b70:
  %0 = mul i32 %arg1, 2, !insn.addr !356
  ret i32 %0, !insn.addr !357
}

define i32 @triple_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b80:
  %0 = mul i32 %arg1, 3, !insn.addr !358
  ret i32 %0, !insn.addr !359
}

define i32 @call_virtual_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1b90:
  %0 = mul i32 %arg1, 2, !insn.addr !360
  ret i32 %0, !insn.addr !361
}

define i32 @process_with_callback(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ba0:
  %esi.1.reg2mem = alloca i32, !insn.addr !362
  %esi.0.reg2mem = alloca i32, !insn.addr !362
  %ebp.0.reg2mem = alloca i32, !insn.addr !362
  %0 = icmp slt i32 %arg3, 1
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !363
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !363
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !363
  br i1 %0, label %dec_label_pc_1bdb, label %dec_label_pc_1bc0, !insn.addr !363

dec_label_pc_1bc0:                                ; preds = %dec_label_pc_1ba0, %dec_label_pc_1bc0
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %1 = mul i32 %ebp.0.reload, 4, !insn.addr !364
  %2 = add i32 %1, %arg2, !insn.addr !364
  %3 = inttoptr i32 %2 to i32*, !insn.addr !364
  %4 = load i32, i32* %3, align 4, !insn.addr !364
  %5 = add i32 %4, %esi.0.reload, !insn.addr !365
  %6 = add i32 %ebp.0.reload, 1, !insn.addr !366
  %7 = icmp eq i32 %6, %arg3, !insn.addr !367
  %8 = icmp eq i1 %7, false, !insn.addr !368
  store i32 %6, i32* %ebp.0.reg2mem, !insn.addr !368
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !368
  store i32 %5, i32* %esi.1.reg2mem, !insn.addr !368
  br i1 %8, label %dec_label_pc_1bc0, label %dec_label_pc_1bdb, !insn.addr !368

dec_label_pc_1bdb:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1ba0
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  ret i32 %esi.1.reload, !insn.addr !369

; uselistorder directives
  uselistorder i32* %ebp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 4, { 0, 1, 4, 6, 3, 2, 5, 7 }
  uselistorder label %dec_label_pc_1bc0, { 1, 0 }
}

define i32 @test_control_flow_l2(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bf0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 6842, !insn.addr !370
  %3 = inttoptr i32 %2 to i8*, !insn.addr !371
  %4 = call i32 @puts(i8* %3), !insn.addr !372
  %5 = add i32 %1, 6026, !insn.addr !373
  %6 = inttoptr i32 %5 to i8*, !insn.addr !374
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !375
  %8 = add i32 %1, 6058, !insn.addr !376
  %9 = inttoptr i32 %8 to i8*, !insn.addr !377
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !378
  %11 = add i32 %1, 6088, !insn.addr !379
  %12 = inttoptr i32 %11 to i8*, !insn.addr !380
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !381
  %14 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !382
  %15 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !383
  %16 = add i32 %1, 6117, !insn.addr !384
  %17 = inttoptr i32 %16 to i8*, !insn.addr !385
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !386
  %19 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !387
  %20 = add i32 %1, 6152, !insn.addr !388
  %21 = inttoptr i32 %20 to i8*, !insn.addr !389
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !390
  %23 = add i32 %1, 6181, !insn.addr !391
  %24 = inttoptr i32 %23 to i8*, !insn.addr !392
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !393
  %26 = add i32 %1, 6215, !insn.addr !394
  %27 = inttoptr i32 %26 to i8*, !insn.addr !395
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !396
  %29 = add i32 %1, 6247, !insn.addr !397
  %30 = inttoptr i32 %29 to i8*, !insn.addr !398
  %31 = call i32 (i8*, ...) @printf(i8* %30), !insn.addr !399
  %32 = add i32 %1, 6283, !insn.addr !400
  %33 = inttoptr i32 %32 to i8*, !insn.addr !401
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !402
  %35 = add i32 %1, 6319, !insn.addr !403
  %36 = inttoptr i32 %35 to i8*, !insn.addr !404
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !405
  %38 = add i32 %1, 6350, !insn.addr !406
  %39 = inttoptr i32 %38 to i8*, !insn.addr !407
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !408
  %41 = add i32 %1, 6385, !insn.addr !409
  %42 = inttoptr i32 %41 to i8*, !insn.addr !410
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !411
  %44 = add i32 %1, 6415, !insn.addr !412
  %45 = inttoptr i32 %44 to i8*, !insn.addr !413
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !414
  %47 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !415
  %48 = add i32 %1, 6451, !insn.addr !416
  %49 = inttoptr i32 %48 to i8*, !insn.addr !417
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !418
  ret i32 %50, !insn.addr !419

; uselistorder directives
  uselistorder i32 %1, { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
}

define i32 @non_local_jump(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = alloca i32
  %ecx.0.reg2mem = alloca i32, !insn.addr !420
  %1 = load i32, i32* %0
  %2 = add i32 %1, 16838, !insn.addr !421
  %3 = insertvalue [8 x i32] undef, i32 %2, 0, !insn.addr !422
  %4 = insertvalue %__jmp_buf_tag undef, [8 x i32] %3, 0, !insn.addr !422
  %5 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %4, 0, !insn.addr !422
  %6 = call i32 @_setjmp([1 x %__jmp_buf_tag] %5), !insn.addr !422
  %7 = icmp eq i32 %6, 0, !insn.addr !423
  %8 = icmp eq i1 %7, false, !insn.addr !424
  store i32 -1, i32* %ecx.0.reg2mem, !insn.addr !424
  br i1 %8, label %dec_label_pc_1e9a, label %dec_label_pc_1e89, !insn.addr !424

dec_label_pc_1e89:                                ; preds = %dec_label_pc_1e60
  %9 = icmp slt i32 %arg2, 0, !insn.addr !425
  br i1 %9, label %dec_label_pc_1ea2, label %dec_label_pc_1e91, !insn.addr !426

dec_label_pc_1e91:                                ; preds = %dec_label_pc_1e89
  %10 = icmp ult i32 %arg2, 101, !insn.addr !427
  %11 = icmp eq i1 %10, false, !insn.addr !428
  br i1 %11, label %dec_label_pc_1eb2, label %dec_label_pc_1e96, !insn.addr !428

dec_label_pc_1e96:                                ; preds = %dec_label_pc_1e91
  %12 = mul i32 %arg2, 2, !insn.addr !429
  store i32 %12, i32* %ecx.0.reg2mem, !insn.addr !430
  br label %dec_label_pc_1e9a, !insn.addr !430

dec_label_pc_1e9a:                                ; preds = %dec_label_pc_1e96, %dec_label_pc_1e60
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  ret i32 %ecx.0.reload, !insn.addr !431

dec_label_pc_1ea2:                                ; preds = %dec_label_pc_1e89
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !432
  unreachable, !insn.addr !432

dec_label_pc_1eb2:                                ; preds = %dec_label_pc_1e91
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !433
  unreachable, !insn.addr !433

; uselistorder directives
  uselistorder i32 101, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 1 }
}

define i32 @cpp_exception(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ed0:
  %0 = mul i32 %arg1, 2, !insn.addr !434
  %1 = add i32 %arg1, -101, !insn.addr !435
  %2 = sub i32 100, %arg1
  %3 = and i32 %2, %arg1, !insn.addr !435
  %4 = icmp slt i32 %3, 0, !insn.addr !435
  %5 = icmp slt i32 %1, 0, !insn.addr !435
  %6 = icmp eq i1 %5, %4, !insn.addr !436
  %7 = select i1 %6, i32 -2, i32 %0, !insn.addr !436
  %8 = icmp slt i32 %arg1, 0, !insn.addr !437
  %9 = icmp eq i1 %8, false, !insn.addr !438
  %10 = select i1 %9, i32 %7, i32 -1, !insn.addr !438
  ret i32 %10, !insn.addr !439

; uselistorder directives
  uselistorder i32 -2, { 1, 2, 0, 3, 4 }
  uselistorder i32 100, { 0, 3, 1, 4, 2 }
  uselistorder i32 %arg1, { 4, 1, 2, 3, 0 }
}

define i32 @large_jump_table(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = icmp ult i32 %arg2, 10
  %spec.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.select, !insn.addr !440
}

define i32 @op_add(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f30:
  %0 = add i32 %arg2, %arg1, !insn.addr !441
  ret i32 %0, !insn.addr !442
}

define i32 @op_sub(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f40:
  %0 = sub i32 %arg1, %arg2, !insn.addr !443
  ret i32 %0, !insn.addr !444
}

define i32 @op_mul(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f50:
  %0 = mul i32 %arg2, %arg1, !insn.addr !445
  ret i32 %0, !insn.addr !446
}

define i32 @op_div(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f60:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !447
  br i1 %0, label %dec_label_pc_1f70, label %dec_label_pc_1f68, !insn.addr !448

dec_label_pc_1f68:                                ; preds = %dec_label_pc_1f60
  %1 = ashr i32 %arg1, 31, !insn.addr !449
  %2 = zext i32 %arg1 to i64, !insn.addr !450
  %3 = zext i32 %1 to i64, !insn.addr !450
  %4 = mul i64 %3, 4294967296, !insn.addr !450
  %5 = or i64 %4, %2, !insn.addr !450
  %6 = zext i32 %arg2 to i64, !insn.addr !450
  %7 = sdiv i64 %5, %6, !insn.addr !450
  %8 = trunc i64 %7 to i32, !insn.addr !450
  ret i32 %8, !insn.addr !451

dec_label_pc_1f70:                                ; preds = %dec_label_pc_1f60
  ret i32 0, !insn.addr !452
}

define i32 @op_mod(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1f80:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !453
  br i1 %0, label %dec_label_pc_1f92, label %dec_label_pc_1f88, !insn.addr !454

dec_label_pc_1f88:                                ; preds = %dec_label_pc_1f80
  %1 = ashr i32 %arg1, 31, !insn.addr !455
  %2 = zext i32 %arg1 to i64, !insn.addr !456
  %3 = zext i32 %1 to i64, !insn.addr !456
  %4 = mul i64 %3, 4294967296, !insn.addr !456
  %5 = or i64 %4, %2, !insn.addr !456
  %6 = zext i32 %arg2 to i64, !insn.addr !456
  %7 = srem i64 %5, %6, !insn.addr !456
  %8 = trunc i64 %7 to i32, !insn.addr !456
  ret i32 %8, !insn.addr !457

dec_label_pc_1f92:                                ; preds = %dec_label_pc_1f80
  ret i32 0, !insn.addr !458
}

define i32 @op_and(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fa0:
  %0 = and i32 %arg2, %arg1, !insn.addr !459
  ret i32 %0, !insn.addr !460
}

define i32 @op_or(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fb0:
  %0 = or i32 %arg2, %arg1, !insn.addr !461
  ret i32 %0, !insn.addr !462
}

define i32 @op_xor(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fc0:
  %0 = xor i32 %arg2, %arg1, !insn.addr !463
  ret i32 %0, !insn.addr !464
}

define i32 @op_shl(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_1fd0:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = shl i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !465
}

define i32 @op_shr(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_1fe0:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = ashr i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !466
}

define i32 @conditional_func_ptr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1ff0:
  ret i32 %arg3, !insn.addr !467
}

define i32 @state_machine(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2030:
  %0 = icmp ult i32 %arg3, 3
  %spec.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.select, !insn.addr !468
}

define i32 @function_2061() local_unnamed_addr {
dec_label_pc_2061:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 99, !insn.addr !469
  %3 = zext i1 %2 to i32, !insn.addr !470
  %4 = mul i32 %3, 2, !insn.addr !471
  %5 = or i32 %4, 1, !insn.addr !472
  %6 = icmp eq i32 %1, 2, !insn.addr !473
  %7 = select i1 %6, i32 2, i32 %5, !insn.addr !474
  ret i32 %7, !insn.addr !475

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_2075() local_unnamed_addr {
dec_label_pc_2075:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !476
  %3 = icmp eq i1 %2, false, !insn.addr !477
  %4 = select i1 %3, i32 3, i32 0, !insn.addr !478
  ret i32 %4, !insn.addr !479
}

define i32 @fsm_func_table(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2080:
  %0 = icmp ult i32 %arg3, 3
  %spec.store.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.store.select, !insn.addr !480
}

define i32 @state_idle(i32 %arg1) local_unnamed_addr {
dec_label_pc_20c0:
  %0 = icmp eq i32 %arg1, 1, !insn.addr !481
  %1 = zext i1 %0 to i32, !insn.addr !482
  ret i32 %1, !insn.addr !483
}

define i32 @state_processing(i32 %arg1) local_unnamed_addr {
dec_label_pc_20d0:
  %0 = icmp eq i32 %arg1, 99, !insn.addr !484
  %1 = zext i1 %0 to i32, !insn.addr !485
  %2 = mul i32 %1, 2, !insn.addr !486
  %3 = or i32 %2, 1, !insn.addr !487
  %4 = icmp eq i32 %arg1, 2, !insn.addr !488
  %5 = select i1 %4, i32 2, i32 %3, !insn.addr !489
  ret i32 %5, !insn.addr !490
}

define i32 @state_done() local_unnamed_addr {
dec_label_pc_20f0:
  ret i32 2, !insn.addr !491
}

define i32 @state_error(i32 %arg1) local_unnamed_addr {
dec_label_pc_2100:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !492
  %1 = icmp eq i1 %0, false, !insn.addr !493
  %2 = select i1 %1, i32 3, i32 0, !insn.addr !494
  ret i32 %2, !insn.addr !495
}

define i32 @computed_goto(i32 %arg1) local_unnamed_addr {
dec_label_pc_2110:
  ret i32 -1, !insn.addr !496
}

define i32 @function_2132() local_unnamed_addr {
dec_label_pc_2132:
  ret i32 0, !insn.addr !497
}

define i32 @function_2135() local_unnamed_addr {
dec_label_pc_2135:
  ret i32 20, !insn.addr !498
}

define i32 @function_213b() local_unnamed_addr {
dec_label_pc_213b:
  ret i32 30, !insn.addr !499
}

define i32 @function_2141() local_unnamed_addr {
dec_label_pc_2141:
  ret i32 10, !insn.addr !500

; uselistorder directives
  uselistorder i32 10, { 0, 3, 4, 5, 2, 1 }
}

define i32 @obfuscated_cf(i32 %arg1) local_unnamed_addr {
dec_label_pc_2150:
  %0 = mul i32 %arg1, 2, !insn.addr !501
  ret i32 %0, !insn.addr !502
}

define i32 @opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_2160:
  %0 = mul i32 %arg1, 2, !insn.addr !503
  ret i32 %0, !insn.addr !504
}

define i32 @overlapped_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_2170:
  %0 = urem i32 %arg1, 2
  %1 = icmp eq i32 %0, 0, !insn.addr !505
  %2 = icmp eq i1 %1, false, !insn.addr !506
  br i1 %2, label %dec_label_pc_2183, label %dec_label_pc_2179, !insn.addr !506

dec_label_pc_2179:                                ; preds = %dec_label_pc_2170
  %3 = icmp slt i32 %arg1, 0
  %4 = zext i1 %3 to i32, !insn.addr !507
  %5 = add i32 %4, %arg1, !insn.addr !508
  %6 = ashr i32 %5, 1, !insn.addr !509
  ret i32 %6, !insn.addr !510

dec_label_pc_2183:                                ; preds = %dec_label_pc_2170
  %7 = mul i32 %arg1, 3, !insn.addr !511
  %8 = add i32 %7, 1, !insn.addr !512
  ret i32 %8, !insn.addr !513

; uselistorder directives
  uselistorder i32 3, { 6, 7, 4, 5, 8, 2, 3, 9, 10, 11, 12, 13, 17, 14, 15, 18, 1, 16, 19, 20, 0 }
  uselistorder i32 %arg1, { 3, 2, 0, 1 }
}

define i32 @test_control_flow_l3(i32 %arg1) local_unnamed_addr {
dec_label_pc_2190:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10535), !insn.addr !514
  %3 = inttoptr i32 %2 to i8*, !insn.addr !515
  %4 = call i32 @puts(i8* %3), !insn.addr !516
  %5 = call i32 @non_local_jump(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !517
  %6 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10924), !insn.addr !518
  %7 = inttoptr i32 %6 to i8*, !insn.addr !519
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !520
  %9 = call i32 @non_local_jump(i32 -5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !521
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !522
  %11 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10893), !insn.addr !523
  %12 = inttoptr i32 %11 to i8*, !insn.addr !524
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !525
  %14 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !526
  %15 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10863), !insn.addr !527
  %16 = inttoptr i32 %15 to i8*, !insn.addr !528
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !529
  %18 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10830), !insn.addr !530
  %19 = inttoptr i32 %18 to i8*, !insn.addr !531
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !532
  %21 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10793), !insn.addr !533
  %22 = inttoptr i32 %21 to i8*, !insn.addr !534
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !535
  %24 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10763), !insn.addr !536
  %25 = inttoptr i32 %24 to i8*, !insn.addr !537
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !538
  %27 = call i32 @computed_goto(i32 2), !insn.addr !539
  %28 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10732), !insn.addr !540
  %29 = inttoptr i32 %28 to i8*, !insn.addr !541
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !542
  %31 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10702), !insn.addr !543
  %32 = inttoptr i32 %31 to i8*, !insn.addr !544
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !545
  %34 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10672), !insn.addr !546
  %35 = inttoptr i32 %34 to i8*, !insn.addr !547
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !548
  %37 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3e66 to i32), i32 -10639), !insn.addr !549
  %38 = inttoptr i32 %37 to i8*, !insn.addr !550
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !551
  ret i32 %39, !insn.addr !552

; uselistorder directives
  uselistorder i32 %1, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 2, { 28, 17, 1, 2, 15, 24, 25, 3, 26, 27, 4, 5, 6, 7, 8, 31, 18, 32, 29, 30, 33, 34, 9, 19, 10, 11, 20, 22, 12, 16, 35, 36, 21, 13, 23, 0, 14 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i32 (i32, i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_22d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_control_flow_l1(i32 %1), !insn.addr !553
  %3 = call i32 @test_control_flow_l2(i32 ptrtoint (i32* @0 to i32)), !insn.addr !554
  %4 = call i32 @test_control_flow_l3(i32 ptrtoint (i32* @0 to i32)), !insn.addr !555
  ret i32 0, !insn.addr !556

; uselistorder directives
  uselistorder i32 0, { 18, 25, 28, 19, 29, 42, 30, 41, 20, 43, 21, 44, 45, 46, 47, 48, 49, 0, 1, 2, 26, 31, 27, 50, 51, 52, 3, 4, 5, 6, 7, 8, 9, 53, 54, 55, 32, 56, 22, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 12, 11, 10, 37, 33, 34, 13, 14, 68, 23, 15, 16, 38, 69, 70, 17, 39, 35, 36, 71, 72, 73, 74, 75, 24, 40 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2300:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !557
  %ebx.0.reg2mem = alloca i32, !insn.addr !557
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !558
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3cf7 to i32), i32 -328), !insn.addr !559
  %4 = inttoptr i32 %3 to i32*, !insn.addr !559
  %5 = load i32, i32* %4, align 4, !insn.addr !559
  %6 = icmp eq i32 %5, -1, !insn.addr !560
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !561
  store i32 -1, i32* %merge.reg2mem, !insn.addr !561
  br i1 %6, label %dec_label_pc_233d, label %dec_label_pc_2330, !insn.addr !561

dec_label_pc_2330:                                ; preds = %dec_label_pc_2300, %dec_label_pc_2330
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !562
  %8 = inttoptr i32 %7 to i32*, !insn.addr !562
  %9 = load i32, i32* %8, align 4, !insn.addr !562
  %10 = icmp eq i32 %9, -1, !insn.addr !563
  %11 = icmp eq i1 %10, false, !insn.addr !564
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !564
  store i32 %9, i32* %merge.reg2mem, !insn.addr !564
  br i1 %11, label %dec_label_pc_2330, label %dec_label_pc_233d, !insn.addr !564

dec_label_pc_233d:                                ; preds = %dec_label_pc_2330, %dec_label_pc_2300
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !565

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 29, 6, 7, 5, 8, 9, 10, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 3, 21, 22, 23, 24, 25, 0, 26, 1, 27, 4, 28 }
  uselistorder i32 -4, { 2, 0, 1 }
  uselistorder i32 -1, { 10, 0, 11, 6, 8, 12, 1, 9, 16, 17, 18, 7, 2, 3, 19, 20, 21, 22, 23, 24, 25, 4, 26, 13, 5, 14, 15 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 0, 1, 2, 3, 4, 6, 5, 7, 8 }
  uselistorder label %dec_label_pc_2330, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_234c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !566
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !567
  ret i32 %3, !insn.addr !568

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 19, 21, 20, 18, 17, 16, 108, 109, 89, 90, 15, 91, 14, 22, 13, 12, 110, 92, 25, 24, 23, 11, 111, 112, 113, 93, 29, 28, 27, 26, 32, 31, 30, 33, 36, 37, 35, 34, 114, 94, 40, 39, 38, 86, 115, 95, 46, 45, 44, 43, 42, 41, 96, 116, 47, 117, 85, 48, 10, 9, 118, 88, 60, 50, 55, 57, 49, 97, 61, 59, 58, 56, 54, 53, 52, 51, 98, 119, 69, 66, 99, 71, 70, 68, 67, 65, 64, 63, 62, 100, 120, 73, 72, 121, 74, 77, 76, 75, 101, 87, 80, 79, 78, 81, 102, 103, 82, 104, 105, 83, 106, 8, 7, 84, 6, 5, 4, 3, 107, 2, 1, 0 }
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
!106 = !{i64 5110}
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
!117 = !{i64 5180}
!118 = !{i64 5183}
!119 = !{i64 5188}
!120 = !{i64 5191}
!121 = !{i64 5216}
!122 = !{i64 5233}
!123 = !{i64 5252}
!124 = !{i64 5258}
!125 = !{i64 5264}
!126 = !{i64 5280}
!127 = !{i64 5288}
!128 = !{i64 5290}
!129 = !{i64 5298}
!130 = !{i64 5301}
!131 = !{i64 5316}
!132 = !{i64 5323}
!133 = !{i64 5330}
!134 = !{i64 5332}
!135 = !{i64 5335}
!136 = !{i64 5341}
!137 = !{i64 5344}
!138 = !{i64 5347}
!139 = !{i64 5295}
!140 = !{i64 5349}
!141 = !{i64 5351}
!142 = !{i64 5362}
!143 = !{i64 5365}
!144 = !{i64 5367}
!145 = !{i64 5369}
!146 = !{i64 5371}
!147 = !{i64 5374}
!148 = !{i64 5377}
!149 = !{i64 5381}
!150 = !{i64 5396}
!151 = !{i64 5403}
!152 = !{i64 5406}
!153 = !{i64 5409}
!154 = !{i64 5411}
!155 = !{i64 5424}
!156 = !{i64 5433}
!157 = !{i64 5435}
!158 = !{i64 5440}
!159 = !{i64 5443}
!160 = !{i64 5446}
!161 = !{i64 5458}
!162 = !{i64 5460}
!163 = !{i64 5471}
!164 = !{i64 5487}
!165 = !{i64 5488}
!166 = !{i64 5494}
!167 = !{i64 5497}
!168 = !{i64 5506}
!169 = !{i64 5509}
!170 = !{i64 5515}
!171 = !{i64 5524}
!172 = !{i64 5491}
!173 = !{i64 5500}
!174 = !{i64 5503}
!175 = !{i64 5512}
!176 = !{i64 5518}
!177 = !{i64 5521}
!178 = !{i64 5527}
!179 = !{i64 5530}
!180 = !{i64 5539}
!181 = !{i64 5542}
!182 = !{i64 5545}
!183 = !{i64 5547}
!184 = !{i64 5550}
!185 = !{i64 5552}
!186 = !{i64 5568}
!187 = !{i64 5571}
!188 = !{i64 5574}
!189 = !{i64 5577}
!190 = !{i64 5582}
!191 = !{i64 5592}
!192 = !{i64 5594}
!193 = !{i64 5597}
!194 = !{i64 5617}
!195 = !{i64 5623}
!196 = !{i64 5626}
!197 = !{i64 5631}
!198 = !{i64 5637}
!199 = !{i64 5648}
!200 = !{i64 5653}
!201 = !{i64 5659}
!202 = !{i64 5670}
!203 = !{i64 5686}
!204 = !{i64 5691}
!205 = !{i64 5697}
!206 = !{i64 5708}
!207 = !{i64 5724}
!208 = !{i64 5729}
!209 = !{i64 5735}
!210 = !{i64 5746}
!211 = !{i64 5762}
!212 = !{i64 5778}
!213 = !{i64 5783}
!214 = !{i64 5789}
!215 = !{i64 5800}
!216 = !{i64 5805}
!217 = !{i64 5811}
!218 = !{i64 5822}
!219 = !{i64 5827}
!220 = !{i64 5833}
!221 = !{i64 5844}
!222 = !{i64 5849}
!223 = !{i64 5855}
!224 = !{i64 5866}
!225 = !{i64 5871}
!226 = !{i64 5877}
!227 = !{i64 5888}
!228 = !{i64 5893}
!229 = !{i64 5899}
!230 = !{i64 5910}
!231 = !{i64 5915}
!232 = !{i64 5921}
!233 = !{i64 5932}
!234 = !{i64 5937}
!235 = !{i64 5943}
!236 = !{i64 5954}
!237 = !{i64 5959}
!238 = !{i64 5965}
!239 = !{i64 5976}
!240 = !{i64 5981}
!241 = !{i64 5987}
!242 = !{i64 5998}
!243 = !{i64 6003}
!244 = !{i64 6009}
!245 = !{i64 6020}
!246 = !{i64 6025}
!247 = !{i64 6031}
!248 = !{i64 6042}
!249 = !{i64 6058}
!250 = !{i64 6063}
!251 = !{i64 6069}
!252 = !{i64 6080}
!253 = !{i64 6085}
!254 = !{i64 6091}
!255 = !{i64 6102}
!256 = !{i64 6118}
!257 = !{i64 6123}
!258 = !{i64 6129}
!259 = !{i64 6140}
!260 = !{i64 6145}
!261 = !{i64 6151}
!262 = !{i64 6162}
!263 = !{i64 6178}
!264 = !{i64 6188}
!265 = !{i64 6192}
!266 = !{i64 6209}
!267 = !{i64 6220}
!268 = !{i64 6222}
!269 = !{i64 6229}
!270 = !{i64 6237}
!271 = !{i64 6256}
!272 = !{i64 6258}
!273 = !{i64 6261}
!274 = !{i64 6296}
!275 = !{i64 6307}
!276 = !{i64 6311}
!277 = !{i64 6320}
!278 = !{i64 6324}
!279 = !{i64 6326}
!280 = !{i64 6336}
!281 = !{i64 6338}
!282 = !{i64 6343}
!283 = !{i64 6346}
!284 = !{i64 6349}
!285 = !{i64 6352}
!286 = !{i64 6372}
!287 = !{i64 6377}
!288 = !{i64 6379}
!289 = !{i64 6381}
!290 = !{i64 6384}
!291 = !{i64 6434}
!292 = !{i64 6436}
!293 = !{i64 6439}
!294 = !{i64 6454}
!295 = !{i64 6551}
!296 = !{i64 6560}
!297 = !{i64 6568}
!298 = !{i64 6578}
!299 = !{i64 6581}
!300 = !{i64 6584}
!301 = !{i64 6587}
!302 = !{i64 6594}
!303 = !{i64 6596}
!304 = !{i64 6590}
!305 = !{i64 6609}
!306 = !{i64 6611}
!307 = !{i64 6615}
!308 = !{i64 6624}
!309 = !{i64 6631}
!310 = !{i64 6640}
!311 = !{i64 6642}
!312 = !{i64 6645}
!313 = !{i64 6648}
!314 = !{i64 6651}
!315 = !{i64 6658}
!316 = !{i64 6661}
!317 = !{i64 6678}
!318 = !{i64 6681}
!319 = !{i64 6716}
!320 = !{i64 6736}
!321 = !{i64 6748}
!322 = !{i64 6768}
!323 = !{i64 6771}
!324 = !{i64 6779}
!325 = !{i64 6781}
!326 = !{i64 6784}
!327 = !{i64 6795}
!328 = !{i64 6800}
!329 = !{i64 6803}
!330 = !{i64 6811}
!331 = !{i64 6813}
!332 = !{i64 6816}
!333 = !{i64 6826}
!334 = !{i64 6828}
!335 = !{i64 6831}
!336 = !{i64 6848}
!337 = !{i64 6854}
!338 = !{i64 6856}
!339 = !{i64 6858}
!340 = !{i64 6862}
!341 = !{i64 6865}
!342 = !{i64 6867}
!343 = !{i64 6869}
!344 = !{i64 6872}
!345 = !{i64 6874}
!346 = !{i64 6879}
!347 = !{i64 6896}
!348 = !{i64 6899}
!349 = !{i64 6902}
!350 = !{i64 6904}
!351 = !{i64 6907}
!352 = !{i64 6911}
!353 = !{i64 6912}
!354 = !{i64 6959}
!355 = !{i64 7010}
!356 = !{i64 7028}
!357 = !{i64 7030}
!358 = !{i64 7044}
!359 = !{i64 7047}
!360 = !{i64 7060}
!361 = !{i64 7062}
!362 = !{i64 7072}
!363 = !{i64 7097}
!364 = !{i64 7108}
!365 = !{i64 7118}
!366 = !{i64 7120}
!367 = !{i64 7123}
!368 = !{i64 7125}
!369 = !{i64 7140}
!370 = !{i64 7170}
!371 = !{i64 7176}
!372 = !{i64 7179}
!373 = !{i64 7184}
!374 = !{i64 7190}
!375 = !{i64 7201}
!376 = !{i64 7296}
!377 = !{i64 7302}
!378 = !{i64 7305}
!379 = !{i64 7310}
!380 = !{i64 7316}
!381 = !{i64 7327}
!382 = !{i64 7343}
!383 = !{i64 7359}
!384 = !{i64 7364}
!385 = !{i64 7370}
!386 = !{i64 7381}
!387 = !{i64 7397}
!388 = !{i64 7402}
!389 = !{i64 7408}
!390 = !{i64 7419}
!391 = !{i64 7468}
!392 = !{i64 7474}
!393 = !{i64 7477}
!394 = !{i64 7482}
!395 = !{i64 7488}
!396 = !{i64 7499}
!397 = !{i64 7598}
!398 = !{i64 7604}
!399 = !{i64 7607}
!400 = !{i64 7612}
!401 = !{i64 7618}
!402 = !{i64 7629}
!403 = !{i64 7634}
!404 = !{i64 7640}
!405 = !{i64 7651}
!406 = !{i64 7656}
!407 = !{i64 7662}
!408 = !{i64 7673}
!409 = !{i64 7678}
!410 = !{i64 7684}
!411 = !{i64 7695}
!412 = !{i64 7700}
!413 = !{i64 7706}
!414 = !{i64 7717}
!415 = !{i64 7733}
!416 = !{i64 7738}
!417 = !{i64 7744}
!418 = !{i64 7755}
!419 = !{i64 7766}
!420 = !{i64 7776}
!421 = !{i64 7795}
!422 = !{i64 7803}
!423 = !{i64 7813}
!424 = !{i64 7815}
!425 = !{i64 7821}
!426 = !{i64 7823}
!427 = !{i64 7825}
!428 = !{i64 7828}
!429 = !{i64 7830}
!430 = !{i64 7832}
!431 = !{i64 7841}
!432 = !{i64 7853}
!433 = !{i64 7869}
!434 = !{i64 7892}
!435 = !{i64 7895}
!436 = !{i64 7903}
!437 = !{i64 7906}
!438 = !{i64 7913}
!439 = !{i64 7916}
!440 = !{i64 7954}
!441 = !{i64 7988}
!442 = !{i64 7992}
!443 = !{i64 8004}
!444 = !{i64 8008}
!445 = !{i64 8020}
!446 = !{i64 8025}
!447 = !{i64 8036}
!448 = !{i64 8038}
!449 = !{i64 8044}
!450 = !{i64 8045}
!451 = !{i64 8047}
!452 = !{i64 8050}
!453 = !{i64 8068}
!454 = !{i64 8070}
!455 = !{i64 8076}
!456 = !{i64 8077}
!457 = !{i64 8081}
!458 = !{i64 8084}
!459 = !{i64 8100}
!460 = !{i64 8104}
!461 = !{i64 8116}
!462 = !{i64 8120}
!463 = !{i64 8132}
!464 = !{i64 8136}
!465 = !{i64 8154}
!466 = !{i64 8170}
!467 = !{i64 8238}
!468 = !{i64 8272}
!469 = !{i64 8291}
!470 = !{i64 8294}
!471 = !{i64 8297}
!472 = !{i64 8299}
!473 = !{i64 8302}
!474 = !{i64 8305}
!475 = !{i64 8308}
!476 = !{i64 8311}
!477 = !{i64 8313}
!478 = !{i64 8316}
!479 = !{i64 8319}
!480 = !{i64 8370}
!481 = !{i64 8386}
!482 = !{i64 8391}
!483 = !{i64 8394}
!484 = !{i64 8406}
!485 = !{i64 8409}
!486 = !{i64 8412}
!487 = !{i64 8414}
!488 = !{i64 8417}
!489 = !{i64 8420}
!490 = !{i64 8423}
!491 = !{i64 8437}
!492 = !{i64 8450}
!493 = !{i64 8455}
!494 = !{i64 8458}
!495 = !{i64 8461}
!496 = !{i64 8491}
!497 = !{i64 8500}
!498 = !{i64 8506}
!499 = !{i64 8512}
!500 = !{i64 8518}
!501 = !{i64 8532}
!502 = !{i64 8534}
!503 = !{i64 8548}
!504 = !{i64 8550}
!505 = !{i64 8564}
!506 = !{i64 8567}
!507 = !{i64 8571}
!508 = !{i64 8574}
!509 = !{i64 8576}
!510 = !{i64 8578}
!511 = !{i64 8579}
!512 = !{i64 8582}
!513 = !{i64 8585}
!514 = !{i64 8609}
!515 = !{i64 8615}
!516 = !{i64 8618}
!517 = !{i64 8630}
!518 = !{i64 8639}
!519 = !{i64 8645}
!520 = !{i64 8648}
!521 = !{i64 8660}
!522 = !{i64 8672}
!523 = !{i64 8677}
!524 = !{i64 8683}
!525 = !{i64 8694}
!526 = !{i64 8710}
!527 = !{i64 8715}
!528 = !{i64 8721}
!529 = !{i64 8732}
!530 = !{i64 8737}
!531 = !{i64 8743}
!532 = !{i64 8754}
!533 = !{i64 8759}
!534 = !{i64 8765}
!535 = !{i64 8776}
!536 = !{i64 8781}
!537 = !{i64 8787}
!538 = !{i64 8798}
!539 = !{i64 8811}
!540 = !{i64 8820}
!541 = !{i64 8826}
!542 = !{i64 8829}
!543 = !{i64 8834}
!544 = !{i64 8840}
!545 = !{i64 8851}
!546 = !{i64 8856}
!547 = !{i64 8862}
!548 = !{i64 8873}
!549 = !{i64 8878}
!550 = !{i64 8884}
!551 = !{i64 8895}
!552 = !{i64 8905}
!553 = !{i64 8928}
!554 = !{i64 8933}
!555 = !{i64 8938}
!556 = !{i64 8949}
!557 = !{i64 8960}
!558 = !{i64 8964}
!559 = !{i64 8975}
!560 = !{i64 8981}
!561 = !{i64 8984}
!562 = !{i64 9010}
!563 = !{i64 9016}
!564 = !{i64 9019}
!565 = !{i64 9025}
!566 = !{i64 9044}
!567 = !{i64 9055}
!568 = !{i64 9064}
