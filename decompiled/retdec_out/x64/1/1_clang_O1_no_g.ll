source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i64
@global_var_3090 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_30af = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_30c9 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_30e1 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_30fd = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_311c = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_313c = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_315b = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_3178 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_3195 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_31b4 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_31d7 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_31f6 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_3211 = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_322e = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_324a = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_3265 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_3283 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_32a0 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_32be = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_3064 = constant i64 12884901890
@global_var_3060 = constant i64 8589934593
@global_var_3010 = local_unnamed_addr constant i64 -26508538157169
@global_var_5d40 = local_unnamed_addr global i64 6512
@global_var_32d9 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_32f9 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_3317 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_3334 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_3357 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_3374 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_3396 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_33b6 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_33da = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_33fe = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_341d = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_3440 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_345e = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_3482 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_5d60 = local_unnamed_addr global i64 7456
@global_var_3030 = local_unnamed_addr constant i64 -19889993552423
@global_var_5db0 = local_unnamed_addr global i64 7776
@global_var_5dd0 = local_unnamed_addr global i64 7880
@global_var_34a8 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_34c7 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_34e5 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_3506 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_352b = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_3549 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_3568 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3586 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_35a4 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_35c5 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@1 = external global i32
@global_var_6050 = local_unnamed_addr global i8 0
@global_var_3654 = constant i32* inttoptr (i64 21474836495 to i32*)
@global_var_3040 = constant i32* inttoptr (i64 85899345930 to i32*)
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_35e5 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_3e9 = global i32 0
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3609 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@global_var_6060 = global i32 0
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_362d = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24544 to i64*), align 32, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @1 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define i32 @function_1030(i8* %s) local_unnamed_addr {
dec_label_pc_1030:
  %0 = call i32 @puts(i8* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_1040(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @function_1050([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_1060([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_1060:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !9
  ret void, !insn.addr !9
}

define void @function_1070(i64* %d) local_unnamed_addr {
dec_label_pc_1070:
  call void @__cxa_finalize(i64* %d), !insn.addr !10
  ret void, !insn.addr !10
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1080:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !11
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !11
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !11
  %3 = call i32 @__libc_start_main(i64 8240, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !11
  %4 = call i64 @__asm_hlt(), !insn.addr !12
  unreachable, !insn.addr !12
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_10b0:
  ret i64 24648, !insn.addr !13
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_10e0:
  ret i64 0, !insn.addr !14
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1120:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_6050, align 1, !insn.addr !15
  %3 = icmp eq i8 %2, 0, !insn.addr !15
  %4 = icmp eq i1 %3, false, !insn.addr !16
  br i1 %4, label %dec_label_pc_1158, label %dec_label_pc_112d, !insn.addr !16

dec_label_pc_112d:                                ; preds = %dec_label_pc_1120
  %5 = load i64, i64* inttoptr (i64 24560 to i64*), align 16, !insn.addr !17
  %6 = icmp eq i64 %5, 0, !insn.addr !17
  br i1 %6, label %dec_label_pc_1147, label %dec_label_pc_113b, !insn.addr !18

dec_label_pc_113b:                                ; preds = %dec_label_pc_112d
  %7 = load i64, i64* inttoptr (i64 24640 to i64*), align 64, !insn.addr !19
  %8 = inttoptr i64 %7 to i64*, !insn.addr !20
  call void @__cxa_finalize(i64* %8), !insn.addr !20
  br label %dec_label_pc_1147, !insn.addr !20

dec_label_pc_1147:                                ; preds = %dec_label_pc_113b, %dec_label_pc_112d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !21
  store i8 1, i8* @global_var_6050, align 1, !insn.addr !22
  ret i64 %9, !insn.addr !23

dec_label_pc_1158:                                ; preds = %dec_label_pc_1120
  ret i64 %1, !insn.addr !24

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
  uselistorder i8* @global_var_6050, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1160:
  %0 = call i64 @register_tm_clones(), !insn.addr !25
  ret i64 %0, !insn.addr !25
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1170:
  %0 = add i64 %arg2, %arg1, !insn.addr !26
  %1 = mul i64 %0, 2, !insn.addr !27
  %2 = sub i64 %1, %arg3, !insn.addr !28
  %3 = and i64 %2, 4294967295, !insn.addr !28
  ret i64 %3, !insn.addr !29
}

define i64 @single_if(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1180:
  %0 = and i64 %arg1, 4294967295, !insn.addr !30
  %1 = trunc i64 %arg1 to i32, !insn.addr !31
  %2 = icmp eq i32 %1, 0, !insn.addr !31
  %3 = icmp slt i32 %1, 0, !insn.addr !31
  %4 = icmp eq i1 %3, false, !insn.addr !32
  %5 = icmp eq i1 %2, false, !insn.addr !32
  %6 = icmp eq i1 %4, %5, !insn.addr !32
  %7 = icmp eq i1 %6, false, !insn.addr !33
  %8 = zext i1 %6 to i32
  %9 = shl i32 %1, %8
  %10 = zext i32 %9 to i64
  %storemerge = select i1 %7, i64 %0, i64 %10
  ret i64 %storemerge, !insn.addr !34

; uselistorder directives
  uselistorder i1 %6, { 1, 0 }
  uselistorder i32 %1, { 0, 2, 1 }
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_1190:
  %0 = trunc i64 %arg1 to i32, !insn.addr !35
  %1 = icmp eq i32 %0, 0, !insn.addr !35
  %2 = icmp slt i32 %0, 0, !insn.addr !35
  %3 = icmp eq i1 %2, false, !insn.addr !36
  %4 = icmp eq i1 %1, false, !insn.addr !36
  %5 = icmp eq i1 %3, %4, !insn.addr !36
  %6 = zext i1 %5 to i64, !insn.addr !36
  ret i64 %6, !insn.addr !37

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_11a0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !38
  %1 = icmp slt i32 %0, 0, !insn.addr !38
  %2 = select i1 %1, i64 0, i64 %arg2, !insn.addr !39
  %3 = add i64 %2, %arg1, !insn.addr !40
  %4 = trunc i64 %arg1 to i32, !insn.addr !41
  %5 = icmp slt i32 %4, 1
  %.op = and i64 %3, 4294967295
  %6 = select i1 %5, i64 0, i64 %.op, !insn.addr !42
  ret i64 %6, !insn.addr !43

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_11b0:
  %merge.reg2mem = alloca i64, !insn.addr !44
  %0 = trunc i64 %arg1 to i32, !insn.addr !44
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !45
  br i1 %1, label %dec_label_pc_11cc, label %dec_label_pc_11b4, !insn.addr !45

dec_label_pc_11b4:                                ; preds = %dec_label_pc_11b0
  %2 = trunc i64 %arg2 to i32, !insn.addr !46
  %3 = icmp slt i32 %2, 1
  store i64 1, i64* %merge.reg2mem, !insn.addr !47
  br i1 %3, label %dec_label_pc_11cc, label %dec_label_pc_11b8, !insn.addr !47

dec_label_pc_11b8:                                ; preds = %dec_label_pc_11b4
  %4 = trunc i64 %arg3 to i32, !insn.addr !48
  %5 = icmp slt i32 %4, 1
  store i64 2, i64* %merge.reg2mem, !insn.addr !49
  br i1 %5, label %dec_label_pc_11cc, label %dec_label_pc_11bc, !insn.addr !49

dec_label_pc_11bc:                                ; preds = %dec_label_pc_11b8
  %6 = trunc i64 %arg4 to i32, !insn.addr !50
  %7 = icmp slt i32 %6, 1
  store i64 3, i64* %merge.reg2mem, !insn.addr !51
  br i1 %7, label %dec_label_pc_11cc, label %dec_label_pc_11c0, !insn.addr !51

dec_label_pc_11c0:                                ; preds = %dec_label_pc_11bc
  %8 = trunc i64 %arg5 to i32, !insn.addr !52
  %9 = icmp eq i32 %8, 0, !insn.addr !52
  %10 = icmp slt i32 %8, 0, !insn.addr !52
  %11 = icmp eq i1 %10, false, !insn.addr !53
  %12 = icmp eq i1 %9, false, !insn.addr !53
  %13 = icmp eq i1 %11, %12, !insn.addr !53
  %14 = zext i1 %13 to i64, !insn.addr !54
  %15 = or i64 %14, 4, !insn.addr !54
  ret i64 %15, !insn.addr !55

dec_label_pc_11cc:                                ; preds = %dec_label_pc_11bc, %dec_label_pc_11b8, %dec_label_pc_11b4, %dec_label_pc_11b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !56

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_11f0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !57
  %1 = icmp ult i32 %0, 3, !insn.addr !57
  %factor = mul i64 %arg1, 10
  %2 = add i64 %factor, 10, !insn.addr !58
  %.op = and i64 %2, 4294967294
  %3 = select i1 %1, i64 %.op, i64 4294967295, !insn.addr !59
  ret i64 %3, !insn.addr !60
}

define i64 @if_elseif_long(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1210:
  %0 = mul i64 %arg1, 100, !insn.addr !61
  %1 = add i64 %0, 100, !insn.addr !62
  %2 = trunc i64 %arg1 to i32, !insn.addr !63
  %3 = icmp ult i32 %2, 5, !insn.addr !63
  %.op = and i64 %1, 4294967292
  %4 = select i1 %3, i64 %.op, i64 4294967295, !insn.addr !64
  ret i64 %4, !insn.addr !65

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_1230:
  %rax.0.reg2mem = alloca i64, !insn.addr !66
  %0 = trunc i64 %arg1 to i32, !insn.addr !67
  %1 = icmp ult i32 %0, 4
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !68
  br i1 %1, label %dec_label_pc_123a, label %dec_label_pc_1247, !insn.addr !68

dec_label_pc_123a:                                ; preds = %dec_label_pc_1230
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !69
  %3 = add i64 %2, ptrtoint (i32** @global_var_3654 to i64), !insn.addr !69
  %4 = inttoptr i64 %3 to i32*, !insn.addr !69
  %5 = load i32, i32* %4, align 4, !insn.addr !69
  %6 = zext i32 %5 to i64, !insn.addr !69
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_1247, !insn.addr !69

dec_label_pc_1247:                                ; preds = %dec_label_pc_1230, %dec_label_pc_123a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !70

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1247, { 1, 0 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_1250:
  %0 = trunc i64 %arg1 to i32, !insn.addr !71
  %1 = icmp ult i32 %0, 10, !insn.addr !71
  %2 = mul i64 %arg1, 10, !insn.addr !72
  %.op = and i64 %2, 4294967294
  %3 = select i1 %1, i64 %.op, i64 4294967295, !insn.addr !73
  ret i64 %3, !insn.addr !74
}

define i64 @switch_default(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1270:
  %0 = add i64 %arg1, 4294967295, !insn.addr !75
  %1 = mul i64 %0, 100, !insn.addr !76
  %2 = add i64 %1, 100, !insn.addr !77
  %3 = trunc i64 %0 to i32, !insn.addr !78
  %4 = icmp ult i32 %3, 3, !insn.addr !78
  %.op = and i64 %2, 4294967292
  %5 = select i1 %4, i64 %.op, i64 0, !insn.addr !79
  ret i64 %5, !insn.addr !80

; uselistorder directives
  uselistorder i64 %0, { 1, 0 }
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_1290:
  %rax.2.reg2mem = alloca i64, !insn.addr !81
  %rax.1.reg2mem = alloca i64, !insn.addr !81
  %rax.0.reg2mem = alloca i64, !insn.addr !81
  %0 = trunc i64 %arg1 to i32, !insn.addr !82
  store i64 0, i64* %rax.0.reg2mem
  store i64 0, i64* %rax.1.reg2mem
  switch i32 %0, label %dec_label_pc_129c [
    i32 1, label %dec_label_pc_12ae
    i32 2, label %dec_label_pc_12ab
  ]

dec_label_pc_129c:                                ; preds = %dec_label_pc_1290
  %1 = icmp eq i32 %0, 3, !insn.addr !83
  %2 = icmp eq i1 %1, false, !insn.addr !84
  store i64 12, i64* %rax.0.reg2mem, !insn.addr !84
  store i64 4294967295, i64* %rax.2.reg2mem, !insn.addr !84
  br i1 %2, label %dec_label_pc_12b0, label %dec_label_pc_12ab, !insn.addr !84

dec_label_pc_12ab:                                ; preds = %dec_label_pc_1290, %dec_label_pc_129c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %3 = mul i64 %arg1, 2, !insn.addr !85
  %4 = add i64 %rax.0.reload, %3, !insn.addr !85
  %5 = and i64 %4, 4294967294, !insn.addr !85
  store i64 %5, i64* %rax.1.reg2mem, !insn.addr !85
  br label %dec_label_pc_12ae, !insn.addr !85

dec_label_pc_12ae:                                ; preds = %dec_label_pc_1290, %dec_label_pc_12ab
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %6 = add i64 %rax.1.reload, %arg1, !insn.addr !86
  %7 = and i64 %6, 4294967295, !insn.addr !86
  store i64 %7, i64* %rax.2.reg2mem, !insn.addr !86
  br label %dec_label_pc_12b0, !insn.addr !86

dec_label_pc_12b0:                                ; preds = %dec_label_pc_12ae, %dec_label_pc_129c
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !87

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.2.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_12ae, { 1, 0 }
  uselistorder label %dec_label_pc_12ab, { 1, 0 }
}

define i64 @loop_for_fixed(i64 %arg1) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !88
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_12d8, label %dec_label_pc_12c4, !insn.addr !89

dec_label_pc_12c4:                                ; preds = %dec_label_pc_12c0
  %2 = add i64 %arg1, 4294967295
  %3 = and i64 %2, 4294967295, !insn.addr !90
  %4 = add i64 %arg1, 4294967294, !insn.addr !91
  %5 = and i64 %4, 4294967295, !insn.addr !91
  %narrow = mul nuw i64 %5, %3
  %6 = udiv i64 %narrow, 2, !insn.addr !92
  %7 = add i64 %6, %2, !insn.addr !93
  %8 = and i64 %7, 4294967295, !insn.addr !93
  ret i64 %8, !insn.addr !94

dec_label_pc_12d8:                                ; preds = %dec_label_pc_12c0
  ret i64 0, !insn.addr !95

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @loop_while(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_12e0:
  %rcx.1.reg2mem = alloca i64, !insn.addr !96
  %rdi.0.reg2mem = alloca i64, !insn.addr !96
  %rcx.0.reg2mem = alloca i64, !insn.addr !96
  %0 = trunc i64 %arg1 to i32, !insn.addr !97
  %1 = icmp eq i32 %0, 0, !insn.addr !97
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !98
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !98
  store i64 0, i64* %rcx.1.reg2mem, !insn.addr !98
  br i1 %1, label %dec_label_pc_1312, label %dec_label_pc_12f0, !insn.addr !98

dec_label_pc_12f0:                                ; preds = %dec_label_pc_12e0, %dec_label_pc_12f0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !99
  %narrow = mul nsw i64 %2, 1717986919
  %3 = lshr i64 %narrow, 63, !insn.addr !100
  %4 = ashr i64 %narrow, 34, !insn.addr !101
  %5 = add nsw i64 %4, %3, !insn.addr !102
  %6 = and i64 %5, 4294967295, !insn.addr !102
  %7 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !103
  %8 = and i64 %7, 4294967295, !insn.addr !103
  %9 = trunc i64 %2 to i32, !insn.addr !104
  %10 = add i32 %9, 9, !insn.addr !104
  %11 = icmp ult i32 %10, 19
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !105
  store i64 %6, i64* %rdi.0.reg2mem, !insn.addr !105
  store i64 %8, i64* %rcx.1.reg2mem, !insn.addr !105
  br i1 %11, label %dec_label_pc_1312, label %dec_label_pc_12f0, !insn.addr !105

dec_label_pc_1312:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_12e0
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %12 = icmp eq i64 %rcx.1.reload, 0, !insn.addr !106
  %13 = icmp eq i1 %12, false, !insn.addr !107
  %14 = select i1 %13, i64 %rcx.1.reload, i64 1, !insn.addr !107
  ret i64 %14, !insn.addr !108

; uselistorder directives
  uselistorder i64 %rcx.1.reload, { 1, 0 }
  uselistorder i64 %narrow, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_12f0, { 1, 0 }
}

define i64 @loop_dowhile() local_unnamed_addr {
dec_label_pc_1320:
  %rdi.0.reg2mem = alloca i64, !insn.addr !109
  %rax.0.reg2mem = alloca i64, !insn.addr !109
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !110
  br label %dec_label_pc_1330, !insn.addr !110

dec_label_pc_1330:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1320
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !111
  %narrow = mul nsw i64 %0, 1717986919
  %1 = lshr i64 %narrow, 63, !insn.addr !112
  %2 = ashr i64 %narrow, 34, !insn.addr !113
  %3 = add nsw i64 %2, %1, !insn.addr !114
  %4 = and i64 %3, 4294967295, !insn.addr !114
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !115
  %6 = and i64 %5, 4294967295, !insn.addr !115
  %7 = trunc i64 %0 to i32, !insn.addr !116
  %8 = add i32 %7, 9, !insn.addr !116
  %9 = icmp ult i32 %8, 19
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !117
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !117
  br i1 %9, label %dec_label_pc_1352, label %dec_label_pc_1330, !insn.addr !117

dec_label_pc_1352:                                ; preds = %dec_label_pc_1330
  ret i64 %6, !insn.addr !118

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %narrow, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1360:
  %0 = trunc i64 %arg2 to i32, !insn.addr !119
  %1 = icmp slt i32 %0, 1
  %arg2.op = mul i64 %arg2, 4294967296
  %arg2.op.op = ashr exact i64 %arg2.op, 32
  %2 = select i1 %1, i64 0, i64 %arg2.op.op, !insn.addr !120
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !120
  %4 = mul nsw i64 %2, %3, !insn.addr !120
  %5 = trunc i64 %arg1 to i32, !insn.addr !121
  %6 = icmp eq i32 %5, 0, !insn.addr !121
  %7 = icmp slt i32 %5, 0, !insn.addr !121
  %8 = icmp eq i1 %7, false, !insn.addr !122
  %9 = icmp eq i1 %6, false, !insn.addr !122
  %10 = icmp eq i1 %8, %9, !insn.addr !122
  %11 = and i64 %4, 4294967295
  %12 = select i1 %10, i64 %11, i64 0, !insn.addr !122
  ret i64 %12, !insn.addr !123

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %rax.1.reg2mem = alloca i64, !insn.addr !124
  %rcx.0.reg2mem = alloca i64, !insn.addr !124
  %rax.0.reg2mem = alloca i64, !insn.addr !124
  %0 = trunc i64 %arg1 to i32, !insn.addr !125
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !126
  store i64 ptrtoint (i32** @global_var_3040 to i64), i64* %rcx.0.reg2mem, !insn.addr !126
  br label %dec_label_pc_1380, !insn.addr !126

dec_label_pc_1380:                                ; preds = %dec_label_pc_1384, %dec_label_pc_1370
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %1 = inttoptr i64 %rcx.0.reload to i32*, !insn.addr !125
  %2 = load i32, i32* %1, align 4, !insn.addr !125
  %3 = icmp eq i32 %2, %0, !insn.addr !125
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !127
  br i1 %3, label %dec_label_pc_1397, label %dec_label_pc_1384, !insn.addr !127

dec_label_pc_1384:                                ; preds = %dec_label_pc_1380
  %4 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !128
  %5 = add i64 %rcx.0.reload, 4, !insn.addr !129
  %6 = icmp eq i64 %rax.0.reload, 4, !insn.addr !130
  %7 = icmp eq i1 %6, false, !insn.addr !131
  store i64 %4, i64* %rax.0.reg2mem, !insn.addr !131
  store i64 %5, i64* %rcx.0.reg2mem, !insn.addr !131
  store i64 4294967295, i64* %rax.1.reg2mem, !insn.addr !131
  br i1 %7, label %dec_label_pc_1380, label %dec_label_pc_1397, !insn.addr !131

dec_label_pc_1397:                                ; preds = %dec_label_pc_1384, %dec_label_pc_1380
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !132

; uselistorder directives
  uselistorder i64 %rax.0.reload, { 1, 2, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_13a0:
  %merge.reg2mem = alloca i64, !insn.addr !133
  %rcx.0.reg2mem = alloca i64, !insn.addr !133
  %rax.0.reg2mem = alloca i64, !insn.addr !133
  %0 = trunc i64 %arg1 to i32, !insn.addr !133
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !134
  store i64 1, i64* %rcx.0.reg2mem, !insn.addr !134
  store i64 0, i64* %merge.reg2mem, !insn.addr !134
  br i1 %1, label %dec_label_pc_13c9, label %dec_label_pc_13b0, !insn.addr !134

dec_label_pc_13b0:                                ; preds = %dec_label_pc_13a0, %dec_label_pc_13b0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = urem i64 %rcx.0.reload, 2, !insn.addr !135
  %3 = sub nsw i64 0, %2, !insn.addr !136
  %4 = and i64 %rcx.0.reload, %3, !insn.addr !137
  %5 = add nuw nsw i64 %4, %rax.0.reload, !insn.addr !138
  %6 = and i64 %5, 4294967295, !insn.addr !138
  %7 = sub i64 %rcx.0.reload, %arg1, !insn.addr !139
  %8 = trunc i64 %7 to i32, !insn.addr !139
  %9 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !140
  %10 = and i64 %9, 4294967295, !insn.addr !140
  %11 = icmp eq i32 %8, 0, !insn.addr !141
  %12 = icmp eq i1 %11, false, !insn.addr !142
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !142
  store i64 %10, i64* %rcx.0.reg2mem, !insn.addr !142
  store i64 %6, i64* %merge.reg2mem, !insn.addr !142
  br i1 %12, label %dec_label_pc_13b0, label %dec_label_pc_13c9, !insn.addr !142

dec_label_pc_13c9:                                ; preds = %dec_label_pc_13b0, %dec_label_pc_13a0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !143

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13b0, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_13d0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !144
  %1 = icmp eq i32 %0, 0, !insn.addr !144
  %2 = icmp slt i32 %0, 0, !insn.addr !144
  %3 = icmp eq i1 %2, false, !insn.addr !145
  %4 = icmp eq i1 %1, false, !insn.addr !145
  %5 = icmp eq i1 %3, %4, !insn.addr !145
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 32
  %7 = select i1 %5, i64 %6, i64 1, !insn.addr !146
  %8 = ashr exact i64 %sext, 31, !insn.addr !146
  %9 = mul i64 %7, %8, !insn.addr !147
  %10 = and i64 %9, 4294967294, !insn.addr !147
  ret i64 %10, !insn.addr !148

; uselistorder directives
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_13e0:
  %merge.reg2mem = alloca i64, !insn.addr !149
  %rcx.0.reg2mem = alloca i64, !insn.addr !149
  %rax.0.reg2mem = alloca i64, !insn.addr !149
  %0 = trunc i64 %arg1 to i32, !insn.addr !149
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !150
  store i64 1, i64* %rcx.0.reg2mem, !insn.addr !150
  store i64 1, i64* %merge.reg2mem, !insn.addr !150
  br i1 %1, label %dec_label_pc_1401, label %dec_label_pc_13f0, !insn.addr !150

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13e0, %dec_label_pc_13f0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rax.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !151
  %sext1 = mul i64 %rcx.0.reload, 4294967296
  %3 = ashr exact i64 %sext1, 32, !insn.addr !151
  %4 = mul nsw i64 %3, %2, !insn.addr !151
  %5 = and i64 %4, 4294967295, !insn.addr !151
  %6 = sub i64 %rcx.0.reload, %arg1, !insn.addr !152
  %7 = trunc i64 %6 to i32, !insn.addr !152
  %8 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !153
  %9 = and i64 %8, 4294967295, !insn.addr !153
  %10 = icmp eq i32 %7, 0, !insn.addr !154
  %11 = icmp eq i1 %10, false, !insn.addr !155
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !155
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !155
  store i64 %5, i64* %merge.reg2mem, !insn.addr !155
  br i1 %11, label %dec_label_pc_13f0, label %dec_label_pc_1401, !insn.addr !155

dec_label_pc_1401:                                ; preds = %dec_label_pc_13f0, %dec_label_pc_13e0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !156

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_13f0, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1410:
  %0 = trunc i64 %arg1 to i32, !insn.addr !157
  %1 = trunc i64 %arg2 to i32, !insn.addr !157
  %2 = sub i32 %0, %1, !insn.addr !157
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !157
  %5 = xor i32 %2, %0, !insn.addr !157
  %6 = and i32 %5, %4, !insn.addr !157
  %7 = icmp slt i32 %6, 0, !insn.addr !157
  %8 = icmp eq i32 %2, 0, !insn.addr !157
  %9 = icmp slt i32 %2, 0, !insn.addr !157
  %10 = icmp eq i1 %9, %7, !insn.addr !158
  %11 = icmp eq i1 %8, false, !insn.addr !158
  %12 = icmp eq i1 %10, %11, !insn.addr !158
  %.v = select i1 %12, i64 %arg1, i64 %arg2
  %13 = and i64 %.v, 4294967295, !insn.addr !158
  ret i64 %13, !insn.addr !159

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1420:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_35e5 to i8*)), !insn.addr !160
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3090, i64 0, i64 0), i64 21), !insn.addr !161
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_30af, i64 0, i64 0), i64 20), !insn.addr !162
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_30af, i64 0, i64 0), i64 4294967291), !insn.addr !163
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_30c9, i64 0, i64 0), i64 1), !insn.addr !164
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_30c9, i64 0, i64 0), i64 0), !insn.addr !165
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30e1, i64 0, i64 0), i64 15), !insn.addr !166
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30e1, i64 0, i64 0), i64 10), !insn.addr !167
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30e1, i64 0, i64 0), i64 0), !insn.addr !168
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30fd, i64 0, i64 0), i64 5), !insn.addr !169
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_311c, i64 0, i64 0), i64 20), !insn.addr !170
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_313c, i64 0, i64 0), i64 400), !insn.addr !171
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_315b, i64 0, i64 0), i64 50), !insn.addr !172
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3178, i64 0, i64 0), i64 70), !insn.addr !173
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3195, i64 0, i64 0), i64 0), !insn.addr !174
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_31b4, i64 0, i64 0), i64 21), !insn.addr !175
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31d7, i64 0, i64 0), i64 45), !insn.addr !176
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_31f6, i64 0, i64 0), i64 5), !insn.addr !177
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3211, i64 0, i64 0), i64 4), !insn.addr !178
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_322e, i64 0, i64 0), i64 12), !insn.addr !179
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_324a, i64 0, i64 0), i64 2), !insn.addr !180
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_324a, i64 0, i64 0), i64 4294967295), !insn.addr !181
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3265, i64 0, i64 0), i64 25), !insn.addr !182
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3283, i64 0, i64 0), i64 50), !insn.addr !183
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3283, i64 0, i64 0), i64 4294967290), !insn.addr !184
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32a0, i64 0, i64 0), i64 120), !insn.addr !185
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_32be, i64 0, i64 0), i64 10), !insn.addr !186
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_32be, i64 0, i64 0), i64 8), !insn.addr !187
  %28 = sext i32 %27 to i64, !insn.addr !187
  ret i64 %28, !insn.addr !188

; uselistorder directives
  uselistorder i64 12, { 1, 0 }
}

define i64 @loop_multi_exit(i64 %arg1) local_unnamed_addr {
dec_label_pc_1620:
  %.reg2mem = alloca i64, !insn.addr !189
  %rdx.06.reg2mem = alloca i64, !insn.addr !189
  %rsi.0.reg2mem = alloca i64, !insn.addr !189
  %r10.0.reg2mem = alloca i64, !insn.addr !189
  %rcx.0.reg2mem = alloca i64, !insn.addr !189
  %0 = trunc i64 %arg1 to i32, !insn.addr !190
  store i64 ptrtoint (i64* @global_var_3064 to i64), i64* %rcx.0.reg2mem, !insn.addr !191
  store i64 0, i64* %r10.0.reg2mem, !insn.addr !191
  br label %dec_label_pc_1640, !insn.addr !191

dec_label_pc_1640:                                ; preds = %dec_label_pc_16be, %dec_label_pc_1620
  %r10.0.reload = load i64, i64* %r10.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %1 = mul i64 %r10.0.reload, 16, !insn.addr !192
  %2 = add i64 %1, ptrtoint (i64* @global_var_3060 to i64), !insn.addr !190
  %3 = inttoptr i64 %2 to i32*, !insn.addr !190
  %4 = load i32, i32* %3, align 8, !insn.addr !190
  %5 = icmp eq i32 %4, %0, !insn.addr !190
  %6 = icmp eq i1 %5, false, !insn.addr !193
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !193
  store i64 0, i64* %rdx.06.reg2mem, !insn.addr !193
  br i1 %6, label %dec_label_pc_1670, label %dec_label_pc_16d5.thread, !insn.addr !193

dec_label_pc_1670:                                ; preds = %dec_label_pc_1640, %dec_label_pc_1676
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %7 = icmp eq i64 %rsi.0.reload, 3, !insn.addr !194
  br i1 %7, label %dec_label_pc_16be, label %dec_label_pc_1676, !insn.addr !195

dec_label_pc_1676:                                ; preds = %dec_label_pc_1670
  %8 = add nuw nsw i64 %rsi.0.reload, 1, !insn.addr !196
  %9 = mul i64 %rsi.0.reload, 4, !insn.addr !197
  %10 = add i64 %9, %rcx.0.reload, !insn.addr !197
  %11 = inttoptr i64 %10 to i32*, !insn.addr !197
  %12 = load i32, i32* %11, align 4, !insn.addr !197
  %13 = icmp eq i32 %12, %0, !insn.addr !197
  %14 = icmp eq i1 %13, false, !insn.addr !198
  store i64 %8, i64* %rsi.0.reg2mem, !insn.addr !198
  br i1 %14, label %dec_label_pc_1670, label %dec_label_pc_168e, !insn.addr !198

dec_label_pc_168e:                                ; preds = %dec_label_pc_1676
  %15 = icmp ult i64 %rsi.0.reload, 3, !insn.addr !194
  %16 = icmp eq i1 %15, false, !insn.addr !199
  store i64 %8, i64* %rdx.06.reg2mem, !insn.addr !200
  br i1 %16, label %dec_label_pc_16be, label %dec_label_pc_16d5.thread, !insn.addr !200

dec_label_pc_16be:                                ; preds = %dec_label_pc_1670, %dec_label_pc_168e
  %17 = add nuw nsw i64 %r10.0.reload, 1, !insn.addr !201
  %18 = add i64 %rcx.0.reload, 16, !insn.addr !202
  %19 = icmp eq i64 %r10.0.reload, 2, !insn.addr !203
  %20 = icmp eq i1 %19, false, !insn.addr !204
  store i64 %18, i64* %rcx.0.reg2mem, !insn.addr !204
  store i64 %17, i64* %r10.0.reg2mem, !insn.addr !204
  store i64 4294967295, i64* %.reg2mem, !insn.addr !204
  br i1 %20, label %dec_label_pc_1640, label %.loopexit, !insn.addr !204

dec_label_pc_16d5.thread:                         ; preds = %dec_label_pc_1640, %dec_label_pc_168e
  %rdx.06.reload = load i64, i64* %rdx.06.reg2mem
  %21 = mul nuw nsw i64 %r10.0.reload, 10, !insn.addr !205
  %22 = add i64 %rdx.06.reload, %21, !insn.addr !206
  %23 = and i64 %22, 4294967295, !insn.addr !206
  store i64 %23, i64* %.reg2mem
  br label %.loopexit

.loopexit:                                        ; preds = %dec_label_pc_16be, %dec_label_pc_16d5.thread
  %.reload = load i64, i64* %.reg2mem
  ret i64 %.reload, !insn.addr !207

; uselistorder directives
  uselistorder i64 %rsi.0.reload, { 2, 3, 1, 0 }
  uselistorder i64 %r10.0.reload, { 2, 0, 1, 3 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r10.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.06.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder label %.loopexit, { 1, 0 }
  uselistorder label %dec_label_pc_16d5.thread, { 1, 0 }
  uselistorder label %dec_label_pc_16be, { 1, 0 }
  uselistorder label %dec_label_pc_1670, { 1, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_16f0:
  %rax.1.reg2mem = alloca i64, !insn.addr !208
  %rax.0.reg2mem = alloca i64, !insn.addr !208
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !209
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !210
  br label %dec_label_pc_1700, !insn.addr !210

dec_label_pc_1700:                                ; preds = %dec_label_pc_1707, %dec_label_pc_16f0
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !211
  br i1 %1, label %dec_label_pc_171c, label %dec_label_pc_1707, !insn.addr !211

dec_label_pc_1707:                                ; preds = %dec_label_pc_1700
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !212
  %3 = and i64 %2, 4294967295, !insn.addr !212
  %4 = trunc i64 %2 to i32, !insn.addr !213
  %5 = icmp eq i32 %4, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !213
  %6 = icmp eq i1 %5, false, !insn.addr !214
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !214
  br i1 %6, label %dec_label_pc_1700, label %dec_label_pc_1711, !insn.addr !214

dec_label_pc_1711:                                ; preds = %dec_label_pc_1707
  %7 = inttoptr i64 %arg1 to i32*, !insn.addr !215
  store i32 1, i32* %7, align 4, !insn.addr !215
  store i64 ptrtoint (i32* @global_var_3e9 to i64), i64* %rax.1.reg2mem, !insn.addr !216
  br label %dec_label_pc_171c, !insn.addr !216

dec_label_pc_171c:                                ; preds = %dec_label_pc_1700, %dec_label_pc_1711
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !217

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_171c, { 1, 0 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1720:
  %rax.0.reg2mem = alloca i64, !insn.addr !218
  %0 = trunc i64 %arg1 to i32, !insn.addr !218
  %1 = icmp slt i32 %0, 0, !insn.addr !218
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !219
  br i1 %1, label %dec_label_pc_173d, label %dec_label_pc_1724, !insn.addr !219

dec_label_pc_1724:                                ; preds = %dec_label_pc_1720
  %2 = icmp sgt i32 %0, 50, !insn.addr !220
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !220
  br i1 %2, label %dec_label_pc_173d, label %dec_label_pc_172e, !insn.addr !220

dec_label_pc_172e:                                ; preds = %dec_label_pc_1724
  %3 = mul i64 %arg1, 2, !insn.addr !221
  %4 = add i64 %arg1, 1, !insn.addr !222
  %5 = urem i64 %arg1, 2
  %6 = icmp eq i64 %5, 0, !insn.addr !223
  %7 = select i1 %6, i64 %3, i64 %4, !insn.addr !224
  %8 = and i64 %7, 4294967295, !insn.addr !224
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !224
  br label %dec_label_pc_173d, !insn.addr !224

dec_label_pc_173d:                                ; preds = %dec_label_pc_1720, %dec_label_pc_172e, %dec_label_pc_1724
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !225

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_173d, { 1, 2, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1750:
  %0 = mul i64 %arg1, 2, !insn.addr !226
  %1 = sub i64 0, %arg1, !insn.addr !227
  %2 = trunc i64 %arg1 to i32, !insn.addr !228
  %3 = icmp eq i32 %2, 0, !insn.addr !228
  %4 = icmp slt i32 %2, 0, !insn.addr !228
  %5 = icmp eq i1 %4, false, !insn.addr !229
  %6 = icmp eq i1 %3, false, !insn.addr !229
  %7 = icmp eq i1 %5, %6, !insn.addr !229
  %8 = select i1 %7, i64 %0, i64 %1, !insn.addr !229
  %9 = and i64 %8, 4294967295, !insn.addr !229
  ret i64 %9, !insn.addr !230

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @duffs_device(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1760:
  %0 = trunc i64 %arg3 to i32
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_180b, label %dec_label_pc_178f, !insn.addr !231

dec_label_pc_178f:                                ; preds = %dec_label_pc_1760
  %2 = add i32 %0, 7, !insn.addr !232
  %3 = icmp slt i32 %2, 0, !insn.addr !232
  %4 = icmp eq i1 %3, false, !insn.addr !233
  %5 = add i32 %0, 14, !insn.addr !234
  %6 = select i1 %4, i32 %2, i32 %5, !insn.addr !233
  %7 = ashr i32 %6, 3, !insn.addr !235
  %8 = zext i32 %7 to i64, !insn.addr !235
  ret i64 %8, !insn.addr !236

dec_label_pc_180b:                                ; preds = %dec_label_pc_1760
  ret i64 4294967295, !insn.addr !237

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 2 }
}

define i64 @loop_complex_cond(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1810:
  %rdi.1.reg2mem = alloca i64, !insn.addr !238
  %rcx.0.reg2mem = alloca i64, !insn.addr !238
  %rax.1.reg2mem = alloca i64, !insn.addr !238
  %rdi.0.reg2mem = alloca i64, !insn.addr !238
  %rdx.0.reg2mem = alloca i64, !insn.addr !238
  %rax.0.reg2mem = alloca i64, !insn.addr !238
  %0 = trunc i64 %arg1 to i32, !insn.addr !238
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !239
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !239
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !239
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !239
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !239
  store i64 %arg1, i64* %rdi.1.reg2mem, !insn.addr !239
  br i1 %1, label %dec_label_pc_1841, label %dec_label_pc_1820, !insn.addr !239

dec_label_pc_1820:                                ; preds = %dec_label_pc_1810, %dec_label_pc_1820
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rax.0.reload, 2, !insn.addr !240
  %3 = and i64 %2, 4294967295, !insn.addr !240
  %4 = add i64 %rdi.0.reload, 4294967295, !insn.addr !241
  %5 = and i64 %4, 4294967295, !insn.addr !241
  %6 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !242
  %7 = and i64 %6, 4294967295, !insn.addr !242
  %8 = trunc i64 %rdi.0.reload to i32, !insn.addr !243
  %9 = icmp sgt i32 %8, 1, !insn.addr !243
  %10 = icmp ult i64 %3, %5, !insn.addr !244
  %or.cond = icmp eq i1 %9, %10
  %11 = icmp ult i64 %rdx.0.reload, 9
  %or.cond2 = icmp eq i1 %11, %or.cond
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !243
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !243
  store i64 %5, i64* %rdi.0.reg2mem, !insn.addr !243
  store i64 %3, i64* %rax.1.reg2mem, !insn.addr !243
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !243
  store i64 %5, i64* %rdi.1.reg2mem, !insn.addr !243
  br i1 %or.cond2, label %dec_label_pc_1820, label %dec_label_pc_1841, !insn.addr !243

dec_label_pc_1841:                                ; preds = %dec_label_pc_1820, %dec_label_pc_1810
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %12 = add nuw nsw i64 %rcx.0.reload, %rax.1.reload, !insn.addr !245
  %13 = add i64 %12, %rdi.1.reload, !insn.addr !246
  %14 = and i64 %13, 4294967295, !insn.addr !246
  ret i64 %14, !insn.addr !247

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1820, { 1, 0 }
}

define i64 @loop_modify_var(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1850:
  %merge.reg2mem = alloca i64, !insn.addr !248
  %rcx.0.reg2mem = alloca i64, !insn.addr !248
  %rax.0.reg2mem = alloca i64, !insn.addr !248
  %0 = trunc i64 %arg1 to i32, !insn.addr !248
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !249
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !249
  store i64 0, i64* %merge.reg2mem, !insn.addr !249
  br i1 %1, label %dec_label_pc_1874, label %dec_label_pc_1860, !insn.addr !249

dec_label_pc_1860:                                ; preds = %dec_label_pc_1850, %dec_label_pc_1860
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rcx.0.reload, %rax.0.reload, !insn.addr !250
  %3 = and i64 %2, 4294967295, !insn.addr !250
  %4 = add nuw nsw i64 %rcx.0.reload, 2, !insn.addr !251
  %5 = trunc i64 %rcx.0.reload to i32, !insn.addr !252
  %6 = add i32 %5, -6, !insn.addr !252
  %7 = sub i32 5, %5
  %8 = and i32 %7, %5, !insn.addr !252
  %9 = icmp slt i32 %8, 0, !insn.addr !252
  %10 = icmp slt i32 %6, 0, !insn.addr !252
  %11 = icmp eq i1 %10, %9, !insn.addr !253
  %12 = select i1 %11, i64 %4, i64 %rcx.0.reload, !insn.addr !253
  %13 = add nuw nsw i64 %12, 1, !insn.addr !254
  %14 = and i64 %13, 4294967295, !insn.addr !254
  %15 = icmp slt i64 %14, %arg1, !insn.addr !255
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !255
  store i64 %14, i64* %rcx.0.reg2mem, !insn.addr !255
  store i64 %3, i64* %merge.reg2mem, !insn.addr !255
  br i1 %15, label %dec_label_pc_1860, label %dec_label_pc_1874, !insn.addr !255

dec_label_pc_1874:                                ; preds = %dec_label_pc_1860, %dec_label_pc_1850
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !256

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 2, 0, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1860, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1880:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !257
  %rax.0.reg2mem = alloca i64, !insn.addr !257
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !258
  %4 = icmp eq i1 %3, false, !insn.addr !259
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_1890, !insn.addr !260

dec_label_pc_1890:                                ; preds = %dec_label_pc_1895, %dec_label_pc_1880
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !259
  br i1 %4, label %dec_label_pc_18a2, label %dec_label_pc_1895, !insn.addr !259

dec_label_pc_1895:                                ; preds = %dec_label_pc_1890
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !261
  %6 = and i64 %5, 4294967295, !insn.addr !261
  %7 = trunc i64 %5 to i32, !insn.addr !262
  %8 = icmp eq i32 %7, 101, !insn.addr !262
  %9 = icmp eq i1 %8, false, !insn.addr !263
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !263
  store i64 101, i64* %rax.1.reg2mem, !insn.addr !263
  br i1 %9, label %dec_label_pc_1890, label %dec_label_pc_18a2, !insn.addr !263

dec_label_pc_18a2:                                ; preds = %dec_label_pc_1895, %dec_label_pc_1890
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !264

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
}

define i64 @recursion_factorial(i64 %arg1) local_unnamed_addr {
dec_label_pc_18b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !265
  %0 = trunc i64 %arg1 to i32, !insn.addr !266
  %1 = icmp slt i32 %0, 2, !insn.addr !266
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !266
  br i1 %1, label %dec_label_pc_18c9, label %dec_label_pc_18ba, !insn.addr !266

dec_label_pc_18ba:                                ; preds = %dec_label_pc_18b0
  %2 = add i64 %arg1, 4294967295, !insn.addr !267
  %3 = and i64 %2, 4294967295, !insn.addr !267
  %4 = call i64 @recursion_factorial(i64 %3), !insn.addr !268
  %sext = mul i64 %4, 4294967296
  %5 = ashr exact i64 %sext, 32, !insn.addr !269
  %sext1 = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext1, 32, !insn.addr !269
  %7 = mul nsw i64 %5, %6, !insn.addr !269
  %8 = and i64 %7, 4294967295, !insn.addr !269
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_18c9, !insn.addr !270

dec_label_pc_18c9:                                ; preds = %dec_label_pc_18ba, %dec_label_pc_18b0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !271
}

define i64 @tail_recursion(i32 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_18d0:
  %rax.0.reg2mem = alloca i64, !insn.addr !272
  %0 = and i64 %arg2, 4294967295, !insn.addr !272
  %1 = icmp slt i32 %arg1, 2, !insn.addr !273
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !273
  br i1 %1, label %dec_label_pc_18e9, label %dec_label_pc_18d7, !insn.addr !273

dec_label_pc_18d7:                                ; preds = %dec_label_pc_18d0
  %2 = sext i32 %arg1 to i64
  %sext = mul i64 %arg2, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !274
  %4 = mul nsw i64 %3, %2, !insn.addr !274
  %5 = add i32 %arg1, -1, !insn.addr !275
  %6 = and i64 %4, 4294967295, !insn.addr !276
  %7 = call i64 @tail_recursion(i32 %5, i64 %6), !insn.addr !277
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_18e9, !insn.addr !278

dec_label_pc_18e9:                                ; preds = %dec_label_pc_18d7, %dec_label_pc_18d0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !279

; uselistorder directives
  uselistorder i32 %arg1, { 0, 2, 1 }
}

define i64 @indirect_recursion_a(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_18f0:
  %rax.0.reg2mem = alloca i64, !insn.addr !280
  %storemerge.in.reg2mem = alloca i64, !insn.addr !280
  %0 = and i64 %arg1, 4294967295, !insn.addr !280
  %1 = icmp slt i32 %arg2, 1
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !281
  br i1 %1, label %dec_label_pc_1930, label %dec_label_pc_18f6, !insn.addr !281

dec_label_pc_18f6:                                ; preds = %dec_label_pc_18f0
  %2 = urem i64 %arg1, 2
  %3 = icmp eq i64 %2, 0, !insn.addr !282
  %4 = icmp eq i1 %3, false, !insn.addr !283
  br i1 %4, label %dec_label_pc_190f, label %dec_label_pc_18fa, !insn.addr !283

dec_label_pc_18fa:                                ; preds = %dec_label_pc_18f6
  %5 = trunc i64 %arg1 to i32, !insn.addr !284
  %6 = icmp slt i32 %5, 0
  %7 = zext i1 %6 to i32, !insn.addr !285
  %8 = add i32 %7, %5, !insn.addr !286
  %9 = ashr i32 %8, 1, !insn.addr !287
  %10 = zext i32 %9 to i64, !insn.addr !287
  %11 = icmp slt i32 %arg2, 2, !insn.addr !288
  store i64 %10, i64* %rax.0.reg2mem, !insn.addr !288
  br i1 %11, label %dec_label_pc_1930, label %dec_label_pc_190a, !insn.addr !288

dec_label_pc_190a:                                ; preds = %dec_label_pc_18fa
  %12 = add nuw nsw i64 %10, 1, !insn.addr !289
  store i64 %12, i64* %storemerge.in.reg2mem, !insn.addr !290
  br label %dec_label_pc_1921, !insn.addr !290

dec_label_pc_190f:                                ; preds = %dec_label_pc_18f6
  %13 = icmp sgt i32 %arg2, 1, !insn.addr !291
  %14 = mul nuw nsw i64 %0, 3
  br i1 %13, label %dec_label_pc_191b, label %dec_label_pc_1914, !insn.addr !291

dec_label_pc_1914:                                ; preds = %dec_label_pc_190f
  %15 = add nuw nsw i64 %14, 1, !insn.addr !292
  %16 = and i64 %15, 4294967295, !insn.addr !292
  ret i64 %16, !insn.addr !293

dec_label_pc_191b:                                ; preds = %dec_label_pc_190f
  %17 = add nuw nsw i64 %14, 2, !insn.addr !294
  store i64 %17, i64* %storemerge.in.reg2mem, !insn.addr !294
  br label %dec_label_pc_1921, !insn.addr !294

dec_label_pc_1921:                                ; preds = %dec_label_pc_191b, %dec_label_pc_190a
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  %18 = add i32 %arg2, -2, !insn.addr !295
  %19 = call i64 @indirect_recursion_a(i64 %storemerge, i32 %18), !insn.addr !296
  store i64 %19, i64* %rax.0.reg2mem, !insn.addr !297
  br label %dec_label_pc_1930, !insn.addr !297

dec_label_pc_1930:                                ; preds = %dec_label_pc_1921, %dec_label_pc_18fa, %dec_label_pc_18f0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !298

; uselistorder directives
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 %arg2, { 1, 0, 2, 3 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1940:
  ret i64 %arg1, !insn.addr !299
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1950:
  %0 = trunc i64 %arg1 to i32, !insn.addr !300
  %1 = icmp ult i32 %0, 3
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32
  %rax.0 = select i1 %1, i64 %2, i64 4294967295
  ret i64 %rax.0, !insn.addr !301
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1970:
  %0 = mul i64 %arg1, 2, !insn.addr !302
  %1 = and i64 %0, 4294967294, !insn.addr !302
  ret i64 %1, !insn.addr !303
}

define i64 @triple_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1980:
  %0 = mul i64 %arg1, 3, !insn.addr !304
  %1 = and i64 %0, 4294967295, !insn.addr !304
  ret i64 %1, !insn.addr !305
}

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1990:
  %0 = mul i64 %arg2, 2, !insn.addr !306
  %1 = and i64 %0, 4294967294, !insn.addr !306
  ret i64 %1, !insn.addr !307
}

define i64 @process_with_callback(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_19a0:
  %0 = alloca i64
  %rbp.1.reg2mem = alloca i64, !insn.addr !308
  %rbp.0.reg2mem = alloca i64, !insn.addr !308
  %rbx.0.reg2mem = alloca i64, !insn.addr !308
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !309
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !310
  br i1 %3, label %dec_label_pc_19d6, label %dec_label_pc_19ac, !insn.addr !310

dec_label_pc_19ac:                                ; preds = %dec_label_pc_19a0
  %4 = and i64 %arg2, 4294967295, !insn.addr !311
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !312
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !312
  br label %dec_label_pc_19c0, !insn.addr !312

dec_label_pc_19c0:                                ; preds = %dec_label_pc_19c0, %dec_label_pc_19ac
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = add i64 %rbp.0.reload, %1, !insn.addr !313
  %6 = and i64 %5, 4294967295, !insn.addr !313
  %7 = add i64 %rbx.0.reload, 1, !insn.addr !314
  %8 = icmp eq i64 %4, %7, !insn.addr !315
  %9 = icmp eq i1 %8, false, !insn.addr !316
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !316
  store i64 %6, i64* %rbp.0.reg2mem, !insn.addr !316
  store i64 %6, i64* %rbp.1.reg2mem, !insn.addr !316
  br i1 %9, label %dec_label_pc_19c0, label %dec_label_pc_19d6, !insn.addr !316

dec_label_pc_19d6:                                ; preds = %dec_label_pc_19c0, %dec_label_pc_19a0
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !317

; uselistorder directives
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
}

define i64 @test_control_flow_l2(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_19f0:
  %rbp.1.reg2mem = alloca i64, !insn.addr !318
  %rbp.0.reg2mem = alloca i64, !insn.addr !318
  %rbx.4.reg2mem = alloca i64, !insn.addr !318
  %rax.1.reg2mem = alloca i64, !insn.addr !318
  %rbx.2.reg2mem = alloca i64, !insn.addr !318
  %.reg2mem = alloca i64, !insn.addr !318
  %rdi.0.reg2mem = alloca i64, !insn.addr !318
  %rdx.0.reg2mem = alloca i64, !insn.addr !318
  %rcx.0.reg2mem = alloca i64, !insn.addr !318
  %rax.0.reg2mem = alloca i64, !insn.addr !318
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3609 to i8*)), !insn.addr !319
  store i64 ptrtoint (i64* @global_var_3064 to i64), i64* %rax.0.reg2mem, !insn.addr !320
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !320
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !320
  br label %dec_label_pc_1a10, !insn.addr !320

dec_label_pc_1a10:                                ; preds = %dec_label_pc_1a5c, %dec_label_pc_19f0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !321
  br label %dec_label_pc_1a20, !insn.addr !321

dec_label_pc_1a20:                                ; preds = %dec_label_pc_1a26, %dec_label_pc_1a10
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %1 = icmp eq i64 %rdi.0.reload, 3, !insn.addr !322
  br i1 %1, label %dec_label_pc_1a5c, label %dec_label_pc_1a26, !insn.addr !323

dec_label_pc_1a26:                                ; preds = %dec_label_pc_1a20
  %2 = add nuw nsw i64 %rdi.0.reload, 1, !insn.addr !324
  %3 = mul i64 %rdi.0.reload, 4, !insn.addr !325
  %4 = add i64 %3, %rax.0.reload, !insn.addr !325
  %5 = inttoptr i64 %4 to i32*, !insn.addr !325
  %6 = load i32, i32* %5, align 4, !insn.addr !325
  %7 = icmp eq i32 %6, 7, !insn.addr !325
  %8 = icmp eq i1 %7, false, !insn.addr !326
  store i64 %2, i64* %rdi.0.reg2mem, !insn.addr !326
  br i1 %8, label %dec_label_pc_1a20, label %dec_label_pc_1a33, !insn.addr !326

dec_label_pc_1a33:                                ; preds = %dec_label_pc_1a26
  %9 = icmp ult i64 %rdi.0.reload, 3, !insn.addr !322
  %10 = icmp eq i1 %9, false, !insn.addr !327
  br i1 %10, label %dec_label_pc_1a5c, label %dec_label_pc_1a73.thread, !insn.addr !328

dec_label_pc_1a5c:                                ; preds = %dec_label_pc_1a20, %dec_label_pc_1a33
  %11 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !329
  %12 = add nsw i64 %rcx.0.reload, -10, !insn.addr !330
  %13 = add i64 %rax.0.reload, 16, !insn.addr !331
  %14 = icmp eq i64 %rdx.0.reload, 2, !insn.addr !332
  %15 = icmp eq i1 %14, false, !insn.addr !333
  store i64 %13, i64* %rax.0.reg2mem, !insn.addr !333
  store i64 %12, i64* %rcx.0.reg2mem, !insn.addr !333
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !333
  store i64 4294967295, i64* %.reg2mem, !insn.addr !333
  br i1 %15, label %dec_label_pc_1a10, label %.loopexit, !insn.addr !333

dec_label_pc_1a73.thread:                         ; preds = %dec_label_pc_1a33
  %16 = sub i64 %2, %rcx.0.reload, !insn.addr !334
  %17 = and i64 %16, 4294967295, !insn.addr !335
  store i64 %17, i64* %.reg2mem
  br label %.loopexit

.loopexit:                                        ; preds = %dec_label_pc_1a5c, %dec_label_pc_1a73.thread
  %.reload = load i64, i64* %.reg2mem
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_32d9, i64 0, i64 0), i64 %.reload), !insn.addr !336
  store i64 0, i64* %rbx.2.reg2mem, !insn.addr !337
  br label %dec_label_pc_1aa0, !insn.addr !337

dec_label_pc_1aa0:                                ; preds = %dec_label_pc_1aa0, %.loopexit
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %19 = add nuw nsw i64 %rbx.2.reload, 1, !insn.addr !338
  %20 = and i64 %19, 4294967295, !insn.addr !338
  %21 = trunc i64 %19 to i32, !insn.addr !339
  %22 = icmp eq i32 %21, ptrtoint (i32* @global_var_3e9 to i32), !insn.addr !339
  %23 = icmp eq i1 %22, false, !insn.addr !340
  store i64 %20, i64* %rbx.2.reg2mem, !insn.addr !340
  br i1 %23, label %dec_label_pc_1aa0, label %dec_label_pc_1ac1, !insn.addr !340

dec_label_pc_1ac1:                                ; preds = %dec_label_pc_1aa0
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_32f9, i64 0, i64 0), i64 and (i64 ptrtoint (i32* @global_var_3e9 to i64), i64 4294967295)), !insn.addr !341
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3317, i64 0, i64 0), i64 4294967295), !insn.addr !342
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3317, i64 0, i64 0), i64 4294967294), !insn.addr !343
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3317, i64 0, i64 0), i64 4), !insn.addr !344
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3334, i64 0, i64 0), i64 10), !insn.addr !345
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3334, i64 0, i64 0), i64 5), !insn.addr !346
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3357, i64 0, i64 0), i64 8), !insn.addr !347
  store i64 11, i64* %rax.1.reg2mem, !insn.addr !348
  store i64 10, i64* %rbx.4.reg2mem, !insn.addr !348
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !348
  br label %dec_label_pc_1b50, !insn.addr !348

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b5d, %dec_label_pc_1ac1
  %rbx.4.reload = load i64, i64* %rbx.4.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %31 = trunc i64 %rbx.4.reload to i32
  %32 = add i32 %31, -8, !insn.addr !349
  %33 = trunc i64 %rax.1.reload to i32
  %34 = add i32 %33, -2, !insn.addr !350
  %35 = add nuw nsw i64 %rbx.4.reload, 2, !insn.addr !351
  %36 = and i64 %35, 4294967295, !insn.addr !351
  %37 = icmp ult i32 %32, %34, !insn.addr !352
  %38 = icmp eq i1 %37, false, !insn.addr !353
  br i1 %38, label %dec_label_pc_1b68, label %dec_label_pc_1b5d, !insn.addr !353

dec_label_pc_1b5d:                                ; preds = %dec_label_pc_1b50
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %39 = add nuw nsw i64 %rbp.0.reload, 1, !insn.addr !354
  %40 = and i64 %39, 4294967295, !insn.addr !354
  %41 = add nuw nsw i64 %rax.1.reload, 4294967295, !insn.addr !355
  %42 = and i64 %41, 4294967295, !insn.addr !355
  %43 = trunc i64 %39 to i32, !insn.addr !356
  %44 = icmp ult i32 %43, 9, !insn.addr !356
  store i64 %42, i64* %rax.1.reg2mem, !insn.addr !357
  store i64 %36, i64* %rbx.4.reg2mem, !insn.addr !357
  store i64 %40, i64* %rbp.0.reg2mem, !insn.addr !357
  br i1 %44, label %dec_label_pc_1b50, label %dec_label_pc_1b68, !insn.addr !357

dec_label_pc_1b68:                                ; preds = %dec_label_pc_1b5d, %dec_label_pc_1b50
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3374, i64 0, i64 0), i64 %36), !insn.addr !358
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3396, i64 0, i64 0), i64 30), !insn.addr !359
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !360
  br label %dec_label_pc_1ba0, !insn.addr !360

dec_label_pc_1ba0:                                ; preds = %dec_label_pc_1ba0, %dec_label_pc_1b68
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  %47 = add nuw nsw i64 %rbp.1.reload, 1, !insn.addr !361
  %48 = and i64 %47, 4294967295, !insn.addr !361
  %49 = trunc i64 %47 to i32, !insn.addr !362
  %50 = icmp eq i32 %49, 101, !insn.addr !362
  %51 = icmp eq i1 %50, false, !insn.addr !363
  store i64 %48, i64* %rbp.1.reg2mem, !insn.addr !363
  br i1 %51, label %dec_label_pc_1ba0, label %dec_label_pc_1bb4, !insn.addr !363

dec_label_pc_1bb4:                                ; preds = %dec_label_pc_1ba0
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_33b6, i64 0, i64 0), i64 101), !insn.addr !364
  %53 = call i64 @recursion_factorial(i64 5), !insn.addr !365
  %54 = and i64 %53, 4294967295, !insn.addr !366
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_33da, i64 0, i64 0), i64 %54), !insn.addr !367
  %56 = call i64 @tail_recursion(i32 5, i64 1), !insn.addr !368
  %57 = and i64 %56, 4294967295, !insn.addr !369
  %58 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_33fe, i64 0, i64 0), i64 %57), !insn.addr !370
  %59 = call i64 @indirect_recursion_a(i64 10, i32 3), !insn.addr !371
  %60 = and i64 %59, 4294967295, !insn.addr !372
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_341d, i64 0, i64 0), i64 %60), !insn.addr !373
  %62 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3440, i64 0, i64 0), i64 10), !insn.addr !374
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_345e, i64 0, i64 0), i64 10), !insn.addr !375
  %64 = call i64 @recursion_factorial(i64 5), !insn.addr !376
  %65 = and i64 %64, 4294967295, !insn.addr !377
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_345e, i64 0, i64 0), i64 %65), !insn.addr !378
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3482, i64 0, i64 0), i64 30), !insn.addr !379
  %68 = sext i32 %67 to i64, !insn.addr !379
  ret i64 %68, !insn.addr !380

; uselistorder directives
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %rax.1.reload, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %rdi.0.reload, { 2, 3, 1, 0 }
  uselistorder i64 %rcx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.4.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.1.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i64, i32)* @indirect_recursion_a, { 1, 0 }
  uselistorder i32 3, { 0, 1, 3, 2, 4, 5 }
  uselistorder i64 (i32, i64)* @tail_recursion, { 1, 0 }
  uselistorder i64 (i64)* @recursion_factorial, { 2, 1, 0 }
  uselistorder i64 101, { 1, 0 }
  uselistorder i64 ptrtoint (i32* @global_var_3e9 to i64), { 1, 0 }
  uselistorder i32* @global_var_3e9, { 1, 0 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i64 4, { 4, 0, 1, 5, 2, 6, 3 }
  uselistorder label %.loopexit, { 1, 0 }
  uselistorder label %dec_label_pc_1a5c, { 1, 0 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c80:
  %rcx.0.reg2mem = alloca i64, !insn.addr !381
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !382
  %1 = icmp eq i32 %0, 0, !insn.addr !383
  %2 = icmp eq i1 %1, false, !insn.addr !384
  store i64 4294967295, i64* %rcx.0.reg2mem, !insn.addr !384
  br i1 %2, label %dec_label_pc_1ca5, label %dec_label_pc_1c98, !insn.addr !384

dec_label_pc_1c98:                                ; preds = %dec_label_pc_1c80
  %3 = trunc i64 %arg1 to i32, !insn.addr !385
  %4 = icmp slt i32 %3, 0, !insn.addr !385
  br i1 %4, label %dec_label_pc_1ca9, label %dec_label_pc_1c9c, !insn.addr !386

dec_label_pc_1c9c:                                ; preds = %dec_label_pc_1c98
  %5 = icmp sgt i32 %3, 100, !insn.addr !387
  br i1 %5, label %dec_label_pc_1cba, label %dec_label_pc_1ca1, !insn.addr !387

dec_label_pc_1ca1:                                ; preds = %dec_label_pc_1c9c
  %6 = mul i64 %arg1, 2, !insn.addr !388
  %7 = and i64 %6, 4294967294, !insn.addr !389
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !389
  br label %dec_label_pc_1ca5, !insn.addr !389

dec_label_pc_1ca5:                                ; preds = %dec_label_pc_1ca1, %dec_label_pc_1c80
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  ret i64 %rcx.0.reload, !insn.addr !390

dec_label_pc_1ca9:                                ; preds = %dec_label_pc_1c98
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !391
  unreachable, !insn.addr !391

dec_label_pc_1cba:                                ; preds = %dec_label_pc_1c9c
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !392
  unreachable, !insn.addr !392

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], { 1, 0, 2 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_1cd0:
  %0 = mul i64 %arg1, 2, !insn.addr !393
  %1 = trunc i64 %arg1 to i32, !insn.addr !394
  %2 = add i32 %1, -101, !insn.addr !394
  %3 = sub i32 100, %1
  %4 = and i32 %3, %1, !insn.addr !394
  %5 = icmp slt i32 %4, 0, !insn.addr !394
  %6 = icmp slt i32 %2, 0, !insn.addr !394
  %7 = icmp eq i1 %6, %5, !insn.addr !395
  %8 = icmp slt i32 %1, 0, !insn.addr !396
  %9 = icmp eq i1 %8, false, !insn.addr !397
  %10 = and i64 %0, 4294967294
  %11 = select i1 %7, i64 4294967294, i64 %10, !insn.addr !395
  %12 = select i1 %9, i64 %11, i64 4294967295, !insn.addr !397
  ret i64 %12, !insn.addr !398

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2, 3 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1cf0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !399
  %1 = icmp ult i32 %0, 10
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32
  %rax.0 = select i1 %1, i64 %2, i64 4294967295
  ret i64 %rax.0, !insn.addr !400
}

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d20:
  %0 = add i64 %arg2, %arg1, !insn.addr !401
  %1 = and i64 %0, 4294967295, !insn.addr !401
  ret i64 %1, !insn.addr !402
}

define i64 @op_sub(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d30:
  %0 = sub i64 %arg1, %arg2, !insn.addr !403
  %1 = and i64 %0, 4294967295, !insn.addr !403
  ret i64 %1, !insn.addr !404
}

define i64 @op_mul(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d40:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !405
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !405
  %2 = mul nsw i64 %1, %0, !insn.addr !405
  %3 = and i64 %2, 4294967295, !insn.addr !405
  ret i64 %3, !insn.addr !406
}

define i64 @op_div(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d50:
  %0 = trunc i64 %arg2 to i32, !insn.addr !407
  %1 = icmp eq i32 %0, 0, !insn.addr !407
  br i1 %1, label %dec_label_pc_1d5a, label %dec_label_pc_1d54, !insn.addr !408

dec_label_pc_1d54:                                ; preds = %dec_label_pc_1d50
  %2 = trunc i64 %arg1 to i32, !insn.addr !409
  %3 = ashr i32 %2, 31, !insn.addr !409
  %4 = and i64 %arg1, 4294967295, !insn.addr !410
  %5 = zext i32 %3 to i64, !insn.addr !410
  %6 = mul i64 %5, 4294967296, !insn.addr !410
  %7 = or i64 %6, %4, !insn.addr !410
  %8 = and i64 %arg2, 4294967295, !insn.addr !410
  %9 = sdiv i64 %7, %8, !insn.addr !410
  %10 = and i64 %9, 4294967295, !insn.addr !410
  ret i64 %10, !insn.addr !411

dec_label_pc_1d5a:                                ; preds = %dec_label_pc_1d50
  ret i64 0, !insn.addr !412

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_mod(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d60:
  %0 = trunc i64 %arg2 to i32, !insn.addr !413
  %1 = icmp eq i32 %0, 0, !insn.addr !413
  br i1 %1, label %dec_label_pc_1d6c, label %dec_label_pc_1d64, !insn.addr !414

dec_label_pc_1d64:                                ; preds = %dec_label_pc_1d60
  %2 = trunc i64 %arg1 to i32, !insn.addr !415
  %3 = ashr i32 %2, 31, !insn.addr !415
  %4 = and i64 %arg1, 4294967295, !insn.addr !416
  %5 = zext i32 %3 to i64, !insn.addr !416
  %6 = mul i64 %5, 4294967296, !insn.addr !416
  %7 = or i64 %6, %4, !insn.addr !416
  %8 = and i64 %arg2, 4294967295, !insn.addr !416
  %9 = srem i64 %7, %8, !insn.addr !416
  %10 = and i64 %9, 4294967295, !insn.addr !417
  ret i64 %10, !insn.addr !418

dec_label_pc_1d6c:                                ; preds = %dec_label_pc_1d60
  ret i64 0, !insn.addr !419

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_and(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d70:
  %0 = and i64 %arg1, 4294967295
  %1 = and i64 %0, %arg2, !insn.addr !420
  ret i64 %1, !insn.addr !421
}

define i64 @op_or(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d80:
  %0 = or i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !422
  ret i64 %1, !insn.addr !423
}

define i64 @op_xor(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1d90:
  %0 = xor i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !424
  ret i64 %1, !insn.addr !425
}

define i64 @op_shl(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1da0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !426
  %1 = trunc i64 %arg2 to i32, !insn.addr !427
  %2 = urem i32 %1, 32, !insn.addr !427
  %3 = icmp eq i32 %2, 0, !insn.addr !427
  %4 = trunc i64 %arg1 to i32
  %5 = shl i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !428

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @op_shr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1db0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !429
  %1 = trunc i64 %arg2 to i32, !insn.addr !430
  %2 = urem i32 %1, 32, !insn.addr !430
  %3 = icmp eq i32 %2, 0, !insn.addr !430
  %4 = trunc i64 %arg1 to i32
  %5 = ashr i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !431

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1dc0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !432
  %1 = icmp eq i32 %0, 1, !insn.addr !432
  %2 = select i1 %1, i64 6528, i64 6320, !insn.addr !433
  %3 = icmp eq i32 %0, 0, !insn.addr !434
  %4 = icmp eq i1 %3, false, !insn.addr !435
  %5 = select i1 %4, i64 %2, i64 6512, !insn.addr !435
  ret i64 %5, !insn.addr !436
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1df0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !437
  %1 = icmp ult i32 %0, 4
  br i1 %1, label %dec_label_pc_1df5, label %dec_label_pc_1e12, !insn.addr !438

dec_label_pc_1df5:                                ; preds = %dec_label_pc_1df0
  %2 = and i64 %arg2, 4294967295, !insn.addr !439
  ret i64 %2, !insn.addr !440

dec_label_pc_1e12:                                ; preds = %dec_label_pc_1df0
  ret i64 3, !insn.addr !441
}

define i64 @function_1e18(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e18:
  %0 = trunc i64 %arg1 to i32, !insn.addr !442
  %1 = icmp eq i32 %0, 99, !insn.addr !442
  %2 = zext i1 %1 to i64, !insn.addr !443
  %3 = mul i64 %2, 2, !insn.addr !443
  %4 = or i64 %3, 1, !insn.addr !444
  %5 = icmp eq i32 %0, 2, !insn.addr !445
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !446
  %7 = and i64 %6, 4294967295, !insn.addr !446
  ret i64 %7, !insn.addr !447
}

define i64 @function_1e2c(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e2c:
  %0 = trunc i64 %arg1 to i32, !insn.addr !448
  %1 = icmp eq i32 %0, 0, !insn.addr !448
  %2 = icmp eq i1 %1, false, !insn.addr !449
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !450
  ret i64 %3, !insn.addr !451
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1e40:
  %0 = trunc i64 %arg2 to i32, !insn.addr !452
  %1 = icmp ult i32 %0, 4
  %sext = mul i64 %arg2, 4294967296
  %2 = ashr exact i64 %sext, 32
  %rax.0 = select i1 %1, i64 %2, i64 3
  ret i64 %rax.0, !insn.addr !453
}

define i64 @state_idle(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = trunc i64 %arg1 to i32, !insn.addr !454
  %1 = icmp eq i32 %0, 1, !insn.addr !454
  %2 = zext i1 %1 to i64, !insn.addr !455
  ret i64 %2, !insn.addr !456
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e70:
  %0 = trunc i64 %arg1 to i32, !insn.addr !457
  %1 = icmp eq i32 %0, 99, !insn.addr !457
  %2 = zext i1 %1 to i64, !insn.addr !458
  %3 = mul i64 %2, 2, !insn.addr !458
  %4 = or i64 %3, 1, !insn.addr !459
  %5 = icmp eq i32 %0, 2, !insn.addr !460
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !461
  %7 = and i64 %6, 4294967295, !insn.addr !461
  ret i64 %7, !insn.addr !462

; uselistorder directives
  uselistorder i32 2, { 1, 2, 3, 4, 5, 6, 0 }
}

define i64 @state_done() local_unnamed_addr {
dec_label_pc_1e90:
  ret i64 2, !insn.addr !463
}

define i64 @state_error(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ea0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !464
  %1 = icmp eq i32 %0, 0, !insn.addr !464
  %2 = icmp eq i1 %1, false, !insn.addr !465
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !466
  ret i64 %3, !insn.addr !467
}

define i64 @computed_goto(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1eb0:
  %merge.reg2mem = alloca i64, !insn.addr !468
  %merge1.reg2mem = alloca i64, !insn.addr !468
  %sext = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !469
  store i64 %0, i64* @0, align 8, !insn.addr !470
  store i64 %0, i64* %merge1.reg2mem, !insn.addr !470
  store i64 0, i64* %merge.reg2mem, !insn.addr !470
  switch i64 %0, label %dec_label_pc_1eba [
    i64 0, label %dec_label_pc_1ec8
    i64 1, label %dec_label_pc_1ed7
    i64 2, label %dec_label_pc_1ecb
    i64 3, label %dec_label_pc_1ed1
  ], !insn.addr !470

dec_label_pc_1eba:                                ; preds = %dec_label_pc_1ec8, %dec_label_pc_1eb0
  %merge1.reload = load i64, i64* %merge1.reg2mem
  ret i64 %merge1.reload, !insn.addr !471

dec_label_pc_1ec8:                                ; preds = %dec_label_pc_1ed7, %dec_label_pc_1ed1, %dec_label_pc_1ecb, %dec_label_pc_1eb0
  %merge.reload = load i64, i64* %merge.reg2mem
  store i64 %merge.reload, i64* %merge1.reg2mem
  br label %dec_label_pc_1eba

dec_label_pc_1ecb:                                ; preds = %dec_label_pc_1eb0
  store i64 20, i64* %merge.reg2mem
  br label %dec_label_pc_1ec8

dec_label_pc_1ed1:                                ; preds = %dec_label_pc_1eb0
  store i64 30, i64* %merge.reg2mem
  br label %dec_label_pc_1ec8

dec_label_pc_1ed7:                                ; preds = %dec_label_pc_1eb0
  store i64 10, i64* %merge.reg2mem
  br label %dec_label_pc_1ec8

; uselistorder directives
  uselistorder i64 %0, { 1, 0, 2 }
  uselistorder i64* %merge1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %merge.reg2mem, { 1, 2, 3, 0, 4 }
  uselistorder i64 30, { 0, 2, 3, 1 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ee0:
  %0 = mul i64 %arg1, 2, !insn.addr !472
  %1 = and i64 %0, 4294967294, !insn.addr !472
  ret i64 %1, !insn.addr !473
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_1ef0:
  %0 = mul i64 %arg1, 2, !insn.addr !474
  %1 = and i64 %0, 4294967294, !insn.addr !474
  ret i64 %1, !insn.addr !475

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 7, 6, 2, 13, 8, 9, 0, 10, 11, 3, 12, 1 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_1f00:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !476
  %2 = icmp eq i1 %1, false, !insn.addr !477
  br i1 %2, label %dec_label_pc_1f10, label %dec_label_pc_1f06, !insn.addr !477

dec_label_pc_1f06:                                ; preds = %dec_label_pc_1f00
  %3 = trunc i64 %arg1 to i32, !insn.addr !478
  %4 = icmp slt i32 %3, 0
  %5 = zext i1 %4 to i32, !insn.addr !479
  %6 = add i32 %5, %3, !insn.addr !480
  %7 = ashr i32 %6, 1, !insn.addr !481
  %8 = zext i32 %7 to i64, !insn.addr !481
  ret i64 %8, !insn.addr !482

dec_label_pc_1f10:                                ; preds = %dec_label_pc_1f00
  %9 = mul i64 %arg1, 3, !insn.addr !483
  %10 = add i64 %9, 1, !insn.addr !484
  %11 = and i64 %10, 4294967295, !insn.addr !484
  ret i64 %11, !insn.addr !485

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64 3, { 5, 12, 6, 4, 7, 1, 2, 8, 9, 10, 3, 11, 0 }
  uselistorder i32 0, { 0, 5, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 2, 3 }
  uselistorder i1 false, { 10, 11, 9, 12, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 3, 26, 27, 0, 28, 29, 30, 31, 32, 4, 33, 34, 35, 5, 36, 37, 38, 6, 39, 7, 2, 40, 8, 41 }
  uselistorder i64 %arg1, { 1, 2, 0 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_1f20:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_362d to i8*)), !insn.addr !486
  %1 = call i64 @non_local_jump(i64 5), !insn.addr !487
  %2 = and i64 %1, 4294967295, !insn.addr !488
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_34a8, i64 0, i64 0), i64 %2), !insn.addr !489
  %4 = call i64 @non_local_jump(i64 4294967291), !insn.addr !490
  %5 = and i64 %4, 4294967295, !insn.addr !491
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_34a8, i64 0, i64 0), i64 %5), !insn.addr !492
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34c7, i64 0, i64 0), i64 10), !insn.addr !493
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34c7, i64 0, i64 0), i64 4294967295), !insn.addr !494
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34e5, i64 0, i64 0), i64 15), !insn.addr !495
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3506, i64 0, i64 0), i64 10), !insn.addr !496
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_352b, i64 0, i64 0), i64 1), !insn.addr !497
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3549, i64 0, i64 0), i64 2), !insn.addr !498
  %13 = call i64 @computed_goto(i64 ptrtoint ([31 x i8]* @global_var_3549 to i64), i64 2), !insn.addr !499
  %14 = and i64 %13, 4294967295, !insn.addr !500
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3568, i64 0, i64 0), i64 %14), !insn.addr !501
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3586, i64 0, i64 0), i64 10), !insn.addr !502
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_35a4, i64 0, i64 0), i64 10), !insn.addr !503
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_35c5, i64 0, i64 0), i64 16), !insn.addr !504
  %19 = sext i32 %18 to i64, !insn.addr !504
  ret i64 %19, !insn.addr !505

; uselistorder directives
  uselistorder i64 16, { 1, 2, 3, 0 }
  uselistorder i64 2, { 25, 26, 14, 1, 2, 28, 13, 3, 4, 5, 6, 20, 19, 7, 8, 21, 15, 22, 23, 9, 16, 10, 24, 27, 17, 18, 11, 0, 12 }
  uselistorder [31 x i8]* @global_var_3549, { 1, 0 }
  uselistorder i64 1, { 25, 8, 28, 6, 7, 26, 9, 10, 11, 29, 30, 31, 12, 13, 0, 14, 15, 16, 17, 18, 32, 33, 27, 19, 1, 2, 3, 20, 21, 4, 34, 22, 23, 24, 5 }
  uselistorder i64 10, { 6, 7, 8, 9, 0, 10, 11, 12, 1, 13, 4, 14, 15, 5, 3, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 13, 90, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 9, 24, 25, 26, 27, 28, 29, 30, 31, 32, 11, 33, 0, 34, 35, 36, 37, 38, 39, 40, 41, 42, 1, 91, 10, 43, 44, 2, 45, 46, 47, 12, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 8, 64, 65, 3, 66, 67, 4, 92, 68, 69, 70, 71, 72, 5, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 6, 83, 84, 7, 85, 86, 87, 88, 89 }
  uselistorder i64 (i64)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2030:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i8** %argv to i64
  %4 = call i64 @test_control_flow_l1(), !insn.addr !506
  %5 = call i64 @test_control_flow_l2(i64 %argc, i64 %3, i64 %1, i64 %2), !insn.addr !507
  %6 = call i64 @test_control_flow_l3(), !insn.addr !508
  ret i64 0, !insn.addr !509

; uselistorder directives
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 0, { 33, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 148, 0, 66, 67, 34, 35, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 1, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 2, 94, 95, 3, 4, 5, 7, 8, 6, 96, 9, 10, 11, 12, 13, 14, 15, 16, 17, 97, 98, 18, 19, 20, 21, 22, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 121, 119, 120, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 23, 24, 25, 143, 144, 26, 38, 27, 28, 36, 29, 30, 145, 31, 146, 147, 149, 37, 32, 150, 39, 40, 41, 42, 43, 44 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2044:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !510

; uselistorder directives
  uselistorder i32 1, { 4, 3, 86, 6, 5, 66, 67, 68, 7, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 69, 20, 19, 18, 2, 70, 87, 71, 22, 21, 23, 24, 26, 25, 1, 72, 29, 28, 27, 64, 73, 35, 34, 33, 32, 31, 30, 74, 36, 88, 75, 38, 37, 43, 42, 41, 40, 39, 76, 46, 45, 44, 77, 49, 48, 47, 52, 51, 50, 78, 54, 53, 57, 56, 55, 79, 65, 60, 59, 58, 61, 80, 81, 82, 83, 62, 84, 0, 85, 63 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4192}
!10 = !{i64 4208}
!11 = !{i64 4255}
!12 = !{i64 4261}
!13 = !{i64 4312}
!14 = !{i64 4376}
!15 = !{i64 4388}
!16 = !{i64 4395}
!17 = !{i64 4398}
!18 = !{i64 4409}
!19 = !{i64 4411}
!20 = !{i64 4418}
!21 = !{i64 4423}
!22 = !{i64 4428}
!23 = !{i64 4436}
!24 = !{i64 4440}
!25 = !{i64 4452}
!26 = !{i64 4464}
!27 = !{i64 4467}
!28 = !{i64 4469}
!29 = !{i64 4471}
!30 = !{i64 4480}
!31 = !{i64 4482}
!32 = !{i64 4484}
!33 = !{i64 4487}
!34 = !{i64 4489}
!35 = !{i64 4498}
!36 = !{i64 4500}
!37 = !{i64 4503}
!38 = !{i64 4514}
!39 = !{i64 4516}
!40 = !{i64 4519}
!41 = !{i64 4522}
!42 = !{i64 4524}
!43 = !{i64 4527}
!44 = !{i64 4528}
!45 = !{i64 4530}
!46 = !{i64 4532}
!47 = !{i64 4534}
!48 = !{i64 4536}
!49 = !{i64 4538}
!50 = !{i64 4540}
!51 = !{i64 4542}
!52 = !{i64 4546}
!53 = !{i64 4549}
!54 = !{i64 4552}
!55 = !{i64 4555}
!56 = !{i64 4558}
!57 = !{i64 4592}
!58 = !{i64 4598}
!59 = !{i64 4607}
!60 = !{i64 4610}
!61 = !{i64 4624}
!62 = !{i64 4627}
!63 = !{i64 4630}
!64 = !{i64 4638}
!65 = !{i64 4641}
!66 = !{i64 4656}
!67 = !{i64 4661}
!68 = !{i64 4664}
!69 = !{i64 4676}
!70 = !{i64 4679}
!71 = !{i64 4691}
!72 = !{i64 4694}
!73 = !{i64 4702}
!74 = !{i64 4705}
!75 = !{i64 4720}
!76 = !{i64 4723}
!77 = !{i64 4726}
!78 = !{i64 4731}
!79 = !{i64 4734}
!80 = !{i64 4737}
!81 = !{i64 4752}
!82 = !{i64 4754}
!83 = !{i64 4769}
!84 = !{i64 4772}
!85 = !{i64 4779}
!86 = !{i64 4782}
!87 = !{i64 4784}
!88 = !{i64 4800}
!89 = !{i64 4802}
!90 = !{i64 4804}
!91 = !{i64 4807}
!92 = !{i64 4814}
!93 = !{i64 4820}
!94 = !{i64 4823}
!95 = !{i64 4826}
!96 = !{i64 4832}
!97 = !{i64 4834}
!98 = !{i64 4836}
!99 = !{i64 4848}
!100 = !{i64 4861}
!101 = !{i64 4865}
!102 = !{i64 4869}
!103 = !{i64 4871}
!104 = !{i64 4874}
!105 = !{i64 4880}
!106 = !{i64 4882}
!107 = !{i64 4889}
!108 = !{i64 4892}
!109 = !{i64 4896}
!110 = !{i64 4908}
!111 = !{i64 4912}
!112 = !{i64 4925}
!113 = !{i64 4929}
!114 = !{i64 4933}
!115 = !{i64 4935}
!116 = !{i64 4938}
!117 = !{i64 4944}
!118 = !{i64 4946}
!119 = !{i64 4962}
!120 = !{i64 4967}
!121 = !{i64 4970}
!122 = !{i64 4972}
!123 = !{i64 4975}
!124 = !{i64 4976}
!125 = !{i64 4992}
!126 = !{i64 4985}
!127 = !{i64 4994}
!128 = !{i64 4996}
!129 = !{i64 5000}
!130 = !{i64 5004}
!131 = !{i64 5008}
!132 = !{i64 5015}
!133 = !{i64 5024}
!134 = !{i64 5026}
!135 = !{i64 5042}
!136 = !{i64 5045}
!137 = !{i64 5047}
!138 = !{i64 5049}
!139 = !{i64 5051}
!140 = !{i64 5057}
!141 = !{i64 5060}
!142 = !{i64 5063}
!143 = !{i64 5065}
!144 = !{i64 5072}
!145 = !{i64 5079}
!146 = !{i64 5082}
!147 = !{i64 5085}
!148 = !{i64 5087}
!149 = !{i64 5088}
!150 = !{i64 5090}
!151 = !{i64 5104}
!152 = !{i64 5107}
!153 = !{i64 5113}
!154 = !{i64 5116}
!155 = !{i64 5119}
!156 = !{i64 5121}
!157 = !{i64 5138}
!158 = !{i64 5140}
!159 = !{i64 5143}
!160 = !{i64 5160}
!161 = !{i64 5179}
!162 = !{i64 5201}
!163 = !{i64 5216}
!164 = !{i64 5238}
!165 = !{i64 5250}
!166 = !{i64 5272}
!167 = !{i64 5287}
!168 = !{i64 5299}
!169 = !{i64 5318}
!170 = !{i64 5337}
!171 = !{i64 5356}
!172 = !{i64 5375}
!173 = !{i64 5394}
!174 = !{i64 5410}
!175 = !{i64 5429}
!176 = !{i64 5448}
!177 = !{i64 5467}
!178 = !{i64 5486}
!179 = !{i64 5505}
!180 = !{i64 5527}
!181 = !{i64 5542}
!182 = !{i64 5561}
!183 = !{i64 5583}
!184 = !{i64 5598}
!185 = !{i64 5617}
!186 = !{i64 5639}
!187 = !{i64 5654}
!188 = !{i64 5660}
!189 = !{i64 5664}
!190 = !{i64 5703}
!191 = !{i64 5691}
!192 = !{i64 5699}
!193 = !{i64 5707}
!194 = !{i64 5744}
!195 = !{i64 5748}
!196 = !{i64 5750}
!197 = !{i64 5754}
!198 = !{i64 5760}
!199 = !{i64 5786}
!200 = !{i64 5789}
!201 = !{i64 5822}
!202 = !{i64 5826}
!203 = !{i64 5830}
!204 = !{i64 5834}
!205 = !{i64 5774}
!206 = !{i64 5778}
!207 = !{i64 5856}
!208 = !{i64 5872}
!209 = !{i64 5890}
!210 = !{i64 5884}
!211 = !{i64 5893}
!212 = !{i64 5895}
!213 = !{i64 5898}
!214 = !{i64 5903}
!215 = !{i64 5905}
!216 = !{i64 5911}
!217 = !{i64 5916}
!218 = !{i64 5920}
!219 = !{i64 5922}
!220 = !{i64 5932}
!221 = !{i64 5934}
!222 = !{i64 5939}
!223 = !{i64 5942}
!224 = !{i64 5946}
!225 = !{i64 5949}
!226 = !{i64 5968}
!227 = !{i64 5973}
!228 = !{i64 5975}
!229 = !{i64 5977}
!230 = !{i64 5980}
!231 = !{i64 5991}
!232 = !{i64 6003}
!233 = !{i64 6005}
!234 = !{i64 6000}
!235 = !{i64 6008}
!236 = !{i64 6045}
!237 = !{i64 6155}
!238 = !{i64 6160}
!239 = !{i64 6162}
!240 = !{i64 6178}
!241 = !{i64 6181}
!242 = !{i64 6184}
!243 = !{i64 6190}
!244 = !{i64 6194}
!245 = !{i64 6209}
!246 = !{i64 6211}
!247 = !{i64 6213}
!248 = !{i64 6224}
!249 = !{i64 6226}
!250 = !{i64 6240}
!251 = !{i64 6242}
!252 = !{i64 6245}
!253 = !{i64 6248}
!254 = !{i64 6251}
!255 = !{i64 6258}
!256 = !{i64 6260}
!257 = !{i64 6272}
!258 = !{i64 6288}
!259 = !{i64 6291}
!260 = !{i64 6284}
!261 = !{i64 6293}
!262 = !{i64 6296}
!263 = !{i64 6299}
!264 = !{i64 6306}
!265 = !{i64 6320}
!266 = !{i64 6328}
!267 = !{i64 6333}
!268 = !{i64 6336}
!269 = !{i64 6341}
!270 = !{i64 6344}
!271 = !{i64 6345}
!272 = !{i64 6352}
!273 = !{i64 6357}
!274 = !{i64 6360}
!275 = !{i64 6363}
!276 = !{i64 6366}
!277 = !{i64 6368}
!278 = !{i64 6373}
!279 = !{i64 6377}
!280 = !{i64 6384}
!281 = !{i64 6388}
!282 = !{i64 6390}
!283 = !{i64 6392}
!284 = !{i64 6394}
!285 = !{i64 6396}
!286 = !{i64 6399}
!287 = !{i64 6403}
!288 = !{i64 6408}
!289 = !{i64 6410}
!290 = !{i64 6413}
!291 = !{i64 6418}
!292 = !{i64 6423}
!293 = !{i64 6426}
!294 = !{i64 6430}
!295 = !{i64 6434}
!296 = !{i64 6439}
!297 = !{i64 6444}
!298 = !{i64 6448}
!299 = !{i64 6473}
!300 = !{i64 6485}
!301 = !{i64 6510}
!302 = !{i64 6512}
!303 = !{i64 6515}
!304 = !{i64 6528}
!305 = !{i64 6531}
!306 = !{i64 6544}
!307 = !{i64 6547}
!308 = !{i64 6560}
!309 = !{i64 6568}
!310 = !{i64 6570}
!311 = !{i64 6578}
!312 = !{i64 6585}
!313 = !{i64 6599}
!314 = !{i64 6601}
!315 = !{i64 6605}
!316 = !{i64 6608}
!317 = !{i64 6624}
!318 = !{i64 6640}
!319 = !{i64 6655}
!320 = !{i64 6671}
!321 = !{i64 6684}
!322 = !{i64 6688}
!323 = !{i64 6692}
!324 = !{i64 6694}
!325 = !{i64 6698}
!326 = !{i64 6705}
!327 = !{i64 6727}
!328 = !{i64 6729}
!329 = !{i64 6748}
!330 = !{i64 6752}
!331 = !{i64 6756}
!332 = !{i64 6760}
!333 = !{i64 6764}
!334 = !{i64 6718}
!335 = !{i64 6725}
!336 = !{i64 6793}
!337 = !{i64 6806}
!338 = !{i64 6825}
!339 = !{i64 6828}
!340 = !{i64 6834}
!341 = !{i64 6860}
!342 = !{i64 6887}
!343 = !{i64 6902}
!344 = !{i64 6917}
!345 = !{i64 6944}
!346 = !{i64 6959}
!347 = !{i64 6978}
!348 = !{i64 6988}
!349 = !{i64 6992}
!350 = !{i64 6995}
!351 = !{i64 6998}
!352 = !{i64 7001}
!353 = !{i64 7003}
!354 = !{i64 7005}
!355 = !{i64 7008}
!356 = !{i64 7011}
!357 = !{i64 7014}
!358 = !{i64 7029}
!359 = !{i64 7048}
!360 = !{i64 7071}
!361 = !{i64 7079}
!362 = !{i64 7082}
!363 = !{i64 7085}
!364 = !{i64 7103}
!365 = !{i64 7113}
!366 = !{i64 7125}
!367 = !{i64 7129}
!368 = !{i64 7144}
!369 = !{i64 7156}
!370 = !{i64 7160}
!371 = !{i64 7175}
!372 = !{i64 7187}
!373 = !{i64 7191}
!374 = !{i64 7210}
!375 = !{i64 7232}
!376 = !{i64 7242}
!377 = !{i64 7250}
!378 = !{i64 7254}
!379 = !{i64 7273}
!380 = !{i64 7286}
!381 = !{i64 7296}
!382 = !{i64 7306}
!383 = !{i64 7316}
!384 = !{i64 7318}
!385 = !{i64 7320}
!386 = !{i64 7322}
!387 = !{i64 7327}
!388 = !{i64 7297}
!389 = !{i64 7331}
!390 = !{i64 7336}
!391 = !{i64 7349}
!392 = !{i64 7366}
!393 = !{i64 7376}
!394 = !{i64 7379}
!395 = !{i64 7387}
!396 = !{i64 7390}
!397 = !{i64 7397}
!398 = !{i64 7400}
!399 = !{i64 7413}
!400 = !{i64 7440}
!401 = !{i64 7456}
!402 = !{i64 7459}
!403 = !{i64 7474}
!404 = !{i64 7476}
!405 = !{i64 7490}
!406 = !{i64 7493}
!407 = !{i64 7504}
!408 = !{i64 7506}
!409 = !{i64 7510}
!410 = !{i64 7511}
!411 = !{i64 7513}
!412 = !{i64 7516}
!413 = !{i64 7520}
!414 = !{i64 7522}
!415 = !{i64 7526}
!416 = !{i64 7527}
!417 = !{i64 7529}
!418 = !{i64 7531}
!419 = !{i64 7534}
!420 = !{i64 7538}
!421 = !{i64 7540}
!422 = !{i64 7554}
!423 = !{i64 7556}
!424 = !{i64 7570}
!425 = !{i64 7572}
!426 = !{i64 7586}
!427 = !{i64 7588}
!428 = !{i64 7590}
!429 = !{i64 7602}
!430 = !{i64 7604}
!431 = !{i64 7606}
!432 = !{i64 7617}
!433 = !{i64 7634}
!434 = !{i64 7638}
!435 = !{i64 7647}
!436 = !{i64 7656}
!437 = !{i64 7664}
!438 = !{i64 7667}
!439 = !{i64 7669}
!440 = !{i64 7687}
!441 = !{i64 7703}
!442 = !{i64 7706}
!443 = !{i64 7712}
!444 = !{i64 7714}
!445 = !{i64 7717}
!446 = !{i64 7720}
!447 = !{i64 7723}
!448 = !{i64 7726}
!449 = !{i64 7728}
!450 = !{i64 7731}
!451 = !{i64 7734}
!452 = !{i64 7749}
!453 = !{i64 7772}
!454 = !{i64 7778}
!455 = !{i64 7781}
!456 = !{i64 7784}
!457 = !{i64 7794}
!458 = !{i64 7800}
!459 = !{i64 7802}
!460 = !{i64 7805}
!461 = !{i64 7808}
!462 = !{i64 7811}
!463 = !{i64 7829}
!464 = !{i64 7842}
!465 = !{i64 7844}
!466 = !{i64 7847}
!467 = !{i64 7850}
!468 = !{i64 7856}
!469 = !{i64 7867}
!470 = !{i64 7877}
!471 = !{i64 7866}
!472 = !{i64 7904}
!473 = !{i64 7907}
!474 = !{i64 7920}
!475 = !{i64 7923}
!476 = !{i64 7936}
!477 = !{i64 7940}
!478 = !{i64 7942}
!479 = !{i64 7944}
!480 = !{i64 7947}
!481 = !{i64 7949}
!482 = !{i64 7951}
!483 = !{i64 7952}
!484 = !{i64 7955}
!485 = !{i64 7958}
!486 = !{i64 7976}
!487 = !{i64 7986}
!488 = !{i64 8001}
!489 = !{i64 8005}
!490 = !{i64 8015}
!491 = !{i64 8023}
!492 = !{i64 8027}
!493 = !{i64 8049}
!494 = !{i64 8064}
!495 = !{i64 8083}
!496 = !{i64 8102}
!497 = !{i64 8121}
!498 = !{i64 8140}
!499 = !{i64 8150}
!500 = !{i64 8162}
!501 = !{i64 8166}
!502 = !{i64 8185}
!503 = !{i64 8204}
!504 = !{i64 8223}
!505 = !{i64 8229}
!506 = !{i64 8241}
!507 = !{i64 8246}
!508 = !{i64 8251}
!509 = !{i64 8259}
!510 = !{i64 8272}
