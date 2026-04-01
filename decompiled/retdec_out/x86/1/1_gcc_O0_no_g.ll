source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_1f4 = global i32 5
@global_var_17ec = local_unnamed_addr constant i32 504
@global_var_2694 = constant i32 856180107
@global_var_4112 = local_unnamed_addr constant i32 42272782
@global_var_40b9 = local_unnamed_addr constant i32 67945840
@global_var_4074 = local_unnamed_addr constant i32 222429829
@global_var_404 = global i32 0
@global_var_403c = local_unnamed_addr constant i32* @global_var_404
@global_var_4003 = local_unnamed_addr constant i32 493568
@global_var_3fc8 = local_unnamed_addr constant i32 -6122
@global_var_3f5d = local_unnamed_addr constant i32 469762052
@global_var_3f23 = local_unnamed_addr constant i32 436224
@global_var_3f02 = local_unnamed_addr constant i32 109576192
@global_var_3eea = local_unnamed_addr constant i32 1703935
@global_var_3ecb = local_unnamed_addr constant i32 10751
@global_var_3e5b = local_unnamed_addr constant i32 263180
@global_var_3e40 = local_unnamed_addr constant i32 28
@global_var_3dea = constant i32 42272782
@global_var_3ab2 = constant i32 1835008
@global_var_3a3b = local_unnamed_addr constant i32 -2420224
@global_var_3a09 = local_unnamed_addr constant i32 84754946
@global_var_39ee = local_unnamed_addr constant i32 67945835
@global_var_39d5 = local_unnamed_addr constant i32 1543503872
@global_var_39bb = local_unnamed_addr constant i32 -2488064
@global_var_3994 = local_unnamed_addr constant i32 28
@global_var_396b = local_unnamed_addr constant i32 -982842099
@global_var_3952 = local_unnamed_addr constant i32 1835008
@global_var_3939 = local_unnamed_addr constant i32 -1728053248
@global_var_3920 = local_unnamed_addr constant i32 31
@global_var_3901 = local_unnamed_addr constant i32 0
@global_var_38df = local_unnamed_addr constant i32 4096
@global_var_382a = constant i32 -224198656
@global_var_37de = local_unnamed_addr constant i32 147914751
@global_var_3750 = local_unnamed_addr constant i32 1672
@global_var_3733 = local_unnamed_addr constant i32 -1519616
@global_var_3701 = local_unnamed_addr constant i32 -1342177275
@global_var_36e9 = local_unnamed_addr constant i32 -1728053244
@global_var_36c1 = local_unnamed_addr constant i32 67108868
@global_var_3645 = local_unnamed_addr constant i32 -1660944422
@global_var_35a1 = local_unnamed_addr constant [14 x i8] c"c_table): %d\0A\00"
@global_var_3569 = local_unnamed_addr constant [8 x i8] c"r): %d\0A\00"
@global_var_3539 = local_unnamed_addr constant [16 x i8] c"ump_table): %d\0A\00"
@global_var_34fe = constant [9 x i8] c"mp): %d\0A\00"
@global_var_330b = local_unnamed_addr constant i32 759579392
@global_var_32de = local_unnamed_addr constant i32 -410929690
@global_var_32bf = constant i32 -4306689
@global_var_326f = local_unnamed_addr constant [28 x i8] c"-L1-19 (goto_backward): %d\0A\00"
@0 = external global i32
@1 = internal constant [27 x i8] c"\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3039 = constant i8* getelementptr inbounds ([27 x i8], [27 x i8]* @1, i32 0, i32 0)
@global_var_3e8 = global i1 true

define i32 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !0
  %3 = call i32 @frame_dummy(), !insn.addr !1
  %4 = call i32 @__do_global_ctors_aux(), !insn.addr !2
  ret i32 %4, !insn.addr !3
}

define void @function_10a0(i32* %d) local_unnamed_addr {
dec_label_pc_10a0:
  call void @__cxa_finalize(i32* %d), !insn.addr !4
  ret void, !insn.addr !4
}

define i32 @function_10b0(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @function_10c0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define void @function_10d0([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_10d0:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !7
  ret void, !insn.addr !7
}

define i32 @function_10e0([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_10f0() local_unnamed_addr {
dec_label_pc_10f0:
  call void @__stack_chk_fail(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @function_1100(i8* %s) local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_1110:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_113c(i32 %2), !insn.addr !11
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 20180, !insn.addr !12
  %6 = inttoptr i32 %5 to i32*, !insn.addr !12
  %7 = load i32, i32* %6, align 4, !insn.addr !12
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !13
  %9 = call i32 @__asm_hlt(), !insn.addr !14
  unreachable, !insn.addr !14

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_113c(i32 %arg1) local_unnamed_addr {
dec_label_pc_113c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1140:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !16
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !17
  %3 = add i32 %1, 20147, !insn.addr !18
  ret i32 %3, !insn.addr !19
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1190:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !20
  ret i32 0, !insn.addr !21
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11e0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !22
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !23
  %3 = add i32 %1, 20019, !insn.addr !24
  %4 = inttoptr i32 %3 to i8*, !insn.addr !24
  %5 = load i8, i8* %4, align 1, !insn.addr !24
  %6 = icmp eq i8 %5, 0, !insn.addr !24
  %7 = icmp eq i1 %6, false, !insn.addr !25
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !25
  br i1 %7, label %dec_label_pc_1262, label %dec_label_pc_1201, !insn.addr !25

dec_label_pc_1201:                                ; preds = %dec_label_pc_11e0
  %8 = add i32 %1, 19971, !insn.addr !26
  %9 = inttoptr i32 %8 to i32*, !insn.addr !26
  %10 = load i32, i32* %9, align 4, !insn.addr !26
  %11 = icmp eq i32 %10, 0, !insn.addr !27
  br i1 %11, label %dec_label_pc_121e, label %dec_label_pc_120b, !insn.addr !28

dec_label_pc_120b:                                ; preds = %dec_label_pc_1201
  %12 = add i32 %1, 19991, !insn.addr !29
  %13 = inttoptr i32 %12 to i32*, !insn.addr !29
  %14 = load i32, i32* %13, align 4, !insn.addr !29
  %15 = inttoptr i32 %14 to i32*, !insn.addr !30
  call void @__cxa_finalize(i32* %15), !insn.addr !30
  br label %dec_label_pc_121e, !insn.addr !31

dec_label_pc_121e:                                ; preds = %dec_label_pc_120b, %dec_label_pc_1201
  %16 = call i32 @deregister_tm_clones(), !insn.addr !32
  store i8 1, i8* %4, align 1, !insn.addr !33
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !33
  br label %dec_label_pc_1262, !insn.addr !33

dec_label_pc_1262:                                ; preds = %dec_label_pc_121e, %dec_label_pc_11e0
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !34

; uselistorder directives
  uselistorder i32 %1, { 3, 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1270:
  %0 = call i32 @register_tm_clones(), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1279:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !36
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_127d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !37
}

define i32 @sequential_ops(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_1281:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !38
  %3 = add i32 %arg2, %arg1, !insn.addr !39
  %4 = mul i32 %3, 2, !insn.addr !40
  %5 = sub i32 %4, %arg3, !insn.addr !41
  ret i32 %5, !insn.addr !42
}

define i32 @single_if(i32 %arg1) local_unnamed_addr {
dec_label_pc_12b6:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !43
  %3 = icmp sgt i32 %arg1, 0, !insn.addr !44
  %4 = zext i1 %3 to i32
  %spec.select = shl i32 %arg1, %4
  ret i32 %spec.select, !insn.addr !45

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0 }
}

define i32 @if_else(i32 %arg1) local_unnamed_addr {
dec_label_pc_12d5:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !46
  %3 = icmp sgt i32 %arg1, 0, !insn.addr !47
  %. = zext i1 %3 to i32
  ret i32 %., !insn.addr !48
}

define i32 @nested_if_2(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_12fa:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !49
  %3 = icmp slt i32 %arg1, 1, !insn.addr !50
  br i1 %3, label %dec_label_pc_132b, label %dec_label_pc_1311, !insn.addr !50

dec_label_pc_1311:                                ; preds = %dec_label_pc_12fa
  %4 = icmp sgt i32 %arg2, 0, !insn.addr !51
  %5 = select i1 %4, i32 %arg2, i32 0
  %spec.select = add i32 %5, %arg1
  ret i32 %spec.select

dec_label_pc_132b:                                ; preds = %dec_label_pc_12fa
  ret i32 0, !insn.addr !52
}

define i32 @nested_if_deep(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_132d:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !53
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !54
  %3 = icmp slt i32 %arg1, 1, !insn.addr !55
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !55
  br i1 %3, label %dec_label_pc_1384, label %dec_label_pc_1344, !insn.addr !55

dec_label_pc_1344:                                ; preds = %dec_label_pc_132d
  %4 = icmp slt i32 %arg2, 1, !insn.addr !56
  store i32 1, i32* %eax.0.reg2mem, !insn.addr !56
  br i1 %4, label %dec_label_pc_1384, label %dec_label_pc_134a, !insn.addr !56

dec_label_pc_134a:                                ; preds = %dec_label_pc_1344
  %5 = icmp slt i32 %arg3, 1, !insn.addr !57
  store i32 2, i32* %eax.0.reg2mem, !insn.addr !57
  br i1 %5, label %dec_label_pc_1384, label %dec_label_pc_1350, !insn.addr !57

dec_label_pc_1350:                                ; preds = %dec_label_pc_134a
  %6 = icmp slt i32 %arg4, 1, !insn.addr !58
  store i32 3, i32* %eax.0.reg2mem, !insn.addr !58
  br i1 %6, label %dec_label_pc_1384, label %dec_label_pc_1356, !insn.addr !58

dec_label_pc_1356:                                ; preds = %dec_label_pc_1350
  %7 = icmp slt i32 %arg5, 1, !insn.addr !59
  %. = select i1 %7, i32 4, i32 5
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !60
  br label %dec_label_pc_1384, !insn.addr !60

dec_label_pc_1384:                                ; preds = %dec_label_pc_132d, %dec_label_pc_1344, %dec_label_pc_134a, %dec_label_pc_1350, %dec_label_pc_1356
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !61

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_1384, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %arg1) local_unnamed_addr {
dec_label_pc_1386:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !62
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !63
  %3 = icmp eq i32 %arg1, 0, !insn.addr !64
  %4 = icmp eq i1 %3, false, !insn.addr !65
  store i32 10, i32* %eax.0.reg2mem, !insn.addr !65
  br i1 %4, label %dec_label_pc_13a4, label %dec_label_pc_13c3, !insn.addr !65

dec_label_pc_13a4:                                ; preds = %dec_label_pc_1386
  %5 = icmp eq i32 %arg1, 1, !insn.addr !66
  %6 = icmp eq i1 %5, false, !insn.addr !67
  store i32 20, i32* %eax.0.reg2mem, !insn.addr !67
  br i1 %6, label %dec_label_pc_13b1, label %dec_label_pc_13c3, !insn.addr !67

dec_label_pc_13b1:                                ; preds = %dec_label_pc_13a4
  %7 = icmp eq i32 %arg1, 2, !insn.addr !68
  %8 = icmp eq i1 %7, false, !insn.addr !69
  %. = select i1 %8, i32 -1, i32 30
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_13c3, !insn.addr !70

dec_label_pc_13c3:                                ; preds = %dec_label_pc_13b1, %dec_label_pc_13a4, %dec_label_pc_1386
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !71

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @if_elseif_long(i32 %arg1) local_unnamed_addr {
dec_label_pc_13c5:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !72
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !73
  %3 = icmp eq i32 %arg1, 0, !insn.addr !74
  %4 = icmp eq i1 %3, false, !insn.addr !75
  store i32 100, i32* %eax.0.reg2mem, !insn.addr !75
  br i1 %4, label %dec_label_pc_13e3, label %dec_label_pc_141c, !insn.addr !75

dec_label_pc_13e3:                                ; preds = %dec_label_pc_13c5
  %5 = icmp eq i32 %arg1, 1, !insn.addr !76
  %6 = icmp eq i1 %5, false, !insn.addr !77
  store i32 200, i32* %eax.0.reg2mem, !insn.addr !77
  br i1 %6, label %dec_label_pc_13f0, label %dec_label_pc_141c, !insn.addr !77

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13e3
  %7 = icmp eq i32 %arg1, 2, !insn.addr !78
  %8 = icmp eq i1 %7, false, !insn.addr !79
  store i32 300, i32* %eax.0.reg2mem, !insn.addr !79
  br i1 %8, label %dec_label_pc_13fd, label %dec_label_pc_141c, !insn.addr !79

dec_label_pc_13fd:                                ; preds = %dec_label_pc_13f0
  %9 = icmp eq i32 %arg1, 3, !insn.addr !80
  %10 = icmp eq i1 %9, false, !insn.addr !81
  store i32 400, i32* %eax.0.reg2mem, !insn.addr !81
  br i1 %10, label %dec_label_pc_140a, label %dec_label_pc_141c, !insn.addr !81

dec_label_pc_140a:                                ; preds = %dec_label_pc_13fd
  %11 = icmp eq i32 %arg1, 4, !insn.addr !82
  %12 = icmp eq i1 %11, false, !insn.addr !83
  %. = select i1 %12, i32 -1, i32 ptrtoint (i32* @global_var_1f4 to i32)
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_141c, !insn.addr !84

dec_label_pc_141c:                                ; preds = %dec_label_pc_140a, %dec_label_pc_13fd, %dec_label_pc_13f0, %dec_label_pc_13e3, %dec_label_pc_13c5
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !85

; uselistorder directives
  uselistorder i32 %arg1, { 3, 2, 1, 0, 4 }
}

define i32 @switch_small(i32 %arg1) local_unnamed_addr {
dec_label_pc_141e:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !86
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !87
  %3 = icmp eq i32 %arg1, 3, !insn.addr !88
  store i32 2, i32* %eax.0.reg2mem, !insn.addr !89
  br i1 %3, label %dec_label_pc_148f, label %dec_label_pc_1446, !insn.addr !89

dec_label_pc_1446:                                ; preds = %dec_label_pc_141e
  %4 = icmp sgt i32 %arg1, 3, !insn.addr !90
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !90
  br i1 %4, label %dec_label_pc_148f, label %dec_label_pc_144c, !insn.addr !90

dec_label_pc_144c:                                ; preds = %dec_label_pc_1446
  %5 = icmp eq i32 %arg1, 2, !insn.addr !91
  store i32 50, i32* %eax.0.reg2mem, !insn.addr !92
  br i1 %5, label %dec_label_pc_148f, label %dec_label_pc_1458, !insn.addr !92

dec_label_pc_1458:                                ; preds = %dec_label_pc_144c
  %switch.selectcmp = icmp eq i32 %arg1, 1
  %switch.select = select i1 %switch.selectcmp, i32 5, i32 -1
  %switch.selectcmp3 = icmp eq i32 %arg1, 0
  %switch.select4 = select i1 %switch.selectcmp3, i32 15, i32 %switch.select
  store i32 %switch.select4, i32* %eax.0.reg2mem
  br label %dec_label_pc_148f

dec_label_pc_148f:                                ; preds = %dec_label_pc_1446, %dec_label_pc_1458, %dec_label_pc_141e, %dec_label_pc_144c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !93

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder i32 %arg1, { 0, 1, 3, 2, 4 }
  uselistorder label %dec_label_pc_148f, { 1, 3, 0, 2 }
}

define i32 @switch_large(i32 %arg1) local_unnamed_addr {
dec_label_pc_1491:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !94
  %3 = icmp ult i32 %arg1, 10
  br i1 %3, label %dec_label_pc_14a8, label %dec_label_pc_1500, !insn.addr !95

dec_label_pc_14a8:                                ; preds = %dec_label_pc_1491
  %4 = add i32 %2, 19243, !insn.addr !96
  %5 = mul i32 %arg1, 4, !insn.addr !97
  %6 = add i32 %5, -12224, !insn.addr !98
  %7 = add i32 %6, %4, !insn.addr !98
  %8 = inttoptr i32 %7 to i32*, !insn.addr !98
  %9 = load i32, i32* %8, align 4, !insn.addr !98
  %10 = add i32 %9, %4, !insn.addr !99
  ret i32 %10, !insn.addr !100

dec_label_pc_1500:                                ; preds = %dec_label_pc_1491
  ret i32 -1, !insn.addr !101
}

define i32 @switch_default(i32 %arg1) local_unnamed_addr {
dec_label_pc_1507:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !102
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !103
  %3 = icmp eq i32 %arg1, 3, !insn.addr !104
  store i32 300, i32* %eax.0.reg2mem, !insn.addr !105
  br i1 %3, label %dec_label_pc_154c, label %dec_label_pc_151e, !insn.addr !105

dec_label_pc_151e:                                ; preds = %dec_label_pc_1507
  %4 = icmp sgt i32 %arg1, 3, !insn.addr !106
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !106
  br i1 %4, label %dec_label_pc_154c, label %dec_label_pc_1524, !insn.addr !106

dec_label_pc_1524:                                ; preds = %dec_label_pc_151e
  %switch.selectcmp = icmp eq i32 %arg1, 2
  %switch.select = select i1 %switch.selectcmp, i32 200, i32 0
  %switch.selectcmp1 = icmp eq i32 %arg1, 1
  %switch.select2 = select i1 %switch.selectcmp1, i32 100, i32 %switch.select
  store i32 %switch.select2, i32* %eax.0.reg2mem
  br label %dec_label_pc_154c

dec_label_pc_154c:                                ; preds = %dec_label_pc_151e, %dec_label_pc_1524, %dec_label_pc_1507
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !107

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 200, { 1, 0 }
  uselistorder label %dec_label_pc_154c, { 1, 0, 2 }
}

define i32 @switch_fallthrough(i32 %arg1) local_unnamed_addr {
dec_label_pc_154e:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !108
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !108
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !108
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !109
  %3 = icmp eq i32 %arg1, 3, !insn.addr !110
  store i32 12, i32* %stack_var_-8.0.reg2mem, !insn.addr !111
  br i1 %3, label %dec_label_pc_158c, label %dec_label_pc_156f, !insn.addr !111

dec_label_pc_156f:                                ; preds = %dec_label_pc_154e
  %4 = icmp sgt i32 %arg1, 3, !insn.addr !112
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !112
  br i1 %4, label %dec_label_pc_15a3, label %dec_label_pc_1575, !insn.addr !112

dec_label_pc_1575:                                ; preds = %dec_label_pc_156f
  store i32 0, i32* %stack_var_-8.0.reg2mem
  store i32 0, i32* %stack_var_-8.1.reg2mem
  store i32 -1, i32* %storemerge.reg2mem
  switch i32 %arg1, label %dec_label_pc_15a3 [
    i32 1, label %dec_label_pc_1594
    i32 2, label %dec_label_pc_158c
  ]

dec_label_pc_158c:                                ; preds = %dec_label_pc_154e, %dec_label_pc_1575
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %5 = mul i32 %arg1, 2, !insn.addr !113
  %6 = add i32 %stack_var_-8.0.reload, %5, !insn.addr !114
  store i32 %6, i32* %stack_var_-8.1.reg2mem, !insn.addr !114
  br label %dec_label_pc_1594, !insn.addr !114

dec_label_pc_1594:                                ; preds = %dec_label_pc_1575, %dec_label_pc_158c
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  %7 = add i32 %stack_var_-8.1.reload, %arg1, !insn.addr !115
  store i32 %7, i32* %storemerge.reg2mem, !insn.addr !116
  br label %dec_label_pc_15a3, !insn.addr !116

dec_label_pc_15a3:                                ; preds = %dec_label_pc_1575, %dec_label_pc_156f, %dec_label_pc_1594
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !117

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32 %arg1, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_15a3, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1594, { 1, 0 }
  uselistorder label %dec_label_pc_158c, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %arg1) local_unnamed_addr {
dec_label_pc_15a8:
  %0 = alloca i32
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !118
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !119
  %3 = icmp sgt i32 %arg1, 0, !insn.addr !120
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !120
  br i1 %3, label %dec_label_pc_15cc.lr.ph, label %dec_label_pc_15de, !insn.addr !120

dec_label_pc_15cc.lr.ph:                          ; preds = %dec_label_pc_15a8
  %4 = add i32 %arg1, -1
  %5 = zext i32 %4 to i33
  %6 = add i32 %arg1, -2
  %7 = zext i32 %6 to i33
  %8 = mul i33 %5, %7
  %9 = udiv i33 %8, 2
  %10 = trunc i33 %9 to i32
  %11 = add i32 %4, %10
  store i32 %11, i32* %stack_var_-12.0.lcssa.reg2mem
  br label %dec_label_pc_15de

dec_label_pc_15de:                                ; preds = %dec_label_pc_15cc.lr.ph, %dec_label_pc_15a8
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !121

; uselistorder directives
  uselistorder i32* %stack_var_-12.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_while(i32* %arg1) local_unnamed_addr {
dec_label_pc_15e3:
  %0 = alloca i32
  %stack_var_4.01.reg2mem = alloca i32, !insn.addr !122
  %storemerge2.reg2mem = alloca i32, !insn.addr !122
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !123
  %3 = icmp eq i32* %arg1, null, !insn.addr !124
  %4 = icmp eq i1 %3, false, !insn.addr !125
  br i1 %4, label %dec_label_pc_1600.lr.ph, label %dec_label_pc_1625.thread, !insn.addr !125

dec_label_pc_1600.lr.ph:                          ; preds = %dec_label_pc_15e3
  %5 = ptrtoint i32* %arg1 to i32
  store i32 0, i32* %storemerge2.reg2mem
  store i32 %5, i32* %stack_var_4.01.reg2mem
  br label %dec_label_pc_1600

dec_label_pc_1600:                                ; preds = %dec_label_pc_1600.lr.ph, %dec_label_pc_1600
  %stack_var_4.01.reload = load i32, i32* %stack_var_4.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %6 = sdiv i32 %stack_var_4.01.reload, 10, !insn.addr !126
  %7 = add i32 %storemerge2.reload, 1, !insn.addr !127
  %stack_var_4.01.off = add i32 %stack_var_4.01.reload, 9
  %8 = icmp ult i32 %stack_var_4.01.off, 19
  %9 = icmp eq i1 %8, false, !insn.addr !125
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !125
  store i32 %6, i32* %stack_var_4.01.reg2mem, !insn.addr !125
  br i1 %9, label %dec_label_pc_1600, label %dec_label_pc_1625, !insn.addr !125

dec_label_pc_1625:                                ; preds = %dec_label_pc_1600
  %10 = icmp sgt i32 %7, 1
  %spec.select = select i1 %10, i32 %7, i32 1
  ret i32 %spec.select

dec_label_pc_1625.thread:                         ; preds = %dec_label_pc_15e3
  ret i32 1, !insn.addr !128

; uselistorder directives
  uselistorder i32 %7, { 1, 2, 0 }
  uselistorder i32 %stack_var_4.01.reload, { 1, 0 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_4.01.reg2mem, { 1, 0, 2 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1600, { 1, 0 }
}

define i32 @loop_dowhile(i32* %arg1) local_unnamed_addr {
dec_label_pc_1634:
  %0 = alloca i32
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !129
  %stack_var_4.0.reg2mem = alloca i32, !insn.addr !129
  %1 = load i32, i32* %0
  %2 = ptrtoint i32* %arg1 to i32
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !130
  store i32 %2, i32* %stack_var_4.0.reg2mem, !insn.addr !131
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !131
  br label %dec_label_pc_164f, !insn.addr !131

dec_label_pc_164f:                                ; preds = %dec_label_pc_164f, %dec_label_pc_1634
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %stack_var_4.0.reload = load i32, i32* %stack_var_4.0.reg2mem
  %4 = sdiv i32 %stack_var_4.0.reload, 10, !insn.addr !132
  %5 = add i32 %stack_var_-8.0.reload, 1, !insn.addr !133
  %stack_var_4.0.off = add i32 %stack_var_4.0.reload, 9
  %6 = icmp ult i32 %stack_var_4.0.off, 19
  %7 = icmp eq i1 %6, false, !insn.addr !134
  store i32 %4, i32* %stack_var_4.0.reg2mem, !insn.addr !134
  store i32 %5, i32* %stack_var_-8.0.reg2mem, !insn.addr !134
  br i1 %7, label %dec_label_pc_164f, label %dec_label_pc_1674, !insn.addr !134

dec_label_pc_1674:                                ; preds = %dec_label_pc_164f
  ret i32 %5, !insn.addr !135

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %stack_var_4.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1679:
  %0 = alloca i32
  %stack_var_-16.1.lcssa.reg2mem = alloca i32, !insn.addr !136
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !137
  %3 = icmp sgt i32 %arg1, 0, !insn.addr !138
  store i32 0, i32* %stack_var_-16.1.lcssa.reg2mem, !insn.addr !138
  br i1 %3, label %dec_label_pc_16ae.preheader.lr.ph, label %dec_label_pc_16c2, !insn.addr !138

dec_label_pc_16ae.preheader.lr.ph:                ; preds = %dec_label_pc_1679
  %4 = icmp sgt i32 %arg2, 0
  %smax = select i1 %4, i32 %arg2, i32 0
  %5 = mul i32 %smax, %arg1
  store i32 %5, i32* %stack_var_-16.1.lcssa.reg2mem
  br label %dec_label_pc_16c2

dec_label_pc_16c2:                                ; preds = %dec_label_pc_16ae.preheader.lr.ph, %dec_label_pc_1679
  %stack_var_-16.1.lcssa.reload = load i32, i32* %stack_var_-16.1.lcssa.reg2mem
  ret i32 %stack_var_-16.1.lcssa.reload, !insn.addr !139

; uselistorder directives
  uselistorder i32* %stack_var_-16.1.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_break(i32 %arg1) local_unnamed_addr {
dec_label_pc_16c7:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !140
  %storemerge.reg2mem = alloca i32, !insn.addr !140
  %storemerge12.reg2mem = alloca i32, !insn.addr !140
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !141
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !142
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !143
  %5 = add i32 %2, -32, !insn.addr !144
  store i32 0, i32* %storemerge12.reg2mem
  br label %dec_label_pc_1719

dec_label_pc_1719:                                ; preds = %dec_label_pc_16c7, %dec_label_pc_172a
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %6 = mul i32 %storemerge12.reload, 4, !insn.addr !144
  %7 = add i32 %5, %6, !insn.addr !144
  %8 = inttoptr i32 %7 to i32*, !insn.addr !144
  %9 = load i32, i32* %8, align 4, !insn.addr !144
  %10 = icmp eq i32 %9, %arg1, !insn.addr !145
  %11 = icmp eq i1 %10, false, !insn.addr !146
  store i32 %storemerge12.reload, i32* %storemerge.reg2mem, !insn.addr !146
  br i1 %11, label %dec_label_pc_172a, label %dec_label_pc_173b, !insn.addr !146

dec_label_pc_172a:                                ; preds = %dec_label_pc_1719
  %12 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !147
  %13 = icmp ult i32 %12, 5, !insn.addr !148
  store i32 %12, i32* %storemerge12.reg2mem, !insn.addr !148
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !148
  br i1 %13, label %dec_label_pc_1719, label %dec_label_pc_173b, !insn.addr !148

dec_label_pc_173b:                                ; preds = %dec_label_pc_172a, %dec_label_pc_1719
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %14 = call i32 @__readgsdword(i32 20), !insn.addr !149
  %15 = icmp eq i32 %4, %14, !insn.addr !149
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !150
  br i1 %15, label %dec_label_pc_174c, label %dec_label_pc_1747, !insn.addr !150

dec_label_pc_1747:                                ; preds = %dec_label_pc_173b
  %16 = call i32 @__stack_chk_fail_local(), !insn.addr !151
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_174c, !insn.addr !151

dec_label_pc_174c:                                ; preds = %dec_label_pc_1747, %dec_label_pc_173b
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder i32 %storemerge12.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge12.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1719, { 1, 0 }
}

define i32 @loop_continue(i32 %arg1) local_unnamed_addr {
dec_label_pc_174e:
  %0 = alloca i32
  %stack_var_-12.1.lcssa.reg2mem = alloca i32, !insn.addr !153
  %stack_var_-12.11.reg2mem = alloca i32, !insn.addr !153
  %storemerge2.reg2mem = alloca i32, !insn.addr !153
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !154
  %3 = icmp slt i32 %arg1, 1, !insn.addr !155
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !155
  store i32 0, i32* %stack_var_-12.11.reg2mem, !insn.addr !155
  store i32 0, i32* %stack_var_-12.1.lcssa.reg2mem, !insn.addr !155
  br i1 %3, label %dec_label_pc_1791, label %dec_label_pc_1772, !insn.addr !155

dec_label_pc_1772:                                ; preds = %dec_label_pc_174e, %dec_label_pc_1772
  %stack_var_-12.11.reload = load i32, i32* %stack_var_-12.11.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = urem i32 %storemerge2.reload, 2, !insn.addr !156
  %5 = icmp eq i32 %4, 0, !insn.addr !157
  %6 = select i1 %5, i32 0, i32 %storemerge2.reload
  %spec.select = add i32 %6, %stack_var_-12.11.reload
  %7 = add i32 %storemerge2.reload, 1, !insn.addr !158
  %8 = icmp sgt i32 %7, %arg1, !insn.addr !155
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !155
  store i32 %spec.select, i32* %stack_var_-12.11.reg2mem, !insn.addr !155
  store i32 %spec.select, i32* %stack_var_-12.1.lcssa.reg2mem, !insn.addr !155
  br i1 %8, label %dec_label_pc_1791, label %dec_label_pc_1772, !insn.addr !155

dec_label_pc_1791:                                ; preds = %dec_label_pc_1772, %dec_label_pc_174e
  %stack_var_-12.1.lcssa.reload = load i32, i32* %stack_var_-12.1.lcssa.reg2mem
  ret i32 %stack_var_-12.1.lcssa.reload, !insn.addr !159

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.11.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1772, { 1, 0 }
}

define i32 @goto_forward(i32 %arg1) local_unnamed_addr {
dec_label_pc_1796:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !160
  %3 = icmp sgt i32 %arg1, 1
  %4 = select i1 %3, i32 %arg1, i32 1
  %storemerge = mul i32 %arg1, 2
  %5 = mul i32 %storemerge, %4, !insn.addr !161
  ret i32 %5, !insn.addr !162
}

define i32 @goto_backward(i32 %arg1) local_unnamed_addr {
dec_label_pc_17c9:
  %0 = alloca i32
  %storemerge2.reg2mem = alloca i32, !insn.addr !163
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !163
  %storemerge.off04.reg2mem = alloca i32, !insn.addr !163
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !164
  %3 = icmp eq i32 %arg1, 0, !insn.addr !165
  %4 = icmp slt i32 %arg1, 0, !insn.addr !165
  %5 = icmp eq i1 %4, false, !insn.addr !166
  %6 = icmp eq i1 %3, false, !insn.addr !166
  %7 = icmp ne i1 %5, %6, !insn.addr !166
  %8 = icmp slt i32 %arg1, 1, !insn.addr !167
  %or.cond = or i1 %8, %7
  store i32 1, i32* %storemerge.off04.reg2mem, !insn.addr !166
  store i32 1, i32* %stack_var_-12.03.reg2mem, !insn.addr !166
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !166
  br i1 %or.cond, label %dec_label_pc_1814, label %dec_label_pc_1800, !insn.addr !166

dec_label_pc_1800:                                ; preds = %dec_label_pc_17c9, %dec_label_pc_1800
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge.off04.reload = load i32, i32* %storemerge.off04.reg2mem
  %9 = mul i32 %stack_var_-12.03.reload, %storemerge.off04.reload, !insn.addr !168
  %10 = add i32 %storemerge.off04.reload, 1, !insn.addr !169
  %11 = icmp sgt i32 %10, %arg1, !insn.addr !167
  store i32 %10, i32* %storemerge.off04.reg2mem, !insn.addr !167
  store i32 %9, i32* %stack_var_-12.03.reg2mem, !insn.addr !167
  store i32 %9, i32* %storemerge2.reg2mem, !insn.addr !167
  br i1 %11, label %dec_label_pc_1814, label %dec_label_pc_1800, !insn.addr !167

dec_label_pc_1814:                                ; preds = %dec_label_pc_1800, %dec_label_pc_17c9
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  ret i32 %storemerge2.reload, !insn.addr !170

; uselistorder directives
  uselistorder i32* %storemerge.off04.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1800, { 1, 0 }
}

define i32 @ternary_op(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1816:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !171
  %3 = sub i32 %arg2, %arg1, !insn.addr !172
  %4 = xor i32 %arg2, %arg1, !insn.addr !172
  %5 = xor i32 %3, %arg2, !insn.addr !172
  %6 = and i32 %5, %4, !insn.addr !172
  %7 = icmp slt i32 %6, 0, !insn.addr !172
  %8 = icmp slt i32 %3, 0, !insn.addr !172
  %9 = icmp eq i1 %8, %7, !insn.addr !173
  %10 = select i1 %9, i32 %arg2, i32 %arg1, !insn.addr !173
  ret i32 %10, !insn.addr !174

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %arg2, { 3, 0, 1, 2 }
  uselistorder i32 %arg1, { 2, 0, 1 }
}

define i32 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1834:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !175
  %3 = add i32 %1, 6124, !insn.addr !176
  %4 = inttoptr i32 %3 to i8*, !insn.addr !177
  %5 = call i32 @puts(i8* %4), !insn.addr !178
  %6 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !179
  %7 = add i32 %1, 6160, !insn.addr !180
  %8 = inttoptr i32 %7 to i8*, !insn.addr !181
  %9 = call i32 (i8*, ...) @printf(i8* %8), !insn.addr !182
  %10 = call i32 @single_if(i32 10), !insn.addr !183
  %11 = add i32 %1, 6191, !insn.addr !184
  %12 = inttoptr i32 %11 to i8*, !insn.addr !185
  %13 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !186
  %14 = call i32 @single_if(i32 -5), !insn.addr !187
  %15 = call i32 (i8*, ...) @printf(i8* %12), !insn.addr !188
  %16 = call i32 @if_else(i32 5), !insn.addr !189
  %17 = add i32 %1, 6217, !insn.addr !190
  %18 = inttoptr i32 %17 to i8*, !insn.addr !191
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !192
  %20 = call i32 @if_else(i32 -3), !insn.addr !193
  %21 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !194
  %22 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !195
  %23 = add i32 %1, 6241, !insn.addr !196
  %24 = inttoptr i32 %23 to i8*, !insn.addr !197
  %25 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !198
  %26 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !199
  %27 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !200
  %28 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !201
  %29 = call i32 (i8*, ...) @printf(i8* %24), !insn.addr !202
  %30 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !203
  %31 = add i32 %1, 6272, !insn.addr !204
  %32 = inttoptr i32 %31 to i8*, !insn.addr !205
  %33 = call i32 (i8*, ...) @printf(i8* %32), !insn.addr !206
  %34 = call i32 @if_elseif_chain(i32 1), !insn.addr !207
  %35 = add i32 %1, 6304, !insn.addr !208
  %36 = inttoptr i32 %35 to i8*, !insn.addr !209
  %37 = call i32 (i8*, ...) @printf(i8* %36), !insn.addr !210
  %38 = call i32 @if_elseif_long(i32 3), !insn.addr !211
  %39 = add i32 %1, 6336, !insn.addr !212
  %40 = inttoptr i32 %39 to i8*, !insn.addr !213
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !214
  %42 = call i32 @switch_small(i32 2), !insn.addr !215
  %43 = add i32 %1, 6367, !insn.addr !216
  %44 = inttoptr i32 %43 to i8*, !insn.addr !217
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !218
  %46 = call i32 @switch_large(i32 7), !insn.addr !219
  %47 = add i32 %1, 6396, !insn.addr !220
  %48 = inttoptr i32 %47 to i8*, !insn.addr !221
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !222
  %50 = call i32 @switch_default(i32 5), !insn.addr !223
  %51 = add i32 %1, 6428, !insn.addr !224
  %52 = inttoptr i32 %51 to i8*, !insn.addr !225
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !226
  %54 = call i32 @switch_fallthrough(i32 3), !insn.addr !227
  %55 = add i32 %1, 6460, !insn.addr !228
  %56 = inttoptr i32 %55 to i8*, !insn.addr !229
  %57 = call i32 (i8*, ...) @printf(i8* %56), !insn.addr !230
  %58 = call i32 @loop_for_fixed(i32 10), !insn.addr !231
  %59 = add i32 %1, 6496, !insn.addr !232
  %60 = inttoptr i32 %59 to i8*, !insn.addr !233
  %61 = call i32 (i8*, ...) @printf(i8* %60), !insn.addr !234
  %62 = call i32 @loop_while(i32* bitcast (i8** @global_var_3039 to i32*)), !insn.addr !235
  %63 = add i32 %1, 6527, !insn.addr !236
  %64 = inttoptr i32 %63 to i8*, !insn.addr !237
  %65 = call i32 (i8*, ...) @printf(i8* %64), !insn.addr !238
  %66 = call i32 @loop_dowhile(i32* nonnull @global_var_2694), !insn.addr !239
  %67 = add i32 %1, 6554, !insn.addr !240
  %68 = inttoptr i32 %67 to i8*, !insn.addr !241
  %69 = call i32 (i8*, ...) @printf(i8* %68), !insn.addr !242
  %70 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !243
  %71 = add i32 %1, 6583, !insn.addr !244
  %72 = inttoptr i32 %71 to i8*, !insn.addr !245
  %73 = call i32 (i8*, ...) @printf(i8* %72), !insn.addr !246
  %74 = call i32 @loop_break(i32 30), !insn.addr !247
  %75 = add i32 %1, 6611, !insn.addr !248
  %76 = inttoptr i32 %75 to i8*, !insn.addr !249
  %77 = call i32 (i8*, ...) @printf(i8* %76), !insn.addr !250
  %78 = call i32 @loop_break(i32 99), !insn.addr !251
  %79 = call i32 (i8*, ...) @printf(i8* %76), !insn.addr !252
  %80 = call i32 @loop_continue(i32 10), !insn.addr !253
  %81 = add i32 %1, 6638, !insn.addr !254
  %82 = inttoptr i32 %81 to i8*, !insn.addr !255
  %83 = call i32 (i8*, ...) @printf(i8* %82), !insn.addr !256
  %84 = call i32 @goto_forward(i32 5), !insn.addr !257
  %85 = add i32 %1, 6668, !insn.addr !258
  %86 = inttoptr i32 %85 to i8*, !insn.addr !259
  %87 = call i32 (i8*, ...) @printf(i8* %86), !insn.addr !260
  %88 = call i32 @goto_forward(i32 -3), !insn.addr !261
  %89 = call i32 (i8*, ...) @printf(i8* %86), !insn.addr !262
  %90 = call i32 @goto_backward(i32 5), !insn.addr !263
  %91 = add i32 %1, 6697, !insn.addr !264
  %92 = inttoptr i32 %91 to i8*, !insn.addr !265
  %93 = call i32 (i8*, ...) @printf(i8* %92), !insn.addr !266
  %94 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !267
  %95 = add i32 %1, 6727, !insn.addr !268
  %96 = inttoptr i32 %95 to i8*, !insn.addr !269
  %97 = call i32 (i8*, ...) @printf(i8* %96), !insn.addr !270
  %98 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !271
  %99 = call i32 (i8*, ...) @printf(i8* %96), !insn.addr !272
  ret i32 %99, !insn.addr !273

; uselistorder directives
  uselistorder i32 %1, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i32 (i32, i32)* @ternary_op, { 1, 0 }
  uselistorder i32 (i32)* @goto_forward, { 1, 0 }
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
  uselistorder i32 30, { 1, 0 }
  uselistorder i32 (i32, i32)* @nested_if_2, { 2, 1, 0 }
  uselistorder i32 (i32)* @if_else, { 1, 0 }
  uselistorder i32 (i32)* @single_if, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %arg1) local_unnamed_addr {
dec_label_pc_1be0:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !274
  %storemerge1.reg2mem = alloca i32, !insn.addr !274
  %storemerge6.reg2mem = alloca i32, !insn.addr !274
  %storemerge25.reg2mem = alloca i32, !insn.addr !274
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !275
  %3 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !276
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !277
  %5 = add i32 %2, -60, !insn.addr !278
  store i32 0, i32* %storemerge6.reg2mem
  br label %dec_label_pc_1c96.preheader

dec_label_pc_1c65:                                ; preds = %dec_label_pc_1c96.preheader, %dec_label_pc_1c92
  %storemerge25.reload = load i32, i32* %storemerge25.reg2mem
  %6 = add nuw nsw i32 %storemerge25.reload, %19, !insn.addr !279
  %7 = mul i32 %6, 4, !insn.addr !278
  %8 = add i32 %5, %7, !insn.addr !278
  %9 = inttoptr i32 %8 to i32*, !insn.addr !278
  %10 = load i32, i32* %9, align 4, !insn.addr !278
  %11 = icmp eq i32 %10, %arg1, !insn.addr !280
  %12 = icmp eq i1 %11, false, !insn.addr !281
  br i1 %12, label %dec_label_pc_1c92, label %dec_label_pc_1c7d, !insn.addr !281

dec_label_pc_1c7d:                                ; preds = %dec_label_pc_1c65
  %13 = mul i32 %storemerge6.reload, 10, !insn.addr !282
  %14 = add i32 %storemerge25.reload, %13, !insn.addr !283
  store i32 %14, i32* %storemerge1.reg2mem, !insn.addr !284
  br label %dec_label_pc_1cab, !insn.addr !284

dec_label_pc_1c92:                                ; preds = %dec_label_pc_1c65
  %15 = add nuw nsw i32 %storemerge25.reload, 1, !insn.addr !285
  %16 = icmp ult i32 %15, 4, !insn.addr !286
  store i32 %15, i32* %storemerge25.reg2mem, !insn.addr !286
  br i1 %16, label %dec_label_pc_1c65, label %dec_label_pc_1c9c, !insn.addr !286

dec_label_pc_1c9c:                                ; preds = %dec_label_pc_1c92
  %17 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !287
  %18 = icmp ult i32 %17, 3, !insn.addr !288
  store i32 %17, i32* %storemerge6.reg2mem, !insn.addr !288
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !288
  br i1 %18, label %dec_label_pc_1c96.preheader, label %dec_label_pc_1cab, !insn.addr !288

dec_label_pc_1c96.preheader:                      ; preds = %dec_label_pc_1be0, %dec_label_pc_1c9c
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %19 = mul i32 %storemerge6.reload, 4, !insn.addr !289
  store i32 0, i32* %storemerge25.reg2mem
  br label %dec_label_pc_1c65

dec_label_pc_1cab:                                ; preds = %dec_label_pc_1c9c, %dec_label_pc_1c7d
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %20 = call i32 @__readgsdword(i32 20), !insn.addr !290
  %21 = icmp eq i32 %4, %20, !insn.addr !290
  store i32 %storemerge1.reload, i32* %eax.0.reg2mem, !insn.addr !291
  br i1 %21, label %dec_label_pc_1cbc, label %dec_label_pc_1cb7, !insn.addr !291

dec_label_pc_1cb7:                                ; preds = %dec_label_pc_1cab
  %22 = call i32 @__stack_chk_fail_local(), !insn.addr !292
  store i32 %22, i32* %eax.0.reg2mem, !insn.addr !292
  br label %dec_label_pc_1cbc, !insn.addr !292

dec_label_pc_1cbc:                                ; preds = %dec_label_pc_1cb7, %dec_label_pc_1cab
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !293

; uselistorder directives
  uselistorder i32 %storemerge6.reload, { 2, 1, 0 }
  uselistorder i32 %storemerge25.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge25.reg2mem, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1c96.preheader, { 1, 0 }
}

define i32 @infinite_loop(i32* %arg1) local_unnamed_addr {
dec_label_pc_1cbe:
  %0 = alloca i32
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !294
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !294
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !295
  %.pr = load i32, i32* %arg1, align 4
  %3 = icmp eq i32 %.pr, 1, !insn.addr !296
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !297
  br label %dec_label_pc_1cd9, !insn.addr !297

dec_label_pc_1cd9:                                ; preds = %dec_label_pc_1ce3, %dec_label_pc_1cbe
  store i32 0, i32* %stack_var_-8.1.reg2mem, !insn.addr !298
  br i1 %3, label %dec_label_pc_1cfc, label %dec_label_pc_1ce3, !insn.addr !298

dec_label_pc_1ce3:                                ; preds = %dec_label_pc_1cd9
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %4 = add i32 %stack_var_-8.0.reload, 1, !insn.addr !299
  %5 = icmp sgt i32 %4, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !300
  store i32 %4, i32* %stack_var_-8.0.reg2mem, !insn.addr !300
  br i1 %5, label %dec_label_pc_1cf0, label %dec_label_pc_1cd9, !insn.addr !300

dec_label_pc_1cf0:                                ; preds = %dec_label_pc_1ce3
  store i32 1, i32* %arg1, align 4, !insn.addr !301
  store i32 %4, i32* %stack_var_-8.1.reg2mem, !insn.addr !302
  br label %dec_label_pc_1cfc, !insn.addr !302

dec_label_pc_1cfc:                                ; preds = %dec_label_pc_1cd9, %dec_label_pc_1cf0
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !303

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1cfc, { 1, 0 }
}

define i32 @multi_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d01:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !304
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !305
  %3 = icmp slt i32 %arg1, 0, !insn.addr !306
  %4 = icmp eq i1 %3, false, !insn.addr !307
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !307
  br i1 %4, label %dec_label_pc_1d22, label %dec_label_pc_1d4c, !insn.addr !307

dec_label_pc_1d22:                                ; preds = %dec_label_pc_1d01
  %5 = mul i32 %arg1, 2, !insn.addr !308
  %6 = icmp slt i32 %5, 101, !insn.addr !309
  store i32 -2, i32* %eax.0.reg2mem, !insn.addr !309
  br i1 %6, label %dec_label_pc_1d37, label %dec_label_pc_1d4c, !insn.addr !309

dec_label_pc_1d37:                                ; preds = %dec_label_pc_1d22
  %7 = urem i32 %arg1, 2, !insn.addr !310
  %8 = icmp eq i32 %7, 0, !insn.addr !311
  %9 = icmp eq i1 %8, false, !insn.addr !312
  %10 = add i32 %arg1, 1
  %spec.select = select i1 %9, i32 %10, i32 %5
  ret i32 %spec.select

dec_label_pc_1d4c:                                ; preds = %dec_label_pc_1d22, %dec_label_pc_1d01
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !313

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %arg1, { 2, 1, 0, 3 }
}

define i32 @conditional_return(i32 %arg1) local_unnamed_addr {
dec_label_pc_1d4e:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !314
  %3 = icmp slt i32 %arg1, 1, !insn.addr !315
  br i1 %3, label %dec_label_pc_1d6c, label %dec_label_pc_1d65, !insn.addr !315

dec_label_pc_1d65:                                ; preds = %dec_label_pc_1d4e
  %4 = mul i32 %arg1, 2, !insn.addr !316
  ret i32 %4, !insn.addr !317

dec_label_pc_1d6c:                                ; preds = %dec_label_pc_1d4e
  %5 = icmp ne i32 %arg1, 0, !insn.addr !318
  %6 = icmp eq i1 %5, false, !insn.addr !319
  %7 = sub i32 0, %arg1
  %spec.select = select i1 %6, i32 0, i32 %7
  ret i32 %spec.select

; uselistorder directives
  uselistorder i32 %arg1, { 2, 1, 0, 3 }
}

define i32 @duffs_device(i32* %arg1) local_unnamed_addr {
dec_label_pc_1d80:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !320
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = call i32 @__x86.get_pc_thunk.dx(i32 %1), !insn.addr !321
  %4 = icmp eq i32* %arg1, null, !insn.addr !322
  %5 = icmp slt i32* %arg1, null, !insn.addr !322
  %6 = icmp eq i1 %5, false, !insn.addr !323
  %7 = icmp eq i1 %4, false, !insn.addr !323
  %8 = icmp eq i1 %6, %7, !insn.addr !323
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !323
  br i1 %8, label %dec_label_pc_1da5, label %dec_label_pc_1ea5, !insn.addr !323

dec_label_pc_1da5:                                ; preds = %dec_label_pc_1d80
  %9 = ptrtoint i32* %arg1 to i32
  %10 = srem i32 %9, 8, !insn.addr !324
  %11 = icmp ult i32 %10, 8
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !325
  br i1 %11, label %dec_label_pc_1dd4, label %dec_label_pc_1ea5, !insn.addr !325

dec_label_pc_1dd4:                                ; preds = %dec_label_pc_1da5
  %12 = add i32 %2, 16953, !insn.addr !326
  %13 = mul i32 %10, 4, !insn.addr !327
  %14 = add nsw i32 %13, -11552, !insn.addr !328
  %15 = add i32 %14, %12, !insn.addr !328
  %16 = inttoptr i32 %15 to i32*, !insn.addr !328
  %17 = load i32, i32* %16, align 4, !insn.addr !328
  %18 = add i32 %17, %12, !insn.addr !329
  ret i32 %18, !insn.addr !330

dec_label_pc_1ea5:                                ; preds = %dec_label_pc_1da5, %dec_label_pc_1d80
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !331

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32* null, { 1, 2, 0 }
  uselistorder i32* %arg1, { 2, 0, 1 }
}

define i32 @loop_complex_cond(i32 %arg1) local_unnamed_addr {
dec_label_pc_1ea7:
  %0 = alloca i32
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !332
  %stack_var_-16.0.lcssa.reg2mem = alloca i32, !insn.addr !332
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !332
  %stack_var_-12.02.reg2mem = alloca i32, !insn.addr !332
  %stack_var_-16.03.reg2mem = alloca i32, !insn.addr !332
  %storemerge4.reg2mem = alloca i32, !insn.addr !332
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !333
  %3 = icmp slt i32 %arg1, 1, !insn.addr !334
  store i32 0, i32* %storemerge4.reg2mem, !insn.addr !334
  store i32 0, i32* %stack_var_-16.03.reg2mem, !insn.addr !334
  store i32 %arg1, i32* %stack_var_-12.02.reg2mem, !insn.addr !334
  store i32 %arg1, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !334
  store i32 0, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !334
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !334
  br i1 %3, label %dec_label_pc_1ef1, label %dec_label_pc_1ed1, !insn.addr !334

dec_label_pc_1ed1:                                ; preds = %dec_label_pc_1ea7, %dec_label_pc_1ed1
  %stack_var_-12.02.reload = load i32, i32* %stack_var_-12.02.reg2mem
  %stack_var_-16.03.reload = load i32, i32* %stack_var_-16.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %4 = add nuw nsw i32 %stack_var_-16.03.reload, 2, !insn.addr !335
  %5 = add nsw i32 %stack_var_-12.02.reload, -1, !insn.addr !336
  %6 = add nuw nsw i32 %storemerge4.reload, 1, !insn.addr !337
  %7 = icmp sge i32 %4, %5, !insn.addr !334
  %8 = icmp ugt i32 %storemerge4.reload, 8, !insn.addr !338
  %or.cond = or i1 %8, %7
  store i32 %6, i32* %storemerge4.reg2mem, !insn.addr !334
  store i32 %4, i32* %stack_var_-16.03.reg2mem, !insn.addr !334
  store i32 %5, i32* %stack_var_-12.02.reg2mem, !insn.addr !334
  store i32 %5, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !334
  store i32 %4, i32* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !334
  store i32 %6, i32* %storemerge.lcssa.reg2mem, !insn.addr !334
  br i1 %or.cond, label %dec_label_pc_1ef1, label %dec_label_pc_1ed1, !insn.addr !334

dec_label_pc_1ef1:                                ; preds = %dec_label_pc_1ed1, %dec_label_pc_1ea7
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %stack_var_-16.0.lcssa.reload = load i32, i32* %stack_var_-16.0.lcssa.reg2mem
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  %9 = add i32 %stack_var_-16.0.lcssa.reload, %stack_var_-12.0.lcssa.reload, !insn.addr !339
  %10 = add i32 %9, %storemerge.lcssa.reload, !insn.addr !340
  ret i32 %10, !insn.addr !341

; uselistorder directives
  uselistorder i32 %storemerge4.reload, { 1, 0 }
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.03.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 8, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1ed1, { 1, 0 }
}

define i32 @loop_modify_var(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f00:
  %0 = alloca i32
  %stack_var_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !342
  %stack_var_-12.01.reg2mem = alloca i32, !insn.addr !342
  %storemerge2.reg2mem = alloca i32, !insn.addr !342
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !343
  %3 = icmp sgt i32 %arg1, 0, !insn.addr !344
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !344
  store i32 0, i32* %stack_var_-12.01.reg2mem, !insn.addr !344
  store i32 0, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !344
  br i1 %3, label %dec_label_pc_1f24, label %dec_label_pc_1f40, !insn.addr !344

dec_label_pc_1f24:                                ; preds = %dec_label_pc_1f00, %dec_label_pc_1f24
  %stack_var_-12.01.reload = load i32, i32* %stack_var_-12.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %4 = add i32 %stack_var_-12.01.reload, %storemerge2.reload, !insn.addr !345
  %5 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !346
  %6 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %5, i32 %storemerge2.reload, i32 %6
  %7 = add i32 %spec.select, 1, !insn.addr !347
  %8 = icmp slt i32 %7, %arg1, !insn.addr !344
  store i32 %7, i32* %storemerge2.reg2mem, !insn.addr !344
  store i32 %4, i32* %stack_var_-12.01.reg2mem, !insn.addr !344
  store i32 %4, i32* %stack_var_-12.0.lcssa.reg2mem, !insn.addr !344
  br i1 %8, label %dec_label_pc_1f24, label %dec_label_pc_1f40, !insn.addr !344

dec_label_pc_1f40:                                ; preds = %dec_label_pc_1f24, %dec_label_pc_1f00
  %stack_var_-12.0.lcssa.reload = load i32, i32* %stack_var_-12.0.lcssa.reg2mem
  ret i32 %stack_var_-12.0.lcssa.reload, !insn.addr !348

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-12.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_1f24, { 1, 0 }
}

define i32 @loop_external_state(i32* %arg1) local_unnamed_addr {
dec_label_pc_1f45:
  %0 = alloca i32
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !349
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !349
  %.reg2mem = alloca i1, !insn.addr !349
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !350
  %.pr = load i32, i32* %arg1, align 4
  %phitmp = icmp eq i32 %.pr, 0
  store i1 %phitmp, i1* %.reg2mem, !insn.addr !351
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !351
  br label %dec_label_pc_1f6c, !insn.addr !351

dec_label_pc_1f62:                                ; preds = %dec_label_pc_1f6c
  %3 = add nuw nsw i32 %stack_var_-8.0.reload, 1, !insn.addr !352
  %4 = icmp ugt i32 %stack_var_-8.0.reload, 99, !insn.addr !353
  store i1 true, i1* %.reg2mem, !insn.addr !353
  store i32 %3, i32* %stack_var_-8.0.reg2mem, !insn.addr !353
  store i32 101, i32* %stack_var_-8.1.reg2mem, !insn.addr !353
  br i1 %4, label %dec_label_pc_1f78, label %dec_label_pc_1f6c, !insn.addr !353

dec_label_pc_1f6c:                                ; preds = %dec_label_pc_1f62, %dec_label_pc_1f45
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %.reload = load i1, i1* %.reg2mem, !insn.addr !354
  store i32 %stack_var_-8.0.reload, i32* %stack_var_-8.1.reg2mem, !insn.addr !355
  br i1 %.reload, label %dec_label_pc_1f62, label %dec_label_pc_1f78, !insn.addr !355

dec_label_pc_1f78:                                ; preds = %dec_label_pc_1f62, %dec_label_pc_1f6c
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !356

; uselistorder directives
  uselistorder i1* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f78, { 1, 0 }
}

define i32 @recursion_factorial(i32 %arg1) local_unnamed_addr {
dec_label_pc_1f7d:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !357
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !358
  %3 = icmp sgt i32 %arg1, 1, !insn.addr !359
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !359
  br i1 %3, label %dec_label_pc_1f9e, label %dec_label_pc_1fb4, !insn.addr !359

dec_label_pc_1f9e:                                ; preds = %dec_label_pc_1f7d
  %4 = add i32 %arg1, -1, !insn.addr !360
  %5 = call i32 @recursion_factorial(i32 %4), !insn.addr !361
  %6 = mul i32 %5, %arg1, !insn.addr !362
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !362
  br label %dec_label_pc_1fb4, !insn.addr !362

dec_label_pc_1fb4:                                ; preds = %dec_label_pc_1f7d, %dec_label_pc_1f9e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !363

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1fb4, { 1, 0 }
}

define i32 @tail_recursion(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1fb6:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !364
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !365
  %3 = icmp sgt i32 %arg1, 1, !insn.addr !366
  store i32 %arg2, i32* %storemerge.reg2mem, !insn.addr !366
  br i1 %3, label %dec_label_pc_1fd5, label %dec_label_pc_1fef, !insn.addr !366

dec_label_pc_1fd5:                                ; preds = %dec_label_pc_1fb6
  %4 = mul i32 %arg2, %arg1, !insn.addr !367
  %5 = add i32 %arg1, -1, !insn.addr !368
  %6 = call i32 @tail_recursion(i32 %5, i32 %4), !insn.addr !369
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !370
  br label %dec_label_pc_1fef, !insn.addr !370

dec_label_pc_1fef:                                ; preds = %dec_label_pc_1fb6, %dec_label_pc_1fd5
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !371

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1fef, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_1ff1:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !372
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !373
  %3 = icmp eq i32 %arg2, 0, !insn.addr !374
  %4 = icmp slt i32 %arg2, 0, !insn.addr !374
  %5 = icmp eq i1 %4, false, !insn.addr !375
  %6 = icmp eq i1 %3, false, !insn.addr !375
  %7 = icmp eq i1 %5, %6, !insn.addr !375
  store i32 %arg1, i32* %eax.0.reg2mem, !insn.addr !375
  br i1 %7, label %dec_label_pc_2010, label %dec_label_pc_205a, !insn.addr !375

dec_label_pc_2010:                                ; preds = %dec_label_pc_1ff1
  %8 = urem i32 %arg1, 2, !insn.addr !376
  %9 = icmp eq i32 %8, 0, !insn.addr !377
  %10 = icmp eq i1 %9, false, !insn.addr !378
  %11 = add i32 %arg2, -1
  br i1 %10, label %dec_label_pc_203b, label %dec_label_pc_201a, !insn.addr !378

dec_label_pc_201a:                                ; preds = %dec_label_pc_2010
  %12 = icmp slt i32 %arg1, 0
  %13 = zext i1 %12 to i32, !insn.addr !379
  %14 = add i32 %13, %arg1, !insn.addr !380
  %15 = ashr i32 %14, 1, !insn.addr !381
  %16 = call i32 @indirect_recursion_b(i32 %15, i32 %11), !insn.addr !382
  store i32 %16, i32* %eax.0.reg2mem, !insn.addr !383
  br label %dec_label_pc_205a, !insn.addr !383

dec_label_pc_203b:                                ; preds = %dec_label_pc_2010
  %17 = mul i32 %arg1, 3, !insn.addr !384
  %18 = add i32 %17, 1, !insn.addr !385
  %19 = call i32 @indirect_recursion_b(i32 %18, i32 %11), !insn.addr !386
  store i32 %19, i32* %eax.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_205a, !insn.addr !387

dec_label_pc_205a:                                ; preds = %dec_label_pc_1ff1, %dec_label_pc_203b, %dec_label_pc_201a
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !388

; uselistorder directives
  uselistorder i32 %11, { 1, 0 }
  uselistorder i32* %eax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32 %arg1, { 4, 3, 1, 2, 0 }
  uselistorder label %dec_label_pc_205a, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_205c:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !389
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !390
  %3 = icmp eq i32 %arg2, 0, !insn.addr !391
  %4 = icmp slt i32 %arg2, 0, !insn.addr !391
  %5 = icmp eq i1 %4, false, !insn.addr !392
  %6 = icmp eq i1 %3, false, !insn.addr !392
  %7 = icmp eq i1 %5, %6, !insn.addr !392
  store i32 %arg1, i32* %storemerge.reg2mem, !insn.addr !392
  br i1 %7, label %dec_label_pc_207b, label %dec_label_pc_2094, !insn.addr !392

dec_label_pc_207b:                                ; preds = %dec_label_pc_205c
  %8 = add i32 %arg2, -1, !insn.addr !393
  %9 = add i32 %arg1, 1, !insn.addr !394
  %10 = call i32 @indirect_recursion_a(i32 %9, i32 %8), !insn.addr !395
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !396
  br label %dec_label_pc_2094, !insn.addr !396

dec_label_pc_2094:                                ; preds = %dec_label_pc_205c, %dec_label_pc_207b
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !397

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_2094, { 1, 0 }
}

define i32 @call_func_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2096:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !398
  ret i32 %arg1, !insn.addr !399
}

define i32 @double_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_20ba:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !400
  %3 = mul i32 %arg1, 2, !insn.addr !401
  ret i32 %3, !insn.addr !402
}

define i32 @triple_value(i32 %arg1) local_unnamed_addr {
dec_label_pc_20d2:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !403
  %3 = mul i32 %arg1, 3, !insn.addr !404
  ret i32 %3, !insn.addr !405
}

define i32 @call_func_ptr_array(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_20ee:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !406
  %storemerge.reg2mem = alloca i32, !insn.addr !406
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !407
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !408
  %4 = icmp ult i32 %arg1, 3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !409
  br i1 %4, label %dec_label_pc_213c, label %dec_label_pc_214e, !insn.addr !409

dec_label_pc_213c:                                ; preds = %dec_label_pc_20ee
  %5 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !410
  %6 = mul i32 %arg1, 4, !insn.addr !411
  %7 = add i32 %6, -24, !insn.addr !411
  %8 = add i32 %7, %5, !insn.addr !411
  %9 = inttoptr i32 %8 to i32*, !insn.addr !411
  %10 = load i32, i32* %9, align 4, !insn.addr !411
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !412
  br label %dec_label_pc_214e, !insn.addr !412

dec_label_pc_214e:                                ; preds = %dec_label_pc_20ee, %dec_label_pc_213c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !413
  %12 = icmp eq i32 %3, %11, !insn.addr !413
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !414
  br i1 %12, label %dec_label_pc_215f, label %dec_label_pc_215a, !insn.addr !414

dec_label_pc_215a:                                ; preds = %dec_label_pc_214e
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !415
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !415
  br label %dec_label_pc_215f, !insn.addr !415

dec_label_pc_215f:                                ; preds = %dec_label_pc_215a, %dec_label_pc_214e
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !416

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_214e, { 1, 0 }
}

define i32 @call_virtual_func(i32 %arg1) local_unnamed_addr {
dec_label_pc_2161:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !417
  %3 = mul i32 %arg1, 2, !insn.addr !418
  ret i32 %3, !insn.addr !419
}

define i32 @process_with_callback(i32* %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_2179:
  %0 = alloca i32
  %stack_var_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !420
  %storemerge2.reg2mem = alloca i32, !insn.addr !420
  %1 = load i32, i32* %0
  %stack_var_-28 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !421
  %3 = icmp sgt i32 %arg2, 0, !insn.addr !422
  store i32 0, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !422
  br i1 %3, label %dec_label_pc_219d.lr.ph, label %dec_label_pc_21c9, !insn.addr !422

dec_label_pc_219d.lr.ph:                          ; preds = %dec_label_pc_2179
  %4 = ptrtoint i32* %arg1 to i32
  %5 = ptrtoint i32* %stack_var_-28 to i32, !insn.addr !423
  %6 = add i32 %5, -16, !insn.addr !424
  %7 = inttoptr i32 %6 to i32*, !insn.addr !424
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_219d

dec_label_pc_219d:                                ; preds = %dec_label_pc_219d, %dec_label_pc_219d.lr.ph
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %8 = mul i32 %storemerge2.reload, 4, !insn.addr !425
  %9 = add i32 %8, %4, !insn.addr !426
  %10 = inttoptr i32 %9 to i32*, !insn.addr !427
  %11 = load i32, i32* %10, align 4, !insn.addr !427
  store i32 %11, i32* %7, align 4, !insn.addr !424
  %12 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !428
  %exitcond = icmp eq i32 %12, %arg2
  store i32 %12, i32* %storemerge2.reg2mem, !insn.addr !422
  br i1 %exitcond, label %dec_label_pc_21c1.dec_label_pc_21c9_crit_edge, label %dec_label_pc_219d, !insn.addr !422

dec_label_pc_21c1.dec_label_pc_21c9_crit_edge:    ; preds = %dec_label_pc_219d
  %13 = mul i32 %arg3, %arg2
  store i32 %13, i32* %stack_var_-20.0.lcssa.reg2mem
  br label %dec_label_pc_21c9

dec_label_pc_21c9:                                ; preds = %dec_label_pc_21c1.dec_label_pc_21c9_crit_edge, %dec_label_pc_2179
  %stack_var_-20.0.lcssa.reload = load i32, i32* %stack_var_-20.0.lcssa.reg2mem
  ret i32 %stack_var_-20.0.lcssa.reload, !insn.addr !429

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_21ce:
  %0 = alloca i32
  %eax.1.reg2mem = alloca i32, !insn.addr !430
  %eax.0.reg2mem = alloca i32, !insn.addr !430
  %1 = load i32, i32* %0
  %stack_var_-100 = alloca i32, align 4
  %stack_var_-104 = alloca i32, align 4
  %stack_var_-48 = alloca i32, align 4
  %stack_var_-108 = alloca i32, align 4
  %stack_var_-4 = alloca i32, align 4
  %2 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !431
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !432
  %4 = call i32 @__readgsdword(i32 20), !insn.addr !433
  %5 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11520), !insn.addr !434
  %6 = inttoptr i32 %5 to i8*, !insn.addr !435
  %7 = call i32 @puts(i8* %6), !insn.addr !436
  %8 = call i32 @loop_multi_exit(i32 7), !insn.addr !437
  %9 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11484), !insn.addr !438
  %10 = inttoptr i32 %9 to i8*, !insn.addr !439
  %11 = call i32 (i8*, ...) @printf(i8* %10), !insn.addr !440
  store i32 0, i32* %stack_var_-108, align 4, !insn.addr !441
  %12 = call i32 @infinite_loop(i32* nonnull %stack_var_-108), !insn.addr !442
  %13 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11452), !insn.addr !443
  %14 = inttoptr i32 %13 to i8*, !insn.addr !444
  %15 = call i32 (i8*, ...) @printf(i8* %14), !insn.addr !445
  %16 = call i32 @multi_return(i32 -5), !insn.addr !446
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11422), !insn.addr !447
  %18 = inttoptr i32 %17 to i8*, !insn.addr !448
  %19 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !449
  %20 = call i32 @multi_return(i32 100), !insn.addr !450
  %21 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !451
  %22 = call i32 @multi_return(i32 3), !insn.addr !452
  %23 = call i32 (i8*, ...) @printf(i8* %18), !insn.addr !453
  %24 = call i32 @conditional_return(i32 5), !insn.addr !454
  %25 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11392), !insn.addr !455
  %26 = inttoptr i32 %25 to i8*, !insn.addr !456
  %27 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !457
  %28 = call i32 @conditional_return(i32 -5), !insn.addr !458
  %29 = call i32 (i8*, ...) @printf(i8* %26), !insn.addr !459
  %30 = add i32 %2, -44, !insn.addr !460
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !461
  br label %dec_label_pc_2336, !insn.addr !461

dec_label_pc_2336:                                ; preds = %dec_label_pc_2336, %dec_label_pc_21ce
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  %31 = add i32 %30, %eax.0.reload, !insn.addr !460
  %32 = inttoptr i32 %31 to i32*, !insn.addr !460
  store i32 0, i32* %32, align 4, !insn.addr !460
  %33 = add nuw nsw i32 %eax.0.reload, 4, !insn.addr !462
  %34 = icmp ult i32 %33, 32, !insn.addr !463
  store i32 %33, i32* %eax.0.reg2mem, !insn.addr !464
  br i1 %34, label %dec_label_pc_2336, label %dec_label_pc_2341, !insn.addr !464

dec_label_pc_2341:                                ; preds = %dec_label_pc_2336
  %35 = call i32 @duffs_device(i32* nonnull %stack_var_-48), !insn.addr !465
  %36 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11357), !insn.addr !466
  %37 = inttoptr i32 %36 to i8*, !insn.addr !467
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !468
  %39 = call i32 @loop_complex_cond(i32 10), !insn.addr !469
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11328), !insn.addr !470
  %41 = inttoptr i32 %40 to i8*, !insn.addr !471
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !472
  %43 = call i32 @loop_modify_var(i32 10), !insn.addr !473
  %44 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11292), !insn.addr !474
  %45 = inttoptr i32 %44 to i8*, !insn.addr !475
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !476
  store i32 0, i32* %stack_var_-104, align 4, !insn.addr !477
  %47 = call i32 @loop_external_state(i32* nonnull %stack_var_-104), !insn.addr !478
  %48 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11260), !insn.addr !479
  %49 = inttoptr i32 %48 to i8*, !insn.addr !480
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !481
  %51 = call i32 @recursion_factorial(i32 5), !insn.addr !482
  %52 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11224), !insn.addr !483
  %53 = inttoptr i32 %52 to i8*, !insn.addr !484
  %54 = call i32 (i8*, ...) @printf(i8* %53), !insn.addr !485
  %55 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !486
  %56 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11188), !insn.addr !487
  %57 = inttoptr i32 %56 to i8*, !insn.addr !488
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !489
  %59 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !490
  %60 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11156), !insn.addr !491
  %61 = inttoptr i32 %60 to i8*, !insn.addr !492
  %62 = call i32 (i8*, ...) @printf(i8* %61), !insn.addr !493
  %63 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -16142), !insn.addr !494
  %64 = call i32 @call_func_ptr(i32 %63, i32 5), !insn.addr !495
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11121), !insn.addr !496
  %66 = inttoptr i32 %65 to i8*, !insn.addr !497
  %67 = call i32 (i8*, ...) @printf(i8* %66), !insn.addr !498
  %68 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !499
  %69 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11088), !insn.addr !500
  %70 = inttoptr i32 %69 to i8*, !insn.addr !501
  %71 = call i32 (i8*, ...) @printf(i8* %70), !insn.addr !502
  %72 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !503
  %73 = call i32 (i8*, ...) @printf(i8* %70), !insn.addr !504
  store i32 1, i32* %stack_var_-100, align 4, !insn.addr !505
  %74 = call i32 @process_with_callback(i32* nonnull %stack_var_-100, i32 5, i32 %63), !insn.addr !506
  %75 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3dea to i32), i32 -11052), !insn.addr !507
  %76 = inttoptr i32 %75 to i8*, !insn.addr !508
  %77 = call i32 (i8*, ...) @printf(i8* %76), !insn.addr !509
  %78 = call i32 @__readgsdword(i32 20), !insn.addr !510
  %79 = icmp eq i32 %4, %78, !insn.addr !510
  store i32 0, i32* %eax.1.reg2mem, !insn.addr !511
  br i1 %79, label %dec_label_pc_2501, label %dec_label_pc_24fc, !insn.addr !511

dec_label_pc_24fc:                                ; preds = %dec_label_pc_2341
  %80 = call i32 @__stack_chk_fail_local(), !insn.addr !512
  store i32 %80, i32* %eax.1.reg2mem, !insn.addr !512
  br label %dec_label_pc_2501, !insn.addr !512

dec_label_pc_2501:                                ; preds = %dec_label_pc_24fc, %dec_label_pc_2341
  %eax.1.reload = load i32, i32* %eax.1.reg2mem
  ret i32 %eax.1.reload, !insn.addr !513

; uselistorder directives
  uselistorder i32 %eax.0.reload, { 1, 0 }
  uselistorder i32 %1, { 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 0, 1, 2, 3, 4, 5 }
  uselistorder i32* %eax.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 1, 0 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
}

define i32 @non_local_jump(i32 %arg1) local_unnamed_addr {
dec_label_pc_2506:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !514
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !515
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_3ab2 to i32), i32 120), !insn.addr !516
  %4 = insertvalue [8 x i32] undef, i32 %3, 0, !insn.addr !517
  %5 = insertvalue %__jmp_buf_tag undef, [8 x i32] %4, 0, !insn.addr !517
  %6 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %5, 0, !insn.addr !517
  %7 = call i32 @_setjmp([1 x %__jmp_buf_tag] %6), !insn.addr !517
  %8 = icmp eq i32 %7, 0, !insn.addr !518
  %9 = icmp eq i1 %8, false, !insn.addr !519
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !519
  br i1 %9, label %dec_label_pc_257c, label %dec_label_pc_253c, !insn.addr !519

dec_label_pc_253c:                                ; preds = %dec_label_pc_2506
  %10 = icmp slt i32 %arg1, 0, !insn.addr !520
  %11 = icmp eq i1 %10, false, !insn.addr !521
  br i1 %11, label %dec_label_pc_2556, label %dec_label_pc_2542, !insn.addr !521

dec_label_pc_2542:                                ; preds = %dec_label_pc_253c
  call void @longjmp([1 x %__jmp_buf_tag] %6, i32 ptrtoint (i32* @0 to i32)), !insn.addr !522
  unreachable, !insn.addr !522

dec_label_pc_2556:                                ; preds = %dec_label_pc_253c
  %12 = icmp slt i32 %arg1, 101, !insn.addr !523
  br i1 %12, label %dec_label_pc_2570, label %dec_label_pc_255c, !insn.addr !523

dec_label_pc_255c:                                ; preds = %dec_label_pc_2556
  call void @longjmp([1 x %__jmp_buf_tag] %6, i32 ptrtoint (i32* @0 to i32)), !insn.addr !524
  unreachable, !insn.addr !524

dec_label_pc_2570:                                ; preds = %dec_label_pc_2556
  %13 = mul i32 %arg1, 2, !insn.addr !525
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !526
  br label %dec_label_pc_257c, !insn.addr !526

dec_label_pc_257c:                                ; preds = %dec_label_pc_2506, %dec_label_pc_2570
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !527

; uselistorder directives
  uselistorder [1 x %__jmp_buf_tag] %6, { 1, 0, 2 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder i32 %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_257c, { 1, 0 }
}

define i32 @cpp_exception(i32 %arg1) local_unnamed_addr {
dec_label_pc_2581:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !528
  %3 = icmp slt i32 %arg1, 0, !insn.addr !529
  %4 = icmp eq i1 %3, false, !insn.addr !530
  br i1 %4, label %dec_label_pc_259f, label %dec_label_pc_25b1, !insn.addr !530

dec_label_pc_259f:                                ; preds = %dec_label_pc_2581
  %5 = icmp slt i32 %arg1, 101, !insn.addr !531
  %6 = mul i32 %arg1, 2
  %spec.select = select i1 %5, i32 %6, i32 -2
  ret i32 %spec.select

dec_label_pc_25b1:                                ; preds = %dec_label_pc_2581
  ret i32 -1, !insn.addr !532

; uselistorder directives
  uselistorder i32 101, { 1, 2, 0, 3 }
}

define i32 @op_add(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25b3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !533
  %3 = add i32 %arg2, %arg1, !insn.addr !534
  ret i32 %3, !insn.addr !535
}

define i32 @op_sub(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25ce:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !536
  %3 = sub i32 %arg1, %arg2, !insn.addr !537
  ret i32 %3, !insn.addr !538
}

define i32 @op_mul(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_25e7:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !539
  %3 = mul i32 %arg2, %arg1, !insn.addr !540
  ret i32 %3, !insn.addr !541
}

define i32 @op_div(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2601:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !542
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !543
  %3 = icmp eq i32 %arg2, 0, !insn.addr !544
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !545
  br i1 %3, label %dec_label_pc_2626, label %dec_label_pc_2618, !insn.addr !545

dec_label_pc_2618:                                ; preds = %dec_label_pc_2601
  %4 = ashr i32 %arg1, 31, !insn.addr !546
  %5 = zext i32 %arg1 to i64, !insn.addr !547
  %6 = zext i32 %4 to i64, !insn.addr !547
  %7 = mul i64 %6, 4294967296, !insn.addr !547
  %8 = or i64 %7, %5, !insn.addr !547
  %9 = zext i32 %arg2 to i64, !insn.addr !547
  %10 = sdiv i64 %8, %9, !insn.addr !547
  %11 = trunc i64 %10 to i32, !insn.addr !547
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !548
  br label %dec_label_pc_2626, !insn.addr !548

dec_label_pc_2626:                                ; preds = %dec_label_pc_2601, %dec_label_pc_2618
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !549

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2626, { 1, 0 }
}

define i32 @op_mod(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2628:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !550
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !551
  %3 = icmp eq i32 %arg2, 0, !insn.addr !552
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !553
  br i1 %3, label %dec_label_pc_264f, label %dec_label_pc_263f, !insn.addr !553

dec_label_pc_263f:                                ; preds = %dec_label_pc_2628
  %4 = ashr i32 %arg1, 31, !insn.addr !554
  %5 = zext i32 %arg1 to i64, !insn.addr !555
  %6 = zext i32 %4 to i64, !insn.addr !555
  %7 = mul i64 %6, 4294967296, !insn.addr !555
  %8 = or i64 %7, %5, !insn.addr !555
  %9 = zext i32 %arg2 to i64, !insn.addr !555
  %10 = srem i64 %8, %9, !insn.addr !555
  %11 = trunc i64 %10 to i32, !insn.addr !555
  store i32 %11, i32* %storemerge.reg2mem, !insn.addr !556
  br label %dec_label_pc_264f, !insn.addr !556

dec_label_pc_264f:                                ; preds = %dec_label_pc_2628, %dec_label_pc_263f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !557

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 31, { 1, 2, 0 }
  uselistorder label %dec_label_pc_264f, { 1, 0 }
}

define i32 @op_and(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2651:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !558
  %3 = and i32 %arg2, %arg1, !insn.addr !559
  ret i32 %3, !insn.addr !560
}

define i32 @op_or(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_266a:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !561
  %3 = or i32 %arg2, %arg1, !insn.addr !562
  ret i32 %3, !insn.addr !563
}

define i32 @op_xor(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2683:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !564
  %3 = xor i32 %arg2, %arg1, !insn.addr !565
  ret i32 %3, !insn.addr !566
}

define i32 @op_shl(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_269c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !567
  %3 = urem i32 %arg2, 32, !insn.addr !568
  %4 = shl i32 %arg1, %3
  ret i32 %4, !insn.addr !569
}

define i32 @op_shr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_26bb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !570
  %3 = urem i32 %arg2, 32, !insn.addr !571
  %4 = ashr i32 %arg1, %3
  ret i32 %4, !insn.addr !572
}

define i32 @large_jump_table(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_26da:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !573
  %storemerge.reg2mem = alloca i32, !insn.addr !573
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !574
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !575
  %4 = icmp ult i32 %arg1, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !576
  br i1 %4, label %dec_label_pc_2767, label %dec_label_pc_277c, !insn.addr !576

dec_label_pc_2767:                                ; preds = %dec_label_pc_26da
  %5 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !577
  %6 = mul i32 %arg1, 4, !insn.addr !578
  %7 = add i32 %6, -52, !insn.addr !578
  %8 = add i32 %7, %5, !insn.addr !578
  %9 = inttoptr i32 %8 to i32*, !insn.addr !578
  %10 = load i32, i32* %9, align 4, !insn.addr !578
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !579
  br label %dec_label_pc_277c, !insn.addr !579

dec_label_pc_277c:                                ; preds = %dec_label_pc_26da, %dec_label_pc_2767
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !580
  %12 = icmp eq i32 %3, %11, !insn.addr !580
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !581
  br i1 %12, label %dec_label_pc_278d, label %dec_label_pc_2788, !insn.addr !581

dec_label_pc_2788:                                ; preds = %dec_label_pc_277c
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !582
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !582
  br label %dec_label_pc_278d, !insn.addr !582

dec_label_pc_278d:                                ; preds = %dec_label_pc_2788, %dec_label_pc_277c
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !583

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_277c, { 1, 0 }
}

define i32 @conditional_func_ptr(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_278f:
  %0 = alloca i32
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !584
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !585
  %3 = icmp eq i32 %arg1, 0, !insn.addr !586
  %4 = icmp eq i1 %3, false, !insn.addr !587
  br i1 %4, label %dec_label_pc_27b4, label %dec_label_pc_27a9, !insn.addr !587

dec_label_pc_27a9:                                ; preds = %dec_label_pc_278f
  %5 = add i32 %2, add (i32 ptrtoint (i32* @global_var_382a to i32), i32 -16142), !insn.addr !588
  store i32 %5, i32* %stack_var_-16.0.reg2mem, !insn.addr !589
  br label %dec_label_pc_27ce, !insn.addr !589

dec_label_pc_27b4:                                ; preds = %dec_label_pc_278f
  %6 = icmp eq i32 %arg1, 1, !insn.addr !590
  %7 = icmp eq i1 %6, false, !insn.addr !591
  br i1 %7, label %dec_label_pc_27c5, label %dec_label_pc_27ba, !insn.addr !591

dec_label_pc_27ba:                                ; preds = %dec_label_pc_27b4
  %8 = add i32 %2, add (i32 ptrtoint (i32* @global_var_382a to i32), i32 -16118), !insn.addr !592
  store i32 %8, i32* %stack_var_-16.0.reg2mem, !insn.addr !593
  br label %dec_label_pc_27ce, !insn.addr !593

dec_label_pc_27c5:                                ; preds = %dec_label_pc_27b4
  %9 = add i32 %2, add (i32 ptrtoint (i32* @global_var_382a to i32), i32 -16459), !insn.addr !594
  store i32 %9, i32* %stack_var_-16.0.reg2mem, !insn.addr !595
  br label %dec_label_pc_27ce, !insn.addr !595

dec_label_pc_27ce:                                ; preds = %dec_label_pc_27c5, %dec_label_pc_27ba, %dec_label_pc_27a9
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  ret i32 %stack_var_-16.0.reload, !insn.addr !596

; uselistorder directives
  uselistorder i32* %stack_var_-16.0.reg2mem, { 0, 3, 2, 1 }
}

define i32 @state_machine(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_27de:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !597
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !598
  %3 = icmp eq i32 %arg2, 3, !insn.addr !599
  br i1 %3, label %dec_label_pc_2851, label %dec_label_pc_27f5, !insn.addr !600

dec_label_pc_27f5:                                ; preds = %dec_label_pc_27de
  %4 = icmp sgt i32 %arg2, 3, !insn.addr !601
  store i32 3, i32* %eax.0.reg2mem, !insn.addr !601
  br i1 %4, label %dec_label_pc_286a, label %dec_label_pc_27fb, !insn.addr !601

dec_label_pc_27fb:                                ; preds = %dec_label_pc_27f5
  store i32 2, i32* %eax.0.reg2mem
  switch i32 %arg2, label %dec_label_pc_286a.fold.split [
    i32 2, label %dec_label_pc_286a
    i32 0, label %dec_label_pc_2815
    i32 1, label %dec_label_pc_2829
  ]

dec_label_pc_2815:                                ; preds = %dec_label_pc_27fb
  %5 = icmp eq i32 %arg1, 1, !insn.addr !602
  %. = zext i1 %5 to i32
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !603
  br label %dec_label_pc_286a, !insn.addr !603

dec_label_pc_2829:                                ; preds = %dec_label_pc_27fb
  %6 = icmp eq i32 %arg1, 2, !insn.addr !604
  %7 = icmp eq i1 %6, false, !insn.addr !605
  store i32 2, i32* %eax.0.reg2mem, !insn.addr !605
  br i1 %7, label %dec_label_pc_2836, label %dec_label_pc_286a, !insn.addr !605

dec_label_pc_2836:                                ; preds = %dec_label_pc_2829
  %8 = icmp eq i32 %arg1, 99, !insn.addr !606
  %9 = icmp eq i1 %8, false, !insn.addr !607
  %.1 = select i1 %9, i32 1, i32 3
  store i32 %.1, i32* %eax.0.reg2mem, !insn.addr !608
  br label %dec_label_pc_286a, !insn.addr !608

dec_label_pc_2851:                                ; preds = %dec_label_pc_27de
  %10 = icmp eq i32 %arg1, 0, !insn.addr !609
  %11 = icmp eq i1 %10, false, !insn.addr !610
  %.2 = select i1 %11, i32 3, i32 0
  store i32 %.2, i32* %eax.0.reg2mem, !insn.addr !611
  br label %dec_label_pc_286a, !insn.addr !611

dec_label_pc_286a.fold.split:                     ; preds = %dec_label_pc_27fb
  store i32 3, i32* %eax.0.reg2mem
  br label %dec_label_pc_286a

dec_label_pc_286a:                                ; preds = %dec_label_pc_27fb, %dec_label_pc_286a.fold.split, %dec_label_pc_27f5, %dec_label_pc_2851, %dec_label_pc_2836, %dec_label_pc_2829, %dec_label_pc_2815
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !612

; uselistorder directives
  uselistorder i32* %eax.0.reg2mem, { 0, 1, 3, 5, 6, 7, 4, 2 }
  uselistorder i32 %arg1, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_286a, { 1, 3, 4, 5, 6, 0, 2 }
}

define i32 @state_idle(i32 %arg1) local_unnamed_addr {
dec_label_pc_286c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !613
  %3 = icmp eq i32 %arg1, 1, !insn.addr !614
  %4 = zext i1 %3 to i32, !insn.addr !615
  ret i32 %4, !insn.addr !616
}

define i32 @state_processing(i32 %arg1) local_unnamed_addr {
dec_label_pc_2889:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !617
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !618
  %3 = icmp eq i32 %arg1, 2, !insn.addr !619
  %4 = icmp eq i1 %3, false, !insn.addr !620
  store i32 2, i32* %eax.0.reg2mem, !insn.addr !620
  br i1 %4, label %dec_label_pc_28a7, label %dec_label_pc_28b9, !insn.addr !620

dec_label_pc_28a7:                                ; preds = %dec_label_pc_2889
  %5 = icmp eq i32 %arg1, 99, !insn.addr !621
  %6 = icmp eq i1 %5, false, !insn.addr !622
  %. = select i1 %6, i32 1, i32 3
  store i32 %., i32* %eax.0.reg2mem, !insn.addr !623
  br label %dec_label_pc_28b9, !insn.addr !623

dec_label_pc_28b9:                                ; preds = %dec_label_pc_28a7, %dec_label_pc_2889
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !624

; uselistorder directives
  uselistorder i32 99, { 1, 2, 0, 3 }
}

define i32 @state_done() local_unnamed_addr {
dec_label_pc_28bb:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !625
  ret i32 2, !insn.addr !626
}

define i32 @state_error(i32 %arg1) local_unnamed_addr {
dec_label_pc_28d3:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !627
  %3 = icmp eq i32 %arg1, 0, !insn.addr !628
  %4 = icmp eq i1 %3, false, !insn.addr !629
  %. = select i1 %4, i32 3, i32 0
  ret i32 %., !insn.addr !630
}

define i32 @fsm_func_table(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_28f8:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !631
  %storemerge.reg2mem = alloca i32, !insn.addr !631
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !632
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !633
  %4 = icmp ult i32 %arg2, 4
  store i32 3, i32* %storemerge.reg2mem, !insn.addr !634
  br i1 %4, label %dec_label_pc_294f, label %dec_label_pc_2961, !insn.addr !634

dec_label_pc_294f:                                ; preds = %dec_label_pc_28f8
  %5 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !635
  %6 = mul i32 %arg2, 4, !insn.addr !636
  %7 = add i32 %6, -28, !insn.addr !636
  %8 = add i32 %7, %5, !insn.addr !636
  %9 = inttoptr i32 %8 to i32*, !insn.addr !636
  %10 = load i32, i32* %9, align 4, !insn.addr !636
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !637
  br label %dec_label_pc_2961, !insn.addr !637

dec_label_pc_2961:                                ; preds = %dec_label_pc_28f8, %dec_label_pc_294f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %11 = call i32 @__readgsdword(i32 20), !insn.addr !638
  %12 = icmp eq i32 %3, %11, !insn.addr !638
  store i32 %storemerge.reload, i32* %eax.0.reg2mem, !insn.addr !639
  br i1 %12, label %dec_label_pc_2972, label %dec_label_pc_296d, !insn.addr !639

dec_label_pc_296d:                                ; preds = %dec_label_pc_2961
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !640
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !640
  br label %dec_label_pc_2972, !insn.addr !640

dec_label_pc_2972:                                ; preds = %dec_label_pc_296d, %dec_label_pc_2961
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !641

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2961, { 1, 0 }
}

define i32 @computed_goto(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_2974:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !642
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !643
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !644
  %4 = icmp ult i32 %arg2, 4
  br i1 %4, label %dec_label_pc_29d1, label %dec_label_pc_29ca, !insn.addr !645

dec_label_pc_29ca:                                ; preds = %dec_label_pc_2974
  %5 = call i32 @__readgsdword(i32 20), !insn.addr !646
  %6 = icmp eq i32 %3, %5, !insn.addr !646
  store i32 -1, i32* %eax.0.reg2mem, !insn.addr !647
  br i1 %6, label %dec_label_pc_2a16, label %dec_label_pc_2a11, !insn.addr !647

dec_label_pc_29d1:                                ; preds = %dec_label_pc_2974
  %7 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !648
  %8 = mul i32 %arg2, 4, !insn.addr !649
  %9 = add i32 %8, -28, !insn.addr !649
  %10 = add i32 %9, %7, !insn.addr !649
  %11 = inttoptr i32 %10 to i32*, !insn.addr !649
  %12 = load i32, i32* %11, align 4, !insn.addr !649
  ret i32 %12, !insn.addr !650

dec_label_pc_2a11:                                ; preds = %dec_label_pc_29ca
  %13 = call i32 @__stack_chk_fail_local(), !insn.addr !651
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !651
  br label %dec_label_pc_2a16, !insn.addr !651

dec_label_pc_2a16:                                ; preds = %dec_label_pc_2a11, %dec_label_pc_29ca
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !652

; uselistorder directives
  uselistorder i32 4, { 0, 11, 1, 12, 2, 16, 3, 4, 5, 6, 13, 7, 14, 8, 9, 15, 10 }
}

define i32 @obfuscated_cf(i32 %arg1) local_unnamed_addr {
dec_label_pc_2a18:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !653
  %3 = mul i32 %arg1, %arg1, !insn.addr !654
  %4 = icmp sgt i32 %3, -2, !insn.addr !655
  %5 = mul i32 %arg1, 2
  %6 = or i32 %5, 1
  %stack_var_-8.0 = select i1 %4, i32 %arg1, i32 %6
  %7 = mul i32 %stack_var_-8.0, 2, !insn.addr !656
  ret i32 %7, !insn.addr !657

; uselistorder directives
  uselistorder i32 -2, { 3, 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 0, 2, 3 }
}

define i32 @opaque_predicate(i32 %arg1) local_unnamed_addr {
dec_label_pc_2a50:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !658
  %3 = mul i32 %arg1, 2, !insn.addr !659
  ret i32 %3, !insn.addr !660
}

define i32 @overlapped_code(i32 %arg1) local_unnamed_addr {
dec_label_pc_2a83:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !661
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !662
  %3 = urem i32 %arg1, 2, !insn.addr !663
  %4 = icmp eq i32 %3, 0, !insn.addr !664
  br i1 %4, label %dec_label_pc_2aac, label %dec_label_pc_2a9e, !insn.addr !665

dec_label_pc_2a9e:                                ; preds = %dec_label_pc_2a83
  %5 = mul i32 %arg1, 3, !insn.addr !666
  %6 = add i32 %5, 1, !insn.addr !667
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !668
  br label %dec_label_pc_2ab8, !insn.addr !668

dec_label_pc_2aac:                                ; preds = %dec_label_pc_2a83
  %7 = icmp slt i32 %arg1, 0
  %8 = zext i1 %7 to i32, !insn.addr !669
  %9 = add i32 %8, %arg1, !insn.addr !670
  %10 = ashr i32 %9, 1, !insn.addr !671
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !671
  br label %dec_label_pc_2ab8, !insn.addr !671

dec_label_pc_2ab8:                                ; preds = %dec_label_pc_2aac, %dec_label_pc_2a9e
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !672

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 3, { 9, 0, 8, 4, 1, 5, 6, 2, 25, 10, 11, 12, 7, 13, 14, 15, 16, 17, 18, 19, 20, 26, 21, 27, 22, 28, 23, 24, 3 }
  uselistorder i32 %arg1, { 2, 0, 3, 1 }
}

define i32 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2aba:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !673
  %1 = load i32, i32* %0
  %stack_var_-32 = alloca i32, align 4
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !674
  %3 = call i32 @__readgsdword(i32 20), !insn.addr !675
  %4 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -11012), !insn.addr !676
  %5 = inttoptr i32 %4 to i8*, !insn.addr !677
  %6 = call i32 @puts(i8* %5), !insn.addr !678
  %7 = call i32 @non_local_jump(i32 5), !insn.addr !679
  %8 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10976), !insn.addr !680
  %9 = inttoptr i32 %8 to i8*, !insn.addr !681
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !682
  %11 = call i32 @non_local_jump(i32 -5), !insn.addr !683
  %12 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !684
  %13 = call i32 @cpp_exception(i32 5), !insn.addr !685
  %14 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10945), !insn.addr !686
  %15 = inttoptr i32 %14 to i8*, !insn.addr !687
  %16 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !688
  %17 = call i32 @cpp_exception(i32 -5), !insn.addr !689
  %18 = call i32 (i8*, ...) @printf(i8* %15), !insn.addr !690
  %19 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !691
  %20 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10912), !insn.addr !692
  %21 = inttoptr i32 %20 to i8*, !insn.addr !693
  %22 = call i32 (i8*, ...) @printf(i8* %21), !insn.addr !694
  %23 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !695
  %24 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10876), !insn.addr !696
  %25 = inttoptr i32 %24 to i8*, !insn.addr !697
  %26 = call i32 (i8*, ...) @printf(i8* %25), !insn.addr !698
  %27 = call i32 @state_machine(i32 1, i32 0), !insn.addr !699
  %28 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10839), !insn.addr !700
  %29 = inttoptr i32 %28 to i8*, !insn.addr !701
  %30 = call i32 (i8*, ...) @printf(i8* %29), !insn.addr !702
  %31 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !703
  %32 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10808), !insn.addr !704
  %33 = inttoptr i32 %32 to i8*, !insn.addr !705
  %34 = call i32 (i8*, ...) @printf(i8* %33), !insn.addr !706
  store i32 0, i32* %stack_var_-32, align 4, !insn.addr !707
  %35 = call i32 @computed_goto(i32* nonnull %stack_var_-32, i32 2), !insn.addr !708
  %36 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10777), !insn.addr !709
  %37 = inttoptr i32 %36 to i8*, !insn.addr !710
  %38 = call i32 (i8*, ...) @printf(i8* %37), !insn.addr !711
  %39 = call i32 @obfuscated_cf(i32 5), !insn.addr !712
  %40 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10747), !insn.addr !713
  %41 = inttoptr i32 %40 to i8*, !insn.addr !714
  %42 = call i32 (i8*, ...) @printf(i8* %41), !insn.addr !715
  %43 = call i32 @opaque_predicate(i32 5), !insn.addr !716
  %44 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10716), !insn.addr !717
  %45 = inttoptr i32 %44 to i8*, !insn.addr !718
  %46 = call i32 (i8*, ...) @printf(i8* %45), !insn.addr !719
  %47 = call i32 @overlapped_code(i32 5), !insn.addr !720
  %48 = add i32 %1, add (i32 ptrtoint ([9 x i8]* @global_var_34fe to i32), i32 -10680), !insn.addr !721
  %49 = inttoptr i32 %48 to i8*, !insn.addr !722
  %50 = call i32 (i8*, ...) @printf(i8* %49), !insn.addr !723
  %51 = call i32 @__readgsdword(i32 20), !insn.addr !724
  %52 = icmp eq i32 %3, %51, !insn.addr !724
  store i32 0, i32* %eax.0.reg2mem, !insn.addr !725
  br i1 %52, label %dec_label_pc_2ca9, label %dec_label_pc_2ca4, !insn.addr !725

dec_label_pc_2ca4:                                ; preds = %dec_label_pc_2aba
  %53 = call i32 @__stack_chk_fail_local(), !insn.addr !726
  store i32 %53, i32* %eax.0.reg2mem, !insn.addr !726
  br label %dec_label_pc_2ca9, !insn.addr !726

dec_label_pc_2ca9:                                ; preds = %dec_label_pc_2ca4, %dec_label_pc_2aba
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !727

; uselistorder directives
  uselistorder i32 ()* @__stack_chk_fail_local, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 2, { 25, 26, 18, 5, 6, 7, 17, 0, 27, 2, 28, 22, 1, 8, 9, 29, 10, 11, 19, 34, 35, 12, 20, 13, 30, 14, 21, 15, 23, 24, 31, 3, 32, 33, 4, 16 }
  uselistorder i32 10, { 4, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1, 2, 15, 0 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 2, 0, 1, 25 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i32 20, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2cae:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.ax(i32 %1), !insn.addr !728
  %3 = call i32 @test_control_flow_l1(), !insn.addr !729
  %4 = call i32 @test_control_flow_l2(), !insn.addr !730
  %5 = call i32 @test_control_flow_l3(), !insn.addr !731
  ret i32 0, !insn.addr !732

; uselistorder directives
  uselistorder i32 0, { 30, 0, 63, 55, 56, 57, 33, 66, 54, 67, 47, 68, 46, 69, 1, 70, 2, 71, 72, 73, 74, 3, 58, 64, 53, 4, 65, 6, 5, 36, 75, 76, 34, 77, 78, 79, 7, 41, 8, 9, 10, 37, 11, 12, 13, 14, 48, 80, 51, 81, 82, 15, 16, 18, 17, 83, 84, 85, 86, 42, 87, 19, 20, 21, 35, 38, 22, 39, 23, 24, 25, 40, 26, 27, 49, 28, 50, 88, 89, 29, 31, 43, 44, 52, 45, 90, 32, 59, 60, 61, 62 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.ax, { 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_2cd8:
  ret i32 %arg1, !insn.addr !733
}

define i32 @__stack_chk_fail_local() local_unnamed_addr {
dec_label_pc_2ce0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !734
  call void @__stack_chk_fail(), !insn.addr !735
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !736
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_2d00:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !737
  %ebx.0.reg2mem = alloca i32, !insn.addr !737
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !738
  %3 = add i32 %1, add (i32 ptrtoint (i32* @global_var_32bf to i32), i32 -232), !insn.addr !739
  %4 = inttoptr i32 %3 to i32*, !insn.addr !739
  %5 = load i32, i32* %4, align 4, !insn.addr !739
  %6 = icmp eq i32 %5, -1, !insn.addr !740
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !741
  store i32 -1, i32* %merge.reg2mem, !insn.addr !741
  br i1 %6, label %dec_label_pc_2d3d, label %dec_label_pc_2d30, !insn.addr !741

dec_label_pc_2d30:                                ; preds = %dec_label_pc_2d00, %dec_label_pc_2d30
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !742
  %8 = inttoptr i32 %7 to i32*, !insn.addr !742
  %9 = load i32, i32* %8, align 4, !insn.addr !742
  %10 = icmp eq i32 %9, -1, !insn.addr !743
  %11 = icmp eq i1 %10, false, !insn.addr !744
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !744
  store i32 %9, i32* %merge.reg2mem, !insn.addr !744
  br i1 %11, label %dec_label_pc_2d30, label %dec_label_pc_2d3d, !insn.addr !744

dec_label_pc_2d3d:                                ; preds = %dec_label_pc_2d30, %dec_label_pc_2d00
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !745

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 37, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 17, 18, 2, 19, 3, 20, 21, 22, 23, 24, 4, 25, 26, 27, 0, 28, 29, 30, 31, 32, 33, 34, 35, 36 }
  uselistorder i32 -1, { 18, 0, 19, 1, 2, 12, 3, 4, 23, 24, 20, 21, 22, 5, 6, 7, 8, 14, 9, 10, 13, 15, 11, 16, 17 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 3, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_2d30, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_2d4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !746
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !747
  ret i32 %3, !insn.addr !748

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 6, 1, 5, 4, 3, 2, 0 }
  uselistorder i32 1, { 76, 78, 77, 75, 74, 73, 165, 166, 191, 79, 72, 206, 207, 80, 71, 70, 167, 69, 192, 81, 68, 193, 83, 82, 67, 66, 65, 158, 84, 64, 168, 63, 159, 169, 157, 85, 62, 170, 86, 61, 194, 88, 87, 60, 59, 58, 57, 56, 55, 89, 54, 90, 53, 52, 51, 50, 49, 91, 48, 195, 171, 200, 199, 198, 197, 196, 93, 92, 47, 208, 201, 95, 94, 46, 45, 202, 97, 96, 44, 43, 42, 41, 209, 98, 40, 210, 211, 99, 39, 189, 100, 38, 101, 190, 102, 37, 212, 105, 104, 103, 36, 213, 108, 107, 106, 35, 214, 155, 114, 113, 112, 111, 110, 109, 34, 115, 33, 172, 32, 215, 116, 31, 216, 217, 173, 118, 117, 30, 219, 218, 203, 122, 121, 120, 119, 29, 174, 175, 176, 177, 178, 179, 28, 27, 220, 123, 125, 127, 153, 128, 126, 124, 26, 163, 164, 25, 221, 131, 156, 132, 130, 129, 24, 222, 204, 135, 134, 133, 23, 136, 22, 223, 138, 137, 21, 152, 154, 180, 224, 140, 139, 20, 141, 19, 160, 144, 143, 142, 18, 161, 145, 17, 16, 162, 146, 15, 181, 147, 14, 182, 148, 13, 183, 184, 185, 149, 186, 187, 150, 12, 188, 11, 10, 9, 8, 7, 6, 151, 5, 4, 3, 2, 205, 1, 0 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare void @__cxa_finalize(i32*) local_unnamed_addr

declare i32 @__asm_hlt() local_unnamed_addr

declare i32 @__readgsdword(i32) local_unnamed_addr

!0 = !{i64 4104}
!1 = !{i64 4127}
!2 = !{i64 4132}
!3 = !{i64 4141}
!4 = !{i64 4260}
!5 = !{i64 4276}
!6 = !{i64 4292}
!7 = !{i64 4308}
!8 = !{i64 4324}
!9 = !{i64 4340}
!10 = !{i64 4356}
!11 = !{i64 4383}
!12 = !{i64 4400}
!13 = !{i64 4406}
!14 = !{i64 4411}
!15 = !{i64 4415}
!16 = !{i64 4419}
!17 = !{i64 4432}
!18 = !{i64 4449}
!19 = !{i64 4488}
!20 = !{i64 4496}
!21 = !{i64 4566}
!22 = !{i64 4576}
!23 = !{i64 4584}
!24 = !{i64 4600}
!25 = !{i64 4607}
!26 = !{i64 4609}
!27 = !{i64 4615}
!28 = !{i64 4617}
!29 = !{i64 4622}
!30 = !{i64 4630}
!31 = !{i64 4635}
!32 = !{i64 4694}
!33 = !{i64 4699}
!34 = !{i64 4713}
!35 = !{i64 4724}
!36 = !{i64 4732}
!37 = !{i64 4736}
!38 = !{i64 4747}
!39 = !{i64 4763}
!40 = !{i64 4771}
!41 = !{i64 4779}
!42 = !{i64 4789}
!43 = !{i64 4797}
!44 = !{i64 4811}
!45 = !{i64 4820}
!46 = !{i64 4828}
!47 = !{i64 4842}
!48 = !{i64 4857}
!49 = !{i64 4865}
!50 = !{i64 4879}
!51 = !{i64 4885}
!52 = !{i64 4908}
!53 = !{i64 4909}
!54 = !{i64 4916}
!55 = !{i64 4930}
!56 = !{i64 4936}
!57 = !{i64 4942}
!58 = !{i64 4948}
!59 = !{i64 4954}
!60 = !{i64 4968}
!61 = !{i64 4997}
!62 = !{i64 4998}
!63 = !{i64 5005}
!64 = !{i64 5015}
!65 = !{i64 5019}
!66 = !{i64 5028}
!67 = !{i64 5032}
!68 = !{i64 5041}
!69 = !{i64 5045}
!70 = !{i64 5054}
!71 = !{i64 5060}
!72 = !{i64 5061}
!73 = !{i64 5068}
!74 = !{i64 5078}
!75 = !{i64 5082}
!76 = !{i64 5091}
!77 = !{i64 5095}
!78 = !{i64 5104}
!79 = !{i64 5108}
!80 = !{i64 5117}
!81 = !{i64 5121}
!82 = !{i64 5130}
!83 = !{i64 5134}
!84 = !{i64 5143}
!85 = !{i64 5149}
!86 = !{i64 5150}
!87 = !{i64 5160}
!88 = !{i64 5184}
!89 = !{i64 5188}
!90 = !{i64 5194}
!91 = !{i64 5196}
!92 = !{i64 5200}
!93 = !{i64 5264}
!94 = !{i64 5272}
!95 = !{i64 5286}
!96 = !{i64 5277}
!97 = !{i64 5291}
!98 = !{i64 5294}
!99 = !{i64 5301}
!100 = !{i64 5303}
!101 = !{i64 5382}
!102 = !{i64 5383}
!103 = !{i64 5390}
!104 = !{i64 5400}
!105 = !{i64 5404}
!106 = !{i64 5410}
!107 = !{i64 5453}
!108 = !{i64 5454}
!109 = !{i64 5464}
!110 = !{i64 5481}
!111 = !{i64 5485}
!112 = !{i64 5491}
!113 = !{i64 5519}
!114 = !{i64 5521}
!115 = !{i64 5527}
!116 = !{i64 5530}
!117 = !{i64 5543}
!118 = !{i64 5544}
!119 = !{i64 5554}
!120 = !{i64 5596}
!121 = !{i64 5602}
!122 = !{i64 5603}
!123 = !{i64 5613}
!124 = !{i64 5663}
!125 = !{i64 5667}
!126 = !{i64 5654}
!127 = !{i64 5659}
!128 = !{i64 5683}
!129 = !{i64 5684}
!130 = !{i64 5694}
!131 = !{i64 5704}
!132 = !{i64 5733}
!133 = !{i64 5738}
!134 = !{i64 5746}
!135 = !{i64 5752}
!136 = !{i64 5753}
!137 = !{i64 5763}
!138 = !{i64 5824}
!139 = !{i64 5830}
!140 = !{i64 5831}
!141 = !{i64 5836}
!142 = !{i64 5841}
!143 = !{i64 5851}
!144 = !{i64 5916}
!145 = !{i64 5920}
!146 = !{i64 5923}
!147 = !{i64 5930}
!148 = !{i64 5940}
!149 = !{i64 5950}
!150 = !{i64 5957}
!151 = !{i64 5959}
!152 = !{i64 5965}
!153 = !{i64 5966}
!154 = !{i64 5976}
!155 = !{i64 6031}
!156 = !{i64 6005}
!157 = !{i64 6008}
!158 = !{i64 6021}
!159 = !{i64 6037}
!160 = !{i64 6048}
!161 = !{i64 6081}
!162 = !{i64 6088}
!163 = !{i64 6089}
!164 = !{i64 6099}
!165 = !{i64 6109}
!166 = !{i64 6113}
!167 = !{i64 6142}
!168 = !{i64 6147}
!169 = !{i64 6154}
!170 = !{i64 6165}
!171 = !{i64 6173}
!172 = !{i64 6189}
!173 = !{i64 6191}
!174 = !{i64 6195}
!175 = !{i64 6207}
!176 = !{i64 6221}
!177 = !{i64 6227}
!178 = !{i64 6228}
!179 = !{i64 6245}
!180 = !{i64 6257}
!181 = !{i64 6263}
!182 = !{i64 6264}
!183 = !{i64 6277}
!184 = !{i64 6289}
!185 = !{i64 6295}
!186 = !{i64 6296}
!187 = !{i64 6309}
!188 = !{i64 6328}
!189 = !{i64 6341}
!190 = !{i64 6353}
!191 = !{i64 6359}
!192 = !{i64 6360}
!193 = !{i64 6373}
!194 = !{i64 6392}
!195 = !{i64 6407}
!196 = !{i64 6419}
!197 = !{i64 6425}
!198 = !{i64 6426}
!199 = !{i64 6441}
!200 = !{i64 6460}
!201 = !{i64 6475}
!202 = !{i64 6494}
!203 = !{i64 6515}
!204 = !{i64 6527}
!205 = !{i64 6533}
!206 = !{i64 6534}
!207 = !{i64 6547}
!208 = !{i64 6559}
!209 = !{i64 6565}
!210 = !{i64 6566}
!211 = !{i64 6579}
!212 = !{i64 6591}
!213 = !{i64 6597}
!214 = !{i64 6598}
!215 = !{i64 6611}
!216 = !{i64 6623}
!217 = !{i64 6629}
!218 = !{i64 6630}
!219 = !{i64 6643}
!220 = !{i64 6655}
!221 = !{i64 6661}
!222 = !{i64 6662}
!223 = !{i64 6675}
!224 = !{i64 6687}
!225 = !{i64 6693}
!226 = !{i64 6694}
!227 = !{i64 6707}
!228 = !{i64 6719}
!229 = !{i64 6725}
!230 = !{i64 6726}
!231 = !{i64 6739}
!232 = !{i64 6751}
!233 = !{i64 6757}
!234 = !{i64 6758}
!235 = !{i64 6774}
!236 = !{i64 6786}
!237 = !{i64 6792}
!238 = !{i64 6793}
!239 = !{i64 6809}
!240 = !{i64 6821}
!241 = !{i64 6827}
!242 = !{i64 6828}
!243 = !{i64 6843}
!244 = !{i64 6855}
!245 = !{i64 6861}
!246 = !{i64 6862}
!247 = !{i64 6875}
!248 = !{i64 6887}
!249 = !{i64 6893}
!250 = !{i64 6894}
!251 = !{i64 6907}
!252 = !{i64 6926}
!253 = !{i64 6939}
!254 = !{i64 6951}
!255 = !{i64 6957}
!256 = !{i64 6958}
!257 = !{i64 6971}
!258 = !{i64 6983}
!259 = !{i64 6989}
!260 = !{i64 6990}
!261 = !{i64 7003}
!262 = !{i64 7022}
!263 = !{i64 7035}
!264 = !{i64 7047}
!265 = !{i64 7053}
!266 = !{i64 7054}
!267 = !{i64 7069}
!268 = !{i64 7081}
!269 = !{i64 7087}
!270 = !{i64 7088}
!271 = !{i64 7103}
!272 = !{i64 7122}
!273 = !{i64 7135}
!274 = !{i64 7136}
!275 = !{i64 7141}
!276 = !{i64 7146}
!277 = !{i64 7156}
!278 = !{i64 7284}
!279 = !{i64 7282}
!280 = !{i64 7288}
!281 = !{i64 7291}
!282 = !{i64 7303}
!283 = !{i64 7310}
!284 = !{i64 7312}
!285 = !{i64 7314}
!286 = !{i64 7322}
!287 = !{i64 7324}
!288 = !{i64 7332}
!289 = !{i64 7272}
!290 = !{i64 7342}
!291 = !{i64 7349}
!292 = !{i64 7351}
!293 = !{i64 7357}
!294 = !{i64 7358}
!295 = !{i64 7368}
!296 = !{i64 7390}
!297 = !{i64 7378}
!298 = !{i64 7393}
!299 = !{i64 7395}
!300 = !{i64 7406}
!301 = !{i64 7411}
!302 = !{i64 7417}
!303 = !{i64 7424}
!304 = !{i64 7425}
!305 = !{i64 7435}
!306 = !{i64 7445}
!307 = !{i64 7449}
!308 = !{i64 7461}
!309 = !{i64 7470}
!310 = !{i64 7482}
!311 = !{i64 7485}
!312 = !{i64 7487}
!313 = !{i64 7501}
!314 = !{i64 7509}
!315 = !{i64 7523}
!316 = !{i64 7528}
!317 = !{i64 7551}
!318 = !{i64 7532}
!319 = !{i64 7536}
!320 = !{i64 7552}
!321 = !{i64 7562}
!322 = !{i64 7573}
!323 = !{i64 7577}
!324 = !{i64 7625}
!325 = !{i64 7630}
!326 = !{i64 7567}
!327 = !{i64 7636}
!328 = !{i64 7639}
!329 = !{i64 7646}
!330 = !{i64 7648}
!331 = !{i64 7846}
!332 = !{i64 7847}
!333 = !{i64 7857}
!334 = !{i64 7907}
!335 = !{i64 7889}
!336 = !{i64 7893}
!337 = !{i64 7897}
!338 = !{i64 7913}
!339 = !{i64 7927}
!340 = !{i64 7932}
!341 = !{i64 7935}
!342 = !{i64 7936}
!343 = !{i64 7946}
!344 = !{i64 7998}
!345 = !{i64 7975}
!346 = !{i64 7982}
!347 = !{i64 7988}
!348 = !{i64 8004}
!349 = !{i64 8005}
!350 = !{i64 8015}
!351 = !{i64 8032}
!352 = !{i64 8034}
!353 = !{i64 8042}
!354 = !{i64 8047}
!355 = !{i64 8051}
!356 = !{i64 8060}
!357 = !{i64 8061}
!358 = !{i64 8071}
!359 = !{i64 8085}
!360 = !{i64 8097}
!361 = !{i64 8104}
!362 = !{i64 8112}
!363 = !{i64 8117}
!364 = !{i64 8118}
!365 = !{i64 8128}
!366 = !{i64 8142}
!367 = !{i64 8152}
!368 = !{i64 8159}
!369 = !{i64 8167}
!370 = !{i64 8172}
!371 = !{i64 8176}
!372 = !{i64 8177}
!373 = !{i64 8187}
!374 = !{i64 8197}
!375 = !{i64 8201}
!376 = !{i64 8211}
!377 = !{i64 8214}
!378 = !{i64 8216}
!379 = !{i64 8229}
!380 = !{i64 8232}
!381 = !{i64 8234}
!382 = !{i64 8241}
!383 = !{i64 8249}
!384 = !{i64 8264}
!385 = !{i64 8266}
!386 = !{i64 8274}
!387 = !{i64 8279}
!388 = !{i64 8283}
!389 = !{i64 8284}
!390 = !{i64 8294}
!391 = !{i64 8304}
!392 = !{i64 8308}
!393 = !{i64 8318}
!394 = !{i64 8324}
!395 = !{i64 8332}
!396 = !{i64 8337}
!397 = !{i64 8341}
!398 = !{i64 8352}
!399 = !{i64 8377}
!400 = !{i64 8385}
!401 = !{i64 8398}
!402 = !{i64 8401}
!403 = !{i64 8409}
!404 = !{i64 8426}
!405 = !{i64 8429}
!406 = !{i64 8430}
!407 = !{i64 8440}
!408 = !{i64 8450}
!409 = !{i64 8493}
!410 = !{i64 8435}
!411 = !{i64 8511}
!412 = !{i64 8523}
!413 = !{i64 8529}
!414 = !{i64 8536}
!415 = !{i64 8538}
!416 = !{i64 8544}
!417 = !{i64 8552}
!418 = !{i64 8565}
!419 = !{i64 8568}
!420 = !{i64 8569}
!421 = !{i64 8579}
!422 = !{i64 8647}
!423 = !{i64 8576}
!424 = !{i64 8625}
!425 = !{i64 8608}
!426 = !{i64 8618}
!427 = !{i64 8620}
!428 = !{i64 8637}
!429 = !{i64 8653}
!430 = !{i64 8654}
!431 = !{i64 8659}
!432 = !{i64 8665}
!433 = !{i64 8676}
!434 = !{i64 8690}
!435 = !{i64 8696}
!436 = !{i64 8697}
!437 = !{i64 8710}
!438 = !{i64 8722}
!439 = !{i64 8728}
!440 = !{i64 8729}
!441 = !{i64 8737}
!442 = !{i64 8751}
!443 = !{i64 8763}
!444 = !{i64 8769}
!445 = !{i64 8770}
!446 = !{i64 8783}
!447 = !{i64 8795}
!448 = !{i64 8801}
!449 = !{i64 8802}
!450 = !{i64 8815}
!451 = !{i64 8834}
!452 = !{i64 8847}
!453 = !{i64 8866}
!454 = !{i64 8879}
!455 = !{i64 8891}
!456 = !{i64 8897}
!457 = !{i64 8898}
!458 = !{i64 8911}
!459 = !{i64 8930}
!460 = !{i64 9014}
!461 = !{i64 9009}
!462 = !{i64 9018}
!463 = !{i64 9021}
!464 = !{i64 9023}
!465 = !{i64 9038}
!466 = !{i64 9050}
!467 = !{i64 9056}
!468 = !{i64 9057}
!469 = !{i64 9070}
!470 = !{i64 9082}
!471 = !{i64 9088}
!472 = !{i64 9089}
!473 = !{i64 9102}
!474 = !{i64 9114}
!475 = !{i64 9120}
!476 = !{i64 9121}
!477 = !{i64 9129}
!478 = !{i64 9143}
!479 = !{i64 9155}
!480 = !{i64 9161}
!481 = !{i64 9162}
!482 = !{i64 9175}
!483 = !{i64 9187}
!484 = !{i64 9193}
!485 = !{i64 9194}
!486 = !{i64 9209}
!487 = !{i64 9221}
!488 = !{i64 9227}
!489 = !{i64 9228}
!490 = !{i64 9243}
!491 = !{i64 9255}
!492 = !{i64 9261}
!493 = !{i64 9262}
!494 = !{i64 9275}
!495 = !{i64 9282}
!496 = !{i64 9294}
!497 = !{i64 9300}
!498 = !{i64 9301}
!499 = !{i64 9316}
!500 = !{i64 9328}
!501 = !{i64 9334}
!502 = !{i64 9335}
!503 = !{i64 9350}
!504 = !{i64 9369}
!505 = !{i64 9377}
!506 = !{i64 9428}
!507 = !{i64 9440}
!508 = !{i64 9446}
!509 = !{i64 9447}
!510 = !{i64 9459}
!511 = !{i64 9466}
!512 = !{i64 9468}
!513 = !{i64 9477}
!514 = !{i64 9478}
!515 = !{i64 9489}
!516 = !{i64 9506}
!517 = !{i64 9516}
!518 = !{i64 9528}
!519 = !{i64 9530}
!520 = !{i64 9532}
!521 = !{i64 9536}
!522 = !{i64 9553}
!523 = !{i64 9562}
!524 = !{i64 9579}
!525 = !{i64 9587}
!526 = !{i64 9589}
!527 = !{i64 9600}
!528 = !{i64 9608}
!529 = !{i64 9618}
!530 = !{i64 9622}
!531 = !{i64 9635}
!532 = !{i64 9650}
!533 = !{i64 9658}
!534 = !{i64 9674}
!535 = !{i64 9677}
!536 = !{i64 9685}
!537 = !{i64 9698}
!538 = !{i64 9702}
!539 = !{i64 9710}
!540 = !{i64 9723}
!541 = !{i64 9728}
!542 = !{i64 9729}
!543 = !{i64 9736}
!544 = !{i64 9746}
!545 = !{i64 9750}
!546 = !{i64 9755}
!547 = !{i64 9756}
!548 = !{i64 9759}
!549 = !{i64 9767}
!550 = !{i64 9768}
!551 = !{i64 9775}
!552 = !{i64 9785}
!553 = !{i64 9789}
!554 = !{i64 9794}
!555 = !{i64 9795}
!556 = !{i64 9800}
!557 = !{i64 9808}
!558 = !{i64 9816}
!559 = !{i64 9829}
!560 = !{i64 9833}
!561 = !{i64 9841}
!562 = !{i64 9854}
!563 = !{i64 9858}
!564 = !{i64 9866}
!565 = !{i64 9879}
!566 = !{i64 9883}
!567 = !{i64 9891}
!568 = !{i64 9909}
!569 = !{i64 9914}
!570 = !{i64 9922}
!571 = !{i64 9940}
!572 = !{i64 9945}
!573 = !{i64 9946}
!574 = !{i64 9956}
!575 = !{i64 9966}
!576 = !{i64 10072}
!577 = !{i64 9951}
!578 = !{i64 10090}
!579 = !{i64 10105}
!580 = !{i64 10111}
!581 = !{i64 10118}
!582 = !{i64 10120}
!583 = !{i64 10126}
!584 = !{i64 10127}
!585 = !{i64 10137}
!586 = !{i64 10147}
!587 = !{i64 10151}
!588 = !{i64 10153}
!589 = !{i64 10162}
!590 = !{i64 10164}
!591 = !{i64 10168}
!592 = !{i64 10170}
!593 = !{i64 10179}
!594 = !{i64 10181}
!595 = !{i64 10187}
!596 = !{i64 10205}
!597 = !{i64 10206}
!598 = !{i64 10213}
!599 = !{i64 10223}
!600 = !{i64 10227}
!601 = !{i64 10233}
!602 = !{i64 10261}
!603 = !{i64 10279}
!604 = !{i64 10281}
!605 = !{i64 10285}
!606 = !{i64 10294}
!607 = !{i64 10298}
!608 = !{i64 10312}
!609 = !{i64 10321}
!610 = !{i64 10325}
!611 = !{i64 10339}
!612 = !{i64 10347}
!613 = !{i64 10355}
!614 = !{i64 10365}
!615 = !{i64 10369}
!616 = !{i64 10376}
!617 = !{i64 10377}
!618 = !{i64 10384}
!619 = !{i64 10394}
!620 = !{i64 10398}
!621 = !{i64 10407}
!622 = !{i64 10411}
!623 = !{i64 10420}
!624 = !{i64 10426}
!625 = !{i64 10434}
!626 = !{i64 10450}
!627 = !{i64 10458}
!628 = !{i64 10468}
!629 = !{i64 10472}
!630 = !{i64 10487}
!631 = !{i64 10488}
!632 = !{i64 10498}
!633 = !{i64 10508}
!634 = !{i64 10560}
!635 = !{i64 10493}
!636 = !{i64 10578}
!637 = !{i64 10590}
!638 = !{i64 10596}
!639 = !{i64 10603}
!640 = !{i64 10605}
!641 = !{i64 10611}
!642 = !{i64 10612}
!643 = !{i64 10622}
!644 = !{i64 10638}
!645 = !{i64 10690}
!646 = !{i64 10760}
!647 = !{i64 10767}
!648 = !{i64 10617}
!649 = !{i64 10708}
!650 = !{i64 10713}
!651 = !{i64 10769}
!652 = !{i64 10775}
!653 = !{i64 10786}
!654 = !{i64 10805}
!655 = !{i64 10811}
!656 = !{i64 10824}
!657 = !{i64 10831}
!658 = !{i64 10842}
!659 = !{i64 10868}
!660 = !{i64 10882}
!661 = !{i64 10883}
!662 = !{i64 10890}
!663 = !{i64 10903}
!664 = !{i64 10906}
!665 = !{i64 10908}
!666 = !{i64 10917}
!667 = !{i64 10919}
!668 = !{i64 10922}
!669 = !{i64 10929}
!670 = !{i64 10932}
!671 = !{i64 10934}
!672 = !{i64 10937}
!673 = !{i64 10938}
!674 = !{i64 10949}
!675 = !{i64 10960}
!676 = !{i64 10974}
!677 = !{i64 10980}
!678 = !{i64 10981}
!679 = !{i64 10994}
!680 = !{i64 11006}
!681 = !{i64 11012}
!682 = !{i64 11013}
!683 = !{i64 11026}
!684 = !{i64 11045}
!685 = !{i64 11058}
!686 = !{i64 11070}
!687 = !{i64 11076}
!688 = !{i64 11077}
!689 = !{i64 11090}
!690 = !{i64 11109}
!691 = !{i64 11126}
!692 = !{i64 11138}
!693 = !{i64 11144}
!694 = !{i64 11145}
!695 = !{i64 11160}
!696 = !{i64 11172}
!697 = !{i64 11178}
!698 = !{i64 11179}
!699 = !{i64 11194}
!700 = !{i64 11206}
!701 = !{i64 11212}
!702 = !{i64 11213}
!703 = !{i64 11228}
!704 = !{i64 11240}
!705 = !{i64 11246}
!706 = !{i64 11247}
!707 = !{i64 11255}
!708 = !{i64 11292}
!709 = !{i64 11304}
!710 = !{i64 11310}
!711 = !{i64 11311}
!712 = !{i64 11324}
!713 = !{i64 11336}
!714 = !{i64 11342}
!715 = !{i64 11343}
!716 = !{i64 11356}
!717 = !{i64 11368}
!718 = !{i64 11374}
!719 = !{i64 11375}
!720 = !{i64 11388}
!721 = !{i64 11400}
!722 = !{i64 11406}
!723 = !{i64 11407}
!724 = !{i64 11419}
!725 = !{i64 11426}
!726 = !{i64 11428}
!727 = !{i64 11437}
!728 = !{i64 11448}
!729 = !{i64 11458}
!730 = !{i64 11463}
!731 = !{i64 11468}
!732 = !{i64 11479}
!733 = !{i64 11483}
!734 = !{i64 11493}
!735 = !{i64 11507}
!736 = !{i64 11518}
!737 = !{i64 11520}
!738 = !{i64 11524}
!739 = !{i64 11535}
!740 = !{i64 11541}
!741 = !{i64 11544}
!742 = !{i64 11570}
!743 = !{i64 11576}
!744 = !{i64 11579}
!745 = !{i64 11585}
!746 = !{i64 11604}
!747 = !{i64 11615}
!748 = !{i64 11624}
