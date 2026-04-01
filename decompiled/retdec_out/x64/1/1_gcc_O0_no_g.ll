source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%__jmp_buf_tag = type { [8 x i32], i32, %_TYPEDEF___sigset_t }
%_TYPEDEF___sigset_t = type { [1 x i32] }

@global_var_3008 = constant i64 -30863634996250
@global_var_3058 = constant [31 x i8] c"CF-L1-01 (sequential_ops): %d\0A\00"
@global_var_3077 = constant [26 x i8] c"CF-L1-02 (single_if): %d\0A\00"
@global_var_3091 = constant [24 x i8] c"CF-L1-03 (if_else): %d\0A\00"
@global_var_30a9 = constant [28 x i8] c"CF-L1-04 (nested_if_2): %d\0A\00"
@global_var_30c8 = constant [31 x i8] c"CF-L1-05 (nested_if_deep): %d\0A\00"
@global_var_30e8 = constant [32 x i8] c"CF-L1-06 (if_elseif_chain): %d\0A\00"
@global_var_3108 = constant [31 x i8] c"CF-L1-07 (if_elseif_long): %d\0A\00"
@global_var_3127 = constant [29 x i8] c"CF-L1-08 (switch_small): %d\0A\00"
@global_var_3144 = constant [29 x i8] c"CF-L1-09 (switch_large): %d\0A\00"
@global_var_3168 = constant [31 x i8] c"CF-L1-10 (switch_default): %d\0A\00"
@global_var_3188 = constant [35 x i8] c"CF-L1-11 (switch_fallthrough): %d\0A\00"
@global_var_31b0 = constant [31 x i8] c"CF-L1-12 (loop_for_fixed): %d\0A\00"
@global_var_3039 = constant i64 -1837290631326603883
@global_var_31cf = constant [27 x i8] c"CF-L1-13 (loop_while): %d\0A\00"
@global_var_31ea = constant [29 x i8] c"CF-L1-14 (loop_dowhile): %d\0A\00"
@global_var_3207 = constant [28 x i8] c"CF-L1-15 (loop_nested): %d\0A\00"
@global_var_3223 = constant [27 x i8] c"CF-L1-16 (loop_break): %d\0A\00"
@global_var_323e = constant [30 x i8] c"CF-L1-17 (loop_continue): %d\0A\00"
@global_var_325c = constant [29 x i8] c"CF-L1-18 (goto_forward): %d\0A\00"
@global_var_3279 = constant [30 x i8] c"CF-L1-19 (goto_backward): %d\0A\00"
@global_var_3297 = constant [27 x i8] c"CF-L1-20 (ternary_op): %d\0A\00"
@global_var_32b4 = constant i64 -23149873731027
@global_var_3300 = constant [32 x i8] c"CF-L2-01 (loop_multi_exit): %d\0A\00"
@global_var_3320 = constant [30 x i8] c"CF-L2-02 (infinite_loop): %d\0A\00"
@global_var_333e = constant [29 x i8] c"CF-L2-03 (multi_return): %d\0A\00"
@global_var_3360 = constant [35 x i8] c"CF-L2-04 (conditional_return): %d\0A\00"
@global_var_3383 = constant [29 x i8] c"CF-L2-05 (duffs_device): %d\0A\00"
@global_var_33a0 = constant [34 x i8] c"CF-L2-06 (loop_complex_cond): %d\0A\00"
@global_var_33c8 = constant [32 x i8] c"CF-L2-07 (loop_modify_var): %d\0A\00"
@global_var_33e8 = constant [36 x i8] c"CF-L2-08 (loop_external_state): %d\0A\00"
@global_var_3410 = constant [36 x i8] c"CF-L2-09 (recursion_factorial): %d\0A\00"
@global_var_3438 = constant [31 x i8] c"CF-L2-10 (tail_recursion): %d\0A\00"
@global_var_3458 = constant [35 x i8] c"CF-L2-11 (indirect_recursion): %d\0A\00"
@global_var_347b = constant [30 x i8] c"CF-L2-12 (call_func_ptr): %d\0A\00"
@global_var_34a0 = constant [36 x i8] c"CF-L2-13 (call_func_ptr_array): %d\0A\00"
@global_var_34c8 = constant [38 x i8] c"CF-L2-15 (process_with_callback): %d\0A\00"
@global_var_3518 = constant [31 x i8] c"CF-L3-01 (non_local_jump): %d\0A\00"
@global_var_3537 = constant [30 x i8] c"CF-L3-02 (cpp_exception): %d\0A\00"
@global_var_3558 = constant [33 x i8] c"CF-L3-03 (large_jump_table): %d\0A\00"
@global_var_3580 = constant [37 x i8] c"CF-L3-04 (conditional_func_ptr): %d\0A\00"
@global_var_35a5 = constant [30 x i8] c"CF-L3-05 (state_machine): %d\0A\00"
@global_var_35c8 = constant [31 x i8] c"CF-L3-06 (fsm_func_table): %d\0A\00"
@global_var_35e7 = constant [30 x i8] c"CF-L3-07 (computed_goto): %d\0A\00"
@global_var_3605 = constant [30 x i8] c"CF-L3-08 (obfuscated_cf): %d\0A\00"
@global_var_3628 = constant [33 x i8] c"CF-L3-09 (opaque_predicate): %d\0A\00"
@global_var_3650 = constant [32 x i8] c"CF-L3-10 (overlapped_code): %d\0A\00"
@0 = external global i32
@global_var_6020 = local_unnamed_addr global i8 0
@1 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\9F\BA\E7\A1\80\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_3030 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @1, i64 0, i64 0)
@global_var_3e8 = global i1 false
@2 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\AB\98\E7\BA\A7\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_32d8 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @2, i64 0, i64 0)
@global_var_6040 = global i32 0
@3 = internal constant [36 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\9E\81\E7\AB\AF\E6\8E\A7\E5\88\B6\E6\B5\81\E7\89\B9\E5\BE\81 ===\00"
@global_var_34f0 = constant i8* getelementptr inbounds ([36 x i8], [36 x i8]* @3, i64 0, i64 0)

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define void @function_1080(i64* %d) local_unnamed_addr {
dec_label_pc_1080:
  call void @__cxa_finalize(i64* %d), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1090(i8* %s) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @function_10a0() local_unnamed_addr {
dec_label_pc_10a0:
  call void @__stack_chk_fail(), !insn.addr !8
  ret void, !insn.addr !8
}

define i32 @function_10b0(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10b0:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10c0([1 x %__jmp_buf_tag] %env) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] %env), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @function_10d0([1 x %__jmp_buf_tag] %env, i32 %val) local_unnamed_addr {
dec_label_pc_10d0:
  call void @longjmp([1 x %__jmp_buf_tag] %env, i32 %val), !insn.addr !11
  ret void, !insn.addr !11
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_10e0:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !12
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !12
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !12
  %3 = call i32 @__libc_start_main(i64 11134, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !12
  %4 = call i64 @__asm_hlt(), !insn.addr !13
  unreachable, !insn.addr !13
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1110:
  ret i64 24592, !insn.addr !14
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1140:
  ret i64 0, !insn.addr !15
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_1180:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_6020, align 1, !insn.addr !16
  %3 = icmp eq i8 %2, 0, !insn.addr !16
  %4 = icmp eq i1 %3, false, !insn.addr !17
  br i1 %4, label %dec_label_pc_11b8, label %dec_label_pc_118d, !insn.addr !17

dec_label_pc_118d:                                ; preds = %dec_label_pc_1180
  %5 = load i64, i64* inttoptr (i64 24568 to i64*), align 8, !insn.addr !18
  %6 = icmp eq i64 %5, 0, !insn.addr !18
  br i1 %6, label %dec_label_pc_11a7, label %dec_label_pc_119b, !insn.addr !19

dec_label_pc_119b:                                ; preds = %dec_label_pc_118d
  %7 = load i64, i64* inttoptr (i64 24584 to i64*), align 8, !insn.addr !20
  %8 = inttoptr i64 %7 to i64*, !insn.addr !21
  call void @__cxa_finalize(i64* %8), !insn.addr !21
  br label %dec_label_pc_11a7, !insn.addr !21

dec_label_pc_11a7:                                ; preds = %dec_label_pc_119b, %dec_label_pc_118d
  %9 = call i64 @deregister_tm_clones(), !insn.addr !22
  store i8 1, i8* @global_var_6020, align 1, !insn.addr !23
  ret i64 %9, !insn.addr !24

dec_label_pc_11b8:                                ; preds = %dec_label_pc_1180
  ret i64 %1, !insn.addr !25

; uselistorder directives
  uselistorder i8 0, { 1, 0 }
  uselistorder i8* @global_var_6020, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = call i64 @register_tm_clones(), !insn.addr !26
  ret i64 %0, !insn.addr !26
}

define i64 @sequential_ops(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_11c9:
  %0 = add i64 %arg2, %arg1, !insn.addr !27
  %1 = mul i64 %0, 2, !insn.addr !28
  %2 = sub i64 %1, %arg3, !insn.addr !29
  %3 = and i64 %2, 4294967295, !insn.addr !30
  ret i64 %3, !insn.addr !31
}

define i64 @single_if(i64 %arg1) local_unnamed_addr {
dec_label_pc_11fb:
  %0 = trunc i64 %arg1 to i32, !insn.addr !32
  %1 = icmp slt i32 %0, 1, !insn.addr !33
  %spec.select.v = select i1 %1, i64 32, i64 33
  %spec.select = shl i64 %arg1, %spec.select.v
  %2 = udiv i64 %spec.select, 4294967296
  ret i64 %2, !insn.addr !34
}

define i64 @if_else(i64 %arg1) local_unnamed_addr {
dec_label_pc_1214:
  %0 = trunc i64 %arg1 to i32, !insn.addr !35
  %1 = icmp sgt i32 %0, 0, !insn.addr !36
  %. = zext i1 %1 to i64
  ret i64 %., !insn.addr !37
}

define i64 @nested_if_2(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1233:
  %rax.0.reg2mem = alloca i64, !insn.addr !38
  %0 = trunc i64 %arg1 to i32, !insn.addr !39
  %1 = icmp slt i32 %0, 1, !insn.addr !40
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !40
  br i1 %1, label %dec_label_pc_1261, label %dec_label_pc_1247, !insn.addr !40

dec_label_pc_1247:                                ; preds = %dec_label_pc_1233
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !39
  %sext3 = mul i64 %arg2, 4294967296
  %3 = ashr exact i64 %sext3, 32, !insn.addr !41
  %4 = trunc i64 %3 to i32, !insn.addr !42
  %5 = icmp slt i32 %4, 1, !insn.addr !43
  br i1 %5, label %dec_label_pc_1257, label %dec_label_pc_124d, !insn.addr !43

dec_label_pc_124d:                                ; preds = %dec_label_pc_1247
  %6 = add nsw i64 %3, %2, !insn.addr !44
  %7 = and i64 %6, 4294967295, !insn.addr !44
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !45
  br label %dec_label_pc_1261, !insn.addr !45

dec_label_pc_1257:                                ; preds = %dec_label_pc_1247
  %8 = and i64 %2, 4294967295, !insn.addr !46
  store i64 %8, i64* %rax.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_1261, !insn.addr !47

dec_label_pc_1261:                                ; preds = %dec_label_pc_1233, %dec_label_pc_1257, %dec_label_pc_124d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !48

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1261, { 1, 2, 0 }
}

define i64 @nested_if_deep(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_1263:
  %rax.0.reg2mem = alloca i64, !insn.addr !49
  %0 = trunc i64 %arg1 to i32, !insn.addr !50
  %1 = icmp slt i32 %0, 1, !insn.addr !51
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !51
  br i1 %1, label %dec_label_pc_12c1, label %dec_label_pc_1281, !insn.addr !51

dec_label_pc_1281:                                ; preds = %dec_label_pc_1263
  %2 = trunc i64 %arg2 to i32, !insn.addr !52
  %3 = icmp slt i32 %2, 1, !insn.addr !53
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !53
  br i1 %3, label %dec_label_pc_12c1, label %dec_label_pc_1287, !insn.addr !53

dec_label_pc_1287:                                ; preds = %dec_label_pc_1281
  %4 = trunc i64 %arg3 to i32, !insn.addr !54
  %5 = icmp slt i32 %4, 1, !insn.addr !55
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !55
  br i1 %5, label %dec_label_pc_12c1, label %dec_label_pc_128d, !insn.addr !55

dec_label_pc_128d:                                ; preds = %dec_label_pc_1287
  %6 = trunc i64 %arg4 to i32, !insn.addr !56
  %7 = icmp slt i32 %6, 1, !insn.addr !57
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !57
  br i1 %7, label %dec_label_pc_12c1, label %dec_label_pc_1293, !insn.addr !57

dec_label_pc_1293:                                ; preds = %dec_label_pc_128d
  %8 = trunc i64 %arg5 to i32, !insn.addr !58
  %9 = icmp slt i32 %8, 1, !insn.addr !59
  %. = select i1 %9, i64 4, i64 5
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !60
  br label %dec_label_pc_12c1, !insn.addr !60

dec_label_pc_12c1:                                ; preds = %dec_label_pc_1263, %dec_label_pc_1281, %dec_label_pc_1287, %dec_label_pc_128d, %dec_label_pc_1293
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !61

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 5, 4, 3, 2, 1 }
  uselistorder label %dec_label_pc_12c1, { 4, 3, 2, 1, 0 }
}

define i64 @if_elseif_chain(i64 %arg1) local_unnamed_addr {
dec_label_pc_12c3:
  %rax.0.reg2mem = alloca i64, !insn.addr !62
  %0 = trunc i64 %arg1 to i32, !insn.addr !63
  %1 = icmp eq i32 %0, 0, !insn.addr !64
  %2 = icmp eq i1 %1, false, !insn.addr !65
  store i64 10, i64* %rax.0.reg2mem, !insn.addr !65
  br i1 %2, label %dec_label_pc_12db, label %dec_label_pc_12fa, !insn.addr !65

dec_label_pc_12db:                                ; preds = %dec_label_pc_12c3
  %3 = icmp eq i32 %0, 1, !insn.addr !66
  %4 = icmp eq i1 %3, false, !insn.addr !67
  store i64 20, i64* %rax.0.reg2mem, !insn.addr !67
  br i1 %4, label %dec_label_pc_12e8, label %dec_label_pc_12fa, !insn.addr !67

dec_label_pc_12e8:                                ; preds = %dec_label_pc_12db
  %5 = icmp eq i32 %0, 2, !insn.addr !68
  %6 = icmp eq i1 %5, false, !insn.addr !69
  %. = select i1 %6, i64 4294967295, i64 30
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !70
  br label %dec_label_pc_12fa, !insn.addr !70

dec_label_pc_12fa:                                ; preds = %dec_label_pc_12e8, %dec_label_pc_12db, %dec_label_pc_12c3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !71

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
}

define i64 @if_elseif_long(i64 %arg1) local_unnamed_addr {
dec_label_pc_12fc:
  %rax.0.reg2mem = alloca i64, !insn.addr !72
  %0 = trunc i64 %arg1 to i32, !insn.addr !73
  %1 = icmp eq i32 %0, 0, !insn.addr !74
  %2 = icmp eq i1 %1, false, !insn.addr !75
  store i64 100, i64* %rax.0.reg2mem, !insn.addr !75
  br i1 %2, label %dec_label_pc_1314, label %dec_label_pc_134d, !insn.addr !75

dec_label_pc_1314:                                ; preds = %dec_label_pc_12fc
  %3 = icmp eq i32 %0, 1, !insn.addr !76
  %4 = icmp eq i1 %3, false, !insn.addr !77
  store i64 200, i64* %rax.0.reg2mem, !insn.addr !77
  br i1 %4, label %dec_label_pc_1321, label %dec_label_pc_134d, !insn.addr !77

dec_label_pc_1321:                                ; preds = %dec_label_pc_1314
  %5 = icmp eq i32 %0, 2, !insn.addr !78
  %6 = icmp eq i1 %5, false, !insn.addr !79
  store i64 300, i64* %rax.0.reg2mem, !insn.addr !79
  br i1 %6, label %dec_label_pc_132e, label %dec_label_pc_134d, !insn.addr !79

dec_label_pc_132e:                                ; preds = %dec_label_pc_1321
  %7 = icmp eq i32 %0, 3, !insn.addr !80
  %8 = icmp eq i1 %7, false, !insn.addr !81
  store i64 400, i64* %rax.0.reg2mem, !insn.addr !81
  br i1 %8, label %dec_label_pc_133b, label %dec_label_pc_134d, !insn.addr !81

dec_label_pc_133b:                                ; preds = %dec_label_pc_132e
  %9 = icmp eq i32 %0, 4, !insn.addr !82
  %10 = icmp eq i1 %9, false, !insn.addr !83
  %. = select i1 %10, i64 4294967295, i64 500
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !84
  br label %dec_label_pc_134d, !insn.addr !84

dec_label_pc_134d:                                ; preds = %dec_label_pc_133b, %dec_label_pc_132e, %dec_label_pc_1321, %dec_label_pc_1314, %dec_label_pc_12fc
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !85

; uselistorder directives
  uselistorder i32 %0, { 3, 2, 1, 0, 4 }
}

define i64 @switch_small(i64 %arg1) local_unnamed_addr {
dec_label_pc_134f:
  %rax.0.reg2mem = alloca i64, !insn.addr !86
  %0 = trunc i64 %arg1 to i32, !insn.addr !87
  %1 = icmp eq i32 %0, 3, !insn.addr !88
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !89
  br i1 %1, label %dec_label_pc_13b7, label %dec_label_pc_136e, !insn.addr !89

dec_label_pc_136e:                                ; preds = %dec_label_pc_134f
  %2 = icmp sgt i32 %0, 3, !insn.addr !90
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !90
  br i1 %2, label %dec_label_pc_13b7, label %dec_label_pc_1374, !insn.addr !90

dec_label_pc_1374:                                ; preds = %dec_label_pc_136e
  %3 = icmp eq i32 %0, 2, !insn.addr !91
  store i64 50, i64* %rax.0.reg2mem, !insn.addr !92
  br i1 %3, label %dec_label_pc_13b7, label %dec_label_pc_1380, !insn.addr !92

dec_label_pc_1380:                                ; preds = %dec_label_pc_1374
  %switch.selectcmp = icmp eq i32 %0, 1
  %switch.select = select i1 %switch.selectcmp, i64 5, i64 4294967295
  %switch.selectcmp2 = icmp eq i32 %0, 0
  %switch.select3 = select i1 %switch.selectcmp2, i64 15, i64 %switch.select
  store i64 %switch.select3, i64* %rax.0.reg2mem
  br label %dec_label_pc_13b7

dec_label_pc_13b7:                                ; preds = %dec_label_pc_136e, %dec_label_pc_1380, %dec_label_pc_134f, %dec_label_pc_1374
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !93

; uselistorder directives
  uselistorder i32 %0, { 3, 2, 1, 0, 4 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 4, 1, 3 }
  uselistorder label %dec_label_pc_13b7, { 1, 3, 0, 2 }
}

define i64 @switch_large(i64 %arg1) local_unnamed_addr {
dec_label_pc_13b9:
  %0 = trunc i64 %arg1 to i32, !insn.addr !94
  %1 = icmp ult i32 %0, 10
  br i1 %1, label %dec_label_pc_13ca, label %dec_label_pc_1434, !insn.addr !95

dec_label_pc_13ca:                                ; preds = %dec_label_pc_13b9
  %2 = mul i64 %arg1, 4
  %3 = and i64 %2, 17179869180
  %4 = add i64 %3, ptrtoint (i64* @global_var_3008 to i64), !insn.addr !96
  %5 = inttoptr i64 %4 to i32*, !insn.addr !96
  %6 = load i32, i32* %5, align 4, !insn.addr !96
  %7 = sext i32 %6 to i64, !insn.addr !97
  %8 = add i64 %7, ptrtoint (i64* @global_var_3008 to i64), !insn.addr !98
  ret i64 %8, !insn.addr !99

dec_label_pc_1434:                                ; preds = %dec_label_pc_13b9
  ret i64 4294967295, !insn.addr !100

; uselistorder directives
  uselistorder i64 ptrtoint (i64* @global_var_3008 to i64), { 1, 0 }
}

define i64 @switch_default(i64 %arg1) local_unnamed_addr {
dec_label_pc_143b:
  %rax.0.reg2mem = alloca i64, !insn.addr !101
  %0 = trunc i64 %arg1 to i32, !insn.addr !102
  %1 = icmp eq i32 %0, 3, !insn.addr !103
  store i64 300, i64* %rax.0.reg2mem, !insn.addr !104
  br i1 %1, label %dec_label_pc_147a, label %dec_label_pc_144c, !insn.addr !104

dec_label_pc_144c:                                ; preds = %dec_label_pc_143b
  %2 = icmp sgt i32 %0, 3, !insn.addr !105
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !105
  br i1 %2, label %dec_label_pc_147a, label %dec_label_pc_1452, !insn.addr !105

dec_label_pc_1452:                                ; preds = %dec_label_pc_144c
  %switch.selectcmp = icmp eq i32 %0, 2
  %switch.select = select i1 %switch.selectcmp, i64 200, i64 0
  %switch.selectcmp2 = icmp eq i32 %0, 1
  %switch.select3 = select i1 %switch.selectcmp2, i64 100, i64 %switch.select
  store i64 %switch.select3, i64* %rax.0.reg2mem
  br label %dec_label_pc_147a

dec_label_pc_147a:                                ; preds = %dec_label_pc_144c, %dec_label_pc_1452, %dec_label_pc_143b
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !106

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 200, { 1, 0 }
  uselistorder label %dec_label_pc_147a, { 1, 0, 2 }
}

define i64 @switch_fallthrough(i64 %arg1) local_unnamed_addr {
dec_label_pc_147c:
  %storemerge.reg2mem = alloca i64, !insn.addr !107
  %stack_var_-12.1.reg2mem = alloca i64, !insn.addr !107
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !107
  %0 = trunc i64 %arg1 to i32, !insn.addr !108
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !108
  %2 = icmp eq i32 %0, 3, !insn.addr !109
  br i1 %2, label %dec_label_pc_14a8, label %dec_label_pc_1494, !insn.addr !110

dec_label_pc_1494:                                ; preds = %dec_label_pc_147c
  %3 = trunc i64 %1 to i32
  %4 = icmp sgt i32 %3, 3, !insn.addr !111
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !111
  br i1 %4, label %dec_label_pc_14c8, label %dec_label_pc_149a, !insn.addr !111

dec_label_pc_149a:                                ; preds = %dec_label_pc_1494
  store i64 0, i64* %stack_var_-12.0.reg2mem
  store i64 0, i64* %stack_var_-12.1.reg2mem
  store i64 4294967295, i64* %storemerge.reg2mem
  switch i32 %3, label %dec_label_pc_14c8 [
    i32 1, label %dec_label_pc_14b9
    i32 2, label %dec_label_pc_14b1
  ]

dec_label_pc_14a8:                                ; preds = %dec_label_pc_147c
  %5 = ashr exact i64 %sext, 30, !insn.addr !112
  store i64 %5, i64* %stack_var_-12.0.reg2mem, !insn.addr !113
  br label %dec_label_pc_14b1, !insn.addr !113

dec_label_pc_14b1:                                ; preds = %dec_label_pc_149a, %dec_label_pc_14a8
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  %6 = ashr exact i64 %sext, 31, !insn.addr !114
  %7 = add nsw i64 %stack_var_-12.0.reload, %6, !insn.addr !115
  store i64 %7, i64* %stack_var_-12.1.reg2mem, !insn.addr !115
  br label %dec_label_pc_14b9, !insn.addr !115

dec_label_pc_14b9:                                ; preds = %dec_label_pc_149a, %dec_label_pc_14b1
  %stack_var_-12.1.reload = load i64, i64* %stack_var_-12.1.reg2mem
  %8 = add nsw i64 %stack_var_-12.1.reload, %1, !insn.addr !116
  %phitmp = and i64 %8, 4294967295
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !117
  br label %dec_label_pc_14c8, !insn.addr !117

dec_label_pc_14c8:                                ; preds = %dec_label_pc_149a, %dec_label_pc_1494, %dec_label_pc_14b9
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !118

; uselistorder directives
  uselistorder i64 %sext, { 1, 2, 0 }
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %stack_var_-12.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_14c8, { 2, 0, 1 }
  uselistorder label %dec_label_pc_14b9, { 1, 0 }
  uselistorder label %dec_label_pc_14b1, { 1, 0 }
}

define i64 @loop_for_fixed(i64 %arg1) local_unnamed_addr {
dec_label_pc_14cd:
  %stack_var_-16.0.lcssa.reg2mem = alloca i64, !insn.addr !119
  %0 = trunc i64 %arg1 to i32, !insn.addr !120
  %1 = icmp sgt i32 %0, 0, !insn.addr !121
  store i64 0, i64* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !121
  br i1 %1, label %dec_label_pc_14e8.lr.ph, label %dec_label_pc_14fa, !insn.addr !121

dec_label_pc_14e8.lr.ph:                          ; preds = %dec_label_pc_14cd
  %2 = add i64 %arg1, 4294967295
  %3 = and i64 %2, 4294967295
  %4 = add i64 %arg1, 4294967294
  %5 = and i64 %4, 4294967295
  %6 = mul nuw i64 %5, %3
  %7 = udiv i64 %6, 2
  %8 = add i64 %2, %7
  %phitmp = and i64 %8, 4294967295
  store i64 %phitmp, i64* %stack_var_-16.0.lcssa.reg2mem
  br label %dec_label_pc_14fa

dec_label_pc_14fa:                                ; preds = %dec_label_pc_14e8.lr.ph, %dec_label_pc_14cd
  %stack_var_-16.0.lcssa.reload = load i64, i64* %stack_var_-16.0.lcssa.reg2mem
  ret i64 %stack_var_-16.0.lcssa.reload, !insn.addr !122

; uselistorder directives
  uselistorder i64* %stack_var_-16.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @loop_while(i64* %arg1) local_unnamed_addr {
dec_label_pc_14ff:
  %.reg2mem5 = alloca i64, !insn.addr !123
  %storemerge2.reg2mem = alloca i32, !insn.addr !123
  %.reg2mem3 = alloca i64, !insn.addr !123
  %.reg2mem = alloca i32, !insn.addr !123
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %0 to i32, !insn.addr !124
  %2 = icmp eq i32 %1, 0, !insn.addr !124
  %3 = icmp eq i1 %2, false, !insn.addr !125
  store i32 %1, i32* %.reg2mem, !insn.addr !125
  store i64 %0, i64* %.reg2mem3, !insn.addr !125
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !125
  store i64 1, i64* %.reg2mem5, !insn.addr !125
  br i1 %3, label %dec_label_pc_1513, label %dec_label_pc_153d.thread, !insn.addr !125

dec_label_pc_1513:                                ; preds = %dec_label_pc_14ff, %dec_label_pc_1513
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %.reload4 = load i64, i64* %.reg2mem3
  %.reload = load i32, i32* %.reg2mem
  %sext = mul i64 %.reload4, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !126
  %narrow = mul nsw i64 %4, 1717986919
  %5 = udiv i64 %narrow, 4294967296, !insn.addr !127
  %6 = trunc i64 %5 to i32, !insn.addr !128
  %7 = ashr i32 %6, 2, !insn.addr !128
  %8 = ashr i32 %.reload, 31, !insn.addr !129
  %9 = sub nsw i32 %7, %8, !insn.addr !130
  %10 = zext i32 %9 to i64
  %11 = add i32 %storemerge2.reload, 1, !insn.addr !131
  %12 = icmp eq i32 %9, 0, !insn.addr !124
  %13 = icmp eq i1 %12, false, !insn.addr !125
  store i32 %9, i32* %.reg2mem, !insn.addr !125
  store i64 %10, i64* %.reg2mem3, !insn.addr !125
  store i32 %11, i32* %storemerge2.reg2mem, !insn.addr !125
  br i1 %13, label %dec_label_pc_1513, label %dec_label_pc_153d, !insn.addr !125

dec_label_pc_153d:                                ; preds = %dec_label_pc_1513
  %14 = icmp sgt i32 %11, 1
  %spec.select = select i1 %14, i32 %11, i32 1
  %phitmp = zext i32 %spec.select to i64
  store i64 %phitmp, i64* %.reg2mem5
  br label %dec_label_pc_153d.thread

dec_label_pc_153d.thread:                         ; preds = %dec_label_pc_153d, %dec_label_pc_14ff
  %.reload6 = load i64, i64* %.reg2mem5
  ret i64 %.reload6, !insn.addr !132

; uselistorder directives
  uselistorder i32 %11, { 1, 2, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i64* %.reg2mem3, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_1513, { 1, 0 }
}

define i64 @loop_dowhile(i64 %arg1) local_unnamed_addr {
dec_label_pc_154c:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !133
  %stack_var_-28.0.reg2mem = alloca i64, !insn.addr !133
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !134
  store i64 %0, i64* %stack_var_-28.0.reg2mem, !insn.addr !135
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !135
  br label %dec_label_pc_155e, !insn.addr !135

dec_label_pc_155e:                                ; preds = %dec_label_pc_155e, %dec_label_pc_154c
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %stack_var_-28.0.reload = load i64, i64* %stack_var_-28.0.reg2mem
  %narrow = mul nsw i64 %stack_var_-28.0.reload, 1717986919
  %1 = udiv i64 %narrow, 4294967296, !insn.addr !136
  %2 = trunc i64 %1 to i32, !insn.addr !137
  %3 = ashr i32 %2, 2, !insn.addr !137
  %4 = trunc i64 %stack_var_-28.0.reload to i32, !insn.addr !138
  %5 = ashr i32 %4, 31, !insn.addr !138
  %6 = sub nsw i32 %3, %5, !insn.addr !139
  %7 = sext i32 %6 to i64, !insn.addr !140
  %8 = add i32 %stack_var_-12.0.reload, 1, !insn.addr !141
  %9 = icmp eq i32 %6, 0, !insn.addr !142
  %10 = icmp eq i1 %9, false, !insn.addr !143
  store i64 %7, i64* %stack_var_-28.0.reg2mem, !insn.addr !143
  store i32 %8, i32* %stack_var_-12.0.reg2mem, !insn.addr !143
  br i1 %10, label %dec_label_pc_155e, label %dec_label_pc_1588, !insn.addr !143

dec_label_pc_1588:                                ; preds = %dec_label_pc_155e
  %11 = zext i32 %8 to i64, !insn.addr !144
  ret i64 %11, !insn.addr !145

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %stack_var_-28.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 1, 0, 2 }
}

define i64 @loop_nested(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_158d:
  %stack_var_-20.1.lcssa.reg2mem = alloca i64, !insn.addr !146
  %0 = trunc i64 %arg1 to i32, !insn.addr !147
  %1 = icmp sgt i32 %0, 0, !insn.addr !148
  store i64 0, i64* %stack_var_-20.1.lcssa.reg2mem, !insn.addr !148
  br i1 %1, label %dec_label_pc_15bc.preheader.lr.ph, label %dec_label_pc_15d0, !insn.addr !148

dec_label_pc_15bc.preheader.lr.ph:                ; preds = %dec_label_pc_158d
  %2 = trunc i64 %arg2 to i32, !insn.addr !149
  %3 = icmp sgt i32 %2, 0
  %smax = select i1 %3, i64 %arg2, i64 0
  %4 = mul i64 %smax, %arg1
  %phitmp = and i64 %4, 4294967295
  store i64 %phitmp, i64* %stack_var_-20.1.lcssa.reg2mem
  br label %dec_label_pc_15d0

dec_label_pc_15d0:                                ; preds = %dec_label_pc_15bc.preheader.lr.ph, %dec_label_pc_158d
  %stack_var_-20.1.lcssa.reload = load i64, i64* %stack_var_-20.1.lcssa.reg2mem
  ret i64 %stack_var_-20.1.lcssa.reload, !insn.addr !150

; uselistorder directives
  uselistorder i64* %stack_var_-20.1.lcssa.reg2mem, { 0, 2, 1 }
}

define i64 @loop_break(i64 %arg1) local_unnamed_addr {
dec_label_pc_15d5:
  %rax.0.reg2mem = alloca i64, !insn.addr !151
  %storemerge.reg2mem = alloca i64, !insn.addr !151
  %storemerge24.reg2mem = alloca i32, !insn.addr !151
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !152
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !153
  %2 = add i64 %0, -32, !insn.addr !154
  %3 = trunc i64 %arg1 to i32, !insn.addr !155
  store i32 0, i32* %storemerge24.reg2mem
  br label %dec_label_pc_1626

dec_label_pc_1626:                                ; preds = %dec_label_pc_15d5, %dec_label_pc_1639
  %storemerge24.reload = load i32, i32* %storemerge24.reg2mem
  %4 = sext i32 %storemerge24.reload to i64, !insn.addr !156
  %5 = mul i64 %4, 4, !insn.addr !154
  %6 = add i64 %2, %5, !insn.addr !154
  %7 = inttoptr i64 %6 to i32*, !insn.addr !154
  %8 = load i32, i32* %7, align 4, !insn.addr !154
  %9 = icmp eq i32 %8, %3, !insn.addr !155
  %10 = icmp eq i1 %9, false, !insn.addr !157
  br i1 %10, label %dec_label_pc_1639, label %dec_label_pc_1634, !insn.addr !157

dec_label_pc_1634:                                ; preds = %dec_label_pc_1626
  %11 = zext i32 %storemerge24.reload to i64, !insn.addr !158
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !159
  br label %dec_label_pc_164a, !insn.addr !159

dec_label_pc_1639:                                ; preds = %dec_label_pc_1626
  %12 = add nuw i32 %storemerge24.reload, 1, !insn.addr !160
  %13 = icmp ult i32 %12, 5, !insn.addr !161
  store i32 %12, i32* %storemerge24.reg2mem, !insn.addr !161
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !161
  br i1 %13, label %dec_label_pc_1626, label %dec_label_pc_164a, !insn.addr !161

dec_label_pc_164a:                                ; preds = %dec_label_pc_1639, %dec_label_pc_1634
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %14 = call i64 @__readfsqword(i64 40), !insn.addr !162
  %15 = icmp eq i64 %1, %14, !insn.addr !162
  store i64 %storemerge.reload, i64* %rax.0.reg2mem, !insn.addr !163
  br i1 %15, label %dec_label_pc_165e, label %dec_label_pc_1659, !insn.addr !163

dec_label_pc_1659:                                ; preds = %dec_label_pc_164a
  call void @__stack_chk_fail(), !insn.addr !164
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !164
  br label %dec_label_pc_165e, !insn.addr !164

dec_label_pc_165e:                                ; preds = %dec_label_pc_1659, %dec_label_pc_164a
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !165

; uselistorder directives
  uselistorder i32 %storemerge24.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge24.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1626, { 1, 0 }
}

define i64 @loop_continue(i64 %arg1) local_unnamed_addr {
dec_label_pc_1660:
  %stack_var_-16.1.lcssa.reg2mem = alloca i64, !insn.addr !166
  %stack_var_-16.12.reg2mem = alloca i32, !insn.addr !166
  %storemerge3.reg2mem = alloca i32, !insn.addr !166
  %0 = trunc i64 %arg1 to i32, !insn.addr !167
  %1 = icmp slt i32 %0, 1, !insn.addr !168
  store i32 1, i32* %storemerge3.reg2mem, !insn.addr !168
  store i32 0, i32* %stack_var_-16.12.reg2mem, !insn.addr !168
  store i64 0, i64* %stack_var_-16.1.lcssa.reg2mem, !insn.addr !168
  br i1 %1, label %dec_label_pc_169a, label %dec_label_pc_167b, !insn.addr !168

dec_label_pc_167b:                                ; preds = %dec_label_pc_1660, %dec_label_pc_167b
  %stack_var_-16.12.reload = load i32, i32* %stack_var_-16.12.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = urem i32 %storemerge3.reload, 2, !insn.addr !169
  %3 = icmp eq i32 %2, 0, !insn.addr !170
  %4 = select i1 %3, i32 0, i32 %storemerge3.reload
  %spec.select = add i32 %4, %stack_var_-16.12.reload
  %5 = add i32 %storemerge3.reload, 1, !insn.addr !171
  %6 = icmp sgt i32 %5, %0, !insn.addr !168
  store i32 %5, i32* %storemerge3.reg2mem, !insn.addr !168
  store i32 %spec.select, i32* %stack_var_-16.12.reg2mem, !insn.addr !168
  br i1 %6, label %dec_label_pc_1692.dec_label_pc_169a_crit_edge, label %dec_label_pc_167b, !insn.addr !168

dec_label_pc_1692.dec_label_pc_169a_crit_edge:    ; preds = %dec_label_pc_167b
  %phitmp = zext i32 %spec.select to i64
  store i64 %phitmp, i64* %stack_var_-16.1.lcssa.reg2mem
  br label %dec_label_pc_169a

dec_label_pc_169a:                                ; preds = %dec_label_pc_1692.dec_label_pc_169a_crit_edge, %dec_label_pc_1660
  %stack_var_-16.1.lcssa.reload = load i64, i64* %stack_var_-16.1.lcssa.reg2mem
  ret i64 %stack_var_-16.1.lcssa.reload, !insn.addr !172

; uselistorder directives
  uselistorder i32 %spec.select, { 1, 0 }
  uselistorder i32 %storemerge3.reload, { 1, 0, 2 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.12.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-16.1.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_167b, { 1, 0 }
}

define i64 @goto_forward(i64 %arg1) local_unnamed_addr {
dec_label_pc_169f:
  %0 = trunc i64 %arg1 to i32, !insn.addr !173
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !173
  %2 = icmp slt i32 %0, 1, !insn.addr !174
  %3 = select i1 %2, i64 1, i64 %1
  %spec.select = ashr exact i64 %sext, 31
  %4 = mul i64 %3, %spec.select
  %5 = and i64 %4, 4294967294, !insn.addr !175
  ret i64 %5, !insn.addr !176

; uselistorder directives
  uselistorder i64 %sext, { 1, 0 }
}

define i64 @goto_backward(i64 %arg1) local_unnamed_addr {
dec_label_pc_16c9:
  %storemerge2.reg2mem = alloca i64, !insn.addr !177
  %stack_var_-16.03.reg2mem = alloca i32, !insn.addr !177
  %storemerge4.reg2mem = alloca i32, !insn.addr !177
  %0 = trunc i64 %arg1 to i32, !insn.addr !178
  %1 = icmp eq i32 %0, 0, !insn.addr !179
  %2 = icmp slt i32 %0, 0, !insn.addr !179
  %3 = icmp eq i1 %2, false, !insn.addr !180
  %4 = icmp eq i1 %1, false, !insn.addr !180
  %5 = icmp ne i1 %3, %4, !insn.addr !180
  %6 = icmp slt i32 %0, 1, !insn.addr !181
  %or.cond = or i1 %6, %5
  store i32 1, i32* %storemerge4.reg2mem, !insn.addr !180
  store i32 1, i32* %stack_var_-16.03.reg2mem, !insn.addr !180
  store i64 1, i64* %storemerge2.reg2mem, !insn.addr !180
  br i1 %or.cond, label %dec_label_pc_170b, label %dec_label_pc_16f7, !insn.addr !180

dec_label_pc_16f7:                                ; preds = %dec_label_pc_16c9, %dec_label_pc_16f7
  %stack_var_-16.03.reload = load i32, i32* %stack_var_-16.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %7 = mul i32 %stack_var_-16.03.reload, %storemerge4.reload, !insn.addr !182
  %8 = add i32 %storemerge4.reload, 1, !insn.addr !183
  %9 = icmp sgt i32 %8, %0, !insn.addr !181
  store i32 %8, i32* %storemerge4.reg2mem, !insn.addr !181
  store i32 %7, i32* %stack_var_-16.03.reg2mem, !insn.addr !181
  br i1 %9, label %dec_label_pc_16ef.dec_label_pc_1707_crit_edge, label %dec_label_pc_16f7, !insn.addr !181

dec_label_pc_16ef.dec_label_pc_1707_crit_edge:    ; preds = %dec_label_pc_16f7
  %phitmp = zext i32 %7 to i64
  store i64 %phitmp, i64* %storemerge2.reg2mem
  br label %dec_label_pc_170b

dec_label_pc_170b:                                ; preds = %dec_label_pc_16c9, %dec_label_pc_16ef.dec_label_pc_1707_crit_edge
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  ret i64 %storemerge2.reload, !insn.addr !184

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %0, { 1, 0, 3, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.03.reg2mem, { 2, 0, 1 }
  uselistorder label %dec_label_pc_170b, { 1, 0 }
  uselistorder label %dec_label_pc_16f7, { 1, 0 }
}

define i64 @ternary_op(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_170d:
  %0 = trunc i64 %arg2 to i32, !insn.addr !185
  %1 = trunc i64 %arg1 to i32, !insn.addr !185
  %2 = sub i32 %0, %1, !insn.addr !185
  %3 = xor i64 %arg2, %arg1
  %4 = trunc i64 %3 to i32, !insn.addr !185
  %5 = xor i32 %2, %0, !insn.addr !185
  %6 = and i32 %5, %4, !insn.addr !185
  %7 = icmp slt i32 %6, 0, !insn.addr !185
  %8 = icmp slt i32 %2, 0, !insn.addr !185
  %9 = icmp eq i1 %8, %7, !insn.addr !186
  %.v = select i1 %9, i64 %arg2, i64 %arg1
  %10 = and i64 %.v, 4294967295, !insn.addr !186
  ret i64 %10, !insn.addr !187

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @test_control_flow_l1() local_unnamed_addr {
dec_label_pc_1728:
  %0 = call i32 @puts(i8* bitcast (i8** @global_var_3030 to i8*)), !insn.addr !188
  %1 = call i64 @sequential_ops(i64 5, i64 7, i64 3), !insn.addr !189
  %2 = and i64 %1, 4294967295, !insn.addr !190
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3058, i64 0, i64 0), i64 %2), !insn.addr !191
  %4 = call i64 @single_if(i64 10), !insn.addr !192
  %5 = and i64 %4, 4294967295, !insn.addr !193
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3077, i64 0, i64 0), i64 %5), !insn.addr !194
  %7 = call i64 @single_if(i64 4294967291), !insn.addr !195
  %8 = and i64 %7, 4294967295, !insn.addr !196
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_3077, i64 0, i64 0), i64 %8), !insn.addr !197
  %10 = call i64 @if_else(i64 5), !insn.addr !198
  %11 = and i64 %10, 4294967295, !insn.addr !199
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3091, i64 0, i64 0), i64 %11), !insn.addr !200
  %13 = call i64 @if_else(i64 4294967293), !insn.addr !201
  %14 = and i64 %13, 4294967295, !insn.addr !202
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_3091, i64 0, i64 0), i64 %14), !insn.addr !203
  %16 = call i64 @nested_if_2(i64 10, i64 5), !insn.addr !204
  %17 = and i64 %16, 4294967295, !insn.addr !205
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30a9, i64 0, i64 0), i64 %17), !insn.addr !206
  %19 = call i64 @nested_if_2(i64 10, i64 4294967291), !insn.addr !207
  %20 = and i64 %19, 4294967295, !insn.addr !208
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30a9, i64 0, i64 0), i64 %20), !insn.addr !209
  %22 = call i64 @nested_if_2(i64 4294967286, i64 5), !insn.addr !210
  %23 = and i64 %22, 4294967295, !insn.addr !211
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_30a9, i64 0, i64 0), i64 %23), !insn.addr !212
  %25 = call i64 @nested_if_deep(i64 1, i64 1, i64 1, i64 1, i64 1), !insn.addr !213
  %26 = and i64 %25, 4294967295, !insn.addr !214
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_30c8, i64 0, i64 0), i64 %26), !insn.addr !215
  %28 = call i64 @if_elseif_chain(i64 1), !insn.addr !216
  %29 = and i64 %28, 4294967295, !insn.addr !217
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_30e8, i64 0, i64 0), i64 %29), !insn.addr !218
  %31 = call i64 @if_elseif_long(i64 3), !insn.addr !219
  %32 = and i64 %31, 4294967295, !insn.addr !220
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3108, i64 0, i64 0), i64 %32), !insn.addr !221
  %34 = call i64 @switch_small(i64 2), !insn.addr !222
  %35 = and i64 %34, 4294967295, !insn.addr !223
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3127, i64 0, i64 0), i64 %35), !insn.addr !224
  %37 = call i64 @switch_large(i64 7), !insn.addr !225
  %38 = and i64 %37, 4294967295, !insn.addr !226
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3144, i64 0, i64 0), i64 %38), !insn.addr !227
  %40 = call i64 @switch_default(i64 5), !insn.addr !228
  %41 = and i64 %40, 4294967295, !insn.addr !229
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3168, i64 0, i64 0), i64 %41), !insn.addr !230
  %43 = call i64 @switch_fallthrough(i64 3), !insn.addr !231
  %44 = and i64 %43, 4294967295, !insn.addr !232
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3188, i64 0, i64 0), i64 %44), !insn.addr !233
  %46 = call i64 @loop_for_fixed(i64 10), !insn.addr !234
  %47 = and i64 %46, 4294967295, !insn.addr !235
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31b0, i64 0, i64 0), i64 %47), !insn.addr !236
  %49 = call i64 @loop_while(i64* nonnull @global_var_3039), !insn.addr !237
  %50 = and i64 %49, 4294967295, !insn.addr !238
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_31cf, i64 0, i64 0), i64 %50), !insn.addr !239
  %52 = call i64 @loop_dowhile(i64 9876), !insn.addr !240
  %53 = and i64 %52, 4294967295, !insn.addr !241
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31ea, i64 0, i64 0), i64 %53), !insn.addr !242
  %55 = call i64 @loop_nested(i64 3, i64 4), !insn.addr !243
  %56 = and i64 %55, 4294967295, !insn.addr !244
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3207, i64 0, i64 0), i64 %56), !insn.addr !245
  %58 = call i64 @loop_break(i64 30), !insn.addr !246
  %59 = and i64 %58, 4294967295, !insn.addr !247
  %60 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3223, i64 0, i64 0), i64 %59), !insn.addr !248
  %61 = call i64 @loop_break(i64 99), !insn.addr !249
  %62 = and i64 %61, 4294967295, !insn.addr !250
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3223, i64 0, i64 0), i64 %62), !insn.addr !251
  %64 = call i64 @loop_continue(i64 10), !insn.addr !252
  %65 = and i64 %64, 4294967295, !insn.addr !253
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_323e, i64 0, i64 0), i64 %65), !insn.addr !254
  %67 = call i64 @goto_forward(i64 5), !insn.addr !255
  %68 = and i64 %67, 4294967295, !insn.addr !256
  %69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_325c, i64 0, i64 0), i64 %68), !insn.addr !257
  %70 = call i64 @goto_forward(i64 4294967293), !insn.addr !258
  %71 = and i64 %70, 4294967295, !insn.addr !259
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_325c, i64 0, i64 0), i64 %71), !insn.addr !260
  %73 = call i64 @goto_backward(i64 5), !insn.addr !261
  %74 = and i64 %73, 4294967295, !insn.addr !262
  %75 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3279, i64 0, i64 0), i64 %74), !insn.addr !263
  %76 = call i64 @ternary_op(i64 10, i64 5), !insn.addr !264
  %77 = and i64 %76, 4294967295, !insn.addr !265
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3297, i64 0, i64 0), i64 %77), !insn.addr !266
  %79 = call i64 @ternary_op(i64 3, i64 8), !insn.addr !267
  %80 = and i64 %79, 4294967295, !insn.addr !268
  %81 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_3297, i64 0, i64 0), i64 %80), !insn.addr !269
  %82 = sext i32 %81 to i64, !insn.addr !269
  ret i64 %82, !insn.addr !270

; uselistorder directives
  uselistorder i64 (i64, i64)* @ternary_op, { 1, 0 }
  uselistorder i64 (i64)* @goto_forward, { 1, 0 }
  uselistorder i64 (i64)* @loop_break, { 1, 0 }
  uselistorder i64 30, { 2, 1, 0 }
  uselistorder i64 (i64, i64)* @nested_if_2, { 2, 1, 0 }
  uselistorder i64 (i64)* @if_else, { 1, 0 }
  uselistorder i64 (i64)* @single_if, { 1, 0 }
}

define i64 @loop_multi_exit(i64 %arg1) local_unnamed_addr {
dec_label_pc_1adf:
  %rax.0.reg2mem = alloca i64, !insn.addr !271
  %storemerge2.reg2mem = alloca i64, !insn.addr !271
  %storemerge7.reg2mem = alloca i32, !insn.addr !271
  %storemerge36.reg2mem = alloca i32, !insn.addr !271
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !272
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !273
  %2 = add i64 %0, -64, !insn.addr !274
  %3 = trunc i64 %arg1 to i32, !insn.addr !275
  store i32 0, i32* %storemerge7.reg2mem
  br label %dec_label_pc_1b97.preheader

dec_label_pc_1b63:                                ; preds = %dec_label_pc_1b97.preheader, %dec_label_pc_1b93
  %storemerge36.reload = load i32, i32* %storemerge36.reg2mem
  %4 = sext i32 %storemerge36.reload to i64, !insn.addr !276
  %5 = add nsw i64 %20, %4, !insn.addr !277
  %6 = mul i64 %5, 4, !insn.addr !274
  %7 = add i64 %2, %6, !insn.addr !274
  %8 = inttoptr i64 %7 to i32*, !insn.addr !274
  %9 = load i32, i32* %8, align 4, !insn.addr !274
  %10 = icmp eq i32 %9, %3, !insn.addr !275
  %11 = icmp eq i1 %10, false, !insn.addr !278
  br i1 %11, label %dec_label_pc_1b93, label %dec_label_pc_1b7e, !insn.addr !278

dec_label_pc_1b7e:                                ; preds = %dec_label_pc_1b63
  %12 = mul i32 %storemerge7.reload, 10, !insn.addr !279
  %13 = add i32 %storemerge36.reload, %12, !insn.addr !280
  %14 = zext i32 %13 to i64, !insn.addr !280
  store i64 %14, i64* %storemerge2.reg2mem, !insn.addr !281
  br label %dec_label_pc_1bac, !insn.addr !281

dec_label_pc_1b93:                                ; preds = %dec_label_pc_1b63
  %15 = add nuw i32 %storemerge36.reload, 1, !insn.addr !282
  %16 = icmp ult i32 %15, 4, !insn.addr !283
  store i32 %15, i32* %storemerge36.reg2mem, !insn.addr !283
  br i1 %16, label %dec_label_pc_1b63, label %dec_label_pc_1b9d, !insn.addr !283

dec_label_pc_1b9d:                                ; preds = %dec_label_pc_1b93
  %17 = add nuw i32 %storemerge7.reload, 1, !insn.addr !284
  %18 = icmp ult i32 %17, 3, !insn.addr !285
  store i32 %17, i32* %storemerge7.reg2mem, !insn.addr !285
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !285
  br i1 %18, label %dec_label_pc_1b97.preheader, label %dec_label_pc_1bac, !insn.addr !285

dec_label_pc_1b97.preheader:                      ; preds = %dec_label_pc_1adf, %dec_label_pc_1b9d
  %storemerge7.reload = load i32, i32* %storemerge7.reg2mem
  %19 = sext i32 %storemerge7.reload to i64, !insn.addr !286
  %20 = mul i64 %19, 4, !insn.addr !287
  store i32 0, i32* %storemerge36.reg2mem
  br label %dec_label_pc_1b63

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1b9d, %dec_label_pc_1b7e
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  %21 = call i64 @__readfsqword(i64 40), !insn.addr !288
  %22 = icmp eq i64 %1, %21, !insn.addr !288
  store i64 %storemerge2.reload, i64* %rax.0.reg2mem, !insn.addr !289
  br i1 %22, label %dec_label_pc_1bc0, label %dec_label_pc_1bbb, !insn.addr !289

dec_label_pc_1bbb:                                ; preds = %dec_label_pc_1bac
  call void @__stack_chk_fail(), !insn.addr !290
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !290
  br label %dec_label_pc_1bc0, !insn.addr !290

dec_label_pc_1bc0:                                ; preds = %dec_label_pc_1bbb, %dec_label_pc_1bac
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !291

; uselistorder directives
  uselistorder i32 %storemerge7.reload, { 1, 2, 0 }
  uselistorder i32 %storemerge36.reload, { 0, 2, 1 }
  uselistorder i32* %storemerge36.reg2mem, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1b97.preheader, { 1, 0 }
}

define i64 @infinite_loop(i32* %arg1) local_unnamed_addr {
dec_label_pc_1bc2:
  %0 = alloca i64
  %stack_var_-12.1.reg2mem = alloca i64, !insn.addr !292
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !292
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 1, !insn.addr !293
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !294
  br label %dec_label_pc_1bd5, !insn.addr !294

dec_label_pc_1bd5:                                ; preds = %dec_label_pc_1be0, %dec_label_pc_1bc2
  store i64 0, i64* %stack_var_-12.1.reg2mem, !insn.addr !295
  br i1 %3, label %dec_label_pc_1bfa, label %dec_label_pc_1be0, !insn.addr !295

dec_label_pc_1be0:                                ; preds = %dec_label_pc_1bd5
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %4 = add i32 %stack_var_-12.0.reload, 1, !insn.addr !296
  %5 = icmp sgt i32 %4, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !297
  store i32 %4, i32* %stack_var_-12.0.reg2mem, !insn.addr !297
  br i1 %5, label %dec_label_pc_1bed, label %dec_label_pc_1bd5, !insn.addr !297

dec_label_pc_1bed:                                ; preds = %dec_label_pc_1be0
  store i32 1, i32* %arg1, align 4, !insn.addr !298
  %phitmp = zext i32 %4 to i64
  store i64 %phitmp, i64* %stack_var_-12.1.reg2mem, !insn.addr !299
  br label %dec_label_pc_1bfa, !insn.addr !299

dec_label_pc_1bfa:                                ; preds = %dec_label_pc_1bd5, %dec_label_pc_1bed
  %stack_var_-12.1.reload = load i64, i64* %stack_var_-12.1.reg2mem
  ret i64 %stack_var_-12.1.reload, !insn.addr !300

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-12.1.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1bfa, { 1, 0 }
}

define i64 @multi_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bff:
  %rax.0.reg2mem = alloca i64, !insn.addr !301
  %0 = trunc i64 %arg1 to i32, !insn.addr !302
  %1 = icmp slt i32 %0, 0, !insn.addr !303
  %2 = icmp eq i1 %1, false, !insn.addr !304
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !304
  br i1 %2, label %dec_label_pc_1c17, label %dec_label_pc_1c41, !insn.addr !304

dec_label_pc_1c17:                                ; preds = %dec_label_pc_1bff
  %3 = mul i64 %arg1, 2
  %4 = trunc i64 %3 to i32, !insn.addr !305
  %5 = icmp slt i32 %4, 101, !insn.addr !306
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !306
  br i1 %5, label %dec_label_pc_1c2c, label %dec_label_pc_1c41, !insn.addr !306

dec_label_pc_1c2c:                                ; preds = %dec_label_pc_1c17
  %6 = urem i64 %arg1, 2
  %7 = icmp eq i64 %6, 0, !insn.addr !307
  %8 = icmp eq i1 %7, false, !insn.addr !308
  br i1 %8, label %dec_label_pc_1c3b, label %dec_label_pc_1c36, !insn.addr !308

dec_label_pc_1c36:                                ; preds = %dec_label_pc_1c2c
  %9 = and i64 %3, 4294967294, !insn.addr !309
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !310
  br label %dec_label_pc_1c41, !insn.addr !310

dec_label_pc_1c3b:                                ; preds = %dec_label_pc_1c2c
  %10 = add i64 %arg1, 1, !insn.addr !311
  %11 = and i64 %10, 4294967295, !insn.addr !311
  store i64 %11, i64* %rax.0.reg2mem, !insn.addr !311
  br label %dec_label_pc_1c41, !insn.addr !311

dec_label_pc_1c41:                                ; preds = %dec_label_pc_1c17, %dec_label_pc_1bff, %dec_label_pc_1c3b, %dec_label_pc_1c36
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !312

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 3, 1, 2 }
  uselistorder i64 %arg1, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_1c41, { 2, 3, 0, 1 }
}

define i64 @conditional_return(i64 %arg1) local_unnamed_addr {
dec_label_pc_1c43:
  %rax.0.reg2mem = alloca i64, !insn.addr !313
  %0 = trunc i64 %arg1 to i32, !insn.addr !314
  %1 = icmp slt i32 %0, 1, !insn.addr !315
  br i1 %1, label %dec_label_pc_1c5b, label %dec_label_pc_1c54, !insn.addr !315

dec_label_pc_1c54:                                ; preds = %dec_label_pc_1c43
  %2 = mul i64 %arg1, 2
  %3 = and i64 %2, 4294967294, !insn.addr !316
  store i64 %3, i64* %rax.0.reg2mem, !insn.addr !317
  br label %dec_label_pc_1c6d, !insn.addr !317

dec_label_pc_1c5b:                                ; preds = %dec_label_pc_1c43
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !314
  %5 = trunc i64 %4 to i32, !insn.addr !318
  %6 = icmp slt i32 %5, 0, !insn.addr !318
  %7 = icmp eq i1 %6, false, !insn.addr !319
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !319
  br i1 %7, label %dec_label_pc_1c6d, label %dec_label_pc_1c61, !insn.addr !319

dec_label_pc_1c61:                                ; preds = %dec_label_pc_1c5b
  %8 = sub nsw i64 0, %4, !insn.addr !320
  %9 = and i64 %8, 4294967295, !insn.addr !320
  store i64 %9, i64* %rax.0.reg2mem, !insn.addr !321
  br label %dec_label_pc_1c6d, !insn.addr !321

dec_label_pc_1c6d:                                ; preds = %dec_label_pc_1c5b, %dec_label_pc_1c61, %dec_label_pc_1c54
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !322

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1c6d, { 1, 0, 2 }
}

define i64 @duffs_device(i64* %arg1, i32* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1c6f:
  %storemerge.reg2mem = alloca i64, !insn.addr !323
  %0 = trunc i64 %arg3 to i32, !insn.addr !324
  %1 = icmp eq i32 %0, 0, !insn.addr !325
  %2 = icmp slt i32 %0, 0, !insn.addr !325
  %3 = icmp eq i1 %2, false, !insn.addr !326
  %4 = icmp eq i1 %1, false, !insn.addr !326
  %5 = icmp eq i1 %3, %4, !insn.addr !326
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !326
  br i1 %5, label %dec_label_pc_1c92, label %dec_label_pc_1dd2, !insn.addr !326

dec_label_pc_1c92:                                ; preds = %dec_label_pc_1c6f
  %sext = mul i64 %arg3, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !324
  %7 = trunc i64 %6 to i32, !insn.addr !327
  %8 = srem i32 %7, 8, !insn.addr !328
  %9 = icmp ult i32 %8, 8
  br i1 %9, label %dec_label_pc_1cbd, label %dec_label_pc_1dcf, !insn.addr !329

dec_label_pc_1cbd:                                ; preds = %dec_label_pc_1c92
  %10 = zext i32 %8 to i64, !insn.addr !328
  %11 = mul i64 %10, 4, !insn.addr !330
  %12 = add i64 %11, ptrtoint (i64* @global_var_32b4 to i64), !insn.addr !331
  %13 = inttoptr i64 %12 to i32*, !insn.addr !331
  %14 = load i32, i32* %13, align 4, !insn.addr !331
  %15 = sext i32 %14 to i64, !insn.addr !332
  %16 = add i64 %15, ptrtoint (i64* @global_var_32b4 to i64), !insn.addr !333
  ret i64 %16, !insn.addr !334

dec_label_pc_1dcf:                                ; preds = %dec_label_pc_1c92
  %17 = and i64 %6, 4294967295, !insn.addr !335
  store i64 %17, i64* %storemerge.reg2mem, !insn.addr !335
  br label %dec_label_pc_1dd2, !insn.addr !335

dec_label_pc_1dd2:                                ; preds = %dec_label_pc_1c6f, %dec_label_pc_1dcf
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !336

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 ptrtoint (i64* @global_var_32b4 to i64), { 1, 0 }
  uselistorder label %dec_label_pc_1dd2, { 1, 0 }
}

define i64 @loop_complex_cond(i64 %arg1) local_unnamed_addr {
dec_label_pc_1dd4:
  %.lcssa.reg2mem = alloca i32, !insn.addr !337
  %storemerge.lcssa.reg2mem = alloca i32, !insn.addr !337
  %stack_var_-20.0.lcssa.reg2mem = alloca i32, !insn.addr !337
  %stack_var_-20.04.reg2mem = alloca i32, !insn.addr !337
  %stack_var_-16.0.in5.reg2mem = alloca i64, !insn.addr !337
  %storemerge6.reg2mem = alloca i32, !insn.addr !337
  %.reg2mem = alloca i32, !insn.addr !337
  %0 = trunc i64 %arg1 to i32, !insn.addr !338
  %1 = icmp slt i32 %0, 1, !insn.addr !339
  store i32 0, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !339
  store i32 0, i32* %storemerge.lcssa.reg2mem, !insn.addr !339
  store i32 %0, i32* %.lcssa.reg2mem, !insn.addr !339
  br i1 %1, label %dec_label_pc_1e15, label %dec_label_pc_1e0f.lr.ph, !insn.addr !339

dec_label_pc_1e0f.lr.ph:                          ; preds = %dec_label_pc_1dd4
  %sext = mul i64 %arg1, 4294967296
  store i32 %0, i32* %.reg2mem
  store i32 0, i32* %storemerge6.reg2mem
  store i64 %sext, i64* %stack_var_-16.0.in5.reg2mem
  store i32 0, i32* %stack_var_-20.04.reg2mem
  br label %dec_label_pc_1e0f

dec_label_pc_1df5:                                ; preds = %dec_label_pc_1e0f
  %stack_var_-16.0.in5.reload = load i64, i64* %stack_var_-16.0.in5.reg2mem
  %2 = add nuw nsw i32 %stack_var_-20.04.reload, 2, !insn.addr !340
  %sext2 = add i64 %stack_var_-16.0.in5.reload, -4294967296
  %3 = add nuw nsw i32 %storemerge6.reload, 1, !insn.addr !341
  %4 = udiv i64 %sext2, 4294967296
  %5 = trunc i64 %4 to i32
  %6 = icmp sge i32 %2, %5, !insn.addr !339
  %7 = icmp ugt i32 %storemerge6.reload, 8, !insn.addr !342
  %or.cond = or i1 %7, %6
  store i32 %5, i32* %.reg2mem, !insn.addr !339
  store i32 %3, i32* %storemerge6.reg2mem, !insn.addr !339
  store i64 %sext2, i64* %stack_var_-16.0.in5.reg2mem, !insn.addr !339
  store i32 %2, i32* %stack_var_-20.04.reg2mem, !insn.addr !339
  store i32 %2, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !339
  store i32 %3, i32* %storemerge.lcssa.reg2mem, !insn.addr !339
  store i32 %5, i32* %.lcssa.reg2mem, !insn.addr !339
  br i1 %or.cond, label %dec_label_pc_1e15, label %dec_label_pc_1e0f, !insn.addr !339

dec_label_pc_1e0f:                                ; preds = %dec_label_pc_1e0f.lr.ph, %dec_label_pc_1df5
  %stack_var_-20.04.reload = load i32, i32* %stack_var_-20.04.reg2mem
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %8 = icmp eq i32 %.reload, 0, !insn.addr !343
  %9 = icmp slt i32 %.reload, 0, !insn.addr !343
  %10 = icmp eq i1 %9, false, !insn.addr !344
  %11 = icmp eq i1 %8, false, !insn.addr !344
  %12 = icmp eq i1 %10, %11, !insn.addr !344
  store i32 %stack_var_-20.04.reload, i32* %stack_var_-20.0.lcssa.reg2mem, !insn.addr !344
  store i32 %storemerge6.reload, i32* %storemerge.lcssa.reg2mem, !insn.addr !344
  store i32 %.reload, i32* %.lcssa.reg2mem, !insn.addr !344
  br i1 %12, label %dec_label_pc_1df5, label %dec_label_pc_1e15, !insn.addr !344

dec_label_pc_1e15:                                ; preds = %dec_label_pc_1df5, %dec_label_pc_1e0f, %dec_label_pc_1dd4
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %storemerge.lcssa.reload = load i32, i32* %storemerge.lcssa.reg2mem
  %stack_var_-20.0.lcssa.reload = load i32, i32* %stack_var_-20.0.lcssa.reg2mem
  %13 = add i32 %storemerge.lcssa.reload, %stack_var_-20.0.lcssa.reload, !insn.addr !345
  %14 = add i32 %13, %.lcssa.reload, !insn.addr !346
  %15 = zext i32 %14 to i64, !insn.addr !346
  ret i64 %15, !insn.addr !347

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 2 }
  uselistorder i64* %stack_var_-16.0.in5.reg2mem, { 1, 0, 2 }
  uselistorder i32 8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1e15, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1e0f, { 1, 0 }
}

define i64 @loop_modify_var(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e24:
  %stack_var_-16.0.lcssa.reg2mem = alloca i64, !insn.addr !348
  %stack_var_-16.02.reg2mem = alloca i32, !insn.addr !348
  %storemerge3.reg2mem = alloca i32, !insn.addr !348
  %0 = trunc i64 %arg1 to i32, !insn.addr !349
  %1 = icmp sgt i32 %0, 0, !insn.addr !350
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !350
  store i32 0, i32* %stack_var_-16.02.reg2mem, !insn.addr !350
  store i64 0, i64* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !350
  br i1 %1, label %dec_label_pc_1e3f, label %dec_label_pc_1e5b, !insn.addr !350

dec_label_pc_1e3f:                                ; preds = %dec_label_pc_1e24, %dec_label_pc_1e3f
  %stack_var_-16.02.reload = load i32, i32* %stack_var_-16.02.reg2mem
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %2 = add i32 %stack_var_-16.02.reload, %storemerge3.reload, !insn.addr !351
  %3 = icmp slt i32 %storemerge3.reload, 6, !insn.addr !352
  %4 = add i32 %storemerge3.reload, 2
  %spec.select = select i1 %3, i32 %storemerge3.reload, i32 %4
  %5 = add i32 %spec.select, 1, !insn.addr !353
  %6 = icmp slt i32 %5, %0, !insn.addr !350
  store i32 %5, i32* %storemerge3.reg2mem, !insn.addr !350
  store i32 %2, i32* %stack_var_-16.02.reg2mem, !insn.addr !350
  br i1 %6, label %dec_label_pc_1e3f, label %dec_label_pc_1e53.dec_label_pc_1e5b_crit_edge, !insn.addr !350

dec_label_pc_1e53.dec_label_pc_1e5b_crit_edge:    ; preds = %dec_label_pc_1e3f
  %phitmp = zext i32 %2 to i64
  store i64 %phitmp, i64* %stack_var_-16.0.lcssa.reg2mem
  br label %dec_label_pc_1e5b

dec_label_pc_1e5b:                                ; preds = %dec_label_pc_1e53.dec_label_pc_1e5b_crit_edge, %dec_label_pc_1e24
  %stack_var_-16.0.lcssa.reload = load i64, i64* %stack_var_-16.0.lcssa.reg2mem
  ret i64 %stack_var_-16.0.lcssa.reload, !insn.addr !354

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-16.02.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-16.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1e3f, { 1, 0 }
}

define i64 @loop_external_state(i32* %arg1) local_unnamed_addr {
dec_label_pc_1e60:
  %0 = alloca i64
  %stack_var_-12.1.reg2mem = alloca i64, !insn.addr !355
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !355
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, 0, !insn.addr !356
  store i32 0, i32* %stack_var_-12.0.reg2mem, !insn.addr !357
  br label %dec_label_pc_1e7f, !insn.addr !357

dec_label_pc_1e75:                                ; preds = %dec_label_pc_1e7f
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %4 = add nuw nsw i32 %stack_var_-12.0.reload, 1, !insn.addr !358
  %5 = icmp ugt i32 %stack_var_-12.0.reload, 99, !insn.addr !359
  store i32 %4, i32* %stack_var_-12.0.reg2mem, !insn.addr !359
  store i64 101, i64* %stack_var_-12.1.reg2mem, !insn.addr !359
  br i1 %5, label %dec_label_pc_1e8c, label %dec_label_pc_1e7f, !insn.addr !359

dec_label_pc_1e7f:                                ; preds = %dec_label_pc_1e75, %dec_label_pc_1e60
  store i64 0, i64* %stack_var_-12.1.reg2mem, !insn.addr !360
  br i1 %3, label %dec_label_pc_1e75, label %dec_label_pc_1e8c, !insn.addr !360

dec_label_pc_1e8c:                                ; preds = %dec_label_pc_1e75, %dec_label_pc_1e7f
  %stack_var_-12.1.reload = load i64, i64* %stack_var_-12.1.reg2mem
  ret i64 %stack_var_-12.1.reload, !insn.addr !361

; uselistorder directives
  uselistorder i32 %stack_var_-12.0.reload, { 1, 0 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1e8c, { 1, 0 }
}

define i64 @recursion_factorial(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e91:
  %storemerge.reg2mem = alloca i64, !insn.addr !362
  %0 = trunc i64 %arg1 to i32, !insn.addr !363
  %1 = icmp sgt i32 %0, 1, !insn.addr !364
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !364
  br i1 %1, label %dec_label_pc_1ead, label %dec_label_pc_1ebe, !insn.addr !364

dec_label_pc_1ead:                                ; preds = %dec_label_pc_1e91
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !363
  %3 = add nsw i64 %2, 4294967295, !insn.addr !365
  %4 = and i64 %3, 4294967295, !insn.addr !366
  %5 = call i64 @recursion_factorial(i64 %4), !insn.addr !367
  %sext2 = mul i64 %5, 4294967296
  %6 = ashr exact i64 %sext2, 32, !insn.addr !368
  %7 = mul nsw i64 %6, %2, !insn.addr !368
  %8 = and i64 %7, 4294967295, !insn.addr !368
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !368
  br label %dec_label_pc_1ebe, !insn.addr !368

dec_label_pc_1ebe:                                ; preds = %dec_label_pc_1e91, %dec_label_pc_1ead
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !369

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1ebe, { 1, 0 }
}

define i64 @tail_recursion(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ec0:
  %storemerge.reg2mem = alloca i64, !insn.addr !370
  %0 = trunc i64 %arg1 to i32, !insn.addr !371
  %sext3 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext3, 32, !insn.addr !372
  %2 = icmp sgt i32 %0, 1, !insn.addr !373
  br i1 %2, label %dec_label_pc_1edd, label %dec_label_pc_1ed8, !insn.addr !373

dec_label_pc_1ed8:                                ; preds = %dec_label_pc_1ec0
  %3 = and i64 %1, 4294967295, !insn.addr !374
  store i64 %3, i64* %storemerge.reg2mem, !insn.addr !375
  br label %dec_label_pc_1ef3, !insn.addr !375

dec_label_pc_1edd:                                ; preds = %dec_label_pc_1ec0
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !376
  %5 = mul nsw i64 %1, %4, !insn.addr !376
  %6 = add i64 %arg1, 4294967295, !insn.addr !377
  %7 = and i64 %5, 4294967295, !insn.addr !378
  %8 = and i64 %6, 4294967295, !insn.addr !379
  %9 = call i64 @tail_recursion(i64 %8, i64 %7), !insn.addr !380
  store i64 %9, i64* %storemerge.reg2mem, !insn.addr !380
  br label %dec_label_pc_1ef3, !insn.addr !380

dec_label_pc_1ef3:                                ; preds = %dec_label_pc_1edd, %dec_label_pc_1ed8
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !381

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0, 2 }
}

define i64 @indirect_recursion_a(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1ef5:
  %rax.0.reg2mem = alloca i64, !insn.addr !382
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !383
  %1 = trunc i64 %arg2 to i32, !insn.addr !384
  %2 = icmp eq i32 %1, 0, !insn.addr !385
  %3 = icmp slt i32 %1, 0, !insn.addr !385
  %4 = icmp eq i1 %3, false, !insn.addr !386
  %5 = icmp eq i1 %2, false, !insn.addr !386
  %6 = icmp eq i1 %4, %5, !insn.addr !386
  br i1 %6, label %dec_label_pc_1f12, label %dec_label_pc_1f0d, !insn.addr !386

dec_label_pc_1f0d:                                ; preds = %dec_label_pc_1ef5
  %7 = and i64 %0, 4294967295, !insn.addr !387
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !388
  br label %dec_label_pc_1f54, !insn.addr !388

dec_label_pc_1f12:                                ; preds = %dec_label_pc_1ef5
  %sext3 = mul i64 %arg2, 4294967296
  %8 = ashr exact i64 %sext3, 32, !insn.addr !384
  %9 = urem i64 %arg1, 2
  %10 = icmp eq i64 %9, 0, !insn.addr !389
  %11 = icmp eq i1 %10, false, !insn.addr !390
  %12 = add nsw i64 %8, 4294967295
  br i1 %11, label %dec_label_pc_1f39, label %dec_label_pc_1f1c, !insn.addr !390

dec_label_pc_1f1c:                                ; preds = %dec_label_pc_1f12
  %13 = trunc i64 %0 to i32, !insn.addr !391
  %14 = icmp slt i64 %sext, 0
  %15 = zext i1 %14 to i32
  %16 = add i32 %15, %13, !insn.addr !392
  %17 = ashr i32 %16, 1, !insn.addr !393
  %18 = and i64 %12, 4294967295, !insn.addr !394
  %19 = zext i32 %17 to i64, !insn.addr !395
  %20 = call i64 @indirect_recursion_b(i64 %19, i64 %18), !insn.addr !396
  store i64 %20, i64* %rax.0.reg2mem, !insn.addr !397
  br label %dec_label_pc_1f54, !insn.addr !397

dec_label_pc_1f39:                                ; preds = %dec_label_pc_1f12
  %21 = mul nsw i64 %0, 3, !insn.addr !398
  %22 = add nsw i64 %21, 1, !insn.addr !399
  %23 = and i64 %12, 4294967295, !insn.addr !400
  %24 = and i64 %22, 4294967295, !insn.addr !401
  %25 = call i64 @indirect_recursion_b(i64 %24, i64 %23), !insn.addr !402
  store i64 %25, i64* %rax.0.reg2mem, !insn.addr !402
  br label %dec_label_pc_1f54, !insn.addr !402

dec_label_pc_1f54:                                ; preds = %dec_label_pc_1f39, %dec_label_pc_1f1c, %dec_label_pc_1f0d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !403

; uselistorder directives
  uselistorder i64 %12, { 1, 0 }
  uselistorder i32 %1, { 1, 0 }
  uselistorder i64 %0, { 2, 1, 0 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64 (i64, i64)* @indirect_recursion_b, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @indirect_recursion_b(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1f56:
  %storemerge.reg2mem = alloca i64, !insn.addr !404
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !405
  %1 = trunc i64 %arg2 to i32, !insn.addr !406
  %2 = icmp eq i32 %1, 0, !insn.addr !407
  %3 = icmp slt i32 %1, 0, !insn.addr !407
  %4 = icmp eq i1 %3, false, !insn.addr !408
  %5 = icmp eq i1 %2, false, !insn.addr !408
  %6 = icmp eq i1 %4, %5, !insn.addr !408
  br i1 %6, label %dec_label_pc_1f73, label %dec_label_pc_1f6e, !insn.addr !408

dec_label_pc_1f6e:                                ; preds = %dec_label_pc_1f56
  %7 = and i64 %0, 4294967295, !insn.addr !409
  store i64 %7, i64* %storemerge.reg2mem, !insn.addr !410
  br label %dec_label_pc_1f88, !insn.addr !410

dec_label_pc_1f73:                                ; preds = %dec_label_pc_1f56
  %8 = add i64 %arg2, 4294967295, !insn.addr !411
  %9 = add nsw i64 %0, 1, !insn.addr !412
  %10 = and i64 %8, 4294967295, !insn.addr !413
  %11 = and i64 %9, 4294967295, !insn.addr !414
  %12 = call i64 @indirect_recursion_a(i64 %11, i64 %10), !insn.addr !415
  store i64 %12, i64* %storemerge.reg2mem, !insn.addr !415
  br label %dec_label_pc_1f88, !insn.addr !415

dec_label_pc_1f88:                                ; preds = %dec_label_pc_1f73, %dec_label_pc_1f6e
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !416

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
}

define i64 @call_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1f8a:
  %0 = and i64 %arg2, 4294967295, !insn.addr !417
  ret i64 %0, !insn.addr !418
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1faa:
  %0 = mul i64 %arg1, 2, !insn.addr !419
  %1 = and i64 %0, 4294967294, !insn.addr !419
  ret i64 %1, !insn.addr !420
}

define i64 @triple_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_1fbc:
  %0 = mul i64 %arg1, 3, !insn.addr !421
  %1 = and i64 %0, 4294967295, !insn.addr !421
  ret i64 %1, !insn.addr !422
}

define i64 @call_func_ptr_array(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1fd2:
  %rax.0.reg2mem = alloca i64, !insn.addr !423
  %0 = trunc i64 %arg1 to i32, !insn.addr !424
  %1 = and i64 %arg2, 4294967295
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !425
  %3 = icmp ult i32 %0, 3
  %storemerge = select i1 %3, i64 %1, i64 4294967295
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !426
  %5 = icmp eq i64 %2, %4, !insn.addr !426
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !427
  br i1 %5, label %dec_label_pc_204c, label %dec_label_pc_2047, !insn.addr !427

dec_label_pc_2047:                                ; preds = %dec_label_pc_1fd2
  call void @__stack_chk_fail(), !insn.addr !428
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !428
  br label %dec_label_pc_204c, !insn.addr !428

dec_label_pc_204c:                                ; preds = %dec_label_pc_2047, %dec_label_pc_1fd2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !429
}

define i64 @call_virtual_func(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_204e:
  %0 = mul i64 %arg2, 2, !insn.addr !430
  %1 = and i64 %0, 4294967294, !insn.addr !430
  ret i64 %1, !insn.addr !431
}

define i64 @process_with_callback(i32* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2064:
  %stack_var_-16.0.lcssa.reg2mem = alloca i64, !insn.addr !432
  %stack_var_-16.03.reg2mem = alloca i32, !insn.addr !432
  %indvars.iv.reg2mem = alloca i64, !insn.addr !432
  %0 = trunc i64 %arg2 to i32, !insn.addr !433
  %1 = icmp sgt i32 %0, 0, !insn.addr !434
  store i64 0, i64* %stack_var_-16.0.lcssa.reg2mem, !insn.addr !434
  br i1 %1, label %dec_label_pc_208b.lr.ph, label %dec_label_pc_20b8, !insn.addr !434

dec_label_pc_208b.lr.ph:                          ; preds = %dec_label_pc_2064
  %2 = ptrtoint i32* %arg1 to i64, !insn.addr !435
  %wide.trip.count = and i64 %arg2, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-16.03.reg2mem
  br label %dec_label_pc_208b

dec_label_pc_208b:                                ; preds = %dec_label_pc_208b, %dec_label_pc_208b.lr.ph
  %stack_var_-16.03.reload = load i32, i32* %stack_var_-16.03.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %3 = mul i64 %indvars.iv.reload, 4, !insn.addr !436
  %4 = add i64 %3, %2, !insn.addr !437
  %5 = inttoptr i64 %4 to i32*, !insn.addr !438
  %6 = load i32, i32* %5, align 4, !insn.addr !438
  %7 = add i32 %6, %stack_var_-16.03.reload, !insn.addr !439
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !434
  store i32 %7, i32* %stack_var_-16.03.reg2mem, !insn.addr !434
  br i1 %exitcond, label %dec_label_pc_20b0.dec_label_pc_20b8_crit_edge, label %dec_label_pc_208b, !insn.addr !434

dec_label_pc_20b0.dec_label_pc_20b8_crit_edge:    ; preds = %dec_label_pc_208b
  %phitmp = zext i32 %7 to i64
  store i64 %phitmp, i64* %stack_var_-16.0.lcssa.reg2mem
  br label %dec_label_pc_20b8

dec_label_pc_20b8:                                ; preds = %dec_label_pc_20b0.dec_label_pc_20b8_crit_edge, %dec_label_pc_2064
  %stack_var_-16.0.lcssa.reload = load i64, i64* %stack_var_-16.0.lcssa.reg2mem
  ret i64 %stack_var_-16.0.lcssa.reload, !insn.addr !440

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.03.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-16.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64 4, { 0, 1, 2, 3, 7, 4, 5, 6 }
}

define i64 @test_control_flow_l2() local_unnamed_addr {
dec_label_pc_20bd:
  %rax.0.reg2mem = alloca i64, !insn.addr !441
  %stack_var_-120 = alloca i32, align 4
  %stack_var_-124 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-88 = alloca i32, align 4
  %stack_var_-128 = alloca i32, align 4
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !442
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_32d8 to i8*)), !insn.addr !443
  %2 = call i64 @loop_multi_exit(i64 7), !insn.addr !444
  %3 = and i64 %2, 4294967295, !insn.addr !445
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3300, i64 0, i64 0), i64 %3), !insn.addr !446
  store i32 0, i32* %stack_var_-128, align 4, !insn.addr !447
  %5 = call i64 @infinite_loop(i32* nonnull %stack_var_-128), !insn.addr !448
  %6 = and i64 %5, 4294967295, !insn.addr !449
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3320, i64 0, i64 0), i64 %6), !insn.addr !450
  %8 = call i64 @multi_return(i64 4294967291), !insn.addr !451
  %9 = and i64 %8, 4294967295, !insn.addr !452
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_333e, i64 0, i64 0), i64 %9), !insn.addr !453
  %11 = call i64 @multi_return(i64 100), !insn.addr !454
  %12 = and i64 %11, 4294967295, !insn.addr !455
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_333e, i64 0, i64 0), i64 %12), !insn.addr !456
  %14 = call i64 @multi_return(i64 3), !insn.addr !457
  %15 = and i64 %14, 4294967295, !insn.addr !458
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_333e, i64 0, i64 0), i64 %15), !insn.addr !459
  %17 = call i64 @conditional_return(i64 5), !insn.addr !460
  %18 = and i64 %17, 4294967295, !insn.addr !461
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3360, i64 0, i64 0), i64 %18), !insn.addr !462
  %20 = call i64 @conditional_return(i64 4294967291), !insn.addr !463
  %21 = and i64 %20, 4294967295, !insn.addr !464
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3360, i64 0, i64 0), i64 %21), !insn.addr !465
  store i32 1, i32* %stack_var_-88, align 4, !insn.addr !466
  store i64 0, i64* %stack_var_-56, align 8, !insn.addr !467
  %23 = call i64 @duffs_device(i64* nonnull %stack_var_-56, i32* nonnull %stack_var_-88, i64 8), !insn.addr !468
  %24 = and i64 %23, 4294967295, !insn.addr !469
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_3383, i64 0, i64 0), i64 %24), !insn.addr !470
  %26 = call i64 @loop_complex_cond(i64 10), !insn.addr !471
  %27 = and i64 %26, 4294967295, !insn.addr !472
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_33a0, i64 0, i64 0), i64 %27), !insn.addr !473
  %29 = call i64 @loop_modify_var(i64 10), !insn.addr !474
  %30 = and i64 %29, 4294967295, !insn.addr !475
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_33c8, i64 0, i64 0), i64 %30), !insn.addr !476
  store i32 0, i32* %stack_var_-124, align 4, !insn.addr !477
  %32 = call i64 @loop_external_state(i32* nonnull %stack_var_-124), !insn.addr !478
  %33 = and i64 %32, 4294967295, !insn.addr !479
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_33e8, i64 0, i64 0), i64 %33), !insn.addr !480
  %35 = call i64 @recursion_factorial(i64 5), !insn.addr !481
  %36 = and i64 %35, 4294967295, !insn.addr !482
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_3410, i64 0, i64 0), i64 %36), !insn.addr !483
  %38 = call i64 @tail_recursion(i64 5, i64 1), !insn.addr !484
  %39 = and i64 %38, 4294967295, !insn.addr !485
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3438, i64 0, i64 0), i64 %39), !insn.addr !486
  %41 = call i64 @indirect_recursion_a(i64 10, i64 3), !insn.addr !487
  %42 = and i64 %41, 4294967295, !insn.addr !488
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3458, i64 0, i64 0), i64 %42), !insn.addr !489
  %44 = call i64 @call_func_ptr(i64 8106, i64 5), !insn.addr !490
  %45 = and i64 %44, 4294967295, !insn.addr !491
  %46 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_347b, i64 0, i64 0), i64 %45), !insn.addr !492
  %47 = call i64 @call_func_ptr_array(i64 0, i64 5), !insn.addr !493
  %48 = and i64 %47, 4294967295, !insn.addr !494
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_34a0, i64 0, i64 0), i64 %48), !insn.addr !495
  %50 = call i64 @call_func_ptr_array(i64 2, i64 5), !insn.addr !496
  %51 = and i64 %50, 4294967295, !insn.addr !497
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_34a0, i64 0, i64 0), i64 %51), !insn.addr !498
  store i32 1, i32* %stack_var_-120, align 4, !insn.addr !499
  %53 = call i64 @process_with_callback(i32* nonnull %stack_var_-120, i64 5, i64 8106), !insn.addr !500
  %54 = and i64 %53, 4294967295, !insn.addr !501
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_34c8, i64 0, i64 0), i64 %54), !insn.addr !502
  %56 = call i64 @__readfsqword(i64 40), !insn.addr !503
  %57 = icmp eq i64 %0, %56, !insn.addr !503
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !504
  br i1 %57, label %dec_label_pc_2403, label %dec_label_pc_23fe, !insn.addr !504

dec_label_pc_23fe:                                ; preds = %dec_label_pc_20bd
  call void @__stack_chk_fail(), !insn.addr !505
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !505
  br label %dec_label_pc_2403, !insn.addr !505

dec_label_pc_2403:                                ; preds = %dec_label_pc_23fe, %dec_label_pc_20bd
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !506

; uselistorder directives
  uselistorder i64 (i64, i64)* @call_func_ptr_array, { 1, 0 }
  uselistorder i64 (i64, i64)* @indirect_recursion_a, { 1, 0 }
  uselistorder i64 (i64, i64)* @tail_recursion, { 1, 0 }
  uselistorder i64 (i64)* @recursion_factorial, { 1, 0 }
  uselistorder i64 (i64)* @conditional_return, { 1, 0 }
  uselistorder i64 100, { 2, 1, 0 }
  uselistorder i64 (i64)* @multi_return, { 2, 1, 0 }
}

define i64 @non_local_jump(i64 %arg1) local_unnamed_addr {
dec_label_pc_2405:
  %storemerge.reg2mem = alloca i64, !insn.addr !507
  %0 = call i32 @_setjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }]), !insn.addr !508
  %1 = icmp eq i32 %0, 0, !insn.addr !509
  %2 = icmp eq i1 %1, false, !insn.addr !510
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !510
  br i1 %2, label %dec_label_pc_246b, label %dec_label_pc_242b, !insn.addr !510

dec_label_pc_242b:                                ; preds = %dec_label_pc_2405
  %3 = trunc i64 %arg1 to i32, !insn.addr !511
  %4 = icmp slt i32 %3, 0, !insn.addr !511
  %5 = icmp eq i1 %4, false, !insn.addr !512
  br i1 %5, label %dec_label_pc_2445, label %dec_label_pc_2431, !insn.addr !512

dec_label_pc_2431:                                ; preds = %dec_label_pc_242b
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 1), !insn.addr !513
  unreachable, !insn.addr !513

dec_label_pc_2445:                                ; preds = %dec_label_pc_242b
  %6 = icmp slt i32 %3, 101, !insn.addr !514
  br i1 %6, label %dec_label_pc_245f, label %dec_label_pc_244b, !insn.addr !514

dec_label_pc_244b:                                ; preds = %dec_label_pc_2445
  call void @longjmp([1 x %__jmp_buf_tag] [%__jmp_buf_tag { [8 x i32] [i32 ptrtoint (i32* @global_var_6040 to i32), i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef, i32 undef], i32 undef, %_TYPEDEF___sigset_t undef }], i32 2), !insn.addr !515
  unreachable, !insn.addr !515

dec_label_pc_245f:                                ; preds = %dec_label_pc_2445
  %7 = mul i64 %arg1, 2
  %8 = and i64 %7, 4294967294, !insn.addr !516
  store i64 %8, i64* %storemerge.reg2mem, !insn.addr !517
  br label %dec_label_pc_246b, !insn.addr !517

dec_label_pc_246b:                                ; preds = %dec_label_pc_2405, %dec_label_pc_245f
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !518

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void ([1 x %__jmp_buf_tag], i32)* @longjmp, { 1, 0, 2 }
  uselistorder label %dec_label_pc_246b, { 1, 0 }
}

define i64 @cpp_exception(i64 %arg1) local_unnamed_addr {
dec_label_pc_246d:
  %rax.0.reg2mem = alloca i64, !insn.addr !519
  %0 = trunc i64 %arg1 to i32, !insn.addr !520
  %1 = icmp slt i32 %0, 0, !insn.addr !521
  %2 = icmp eq i1 %1, false, !insn.addr !522
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !522
  br i1 %2, label %dec_label_pc_2485, label %dec_label_pc_2497, !insn.addr !522

dec_label_pc_2485:                                ; preds = %dec_label_pc_246d
  %3 = icmp slt i32 %0, 101, !insn.addr !523
  store i64 4294967294, i64* %rax.0.reg2mem, !insn.addr !523
  br i1 %3, label %dec_label_pc_2492, label %dec_label_pc_2497, !insn.addr !523

dec_label_pc_2492:                                ; preds = %dec_label_pc_2485
  %4 = mul i64 %arg1, 2
  %5 = and i64 %4, 4294967294, !insn.addr !524
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !524
  br label %dec_label_pc_2497, !insn.addr !524

dec_label_pc_2497:                                ; preds = %dec_label_pc_2485, %dec_label_pc_246d, %dec_label_pc_2492
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !525

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_2497, { 2, 0, 1 }
}

define i64 @op_add(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2499:
  %0 = add i64 %arg2, %arg1, !insn.addr !526
  %1 = and i64 %0, 4294967295, !insn.addr !526
  ret i64 %1, !insn.addr !527
}

define i64 @op_sub(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24b1:
  %0 = sub i64 %arg1, %arg2, !insn.addr !528
  %1 = and i64 %0, 4294967295, !insn.addr !528
  ret i64 %1, !insn.addr !529
}

define i64 @op_mul(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24c7:
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !530
  %sext1 = mul i64 %arg2, 4294967296
  %1 = ashr exact i64 %sext1, 32, !insn.addr !530
  %2 = mul nsw i64 %1, %0, !insn.addr !530
  %3 = and i64 %2, 4294967295, !insn.addr !530
  ret i64 %3, !insn.addr !531
}

define i64 @op_div(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_24de:
  %storemerge.reg2mem = alloca i64, !insn.addr !532
  %0 = trunc i64 %arg2 to i32, !insn.addr !533
  %1 = icmp eq i32 %0, 0, !insn.addr !534
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !535
  br i1 %1, label %dec_label_pc_2500, label %dec_label_pc_24f2, !insn.addr !535

dec_label_pc_24f2:                                ; preds = %dec_label_pc_24de
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !536
  %3 = and i64 %arg2, 4294967295
  %4 = trunc i64 %2 to i32, !insn.addr !537
  %5 = ashr i32 %4, 31, !insn.addr !537
  %6 = and i64 %2, 4294967295, !insn.addr !538
  %7 = zext i32 %5 to i64, !insn.addr !538
  %8 = mul i64 %7, 4294967296, !insn.addr !538
  %9 = or i64 %8, %6, !insn.addr !538
  %10 = sdiv i64 %9, %3, !insn.addr !538
  %11 = and i64 %10, 4294967295, !insn.addr !538
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !539
  br label %dec_label_pc_2500, !insn.addr !539

dec_label_pc_2500:                                ; preds = %dec_label_pc_24de, %dec_label_pc_24f2
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !540

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2500, { 1, 0 }
}

define i64 @op_mod(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2502:
  %storemerge.reg2mem = alloca i64, !insn.addr !541
  %0 = trunc i64 %arg2 to i32, !insn.addr !542
  %1 = icmp eq i32 %0, 0, !insn.addr !543
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !544
  br i1 %1, label %dec_label_pc_2526, label %dec_label_pc_2516, !insn.addr !544

dec_label_pc_2516:                                ; preds = %dec_label_pc_2502
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 32, !insn.addr !545
  %3 = and i64 %arg2, 4294967295
  %4 = trunc i64 %2 to i32, !insn.addr !546
  %5 = ashr i32 %4, 31, !insn.addr !546
  %6 = and i64 %2, 4294967295, !insn.addr !547
  %7 = zext i32 %5 to i64, !insn.addr !547
  %8 = mul i64 %7, 4294967296, !insn.addr !547
  %9 = or i64 %8, %6, !insn.addr !547
  %10 = srem i64 %9, %3, !insn.addr !547
  %11 = and i64 %10, 4294967295, !insn.addr !548
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !549
  br label %dec_label_pc_2526, !insn.addr !549

dec_label_pc_2526:                                ; preds = %dec_label_pc_2502, %dec_label_pc_2516
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !550

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2526, { 1, 0 }
}

define i64 @op_and(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2528:
  %0 = and i64 %arg1, 4294967295
  %1 = and i64 %0, %arg2, !insn.addr !551
  ret i64 %1, !insn.addr !552
}

define i64 @op_or(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_253e:
  %0 = or i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !553
  ret i64 %1, !insn.addr !554
}

define i64 @op_xor(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2554:
  %0 = xor i64 %arg2, %arg1
  %1 = and i64 %0, 4294967295, !insn.addr !555
  ret i64 %1, !insn.addr !556
}

define i64 @op_shl(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_256a:
  %0 = and i64 %arg1, 4294967295, !insn.addr !557
  %1 = trunc i64 %arg2 to i32, !insn.addr !558
  %2 = urem i32 %1, 32, !insn.addr !558
  %3 = icmp eq i32 %2, 0, !insn.addr !558
  %4 = trunc i64 %arg1 to i32
  %5 = shl i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !559

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @op_shr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2586:
  %0 = and i64 %arg1, 4294967295, !insn.addr !560
  %1 = trunc i64 %arg2 to i32, !insn.addr !561
  %2 = urem i32 %1, 32, !insn.addr !561
  %3 = icmp eq i32 %2, 0, !insn.addr !561
  %4 = trunc i64 %arg1 to i32
  %5 = ashr i32 %4, %2
  %6 = zext i32 %5 to i64
  %storemerge = select i1 %3, i64 %0, i64 %6
  ret i64 %storemerge, !insn.addr !562

; uselistorder directives
  uselistorder i32 %2, { 1, 0 }
}

define i64 @large_jump_table(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_25a2:
  %rax.0.reg2mem = alloca i64, !insn.addr !563
  %0 = trunc i64 %arg1 to i32, !insn.addr !564
  %1 = and i64 %arg2, 4294967295
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !565
  %3 = icmp ult i32 %0, 10
  %storemerge = select i1 %3, i64 %1, i64 4294967295
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !566
  %5 = icmp eq i64 %2, %4, !insn.addr !566
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !567
  br i1 %5, label %dec_label_pc_2671, label %dec_label_pc_266c, !insn.addr !567

dec_label_pc_266c:                                ; preds = %dec_label_pc_25a2
  call void @__stack_chk_fail(), !insn.addr !568
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !568
  br label %dec_label_pc_2671, !insn.addr !568

dec_label_pc_2671:                                ; preds = %dec_label_pc_266c, %dec_label_pc_25a2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !569
}

define i64 @conditional_func_ptr(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2673:
  %0 = and i64 %arg2, 4294967295
  ret i64 %0, !insn.addr !570
}

define i64 @state_machine(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_26c3:
  %rax.0.reg2mem = alloca i64, !insn.addr !571
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !572
  %1 = trunc i64 %arg2 to i32, !insn.addr !573
  %2 = icmp eq i32 %1, 3, !insn.addr !574
  br i1 %2, label %dec_label_pc_2733, label %dec_label_pc_26d7, !insn.addr !575

dec_label_pc_26d7:                                ; preds = %dec_label_pc_26c3
  %3 = icmp sgt i32 %1, 3, !insn.addr !576
  store i64 3, i64* %rax.0.reg2mem, !insn.addr !576
  br i1 %3, label %dec_label_pc_274c, label %dec_label_pc_26dd, !insn.addr !576

dec_label_pc_26dd:                                ; preds = %dec_label_pc_26d7
  store i64 2, i64* %rax.0.reg2mem
  switch i32 %1, label %dec_label_pc_274c.fold.split [
    i32 2, label %dec_label_pc_274c
    i32 0, label %dec_label_pc_26f7
    i32 1, label %dec_label_pc_270b
  ]

dec_label_pc_26f7:                                ; preds = %dec_label_pc_26dd
  %4 = trunc i64 %0 to i32, !insn.addr !577
  %5 = icmp eq i32 %4, 1, !insn.addr !577
  %. = zext i1 %5 to i64
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !578
  br label %dec_label_pc_274c, !insn.addr !578

dec_label_pc_270b:                                ; preds = %dec_label_pc_26dd
  %6 = trunc i64 %0 to i32, !insn.addr !579
  %7 = icmp eq i32 %6, 2, !insn.addr !579
  %8 = icmp eq i1 %7, false, !insn.addr !580
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !580
  br i1 %8, label %dec_label_pc_2718, label %dec_label_pc_274c, !insn.addr !580

dec_label_pc_2718:                                ; preds = %dec_label_pc_270b
  %9 = icmp eq i32 %6, 99, !insn.addr !581
  %10 = icmp eq i1 %9, false, !insn.addr !582
  %.4 = select i1 %10, i64 1, i64 3
  store i64 %.4, i64* %rax.0.reg2mem, !insn.addr !583
  br label %dec_label_pc_274c, !insn.addr !583

dec_label_pc_2733:                                ; preds = %dec_label_pc_26c3
  %11 = trunc i64 %0 to i32, !insn.addr !584
  %12 = icmp eq i32 %11, 0, !insn.addr !584
  %13 = icmp eq i1 %12, false, !insn.addr !585
  %.5 = select i1 %13, i64 3, i64 0
  store i64 %.5, i64* %rax.0.reg2mem, !insn.addr !586
  br label %dec_label_pc_274c, !insn.addr !586

dec_label_pc_274c.fold.split:                     ; preds = %dec_label_pc_26dd
  store i64 3, i64* %rax.0.reg2mem
  br label %dec_label_pc_274c

dec_label_pc_274c:                                ; preds = %dec_label_pc_26dd, %dec_label_pc_274c.fold.split, %dec_label_pc_26d7, %dec_label_pc_2733, %dec_label_pc_2718, %dec_label_pc_270b, %dec_label_pc_26f7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !587

; uselistorder directives
  uselistorder i64 %0, { 2, 0, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 1, 3, 5, 6, 7, 4, 2 }
  uselistorder i32 3, { 7, 1, 0, 2, 8, 3, 9, 4, 10, 5, 6 }
  uselistorder label %dec_label_pc_274c, { 1, 3, 4, 5, 6, 0, 2 }
}

define i64 @state_idle(i64 %arg1) local_unnamed_addr {
dec_label_pc_274e:
  %0 = trunc i64 %arg1 to i32, !insn.addr !588
  %1 = icmp eq i32 %0, 1, !insn.addr !589
  %2 = zext i1 %1 to i64, !insn.addr !590
  ret i64 %2, !insn.addr !591
}

define i64 @state_processing(i64 %arg1) local_unnamed_addr {
dec_label_pc_2765:
  %rax.0.reg2mem = alloca i64, !insn.addr !592
  %0 = trunc i64 %arg1 to i32, !insn.addr !593
  %1 = icmp eq i32 %0, 2, !insn.addr !594
  %2 = icmp eq i1 %1, false, !insn.addr !595
  store i64 2, i64* %rax.0.reg2mem, !insn.addr !595
  br i1 %2, label %dec_label_pc_277d, label %dec_label_pc_278f, !insn.addr !595

dec_label_pc_277d:                                ; preds = %dec_label_pc_2765
  %3 = icmp eq i32 %0, 99, !insn.addr !596
  %4 = icmp eq i1 %3, false, !insn.addr !597
  %. = select i1 %4, i64 1, i64 3
  store i64 %., i64* %rax.0.reg2mem, !insn.addr !598
  br label %dec_label_pc_278f, !insn.addr !598

dec_label_pc_278f:                                ; preds = %dec_label_pc_277d, %dec_label_pc_2765
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !599

; uselistorder directives
  uselistorder i32 99, { 1, 2, 0 }
  uselistorder i32 2, { 4, 5, 1, 6, 10, 11, 0, 12, 13, 2, 3, 7, 8, 9 }
}

define i64 @state_done(i64 %arg1) local_unnamed_addr {
dec_label_pc_2791:
  ret i64 2, !insn.addr !600
}

define i64 @state_error(i64 %arg1) local_unnamed_addr {
dec_label_pc_27a3:
  %0 = trunc i64 %arg1 to i32, !insn.addr !601
  %1 = icmp eq i32 %0, 0, !insn.addr !602
  %2 = icmp eq i1 %1, false, !insn.addr !603
  %. = select i1 %2, i64 3, i64 0
  ret i64 %., !insn.addr !604

; uselistorder directives
  uselistorder i1 false, { 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 17, 18, 2, 19, 3, 20, 4, 21, 22, 23, 24, 25, 5, 26, 27, 28, 0, 29, 30, 31, 32, 33, 34, 35, 36, 37, 6 }
  uselistorder i32 0, { 28, 29, 22, 30, 31, 32, 33, 34, 35, 36, 26, 27, 0, 15, 37, 38, 39, 40, 1, 41, 2, 3, 16, 42, 43, 6, 7, 4, 5, 44, 45, 46, 47, 8, 10, 9, 48, 49, 50, 51, 21, 52, 11, 12, 17, 18, 53, 13, 54, 14, 20, 19, 23, 55, 56, 24, 25 }
}

define i64 @fsm_func_table(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_27c2:
  %rax.0.reg2mem = alloca i64, !insn.addr !605
  %0 = and i64 %arg1, 4294967295
  %1 = trunc i64 %arg2 to i32, !insn.addr !606
  %2 = call i64 @__readfsqword(i64 40), !insn.addr !607
  %3 = icmp ult i32 %1, 4
  %storemerge = select i1 %3, i64 %0, i64 3
  %4 = call i64 @__readfsqword(i64 40), !insn.addr !608
  %5 = icmp eq i64 %2, %4, !insn.addr !608
  store i64 %storemerge, i64* %rax.0.reg2mem, !insn.addr !609
  br i1 %5, label %dec_label_pc_2847, label %dec_label_pc_2842, !insn.addr !609

dec_label_pc_2842:                                ; preds = %dec_label_pc_27c2
  call void @__stack_chk_fail(), !insn.addr !610
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !610
  br label %dec_label_pc_2847, !insn.addr !610

dec_label_pc_2847:                                ; preds = %dec_label_pc_2842, %dec_label_pc_27c2
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !611
}

define i64 @computed_goto(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2849:
  %rax.0.reg2mem = alloca i64, !insn.addr !612
  %stack_var_-8 = alloca i64, align 8
  %0 = trunc i64 %arg2 to i32, !insn.addr !613
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !614
  %2 = icmp ult i32 %0, 4
  br i1 %2, label %dec_label_pc_28aa, label %dec_label_pc_28a3, !insn.addr !615

dec_label_pc_28a3:                                ; preds = %dec_label_pc_2849
  %3 = call i64 @__readfsqword(i64 40), !insn.addr !616
  %4 = icmp eq i64 %1, %3, !insn.addr !616
  store i64 4294967295, i64* %rax.0.reg2mem, !insn.addr !617
  br i1 %4, label %dec_label_pc_28f5, label %dec_label_pc_28f0, !insn.addr !617

dec_label_pc_28aa:                                ; preds = %dec_label_pc_2849
  %sext = mul i64 %arg2, 4294967296
  %5 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !618
  %6 = ashr exact i64 %sext, 29, !insn.addr !619
  %7 = add nsw i64 %6, -48, !insn.addr !619
  %8 = add i64 %7, %5, !insn.addr !619
  %9 = inttoptr i64 %8 to i64*, !insn.addr !619
  %10 = load i64, i64* %9, align 8, !insn.addr !619
  ret i64 %10, !insn.addr !620

dec_label_pc_28f0:                                ; preds = %dec_label_pc_28a3
  call void @__stack_chk_fail(), !insn.addr !621
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !621
  br label %dec_label_pc_28f5, !insn.addr !621

dec_label_pc_28f5:                                ; preds = %dec_label_pc_28f0, %dec_label_pc_28a3
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !622
}

define i64 @obfuscated_cf(i64 %arg1) local_unnamed_addr {
dec_label_pc_28f7:
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !623
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !624
  %1 = mul nsw i64 %0, %0, !insn.addr !625
  %2 = trunc i64 %1 to i32, !insn.addr !626
  %3 = icmp sgt i32 %2, -2, !insn.addr !626
  store i64 %0, i64* %stack_var_-12.0.reg2mem, !insn.addr !626
  br i1 %3, label %dec_label_pc_291e, label %dec_label_pc_2913, !insn.addr !626

dec_label_pc_2913:                                ; preds = %dec_label_pc_28f7
  %4 = mul i64 %arg1, 8589934592, !insn.addr !627
  %sext4 = ashr exact i64 %4, 32
  %5 = or i64 %sext4, 1, !insn.addr !628
  store i64 %5, i64* %stack_var_-12.0.reg2mem, !insn.addr !628
  br label %dec_label_pc_291e, !insn.addr !628

dec_label_pc_291e:                                ; preds = %dec_label_pc_2913, %dec_label_pc_28f7
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  %6 = mul i64 %stack_var_-12.0.reload, 2, !insn.addr !629
  %7 = and i64 %6, 4294967294, !insn.addr !630
  ret i64 %7, !insn.addr !631
}

define i64 @opaque_predicate(i64 %arg1) local_unnamed_addr {
dec_label_pc_2926:
  %0 = mul i64 %arg1, 2
  %1 = and i64 %0, 4294967294, !insn.addr !632
  ret i64 %1, !insn.addr !633

; uselistorder directives
  uselistorder i64 4294967294, { 3, 8, 4, 0, 5, 9, 10, 6, 7, 1, 11, 2 }
}

define i64 @overlapped_code(i64 %arg1) local_unnamed_addr {
dec_label_pc_2950:
  %storemerge.reg2mem = alloca i64, !insn.addr !634
  %sext = mul i64 %arg1, 4294967296
  %0 = ashr exact i64 %sext, 32, !insn.addr !635
  %1 = urem i64 %arg1, 2
  %2 = icmp eq i64 %1, 0, !insn.addr !636
  br i1 %2, label %dec_label_pc_2973, label %dec_label_pc_2965, !insn.addr !637

dec_label_pc_2965:                                ; preds = %dec_label_pc_2950
  %3 = mul nsw i64 %0, 3, !insn.addr !638
  %4 = add nsw i64 %3, 1, !insn.addr !639
  %5 = and i64 %4, 4294967295, !insn.addr !639
  store i64 %5, i64* %storemerge.reg2mem, !insn.addr !640
  br label %dec_label_pc_297f, !insn.addr !640

dec_label_pc_2973:                                ; preds = %dec_label_pc_2950
  %6 = trunc i64 %0 to i32, !insn.addr !641
  %7 = icmp slt i64 %sext, 0
  %8 = zext i1 %7 to i32
  %9 = add i32 %8, %6, !insn.addr !642
  %10 = ashr i32 %9, 1, !insn.addr !643
  %11 = zext i32 %10 to i64, !insn.addr !643
  store i64 %11, i64* %storemerge.reg2mem, !insn.addr !643
  br label %dec_label_pc_297f, !insn.addr !643

dec_label_pc_297f:                                ; preds = %dec_label_pc_2973, %dec_label_pc_2965
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !644

; uselistorder directives
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 3, { 8, 3, 7, 4, 0, 5, 6, 1, 11, 12, 9, 10, 13, 14, 15, 16, 17, 2 }
  uselistorder i64 32, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0 }
  uselistorder i64 4294967296, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 26, 17, 18, 19, 20, 27, 21, 28, 22, 23, 24, 25, 29 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @test_control_flow_l3() local_unnamed_addr {
dec_label_pc_2981:
  %rax.0.reg2mem = alloca i64, !insn.addr !645
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @__readfsqword(i64 40), !insn.addr !646
  %1 = call i32 @puts(i8* bitcast (i8** @global_var_34f0 to i8*)), !insn.addr !647
  %2 = call i64 @non_local_jump(i64 5), !insn.addr !648
  %3 = and i64 %2, 4294967295, !insn.addr !649
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3518, i64 0, i64 0), i64 %3), !insn.addr !650
  %5 = call i64 @non_local_jump(i64 4294967291), !insn.addr !651
  %6 = and i64 %5, 4294967295, !insn.addr !652
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_3518, i64 0, i64 0), i64 %6), !insn.addr !653
  %8 = call i64 @cpp_exception(i64 5), !insn.addr !654
  %9 = and i64 %8, 4294967295, !insn.addr !655
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3537, i64 0, i64 0), i64 %9), !insn.addr !656
  %11 = call i64 @cpp_exception(i64 4294967291), !insn.addr !657
  %12 = and i64 %11, 4294967295, !insn.addr !658
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3537, i64 0, i64 0), i64 %12), !insn.addr !659
  %14 = call i64 @large_jump_table(i64 0, i64 10, i64 5), !insn.addr !660
  %15 = and i64 %14, 4294967295, !insn.addr !661
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3558, i64 0, i64 0), i64 %15), !insn.addr !662
  %17 = call i64 @conditional_func_ptr(i64 0, i64 5), !insn.addr !663
  %18 = and i64 %17, 4294967295, !insn.addr !664
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3580, i64 0, i64 0), i64 %18), !insn.addr !665
  %20 = call i64 @state_machine(i64 1, i64 0), !insn.addr !666
  %21 = and i64 %20, 4294967295, !insn.addr !667
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35a5, i64 0, i64 0), i64 %21), !insn.addr !668
  %23 = call i64 @fsm_func_table(i64 2, i64 1), !insn.addr !669
  %24 = and i64 %23, 4294967295, !insn.addr !670
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_35c8, i64 0, i64 0), i64 %24), !insn.addr !671
  store i64 0, i64* %stack_var_-40, align 8, !insn.addr !672
  %26 = call i64 @computed_goto(i64* nonnull %stack_var_-40, i64 2), !insn.addr !673
  %27 = and i64 %26, 4294967295, !insn.addr !674
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_35e7, i64 0, i64 0), i64 %27), !insn.addr !675
  %29 = call i64 @obfuscated_cf(i64 5), !insn.addr !676
  %30 = and i64 %29, 4294967295, !insn.addr !677
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3605, i64 0, i64 0), i64 %30), !insn.addr !678
  %32 = call i64 @opaque_predicate(i64 5), !insn.addr !679
  %33 = and i64 %32, 4294967295, !insn.addr !680
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3628, i64 0, i64 0), i64 %33), !insn.addr !681
  %35 = call i64 @overlapped_code(i64 5), !insn.addr !682
  %36 = and i64 %35, 4294967295, !insn.addr !683
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3650, i64 0, i64 0), i64 %36), !insn.addr !684
  %38 = call i64 @__readfsqword(i64 40), !insn.addr !685
  %39 = icmp eq i64 %0, %38, !insn.addr !685
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !686
  br i1 %39, label %dec_label_pc_2b7c, label %dec_label_pc_2b77, !insn.addr !686

dec_label_pc_2b77:                                ; preds = %dec_label_pc_2981
  call void @__stack_chk_fail(), !insn.addr !687
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !687
  br label %dec_label_pc_2b7c, !insn.addr !687

dec_label_pc_2b7c:                                ; preds = %dec_label_pc_2b77, %dec_label_pc_2981
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !688

; uselistorder directives
  uselistorder void ()* @__stack_chk_fail, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder i64 2, { 19, 20, 15, 5, 6, 14, 0, 2, 1, 7, 8, 21, 9, 10, 16, 11, 17, 12, 22, 18, 3, 4, 13 }
  uselistorder i64 1, { 13, 14, 8, 9, 6, 7, 15, 4, 10, 11, 0, 12, 16, 21, 20, 19, 18, 17, 1, 5, 2, 3 }
  uselistorder i64 10, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0 }
  uselistorder i64 (i64)* @cpp_exception, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 56, 55, 51, 50, 49, 54, 53, 52, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 57 }
  uselistorder i64 4294967295, { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 0, 23, 24, 18, 25, 43, 44, 45, 46, 17, 47, 48, 26, 49, 50, 27, 51, 52, 53, 1, 2, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 11, 19, 28, 72, 73, 74, 75, 76, 77, 78, 79, 81, 80, 82, 83, 85, 84, 86, 87, 88, 89, 90, 3, 91, 92, 4, 5, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 6, 12, 16, 15, 13, 14, 29, 7, 8, 10, 20, 9, 21, 22, 121, 122, 123 }
  uselistorder i64 (i64)* @non_local_jump, { 1, 0 }
  uselistorder i64 5, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2b7e:
  %0 = call i64 @test_control_flow_l1(), !insn.addr !689
  %1 = call i64 @test_control_flow_l2(), !insn.addr !690
  %2 = call i64 @test_control_flow_l3(), !insn.addr !691
  ret i64 0, !insn.addr !692

; uselistorder directives
  uselistorder i64 0, { 19, 0, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 126, 48, 49, 127, 50, 51, 128, 52, 53, 54, 55, 20, 56, 34, 24, 1, 2, 3, 57, 58, 59, 60, 129, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 130, 77, 78, 79, 80, 81, 82, 83, 84, 5, 4, 21, 26, 6, 7, 85, 8, 27, 9, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 10, 23, 11, 12, 13, 14, 25, 15, 16, 17, 131, 22, 18, 132, 28, 29, 30, 31, 32, 33 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2bac:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !693

; uselistorder directives
  uselistorder i32 1, { 3, 103, 4, 115, 5, 6, 104, 7, 8, 9, 84, 85, 80, 10, 11, 12, 13, 14, 86, 15, 105, 109, 111, 110, 108, 107, 106, 16, 19, 18, 17, 20, 21, 116, 22, 101, 23, 102, 24, 117, 26, 25, 2, 118, 29, 28, 27, 119, 78, 36, 35, 34, 33, 32, 31, 30, 37, 87, 38, 39, 120, 121, 88, 41, 40, 1, 123, 122, 112, 45, 44, 43, 42, 124, 47, 49, 76, 50, 48, 46, 89, 125, 53, 79, 54, 52, 51, 126, 113, 57, 56, 55, 58, 127, 60, 59, 77, 90, 128, 64, 63, 62, 61, 65, 81, 68, 67, 66, 82, 69, 83, 70, 91, 71, 92, 72, 93, 94, 95, 96, 97, 73, 98, 99, 74, 100, 0, 114, 75 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @_setjmp([1 x %__jmp_buf_tag]) local_unnamed_addr

declare void @longjmp([1 x %__jmp_buf_tag], i32) local_unnamed_addr

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4228}
!7 = !{i64 4244}
!8 = !{i64 4260}
!9 = !{i64 4276}
!10 = !{i64 4292}
!11 = !{i64 4308}
!12 = !{i64 4351}
!13 = !{i64 4357}
!14 = !{i64 4408}
!15 = !{i64 4472}
!16 = !{i64 4484}
!17 = !{i64 4491}
!18 = !{i64 4494}
!19 = !{i64 4505}
!20 = !{i64 4507}
!21 = !{i64 4514}
!22 = !{i64 4519}
!23 = !{i64 4524}
!24 = !{i64 4532}
!25 = !{i64 4536}
!26 = !{i64 4548}
!27 = !{i64 4576}
!28 = !{i64 4584}
!29 = !{i64 4592}
!30 = !{i64 4598}
!31 = !{i64 4602}
!32 = !{i64 4611}
!33 = !{i64 4618}
!34 = !{i64 4627}
!35 = !{i64 4636}
!36 = !{i64 4643}
!37 = !{i64 4658}
!38 = !{i64 4659}
!39 = !{i64 4667}
!40 = !{i64 4677}
!41 = !{i64 4670}
!42 = !{i64 4679}
!43 = !{i64 4683}
!44 = !{i64 4691}
!45 = !{i64 4693}
!46 = !{i64 4695}
!47 = !{i64 4698}
!48 = !{i64 4706}
!49 = !{i64 4707}
!50 = !{i64 4715}
!51 = !{i64 4735}
!52 = !{i64 4737}
!53 = !{i64 4741}
!54 = !{i64 4743}
!55 = !{i64 4747}
!56 = !{i64 4749}
!57 = !{i64 4753}
!58 = !{i64 4755}
!59 = !{i64 4759}
!60 = !{i64 4773}
!61 = !{i64 4802}
!62 = !{i64 4803}
!63 = !{i64 4811}
!64 = !{i64 4814}
!65 = !{i64 4818}
!66 = !{i64 4827}
!67 = !{i64 4831}
!68 = !{i64 4840}
!69 = !{i64 4844}
!70 = !{i64 4853}
!71 = !{i64 4859}
!72 = !{i64 4860}
!73 = !{i64 4868}
!74 = !{i64 4871}
!75 = !{i64 4875}
!76 = !{i64 4884}
!77 = !{i64 4888}
!78 = !{i64 4897}
!79 = !{i64 4901}
!80 = !{i64 4910}
!81 = !{i64 4914}
!82 = !{i64 4923}
!83 = !{i64 4927}
!84 = !{i64 4936}
!85 = !{i64 4942}
!86 = !{i64 4943}
!87 = !{i64 4951}
!88 = !{i64 4968}
!89 = !{i64 4972}
!90 = !{i64 4978}
!91 = !{i64 4980}
!92 = !{i64 4984}
!93 = !{i64 5048}
!94 = !{i64 5057}
!95 = !{i64 5064}
!96 = !{i64 5084}
!97 = !{i64 5087}
!98 = !{i64 5096}
!99 = !{i64 5099}
!100 = !{i64 5178}
!101 = !{i64 5179}
!102 = !{i64 5187}
!103 = !{i64 5190}
!104 = !{i64 5194}
!105 = !{i64 5200}
!106 = !{i64 5243}
!107 = !{i64 5244}
!108 = !{i64 5252}
!109 = !{i64 5262}
!110 = !{i64 5266}
!111 = !{i64 5272}
!112 = !{i64 5291}
!113 = !{i64 5294}
!114 = !{i64 5300}
!115 = !{i64 5302}
!116 = !{i64 5308}
!117 = !{i64 5311}
!118 = !{i64 5324}
!119 = !{i64 5325}
!120 = !{i64 5365}
!121 = !{i64 5368}
!122 = !{i64 5374}
!123 = !{i64 5375}
!124 = !{i64 5431}
!125 = !{i64 5435}
!126 = !{i64 5398}
!127 = !{i64 5408}
!128 = !{i64 5412}
!129 = !{i64 5415}
!130 = !{i64 5422}
!131 = !{i64 5427}
!132 = !{i64 5451}
!133 = !{i64 5452}
!134 = !{i64 5460}
!135 = !{i64 5463}
!136 = !{i64 5483}
!137 = !{i64 5487}
!138 = !{i64 5490}
!139 = !{i64 5497}
!140 = !{i64 5499}
!141 = !{i64 5502}
!142 = !{i64 5506}
!143 = !{i64 5510}
!144 = !{i64 5512}
!145 = !{i64 5516}
!146 = !{i64 5517}
!147 = !{i64 5579}
!148 = !{i64 5582}
!149 = !{i64 5567}
!150 = !{i64 5588}
!151 = !{i64 5589}
!152 = !{i64 5594}
!153 = !{i64 5604}
!154 = !{i64 5675}
!155 = !{i64 5679}
!156 = !{i64 5673}
!157 = !{i64 5682}
!158 = !{i64 5684}
!159 = !{i64 5687}
!160 = !{i64 5689}
!161 = !{i64 5699}
!162 = !{i64 5710}
!163 = !{i64 5719}
!164 = !{i64 5721}
!165 = !{i64 5727}
!166 = !{i64 5728}
!167 = !{i64 5781}
!168 = !{i64 5784}
!169 = !{i64 5758}
!170 = !{i64 5761}
!171 = !{i64 5774}
!172 = !{i64 5790}
!173 = !{i64 5799}
!174 = !{i64 5806}
!175 = !{i64 5828}
!176 = !{i64 5832}
!177 = !{i64 5833}
!178 = !{i64 5841}
!179 = !{i64 5844}
!180 = !{i64 5848}
!181 = !{i64 5877}
!182 = !{i64 5882}
!183 = !{i64 5889}
!184 = !{i64 5900}
!185 = !{i64 5921}
!186 = !{i64 5923}
!187 = !{i64 5927}
!188 = !{i64 5946}
!189 = !{i64 5966}
!190 = !{i64 5971}
!191 = !{i64 5988}
!192 = !{i64 5998}
!193 = !{i64 6003}
!194 = !{i64 6020}
!195 = !{i64 6030}
!196 = !{i64 6035}
!197 = !{i64 6052}
!198 = !{i64 6062}
!199 = !{i64 6067}
!200 = !{i64 6084}
!201 = !{i64 6094}
!202 = !{i64 6099}
!203 = !{i64 6116}
!204 = !{i64 6131}
!205 = !{i64 6136}
!206 = !{i64 6153}
!207 = !{i64 6168}
!208 = !{i64 6173}
!209 = !{i64 6190}
!210 = !{i64 6205}
!211 = !{i64 6210}
!212 = !{i64 6227}
!213 = !{i64 6258}
!214 = !{i64 6263}
!215 = !{i64 6280}
!216 = !{i64 6290}
!217 = !{i64 6295}
!218 = !{i64 6312}
!219 = !{i64 6322}
!220 = !{i64 6327}
!221 = !{i64 6344}
!222 = !{i64 6354}
!223 = !{i64 6359}
!224 = !{i64 6376}
!225 = !{i64 6386}
!226 = !{i64 6391}
!227 = !{i64 6408}
!228 = !{i64 6418}
!229 = !{i64 6423}
!230 = !{i64 6440}
!231 = !{i64 6450}
!232 = !{i64 6455}
!233 = !{i64 6472}
!234 = !{i64 6482}
!235 = !{i64 6487}
!236 = !{i64 6504}
!237 = !{i64 6514}
!238 = !{i64 6519}
!239 = !{i64 6536}
!240 = !{i64 6546}
!241 = !{i64 6551}
!242 = !{i64 6568}
!243 = !{i64 6583}
!244 = !{i64 6588}
!245 = !{i64 6605}
!246 = !{i64 6615}
!247 = !{i64 6620}
!248 = !{i64 6637}
!249 = !{i64 6647}
!250 = !{i64 6652}
!251 = !{i64 6669}
!252 = !{i64 6679}
!253 = !{i64 6684}
!254 = !{i64 6701}
!255 = !{i64 6711}
!256 = !{i64 6716}
!257 = !{i64 6733}
!258 = !{i64 6743}
!259 = !{i64 6748}
!260 = !{i64 6765}
!261 = !{i64 6775}
!262 = !{i64 6780}
!263 = !{i64 6797}
!264 = !{i64 6812}
!265 = !{i64 6817}
!266 = !{i64 6834}
!267 = !{i64 6849}
!268 = !{i64 6854}
!269 = !{i64 6871}
!270 = !{i64 6878}
!271 = !{i64 6879}
!272 = !{i64 6884}
!273 = !{i64 6894}
!274 = !{i64 7029}
!275 = !{i64 7033}
!276 = !{i64 7014}
!277 = !{i64 7026}
!278 = !{i64 7036}
!279 = !{i64 7048}
!280 = !{i64 7055}
!281 = !{i64 7057}
!282 = !{i64 7059}
!283 = !{i64 7067}
!284 = !{i64 7069}
!285 = !{i64 7077}
!286 = !{i64 7020}
!287 = !{i64 7022}
!288 = !{i64 7088}
!289 = !{i64 7097}
!290 = !{i64 7099}
!291 = !{i64 7105}
!292 = !{i64 7106}
!293 = !{i64 7131}
!294 = !{i64 7118}
!295 = !{i64 7134}
!296 = !{i64 7136}
!297 = !{i64 7147}
!298 = !{i64 7153}
!299 = !{i64 7159}
!300 = !{i64 7166}
!301 = !{i64 7167}
!302 = !{i64 7175}
!303 = !{i64 7178}
!304 = !{i64 7182}
!305 = !{i64 7194}
!306 = !{i64 7203}
!307 = !{i64 7218}
!308 = !{i64 7220}
!309 = !{i64 7222}
!310 = !{i64 7225}
!311 = !{i64 7230}
!312 = !{i64 7234}
!313 = !{i64 7235}
!314 = !{i64 7243}
!315 = !{i64 7250}
!316 = !{i64 7255}
!317 = !{i64 7257}
!318 = !{i64 7259}
!319 = !{i64 7263}
!320 = !{i64 7268}
!321 = !{i64 7270}
!322 = !{i64 7278}
!323 = !{i64 7279}
!324 = !{i64 7295}
!325 = !{i64 7298}
!326 = !{i64 7302}
!327 = !{i64 7337}
!328 = !{i64 7346}
!329 = !{i64 7351}
!330 = !{i64 7357}
!331 = !{i64 7374}
!332 = !{i64 7377}
!333 = !{i64 7386}
!334 = !{i64 7389}
!335 = !{i64 7631}
!336 = !{i64 7635}
!337 = !{i64 7636}
!338 = !{i64 7684}
!339 = !{i64 7687}
!340 = !{i64 7669}
!341 = !{i64 7677}
!342 = !{i64 7693}
!343 = !{i64 7695}
!344 = !{i64 7699}
!345 = !{i64 7707}
!346 = !{i64 7712}
!347 = !{i64 7715}
!348 = !{i64 7716}
!349 = !{i64 7766}
!350 = !{i64 7769}
!351 = !{i64 7746}
!352 = !{i64 7753}
!353 = !{i64 7759}
!354 = !{i64 7775}
!355 = !{i64 7776}
!356 = !{i64 7813}
!357 = !{i64 7795}
!358 = !{i64 7797}
!359 = !{i64 7805}
!360 = !{i64 7815}
!361 = !{i64 7824}
!362 = !{i64 7825}
!363 = !{i64 7837}
!364 = !{i64 7844}
!365 = !{i64 7856}
!366 = !{i64 7859}
!367 = !{i64 7861}
!368 = !{i64 7866}
!369 = !{i64 7871}
!370 = !{i64 7872}
!371 = !{i64 7884}
!372 = !{i64 7887}
!373 = !{i64 7894}
!374 = !{i64 7896}
!375 = !{i64 7899}
!376 = !{i64 7904}
!377 = !{i64 7911}
!378 = !{i64 7914}
!379 = !{i64 7916}
!380 = !{i64 7918}
!381 = !{i64 7924}
!382 = !{i64 7925}
!383 = !{i64 7937}
!384 = !{i64 7940}
!385 = !{i64 7943}
!386 = !{i64 7947}
!387 = !{i64 7949}
!388 = !{i64 7952}
!389 = !{i64 7960}
!390 = !{i64 7962}
!391 = !{i64 7973}
!392 = !{i64 7978}
!393 = !{i64 7980}
!394 = !{i64 7982}
!395 = !{i64 7984}
!396 = !{i64 7986}
!397 = !{i64 7991}
!398 = !{i64 8006}
!399 = !{i64 8008}
!400 = !{i64 8011}
!401 = !{i64 8013}
!402 = !{i64 8015}
!403 = !{i64 8021}
!404 = !{i64 8022}
!405 = !{i64 8034}
!406 = !{i64 8037}
!407 = !{i64 8040}
!408 = !{i64 8044}
!409 = !{i64 8046}
!410 = !{i64 8049}
!411 = !{i64 8054}
!412 = !{i64 8060}
!413 = !{i64 8063}
!414 = !{i64 8065}
!415 = !{i64 8067}
!416 = !{i64 8073}
!417 = !{i64 8093}
!418 = !{i64 8105}
!419 = !{i64 8120}
!420 = !{i64 8123}
!421 = !{i64 8142}
!422 = !{i64 8145}
!423 = !{i64 8146}
!424 = !{i64 8158}
!425 = !{i64 8164}
!426 = !{i64 8252}
!427 = !{i64 8261}
!428 = !{i64 8263}
!429 = !{i64 8269}
!430 = !{i64 8288}
!431 = !{i64 8291}
!432 = !{i64 8292}
!433 = !{i64 8371}
!434 = !{i64 8374}
!435 = !{i64 8344}
!436 = !{i64 8336}
!437 = !{i64 8348}
!438 = !{i64 8351}
!439 = !{i64 8361}
!440 = !{i64 8380}
!441 = !{i64 8381}
!442 = !{i64 8393}
!443 = !{i64 8418}
!444 = !{i64 8428}
!445 = !{i64 8433}
!446 = !{i64 8450}
!447 = !{i64 8455}
!448 = !{i64 8469}
!449 = !{i64 8474}
!450 = !{i64 8491}
!451 = !{i64 8501}
!452 = !{i64 8506}
!453 = !{i64 8523}
!454 = !{i64 8533}
!455 = !{i64 8538}
!456 = !{i64 8555}
!457 = !{i64 8565}
!458 = !{i64 8570}
!459 = !{i64 8587}
!460 = !{i64 8597}
!461 = !{i64 8602}
!462 = !{i64 8619}
!463 = !{i64 8629}
!464 = !{i64 8634}
!465 = !{i64 8651}
!466 = !{i64 8656}
!467 = !{i64 8712}
!468 = !{i64 8763}
!469 = !{i64 8768}
!470 = !{i64 8785}
!471 = !{i64 8795}
!472 = !{i64 8800}
!473 = !{i64 8817}
!474 = !{i64 8827}
!475 = !{i64 8832}
!476 = !{i64 8849}
!477 = !{i64 8854}
!478 = !{i64 8868}
!479 = !{i64 8873}
!480 = !{i64 8890}
!481 = !{i64 8900}
!482 = !{i64 8905}
!483 = !{i64 8922}
!484 = !{i64 8937}
!485 = !{i64 8942}
!486 = !{i64 8959}
!487 = !{i64 8974}
!488 = !{i64 8979}
!489 = !{i64 8996}
!490 = !{i64 9016}
!491 = !{i64 9021}
!492 = !{i64 9038}
!493 = !{i64 9053}
!494 = !{i64 9058}
!495 = !{i64 9075}
!496 = !{i64 9090}
!497 = !{i64 9095}
!498 = !{i64 9112}
!499 = !{i64 9117}
!500 = !{i64 9171}
!501 = !{i64 9176}
!502 = !{i64 9193}
!503 = !{i64 9203}
!504 = !{i64 9212}
!505 = !{i64 9214}
!506 = !{i64 9220}
!507 = !{i64 9221}
!508 = !{i64 9246}
!509 = !{i64 9255}
!510 = !{i64 9257}
!511 = !{i64 9259}
!512 = !{i64 9263}
!513 = !{i64 9280}
!514 = !{i64 9289}
!515 = !{i64 9306}
!516 = !{i64 9314}
!517 = !{i64 9316}
!518 = !{i64 9324}
!519 = !{i64 9325}
!520 = !{i64 9333}
!521 = !{i64 9336}
!522 = !{i64 9340}
!523 = !{i64 9353}
!524 = !{i64 9365}
!525 = !{i64 9368}
!526 = !{i64 9389}
!527 = !{i64 9392}
!528 = !{i64 9410}
!529 = !{i64 9414}
!530 = !{i64 9432}
!531 = !{i64 9437}
!532 = !{i64 9438}
!533 = !{i64 9449}
!534 = !{i64 9452}
!535 = !{i64 9456}
!536 = !{i64 9446}
!537 = !{i64 9461}
!538 = !{i64 9462}
!539 = !{i64 9465}
!540 = !{i64 9473}
!541 = !{i64 9474}
!542 = !{i64 9485}
!543 = !{i64 9488}
!544 = !{i64 9492}
!545 = !{i64 9482}
!546 = !{i64 9497}
!547 = !{i64 9498}
!548 = !{i64 9501}
!549 = !{i64 9503}
!550 = !{i64 9511}
!551 = !{i64 9529}
!552 = !{i64 9533}
!553 = !{i64 9551}
!554 = !{i64 9555}
!555 = !{i64 9573}
!556 = !{i64 9577}
!557 = !{i64 9595}
!558 = !{i64 9600}
!559 = !{i64 9605}
!560 = !{i64 9623}
!561 = !{i64 9628}
!562 = !{i64 9633}
!563 = !{i64 9634}
!564 = !{i64 9646}
!565 = !{i64 9655}
!566 = !{i64 9825}
!567 = !{i64 9834}
!568 = !{i64 9836}
!569 = !{i64 9842}
!570 = !{i64 9922}
!571 = !{i64 9923}
!572 = !{i64 9931}
!573 = !{i64 9934}
!574 = !{i64 9937}
!575 = !{i64 9941}
!576 = !{i64 9947}
!577 = !{i64 9975}
!578 = !{i64 9993}
!579 = !{i64 9995}
!580 = !{i64 9999}
!581 = !{i64 10008}
!582 = !{i64 10012}
!583 = !{i64 10026}
!584 = !{i64 10035}
!585 = !{i64 10039}
!586 = !{i64 10053}
!587 = !{i64 10061}
!588 = !{i64 10070}
!589 = !{i64 10073}
!590 = !{i64 10080}
!591 = !{i64 10084}
!592 = !{i64 10085}
!593 = !{i64 10093}
!594 = !{i64 10096}
!595 = !{i64 10100}
!596 = !{i64 10109}
!597 = !{i64 10113}
!598 = !{i64 10122}
!599 = !{i64 10128}
!600 = !{i64 10146}
!601 = !{i64 10155}
!602 = !{i64 10158}
!603 = !{i64 10162}
!604 = !{i64 10177}
!605 = !{i64 10178}
!606 = !{i64 10193}
!607 = !{i64 10196}
!608 = !{i64 10295}
!609 = !{i64 10304}
!610 = !{i64 10306}
!611 = !{i64 10312}
!612 = !{i64 10313}
!613 = !{i64 10329}
!614 = !{i64 10332}
!615 = !{i64 10395}
!616 = !{i64 10469}
!617 = !{i64 10478}
!618 = !{i64 10318}
!619 = !{i64 10415}
!620 = !{i64 10421}
!621 = !{i64 10480}
!622 = !{i64 10486}
!623 = !{i64 10487}
!624 = !{i64 10501}
!625 = !{i64 10507}
!626 = !{i64 10513}
!627 = !{i64 10518}
!628 = !{i64 10523}
!629 = !{i64 10526}
!630 = !{i64 10529}
!631 = !{i64 10533}
!632 = !{i64 10561}
!633 = !{i64 10575}
!634 = !{i64 10576}
!635 = !{i64 10584}
!636 = !{i64 10593}
!637 = !{i64 10595}
!638 = !{i64 10604}
!639 = !{i64 10606}
!640 = !{i64 10609}
!641 = !{i64 10614}
!642 = !{i64 10619}
!643 = !{i64 10621}
!644 = !{i64 10624}
!645 = !{i64 10625}
!646 = !{i64 10637}
!647 = !{i64 10662}
!648 = !{i64 10672}
!649 = !{i64 10677}
!650 = !{i64 10694}
!651 = !{i64 10704}
!652 = !{i64 10709}
!653 = !{i64 10726}
!654 = !{i64 10736}
!655 = !{i64 10741}
!656 = !{i64 10758}
!657 = !{i64 10768}
!658 = !{i64 10773}
!659 = !{i64 10790}
!660 = !{i64 10810}
!661 = !{i64 10815}
!662 = !{i64 10832}
!663 = !{i64 10847}
!664 = !{i64 10852}
!665 = !{i64 10869}
!666 = !{i64 10884}
!667 = !{i64 10889}
!668 = !{i64 10906}
!669 = !{i64 10921}
!670 = !{i64 10926}
!671 = !{i64 10943}
!672 = !{i64 10948}
!673 = !{i64 10988}
!674 = !{i64 10993}
!675 = !{i64 11010}
!676 = !{i64 11020}
!677 = !{i64 11025}
!678 = !{i64 11042}
!679 = !{i64 11052}
!680 = !{i64 11057}
!681 = !{i64 11074}
!682 = !{i64 11084}
!683 = !{i64 11089}
!684 = !{i64 11106}
!685 = !{i64 11116}
!686 = !{i64 11125}
!687 = !{i64 11127}
!688 = !{i64 11133}
!689 = !{i64 11147}
!690 = !{i64 11157}
!691 = !{i64 11167}
!692 = !{i64 11178}
!693 = !{i64 11192}
