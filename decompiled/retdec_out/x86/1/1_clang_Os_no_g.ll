source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3e9 = global i32 134217806
@global_var_366 = local_unnamed_addr constant [19 x i8] c"gisterTMCloneTable\00"
@global_var_2f7f = local_unnamed_addr constant i32 451584
@global_var_3077 = local_unnamed_addr constant i32 1125125697
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
  %5 = add i32 %1, 16196, !insn.addr !11
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
  %3 = add i32 %1, 16195, !insn.addr !17
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
  %3 = add i32 %1, 16043, !insn.addr !23
  %4 = inttoptr i32 %3 to i8*, !insn.addr !23
  %5 = load i8, i8* %4, align 1, !insn.addr !23
  %6 = icmp eq i8 %5, 0, !insn.addr !23
  %7 = icmp eq i1 %6, false, !insn.addr !24
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !24
  br i1 %7, label %dec_label_pc_11f2, label %dec_label_pc_1191, !insn.addr !24

dec_label_pc_1191:                                ; preds = %dec_label_pc_1170
  %8 = add i32 %1, 15987, !insn.addr !25
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
dec_label_pc_1214:
  %0 = add i32 %arg2, %arg1, !insn.addr !36
  %1 = mul i32 %0, 2, !insn.addr !37
  %2 = sub i32 %1, %arg3, !insn.addr !38
  ret i32 %2, !insn.addr !39
}

define i32 @single_if(i32 %arg1) local_unnamed_addr {
dec_label_pc_1223:
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
dec_label_pc_122f:
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
dec_label_pc_123a:
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
dec_label_pc_1251:
  %merge.reg2mem = alloca i32, !insn.addr !50
  %0 = icmp slt i32 %arg1, 1, !insn.addr !51
  store i32 0, i32* %merge.reg2mem, !insn.addr !51
  br i1 %0, label %dec_label_pc_127b, label %dec_label_pc_1258, !insn.addr !51

dec_label_pc_1258:                                ; preds = %dec_label_pc_1251
  %1 = icmp slt i32 %arg2, 1, !insn.addr !52
  store i32 1, i32* %merge.reg2mem, !insn.addr !52
  br i1 %1, label %dec_label_pc_127b, label %dec_label_pc_125f, !insn.addr !52

dec_label_pc_125f:                                ; preds = %dec_label_pc_1258
  %2 = icmp slt i32 %arg3, 1, !insn.addr !53
  store i32 2, i32* %merge.reg2mem, !insn.addr !53
  br i1 %2, label %dec_label_pc_127b, label %dec_label_pc_1266, !insn.addr !53

dec_label_pc_1266:                                ; preds = %dec_label_pc_125f
  %3 = icmp slt i32 %arg4, 1, !insn.addr !54
  store i32 3, i32* %merge.reg2mem, !insn.addr !54
  br i1 %3, label %dec_label_pc_127b, label %dec_label_pc_126d, !insn.addr !54

dec_label_pc_126d:                                ; preds = %dec_label_pc_1266
  %4 = icmp eq i32 %arg5, 0, !insn.addr !55
  %5 = icmp slt i32 %arg5, 0, !insn.addr !55
  %6 = icmp eq i1 %5, false, !insn.addr !56
  %7 = icmp eq i1 %4, false, !insn.addr !56
  %8 = icmp eq i1 %6, %7, !insn.addr !56
  %9 = zext i1 %8 to i32, !insn.addr !56
  %10 = or i32 %9, 4, !insn.addr !57
  ret i32 %10, !insn.addr !58

dec_label_pc_127b:                                ; preds = %dec_label_pc_1266, %dec_label_pc_125f, %dec_label_pc_1258, %dec_label_pc_1251
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !59

; uselistorder directives
  uselistorder i32 %arg5, { 1, 0 }
}

define i32 @if_elseif_chain(i32 %arg1) local_unnamed_addr {
dec_label_pc_128e:
  %0 = icmp ult i32 %arg1, 3, !insn.addr !60
  %factor = mul i32 %arg1, 10
  %1 = add i32 %factor, 10, !insn.addr !61
  %2 = icmp eq i1 %0, false, !insn.addr !62
  %3 = select i1 %2, i32 -1, i32 %1, !insn.addr !62
  ret i32 %3, !insn.addr !63
}

define i32 @if_elseif_long(i32 %arg1) local_unnamed_addr {
dec_label_pc_12a3:
  %0 = mul i32 %arg1, 100, !insn.addr !64
  %1 = add i32 %0, 100, !insn.addr !65
  %2 = icmp ult i32 %arg1, 5, !insn.addr !66
  %3 = select i1 %2, i32 %1, i32 -1, !insn.addr !67
  ret i32 %3, !insn.addr !68

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @switch_small(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12b7:
  %0 = icmp ult i32 %arg2, 4
  br i1 %0, label %dec_label_pc_12cc, label %dec_label_pc_12d4, !insn.addr !69

dec_label_pc_12cc:                                ; preds = %dec_label_pc_12b7
  %1 = mul i32 %arg2, 4, !insn.addr !70
  %2 = add i32 %arg1, 5028, !insn.addr !70
  %3 = add i32 %2, %1, !insn.addr !70
  %4 = inttoptr i32 %3 to i32*, !insn.addr !70
  %5 = load i32, i32* %4, align 4, !insn.addr !70
  ret i32 %5, !insn.addr !71

dec_label_pc_12d4:                                ; preds = %dec_label_pc_12b7
  ret i32 -1, !insn.addr !72
}

define i32 @switch_large(i32 %arg1) local_unnamed_addr {
dec_label_pc_12d8:
  %0 = icmp ult i32 %arg1, 10, !insn.addr !73
  %1 = mul i32 %arg1, 10, !insn.addr !74
  %2 = icmp eq i1 %0, false, !insn.addr !75
  %3 = select i1 %2, i32 -1, i32 %1, !insn.addr !75
  ret i32 %3, !insn.addr !76
}

define i32 @switch_default(i32 %arg1) local_unnamed_addr {
dec_label_pc_12ec:
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
dec_label_pc_1300:
  %eax.1.reg2mem = alloca i32, !insn.addr !83
  %eax.0.reg2mem = alloca i32, !insn.addr !83
  store i32 0, i32* %eax.0.reg2mem
  store i32 0, i32* %eax.1.reg2mem
  switch i32 %arg1, label %dec_label_pc_1310 [
    i32 1, label %dec_label_pc_131d
    i32 2, label %dec_label_pc_131a
  ]

dec_label_pc_1310:                                ; preds = %dec_label_pc_1300
  %0 = icmp eq i32 %arg1, 3, !insn.addr !84
  %1 = icmp eq i1 %0, false, !insn.addr !85
  store i32 12, i32* %eax.0.reg2mem, !insn.addr !85
  br i1 %1, label %dec_label_pc_1320, label %dec_label_pc_131a, !insn.addr !85

dec_label_pc_131a:                                ; preds = %dec_label_pc_1310, %dec_label_pc_1300
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = mul i32 %arg1, 2, !insn.addr !86
  %3 = add i32 %eax.0.reload, %2, !insn.addr !86
  store i32 %3, i32* %eax.1.reg2mem, !insn.addr !86
  br label %dec_label_pc_131d, !insn.addr !86

dec_label_pc_131d:                                ; preds = %dec_label_pc_1300, %dec_label_pc_131a
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %4 = add i32 %eax.1.reload, %arg1, !insn.addr !87
  ret i32 %4, !insn.addr !88

dec_label_pc_1320:                                ; preds = %dec_label_pc_1310
  ret i32 -1, !insn.addr !89

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_131d, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %arg1) local_unnamed_addr {
dec_label_pc_1324:
  %0 = icmp slt i32 %arg1, 1
  br i1 %0, label %dec_label_pc_133d, label %dec_label_pc_132c, !insn.addr !90

dec_label_pc_132c:                                ; preds = %dec_label_pc_1324
  %1 = add i32 %arg1, -1
  %2 = add i32 %arg1, -2, !insn.addr !91
  %3 = zext i32 %2 to i64, !insn.addr !92
  %4 = zext i32 %1 to i64, !insn.addr !92
  %5 = mul nuw i64 %3, %4, !insn.addr !92
  %6 = trunc i64 %5 to i32, !insn.addr !92
  %7 = udiv i64 %5, 2
  %8 = trunc i64 %7 to i32
  %9 = and i32 %8, -2147483648, !insn.addr !93
  %10 = udiv i32 %6, 2, !insn.addr !93
  %11 = or i32 %9, %10, !insn.addr !93
  %12 = add i32 %11, %1, !insn.addr !94
  ret i32 %12, !insn.addr !95

dec_label_pc_133d:                                ; preds = %dec_label_pc_1324
  ret i32 0, !insn.addr !96

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @loop_while(i32 %arg1) local_unnamed_addr {
dec_label_pc_1340:
  %ecx.1.reg2mem = alloca i32, !insn.addr !97
  %esi.0.reg2mem = alloca i32, !insn.addr !97
  %ecx.0.reg2mem = alloca i32, !insn.addr !97
  %0 = icmp eq i32 %arg1, 0, !insn.addr !98
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !99
  store i32 %arg1, i32* %esi.0.reg2mem, !insn.addr !99
  store i32 1, i32* %ecx.1.reg2mem, !insn.addr !99
  br i1 %0, label %dec_label_pc_136f, label %dec_label_pc_1351, !insn.addr !99

dec_label_pc_1351:                                ; preds = %dec_label_pc_1340, %dec_label_pc_1351
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %1 = sext i32 %esi.0.reload to i64, !insn.addr !100
  %2 = mul nsw i64 %1, 1717986919, !insn.addr !100
  %3 = udiv i64 %2, 4294967296, !insn.addr !100
  %4 = trunc i64 %3 to i32, !insn.addr !100
  %5 = lshr i64 %2, 63
  %6 = trunc i64 %5 to i32, !insn.addr !101
  %7 = ashr i32 %4, 2, !insn.addr !102
  %8 = add nsw i32 %7, %6, !insn.addr !103
  %9 = add i32 %ecx.0.reload, 1, !insn.addr !104
  %10 = add i32 %esi.0.reload, 9, !insn.addr !105
  %11 = icmp ult i32 %10, 19
  store i32 %9, i32* %ecx.0.reg2mem, !insn.addr !106
  store i32 %8, i32* %esi.0.reg2mem, !insn.addr !106
  store i32 %9, i32* %ecx.1.reg2mem, !insn.addr !106
  br i1 %11, label %dec_label_pc_136f, label %dec_label_pc_1351, !insn.addr !106

dec_label_pc_136f:                                ; preds = %dec_label_pc_1351, %dec_label_pc_1340
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  ret i32 %ecx.1.reload, !insn.addr !107

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1351, { 1, 0 }
}

define i32 @loop_dowhile(i32 %arg1) local_unnamed_addr {
dec_label_pc_1374:
  %esi.0.reg2mem = alloca i32, !insn.addr !108
  %ecx.0.reg2mem = alloca i32, !insn.addr !108
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !109
  store i32 %arg1, i32* %esi.0.reg2mem, !insn.addr !109
  br label %dec_label_pc_1381, !insn.addr !109

dec_label_pc_1381:                                ; preds = %dec_label_pc_1381, %dec_label_pc_1374
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %0 = sext i32 %esi.0.reload to i64, !insn.addr !110
  %1 = mul nsw i64 %0, 1717986919, !insn.addr !110
  %2 = udiv i64 %1, 4294967296, !insn.addr !110
  %3 = trunc i64 %2 to i32, !insn.addr !110
  %4 = lshr i64 %1, 63
  %5 = trunc i64 %4 to i32, !insn.addr !111
  %6 = ashr i32 %3, 2, !insn.addr !112
  %7 = add nsw i32 %6, %5, !insn.addr !113
  %8 = add i32 %ecx.0.reload, 1, !insn.addr !114
  %9 = add i32 %esi.0.reload, 9, !insn.addr !115
  %10 = icmp ult i32 %9, 19
  store i32 %8, i32* %ecx.0.reg2mem, !insn.addr !116
  store i32 %7, i32* %esi.0.reg2mem, !insn.addr !116
  br i1 %10, label %dec_label_pc_139a, label %dec_label_pc_1381, !insn.addr !116

dec_label_pc_139a:                                ; preds = %dec_label_pc_1381
  ret i32 %8, !insn.addr !117

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_139f:
  %0 = icmp sgt i32 %arg2, 0
  %1 = select i1 %0, i32 %arg2, i32 0, !insn.addr !118
  %2 = mul i32 %1, %arg1, !insn.addr !119
  %3 = icmp slt i32 %arg1, 1
  %4 = select i1 %3, i32 0, i32 %2, !insn.addr !120
  ret i32 %4, !insn.addr !121

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @loop_break(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_13b7:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !122
  %ecx.0.reg2mem = alloca i32, !insn.addr !122
  %eax.0.reg2mem = alloca i32, !insn.addr !122
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3195, !insn.addr !123
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !124
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !124
  br label %dec_label_pc_13d3, !insn.addr !124

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13d7, %dec_label_pc_13b7
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = inttoptr i32 %ecx.0.reload to i32*, !insn.addr !125
  %4 = load i32, i32* %3, align 4, !insn.addr !125
  %5 = icmp eq i32 %4, %arg2, !insn.addr !125
  store i32 %eax.0.reload, i32* %eax.1.reg2mem, !insn.addr !126
  br i1 %5, label %dec_label_pc_13e2, label %dec_label_pc_13d7, !insn.addr !126

dec_label_pc_13d7:                                ; preds = %dec_label_pc_13d3
  %6 = add nuw nsw i32 %eax.0.reload, 1, !insn.addr !127
  %7 = add i32 %ecx.0.reload, 4, !insn.addr !128
  %8 = icmp eq i32 %eax.0.reload, 4, !insn.addr !129
  %9 = icmp eq i1 %8, false, !insn.addr !130
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !130
  store i32 %7, i32* %ecx.0.reg2mem, !insn.addr !130
  store i32 -1, i32* %eax.1.reg2mem, !insn.addr !130
  br i1 %9, label %dec_label_pc_13d3, label %dec_label_pc_13e2, !insn.addr !130

dec_label_pc_13e2:                                ; preds = %dec_label_pc_13d7, %dec_label_pc_13d3
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !131

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 2, 0 }
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_continue(i32 %arg1) local_unnamed_addr {
dec_label_pc_13e4:
  %eax.1.reg2mem = alloca i32, !insn.addr !132
  %edx.0.reg2mem = alloca i32, !insn.addr !132
  %eax.0.reg2mem = alloca i32, !insn.addr !132
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !133
  store i32 1, i32* %edx.0.reg2mem, !insn.addr !133
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !133
  br i1 %0, label %dec_label_pc_140d, label %dec_label_pc_13f4, !insn.addr !133

dec_label_pc_13f4:                                ; preds = %dec_label_pc_13e4, %dec_label_pc_13f4
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = urem i32 %edx.0.reload, 2, !insn.addr !134
  %2 = sub nsw i32 0, %1, !insn.addr !135
  %3 = and i32 %edx.0.reload, %2, !insn.addr !136
  %4 = add i32 %3, %eax.0.reload, !insn.addr !137
  %5 = add i32 %edx.0.reload, 1, !insn.addr !138
  %6 = icmp eq i32 %edx.0.reload, %arg1, !insn.addr !139
  %7 = icmp eq i1 %6, false, !insn.addr !140
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !140
  store i32 %5, i32* %edx.0.reg2mem, !insn.addr !140
  store i32 %4, i32* %eax.1.reg2mem, !insn.addr !140
  br i1 %7, label %dec_label_pc_13f4, label %dec_label_pc_140d, !insn.addr !140

dec_label_pc_140d:                                ; preds = %dec_label_pc_13f4, %dec_label_pc_13e4
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !141

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0, 2, 3 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13f4, { 1, 0 }
}

define i32 @goto_forward(i32 %arg1) local_unnamed_addr {
dec_label_pc_140f:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !142
  %1 = icmp slt i32 %arg1, 0, !insn.addr !142
  %2 = icmp eq i1 %1, false, !insn.addr !143
  %3 = icmp eq i1 %0, false, !insn.addr !143
  %4 = icmp eq i1 %2, %3, !insn.addr !143
  %5 = select i1 %4, i32 %arg1, i32 1, !insn.addr !144
  %6 = mul i32 %arg1, 2, !insn.addr !144
  %7 = mul i32 %6, %5, !insn.addr !145
  ret i32 %7, !insn.addr !146
}

define i32 @goto_backward(i32 %arg1) local_unnamed_addr {
dec_label_pc_1421:
  %eax.1.reg2mem = alloca i32, !insn.addr !147
  %edx.0.reg2mem = alloca i32, !insn.addr !147
  %eax.0.reg2mem = alloca i32, !insn.addr !147
  %0 = icmp slt i32 %arg1, 1
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !148
  store i32 1, i32* %edx.0.reg2mem, !insn.addr !148
  store i32 1, i32* %eax.1.reg2mem, !insn.addr !148
  br i1 %0, label %dec_label_pc_1443, label %dec_label_pc_1431, !insn.addr !148

dec_label_pc_1431:                                ; preds = %dec_label_pc_1421, %dec_label_pc_1431
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %edx.0.reload, %eax.0.reload, !insn.addr !149
  %2 = add i32 %edx.0.reload, 1, !insn.addr !150
  %3 = icmp eq i32 %edx.0.reload, %arg1, !insn.addr !151
  %4 = icmp eq i1 %3, false, !insn.addr !152
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !152
  store i32 %2, i32* %edx.0.reg2mem, !insn.addr !152
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !152
  br i1 %4, label %dec_label_pc_1431, label %dec_label_pc_1443, !insn.addr !152

dec_label_pc_1443:                                ; preds = %dec_label_pc_1431, %dec_label_pc_1421
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !153

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1431, { 1, 0 }
}

define i32 @ternary_op(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1445:
  %0 = sub i32 %arg1, %arg2, !insn.addr !154
  %1 = xor i32 %arg2, %arg1, !insn.addr !154
  %2 = xor i32 %0, %arg1, !insn.addr !154
  %3 = and i32 %2, %1, !insn.addr !154
  %4 = icmp slt i32 %3, 0, !insn.addr !154
  %5 = icmp eq i32 %0, 0, !insn.addr !154
  %6 = icmp slt i32 %0, 0, !insn.addr !154
  %7 = icmp eq i1 %6, %4, !insn.addr !155
  %8 = icmp eq i1 %5, false, !insn.addr !155
  %9 = icmp eq i1 %7, %8, !insn.addr !155
  %10 = select i1 %9, i32 %arg1, i32 %arg2, !insn.addr !155
  ret i32 %10, !insn.addr !156

; uselistorder directives
  uselistorder i32 %0, { 1, 2, 0 }
  uselistorder i32 %arg2, { 2, 0, 1 }
  uselistorder i32 %arg1, { 3, 0, 1, 2 }
}

define i32 @test_control_flow_l1(i32 %arg1) local_unnamed_addr {
dec_label_pc_1453:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 4466, !insn.addr !157
  %3 = inttoptr i32 %2 to i8*, !insn.addr !158
  %4 = call i32 @puts(i8* %3), !insn.addr !159
  %5 = add i32 %1, 3101, !insn.addr !160
  %6 = inttoptr i32 %5 to i8*, !insn.addr !161
  %7 = call i32 (i8*, ...) @printf(i8* %6), !insn.addr !162
  %8 = add i32 %1, 3132, !insn.addr !163
  %9 = inttoptr i32 %8 to i8*, !insn.addr !164
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !165
  %11 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !166
  %12 = add i32 %1, 3158, !insn.addr !167
  %13 = inttoptr i32 %12 to i8*, !insn.addr !168
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !169
  %15 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !170
  %16 = add i32 %1, 3182, !insn.addr !171
  %17 = inttoptr i32 %16 to i8*, !insn.addr !172
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !173
  %19 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !174
  %20 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !175
  %21 = add i32 %1, 3210, !insn.addr !176
  %22 = inttoptr i32 %21 to i8*, !insn.addr !177
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !178
  %24 = add i32 %1, 3241, !insn.addr !179
  %25 = inttoptr i32 %24 to i8*, !insn.addr !180
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !181
  %27 = add i32 %1, 3273, !insn.addr !182
  %28 = inttoptr i32 %27 to i8*, !insn.addr !183
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !184
  %30 = add i32 %1, 3304, !insn.addr !185
  %31 = inttoptr i32 %30 to i8*, !insn.addr !186
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !187
  %33 = add i32 %1, 3333, !insn.addr !188
  %34 = inttoptr i32 %33 to i8*, !insn.addr !189
  %35 = call i32 (i8*, ...) @printf(i8* %34), !insn.addr !190
  %36 = add i32 %1, 3362, !insn.addr !191
  %37 = inttoptr i32 %36 to i8*, !insn.addr !192
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !193
  %39 = add i32 %1, 3393, !insn.addr !194
  %40 = inttoptr i32 %39 to i8*, !insn.addr !195
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !196
  %42 = add i32 %1, 3428, !insn.addr !197
  %43 = inttoptr i32 %42 to i8*, !insn.addr !198
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !199
  %45 = add i32 %1, 3459, !insn.addr !200
  %46 = inttoptr i32 %45 to i8*, !insn.addr !201
  %47 = call i32 (i8*, ...) @printf(i8* %46), !insn.addr !202
  %48 = add i32 %1, 3486, !insn.addr !203
  %49 = inttoptr i32 %48 to i8*, !insn.addr !204
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !205
  %51 = add i32 %1, 3515, !insn.addr !206
  %52 = inttoptr i32 %51 to i8*, !insn.addr !207
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !208
  %54 = add i32 %1, 3543, !insn.addr !209
  %55 = inttoptr i32 %54 to i8*, !insn.addr !210
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !211
  %57 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !212
  %58 = add i32 %1, 3570, !insn.addr !213
  %59 = inttoptr i32 %58 to i8*, !insn.addr !214
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !215
  %61 = add i32 %1, 3600, !insn.addr !216
  %62 = inttoptr i32 %61 to i8*, !insn.addr !217
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !218
  %64 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !219
  %65 = add i32 %1, 3629, !insn.addr !220
  %66 = inttoptr i32 %65 to i8*, !insn.addr !221
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !222
  %68 = add i32 %1, 3659, !insn.addr !223
  %69 = inttoptr i32 %68 to i8*, !insn.addr !224
  %70 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !225
  %71 = call i32 (i8*, ...) @printf(i8* %69), !insn.addr !226
  ret i32 %71, !insn.addr !227
}

define i32 @loop_multi_exit(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1695:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !228
  %ebx.0.reg2mem = alloca i32, !insn.addr !228
  %edi.0.reg2mem = alloca i32, !insn.addr !228
  %edx.0.reg2mem = alloca i32, !insn.addr !228
  %ecx.0.reg2mem = alloca i32, !insn.addr !228
  %1 = load i32, i32* %0
  %2 = add i32 %1, 2479, !insn.addr !229
  store i32 0, i32* %ecx.0.reg2mem, !insn.addr !230
  store i32 %2, i32* %edx.0.reg2mem, !insn.addr !230
  store i32 0, i32* %edi.0.reg2mem, !insn.addr !230
  br label %dec_label_pc_16b5, !insn.addr !230

dec_label_pc_16b5:                                ; preds = %dec_label_pc_16c2, %dec_label_pc_1695
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  store i32 0, i32* %ebx.0.reg2mem, !insn.addr !231
  br label %dec_label_pc_16b7, !insn.addr !231

dec_label_pc_16b7:                                ; preds = %dec_label_pc_16bc, %dec_label_pc_16b5
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %3 = mul i32 %ebx.0.reload, 4, !insn.addr !232
  %4 = add i32 %3, %edx.0.reload, !insn.addr !232
  %5 = inttoptr i32 %4 to i32*, !insn.addr !232
  %6 = load i32, i32* %5, align 4, !insn.addr !232
  %7 = icmp eq i32 %6, %arg2, !insn.addr !232
  br i1 %7, label %dec_label_pc_16d0, label %dec_label_pc_16bc, !insn.addr !233

dec_label_pc_16bc:                                ; preds = %dec_label_pc_16b7
  %8 = add nuw nsw i32 %ebx.0.reload, 1, !insn.addr !234
  %9 = icmp eq i32 %ebx.0.reload, 3, !insn.addr !235
  %10 = icmp eq i1 %9, false, !insn.addr !236
  store i32 %8, i32* %ebx.0.reg2mem, !insn.addr !236
  br i1 %10, label %dec_label_pc_16b7, label %dec_label_pc_16c2, !insn.addr !236

dec_label_pc_16c2:                                ; preds = %dec_label_pc_16bc
  %11 = add nuw nsw i32 %edi.0.reload, 1, !insn.addr !237
  %12 = add nsw i32 %ecx.0.reload, -10, !insn.addr !238
  %13 = add i32 %edx.0.reload, 16, !insn.addr !239
  %14 = icmp eq i32 %edi.0.reload, 2, !insn.addr !240
  %15 = icmp eq i1 %14, false, !insn.addr !241
  store i32 %12, i32* %ecx.0.reg2mem, !insn.addr !241
  store i32 %13, i32* %edx.0.reg2mem, !insn.addr !241
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !241
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !241
  br i1 %15, label %dec_label_pc_16b5, label %dec_label_pc_16d4, !insn.addr !241

dec_label_pc_16d0:                                ; preds = %dec_label_pc_16b7
  %16 = sub i32 %ebx.0.reload, %ecx.0.reload, !insn.addr !242
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !243
  br label %dec_label_pc_16d4, !insn.addr !243

dec_label_pc_16d4:                                ; preds = %dec_label_pc_16c2, %dec_label_pc_16d0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !244

; uselistorder directives
  uselistorder i32 %ebx.0.reload, { 2, 0, 1, 3 }
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ebx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16d4, { 1, 0 }
}

define i32 @infinite_loop(i32 %arg1) local_unnamed_addr {
dec_label_pc_16d8:
  %eax.1.reg2mem = alloca i32, !insn.addr !245
  %eax.0.reg2mem = alloca i32, !insn.addr !245
  %0 = inttoptr i32 %arg1 to i32*
  %1 = load i32, i32* %0, align 4, !insn.addr !246
  %2 = icmp eq i32 %1, 1, !insn.addr !247
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !248
  br label %dec_label_pc_16de, !insn.addr !248

dec_label_pc_16de:                                ; preds = %dec_label_pc_16e5, %dec_label_pc_16d8
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !249
  br i1 %2, label %dec_label_pc_16f8, label %dec_label_pc_16e5, !insn.addr !249

dec_label_pc_16e5:                                ; preds = %dec_label_pc_16de
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %3 = add i32 %eax.0.reload, 1, !insn.addr !250
  %4 = icmp eq i32 %3, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !251
  %5 = icmp eq i1 %4, false, !insn.addr !252
  store i32 %3, i32* %eax.0.reg2mem, !insn.addr !252
  br i1 %5, label %dec_label_pc_16de, label %dec_label_pc_16ed, !insn.addr !252

dec_label_pc_16ed:                                ; preds = %dec_label_pc_16e5
  store i32 1, i32* %0, align 4, !insn.addr !253
  store i32 ptrtoint (i32* @global_var_3e9 to i32), i32* %eax.1.reg2mem, !insn.addr !254
  br label %dec_label_pc_16f8, !insn.addr !254

dec_label_pc_16f8:                                ; preds = %dec_label_pc_16de, %dec_label_pc_16ed
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !255

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16f8, { 1, 0 }
}

define i32 @multi_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_16f9:
  %eax.0.reg2mem = alloca i32, !insn.addr !256
  %0 = icmp slt i32 %arg1, 0, !insn.addr !257
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !258
  br i1 %0, label %dec_label_pc_1717, label %dec_label_pc_1701, !insn.addr !258

dec_label_pc_1701:                                ; preds = %dec_label_pc_16f9
  %1 = icmp ult i32 %arg1, 51
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !259
  br i1 %1, label %dec_label_pc_170b, label %dec_label_pc_1717, !insn.addr !259

dec_label_pc_170b:                                ; preds = %dec_label_pc_1701
  %2 = mul i32 %arg1, 2, !insn.addr !260
  %3 = add i32 %arg1, 1, !insn.addr !261
  %4 = urem i32 %arg1, 2
  %5 = icmp eq i32 %4, 0, !insn.addr !262
  %6 = select i1 %5, i32 %2, i32 %3, !insn.addr !263
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !263
  br label %dec_label_pc_1717, !insn.addr !263

dec_label_pc_1717:                                ; preds = %dec_label_pc_16f9, %dec_label_pc_1701, %dec_label_pc_170b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !264

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 %arg1, { 1, 3, 0, 2, 4 }
  uselistorder label %dec_label_pc_1717, { 2, 1, 0 }
}

define i32 @conditional_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_171c:
  %0 = mul i32 %arg1, 2, !insn.addr !265
  %1 = sub i32 0, %arg1, !insn.addr !266
  %2 = icmp eq i32 %arg1, 0, !insn.addr !267
  %3 = icmp slt i32 %arg1, 0, !insn.addr !267
  %4 = icmp eq i1 %3, false, !insn.addr !268
  %5 = icmp eq i1 %2, false, !insn.addr !268
  %6 = icmp eq i1 %4, %5, !insn.addr !268
  %7 = select i1 %6, i32 %0, i32 %1, !insn.addr !268
  ret i32 %7, !insn.addr !269

; uselistorder directives
  uselistorder i32 %arg1, { 2, 3, 1, 0 }
}

define i32 @duffs_device(i32* %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_172d:
  %0 = icmp slt i32 %arg4, 1
  br i1 %0, label %dec_label_pc_17bf, label %dec_label_pc_174f, !insn.addr !270

dec_label_pc_174f:                                ; preds = %dec_label_pc_172d
  %1 = add i32 %arg4, 7, !insn.addr !271
  %2 = udiv i32 %1, 8, !insn.addr !272
  ret i32 %2, !insn.addr !273

dec_label_pc_17bf:                                ; preds = %dec_label_pc_172d
  ret i32 -1, !insn.addr !274
}

define i32 @loop_complex_cond(i32 %arg1) local_unnamed_addr {
dec_label_pc_17c3:
  %edx.0.reg2mem = alloca i32, !insn.addr !275
  %ecx.1.reg2mem = alloca i32, !insn.addr !275
  %eax.1.reg2mem = alloca i32, !insn.addr !275
  %esi.0.reg2mem = alloca i32, !insn.addr !275
  %ecx.0.reg2mem = alloca i32, !insn.addr !275
  %eax.0.reg2mem = alloca i32, !insn.addr !275
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !276
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !276
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !276
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !276
  store i32 %arg1, i32* %ecx.1.reg2mem, !insn.addr !276
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !276
  br i1 %0, label %dec_label_pc_17f0, label %dec_label_pc_17d1, !insn.addr !276

dec_label_pc_17d1:                                ; preds = %dec_label_pc_17c3, %dec_label_pc_17d1
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add nuw nsw i32 %eax.0.reload, 2, !insn.addr !277
  %2 = add nsw i32 %ecx.0.reload, -1, !insn.addr !278
  %3 = add nuw nsw i32 %esi.0.reload, 1, !insn.addr !279
  %4 = icmp ugt i32 %ecx.0.reload, 1, !insn.addr !280
  %5 = icmp slt i32 %1, %2, !insn.addr !281
  %or.cond = icmp eq i1 %4, %5
  %6 = icmp ult i32 %esi.0.reload, 9, !insn.addr !282
  %or.cond1 = icmp eq i1 %6, %or.cond
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !283
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !283
  store i32 %3, i32* %esi.0.reg2mem, !insn.addr !283
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !283
  store i32 %2, i32* %ecx.1.reg2mem, !insn.addr !283
  store i32 %3, i32* %edx.0.reg2mem, !insn.addr !283
  br i1 %or.cond1, label %dec_label_pc_17d1, label %dec_label_pc_17f0, !insn.addr !283

dec_label_pc_17f0:                                ; preds = %dec_label_pc_17d1, %dec_label_pc_17c3
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %ecx.1.reload = load i32, i32* %ecx.1.reg2mem
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  %7 = add i32 %ecx.1.reload, %eax.1.reload, !insn.addr !284
  %8 = add i32 %7, %edx.0.reload, !insn.addr !285
  ret i32 %8, !insn.addr !286

; uselistorder directives
  uselistorder i32 %ecx.0.reload, { 1, 0 }
  uselistorder i32 %esi.0.reload, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_17d1, { 1, 0 }
}

define i32 @loop_modify_var(i32 %arg1) local_unnamed_addr {
dec_label_pc_17f7:
  %eax.1.reg2mem = alloca i32, !insn.addr !287
  %edx.0.reg2mem = alloca i32, !insn.addr !287
  %eax.0.reg2mem = alloca i32, !insn.addr !287
  %0 = icmp slt i32 %arg1, 1
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !288
  store i32 0, i32* %edx.0.reg2mem, !insn.addr !288
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !288
  br i1 %0, label %dec_label_pc_181a, label %dec_label_pc_1804, !insn.addr !288

dec_label_pc_1804:                                ; preds = %dec_label_pc_17f7, %dec_label_pc_1804
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = add i32 %edx.0.reload, %eax.0.reload, !insn.addr !289
  %2 = add i32 %edx.0.reload, 2, !insn.addr !290
  %3 = add i32 %edx.0.reload, -6, !insn.addr !291
  %4 = sub i32 5, %edx.0.reload
  %5 = and i32 %4, %edx.0.reload, !insn.addr !291
  %6 = icmp slt i32 %5, 0, !insn.addr !291
  %7 = icmp slt i32 %3, 0, !insn.addr !291
  %8 = icmp eq i1 %7, %6, !insn.addr !292
  %9 = select i1 %8, i32 %2, i32 %edx.0.reload, !insn.addr !292
  %10 = add i32 %9, 1, !insn.addr !293
  %11 = icmp slt i32 %10, %arg1, !insn.addr !294
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !294
  store i32 %10, i32* %edx.0.reg2mem, !insn.addr !294
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !294
  br i1 %11, label %dec_label_pc_1804, label %dec_label_pc_181a, !insn.addr !294

dec_label_pc_181a:                                ; preds = %dec_label_pc_1804, %dec_label_pc_17f7
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !295

; uselistorder directives
  uselistorder i32 %edx.0.reload, { 3, 5, 0, 1, 2, 4 }
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1804, { 1, 0 }
}

define i32 @loop_external_state(i32 %arg1) local_unnamed_addr {
dec_label_pc_181c:
  %eax.1.reg2mem = alloca i32, !insn.addr !296
  %eax.0.reg2mem = alloca i32, !insn.addr !296
  %0 = inttoptr i32 %arg1 to i32*, !insn.addr !297
  %1 = load i32, i32* %0, align 4, !insn.addr !297
  %2 = icmp eq i32 %1, 0, !insn.addr !297
  %3 = icmp eq i1 %2, false, !insn.addr !298
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !299
  br label %dec_label_pc_1822, !insn.addr !299

dec_label_pc_1822:                                ; preds = %dec_label_pc_1827, %dec_label_pc_181c
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !298
  br i1 %3, label %dec_label_pc_1832, label %dec_label_pc_1827, !insn.addr !298

dec_label_pc_1827:                                ; preds = %dec_label_pc_1822
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %4 = add i32 %eax.0.reload, 1, !insn.addr !300
  %5 = icmp eq i32 %eax.0.reload, 100, !insn.addr !301
  %6 = icmp eq i1 %5, false, !insn.addr !302
  store i32 %4, i32* %eax.0.reg2mem, !insn.addr !302
  store i32 101, i32* %eax.1.reg2mem, !insn.addr !302
  br i1 %6, label %dec_label_pc_1822, label %dec_label_pc_1832, !insn.addr !302

dec_label_pc_1832:                                ; preds = %dec_label_pc_1827, %dec_label_pc_1822
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !303

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
}

define i32 @recursion_factorial(i32 %arg1) local_unnamed_addr {
dec_label_pc_1833:
  %eax.1.reg2mem = alloca i32, !insn.addr !304
  %ecx.0.reg2mem = alloca i32, !insn.addr !304
  %eax.0.reg2mem = alloca i32, !insn.addr !304
  %0 = icmp slt i32 %arg1, 2, !insn.addr !305
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !305
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !305
  store i32 1, i32* %eax.1.reg2mem, !insn.addr !305
  br i1 %0, label %dec_label_pc_184c, label %dec_label_pc_183f, !insn.addr !305

dec_label_pc_183f:                                ; preds = %dec_label_pc_1833, %dec_label_pc_183f
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !306
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !307
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !308
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !308
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !308
  br i1 %3, label %dec_label_pc_184c, label %dec_label_pc_183f, !insn.addr !308

dec_label_pc_184c:                                ; preds = %dec_label_pc_183f, %dec_label_pc_1833
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !309

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_183f, { 1, 0 }
}

define i32 @tail_recursion(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_184d:
  %eax.1.reg2mem = alloca i32, !insn.addr !310
  %ecx.0.reg2mem = alloca i32, !insn.addr !310
  %eax.0.reg2mem = alloca i32, !insn.addr !310
  %0 = icmp slt i32 %arg1, 2, !insn.addr !311
  store i32 %arg2, i32* %eax.0.reg2mem, !insn.addr !311
  store i32 %arg1, i32* %ecx.0.reg2mem, !insn.addr !311
  store i32 %arg2, i32* %eax.1.reg2mem, !insn.addr !311
  br i1 %0, label %dec_label_pc_1867, label %dec_label_pc_185a, !insn.addr !311

dec_label_pc_185a:                                ; preds = %dec_label_pc_184d, %dec_label_pc_185a
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %1 = mul i32 %ecx.0.reload, %eax.0.reload, !insn.addr !312
  %2 = add i32 %ecx.0.reload, -1, !insn.addr !313
  %3 = icmp ult i32 %ecx.0.reload, 3
  store i32 %1, i32* %eax.0.reg2mem, !insn.addr !314
  store i32 %2, i32* %ecx.0.reg2mem, !insn.addr !314
  store i32 %1, i32* %eax.1.reg2mem, !insn.addr !314
  br i1 %3, label %dec_label_pc_1867, label %dec_label_pc_185a, !insn.addr !314

dec_label_pc_1867:                                ; preds = %dec_label_pc_185a, %dec_label_pc_184d
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !315

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ecx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_185a, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1868:
  %eax.1.reg2mem = alloca i32, !insn.addr !316
  %storemerge.reg2mem = alloca i32, !insn.addr !316
  %ecx.0.reg2mem = alloca i32, !insn.addr !316
  %eax.0.reg2mem = alloca i32, !insn.addr !316
  %0 = icmp slt i32 %arg2, 1
  store i32 %arg1, i32* %eax.1.reg2mem, !insn.addr !317
  br i1 %0, label %dec_label_pc_18a1, label %dec_label_pc_1874, !insn.addr !317

dec_label_pc_1874:                                ; preds = %dec_label_pc_1868
  %1 = add i32 %arg2, 2, !insn.addr !318
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !318
  store i32 %1, i32* %ecx.0.reg2mem, !insn.addr !318
  br label %dec_label_pc_1877, !insn.addr !318

dec_label_pc_1877:                                ; preds = %dec_label_pc_1899, %dec_label_pc_1874
  %ecx.0.reload = load i32, i32* %ecx.0.reg2mem
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %2 = urem i32 %eax.0.reload, 2
  %3 = icmp eq i32 %2, 0, !insn.addr !319
  %4 = icmp eq i1 %3, false, !insn.addr !320
  br i1 %4, label %dec_label_pc_188e, label %dec_label_pc_187b, !insn.addr !320

dec_label_pc_187b:                                ; preds = %dec_label_pc_1877
  %5 = icmp slt i32 %eax.0.reload, 0
  %6 = zext i1 %5 to i32, !insn.addr !321
  %7 = add i32 %eax.0.reload, %6, !insn.addr !322
  %8 = ashr i32 %7, 1, !insn.addr !323
  %9 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !324
  store i32 %8, i32* %eax.1.reg2mem, !insn.addr !325
  br i1 %9, label %dec_label_pc_18a1, label %dec_label_pc_1889, !insn.addr !325

dec_label_pc_1889:                                ; preds = %dec_label_pc_187b
  %10 = add nsw i32 %8, 1, !insn.addr !326
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !327
  br label %dec_label_pc_1899, !insn.addr !327

dec_label_pc_188e:                                ; preds = %dec_label_pc_1877
  %11 = mul i32 %eax.0.reload, 3, !insn.addr !328
  %12 = icmp eq i32 %ecx.0.reload, 3, !insn.addr !329
  br i1 %12, label %dec_label_pc_18a5, label %dec_label_pc_1896, !insn.addr !330

dec_label_pc_1896:                                ; preds = %dec_label_pc_188e
  %13 = add i32 %11, 2, !insn.addr !331
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !331
  br label %dec_label_pc_1899, !insn.addr !331

dec_label_pc_1899:                                ; preds = %dec_label_pc_1896, %dec_label_pc_1889
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %14 = add i32 %ecx.0.reload, -2, !insn.addr !332
  %15 = icmp sgt i32 %14, 2, !insn.addr !333
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !333
  store i32 %14, i32* %ecx.0.reg2mem, !insn.addr !333
  store i32 %storemerge.reload, i32* %eax.1.reg2mem, !insn.addr !333
  br i1 %15, label %dec_label_pc_1877, label %dec_label_pc_18a1, !insn.addr !333

dec_label_pc_18a1:                                ; preds = %dec_label_pc_187b, %dec_label_pc_1899, %dec_label_pc_1868
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !334

dec_label_pc_18a5:                                ; preds = %dec_label_pc_188e
  %16 = add i32 %11, 1, !insn.addr !335
  ret i32 %16, !insn.addr !336

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %eax.0.reload, { 0, 3, 2, 1 }
  uselistorder i32 %ecx.0.reload, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %ecx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %eax.1.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_18a1, { 1, 0, 2 }
}

define i32 @call_func_ptr(i32 %arg1) local_unnamed_addr {
dec_label_pc_18a7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !337
}

define i32 @call_func_ptr_array(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_18c7:
  %0 = icmp ult i32 %arg2, 3
  %spec.store.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.store.select, !insn.addr !338
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_18f8:
  %0 = mul i32 %arg1, 2, !insn.addr !339
  ret i32 %0, !insn.addr !340
}

define i32 @triple_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_18ff:
  %0 = mul i32 %arg1, 3, !insn.addr !341
  ret i32 %0, !insn.addr !342
}

define i32 @call_virtual_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_1907:
  %0 = mul i32 %arg1, 2, !insn.addr !343
  ret i32 %0, !insn.addr !344
}

define i32 @process_with_callback(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_190e:
  %esi.1.reg2mem = alloca i32, !insn.addr !345
  %esi.0.reg2mem = alloca i32, !insn.addr !345
  %ebp.0.reg2mem = alloca i32, !insn.addr !345
  %0 = icmp slt i32 %arg3, 1
  store i32 0, i32* %ebp.0.reg2mem, !insn.addr !346
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !346
  store i32 0, i32* %esi.1.reg2mem, !insn.addr !346
  br i1 %0, label %dec_label_pc_1946, label %dec_label_pc_192d, !insn.addr !346

dec_label_pc_192d:                                ; preds = %dec_label_pc_190e, %dec_label_pc_192d
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %ebp.0.reload = load i32, i32* %ebp.0.reg2mem
  %1 = mul i32 %ebp.0.reload, 4, !insn.addr !347
  %2 = add i32 %1, %arg2, !insn.addr !347
  %3 = inttoptr i32 %2 to i32*, !insn.addr !347
  %4 = load i32, i32* %3, align 4, !insn.addr !347
  %5 = add i32 %4, %esi.0.reload, !insn.addr !348
  %6 = add i32 %ebp.0.reload, 1, !insn.addr !349
  %7 = icmp eq i32 %6, %arg3, !insn.addr !350
  %8 = icmp eq i1 %7, false, !insn.addr !351
  store i32 %6, i32* %ebp.0.reg2mem, !insn.addr !351
  store i32 %5, i32* %esi.0.reg2mem, !insn.addr !351
  store i32 %5, i32* %esi.1.reg2mem, !insn.addr !351
  br i1 %8, label %dec_label_pc_192d, label %dec_label_pc_1946, !insn.addr !351

dec_label_pc_1946:                                ; preds = %dec_label_pc_192d, %dec_label_pc_190e
  %esi.1.reload = load i32, i32* %esi.1.reg2mem
  ret i32 %esi.1.reload, !insn.addr !352

; uselistorder directives
  uselistorder i32* %ebp.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %esi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_192d, { 1, 0 }
}

define i32 @test_control_flow_l2(i32 %arg1) local_unnamed_addr {
dec_label_pc_1950:
  %0 = alloca i32
  %eax.2.reg2mem = alloca i32, !insn.addr !353
  %eax.0.reg2mem = alloca i32, !insn.addr !353
  %edi.0.reg2mem = alloca i32, !insn.addr !353
  %esi.0.reg2mem = alloca i32, !insn.addr !353
  %edx.0.reg2mem = alloca i32, !insn.addr !353
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-44 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 3225, !insn.addr !354
  %3 = inttoptr i32 %2 to i8*, !insn.addr !355
  %4 = call i32 @puts(i8* %3), !insn.addr !356
  %5 = add i32 %1, 1776, !insn.addr !357
  store i32 %5, i32* %edx.0.reg2mem, !insn.addr !358
  store i32 0, i32* %esi.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_1982, !insn.addr !358

dec_label_pc_1982:                                ; preds = %dec_label_pc_1990, %dec_label_pc_1950
  %esi.0.reload = load i32, i32* %esi.0.reg2mem
  %edx.0.reload = load i32, i32* %edx.0.reg2mem
  store i32 0, i32* %edi.0.reg2mem, !insn.addr !359
  br label %dec_label_pc_1984, !insn.addr !359

dec_label_pc_1984:                                ; preds = %dec_label_pc_198a, %dec_label_pc_1982
  %edi.0.reload = load i32, i32* %edi.0.reg2mem
  %6 = mul i32 %edi.0.reload, 4, !insn.addr !360
  %7 = add i32 %6, %edx.0.reload, !insn.addr !360
  %8 = inttoptr i32 %7 to i32*, !insn.addr !360
  %9 = load i32, i32* %8, align 4, !insn.addr !360
  %10 = icmp eq i32 %9, 7, !insn.addr !360
  br i1 %10, label %dec_label_pc_19a2, label %dec_label_pc_198a, !insn.addr !361

dec_label_pc_198a:                                ; preds = %dec_label_pc_1984
  %11 = add nuw nsw i32 %edi.0.reload, 1, !insn.addr !362
  %12 = icmp eq i32 %edi.0.reload, 3, !insn.addr !363
  %13 = icmp eq i1 %12, false, !insn.addr !364
  store i32 %11, i32* %edi.0.reg2mem, !insn.addr !364
  br i1 %13, label %dec_label_pc_1984, label %dec_label_pc_1990, !insn.addr !364

dec_label_pc_1990:                                ; preds = %dec_label_pc_198a
  %14 = add nuw nsw i32 %esi.0.reload, 1, !insn.addr !365
  %15 = add i32 %edx.0.reload, 16, !insn.addr !366
  %16 = icmp eq i32 %esi.0.reload, 2, !insn.addr !367
  %17 = icmp eq i1 %16, false, !insn.addr !368
  store i32 %15, i32* %edx.0.reg2mem, !insn.addr !368
  store i32 %14, i32* %esi.0.reg2mem, !insn.addr !368
  br i1 %17, label %dec_label_pc_1982, label %dec_label_pc_19a2, !insn.addr !368

dec_label_pc_19a2:                                ; preds = %dec_label_pc_1990, %dec_label_pc_1984
  %18 = add i32 %1, 2409, !insn.addr !369
  %19 = inttoptr i32 %18 to i8*, !insn.addr !370
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !371
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !372
  br label %dec_label_pc_19bf, !insn.addr !372

dec_label_pc_19bf:                                ; preds = %dec_label_pc_19bf, %dec_label_pc_19a2
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %21 = add i32 %eax.0.reload, 1, !insn.addr !373
  %22 = icmp eq i32 %21, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !374
  %23 = icmp eq i1 %22, false, !insn.addr !375
  store i32 %21, i32* %eax.0.reg2mem, !insn.addr !375
  br i1 %23, label %dec_label_pc_19bf, label %dec_label_pc_19dd, !insn.addr !375

dec_label_pc_19dd:                                ; preds = %dec_label_pc_19bf
  %24 = add i32 %1, 2441, !insn.addr !376
  %25 = inttoptr i32 %24 to i8*, !insn.addr !377
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !378
  %27 = add i32 %1, 2471, !insn.addr !379
  %28 = inttoptr i32 %27 to i8*, !insn.addr !380
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !381
  %30 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !382
  %31 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !383
  %32 = add i32 %1, 2500, !insn.addr !384
  %33 = inttoptr i32 %32 to i8*, !insn.addr !385
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !386
  %35 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !387
  %36 = add i32 %1, 3300, !insn.addr !388
  %37 = inttoptr i32 %36 to i8*, !insn.addr !389
  %38 = bitcast i32* %stack_var_-44 to i8*, !insn.addr !389
  call void @__asm_rep_movsd_memcpy(i8* nonnull %38, i8* %37, i32 8), !insn.addr !389
  %39 = call i32 @duffs_device(i32* nonnull %stack_var_-76, i32* nonnull %stack_var_-44, i32 8, i32 ptrtoint (i32* @0 to i32)), !insn.addr !390
  %40 = add i32 %1, 2535, !insn.addr !391
  %41 = inttoptr i32 %40 to i8*, !insn.addr !392
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !393
  %43 = add i32 %1, 2564, !insn.addr !394
  %44 = inttoptr i32 %43 to i8*, !insn.addr !395
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !396
  %46 = add i32 %1, 2598, !insn.addr !397
  %47 = inttoptr i32 %46 to i8*, !insn.addr !398
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !399
  store i32 0, i32* %eax.2.reg2mem, !insn.addr !400
  br label %dec_label_pc_1ab8, !insn.addr !400

dec_label_pc_1ab8:                                ; preds = %dec_label_pc_1ab8, %dec_label_pc_19dd
  %eax.2.reload = load i32, i32* %eax.2.reg2mem
  %49 = add i32 %eax.2.reload, 1, !insn.addr !401
  %50 = icmp eq i32 %eax.2.reload, 100, !insn.addr !402
  %51 = icmp eq i1 %50, false, !insn.addr !403
  store i32 %49, i32* %eax.2.reg2mem, !insn.addr !403
  br i1 %51, label %dec_label_pc_1ab8, label %dec_label_pc_1aca, !insn.addr !403

dec_label_pc_1aca:                                ; preds = %dec_label_pc_1ab8
  %52 = add i32 %1, 2630, !insn.addr !404
  %53 = inttoptr i32 %52 to i8*, !insn.addr !405
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !406
  %55 = add i32 %1, 2666, !insn.addr !407
  %56 = inttoptr i32 %55 to i8*, !insn.addr !408
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !409
  %58 = add i32 %1, 2702, !insn.addr !410
  %59 = inttoptr i32 %58 to i8*, !insn.addr !411
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !412
  %61 = add i32 %1, 2733, !insn.addr !413
  %62 = inttoptr i32 %61 to i8*, !insn.addr !414
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !415
  %64 = add i32 %1, 2768, !insn.addr !416
  %65 = inttoptr i32 %64 to i8*, !insn.addr !417
  %66 = call i32 (i8*, ...) @printf(i8* %65), !insn.addr !418
  %67 = add i32 %1, 2798, !insn.addr !419
  %68 = inttoptr i32 %67 to i8*, !insn.addr !420
  %69 = call i32 (i8*, ...) @printf(i8* %68), !insn.addr !421
  %70 = call i32 (i8*, ...) @printf(i8* %68), !insn.addr !422
  %71 = add i32 %1, 2834, !insn.addr !423
  %72 = inttoptr i32 %71 to i8*, !insn.addr !424
  %73 = call i32 (i8*, ...) @printf(i8* %72), !insn.addr !425
  ret i32 %73, !insn.addr !426

; uselistorder directives
  uselistorder i32 %1, { 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32* %edx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %esi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %edi.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %eax.2.reg2mem, { 1, 0, 2 }
  uselistorder i32 8, { 1, 2, 0 }
  uselistorder i32 ptrtoint (i32* @global_var_3e9 to i32), { 1, 0, 2 }
}

define i32 @non_local_jump(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1b58:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !427
  %1 = load i32, i32* %0
  %2 = add i32 %1, 13518, !insn.addr !428
  %3 = insertvalue [8 x i32] undef, i32 %2, 0, !insn.addr !429
  %4 = insertvalue %__jmp_buf_tag undef, [8 x i32] %3, 0, !insn.addr !429
  %5 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %4, 0, !insn.addr !429
  %6 = call i32 @_setjmp([1 x %__jmp_buf_tag] %5), !insn.addr !429
  %7 = icmp eq i32 %6, 0, !insn.addr !430
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !431
  br i1 %7, label %dec_label_pc_1b81, label %dec_label_pc_1b90, !insn.addr !431

dec_label_pc_1b81:                                ; preds = %dec_label_pc_1b58
  %8 = icmp slt i32 %arg2, 0, !insn.addr !432
  br i1 %8, label %dec_label_pc_1b96, label %dec_label_pc_1b89, !insn.addr !433

dec_label_pc_1b89:                                ; preds = %dec_label_pc_1b81
  %9 = icmp ult i32 %arg2, 101, !insn.addr !434
  %10 = icmp eq i1 %9, false, !insn.addr !435
  br i1 %10, label %dec_label_pc_1ba6, label %dec_label_pc_1b8e, !insn.addr !435

dec_label_pc_1b8e:                                ; preds = %dec_label_pc_1b89
  %11 = mul i32 %arg2, 2, !insn.addr !436
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !436
  br label %dec_label_pc_1b90, !insn.addr !436

dec_label_pc_1b90:                                ; preds = %dec_label_pc_1b58, %dec_label_pc_1b8e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !437

dec_label_pc_1b96:                                ; preds = %dec_label_pc_1b81
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !438
  unreachable, !insn.addr !438

dec_label_pc_1ba6:                                ; preds = %dec_label_pc_1b89
  call void @longjmp([1 x %__jmp_buf_tag] %5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !439
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !439

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder i32 101, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1b90, { 1, 0 }
}

define i32 @cpp_exception(i32 %arg1) local_unnamed_addr {
dec_label_pc_1bb6:
  %0 = mul i32 %arg1, 2, !insn.addr !440
  %1 = add i32 %arg1, -101, !insn.addr !441
  %2 = sub i32 100, %arg1
  %3 = and i32 %2, %arg1, !insn.addr !441
  %4 = icmp slt i32 %3, 0, !insn.addr !441
  %5 = icmp slt i32 %1, 0, !insn.addr !441
  %6 = icmp eq i1 %5, %4, !insn.addr !442
  %7 = select i1 %6, i32 -2, i32 %0, !insn.addr !442
  %8 = icmp slt i32 %arg1, 0, !insn.addr !443
  %9 = icmp eq i1 %8, false, !insn.addr !444
  %10 = select i1 %9, i32 %7, i32 -1, !insn.addr !444
  ret i32 %10, !insn.addr !445

; uselistorder directives
  uselistorder i32 -2, { 1, 2, 0, 3 }
  uselistorder i32 100, { 0, 1, 2, 5, 3, 6, 4 }
  uselistorder i32 %arg1, { 4, 1, 2, 3, 0 }
}

define i32 @large_jump_table(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1bd1:
  %0 = icmp ult i32 %arg2, 10
  %spec.select = select i1 %0, i32 %arg2, i32 -1
  ret i32 %spec.select, !insn.addr !446
}

define i32 @op_add(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c09:
  %0 = add i32 %arg2, %arg1, !insn.addr !447
  ret i32 %0, !insn.addr !448
}

define i32 @op_sub(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c12:
  %0 = sub i32 %arg1, %arg2, !insn.addr !449
  ret i32 %0, !insn.addr !450
}

define i32 @op_mul(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c1b:
  %0 = mul i32 %arg2, %arg1, !insn.addr !451
  ret i32 %0, !insn.addr !452
}

define i32 @op_div(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c25:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !453
  br i1 %0, label %dec_label_pc_1c35, label %dec_label_pc_1c2d, !insn.addr !454

dec_label_pc_1c2d:                                ; preds = %dec_label_pc_1c25
  %1 = ashr i32 %arg1, 31, !insn.addr !455
  %2 = zext i32 %arg1 to i64, !insn.addr !456
  %3 = zext i32 %1 to i64, !insn.addr !456
  %4 = mul i64 %3, 4294967296, !insn.addr !456
  %5 = or i64 %4, %2, !insn.addr !456
  %6 = zext i32 %arg2 to i64, !insn.addr !456
  %7 = sdiv i64 %5, %6, !insn.addr !456
  %8 = trunc i64 %7 to i32, !insn.addr !456
  ret i32 %8, !insn.addr !457

dec_label_pc_1c35:                                ; preds = %dec_label_pc_1c25
  ret i32 0, !insn.addr !458
}

define i32 @op_mod(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c38:
  %0 = icmp eq i32 %arg2, 0, !insn.addr !459
  br i1 %0, label %dec_label_pc_1c4a, label %dec_label_pc_1c40, !insn.addr !460

dec_label_pc_1c40:                                ; preds = %dec_label_pc_1c38
  %1 = ashr i32 %arg1, 31, !insn.addr !461
  %2 = zext i32 %arg1 to i64, !insn.addr !462
  %3 = zext i32 %1 to i64, !insn.addr !462
  %4 = mul i64 %3, 4294967296, !insn.addr !462
  %5 = or i64 %4, %2, !insn.addr !462
  %6 = zext i32 %arg2 to i64, !insn.addr !462
  %7 = srem i64 %5, %6, !insn.addr !462
  %8 = trunc i64 %7 to i32, !insn.addr !462
  ret i32 %8, !insn.addr !463

dec_label_pc_1c4a:                                ; preds = %dec_label_pc_1c38
  ret i32 0, !insn.addr !464
}

define i32 @op_and(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c4d:
  %0 = and i32 %arg2, %arg1, !insn.addr !465
  ret i32 %0, !insn.addr !466
}

define i32 @op_or(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c56:
  %0 = or i32 %arg2, %arg1, !insn.addr !467
  ret i32 %0, !insn.addr !468
}

define i32 @op_xor(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1c5f:
  %0 = xor i32 %arg2, %arg1, !insn.addr !469
  ret i32 %0, !insn.addr !470
}

define i32 @op_shl(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_1c68:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = shl i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !471
}

define i32 @op_shr(i32 %arg1, i8 %arg2) local_unnamed_addr {
dec_label_pc_1c73:
  %0 = urem i8 %arg2, 32
  %1 = zext i8 %0 to i32
  %storemerge = ashr i32 %arg1, %1
  ret i32 %storemerge, !insn.addr !472
}

define i32 @conditional_func_ptr(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1c7e:
  ret i32 %arg3, !insn.addr !473
}

define i32 @state_machine(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1cbd:
  %0 = icmp ult i32 %arg3, 3
  %spec.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.select, !insn.addr !474
}

define i32 @function_1cee() local_unnamed_addr {
dec_label_pc_1cee:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 99, !insn.addr !475
  %3 = zext i1 %2 to i32, !insn.addr !476
  %4 = mul i32 %3, 2, !insn.addr !477
  %5 = or i32 %4, 1, !insn.addr !478
  %6 = icmp eq i32 %1, 2, !insn.addr !479
  %7 = select i1 %6, i32 2, i32 %5, !insn.addr !480
  ret i32 %7, !insn.addr !481

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
}

define i32 @function_1d00() local_unnamed_addr {
dec_label_pc_1d00:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !482
  %3 = icmp eq i1 %2, false, !insn.addr !483
  %4 = select i1 %3, i32 3, i32 0, !insn.addr !484
  ret i32 %4, !insn.addr !485
}

define i32 @fsm_func_table(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1d0b:
  %0 = icmp ult i32 %arg3, 3
  %spec.store.select = select i1 %0, i32 %arg3, i32 3
  ret i32 %spec.store.select, !insn.addr !486
}

define i32 @state_idle(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d3e:
  %0 = icmp eq i32 %arg1, 1, !insn.addr !487
  %1 = zext i1 %0 to i32, !insn.addr !488
  ret i32 %1, !insn.addr !489
}

define i32 @state_processing(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d49:
  %0 = icmp eq i32 %arg1, 99, !insn.addr !490
  %1 = zext i1 %0 to i32, !insn.addr !491
  %2 = mul i32 %1, 2, !insn.addr !492
  %3 = or i32 %2, 1, !insn.addr !493
  %4 = icmp eq i32 %arg1, 2, !insn.addr !494
  %5 = select i1 %4, i32 2, i32 %3, !insn.addr !495
  ret i32 %5, !insn.addr !496
}

define i32 @state_done() local_unnamed_addr {
dec_label_pc_1d5f:
  ret i32 2, !insn.addr !497
}

define i32 @state_error(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d65:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !498
  %1 = icmp eq i1 %0, false, !insn.addr !499
  %2 = select i1 %1, i32 3, i32 0, !insn.addr !500
  ret i32 %2, !insn.addr !501
}

define i32 @computed_goto(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d73:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = icmp ult i32 %1, 4
  br i1 %2, label %dec_label_pc_1d8c, label %dec_label_pc_1d88, !insn.addr !502

dec_label_pc_1d88:                                ; preds = %dec_label_pc_1d73
  ret i32 -1, !insn.addr !503

dec_label_pc_1d8c:                                ; preds = %dec_label_pc_1d73
  %3 = add i32 %arg1, 12936, !insn.addr !504
  ret i32 %3, !insn.addr !505

; uselistorder directives
  uselistorder i32 4, { 4, 0, 1, 2, 5, 7, 3, 6, 8 }
}

define i32 @function_1d93() local_unnamed_addr {
dec_label_pc_1d93:
  ret i32 0, !insn.addr !506
}

define i32 @function_1d96() local_unnamed_addr {
dec_label_pc_1d96:
  ret i32 20, !insn.addr !507
}

define i32 @function_1d9c() local_unnamed_addr {
dec_label_pc_1d9c:
  ret i32 30, !insn.addr !508
}

define i32 @function_1da2() local_unnamed_addr {
dec_label_pc_1da2:
  ret i32 10, !insn.addr !509

; uselistorder directives
  uselistorder i32 10, { 0, 3, 4, 5, 2, 1 }
}

define i32 @obfuscated_cf(i32 %arg1) local_unnamed_addr {
dec_label_pc_1da8:
  %0 = mul i32 %arg1, 2, !insn.addr !510
  ret i32 %0, !insn.addr !511
}

define i32 @opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_1daf:
  %0 = mul i32 %arg1, 2, !insn.addr !512
  ret i32 %0, !insn.addr !513
}

define i32 @overlapped_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_1db6:
  %0 = urem i32 %arg1, 2
  %1 = icmp eq i32 %0, 0, !insn.addr !514
  %2 = icmp eq i1 %1, false, !insn.addr !515
  br i1 %2, label %dec_label_pc_1dc9, label %dec_label_pc_1dbf, !insn.addr !515

dec_label_pc_1dbf:                                ; preds = %dec_label_pc_1db6
  %3 = icmp slt i32 %arg1, 0
  %4 = zext i1 %3 to i32, !insn.addr !516
  %5 = add i32 %4, %arg1, !insn.addr !517
  %6 = ashr i32 %5, 1, !insn.addr !518
  ret i32 %6, !insn.addr !519

dec_label_pc_1dc9:                                ; preds = %dec_label_pc_1db6
  %7 = mul i32 %arg1, 3, !insn.addr !520
  %8 = add i32 %7, 1, !insn.addr !521
  ret i32 %8, !insn.addr !522

; uselistorder directives
  uselistorder i32 3, { 5, 6, 3, 4, 7, 1, 2, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0 }
  uselistorder i32 %arg1, { 3, 2, 0, 1 }
}

define i32 @test_control_flow_l3(i32 %arg1) local_unnamed_addr {
dec_label_pc_1dce:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 2112, !insn.addr !523
  %3 = inttoptr i32 %2 to i8*, !insn.addr !524
  %4 = call i32 @puts(i8* %3), !insn.addr !525
  %5 = call i32 @non_local_jump(i32 5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !526
  %6 = add i32 %1, 1723, !insn.addr !527
  %7 = inttoptr i32 %6 to i8*, !insn.addr !528
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !529
  %9 = call i32 @non_local_jump(i32 -5, i32 ptrtoint (i32* @0 to i32)), !insn.addr !530
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !531
  %11 = add i32 %1, 1754, !insn.addr !532
  %12 = inttoptr i32 %11 to i8*, !insn.addr !533
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !534
  %14 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !535
  %15 = add i32 %1, 1784, !insn.addr !536
  %16 = inttoptr i32 %15 to i8*, !insn.addr !537
  %17 = call i32 (i8*, ...) @printf(i8* %16), !insn.addr !538
  %18 = add i32 %1, 1817, !insn.addr !539
  %19 = inttoptr i32 %18 to i8*, !insn.addr !540
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !541
  %21 = add i32 %1, 1854, !insn.addr !542
  %22 = inttoptr i32 %21 to i8*, !insn.addr !543
  %23 = call i32 (i8*, ...) @printf(i8* %22), !insn.addr !544
  %24 = add i32 %1, 1884, !insn.addr !545
  %25 = inttoptr i32 %24 to i8*, !insn.addr !546
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !547
  %27 = call i32 @computed_goto(i32 2), !insn.addr !548
  %28 = add i32 %1, 1915, !insn.addr !549
  %29 = inttoptr i32 %28 to i8*, !insn.addr !550
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !551
  %31 = add i32 %1, 1945, !insn.addr !552
  %32 = inttoptr i32 %31 to i8*, !insn.addr !553
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !554
  %34 = add i32 %1, 1975, !insn.addr !555
  %35 = inttoptr i32 %34 to i8*, !insn.addr !556
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !557
  %37 = add i32 %1, 2008, !insn.addr !558
  %38 = inttoptr i32 %37 to i8*, !insn.addr !559
  %39 = call i32 (i8*, ...) @printf(i8* %38), !insn.addr !560
  ret i32 %39, !insn.addr !561

; uselistorder directives
  uselistorder i32 2, { 28, 15, 1, 2, 14, 21, 22, 3, 23, 24, 4, 5, 6, 25, 7, 8, 26, 31, 16, 32, 29, 30, 33, 34, 9, 17, 10, 27, 11, 18, 35, 36, 19, 12, 20, 0, 13 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i32 (i32, i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_1efc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @test_control_flow_l1(i32 %1), !insn.addr !562
  %3 = call i32 @test_control_flow_l2(i32 ptrtoint (i32* @0 to i32)), !insn.addr !563
  %4 = call i32 @test_control_flow_l3(i32 ptrtoint (i32* @0 to i32)), !insn.addr !564
  ret i32 0, !insn.addr !565

; uselistorder directives
  uselistorder i32 0, { 29, 35, 37, 30, 38, 50, 39, 49, 31, 51, 32, 52, 53, 54, 55, 56, 57, 0, 1, 2, 3, 4, 5, 6, 36, 40, 7, 8, 58, 59, 60, 9, 10, 11, 12, 13, 14, 15, 61, 62, 63, 41, 64, 16, 17, 18, 19, 20, 65, 66, 67, 68, 69, 70, 21, 22, 23, 46, 42, 43, 24, 25, 71, 33, 26, 27, 47, 72, 73, 28, 48, 44, 45, 74, 75, 76, 77, 78, 34 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_1f30:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !566
  %ebx.0.reg2mem = alloca i32, !insn.addr !566
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !567
  %3 = add i32 %1, 12159, !insn.addr !568
  %4 = inttoptr i32 %3 to i32*, !insn.addr !568
  %5 = load i32, i32* %4, align 4, !insn.addr !568
  %6 = icmp eq i32 %5, -1, !insn.addr !569
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !570
  store i32 -1, i32* %merge.reg2mem, !insn.addr !570
  br i1 %6, label %dec_label_pc_1f6d, label %dec_label_pc_1f60, !insn.addr !570

dec_label_pc_1f60:                                ; preds = %dec_label_pc_1f30, %dec_label_pc_1f60
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !571
  %8 = inttoptr i32 %7 to i32*, !insn.addr !571
  %9 = load i32, i32* %8, align 4, !insn.addr !571
  %10 = icmp eq i32 %9, -1, !insn.addr !572
  %11 = icmp eq i1 %10, false, !insn.addr !573
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !573
  store i32 %9, i32* %merge.reg2mem, !insn.addr !573
  br i1 %11, label %dec_label_pc_1f60, label %dec_label_pc_1f6d, !insn.addr !573

dec_label_pc_1f6d:                                ; preds = %dec_label_pc_1f60, %dec_label_pc_1f30
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !574

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 34, 6, 7, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 2, 19, 20, 21, 22, 23, 24, 3, 25, 26, 27, 28, 29, 30, 0, 31, 1, 32, 4, 33 }
  uselistorder i32 -1, { 11, 0, 12, 5, 9, 13, 1, 10, 19, 20, 14, 6, 2, 3, 4, 21, 7, 15, 16, 8, 17, 18 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder i32 ptrtoint (i32* @0 to i32), { 0, 1, 2, 3, 4, 6, 7, 5, 8, 9, 10 }
  uselistorder label %dec_label_pc_1f60, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_1f7c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !575
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !576
  ret i32 %3, !insn.addr !577

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 21, 23, 22, 20, 19, 18, 112, 113, 17, 90, 91, 16, 92, 15, 24, 14, 114, 115, 116, 117, 110, 109, 29, 28, 27, 26, 25, 13, 118, 93, 32, 31, 30, 12, 119, 120, 121, 94, 36, 35, 34, 33, 39, 38, 37, 40, 43, 44, 42, 41, 122, 46, 45, 123, 95, 49, 48, 47, 88, 124, 96, 55, 54, 53, 52, 51, 50, 97, 125, 56, 126, 127, 98, 58, 57, 128, 129, 63, 62, 61, 60, 59, 11, 10, 130, 64, 66, 68, 99, 69, 67, 65, 100, 131, 71, 101, 73, 72, 70, 132, 76, 75, 74, 9, 102, 133, 78, 77, 134, 79, 82, 81, 80, 103, 89, 84, 83, 104, 105, 85, 106, 107, 86, 108, 8, 7, 87, 6, 5, 4, 3, 111, 2, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare void @__asm_rep_movsd_memcpy(i8*, i8*, i32) local_unnamed_addr

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
!36 = !{i64 4632}
!37 = !{i64 4636}
!38 = !{i64 4638}
!39 = !{i64 4642}
!40 = !{i64 4647}
!41 = !{i64 4649}
!42 = !{i64 4654}
!43 = !{i64 4657}
!44 = !{i64 4662}
!45 = !{i64 4665}
!46 = !{i64 4678}
!47 = !{i64 4681}
!48 = !{i64 4685}
!49 = !{i64 4688}
!50 = !{i64 4689}
!51 = !{i64 4694}
!52 = !{i64 4701}
!53 = !{i64 4708}
!54 = !{i64 4715}
!55 = !{i64 4719}
!56 = !{i64 4724}
!57 = !{i64 4727}
!58 = !{i64 4730}
!59 = !{i64 4733}
!60 = !{i64 4757}
!61 = !{i64 4763}
!62 = !{i64 4767}
!63 = !{i64 4770}
!64 = !{i64 4775}
!65 = !{i64 4778}
!66 = !{i64 4784}
!67 = !{i64 4787}
!68 = !{i64 4790}
!69 = !{i64 4810}
!70 = !{i64 4812}
!71 = !{i64 4819}
!72 = !{i64 4823}
!73 = !{i64 4834}
!74 = !{i64 4837}
!75 = !{i64 4840}
!76 = !{i64 4843}
!77 = !{i64 4848}
!78 = !{i64 4849}
!79 = !{i64 4852}
!80 = !{i64 4857}
!81 = !{i64 4860}
!82 = !{i64 4863}
!83 = !{i64 4864}
!84 = !{i64 4880}
!85 = !{i64 4883}
!86 = !{i64 4890}
!87 = !{i64 4893}
!88 = !{i64 4895}
!89 = !{i64 4899}
!90 = !{i64 4906}
!91 = !{i64 4911}
!92 = !{i64 4914}
!93 = !{i64 4916}
!94 = !{i64 4923}
!95 = !{i64 4924}
!96 = !{i64 4927}
!97 = !{i64 4928}
!98 = !{i64 4934}
!99 = !{i64 4936}
!100 = !{i64 4947}
!101 = !{i64 4951}
!102 = !{i64 4954}
!103 = !{i64 4957}
!104 = !{i64 4959}
!105 = !{i64 4960}
!106 = !{i64 4968}
!107 = !{i64 4979}
!108 = !{i64 4980}
!109 = !{i64 4988}
!110 = !{i64 4995}
!111 = !{i64 4999}
!112 = !{i64 5002}
!113 = !{i64 5005}
!114 = !{i64 5007}
!115 = !{i64 5008}
!116 = !{i64 5016}
!117 = !{i64 5022}
!118 = !{i64 5035}
!119 = !{i64 5038}
!120 = !{i64 5043}
!121 = !{i64 5046}
!122 = !{i64 5047}
!123 = !{i64 5062}
!124 = !{i64 5074}
!125 = !{i64 5075}
!126 = !{i64 5077}
!127 = !{i64 5079}
!128 = !{i64 5080}
!129 = !{i64 5083}
!130 = !{i64 5086}
!131 = !{i64 5091}
!132 = !{i64 5092}
!133 = !{i64 5099}
!134 = !{i64 5110}
!135 = !{i64 5113}
!136 = !{i64 5115}
!137 = !{i64 5117}
!138 = !{i64 5123}
!139 = !{i64 5124}
!140 = !{i64 5127}
!141 = !{i64 5134}
!142 = !{i64 5142}
!143 = !{i64 5144}
!144 = !{i64 5147}
!145 = !{i64 5150}
!146 = !{i64 5152}
!147 = !{i64 5153}
!148 = !{i64 5160}
!149 = !{i64 5169}
!150 = !{i64 5176}
!151 = !{i64 5177}
!152 = !{i64 5180}
!153 = !{i64 5188}
!154 = !{i64 5197}
!155 = !{i64 5199}
!156 = !{i64 5202}
!157 = !{i64 5222}
!158 = !{i64 5228}
!159 = !{i64 5231}
!160 = !{i64 5245}
!161 = !{i64 5251}
!162 = !{i64 5254}
!163 = !{i64 5268}
!164 = !{i64 5274}
!165 = !{i64 5277}
!166 = !{i64 5293}
!167 = !{i64 5298}
!168 = !{i64 5304}
!169 = !{i64 5315}
!170 = !{i64 5329}
!171 = !{i64 5334}
!172 = !{i64 5340}
!173 = !{i64 5351}
!174 = !{i64 5368}
!175 = !{i64 5380}
!176 = !{i64 5394}
!177 = !{i64 5400}
!178 = !{i64 5403}
!179 = !{i64 5412}
!180 = !{i64 5418}
!181 = !{i64 5421}
!182 = !{i64 5426}
!183 = !{i64 5432}
!184 = !{i64 5443}
!185 = !{i64 5457}
!186 = !{i64 5463}
!187 = !{i64 5466}
!188 = !{i64 5471}
!189 = !{i64 5477}
!190 = !{i64 5488}
!191 = !{i64 5497}
!192 = !{i64 5503}
!193 = !{i64 5506}
!194 = !{i64 5520}
!195 = !{i64 5526}
!196 = !{i64 5529}
!197 = !{i64 5534}
!198 = !{i64 5540}
!199 = !{i64 5551}
!200 = !{i64 5560}
!201 = !{i64 5566}
!202 = !{i64 5569}
!203 = !{i64 5574}
!204 = !{i64 5580}
!205 = !{i64 5591}
!206 = !{i64 5596}
!207 = !{i64 5602}
!208 = !{i64 5613}
!209 = !{i64 5618}
!210 = !{i64 5624}
!211 = !{i64 5635}
!212 = !{i64 5651}
!213 = !{i64 5656}
!214 = !{i64 5662}
!215 = !{i64 5673}
!216 = !{i64 5682}
!217 = !{i64 5688}
!218 = !{i64 5691}
!219 = !{i64 5707}
!220 = !{i64 5712}
!221 = !{i64 5718}
!222 = !{i64 5729}
!223 = !{i64 5743}
!224 = !{i64 5749}
!225 = !{i64 5752}
!226 = !{i64 5768}
!227 = !{i64 5780}
!228 = !{i64 5781}
!229 = !{i64 5798}
!230 = !{i64 5811}
!231 = !{i64 5813}
!232 = !{i64 5815}
!233 = !{i64 5818}
!234 = !{i64 5820}
!235 = !{i64 5821}
!236 = !{i64 5824}
!237 = !{i64 5826}
!238 = !{i64 5827}
!239 = !{i64 5830}
!240 = !{i64 5833}
!241 = !{i64 5836}
!242 = !{i64 5840}
!243 = !{i64 5842}
!244 = !{i64 5847}
!245 = !{i64 5848}
!246 = !{i64 5854}
!247 = !{i64 5856}
!248 = !{i64 5850}
!249 = !{i64 5859}
!250 = !{i64 5861}
!251 = !{i64 5862}
!252 = !{i64 5867}
!253 = !{i64 5869}
!254 = !{i64 5875}
!255 = !{i64 5880}
!256 = !{i64 5881}
!257 = !{i64 5885}
!258 = !{i64 5887}
!259 = !{i64 5897}
!260 = !{i64 5899}
!261 = !{i64 5904}
!262 = !{i64 5905}
!263 = !{i64 5908}
!264 = !{i64 5911}
!265 = !{i64 5920}
!266 = !{i64 5925}
!267 = !{i64 5927}
!268 = !{i64 5929}
!269 = !{i64 5932}
!270 = !{i64 5965}
!271 = !{i64 5967}
!272 = !{i64 5970}
!273 = !{i64 5985}
!274 = !{i64 6082}
!275 = !{i64 6083}
!276 = !{i64 6091}
!277 = !{i64 6099}
!278 = !{i64 6102}
!279 = !{i64 6103}
!280 = !{i64 6106}
!281 = !{i64 6113}
!282 = !{i64 6115}
!283 = !{i64 6109}
!284 = !{i64 6128}
!285 = !{i64 6130}
!286 = !{i64 6134}
!287 = !{i64 6135}
!288 = !{i64 6142}
!289 = !{i64 6148}
!290 = !{i64 6150}
!291 = !{i64 6153}
!292 = !{i64 6156}
!293 = !{i64 6159}
!294 = !{i64 6164}
!295 = !{i64 6171}
!296 = !{i64 6172}
!297 = !{i64 6178}
!298 = !{i64 6181}
!299 = !{i64 6174}
!300 = !{i64 6183}
!301 = !{i64 6184}
!302 = !{i64 6187}
!303 = !{i64 6194}
!304 = !{i64 6195}
!305 = !{i64 6205}
!306 = !{i64 6207}
!307 = !{i64 6210}
!308 = !{i64 6218}
!309 = !{i64 6220}
!310 = !{i64 6221}
!311 = !{i64 6232}
!312 = !{i64 6234}
!313 = !{i64 6237}
!314 = !{i64 6245}
!315 = !{i64 6247}
!316 = !{i64 6248}
!317 = !{i64 6258}
!318 = !{i64 6260}
!319 = !{i64 6263}
!320 = !{i64 6265}
!321 = !{i64 6269}
!322 = !{i64 6272}
!323 = !{i64 6274}
!324 = !{i64 6276}
!325 = !{i64 6279}
!326 = !{i64 6281}
!327 = !{i64 6284}
!328 = !{i64 6286}
!329 = !{i64 6289}
!330 = !{i64 6292}
!331 = !{i64 6294}
!332 = !{i64 6297}
!333 = !{i64 6303}
!334 = !{i64 6305}
!335 = !{i64 6309}
!336 = !{i64 6310}
!337 = !{i64 6342}
!338 = !{i64 6391}
!339 = !{i64 6396}
!340 = !{i64 6398}
!341 = !{i64 6403}
!342 = !{i64 6406}
!343 = !{i64 6411}
!344 = !{i64 6413}
!345 = !{i64 6414}
!346 = !{i64 6439}
!347 = !{i64 6449}
!348 = !{i64 6459}
!349 = !{i64 6461}
!350 = !{i64 6462}
!351 = !{i64 6464}
!352 = !{i64 6479}
!353 = !{i64 6480}
!354 = !{i64 6502}
!355 = !{i64 6508}
!356 = !{i64 6509}
!357 = !{i64 6519}
!358 = !{i64 6528}
!359 = !{i64 6530}
!360 = !{i64 6532}
!361 = !{i64 6536}
!362 = !{i64 6538}
!363 = !{i64 6539}
!364 = !{i64 6542}
!365 = !{i64 6544}
!366 = !{i64 6548}
!367 = !{i64 6551}
!368 = !{i64 6554}
!369 = !{i64 6565}
!370 = !{i64 6572}
!371 = !{i64 6573}
!372 = !{i64 6589}
!373 = !{i64 6600}
!374 = !{i64 6601}
!375 = !{i64 6606}
!376 = !{i64 6624}
!377 = !{i64 6631}
!378 = !{i64 6632}
!379 = !{i64 6640}
!380 = !{i64 6648}
!381 = !{i64 6649}
!382 = !{i64 6660}
!383 = !{i64 6671}
!384 = !{i64 6679}
!385 = !{i64 6687}
!386 = !{i64 6688}
!387 = !{i64 6699}
!388 = !{i64 6707}
!389 = !{i64 6724}
!390 = !{i64 6737}
!391 = !{i64 6745}
!392 = !{i64 6752}
!393 = !{i64 6753}
!394 = !{i64 6797}
!395 = !{i64 6804}
!396 = !{i64 6805}
!397 = !{i64 6813}
!398 = !{i64 6821}
!399 = !{i64 6822}
!400 = !{i64 6838}
!401 = !{i64 6847}
!402 = !{i64 6848}
!403 = !{i64 6851}
!404 = !{i64 6861}
!405 = !{i64 6868}
!406 = !{i64 6869}
!407 = !{i64 6882}
!408 = !{i64 6889}
!409 = !{i64 6890}
!410 = !{i64 6898}
!411 = !{i64 6905}
!412 = !{i64 6906}
!413 = !{i64 6914}
!414 = !{i64 6922}
!415 = !{i64 6923}
!416 = !{i64 6936}
!417 = !{i64 6943}
!418 = !{i64 6944}
!419 = !{i64 6952}
!420 = !{i64 6959}
!421 = !{i64 6960}
!422 = !{i64 6970}
!423 = !{i64 6978}
!424 = !{i64 6986}
!425 = !{i64 6987}
!426 = !{i64 6999}
!427 = !{i64 7000}
!428 = !{i64 7019}
!429 = !{i64 7027}
!430 = !{i64 7032}
!431 = !{i64 7034}
!432 = !{i64 7045}
!433 = !{i64 7047}
!434 = !{i64 7049}
!435 = !{i64 7052}
!436 = !{i64 7054}
!437 = !{i64 7061}
!438 = !{i64 7073}
!439 = !{i64 7089}
!440 = !{i64 7098}
!441 = !{i64 7101}
!442 = !{i64 7109}
!443 = !{i64 7115}
!444 = !{i64 7117}
!445 = !{i64 7120}
!446 = !{i64 7153}
!447 = !{i64 7181}
!448 = !{i64 7185}
!449 = !{i64 7190}
!450 = !{i64 7194}
!451 = !{i64 7199}
!452 = !{i64 7204}
!453 = !{i64 7209}
!454 = !{i64 7211}
!455 = !{i64 7217}
!456 = !{i64 7218}
!457 = !{i64 7220}
!458 = !{i64 7223}
!459 = !{i64 7228}
!460 = !{i64 7230}
!461 = !{i64 7236}
!462 = !{i64 7237}
!463 = !{i64 7241}
!464 = !{i64 7244}
!465 = !{i64 7249}
!466 = !{i64 7253}
!467 = !{i64 7258}
!468 = !{i64 7262}
!469 = !{i64 7267}
!470 = !{i64 7271}
!471 = !{i64 7282}
!472 = !{i64 7293}
!473 = !{i64 7356}
!474 = !{i64 7389}
!475 = !{i64 7408}
!476 = !{i64 7411}
!477 = !{i64 7414}
!478 = !{i64 7416}
!479 = !{i64 7417}
!480 = !{i64 7420}
!481 = !{i64 7423}
!482 = !{i64 7426}
!483 = !{i64 7428}
!484 = !{i64 7431}
!485 = !{i64 7434}
!486 = !{i64 7485}
!487 = !{i64 7488}
!488 = !{i64 7493}
!489 = !{i64 7496}
!490 = !{i64 7503}
!491 = !{i64 7506}
!492 = !{i64 7509}
!493 = !{i64 7511}
!494 = !{i64 7512}
!495 = !{i64 7515}
!496 = !{i64 7518}
!497 = !{i64 7524}
!498 = !{i64 7527}
!499 = !{i64 7532}
!500 = !{i64 7535}
!501 = !{i64 7538}
!502 = !{i64 7558}
!503 = !{i64 7563}
!504 = !{i64 7545}
!505 = !{i64 7564}
!506 = !{i64 7573}
!507 = !{i64 7579}
!508 = !{i64 7585}
!509 = !{i64 7591}
!510 = !{i64 7596}
!511 = !{i64 7598}
!512 = !{i64 7603}
!513 = !{i64 7605}
!514 = !{i64 7610}
!515 = !{i64 7613}
!516 = !{i64 7617}
!517 = !{i64 7620}
!518 = !{i64 7622}
!519 = !{i64 7624}
!520 = !{i64 7625}
!521 = !{i64 7628}
!522 = !{i64 7629}
!523 = !{i64 7648}
!524 = !{i64 7654}
!525 = !{i64 7657}
!526 = !{i64 7669}
!527 = !{i64 7678}
!528 = !{i64 7684}
!529 = !{i64 7687}
!530 = !{i64 7699}
!531 = !{i64 7711}
!532 = !{i64 7725}
!533 = !{i64 7731}
!534 = !{i64 7734}
!535 = !{i64 7750}
!536 = !{i64 7755}
!537 = !{i64 7761}
!538 = !{i64 7772}
!539 = !{i64 7781}
!540 = !{i64 7787}
!541 = !{i64 7790}
!542 = !{i64 7795}
!543 = !{i64 7801}
!544 = !{i64 7812}
!545 = !{i64 7826}
!546 = !{i64 7832}
!547 = !{i64 7835}
!548 = !{i64 7844}
!549 = !{i64 7853}
!550 = !{i64 7859}
!551 = !{i64 7862}
!552 = !{i64 7871}
!553 = !{i64 7877}
!554 = !{i64 7880}
!555 = !{i64 7889}
!556 = !{i64 7895}
!557 = !{i64 7898}
!558 = !{i64 7903}
!559 = !{i64 7909}
!560 = !{i64 7920}
!561 = !{i64 7931}
!562 = !{i64 7948}
!563 = !{i64 7953}
!564 = !{i64 7958}
!565 = !{i64 7969}
!566 = !{i64 7984}
!567 = !{i64 7988}
!568 = !{i64 7999}
!569 = !{i64 8005}
!570 = !{i64 8008}
!571 = !{i64 8034}
!572 = !{i64 8040}
!573 = !{i64 8043}
!574 = !{i64 8049}
!575 = !{i64 8068}
!576 = !{i64 8079}
!577 = !{i64 8088}
