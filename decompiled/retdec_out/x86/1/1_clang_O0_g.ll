source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_1f4 = global i32 1
@global_var_5184 = constant i32 222429829
@global_var_4fa5 = constant i32 -1207959552
@global_var_6ecc = global i32 9616
@global_var_3f4 = global i32* @global_var_6ecc
@global_var_4ce4 = local_unnamed_addr constant i32** @global_var_3f4
@global_var_394 = global i32 65538
@global_var_4c84 = local_unnamed_addr constant i32* @global_var_394
@global_var_334 = constant [4 x i8] c"1.3\00"
@global_var_4c24 = local_unnamed_addr constant [4 x i8]* @global_var_334
@global_var_4b84 = local_unnamed_addr constant i32 60
@global_var_4b26 = local_unnamed_addr constant i32 42272782
@global_var_4af4 = local_unnamed_addr constant i32 28
@global_var_4a34 = local_unnamed_addr constant i32 28
@global_var_49c4 = constant i32 135151872
@global_var_4654 = constant [24 x i8] c"(opaque_predicate): %d\0A\00"
@global_var_4564 = constant [10 x i8] c"ump): %d\0A\00"
@global_var_4354 = constant i32 1027416193
@global_var_42d5 = constant [11 x i8] c"inue): %d\0A\00"
@global_var_41f4 = local_unnamed_addr constant [29 x i8] c"-L1-10 (switch_default): %d\0A\00"
@global_var_40d5 = local_unnamed_addr constant i32 -427777561
@global_var_15af = local_unnamed_addr constant i32 70
@0 = external global i32
@global_var_3e8 = global i1 false

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

define i32* @function_1080(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32* @function_1090(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_10a0() local_unnamed_addr {
dec_label_pc_10a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !10
}

define i32 @_start(i32 %arg1) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %3 = call i32 @function_10dc(i32 %2), !insn.addr !11
  %4 = bitcast i32* %stack_var_4 to i8**
  %5 = add i32 %1, 24372, !insn.addr !12
  %6 = inttoptr i32 %5 to i32*, !insn.addr !12
  %7 = load i32, i32* %6, align 4, !insn.addr !12
  %8 = call i32 @__libc_start_main(i32 %7, i32 %arg1, i8** nonnull %4, void ()* null, void ()* null, void ()* bitcast (i32* @0 to void ()*)), !insn.addr !13
  %9 = call i32 @__asm_hlt(), !insn.addr !14
  unreachable, !insn.addr !14

; uselistorder directives
  uselistorder i32* %0, { 1, 0 }
}

define i32 @function_10dc(i32 %arg1) local_unnamed_addr {
dec_label_pc_10dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_10e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !16
}

define i32 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !17
  %3 = add i32 %1, 24375, !insn.addr !18
  ret i32 %3, !insn.addr !19
}

define i32 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1130:
  %0 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !20
  ret i32 0, !insn.addr !21
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i32
  %eax.0.reg2mem = alloca i32, !insn.addr !22
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.di(i32 %1), !insn.addr !23
  %3 = add i32 %1, 24223, !insn.addr !24
  %4 = inttoptr i32 %3 to i8*, !insn.addr !24
  %5 = load i8, i8* %4, align 1, !insn.addr !24
  %6 = icmp eq i8 %5, 0, !insn.addr !24
  %7 = icmp eq i1 %6, false, !insn.addr !25
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !25
  br i1 %7, label %dec_label_pc_1202, label %dec_label_pc_11a1, !insn.addr !25

dec_label_pc_11a1:                                ; preds = %dec_label_pc_1180
  %8 = add i32 %1, 24163, !insn.addr !26
  %9 = inttoptr i32 %8 to i32*, !insn.addr !26
  %10 = load i32, i32* %9, align 4, !insn.addr !26
  %11 = icmp eq i32 %10, 0, !insn.addr !27
  br i1 %11, label %dec_label_pc_11be, label %dec_label_pc_11ab, !insn.addr !28

dec_label_pc_11ab:                                ; preds = %dec_label_pc_11a1
  %12 = call i32 @function_10a0(), !insn.addr !29
  br label %dec_label_pc_11be, !insn.addr !30

dec_label_pc_11be:                                ; preds = %dec_label_pc_11ab, %dec_label_pc_11a1
  %13 = call i32 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* %4, align 1, !insn.addr !32
  store i32 %13, i32* %eax.0.reg2mem, !insn.addr !32
  br label %dec_label_pc_1202, !insn.addr !32

dec_label_pc_1202:                                ; preds = %dec_label_pc_11be, %dec_label_pc_1180
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !33

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
}

define i32 @frame_dummy() local_unnamed_addr {
dec_label_pc_1210:
  %0 = call i32 @register_tm_clones(), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @__x86.get_pc_thunk.dx(i32 %arg1) local_unnamed_addr {
dec_label_pc_1219:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !35
}

define i32 @__x86.get_pc_thunk.di(i32 %arg1) local_unnamed_addr {
dec_label_pc_121d:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !36
}

define i32 @sequential_ops(i32 %a, i32 %b, i32 %c) local_unnamed_addr {
dec_label_pc_1230:
  %0 = add i32 %b, %a, !insn.addr !37
  %1 = mul i32 %0, 2, !insn.addr !38
  %2 = sub i32 %1, %c, !insn.addr !39
  ret i32 %2, !insn.addr !40
}

define i32 @single_if(i32 %x) local_unnamed_addr {
dec_label_pc_1270:
  %0 = icmp sgt i32 %x, 0, !insn.addr !41
  %1 = zext i1 %0 to i32
  %spec.select = shl i32 %x, %1
  ret i32 %spec.select, !insn.addr !42

; uselistorder directives
  uselistorder i32 %x, { 1, 0 }
}

define i32 @if_else(i32 %x) local_unnamed_addr {
dec_label_pc_1290:
  %0 = icmp sgt i32 %x, 0, !insn.addr !43
  %. = zext i1 %0 to i32
  ret i32 %., !insn.addr !44
}

define i32 @nested_if_2(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = icmp slt i32 %a, 1, !insn.addr !45
  br i1 %0, label %dec_label_pc_12fe, label %dec_label_pc_12d4, !insn.addr !45

dec_label_pc_12d4:                                ; preds = %dec_label_pc_12c0
  %1 = icmp sgt i32 %b, 0, !insn.addr !46
  %2 = select i1 %1, i32 %b, i32 0
  %spec.select = add i32 %2, %a
  ret i32 %spec.select

dec_label_pc_12fe:                                ; preds = %dec_label_pc_12c0
  ret i32 0, !insn.addr !47
}

define i32 @nested_if_deep(i32 %a, i32 %b, i32 %c, i32 %d, i32 %e) local_unnamed_addr {
dec_label_pc_1310:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !48
  %0 = icmp slt i32 %a, 1, !insn.addr !49
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !49
  br i1 %0, label %dec_label_pc_1398, label %dec_label_pc_132d, !insn.addr !49

dec_label_pc_132d:                                ; preds = %dec_label_pc_1310
  %1 = icmp slt i32 %b, 1, !insn.addr !50
  store i32 1, i32* %stack_var_-8.0.reg2mem, !insn.addr !50
  br i1 %1, label %dec_label_pc_1398, label %dec_label_pc_1337, !insn.addr !50

dec_label_pc_1337:                                ; preds = %dec_label_pc_132d
  %2 = icmp slt i32 %c, 1, !insn.addr !51
  store i32 2, i32* %stack_var_-8.0.reg2mem, !insn.addr !51
  br i1 %2, label %dec_label_pc_1398, label %dec_label_pc_1341, !insn.addr !51

dec_label_pc_1341:                                ; preds = %dec_label_pc_1337
  %3 = icmp slt i32 %d, 1, !insn.addr !52
  store i32 3, i32* %stack_var_-8.0.reg2mem, !insn.addr !52
  br i1 %3, label %dec_label_pc_1398, label %dec_label_pc_134b, !insn.addr !52

dec_label_pc_134b:                                ; preds = %dec_label_pc_1341
  %4 = icmp slt i32 %e, 1, !insn.addr !53
  %. = select i1 %4, i32 4, i32 5
  store i32 %., i32* %stack_var_-8.0.reg2mem, !insn.addr !54
  br label %dec_label_pc_1398, !insn.addr !54

dec_label_pc_1398:                                ; preds = %dec_label_pc_1310, %dec_label_pc_132d, %dec_label_pc_1337, %dec_label_pc_1341, %dec_label_pc_134b
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !55

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_1398, { 4, 3, 2, 1, 0 }
}

define i32 @if_elseif_chain(i32 %x) local_unnamed_addr {
dec_label_pc_13a0:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !56
  %0 = icmp eq i32 %x, 0, !insn.addr !57
  %1 = icmp eq i1 %0, false, !insn.addr !58
  store i32 10, i32* %stack_var_-8.0.reg2mem, !insn.addr !58
  br i1 %1, label %dec_label_pc_13bd, label %dec_label_pc_13f0, !insn.addr !58

dec_label_pc_13bd:                                ; preds = %dec_label_pc_13a0
  %2 = icmp eq i32 %x, 1, !insn.addr !59
  %3 = icmp eq i1 %2, false, !insn.addr !60
  store i32 20, i32* %stack_var_-8.0.reg2mem, !insn.addr !60
  br i1 %3, label %dec_label_pc_13d3, label %dec_label_pc_13f0, !insn.addr !60

dec_label_pc_13d3:                                ; preds = %dec_label_pc_13bd
  %4 = icmp eq i32 %x, 2, !insn.addr !61
  %5 = icmp eq i1 %4, false, !insn.addr !62
  %. = select i1 %5, i32 -1, i32 30
  store i32 %., i32* %stack_var_-8.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_13f0, !insn.addr !63

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13d3, %dec_label_pc_13bd, %dec_label_pc_13a0
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 2 }
}

define i32 @if_elseif_long(i32 %x) local_unnamed_addr {
dec_label_pc_1400:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !65
  %0 = icmp eq i32 %x, 0, !insn.addr !66
  %1 = icmp eq i1 %0, false, !insn.addr !67
  store i32 100, i32* %stack_var_-8.0.reg2mem, !insn.addr !67
  br i1 %1, label %dec_label_pc_141d, label %dec_label_pc_147c, !insn.addr !67

dec_label_pc_141d:                                ; preds = %dec_label_pc_1400
  %2 = icmp eq i32 %x, 1, !insn.addr !68
  %3 = icmp eq i1 %2, false, !insn.addr !69
  store i32 200, i32* %stack_var_-8.0.reg2mem, !insn.addr !69
  br i1 %3, label %dec_label_pc_1433, label %dec_label_pc_147c, !insn.addr !69

dec_label_pc_1433:                                ; preds = %dec_label_pc_141d
  %4 = icmp eq i32 %x, 2, !insn.addr !70
  %5 = icmp eq i1 %4, false, !insn.addr !71
  store i32 300, i32* %stack_var_-8.0.reg2mem, !insn.addr !71
  br i1 %5, label %dec_label_pc_1449, label %dec_label_pc_147c, !insn.addr !71

dec_label_pc_1449:                                ; preds = %dec_label_pc_1433
  %6 = icmp eq i32 %x, 3, !insn.addr !72
  %7 = icmp eq i1 %6, false, !insn.addr !73
  store i32 400, i32* %stack_var_-8.0.reg2mem, !insn.addr !73
  br i1 %7, label %dec_label_pc_145f, label %dec_label_pc_147c, !insn.addr !73

dec_label_pc_145f:                                ; preds = %dec_label_pc_1449
  %8 = icmp eq i32 %x, 4, !insn.addr !74
  %9 = icmp eq i1 %8, false, !insn.addr !75
  %. = select i1 %9, i32 -1, i32 ptrtoint (i32* @global_var_1f4 to i32)
  store i32 %., i32* %stack_var_-8.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_147c, !insn.addr !76

dec_label_pc_147c:                                ; preds = %dec_label_pc_145f, %dec_label_pc_1449, %dec_label_pc_1433, %dec_label_pc_141d, %dec_label_pc_1400
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !77

; uselistorder directives
  uselistorder i32 %x, { 3, 2, 1, 0, 4 }
}

define i32 @switch_small(i32 %op) local_unnamed_addr {
dec_label_pc_1490:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp ult i32 %1, 4
  br i1 %3, label %dec_label_pc_14c5, label %dec_label_pc_1510, !insn.addr !78

dec_label_pc_14c5:                                ; preds = %dec_label_pc_1490
  %4 = add i32 %2, 23397, !insn.addr !79
  %5 = mul i32 %1, 4, !insn.addr !80
  %6 = add i32 %5, 11117, !insn.addr !80
  %7 = add i32 %6, %2, !insn.addr !80
  %8 = inttoptr i32 %7 to i32*, !insn.addr !80
  %9 = load i32, i32* %8, align 4, !insn.addr !80
  %10 = add i32 %4, %9, !insn.addr !81
  ret i32 %10, !insn.addr !82

dec_label_pc_1510:                                ; preds = %dec_label_pc_1490
  ret i32 -1, !insn.addr !83

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @switch_large(i32 %op) local_unnamed_addr {
dec_label_pc_1520:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp ult i32 %1, 10
  br i1 %3, label %dec_label_pc_1547, label %dec_label_pc_15d0, !insn.addr !84

dec_label_pc_1547:                                ; preds = %dec_label_pc_1520
  %4 = add i32 %2, 23253, !insn.addr !85
  %5 = mul i32 %1, 4, !insn.addr !86
  %6 = add i32 %5, 10989, !insn.addr !86
  %7 = add i32 %6, %2, !insn.addr !86
  %8 = inttoptr i32 %7 to i32*, !insn.addr !86
  %9 = load i32, i32* %8, align 4, !insn.addr !86
  %10 = add i32 %4, %9, !insn.addr !87
  ret i32 %10, !insn.addr !88

dec_label_pc_15d0:                                ; preds = %dec_label_pc_1520
  ret i32 -1, !insn.addr !89

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @switch_default(i32 %op) local_unnamed_addr {
dec_label_pc_15e0:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !90
  store i32 100, i32* %stack_var_-8.0.reg2mem
  switch i32 %op, label %dec_label_pc_1643 [
    i32 1, label %dec_label_pc_164a
    i32 2, label %dec_label_pc_162b
    i32 3, label %dec_label_pc_1637
  ]

dec_label_pc_162b:                                ; preds = %dec_label_pc_15e0
  store i32 200, i32* %stack_var_-8.0.reg2mem, !insn.addr !91
  br label %dec_label_pc_164a, !insn.addr !91

dec_label_pc_1637:                                ; preds = %dec_label_pc_15e0
  store i32 300, i32* %stack_var_-8.0.reg2mem, !insn.addr !92
  br label %dec_label_pc_164a, !insn.addr !92

dec_label_pc_1643:                                ; preds = %dec_label_pc_15e0
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_164a, !insn.addr !93

dec_label_pc_164a:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_1643, %dec_label_pc_1637, %dec_label_pc_162b
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !94

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder label %dec_label_pc_164a, { 1, 2, 3, 0 }
}

define i32 @switch_fallthrough(i32 %op) local_unnamed_addr {
dec_label_pc_1660:
  %storemerge.reg2mem = alloca i32, !insn.addr !95
  %result_-8.1.reg2mem = alloca i32, !insn.addr !95
  %result_-8.0.reg2mem = alloca i32, !insn.addr !95
  store i32 0, i32* %result_-8.0.reg2mem
  store i32 0, i32* %result_-8.1.reg2mem
  switch i32 %op, label %dec_label_pc_1695 [
    i32 1, label %dec_label_pc_16be
    i32 2, label %dec_label_pc_16b2
  ]

dec_label_pc_1695:                                ; preds = %dec_label_pc_1660
  %0 = icmp eq i32 %op, 3, !insn.addr !96
  %1 = icmp eq i1 %0, false, !insn.addr !97
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !97
  br i1 %1, label %dec_label_pc_16d3, label %dec_label_pc_16a6, !insn.addr !97

dec_label_pc_16a6:                                ; preds = %dec_label_pc_1695
  %2 = mul i32 %op, 4, !insn.addr !98
  store i32 %2, i32* %result_-8.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_16b2, !insn.addr !99

dec_label_pc_16b2:                                ; preds = %dec_label_pc_1660, %dec_label_pc_16a6
  %result_-8.0.reload = load i32, i32* %result_-8.0.reg2mem
  %3 = mul i32 %op, 2, !insn.addr !100
  %4 = add i32 %result_-8.0.reload, %3, !insn.addr !101
  store i32 %4, i32* %result_-8.1.reg2mem, !insn.addr !102
  br label %dec_label_pc_16be, !insn.addr !102

dec_label_pc_16be:                                ; preds = %dec_label_pc_1660, %dec_label_pc_16b2
  %result_-8.1.reload = load i32, i32* %result_-8.1.reg2mem
  %5 = add i32 %result_-8.1.reload, %op, !insn.addr !103
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !104
  br label %dec_label_pc_16d3, !insn.addr !104

dec_label_pc_16d3:                                ; preds = %dec_label_pc_1695, %dec_label_pc_16be
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !105

; uselistorder directives
  uselistorder i32* %result_-8.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %op, { 2, 0, 1, 4, 3 }
  uselistorder label %dec_label_pc_16d3, { 1, 0 }
  uselistorder label %dec_label_pc_16be, { 1, 0 }
  uselistorder label %dec_label_pc_16b2, { 1, 0 }
}

define i32 @loop_for_fixed(i32 %n) local_unnamed_addr {
dec_label_pc_16e0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !106
  %0 = icmp sgt i32 %n, 0, !insn.addr !107
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !107
  br i1 %0, label %dec_label_pc_1703.lr.ph, label %dec_label_pc_171a, !insn.addr !107

dec_label_pc_1703.lr.ph:                          ; preds = %dec_label_pc_16e0
  %1 = add i32 %n, -1
  %2 = zext i32 %1 to i33
  %3 = add i32 %n, -2
  %4 = zext i32 %3 to i33
  %5 = mul i33 %2, %4
  %6 = udiv i33 %5, 2
  %7 = trunc i33 %6 to i32
  %8 = add i32 %1, %7
  store i32 %8, i32* %sum_-8.0.lcssa.reg2mem
  br label %dec_label_pc_171a

dec_label_pc_171a:                                ; preds = %dec_label_pc_1703.lr.ph, %dec_label_pc_16e0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !108

; uselistorder directives
  uselistorder i32* %sum_-8.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_while(i32 %x) local_unnamed_addr {
dec_label_pc_1730:
  %stack_var_4.02.reg2mem = alloca i32, !insn.addr !109
  %storemerge3.reg2mem = alloca i32, !insn.addr !109
  %0 = icmp eq i32 %x, 0, !insn.addr !110
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !111
  store i32 %x, i32* %stack_var_4.02.reg2mem, !insn.addr !111
  br i1 %0, label %dec_label_pc_1766.thread, label %dec_label_pc_174a, !insn.addr !111

dec_label_pc_174a:                                ; preds = %dec_label_pc_1730, %dec_label_pc_174a
  %stack_var_4.02.reload = load i32, i32* %stack_var_4.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = ashr i32 %stack_var_4.02.reload, 31, !insn.addr !112
  %2 = zext i32 %stack_var_4.02.reload to i64, !insn.addr !113
  %3 = zext i32 %1 to i64, !insn.addr !113
  %4 = mul i64 %3, 4294967296, !insn.addr !113
  %5 = or i64 %4, %2, !insn.addr !113
  %6 = sdiv i64 %5, 10, !insn.addr !113
  %7 = trunc i64 %6 to i32, !insn.addr !113
  %8 = add i32 %storemerge3.reload, 1, !insn.addr !114
  %9 = icmp eq i32 %7, 0, !insn.addr !110
  store i32 %8, i32* %storemerge3.reg2mem, !insn.addr !111
  store i32 %7, i32* %stack_var_4.02.reg2mem, !insn.addr !111
  br i1 %9, label %dec_label_pc_1766, label %dec_label_pc_174a, !insn.addr !111

dec_label_pc_1766:                                ; preds = %dec_label_pc_174a
  %10 = icmp sgt i32 %8, 1
  %spec.select = select i1 %10, i32 %8, i32 1
  ret i32 %spec.select

dec_label_pc_1766.thread:                         ; preds = %dec_label_pc_1730
  ret i32 1, !insn.addr !115

; uselistorder directives
  uselistorder i32 %8, { 1, 2, 0 }
  uselistorder i32 %stack_var_4.02.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_4.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_174a, { 1, 0 }
}

define i32 @loop_dowhile(i32 %x) local_unnamed_addr {
dec_label_pc_1790:
  %stack_var_4.0.reg2mem = alloca i32, !insn.addr !116
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !116
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !117
  store i32 %x, i32* %stack_var_4.0.reg2mem, !insn.addr !117
  br label %dec_label_pc_179e, !insn.addr !117

dec_label_pc_179e:                                ; preds = %dec_label_pc_179e, %dec_label_pc_1790
  %stack_var_4.0.reload = load i32, i32* %stack_var_4.0.reg2mem
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %0 = ashr i32 %stack_var_4.0.reload, 31, !insn.addr !118
  %1 = zext i32 %stack_var_4.0.reload to i64, !insn.addr !119
  %2 = zext i32 %0 to i64, !insn.addr !119
  %3 = mul i64 %2, 4294967296, !insn.addr !119
  %4 = or i64 %3, %1, !insn.addr !119
  %5 = sdiv i64 %4, 10, !insn.addr !119
  %6 = trunc i64 %5 to i32, !insn.addr !119
  %7 = add i32 %stack_var_-8.0.reload, 1, !insn.addr !120
  %8 = icmp eq i32 %6, 0, !insn.addr !121
  %9 = icmp eq i1 %8, false, !insn.addr !122
  store i32 %7, i32* %stack_var_-8.0.reg2mem, !insn.addr !122
  store i32 %6, i32* %stack_var_4.0.reg2mem, !insn.addr !122
  br i1 %9, label %dec_label_pc_179e, label %dec_label_pc_17bf, !insn.addr !122

dec_label_pc_17bf:                                ; preds = %dec_label_pc_179e
  ret i32 %7, !insn.addr !123

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %stack_var_4.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_4.0.reg2mem, { 1, 0, 2 }
}

define i32 @loop_nested(i32 %m, i32 %n) local_unnamed_addr {
dec_label_pc_17d0:
  %total_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !124
  %0 = icmp sgt i32 %m, 0, !insn.addr !125
  store i32 0, i32* %total_-8.0.lcssa.reg2mem, !insn.addr !125
  br i1 %0, label %dec_label_pc_17fd.preheader.lr.ph, label %dec_label_pc_1833, !insn.addr !125

dec_label_pc_17fd.preheader.lr.ph:                ; preds = %dec_label_pc_17d0
  %1 = icmp sgt i32 %n, 0
  %smax = select i1 %1, i32 %n, i32 0
  %2 = mul i32 %smax, %m
  store i32 %2, i32* %total_-8.0.lcssa.reg2mem
  br label %dec_label_pc_1833

dec_label_pc_1833:                                ; preds = %dec_label_pc_17fd.preheader.lr.ph, %dec_label_pc_17d0
  %total_-8.0.lcssa.reload = load i32, i32* %total_-8.0.lcssa.reg2mem
  ret i32 %total_-8.0.lcssa.reload, !insn.addr !126

; uselistorder directives
  uselistorder i32* %total_-8.0.lcssa.reg2mem, { 0, 2, 1 }
}

define i32 @loop_break(i32 %target) local_unnamed_addr {
dec_label_pc_1840:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !127
  %storemerge2.reg2mem = alloca i32, !insn.addr !127
  %arr_-32 = alloca [1 x i32], align 4
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !128
  %4 = add i32 %2, 10276, !insn.addr !129
  %5 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_-32, i32 0, i32 0, !insn.addr !130
  %6 = inttoptr i32 %4 to i32*, !insn.addr !130
  %7 = call i32* @memcpy(i32* nonnull %5, i32* %6, i32 20), !insn.addr !130
  %8 = add i32 %3, -28, !insn.addr !131
  store i32 0, i32* %storemerge2.reg2mem
  br label %dec_label_pc_188d

dec_label_pc_188d:                                ; preds = %dec_label_pc_1840, %dec_label_pc_18ad
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %9 = mul i32 %storemerge2.reload, 4, !insn.addr !131
  %10 = add i32 %8, %9, !insn.addr !131
  %11 = inttoptr i32 %10 to i32*, !insn.addr !131
  %12 = load i32, i32* %11, align 4, !insn.addr !131
  %13 = icmp eq i32 %12, %1, !insn.addr !132
  %14 = icmp eq i1 %13, false, !insn.addr !133
  store i32 %storemerge2.reload, i32* %storemerge1.reg2mem, !insn.addr !133
  br i1 %14, label %dec_label_pc_18ad, label %dec_label_pc_18c2, !insn.addr !133

dec_label_pc_18ad:                                ; preds = %dec_label_pc_188d
  %15 = add nuw nsw i32 %storemerge2.reload, 1, !insn.addr !134
  %16 = icmp ult i32 %15, 5, !insn.addr !135
  store i32 %15, i32* %storemerge2.reg2mem, !insn.addr !135
  store i32 -1, i32* %storemerge1.reg2mem, !insn.addr !135
  br i1 %16, label %dec_label_pc_188d, label %dec_label_pc_18c2, !insn.addr !135

dec_label_pc_18c2:                                ; preds = %dec_label_pc_188d, %dec_label_pc_18ad
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  ret i32 %storemerge1.reload, !insn.addr !136

; uselistorder directives
  uselistorder i32 %storemerge2.reload, { 1, 0, 2 }
  uselistorder i32* %storemerge2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_18c2, { 1, 0 }
  uselistorder label %dec_label_pc_188d, { 1, 0 }
}

define i32 @loop_continue(i32 %n) local_unnamed_addr {
dec_label_pc_18d0:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !137
  %sum_-8.02.reg2mem = alloca i32, !insn.addr !137
  %storemerge3.reg2mem = alloca i64, !insn.addr !137
  %.reg2mem = alloca i32, !insn.addr !137
  %0 = icmp slt i32 %n, 1, !insn.addr !138
  store i32 1, i32* %.reg2mem, !insn.addr !138
  store i64 1, i64* %storemerge3.reg2mem, !insn.addr !138
  store i32 0, i32* %sum_-8.02.reg2mem, !insn.addr !138
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !138
  br i1 %0, label %dec_label_pc_1923, label %dec_label_pc_18f3, !insn.addr !138

dec_label_pc_18f3:                                ; preds = %dec_label_pc_18d0, %dec_label_pc_18f3
  %sum_-8.02.reload = load i32, i32* %sum_-8.02.reg2mem
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %1 = urem i64 %storemerge3.reload, 2, !insn.addr !139
  %2 = mul i64 %storemerge3.reload, 4294967296, !insn.addr !139
  %3 = or i64 %2, %1, !insn.addr !139
  %4 = srem i64 %3, 2, !insn.addr !139
  %5 = trunc i64 %4 to i32, !insn.addr !139
  %6 = icmp eq i32 %5, 0, !insn.addr !140
  %7 = icmp eq i1 %6, false, !insn.addr !141
  %8 = select i1 %7, i32 %.reload, i32 0
  %spec.select = add i32 %8, %sum_-8.02.reload
  %9 = add i32 %.reload, 1, !insn.addr !142
  %10 = sext i32 %9 to i64, !insn.addr !143
  %11 = icmp sgt i32 %9, %n, !insn.addr !138
  store i32 %9, i32* %.reg2mem, !insn.addr !138
  store i64 %10, i64* %storemerge3.reg2mem, !insn.addr !138
  store i32 %spec.select, i32* %sum_-8.02.reg2mem, !insn.addr !138
  store i32 %spec.select, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !138
  br i1 %11, label %dec_label_pc_1923, label %dec_label_pc_18f3, !insn.addr !138

dec_label_pc_1923:                                ; preds = %dec_label_pc_18f3, %dec_label_pc_18d0
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !144

; uselistorder directives
  uselistorder i32 %.reload, { 1, 0 }
  uselistorder i64 %storemerge3.reload, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_18f3, { 1, 0 }
}

define i32 @goto_forward(i32 %x) local_unnamed_addr {
dec_label_pc_1930:
  %0 = icmp sgt i32 %x, 1
  %1 = select i1 %0, i32 %x, i32 1
  %storemerge = mul i32 %x, 2
  %2 = mul i32 %storemerge, %1, !insn.addr !145
  ret i32 %2, !insn.addr !146
}

define i32 @goto_backward(i32 %x) local_unnamed_addr {
dec_label_pc_1970:
  %storemerge.reg2mem = alloca i32, !insn.addr !147
  %result_-12.02.reg2mem = alloca i32, !insn.addr !147
  %storemerge13.reg2mem = alloca i32, !insn.addr !147
  %0 = icmp eq i32 %x, 0, !insn.addr !148
  %1 = icmp slt i32 %x, 0, !insn.addr !148
  %2 = icmp eq i1 %1, false, !insn.addr !149
  %3 = icmp eq i1 %0, false, !insn.addr !149
  %4 = icmp ne i1 %2, %3, !insn.addr !149
  %5 = icmp slt i32 %x, 1, !insn.addr !150
  %or.cond = or i1 %5, %4
  store i32 1, i32* %storemerge13.reg2mem, !insn.addr !149
  store i32 1, i32* %result_-12.02.reg2mem, !insn.addr !149
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !149
  br i1 %or.cond, label %dec_label_pc_19cc, label %dec_label_pc_19ae, !insn.addr !149

dec_label_pc_19ae:                                ; preds = %dec_label_pc_1970, %dec_label_pc_19ae
  %result_-12.02.reload = load i32, i32* %result_-12.02.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %6 = mul i32 %result_-12.02.reload, %storemerge13.reload, !insn.addr !151
  %7 = add i32 %storemerge13.reload, 1, !insn.addr !152
  %8 = icmp sgt i32 %7, %x, !insn.addr !150
  store i32 %7, i32* %storemerge13.reg2mem, !insn.addr !150
  store i32 %6, i32* %result_-12.02.reg2mem, !insn.addr !150
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !150
  br i1 %8, label %dec_label_pc_19cc, label %dec_label_pc_19ae, !insn.addr !150

dec_label_pc_19cc:                                ; preds = %dec_label_pc_19ae, %dec_label_pc_1970
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !153

; uselistorder directives
  uselistorder i32* %storemerge13.reg2mem, { 2, 0, 1 }
  uselistorder i32* %result_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder i32 %x, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_19ae, { 1, 0 }
}

define i32 @ternary_op(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_19e0:
  %0 = icmp sgt i32 %a, %b, !insn.addr !154
  %storemerge = select i1 %0, i32 %a, i32 %b
  ret i32 %storemerge, !insn.addr !155
}

define void @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1a10:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %1, 9900, !insn.addr !156
  %3 = inttoptr i32 %2 to i8*, !insn.addr !157
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !158
  %5 = call i32 @sequential_ops(i32 5, i32 7, i32 3), !insn.addr !159
  %6 = add i32 %1, 9937, !insn.addr !160
  %7 = inttoptr i32 %6 to i8*, !insn.addr !161
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !162
  %9 = call i32 @single_if(i32 10), !insn.addr !163
  %10 = add i32 %1, 9968, !insn.addr !164
  %11 = inttoptr i32 %10 to i8*, !insn.addr !165
  %12 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !166
  %13 = call i32 @single_if(i32 -5), !insn.addr !167
  %14 = call i32 (i8*, ...) @printf(i8* %11), !insn.addr !168
  %15 = call i32 @if_else(i32 5), !insn.addr !169
  %16 = add i32 %1, 9994, !insn.addr !170
  %17 = inttoptr i32 %16 to i8*, !insn.addr !171
  %18 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !172
  %19 = call i32 @if_else(i32 -3), !insn.addr !173
  %20 = call i32 (i8*, ...) @printf(i8* %17), !insn.addr !174
  %21 = call i32 @nested_if_2(i32 10, i32 5), !insn.addr !175
  %22 = add i32 %1, 10018, !insn.addr !176
  %23 = inttoptr i32 %22 to i8*, !insn.addr !177
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !178
  %25 = call i32 @nested_if_2(i32 10, i32 -5), !insn.addr !179
  %26 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !180
  %27 = call i32 @nested_if_2(i32 -10, i32 5), !insn.addr !181
  %28 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !182
  %29 = call i32 @nested_if_deep(i32 1, i32 1, i32 1, i32 1, i32 1), !insn.addr !183
  %30 = add i32 %1, 10046, !insn.addr !184
  %31 = inttoptr i32 %30 to i8*, !insn.addr !185
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !186
  %33 = call i32 @if_elseif_chain(i32 1), !insn.addr !187
  %34 = add i32 %1, 10077, !insn.addr !188
  %35 = inttoptr i32 %34 to i8*, !insn.addr !189
  %36 = call i32 (i8*, ...) @printf(i8* %35), !insn.addr !190
  %37 = call i32 @if_elseif_long(i32 3), !insn.addr !191
  %38 = add i32 %1, 10109, !insn.addr !192
  %39 = inttoptr i32 %38 to i8*, !insn.addr !193
  %40 = call i32 (i8*, ...) @printf(i8* %39), !insn.addr !194
  %41 = call i32 @switch_small(i32 2), !insn.addr !195
  %42 = add i32 %1, 10140, !insn.addr !196
  %43 = inttoptr i32 %42 to i8*, !insn.addr !197
  %44 = call i32 (i8*, ...) @printf(i8* %43), !insn.addr !198
  %45 = call i32 @switch_large(i32 7), !insn.addr !199
  %46 = add i32 %1, 10169, !insn.addr !200
  %47 = inttoptr i32 %46 to i8*, !insn.addr !201
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !202
  %49 = call i32 @switch_default(i32 5), !insn.addr !203
  %50 = add i32 %1, 10198, !insn.addr !204
  %51 = inttoptr i32 %50 to i8*, !insn.addr !205
  %52 = call i32 (i8*, ...) @printf(i8* %51), !insn.addr !206
  %53 = call i32 @switch_fallthrough(i32 3), !insn.addr !207
  %54 = add i32 %1, 10229, !insn.addr !208
  %55 = inttoptr i32 %54 to i8*, !insn.addr !209
  %56 = call i32 (i8*, ...) @printf(i8* %55), !insn.addr !210
  %57 = call i32 @loop_for_fixed(i32 10), !insn.addr !211
  %58 = add i32 %1, 10264, !insn.addr !212
  %59 = inttoptr i32 %58 to i8*, !insn.addr !213
  %60 = call i32 (i8*, ...) @printf(i8* %59), !insn.addr !214
  %61 = call i32 @loop_while(i32 12345), !insn.addr !215
  %62 = add i32 %1, 10295, !insn.addr !216
  %63 = inttoptr i32 %62 to i8*, !insn.addr !217
  %64 = call i32 (i8*, ...) @printf(i8* %63), !insn.addr !218
  %65 = call i32 @loop_dowhile(i32 9876), !insn.addr !219
  %66 = add i32 %1, 10322, !insn.addr !220
  %67 = inttoptr i32 %66 to i8*, !insn.addr !221
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !222
  %69 = call i32 @loop_nested(i32 3, i32 4), !insn.addr !223
  %70 = add i32 %1, 10351, !insn.addr !224
  %71 = inttoptr i32 %70 to i8*, !insn.addr !225
  %72 = call i32 (i8*, ...) @printf(i8* %71), !insn.addr !226
  %73 = call i32 @loop_break(i32 30), !insn.addr !227
  %74 = add i32 %1, 10379, !insn.addr !228
  %75 = inttoptr i32 %74 to i8*, !insn.addr !229
  %76 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !230
  %77 = call i32 @loop_break(i32 99), !insn.addr !231
  %78 = call i32 (i8*, ...) @printf(i8* %75), !insn.addr !232
  %79 = call i32 @loop_continue(i32 10), !insn.addr !233
  %80 = add i32 %1, 10406, !insn.addr !234
  %81 = inttoptr i32 %80 to i8*, !insn.addr !235
  %82 = call i32 (i8*, ...) @printf(i8* %81), !insn.addr !236
  %83 = call i32 @goto_forward(i32 5), !insn.addr !237
  %84 = add i32 %1, 10436, !insn.addr !238
  %85 = inttoptr i32 %84 to i8*, !insn.addr !239
  %86 = call i32 (i8*, ...) @printf(i8* %85), !insn.addr !240
  %87 = call i32 @goto_forward(i32 -3), !insn.addr !241
  %88 = call i32 (i8*, ...) @printf(i8* %85), !insn.addr !242
  %89 = call i32 @goto_backward(i32 5), !insn.addr !243
  %90 = add i32 %1, 10465, !insn.addr !244
  %91 = inttoptr i32 %90 to i8*, !insn.addr !245
  %92 = call i32 (i8*, ...) @printf(i8* %91), !insn.addr !246
  %93 = call i32 @ternary_op(i32 10, i32 5), !insn.addr !247
  %94 = add i32 %1, 10495, !insn.addr !248
  %95 = inttoptr i32 %94 to i8*, !insn.addr !249
  %96 = call i32 (i8*, ...) @printf(i8* %95), !insn.addr !250
  %97 = call i32 @ternary_op(i32 3, i32 8), !insn.addr !251
  %98 = call i32 (i8*, ...) @printf(i8* %95), !insn.addr !252
  ret void, !insn.addr !253

; uselistorder directives
  uselistorder i32 (i32, i32)* @ternary_op, { 1, 0 }
  uselistorder i32 (i32)* @goto_forward, { 1, 0 }
  uselistorder i32 (i32)* @loop_break, { 1, 0 }
  uselistorder i32 30, { 1, 0 }
  uselistorder i32 (i32, i32)* @nested_if_2, { 2, 1, 0 }
  uselistorder i32 (i32)* @if_else, { 1, 0 }
  uselistorder i32 (i32)* @single_if, { 1, 0 }
}

define i32 @loop_multi_exit(i32 %target) local_unnamed_addr {
dec_label_pc_1e70:
  %0 = alloca i32
  %storemerge3.reg2mem = alloca i32, !insn.addr !254
  %storemerge6.reg2mem = alloca i32, !insn.addr !254
  %storemerge2.off07.reg2mem = alloca i32, !insn.addr !254
  %matrix_-60 = alloca [1 x [1 x i32]], align 4
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint (i32* @global_var_5184 to i32), i32 -12156), !insn.addr !255
  %4 = getelementptr inbounds [1 x [1 x i32]], [1 x [1 x i32]]* %matrix_-60, i32 0, i32 0, i32 0, !insn.addr !256
  %5 = inttoptr i32 %3 to i32*, !insn.addr !256
  %6 = call i32* @memcpy(i32* nonnull %4, i32* %5, i32 48), !insn.addr !256
  %7 = ptrtoint [1 x [1 x i32]]* %matrix_-60 to i32, !insn.addr !257
  store i32 0, i32* %storemerge2.off07.reg2mem
  br label %dec_label_pc_1ebb.preheader

dec_label_pc_1ebb.preheader:                      ; preds = %dec_label_pc_1e70, %dec_label_pc_1f06
  %storemerge2.off07.reload = load i32, i32* %storemerge2.off07.reg2mem
  %8 = mul i32 %storemerge2.off07.reload, 16, !insn.addr !258
  %9 = add i32 %8, %7, !insn.addr !259
  store i32 0, i32* %storemerge6.reg2mem
  br label %dec_label_pc_1ec5

dec_label_pc_1ec5:                                ; preds = %dec_label_pc_1ebb.preheader, %dec_label_pc_1ef3
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %10 = mul i32 %storemerge6.reload, 4, !insn.addr !260
  %11 = add i32 %9, %10, !insn.addr !260
  %12 = inttoptr i32 %11 to i32*, !insn.addr !260
  %13 = load i32, i32* %12, align 4, !insn.addr !260
  %14 = icmp eq i32 %13, %1, !insn.addr !261
  %15 = icmp eq i1 %14, false, !insn.addr !262
  br i1 %15, label %dec_label_pc_1ef3, label %dec_label_pc_1edf, !insn.addr !262

dec_label_pc_1edf:                                ; preds = %dec_label_pc_1ec5
  %16 = mul i32 %storemerge2.off07.reload, 10, !insn.addr !263
  %17 = add i32 %storemerge6.reload, %16, !insn.addr !264
  store i32 %17, i32* %storemerge3.reg2mem, !insn.addr !265
  br label %dec_label_pc_1f1b, !insn.addr !265

dec_label_pc_1ef3:                                ; preds = %dec_label_pc_1ec5
  %18 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !266
  %19 = icmp ugt i32 %storemerge6.reload, 2, !insn.addr !267
  store i32 %18, i32* %storemerge6.reg2mem, !insn.addr !267
  br i1 %19, label %dec_label_pc_1f06, label %dec_label_pc_1ec5, !insn.addr !267

dec_label_pc_1f06:                                ; preds = %dec_label_pc_1ef3
  %20 = add nuw nsw i32 %storemerge2.off07.reload, 1, !insn.addr !268
  %21 = icmp ugt i32 %storemerge2.off07.reload, 1, !insn.addr !269
  store i32 %20, i32* %storemerge2.off07.reg2mem, !insn.addr !269
  store i32 -1, i32* %storemerge3.reg2mem, !insn.addr !269
  br i1 %21, label %dec_label_pc_1f1b, label %dec_label_pc_1ebb.preheader, !insn.addr !269

dec_label_pc_1f1b:                                ; preds = %dec_label_pc_1f06, %dec_label_pc_1edf
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  ret i32 %storemerge3.reload, !insn.addr !270

; uselistorder directives
  uselistorder i32 %storemerge6.reload, { 1, 0, 2, 3 }
  uselistorder i32 %storemerge2.off07.reload, { 1, 0, 2, 3 }
  uselistorder [1 x [1 x i32]]* %matrix_-60, { 1, 0 }
  uselistorder i32* %storemerge2.off07.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge6.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder label %dec_label_pc_1ec5, { 1, 0 }
  uselistorder label %dec_label_pc_1ebb.preheader, { 1, 0 }
}

define i32 @infinite_loop(i32* %flag) local_unnamed_addr {
dec_label_pc_1f30:
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !271
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !271
  %0 = load i32, i32* %flag, align 4, !insn.addr !272
  %1 = icmp eq i32 %0, 1, !insn.addr !273
  %2 = icmp eq i1 %1, false, !insn.addr !274
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !275
  br label %dec_label_pc_1f3e, !insn.addr !275

dec_label_pc_1f3e:                                ; preds = %dec_label_pc_1f51, %dec_label_pc_1f30
  store i32 0, i32* %stack_var_-8.1.reg2mem, !insn.addr !274
  br i1 %2, label %dec_label_pc_1f51, label %dec_label_pc_1f7a, !insn.addr !274

dec_label_pc_1f51:                                ; preds = %dec_label_pc_1f3e
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %3 = add i32 %stack_var_-8.0.reload, 1, !insn.addr !276
  %4 = icmp sgt i32 %3, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !277
  store i32 %3, i32* %stack_var_-8.0.reg2mem, !insn.addr !277
  br i1 %4, label %dec_label_pc_1f67, label %dec_label_pc_1f3e, !insn.addr !277

dec_label_pc_1f67:                                ; preds = %dec_label_pc_1f51
  store i32 1, i32* %flag, align 4, !insn.addr !278
  store i32 %3, i32* %stack_var_-8.1.reg2mem, !insn.addr !279
  br label %dec_label_pc_1f7a, !insn.addr !279

dec_label_pc_1f7a:                                ; preds = %dec_label_pc_1f3e, %dec_label_pc_1f67
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !280

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-8.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1f7a, { 1, 0 }
}

define i32 @multi_return(i32 %x) local_unnamed_addr {
dec_label_pc_1f90:
  %temp_-8.0.reg2mem = alloca i32, !insn.addr !281
  %0 = icmp slt i32 %x, 0, !insn.addr !282
  %1 = icmp eq i1 %0, false, !insn.addr !283
  store i32 -1, i32* %temp_-8.0.reg2mem, !insn.addr !283
  br i1 %1, label %dec_label_pc_1faf, label %dec_label_pc_1ff6, !insn.addr !283

dec_label_pc_1faf:                                ; preds = %dec_label_pc_1f90
  %2 = mul i32 %x, 2, !insn.addr !284
  %3 = icmp slt i32 %2, 101, !insn.addr !285
  store i32 -2, i32* %temp_-8.0.reg2mem, !insn.addr !285
  br i1 %3, label %dec_label_pc_1fce, label %dec_label_pc_1ff6, !insn.addr !285

dec_label_pc_1fce:                                ; preds = %dec_label_pc_1faf
  %4 = zext i32 %x to i64, !insn.addr !286
  %5 = mul i64 %4, 4294967296, !insn.addr !286
  %6 = or i64 %5, %4, !insn.addr !286
  %7 = srem i64 %6, 2, !insn.addr !286
  %8 = trunc i64 %7 to i32, !insn.addr !286
  %9 = icmp eq i32 %8, 0, !insn.addr !287
  %10 = icmp eq i1 %9, false, !insn.addr !288
  %11 = add i32 %x, 1
  %spec.select = select i1 %10, i32 %11, i32 %2
  ret i32 %spec.select

dec_label_pc_1ff6:                                ; preds = %dec_label_pc_1faf, %dec_label_pc_1f90
  %temp_-8.0.reload = load i32, i32* %temp_-8.0.reg2mem
  ret i32 %temp_-8.0.reload, !insn.addr !289

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @conditional_return(i32 %x) local_unnamed_addr {
dec_label_pc_2000:
  %storemerge.reg2mem = alloca i32, !insn.addr !290
  %0 = icmp slt i32 %x, 1, !insn.addr !291
  br i1 %0, label %dec_label_pc_2021, label %dec_label_pc_2013, !insn.addr !291

dec_label_pc_2013:                                ; preds = %dec_label_pc_2000
  %1 = mul i32 %x, 2, !insn.addr !292
  store i32 %1, i32* %storemerge.reg2mem, !insn.addr !293
  br label %dec_label_pc_2047, !insn.addr !293

dec_label_pc_2021:                                ; preds = %dec_label_pc_2000
  %2 = icmp ne i32 %x, 0, !insn.addr !294
  %3 = icmp eq i1 %2, false, !insn.addr !295
  %4 = mul i32 %x, -1
  %storemerge1 = select i1 %3, i32 0, i32 %4
  store i32 %storemerge1, i32* %storemerge.reg2mem
  br label %dec_label_pc_2047

dec_label_pc_2047:                                ; preds = %dec_label_pc_2021, %dec_label_pc_2013
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !296

; uselistorder directives
  uselistorder i32 %x, { 2, 1, 0, 3 }
}

define i32 @duffs_device(i32* %dst, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_2050:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !297
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = icmp eq i32 %1, 0, !insn.addr !298
  %4 = icmp slt i32 %1, 0, !insn.addr !298
  %5 = icmp eq i1 %4, false, !insn.addr !299
  %6 = icmp eq i1 %3, false, !insn.addr !299
  %7 = icmp eq i1 %5, %6, !insn.addr !299
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !299
  br i1 %7, label %dec_label_pc_2084, label %dec_label_pc_21bd, !insn.addr !299

dec_label_pc_2084:                                ; preds = %dec_label_pc_2050
  %8 = add i32 %1, 7, !insn.addr !300
  %9 = select i1 %4, i32 %8, i32 %1, !insn.addr !301
  %10 = and i32 %9, -8, !insn.addr !302
  %11 = sub i32 %1, %10, !insn.addr !303
  %12 = icmp ult i32 %11, 8
  br i1 %12, label %dec_label_pc_20ba, label %dec_label_pc_21bd, !insn.addr !304

dec_label_pc_20ba:                                ; preds = %dec_label_pc_2084
  %13 = add i32 %2, ptrtoint (i32* @global_var_4fa5 to i32), !insn.addr !305
  %14 = mul i32 %11, 4, !insn.addr !306
  %15 = add i32 %2, add (i32 ptrtoint (i32* @global_var_4fa5 to i32), i32 -12224), !insn.addr !306
  %16 = add i32 %15, %14, !insn.addr !306
  %17 = inttoptr i32 %16 to i32*, !insn.addr !306
  %18 = load i32, i32* %17, align 4, !insn.addr !306
  %19 = add i32 %13, %18, !insn.addr !307
  ret i32 %19, !insn.addr !308

dec_label_pc_21bd:                                ; preds = %dec_label_pc_2084, %dec_label_pc_2050
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !309

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %1, { 0, 2, 1, 3, 4 }
  uselistorder i32* %0, { 1, 0 }
}

define i32 @loop_complex_cond(i32 %x) local_unnamed_addr {
dec_label_pc_21d0:
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !310
  %b_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !310
  %a_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !310
  %a_-8.01.reg2mem = alloca i32, !insn.addr !310
  %b_-12.02.reg2mem = alloca i32, !insn.addr !310
  %storemerge3.reg2mem = alloca i32, !insn.addr !310
  %0 = icmp slt i32 %x, 1, !insn.addr !311
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !311
  store i32 %x, i32* %b_-12.02.reg2mem, !insn.addr !311
  store i32 0, i32* %a_-8.01.reg2mem, !insn.addr !311
  store i32 0, i32* %a_-8.0.lcssa.reg2mem, !insn.addr !311
  store i32 %x, i32* %b_-12.0.lcssa.reg2mem, !insn.addr !311
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !311
  br i1 %0, label %dec_label_pc_2247, label %dec_label_pc_2227, !insn.addr !311

dec_label_pc_2227:                                ; preds = %dec_label_pc_21d0, %dec_label_pc_2227
  %a_-8.01.reload = load i32, i32* %a_-8.01.reg2mem
  %b_-12.02.reload = load i32, i32* %b_-12.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %1 = add nuw nsw i32 %a_-8.01.reload, 2, !insn.addr !312
  %2 = add nsw i32 %b_-12.02.reload, -1, !insn.addr !313
  %3 = add nuw nsw i32 %storemerge3.reload, 1, !insn.addr !314
  %4 = icmp sge i32 %1, %2, !insn.addr !311
  %5 = icmp ugt i32 %storemerge3.reload, 8, !insn.addr !315
  %or.cond = or i1 %5, %4
  store i32 %3, i32* %storemerge3.reg2mem, !insn.addr !311
  store i32 %2, i32* %b_-12.02.reg2mem, !insn.addr !311
  store i32 %1, i32* %a_-8.01.reg2mem, !insn.addr !311
  store i32 %1, i32* %a_-8.0.lcssa.reg2mem, !insn.addr !311
  store i32 %2, i32* %b_-12.0.lcssa.reg2mem, !insn.addr !311
  store i32 %3, i32* %storemerge.lcssa.reg2mem, !insn.addr !311
  br i1 %or.cond, label %dec_label_pc_2247, label %dec_label_pc_2227, !insn.addr !311

dec_label_pc_2247:                                ; preds = %dec_label_pc_2227, %dec_label_pc_21d0
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %b_-12.0.lcssa.reload = load i32, i32* %b_-12.0.lcssa.reg2mem
  %a_-8.0.lcssa.reload = load i32, i32* %a_-8.0.lcssa.reg2mem
  %6 = add i32 %b_-12.0.lcssa.reload, %a_-8.0.lcssa.reload, !insn.addr !316
  %7 = add i32 %6, %storemerge.lcssa.reload, !insn.addr !317
  ret i32 %7, !insn.addr !318

; uselistorder directives
  uselistorder i32 %storemerge3.reload, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %b_-12.02.reg2mem, { 2, 0, 1 }
  uselistorder i32* %a_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_2227, { 1, 0 }
}

define i32 @loop_modify_var(i32 %n) local_unnamed_addr {
dec_label_pc_2260:
  %sum_-8.0.lcssa.reg2mem = alloca i32, !insn.addr !319
  %sum_-8.01.reg2mem = alloca i32, !insn.addr !319
  %storemerge2.reg2mem = alloca i32, !insn.addr !319
  %0 = icmp sgt i32 %n, 0, !insn.addr !320
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !320
  store i32 0, i32* %sum_-8.01.reg2mem, !insn.addr !320
  store i32 0, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !320
  br i1 %0, label %dec_label_pc_2283, label %dec_label_pc_22b2, !insn.addr !320

dec_label_pc_2283:                                ; preds = %dec_label_pc_2260, %dec_label_pc_2283
  %sum_-8.01.reload = load i32, i32* %sum_-8.01.reg2mem
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %1 = add i32 %sum_-8.01.reload, %storemerge2.reload, !insn.addr !321
  %2 = icmp slt i32 %storemerge2.reload, 6, !insn.addr !322
  %3 = add i32 %storemerge2.reload, 2
  %spec.select = select i1 %2, i32 %storemerge2.reload, i32 %3
  %4 = add i32 %spec.select, 1, !insn.addr !323
  %5 = icmp slt i32 %4, %n, !insn.addr !320
  store i32 %4, i32* %storemerge2.reg2mem, !insn.addr !320
  store i32 %1, i32* %sum_-8.01.reg2mem, !insn.addr !320
  store i32 %1, i32* %sum_-8.0.lcssa.reg2mem, !insn.addr !320
  br i1 %5, label %dec_label_pc_2283, label %dec_label_pc_22b2, !insn.addr !320

dec_label_pc_22b2:                                ; preds = %dec_label_pc_2283, %dec_label_pc_2260
  %sum_-8.0.lcssa.reload = load i32, i32* %sum_-8.0.lcssa.reg2mem
  ret i32 %sum_-8.0.lcssa.reload, !insn.addr !324

; uselistorder directives
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sum_-8.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 %n, { 1, 0 }
  uselistorder label %dec_label_pc_2283, { 1, 0 }
}

define i32 @loop_external_state(i32* %flag) local_unnamed_addr {
dec_label_pc_22c0:
  %stack_var_-8.1.reg2mem = alloca i32, !insn.addr !325
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !325
  %0 = load i32, i32* %flag, align 4, !insn.addr !326
  %1 = icmp eq i32 %0, 0, !insn.addr !327
  %2 = icmp eq i1 %1, false, !insn.addr !328
  store i32 0, i32* %stack_var_-8.0.reg2mem, !insn.addr !329
  br label %dec_label_pc_22ce, !insn.addr !329

dec_label_pc_22ce:                                ; preds = %dec_label_pc_22dc, %dec_label_pc_22c0
  store i32 0, i32* %stack_var_-8.1.reg2mem, !insn.addr !328
  br i1 %2, label %dec_label_pc_22f9, label %dec_label_pc_22dc, !insn.addr !328

dec_label_pc_22dc:                                ; preds = %dec_label_pc_22ce
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  %3 = add nuw nsw i32 %stack_var_-8.0.reload, 1, !insn.addr !330
  %4 = icmp ult i32 %3, 101, !insn.addr !331
  store i32 %3, i32* %stack_var_-8.0.reg2mem, !insn.addr !331
  store i32 101, i32* %stack_var_-8.1.reg2mem, !insn.addr !331
  br i1 %4, label %dec_label_pc_22ce, label %dec_label_pc_22f9, !insn.addr !331

dec_label_pc_22f9:                                ; preds = %dec_label_pc_22dc, %dec_label_pc_22ce
  %stack_var_-8.1.reload = load i32, i32* %stack_var_-8.1.reg2mem
  ret i32 %stack_var_-8.1.reload, !insn.addr !332

; uselistorder directives
  uselistorder i32* %stack_var_-8.0.reg2mem, { 1, 0, 2 }
}

define i32 @recursion_factorial(i32 %n) local_unnamed_addr {
dec_label_pc_2310:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i32, !insn.addr !333
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32, !insn.addr !334
  %3 = icmp sgt i32 %2, 1, !insn.addr !335
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !335
  br i1 %3, label %dec_label_pc_233f, label %dec_label_pc_2361, !insn.addr !335

dec_label_pc_233f:                                ; preds = %dec_label_pc_2310
  %4 = add i32 %2, -1, !insn.addr !336
  %5 = call i32 @recursion_factorial(i32 %4), !insn.addr !337
  %6 = mul i32 %5, %2, !insn.addr !338
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !339
  br label %dec_label_pc_2361, !insn.addr !339

dec_label_pc_2361:                                ; preds = %dec_label_pc_2310, %dec_label_pc_233f
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !340

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2361, { 1, 0 }
}

define i32 @tail_recursion(i32 %n, i32 %acc) local_unnamed_addr {
dec_label_pc_2370:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !341
  %1 = load i32, i32* %0
  %2 = icmp sgt i32 %acc, 1, !insn.addr !342
  br i1 %2, label %dec_label_pc_23a1, label %dec_label_pc_23c0, !insn.addr !342

dec_label_pc_23a1:                                ; preds = %dec_label_pc_2370
  %3 = add i32 %acc, -1, !insn.addr !343
  %4 = mul i32 %1, %acc, !insn.addr !344
  %5 = call i32 @tail_recursion(i32 %3, i32 %4), !insn.addr !345
  store i32 %5, i32* %storemerge.reg2mem, !insn.addr !346
  br label %dec_label_pc_23c0, !insn.addr !346

dec_label_pc_23c0:                                ; preds = %dec_label_pc_2370, %dec_label_pc_23a1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !347

; uselistorder directives
  uselistorder i32 %acc, { 0, 2, 1 }
  uselistorder label %dec_label_pc_23c0, { 1, 0 }
}

define i32 @indirect_recursion_a(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_23d0:
  %0 = alloca i32
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !348
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !349
  %3 = icmp slt i32 %1, 0, !insn.addr !349
  %4 = icmp eq i1 %3, false, !insn.addr !350
  %5 = icmp eq i1 %2, false, !insn.addr !350
  %6 = icmp eq i1 %4, %5, !insn.addr !350
  store i32 %depth, i32* %stack_var_-12.0.reg2mem, !insn.addr !350
  br i1 %6, label %dec_label_pc_2401, label %dec_label_pc_245e, !insn.addr !350

dec_label_pc_2401:                                ; preds = %dec_label_pc_23d0
  %7 = zext i32 %depth to i64, !insn.addr !351
  %8 = mul i64 %7, 4294967296, !insn.addr !351
  %9 = or i64 %8, %7, !insn.addr !351
  %10 = srem i64 %9, 2, !insn.addr !351
  %11 = trunc i64 %10 to i32, !insn.addr !351
  %12 = icmp eq i32 %11, 0, !insn.addr !352
  %13 = icmp eq i1 %12, false, !insn.addr !353
  br i1 %13, label %dec_label_pc_243f, label %dec_label_pc_2415, !insn.addr !353

dec_label_pc_2415:                                ; preds = %dec_label_pc_2401
  %14 = ashr i32 %depth, 31, !insn.addr !354
  %15 = zext i32 %14 to i64, !insn.addr !355
  %16 = mul i64 %15, 4294967296, !insn.addr !355
  %17 = or i64 %16, %7, !insn.addr !355
  %18 = sdiv i64 %17, 2, !insn.addr !355
  %19 = trunc i64 %18 to i32, !insn.addr !355
  %20 = add i32 %1, -1, !insn.addr !356
  %21 = call i32 @indirect_recursion_b(i32 %19, i32 %20), !insn.addr !357
  store i32 %21, i32* %stack_var_-12.0.reg2mem, !insn.addr !358
  br label %dec_label_pc_245e, !insn.addr !358

dec_label_pc_243f:                                ; preds = %dec_label_pc_2401
  %22 = mul i32 %depth, 3, !insn.addr !359
  %23 = add i32 %22, 1, !insn.addr !360
  %24 = add i32 %1, -1, !insn.addr !361
  %25 = call i32 @indirect_recursion_b(i32 %23, i32 %24), !insn.addr !362
  store i32 %25, i32* %stack_var_-12.0.reg2mem, !insn.addr !363
  br label %dec_label_pc_245e, !insn.addr !363

dec_label_pc_245e:                                ; preds = %dec_label_pc_23d0, %dec_label_pc_243f, %dec_label_pc_2415
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  ret i32 %stack_var_-12.0.reload, !insn.addr !364

; uselistorder directives
  uselistorder i64 %7, { 1, 2, 0 }
  uselistorder i32 %1, { 1, 0, 2, 3 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 (i32, i32)* @indirect_recursion_b, { 1, 0 }
  uselistorder i32 %depth, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_245e, { 1, 2, 0 }
}

define i32 @indirect_recursion_b(i32 %n, i32 %depth) local_unnamed_addr {
dec_label_pc_2470:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !365
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %1, 0, !insn.addr !366
  %3 = icmp slt i32 %1, 0, !insn.addr !366
  %4 = icmp eq i1 %3, false, !insn.addr !367
  %5 = icmp eq i1 %2, false, !insn.addr !367
  %6 = icmp eq i1 %4, %5, !insn.addr !367
  store i32 %depth, i32* %storemerge.reg2mem, !insn.addr !367
  br i1 %6, label %dec_label_pc_24a1, label %dec_label_pc_24bf, !insn.addr !367

dec_label_pc_24a1:                                ; preds = %dec_label_pc_2470
  %7 = add i32 %depth, 1, !insn.addr !368
  %8 = add i32 %1, -1, !insn.addr !369
  %9 = call i32 @indirect_recursion_a(i32 %7, i32 %8), !insn.addr !370
  store i32 %9, i32* %storemerge.reg2mem, !insn.addr !371
  br label %dec_label_pc_24bf, !insn.addr !371

dec_label_pc_24bf:                                ; preds = %dec_label_pc_2470, %dec_label_pc_24a1
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !372

; uselistorder directives
  uselistorder i32 %1, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 %depth, { 1, 0 }
  uselistorder label %dec_label_pc_24bf, { 1, 0 }
}

define i32 @call_func_ptr(i32 (i32)* %f, i32 %x) local_unnamed_addr {
dec_label_pc_24d0:
  ret i32 %x, !insn.addr !373
}

define i32 @call_func_ptr_array(i32 %idx, i32 %x) local_unnamed_addr {
dec_label_pc_2500:
  %storemerge.reg2mem = alloca i32, !insn.addr !374
  %stack_var_-4 = alloca i32, align 4
  %0 = icmp ult i32 %x, 3
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !375
  br i1 %0, label %dec_label_pc_2557, label %dec_label_pc_256c, !insn.addr !375

dec_label_pc_2557:                                ; preds = %dec_label_pc_2500
  %1 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !376
  %2 = mul i32 %x, 4, !insn.addr !377
  %3 = add i32 %2, -20, !insn.addr !377
  %4 = add i32 %3, %1, !insn.addr !377
  %5 = inttoptr i32 %4 to i32*, !insn.addr !377
  %6 = load i32, i32* %5, align 4, !insn.addr !377
  store i32 %6, i32* %storemerge.reg2mem, !insn.addr !378
  br label %dec_label_pc_256c, !insn.addr !378

dec_label_pc_256c:                                ; preds = %dec_label_pc_2500, %dec_label_pc_2557
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !379

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_256c, { 1, 0 }
}

define i32 @double_value(i32 %x) local_unnamed_addr {
dec_label_pc_2580:
  %0 = mul i32 %x, 2, !insn.addr !380
  ret i32 %0, !insn.addr !381
}

define i32 @triple_value(i32 %x) local_unnamed_addr {
dec_label_pc_2590:
  %0 = mul i32 %x, 3, !insn.addr !382
  ret i32 %0, !insn.addr !383
}

define i32 @call_virtual_func(i8* %obj, i32 %x) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = mul i32 %x, 2, !insn.addr !384
  ret i32 %0, !insn.addr !385
}

define i32 @process_with_callback(i32* %arr, i32 %n, i32 (i32)* %cb) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = alloca i32
  %sum_-12.0.lcssa.reg2mem = alloca i32, !insn.addr !386
  %1 = load i32, i32* %0
  %2 = icmp sgt i32 (i32)* %cb, null, !insn.addr !387
  store i32 0, i32* %sum_-12.0.lcssa.reg2mem, !insn.addr !387
  br i1 %2, label %dec_label_pc_25f9.lr.ph, label %dec_label_pc_2621, !insn.addr !387

dec_label_pc_25f9.lr.ph:                          ; preds = %dec_label_pc_25c0
  %3 = ptrtoint i32 (i32)* %cb to i32, !insn.addr !388
  %4 = icmp sgt i32 %3, 1
  %smax = select i1 %4, i32 %3, i32 1
  %5 = mul i32 %1, %smax
  store i32 %5, i32* %sum_-12.0.lcssa.reg2mem
  br label %dec_label_pc_2621

dec_label_pc_2621:                                ; preds = %dec_label_pc_25f9.lr.ph, %dec_label_pc_25c0
  %sum_-12.0.lcssa.reload = load i32, i32* %sum_-12.0.lcssa.reg2mem
  ret i32 %sum_-12.0.lcssa.reload, !insn.addr !389

; uselistorder directives
  uselistorder i32* %sum_-12.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32)* %cb, { 1, 0 }
}

define void @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_2630:
  %0 = alloca i32
  %arr_-100 = alloca [1 x i32], align 4
  %ext_flag_-80 = alloca i32, align 4
  %dst_-76 = alloca [1 x i32], align 4
  %src_-44 = alloca [1 x i32], align 4
  %flag_-12 = alloca i32, align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11466), !insn.addr !390
  %3 = inttoptr i32 %2 to i32 (i32)*, !insn.addr !391
  %4 = bitcast i32 (i32)* %3 to i8*
  %5 = call i32 (i8*, ...) @printf(i8* %4), !insn.addr !392
  %6 = call i32 @loop_multi_exit(i32 7), !insn.addr !393
  %7 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11429), !insn.addr !394
  %8 = inttoptr i32 %7 to i32 (i32)*, !insn.addr !395
  %9 = bitcast i32 (i32)* %8 to i8*
  %10 = call i32 (i8*, ...) @printf(i8* %9), !insn.addr !396
  store i32 0, i32* %flag_-12, align 4, !insn.addr !397
  %11 = call i32 @infinite_loop(i32* nonnull %flag_-12), !insn.addr !398
  %12 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11397), !insn.addr !399
  %13 = inttoptr i32 %12 to i32 (i32)*, !insn.addr !400
  %14 = bitcast i32 (i32)* %13 to i8*
  %15 = call i32 (i8*, ...) @printf(i8* %14), !insn.addr !401
  %16 = call i32 @multi_return(i32 -5), !insn.addr !402
  %17 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11367), !insn.addr !403
  %18 = inttoptr i32 %17 to i32 (i32)*, !insn.addr !404
  %19 = bitcast i32 (i32)* %18 to i8*
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !405
  %21 = call i32 @multi_return(i32 100), !insn.addr !406
  %22 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !407
  %23 = call i32 @multi_return(i32 3), !insn.addr !408
  %24 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !409
  %25 = call i32 @conditional_return(i32 5), !insn.addr !410
  %26 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11338), !insn.addr !411
  %27 = inttoptr i32 %26 to i32 (i32)*, !insn.addr !412
  %28 = bitcast i32 (i32)* %27 to i8*
  %29 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !413
  %30 = call i32 @conditional_return(i32 -5), !insn.addr !414
  %31 = call i32 (i8*, ...) @printf(i8* %28), !insn.addr !415
  %32 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -10612), !insn.addr !416
  %33 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-44, i32 0, i32 0
  %34 = inttoptr i32 %32 to i32*, !insn.addr !417
  %35 = call i32* @memcpy(i32* nonnull %33, i32* %34, i32 32), !insn.addr !417
  %36 = getelementptr inbounds [1 x i32], [1 x i32]* %dst_-76, i32 0, i32 0
  %37 = call i32* @memset(i32* nonnull %36, i32 0, i32 32), !insn.addr !418
  %38 = getelementptr inbounds [1 x i32], [1 x i32]* %src_-44, i32 0, i32 0, !insn.addr !419
  %39 = call i32 @duffs_device(i32* nonnull %36, i32* nonnull %38, i32 8), !insn.addr !419
  %40 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11303), !insn.addr !420
  %41 = inttoptr i32 %40 to i32 (i32)*, !insn.addr !421
  %42 = bitcast i32 (i32)* %41 to i8*
  %43 = call i32 (i8*, ...) @printf(i8* %42), !insn.addr !422
  %44 = call i32 @loop_complex_cond(i32 10), !insn.addr !423
  %45 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11274), !insn.addr !424
  %46 = inttoptr i32 %45 to i32 (i32)*, !insn.addr !425
  %47 = bitcast i32 (i32)* %46 to i8*
  %48 = call i32 (i8*, ...) @printf(i8* %47), !insn.addr !426
  %49 = call i32 @loop_modify_var(i32 10), !insn.addr !427
  %50 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11240), !insn.addr !428
  %51 = inttoptr i32 %50 to i32 (i32)*, !insn.addr !429
  %52 = bitcast i32 (i32)* %51 to i8*
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !430
  store i32 0, i32* %ext_flag_-80, align 4, !insn.addr !431
  %54 = call i32 @loop_external_state(i32* nonnull %ext_flag_-80), !insn.addr !432
  %55 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11208), !insn.addr !433
  %56 = inttoptr i32 %55 to i32 (i32)*, !insn.addr !434
  %57 = bitcast i32 (i32)* %56 to i8*
  %58 = call i32 (i8*, ...) @printf(i8* %57), !insn.addr !435
  %59 = call i32 @recursion_factorial(i32 5), !insn.addr !436
  %60 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11172), !insn.addr !437
  %61 = inttoptr i32 %60 to i32 (i32)*, !insn.addr !438
  %62 = bitcast i32 (i32)* %61 to i8*
  %63 = call i32 (i8*, ...) @printf(i8* %62), !insn.addr !439
  %64 = call i32 @tail_recursion(i32 5, i32 1), !insn.addr !440
  %65 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11136), !insn.addr !441
  %66 = inttoptr i32 %65 to i32 (i32)*, !insn.addr !442
  %67 = bitcast i32 (i32)* %66 to i8*
  %68 = call i32 (i8*, ...) @printf(i8* %67), !insn.addr !443
  %69 = call i32 @indirect_recursion_a(i32 10, i32 3), !insn.addr !444
  %70 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11105), !insn.addr !445
  %71 = inttoptr i32 %70 to i32 (i32)*, !insn.addr !446
  %72 = bitcast i32 (i32)* %71 to i8*
  %73 = call i32 (i8*, ...) @printf(i8* %72), !insn.addr !447
  %74 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -19072), !insn.addr !448
  %75 = inttoptr i32 %74 to i32 (i32)*, !insn.addr !449
  %76 = call i32 @call_func_ptr(i32 (i32)* %75, i32 5), !insn.addr !450
  %77 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11070), !insn.addr !451
  %78 = inttoptr i32 %77 to i32 (i32)*, !insn.addr !452
  %79 = bitcast i32 (i32)* %78 to i8*
  %80 = call i32 (i8*, ...) @printf(i8* %79), !insn.addr !453
  %81 = call i32 @call_func_ptr_array(i32 0, i32 5), !insn.addr !454
  %82 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11040), !insn.addr !455
  %83 = inttoptr i32 %82 to i32 (i32)*, !insn.addr !456
  %84 = bitcast i32 (i32)* %83 to i8*
  %85 = call i32 (i8*, ...) @printf(i8* %84), !insn.addr !457
  %86 = call i32 @call_func_ptr_array(i32 2, i32 5), !insn.addr !458
  %87 = call i32 (i8*, ...) @printf(i8* %84), !insn.addr !459
  %88 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -12108), !insn.addr !460
  %89 = getelementptr inbounds [1 x i32], [1 x i32]* %arr_-100, i32 0, i32 0
  %90 = inttoptr i32 %88 to i32*, !insn.addr !461
  %91 = call i32* @memcpy(i32* nonnull %89, i32* %90, i32 20), !insn.addr !461
  %92 = call i32 @process_with_callback(i32* nonnull %89, i32 5, i32 (i32)* %75), !insn.addr !462
  %93 = add i32 %1, add (i32 ptrtoint (i32* @global_var_49c4 to i32), i32 -11004), !insn.addr !463
  %94 = inttoptr i32 %93 to i32 (i32)*, !insn.addr !464
  %95 = bitcast i32 (i32)* %94 to i8*
  %96 = call i32 (i8*, ...) @printf(i8* %95), !insn.addr !465
  ret void, !insn.addr !466

; uselistorder directives
  uselistorder i32 %1, { 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder [1 x i32]* %src_-44, { 1, 0 }
  uselistorder i32 20, { 1, 2, 0 }
  uselistorder i32 (i32, i32)* @call_func_ptr_array, { 1, 0 }
  uselistorder i32 (i32, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 (i32, i32)* @tail_recursion, { 1, 0 }
  uselistorder i32 (i32)* @recursion_factorial, { 1, 0 }
  uselistorder i32 8, { 2, 0, 1, 3 }
  uselistorder i32 (i32)* @conditional_return, { 1, 0 }
  uselistorder i32 100, { 2, 0, 1 }
  uselistorder i32 (i32)* @multi_return, { 2, 1, 0 }
  uselistorder i32 7, { 0, 3, 1, 2 }
}

define i32 @non_local_jump(i32 %x) local_unnamed_addr {
dec_label_pc_29a0:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !467
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = add i32 %2, add (i32 ptrtoint ([24 x i8]* @global_var_4654 to i32), i32 52), !insn.addr !468
  %4 = insertvalue [8 x i32] undef, i32 %3, 0, !insn.addr !469
  %5 = insertvalue %__jmp_buf_tag undef, [8 x i32] %4, 0, !insn.addr !469
  %6 = insertvalue [1 x %__jmp_buf_tag] undef, %__jmp_buf_tag %5, 0, !insn.addr !469
  %7 = call i32 @_setjmp([1 x %__jmp_buf_tag] %6), !insn.addr !469
  %8 = icmp eq i32 %7, 0, !insn.addr !470
  %9 = icmp eq i1 %8, false, !insn.addr !471
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !471
  br i1 %9, label %dec_label_pc_2a2b, label %dec_label_pc_29d0, !insn.addr !471

dec_label_pc_29d0:                                ; preds = %dec_label_pc_29a0
  %10 = icmp slt i32 %1, 0, !insn.addr !472
  %11 = icmp eq i1 %10, false, !insn.addr !473
  br i1 %11, label %dec_label_pc_29f3, label %dec_label_pc_29da, !insn.addr !473

dec_label_pc_29da:                                ; preds = %dec_label_pc_29d0
  call void @longjmp([1 x %__jmp_buf_tag] %6, i32 ptrtoint (i32* @0 to i32)), !insn.addr !474
  unreachable, !insn.addr !474

dec_label_pc_29f3:                                ; preds = %dec_label_pc_29d0
  %12 = icmp slt i32 %1, 101, !insn.addr !475
  br i1 %12, label %dec_label_pc_2a16, label %dec_label_pc_29fd, !insn.addr !475

dec_label_pc_29fd:                                ; preds = %dec_label_pc_29f3
  call void @longjmp([1 x %__jmp_buf_tag] %6, i32 ptrtoint (i32* @0 to i32)), !insn.addr !476
  unreachable, !insn.addr !476

dec_label_pc_2a16:                                ; preds = %dec_label_pc_29f3
  %13 = mul i32 %1, 2, !insn.addr !477
  store i32 %13, i32* %storemerge.reg2mem, !insn.addr !478
  br label %dec_label_pc_2a2b, !insn.addr !478

dec_label_pc_2a2b:                                ; preds = %dec_label_pc_29a0, %dec_label_pc_2a16
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !479

; uselistorder directives
  uselistorder [1 x %__jmp_buf_tag] %6, { 1, 0, 2 }
  uselistorder i32 %1, { 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_2a2b, { 1, 0 }
}

define i32 @cpp_exception(i32 %x) local_unnamed_addr {
dec_label_pc_2a40:
  %0 = icmp slt i32 %x, 0, !insn.addr !480
  %1 = icmp eq i1 %0, false, !insn.addr !481
  br i1 %1, label %dec_label_pc_2a5d, label %dec_label_pc_2a7c, !insn.addr !481

dec_label_pc_2a5d:                                ; preds = %dec_label_pc_2a40
  %2 = icmp slt i32 %x, 101, !insn.addr !482
  %3 = mul i32 %x, 2
  %spec.select = select i1 %2, i32 %3, i32 -2
  ret i32 %spec.select

dec_label_pc_2a7c:                                ; preds = %dec_label_pc_2a40
  ret i32 -1, !insn.addr !483

; uselistorder directives
  uselistorder i32 -2, { 2, 0, 1 }
  uselistorder i32 101, { 1, 2, 0, 3, 4 }
}

define i32 @large_jump_table(i32 %op, i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2a90:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !484
  %ops_-52 = alloca [1 x i32 (i32, i32)*], align 4
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = add i32 %1, add (i32 ptrtoint ([10 x i8]* @global_var_4564 to i32), i32 -300), !insn.addr !485
  %3 = bitcast [1 x i32 (i32, i32)*]* %ops_-52 to i32*, !insn.addr !486
  %4 = inttoptr i32 %2 to i32*, !insn.addr !486
  %5 = call i32* @memcpy(i32* nonnull %3, i32* %4, i32 40), !insn.addr !486
  %6 = icmp ult i32 %a, 10
  store i32 -1, i32* %storemerge.reg2mem, !insn.addr !487
  br i1 %6, label %dec_label_pc_2aec, label %dec_label_pc_2b08, !insn.addr !487

dec_label_pc_2aec:                                ; preds = %dec_label_pc_2a90
  %7 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !488
  %8 = mul i32 %a, 4, !insn.addr !489
  %9 = add i32 %8, -48, !insn.addr !489
  %10 = add i32 %9, %7, !insn.addr !489
  %11 = inttoptr i32 %10 to i32*, !insn.addr !489
  %12 = load i32, i32* %11, align 4, !insn.addr !489
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !490
  br label %dec_label_pc_2b08, !insn.addr !490

dec_label_pc_2b08:                                ; preds = %dec_label_pc_2a90, %dec_label_pc_2aec
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !491

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_2b08, { 1, 0 }
}

define i32 @op_add(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2b20:
  %0 = add i32 %b, %a, !insn.addr !492
  ret i32 %0, !insn.addr !493
}

define i32 @op_sub(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2b40:
  %0 = sub i32 %a, %b, !insn.addr !494
  ret i32 %0, !insn.addr !495
}

define i32 @op_mul(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2b60:
  %0 = mul i32 %b, %a, !insn.addr !496
  ret i32 %0, !insn.addr !497
}

define i32 @op_div(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2b80:
  %storemerge.reg2mem = alloca i32, !insn.addr !498
  %0 = icmp eq i32 %b, 0, !insn.addr !499
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !500
  br i1 %0, label %dec_label_pc_2bad, label %dec_label_pc_2b94, !insn.addr !500

dec_label_pc_2b94:                                ; preds = %dec_label_pc_2b80
  %1 = ashr i32 %a, 31, !insn.addr !501
  %2 = zext i32 %a to i64, !insn.addr !502
  %3 = zext i32 %1 to i64, !insn.addr !502
  %4 = mul i64 %3, 4294967296, !insn.addr !502
  %5 = or i64 %4, %2, !insn.addr !502
  %6 = zext i32 %b to i64, !insn.addr !502
  %7 = sdiv i64 %5, %6, !insn.addr !502
  %8 = trunc i64 %7 to i32, !insn.addr !502
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !503
  br label %dec_label_pc_2bad, !insn.addr !503

dec_label_pc_2bad:                                ; preds = %dec_label_pc_2b80, %dec_label_pc_2b94
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !504

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2bad, { 1, 0 }
}

define i32 @op_mod(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2bc0:
  %storemerge.reg2mem = alloca i32, !insn.addr !505
  %0 = icmp eq i32 %b, 0, !insn.addr !506
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !507
  br i1 %0, label %dec_label_pc_2bed, label %dec_label_pc_2bd4, !insn.addr !507

dec_label_pc_2bd4:                                ; preds = %dec_label_pc_2bc0
  %1 = ashr i32 %a, 31, !insn.addr !508
  %2 = zext i32 %a to i64, !insn.addr !509
  %3 = zext i32 %1 to i64, !insn.addr !509
  %4 = mul i64 %3, 4294967296, !insn.addr !509
  %5 = or i64 %4, %2, !insn.addr !509
  %6 = zext i32 %b to i64, !insn.addr !509
  %7 = srem i64 %5, %6, !insn.addr !509
  %8 = trunc i64 %7 to i32, !insn.addr !509
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !510
  br label %dec_label_pc_2bed, !insn.addr !510

dec_label_pc_2bed:                                ; preds = %dec_label_pc_2bc0, %dec_label_pc_2bd4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !511

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2bed, { 1, 0 }
}

define i32 @op_and(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2c00:
  %0 = and i32 %b, %a, !insn.addr !512
  ret i32 %0, !insn.addr !513
}

define i32 @op_or(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2c20:
  %0 = or i32 %b, %a, !insn.addr !514
  ret i32 %0, !insn.addr !515
}

define i32 @op_xor(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2c40:
  %0 = xor i32 %b, %a, !insn.addr !516
  ret i32 %0, !insn.addr !517
}

define i32 @op_shl(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2c60:
  %0 = urem i32 %b, 32, !insn.addr !518
  %1 = shl i32 %a, %0
  ret i32 %1, !insn.addr !519
}

define i32 @op_shr(i32 %a, i32 %b) local_unnamed_addr {
dec_label_pc_2c80:
  %0 = urem i32 %b, 32, !insn.addr !520
  %1 = ashr i32 %a, %0
  ret i32 %1, !insn.addr !521
}

define i32 @conditional_func_ptr(i32 %mode, i32 %x) local_unnamed_addr {
dec_label_pc_2ca0:
  %0 = alloca i32
  %storemerge1.in.reg2mem = alloca i32, !insn.addr !522
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %x, 0, !insn.addr !523
  %3 = icmp eq i1 %2, false, !insn.addr !524
  br i1 %3, label %dec_label_pc_2cd7, label %dec_label_pc_2cc6, !insn.addr !524

dec_label_pc_2cc6:                                ; preds = %dec_label_pc_2ca0
  %4 = add i32 %1, add (i32 ptrtoint (i32* @global_var_4354 to i32), i32 -19072), !insn.addr !525
  store i32 %4, i32* %storemerge1.in.reg2mem, !insn.addr !526
  br label %dec_label_pc_2d03, !insn.addr !526

dec_label_pc_2cd7:                                ; preds = %dec_label_pc_2ca0
  %5 = icmp eq i32 %x, 1, !insn.addr !527
  %6 = icmp eq i1 %5, false, !insn.addr !528
  %storemerge.in.v = select i1 %6, i32 add (i32 ptrtoint (i32* @global_var_4354 to i32), i32 -19696), i32 add (i32 ptrtoint (i32* @global_var_4354 to i32), i32 -19056)
  %storemerge.in = add i32 %1, %storemerge.in.v
  store i32 %storemerge.in, i32* %storemerge1.in.reg2mem
  br label %dec_label_pc_2d03

dec_label_pc_2d03:                                ; preds = %dec_label_pc_2cd7, %dec_label_pc_2cc6
  %storemerge1.in.reload = load i32, i32* %storemerge1.in.reg2mem
  ret i32 %storemerge1.in.reload, !insn.addr !529

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 %x, { 1, 0 }
}

define i32 @state_machine(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_2d20:
  %0 = alloca i32
  %1 = alloca i8*
  %2 = load i32, i32* %0
  %3 = load i8*, i8** %1
  %4 = icmp ult i32 %2, 4
  br i1 %4, label %dec_label_pc_2d4a, label %dec_label_pc_2de3, !insn.addr !530

dec_label_pc_2d4a:                                ; preds = %dec_label_pc_2d20
  %5 = ptrtoint i8* %3 to i32, !insn.addr !531
  %6 = add i32 %5, ptrtoint ([11 x i8]* @global_var_42d5 to i32), !insn.addr !532
  %7 = mul i32 %2, 4, !insn.addr !533
  %8 = add i32 %7, add (i32 ptrtoint ([11 x i8]* @global_var_42d5 to i32), i32 -12192), !insn.addr !533
  %9 = add i32 %8, %5, !insn.addr !533
  %10 = inttoptr i32 %9 to i32*, !insn.addr !533
  %11 = load i32, i32* %10, align 4, !insn.addr !533
  %12 = add i32 %6, %11, !insn.addr !534
  ret i32 %12, !insn.addr !535

dec_label_pc_2de3:                                ; preds = %dec_label_pc_2d20
  ret i32 3, !insn.addr !536

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i32 @fsm_func_table(i32 %event, i32 %state) local_unnamed_addr {
dec_label_pc_2e00:
  %0 = alloca i32
  %storemerge.reg2mem = alloca i32, !insn.addr !537
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = icmp ult i32 %1, 4
  store i32 3, i32* %storemerge.reg2mem, !insn.addr !538
  br i1 %2, label %dec_label_pc_2e60, label %dec_label_pc_2e75, !insn.addr !538

dec_label_pc_2e60:                                ; preds = %dec_label_pc_2e00
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !539
  %4 = mul i32 %1, 4, !insn.addr !540
  %5 = add i32 %4, -24, !insn.addr !540
  %6 = add i32 %5, %3, !insn.addr !540
  %7 = inttoptr i32 %6 to i32*, !insn.addr !540
  %8 = load i32, i32* %7, align 4, !insn.addr !540
  store i32 %8, i32* %storemerge.reg2mem, !insn.addr !541
  br label %dec_label_pc_2e75, !insn.addr !541

dec_label_pc_2e75:                                ; preds = %dec_label_pc_2e00, %dec_label_pc_2e60
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !542

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2e75, { 1, 0 }
}

define i32 @state_idle(i32 %event) local_unnamed_addr {
dec_label_pc_2e80:
  %0 = icmp eq i32 %event, 1, !insn.addr !543
  %1 = zext i1 %0 to i32, !insn.addr !544
  ret i32 %1, !insn.addr !545
}

define i32 @state_processing(i32 %event) local_unnamed_addr {
dec_label_pc_2ea0:
  %stack_var_-8.0.reg2mem = alloca i32, !insn.addr !546
  %0 = icmp eq i32 %event, 2, !insn.addr !547
  %1 = icmp eq i1 %0, false, !insn.addr !548
  store i32 2, i32* %stack_var_-8.0.reg2mem, !insn.addr !548
  br i1 %1, label %dec_label_pc_2ebd, label %dec_label_pc_2eda, !insn.addr !548

dec_label_pc_2ebd:                                ; preds = %dec_label_pc_2ea0
  %2 = icmp eq i32 %event, 99, !insn.addr !549
  %3 = icmp eq i1 %2, false, !insn.addr !550
  %. = select i1 %3, i32 1, i32 3
  store i32 %., i32* %stack_var_-8.0.reg2mem, !insn.addr !551
  br label %dec_label_pc_2eda, !insn.addr !551

dec_label_pc_2eda:                                ; preds = %dec_label_pc_2ebd, %dec_label_pc_2ea0
  %stack_var_-8.0.reload = load i32, i32* %stack_var_-8.0.reg2mem
  ret i32 %stack_var_-8.0.reload, !insn.addr !552
}

define i32 @state_done(i32 %event) local_unnamed_addr {
dec_label_pc_2ef0:
  ret i32 2, !insn.addr !553
}

define i32 @state_error(i32 %event) local_unnamed_addr {
dec_label_pc_2f00:
  %0 = icmp eq i32 %event, 0, !insn.addr !554
  %1 = select i1 %0, i32 0, i32 3, !insn.addr !555
  ret i32 %1, !insn.addr !556
}

define i32 @computed_goto(i32* %labels, i32 %idx) local_unnamed_addr {
dec_label_pc_2f20:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-4 = alloca i32, align 4
  %2 = icmp ult i32 %1, 4
  br i1 %2, label %dec_label_pc_2f7c, label %dec_label_pc_2f70, !insn.addr !557

dec_label_pc_2f70:                                ; preds = %dec_label_pc_2f20
  ret i32 -1, !insn.addr !558

dec_label_pc_2f7c:                                ; preds = %dec_label_pc_2f20
  %3 = ptrtoint i32* %stack_var_-4 to i32, !insn.addr !559
  %4 = mul i32 %1, 4, !insn.addr !560
  %5 = add i32 %4, -20, !insn.addr !560
  %6 = add i32 %5, %3, !insn.addr !560
  %7 = inttoptr i32 %6 to i32*, !insn.addr !560
  %8 = load i32, i32* %7, align 4, !insn.addr !560
  ret i32 %8, !insn.addr !561

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 4, { 0, 12, 1, 13, 2, 14, 3, 4, 5, 6, 17, 7, 8, 9, 10, 15, 16, 11 }
}

define i32 @obfuscated_cf(i32 %x) local_unnamed_addr {
dec_label_pc_2fd0:
  %0 = mul i32 %x, %x, !insn.addr !562
  %1 = add i32 %0, 1, !insn.addr !563
  %2 = icmp slt i32 %1, 0, !insn.addr !564
  %3 = icmp eq i1 %2, false, !insn.addr !565
  %4 = mul i32 %x, 2
  %5 = or i32 %4, 1
  %stack_var_-8.0 = select i1 %3, i32 %x, i32 %5
  %6 = mul i32 %stack_var_-8.0, 2, !insn.addr !566
  ret i32 %6, !insn.addr !567

; uselistorder directives
  uselistorder i32 %x, { 1, 0, 2, 3 }
}

define i32 @opaque_predicate(i32 %x) local_unnamed_addr {
dec_label_pc_3010:
  %0 = mul i32 %x, 2, !insn.addr !568
  ret i32 %0, !insn.addr !569
}

define i32 @overlapped_code(i32 %x) local_unnamed_addr {
dec_label_pc_3050:
  %storemerge.reg2mem = alloca i32, !insn.addr !570
  %0 = urem i32 %x, 2, !insn.addr !571
  %1 = icmp eq i32 %0, 0, !insn.addr !572
  br i1 %1, label %dec_label_pc_3075, label %dec_label_pc_3066, !insn.addr !573

dec_label_pc_3066:                                ; preds = %dec_label_pc_3050
  %2 = mul i32 %x, 3, !insn.addr !574
  %3 = add i32 %2, 1, !insn.addr !575
  store i32 %3, i32* %storemerge.reg2mem, !insn.addr !576
  br label %dec_label_pc_3083, !insn.addr !576

dec_label_pc_3075:                                ; preds = %dec_label_pc_3050
  %4 = ashr i32 %x, 31, !insn.addr !577
  %5 = zext i32 %x to i64, !insn.addr !578
  %6 = zext i32 %4 to i64, !insn.addr !578
  %7 = mul i64 %6, 4294967296, !insn.addr !578
  %8 = or i64 %7, %5, !insn.addr !578
  %9 = sdiv i64 %8, 2, !insn.addr !578
  %10 = trunc i64 %9 to i32, !insn.addr !578
  store i32 %10, i32* %storemerge.reg2mem, !insn.addr !579
  br label %dec_label_pc_3083, !insn.addr !579

dec_label_pc_3083:                                ; preds = %dec_label_pc_3075, %dec_label_pc_3066
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !580

; uselistorder directives
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 2, { 1, 2, 3, 4, 5, 0 }
  uselistorder i32 3, { 6, 16, 3, 0, 2, 17, 7, 8, 5, 9, 10, 11, 12, 13, 18, 14, 4, 15, 1 }
  uselistorder i32 %x, { 1, 2, 3, 0 }
}

define void @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_3090:
  %0 = alloca i32
  %labels_-24 = alloca [1 x i32], align 4
  %1 = load i32, i32* %0
  %2 = add i32 %1, 5262, !insn.addr !581
  %3 = inttoptr i32 %2 to i8*, !insn.addr !582
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !583
  %5 = call i32 @non_local_jump(i32 5), !insn.addr !584
  %6 = add i32 %1, 5299, !insn.addr !585
  %7 = inttoptr i32 %6 to i8*, !insn.addr !586
  %8 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !587
  %9 = call i32 @non_local_jump(i32 -5), !insn.addr !588
  %10 = call i32 (i8*, ...) @printf(i8* %7), !insn.addr !589
  %11 = call i32 @cpp_exception(i32 5), !insn.addr !590
  %12 = add i32 %1, 5330, !insn.addr !591
  %13 = inttoptr i32 %12 to i8*, !insn.addr !592
  %14 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !593
  %15 = call i32 @cpp_exception(i32 -5), !insn.addr !594
  %16 = call i32 (i8*, ...) @printf(i8* %13), !insn.addr !595
  %17 = call i32 @large_jump_table(i32 0, i32 10, i32 5), !insn.addr !596
  %18 = add i32 %1, 5360, !insn.addr !597
  %19 = inttoptr i32 %18 to i8*, !insn.addr !598
  %20 = call i32 (i8*, ...) @printf(i8* %19), !insn.addr !599
  %21 = call i32 @conditional_func_ptr(i32 0, i32 5), !insn.addr !600
  %22 = add i32 %1, 5393, !insn.addr !601
  %23 = inttoptr i32 %22 to i8*, !insn.addr !602
  %24 = call i32 (i8*, ...) @printf(i8* %23), !insn.addr !603
  %25 = call i32 @state_machine(i32 1, i32 0), !insn.addr !604
  %26 = add i32 %1, 5430, !insn.addr !605
  %27 = inttoptr i32 %26 to i8*, !insn.addr !606
  %28 = call i32 (i8*, ...) @printf(i8* %27), !insn.addr !607
  %29 = call i32 @fsm_func_table(i32 2, i32 1), !insn.addr !608
  %30 = add i32 %1, 5460, !insn.addr !609
  %31 = inttoptr i32 %30 to i8*, !insn.addr !610
  %32 = call i32 (i8*, ...) @printf(i8* %31), !insn.addr !611
  %33 = add i32 %1, 5648, !insn.addr !612
  %34 = inttoptr i32 %33 to i32*, !insn.addr !612
  %35 = load i32, i32* %34, align 4, !insn.addr !612
  %36 = insertvalue [1 x i32] undef, i32 %35, 0, !insn.addr !613
  store [1 x i32] %36, [1 x i32]* %labels_-24, align 4, !insn.addr !613
  %37 = getelementptr inbounds [1 x i32], [1 x i32]* %labels_-24, i32 0, i32 0
  %38 = call i32 @computed_goto(i32* nonnull %37, i32 2), !insn.addr !614
  %39 = add i32 %1, 5491, !insn.addr !615
  %40 = inttoptr i32 %39 to i8*, !insn.addr !616
  %41 = call i32 (i8*, ...) @printf(i8* %40), !insn.addr !617
  %42 = call i32 @obfuscated_cf(i32 5), !insn.addr !618
  %43 = add i32 %1, 5521, !insn.addr !619
  %44 = inttoptr i32 %43 to i8*, !insn.addr !620
  %45 = call i32 (i8*, ...) @printf(i8* %44), !insn.addr !621
  %46 = call i32 @opaque_predicate(i32 5), !insn.addr !622
  %47 = add i32 %1, 5551, !insn.addr !623
  %48 = inttoptr i32 %47 to i8*, !insn.addr !624
  %49 = call i32 (i8*, ...) @printf(i8* %48), !insn.addr !625
  %50 = call i32 @overlapped_code(i32 5), !insn.addr !626
  %51 = add i32 %1, 5584, !insn.addr !627
  %52 = inttoptr i32 %51 to i8*, !insn.addr !628
  %53 = call i32 (i8*, ...) @printf(i8* %52), !insn.addr !629
  ret void, !insn.addr !630

; uselistorder directives
  uselistorder i32 2, { 25, 19, 15, 2, 3, 4, 14, 0, 20, 5, 6, 21, 7, 8, 26, 27, 9, 10, 16, 22, 11, 12, 17, 18, 23, 24, 1, 13 }
  uselistorder i32 10, { 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0 }
  uselistorder i32 (i32)* @cpp_exception, { 1, 0 }
  uselistorder i32 -5, { 0, 1, 2, 3, 5, 4 }
  uselistorder i32 (i32)* @non_local_jump, { 1, 0 }
  uselistorder i32 5, { 2, 3, 4, 15, 16, 5, 6, 17, 18, 19, 20, 7, 8, 9, 21, 10, 11, 12, 22, 23, 13, 14, 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 60 }
}

define i32 @main() local_unnamed_addr {
dec_label_pc_32d0:
  call void @test_control_flow_l1(), !insn.addr !631
  call void @test_control_flow_l2(), !insn.addr !632
  call void @test_control_flow_l3(), !insn.addr !633
  ret i32 0, !insn.addr !634

; uselistorder directives
  uselistorder i32 0, { 27, 49, 50, 61, 51, 52, 67, 68, 62, 69, 70, 0, 71, 1, 72, 73, 74, 75, 28, 29, 53, 64, 54, 55, 63, 30, 31, 32, 33, 65, 2, 76, 77, 78, 79, 80, 3, 4, 81, 5, 6, 7, 37, 8, 9, 10, 11, 82, 83, 48, 46, 84, 85, 12, 13, 14, 15, 56, 57, 58, 86, 87, 42, 88, 16, 17, 18, 59, 60, 36, 38, 19, 39, 89, 20, 90, 21, 41, 22, 40, 23, 24, 25, 91, 92, 26, 34, 43, 44, 47, 45, 66, 35 }
}

define i32 @__do_global_ctors_aux() local_unnamed_addr {
dec_label_pc_3310:
  %0 = alloca i32
  %merge.reg2mem = alloca i32, !insn.addr !635
  %ebx.0.reg2mem = alloca i32, !insn.addr !635
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.dx(i32 ptrtoint (i32* @0 to i32)), !insn.addr !636
  %3 = add i32 %1, 15263, !insn.addr !637
  %4 = inttoptr i32 %3 to i32*, !insn.addr !637
  %5 = load i32, i32* %4, align 4, !insn.addr !637
  %6 = icmp eq i32 %5, -1, !insn.addr !638
  store i32 %3, i32* %ebx.0.reg2mem, !insn.addr !639
  store i32 -1, i32* %merge.reg2mem, !insn.addr !639
  br i1 %6, label %dec_label_pc_334d, label %dec_label_pc_3340, !insn.addr !639

dec_label_pc_3340:                                ; preds = %dec_label_pc_3310, %dec_label_pc_3340
  %ebx.0.reload = load i32, i32* %ebx.0.reg2mem
  %7 = add i32 %ebx.0.reload, -4, !insn.addr !640
  %8 = inttoptr i32 %7 to i32*, !insn.addr !640
  %9 = load i32, i32* %8, align 4, !insn.addr !640
  %10 = icmp eq i32 %9, -1, !insn.addr !641
  %11 = icmp eq i1 %10, false, !insn.addr !642
  store i32 %7, i32* %ebx.0.reg2mem, !insn.addr !642
  store i32 %9, i32* %merge.reg2mem, !insn.addr !642
  br i1 %11, label %dec_label_pc_3340, label %dec_label_pc_334d, !insn.addr !642

dec_label_pc_334d:                                ; preds = %dec_label_pc_3340, %dec_label_pc_3310
  %merge.reload = load i32, i32* %merge.reg2mem
  ret i32 %merge.reload, !insn.addr !643

; uselistorder directives
  uselistorder i32* %ebx.0.reg2mem, { 2, 0, 1 }
  uselistorder i1 false, { 11, 0, 12, 13, 14, 15, 1, 2, 16, 17, 3, 18, 19, 4, 20, 21, 5, 6, 22, 7, 23, 24, 25, 8, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 10, 9 }
  uselistorder i32 -1, { 16, 0, 17, 9, 1, 10, 2, 3, 18, 19, 20, 21, 22, 23, 4, 24, 5, 6, 7, 13, 8, 11, 12, 14, 15 }
  uselistorder i32 (i32)* @__x86.get_pc_thunk.dx, { 1, 0, 2 }
  uselistorder i32* @0, { 1, 0 }
  uselistorder label %dec_label_pc_3340, { 1, 0 }
}

define i32 @_fini() local_unnamed_addr {
dec_label_pc_335c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = call i32 @__x86.get_pc_thunk.bx(i32 %1), !insn.addr !644
  %3 = call i32 @__do_global_dtors_aux(), !insn.addr !645
  ret i32 %3, !insn.addr !646

; uselistorder directives
  uselistorder i32 (i32)* @__x86.get_pc_thunk.bx, { 1, 0 }
  uselistorder i32 1, { 29, 32, 31, 28, 125, 109, 134, 27, 149, 33, 110, 150, 135, 26, 103, 34, 111, 136, 35, 25, 30, 24, 112, 36, 23, 37, 38, 138, 137, 39, 22, 40, 21, 126, 143, 142, 141, 140, 139, 20, 99, 100, 41, 19, 144, 42, 151, 43, 18, 152, 44, 17, 127, 45, 16, 46, 128, 47, 0, 153, 49, 48, 154, 52, 51, 50, 155, 101, 58, 57, 56, 55, 54, 53, 59, 15, 113, 60, 156, 61, 157, 158, 114, 63, 62, 98, 159, 160, 145, 66, 65, 64, 14, 115, 129, 130, 131, 132, 116, 13, 161, 67, 69, 71, 96, 72, 70, 68, 106, 107, 162, 76, 102, 77, 75, 74, 73, 163, 147, 146, 79, 78, 12, 80, 164, 82, 81, 95, 97, 108, 165, 84, 83, 85, 104, 88, 87, 86, 105, 89, 11, 10, 117, 90, 118, 91, 119, 120, 121, 92, 122, 123, 93, 124, 9, 8, 94, 7, 6, 5, 4, 148, 3, 2, 1, 133 }
}

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

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
!11 = !{i64 4287}
!12 = !{i64 4304}
!13 = !{i64 4310}
!14 = !{i64 4315}
!15 = !{i64 4319}
!16 = !{i64 4323}
!17 = !{i64 4336}
!18 = !{i64 4353}
!19 = !{i64 4392}
!20 = !{i64 4400}
!21 = !{i64 4470}
!22 = !{i64 4480}
!23 = !{i64 4488}
!24 = !{i64 4504}
!25 = !{i64 4511}
!26 = !{i64 4513}
!27 = !{i64 4519}
!28 = !{i64 4521}
!29 = !{i64 4534}
!30 = !{i64 4539}
!31 = !{i64 4598}
!32 = !{i64 4603}
!33 = !{i64 4617}
!34 = !{i64 4628}
!35 = !{i64 4636}
!36 = !{i64 4640}
!37 = !{i64 4674}
!38 = !{i64 4683}
!39 = !{i64 4692}
!40 = !{i64 4705}
!41 = !{i64 4730}
!42 = !{i64 4749}
!43 = !{i64 4763}
!44 = !{i64 4795}
!45 = !{i64 4814}
!46 = !{i64 4824}
!47 = !{i64 4869}
!48 = !{i64 4880}
!49 = !{i64 4903}
!50 = !{i64 4913}
!51 = !{i64 4923}
!52 = !{i64 4933}
!53 = !{i64 4943}
!54 = !{i64 4968}
!55 = !{i64 5023}
!56 = !{i64 5024}
!57 = !{i64 5031}
!58 = !{i64 5035}
!59 = !{i64 5053}
!60 = !{i64 5057}
!61 = !{i64 5075}
!62 = !{i64 5079}
!63 = !{i64 5097}
!64 = !{i64 5111}
!65 = !{i64 5120}
!66 = !{i64 5127}
!67 = !{i64 5131}
!68 = !{i64 5149}
!69 = !{i64 5153}
!70 = !{i64 5171}
!71 = !{i64 5175}
!72 = !{i64 5193}
!73 = !{i64 5197}
!74 = !{i64 5215}
!75 = !{i64 5219}
!76 = !{i64 5237}
!77 = !{i64 5251}
!78 = !{i64 5311}
!79 = !{i64 5276}
!80 = !{i64 5323}
!81 = !{i64 5330}
!82 = !{i64 5332}
!83 = !{i64 5406}
!84 = !{i64 5441}
!85 = !{i64 5420}
!86 = !{i64 5453}
!87 = !{i64 5460}
!88 = !{i64 5462}
!89 = !{i64 5598}
!90 = !{i64 5600}
!91 = !{i64 5682}
!92 = !{i64 5694}
!93 = !{i64 5699}
!94 = !{i64 5713}
!95 = !{i64 5728}
!96 = !{i64 5784}
!97 = !{i64 5787}
!98 = !{i64 5801}
!99 = !{i64 5807}
!100 = !{i64 5813}
!101 = !{i64 5816}
!102 = !{i64 5819}
!103 = !{i64 5825}
!104 = !{i64 5831}
!105 = !{i64 5850}
!106 = !{i64 5856}
!107 = !{i64 5885}
!108 = !{i64 5921}
!109 = !{i64 5936}
!110 = !{i64 5952}
!111 = !{i64 5956}
!112 = !{i64 5970}
!113 = !{i64 5971}
!114 = !{i64 5979}
!115 = !{i64 6031}
!116 = !{i64 6032}
!117 = !{i64 6039}
!118 = !{i64 6054}
!119 = !{i64 6055}
!120 = !{i64 6063}
!121 = !{i64 6069}
!122 = !{i64 6073}
!123 = !{i64 6086}
!124 = !{i64 6096}
!125 = !{i64 6128}
!126 = !{i64 6202}
!127 = !{i64 6208}
!128 = !{i64 6209}
!129 = !{i64 6233}
!130 = !{i64 6254}
!131 = !{i64 6288}
!132 = !{i64 6292}
!133 = !{i64 6295}
!134 = !{i64 6320}
!135 = !{i64 6279}
!136 = !{i64 6346}
!137 = !{i64 6352}
!138 = !{i64 6381}
!139 = !{i64 6396}
!140 = !{i64 6398}
!141 = !{i64 6401}
!142 = !{i64 6424}
!143 = !{i64 6427}
!144 = !{i64 6442}
!145 = !{i64 6494}
!146 = !{i64 6507}
!147 = !{i64 6512}
!148 = !{i64 6521}
!149 = !{i64 6525}
!150 = !{i64 6563}
!151 = !{i64 6577}
!152 = !{i64 6587}
!153 = !{i64 6611}
!154 = !{i64 6640}
!155 = !{i64 6670}
!156 = !{i64 6694}
!157 = !{i64 6700}
!158 = !{i64 6703}
!159 = !{i64 6734}
!160 = !{i64 6742}
!161 = !{i64 6748}
!162 = !{i64 6755}
!163 = !{i64 6770}
!164 = !{i64 6778}
!165 = !{i64 6784}
!166 = !{i64 6791}
!167 = !{i64 6806}
!168 = !{i64 6827}
!169 = !{i64 6842}
!170 = !{i64 6850}
!171 = !{i64 6856}
!172 = !{i64 6863}
!173 = !{i64 6878}
!174 = !{i64 6899}
!175 = !{i64 6922}
!176 = !{i64 6930}
!177 = !{i64 6936}
!178 = !{i64 6943}
!179 = !{i64 6966}
!180 = !{i64 6987}
!181 = !{i64 7010}
!182 = !{i64 7031}
!183 = !{i64 7078}
!184 = !{i64 7086}
!185 = !{i64 7092}
!186 = !{i64 7099}
!187 = !{i64 7114}
!188 = !{i64 7122}
!189 = !{i64 7128}
!190 = !{i64 7135}
!191 = !{i64 7150}
!192 = !{i64 7158}
!193 = !{i64 7164}
!194 = !{i64 7171}
!195 = !{i64 7186}
!196 = !{i64 7194}
!197 = !{i64 7200}
!198 = !{i64 7207}
!199 = !{i64 7222}
!200 = !{i64 7230}
!201 = !{i64 7236}
!202 = !{i64 7243}
!203 = !{i64 7258}
!204 = !{i64 7266}
!205 = !{i64 7272}
!206 = !{i64 7279}
!207 = !{i64 7294}
!208 = !{i64 7302}
!209 = !{i64 7308}
!210 = !{i64 7315}
!211 = !{i64 7330}
!212 = !{i64 7338}
!213 = !{i64 7344}
!214 = !{i64 7351}
!215 = !{i64 7366}
!216 = !{i64 7374}
!217 = !{i64 7380}
!218 = !{i64 7387}
!219 = !{i64 7402}
!220 = !{i64 7410}
!221 = !{i64 7416}
!222 = !{i64 7423}
!223 = !{i64 7446}
!224 = !{i64 7454}
!225 = !{i64 7460}
!226 = !{i64 7467}
!227 = !{i64 7482}
!228 = !{i64 7490}
!229 = !{i64 7496}
!230 = !{i64 7503}
!231 = !{i64 7518}
!232 = !{i64 7539}
!233 = !{i64 7554}
!234 = !{i64 7562}
!235 = !{i64 7568}
!236 = !{i64 7575}
!237 = !{i64 7590}
!238 = !{i64 7598}
!239 = !{i64 7604}
!240 = !{i64 7611}
!241 = !{i64 7626}
!242 = !{i64 7647}
!243 = !{i64 7662}
!244 = !{i64 7670}
!245 = !{i64 7676}
!246 = !{i64 7683}
!247 = !{i64 7706}
!248 = !{i64 7714}
!249 = !{i64 7720}
!250 = !{i64 7727}
!251 = !{i64 7750}
!252 = !{i64 7771}
!253 = !{i64 7781}
!254 = !{i64 7792}
!255 = !{i64 7817}
!256 = !{i64 7838}
!257 = !{i64 7880}
!258 = !{i64 7883}
!259 = !{i64 7886}
!260 = !{i64 7891}
!261 = !{i64 7894}
!262 = !{i64 7897}
!263 = !{i64 7903}
!264 = !{i64 7907}
!265 = !{i64 7913}
!266 = !{i64 7926}
!267 = !{i64 7871}
!268 = !{i64 7945}
!269 = !{i64 7854}
!270 = !{i64 7971}
!271 = !{i64 7984}
!272 = !{i64 8001}
!273 = !{i64 8003}
!274 = !{i64 8006}
!275 = !{i64 7991}
!276 = !{i64 8020}
!277 = !{i64 8033}
!278 = !{i64 8042}
!279 = !{i64 8048}
!280 = !{i64 8065}
!281 = !{i64 8080}
!282 = !{i64 8089}
!283 = !{i64 8093}
!284 = !{i64 8114}
!285 = !{i64 8124}
!286 = !{i64 8151}
!287 = !{i64 8153}
!288 = !{i64 8156}
!289 = !{i64 8189}
!290 = !{i64 8192}
!291 = !{i64 8205}
!292 = !{i64 8214}
!293 = !{i64 8220}
!294 = !{i64 8225}
!295 = !{i64 8229}
!296 = !{i64 8270}
!297 = !{i64 8272}
!298 = !{i64 8302}
!299 = !{i64 8306}
!300 = !{i64 8351}
!301 = !{i64 8358}
!302 = !{i64 8361}
!303 = !{i64 8364}
!304 = !{i64 8372}
!305 = !{i64 8284}
!306 = !{i64 8384}
!307 = !{i64 8391}
!308 = !{i64 8393}
!309 = !{i64 8644}
!310 = !{i64 8656}
!311 = !{i64 8696}
!312 = !{i64 8746}
!313 = !{i64 8755}
!314 = !{i64 8764}
!315 = !{i64 8711}
!316 = !{i64 8778}
!317 = !{i64 8781}
!318 = !{i64 8788}
!319 = !{i64 8800}
!320 = !{i64 8829}
!321 = !{i64 8838}
!322 = !{i64 8848}
!323 = !{i64 8871}
!324 = !{i64 8889}
!325 = !{i64 8896}
!326 = !{i64 8913}
!327 = !{i64 8915}
!328 = !{i64 8918}
!329 = !{i64 8903}
!330 = !{i64 8927}
!331 = !{i64 8937}
!332 = !{i64 8960}
!333 = !{i64 8976}
!334 = !{i64 9001}
!335 = !{i64 9005}
!336 = !{i64 9035}
!337 = !{i64 9041}
!338 = !{i64 9051}
!339 = !{i64 9054}
!340 = !{i64 9065}
!341 = !{i64 9072}
!342 = !{i64 9104}
!343 = !{i64 9127}
!344 = !{i64 9133}
!345 = !{i64 9144}
!346 = !{i64 9149}
!347 = !{i64 9160}
!348 = !{i64 9168}
!349 = !{i64 9196}
!350 = !{i64 9200}
!351 = !{i64 9226}
!352 = !{i64 9228}
!353 = !{i64 9231}
!354 = !{i64 9248}
!355 = !{i64 9249}
!356 = !{i64 9256}
!357 = !{i64 9266}
!358 = !{i64 9274}
!359 = !{i64 9282}
!360 = !{i64 9286}
!361 = !{i64 9292}
!362 = !{i64 9302}
!363 = !{i64 9307}
!364 = !{i64 9318}
!365 = !{i64 9328}
!366 = !{i64 9356}
!367 = !{i64 9360}
!368 = !{i64 9383}
!369 = !{i64 9389}
!370 = !{i64 9399}
!371 = !{i64 9404}
!372 = !{i64 9415}
!373 = !{i64 9463}
!374 = !{i64 9472}
!375 = !{i64 9531}
!376 = !{i64 9473}
!377 = !{i64 9565}
!378 = !{i64 9577}
!379 = !{i64 9588}
!380 = !{i64 9609}
!381 = !{i64 9613}
!382 = !{i64 9622}
!383 = !{i64 9627}
!384 = !{i64 9644}
!385 = !{i64 9648}
!386 = !{i64 9664}
!387 = !{i64 9715}
!388 = !{i64 9712}
!389 = !{i64 9769}
!390 = !{i64 9798}
!391 = !{i64 9804}
!392 = !{i64 9807}
!393 = !{i64 9822}
!394 = !{i64 9830}
!395 = !{i64 9836}
!396 = !{i64 9843}
!397 = !{i64 9851}
!398 = !{i64 9864}
!399 = !{i64 9872}
!400 = !{i64 9878}
!401 = !{i64 9885}
!402 = !{i64 9900}
!403 = !{i64 9908}
!404 = !{i64 9914}
!405 = !{i64 9921}
!406 = !{i64 9936}
!407 = !{i64 9957}
!408 = !{i64 9972}
!409 = !{i64 9993}
!410 = !{i64 10008}
!411 = !{i64 10016}
!412 = !{i64 10022}
!413 = !{i64 10029}
!414 = !{i64 10044}
!415 = !{i64 10065}
!416 = !{i64 10076}
!417 = !{i64 10097}
!418 = !{i64 10129}
!419 = !{i64 10158}
!420 = !{i64 10166}
!421 = !{i64 10172}
!422 = !{i64 10179}
!423 = !{i64 10194}
!424 = !{i64 10202}
!425 = !{i64 10208}
!426 = !{i64 10215}
!427 = !{i64 10230}
!428 = !{i64 10238}
!429 = !{i64 10244}
!430 = !{i64 10251}
!431 = !{i64 10259}
!432 = !{i64 10272}
!433 = !{i64 10280}
!434 = !{i64 10286}
!435 = !{i64 10293}
!436 = !{i64 10308}
!437 = !{i64 10316}
!438 = !{i64 10322}
!439 = !{i64 10329}
!440 = !{i64 10352}
!441 = !{i64 10360}
!442 = !{i64 10366}
!443 = !{i64 10373}
!444 = !{i64 10396}
!445 = !{i64 10404}
!446 = !{i64 10410}
!447 = !{i64 10417}
!448 = !{i64 10425}
!449 = !{i64 10431}
!450 = !{i64 10442}
!451 = !{i64 10450}
!452 = !{i64 10456}
!453 = !{i64 10463}
!454 = !{i64 10488}
!455 = !{i64 10496}
!456 = !{i64 10502}
!457 = !{i64 10509}
!458 = !{i64 10532}
!459 = !{i64 10553}
!460 = !{i64 10564}
!461 = !{i64 10585}
!462 = !{i64 10617}
!463 = !{i64 10625}
!464 = !{i64 10631}
!465 = !{i64 10638}
!466 = !{i64 10648}
!467 = !{i64 10656}
!468 = !{i64 10681}
!469 = !{i64 10690}
!470 = !{i64 10695}
!471 = !{i64 10698}
!472 = !{i64 10704}
!473 = !{i64 10708}
!474 = !{i64 10734}
!475 = !{i64 10743}
!476 = !{i64 10769}
!477 = !{i64 10777}
!478 = !{i64 10783}
!479 = !{i64 10803}
!480 = !{i64 10823}
!481 = !{i64 10827}
!482 = !{i64 10849}
!483 = !{i64 10883}
!484 = !{i64 10896}
!485 = !{i64 10930}
!486 = !{i64 10951}
!487 = !{i64 10960}
!488 = !{i64 10897}
!489 = !{i64 10994}
!490 = !{i64 11013}
!491 = !{i64 11024}
!492 = !{i64 11052}
!493 = !{i64 11056}
!494 = !{i64 11084}
!495 = !{i64 11088}
!496 = !{i64 11116}
!497 = !{i64 11121}
!498 = !{i64 11136}
!499 = !{i64 11146}
!500 = !{i64 11150}
!501 = !{i64 11159}
!502 = !{i64 11160}
!503 = !{i64 11166}
!504 = !{i64 11188}
!505 = !{i64 11200}
!506 = !{i64 11210}
!507 = !{i64 11214}
!508 = !{i64 11223}
!509 = !{i64 11224}
!510 = !{i64 11230}
!511 = !{i64 11252}
!512 = !{i64 11276}
!513 = !{i64 11280}
!514 = !{i64 11308}
!515 = !{i64 11312}
!516 = !{i64 11340}
!517 = !{i64 11344}
!518 = !{i64 11375}
!519 = !{i64 11378}
!520 = !{i64 11407}
!521 = !{i64 11410}
!522 = !{i64 11424}
!523 = !{i64 11452}
!524 = !{i64 11456}
!525 = !{i64 11465}
!526 = !{i64 11474}
!527 = !{i64 11479}
!528 = !{i64 11483}
!529 = !{i64 11542}
!530 = !{i64 11588}
!531 = !{i64 11563}
!532 = !{i64 11564}
!533 = !{i64 11600}
!534 = !{i64 11607}
!535 = !{i64 11609}
!536 = !{i64 11761}
!537 = !{i64 11776}
!538 = !{i64 11844}
!539 = !{i64 11777}
!540 = !{i64 11878}
!541 = !{i64 11890}
!542 = !{i64 11901}
!543 = !{i64 11920}
!544 = !{i64 11923}
!545 = !{i64 11927}
!546 = !{i64 11936}
!547 = !{i64 11943}
!548 = !{i64 11947}
!549 = !{i64 11965}
!550 = !{i64 11969}
!551 = !{i64 11987}
!552 = !{i64 12001}
!553 = !{i64 12028}
!554 = !{i64 12048}
!555 = !{i64 12051}
!556 = !{i64 12055}
!557 = !{i64 12128}
!558 = !{i64 12221}
!559 = !{i64 12065}
!560 = !{i64 12159}
!561 = !{i64 12225}
!562 = !{i64 12256}
!563 = !{i64 12260}
!564 = !{i64 12263}
!565 = !{i64 12266}
!566 = !{i64 12287}
!567 = !{i64 12300}
!568 = !{i64 12342}
!569 = !{i64 12367}
!570 = !{i64 12368}
!571 = !{i64 12378}
!572 = !{i64 12381}
!573 = !{i64 12384}
!574 = !{i64 12390}
!575 = !{i64 12394}
!576 = !{i64 12400}
!577 = !{i64 12413}
!578 = !{i64 12414}
!579 = !{i64 12416}
!580 = !{i64 12426}
!581 = !{i64 12454}
!582 = !{i64 12460}
!583 = !{i64 12463}
!584 = !{i64 12478}
!585 = !{i64 12486}
!586 = !{i64 12492}
!587 = !{i64 12499}
!588 = !{i64 12514}
!589 = !{i64 12535}
!590 = !{i64 12550}
!591 = !{i64 12558}
!592 = !{i64 12564}
!593 = !{i64 12571}
!594 = !{i64 12586}
!595 = !{i64 12607}
!596 = !{i64 12640}
!597 = !{i64 12648}
!598 = !{i64 12654}
!599 = !{i64 12661}
!600 = !{i64 12686}
!601 = !{i64 12694}
!602 = !{i64 12700}
!603 = !{i64 12707}
!604 = !{i64 12732}
!605 = !{i64 12740}
!606 = !{i64 12746}
!607 = !{i64 12753}
!608 = !{i64 12776}
!609 = !{i64 12784}
!610 = !{i64 12790}
!611 = !{i64 12797}
!612 = !{i64 12805}
!613 = !{i64 12811}
!614 = !{i64 12855}
!615 = !{i64 12863}
!616 = !{i64 12869}
!617 = !{i64 12876}
!618 = !{i64 12891}
!619 = !{i64 12899}
!620 = !{i64 12905}
!621 = !{i64 12912}
!622 = !{i64 12927}
!623 = !{i64 12935}
!624 = !{i64 12941}
!625 = !{i64 12948}
!626 = !{i64 12963}
!627 = !{i64 12971}
!628 = !{i64 12977}
!629 = !{i64 12984}
!630 = !{i64 12994}
!631 = !{i64 13037}
!632 = !{i64 13045}
!633 = !{i64 13053}
!634 = !{i64 13065}
!635 = !{i64 13072}
!636 = !{i64 13076}
!637 = !{i64 13087}
!638 = !{i64 13093}
!639 = !{i64 13096}
!640 = !{i64 13122}
!641 = !{i64 13128}
!642 = !{i64 13131}
!643 = !{i64 13137}
!644 = !{i64 13156}
!645 = !{i64 13167}
!646 = !{i64 13176}
