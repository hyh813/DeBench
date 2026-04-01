source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i64
@global_var_3004 = local_unnamed_addr constant i64 -31211527347277
@global_var_31d0 = local_unnamed_addr constant [5 x i32] %wide-string
@global_var_3290 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_32af = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_32c9 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_32e1 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_32fd = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_331c = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_333c = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_335b = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_3378 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_3395 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_33b4 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_33d7 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_33f6 = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_3411 = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_342e = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_344a = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_3465 = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_3483 = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_34a0 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_34be = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_30a8 = local_unnamed_addr constant i64 -23892903073296
@global_var_5d40 = local_unnamed_addr global i64 8480
@global_var_34d9 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_34f9 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_3517 = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_3534 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_3557 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_3574 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_3596 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_35b6 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_35da = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_35fe = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_361d = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_3640 = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_365e = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_3682 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_5d60 = local_unnamed_addr global i64 9344
@global_var_30c8 = local_unnamed_addr constant i64 -12433930324831
@global_var_5db0 = local_unnamed_addr global i64 9664
@global_var_5dd0 = local_unnamed_addr global i64 9767
@global_var_36a8 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_36c7 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_36e5 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_3706 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_372b = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_3749 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_3768 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3786 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_37a4 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_37c5 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@1 = external global i32
@global_var_6050 = local_unnamed_addr global i8 0
@global_var_3280 = constant i32* inttoptr (i64 21474836495 to i32*)
@global_var_3140 = external local_unnamed_addr constant i128
@global_var_3150 = external local_unnamed_addr constant i128
@global_var_3160 = external local_unnamed_addr constant i128
@global_var_3170 = external local_unnamed_addr constant i128
@global_var_3180 = external local_unnamed_addr constant i128
@global_var_3190 = external local_unnamed_addr constant i128
@global_var_31a0 = external local_unnamed_addr constant i128
@global_var_31b0 = external local_unnamed_addr constant i128
@global_var_31c0 = external local_unnamed_addr constant i128
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_37e5 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_30d8 = constant i32* null
@global_var_3108 = constant i32* inttoptr (i64 4294967296 to i32*)
@global_var_3e8 = global i32 0
@global_var_3e9 = global i32 0
@global_var_31e0 = external local_unnamed_addr constant i128
@global_var_3200 = external local_unnamed_addr constant i128
@global_var_3210 = external local_unnamed_addr constant i128
@global_var_3220 = external local_unnamed_addr constant i128
@global_var_3230 = external local_unnamed_addr constant i128
@global_var_3240 = external local_unnamed_addr constant i128
@global_var_3250 = external local_unnamed_addr constant i128
@global_var_3260 = external local_unnamed_addr constant i128
@global_var_31f0 = external local_unnamed_addr constant i128
@global_var_3270 = external local_unnamed_addr constant i128
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3809 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)
@global_var_6060 = global i32 0
@4 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_382d = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @4, i64 0, i64 0)

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
  %3 = call i32 @__libc_start_main(i64 10128, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !11
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
  %3 = add i64 %2, ptrtoint (i32** @global_var_3280 to i64), !insn.addr !69
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

define i64 @loop_while(i64 %arg1) local_unnamed_addr {
dec_label_pc_12e0:
  %merge.reg2mem = alloca i64, !insn.addr !96
  %rdi.0.reg2mem = alloca i64, !insn.addr !96
  %rax.0.reg2mem = alloca i64, !insn.addr !96
  %0 = trunc i64 %arg1 to i32, !insn.addr !96
  %1 = icmp eq i32 %0, 0, !insn.addr !96
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !97
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !97
  store i64 1, i64* %merge.reg2mem, !insn.addr !97
  br i1 %1, label %dec_label_pc_1312, label %dec_label_pc_12f0, !insn.addr !97

dec_label_pc_12f0:                                ; preds = %dec_label_pc_12e0, %dec_label_pc_12f0
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !98
  %narrow = mul nsw i64 %2, 1717986919
  %3 = lshr i64 %narrow, 63, !insn.addr !99
  %4 = ashr i64 %narrow, 34, !insn.addr !100
  %5 = add nsw i64 %4, %3, !insn.addr !101
  %6 = and i64 %5, 4294967295, !insn.addr !101
  %7 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !102
  %8 = and i64 %7, 4294967295, !insn.addr !102
  %9 = trunc i64 %2 to i32, !insn.addr !103
  %10 = add i32 %9, 9, !insn.addr !103
  %11 = icmp ult i32 %10, 19
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !104
  store i64 %6, i64* %rdi.0.reg2mem, !insn.addr !104
  store i64 %8, i64* %merge.reg2mem, !insn.addr !104
  br i1 %11, label %dec_label_pc_1312, label %dec_label_pc_12f0, !insn.addr !104

dec_label_pc_1312:                                ; preds = %dec_label_pc_12f0, %dec_label_pc_12e0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !105

; uselistorder directives
  uselistorder i64 %narrow, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_12f0, { 1, 0 }
}

define i64 @loop_dowhile() local_unnamed_addr {
dec_label_pc_1320:
  %rdi.0.reg2mem = alloca i64, !insn.addr !106
  %rax.0.reg2mem = alloca i64, !insn.addr !106
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !107
  br label %dec_label_pc_1330, !insn.addr !107

dec_label_pc_1330:                                ; preds = %dec_label_pc_1330, %dec_label_pc_1320
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %sext = mul i64 %rdi.0.reload, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !108
  %narrow = mul nsw i64 %0, 1717986919
  %1 = lshr i64 %narrow, 63, !insn.addr !109
  %2 = ashr i64 %narrow, 34, !insn.addr !110
  %3 = add nsw i64 %2, %1, !insn.addr !111
  %4 = and i64 %3, 4294967295, !insn.addr !111
  %5 = add nuw nsw i64 %rax.0.reload, 1, !insn.addr !112
  %6 = and i64 %5, 4294967295, !insn.addr !112
  %7 = trunc i64 %0 to i32, !insn.addr !113
  %8 = add i32 %7, 9, !insn.addr !113
  %9 = icmp ult i32 %8, 19
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !114
  store i64 %4, i64* %rdi.0.reg2mem, !insn.addr !114
  br i1 %9, label %dec_label_pc_1352, label %dec_label_pc_1330, !insn.addr !114

dec_label_pc_1352:                                ; preds = %dec_label_pc_1330
  ret i64 %6, !insn.addr !115

; uselistorder directives
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %narrow, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1360:
  %sext = mul i64 %arg2, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !116
  %sext1 = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !116
  %2 = mul nsw i64 %0, %1, !insn.addr !116
  %3 = trunc i64 %arg2 to i32, !insn.addr !117
  %4 = icmp slt i32 %3, 1
  %5 = trunc i64 %arg1 to i32, !insn.addr !118
  %6 = icmp slt i32 %5, 1
  %7 = or i1 %6, %4
  %8 = and i64 %2, 4294967295
  %9 = select i1 %7, i64 0, i64 %8, !insn.addr !119
  ret i64 %9, !insn.addr !120

; uselistorder directives
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_1380:
  %0 = trunc i64 %arg1 to i32, !insn.addr !121
  %1 = add i32 %0, -10, !insn.addr !121
  %2 = icmp ult i32 %1, 41
  %spec.select = select i1 %2, i64 0, i64 4294967295
  ret i64 %spec.select, !insn.addr !122
}

define i64 @function_13a6() local_unnamed_addr {
dec_label_pc_13a6:
  ret i64 2, !insn.addr !123
}

define i64 @function_13ac() local_unnamed_addr {
dec_label_pc_13ac:
  ret i64 3, !insn.addr !124
}

define i64 @function_13b2() local_unnamed_addr {
dec_label_pc_13b2:
  ret i64 4, !insn.addr !125
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_13c0:
  %0 = alloca i128
  %rcx.0.reg2mem = alloca i64, !insn.addr !126
  %rax.1.reg2mem = alloca i64, !insn.addr !126
  %storemerge.reg2mem = alloca i64, !insn.addr !126
  %rax.0.reg2mem = alloca i64, !insn.addr !126
  %xmm2.1.reg2mem = alloca i128, !insn.addr !126
  %xmm0.2.reg2mem = alloca i128, !insn.addr !126
  %xmm5.1.reg2mem = alloca i128, !insn.addr !126
  %xmm4.1.reg2mem = alloca i128, !insn.addr !126
  %xmm2.0.reg2mem = alloca i128, !insn.addr !126
  %xmm0.1.reg2mem = alloca i128, !insn.addr !126
  %.reg2mem18 = alloca i128, !insn.addr !126
  %.reg2mem = alloca i128, !insn.addr !126
  %rdx.0.reg2mem = alloca i32, !insn.addr !126
  %xmm5.0.reg2mem = alloca i128, !insn.addr !126
  %xmm4.0.reg2mem = alloca i128, !insn.addr !126
  %xmm0.0.reg2mem = alloca i128, !insn.addr !126
  %merge.reg2mem = alloca i64, !insn.addr !126
  %1 = load i128, i128* %0
  %2 = load i128, i128* %0
  %3 = load i128, i128* %0
  %4 = load i128, i128* %0
  %5 = trunc i64 %arg1 to i32, !insn.addr !126
  %6 = icmp slt i32 %5, 1
  store i64 0, i64* %merge.reg2mem, !insn.addr !127
  br i1 %6, label %dec_label_pc_13d5, label %dec_label_pc_13c4, !insn.addr !127

dec_label_pc_13c4:                                ; preds = %dec_label_pc_13c0
  %7 = icmp ult i32 %5, 8, !insn.addr !128
  %8 = icmp eq i1 %7, false, !insn.addr !129
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !129
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !129
  br i1 %8, label %dec_label_pc_13d8, label %dec_label_pc_14fb, !insn.addr !129

dec_label_pc_13d5:                                ; preds = %dec_label_pc_1500, %dec_label_pc_14da, %dec_label_pc_13c0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !130

dec_label_pc_13d8:                                ; preds = %dec_label_pc_13c4
  %9 = and i64 %arg1, 4294967288, !insn.addr !131
  %10 = trunc i64 %9 to i32
  %11 = add i32 %10, -8, !insn.addr !132
  %12 = udiv i32 %11, 8, !insn.addr !133
  %13 = add nuw nsw i32 %12, 1, !insn.addr !134
  %14 = zext i32 %13 to i64, !insn.addr !134
  %15 = icmp eq i32 %11, 0, !insn.addr !135
  br i1 %15, label %dec_label_pc_1513, label %dec_label_pc_13f0, !insn.addr !136

dec_label_pc_13f0:                                ; preds = %dec_label_pc_13d8
  %16 = and i32 %13, 1073741822, !insn.addr !137
  %17 = call i128 @__asm_pxor(i128 %1, i128 %1), !insn.addr !138
  %18 = load i128, i128* @global_var_3140, align 8, !insn.addr !139
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !139
  %20 = load i128, i128* @global_var_3150, align 8, !insn.addr !140
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !140
  %22 = load i128, i128* @global_var_3160, align 8, !insn.addr !141
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !141
  %24 = load i128, i128* @global_var_3170, align 8, !insn.addr !142
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !142
  %26 = load i128, i128* @global_var_3180, align 8, !insn.addr !143
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !143
  %28 = load i128, i128* @global_var_3190, align 8, !insn.addr !144
  %29 = call i128 @__asm_movdqa(i128 %28), !insn.addr !144
  %30 = call i128 @__asm_pxor(i128 %4, i128 %4), !insn.addr !145
  %31 = call i128 @__asm_pxor(i128 %2, i128 %2), !insn.addr !146
  store i128 %30, i128* %xmm0.0.reg2mem, !insn.addr !147
  store i128 %31, i128* %xmm4.0.reg2mem, !insn.addr !147
  store i128 %19, i128* %xmm5.0.reg2mem, !insn.addr !147
  store i32 %16, i32* %rdx.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_1440, !insn.addr !147

dec_label_pc_1440:                                ; preds = %dec_label_pc_1440, %dec_label_pc_13f0
  %rdx.0.reload = load i32, i32* %rdx.0.reg2mem
  %xmm5.0.reload = load i128, i128* %xmm5.0.reg2mem
  %xmm4.0.reload = load i128, i128* %xmm4.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %32 = call i128 @__asm_movdqa(i128 %xmm5.0.reload), !insn.addr !148
  %33 = call i128 @__asm_paddd(i128 %32, i128 %21), !insn.addr !149
  %34 = call i128 @__asm_movdqa(i128 %xmm5.0.reload), !insn.addr !150
  %35 = call i128 @__asm_pand(i128 %34, i128 %23), !insn.addr !151
  %36 = call i128 @__asm_pcmpeqd(i128 %35, i128 %17), !insn.addr !152
  %37 = call i128 @__asm_movdqa(i128 %36), !insn.addr !153
  %38 = call i128 @__asm_pandn(i128 %37, i128 %xmm5.0.reload), !insn.addr !154
  %39 = call i128 @__asm_paddd(i128 %38, i128 %xmm0.0.reload), !insn.addr !155
  %40 = call i128 @__asm_movdqa(i128 %36), !insn.addr !156
  %41 = call i128 @__asm_pandn(i128 %40, i128 %33), !insn.addr !157
  %42 = call i128 @__asm_paddd(i128 %41, i128 %xmm4.0.reload), !insn.addr !158
  %43 = call i128 @__asm_movdqa(i128 %xmm5.0.reload), !insn.addr !159
  %44 = call i128 @__asm_paddd(i128 %43, i128 %25), !insn.addr !160
  %45 = call i128 @__asm_movdqa(i128 %xmm5.0.reload), !insn.addr !161
  %46 = call i128 @__asm_paddd(i128 %45, i128 %27), !insn.addr !162
  %47 = call i128 @__asm_movdqa(i128 %36), !insn.addr !163
  %48 = call i128 @__asm_pandn(i128 %47, i128 %44), !insn.addr !164
  %49 = call i128 @__asm_paddd(i128 %48, i128 %39), !insn.addr !165
  %50 = call i128 @__asm_pandn(i128 %36, i128 %46), !insn.addr !166
  %51 = call i128 @__asm_paddd(i128 %50, i128 %42), !insn.addr !167
  %52 = call i128 @__asm_paddd(i128 %xmm5.0.reload, i128 %29), !insn.addr !168
  %53 = call i128 @__asm_movdqa(i128 %51), !insn.addr !169
  %54 = add i32 %rdx.0.reload, -2, !insn.addr !170
  %55 = icmp eq i32 %54, 0, !insn.addr !170
  %56 = icmp eq i1 %55, false, !insn.addr !171
  store i128 %49, i128* %xmm0.0.reg2mem, !insn.addr !171
  store i128 %53, i128* %xmm4.0.reg2mem, !insn.addr !171
  store i128 %52, i128* %xmm5.0.reg2mem, !insn.addr !171
  store i32 %54, i32* %rdx.0.reg2mem, !insn.addr !171
  br i1 %56, label %dec_label_pc_1440, label %dec_label_pc_14a2, !insn.addr !171

dec_label_pc_14a2:                                ; preds = %dec_label_pc_1440
  %57 = urem i64 %14, 2
  %58 = icmp eq i64 %57, 0, !insn.addr !172
  store i128 %22, i128* %.reg2mem, !insn.addr !173
  store i128 %20, i128* %.reg2mem18, !insn.addr !173
  store i128 %49, i128* %xmm0.1.reg2mem, !insn.addr !173
  store i128 %51, i128* %xmm2.0.reg2mem, !insn.addr !173
  store i128 %53, i128* %xmm4.1.reg2mem, !insn.addr !173
  store i128 %52, i128* %xmm5.1.reg2mem, !insn.addr !173
  store i128 %49, i128* %xmm0.2.reg2mem, !insn.addr !173
  store i128 %51, i128* %xmm2.1.reg2mem, !insn.addr !173
  br i1 %58, label %dec_label_pc_14da, label %dec_label_pc_14a6, !insn.addr !173

dec_label_pc_14a6:                                ; preds = %dec_label_pc_1513.dec_label_pc_14a6_crit_edge, %dec_label_pc_14a2
  %xmm5.1.reload = load i128, i128* %xmm5.1.reg2mem
  %xmm4.1.reload = load i128, i128* %xmm4.1.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %.reload19 = load i128, i128* %.reg2mem18, !insn.addr !174
  %.reload = load i128, i128* %.reg2mem, !insn.addr !175
  %59 = call i128 @__asm_movdqa(i128 %.reload19), !insn.addr !174
  %60 = call i128 @__asm_paddd(i128 %59, i128 %xmm5.1.reload), !insn.addr !176
  %61 = call i128 @__asm_movdqa(i128 %.reload), !insn.addr !175
  %62 = call i128 @__asm_pand(i128 %61, i128 %xmm5.1.reload), !insn.addr !177
  %63 = call i128 @__asm_pxor(i128 %xmm4.1.reload, i128 %xmm4.1.reload), !insn.addr !178
  %64 = call i128 @__asm_pcmpeqd(i128 %63, i128 %62), !insn.addr !179
  %65 = call i128 @__asm_movdqa(i128 %64), !insn.addr !180
  %66 = call i128 @__asm_pandn(i128 %65, i128 %xmm5.1.reload), !insn.addr !181
  %67 = call i128 @__asm_paddd(i128 %xmm0.1.reload, i128 %66), !insn.addr !182
  %68 = call i128 @__asm_pandn(i128 %64, i128 %60), !insn.addr !183
  %69 = call i128 @__asm_paddd(i128 %xmm2.0.reload, i128 %68), !insn.addr !184
  store i128 %67, i128* %xmm0.2.reg2mem, !insn.addr !184
  store i128 %69, i128* %xmm2.1.reg2mem, !insn.addr !184
  br label %dec_label_pc_14da, !insn.addr !184

dec_label_pc_14da:                                ; preds = %dec_label_pc_1513, %dec_label_pc_14a6, %dec_label_pc_14a2
  %xmm2.1.reload = load i128, i128* %xmm2.1.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %70 = call i128 @__asm_paddd(i128 %xmm0.2.reload, i128 %xmm2.1.reload), !insn.addr !185
  %71 = call i128 @__asm_pshufd(i128 %70, i8 -18), !insn.addr !186
  %72 = call i128 @__asm_paddd(i128 %71, i128 %70), !insn.addr !187
  %73 = call i128 @__asm_pshufd(i128 %72, i8 85), !insn.addr !188
  %74 = call i128 @__asm_paddd(i128 %73, i128 %72), !insn.addr !189
  %75 = call i32 @__asm_movd(i128 %74), !insn.addr !190
  %76 = sext i32 %75 to i64, !insn.addr !190
  %77 = icmp eq i32 %10, %5, !insn.addr !191
  store i64 %76, i64* %merge.reg2mem, !insn.addr !192
  br i1 %77, label %dec_label_pc_13d5, label %dec_label_pc_14f8, !insn.addr !192

dec_label_pc_14f8:                                ; preds = %dec_label_pc_14da
  %78 = or i64 %9, 1, !insn.addr !193
  store i64 %76, i64* %rax.0.reg2mem, !insn.addr !193
  store i64 %78, i64* %storemerge.reg2mem, !insn.addr !193
  br label %dec_label_pc_14fb, !insn.addr !193

dec_label_pc_14fb:                                ; preds = %dec_label_pc_13c4, %dec_label_pc_14f8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %79 = add i32 %5, 1, !insn.addr !194
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !195
  store i64 %storemerge.reload, i64* %rcx.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_1500, !insn.addr !195

dec_label_pc_1500:                                ; preds = %dec_label_pc_1500, %dec_label_pc_14fb
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %80 = urem i64 %rcx.0.reload, 2, !insn.addr !196
  %81 = sub nsw i64 0, %80, !insn.addr !197
  %82 = and i64 %rcx.0.reload, %81, !insn.addr !198
  %83 = add nsw i64 %82, %rax.1.reload, !insn.addr !199
  %84 = and i64 %83, 4294967295, !insn.addr !199
  %85 = add nsw i64 %rcx.0.reload, 1, !insn.addr !200
  %86 = and i64 %85, 4294967295, !insn.addr !200
  %87 = trunc i64 %85 to i32, !insn.addr !194
  %88 = icmp eq i32 %79, %87, !insn.addr !194
  %89 = icmp eq i1 %88, false, !insn.addr !201
  store i64 %84, i64* %merge.reg2mem, !insn.addr !201
  store i64 %84, i64* %rax.1.reg2mem, !insn.addr !201
  store i64 %86, i64* %rcx.0.reg2mem, !insn.addr !201
  br i1 %89, label %dec_label_pc_1500, label %dec_label_pc_13d5, !insn.addr !201

dec_label_pc_1513:                                ; preds = %dec_label_pc_13d8
  %90 = call i128 @__asm_pxor(i128 %4, i128 %4), !insn.addr !202
  %91 = load i128, i128* @global_var_3140, align 8, !insn.addr !203
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !203
  %93 = call i128 @__asm_pxor(i128 %3, i128 %3), !insn.addr !204
  %94 = urem i64 %14, 2
  %95 = icmp eq i64 %94, 0, !insn.addr !205
  %96 = icmp eq i1 %95, false, !insn.addr !206
  store i128 %90, i128* %xmm0.2.reg2mem, !insn.addr !206
  store i128 %93, i128* %xmm2.1.reg2mem, !insn.addr !206
  br i1 %96, label %dec_label_pc_1513.dec_label_pc_14a6_crit_edge, label %dec_label_pc_14da, !insn.addr !206

dec_label_pc_1513.dec_label_pc_14a6_crit_edge:    ; preds = %dec_label_pc_1513
  %.pre = load i128, i128* @global_var_3150, align 8
  %.pre9 = load i128, i128* @global_var_3160, align 8
  store i128 %.pre9, i128* %.reg2mem
  store i128 %.pre, i128* %.reg2mem18
  store i128 %90, i128* %xmm0.1.reg2mem
  store i128 %93, i128* %xmm2.0.reg2mem
  store i128 %92, i128* %xmm5.1.reg2mem
  br label %dec_label_pc_14a6

; uselistorder directives
  uselistorder i128 %93, { 1, 0 }
  uselistorder i128 %90, { 1, 0 }
  uselistorder i128 %72, { 1, 0 }
  uselistorder i128 %70, { 1, 0 }
  uselistorder i128 %64, { 1, 0 }
  uselistorder i128 %xmm5.1.reload, { 2, 0, 1 }
  uselistorder i128 %36, { 3, 2, 1, 0 }
  uselistorder i128 %xmm5.0.reload, { 5, 3, 4, 2, 0, 1 }
  uselistorder i32 %11, { 1, 0 }
  uselistorder i64* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm4.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %.reg2mem, { 2, 0, 1 }
  uselistorder i128* %.reg2mem18, { 2, 0, 1 }
  uselistorder i128* %xmm0.1.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm2.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm5.1.reg2mem, { 2, 0, 1 }
  uselistorder i128* %xmm0.2.reg2mem, { 2, 0, 3, 1 }
  uselistorder i128* %xmm2.1.reg2mem, { 2, 0, 3, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %0, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_14fb, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1530:
  %0 = trunc i64 %arg1 to i32, !insn.addr !207
  %1 = icmp eq i32 %0, 0, !insn.addr !207
  %2 = icmp slt i32 %0, 0, !insn.addr !207
  %3 = icmp eq i1 %2, false, !insn.addr !208
  %4 = icmp eq i1 %1, false, !insn.addr !208
  %5 = icmp eq i1 %3, %4, !insn.addr !208
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 32
  %7 = select i1 %5, i64 %6, i64 1, !insn.addr !209
  %8 = ashr exact i64 %sext, 31, !insn.addr !209
  %9 = mul i64 %7, %8, !insn.addr !210
  %10 = and i64 %9, 4294967294, !insn.addr !210
  ret i64 %10, !insn.addr !211

; uselistorder directives
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1540:
  %rcx.1.reg2mem = alloca i64, !insn.addr !212
  %rax.2.reg2mem = alloca i64, !insn.addr !212
  %rcx.0.reg2mem = alloca i64, !insn.addr !212
  %rax.1.reg2mem = alloca i64, !insn.addr !212
  %xmm6.0.reg2mem = alloca i128, !insn.addr !212
  %xmm5.0.reg2mem = alloca i128, !insn.addr !212
  %rax.0.in.reg2mem = alloca i32, !insn.addr !212
  %xmm4.2.reg2mem = alloca i128, !insn.addr !212
  %xmm1.2.reg2mem = alloca i128, !insn.addr !212
  %xmm0.2.reg2mem = alloca i128, !insn.addr !212
  %xmm4.1.reg2mem = alloca i128, !insn.addr !212
  %xmm1.1.reg2mem = alloca i128, !insn.addr !212
  %xmm0.1.reg2mem = alloca i128, !insn.addr !212
  %rdx.0.in.reg2mem = alloca i32, !insn.addr !212
  %xmm4.0.reg2mem = alloca i128, !insn.addr !212
  %xmm1.0.reg2mem = alloca i128, !insn.addr !212
  %xmm0.0.reg2mem = alloca i128, !insn.addr !212
  %merge.reg2mem = alloca i64, !insn.addr !212
  %0 = trunc i64 %arg1 to i32, !insn.addr !212
  %1 = icmp slt i32 %0, 1
  store i64 1, i64* %merge.reg2mem, !insn.addr !213
  br i1 %1, label %dec_label_pc_158a, label %dec_label_pc_1544, !insn.addr !213

dec_label_pc_1544:                                ; preds = %dec_label_pc_1540
  %2 = icmp ult i32 %0, 8, !insn.addr !214
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !215
  store i64 1, i64* %rcx.0.reg2mem, !insn.addr !215
  br i1 %2, label %dec_label_pc_1780, label %dec_label_pc_1557, !insn.addr !215

dec_label_pc_1557:                                ; preds = %dec_label_pc_1544
  %3 = and i64 %arg1, 4294967288, !insn.addr !216
  %4 = trunc i64 %3 to i32
  %5 = add i32 %4, -8, !insn.addr !217
  %6 = udiv i32 %5, 8, !insn.addr !218
  %7 = add nuw nsw i32 %6, 1, !insn.addr !219
  %8 = icmp ult i32 %5, 24, !insn.addr !220
  %9 = icmp eq i1 %8, false, !insn.addr !221
  br i1 %9, label %dec_label_pc_1590, label %dec_label_pc_1571, !insn.addr !221

dec_label_pc_1571:                                ; preds = %dec_label_pc_1557
  %10 = load i128, i128* @global_var_3160, align 8, !insn.addr !222
  %11 = call i128 @__asm_movdqa(i128 %10), !insn.addr !222
  %12 = load i128, i128* @global_var_3140, align 8, !insn.addr !223
  %13 = call i128 @__asm_movdqa(i128 %12), !insn.addr !223
  %14 = call i128 @__asm_movdqa(i128 %11), !insn.addr !224
  store i128 %13, i128* %xmm0.1.reg2mem, !insn.addr !225
  store i128 %11, i128* %xmm1.1.reg2mem, !insn.addr !225
  store i128 %14, i128* %xmm4.1.reg2mem, !insn.addr !225
  br label %dec_label_pc_16d1, !insn.addr !225

dec_label_pc_158a:                                ; preds = %dec_label_pc_1790, %dec_label_pc_174d, %dec_label_pc_1540
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !226

dec_label_pc_1590:                                ; preds = %dec_label_pc_1557
  %15 = and i32 %7, 1073741820
  %16 = load i128, i128* @global_var_3160, align 8, !insn.addr !227
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !227
  %18 = load i128, i128* @global_var_3140, align 8, !insn.addr !228
  %19 = call i128 @__asm_movdqa(i128 %18), !insn.addr !228
  %20 = load i128, i128* @global_var_3170, align 8, !insn.addr !229
  %21 = call i128 @__asm_movdqa(i128 %20), !insn.addr !229
  %22 = load i128, i128* @global_var_3180, align 8, !insn.addr !230
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !230
  %24 = load i128, i128* @global_var_3190, align 8, !insn.addr !231
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !231
  %26 = load i128, i128* @global_var_31a0, align 8, !insn.addr !232
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !232
  %28 = load i128, i128* @global_var_31b0, align 8, !insn.addr !233
  %29 = call i128 @__asm_movdqa(i128 %28), !insn.addr !233
  %30 = load i128, i128* @global_var_31c0, align 8, !insn.addr !234
  %31 = call i128 @__asm_movdqa(i128 %30), !insn.addr !234
  %32 = call i128 @__asm_movdqa(i128 2535301201046754613489551015968), !insn.addr !235
  %33 = call i128 @__asm_movdqa(i128 %17), !insn.addr !236
  %34 = load i128, i128* @global_var_3150, align 8
  store i128 %19, i128* %xmm0.0.reg2mem, !insn.addr !237
  store i128 %17, i128* %xmm1.0.reg2mem, !insn.addr !237
  store i128 %33, i128* %xmm4.0.reg2mem, !insn.addr !237
  store i32 %15, i32* %rdx.0.in.reg2mem, !insn.addr !237
  br label %dec_label_pc_15f0, !insn.addr !237

dec_label_pc_15f0:                                ; preds = %dec_label_pc_15f0, %dec_label_pc_1590
  %rdx.0.in.reload = load i32, i32* %rdx.0.in.reg2mem
  %xmm4.0.reload = load i128, i128* %xmm4.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %35 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !238
  %36 = call i128 @__asm_paddd(i128 %35, i128 %34), !insn.addr !239
  %37 = call i128 @__asm_pshufd(i128 %xmm1.0.reload, i8 -11), !insn.addr !240
  %38 = call i128 @__asm_pshufd(i128 %xmm0.0.reload, i8 -11), !insn.addr !241
  %39 = call i128 @__asm_pmuludq(i128 %38, i128 %37), !insn.addr !242
  %40 = call i128 @__asm_pmuludq(i128 %xmm1.0.reload, i128 %xmm0.0.reload), !insn.addr !243
  %41 = call i128 @__asm_pshufd(i128 %xmm4.0.reload, i8 -11), !insn.addr !244
  %42 = call i128 @__asm_pshufd(i128 %36, i8 -11), !insn.addr !245
  %43 = call i128 @__asm_pmuludq(i128 %42, i128 %41), !insn.addr !246
  %44 = call i128 @__asm_pmuludq(i128 %36, i128 %xmm4.0.reload), !insn.addr !247
  %45 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !248
  %46 = call i128 @__asm_paddd(i128 %45, i128 %21), !insn.addr !249
  %47 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !250
  %48 = call i128 @__asm_paddd(i128 %47, i128 %23), !insn.addr !251
  %49 = call i128 @__asm_pmuludq(i128 %40, i128 %46), !insn.addr !252
  %50 = call i128 @__asm_pshufd(i128 %46, i8 -11), !insn.addr !253
  %51 = call i128 @__asm_pmuludq(i128 %50, i128 %39), !insn.addr !254
  %52 = call i128 @__asm_pmuludq(i128 %44, i128 %48), !insn.addr !255
  %53 = call i128 @__asm_pshufd(i128 %48, i8 -11), !insn.addr !256
  %54 = call i128 @__asm_pmuludq(i128 %53, i128 %43), !insn.addr !257
  %55 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !258
  %56 = call i128 @__asm_paddd(i128 %55, i128 %25), !insn.addr !259
  %57 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !260
  %58 = call i128 @__asm_paddd(i128 %57, i128 %27), !insn.addr !261
  %59 = call i128 @__asm_pshufd(i128 %56, i8 -11), !insn.addr !262
  %60 = call i128 @__asm_pmuludq(i128 %59, i128 %51), !insn.addr !263
  %61 = call i128 @__asm_pmuludq(i128 %56, i128 %49), !insn.addr !264
  %62 = call i128 @__asm_pshufd(i128 %58, i8 -11), !insn.addr !265
  %63 = call i128 @__asm_pmuludq(i128 %62, i128 %54), !insn.addr !266
  %64 = call i128 @__asm_pmuludq(i128 %58, i128 %52), !insn.addr !267
  %65 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !268
  %66 = call i128 @__asm_paddd(i128 %65, i128 %29), !insn.addr !269
  %67 = call i128 @__asm_movdqa(i128 %xmm0.0.reload), !insn.addr !270
  %68 = call i128 @__asm_paddd(i128 %67, i128 %31), !insn.addr !271
  %69 = call i128 @__asm_pmuludq(i128 %61, i128 %66), !insn.addr !272
  %70 = call i128 @__asm_pshufd(i128 %69, i8 -24), !insn.addr !273
  %71 = call i128 @__asm_pshufd(i128 %66, i8 -11), !insn.addr !274
  %72 = call i128 @__asm_pmuludq(i128 %71, i128 %60), !insn.addr !275
  %73 = call i128 @__asm_pshufd(i128 %72, i8 -24), !insn.addr !276
  %74 = call i128 @__asm_punpckldq(i128 %70, i128 %73), !insn.addr !277
  %75 = call i128 @__asm_pmuludq(i128 %64, i128 %68), !insn.addr !278
  %76 = call i128 @__asm_pshufd(i128 %75, i8 -24), !insn.addr !279
  %77 = call i128 @__asm_pshufd(i128 %68, i8 -11), !insn.addr !280
  %78 = call i128 @__asm_pmuludq(i128 %77, i128 %63), !insn.addr !281
  %79 = call i128 @__asm_pshufd(i128 %78, i8 -24), !insn.addr !282
  %80 = call i128 @__asm_punpckldq(i128 %76, i128 %79), !insn.addr !283
  %81 = call i128 @__asm_paddd(i128 %xmm0.0.reload, i128 %32), !insn.addr !284
  %82 = add i32 %rdx.0.in.reload, -4, !insn.addr !285
  %83 = icmp eq i32 %82, 0, !insn.addr !285
  %84 = icmp eq i1 %83, false, !insn.addr !286
  store i128 %81, i128* %xmm0.0.reg2mem, !insn.addr !286
  store i128 %74, i128* %xmm1.0.reg2mem, !insn.addr !286
  store i128 %80, i128* %xmm4.0.reg2mem, !insn.addr !286
  store i32 %82, i32* %rdx.0.in.reg2mem, !insn.addr !286
  store i128 %81, i128* %xmm0.1.reg2mem, !insn.addr !286
  store i128 %74, i128* %xmm1.1.reg2mem, !insn.addr !286
  store i128 %80, i128* %xmm4.1.reg2mem, !insn.addr !286
  br i1 %84, label %dec_label_pc_15f0, label %dec_label_pc_16d1, !insn.addr !286

dec_label_pc_16d1:                                ; preds = %dec_label_pc_15f0, %dec_label_pc_1571
  %85 = urem i32 %7, 4, !insn.addr !287
  %xmm4.1.reload = load i128, i128* %xmm4.1.reg2mem
  %xmm1.1.reload = load i128, i128* %xmm1.1.reg2mem
  %86 = call i128 @__asm_movdqa(i128 %xmm1.1.reload), !insn.addr !288
  %87 = call i128 @__asm_movdqa(i128 %xmm4.1.reload), !insn.addr !289
  %88 = icmp eq i32 %85, 0, !insn.addr !290
  store i128 %86, i128* %xmm5.0.reg2mem, !insn.addr !291
  store i128 %87, i128* %xmm6.0.reg2mem, !insn.addr !291
  br i1 %88, label %dec_label_pc_174d, label %dec_label_pc_16dd, !insn.addr !291

dec_label_pc_16dd:                                ; preds = %dec_label_pc_16d1
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %89 = load i128, i128* @global_var_3150, align 8, !insn.addr !292
  %90 = call i128 @__asm_movdqa(i128 %89), !insn.addr !292
  %91 = load i128, i128* @global_var_3170, align 8, !insn.addr !293
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !293
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !294
  store i128 %xmm1.1.reload, i128* %xmm1.2.reg2mem, !insn.addr !294
  store i128 %xmm4.1.reload, i128* %xmm4.2.reg2mem, !insn.addr !294
  store i32 %85, i32* %rax.0.in.reg2mem, !insn.addr !294
  br label %dec_label_pc_16f0, !insn.addr !294

dec_label_pc_16f0:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_16dd
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %xmm4.2.reload = load i128, i128* %xmm4.2.reg2mem
  %xmm1.2.reload = load i128, i128* %xmm1.2.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %93 = call i128 @__asm_movdqa(i128 %xmm0.2.reload), !insn.addr !295
  %94 = call i128 @__asm_paddd(i128 %93, i128 %90), !insn.addr !296
  %95 = call i128 @__asm_movdqa(i128 %xmm0.2.reload), !insn.addr !297
  %96 = call i128 @__asm_pmuludq(i128 %95, i128 %xmm1.2.reload), !insn.addr !298
  %97 = call i128 @__asm_pshufd(i128 %96, i8 -24), !insn.addr !299
  %98 = call i128 @__asm_pshufd(i128 %xmm1.2.reload, i8 -11), !insn.addr !300
  %99 = call i128 @__asm_pshufd(i128 %xmm0.2.reload, i8 -11), !insn.addr !301
  %100 = call i128 @__asm_pmuludq(i128 %99, i128 %98), !insn.addr !302
  %101 = call i128 @__asm_pshufd(i128 %100, i8 -24), !insn.addr !303
  %102 = call i128 @__asm_punpckldq(i128 %97, i128 %101), !insn.addr !304
  %103 = call i128 @__asm_pshufd(i128 %94, i8 -11), !insn.addr !305
  %104 = call i128 @__asm_pmuludq(i128 %94, i128 %xmm4.2.reload), !insn.addr !306
  %105 = call i128 @__asm_pshufd(i128 %104, i8 -24), !insn.addr !307
  %106 = call i128 @__asm_pshufd(i128 %xmm4.2.reload, i8 -11), !insn.addr !308
  %107 = call i128 @__asm_pmuludq(i128 %106, i128 %103), !insn.addr !309
  %108 = call i128 @__asm_pshufd(i128 %107, i8 -24), !insn.addr !310
  %109 = call i128 @__asm_punpckldq(i128 %105, i128 %108), !insn.addr !311
  %110 = call i128 @__asm_paddd(i128 %xmm0.2.reload, i128 %92), !insn.addr !312
  %111 = call i128 @__asm_movdqa(i128 %102), !insn.addr !313
  %112 = call i128 @__asm_movdqa(i128 %109), !insn.addr !314
  %113 = add i32 %rax.0.in.reload, -1, !insn.addr !315
  %114 = icmp eq i32 %113, 0, !insn.addr !315
  %115 = icmp eq i1 %114, false, !insn.addr !316
  store i128 %110, i128* %xmm0.2.reg2mem, !insn.addr !316
  store i128 %111, i128* %xmm1.2.reg2mem, !insn.addr !316
  store i128 %112, i128* %xmm4.2.reg2mem, !insn.addr !316
  store i32 %113, i32* %rax.0.in.reg2mem, !insn.addr !316
  store i128 %102, i128* %xmm5.0.reg2mem, !insn.addr !316
  store i128 %109, i128* %xmm6.0.reg2mem, !insn.addr !316
  br i1 %115, label %dec_label_pc_16f0, label %dec_label_pc_174d, !insn.addr !316

dec_label_pc_174d:                                ; preds = %dec_label_pc_16f0, %dec_label_pc_16d1
  %xmm6.0.reload = load i128, i128* %xmm6.0.reg2mem
  %xmm5.0.reload = load i128, i128* %xmm5.0.reg2mem
  %116 = call i128 @__asm_pshufd(i128 %xmm5.0.reload, i8 -11), !insn.addr !317
  %117 = call i128 @__asm_pshufd(i128 %xmm6.0.reload, i8 -11), !insn.addr !318
  %118 = call i128 @__asm_pmuludq(i128 %117, i128 %116), !insn.addr !319
  %119 = call i128 @__asm_pmuludq(i128 %xmm6.0.reload, i128 %xmm5.0.reload), !insn.addr !320
  %120 = call i128 @__asm_pshufd(i128 %119, i8 -18), !insn.addr !321
  %121 = call i128 @__asm_pmuludq(i128 %120, i128 %119), !insn.addr !322
  %122 = call i128 @__asm_pshufd(i128 %118, i8 -86), !insn.addr !323
  %123 = call i128 @__asm_pmuludq(i128 %122, i128 %118), !insn.addr !324
  %124 = call i128 @__asm_pmuludq(i128 %123, i128 %121), !insn.addr !325
  %125 = call i32 @__asm_movd(i128 %124), !insn.addr !326
  %126 = sext i32 %125 to i64, !insn.addr !326
  %127 = icmp eq i32 %4, %0, !insn.addr !327
  store i64 %126, i64* %merge.reg2mem, !insn.addr !328
  br i1 %127, label %dec_label_pc_158a, label %dec_label_pc_177d, !insn.addr !328

dec_label_pc_177d:                                ; preds = %dec_label_pc_174d
  %128 = or i64 %3, 1, !insn.addr !329
  store i64 %126, i64* %rax.1.reg2mem, !insn.addr !329
  store i64 %128, i64* %rcx.0.reg2mem, !insn.addr !329
  br label %dec_label_pc_1780, !insn.addr !329

dec_label_pc_1780:                                ; preds = %dec_label_pc_177d, %dec_label_pc_1544
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %129 = add i32 %0, 1, !insn.addr !330
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !331
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !331
  br label %dec_label_pc_1790, !insn.addr !331

dec_label_pc_1790:                                ; preds = %dec_label_pc_1790, %dec_label_pc_1780
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %sext = mul i64 %rax.2.reload, 4294967296
  %130 = ashr exact i64 %sext, 32, !insn.addr !332
  %sext1 = mul i64 %rcx.1.reload, 4294967296
  %131 = ashr exact i64 %sext1, 32, !insn.addr !332
  %132 = mul nsw i64 %131, %130, !insn.addr !332
  %133 = and i64 %132, 4294967295, !insn.addr !332
  %134 = add nsw i64 %rcx.1.reload, 1, !insn.addr !333
  %135 = and i64 %134, 4294967295, !insn.addr !333
  %136 = trunc i64 %134 to i32, !insn.addr !330
  %137 = icmp eq i32 %129, %136, !insn.addr !330
  %138 = icmp eq i1 %137, false, !insn.addr !334
  store i64 %133, i64* %merge.reg2mem, !insn.addr !334
  store i64 %133, i64* %rax.2.reg2mem, !insn.addr !334
  store i64 %135, i64* %rcx.1.reg2mem, !insn.addr !334
  br i1 %138, label %dec_label_pc_1790, label %dec_label_pc_158a, !insn.addr !334

; uselistorder directives
  uselistorder i128 %119, { 1, 0 }
  uselistorder i128 %118, { 1, 0 }
  uselistorder i128 %94, { 1, 0 }
  uselistorder i128 %xmm0.2.reload, { 3, 2, 0, 1 }
  uselistorder i128 %68, { 1, 0 }
  uselistorder i128 %66, { 1, 0 }
  uselistorder i128 %58, { 1, 0 }
  uselistorder i128 %56, { 1, 0 }
  uselistorder i128 %48, { 1, 0 }
  uselistorder i128 %46, { 1, 0 }
  uselistorder i128 %36, { 1, 0 }
  uselistorder i128 %xmm0.0.reload, { 9, 7, 8, 5, 6, 3, 4, 2, 0, 1 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 2, 3 }
  uselistorder i64* %merge.reg2mem, { 1, 2, 0, 3 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rdx.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm4.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rcx.1.reg2mem, { 1, 0, 2 }
  uselistorder i128* @global_var_3150, { 3, 2, 0, 1 }
  uselistorder i128* @global_var_3190, { 1, 0 }
  uselistorder i128* @global_var_3180, { 1, 0 }
  uselistorder i128* @global_var_3170, { 2, 1, 0 }
  uselistorder i128* @global_var_3140, { 3, 2, 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_17a0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !335
  %1 = trunc i64 %arg2 to i32, !insn.addr !335
  %2 = sub i32 %0, %1, !insn.addr !335
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !335
  %5 = xor i32 %2, %0, !insn.addr !335
  %6 = and i32 %5, %4, !insn.addr !335
  %7 = icmp slt i32 %6, 0, !insn.addr !335
  %8 = icmp eq i32 %2, 0, !insn.addr !335
  %9 = icmp slt i32 %2, 0, !insn.addr !335
  %10 = icmp eq i1 %9, %7, !insn.addr !336
  %11 = icmp eq i1 %8, false, !insn.addr !336
  %12 = icmp eq i1 %10, %11, !insn.addr !336
  %.v = select i1 %12, i64 %arg1, i64 %arg2
  %13 = and i64 %.v, 4294967295, !insn.addr !336
  ret i64 %13, !insn.addr !337

; uselistorder directives
  uselistorder i32 %2, { 1, 2, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_17b0:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_37e5 to i8*)), !insn.addr !338
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3290, i64 0, i64 0), i64 21), !insn.addr !339
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_32af, i64 0, i64 0), i64 20), !insn.addr !340
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_32af, i64 0, i64 0), i64 4294967291), !insn.addr !341
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_32c9, i64 0, i64 0), i64 1), !insn.addr !342
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_32c9, i64 0, i64 0), i64 0), !insn.addr !343
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_32e1, i64 0, i64 0), i64 15), !insn.addr !344
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_32e1, i64 0, i64 0), i64 10), !insn.addr !345
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_32e1, i64 0, i64 0), i64 0), !insn.addr !346
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_32fd, i64 0, i64 0), i64 5), !insn.addr !347
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_331c, i64 0, i64 0), i64 20), !insn.addr !348
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_333c, i64 0, i64 0), i64 400), !insn.addr !349
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_335b, i64 0, i64 0), i64 50), !insn.addr !350
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3378, i64 0, i64 0), i64 70), !insn.addr !351
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3395, i64 0, i64 0), i64 0), !insn.addr !352
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_33b4, i64 0, i64 0), i64 21), !insn.addr !353
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_33d7, i64 0, i64 0), i64 45), !insn.addr !354
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_33f6, i64 0, i64 0), i64 5), !insn.addr !355
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3411, i64 0, i64 0), i64 4), !insn.addr !356
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_342e, i64 0, i64 0), i64 12), !insn.addr !357
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_344a, i64 0, i64 0), i64 2), !insn.addr !358
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_344a, i64 0, i64 0), i64 4294967295), !insn.addr !359
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3465, i64 0, i64 0), i64 25), !insn.addr !360
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3483, i64 0, i64 0), i64 50), !insn.addr !361
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3483, i64 0, i64 0), i64 4294967290), !insn.addr !362
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34a0, i64 0, i64 0), i64 120), !insn.addr !363
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_34be, i64 0, i64 0), i64 10), !insn.addr !364
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_34be, i64 0, i64 0), i64 8), !insn.addr !365
  %28 = sext i32 %27 to i64, !insn.addr !365
  ret i64 %28, !insn.addr !365
}

define i64 @loop_multi_exit(i64 %arg1) local_unnamed_addr {
dec_label_pc_19b0:
  %rax.0.reg2mem = alloca i64, !insn.addr !366
  %0 = add i64 %arg1, 4294967295, !insn.addr !366
  %1 = trunc i64 %0 to i32, !insn.addr !367
  %2 = icmp ult i32 %1, 12
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !368
  br i1 %2, label %dec_label_pc_19bd, label %dec_label_pc_19d4, !insn.addr !368

dec_label_pc_19bd:                                ; preds = %dec_label_pc_19b0
  %sext = mul i64 %0, 4294967296
  %3 = ashr exact i64 %sext, 30, !insn.addr !369
  %4 = add i64 %3, ptrtoint (i32** @global_var_3108 to i64), !insn.addr !369
  %5 = inttoptr i64 %4 to i32*, !insn.addr !369
  %6 = load i32, i32* %5, align 4, !insn.addr !369
  %7 = add i64 %3, ptrtoint (i32** @global_var_30d8 to i64), !insn.addr !370
  %8 = inttoptr i64 %7 to i32*, !insn.addr !370
  %9 = load i32, i32* %8, align 4, !insn.addr !370
  %10 = add i32 %9, %6, !insn.addr !370
  %11 = zext i32 %10 to i64, !insn.addr !370
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !370
  br label %dec_label_pc_19d4, !insn.addr !370

dec_label_pc_19d4:                                ; preds = %dec_label_pc_19b0, %dec_label_pc_19bd
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !371

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19d4, { 1, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_19e0:
  %rax.02.reg2mem = alloca i64, !insn.addr !372
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !373
  br i1 %1, label %dec_label_pc_1a16, label %dec_label_pc_19f0.preheader, !insn.addr !374

dec_label_pc_19f0.preheader:                      ; preds = %dec_label_pc_19e0
  store i64 0, i64* %rax.02.reg2mem, !insn.addr !375
  br i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), label %dec_label_pc_1a17, label %dec_label_pc_1a0c, !insn.addr !375

dec_label_pc_1a0c:                                ; preds = %dec_label_pc_19f0.preheader, %dec_label_pc_1a0c
  %rax.02.reload = load i64, i64* %rax.02.reg2mem
  %2 = add nuw nsw i64 %rax.02.reload, 4, !insn.addr !376
  %3 = and i64 %2, 4294967295, !insn.addr !376
  %4 = trunc i64 %2 to i32, !insn.addr !377
  %5 = icmp eq i32 %4, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !377
  store i64 %3, i64* %rax.02.reg2mem, !insn.addr !375
  br i1 %5, label %dec_label_pc_1a17, label %dec_label_pc_1a0c, !insn.addr !375

dec_label_pc_1a16:                                ; preds = %dec_label_pc_19e0
  ret i64 0, !insn.addr !378

dec_label_pc_1a17:                                ; preds = %dec_label_pc_1a0c, %dec_label_pc_19f0.preheader
  %6 = inttoptr i64 %arg1 to i32*, !insn.addr !379
  store i32 1, i32* %6, align 4, !insn.addr !379
  ret i64 ptrtoint (i32* @global_var_3e9 to i64), !insn.addr !380

; uselistorder directives
  uselistorder i64* %rax.02.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a0c, { 1, 0 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a30:
  %rax.0.reg2mem = alloca i64, !insn.addr !381
  %0 = trunc i64 %arg1 to i32, !insn.addr !381
  %1 = icmp slt i32 %0, 0, !insn.addr !381
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !382
  br i1 %1, label %dec_label_pc_1a4d, label %dec_label_pc_1a34, !insn.addr !382

dec_label_pc_1a34:                                ; preds = %dec_label_pc_1a30
  %2 = icmp ult i32 %0, 51
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !383
  br i1 %2, label %dec_label_pc_1a3e, label %dec_label_pc_1a4d, !insn.addr !383

dec_label_pc_1a3e:                                ; preds = %dec_label_pc_1a34
  %3 = mul i64 %arg1, 2, !insn.addr !384
  %4 = add i64 %arg1, 1, !insn.addr !385
  %5 = urem i64 %arg1, 2
  %6 = icmp eq i64 %5, 0, !insn.addr !386
  %7 = select i1 %6, i64 %3, i64 %4, !insn.addr !387
  %8 = and i64 %7, 4294967295, !insn.addr !387
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_1a4d, !insn.addr !387

dec_label_pc_1a4d:                                ; preds = %dec_label_pc_1a30, %dec_label_pc_1a34, %dec_label_pc_1a3e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !388

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1a4d, { 2, 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a60:
  %0 = mul i64 %arg1, 2, !insn.addr !389
  %1 = sub i64 0, %arg1, !insn.addr !390
  %2 = trunc i64 %arg1 to i32, !insn.addr !391
  %3 = icmp eq i32 %2, 0, !insn.addr !391
  %4 = icmp slt i32 %2, 0, !insn.addr !391
  %5 = icmp eq i1 %4, false, !insn.addr !392
  %6 = icmp eq i1 %3, false, !insn.addr !392
  %7 = icmp eq i1 %5, %6, !insn.addr !392
  %8 = select i1 %7, i64 %0, i64 %1, !insn.addr !392
  %9 = and i64 %8, 4294967295, !insn.addr !392
  ret i64 %9, !insn.addr !393

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @duffs_device(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a70:
  %0 = trunc i64 %arg3 to i32, !insn.addr !394
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1b04, label %dec_label_pc_1a7d, !insn.addr !395

dec_label_pc_1a7d:                                ; preds = %dec_label_pc_1a70
  %2 = add i64 %arg3, 7, !insn.addr !396
  %3 = udiv i64 %2, 8, !insn.addr !397
  %4 = urem i64 %3, 536870912, !insn.addr !397
  ret i64 %4, !insn.addr !398

dec_label_pc_1b04:                                ; preds = %dec_label_pc_1a70
  ret i64 4294967295, !insn.addr !399
}

define i64 @loop_complex_cond(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1b10:
  %rdi.0.reg2mem = alloca i64, !insn.addr !400
  %rdx.0.reg2mem = alloca i64, !insn.addr !400
  %rax.0.reg2mem = alloca i64, !insn.addr !400
  %0 = trunc i64 %arg1 to i32, !insn.addr !400
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !401
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !401
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !401
  br i1 %1, label %dec_label_pc_1b40, label %dec_label_pc_1b20, !insn.addr !401

dec_label_pc_1b20:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1b20
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rax.0.reload, 2, !insn.addr !402
  %3 = and i64 %2, 4294967295, !insn.addr !402
  %4 = add i64 %rdi.0.reload, 4294967295, !insn.addr !403
  %5 = and i64 %4, 4294967295, !insn.addr !403
  %6 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !404
  %7 = and i64 %6, 4294967295, !insn.addr !404
  %8 = trunc i64 %rdi.0.reload to i32, !insn.addr !405
  %9 = icmp ugt i32 %8, 1, !insn.addr !405
  %10 = icmp ult i64 %3, %5, !insn.addr !406
  %or.cond = icmp eq i1 %9, %10
  %11 = icmp ult i64 %rdx.0.reload, 9
  %or.cond2 = icmp eq i1 %11, %or.cond
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !407
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !407
  store i64 %5, i64* %rdi.0.reg2mem, !insn.addr !407
  br i1 %or.cond2, label %dec_label_pc_1b20, label %dec_label_pc_1b3b, !insn.addr !407

dec_label_pc_1b3b:                                ; preds = %dec_label_pc_1b20
  %12 = add nuw nsw i64 %6, %2, !insn.addr !408
  %13 = add i64 %12, %4, !insn.addr !409
  %14 = and i64 %13, 4294967295, !insn.addr !409
  ret i64 %14, !insn.addr !410

dec_label_pc_1b40:                                ; preds = %dec_label_pc_1b10
  %15 = and i64 %arg1, 4294967295, !insn.addr !411
  ret i64 %15, !insn.addr !412

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1b20, { 1, 0 }
}

define i64 @loop_modify_var(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1b50:
  %merge.reg2mem = alloca i64, !insn.addr !413
  %rcx.0.reg2mem = alloca i64, !insn.addr !413
  %rax.0.reg2mem = alloca i64, !insn.addr !413
  %0 = trunc i64 %arg1 to i32, !insn.addr !413
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !414
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !414
  store i64 0, i64* %merge.reg2mem, !insn.addr !414
  br i1 %1, label %dec_label_pc_1b74, label %dec_label_pc_1b60, !insn.addr !414

dec_label_pc_1b60:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b60
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rcx.0.reload, %rax.0.reload, !insn.addr !415
  %3 = and i64 %2, 4294967295, !insn.addr !415
  %4 = add nuw nsw i64 %rcx.0.reload, 2, !insn.addr !416
  %5 = trunc i64 %rcx.0.reload to i32, !insn.addr !417
  %6 = add i32 %5, -6, !insn.addr !417
  %7 = sub i32 5, %5
  %8 = and i32 %7, %5, !insn.addr !417
  %9 = icmp slt i32 %8, 0, !insn.addr !417
  %10 = icmp slt i32 %6, 0, !insn.addr !417
  %11 = icmp eq i1 %10, %9, !insn.addr !418
  %12 = select i1 %11, i64 %4, i64 %rcx.0.reload, !insn.addr !418
  %13 = add nuw nsw i64 %12, 1, !insn.addr !419
  %14 = and i64 %13, 4294967295, !insn.addr !419
  %15 = icmp slt i64 %14, %arg1, !insn.addr !420
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !420
  store i64 %14, i64* %rcx.0.reg2mem, !insn.addr !420
  store i64 %3, i64* %merge.reg2mem, !insn.addr !420
  br i1 %15, label %dec_label_pc_1b60, label %dec_label_pc_1b74, !insn.addr !420

dec_label_pc_1b74:                                ; preds = %dec_label_pc_1b60, %dec_label_pc_1b50
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !421

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 2, 0, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b60, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0
  %4 = icmp eq i1 %3, false, !insn.addr !422
  %spec.select = select i1 %4, i64 0, i64 101
  ret i64 %spec.select, !insn.addr !423
}

define i64 @recursion_factorial(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %rax.2.reg2mem = alloca i64, !insn.addr !424
  %rdi.0.reg2mem = alloca i64, !insn.addr !424
  %rax.1.reg2mem = alloca i64, !insn.addr !424
  %rdi.0.ph.reg2mem = alloca i64, !insn.addr !424
  %rax.1.ph.reg2mem = alloca i64, !insn.addr !424
  %xmm5.0.reg2mem = alloca i128, !insn.addr !424
  %xmm0.0.reg2mem = alloca i128, !insn.addr !424
  %rax.0.in.reg2mem = alloca i32, !insn.addr !424
  %xmm6.2.reg2mem = alloca i128, !insn.addr !424
  %xmm4.2.reg2mem = alloca i128, !insn.addr !424
  %xmm1.2.reg2mem = alloca i128, !insn.addr !424
  %xmm6.1.reg2mem = alloca i128, !insn.addr !424
  %xmm4.1.reg2mem = alloca i128, !insn.addr !424
  %xmm1.1.reg2mem = alloca i128, !insn.addr !424
  %rsi.0.in.reg2mem = alloca i32, !insn.addr !424
  %xmm6.0.reg2mem = alloca i128, !insn.addr !424
  %xmm4.0.reg2mem = alloca i128, !insn.addr !424
  %xmm1.0.reg2mem = alloca i128, !insn.addr !424
  %0 = trunc i64 %arg1 to i32, !insn.addr !425
  %1 = icmp slt i32 %0, 2, !insn.addr !425
  store i64 1, i64* %rax.2.reg2mem, !insn.addr !425
  br i1 %1, label %dec_label_pc_1e2d, label %dec_label_pc_1bce, !insn.addr !425

dec_label_pc_1bce:                                ; preds = %dec_label_pc_1bc0
  %.op = add i64 %arg1, 4294967295
  %2 = trunc i64 %.op to i32, !insn.addr !426
  %3 = icmp ult i32 %2, 8, !insn.addr !426
  store i64 1, i64* %rax.1.ph.reg2mem, !insn.addr !427
  store i64 %arg1, i64* %rdi.0.ph.reg2mem, !insn.addr !427
  br i1 %3, label %dec_label_pc_1e20.preheader, label %dec_label_pc_1be9, !insn.addr !427

dec_label_pc_1be9:                                ; preds = %dec_label_pc_1bce
  %4 = and i64 %.op, 4294967288, !insn.addr !428
  %5 = call i128 @__asm_movd.1(i32 %0), !insn.addr !429
  %6 = call i128 @__asm_pshufd(i128 %5, i8 0), !insn.addr !430
  %7 = load i128, i128* @global_var_31e0, align 8, !insn.addr !431
  %8 = call i128 @__asm_paddd(i128 %6, i128 %7), !insn.addr !431
  %9 = trunc i64 %4 to i32
  %10 = add i32 %9, -8, !insn.addr !432
  %11 = udiv i32 %10, 8, !insn.addr !433
  %12 = add nuw nsw i32 %11, 1, !insn.addr !434
  %13 = icmp ult i32 %10, 24, !insn.addr !435
  %14 = icmp eq i1 %13, false, !insn.addr !436
  br i1 %14, label %dec_label_pc_1c28, label %dec_label_pc_1c17, !insn.addr !436

dec_label_pc_1c17:                                ; preds = %dec_label_pc_1be9
  %15 = load i128, i128* @global_var_3160, align 8, !insn.addr !437
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !437
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !438
  store i128 %16, i128* %xmm1.1.reg2mem, !insn.addr !439
  store i128 %17, i128* %xmm4.1.reg2mem, !insn.addr !439
  store i128 %8, i128* %xmm6.1.reg2mem, !insn.addr !439
  br label %dec_label_pc_1d61, !insn.addr !439

dec_label_pc_1c28:                                ; preds = %dec_label_pc_1be9
  %18 = and i32 %12, 1073741820
  %19 = load i128, i128* @global_var_3160, align 8, !insn.addr !440
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !440
  %21 = load i128, i128* @global_var_3200, align 8, !insn.addr !441
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !441
  %23 = load i128, i128* @global_var_3210, align 8, !insn.addr !442
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !442
  %25 = load i128, i128* @global_var_3220, align 8, !insn.addr !443
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !443
  %27 = load i128, i128* @global_var_3230, align 8, !insn.addr !444
  %28 = call i128 @__asm_movdqa(i128 %27), !insn.addr !444
  %29 = load i128, i128* @global_var_3240, align 8, !insn.addr !445
  %30 = call i128 @__asm_movdqa(i128 %29), !insn.addr !445
  %31 = load i128, i128* @global_var_3250, align 8, !insn.addr !446
  %32 = call i128 @__asm_movdqa(i128 %31), !insn.addr !446
  %33 = load i128, i128* @global_var_3260, align 8, !insn.addr !447
  %34 = call i128 @__asm_movdqa(i128 %33), !insn.addr !447
  %35 = call i128 @__asm_movdqa(i128 %20), !insn.addr !448
  %36 = load i128, i128* @global_var_31f0, align 8
  store i128 %20, i128* %xmm1.0.reg2mem, !insn.addr !449
  store i128 %35, i128* %xmm4.0.reg2mem, !insn.addr !449
  store i128 %8, i128* %xmm6.0.reg2mem, !insn.addr !449
  store i32 %18, i32* %rsi.0.in.reg2mem, !insn.addr !449
  br label %dec_label_pc_1c80, !insn.addr !449

dec_label_pc_1c80:                                ; preds = %dec_label_pc_1c80, %dec_label_pc_1c28
  %rsi.0.in.reload = load i32, i32* %rsi.0.in.reg2mem
  %xmm6.0.reload = load i128, i128* %xmm6.0.reg2mem
  %xmm4.0.reload = load i128, i128* %xmm4.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %37 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !450
  %38 = call i128 @__asm_paddd(i128 %37, i128 %36), !insn.addr !451
  %39 = call i128 @__asm_pshufd(i128 %xmm1.0.reload, i8 -11), !insn.addr !452
  %40 = call i128 @__asm_pshufd(i128 %xmm6.0.reload, i8 -11), !insn.addr !453
  %41 = call i128 @__asm_pmuludq(i128 %40, i128 %39), !insn.addr !454
  %42 = call i128 @__asm_pmuludq(i128 %xmm1.0.reload, i128 %xmm6.0.reload), !insn.addr !455
  %43 = call i128 @__asm_pshufd(i128 %xmm4.0.reload, i8 -11), !insn.addr !456
  %44 = call i128 @__asm_pshufd(i128 %38, i8 -11), !insn.addr !457
  %45 = call i128 @__asm_pmuludq(i128 %44, i128 %43), !insn.addr !458
  %46 = call i128 @__asm_pmuludq(i128 %38, i128 %xmm4.0.reload), !insn.addr !459
  %47 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !460
  %48 = call i128 @__asm_paddd(i128 %47, i128 %22), !insn.addr !461
  %49 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !462
  %50 = call i128 @__asm_paddd(i128 %49, i128 %24), !insn.addr !463
  %51 = call i128 @__asm_pmuludq(i128 %42, i128 %48), !insn.addr !464
  %52 = call i128 @__asm_pshufd(i128 %48, i8 -11), !insn.addr !465
  %53 = call i128 @__asm_pmuludq(i128 %52, i128 %41), !insn.addr !466
  %54 = call i128 @__asm_pmuludq(i128 %46, i128 %50), !insn.addr !467
  %55 = call i128 @__asm_pshufd(i128 %50, i8 -11), !insn.addr !468
  %56 = call i128 @__asm_pmuludq(i128 %55, i128 %45), !insn.addr !469
  %57 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !470
  %58 = call i128 @__asm_paddd(i128 %57, i128 %26), !insn.addr !471
  %59 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !472
  %60 = call i128 @__asm_paddd(i128 %59, i128 %28), !insn.addr !473
  %61 = call i128 @__asm_pshufd(i128 %58, i8 -11), !insn.addr !474
  %62 = call i128 @__asm_pmuludq(i128 %61, i128 %53), !insn.addr !475
  %63 = call i128 @__asm_pmuludq(i128 %58, i128 %51), !insn.addr !476
  %64 = call i128 @__asm_pshufd(i128 %60, i8 -11), !insn.addr !477
  %65 = call i128 @__asm_pmuludq(i128 %64, i128 %56), !insn.addr !478
  %66 = call i128 @__asm_pmuludq(i128 %60, i128 %54), !insn.addr !479
  %67 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !480
  %68 = call i128 @__asm_paddd(i128 %67, i128 %30), !insn.addr !481
  %69 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !482
  %70 = call i128 @__asm_paddd(i128 %69, i128 %32), !insn.addr !483
  %71 = call i128 @__asm_pmuludq(i128 %63, i128 %68), !insn.addr !484
  %72 = call i128 @__asm_pshufd(i128 %71, i8 -24), !insn.addr !485
  %73 = call i128 @__asm_pshufd(i128 %68, i8 -11), !insn.addr !486
  %74 = call i128 @__asm_pmuludq(i128 %73, i128 %62), !insn.addr !487
  %75 = call i128 @__asm_pshufd(i128 %74, i8 -24), !insn.addr !488
  %76 = call i128 @__asm_punpckldq(i128 %72, i128 %75), !insn.addr !489
  %77 = call i128 @__asm_pmuludq(i128 %66, i128 %70), !insn.addr !490
  %78 = call i128 @__asm_pshufd(i128 %77, i8 -24), !insn.addr !491
  %79 = call i128 @__asm_pshufd(i128 %70, i8 -11), !insn.addr !492
  %80 = call i128 @__asm_pmuludq(i128 %79, i128 %65), !insn.addr !493
  %81 = call i128 @__asm_pshufd(i128 %80, i8 -24), !insn.addr !494
  %82 = call i128 @__asm_punpckldq(i128 %78, i128 %81), !insn.addr !495
  %83 = call i128 @__asm_paddd(i128 %xmm6.0.reload, i128 %34), !insn.addr !496
  %84 = add i32 %rsi.0.in.reload, -4, !insn.addr !497
  %85 = icmp eq i32 %84, 0, !insn.addr !497
  %86 = icmp eq i1 %85, false, !insn.addr !498
  store i128 %76, i128* %xmm1.0.reg2mem, !insn.addr !498
  store i128 %82, i128* %xmm4.0.reg2mem, !insn.addr !498
  store i128 %83, i128* %xmm6.0.reg2mem, !insn.addr !498
  store i32 %84, i32* %rsi.0.in.reg2mem, !insn.addr !498
  store i128 %76, i128* %xmm1.1.reg2mem, !insn.addr !498
  store i128 %82, i128* %xmm4.1.reg2mem, !insn.addr !498
  store i128 %83, i128* %xmm6.1.reg2mem, !insn.addr !498
  br i1 %86, label %dec_label_pc_1c80, label %dec_label_pc_1d61, !insn.addr !498

dec_label_pc_1d61:                                ; preds = %dec_label_pc_1c80, %dec_label_pc_1c17
  %87 = urem i32 %12, 4, !insn.addr !499
  %xmm4.1.reload = load i128, i128* %xmm4.1.reg2mem
  %xmm1.1.reload = load i128, i128* %xmm1.1.reg2mem
  %88 = call i128 @__asm_movdqa(i128 %xmm1.1.reload), !insn.addr !500
  %89 = call i128 @__asm_movdqa(i128 %xmm4.1.reload), !insn.addr !501
  %90 = icmp eq i32 %87, 0, !insn.addr !502
  store i128 %89, i128* %xmm0.0.reg2mem, !insn.addr !503
  store i128 %88, i128* %xmm5.0.reg2mem, !insn.addr !503
  br i1 %90, label %dec_label_pc_1ddd, label %dec_label_pc_1d6d, !insn.addr !503

dec_label_pc_1d6d:                                ; preds = %dec_label_pc_1d61
  %xmm6.1.reload = load i128, i128* %xmm6.1.reg2mem
  %91 = load i128, i128* @global_var_31f0, align 8, !insn.addr !504
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !504
  %93 = load i128, i128* @global_var_3200, align 8, !insn.addr !505
  %94 = call i128 @__asm_movdqa(i128 %93), !insn.addr !505
  store i128 %xmm1.1.reload, i128* %xmm1.2.reg2mem, !insn.addr !506
  store i128 %xmm4.1.reload, i128* %xmm4.2.reg2mem, !insn.addr !506
  store i128 %xmm6.1.reload, i128* %xmm6.2.reg2mem, !insn.addr !506
  store i32 %87, i32* %rax.0.in.reg2mem, !insn.addr !506
  br label %dec_label_pc_1d80, !insn.addr !506

dec_label_pc_1d80:                                ; preds = %dec_label_pc_1d80, %dec_label_pc_1d6d
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %xmm6.2.reload = load i128, i128* %xmm6.2.reg2mem
  %xmm4.2.reload = load i128, i128* %xmm4.2.reg2mem
  %xmm1.2.reload = load i128, i128* %xmm1.2.reg2mem
  %95 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !507
  %96 = call i128 @__asm_paddd(i128 %95, i128 %92), !insn.addr !508
  %97 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !509
  %98 = call i128 @__asm_pmuludq(i128 %97, i128 %xmm1.2.reload), !insn.addr !510
  %99 = call i128 @__asm_pshufd(i128 %98, i8 -24), !insn.addr !511
  %100 = call i128 @__asm_pshufd(i128 %xmm1.2.reload, i8 -11), !insn.addr !512
  %101 = call i128 @__asm_pshufd(i128 %xmm6.2.reload, i8 -11), !insn.addr !513
  %102 = call i128 @__asm_pmuludq(i128 %101, i128 %100), !insn.addr !514
  %103 = call i128 @__asm_pshufd(i128 %102, i8 -24), !insn.addr !515
  %104 = call i128 @__asm_punpckldq(i128 %99, i128 %103), !insn.addr !516
  %105 = call i128 @__asm_pshufd(i128 %96, i8 -11), !insn.addr !517
  %106 = call i128 @__asm_pmuludq(i128 %96, i128 %xmm4.2.reload), !insn.addr !518
  %107 = call i128 @__asm_pshufd(i128 %106, i8 -24), !insn.addr !519
  %108 = call i128 @__asm_pshufd(i128 %xmm4.2.reload, i8 -11), !insn.addr !520
  %109 = call i128 @__asm_pmuludq(i128 %108, i128 %105), !insn.addr !521
  %110 = call i128 @__asm_pshufd(i128 %109, i8 -24), !insn.addr !522
  %111 = call i128 @__asm_punpckldq(i128 %107, i128 %110), !insn.addr !523
  %112 = call i128 @__asm_paddd(i128 %xmm6.2.reload, i128 %94), !insn.addr !524
  %113 = call i128 @__asm_movdqa(i128 %104), !insn.addr !525
  %114 = call i128 @__asm_movdqa(i128 %111), !insn.addr !526
  %115 = add i32 %rax.0.in.reload, -1, !insn.addr !527
  %116 = icmp eq i32 %115, 0, !insn.addr !527
  %117 = icmp eq i1 %116, false, !insn.addr !528
  store i128 %113, i128* %xmm1.2.reg2mem, !insn.addr !528
  store i128 %114, i128* %xmm4.2.reg2mem, !insn.addr !528
  store i128 %112, i128* %xmm6.2.reg2mem, !insn.addr !528
  store i32 %115, i32* %rax.0.in.reg2mem, !insn.addr !528
  store i128 %111, i128* %xmm0.0.reg2mem, !insn.addr !528
  store i128 %104, i128* %xmm5.0.reg2mem, !insn.addr !528
  br i1 %117, label %dec_label_pc_1d80, label %dec_label_pc_1ddd, !insn.addr !528

dec_label_pc_1ddd:                                ; preds = %dec_label_pc_1d80, %dec_label_pc_1d61
  %xmm5.0.reload = load i128, i128* %xmm5.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %118 = call i128 @__asm_pshufd(i128 %xmm5.0.reload, i8 -11), !insn.addr !529
  %119 = call i128 @__asm_pshufd(i128 %xmm0.0.reload, i8 -11), !insn.addr !530
  %120 = call i128 @__asm_pmuludq(i128 %119, i128 %118), !insn.addr !531
  %121 = call i128 @__asm_pmuludq(i128 %xmm0.0.reload, i128 %xmm5.0.reload), !insn.addr !532
  %122 = call i128 @__asm_pshufd(i128 %121, i8 -18), !insn.addr !533
  %123 = call i128 @__asm_pmuludq(i128 %122, i128 %121), !insn.addr !534
  %124 = call i128 @__asm_pshufd(i128 %120, i8 -86), !insn.addr !535
  %125 = call i128 @__asm_pmuludq(i128 %124, i128 %120), !insn.addr !536
  %126 = call i128 @__asm_pmuludq(i128 %125, i128 %123), !insn.addr !537
  %127 = call i32 @__asm_movd(i128 %126), !insn.addr !538
  %128 = sext i32 %127 to i64, !insn.addr !538
  %129 = icmp eq i32 %2, %9, !insn.addr !539
  store i64 %128, i64* %rax.2.reg2mem, !insn.addr !540
  br i1 %129, label %dec_label_pc_1e2d, label %dec_label_pc_1e0e, !insn.addr !540

dec_label_pc_1e0e:                                ; preds = %dec_label_pc_1ddd
  %130 = sub i64 %arg1, %4, !insn.addr !541
  %131 = and i64 %130, 4294967295, !insn.addr !541
  store i64 %128, i64* %rax.1.ph.reg2mem, !insn.addr !542
  store i64 %131, i64* %rdi.0.ph.reg2mem, !insn.addr !542
  br label %dec_label_pc_1e20.preheader, !insn.addr !542

dec_label_pc_1e20.preheader:                      ; preds = %dec_label_pc_1bce, %dec_label_pc_1e0e
  %rdi.0.ph.reload = load i64, i64* %rdi.0.ph.reg2mem
  %rax.1.ph.reload = load i64, i64* %rax.1.ph.reg2mem
  store i64 %rax.1.ph.reload, i64* %rax.1.reg2mem
  store i64 %rdi.0.ph.reload, i64* %rdi.0.reg2mem
  br label %dec_label_pc_1e20

dec_label_pc_1e20:                                ; preds = %dec_label_pc_1e20.preheader, %dec_label_pc_1e20
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext = mul i64 %rax.1.reload, 4294967296
  %132 = ashr exact i64 %sext, 32, !insn.addr !543
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %133 = ashr exact i64 %sext1, 32, !insn.addr !543
  %134 = mul nsw i64 %133, %132, !insn.addr !543
  %135 = and i64 %134, 4294967295, !insn.addr !543
  %136 = add i64 %rdi.0.reload, 4294967295, !insn.addr !544
  %137 = trunc i64 %rdi.0.reload to i32, !insn.addr !545
  %138 = and i64 %136, 4294967295, !insn.addr !546
  %139 = icmp ult i32 %137, 3
  store i64 %135, i64* %rax.1.reg2mem, !insn.addr !547
  store i64 %138, i64* %rdi.0.reg2mem, !insn.addr !547
  store i64 %135, i64* %rax.2.reg2mem, !insn.addr !547
  br i1 %139, label %dec_label_pc_1e2d, label %dec_label_pc_1e20, !insn.addr !547

dec_label_pc_1e2d:                                ; preds = %dec_label_pc_1e20, %dec_label_pc_1ddd, %dec_label_pc_1bc0
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !548

; uselistorder directives
  uselistorder i64 %rdi.0.reload, { 1, 0, 2 }
  uselistorder i64 %128, { 1, 0 }
  uselistorder i128 %121, { 1, 0 }
  uselistorder i128 %120, { 1, 0 }
  uselistorder i128 %96, { 1, 0 }
  uselistorder i128 %xmm6.2.reload, { 3, 2, 0, 1 }
  uselistorder i128 %70, { 1, 0 }
  uselistorder i128 %68, { 1, 0 }
  uselistorder i128 %60, { 1, 0 }
  uselistorder i128 %58, { 1, 0 }
  uselistorder i128 %50, { 1, 0 }
  uselistorder i128 %48, { 1, 0 }
  uselistorder i128 %38, { 1, 0 }
  uselistorder i128 %xmm6.0.reload, { 9, 7, 8, 5, 6, 3, 4, 2, 0, 1 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i128 %8, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i128* %xmm1.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm4.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm6.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rsi.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm1.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm4.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm6.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.ph.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdi.0.ph.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i64 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_1e20, { 1, 0 }
  uselistorder label %dec_label_pc_1e20.preheader, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e30:
  %rax.2.reg2mem = alloca i64, !insn.addr !549
  %rdi.0.reg2mem = alloca i64, !insn.addr !549
  %rax.1.reg2mem = alloca i64, !insn.addr !549
  %rdi.0.ph.reg2mem = alloca i64, !insn.addr !549
  %rax.1.ph.reg2mem = alloca i64, !insn.addr !549
  %xmm2.3.reg2mem = alloca i128, !insn.addr !549
  %xmm0.3.reg2mem = alloca i128, !insn.addr !549
  %rax.0.in.reg2mem = alloca i32, !insn.addr !549
  %xmm6.2.reg2mem = alloca i128, !insn.addr !549
  %xmm2.2.reg2mem = alloca i128, !insn.addr !549
  %xmm0.2.reg2mem = alloca i128, !insn.addr !549
  %xmm6.1.reg2mem = alloca i128, !insn.addr !549
  %xmm2.1.reg2mem = alloca i128, !insn.addr !549
  %xmm0.1.reg2mem = alloca i128, !insn.addr !549
  %rsi.0.in.reg2mem = alloca i32, !insn.addr !549
  %xmm6.0.reg2mem = alloca i128, !insn.addr !549
  %xmm2.0.reg2mem = alloca i128, !insn.addr !549
  %xmm0.0.reg2mem = alloca i128, !insn.addr !549
  %0 = and i64 %arg2, 4294967295, !insn.addr !549
  %1 = trunc i64 %arg1 to i32, !insn.addr !550
  %2 = icmp slt i32 %1, 2, !insn.addr !550
  store i64 %0, i64* %rax.2.reg2mem, !insn.addr !550
  br i1 %2, label %dec_label_pc_208d, label %dec_label_pc_1e3b, !insn.addr !550

dec_label_pc_1e3b:                                ; preds = %dec_label_pc_1e30
  %.op = add i64 %arg1, 4294967295
  %3 = trunc i64 %.op to i32, !insn.addr !551
  %4 = icmp ult i32 %3, 8, !insn.addr !551
  store i64 %0, i64* %rax.1.ph.reg2mem, !insn.addr !552
  store i64 %arg1, i64* %rdi.0.ph.reg2mem, !insn.addr !552
  br i1 %4, label %dec_label_pc_2080.preheader, label %dec_label_pc_1e51, !insn.addr !552

dec_label_pc_1e51:                                ; preds = %dec_label_pc_1e3b
  %5 = and i64 %.op, 4294967288, !insn.addr !553
  %6 = trunc i64 %arg2 to i32, !insn.addr !554
  %7 = call i128 @__asm_movd.1(i32 %6), !insn.addr !554
  %8 = load i128, i128* @global_var_3270, align 8, !insn.addr !555
  %9 = call i128 @__asm_movaps(i128 %8), !insn.addr !555
  %10 = call i128 @__asm_movss(i128 %9, i128 %7), !insn.addr !556
  %11 = call i128 @__asm_movd.1(i32 %1), !insn.addr !557
  %12 = call i128 @__asm_pshufd(i128 %11, i8 0), !insn.addr !558
  %13 = load i128, i128* @global_var_31e0, align 8, !insn.addr !559
  %14 = call i128 @__asm_paddd(i128 %12, i128 %13), !insn.addr !559
  %15 = trunc i64 %5 to i32
  %16 = add i32 %15, -8, !insn.addr !560
  %17 = udiv i32 %16, 8, !insn.addr !561
  %18 = add nuw nsw i32 %17, 1, !insn.addr !562
  %19 = icmp ult i32 %16, 24, !insn.addr !563
  %20 = icmp eq i1 %19, false, !insn.addr !564
  br i1 %20, label %dec_label_pc_1e9b, label %dec_label_pc_1e8e, !insn.addr !564

dec_label_pc_1e8e:                                ; preds = %dec_label_pc_1e51
  %21 = load i128, i128* @global_var_3160, align 8, !insn.addr !565
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !565
  store i128 %10, i128* %xmm0.1.reg2mem, !insn.addr !566
  store i128 %22, i128* %xmm2.1.reg2mem, !insn.addr !566
  store i128 %14, i128* %xmm6.1.reg2mem, !insn.addr !566
  br label %dec_label_pc_1fd1, !insn.addr !566

dec_label_pc_1e9b:                                ; preds = %dec_label_pc_1e51
  %23 = and i32 %18, 1073741820
  %24 = load i128, i128* @global_var_3160, align 8, !insn.addr !567
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !567
  %26 = load i128, i128* @global_var_3200, align 8, !insn.addr !568
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !568
  %28 = load i128, i128* @global_var_3210, align 8, !insn.addr !569
  %29 = call i128 @__asm_movdqa(i128 %28), !insn.addr !569
  %30 = load i128, i128* @global_var_3220, align 8, !insn.addr !570
  %31 = call i128 @__asm_movdqa(i128 %30), !insn.addr !570
  %32 = load i128, i128* @global_var_3230, align 8, !insn.addr !571
  %33 = call i128 @__asm_movdqa(i128 %32), !insn.addr !571
  %34 = load i128, i128* @global_var_3240, align 8, !insn.addr !572
  %35 = call i128 @__asm_movdqa(i128 %34), !insn.addr !572
  %36 = load i128, i128* @global_var_3250, align 8, !insn.addr !573
  %37 = call i128 @__asm_movdqa(i128 %36), !insn.addr !573
  %38 = load i128, i128* @global_var_3260, align 8, !insn.addr !574
  %39 = call i128 @__asm_movdqa(i128 %38), !insn.addr !574
  %40 = load i128, i128* @global_var_31f0, align 8
  store i128 %10, i128* %xmm0.0.reg2mem, !insn.addr !575
  store i128 %25, i128* %xmm2.0.reg2mem, !insn.addr !575
  store i128 %14, i128* %xmm6.0.reg2mem, !insn.addr !575
  store i32 %23, i32* %rsi.0.in.reg2mem, !insn.addr !575
  br label %dec_label_pc_1ef0, !insn.addr !575

dec_label_pc_1ef0:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1e9b
  %rsi.0.in.reload = load i32, i32* %rsi.0.in.reg2mem
  %xmm6.0.reload = load i128, i128* %xmm6.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %41 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !576
  %42 = call i128 @__asm_paddd(i128 %41, i128 %40), !insn.addr !577
  %43 = call i128 @__asm_pshufd(i128 %xmm6.0.reload, i8 -11), !insn.addr !578
  %44 = call i128 @__asm_pshufd(i128 %xmm0.0.reload, i8 -11), !insn.addr !579
  %45 = call i128 @__asm_pmuludq(i128 %44, i128 %43), !insn.addr !580
  %46 = call i128 @__asm_pmuludq(i128 %xmm0.0.reload, i128 %xmm6.0.reload), !insn.addr !581
  %47 = call i128 @__asm_pshufd(i128 %xmm2.0.reload, i8 -11), !insn.addr !582
  %48 = call i128 @__asm_pshufd(i128 %42, i8 -11), !insn.addr !583
  %49 = call i128 @__asm_pmuludq(i128 %48, i128 %47), !insn.addr !584
  %50 = call i128 @__asm_pmuludq(i128 %42, i128 %xmm2.0.reload), !insn.addr !585
  %51 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !586
  %52 = call i128 @__asm_paddd(i128 %51, i128 %27), !insn.addr !587
  %53 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !588
  %54 = call i128 @__asm_paddd(i128 %53, i128 %29), !insn.addr !589
  %55 = call i128 @__asm_pmuludq(i128 %46, i128 %52), !insn.addr !590
  %56 = call i128 @__asm_pshufd(i128 %52, i8 -11), !insn.addr !591
  %57 = call i128 @__asm_pmuludq(i128 %56, i128 %45), !insn.addr !592
  %58 = call i128 @__asm_pmuludq(i128 %50, i128 %54), !insn.addr !593
  %59 = call i128 @__asm_pshufd(i128 %54, i8 -11), !insn.addr !594
  %60 = call i128 @__asm_pmuludq(i128 %59, i128 %49), !insn.addr !595
  %61 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !596
  %62 = call i128 @__asm_paddd(i128 %61, i128 %31), !insn.addr !597
  %63 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !598
  %64 = call i128 @__asm_paddd(i128 %63, i128 %33), !insn.addr !599
  %65 = call i128 @__asm_pshufd(i128 %62, i8 -11), !insn.addr !600
  %66 = call i128 @__asm_pmuludq(i128 %65, i128 %57), !insn.addr !601
  %67 = call i128 @__asm_pmuludq(i128 %62, i128 %55), !insn.addr !602
  %68 = call i128 @__asm_pshufd(i128 %64, i8 -11), !insn.addr !603
  %69 = call i128 @__asm_pmuludq(i128 %68, i128 %60), !insn.addr !604
  %70 = call i128 @__asm_pmuludq(i128 %64, i128 %58), !insn.addr !605
  %71 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !606
  %72 = call i128 @__asm_paddd(i128 %71, i128 %35), !insn.addr !607
  %73 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !608
  %74 = call i128 @__asm_paddd(i128 %73, i128 %37), !insn.addr !609
  %75 = call i128 @__asm_pmuludq(i128 %67, i128 %72), !insn.addr !610
  %76 = call i128 @__asm_pshufd(i128 %75, i8 -24), !insn.addr !611
  %77 = call i128 @__asm_pshufd(i128 %72, i8 -11), !insn.addr !612
  %78 = call i128 @__asm_pmuludq(i128 %77, i128 %66), !insn.addr !613
  %79 = call i128 @__asm_pshufd(i128 %78, i8 -24), !insn.addr !614
  %80 = call i128 @__asm_punpckldq(i128 %76, i128 %79), !insn.addr !615
  %81 = call i128 @__asm_pmuludq(i128 %70, i128 %74), !insn.addr !616
  %82 = call i128 @__asm_pshufd(i128 %81, i8 -24), !insn.addr !617
  %83 = call i128 @__asm_pshufd(i128 %74, i8 -11), !insn.addr !618
  %84 = call i128 @__asm_pmuludq(i128 %83, i128 %69), !insn.addr !619
  %85 = call i128 @__asm_pshufd(i128 %84, i8 -24), !insn.addr !620
  %86 = call i128 @__asm_punpckldq(i128 %82, i128 %85), !insn.addr !621
  %87 = call i128 @__asm_paddd(i128 %xmm6.0.reload, i128 %39), !insn.addr !622
  %88 = add i32 %rsi.0.in.reload, -4, !insn.addr !623
  %89 = icmp eq i32 %88, 0, !insn.addr !623
  %90 = icmp eq i1 %89, false, !insn.addr !624
  store i128 %80, i128* %xmm0.0.reg2mem, !insn.addr !624
  store i128 %86, i128* %xmm2.0.reg2mem, !insn.addr !624
  store i128 %87, i128* %xmm6.0.reg2mem, !insn.addr !624
  store i32 %88, i32* %rsi.0.in.reg2mem, !insn.addr !624
  store i128 %80, i128* %xmm0.1.reg2mem, !insn.addr !624
  store i128 %86, i128* %xmm2.1.reg2mem, !insn.addr !624
  store i128 %87, i128* %xmm6.1.reg2mem, !insn.addr !624
  br i1 %90, label %dec_label_pc_1ef0, label %dec_label_pc_1fd1, !insn.addr !624

dec_label_pc_1fd1:                                ; preds = %dec_label_pc_1ef0, %dec_label_pc_1e8e
  %91 = urem i32 %18, 4, !insn.addr !625
  %xmm2.1.reload = load i128, i128* %xmm2.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %92 = icmp eq i32 %91, 0, !insn.addr !626
  store i128 %xmm0.1.reload, i128* %xmm0.3.reg2mem, !insn.addr !627
  store i128 %xmm2.1.reload, i128* %xmm2.3.reg2mem, !insn.addr !627
  br i1 %92, label %dec_label_pc_2041, label %dec_label_pc_1fd5, !insn.addr !627

dec_label_pc_1fd5:                                ; preds = %dec_label_pc_1fd1
  %xmm6.1.reload = load i128, i128* %xmm6.1.reg2mem
  %93 = load i128, i128* @global_var_31f0, align 8, !insn.addr !628
  %94 = call i128 @__asm_movdqa(i128 %93), !insn.addr !628
  %95 = load i128, i128* @global_var_3200, align 8, !insn.addr !629
  %96 = call i128 @__asm_movdqa(i128 %95), !insn.addr !629
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !630
  store i128 %xmm2.1.reload, i128* %xmm2.2.reg2mem, !insn.addr !630
  store i128 %xmm6.1.reload, i128* %xmm6.2.reg2mem, !insn.addr !630
  store i32 %91, i32* %rax.0.in.reg2mem, !insn.addr !630
  br label %dec_label_pc_1ff0, !insn.addr !630

dec_label_pc_1ff0:                                ; preds = %dec_label_pc_1ff0, %dec_label_pc_1fd5
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %xmm6.2.reload = load i128, i128* %xmm6.2.reg2mem
  %xmm2.2.reload = load i128, i128* %xmm2.2.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %97 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !631
  %98 = call i128 @__asm_paddd(i128 %97, i128 %94), !insn.addr !632
  %99 = call i128 @__asm_pshufd(i128 %xmm0.2.reload, i8 -11), !insn.addr !633
  %100 = call i128 @__asm_pmuludq(i128 %xmm0.2.reload, i128 %xmm6.2.reload), !insn.addr !634
  %101 = call i128 @__asm_pshufd(i128 %100, i8 -24), !insn.addr !635
  %102 = call i128 @__asm_pshufd(i128 %xmm6.2.reload, i8 -11), !insn.addr !636
  %103 = call i128 @__asm_pmuludq(i128 %102, i128 %99), !insn.addr !637
  %104 = call i128 @__asm_pshufd(i128 %103, i8 -24), !insn.addr !638
  %105 = call i128 @__asm_punpckldq(i128 %101, i128 %104), !insn.addr !639
  %106 = call i128 @__asm_pshufd(i128 %xmm2.2.reload, i8 -11), !insn.addr !640
  %107 = call i128 @__asm_pmuludq(i128 %xmm2.2.reload, i128 %98), !insn.addr !641
  %108 = call i128 @__asm_pshufd(i128 %107, i8 -24), !insn.addr !642
  %109 = call i128 @__asm_pshufd(i128 %98, i8 -11), !insn.addr !643
  %110 = call i128 @__asm_pmuludq(i128 %109, i128 %106), !insn.addr !644
  %111 = call i128 @__asm_pshufd(i128 %110, i8 -24), !insn.addr !645
  %112 = call i128 @__asm_punpckldq(i128 %108, i128 %111), !insn.addr !646
  %113 = call i128 @__asm_paddd(i128 %xmm6.2.reload, i128 %96), !insn.addr !647
  %114 = add i32 %rax.0.in.reload, -1, !insn.addr !648
  %115 = icmp eq i32 %114, 0, !insn.addr !648
  %116 = icmp eq i1 %115, false, !insn.addr !649
  store i128 %105, i128* %xmm0.2.reg2mem, !insn.addr !649
  store i128 %112, i128* %xmm2.2.reg2mem, !insn.addr !649
  store i128 %113, i128* %xmm6.2.reg2mem, !insn.addr !649
  store i32 %114, i32* %rax.0.in.reg2mem, !insn.addr !649
  store i128 %105, i128* %xmm0.3.reg2mem, !insn.addr !649
  store i128 %112, i128* %xmm2.3.reg2mem, !insn.addr !649
  br i1 %116, label %dec_label_pc_1ff0, label %dec_label_pc_2041, !insn.addr !649

dec_label_pc_2041:                                ; preds = %dec_label_pc_1ff0, %dec_label_pc_1fd1
  %xmm2.3.reload = load i128, i128* %xmm2.3.reg2mem
  %xmm0.3.reload = load i128, i128* %xmm0.3.reg2mem
  %117 = call i128 @__asm_pshufd(i128 %xmm0.3.reload, i8 -11), !insn.addr !650
  %118 = call i128 @__asm_pshufd(i128 %xmm2.3.reload, i8 -11), !insn.addr !651
  %119 = call i128 @__asm_pmuludq(i128 %118, i128 %117), !insn.addr !652
  %120 = call i128 @__asm_pmuludq(i128 %xmm2.3.reload, i128 %xmm0.3.reload), !insn.addr !653
  %121 = call i128 @__asm_pshufd(i128 %120, i8 -18), !insn.addr !654
  %122 = call i128 @__asm_pmuludq(i128 %121, i128 %120), !insn.addr !655
  %123 = call i128 @__asm_pshufd(i128 %119, i8 -86), !insn.addr !656
  %124 = call i128 @__asm_pmuludq(i128 %123, i128 %119), !insn.addr !657
  %125 = call i128 @__asm_pmuludq(i128 %124, i128 %122), !insn.addr !658
  %126 = call i32 @__asm_movd(i128 %125), !insn.addr !659
  %127 = sext i32 %126 to i64, !insn.addr !659
  %128 = icmp eq i32 %3, %15, !insn.addr !660
  store i64 %127, i64* %rax.2.reg2mem, !insn.addr !661
  br i1 %128, label %dec_label_pc_208d, label %dec_label_pc_2072, !insn.addr !661

dec_label_pc_2072:                                ; preds = %dec_label_pc_2041
  %129 = sub i64 %arg1, %5, !insn.addr !662
  %130 = and i64 %129, 4294967295, !insn.addr !662
  store i64 %127, i64* %rax.1.ph.reg2mem, !insn.addr !663
  store i64 %130, i64* %rdi.0.ph.reg2mem, !insn.addr !663
  br label %dec_label_pc_2080.preheader, !insn.addr !663

dec_label_pc_2080.preheader:                      ; preds = %dec_label_pc_1e3b, %dec_label_pc_2072
  %rdi.0.ph.reload = load i64, i64* %rdi.0.ph.reg2mem
  %rax.1.ph.reload = load i64, i64* %rax.1.ph.reg2mem
  store i64 %rax.1.ph.reload, i64* %rax.1.reg2mem
  store i64 %rdi.0.ph.reload, i64* %rdi.0.reg2mem
  br label %dec_label_pc_2080

dec_label_pc_2080:                                ; preds = %dec_label_pc_2080.preheader, %dec_label_pc_2080
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext = mul i64 %rax.1.reload, 4294967296
  %131 = ashr exact i64 %sext, 32, !insn.addr !664
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %132 = ashr exact i64 %sext1, 32, !insn.addr !664
  %133 = mul nsw i64 %132, %131, !insn.addr !664
  %134 = and i64 %133, 4294967295, !insn.addr !664
  %135 = add i64 %rdi.0.reload, 4294967295, !insn.addr !665
  %136 = trunc i64 %rdi.0.reload to i32, !insn.addr !666
  %137 = and i64 %135, 4294967295, !insn.addr !667
  %138 = icmp ult i32 %136, 3
  store i64 %134, i64* %rax.1.reg2mem, !insn.addr !668
  store i64 %137, i64* %rdi.0.reg2mem, !insn.addr !668
  store i64 %134, i64* %rax.2.reg2mem, !insn.addr !668
  br i1 %138, label %dec_label_pc_208d, label %dec_label_pc_2080, !insn.addr !668

dec_label_pc_208d:                                ; preds = %dec_label_pc_2080, %dec_label_pc_2041, %dec_label_pc_1e30
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !669

; uselistorder directives
  uselistorder i64 %rdi.0.reload, { 1, 0, 2 }
  uselistorder i64 %127, { 1, 0 }
  uselistorder i128 %120, { 1, 0 }
  uselistorder i128 %119, { 1, 0 }
  uselistorder i128 %98, { 1, 0 }
  uselistorder i128 %xmm6.2.reload, { 3, 2, 0, 1 }
  uselistorder i128 %xmm0.1.reload, { 1, 0 }
  uselistorder i128 %xmm2.1.reload, { 1, 0 }
  uselistorder i128 %74, { 1, 0 }
  uselistorder i128 %72, { 1, 0 }
  uselistorder i128 %64, { 1, 0 }
  uselistorder i128 %62, { 1, 0 }
  uselistorder i128 %54, { 1, 0 }
  uselistorder i128 %52, { 1, 0 }
  uselistorder i128 %42, { 1, 0 }
  uselistorder i128 %xmm6.0.reload, { 9, 7, 8, 5, 6, 3, 4, 2, 0, 1 }
  uselistorder i32 %16, { 1, 0 }
  uselistorder i128 %14, { 1, 0 }
  uselistorder i128 %10, { 1, 0 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i128* %xmm0.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm2.0.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm6.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rsi.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm0.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm2.2.reg2mem, { 1, 0, 2 }
  uselistorder i128* %xmm6.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %rax.0.in.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.1.ph.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdi.0.ph.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder i128* @global_var_31f0, { 3, 2, 1, 0 }
  uselistorder i128* @global_var_3260, { 1, 0 }
  uselistorder i128* @global_var_3250, { 1, 0 }
  uselistorder i128* @global_var_3240, { 1, 0 }
  uselistorder i128* @global_var_3230, { 1, 0 }
  uselistorder i128* @global_var_3220, { 1, 0 }
  uselistorder i128* @global_var_3210, { 1, 0 }
  uselistorder i128* @global_var_3200, { 3, 2, 1, 0 }
  uselistorder i128* @global_var_3160, { 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i128* @global_var_31e0, { 1, 0 }
  uselistorder i8 0, { 1, 2, 3, 0 }
  uselistorder i32 8, { 0, 4, 1, 5, 2, 6, 3, 7 }
  uselistorder i64 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_2080, { 1, 0 }
  uselistorder label %dec_label_pc_2080.preheader, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2090:
  %merge.reg2mem = alloca i64, !insn.addr !670
  %rsi.0.in.reg2mem = alloca i64, !insn.addr !670
  %rax.0.reg2mem = alloca i64, !insn.addr !670
  %storemerge.in.reg2mem = alloca i64, !insn.addr !670
  %0 = and i64 %arg1, 4294967295, !insn.addr !670
  %1 = trunc i64 %arg2 to i32, !insn.addr !671
  %2 = icmp slt i32 %1, 1
  store i64 %0, i64* %merge.reg2mem, !insn.addr !672
  br i1 %2, label %dec_label_pc_20dd, label %dec_label_pc_2096, !insn.addr !672

dec_label_pc_2096:                                ; preds = %dec_label_pc_2090
  %3 = add i64 %arg2, 2, !insn.addr !673
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !674
  store i64 %3, i64* %rsi.0.in.reg2mem, !insn.addr !674
  br label %dec_label_pc_20a8, !insn.addr !674

dec_label_pc_20a0:                                ; preds = %dec_label_pc_20d8, %dec_label_pc_20ba
  %rsi.0 = and i64 %rsi.0.in.reload, 4294967295
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  %4 = add nuw nsw i64 %rsi.0, 4294967294, !insn.addr !675
  %5 = trunc i64 %4 to i32, !insn.addr !676
  %6 = icmp slt i32 %5, 3, !insn.addr !676
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !676
  store i64 %4, i64* %rsi.0.in.reg2mem, !insn.addr !676
  store i64 %storemerge, i64* %merge.reg2mem, !insn.addr !676
  br i1 %6, label %dec_label_pc_20dd, label %dec_label_pc_20a8, !insn.addr !676

dec_label_pc_20a8:                                ; preds = %dec_label_pc_20a0, %dec_label_pc_2096
  %rsi.0.in.reload = load i64, i64* %rsi.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = urem i64 %rax.0.reload, 2
  %8 = icmp eq i64 %7, 0, !insn.addr !677
  %9 = icmp eq i1 %8, false, !insn.addr !678
  br i1 %9, label %dec_label_pc_20d0, label %dec_label_pc_20ac, !insn.addr !678

dec_label_pc_20ac:                                ; preds = %dec_label_pc_20a8
  %10 = trunc i64 %rax.0.reload to i32, !insn.addr !679
  %11 = icmp slt i32 %10, 0
  %12 = zext i1 %11 to i32, !insn.addr !680
  %13 = add i32 %12, %10, !insn.addr !681
  %14 = ashr i32 %13, 1, !insn.addr !682
  %15 = zext i32 %14 to i64, !insn.addr !682
  %16 = trunc i64 %rsi.0.in.reload to i32, !insn.addr !683
  %17 = icmp eq i32 %16, 3, !insn.addr !683
  store i64 %15, i64* %merge.reg2mem, !insn.addr !684
  br i1 %17, label %dec_label_pc_20dd, label %dec_label_pc_20ba, !insn.addr !684

dec_label_pc_20ba:                                ; preds = %dec_label_pc_20ac
  %18 = add nuw nsw i64 %15, 1, !insn.addr !685
  store i64 %18, i64* %storemerge.in.reg2mem, !insn.addr !686
  br label %dec_label_pc_20a0, !insn.addr !686

dec_label_pc_20d0:                                ; preds = %dec_label_pc_20a8
  %19 = mul nuw nsw i64 %rax.0.reload, 3, !insn.addr !687
  %20 = trunc i64 %rsi.0.in.reload to i32, !insn.addr !688
  %21 = icmp eq i32 %20, 3, !insn.addr !688
  br i1 %21, label %dec_label_pc_20e0, label %dec_label_pc_20d8, !insn.addr !689

dec_label_pc_20d8:                                ; preds = %dec_label_pc_20d0
  %22 = and i64 %19, 4294967295, !insn.addr !687
  %23 = add nuw nsw i64 %22, 2, !insn.addr !690
  store i64 %23, i64* %storemerge.in.reg2mem, !insn.addr !691
  br label %dec_label_pc_20a0, !insn.addr !691

dec_label_pc_20dd:                                ; preds = %dec_label_pc_20a0, %dec_label_pc_20ac, %dec_label_pc_2090, %dec_label_pc_20e0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !692

dec_label_pc_20e0:                                ; preds = %dec_label_pc_20d0
  %24 = add nuw nsw i64 %19, 1, !insn.addr !693
  %25 = and i64 %24, 4294967295, !insn.addr !693
  store i64 %25, i64* %merge.reg2mem, !insn.addr !693
  br label %dec_label_pc_20dd, !insn.addr !693

; uselistorder directives
  uselistorder i64 %15, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64 %rsi.0.in.reload, { 2, 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge.in.reg2mem, { 2, 1, 0 }
  uselistorder i64* %merge.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder label %dec_label_pc_20dd, { 3, 1, 0, 2 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_20f0:
  ret i64 %arg1, !insn.addr !694
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2100:
  %0 = trunc i64 %arg1 to i32, !insn.addr !695
  %1 = icmp ult i32 %0, 3
  br i1 %1, label %dec_label_pc_210b, label %dec_label_pc_2105, !insn.addr !696

dec_label_pc_2105:                                ; preds = %dec_label_pc_2100
  ret i64 4294967295, !insn.addr !697

dec_label_pc_210b:                                ; preds = %dec_label_pc_2100
  %2 = and i64 %arg1, 4294967295, !insn.addr !698
  ret i64 %2, !insn.addr !699
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2120:
  %0 = mul i64 %arg1, 2, !insn.addr !700
  %1 = and i64 %0, 4294967294, !insn.addr !700
  ret i64 %1, !insn.addr !701
}

define i64 @triple_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2130:
  %0 = mul i64 %arg1, 3, !insn.addr !702
  %1 = and i64 %0, 4294967295, !insn.addr !702
  ret i64 %1, !insn.addr !703
}

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2140:
  %0 = mul i64 %arg2, 2, !insn.addr !704
  %1 = and i64 %0, 4294967294, !insn.addr !704
  ret i64 %1, !insn.addr !705
}

define i64 @process_with_callback(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2150:
  %0 = alloca i64
  %rbp.1.reg2mem = alloca i64, !insn.addr !706
  %rbp.0.reg2mem = alloca i64, !insn.addr !706
  %rbx.0.reg2mem = alloca i64, !insn.addr !706
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !707
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !708
  br i1 %3, label %dec_label_pc_2186, label %dec_label_pc_215c, !insn.addr !708

dec_label_pc_215c:                                ; preds = %dec_label_pc_2150
  %4 = and i64 %arg2, 4294967295, !insn.addr !709
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !710
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !710
  br label %dec_label_pc_2170, !insn.addr !710

dec_label_pc_2170:                                ; preds = %dec_label_pc_2170, %dec_label_pc_215c
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = add i64 %rbp.0.reload, %1, !insn.addr !711
  %6 = and i64 %5, 4294967295, !insn.addr !711
  %7 = add i64 %rbx.0.reload, 1, !insn.addr !712
  %8 = icmp eq i64 %4, %7, !insn.addr !713
  %9 = icmp eq i1 %8, false, !insn.addr !714
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !714
  store i64 %6, i64* %rbp.0.reg2mem, !insn.addr !714
  store i64 %6, i64* %rbp.1.reg2mem, !insn.addr !714
  br i1 %9, label %dec_label_pc_2170, label %dec_label_pc_2186, !insn.addr !714

dec_label_pc_2186:                                ; preds = %dec_label_pc_2170, %dec_label_pc_2150
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !715

; uselistorder directives
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
}

define i64 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_21a0:
  %rbp.0.reg2mem = alloca i64, !insn.addr !716
  %rbx.2.reg2mem = alloca i64, !insn.addr !716
  %rax.0.reg2mem = alloca i64, !insn.addr !716
  %rbx.02.reg2mem = alloca i64, !insn.addr !716
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3809 to i8*)), !insn.addr !717
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_34d9, i64 0, i64 0), i64 12), !insn.addr !718
  store i64 0, i64* %rbx.02.reg2mem, !insn.addr !719
  br i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), label %dec_label_pc_222d, label %dec_label_pc_2203, !insn.addr !719

dec_label_pc_2203:                                ; preds = %dec_label_pc_21a0, %dec_label_pc_2203
  %rbx.02.reload = load i64, i64* %rbx.02.reg2mem
  %2 = add nuw nsw i64 %rbx.02.reload, 4, !insn.addr !720
  %3 = and i64 %2, 4294967295, !insn.addr !720
  %4 = trunc i64 %2 to i32, !insn.addr !721
  %5 = icmp eq i32 %4, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !721
  store i64 %3, i64* %rbx.02.reg2mem, !insn.addr !719
  br i1 %5, label %dec_label_pc_222d, label %dec_label_pc_2203, !insn.addr !719

dec_label_pc_222d:                                ; preds = %dec_label_pc_2203, %dec_label_pc_21a0
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34f9, i64 0, i64 0), i64 and (i64 ptrtoint (i32* @global_var_3e9 to i64), i64 4294967295)), !insn.addr !722
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4294967295), !insn.addr !723
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4294967294), !insn.addr !724
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4), !insn.addr !725
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3534, i64 0, i64 0), i64 10), !insn.addr !726
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3534, i64 0, i64 0), i64 5), !insn.addr !727
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3557, i64 0, i64 0), i64 8), !insn.addr !728
  store i64 11, i64* %rax.0.reg2mem, !insn.addr !729
  store i64 10, i64* %rbx.2.reg2mem, !insn.addr !729
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !729
  br label %dec_label_pc_22c0, !insn.addr !729

dec_label_pc_22c0:                                ; preds = %dec_label_pc_22cd, %dec_label_pc_222d
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = trunc i64 %rbx.2.reload to i32
  %14 = add i32 %13, -8, !insn.addr !730
  %15 = trunc i64 %rax.0.reload to i32
  %16 = add i32 %15, -2, !insn.addr !731
  %17 = add nuw nsw i64 %rbx.2.reload, 2, !insn.addr !732
  %18 = and i64 %17, 4294967295, !insn.addr !732
  %19 = icmp ult i32 %14, %16, !insn.addr !733
  %20 = icmp eq i1 %19, false, !insn.addr !734
  br i1 %20, label %dec_label_pc_22d8, label %dec_label_pc_22cd, !insn.addr !734

dec_label_pc_22cd:                                ; preds = %dec_label_pc_22c0
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %21 = add nuw nsw i64 %rbp.0.reload, 1, !insn.addr !735
  %22 = and i64 %21, 4294967295, !insn.addr !735
  %23 = add nuw nsw i64 %rax.0.reload, 4294967295, !insn.addr !736
  %24 = and i64 %23, 4294967295, !insn.addr !736
  %25 = trunc i64 %21 to i32, !insn.addr !737
  %26 = icmp ult i32 %25, 9, !insn.addr !737
  store i64 %24, i64* %rax.0.reg2mem, !insn.addr !738
  store i64 %18, i64* %rbx.2.reg2mem, !insn.addr !738
  store i64 %22, i64* %rbp.0.reg2mem, !insn.addr !738
  br i1 %26, label %dec_label_pc_22c0, label %dec_label_pc_22d8, !insn.addr !738

dec_label_pc_22d8:                                ; preds = %dec_label_pc_22cd, %dec_label_pc_22c0
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3574, i64 0, i64 0), i64 %18), !insn.addr !739
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3596, i64 0, i64 0), i64 30), !insn.addr !740
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_35b6, i64 0, i64 0), i64 101), !insn.addr !741
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_35da, i64 0, i64 0), i64 120), !insn.addr !742
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_35fe, i64 0, i64 0), i64 120), !insn.addr !743
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_361d, i64 0, i64 0), i64 3), !insn.addr !744
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3640, i64 0, i64 0), i64 10), !insn.addr !745
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_365e, i64 0, i64 0), i64 10), !insn.addr !746
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_365e, i64 0, i64 0), i64 120), !insn.addr !747
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3682, i64 0, i64 0), i64 30), !insn.addr !748
  %37 = sext i32 %36 to i64, !insn.addr !748
  ret i64 %37, !insn.addr !748

; uselistorder directives
  uselistorder i64 %18, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 1, 0 }
  uselistorder i64* %rbx.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.2.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 101, { 1, 0 }
  uselistorder i32 -8, { 4, 0, 1, 2, 3 }
  uselistorder i64 8, { 1, 0, 2 }
  uselistorder i64 4, { 4, 1, 2, 5, 0, 3 }
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 1, 2, 0 }
  uselistorder i64 12, { 1, 2, 0 }
  uselistorder label %dec_label_pc_2203, { 1, 0 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_23f0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !749
  %1 = icmp eq i32 %0, 0, !insn.addr !750
  br i1 %1, label %dec_label_pc_240c, label %dec_label_pc_2408, !insn.addr !751

dec_label_pc_2408:                                ; preds = %dec_label_pc_23f0
  ret i64 4294967295, !insn.addr !752

dec_label_pc_240c:                                ; preds = %dec_label_pc_23f0
  %2 = trunc i64 %arg1 to i32, !insn.addr !753
  %3 = icmp slt i32 %2, 0, !insn.addr !753
  br i1 %3, label %dec_label_pc_241d, label %dec_label_pc_2410, !insn.addr !754

dec_label_pc_2410:                                ; preds = %dec_label_pc_240c
  %4 = icmp ult i32 %2, 101, !insn.addr !755
  %5 = icmp eq i1 %4, false, !insn.addr !756
  br i1 %5, label %dec_label_pc_242e, label %dec_label_pc_2415, !insn.addr !756

dec_label_pc_2415:                                ; preds = %dec_label_pc_2410
  %6 = mul i64 %arg1, 2, !insn.addr !757
  %7 = and i64 %6, 4294967294, !insn.addr !758
  ret i64 %7, !insn.addr !759

dec_label_pc_241d:                                ; preds = %dec_label_pc_240c
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !760
  unreachable, !insn.addr !760

dec_label_pc_242e:                                ; preds = %dec_label_pc_2410
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !761
  unreachable, !insn.addr !761

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], { 1, 0, 2 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2440:
  %0 = mul i64 %arg1, 2, !insn.addr !762
  %1 = trunc i64 %arg1 to i32, !insn.addr !763
  %2 = add i32 %1, -101, !insn.addr !763
  %3 = sub i32 100, %1
  %4 = and i32 %3, %1, !insn.addr !763
  %5 = icmp slt i32 %4, 0, !insn.addr !763
  %6 = icmp slt i32 %2, 0, !insn.addr !763
  %7 = icmp eq i1 %6, %5, !insn.addr !764
  %8 = icmp slt i32 %1, 0, !insn.addr !765
  %9 = icmp eq i1 %8, false, !insn.addr !766
  %10 = and i64 %0, 4294967294
  %11 = select i1 %7, i64 4294967294, i64 %10, !insn.addr !764
  %12 = select i1 %9, i64 %11, i64 4294967295, !insn.addr !766
  ret i64 %12, !insn.addr !767

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2, 3 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2460:
  %0 = trunc i64 %arg1 to i32, !insn.addr !768
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_246b, label %dec_label_pc_2465, !insn.addr !769

dec_label_pc_2465:                                ; preds = %dec_label_pc_2460
  ret i64 4294967295, !insn.addr !770

dec_label_pc_246b:                                ; preds = %dec_label_pc_2460
  %2 = and i64 %arg1, 4294967295, !insn.addr !771
  ret i64 %2, !insn.addr !772
}

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2480:
  %0 = add i64 %arg2, %arg1, !insn.addr !773
  %1 = and i64 %0, 4294967295, !insn.addr !773
  ret i64 %1, !insn.addr !774
}

define i64 @op_sub(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2490:
  %0 = sub i64 %arg1, %arg2, !insn.addr !775
  %1 = and i64 %0, 4294967295, !insn.addr !775
  ret i64 %1, !insn.addr !776
}

define i64 @op_mul(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24a0:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !777
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !777
  %2 = mul nsw i64 %1, %0, !insn.addr !777
  %3 = and i64 %2, 4294967295, !insn.addr !777
  ret i64 %3, !insn.addr !778
}

define i64 @op_div(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !779
  %1 = icmp eq i32 %0, 0, !insn.addr !779
  br i1 %1, label %dec_label_pc_24ba, label %dec_label_pc_24b4, !insn.addr !780

dec_label_pc_24b4:                                ; preds = %dec_label_pc_24b0
  %2 = trunc i64 %arg1 to i32, !insn.addr !781
  %3 = ashr i32 %2, 31, !insn.addr !781
  %4 = and i64 %arg1, 4294967295, !insn.addr !782
  %5 = zext i32 %3 to i64, !insn.addr !782
  %6 = mul i64 %5, 4294967296, !insn.addr !782
  %7 = or i64 %6, %4, !insn.addr !782
  %8 = and i64 %arg2, 4294967295, !insn.addr !782
  %9 = sdiv i64 %7, %8, !insn.addr !782
  %10 = and i64 %9, 4294967295, !insn.addr !782
  ret i64 %10, !insn.addr !783

dec_label_pc_24ba:                                ; preds = %dec_label_pc_24b0
  ret i64 0, !insn.addr !784

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_mod(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !785
  %1 = icmp eq i32 %0, 0, !insn.addr !785
  br i1 %1, label %dec_label_pc_24cc, label %dec_label_pc_24c4, !insn.addr !786

dec_label_pc_24c4:                                ; preds = %dec_label_pc_24c0
  %2 = trunc i64 %arg1 to i32, !insn.addr !787
  %3 = ashr i32 %2, 31, !insn.addr !787
  %4 = and i64 %arg1, 4294967295, !insn.addr !788
  %5 = zext i32 %3 to i64, !insn.addr !788
  %6 = mul i64 %5, 4294967296, !insn.addr !788
  %7 = or i64 %6, %4, !insn.addr !788
  %8 = and i64 %arg2, 4294967295, !insn.addr !788
  %9 = srem i64 %7, %8, !insn.addr !788
  %10 = and i64 %9, 4294967295, !insn.addr !789
  ret i64 %10, !insn.addr !790

dec_label_pc_24cc:                                ; preds = %dec_label_pc_24c0
  ret i64 0, !insn.addr !791

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_and(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24d0:
  %0 = and i64 %arg1, 4294967295
  %1 = and i64 %0, %arg2, !insn.addr !792
  ret i64 %1, !insn.addr !793
}

define i64 @op_or(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = or i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !794
  ret i64 %1, !insn.addr !795
}

define i64 @op_xor(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = xor i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !796
  ret i64 %1, !insn.addr !797
}

define i64 @op_shl(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2500:
  %0 = and i64 %arg1, 4294967295, !insn.addr !798
  %1 = trunc i64 %arg2 to i32, !insn.addr !799
  %2 = urem i32 %1, 32, !insn.addr !799
  %3 = icmp eq i32 %2, 0, !insn.addr !799
  %4 = trunc i64 %arg1 to i32
  %5 = shl i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !800

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @op_shr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2510:
  %0 = and i64 %arg1, 4294967295, !insn.addr !801
  %1 = trunc i64 %arg2 to i32, !insn.addr !802
  %2 = urem i32 %1, 32, !insn.addr !802
  %3 = icmp eq i32 %2, 0, !insn.addr !802
  %4 = trunc i64 %arg1 to i32
  %5 = ashr i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !803

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2520:
  %0 = trunc i64 %arg1 to i32, !insn.addr !804
  %1 = icmp eq i32 %0, 1, !insn.addr !804
  %2 = select i1 %1, i64 8496, i64 7104, !insn.addr !805
  %3 = icmp eq i32 %0, 0, !insn.addr !806
  %4 = icmp eq i1 %3, false, !insn.addr !807
  %5 = select i1 %4, i64 %2, i64 8480, !insn.addr !807
  ret i64 %5, !insn.addr !808
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2550:
  %0 = trunc i64 %arg2 to i32, !insn.addr !809
  %1 = icmp ult i32 %0, 4
  br i1 %1, label %dec_label_pc_2555, label %dec_label_pc_2572, !insn.addr !810

dec_label_pc_2555:                                ; preds = %dec_label_pc_2550
  %2 = and i64 %arg2, 4294967295, !insn.addr !811
  ret i64 %2, !insn.addr !812

dec_label_pc_2572:                                ; preds = %dec_label_pc_2550
  ret i64 3, !insn.addr !813
}

define i64 @function_2578(i64 %arg1) local_unnamed_addr {
dec_label_pc_2578:
  %0 = trunc i64 %arg1 to i32, !insn.addr !814
  %1 = icmp eq i32 %0, 99, !insn.addr !814
  %2 = zext i1 %1 to i64, !insn.addr !815
  %3 = mul i64 %2, 2, !insn.addr !815
  %4 = or i64 %3, 1, !insn.addr !816
  %5 = icmp eq i32 %0, 2, !insn.addr !817
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !818
  %7 = and i64 %6, 4294967295, !insn.addr !818
  ret i64 %7, !insn.addr !819
}

define i64 @function_258c(i64 %arg1) local_unnamed_addr {
dec_label_pc_258c:
  %0 = trunc i64 %arg1 to i32, !insn.addr !820
  %1 = icmp eq i32 %0, 0, !insn.addr !820
  %2 = icmp eq i1 %1, false, !insn.addr !821
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !822
  ret i64 %3, !insn.addr !823
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_25a0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !824
  %1 = icmp ult i32 %0, 4
  br i1 %1, label %dec_label_pc_25ab, label %dec_label_pc_25a5, !insn.addr !825

dec_label_pc_25a5:                                ; preds = %dec_label_pc_25a0
  ret i64 3, !insn.addr !826

dec_label_pc_25ab:                                ; preds = %dec_label_pc_25a0
  %2 = and i64 %arg2, 4294967295, !insn.addr !827
  ret i64 %2, !insn.addr !828

; uselistorder directives
  uselistorder i32 4, { 3, 4, 0, 1, 2, 5 }
}

define i64 @state_idle(i64 %arg1) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !829
  %1 = icmp eq i32 %0, 1, !insn.addr !829
  %2 = zext i1 %1 to i64, !insn.addr !830
  ret i64 %2, !insn.addr !831
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_25d0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !832
  %1 = icmp eq i32 %0, 99, !insn.addr !832
  %2 = zext i1 %1 to i64, !insn.addr !833
  %3 = mul i64 %2, 2, !insn.addr !833
  %4 = or i64 %3, 1, !insn.addr !834
  %5 = icmp eq i32 %0, 2, !insn.addr !835
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !836
  %7 = and i64 %6, 4294967295, !insn.addr !836
  ret i64 %7, !insn.addr !837
}

define i64 @state_done() local_unnamed_addr {
dec_label_pc_25f0:
  ret i64 2, !insn.addr !838
}

define i64 @state_error(i64 %arg1) local_unnamed_addr {
dec_label_pc_2600:
  %0 = trunc i64 %arg1 to i32, !insn.addr !839
  %1 = icmp eq i32 %0, 0, !insn.addr !839
  %2 = icmp eq i1 %1, false, !insn.addr !840
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !841
  ret i64 %3, !insn.addr !842
}

define i64 @computed_goto(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2610:
  %merge.reg2mem = alloca i64, !insn.addr !843
  %merge1.reg2mem = alloca i64, !insn.addr !843
  %0 = and i64 %arg2, 4294967295, !insn.addr !844
  store i64 %0, i64* @0, align 8, !insn.addr !845
  %trunc = trunc i64 %arg2 to i32
  store i64 %0, i64* %merge1.reg2mem, !insn.addr !845
  store i64 0, i64* %merge.reg2mem, !insn.addr !845
  switch i32 %trunc, label %dec_label_pc_261a [
    i32 0, label %dec_label_pc_2627
    i32 1, label %dec_label_pc_2636
    i32 2, label %dec_label_pc_262a
    i32 3, label %dec_label_pc_2630
  ], !insn.addr !845

dec_label_pc_261a:                                ; preds = %dec_label_pc_2627, %dec_label_pc_2610
  %merge1.reload = load i64, i64* %merge1.reg2mem
  ret i64 %merge1.reload, !insn.addr !846

dec_label_pc_2627:                                ; preds = %dec_label_pc_2636, %dec_label_pc_2630, %dec_label_pc_262a, %dec_label_pc_2610
  %merge.reload = load i64, i64* %merge.reg2mem
  store i64 %merge.reload, i64* %merge1.reg2mem
  br label %dec_label_pc_261a

dec_label_pc_262a:                                ; preds = %dec_label_pc_2610
  store i64 20, i64* %merge.reg2mem
  br label %dec_label_pc_2627

dec_label_pc_2630:                                ; preds = %dec_label_pc_2610
  store i64 30, i64* %merge.reg2mem
  br label %dec_label_pc_2627

dec_label_pc_2636:                                ; preds = %dec_label_pc_2610
  store i64 10, i64* %merge.reg2mem
  br label %dec_label_pc_2627

; uselistorder directives
  uselistorder i64* %merge1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %merge.reg2mem, { 1, 2, 3, 0, 4 }
  uselistorder i64 30, { 0, 3, 4, 1, 2 }
  uselistorder i32 3, { 0, 1, 2, 3, 7, 4, 5, 6, 8, 9 }
  uselistorder i32 2, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_2640:
  %0 = mul i64 %arg1, 2, !insn.addr !847
  %1 = and i64 %0, 4294967294, !insn.addr !847
  ret i64 %1, !insn.addr !848
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2650:
  %0 = mul i64 %arg1, 2, !insn.addr !849
  %1 = and i64 %0, 4294967294, !insn.addr !849
  ret i64 %1, !insn.addr !850

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 7, 6, 2, 14, 8, 9, 10, 0, 11, 12, 3, 13, 1 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_2660:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !851
  %2 = icmp eq i1 %1, false, !insn.addr !852
  br i1 %2, label %dec_label_pc_2670, label %dec_label_pc_2666, !insn.addr !852

dec_label_pc_2666:                                ; preds = %dec_label_pc_2660
  %3 = trunc i64 %arg1 to i32, !insn.addr !853
  %4 = icmp slt i32 %3, 0
  %5 = zext i1 %4 to i32, !insn.addr !854
  %6 = add i32 %5, %3, !insn.addr !855
  %7 = ashr i32 %6, 1, !insn.addr !856
  %8 = zext i32 %7 to i64, !insn.addr !856
  ret i64 %8, !insn.addr !857

dec_label_pc_2670:                                ; preds = %dec_label_pc_2660
  %9 = mul i64 %arg1, 3, !insn.addr !858
  %10 = add i64 %9, 1, !insn.addr !859
  %11 = and i64 %10, 4294967295, !insn.addr !859
  ret i64 %11, !insn.addr !860

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64 3, { 4, 5, 1, 6, 2, 9, 7, 8, 3, 0 }
  uselistorder i32 0, { 0, 3, 8, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 2, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 4, 5, 6 }
  uselistorder i1 false, { 7, 8, 6, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 1, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 33, 34, 3, 35, 4, 0, 36, 5, 37 }
  uselistorder i64 %arg1, { 1, 2, 0 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2680:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_382d to i8*)), !insn.addr !861
  %1 = call i64 @non_local_jump(i64 5), !insn.addr !862
  %2 = and i64 %1, 4294967295, !insn.addr !863
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_36a8, i64 0, i64 0), i64 %2), !insn.addr !864
  %4 = call i64 @non_local_jump(i64 4294967291), !insn.addr !865
  %5 = and i64 %4, 4294967295, !insn.addr !866
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_36a8, i64 0, i64 0), i64 %5), !insn.addr !867
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_36c7, i64 0, i64 0), i64 10), !insn.addr !868
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_36c7, i64 0, i64 0), i64 4294967295), !insn.addr !869
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_36e5, i64 0, i64 0), i64 15), !insn.addr !870
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3706, i64 0, i64 0), i64 10), !insn.addr !871
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_372b, i64 0, i64 0), i64 1), !insn.addr !872
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3749, i64 0, i64 0), i64 2), !insn.addr !873
  %13 = call i64 @computed_goto(i64 ptrtoint ([31 x i8]* @global_var_3749 to i64), i64 2), !insn.addr !874
  %14 = and i64 %13, 4294967295, !insn.addr !875
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3768, i64 0, i64 0), i64 %14), !insn.addr !876
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3786, i64 0, i64 0), i64 10), !insn.addr !877
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_37a4, i64 0, i64 0), i64 10), !insn.addr !878
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_37c5, i64 0, i64 0), i64 16), !insn.addr !879
  %19 = sext i32 %18 to i64, !insn.addr !879
  ret i64 %19, !insn.addr !879

; uselistorder directives
  uselistorder i64 2, { 27, 28, 15, 1, 2, 13, 3, 4, 5, 6, 22, 7, 8, 23, 16, 24, 25, 26, 9, 17, 10, 29, 18, 19, 20, 14, 21, 11, 0, 12 }
  uselistorder [31 x i8]* @global_var_3749, { 1, 0 }
  uselistorder i64 1, { 24, 10, 8, 9, 11, 26, 12, 13, 1, 0, 14, 15, 16, 25, 17, 18, 2, 3, 4, 19, 21, 20, 5, 22, 23, 6, 7 }
  uselistorder i64 10, { 5, 6, 7, 8, 0, 9, 10, 1, 11, 12, 13, 4, 3, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 13, 95, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 5, 36, 6, 37, 38, 39, 40, 0, 96, 10, 41, 42, 43, 44, 45, 7, 46, 48, 47, 11, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 8, 69, 70, 1, 71, 2, 72, 97, 73, 74, 75, 76, 77, 12, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 3, 88, 89, 4, 90, 91, 92, 93, 94 }
  uselistorder i64 (i64)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2790:
  %0 = call i64 @test_control_flow_l1(), !insn.addr !880
  %1 = call i64 @test_control_flow_l2(), !insn.addr !881
  %2 = call i64 @test_control_flow_l3(), !insn.addr !882
  ret i64 0, !insn.addr !883

; uselistorder directives
  uselistorder i64 0, { 19, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 0, 54, 55, 20, 21, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 1, 82, 83, 3, 4, 2, 84, 25, 5, 6, 7, 8, 9, 85, 86, 22, 10, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 109, 107, 108, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 132, 131, 11, 12, 32, 133, 13, 14, 23, 15, 16, 134, 17, 135, 136, 137, 24, 18, 138, 26, 27, 28, 29, 30, 31 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_27a4:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !884

; uselistorder directives
  uselistorder i32 1, { 4, 134, 113, 6, 5, 114, 115, 116, 10, 9, 8, 7, 117, 13, 12, 11, 3, 135, 118, 17, 16, 15, 14, 136, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 137, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 2, 119, 56, 55, 54, 109, 120, 59, 58, 57, 121, 60, 138, 122, 61, 62, 111, 139, 123, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 112, 140, 124, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 0, 125, 126, 99, 98, 102, 101, 100, 127, 110, 105, 104, 103, 106, 128, 129, 130, 131, 107, 132, 1, 133, 108 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i128 @__asm_pxor(i128, i128) local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i128 @__asm_paddd(i128, i128) local_unnamed_addr

declare i128 @__asm_pand(i128, i128) local_unnamed_addr

declare i128 @__asm_pcmpeqd(i128, i128) local_unnamed_addr

declare i128 @__asm_pandn(i128, i128) local_unnamed_addr

declare i128 @__asm_pshufd(i128, i8) local_unnamed_addr

declare i32 @__asm_movd(i128) local_unnamed_addr

declare i128 @__asm_pmuludq(i128, i128) local_unnamed_addr

declare i128 @__asm_punpckldq(i128, i128) local_unnamed_addr

declare i128 @__asm_movd.1(i32) local_unnamed_addr

declare i128 @__asm_movaps(i128) local_unnamed_addr

declare i128 @__asm_movss(i128, i128) local_unnamed_addr

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
!98 = !{i64 4848}
!99 = !{i64 4861}
!100 = !{i64 4865}
!101 = !{i64 4869}
!102 = !{i64 4871}
!103 = !{i64 4874}
!104 = !{i64 4880}
!105 = !{i64 4882}
!106 = !{i64 4896}
!107 = !{i64 4908}
!108 = !{i64 4912}
!109 = !{i64 4925}
!110 = !{i64 4929}
!111 = !{i64 4933}
!112 = !{i64 4935}
!113 = !{i64 4938}
!114 = !{i64 4944}
!115 = !{i64 4946}
!116 = !{i64 4962}
!117 = !{i64 4967}
!118 = !{i64 4972}
!119 = !{i64 4974}
!120 = !{i64 4977}
!121 = !{i64 4992}
!122 = !{i64 5016}
!123 = !{i64 5035}
!124 = !{i64 5041}
!125 = !{i64 5047}
!126 = !{i64 5056}
!127 = !{i64 5058}
!128 = !{i64 5060}
!129 = !{i64 5063}
!130 = !{i64 5079}
!131 = !{i64 5082}
!132 = !{i64 5088}
!133 = !{i64 5090}
!134 = !{i64 5093}
!135 = !{i64 5096}
!136 = !{i64 5098}
!137 = !{i64 5106}
!138 = !{i64 5109}
!139 = !{i64 5114}
!140 = !{i64 5122}
!141 = !{i64 5131}
!142 = !{i64 5140}
!143 = !{i64 5149}
!144 = !{i64 5158}
!145 = !{i64 5166}
!146 = !{i64 5170}
!147 = !{i64 5174}
!148 = !{i64 5184}
!149 = !{i64 5188}
!150 = !{i64 5193}
!151 = !{i64 5197}
!152 = !{i64 5202}
!153 = !{i64 5207}
!154 = !{i64 5211}
!155 = !{i64 5215}
!156 = !{i64 5219}
!157 = !{i64 5223}
!158 = !{i64 5227}
!159 = !{i64 5231}
!160 = !{i64 5235}
!161 = !{i64 5240}
!162 = !{i64 5244}
!163 = !{i64 5249}
!164 = !{i64 5253}
!165 = !{i64 5257}
!166 = !{i64 5261}
!167 = !{i64 5265}
!168 = !{i64 5269}
!169 = !{i64 5273}
!170 = !{i64 5277}
!171 = !{i64 5280}
!172 = !{i64 5282}
!173 = !{i64 5284}
!174 = !{i64 5286}
!175 = !{i64 5298}
!176 = !{i64 5294}
!177 = !{i64 5306}
!178 = !{i64 5310}
!179 = !{i64 5314}
!180 = !{i64 5318}
!181 = !{i64 5322}
!182 = !{i64 5326}
!183 = !{i64 5330}
!184 = !{i64 5334}
!185 = !{i64 5338}
!186 = !{i64 5342}
!187 = !{i64 5347}
!188 = !{i64 5351}
!189 = !{i64 5356}
!190 = !{i64 5360}
!191 = !{i64 5364}
!192 = !{i64 5366}
!193 = !{i64 5368}
!194 = !{i64 5390}
!195 = !{i64 5374}
!196 = !{i64 5378}
!197 = !{i64 5381}
!198 = !{i64 5383}
!199 = !{i64 5385}
!200 = !{i64 5387}
!201 = !{i64 5392}
!202 = !{i64 5395}
!203 = !{i64 5399}
!204 = !{i64 5407}
!205 = !{i64 5411}
!206 = !{i64 5413}
!207 = !{i64 5424}
!208 = !{i64 5431}
!209 = !{i64 5434}
!210 = !{i64 5437}
!211 = !{i64 5439}
!212 = !{i64 5440}
!213 = !{i64 5442}
!214 = !{i64 5454}
!215 = !{i64 5457}
!216 = !{i64 5465}
!217 = !{i64 5471}
!218 = !{i64 5473}
!219 = !{i64 5476}
!220 = !{i64 5484}
!221 = !{i64 5487}
!222 = !{i64 5489}
!223 = !{i64 5497}
!224 = !{i64 5505}
!225 = !{i64 5509}
!226 = !{i64 5519}
!227 = !{i64 5523}
!228 = !{i64 5531}
!229 = !{i64 5539}
!230 = !{i64 5548}
!231 = !{i64 5557}
!232 = !{i64 5566}
!233 = !{i64 5575}
!234 = !{i64 5584}
!235 = !{i64 5593}
!236 = !{i64 5602}
!237 = !{i64 5606}
!238 = !{i64 5616}
!239 = !{i64 5620}
!240 = !{i64 5628}
!241 = !{i64 5633}
!242 = !{i64 5638}
!243 = !{i64 5642}
!244 = !{i64 5646}
!245 = !{i64 5651}
!246 = !{i64 5656}
!247 = !{i64 5660}
!248 = !{i64 5664}
!249 = !{i64 5668}
!250 = !{i64 5673}
!251 = !{i64 5677}
!252 = !{i64 5682}
!253 = !{i64 5686}
!254 = !{i64 5691}
!255 = !{i64 5695}
!256 = !{i64 5699}
!257 = !{i64 5704}
!258 = !{i64 5708}
!259 = !{i64 5712}
!260 = !{i64 5717}
!261 = !{i64 5721}
!262 = !{i64 5726}
!263 = !{i64 5731}
!264 = !{i64 5735}
!265 = !{i64 5739}
!266 = !{i64 5745}
!267 = !{i64 5750}
!268 = !{i64 5754}
!269 = !{i64 5758}
!270 = !{i64 5763}
!271 = !{i64 5767}
!272 = !{i64 5772}
!273 = !{i64 5776}
!274 = !{i64 5781}
!275 = !{i64 5786}
!276 = !{i64 5790}
!277 = !{i64 5795}
!278 = !{i64 5799}
!279 = !{i64 5803}
!280 = !{i64 5808}
!281 = !{i64 5813}
!282 = !{i64 5818}
!283 = !{i64 5823}
!284 = !{i64 5827}
!285 = !{i64 5832}
!286 = !{i64 5835}
!287 = !{i64 5481}
!288 = !{i64 5841}
!289 = !{i64 5845}
!290 = !{i64 5849}
!291 = !{i64 5851}
!292 = !{i64 5853}
!293 = !{i64 5861}
!294 = !{i64 5869}
!295 = !{i64 5872}
!296 = !{i64 5876}
!297 = !{i64 5880}
!298 = !{i64 5884}
!299 = !{i64 5888}
!300 = !{i64 5893}
!301 = !{i64 5898}
!302 = !{i64 5903}
!303 = !{i64 5907}
!304 = !{i64 5912}
!305 = !{i64 5916}
!306 = !{i64 5921}
!307 = !{i64 5925}
!308 = !{i64 5930}
!309 = !{i64 5935}
!310 = !{i64 5939}
!311 = !{i64 5944}
!312 = !{i64 5948}
!313 = !{i64 5952}
!314 = !{i64 5956}
!315 = !{i64 5960}
!316 = !{i64 5963}
!317 = !{i64 5965}
!318 = !{i64 5970}
!319 = !{i64 5975}
!320 = !{i64 5979}
!321 = !{i64 5983}
!322 = !{i64 5988}
!323 = !{i64 5992}
!324 = !{i64 5997}
!325 = !{i64 6001}
!326 = !{i64 6005}
!327 = !{i64 6009}
!328 = !{i64 6011}
!329 = !{i64 6013}
!330 = !{i64 6038}
!331 = !{i64 6029}
!332 = !{i64 6032}
!333 = !{i64 6035}
!334 = !{i64 6040}
!335 = !{i64 6050}
!336 = !{i64 6052}
!337 = !{i64 6055}
!338 = !{i64 6072}
!339 = !{i64 6091}
!340 = !{i64 6113}
!341 = !{i64 6128}
!342 = !{i64 6150}
!343 = !{i64 6162}
!344 = !{i64 6184}
!345 = !{i64 6199}
!346 = !{i64 6211}
!347 = !{i64 6230}
!348 = !{i64 6249}
!349 = !{i64 6268}
!350 = !{i64 6287}
!351 = !{i64 6306}
!352 = !{i64 6322}
!353 = !{i64 6341}
!354 = !{i64 6360}
!355 = !{i64 6379}
!356 = !{i64 6398}
!357 = !{i64 6417}
!358 = !{i64 6439}
!359 = !{i64 6454}
!360 = !{i64 6473}
!361 = !{i64 6495}
!362 = !{i64 6510}
!363 = !{i64 6529}
!364 = !{i64 6551}
!365 = !{i64 6567}
!366 = !{i64 6576}
!367 = !{i64 6584}
!368 = !{i64 6587}
!369 = !{i64 6606}
!370 = !{i64 6609}
!371 = !{i64 6612}
!372 = !{i64 6624}
!373 = !{i64 6628}
!374 = !{i64 6631}
!375 = !{i64 6645}
!376 = !{i64 6668}
!377 = !{i64 6640}
!378 = !{i64 6678}
!379 = !{i64 6679}
!380 = !{i64 6690}
!381 = !{i64 6704}
!382 = !{i64 6706}
!383 = !{i64 6716}
!384 = !{i64 6718}
!385 = !{i64 6723}
!386 = !{i64 6726}
!387 = !{i64 6730}
!388 = !{i64 6733}
!389 = !{i64 6752}
!390 = !{i64 6757}
!391 = !{i64 6759}
!392 = !{i64 6761}
!393 = !{i64 6764}
!394 = !{i64 6773}
!395 = !{i64 6775}
!396 = !{i64 6781}
!397 = !{i64 6784}
!398 = !{i64 6806}
!399 = !{i64 6916}
!400 = !{i64 6928}
!401 = !{i64 6930}
!402 = !{i64 6946}
!403 = !{i64 6949}
!404 = !{i64 6952}
!405 = !{i64 6955}
!406 = !{i64 6962}
!407 = !{i64 6958}
!408 = !{i64 6971}
!409 = !{i64 6973}
!410 = !{i64 6975}
!411 = !{i64 6982}
!412 = !{i64 6984}
!413 = !{i64 6992}
!414 = !{i64 6994}
!415 = !{i64 7008}
!416 = !{i64 7010}
!417 = !{i64 7013}
!418 = !{i64 7016}
!419 = !{i64 7019}
!420 = !{i64 7026}
!421 = !{i64 7028}
!422 = !{i64 7045}
!423 = !{i64 7084}
!424 = !{i64 7104}
!425 = !{i64 7112}
!426 = !{i64 7136}
!427 = !{i64 7139}
!428 = !{i64 7148}
!429 = !{i64 7152}
!430 = !{i64 7156}
!431 = !{i64 7161}
!432 = !{i64 7173}
!433 = !{i64 7175}
!434 = !{i64 7178}
!435 = !{i64 7186}
!436 = !{i64 7189}
!437 = !{i64 7191}
!438 = !{i64 7199}
!439 = !{i64 7203}
!440 = !{i64 7211}
!441 = !{i64 7219}
!442 = !{i64 7228}
!443 = !{i64 7237}
!444 = !{i64 7246}
!445 = !{i64 7255}
!446 = !{i64 7264}
!447 = !{i64 7273}
!448 = !{i64 7282}
!449 = !{i64 7286}
!450 = !{i64 7296}
!451 = !{i64 7300}
!452 = !{i64 7308}
!453 = !{i64 7313}
!454 = !{i64 7318}
!455 = !{i64 7322}
!456 = !{i64 7326}
!457 = !{i64 7331}
!458 = !{i64 7336}
!459 = !{i64 7340}
!460 = !{i64 7344}
!461 = !{i64 7348}
!462 = !{i64 7353}
!463 = !{i64 7357}
!464 = !{i64 7362}
!465 = !{i64 7366}
!466 = !{i64 7371}
!467 = !{i64 7375}
!468 = !{i64 7379}
!469 = !{i64 7384}
!470 = !{i64 7388}
!471 = !{i64 7392}
!472 = !{i64 7397}
!473 = !{i64 7401}
!474 = !{i64 7406}
!475 = !{i64 7411}
!476 = !{i64 7415}
!477 = !{i64 7419}
!478 = !{i64 7425}
!479 = !{i64 7430}
!480 = !{i64 7434}
!481 = !{i64 7438}
!482 = !{i64 7443}
!483 = !{i64 7447}
!484 = !{i64 7452}
!485 = !{i64 7456}
!486 = !{i64 7461}
!487 = !{i64 7466}
!488 = !{i64 7470}
!489 = !{i64 7475}
!490 = !{i64 7479}
!491 = !{i64 7483}
!492 = !{i64 7488}
!493 = !{i64 7493}
!494 = !{i64 7498}
!495 = !{i64 7503}
!496 = !{i64 7507}
!497 = !{i64 7512}
!498 = !{i64 7515}
!499 = !{i64 7183}
!500 = !{i64 7521}
!501 = !{i64 7525}
!502 = !{i64 7529}
!503 = !{i64 7531}
!504 = !{i64 7533}
!505 = !{i64 7541}
!506 = !{i64 7549}
!507 = !{i64 7552}
!508 = !{i64 7556}
!509 = !{i64 7560}
!510 = !{i64 7564}
!511 = !{i64 7568}
!512 = !{i64 7573}
!513 = !{i64 7578}
!514 = !{i64 7583}
!515 = !{i64 7587}
!516 = !{i64 7592}
!517 = !{i64 7596}
!518 = !{i64 7601}
!519 = !{i64 7605}
!520 = !{i64 7610}
!521 = !{i64 7615}
!522 = !{i64 7619}
!523 = !{i64 7624}
!524 = !{i64 7628}
!525 = !{i64 7632}
!526 = !{i64 7636}
!527 = !{i64 7640}
!528 = !{i64 7643}
!529 = !{i64 7645}
!530 = !{i64 7650}
!531 = !{i64 7655}
!532 = !{i64 7659}
!533 = !{i64 7663}
!534 = !{i64 7668}
!535 = !{i64 7672}
!536 = !{i64 7677}
!537 = !{i64 7681}
!538 = !{i64 7685}
!539 = !{i64 7689}
!540 = !{i64 7692}
!541 = !{i64 7694}
!542 = !{i64 7707}
!543 = !{i64 7712}
!544 = !{i64 7715}
!545 = !{i64 7718}
!546 = !{i64 7721}
!547 = !{i64 7723}
!548 = !{i64 7725}
!549 = !{i64 7728}
!550 = !{i64 7733}
!551 = !{i64 7752}
!552 = !{i64 7755}
!553 = !{i64 7764}
!554 = !{i64 7768}
!555 = !{i64 7772}
!556 = !{i64 7779}
!557 = !{i64 7783}
!558 = !{i64 7787}
!559 = !{i64 7792}
!560 = !{i64 7804}
!561 = !{i64 7806}
!562 = !{i64 7809}
!563 = !{i64 7817}
!564 = !{i64 7820}
!565 = !{i64 7822}
!566 = !{i64 7830}
!567 = !{i64 7838}
!568 = !{i64 7846}
!569 = !{i64 7855}
!570 = !{i64 7864}
!571 = !{i64 7873}
!572 = !{i64 7882}
!573 = !{i64 7891}
!574 = !{i64 7900}
!575 = !{i64 7919}
!576 = !{i64 7920}
!577 = !{i64 7924}
!578 = !{i64 7932}
!579 = !{i64 7937}
!580 = !{i64 7942}
!581 = !{i64 7946}
!582 = !{i64 7950}
!583 = !{i64 7955}
!584 = !{i64 7960}
!585 = !{i64 7964}
!586 = !{i64 7968}
!587 = !{i64 7972}
!588 = !{i64 7977}
!589 = !{i64 7981}
!590 = !{i64 7986}
!591 = !{i64 7990}
!592 = !{i64 7995}
!593 = !{i64 7999}
!594 = !{i64 8003}
!595 = !{i64 8008}
!596 = !{i64 8012}
!597 = !{i64 8016}
!598 = !{i64 8021}
!599 = !{i64 8025}
!600 = !{i64 8030}
!601 = !{i64 8035}
!602 = !{i64 8039}
!603 = !{i64 8043}
!604 = !{i64 8049}
!605 = !{i64 8054}
!606 = !{i64 8058}
!607 = !{i64 8062}
!608 = !{i64 8067}
!609 = !{i64 8071}
!610 = !{i64 8076}
!611 = !{i64 8080}
!612 = !{i64 8085}
!613 = !{i64 8090}
!614 = !{i64 8094}
!615 = !{i64 8099}
!616 = !{i64 8103}
!617 = !{i64 8107}
!618 = !{i64 8112}
!619 = !{i64 8117}
!620 = !{i64 8122}
!621 = !{i64 8127}
!622 = !{i64 8131}
!623 = !{i64 8136}
!624 = !{i64 8139}
!625 = !{i64 7814}
!626 = !{i64 8145}
!627 = !{i64 8147}
!628 = !{i64 8149}
!629 = !{i64 8157}
!630 = !{i64 8175}
!631 = !{i64 8176}
!632 = !{i64 8180}
!633 = !{i64 8184}
!634 = !{i64 8189}
!635 = !{i64 8193}
!636 = !{i64 8198}
!637 = !{i64 8203}
!638 = !{i64 8207}
!639 = !{i64 8212}
!640 = !{i64 8216}
!641 = !{i64 8221}
!642 = !{i64 8225}
!643 = !{i64 8230}
!644 = !{i64 8235}
!645 = !{i64 8239}
!646 = !{i64 8244}
!647 = !{i64 8248}
!648 = !{i64 8252}
!649 = !{i64 8255}
!650 = !{i64 8257}
!651 = !{i64 8262}
!652 = !{i64 8267}
!653 = !{i64 8271}
!654 = !{i64 8275}
!655 = !{i64 8280}
!656 = !{i64 8284}
!657 = !{i64 8289}
!658 = !{i64 8293}
!659 = !{i64 8297}
!660 = !{i64 8301}
!661 = !{i64 8304}
!662 = !{i64 8306}
!663 = !{i64 8319}
!664 = !{i64 8320}
!665 = !{i64 8323}
!666 = !{i64 8326}
!667 = !{i64 8329}
!668 = !{i64 8331}
!669 = !{i64 8333}
!670 = !{i64 8336}
!671 = !{i64 8338}
!672 = !{i64 8340}
!673 = !{i64 8342}
!674 = !{i64 8345}
!675 = !{i64 8352}
!676 = !{i64 8358}
!677 = !{i64 8360}
!678 = !{i64 8362}
!679 = !{i64 8364}
!680 = !{i64 8366}
!681 = !{i64 8369}
!682 = !{i64 8371}
!683 = !{i64 8373}
!684 = !{i64 8376}
!685 = !{i64 8378}
!686 = !{i64 8383}
!687 = !{i64 8400}
!688 = !{i64 8403}
!689 = !{i64 8406}
!690 = !{i64 8408}
!691 = !{i64 8411}
!692 = !{i64 8415}
!693 = !{i64 8416}
!694 = !{i64 8437}
!695 = !{i64 8448}
!696 = !{i64 8451}
!697 = !{i64 8458}
!698 = !{i64 8459}
!699 = !{i64 8470}
!700 = !{i64 8480}
!701 = !{i64 8483}
!702 = !{i64 8496}
!703 = !{i64 8499}
!704 = !{i64 8512}
!705 = !{i64 8515}
!706 = !{i64 8528}
!707 = !{i64 8536}
!708 = !{i64 8538}
!709 = !{i64 8546}
!710 = !{i64 8553}
!711 = !{i64 8567}
!712 = !{i64 8569}
!713 = !{i64 8573}
!714 = !{i64 8576}
!715 = !{i64 8592}
!716 = !{i64 8608}
!717 = !{i64 8623}
!718 = !{i64 8644}
!719 = !{i64 8678}
!720 = !{i64 8707}
!721 = !{i64 8672}
!722 = !{i64 8760}
!723 = !{i64 8787}
!724 = !{i64 8802}
!725 = !{i64 8817}
!726 = !{i64 8844}
!727 = !{i64 8859}
!728 = !{i64 8878}
!729 = !{i64 8888}
!730 = !{i64 8896}
!731 = !{i64 8899}
!732 = !{i64 8902}
!733 = !{i64 8905}
!734 = !{i64 8907}
!735 = !{i64 8909}
!736 = !{i64 8912}
!737 = !{i64 8915}
!738 = !{i64 8918}
!739 = !{i64 8933}
!740 = !{i64 8952}
!741 = !{i64 9045}
!742 = !{i64 9064}
!743 = !{i64 9083}
!744 = !{i64 9102}
!745 = !{i64 9121}
!746 = !{i64 9143}
!747 = !{i64 9158}
!748 = !{i64 9185}
!749 = !{i64 9210}
!750 = !{i64 9220}
!751 = !{i64 9222}
!752 = !{i64 9227}
!753 = !{i64 9228}
!754 = !{i64 9230}
!755 = !{i64 9232}
!756 = !{i64 9235}
!757 = !{i64 9201}
!758 = !{i64 9241}
!759 = !{i64 9244}
!760 = !{i64 9257}
!761 = !{i64 9274}
!762 = !{i64 9280}
!763 = !{i64 9283}
!764 = !{i64 9291}
!765 = !{i64 9294}
!766 = !{i64 9301}
!767 = !{i64 9304}
!768 = !{i64 9312}
!769 = !{i64 9315}
!770 = !{i64 9322}
!771 = !{i64 9323}
!772 = !{i64 9336}
!773 = !{i64 9344}
!774 = !{i64 9347}
!775 = !{i64 9362}
!776 = !{i64 9364}
!777 = !{i64 9378}
!778 = !{i64 9381}
!779 = !{i64 9392}
!780 = !{i64 9394}
!781 = !{i64 9398}
!782 = !{i64 9399}
!783 = !{i64 9401}
!784 = !{i64 9404}
!785 = !{i64 9408}
!786 = !{i64 9410}
!787 = !{i64 9414}
!788 = !{i64 9415}
!789 = !{i64 9417}
!790 = !{i64 9419}
!791 = !{i64 9422}
!792 = !{i64 9426}
!793 = !{i64 9428}
!794 = !{i64 9442}
!795 = !{i64 9444}
!796 = !{i64 9458}
!797 = !{i64 9460}
!798 = !{i64 9474}
!799 = !{i64 9476}
!800 = !{i64 9478}
!801 = !{i64 9490}
!802 = !{i64 9492}
!803 = !{i64 9494}
!804 = !{i64 9504}
!805 = !{i64 9521}
!806 = !{i64 9525}
!807 = !{i64 9534}
!808 = !{i64 9540}
!809 = !{i64 9552}
!810 = !{i64 9555}
!811 = !{i64 9557}
!812 = !{i64 9575}
!813 = !{i64 9591}
!814 = !{i64 9594}
!815 = !{i64 9600}
!816 = !{i64 9602}
!817 = !{i64 9605}
!818 = !{i64 9608}
!819 = !{i64 9611}
!820 = !{i64 9614}
!821 = !{i64 9616}
!822 = !{i64 9619}
!823 = !{i64 9622}
!824 = !{i64 9632}
!825 = !{i64 9635}
!826 = !{i64 9642}
!827 = !{i64 9643}
!828 = !{i64 9652}
!829 = !{i64 9666}
!830 = !{i64 9669}
!831 = !{i64 9672}
!832 = !{i64 9682}
!833 = !{i64 9688}
!834 = !{i64 9690}
!835 = !{i64 9693}
!836 = !{i64 9696}
!837 = !{i64 9699}
!838 = !{i64 9717}
!839 = !{i64 9730}
!840 = !{i64 9732}
!841 = !{i64 9735}
!842 = !{i64 9738}
!843 = !{i64 9744}
!844 = !{i64 9755}
!845 = !{i64 9764}
!846 = !{i64 9754}
!847 = !{i64 9792}
!848 = !{i64 9795}
!849 = !{i64 9808}
!850 = !{i64 9811}
!851 = !{i64 9824}
!852 = !{i64 9828}
!853 = !{i64 9830}
!854 = !{i64 9832}
!855 = !{i64 9835}
!856 = !{i64 9837}
!857 = !{i64 9839}
!858 = !{i64 9840}
!859 = !{i64 9843}
!860 = !{i64 9846}
!861 = !{i64 9864}
!862 = !{i64 9874}
!863 = !{i64 9889}
!864 = !{i64 9893}
!865 = !{i64 9903}
!866 = !{i64 9911}
!867 = !{i64 9915}
!868 = !{i64 9937}
!869 = !{i64 9952}
!870 = !{i64 9971}
!871 = !{i64 9990}
!872 = !{i64 10009}
!873 = !{i64 10028}
!874 = !{i64 10038}
!875 = !{i64 10050}
!876 = !{i64 10054}
!877 = !{i64 10073}
!878 = !{i64 10092}
!879 = !{i64 10112}
!880 = !{i64 10129}
!881 = !{i64 10134}
!882 = !{i64 10139}
!883 = !{i64 10147}
!884 = !{i64 10160}
