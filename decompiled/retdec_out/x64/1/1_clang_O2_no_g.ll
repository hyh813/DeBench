source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@0 = external local_unnamed_addr global i64
@global_var_3004 = local_unnamed_addr constant i64 -31280246824029
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
@global_var_30a8 = local_unnamed_addr constant i64 -23961622550048
@global_var_5d40 = local_unnamed_addr global i64 8464
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
@global_var_5d60 = local_unnamed_addr global i64 9328
@global_var_30c8 = local_unnamed_addr constant i64 -12502649801583
@global_var_5db0 = local_unnamed_addr global i64 9648
@global_var_5dd0 = local_unnamed_addr global i64 9751
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
  %3 = call i32 @__libc_start_main(i64 10112, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !11
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

define i64 @loop_nested(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1360:
  %0 = trunc i64 %arg2 to i32, !insn.addr !116
  %1 = icmp slt i32 %0, 1
  %arg2.op = mul i64 %arg2, 4294967296
  %arg2.op.op = ashr exact i64 %arg2.op, 32
  %2 = select i1 %1, i64 0, i64 %arg2.op.op, !insn.addr !117
  %sext = mul i64 %arg1, 4294967296
  %3 = ashr exact i64 %sext, 32, !insn.addr !117
  %4 = mul nsw i64 %2, %3, !insn.addr !117
  %5 = trunc i64 %arg1 to i32, !insn.addr !118
  %6 = icmp eq i32 %5, 0, !insn.addr !118
  %7 = icmp slt i32 %5, 0, !insn.addr !118
  %8 = icmp eq i1 %7, false, !insn.addr !119
  %9 = icmp eq i1 %6, false, !insn.addr !119
  %10 = icmp eq i1 %8, %9, !insn.addr !119
  %11 = and i64 %4, 4294967295
  %12 = select i1 %10, i64 %11, i64 0, !insn.addr !119
  ret i64 %12, !insn.addr !120

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_1370:
  %0 = trunc i64 %arg1 to i32, !insn.addr !121
  %1 = add i32 %0, -10, !insn.addr !121
  %2 = icmp ult i32 %1, 41
  %spec.select = select i1 %2, i64 0, i64 4294967295
  ret i64 %spec.select, !insn.addr !122
}

define i64 @function_1396() local_unnamed_addr {
dec_label_pc_1396:
  ret i64 2, !insn.addr !123
}

define i64 @function_139c() local_unnamed_addr {
dec_label_pc_139c:
  ret i64 3, !insn.addr !124
}

define i64 @function_13a2() local_unnamed_addr {
dec_label_pc_13a2:
  ret i64 4, !insn.addr !125
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b0:
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
  br i1 %6, label %dec_label_pc_13c5, label %dec_label_pc_13b4, !insn.addr !127

dec_label_pc_13b4:                                ; preds = %dec_label_pc_13b0
  %7 = icmp ult i32 %5, 8, !insn.addr !128
  %8 = icmp eq i1 %7, false, !insn.addr !129
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !129
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !129
  br i1 %8, label %dec_label_pc_13c8, label %dec_label_pc_14eb, !insn.addr !129

dec_label_pc_13c5:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14ca, %dec_label_pc_13b0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !130

dec_label_pc_13c8:                                ; preds = %dec_label_pc_13b4
  %9 = and i64 %arg1, 4294967288, !insn.addr !131
  %10 = trunc i64 %9 to i32
  %11 = add i32 %10, -8, !insn.addr !132
  %12 = udiv i32 %11, 8, !insn.addr !133
  %13 = add nuw nsw i32 %12, 1, !insn.addr !134
  %14 = zext i32 %13 to i64, !insn.addr !134
  %15 = icmp eq i32 %11, 0, !insn.addr !135
  br i1 %15, label %dec_label_pc_1503, label %dec_label_pc_13e0, !insn.addr !136

dec_label_pc_13e0:                                ; preds = %dec_label_pc_13c8
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
  br label %dec_label_pc_1430, !insn.addr !147

dec_label_pc_1430:                                ; preds = %dec_label_pc_1430, %dec_label_pc_13e0
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
  br i1 %56, label %dec_label_pc_1430, label %dec_label_pc_1492, !insn.addr !171

dec_label_pc_1492:                                ; preds = %dec_label_pc_1430
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
  br i1 %58, label %dec_label_pc_14ca, label %dec_label_pc_1496, !insn.addr !173

dec_label_pc_1496:                                ; preds = %dec_label_pc_1503.dec_label_pc_1496_crit_edge, %dec_label_pc_1492
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
  br label %dec_label_pc_14ca, !insn.addr !184

dec_label_pc_14ca:                                ; preds = %dec_label_pc_1503, %dec_label_pc_1496, %dec_label_pc_1492
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
  br i1 %77, label %dec_label_pc_13c5, label %dec_label_pc_14e8, !insn.addr !192

dec_label_pc_14e8:                                ; preds = %dec_label_pc_14ca
  %78 = or i64 %9, 1, !insn.addr !193
  store i64 %76, i64* %rax.0.reg2mem, !insn.addr !193
  store i64 %78, i64* %storemerge.reg2mem, !insn.addr !193
  br label %dec_label_pc_14eb, !insn.addr !193

dec_label_pc_14eb:                                ; preds = %dec_label_pc_13b4, %dec_label_pc_14e8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %79 = add i32 %5, 1, !insn.addr !194
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !195
  store i64 %storemerge.reload, i64* %rcx.0.reg2mem, !insn.addr !195
  br label %dec_label_pc_14f0, !insn.addr !195

dec_label_pc_14f0:                                ; preds = %dec_label_pc_14f0, %dec_label_pc_14eb
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
  br i1 %89, label %dec_label_pc_14f0, label %dec_label_pc_13c5, !insn.addr !201

dec_label_pc_1503:                                ; preds = %dec_label_pc_13c8
  %90 = call i128 @__asm_pxor(i128 %4, i128 %4), !insn.addr !202
  %91 = load i128, i128* @global_var_3140, align 8, !insn.addr !203
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !203
  %93 = call i128 @__asm_pxor(i128 %3, i128 %3), !insn.addr !204
  %94 = urem i64 %14, 2
  %95 = icmp eq i64 %94, 0, !insn.addr !205
  %96 = icmp eq i1 %95, false, !insn.addr !206
  store i128 %90, i128* %xmm0.2.reg2mem, !insn.addr !206
  store i128 %93, i128* %xmm2.1.reg2mem, !insn.addr !206
  br i1 %96, label %dec_label_pc_1503.dec_label_pc_1496_crit_edge, label %dec_label_pc_14ca, !insn.addr !206

dec_label_pc_1503.dec_label_pc_1496_crit_edge:    ; preds = %dec_label_pc_1503
  %.pre = load i128, i128* @global_var_3150, align 8
  %.pre9 = load i128, i128* @global_var_3160, align 8
  store i128 %.pre9, i128* %.reg2mem
  store i128 %.pre, i128* %.reg2mem18
  store i128 %90, i128* %xmm0.1.reg2mem
  store i128 %93, i128* %xmm2.0.reg2mem
  store i128 %92, i128* %xmm5.1.reg2mem
  br label %dec_label_pc_1496

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
  uselistorder label %dec_label_pc_14eb, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_1520:
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
dec_label_pc_1530:
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
  br i1 %1, label %dec_label_pc_157a, label %dec_label_pc_1534, !insn.addr !213

dec_label_pc_1534:                                ; preds = %dec_label_pc_1530
  %2 = icmp ult i32 %0, 8, !insn.addr !214
  store i64 1, i64* %rax.1.reg2mem, !insn.addr !215
  store i64 1, i64* %rcx.0.reg2mem, !insn.addr !215
  br i1 %2, label %dec_label_pc_1770, label %dec_label_pc_1547, !insn.addr !215

dec_label_pc_1547:                                ; preds = %dec_label_pc_1534
  %3 = and i64 %arg1, 4294967288, !insn.addr !216
  %4 = trunc i64 %3 to i32
  %5 = add i32 %4, -8, !insn.addr !217
  %6 = udiv i32 %5, 8, !insn.addr !218
  %7 = add nuw nsw i32 %6, 1, !insn.addr !219
  %8 = icmp ult i32 %5, 24, !insn.addr !220
  %9 = icmp eq i1 %8, false, !insn.addr !221
  br i1 %9, label %dec_label_pc_1580, label %dec_label_pc_1561, !insn.addr !221

dec_label_pc_1561:                                ; preds = %dec_label_pc_1547
  %10 = load i128, i128* @global_var_3160, align 8, !insn.addr !222
  %11 = call i128 @__asm_movdqa(i128 %10), !insn.addr !222
  %12 = load i128, i128* @global_var_3140, align 8, !insn.addr !223
  %13 = call i128 @__asm_movdqa(i128 %12), !insn.addr !223
  %14 = call i128 @__asm_movdqa(i128 %11), !insn.addr !224
  store i128 %13, i128* %xmm0.1.reg2mem, !insn.addr !225
  store i128 %11, i128* %xmm1.1.reg2mem, !insn.addr !225
  store i128 %14, i128* %xmm4.1.reg2mem, !insn.addr !225
  br label %dec_label_pc_16c1, !insn.addr !225

dec_label_pc_157a:                                ; preds = %dec_label_pc_1780, %dec_label_pc_173d, %dec_label_pc_1530
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !226

dec_label_pc_1580:                                ; preds = %dec_label_pc_1547
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
  br label %dec_label_pc_15e0, !insn.addr !237

dec_label_pc_15e0:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_1580
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
  br i1 %84, label %dec_label_pc_15e0, label %dec_label_pc_16c1, !insn.addr !286

dec_label_pc_16c1:                                ; preds = %dec_label_pc_15e0, %dec_label_pc_1561
  %85 = urem i32 %7, 4, !insn.addr !287
  %xmm4.1.reload = load i128, i128* %xmm4.1.reg2mem
  %xmm1.1.reload = load i128, i128* %xmm1.1.reg2mem
  %86 = call i128 @__asm_movdqa(i128 %xmm1.1.reload), !insn.addr !288
  %87 = call i128 @__asm_movdqa(i128 %xmm4.1.reload), !insn.addr !289
  %88 = icmp eq i32 %85, 0, !insn.addr !290
  store i128 %86, i128* %xmm5.0.reg2mem, !insn.addr !291
  store i128 %87, i128* %xmm6.0.reg2mem, !insn.addr !291
  br i1 %88, label %dec_label_pc_173d, label %dec_label_pc_16cd, !insn.addr !291

dec_label_pc_16cd:                                ; preds = %dec_label_pc_16c1
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %89 = load i128, i128* @global_var_3150, align 8, !insn.addr !292
  %90 = call i128 @__asm_movdqa(i128 %89), !insn.addr !292
  %91 = load i128, i128* @global_var_3170, align 8, !insn.addr !293
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !293
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !294
  store i128 %xmm1.1.reload, i128* %xmm1.2.reg2mem, !insn.addr !294
  store i128 %xmm4.1.reload, i128* %xmm4.2.reg2mem, !insn.addr !294
  store i32 %85, i32* %rax.0.in.reg2mem, !insn.addr !294
  br label %dec_label_pc_16e0, !insn.addr !294

dec_label_pc_16e0:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_16cd
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
  br i1 %115, label %dec_label_pc_16e0, label %dec_label_pc_173d, !insn.addr !316

dec_label_pc_173d:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_16c1
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
  br i1 %127, label %dec_label_pc_157a, label %dec_label_pc_176d, !insn.addr !328

dec_label_pc_176d:                                ; preds = %dec_label_pc_173d
  %128 = or i64 %3, 1, !insn.addr !329
  store i64 %126, i64* %rax.1.reg2mem, !insn.addr !329
  store i64 %128, i64* %rcx.0.reg2mem, !insn.addr !329
  br label %dec_label_pc_1770, !insn.addr !329

dec_label_pc_1770:                                ; preds = %dec_label_pc_176d, %dec_label_pc_1534
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %129 = add i32 %0, 1, !insn.addr !330
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !331
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !331
  br label %dec_label_pc_1780, !insn.addr !331

dec_label_pc_1780:                                ; preds = %dec_label_pc_1780, %dec_label_pc_1770
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
  br i1 %138, label %dec_label_pc_1780, label %dec_label_pc_157a, !insn.addr !334

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
dec_label_pc_1790:
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
dec_label_pc_17a0:
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
dec_label_pc_19a0:
  %rax.0.reg2mem = alloca i64, !insn.addr !366
  %0 = add i64 %arg1, 4294967295, !insn.addr !366
  %1 = trunc i64 %0 to i32, !insn.addr !367
  %2 = icmp ult i32 %1, 12
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !368
  br i1 %2, label %dec_label_pc_19ad, label %dec_label_pc_19c4, !insn.addr !368

dec_label_pc_19ad:                                ; preds = %dec_label_pc_19a0
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
  br label %dec_label_pc_19c4, !insn.addr !370

dec_label_pc_19c4:                                ; preds = %dec_label_pc_19a0, %dec_label_pc_19ad
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !371

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_19c4, { 1, 0 }
}

define i64 @infinite_loop(i64 %arg1) local_unnamed_addr {
dec_label_pc_19d0:
  %storemerge23.reg2mem = alloca i64, !insn.addr !372
  %0 = trunc i64 %arg1 to i32
  %1 = icmp eq i32 %0, 1, !insn.addr !373
  br i1 %1, label %dec_label_pc_1a17, label %dec_label_pc_19e7.preheader, !insn.addr !374

dec_label_pc_19e7.preheader:                      ; preds = %dec_label_pc_19d0
  store i64 0, i64* %storemerge23.reg2mem, !insn.addr !375
  br i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), label %dec_label_pc_1a08, label %dec_label_pc_1a03, !insn.addr !375

dec_label_pc_1a03:                                ; preds = %dec_label_pc_19e7.preheader, %dec_label_pc_1a03
  %storemerge23.reload = load i64, i64* %storemerge23.reg2mem
  %2 = add nuw nsw i64 %storemerge23.reload, 4, !insn.addr !376
  %3 = and i64 %2, 4294967295, !insn.addr !376
  %4 = trunc i64 %2 to i32
  %5 = icmp eq i32 %4, ptrtoint (i32* @global_var_3e8 to i32)
  store i64 %3, i64* %storemerge23.reg2mem, !insn.addr !375
  br i1 %5, label %dec_label_pc_1a08, label %dec_label_pc_1a03, !insn.addr !375

dec_label_pc_1a08:                                ; preds = %dec_label_pc_1a03, %dec_label_pc_19e7.preheader
  %6 = inttoptr i64 %arg1 to i32*, !insn.addr !377
  store i32 1, i32* %6, align 4, !insn.addr !377
  ret i64 ptrtoint (i32* @global_var_3e9 to i64), !insn.addr !378

dec_label_pc_1a17:                                ; preds = %dec_label_pc_19d0
  ret i64 0, !insn.addr !379

; uselistorder directives
  uselistorder i64* %storemerge23.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1a03, { 1, 0 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a20:
  %rax.0.reg2mem = alloca i64, !insn.addr !380
  %0 = trunc i64 %arg1 to i32, !insn.addr !380
  %1 = icmp slt i32 %0, 0, !insn.addr !380
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !381
  br i1 %1, label %dec_label_pc_1a3d, label %dec_label_pc_1a24, !insn.addr !381

dec_label_pc_1a24:                                ; preds = %dec_label_pc_1a20
  %2 = icmp ult i32 %0, 51
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !382
  br i1 %2, label %dec_label_pc_1a2e, label %dec_label_pc_1a3d, !insn.addr !382

dec_label_pc_1a2e:                                ; preds = %dec_label_pc_1a24
  %3 = mul i64 %arg1, 2, !insn.addr !383
  %4 = add i64 %arg1, 1, !insn.addr !384
  %5 = urem i64 %arg1, 2
  %6 = icmp eq i64 %5, 0, !insn.addr !385
  %7 = select i1 %6, i64 %3, i64 %4, !insn.addr !386
  %8 = and i64 %7, 4294967295, !insn.addr !386
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !386
  br label %dec_label_pc_1a3d, !insn.addr !386

dec_label_pc_1a3d:                                ; preds = %dec_label_pc_1a20, %dec_label_pc_1a24, %dec_label_pc_1a2e
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !387

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 %arg1, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_1a3d, { 2, 1, 0 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1a50:
  %0 = mul i64 %arg1, 2, !insn.addr !388
  %1 = sub i64 0, %arg1, !insn.addr !389
  %2 = trunc i64 %arg1 to i32, !insn.addr !390
  %3 = icmp eq i32 %2, 0, !insn.addr !390
  %4 = icmp slt i32 %2, 0, !insn.addr !390
  %5 = icmp eq i1 %4, false, !insn.addr !391
  %6 = icmp eq i1 %3, false, !insn.addr !391
  %7 = icmp eq i1 %5, %6, !insn.addr !391
  %8 = select i1 %7, i64 %0, i64 %1, !insn.addr !391
  %9 = and i64 %8, 4294967295, !insn.addr !391
  ret i64 %9, !insn.addr !392

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg1, { 2, 1, 0 }
}

define i64 @duffs_device(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1a60:
  %0 = trunc i64 %arg3 to i32, !insn.addr !393
  %1 = icmp slt i32 %0, 1
  br i1 %1, label %dec_label_pc_1af4, label %dec_label_pc_1a6d, !insn.addr !394

dec_label_pc_1a6d:                                ; preds = %dec_label_pc_1a60
  %2 = add i64 %arg3, 7, !insn.addr !395
  %3 = udiv i64 %2, 8, !insn.addr !396
  %4 = urem i64 %3, 536870912, !insn.addr !396
  ret i64 %4, !insn.addr !397

dec_label_pc_1af4:                                ; preds = %dec_label_pc_1a60
  ret i64 4294967295, !insn.addr !398
}

define i64 @loop_complex_cond(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1b00:
  %rdi.1.reg2mem = alloca i64, !insn.addr !399
  %rcx.0.reg2mem = alloca i64, !insn.addr !399
  %rax.1.reg2mem = alloca i64, !insn.addr !399
  %rdi.0.reg2mem = alloca i64, !insn.addr !399
  %rdx.0.reg2mem = alloca i64, !insn.addr !399
  %rax.0.reg2mem = alloca i64, !insn.addr !399
  %0 = trunc i64 %arg1 to i32, !insn.addr !399
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !400
  store i64 0, i64* %rdx.0.reg2mem, !insn.addr !400
  store i64 %arg1, i64* %rdi.0.reg2mem, !insn.addr !400
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !400
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !400
  store i64 %arg1, i64* %rdi.1.reg2mem, !insn.addr !400
  br i1 %1, label %dec_label_pc_1b31, label %dec_label_pc_1b10, !insn.addr !400

dec_label_pc_1b10:                                ; preds = %dec_label_pc_1b00, %dec_label_pc_1b10
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rax.0.reload, 2, !insn.addr !401
  %3 = and i64 %2, 4294967295, !insn.addr !401
  %4 = add i64 %rdi.0.reload, 4294967295, !insn.addr !402
  %5 = and i64 %4, 4294967295, !insn.addr !402
  %6 = add nuw nsw i64 %rdx.0.reload, 1, !insn.addr !403
  %7 = and i64 %6, 4294967295, !insn.addr !403
  %8 = trunc i64 %rdi.0.reload to i32, !insn.addr !404
  %9 = icmp ugt i32 %8, 1, !insn.addr !404
  %10 = icmp ult i64 %3, %5, !insn.addr !405
  %or.cond = icmp eq i1 %9, %10
  %11 = icmp ult i64 %rdx.0.reload, 9
  %or.cond2 = icmp eq i1 %11, %or.cond
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !406
  store i64 %7, i64* %rdx.0.reg2mem, !insn.addr !406
  store i64 %5, i64* %rdi.0.reg2mem, !insn.addr !406
  store i64 %3, i64* %rax.1.reg2mem, !insn.addr !406
  store i64 %7, i64* %rcx.0.reg2mem, !insn.addr !406
  store i64 %5, i64* %rdi.1.reg2mem, !insn.addr !406
  br i1 %or.cond2, label %dec_label_pc_1b10, label %dec_label_pc_1b31, !insn.addr !406

dec_label_pc_1b31:                                ; preds = %dec_label_pc_1b10, %dec_label_pc_1b00
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %12 = add nuw nsw i64 %rcx.0.reload, %rax.1.reload, !insn.addr !407
  %13 = add i64 %12, %rdi.1.reload, !insn.addr !408
  %14 = and i64 %13, 4294967295, !insn.addr !408
  ret i64 %14, !insn.addr !409

; uselistorder directives
  uselistorder i64 %rdx.0.reload, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b10, { 1, 0 }
}

define i64 @loop_modify_var(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_1b40:
  %merge.reg2mem = alloca i64, !insn.addr !410
  %rcx.0.reg2mem = alloca i64, !insn.addr !410
  %rax.0.reg2mem = alloca i64, !insn.addr !410
  %0 = trunc i64 %arg1 to i32, !insn.addr !410
  %1 = icmp slt i32 %0, 1
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !411
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !411
  store i64 0, i64* %merge.reg2mem, !insn.addr !411
  br i1 %1, label %dec_label_pc_1b64, label %dec_label_pc_1b50, !insn.addr !411

dec_label_pc_1b50:                                ; preds = %dec_label_pc_1b40, %dec_label_pc_1b50
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %2 = add nuw nsw i64 %rcx.0.reload, %rax.0.reload, !insn.addr !412
  %3 = and i64 %2, 4294967295, !insn.addr !412
  %4 = add nuw nsw i64 %rcx.0.reload, 2, !insn.addr !413
  %5 = trunc i64 %rcx.0.reload to i32, !insn.addr !414
  %6 = add i32 %5, -6, !insn.addr !414
  %7 = sub i32 5, %5
  %8 = and i32 %7, %5, !insn.addr !414
  %9 = icmp slt i32 %8, 0, !insn.addr !414
  %10 = icmp slt i32 %6, 0, !insn.addr !414
  %11 = icmp eq i1 %10, %9, !insn.addr !415
  %12 = select i1 %11, i64 %4, i64 %rcx.0.reload, !insn.addr !415
  %13 = add nuw nsw i64 %12, 1, !insn.addr !416
  %14 = and i64 %13, 4294967295, !insn.addr !416
  %15 = icmp slt i64 %14, %arg1, !insn.addr !417
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !417
  store i64 %14, i64* %rcx.0.reg2mem, !insn.addr !417
  store i64 %3, i64* %merge.reg2mem, !insn.addr !417
  br i1 %15, label %dec_label_pc_1b50, label %dec_label_pc_1b64, !insn.addr !417

dec_label_pc_1b64:                                ; preds = %dec_label_pc_1b50, %dec_label_pc_1b40
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !418

; uselistorder directives
  uselistorder i64 %rcx.0.reload, { 2, 0, 1, 3 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.0.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1b50, { 1, 0 }
}

define i64 @loop_external_state() local_unnamed_addr {
dec_label_pc_1b70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0
  %4 = icmp eq i1 %3, false, !insn.addr !419
  %spec.select = select i1 %4, i64 0, i64 101
  ret i64 %spec.select, !insn.addr !420
}

define i64 @recursion_factorial(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bb0:
  %rax.2.reg2mem = alloca i64, !insn.addr !421
  %rdi.0.reg2mem = alloca i64, !insn.addr !421
  %rax.1.reg2mem = alloca i64, !insn.addr !421
  %rdi.0.ph.reg2mem = alloca i64, !insn.addr !421
  %rax.1.ph.reg2mem = alloca i64, !insn.addr !421
  %xmm5.0.reg2mem = alloca i128, !insn.addr !421
  %xmm0.0.reg2mem = alloca i128, !insn.addr !421
  %rax.0.in.reg2mem = alloca i32, !insn.addr !421
  %xmm6.2.reg2mem = alloca i128, !insn.addr !421
  %xmm4.2.reg2mem = alloca i128, !insn.addr !421
  %xmm1.2.reg2mem = alloca i128, !insn.addr !421
  %xmm6.1.reg2mem = alloca i128, !insn.addr !421
  %xmm4.1.reg2mem = alloca i128, !insn.addr !421
  %xmm1.1.reg2mem = alloca i128, !insn.addr !421
  %rsi.0.in.reg2mem = alloca i32, !insn.addr !421
  %xmm6.0.reg2mem = alloca i128, !insn.addr !421
  %xmm4.0.reg2mem = alloca i128, !insn.addr !421
  %xmm1.0.reg2mem = alloca i128, !insn.addr !421
  %0 = trunc i64 %arg1 to i32, !insn.addr !422
  %1 = icmp slt i32 %0, 2, !insn.addr !422
  store i64 1, i64* %rax.2.reg2mem, !insn.addr !422
  br i1 %1, label %dec_label_pc_1e1d, label %dec_label_pc_1bbe, !insn.addr !422

dec_label_pc_1bbe:                                ; preds = %dec_label_pc_1bb0
  %.op = add i64 %arg1, 4294967295
  %2 = trunc i64 %.op to i32, !insn.addr !423
  %3 = icmp ult i32 %2, 8, !insn.addr !423
  store i64 1, i64* %rax.1.ph.reg2mem, !insn.addr !424
  store i64 %arg1, i64* %rdi.0.ph.reg2mem, !insn.addr !424
  br i1 %3, label %dec_label_pc_1e10.preheader, label %dec_label_pc_1bd9, !insn.addr !424

dec_label_pc_1bd9:                                ; preds = %dec_label_pc_1bbe
  %4 = and i64 %.op, 4294967288, !insn.addr !425
  %5 = call i128 @__asm_movd.1(i32 %0), !insn.addr !426
  %6 = call i128 @__asm_pshufd(i128 %5, i8 0), !insn.addr !427
  %7 = load i128, i128* @global_var_31e0, align 8, !insn.addr !428
  %8 = call i128 @__asm_paddd(i128 %6, i128 %7), !insn.addr !428
  %9 = trunc i64 %4 to i32
  %10 = add i32 %9, -8, !insn.addr !429
  %11 = udiv i32 %10, 8, !insn.addr !430
  %12 = add nuw nsw i32 %11, 1, !insn.addr !431
  %13 = icmp ult i32 %10, 24, !insn.addr !432
  %14 = icmp eq i1 %13, false, !insn.addr !433
  br i1 %14, label %dec_label_pc_1c18, label %dec_label_pc_1c07, !insn.addr !433

dec_label_pc_1c07:                                ; preds = %dec_label_pc_1bd9
  %15 = load i128, i128* @global_var_3160, align 8, !insn.addr !434
  %16 = call i128 @__asm_movdqa(i128 %15), !insn.addr !434
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !435
  store i128 %16, i128* %xmm1.1.reg2mem, !insn.addr !436
  store i128 %17, i128* %xmm4.1.reg2mem, !insn.addr !436
  store i128 %8, i128* %xmm6.1.reg2mem, !insn.addr !436
  br label %dec_label_pc_1d51, !insn.addr !436

dec_label_pc_1c18:                                ; preds = %dec_label_pc_1bd9
  %18 = and i32 %12, 1073741820
  %19 = load i128, i128* @global_var_3160, align 8, !insn.addr !437
  %20 = call i128 @__asm_movdqa(i128 %19), !insn.addr !437
  %21 = load i128, i128* @global_var_3200, align 8, !insn.addr !438
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !438
  %23 = load i128, i128* @global_var_3210, align 8, !insn.addr !439
  %24 = call i128 @__asm_movdqa(i128 %23), !insn.addr !439
  %25 = load i128, i128* @global_var_3220, align 8, !insn.addr !440
  %26 = call i128 @__asm_movdqa(i128 %25), !insn.addr !440
  %27 = load i128, i128* @global_var_3230, align 8, !insn.addr !441
  %28 = call i128 @__asm_movdqa(i128 %27), !insn.addr !441
  %29 = load i128, i128* @global_var_3240, align 8, !insn.addr !442
  %30 = call i128 @__asm_movdqa(i128 %29), !insn.addr !442
  %31 = load i128, i128* @global_var_3250, align 8, !insn.addr !443
  %32 = call i128 @__asm_movdqa(i128 %31), !insn.addr !443
  %33 = load i128, i128* @global_var_3260, align 8, !insn.addr !444
  %34 = call i128 @__asm_movdqa(i128 %33), !insn.addr !444
  %35 = call i128 @__asm_movdqa(i128 %20), !insn.addr !445
  %36 = load i128, i128* @global_var_31f0, align 8
  store i128 %20, i128* %xmm1.0.reg2mem, !insn.addr !446
  store i128 %35, i128* %xmm4.0.reg2mem, !insn.addr !446
  store i128 %8, i128* %xmm6.0.reg2mem, !insn.addr !446
  store i32 %18, i32* %rsi.0.in.reg2mem, !insn.addr !446
  br label %dec_label_pc_1c70, !insn.addr !446

dec_label_pc_1c70:                                ; preds = %dec_label_pc_1c70, %dec_label_pc_1c18
  %rsi.0.in.reload = load i32, i32* %rsi.0.in.reg2mem
  %xmm6.0.reload = load i128, i128* %xmm6.0.reg2mem
  %xmm4.0.reload = load i128, i128* %xmm4.0.reg2mem
  %xmm1.0.reload = load i128, i128* %xmm1.0.reg2mem
  %37 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !447
  %38 = call i128 @__asm_paddd(i128 %37, i128 %36), !insn.addr !448
  %39 = call i128 @__asm_pshufd(i128 %xmm1.0.reload, i8 -11), !insn.addr !449
  %40 = call i128 @__asm_pshufd(i128 %xmm6.0.reload, i8 -11), !insn.addr !450
  %41 = call i128 @__asm_pmuludq(i128 %40, i128 %39), !insn.addr !451
  %42 = call i128 @__asm_pmuludq(i128 %xmm1.0.reload, i128 %xmm6.0.reload), !insn.addr !452
  %43 = call i128 @__asm_pshufd(i128 %xmm4.0.reload, i8 -11), !insn.addr !453
  %44 = call i128 @__asm_pshufd(i128 %38, i8 -11), !insn.addr !454
  %45 = call i128 @__asm_pmuludq(i128 %44, i128 %43), !insn.addr !455
  %46 = call i128 @__asm_pmuludq(i128 %38, i128 %xmm4.0.reload), !insn.addr !456
  %47 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !457
  %48 = call i128 @__asm_paddd(i128 %47, i128 %22), !insn.addr !458
  %49 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !459
  %50 = call i128 @__asm_paddd(i128 %49, i128 %24), !insn.addr !460
  %51 = call i128 @__asm_pmuludq(i128 %42, i128 %48), !insn.addr !461
  %52 = call i128 @__asm_pshufd(i128 %48, i8 -11), !insn.addr !462
  %53 = call i128 @__asm_pmuludq(i128 %52, i128 %41), !insn.addr !463
  %54 = call i128 @__asm_pmuludq(i128 %46, i128 %50), !insn.addr !464
  %55 = call i128 @__asm_pshufd(i128 %50, i8 -11), !insn.addr !465
  %56 = call i128 @__asm_pmuludq(i128 %55, i128 %45), !insn.addr !466
  %57 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !467
  %58 = call i128 @__asm_paddd(i128 %57, i128 %26), !insn.addr !468
  %59 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !469
  %60 = call i128 @__asm_paddd(i128 %59, i128 %28), !insn.addr !470
  %61 = call i128 @__asm_pshufd(i128 %58, i8 -11), !insn.addr !471
  %62 = call i128 @__asm_pmuludq(i128 %61, i128 %53), !insn.addr !472
  %63 = call i128 @__asm_pmuludq(i128 %58, i128 %51), !insn.addr !473
  %64 = call i128 @__asm_pshufd(i128 %60, i8 -11), !insn.addr !474
  %65 = call i128 @__asm_pmuludq(i128 %64, i128 %56), !insn.addr !475
  %66 = call i128 @__asm_pmuludq(i128 %60, i128 %54), !insn.addr !476
  %67 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !477
  %68 = call i128 @__asm_paddd(i128 %67, i128 %30), !insn.addr !478
  %69 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !479
  %70 = call i128 @__asm_paddd(i128 %69, i128 %32), !insn.addr !480
  %71 = call i128 @__asm_pmuludq(i128 %63, i128 %68), !insn.addr !481
  %72 = call i128 @__asm_pshufd(i128 %71, i8 -24), !insn.addr !482
  %73 = call i128 @__asm_pshufd(i128 %68, i8 -11), !insn.addr !483
  %74 = call i128 @__asm_pmuludq(i128 %73, i128 %62), !insn.addr !484
  %75 = call i128 @__asm_pshufd(i128 %74, i8 -24), !insn.addr !485
  %76 = call i128 @__asm_punpckldq(i128 %72, i128 %75), !insn.addr !486
  %77 = call i128 @__asm_pmuludq(i128 %66, i128 %70), !insn.addr !487
  %78 = call i128 @__asm_pshufd(i128 %77, i8 -24), !insn.addr !488
  %79 = call i128 @__asm_pshufd(i128 %70, i8 -11), !insn.addr !489
  %80 = call i128 @__asm_pmuludq(i128 %79, i128 %65), !insn.addr !490
  %81 = call i128 @__asm_pshufd(i128 %80, i8 -24), !insn.addr !491
  %82 = call i128 @__asm_punpckldq(i128 %78, i128 %81), !insn.addr !492
  %83 = call i128 @__asm_paddd(i128 %xmm6.0.reload, i128 %34), !insn.addr !493
  %84 = add i32 %rsi.0.in.reload, -4, !insn.addr !494
  %85 = icmp eq i32 %84, 0, !insn.addr !494
  %86 = icmp eq i1 %85, false, !insn.addr !495
  store i128 %76, i128* %xmm1.0.reg2mem, !insn.addr !495
  store i128 %82, i128* %xmm4.0.reg2mem, !insn.addr !495
  store i128 %83, i128* %xmm6.0.reg2mem, !insn.addr !495
  store i32 %84, i32* %rsi.0.in.reg2mem, !insn.addr !495
  store i128 %76, i128* %xmm1.1.reg2mem, !insn.addr !495
  store i128 %82, i128* %xmm4.1.reg2mem, !insn.addr !495
  store i128 %83, i128* %xmm6.1.reg2mem, !insn.addr !495
  br i1 %86, label %dec_label_pc_1c70, label %dec_label_pc_1d51, !insn.addr !495

dec_label_pc_1d51:                                ; preds = %dec_label_pc_1c70, %dec_label_pc_1c07
  %87 = urem i32 %12, 4, !insn.addr !496
  %xmm4.1.reload = load i128, i128* %xmm4.1.reg2mem
  %xmm1.1.reload = load i128, i128* %xmm1.1.reg2mem
  %88 = call i128 @__asm_movdqa(i128 %xmm1.1.reload), !insn.addr !497
  %89 = call i128 @__asm_movdqa(i128 %xmm4.1.reload), !insn.addr !498
  %90 = icmp eq i32 %87, 0, !insn.addr !499
  store i128 %89, i128* %xmm0.0.reg2mem, !insn.addr !500
  store i128 %88, i128* %xmm5.0.reg2mem, !insn.addr !500
  br i1 %90, label %dec_label_pc_1dcd, label %dec_label_pc_1d5d, !insn.addr !500

dec_label_pc_1d5d:                                ; preds = %dec_label_pc_1d51
  %xmm6.1.reload = load i128, i128* %xmm6.1.reg2mem
  %91 = load i128, i128* @global_var_31f0, align 8, !insn.addr !501
  %92 = call i128 @__asm_movdqa(i128 %91), !insn.addr !501
  %93 = load i128, i128* @global_var_3200, align 8, !insn.addr !502
  %94 = call i128 @__asm_movdqa(i128 %93), !insn.addr !502
  store i128 %xmm1.1.reload, i128* %xmm1.2.reg2mem, !insn.addr !503
  store i128 %xmm4.1.reload, i128* %xmm4.2.reg2mem, !insn.addr !503
  store i128 %xmm6.1.reload, i128* %xmm6.2.reg2mem, !insn.addr !503
  store i32 %87, i32* %rax.0.in.reg2mem, !insn.addr !503
  br label %dec_label_pc_1d70, !insn.addr !503

dec_label_pc_1d70:                                ; preds = %dec_label_pc_1d70, %dec_label_pc_1d5d
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %xmm6.2.reload = load i128, i128* %xmm6.2.reg2mem
  %xmm4.2.reload = load i128, i128* %xmm4.2.reg2mem
  %xmm1.2.reload = load i128, i128* %xmm1.2.reg2mem
  %95 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !504
  %96 = call i128 @__asm_paddd(i128 %95, i128 %92), !insn.addr !505
  %97 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !506
  %98 = call i128 @__asm_pmuludq(i128 %97, i128 %xmm1.2.reload), !insn.addr !507
  %99 = call i128 @__asm_pshufd(i128 %98, i8 -24), !insn.addr !508
  %100 = call i128 @__asm_pshufd(i128 %xmm1.2.reload, i8 -11), !insn.addr !509
  %101 = call i128 @__asm_pshufd(i128 %xmm6.2.reload, i8 -11), !insn.addr !510
  %102 = call i128 @__asm_pmuludq(i128 %101, i128 %100), !insn.addr !511
  %103 = call i128 @__asm_pshufd(i128 %102, i8 -24), !insn.addr !512
  %104 = call i128 @__asm_punpckldq(i128 %99, i128 %103), !insn.addr !513
  %105 = call i128 @__asm_pshufd(i128 %96, i8 -11), !insn.addr !514
  %106 = call i128 @__asm_pmuludq(i128 %96, i128 %xmm4.2.reload), !insn.addr !515
  %107 = call i128 @__asm_pshufd(i128 %106, i8 -24), !insn.addr !516
  %108 = call i128 @__asm_pshufd(i128 %xmm4.2.reload, i8 -11), !insn.addr !517
  %109 = call i128 @__asm_pmuludq(i128 %108, i128 %105), !insn.addr !518
  %110 = call i128 @__asm_pshufd(i128 %109, i8 -24), !insn.addr !519
  %111 = call i128 @__asm_punpckldq(i128 %107, i128 %110), !insn.addr !520
  %112 = call i128 @__asm_paddd(i128 %xmm6.2.reload, i128 %94), !insn.addr !521
  %113 = call i128 @__asm_movdqa(i128 %104), !insn.addr !522
  %114 = call i128 @__asm_movdqa(i128 %111), !insn.addr !523
  %115 = add i32 %rax.0.in.reload, -1, !insn.addr !524
  %116 = icmp eq i32 %115, 0, !insn.addr !524
  %117 = icmp eq i1 %116, false, !insn.addr !525
  store i128 %113, i128* %xmm1.2.reg2mem, !insn.addr !525
  store i128 %114, i128* %xmm4.2.reg2mem, !insn.addr !525
  store i128 %112, i128* %xmm6.2.reg2mem, !insn.addr !525
  store i32 %115, i32* %rax.0.in.reg2mem, !insn.addr !525
  store i128 %111, i128* %xmm0.0.reg2mem, !insn.addr !525
  store i128 %104, i128* %xmm5.0.reg2mem, !insn.addr !525
  br i1 %117, label %dec_label_pc_1d70, label %dec_label_pc_1dcd, !insn.addr !525

dec_label_pc_1dcd:                                ; preds = %dec_label_pc_1d70, %dec_label_pc_1d51
  %xmm5.0.reload = load i128, i128* %xmm5.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %118 = call i128 @__asm_pshufd(i128 %xmm5.0.reload, i8 -11), !insn.addr !526
  %119 = call i128 @__asm_pshufd(i128 %xmm0.0.reload, i8 -11), !insn.addr !527
  %120 = call i128 @__asm_pmuludq(i128 %119, i128 %118), !insn.addr !528
  %121 = call i128 @__asm_pmuludq(i128 %xmm0.0.reload, i128 %xmm5.0.reload), !insn.addr !529
  %122 = call i128 @__asm_pshufd(i128 %121, i8 -18), !insn.addr !530
  %123 = call i128 @__asm_pmuludq(i128 %122, i128 %121), !insn.addr !531
  %124 = call i128 @__asm_pshufd(i128 %120, i8 -86), !insn.addr !532
  %125 = call i128 @__asm_pmuludq(i128 %124, i128 %120), !insn.addr !533
  %126 = call i128 @__asm_pmuludq(i128 %125, i128 %123), !insn.addr !534
  %127 = call i32 @__asm_movd(i128 %126), !insn.addr !535
  %128 = sext i32 %127 to i64, !insn.addr !535
  %129 = icmp eq i32 %2, %9, !insn.addr !536
  store i64 %128, i64* %rax.2.reg2mem, !insn.addr !537
  br i1 %129, label %dec_label_pc_1e1d, label %dec_label_pc_1dfe, !insn.addr !537

dec_label_pc_1dfe:                                ; preds = %dec_label_pc_1dcd
  %130 = sub i64 %arg1, %4, !insn.addr !538
  %131 = and i64 %130, 4294967295, !insn.addr !538
  store i64 %128, i64* %rax.1.ph.reg2mem, !insn.addr !539
  store i64 %131, i64* %rdi.0.ph.reg2mem, !insn.addr !539
  br label %dec_label_pc_1e10.preheader, !insn.addr !539

dec_label_pc_1e10.preheader:                      ; preds = %dec_label_pc_1bbe, %dec_label_pc_1dfe
  %rdi.0.ph.reload = load i64, i64* %rdi.0.ph.reg2mem
  %rax.1.ph.reload = load i64, i64* %rax.1.ph.reg2mem
  store i64 %rax.1.ph.reload, i64* %rax.1.reg2mem
  store i64 %rdi.0.ph.reload, i64* %rdi.0.reg2mem
  br label %dec_label_pc_1e10

dec_label_pc_1e10:                                ; preds = %dec_label_pc_1e10.preheader, %dec_label_pc_1e10
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext = mul i64 %rax.1.reload, 4294967296
  %132 = ashr exact i64 %sext, 32, !insn.addr !540
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %133 = ashr exact i64 %sext1, 32, !insn.addr !540
  %134 = mul nsw i64 %133, %132, !insn.addr !540
  %135 = and i64 %134, 4294967295, !insn.addr !540
  %136 = add i64 %rdi.0.reload, 4294967295, !insn.addr !541
  %137 = trunc i64 %rdi.0.reload to i32, !insn.addr !542
  %138 = and i64 %136, 4294967295, !insn.addr !543
  %139 = icmp ult i32 %137, 3
  store i64 %135, i64* %rax.1.reg2mem, !insn.addr !544
  store i64 %138, i64* %rdi.0.reg2mem, !insn.addr !544
  store i64 %135, i64* %rax.2.reg2mem, !insn.addr !544
  br i1 %139, label %dec_label_pc_1e1d, label %dec_label_pc_1e10, !insn.addr !544

dec_label_pc_1e1d:                                ; preds = %dec_label_pc_1e10, %dec_label_pc_1dcd, %dec_label_pc_1bb0
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !545

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
  uselistorder label %dec_label_pc_1e10, { 1, 0 }
  uselistorder label %dec_label_pc_1e10.preheader, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1e20:
  %rax.2.reg2mem = alloca i64, !insn.addr !546
  %rdi.0.reg2mem = alloca i64, !insn.addr !546
  %rax.1.reg2mem = alloca i64, !insn.addr !546
  %rdi.0.ph.reg2mem = alloca i64, !insn.addr !546
  %rax.1.ph.reg2mem = alloca i64, !insn.addr !546
  %xmm2.3.reg2mem = alloca i128, !insn.addr !546
  %xmm0.3.reg2mem = alloca i128, !insn.addr !546
  %rax.0.in.reg2mem = alloca i32, !insn.addr !546
  %xmm6.2.reg2mem = alloca i128, !insn.addr !546
  %xmm2.2.reg2mem = alloca i128, !insn.addr !546
  %xmm0.2.reg2mem = alloca i128, !insn.addr !546
  %xmm6.1.reg2mem = alloca i128, !insn.addr !546
  %xmm2.1.reg2mem = alloca i128, !insn.addr !546
  %xmm0.1.reg2mem = alloca i128, !insn.addr !546
  %rsi.0.in.reg2mem = alloca i32, !insn.addr !546
  %xmm6.0.reg2mem = alloca i128, !insn.addr !546
  %xmm2.0.reg2mem = alloca i128, !insn.addr !546
  %xmm0.0.reg2mem = alloca i128, !insn.addr !546
  %0 = and i64 %arg2, 4294967295, !insn.addr !546
  %1 = trunc i64 %arg1 to i32, !insn.addr !547
  %2 = icmp slt i32 %1, 2, !insn.addr !547
  store i64 %0, i64* %rax.2.reg2mem, !insn.addr !547
  br i1 %2, label %dec_label_pc_207d, label %dec_label_pc_1e2b, !insn.addr !547

dec_label_pc_1e2b:                                ; preds = %dec_label_pc_1e20
  %.op = add i64 %arg1, 4294967295
  %3 = trunc i64 %.op to i32, !insn.addr !548
  %4 = icmp ult i32 %3, 8, !insn.addr !548
  store i64 %0, i64* %rax.1.ph.reg2mem, !insn.addr !549
  store i64 %arg1, i64* %rdi.0.ph.reg2mem, !insn.addr !549
  br i1 %4, label %dec_label_pc_2070.preheader, label %dec_label_pc_1e41, !insn.addr !549

dec_label_pc_1e41:                                ; preds = %dec_label_pc_1e2b
  %5 = and i64 %.op, 4294967288, !insn.addr !550
  %6 = trunc i64 %arg2 to i32, !insn.addr !551
  %7 = call i128 @__asm_movd.1(i32 %6), !insn.addr !551
  %8 = load i128, i128* @global_var_3270, align 8, !insn.addr !552
  %9 = call i128 @__asm_movaps(i128 %8), !insn.addr !552
  %10 = call i128 @__asm_movss(i128 %9, i128 %7), !insn.addr !553
  %11 = call i128 @__asm_movd.1(i32 %1), !insn.addr !554
  %12 = call i128 @__asm_pshufd(i128 %11, i8 0), !insn.addr !555
  %13 = load i128, i128* @global_var_31e0, align 8, !insn.addr !556
  %14 = call i128 @__asm_paddd(i128 %12, i128 %13), !insn.addr !556
  %15 = trunc i64 %5 to i32
  %16 = add i32 %15, -8, !insn.addr !557
  %17 = udiv i32 %16, 8, !insn.addr !558
  %18 = add nuw nsw i32 %17, 1, !insn.addr !559
  %19 = icmp ult i32 %16, 24, !insn.addr !560
  %20 = icmp eq i1 %19, false, !insn.addr !561
  br i1 %20, label %dec_label_pc_1e8b, label %dec_label_pc_1e7e, !insn.addr !561

dec_label_pc_1e7e:                                ; preds = %dec_label_pc_1e41
  %21 = load i128, i128* @global_var_3160, align 8, !insn.addr !562
  %22 = call i128 @__asm_movdqa(i128 %21), !insn.addr !562
  store i128 %10, i128* %xmm0.1.reg2mem, !insn.addr !563
  store i128 %22, i128* %xmm2.1.reg2mem, !insn.addr !563
  store i128 %14, i128* %xmm6.1.reg2mem, !insn.addr !563
  br label %dec_label_pc_1fc1, !insn.addr !563

dec_label_pc_1e8b:                                ; preds = %dec_label_pc_1e41
  %23 = and i32 %18, 1073741820
  %24 = load i128, i128* @global_var_3160, align 8, !insn.addr !564
  %25 = call i128 @__asm_movdqa(i128 %24), !insn.addr !564
  %26 = load i128, i128* @global_var_3200, align 8, !insn.addr !565
  %27 = call i128 @__asm_movdqa(i128 %26), !insn.addr !565
  %28 = load i128, i128* @global_var_3210, align 8, !insn.addr !566
  %29 = call i128 @__asm_movdqa(i128 %28), !insn.addr !566
  %30 = load i128, i128* @global_var_3220, align 8, !insn.addr !567
  %31 = call i128 @__asm_movdqa(i128 %30), !insn.addr !567
  %32 = load i128, i128* @global_var_3230, align 8, !insn.addr !568
  %33 = call i128 @__asm_movdqa(i128 %32), !insn.addr !568
  %34 = load i128, i128* @global_var_3240, align 8, !insn.addr !569
  %35 = call i128 @__asm_movdqa(i128 %34), !insn.addr !569
  %36 = load i128, i128* @global_var_3250, align 8, !insn.addr !570
  %37 = call i128 @__asm_movdqa(i128 %36), !insn.addr !570
  %38 = load i128, i128* @global_var_3260, align 8, !insn.addr !571
  %39 = call i128 @__asm_movdqa(i128 %38), !insn.addr !571
  %40 = load i128, i128* @global_var_31f0, align 8
  store i128 %10, i128* %xmm0.0.reg2mem, !insn.addr !572
  store i128 %25, i128* %xmm2.0.reg2mem, !insn.addr !572
  store i128 %14, i128* %xmm6.0.reg2mem, !insn.addr !572
  store i32 %23, i32* %rsi.0.in.reg2mem, !insn.addr !572
  br label %dec_label_pc_1ee0, !insn.addr !572

dec_label_pc_1ee0:                                ; preds = %dec_label_pc_1ee0, %dec_label_pc_1e8b
  %rsi.0.in.reload = load i32, i32* %rsi.0.in.reg2mem
  %xmm6.0.reload = load i128, i128* %xmm6.0.reg2mem
  %xmm2.0.reload = load i128, i128* %xmm2.0.reg2mem
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %41 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !573
  %42 = call i128 @__asm_paddd(i128 %41, i128 %40), !insn.addr !574
  %43 = call i128 @__asm_pshufd(i128 %xmm6.0.reload, i8 -11), !insn.addr !575
  %44 = call i128 @__asm_pshufd(i128 %xmm0.0.reload, i8 -11), !insn.addr !576
  %45 = call i128 @__asm_pmuludq(i128 %44, i128 %43), !insn.addr !577
  %46 = call i128 @__asm_pmuludq(i128 %xmm0.0.reload, i128 %xmm6.0.reload), !insn.addr !578
  %47 = call i128 @__asm_pshufd(i128 %xmm2.0.reload, i8 -11), !insn.addr !579
  %48 = call i128 @__asm_pshufd(i128 %42, i8 -11), !insn.addr !580
  %49 = call i128 @__asm_pmuludq(i128 %48, i128 %47), !insn.addr !581
  %50 = call i128 @__asm_pmuludq(i128 %42, i128 %xmm2.0.reload), !insn.addr !582
  %51 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !583
  %52 = call i128 @__asm_paddd(i128 %51, i128 %27), !insn.addr !584
  %53 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !585
  %54 = call i128 @__asm_paddd(i128 %53, i128 %29), !insn.addr !586
  %55 = call i128 @__asm_pmuludq(i128 %46, i128 %52), !insn.addr !587
  %56 = call i128 @__asm_pshufd(i128 %52, i8 -11), !insn.addr !588
  %57 = call i128 @__asm_pmuludq(i128 %56, i128 %45), !insn.addr !589
  %58 = call i128 @__asm_pmuludq(i128 %50, i128 %54), !insn.addr !590
  %59 = call i128 @__asm_pshufd(i128 %54, i8 -11), !insn.addr !591
  %60 = call i128 @__asm_pmuludq(i128 %59, i128 %49), !insn.addr !592
  %61 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !593
  %62 = call i128 @__asm_paddd(i128 %61, i128 %31), !insn.addr !594
  %63 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !595
  %64 = call i128 @__asm_paddd(i128 %63, i128 %33), !insn.addr !596
  %65 = call i128 @__asm_pshufd(i128 %62, i8 -11), !insn.addr !597
  %66 = call i128 @__asm_pmuludq(i128 %65, i128 %57), !insn.addr !598
  %67 = call i128 @__asm_pmuludq(i128 %62, i128 %55), !insn.addr !599
  %68 = call i128 @__asm_pshufd(i128 %64, i8 -11), !insn.addr !600
  %69 = call i128 @__asm_pmuludq(i128 %68, i128 %60), !insn.addr !601
  %70 = call i128 @__asm_pmuludq(i128 %64, i128 %58), !insn.addr !602
  %71 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !603
  %72 = call i128 @__asm_paddd(i128 %71, i128 %35), !insn.addr !604
  %73 = call i128 @__asm_movdqa(i128 %xmm6.0.reload), !insn.addr !605
  %74 = call i128 @__asm_paddd(i128 %73, i128 %37), !insn.addr !606
  %75 = call i128 @__asm_pmuludq(i128 %67, i128 %72), !insn.addr !607
  %76 = call i128 @__asm_pshufd(i128 %75, i8 -24), !insn.addr !608
  %77 = call i128 @__asm_pshufd(i128 %72, i8 -11), !insn.addr !609
  %78 = call i128 @__asm_pmuludq(i128 %77, i128 %66), !insn.addr !610
  %79 = call i128 @__asm_pshufd(i128 %78, i8 -24), !insn.addr !611
  %80 = call i128 @__asm_punpckldq(i128 %76, i128 %79), !insn.addr !612
  %81 = call i128 @__asm_pmuludq(i128 %70, i128 %74), !insn.addr !613
  %82 = call i128 @__asm_pshufd(i128 %81, i8 -24), !insn.addr !614
  %83 = call i128 @__asm_pshufd(i128 %74, i8 -11), !insn.addr !615
  %84 = call i128 @__asm_pmuludq(i128 %83, i128 %69), !insn.addr !616
  %85 = call i128 @__asm_pshufd(i128 %84, i8 -24), !insn.addr !617
  %86 = call i128 @__asm_punpckldq(i128 %82, i128 %85), !insn.addr !618
  %87 = call i128 @__asm_paddd(i128 %xmm6.0.reload, i128 %39), !insn.addr !619
  %88 = add i32 %rsi.0.in.reload, -4, !insn.addr !620
  %89 = icmp eq i32 %88, 0, !insn.addr !620
  %90 = icmp eq i1 %89, false, !insn.addr !621
  store i128 %80, i128* %xmm0.0.reg2mem, !insn.addr !621
  store i128 %86, i128* %xmm2.0.reg2mem, !insn.addr !621
  store i128 %87, i128* %xmm6.0.reg2mem, !insn.addr !621
  store i32 %88, i32* %rsi.0.in.reg2mem, !insn.addr !621
  store i128 %80, i128* %xmm0.1.reg2mem, !insn.addr !621
  store i128 %86, i128* %xmm2.1.reg2mem, !insn.addr !621
  store i128 %87, i128* %xmm6.1.reg2mem, !insn.addr !621
  br i1 %90, label %dec_label_pc_1ee0, label %dec_label_pc_1fc1, !insn.addr !621

dec_label_pc_1fc1:                                ; preds = %dec_label_pc_1ee0, %dec_label_pc_1e7e
  %91 = urem i32 %18, 4, !insn.addr !622
  %xmm2.1.reload = load i128, i128* %xmm2.1.reg2mem
  %xmm0.1.reload = load i128, i128* %xmm0.1.reg2mem
  %92 = icmp eq i32 %91, 0, !insn.addr !623
  store i128 %xmm0.1.reload, i128* %xmm0.3.reg2mem, !insn.addr !624
  store i128 %xmm2.1.reload, i128* %xmm2.3.reg2mem, !insn.addr !624
  br i1 %92, label %dec_label_pc_2031, label %dec_label_pc_1fc5, !insn.addr !624

dec_label_pc_1fc5:                                ; preds = %dec_label_pc_1fc1
  %xmm6.1.reload = load i128, i128* %xmm6.1.reg2mem
  %93 = load i128, i128* @global_var_31f0, align 8, !insn.addr !625
  %94 = call i128 @__asm_movdqa(i128 %93), !insn.addr !625
  %95 = load i128, i128* @global_var_3200, align 8, !insn.addr !626
  %96 = call i128 @__asm_movdqa(i128 %95), !insn.addr !626
  store i128 %xmm0.1.reload, i128* %xmm0.2.reg2mem, !insn.addr !627
  store i128 %xmm2.1.reload, i128* %xmm2.2.reg2mem, !insn.addr !627
  store i128 %xmm6.1.reload, i128* %xmm6.2.reg2mem, !insn.addr !627
  store i32 %91, i32* %rax.0.in.reg2mem, !insn.addr !627
  br label %dec_label_pc_1fe0, !insn.addr !627

dec_label_pc_1fe0:                                ; preds = %dec_label_pc_1fe0, %dec_label_pc_1fc5
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %xmm6.2.reload = load i128, i128* %xmm6.2.reg2mem
  %xmm2.2.reload = load i128, i128* %xmm2.2.reg2mem
  %xmm0.2.reload = load i128, i128* %xmm0.2.reg2mem
  %97 = call i128 @__asm_movdqa(i128 %xmm6.2.reload), !insn.addr !628
  %98 = call i128 @__asm_paddd(i128 %97, i128 %94), !insn.addr !629
  %99 = call i128 @__asm_pshufd(i128 %xmm0.2.reload, i8 -11), !insn.addr !630
  %100 = call i128 @__asm_pmuludq(i128 %xmm0.2.reload, i128 %xmm6.2.reload), !insn.addr !631
  %101 = call i128 @__asm_pshufd(i128 %100, i8 -24), !insn.addr !632
  %102 = call i128 @__asm_pshufd(i128 %xmm6.2.reload, i8 -11), !insn.addr !633
  %103 = call i128 @__asm_pmuludq(i128 %102, i128 %99), !insn.addr !634
  %104 = call i128 @__asm_pshufd(i128 %103, i8 -24), !insn.addr !635
  %105 = call i128 @__asm_punpckldq(i128 %101, i128 %104), !insn.addr !636
  %106 = call i128 @__asm_pshufd(i128 %xmm2.2.reload, i8 -11), !insn.addr !637
  %107 = call i128 @__asm_pmuludq(i128 %xmm2.2.reload, i128 %98), !insn.addr !638
  %108 = call i128 @__asm_pshufd(i128 %107, i8 -24), !insn.addr !639
  %109 = call i128 @__asm_pshufd(i128 %98, i8 -11), !insn.addr !640
  %110 = call i128 @__asm_pmuludq(i128 %109, i128 %106), !insn.addr !641
  %111 = call i128 @__asm_pshufd(i128 %110, i8 -24), !insn.addr !642
  %112 = call i128 @__asm_punpckldq(i128 %108, i128 %111), !insn.addr !643
  %113 = call i128 @__asm_paddd(i128 %xmm6.2.reload, i128 %96), !insn.addr !644
  %114 = add i32 %rax.0.in.reload, -1, !insn.addr !645
  %115 = icmp eq i32 %114, 0, !insn.addr !645
  %116 = icmp eq i1 %115, false, !insn.addr !646
  store i128 %105, i128* %xmm0.2.reg2mem, !insn.addr !646
  store i128 %112, i128* %xmm2.2.reg2mem, !insn.addr !646
  store i128 %113, i128* %xmm6.2.reg2mem, !insn.addr !646
  store i32 %114, i32* %rax.0.in.reg2mem, !insn.addr !646
  store i128 %105, i128* %xmm0.3.reg2mem, !insn.addr !646
  store i128 %112, i128* %xmm2.3.reg2mem, !insn.addr !646
  br i1 %116, label %dec_label_pc_1fe0, label %dec_label_pc_2031, !insn.addr !646

dec_label_pc_2031:                                ; preds = %dec_label_pc_1fe0, %dec_label_pc_1fc1
  %xmm2.3.reload = load i128, i128* %xmm2.3.reg2mem
  %xmm0.3.reload = load i128, i128* %xmm0.3.reg2mem
  %117 = call i128 @__asm_pshufd(i128 %xmm0.3.reload, i8 -11), !insn.addr !647
  %118 = call i128 @__asm_pshufd(i128 %xmm2.3.reload, i8 -11), !insn.addr !648
  %119 = call i128 @__asm_pmuludq(i128 %118, i128 %117), !insn.addr !649
  %120 = call i128 @__asm_pmuludq(i128 %xmm2.3.reload, i128 %xmm0.3.reload), !insn.addr !650
  %121 = call i128 @__asm_pshufd(i128 %120, i8 -18), !insn.addr !651
  %122 = call i128 @__asm_pmuludq(i128 %121, i128 %120), !insn.addr !652
  %123 = call i128 @__asm_pshufd(i128 %119, i8 -86), !insn.addr !653
  %124 = call i128 @__asm_pmuludq(i128 %123, i128 %119), !insn.addr !654
  %125 = call i128 @__asm_pmuludq(i128 %124, i128 %122), !insn.addr !655
  %126 = call i32 @__asm_movd(i128 %125), !insn.addr !656
  %127 = sext i32 %126 to i64, !insn.addr !656
  %128 = icmp eq i32 %3, %15, !insn.addr !657
  store i64 %127, i64* %rax.2.reg2mem, !insn.addr !658
  br i1 %128, label %dec_label_pc_207d, label %dec_label_pc_2062, !insn.addr !658

dec_label_pc_2062:                                ; preds = %dec_label_pc_2031
  %129 = sub i64 %arg1, %5, !insn.addr !659
  %130 = and i64 %129, 4294967295, !insn.addr !659
  store i64 %127, i64* %rax.1.ph.reg2mem, !insn.addr !660
  store i64 %130, i64* %rdi.0.ph.reg2mem, !insn.addr !660
  br label %dec_label_pc_2070.preheader, !insn.addr !660

dec_label_pc_2070.preheader:                      ; preds = %dec_label_pc_1e2b, %dec_label_pc_2062
  %rdi.0.ph.reload = load i64, i64* %rdi.0.ph.reg2mem
  %rax.1.ph.reload = load i64, i64* %rax.1.ph.reg2mem
  store i64 %rax.1.ph.reload, i64* %rax.1.reg2mem
  store i64 %rdi.0.ph.reload, i64* %rdi.0.reg2mem
  br label %dec_label_pc_2070

dec_label_pc_2070:                                ; preds = %dec_label_pc_2070.preheader, %dec_label_pc_2070
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %sext = mul i64 %rax.1.reload, 4294967296
  %131 = ashr exact i64 %sext, 32, !insn.addr !661
  %sext1 = mul i64 %rdi.0.reload, 4294967296
  %132 = ashr exact i64 %sext1, 32, !insn.addr !661
  %133 = mul nsw i64 %132, %131, !insn.addr !661
  %134 = and i64 %133, 4294967295, !insn.addr !661
  %135 = add i64 %rdi.0.reload, 4294967295, !insn.addr !662
  %136 = trunc i64 %rdi.0.reload to i32, !insn.addr !663
  %137 = and i64 %135, 4294967295, !insn.addr !664
  %138 = icmp ult i32 %136, 3
  store i64 %134, i64* %rax.1.reg2mem, !insn.addr !665
  store i64 %137, i64* %rdi.0.reg2mem, !insn.addr !665
  store i64 %134, i64* %rax.2.reg2mem, !insn.addr !665
  br i1 %138, label %dec_label_pc_207d, label %dec_label_pc_2070, !insn.addr !665

dec_label_pc_207d:                                ; preds = %dec_label_pc_2070, %dec_label_pc_2031, %dec_label_pc_1e20
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  ret i64 %rax.2.reload, !insn.addr !666

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
  uselistorder label %dec_label_pc_2070, { 1, 0 }
  uselistorder label %dec_label_pc_2070.preheader, { 1, 0 }
}

define i64 @indirect_recursion_a(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2080:
  %merge.reg2mem = alloca i64, !insn.addr !667
  %rsi.0.in.reg2mem = alloca i64, !insn.addr !667
  %rax.0.reg2mem = alloca i64, !insn.addr !667
  %storemerge.in.reg2mem = alloca i64, !insn.addr !667
  %0 = and i64 %arg1, 4294967295, !insn.addr !667
  %1 = trunc i64 %arg2 to i32, !insn.addr !668
  %2 = icmp slt i32 %1, 1
  store i64 %0, i64* %merge.reg2mem, !insn.addr !669
  br i1 %2, label %dec_label_pc_20cd, label %dec_label_pc_2086, !insn.addr !669

dec_label_pc_2086:                                ; preds = %dec_label_pc_2080
  %3 = add i64 %arg2, 2, !insn.addr !670
  store i64 %0, i64* %rax.0.reg2mem, !insn.addr !671
  store i64 %3, i64* %rsi.0.in.reg2mem, !insn.addr !671
  br label %dec_label_pc_2098, !insn.addr !671

dec_label_pc_2090:                                ; preds = %dec_label_pc_20c8, %dec_label_pc_20aa
  %rsi.0 = and i64 %rsi.0.in.reload, 4294967295
  %storemerge.in.reload = load i64, i64* %storemerge.in.reg2mem
  %storemerge = and i64 %storemerge.in.reload, 4294967295
  %4 = add nuw nsw i64 %rsi.0, 4294967294, !insn.addr !672
  %5 = trunc i64 %4 to i32, !insn.addr !673
  %6 = icmp slt i32 %5, 3, !insn.addr !673
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !673
  store i64 %4, i64* %rsi.0.in.reg2mem, !insn.addr !673
  store i64 %storemerge, i64* %merge.reg2mem, !insn.addr !673
  br i1 %6, label %dec_label_pc_20cd, label %dec_label_pc_2098, !insn.addr !673

dec_label_pc_2098:                                ; preds = %dec_label_pc_2090, %dec_label_pc_2086
  %rsi.0.in.reload = load i64, i64* %rsi.0.in.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = urem i64 %rax.0.reload, 2
  %8 = icmp eq i64 %7, 0, !insn.addr !674
  %9 = icmp eq i1 %8, false, !insn.addr !675
  br i1 %9, label %dec_label_pc_20c0, label %dec_label_pc_209c, !insn.addr !675

dec_label_pc_209c:                                ; preds = %dec_label_pc_2098
  %10 = trunc i64 %rax.0.reload to i32, !insn.addr !676
  %11 = icmp slt i32 %10, 0
  %12 = zext i1 %11 to i32, !insn.addr !677
  %13 = add i32 %12, %10, !insn.addr !678
  %14 = ashr i32 %13, 1, !insn.addr !679
  %15 = zext i32 %14 to i64, !insn.addr !679
  %16 = trunc i64 %rsi.0.in.reload to i32, !insn.addr !680
  %17 = icmp eq i32 %16, 3, !insn.addr !680
  store i64 %15, i64* %merge.reg2mem, !insn.addr !681
  br i1 %17, label %dec_label_pc_20cd, label %dec_label_pc_20aa, !insn.addr !681

dec_label_pc_20aa:                                ; preds = %dec_label_pc_209c
  %18 = add nuw nsw i64 %15, 1, !insn.addr !682
  store i64 %18, i64* %storemerge.in.reg2mem, !insn.addr !683
  br label %dec_label_pc_2090, !insn.addr !683

dec_label_pc_20c0:                                ; preds = %dec_label_pc_2098
  %19 = mul nuw nsw i64 %rax.0.reload, 3, !insn.addr !684
  %20 = trunc i64 %rsi.0.in.reload to i32, !insn.addr !685
  %21 = icmp eq i32 %20, 3, !insn.addr !685
  br i1 %21, label %dec_label_pc_20d0, label %dec_label_pc_20c8, !insn.addr !686

dec_label_pc_20c8:                                ; preds = %dec_label_pc_20c0
  %22 = and i64 %19, 4294967295, !insn.addr !684
  %23 = add nuw nsw i64 %22, 2, !insn.addr !687
  store i64 %23, i64* %storemerge.in.reg2mem, !insn.addr !688
  br label %dec_label_pc_2090, !insn.addr !688

dec_label_pc_20cd:                                ; preds = %dec_label_pc_2090, %dec_label_pc_209c, %dec_label_pc_2080, %dec_label_pc_20d0
  %merge.reload = load i64, i64* %merge.reg2mem
  ret i64 %merge.reload, !insn.addr !689

dec_label_pc_20d0:                                ; preds = %dec_label_pc_20c0
  %24 = add nuw nsw i64 %19, 1, !insn.addr !690
  %25 = and i64 %24, 4294967295, !insn.addr !690
  store i64 %25, i64* %merge.reg2mem, !insn.addr !690
  br label %dec_label_pc_20cd, !insn.addr !690

; uselistorder directives
  uselistorder i64 %15, { 1, 0 }
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64 %rsi.0.in.reload, { 2, 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge.in.reg2mem, { 2, 1, 0 }
  uselistorder i64* %merge.reg2mem, { 3, 0, 2, 1, 4 }
  uselistorder label %dec_label_pc_20cd, { 3, 1, 0, 2 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_20e0:
  ret i64 %arg1, !insn.addr !691
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_20f0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !692
  %1 = icmp ult i32 %0, 3
  br i1 %1, label %dec_label_pc_20fb, label %dec_label_pc_20f5, !insn.addr !693

dec_label_pc_20f5:                                ; preds = %dec_label_pc_20f0
  ret i64 4294967295, !insn.addr !694

dec_label_pc_20fb:                                ; preds = %dec_label_pc_20f0
  %2 = and i64 %arg1, 4294967295, !insn.addr !695
  ret i64 %2, !insn.addr !696
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2110:
  %0 = mul i64 %arg1, 2, !insn.addr !697
  %1 = and i64 %0, 4294967294, !insn.addr !697
  ret i64 %1, !insn.addr !698
}

define i64 @triple_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_2120:
  %0 = mul i64 %arg1, 3, !insn.addr !699
  %1 = and i64 %0, 4294967295, !insn.addr !699
  ret i64 %1, !insn.addr !700
}

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2130:
  %0 = mul i64 %arg2, 2, !insn.addr !701
  %1 = and i64 %0, 4294967294, !insn.addr !701
  ret i64 %1, !insn.addr !702
}

define i64 @process_with_callback(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2140:
  %0 = alloca i64
  %rbp.1.reg2mem = alloca i64, !insn.addr !703
  %rbp.0.reg2mem = alloca i64, !insn.addr !703
  %rbx.0.reg2mem = alloca i64, !insn.addr !703
  %1 = load i64, i64* %0
  %2 = trunc i64 %arg2 to i32, !insn.addr !704
  %3 = icmp slt i32 %2, 1
  store i64 0, i64* %rbp.1.reg2mem, !insn.addr !705
  br i1 %3, label %dec_label_pc_2176, label %dec_label_pc_214c, !insn.addr !705

dec_label_pc_214c:                                ; preds = %dec_label_pc_2140
  %4 = and i64 %arg2, 4294967295, !insn.addr !706
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !707
  store i64 0, i64* %rbp.0.reg2mem, !insn.addr !707
  br label %dec_label_pc_2160, !insn.addr !707

dec_label_pc_2160:                                ; preds = %dec_label_pc_2160, %dec_label_pc_214c
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %5 = add i64 %rbp.0.reload, %1, !insn.addr !708
  %6 = and i64 %5, 4294967295, !insn.addr !708
  %7 = add i64 %rbx.0.reload, 1, !insn.addr !709
  %8 = icmp eq i64 %4, %7, !insn.addr !710
  %9 = icmp eq i1 %8, false, !insn.addr !711
  store i64 %7, i64* %rbx.0.reg2mem, !insn.addr !711
  store i64 %6, i64* %rbp.0.reg2mem, !insn.addr !711
  store i64 %6, i64* %rbp.1.reg2mem, !insn.addr !711
  br i1 %9, label %dec_label_pc_2160, label %dec_label_pc_2176, !insn.addr !711

dec_label_pc_2176:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2140
  %rbp.1.reload = load i64, i64* %rbp.1.reg2mem
  ret i64 %rbp.1.reload, !insn.addr !712

; uselistorder directives
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.0.reg2mem, { 1, 0, 2 }
}

define i64 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_2190:
  %rbp.0.reg2mem = alloca i64, !insn.addr !713
  %rbx.2.reg2mem = alloca i64, !insn.addr !713
  %rax.0.reg2mem = alloca i64, !insn.addr !713
  %rbx.02.reg2mem = alloca i64, !insn.addr !713
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3809 to i8*)), !insn.addr !714
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_34d9, i64 0, i64 0), i64 12), !insn.addr !715
  store i64 0, i64* %rbx.02.reg2mem, !insn.addr !716
  br i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), label %dec_label_pc_221d, label %dec_label_pc_21fc, !insn.addr !716

dec_label_pc_21fc:                                ; preds = %dec_label_pc_2190, %dec_label_pc_21fc
  %rbx.02.reload = load i64, i64* %rbx.02.reg2mem
  %2 = add nuw nsw i64 %rbx.02.reload, 4, !insn.addr !717
  %3 = and i64 %2, 4294967295, !insn.addr !717
  %4 = trunc i64 %2 to i32, !insn.addr !718
  %5 = icmp eq i32 %4, ptrtoint (i32* @global_var_3e8 to i32), !insn.addr !718
  store i64 %3, i64* %rbx.02.reg2mem, !insn.addr !716
  br i1 %5, label %dec_label_pc_221d, label %dec_label_pc_21fc, !insn.addr !716

dec_label_pc_221d:                                ; preds = %dec_label_pc_21fc, %dec_label_pc_2190
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_34f9, i64 0, i64 0), i64 and (i64 ptrtoint (i32* @global_var_3e9 to i64), i64 4294967295)), !insn.addr !719
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4294967295), !insn.addr !720
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4294967294), !insn.addr !721
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3517, i64 0, i64 0), i64 4), !insn.addr !722
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3534, i64 0, i64 0), i64 10), !insn.addr !723
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3534, i64 0, i64 0), i64 5), !insn.addr !724
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3557, i64 0, i64 0), i64 8), !insn.addr !725
  store i64 11, i64* %rax.0.reg2mem, !insn.addr !726
  store i64 10, i64* %rbx.2.reg2mem, !insn.addr !726
  store i64 4294967295, i64* %rbp.0.reg2mem, !insn.addr !726
  br label %dec_label_pc_22b0, !insn.addr !726

dec_label_pc_22b0:                                ; preds = %dec_label_pc_22bd, %dec_label_pc_221d
  %rbx.2.reload = load i64, i64* %rbx.2.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = trunc i64 %rbx.2.reload to i32
  %14 = add i32 %13, -8, !insn.addr !727
  %15 = trunc i64 %rax.0.reload to i32
  %16 = add i32 %15, -2, !insn.addr !728
  %17 = add nuw nsw i64 %rbx.2.reload, 2, !insn.addr !729
  %18 = and i64 %17, 4294967295, !insn.addr !729
  %19 = icmp ult i32 %14, %16, !insn.addr !730
  %20 = icmp eq i1 %19, false, !insn.addr !731
  br i1 %20, label %dec_label_pc_22c8, label %dec_label_pc_22bd, !insn.addr !731

dec_label_pc_22bd:                                ; preds = %dec_label_pc_22b0
  %rbp.0.reload = load i64, i64* %rbp.0.reg2mem
  %21 = add nuw nsw i64 %rbp.0.reload, 1, !insn.addr !732
  %22 = and i64 %21, 4294967295, !insn.addr !732
  %23 = add nuw nsw i64 %rax.0.reload, 4294967295, !insn.addr !733
  %24 = and i64 %23, 4294967295, !insn.addr !733
  %25 = trunc i64 %21 to i32, !insn.addr !734
  %26 = icmp ult i32 %25, 9, !insn.addr !734
  store i64 %24, i64* %rax.0.reg2mem, !insn.addr !735
  store i64 %18, i64* %rbx.2.reg2mem, !insn.addr !735
  store i64 %22, i64* %rbp.0.reg2mem, !insn.addr !735
  br i1 %26, label %dec_label_pc_22b0, label %dec_label_pc_22c8, !insn.addr !735

dec_label_pc_22c8:                                ; preds = %dec_label_pc_22bd, %dec_label_pc_22b0
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3574, i64 0, i64 0), i64 %18), !insn.addr !736
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3596, i64 0, i64 0), i64 30), !insn.addr !737
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_35b6, i64 0, i64 0), i64 101), !insn.addr !738
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_35da, i64 0, i64 0), i64 120), !insn.addr !739
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_35fe, i64 0, i64 0), i64 120), !insn.addr !740
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_361d, i64 0, i64 0), i64 3), !insn.addr !741
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3640, i64 0, i64 0), i64 10), !insn.addr !742
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_365e, i64 0, i64 0), i64 10), !insn.addr !743
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_365e, i64 0, i64 0), i64 120), !insn.addr !744
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3682, i64 0, i64 0), i64 30), !insn.addr !745
  %37 = sext i32 %36 to i64, !insn.addr !745
  ret i64 %37, !insn.addr !745

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
  uselistorder i32 ptrtoint (i32* @global_var_3e8 to i32), { 2, 0, 1 }
  uselistorder i1 icmp eq (i32 ptrtoint (i32* @global_var_3e8 to i32), i32 0), { 1, 0 }
  uselistorder i64 12, { 1, 2, 0 }
  uselistorder label %dec_label_pc_21fc, { 1, 0 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_23e0:
  %rcx.0.reg2mem = alloca i64, !insn.addr !746
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !747
  %1 = icmp eq i32 %0, 0, !insn.addr !748
  %2 = icmp eq i1 %1, false, !insn.addr !749
  store i64 4294967295, i64* %rcx.0.reg2mem, !insn.addr !749
  br i1 %2, label %dec_label_pc_2405, label %dec_label_pc_23f8, !insn.addr !749

dec_label_pc_23f8:                                ; preds = %dec_label_pc_23e0
  %3 = trunc i64 %arg1 to i32, !insn.addr !750
  %4 = icmp slt i32 %3, 0, !insn.addr !750
  br i1 %4, label %dec_label_pc_2409, label %dec_label_pc_23fc, !insn.addr !751

dec_label_pc_23fc:                                ; preds = %dec_label_pc_23f8
  %5 = icmp ult i32 %3, 101, !insn.addr !752
  %6 = icmp eq i1 %5, false, !insn.addr !753
  br i1 %6, label %dec_label_pc_241a, label %dec_label_pc_2401, !insn.addr !753

dec_label_pc_2401:                                ; preds = %dec_label_pc_23fc
  %7 = mul i64 %arg1, 2, !insn.addr !754
  %8 = and i64 %7, 4294967294, !insn.addr !755
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !755
  br label %dec_label_pc_2405, !insn.addr !755

dec_label_pc_2405:                                ; preds = %dec_label_pc_2401, %dec_label_pc_23e0
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  ret i64 %rcx.0.reload, !insn.addr !756

dec_label_pc_2409:                                ; preds = %dec_label_pc_23f8
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !757
  unreachable, !insn.addr !757

dec_label_pc_241a:                                ; preds = %dec_label_pc_23fc
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !758
  unreachable, !insn.addr !758

; uselistorder directives
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder [1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6060 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], { 1, 0, 2 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_2430:
  %0 = mul i64 %arg1, 2, !insn.addr !759
  %1 = trunc i64 %arg1 to i32, !insn.addr !760
  %2 = add i32 %1, -101, !insn.addr !760
  %3 = sub i32 100, %1
  %4 = and i32 %3, %1, !insn.addr !760
  %5 = icmp slt i32 %4, 0, !insn.addr !760
  %6 = icmp slt i32 %2, 0, !insn.addr !760
  %7 = icmp eq i1 %6, %5, !insn.addr !761
  %8 = icmp slt i32 %1, 0, !insn.addr !762
  %9 = icmp eq i1 %8, false, !insn.addr !763
  %10 = and i64 %0, 4294967294
  %11 = select i1 %7, i64 4294967294, i64 %10, !insn.addr !761
  %12 = select i1 %9, i64 %11, i64 4294967295, !insn.addr !763
  ret i64 %12, !insn.addr !764

; uselistorder directives
  uselistorder i32 %1, { 1, 0, 2, 3 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2450:
  %0 = trunc i64 %arg1 to i32, !insn.addr !765
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_245b, label %dec_label_pc_2455, !insn.addr !766

dec_label_pc_2455:                                ; preds = %dec_label_pc_2450
  ret i64 4294967295, !insn.addr !767

dec_label_pc_245b:                                ; preds = %dec_label_pc_2450
  %2 = and i64 %arg1, 4294967295, !insn.addr !768
  ret i64 %2, !insn.addr !769
}

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2470:
  %0 = add i64 %arg2, %arg1, !insn.addr !770
  %1 = and i64 %0, 4294967295, !insn.addr !770
  ret i64 %1, !insn.addr !771
}

define i64 @op_sub(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2480:
  %0 = sub i64 %arg1, %arg2, !insn.addr !772
  %1 = and i64 %0, 4294967295, !insn.addr !772
  ret i64 %1, !insn.addr !773
}

define i64 @op_mul(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2490:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !774
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !774
  %2 = mul nsw i64 %1, %0, !insn.addr !774
  %3 = and i64 %2, 4294967295, !insn.addr !774
  ret i64 %3, !insn.addr !775
}

define i64 @op_div(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24a0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !776
  %1 = icmp eq i32 %0, 0, !insn.addr !776
  br i1 %1, label %dec_label_pc_24aa, label %dec_label_pc_24a4, !insn.addr !777

dec_label_pc_24a4:                                ; preds = %dec_label_pc_24a0
  %2 = trunc i64 %arg1 to i32, !insn.addr !778
  %3 = ashr i32 %2, 31, !insn.addr !778
  %4 = and i64 %arg1, 4294967295, !insn.addr !779
  %5 = zext i32 %3 to i64, !insn.addr !779
  %6 = mul i64 %5, 4294967296, !insn.addr !779
  %7 = or i64 %6, %4, !insn.addr !779
  %8 = and i64 %arg2, 4294967295, !insn.addr !779
  %9 = sdiv i64 %7, %8, !insn.addr !779
  %10 = and i64 %9, 4294967295, !insn.addr !779
  ret i64 %10, !insn.addr !780

dec_label_pc_24aa:                                ; preds = %dec_label_pc_24a0
  ret i64 0, !insn.addr !781

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_mod(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24b0:
  %0 = trunc i64 %arg2 to i32, !insn.addr !782
  %1 = icmp eq i32 %0, 0, !insn.addr !782
  br i1 %1, label %dec_label_pc_24bc, label %dec_label_pc_24b4, !insn.addr !783

dec_label_pc_24b4:                                ; preds = %dec_label_pc_24b0
  %2 = trunc i64 %arg1 to i32, !insn.addr !784
  %3 = ashr i32 %2, 31, !insn.addr !784
  %4 = and i64 %arg1, 4294967295, !insn.addr !785
  %5 = zext i32 %3 to i64, !insn.addr !785
  %6 = mul i64 %5, 4294967296, !insn.addr !785
  %7 = or i64 %6, %4, !insn.addr !785
  %8 = and i64 %arg2, 4294967295, !insn.addr !785
  %9 = srem i64 %7, %8, !insn.addr !785
  %10 = and i64 %9, 4294967295, !insn.addr !786
  ret i64 %10, !insn.addr !787

dec_label_pc_24bc:                                ; preds = %dec_label_pc_24b0
  ret i64 0, !insn.addr !788

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @op_and(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24c0:
  %0 = and i64 %arg1, 4294967295
  %1 = and i64 %0, %arg2, !insn.addr !789
  ret i64 %1, !insn.addr !790
}

define i64 @op_or(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24d0:
  %0 = or i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !791
  ret i64 %1, !insn.addr !792
}

define i64 @op_xor(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24e0:
  %0 = xor i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !793
  ret i64 %1, !insn.addr !794
}

define i64 @op_shl(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24f0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !795
  %1 = trunc i64 %arg2 to i32, !insn.addr !796
  %2 = urem i32 %1, 32, !insn.addr !796
  %3 = icmp eq i32 %2, 0, !insn.addr !796
  %4 = trunc i64 %arg1 to i32
  %5 = shl i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !797

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @op_shr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2500:
  %0 = and i64 %arg1, 4294967295, !insn.addr !798
  %1 = trunc i64 %arg2 to i32, !insn.addr !799
  %2 = urem i32 %1, 32, !insn.addr !799
  %3 = icmp eq i32 %2, 0, !insn.addr !799
  %4 = trunc i64 %arg1 to i32
  %5 = ashr i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !800

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2510:
  %0 = trunc i64 %arg1 to i32, !insn.addr !801
  %1 = icmp eq i32 %0, 1, !insn.addr !801
  %2 = select i1 %1, i64 8480, i64 7088, !insn.addr !802
  %3 = icmp eq i32 %0, 0, !insn.addr !803
  %4 = icmp eq i1 %3, false, !insn.addr !804
  %5 = select i1 %4, i64 %2, i64 8464, !insn.addr !804
  ret i64 %5, !insn.addr !805
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2540:
  %0 = trunc i64 %arg2 to i32, !insn.addr !806
  %1 = icmp ult i32 %0, 4
  br i1 %1, label %dec_label_pc_2545, label %dec_label_pc_2562, !insn.addr !807

dec_label_pc_2545:                                ; preds = %dec_label_pc_2540
  %2 = and i64 %arg2, 4294967295, !insn.addr !808
  ret i64 %2, !insn.addr !809

dec_label_pc_2562:                                ; preds = %dec_label_pc_2540
  ret i64 3, !insn.addr !810
}

define i64 @function_2568(i64 %arg1) local_unnamed_addr {
dec_label_pc_2568:
  %0 = trunc i64 %arg1 to i32, !insn.addr !811
  %1 = icmp eq i32 %0, 99, !insn.addr !811
  %2 = zext i1 %1 to i64, !insn.addr !812
  %3 = mul i64 %2, 2, !insn.addr !812
  %4 = or i64 %3, 1, !insn.addr !813
  %5 = icmp eq i32 %0, 2, !insn.addr !814
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !815
  %7 = and i64 %6, 4294967295, !insn.addr !815
  ret i64 %7, !insn.addr !816
}

define i64 @function_257c(i64 %arg1) local_unnamed_addr {
dec_label_pc_257c:
  %0 = trunc i64 %arg1 to i32, !insn.addr !817
  %1 = icmp eq i32 %0, 0, !insn.addr !817
  %2 = icmp eq i1 %1, false, !insn.addr !818
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !819
  ret i64 %3, !insn.addr !820
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2590:
  %0 = trunc i64 %arg2 to i32, !insn.addr !821
  %1 = icmp ult i32 %0, 4
  br i1 %1, label %dec_label_pc_259b, label %dec_label_pc_2595, !insn.addr !822

dec_label_pc_2595:                                ; preds = %dec_label_pc_2590
  ret i64 3, !insn.addr !823

dec_label_pc_259b:                                ; preds = %dec_label_pc_2590
  %2 = and i64 %arg2, 4294967295, !insn.addr !824
  ret i64 %2, !insn.addr !825

; uselistorder directives
  uselistorder i32 4, { 3, 4, 0, 1, 2, 5 }
}

define i64 @state_idle(i64 %arg1) local_unnamed_addr {
dec_label_pc_25b0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !826
  %1 = icmp eq i32 %0, 1, !insn.addr !826
  %2 = zext i1 %1 to i64, !insn.addr !827
  ret i64 %2, !insn.addr !828
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_25c0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !829
  %1 = icmp eq i32 %0, 99, !insn.addr !829
  %2 = zext i1 %1 to i64, !insn.addr !830
  %3 = mul i64 %2, 2, !insn.addr !830
  %4 = or i64 %3, 1, !insn.addr !831
  %5 = icmp eq i32 %0, 2, !insn.addr !832
  %6 = select i1 %5, i64 %arg1, i64 %4, !insn.addr !833
  %7 = and i64 %6, 4294967295, !insn.addr !833
  ret i64 %7, !insn.addr !834
}

define i64 @state_done() local_unnamed_addr {
dec_label_pc_25e0:
  ret i64 2, !insn.addr !835
}

define i64 @state_error(i64 %arg1) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !836
  %1 = icmp eq i32 %0, 0, !insn.addr !836
  %2 = icmp eq i1 %1, false, !insn.addr !837
  %3 = select i1 %2, i64 3, i64 0, !insn.addr !838
  ret i64 %3, !insn.addr !839
}

define i64 @computed_goto(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2600:
  %merge.reg2mem = alloca i64, !insn.addr !840
  %merge1.reg2mem = alloca i64, !insn.addr !840
  %0 = and i64 %arg2, 4294967295, !insn.addr !841
  store i64 %0, i64* @0, align 8, !insn.addr !842
  %trunc = trunc i64 %arg2 to i32
  store i64 %0, i64* %merge1.reg2mem, !insn.addr !842
  store i64 0, i64* %merge.reg2mem, !insn.addr !842
  switch i32 %trunc, label %dec_label_pc_260a [
    i32 0, label %dec_label_pc_2617
    i32 1, label %dec_label_pc_2626
    i32 2, label %dec_label_pc_261a
    i32 3, label %dec_label_pc_2620
  ], !insn.addr !842

dec_label_pc_260a:                                ; preds = %dec_label_pc_2617, %dec_label_pc_2600
  %merge1.reload = load i64, i64* %merge1.reg2mem
  ret i64 %merge1.reload, !insn.addr !843

dec_label_pc_2617:                                ; preds = %dec_label_pc_2626, %dec_label_pc_2620, %dec_label_pc_261a, %dec_label_pc_2600
  %merge.reload = load i64, i64* %merge.reg2mem
  store i64 %merge.reload, i64* %merge1.reg2mem
  br label %dec_label_pc_260a

dec_label_pc_261a:                                ; preds = %dec_label_pc_2600
  store i64 20, i64* %merge.reg2mem
  br label %dec_label_pc_2617

dec_label_pc_2620:                                ; preds = %dec_label_pc_2600
  store i64 30, i64* %merge.reg2mem
  br label %dec_label_pc_2617

dec_label_pc_2626:                                ; preds = %dec_label_pc_2600
  store i64 10, i64* %merge.reg2mem
  br label %dec_label_pc_2617

; uselistorder directives
  uselistorder i64* %merge1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %merge.reg2mem, { 1, 2, 3, 0, 4 }
  uselistorder i64 30, { 0, 3, 4, 1, 2 }
  uselistorder i32 3, { 0, 1, 2, 3, 7, 4, 5, 6, 8, 9 }
  uselistorder i32 2, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_2630:
  %0 = mul i64 %arg1, 2, !insn.addr !844
  %1 = and i64 %0, 4294967294, !insn.addr !844
  ret i64 %1, !insn.addr !845
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2640:
  %0 = mul i64 %arg1, 2, !insn.addr !846
  %1 = and i64 %0, 4294967294, !insn.addr !846
  ret i64 %1, !insn.addr !847

; uselistorder directives
  uselistorder i64 4294967294, { 4, 5, 7, 6, 2, 14, 8, 9, 10, 0, 11, 12, 3, 13, 1 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_2650:
  %0 = urem i64 %arg1, 2
  %1 = icmp eq i64 %0, 0, !insn.addr !848
  %2 = icmp eq i1 %1, false, !insn.addr !849
  br i1 %2, label %dec_label_pc_2660, label %dec_label_pc_2656, !insn.addr !849

dec_label_pc_2656:                                ; preds = %dec_label_pc_2650
  %3 = trunc i64 %arg1 to i32, !insn.addr !850
  %4 = icmp slt i32 %3, 0
  %5 = zext i1 %4 to i32, !insn.addr !851
  %6 = add i32 %5, %3, !insn.addr !852
  %7 = ashr i32 %6, 1, !insn.addr !853
  %8 = zext i32 %7 to i64, !insn.addr !853
  ret i64 %8, !insn.addr !854

dec_label_pc_2660:                                ; preds = %dec_label_pc_2650
  %9 = mul i64 %arg1, 3, !insn.addr !855
  %10 = add i64 %9, 1, !insn.addr !856
  %11 = and i64 %10, 4294967295, !insn.addr !856
  ret i64 %11, !insn.addr !857

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i64 3, { 4, 5, 1, 6, 2, 9, 7, 8, 3, 0 }
  uselistorder i32 0, { 0, 3, 8, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 2, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 4, 5, 6 }
  uselistorder i1 false, { 8, 9, 7, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 1, 25, 26, 27, 28, 29, 30, 2, 31, 32, 33, 34, 35, 3, 36, 37, 4, 38, 5, 0, 39, 6, 40 }
  uselistorder i64 %arg1, { 1, 2, 0 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2670:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_382d to i8*)), !insn.addr !858
  %1 = call i64 @non_local_jump(i64 5), !insn.addr !859
  %2 = and i64 %1, 4294967295, !insn.addr !860
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_36a8, i64 0, i64 0), i64 %2), !insn.addr !861
  %4 = call i64 @non_local_jump(i64 4294967291), !insn.addr !862
  %5 = and i64 %4, 4294967295, !insn.addr !863
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_36a8, i64 0, i64 0), i64 %5), !insn.addr !864
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_36c7, i64 0, i64 0), i64 10), !insn.addr !865
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_36c7, i64 0, i64 0), i64 4294967295), !insn.addr !866
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_36e5, i64 0, i64 0), i64 15), !insn.addr !867
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3706, i64 0, i64 0), i64 10), !insn.addr !868
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_372b, i64 0, i64 0), i64 1), !insn.addr !869
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3749, i64 0, i64 0), i64 2), !insn.addr !870
  %13 = call i64 @computed_goto(i64 ptrtoint ([31 x i8]* @global_var_3749 to i64), i64 2), !insn.addr !871
  %14 = and i64 %13, 4294967295, !insn.addr !872
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3768, i64 0, i64 0), i64 %14), !insn.addr !873
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3786, i64 0, i64 0), i64 10), !insn.addr !874
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_37a4, i64 0, i64 0), i64 10), !insn.addr !875
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_37c5, i64 0, i64 0), i64 16), !insn.addr !876
  %19 = sext i32 %18 to i64, !insn.addr !876
  ret i64 %19, !insn.addr !876

; uselistorder directives
  uselistorder i64 2, { 27, 28, 15, 1, 2, 13, 3, 4, 5, 6, 22, 7, 8, 23, 16, 24, 25, 26, 9, 17, 10, 29, 18, 19, 20, 14, 21, 11, 0, 12 }
  uselistorder [31 x i8]* @global_var_3749, { 1, 0 }
  uselistorder i64 1, { 24, 10, 8, 9, 11, 26, 12, 13, 1, 0, 14, 15, 16, 25, 17, 18, 2, 3, 4, 19, 21, 20, 5, 22, 23, 6, 7 }
  uselistorder i64 10, { 5, 6, 7, 8, 0, 9, 10, 1, 11, 12, 13, 4, 3, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 13, 94, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 6, 36, 0, 37, 38, 39, 40, 1, 95, 10, 41, 42, 43, 44, 45, 7, 46, 48, 47, 11, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 8, 68, 69, 2, 70, 3, 71, 96, 72, 73, 74, 75, 76, 12, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 4, 87, 88, 5, 89, 90, 91, 92, 93 }
  uselistorder i64 (i64)* @non_local_jump, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2780:
  %0 = call i64 @test_control_flow_l1(), !insn.addr !877
  %1 = call i64 @test_control_flow_l2(), !insn.addr !878
  %2 = call i64 @test_control_flow_l3(), !insn.addr !879
  ret i64 0, !insn.addr !880

; uselistorder directives
  uselistorder i64 0, { 21, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 0, 56, 57, 22, 23, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 1, 84, 85, 3, 4, 2, 86, 27, 5, 6, 7, 8, 9, 10, 11, 87, 88, 24, 12, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 111, 109, 110, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 134, 133, 13, 14, 34, 135, 136, 15, 16, 25, 17, 18, 137, 19, 138, 139, 140, 26, 20, 141, 28, 29, 30, 31, 32, 33 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2794:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !881

; uselistorder directives
  uselistorder i32 1, { 4, 137, 118, 6, 5, 119, 120, 121, 7, 11, 10, 9, 8, 122, 14, 13, 12, 3, 138, 123, 18, 17, 16, 15, 139, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 140, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 2, 124, 57, 56, 55, 114, 125, 63, 62, 61, 60, 59, 58, 126, 64, 141, 113, 65, 66, 116, 142, 127, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 117, 143, 128, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 0, 129, 103, 102, 106, 105, 104, 130, 115, 109, 108, 107, 110, 131, 132, 133, 134, 111, 135, 1, 136, 112 }
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
!118 = !{i64 4970}
!119 = !{i64 4972}
!120 = !{i64 4975}
!121 = !{i64 4976}
!122 = !{i64 5000}
!123 = !{i64 5019}
!124 = !{i64 5025}
!125 = !{i64 5031}
!126 = !{i64 5040}
!127 = !{i64 5042}
!128 = !{i64 5044}
!129 = !{i64 5047}
!130 = !{i64 5063}
!131 = !{i64 5066}
!132 = !{i64 5072}
!133 = !{i64 5074}
!134 = !{i64 5077}
!135 = !{i64 5080}
!136 = !{i64 5082}
!137 = !{i64 5090}
!138 = !{i64 5093}
!139 = !{i64 5098}
!140 = !{i64 5106}
!141 = !{i64 5115}
!142 = !{i64 5124}
!143 = !{i64 5133}
!144 = !{i64 5142}
!145 = !{i64 5150}
!146 = !{i64 5154}
!147 = !{i64 5158}
!148 = !{i64 5168}
!149 = !{i64 5172}
!150 = !{i64 5177}
!151 = !{i64 5181}
!152 = !{i64 5186}
!153 = !{i64 5191}
!154 = !{i64 5195}
!155 = !{i64 5199}
!156 = !{i64 5203}
!157 = !{i64 5207}
!158 = !{i64 5211}
!159 = !{i64 5215}
!160 = !{i64 5219}
!161 = !{i64 5224}
!162 = !{i64 5228}
!163 = !{i64 5233}
!164 = !{i64 5237}
!165 = !{i64 5241}
!166 = !{i64 5245}
!167 = !{i64 5249}
!168 = !{i64 5253}
!169 = !{i64 5257}
!170 = !{i64 5261}
!171 = !{i64 5264}
!172 = !{i64 5266}
!173 = !{i64 5268}
!174 = !{i64 5270}
!175 = !{i64 5282}
!176 = !{i64 5278}
!177 = !{i64 5290}
!178 = !{i64 5294}
!179 = !{i64 5298}
!180 = !{i64 5302}
!181 = !{i64 5306}
!182 = !{i64 5310}
!183 = !{i64 5314}
!184 = !{i64 5318}
!185 = !{i64 5322}
!186 = !{i64 5326}
!187 = !{i64 5331}
!188 = !{i64 5335}
!189 = !{i64 5340}
!190 = !{i64 5344}
!191 = !{i64 5348}
!192 = !{i64 5350}
!193 = !{i64 5352}
!194 = !{i64 5374}
!195 = !{i64 5358}
!196 = !{i64 5362}
!197 = !{i64 5365}
!198 = !{i64 5367}
!199 = !{i64 5369}
!200 = !{i64 5371}
!201 = !{i64 5376}
!202 = !{i64 5379}
!203 = !{i64 5383}
!204 = !{i64 5391}
!205 = !{i64 5395}
!206 = !{i64 5397}
!207 = !{i64 5408}
!208 = !{i64 5415}
!209 = !{i64 5418}
!210 = !{i64 5421}
!211 = !{i64 5423}
!212 = !{i64 5424}
!213 = !{i64 5426}
!214 = !{i64 5438}
!215 = !{i64 5441}
!216 = !{i64 5449}
!217 = !{i64 5455}
!218 = !{i64 5457}
!219 = !{i64 5460}
!220 = !{i64 5468}
!221 = !{i64 5471}
!222 = !{i64 5473}
!223 = !{i64 5481}
!224 = !{i64 5489}
!225 = !{i64 5493}
!226 = !{i64 5503}
!227 = !{i64 5507}
!228 = !{i64 5515}
!229 = !{i64 5523}
!230 = !{i64 5532}
!231 = !{i64 5541}
!232 = !{i64 5550}
!233 = !{i64 5559}
!234 = !{i64 5568}
!235 = !{i64 5577}
!236 = !{i64 5586}
!237 = !{i64 5590}
!238 = !{i64 5600}
!239 = !{i64 5604}
!240 = !{i64 5612}
!241 = !{i64 5617}
!242 = !{i64 5622}
!243 = !{i64 5626}
!244 = !{i64 5630}
!245 = !{i64 5635}
!246 = !{i64 5640}
!247 = !{i64 5644}
!248 = !{i64 5648}
!249 = !{i64 5652}
!250 = !{i64 5657}
!251 = !{i64 5661}
!252 = !{i64 5666}
!253 = !{i64 5670}
!254 = !{i64 5675}
!255 = !{i64 5679}
!256 = !{i64 5683}
!257 = !{i64 5688}
!258 = !{i64 5692}
!259 = !{i64 5696}
!260 = !{i64 5701}
!261 = !{i64 5705}
!262 = !{i64 5710}
!263 = !{i64 5715}
!264 = !{i64 5719}
!265 = !{i64 5723}
!266 = !{i64 5729}
!267 = !{i64 5734}
!268 = !{i64 5738}
!269 = !{i64 5742}
!270 = !{i64 5747}
!271 = !{i64 5751}
!272 = !{i64 5756}
!273 = !{i64 5760}
!274 = !{i64 5765}
!275 = !{i64 5770}
!276 = !{i64 5774}
!277 = !{i64 5779}
!278 = !{i64 5783}
!279 = !{i64 5787}
!280 = !{i64 5792}
!281 = !{i64 5797}
!282 = !{i64 5802}
!283 = !{i64 5807}
!284 = !{i64 5811}
!285 = !{i64 5816}
!286 = !{i64 5819}
!287 = !{i64 5465}
!288 = !{i64 5825}
!289 = !{i64 5829}
!290 = !{i64 5833}
!291 = !{i64 5835}
!292 = !{i64 5837}
!293 = !{i64 5845}
!294 = !{i64 5853}
!295 = !{i64 5856}
!296 = !{i64 5860}
!297 = !{i64 5864}
!298 = !{i64 5868}
!299 = !{i64 5872}
!300 = !{i64 5877}
!301 = !{i64 5882}
!302 = !{i64 5887}
!303 = !{i64 5891}
!304 = !{i64 5896}
!305 = !{i64 5900}
!306 = !{i64 5905}
!307 = !{i64 5909}
!308 = !{i64 5914}
!309 = !{i64 5919}
!310 = !{i64 5923}
!311 = !{i64 5928}
!312 = !{i64 5932}
!313 = !{i64 5936}
!314 = !{i64 5940}
!315 = !{i64 5944}
!316 = !{i64 5947}
!317 = !{i64 5949}
!318 = !{i64 5954}
!319 = !{i64 5959}
!320 = !{i64 5963}
!321 = !{i64 5967}
!322 = !{i64 5972}
!323 = !{i64 5976}
!324 = !{i64 5981}
!325 = !{i64 5985}
!326 = !{i64 5989}
!327 = !{i64 5993}
!328 = !{i64 5995}
!329 = !{i64 5997}
!330 = !{i64 6022}
!331 = !{i64 6013}
!332 = !{i64 6016}
!333 = !{i64 6019}
!334 = !{i64 6024}
!335 = !{i64 6034}
!336 = !{i64 6036}
!337 = !{i64 6039}
!338 = !{i64 6056}
!339 = !{i64 6075}
!340 = !{i64 6097}
!341 = !{i64 6112}
!342 = !{i64 6134}
!343 = !{i64 6146}
!344 = !{i64 6168}
!345 = !{i64 6183}
!346 = !{i64 6195}
!347 = !{i64 6214}
!348 = !{i64 6233}
!349 = !{i64 6252}
!350 = !{i64 6271}
!351 = !{i64 6290}
!352 = !{i64 6306}
!353 = !{i64 6325}
!354 = !{i64 6344}
!355 = !{i64 6363}
!356 = !{i64 6382}
!357 = !{i64 6401}
!358 = !{i64 6423}
!359 = !{i64 6438}
!360 = !{i64 6457}
!361 = !{i64 6479}
!362 = !{i64 6494}
!363 = !{i64 6513}
!364 = !{i64 6535}
!365 = !{i64 6551}
!366 = !{i64 6560}
!367 = !{i64 6568}
!368 = !{i64 6571}
!369 = !{i64 6590}
!370 = !{i64 6593}
!371 = !{i64 6596}
!372 = !{i64 6608}
!373 = !{i64 6626}
!374 = !{i64 6629}
!375 = !{i64 6636}
!376 = !{i64 6659}
!377 = !{i64 6664}
!378 = !{i64 6675}
!379 = !{i64 6679}
!380 = !{i64 6688}
!381 = !{i64 6690}
!382 = !{i64 6700}
!383 = !{i64 6702}
!384 = !{i64 6707}
!385 = !{i64 6710}
!386 = !{i64 6714}
!387 = !{i64 6717}
!388 = !{i64 6736}
!389 = !{i64 6741}
!390 = !{i64 6743}
!391 = !{i64 6745}
!392 = !{i64 6748}
!393 = !{i64 6757}
!394 = !{i64 6759}
!395 = !{i64 6765}
!396 = !{i64 6768}
!397 = !{i64 6790}
!398 = !{i64 6900}
!399 = !{i64 6912}
!400 = !{i64 6914}
!401 = !{i64 6930}
!402 = !{i64 6933}
!403 = !{i64 6936}
!404 = !{i64 6939}
!405 = !{i64 6946}
!406 = !{i64 6942}
!407 = !{i64 6961}
!408 = !{i64 6963}
!409 = !{i64 6965}
!410 = !{i64 6976}
!411 = !{i64 6978}
!412 = !{i64 6992}
!413 = !{i64 6994}
!414 = !{i64 6997}
!415 = !{i64 7000}
!416 = !{i64 7003}
!417 = !{i64 7010}
!418 = !{i64 7012}
!419 = !{i64 7029}
!420 = !{i64 7068}
!421 = !{i64 7088}
!422 = !{i64 7096}
!423 = !{i64 7120}
!424 = !{i64 7123}
!425 = !{i64 7132}
!426 = !{i64 7136}
!427 = !{i64 7140}
!428 = !{i64 7145}
!429 = !{i64 7157}
!430 = !{i64 7159}
!431 = !{i64 7162}
!432 = !{i64 7170}
!433 = !{i64 7173}
!434 = !{i64 7175}
!435 = !{i64 7183}
!436 = !{i64 7187}
!437 = !{i64 7195}
!438 = !{i64 7203}
!439 = !{i64 7212}
!440 = !{i64 7221}
!441 = !{i64 7230}
!442 = !{i64 7239}
!443 = !{i64 7248}
!444 = !{i64 7257}
!445 = !{i64 7266}
!446 = !{i64 7270}
!447 = !{i64 7280}
!448 = !{i64 7284}
!449 = !{i64 7292}
!450 = !{i64 7297}
!451 = !{i64 7302}
!452 = !{i64 7306}
!453 = !{i64 7310}
!454 = !{i64 7315}
!455 = !{i64 7320}
!456 = !{i64 7324}
!457 = !{i64 7328}
!458 = !{i64 7332}
!459 = !{i64 7337}
!460 = !{i64 7341}
!461 = !{i64 7346}
!462 = !{i64 7350}
!463 = !{i64 7355}
!464 = !{i64 7359}
!465 = !{i64 7363}
!466 = !{i64 7368}
!467 = !{i64 7372}
!468 = !{i64 7376}
!469 = !{i64 7381}
!470 = !{i64 7385}
!471 = !{i64 7390}
!472 = !{i64 7395}
!473 = !{i64 7399}
!474 = !{i64 7403}
!475 = !{i64 7409}
!476 = !{i64 7414}
!477 = !{i64 7418}
!478 = !{i64 7422}
!479 = !{i64 7427}
!480 = !{i64 7431}
!481 = !{i64 7436}
!482 = !{i64 7440}
!483 = !{i64 7445}
!484 = !{i64 7450}
!485 = !{i64 7454}
!486 = !{i64 7459}
!487 = !{i64 7463}
!488 = !{i64 7467}
!489 = !{i64 7472}
!490 = !{i64 7477}
!491 = !{i64 7482}
!492 = !{i64 7487}
!493 = !{i64 7491}
!494 = !{i64 7496}
!495 = !{i64 7499}
!496 = !{i64 7167}
!497 = !{i64 7505}
!498 = !{i64 7509}
!499 = !{i64 7513}
!500 = !{i64 7515}
!501 = !{i64 7517}
!502 = !{i64 7525}
!503 = !{i64 7533}
!504 = !{i64 7536}
!505 = !{i64 7540}
!506 = !{i64 7544}
!507 = !{i64 7548}
!508 = !{i64 7552}
!509 = !{i64 7557}
!510 = !{i64 7562}
!511 = !{i64 7567}
!512 = !{i64 7571}
!513 = !{i64 7576}
!514 = !{i64 7580}
!515 = !{i64 7585}
!516 = !{i64 7589}
!517 = !{i64 7594}
!518 = !{i64 7599}
!519 = !{i64 7603}
!520 = !{i64 7608}
!521 = !{i64 7612}
!522 = !{i64 7616}
!523 = !{i64 7620}
!524 = !{i64 7624}
!525 = !{i64 7627}
!526 = !{i64 7629}
!527 = !{i64 7634}
!528 = !{i64 7639}
!529 = !{i64 7643}
!530 = !{i64 7647}
!531 = !{i64 7652}
!532 = !{i64 7656}
!533 = !{i64 7661}
!534 = !{i64 7665}
!535 = !{i64 7669}
!536 = !{i64 7673}
!537 = !{i64 7676}
!538 = !{i64 7678}
!539 = !{i64 7691}
!540 = !{i64 7696}
!541 = !{i64 7699}
!542 = !{i64 7702}
!543 = !{i64 7705}
!544 = !{i64 7707}
!545 = !{i64 7709}
!546 = !{i64 7712}
!547 = !{i64 7717}
!548 = !{i64 7736}
!549 = !{i64 7739}
!550 = !{i64 7748}
!551 = !{i64 7752}
!552 = !{i64 7756}
!553 = !{i64 7763}
!554 = !{i64 7767}
!555 = !{i64 7771}
!556 = !{i64 7776}
!557 = !{i64 7788}
!558 = !{i64 7790}
!559 = !{i64 7793}
!560 = !{i64 7801}
!561 = !{i64 7804}
!562 = !{i64 7806}
!563 = !{i64 7814}
!564 = !{i64 7822}
!565 = !{i64 7830}
!566 = !{i64 7839}
!567 = !{i64 7848}
!568 = !{i64 7857}
!569 = !{i64 7866}
!570 = !{i64 7875}
!571 = !{i64 7884}
!572 = !{i64 7903}
!573 = !{i64 7904}
!574 = !{i64 7908}
!575 = !{i64 7916}
!576 = !{i64 7921}
!577 = !{i64 7926}
!578 = !{i64 7930}
!579 = !{i64 7934}
!580 = !{i64 7939}
!581 = !{i64 7944}
!582 = !{i64 7948}
!583 = !{i64 7952}
!584 = !{i64 7956}
!585 = !{i64 7961}
!586 = !{i64 7965}
!587 = !{i64 7970}
!588 = !{i64 7974}
!589 = !{i64 7979}
!590 = !{i64 7983}
!591 = !{i64 7987}
!592 = !{i64 7992}
!593 = !{i64 7996}
!594 = !{i64 8000}
!595 = !{i64 8005}
!596 = !{i64 8009}
!597 = !{i64 8014}
!598 = !{i64 8019}
!599 = !{i64 8023}
!600 = !{i64 8027}
!601 = !{i64 8033}
!602 = !{i64 8038}
!603 = !{i64 8042}
!604 = !{i64 8046}
!605 = !{i64 8051}
!606 = !{i64 8055}
!607 = !{i64 8060}
!608 = !{i64 8064}
!609 = !{i64 8069}
!610 = !{i64 8074}
!611 = !{i64 8078}
!612 = !{i64 8083}
!613 = !{i64 8087}
!614 = !{i64 8091}
!615 = !{i64 8096}
!616 = !{i64 8101}
!617 = !{i64 8106}
!618 = !{i64 8111}
!619 = !{i64 8115}
!620 = !{i64 8120}
!621 = !{i64 8123}
!622 = !{i64 7798}
!623 = !{i64 8129}
!624 = !{i64 8131}
!625 = !{i64 8133}
!626 = !{i64 8141}
!627 = !{i64 8159}
!628 = !{i64 8160}
!629 = !{i64 8164}
!630 = !{i64 8168}
!631 = !{i64 8173}
!632 = !{i64 8177}
!633 = !{i64 8182}
!634 = !{i64 8187}
!635 = !{i64 8191}
!636 = !{i64 8196}
!637 = !{i64 8200}
!638 = !{i64 8205}
!639 = !{i64 8209}
!640 = !{i64 8214}
!641 = !{i64 8219}
!642 = !{i64 8223}
!643 = !{i64 8228}
!644 = !{i64 8232}
!645 = !{i64 8236}
!646 = !{i64 8239}
!647 = !{i64 8241}
!648 = !{i64 8246}
!649 = !{i64 8251}
!650 = !{i64 8255}
!651 = !{i64 8259}
!652 = !{i64 8264}
!653 = !{i64 8268}
!654 = !{i64 8273}
!655 = !{i64 8277}
!656 = !{i64 8281}
!657 = !{i64 8285}
!658 = !{i64 8288}
!659 = !{i64 8290}
!660 = !{i64 8303}
!661 = !{i64 8304}
!662 = !{i64 8307}
!663 = !{i64 8310}
!664 = !{i64 8313}
!665 = !{i64 8315}
!666 = !{i64 8317}
!667 = !{i64 8320}
!668 = !{i64 8322}
!669 = !{i64 8324}
!670 = !{i64 8326}
!671 = !{i64 8329}
!672 = !{i64 8336}
!673 = !{i64 8342}
!674 = !{i64 8344}
!675 = !{i64 8346}
!676 = !{i64 8348}
!677 = !{i64 8350}
!678 = !{i64 8353}
!679 = !{i64 8355}
!680 = !{i64 8357}
!681 = !{i64 8360}
!682 = !{i64 8362}
!683 = !{i64 8367}
!684 = !{i64 8384}
!685 = !{i64 8387}
!686 = !{i64 8390}
!687 = !{i64 8392}
!688 = !{i64 8395}
!689 = !{i64 8399}
!690 = !{i64 8400}
!691 = !{i64 8421}
!692 = !{i64 8432}
!693 = !{i64 8435}
!694 = !{i64 8442}
!695 = !{i64 8443}
!696 = !{i64 8454}
!697 = !{i64 8464}
!698 = !{i64 8467}
!699 = !{i64 8480}
!700 = !{i64 8483}
!701 = !{i64 8496}
!702 = !{i64 8499}
!703 = !{i64 8512}
!704 = !{i64 8520}
!705 = !{i64 8522}
!706 = !{i64 8530}
!707 = !{i64 8537}
!708 = !{i64 8551}
!709 = !{i64 8553}
!710 = !{i64 8557}
!711 = !{i64 8560}
!712 = !{i64 8576}
!713 = !{i64 8592}
!714 = !{i64 8607}
!715 = !{i64 8628}
!716 = !{i64 8671}
!717 = !{i64 8700}
!718 = !{i64 8665}
!719 = !{i64 8744}
!720 = !{i64 8771}
!721 = !{i64 8786}
!722 = !{i64 8801}
!723 = !{i64 8828}
!724 = !{i64 8843}
!725 = !{i64 8862}
!726 = !{i64 8872}
!727 = !{i64 8880}
!728 = !{i64 8883}
!729 = !{i64 8886}
!730 = !{i64 8889}
!731 = !{i64 8891}
!732 = !{i64 8893}
!733 = !{i64 8896}
!734 = !{i64 8899}
!735 = !{i64 8902}
!736 = !{i64 8917}
!737 = !{i64 8936}
!738 = !{i64 9029}
!739 = !{i64 9048}
!740 = !{i64 9067}
!741 = !{i64 9086}
!742 = !{i64 9105}
!743 = !{i64 9127}
!744 = !{i64 9142}
!745 = !{i64 9169}
!746 = !{i64 9184}
!747 = !{i64 9194}
!748 = !{i64 9204}
!749 = !{i64 9206}
!750 = !{i64 9208}
!751 = !{i64 9210}
!752 = !{i64 9212}
!753 = !{i64 9215}
!754 = !{i64 9185}
!755 = !{i64 9219}
!756 = !{i64 9224}
!757 = !{i64 9237}
!758 = !{i64 9254}
!759 = !{i64 9264}
!760 = !{i64 9267}
!761 = !{i64 9275}
!762 = !{i64 9278}
!763 = !{i64 9285}
!764 = !{i64 9288}
!765 = !{i64 9296}
!766 = !{i64 9299}
!767 = !{i64 9306}
!768 = !{i64 9307}
!769 = !{i64 9320}
!770 = !{i64 9328}
!771 = !{i64 9331}
!772 = !{i64 9346}
!773 = !{i64 9348}
!774 = !{i64 9362}
!775 = !{i64 9365}
!776 = !{i64 9376}
!777 = !{i64 9378}
!778 = !{i64 9382}
!779 = !{i64 9383}
!780 = !{i64 9385}
!781 = !{i64 9388}
!782 = !{i64 9392}
!783 = !{i64 9394}
!784 = !{i64 9398}
!785 = !{i64 9399}
!786 = !{i64 9401}
!787 = !{i64 9403}
!788 = !{i64 9406}
!789 = !{i64 9410}
!790 = !{i64 9412}
!791 = !{i64 9426}
!792 = !{i64 9428}
!793 = !{i64 9442}
!794 = !{i64 9444}
!795 = !{i64 9458}
!796 = !{i64 9460}
!797 = !{i64 9462}
!798 = !{i64 9474}
!799 = !{i64 9476}
!800 = !{i64 9478}
!801 = !{i64 9488}
!802 = !{i64 9505}
!803 = !{i64 9509}
!804 = !{i64 9518}
!805 = !{i64 9524}
!806 = !{i64 9536}
!807 = !{i64 9539}
!808 = !{i64 9541}
!809 = !{i64 9559}
!810 = !{i64 9575}
!811 = !{i64 9578}
!812 = !{i64 9584}
!813 = !{i64 9586}
!814 = !{i64 9589}
!815 = !{i64 9592}
!816 = !{i64 9595}
!817 = !{i64 9598}
!818 = !{i64 9600}
!819 = !{i64 9603}
!820 = !{i64 9606}
!821 = !{i64 9616}
!822 = !{i64 9619}
!823 = !{i64 9626}
!824 = !{i64 9627}
!825 = !{i64 9636}
!826 = !{i64 9650}
!827 = !{i64 9653}
!828 = !{i64 9656}
!829 = !{i64 9666}
!830 = !{i64 9672}
!831 = !{i64 9674}
!832 = !{i64 9677}
!833 = !{i64 9680}
!834 = !{i64 9683}
!835 = !{i64 9701}
!836 = !{i64 9714}
!837 = !{i64 9716}
!838 = !{i64 9719}
!839 = !{i64 9722}
!840 = !{i64 9728}
!841 = !{i64 9739}
!842 = !{i64 9748}
!843 = !{i64 9738}
!844 = !{i64 9776}
!845 = !{i64 9779}
!846 = !{i64 9792}
!847 = !{i64 9795}
!848 = !{i64 9808}
!849 = !{i64 9812}
!850 = !{i64 9814}
!851 = !{i64 9816}
!852 = !{i64 9819}
!853 = !{i64 9821}
!854 = !{i64 9823}
!855 = !{i64 9824}
!856 = !{i64 9827}
!857 = !{i64 9830}
!858 = !{i64 9848}
!859 = !{i64 9858}
!860 = !{i64 9873}
!861 = !{i64 9877}
!862 = !{i64 9887}
!863 = !{i64 9895}
!864 = !{i64 9899}
!865 = !{i64 9921}
!866 = !{i64 9936}
!867 = !{i64 9955}
!868 = !{i64 9974}
!869 = !{i64 9993}
!870 = !{i64 10012}
!871 = !{i64 10022}
!872 = !{i64 10034}
!873 = !{i64 10038}
!874 = !{i64 10057}
!875 = !{i64 10076}
!876 = !{i64 10096}
!877 = !{i64 10113}
!878 = !{i64 10118}
!879 = !{i64 10123}
!880 = !{i64 10131}
!881 = !{i64 10144}
